#include "cpu.h"
#include "neon_rt.h"
void f_200288(Cpu *c);
void f_212730(Cpu *c);
void f_23ca94(Cpu *c);
void f_25e438(Cpu *c);
void f_2daba4(Cpu *c);
void f_2dad24(Cpu *c);
void f_2e0d90(Cpu *c);
void f_2e7b74(Cpu *c);
void f_2e7ec0(Cpu *c);
void f_361ac8(Cpu *c);
void f_3645e0(Cpu *c);
void f_36623c(Cpu *c);
void f_3a6340(Cpu *c);
void f_3a79dc(Cpu *c);
void f_3a79f4(Cpu *c);
void f_3a7dc8(Cpu *c);
void f_3ced60(Cpu *c);
void f_3e4d0c(Cpu *c);
void f_3e522c(Cpu *c);
void f_3e5270(Cpu *c);
void f_3e5494(Cpu *c);
void f_3e5544(Cpu *c);
void f_3e560c(Cpu *c);
void f_3e61d4(Cpu *c);
void f_3e6288(Cpu *c);
void f_3e62c0(Cpu *c);
void f_3e6374(Cpu *c);
void f_3e6774(Cpu *c);
void f_3e67f8(Cpu *c);
void f_3e6840(Cpu *c);
void f_3e6a20(Cpu *c);
void f_3e6ab8(Cpu *c);
void f_3e6d4c(Cpu *c);
void f_3e7644(Cpu *c);
void f_3f76d4(Cpu *c);
void f_402640(Cpu *c);
void f_402764(Cpu *c);
void f_402a34(Cpu *c);
void f_403508(Cpu *c);
void f_4174e4(Cpu *c);
void f_4175d4(Cpu *c);
void f_41777c(Cpu *c);
void f_41b4ac(Cpu *c);
void f_41b908(Cpu *c);
void f_41e204(Cpu *c);
void f_41e284(Cpu *c);
void f_41e580(Cpu *c);
void f_41edb8(Cpu *c);
void f_41ee40(Cpu *c);
void f_41eeb0(Cpu *c);
void f_41f038(Cpu *c);
void f_41f190(Cpu *c);
void f_41f2b8(Cpu *c);
void f_41f368(Cpu *c);
void f_41f408(Cpu *c);
void f_41fae8(Cpu *c);
void f_421638(Cpu *c);
void f_421bd4(Cpu *c);
void f_421e4c(Cpu *c);
void f_422280(Cpu *c);
void f_422528(Cpu *c);
void f_425804(Cpu *c);
void f_4259ac(Cpu *c);
void f_425e58(Cpu *c);
void f_427a98(Cpu *c);
void f_427ae4(Cpu *c);
void f_427b10(Cpu *c);
void f_427b3c(Cpu *c);
void f_427ba8(Cpu *c);
void f_427be8(Cpu *c);
void f_427d68(Cpu *c);
void f_428020(Cpu *c);
void f_42c8d4(Cpu *c);
void f_42d374(Cpu *c);
void f_42d390(Cpu *c);
void f_42ef98(Cpu *c);
void f_42f0b8(Cpu *c);
void f_430968(Cpu *c);
void f_431460(Cpu *c);
void f_4317e8(Cpu *c);
void f_458ffc(Cpu *c);
void f_45957c(Cpu *c);
void f_4595e4(Cpu *c);
void f_45e378(Cpu *c);
void f_4613c0(Cpu *c);
void f_4613f4(Cpu *c);
void f_462838(Cpu *c);
void f_46e354(Cpu *c);
void f_46e43c(Cpu *c);
void f_46e50c(Cpu *c);
void f_46e600(Cpu *c);
void f_46e964(Cpu *c);
void f_46f3fc(Cpu *c);
void f_46fc24(Cpu *c);
void f_46fd98(Cpu *c);
void f_46fe44(Cpu *c);
void f_475a30(Cpu *c);
void f_476054(Cpu *c);
void f_476140(Cpu *c);
void f_47617c(Cpu *c);
void f_476748(Cpu *c);
void f_477224(Cpu *c);
void f_477454(Cpu *c);
void f_477a1c(Cpu *c);
void f_5a43cc(Cpu *c);
void f_5a4530(Cpu *c);
void f_5a5178(Cpu *c);
void f_5a57e0(Cpu *c);
void f_5a9490(Cpu *c);
void f_5a9bb8(Cpu *c);
void f_5abbec(Cpu *c);
void f_5ad71c(Cpu *c);
void f_5aea24(Cpu *c);
void f_5afa48(Cpu *c);
void f_5afa78(Cpu *c);
void f_5afd54(Cpu *c);
void f_5b0028(Cpu *c);
void f_5b4600(Cpu *c);
void f_5b4cd0(Cpu *c);
void f_5b4df4(Cpu *c);
void f_5b9868(Cpu *c);
void f_5bd294(Cpu *c);
void f_5bd4b8(Cpu *c);
void f_5bd604(Cpu *c);
void f_5be73c(Cpu *c);
void f_5bfec0(Cpu *c);
void f_5bfeec(Cpu *c);
void f_5c0208(Cpu *c);
void f_5c0714(Cpu *c);
void f_5c11a4(Cpu *c);
void f_5c3634(Cpu *c);
void f_5cebdc(Cpu *c);
void f_5cf21c(Cpu *c);
void f_5cf294(Cpu *c);
void f_5d8a4c(Cpu *c);
void f_5dd710(Cpu *c);
void f_5f8398(Cpu *c);
void f_5f8634(Cpu *c);
void f_5f8678(Cpu *c);
void f_5f86a0(Cpu *c);
void f_5f8d34(Cpu *c);
void f_67f2f8(Cpu *c);
void f_680af4(Cpu *c);
void f_68161c(Cpu *c);
void f_68cba4(Cpu *c);
void f_68d210(Cpu *c);
void f_696300(Cpu *c);
void f_700e9c(Cpu *c);
void f_7041ec(Cpu *c);
void f_708924(Cpu *c);
void f_708984(Cpu *c);
void f_715944(Cpu *c);
void f_74f260(Cpu *c);
void f_75415c(Cpu *c);
void f_754210(Cpu *c);
void f_7543d4(Cpu *c);
void f_75bac0(Cpu *c);
void f_75bc4c(Cpu *c);
void f_85e524(Cpu *c);
void f_877880(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af4d4(Cpu *c);
void f_9b1b24(Cpu *c);
void f_9b1b98(Cpu *c);
void f_9b1c0c(Cpu *c);
void f_9b1c84(Cpu *c);
void f_9b1cfc(Cpu *c);
void f_9b1d70(Cpu *c);
void f_9b1de4(Cpu *c);
void f_9b1e70(Cpu *c);
void f_9b1ee8(Cpu *c);
void f_9b1f5c(Cpu *c);
void f_9b1fd4(Cpu *c);
void f_9b204c(Cpu *c);
void f_9b20c4(Cpu *c);
void f_9b2138(Cpu *c);
void f_9b21ac(Cpu *c);
void f_9b2238(Cpu *c);
void f_9b22b0(Cpu *c);
void f_9b2328(Cpu *c);
void f_9b26ac(Cpu *c);
void f_9b716c(Cpu *c);
void f_9bb3ec(Cpu *c);
void f_9bb638(Cpu *c);
void f_9bb7b8(Cpu *c);
void f_9bb9e4(Cpu *c);
void f_9bba24(Cpu *c);
void f_9bd990(Cpu *c);
void f_9ca340(Cpu *c);
void f_9ca420(Cpu *c);
void f_a0c640(Cpu *c);
void f_a0c710(Cpu *c);
void f_a0d150(Cpu *c);
void f_a0dbbc(Cpu *c);
void f_a0e258(Cpu *c);
void f_a0e5e8(Cpu *c);
void f_a87810(Cpu *c);
void f_a8784c(Cpu *c);
void f_a878e4(Cpu *c);
void f_a878e8(Cpu *c);
void f_a89290(Cpu *c);
void f_bfba6c(Cpu *c);
void f_bfbf4c(Cpu *c);
void f_bfc268(Cpu *c);
void f_bfc2ac(Cpu *c);
void f_bfc394(Cpu *c);
void f_bfc3d8(Cpu *c);
void f_bfc42c(Cpu *c);
void f_d21388(Cpu *c);
void f_d213cc(Cpu *c);
void f_d21530(Cpu *c);
void f_d215b4(Cpu *c);
void f_d21638(Cpu *c);
void f_d216c0(Cpu *c);
void f_d219cc(Cpu *c);
void f_d21a04(Cpu *c);
void f_d21a1c(Cpu *c);
void f_d21a64(Cpu *c);
void f_d21aac(Cpu *c);
void f_d21af8(Cpu *c);
void f_da70f0(Cpu *c);
void f_da7294(Cpu *c);
void f_da74f4(Cpu *c);
void f_da7818(Cpu *c);
void f_da7d4c(Cpu *c);
void f_da84f0(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efe30(Cpu *c);
void f_15efe3c(Cpu *c);
void f_15eff2c(Cpu *c);
void f_15f004c(Cpu *c);
void f_15f0058(Cpu *c);
void f_15f0064(Cpu *c);
void f_15f0070(Cpu *c);
void f_415cd4(Cpu *restrict c) {
    FN_ENTER(0x415cd4u);
L_415cd4:;
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
    c->r[14] = 0x415d0cu; f_9bb638(c);
    c->r[1] = 0x134634fu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x415d24u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x415d84u; f_9bb638(c);
    c->r[1] = 0x13462e4u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x415d98u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9u;
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
    c->r[14] = 0x415dfcu; f_9bb638(c);
    c->r[1] = 0x1346277u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x415e10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[14] = 0x415e70u; f_9bb638(c);
    c->r[1] = 0x134620fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x415e84u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xbu;
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
    c->r[14] = 0x415ee8u; f_9bb638(c);
    c->r[1] = 0x13461a4u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x415efcu + c->r[1];
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
    c->r[14] = 0x415f5cu; f_9bb638(c);
    c->r[1] = 0x1346146u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x415f70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
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
    c->r[14] = 0x415fd4u; f_9bb638(c);
    c->r[1] = 0x13460e4u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x415fe8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
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
    c->r[14] = 0x416048u; f_9bb638(c);
    c->r[1] = 0x1346093u;
    c->r[1] = 0x416054u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x18u;
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
void f_4160bc(Cpu *restrict c) {
    FN_ENTER(0x4160bcu);
L_4160bc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1622c9cu;
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = 0x4160e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4160e4u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4161e0; }
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x4160f4u; f_bfba6c(c);
    c->r[1] = 0x1625980u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41610cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_416144; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_4161e0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x11u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13u; ST8(ea, c->r[5]); }
    goto L_4161c4;
L_416144:;
    c->r[0] = 0x1622a64u;
    { uint32_t ea = 0x416150u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x416154u; f_5f8398(c);
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x11u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1622bacu;
    { uint32_t ea = c->r[13] + 0x13u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[6]); }
    c->r[6] = 0x1a54u;
    { uint32_t ea = 0x41617cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x416184u; f_5afa78(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x416198u; f_5afa78(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x4161acu; f_5afa48(c);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x4161c0u; f_5afa48(c);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_4161c4:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1000u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4161e0u; f_bfc3d8(c);
L_4161e0:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4161f8(Cpu *restrict c) {
    FN_ENTER(0x4161f8u);
L_4161f8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x416230u; f_9bb638(c);
    c->r[1] = 0x1345ebeu;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416244u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x8u;
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
void f_41628c(Cpu *restrict c) {
    FN_ENTER(0x41628cu);
L_41628c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[6] = c->r[13] + 0x4u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x4162a8u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16257d8u;
    { uint32_t ea = 0x4162c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[4]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x4162e0u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4162ec(Cpu *restrict c) {
    FN_ENTER(0x4162ecu);
L_4162ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x416324u; f_9bb638(c);
    c->r[1] = 0x1345dceu;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0x41633cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
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
    c->r[14] = 0x41639cu; f_9bb638(c);
    c->r[1] = 0x1345d6au;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4163b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xau;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x416414u; f_9bb638(c);
    c->r[1] = 0x1345d09u;
    c->r[1] = 0x416420u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
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
void f_416474(Cpu *restrict c) {
    FN_ENTER(0x416474u);
L_416474:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x16228e4u;
    c->r[5] = c->r[3];
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x416498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41649cu; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4164f8; }
    c->r[8] = c->r[13] + 0x8u;
    c->r[0] = c->r[8];
    c->r[14] = 0x4164b0u; f_bfba6c(c);
    c->r[1] = 0x16255e0u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x4164ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x12u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST8(ea, c->r[6]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4164f8u; f_bfc3d8(c);
L_4164f8:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_416508(Cpu *restrict c) {
    FN_ENTER(0x416508u);
L_416508:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x416540u; f_9bb638(c);
    c->r[1] = 0x1345bddu;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0x416558u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xcu;
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
    c->r[14] = 0x4165b8u; f_9bb638(c);
    c->r[1] = 0x1345b79u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4165ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x416630u; f_9bb638(c);
    c->r[1] = 0x1345b11u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416644u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xdu;
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
    c->r[14] = 0x4166a4u; f_9bb638(c);
    c->r[1] = 0x1345ab0u;
    c->r[1] = 0x4166b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xeu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
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
void f_416708(Cpu *restrict c) {
    FN_ENTER(0x416708u);
L_416708:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1622650u;
    c->r[5] = c->r[3];
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x41672cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x416730u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41678c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = c->r[13] + 0x8u;
    c->r[0] = c->r[8];
    c->r[14] = 0x416748u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1625358u;
    { uint32_t ea = 0x416764u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x15u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x16u; ST16(ea, c->r[5]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41678cu; f_bfc3d8(c);
L_41678c:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_41679c(Cpu *restrict c) {
    FN_ENTER(0x41679cu);
L_41679c:;
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
    c->r[14] = 0x4167d4u; f_9bb638(c);
    c->r[1] = 0x134597eu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x4167ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x8u;
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
    c->r[14] = 0x41684cu; f_9bb638(c);
    c->r[1] = 0x1345918u;
    c->r[1] = 0x416858u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0xcu;
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
void f_4168a8(Cpu *restrict c) {
    FN_ENTER(0x4168a8u);
L_4168a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x16224b4u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x4168c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4168ccu; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41691c; }
    c->r[7] = c->r[13] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x4168e0u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x16251d0u;
    { uint32_t ea = 0x4168fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41691cu; f_bfc3d8(c);
L_41691c:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41692c(Cpu *restrict c) {
    FN_ENTER(0x41692cu);
L_41692c:;
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
    c->r[14] = 0x416964u; f_9bb638(c);
    c->r[1] = 0x13457fbu;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0x41697cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
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
    c->r[14] = 0x4169dcu; f_9bb638(c);
    c->r[1] = 0x133a33du;
    c->r[1] = 0x4169e8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x9u;
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
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_416a38(Cpu *restrict c) {
    FN_ENTER(0x416a38u);
L_416a38:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1622320u;
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = 0x416a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x416a60u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_416ab4; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x416a70u; f_bfba6c(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[13] + 0x4u;
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x162504cu;
    { uint32_t ea = 0x416a90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[6]); }
    if (COND_NE) { c->r[0] = 0x1040u; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[0] = 0x1000u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x416ab4u; f_bfc3d8(c);
L_416ab4:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_416ac4(Cpu *restrict c) {
    FN_ENTER(0x416ac4u);
L_416ac4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x16222a0u;
    { uint32_t ea = 0x416adcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x416ae0u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_416b30; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[14] = 0x416af4u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[5];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1624fdcu;
    { uint32_t ea = 0x416b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    c->r[0] = 0x1040u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x416b30u; f_bfc3d8(c);
L_416b30:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_416b40(Cpu *restrict c) {
    FN_ENTER(0x416b40u);
L_416b40:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x416b78u; f_9bb638(c);
    c->r[1] = 0x13455f5u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416b8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x8u;
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
void f_416bd4(Cpu *restrict c) {
    FN_ENTER(0x416bd4u);
L_416bd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x162218cu;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x416bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x416bf4u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_416c40; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x416c08u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1624ed8u;
    { uint32_t ea = 0x416c24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[5]); }
    c->r[0] = 0x1040u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x416c40u; f_bfc3d8(c);
L_416c40:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_416c50(Cpu *restrict c) {
    FN_ENTER(0x416c50u);
L_416c50:;
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
    c->r[14] = 0x416c88u; f_9bb638(c);
    c->r[1] = 0x13454eeu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x416ca0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x416d00u; f_9bb638(c);
    c->r[1] = 0x1342e00u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416d14u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
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
    c->r[14] = 0x416d78u; f_9bb638(c);
    c->r[1] = 0x1342f32u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416d8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
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
    c->r[14] = 0x416decu; f_9bb638(c);
    c->r[1] = 0x1345398u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416e00u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xeu;
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
    c->r[14] = 0x416e64u; f_9bb638(c);
    c->r[1] = 0x1342ca8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416e78u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x416ed8u; f_9bb638(c);
    c->r[1] = 0x1342c40u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416eecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x11u;
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
    c->r[14] = 0x416f50u; f_9bb638(c);
    c->r[1] = 0x1342bd7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416f64u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x12u;
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
    c->r[14] = 0x416fc4u; f_9bb638(c);
    c->r[1] = 0x1342b72u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x416fd8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x13u;
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
    c->r[14] = 0x41703cu; f_9bb638(c);
    c->r[1] = 0x1342b11u;
    c->r[1] = 0x417048u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
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
void f_4170b4(Cpu *restrict c) {
    FN_ENTER(0x4170b4u);
L_4170b4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1621ca8u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x4170d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4170d8u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_417130; }
    c->r[7] = c->r[13] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x4170ecu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[12] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1624a08u;
    { uint32_t ea = 0x417104u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[5]); }
    c->r[0] = 0x1000u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x417130u; f_bfc3d8(c);
L_417130:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_417140(Cpu *restrict c) {
    FN_ENTER(0x417140u);
L_417140:;
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
    c->r[14] = 0x417178u; f_9bb638(c);
    c->r[1] = 0x1339b95u;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0x417190u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
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
    c->r[14] = 0x4171f0u; f_9bb638(c);
    c->r[1] = 0x1344fabu;
    c->r[1] = 0x4171fcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x9u;
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
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_41724c(Cpu *restrict c) {
    FN_ENTER(0x41724cu);
L_41724c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1621b10u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x41726cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417270u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4172c0; }
    c->r[7] = c->r[13] + 0x4u;
    c->r[0] = c->r[7];
    c->r[14] = 0x417284u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x162487cu;
    { uint32_t ea = 0x4172a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[5]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4172c0u; f_bfc3d8(c);
L_4172c0:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4172d0(Cpu *restrict c) {
    FN_ENTER(0x4172d0u);
L_4172d0:;
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
    c->r[14] = 0x417308u; f_9bb638(c);
    c->r[1] = 0x1339a05u;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0x417320u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
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
    c->r[14] = 0x417380u; f_9bb638(c);
    c->r[1] = 0x1344e25u;
    c->r[1] = 0x41738cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x9u;
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
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_4173dc(Cpu *restrict c) {
    FN_ENTER(0x4173dcu);
L_4173dc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1621980u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x4173fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417400u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_417450; }
    c->r[7] = c->r[13] + 0x4u;
    c->r[0] = c->r[7];
    c->r[14] = 0x417414u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16246fcu;
    { uint32_t ea = 0x417430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[5]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x417450u; f_bfc3d8(c);
L_417450:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_417460(Cpu *restrict c) {
    FN_ENTER(0x417460u);
L_417460:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x16218fcu;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x417480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417484u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4174d4; }
    c->r[7] = c->r[13] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x417498u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1624688u;
    { uint32_t ea = 0x4174b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4174d4u; f_bfc3d8(c);
L_4174d4:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4174e4(Cpu *restrict c) {
    FN_ENTER(0x4174e4u);
L_4174e4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1621878u;
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = 0x417504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417508u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4175c0; }
    c->r[8] = c->r[13] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x41751cu; f_bfba6c(c);
    c->r[1] = 0x162461cu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x417530u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1621824u;
    { uint32_t ea = 0x417550u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417554u; f_5c0208(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[7]); }
    c->r[14] = 0x417568u; f_5bfec0(c);
    { uint32_t ea = c->r[13] + 0x14u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x417578u; f_5bfec0(c);
    { uint32_t ea = c->r[13] + 0x15u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[14] = 0x417588u; f_5bfec0(c);
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[14] = 0x417598u; f_5bfec0(c);
    { uint32_t ea = c->r[13] + 0x17u; ST8(ea, c->r[0]); }
    c->r[0] = 0x840u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[0] = 0x1040u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4175c0u; f_bfc3d8(c);
L_4175c0:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4175d4(Cpu *restrict c) {
    FN_ENTER(0x4175d4u);
L_4175d4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_4176b0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_417640; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4176b0; }
    c->r[0] = 0x1621770u;
    { uint32_t ea = 0x417604u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x41760cu; f_5bd294(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4176b0; }
    c->r[0] = 0x1621758u;
    c->r[1] = 0x63u;
    { uint32_t ea = 0x417624u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417628u; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4176b0; }
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_4174e4(c);
L_417640:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x162171cu;
    { uint32_t ea = 0x417658u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41765cu; f_5c0208(c);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_4176b0; }
    c->r[0] = 0x16216fcu;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = 0x417678u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41767cu; f_5bfeec(c);
    { uint32_t ea = c->r[4] + 0x11u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x41768cu; f_5bfeec(c);
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[14] = 0x41769cu; f_5bfeec(c);
    { uint32_t ea = c->r[4] + 0x13u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5bfeec(c);
L_4176b0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_4176c4(Cpu *restrict c) {
    FN_ENTER(0x4176c4u);
L_4176c4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1621698u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x4176e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4176e8u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_417764; }
    c->r[8] = c->r[13] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x4176fcu; f_bfba6c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x162444cu;
    { uint32_t ea = 0x417710u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x162164cu;
    { uint32_t ea = 0x417728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1621480u;
    { uint32_t ea = 0x417734u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417738u; f_5f8398(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x417748u; f_5bd4b8(c);
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x417764u; f_bfc2ac(c);
L_417764:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41777c(Cpu *restrict c) {
    FN_ENTER(0x41777cu);
L_41777c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_417884; }
    { uint32_t ea = c->r[1] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4177c4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_417884; }
    c->r[0] = 0x16215c0u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[2];
    { uint32_t ea = 0x4177b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_5bd604(c);
L_4177c4:;
    c->r[0] = 0x16215a8u;
    c->r[1] = 0x64u;
    { uint32_t ea = 0x4177d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4177d8u; f_427b3c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_417884; }
    c->r[0] = 0x1621584u;
    { uint32_t ea = 0x4177f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4177f4u; f_5b9868(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x1621578u;
    { uint32_t ea = 0x417804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417808u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_417884; }
    c->r[8] = c->r[13] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x41781cu; f_bfba6c(c);
    c->r[0] = 0x162432cu;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x417830u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0x162152cu;
    { uint32_t ea = 0x417848u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1621360u;
    { uint32_t ea = 0x417854u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417858u; f_5f8398(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x417868u; f_5bd4b8(c);
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x417884u; f_bfc2ac(c);
L_417884:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4178a8(Cpu *restrict c) {
    FN_ENTER(0x4178a8u);
L_4178a8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x4178e0u; f_9bb638(c);
    c->r[1] = 0x1344812u;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0x4178f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
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
    c->r[14] = 0x417958u; f_9bb638(c);
    c->r[1] = 0x13447aeu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41796cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xau;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x4179d0u; f_9bb638(c);
    c->r[1] = 0x134474du;
    c->r[1] = 0x4179dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
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
void f_417a30(Cpu *restrict c) {
    FN_ENTER(0x417a30u);
L_417a30:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1621328u;
    c->r[5] = c->r[3];
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x417a54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417a58u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_417ab4; }
    c->r[8] = c->r[13] + 0x8u;
    c->r[0] = c->r[8];
    c->r[14] = 0x417a6cu; f_bfba6c(c);
    c->r[1] = 0x16240e4u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x417a88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x12u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST8(ea, c->r[6]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x417ab4u; f_bfc3d8(c);
L_417ab4:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_417ac4(Cpu *restrict c) {
    FN_ENTER(0x417ac4u);
L_417ac4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x162129cu;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x417ae0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417ae4u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_417b3c; }
    c->r[6] = c->r[13] + 0x8u;
    c->r[0] = c->r[6];
    c->r[14] = 0x417af8u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1624068u;
    { uint32_t ea = 0x417b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x417b3cu; f_bfc3d8(c);
L_417b3c:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_417b4c(Cpu *restrict c) {
    FN_ENTER(0x417b4cu);
L_417b4c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1621210u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x417b6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417b70u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_417bc8; }
    c->r[7] = c->r[13] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x417b84u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623fdcu;
    { uint32_t ea = 0x417ba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST16(ea, c->r[5]); }
    c->r[0] = 0x1000u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x417bc8u; f_bfc3d8(c);
L_417bc8:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_417bd8(Cpu *restrict c) {
    FN_ENTER(0x417bd8u);
L_417bd8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417bdc(Cpu *restrict c) {
    FN_ENTER(0x417bdcu);
L_417bdc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623640u;
    { uint32_t ea = 0x417bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623e58u;
    { uint32_t ea = 0x417c00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417c00u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417c1c(Cpu *restrict c) {
    FN_ENTER(0x417c1cu);
L_417c1c:;
    c->r[0] = 0x1623e30u;
    { uint32_t ea = 0x417c28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417c2c(Cpu *restrict c) {
    FN_ENTER(0x417c2cu);
L_417c2c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417c30(Cpu *restrict c) {
    FN_ENTER(0x417c30u);
L_417c30:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417c34(Cpu *restrict c) {
    FN_ENTER(0x417c34u);
L_417c34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16235e8u;
    { uint32_t ea = 0x417c48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623e10u;
    { uint32_t ea = 0x417c58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417c58u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417c74(Cpu *restrict c) {
    FN_ENTER(0x417c74u);
L_417c74:;
    c->r[0] = 0x1623de8u;
    { uint32_t ea = 0x417c80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417c84(Cpu *restrict c) {
    FN_ENTER(0x417c84u);
L_417c84:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417c88(Cpu *restrict c) {
    FN_ENTER(0x417c88u);
L_417c88:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417c8c(Cpu *restrict c) {
    FN_ENTER(0x417c8cu);
L_417c8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623590u;
    { uint32_t ea = 0x417ca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623dc8u;
    { uint32_t ea = 0x417cb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417cb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417ccc(Cpu *restrict c) {
    FN_ENTER(0x417cccu);
L_417ccc:;
    c->r[0] = 0x1623da0u;
    { uint32_t ea = 0x417cd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417cdc(Cpu *restrict c) {
    FN_ENTER(0x417cdcu);
L_417cdc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417ce0(Cpu *restrict c) {
    FN_ENTER(0x417ce0u);
L_417ce0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417ce4(Cpu *restrict c) {
    FN_ENTER(0x417ce4u);
L_417ce4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623538u;
    { uint32_t ea = 0x417cf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623d80u;
    { uint32_t ea = 0x417d08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417d08u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417d24(Cpu *restrict c) {
    FN_ENTER(0x417d24u);
L_417d24:;
    c->r[0] = 0x1623d58u;
    { uint32_t ea = 0x417d30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417d34(Cpu *restrict c) {
    FN_ENTER(0x417d34u);
L_417d34:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417d38(Cpu *restrict c) {
    FN_ENTER(0x417d38u);
L_417d38:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417d3c(Cpu *restrict c) {
    FN_ENTER(0x417d3cu);
L_417d3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16234e0u;
    { uint32_t ea = 0x417d50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623d38u;
    { uint32_t ea = 0x417d60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417d60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417d7c(Cpu *restrict c) {
    FN_ENTER(0x417d7cu);
L_417d7c:;
    c->r[0] = 0x1623d10u;
    { uint32_t ea = 0x417d88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417d8c(Cpu *restrict c) {
    FN_ENTER(0x417d8cu);
L_417d8c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417d90(Cpu *restrict c) {
    FN_ENTER(0x417d90u);
L_417d90:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417d94(Cpu *restrict c) {
    FN_ENTER(0x417d94u);
L_417d94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623488u;
    { uint32_t ea = 0x417da8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623cf0u;
    { uint32_t ea = 0x417db8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417db8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417dd4(Cpu *restrict c) {
    FN_ENTER(0x417dd4u);
L_417dd4:;
    c->r[0] = 0x1623cc8u;
    { uint32_t ea = 0x417de0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417de4(Cpu *restrict c) {
    FN_ENTER(0x417de4u);
L_417de4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417de8(Cpu *restrict c) {
    FN_ENTER(0x417de8u);
L_417de8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417dec(Cpu *restrict c) {
    FN_ENTER(0x417decu);
L_417dec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623430u;
    { uint32_t ea = 0x417e00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623ca8u;
    { uint32_t ea = 0x417e10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417e10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417e2c(Cpu *restrict c) {
    FN_ENTER(0x417e2cu);
L_417e2c:;
    c->r[0] = 0x1623c80u;
    { uint32_t ea = 0x417e38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417e3c(Cpu *restrict c) {
    FN_ENTER(0x417e3cu);
L_417e3c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417e40(Cpu *restrict c) {
    FN_ENTER(0x417e40u);
L_417e40:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417e44(Cpu *restrict c) {
    FN_ENTER(0x417e44u);
L_417e44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16233d8u;
    { uint32_t ea = 0x417e58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623c60u;
    { uint32_t ea = 0x417e68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417e68u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417e84(Cpu *restrict c) {
    FN_ENTER(0x417e84u);
L_417e84:;
    c->r[0] = 0x1623c38u;
    { uint32_t ea = 0x417e90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417e94(Cpu *restrict c) {
    FN_ENTER(0x417e94u);
L_417e94:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417e98(Cpu *restrict c) {
    FN_ENTER(0x417e98u);
L_417e98:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417e9c(Cpu *restrict c) {
    FN_ENTER(0x417e9cu);
L_417e9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623380u;
    { uint32_t ea = 0x417eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623c18u;
    { uint32_t ea = 0x417ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417ec0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417edc(Cpu *restrict c) {
    FN_ENTER(0x417edcu);
L_417edc:;
    c->r[0] = 0x1623bf0u;
    { uint32_t ea = 0x417ee8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417eec(Cpu *restrict c) {
    FN_ENTER(0x417eecu);
L_417eec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417ef0(Cpu *restrict c) {
    FN_ENTER(0x417ef0u);
L_417ef0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417ef4(Cpu *restrict c) {
    FN_ENTER(0x417ef4u);
L_417ef4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417ef8(Cpu *restrict c) {
    FN_ENTER(0x417ef8u);
L_417ef8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417efc(Cpu *restrict c) {
    FN_ENTER(0x417efcu);
L_417efc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623320u;
    { uint32_t ea = 0x417f10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623bd8u;
    { uint32_t ea = 0x417f20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417f20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417f3c(Cpu *restrict c) {
    FN_ENTER(0x417f3cu);
L_417f3c:;
    c->r[0] = 0x1623bb0u;
    { uint32_t ea = 0x417f48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417f4c(Cpu *restrict c) {
    FN_ENTER(0x417f4cu);
L_417f4c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417f50(Cpu *restrict c) {
    FN_ENTER(0x417f50u);
L_417f50:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417f54(Cpu *restrict c) {
    FN_ENTER(0x417f54u);
L_417f54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16232c8u;
    { uint32_t ea = 0x417f68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623b90u;
    { uint32_t ea = 0x417f78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417f78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417f94(Cpu *restrict c) {
    FN_ENTER(0x417f94u);
L_417f94:;
    c->r[0] = 0x1623b68u;
    { uint32_t ea = 0x417fa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417fa4(Cpu *restrict c) {
    FN_ENTER(0x417fa4u);
L_417fa4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417fa8(Cpu *restrict c) {
    FN_ENTER(0x417fa8u);
L_417fa8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_417fac(Cpu *restrict c) {
    FN_ENTER(0x417facu);
L_417fac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623270u;
    { uint32_t ea = 0x417fc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623b48u;
    { uint32_t ea = 0x417fd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x417fd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_417fec(Cpu *restrict c) {
    FN_ENTER(0x417fecu);
L_417fec:;
    c->r[0] = 0x1623b20u;
    { uint32_t ea = 0x417ff8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_417ffc(Cpu *restrict c) {
    FN_ENTER(0x417ffcu);
L_417ffc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418000(Cpu *restrict c) {
    FN_ENTER(0x418000u);
L_418000:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418004(Cpu *restrict c) {
    FN_ENTER(0x418004u);
L_418004:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623218u;
    { uint32_t ea = 0x418018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623b00u;
    { uint32_t ea = 0x418028u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418028u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418044(Cpu *restrict c) {
    FN_ENTER(0x418044u);
L_418044:;
    c->r[0] = 0x1623ad8u;
    { uint32_t ea = 0x418050u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_418054(Cpu *restrict c) {
    FN_ENTER(0x418054u);
L_418054:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418058(Cpu *restrict c) {
    FN_ENTER(0x418058u);
L_418058:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41805c(Cpu *restrict c) {
    FN_ENTER(0x41805cu);
L_41805c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418060(Cpu *restrict c) {
    FN_ENTER(0x418060u);
L_418060:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418064(Cpu *restrict c) {
    FN_ENTER(0x418064u);
L_418064:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418068(Cpu *restrict c) {
    FN_ENTER(0x418068u);
L_418068:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41806c(Cpu *restrict c) {
    FN_ENTER(0x41806cu);
L_41806c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418070(Cpu *restrict c) {
    FN_ENTER(0x418070u);
L_418070:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_418074(Cpu *restrict c) {
    FN_ENTER(0x418074u);
L_418074:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16231a8u;
    { uint32_t ea = 0x418088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623ad0u;
    { uint32_t ea = 0x418098u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418098u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4180b4(Cpu *restrict c) {
    FN_ENTER(0x4180b4u);
L_4180b4:;
    c->r[0] = 0x1623aa8u;
    { uint32_t ea = 0x4180c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4180c4(Cpu *restrict c) {
    FN_ENTER(0x4180c4u);
L_4180c4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_4180c8(Cpu *restrict c) {
    FN_ENTER(0x4180c8u);
L_4180c8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_4180cc(Cpu *restrict c) {
    FN_ENTER(0x4180ccu);
L_4180cc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_4180d0(Cpu *restrict c) {
    FN_ENTER(0x4180d0u);
L_4180d0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x162314cu;
    { uint32_t ea = 0x4180e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16239f4u;
    { uint32_t ea = 0x4180f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4180f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418110(Cpu *restrict c) {
    FN_ENTER(0x418110u);
L_418110:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x418148u; f_9bb638(c);
    c->r[1] = 0x134405eu;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41815cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x8u;
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
void f_4181a4(Cpu *restrict c) {
    FN_ENTER(0x4181a4u);
L_4181a4:;
    c->r[0] = 0x1623938u;
    { uint32_t ea = 0x4181b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4181b4(Cpu *restrict c) {
    FN_ENTER(0x4181b4u);
L_4181b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1623068u;
    { uint32_t ea = 0x4181c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623960u;
    { uint32_t ea = 0x4181d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4181d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4181f4(Cpu *restrict c) {
    FN_ENTER(0x4181f4u);
L_4181f4:;
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
    c->r[14] = 0x41822cu; f_9bb638(c);
    c->r[1] = 0x1343c8eu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x418244u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x8u;
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
    c->r[14] = 0x4182a4u; f_9bb638(c);
    c->r[1] = 0x1343f13u;
    c->r[1] = 0x4182b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0xcu;
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
void f_418300(Cpu *restrict c) {
    FN_ENTER(0x418300u);
L_418300:;
    c->r[0] = 0x162382cu;
    { uint32_t ea = 0x41830cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_418310(Cpu *restrict c) {
    FN_ENTER(0x418310u);
L_418310:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1622f0cu;
    { uint32_t ea = 0x418324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623814u;
    { uint32_t ea = 0x418334u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418334u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418350(Cpu *restrict c) {
    FN_ENTER(0x418350u);
L_418350:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[10] = c->r[1];
    c->r[11] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x418388u; f_9bb638(c);
    c->r[1] = 0x1338985u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[9] = c->r[10];
    c->r[1] = 0x4183a0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x418404u; f_9bb638(c);
    c->r[1] = 0x1343db1u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x418418u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x418480u; f_9bb638(c);
    c->r[1] = 0x1343d42u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x418490u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = c->r[1];
    c->r[2] = c->r[14];
    c->r[9] = c->r[14] | 0x4u;
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4184e0; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_4184e0:;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x418508u; f_9bb638(c);
    c->r[1] = 0x1343cb6u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41851cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x11u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_41855c; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_41855c:;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[8] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x418588u; f_9bb638(c);
    c->r[1] = 0x1343c36u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41859cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x12u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4185dc; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_4185dc:;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x418604u; f_9bb638(c);
    c->r[1] = 0x1343bc2u;
    c->r[1] = 0x418610u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x13u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_418678(Cpu *restrict c) {
    FN_ENTER(0x418678u);
L_418678:;
    c->r[0] = 0x16234c4u;
    { uint32_t ea = 0x418684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_418688(Cpu *restrict c) {
    FN_ENTER(0x418688u);
L_418688:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1622b94u;
    { uint32_t ea = 0x41869cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16234acu;
    { uint32_t ea = 0x4186acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4186acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4186c8(Cpu *restrict c) {
    FN_ENTER(0x4186c8u);
L_4186c8:;
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
    c->r[14] = 0x418700u; f_9bb638(c);
    c->r[1] = 0x1343ac8u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x418718u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x8u;
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
    c->r[14] = 0x418778u; f_9bb638(c);
    c->r[1] = 0x13385a1u;
    c->r[1] = 0x418784u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x9u;
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
void f_4187d4(Cpu *restrict c) {
    FN_ENTER(0x4187d4u);
L_4187d4:;
    c->r[0] = 0x1623378u;
    { uint32_t ea = 0x4187e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4187e4(Cpu *restrict c) {
    FN_ENTER(0x4187e4u);
L_4187e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1622a38u;
    { uint32_t ea = 0x4187f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1623370u;
    { uint32_t ea = 0x418808u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418808u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418824(Cpu *restrict c) {
    FN_ENTER(0x418824u);
L_418824:;
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
    c->r[14] = 0x41885cu; f_9bb638(c);
    c->r[1] = 0x1343977u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x418874u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x4188d4u; f_9bb638(c);
    c->r[1] = 0x134390au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4188e8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[14] = 0x41894cu; f_9bb638(c);
    c->r[1] = 0x134389fu;
    c->r[1] = 0x418958u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
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
void f_4189ac(Cpu *restrict c) {
    FN_ENTER(0x4189acu);
L_4189ac:;
    c->r[0] = 0x16231c0u;
    { uint32_t ea = 0x4189b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4189bc(Cpu *restrict c) {
    FN_ENTER(0x4189bcu);
L_4189bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1622864u;
    { uint32_t ea = 0x4189d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4189dcu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x4189e4u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418a30; }
L_4189f0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4189f0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_418a28; }
    c->r[0] = 0x162016cu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x418a1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x418a28u; rt_dispatch(c);
L_418a28:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_418a30:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x418a3cu; f_3e7644(c);
    c->r[0] = 0x1623018u;
    { uint32_t ea = 0x418a48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418a48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418a68(Cpu *restrict c) {
    FN_ENTER(0x418a68u);
L_418a68:;
    c->r[0] = 0x1622fecu;
    { uint32_t ea = 0x418a74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_418a78(Cpu *restrict c) {
    FN_ENTER(0x418a78u);
L_418a78:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_418af4; }
    c->r[0] = 0x1622fb8u;
    { uint32_t ea = 0x418aa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x418ab0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_418af4; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_418b10; }
    c->r[0] = 0x16202a4u;
    { uint32_t ea = 0x418ad0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418ad4u; f_5c0714(c);
    c->r[0] = 0x1620240u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = 0x418ae8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418aecu; f_5ad71c(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418af4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x418b08u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418b18; }
L_418b10:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418b18:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418b44(Cpu *restrict c) {
    FN_ENTER(0x418b44u);
L_418b44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16226dcu;
    { uint32_t ea = 0x418b58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x418b64u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x418b6cu; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418bb8; }
L_418b78:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_418b78; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_418bb0; }
    c->r[0] = 0x161ffe4u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x418ba4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x418bb0u; rt_dispatch(c);
L_418bb0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_418bb8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x418bc4u; f_3e7644(c);
    c->r[0] = 0x1622ea0u;
    { uint32_t ea = 0x418bd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418bd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418bf0(Cpu *restrict c) {
    FN_ENTER(0x418bf0u);
L_418bf0:;
    c->r[0] = 0x1622e74u;
    { uint32_t ea = 0x418bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_418c00(Cpu *restrict c) {
    FN_ENTER(0x418c00u);
L_418c00:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_418c68; }
    c->r[0] = 0x1622e40u;
    { uint32_t ea = 0x418c28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x418c38u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_418c68; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_418c84; }
    c->r[0] = 0x16200ccu;
    c->r[1] = c->r[4] + 0x8u;
    { uint32_t ea = 0x418c5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418c60u; f_5a9490(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418c68:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x418c7cu; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418c8c; }
L_418c84:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418c8c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418cb4(Cpu *restrict c) {
    FN_ENTER(0x418cb4u);
L_418cb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x162256cu;
    { uint32_t ea = 0x418cc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x418cd4u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x418cdcu; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418d28; }
L_418ce8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_418ce8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_418d20; }
    c->r[0] = 0x161fe74u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x418d14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x418d20u; rt_dispatch(c);
L_418d20:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_418d28:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x418d34u; f_3e7644(c);
    c->r[0] = 0x1622d40u;
    { uint32_t ea = 0x418d40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418d40u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418d60(Cpu *restrict c) {
    FN_ENTER(0x418d60u);
L_418d60:;
    c->r[0] = 0x1622d14u;
    { uint32_t ea = 0x418d6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_418d70(Cpu *restrict c) {
    FN_ENTER(0x418d70u);
L_418d70:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_418ddc; }
    c->r[0] = 0x1622ce0u;
    { uint32_t ea = 0x418d98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x418da8u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_418ddc; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_418df8; }
    c->r[0] = 0x161ff58u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = 0x418dd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418dd4u; f_5a9bb8(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418ddc:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x418df0u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418e00; }
L_418df8:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418e00:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418e28(Cpu *restrict c) {
    FN_ENTER(0x418e28u);
L_418e28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16223f8u;
    { uint32_t ea = 0x418e3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x418e48u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x418e50u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418e9c; }
L_418e5c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_418e5c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_418e94; }
    c->r[0] = 0x161fd00u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x418e88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x418e94u; rt_dispatch(c);
L_418e94:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_418e9c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x418ea8u; f_3e7644(c);
    c->r[0] = 0x1622bdcu;
    { uint32_t ea = 0x418eb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x418eb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418ed4(Cpu *restrict c) {
    FN_ENTER(0x418ed4u);
L_418ed4:;
    c->r[0] = 0x1622bb0u;
    { uint32_t ea = 0x418ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_418ee4(Cpu *restrict c) {
    FN_ENTER(0x418ee4u);
L_418ee4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_418f54; }
    c->r[0] = 0x1622b7cu;
    { uint32_t ea = 0x418f0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x418f1cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_418f54; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_418f70; }
    c->r[0] = 0x161fde8u;
    c->r[1] = 0x1a54u;
    { uint32_t ea = 0x418f40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[4] + 0x8u;
    c->r[14] = 0x418f4cu; f_5afd54(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418f54:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x418f68u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_418f78; }
L_418f70:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_418f78:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_418fa0(Cpu *restrict c) {
    FN_ENTER(0x418fa0u);
L_418fa0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1622280u;
    { uint32_t ea = 0x418fb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x418fc0u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x418fc8u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419014; }
L_418fd4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_418fd4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41900c; }
    c->r[0] = 0x161fb88u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x419000u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41900cu; rt_dispatch(c);
L_41900c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_419014:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419020u; f_3e7644(c);
    c->r[0] = 0x1622a74u;
    { uint32_t ea = 0x41902cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41902cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41904c(Cpu *restrict c) {
    FN_ENTER(0x41904cu);
L_41904c:;
    c->r[0] = 0x1622a48u;
    { uint32_t ea = 0x419058u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41905c(Cpu *restrict c) {
    FN_ENTER(0x41905cu);
L_41905c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_4190cc; }
    c->r[0] = 0x1622a14u;
    { uint32_t ea = 0x419084u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x419094u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_4190cc; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_4190e8; }
    c->r[0] = 0x161fc70u;
    c->r[1] = 0x1a54u;
    { uint32_t ea = 0x4190b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x4190c4u; f_5b0028(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4190cc:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x4190e0u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4190f0; }
L_4190e8:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4190f0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419118(Cpu *restrict c) {
    FN_ENTER(0x419118u);
L_419118:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1622108u;
    { uint32_t ea = 0x41912cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x419138u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419140u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41918c; }
L_41914c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41914c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419184; }
    c->r[0] = 0x161fa10u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x419178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419184u; rt_dispatch(c);
L_419184:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41918c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419198u; f_3e7644(c);
    c->r[0] = 0x162290cu;
    { uint32_t ea = 0x4191a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4191a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4191c4(Cpu *restrict c) {
    FN_ENTER(0x4191c4u);
L_4191c4:;
    c->r[0] = 0x16228e0u;
    { uint32_t ea = 0x4191d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4191d4(Cpu *restrict c) {
    FN_ENTER(0x4191d4u);
L_4191d4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41924c; }
    c->r[0] = 0x16228acu;
    { uint32_t ea = 0x4191fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x41920cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41924c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_419268; }
    c->r[0] = 0x161faf0u;
    c->r[1] = 0x1778u;
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = 0x419238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x419244u; f_5b4600(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41924c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x419260u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419270; }
L_419268:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419270:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419298(Cpu *restrict c) {
    FN_ENTER(0x419298u);
L_419298:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1621f88u;
    { uint32_t ea = 0x4192acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4192b8u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x4192c0u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41930c; }
L_4192cc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4192cc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419304; }
    c->r[0] = 0x161f890u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x4192f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419304u; rt_dispatch(c);
L_419304:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41930c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419318u; f_3e7644(c);
    c->r[0] = 0x162279cu;
    { uint32_t ea = 0x419324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419324u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419344(Cpu *restrict c) {
    FN_ENTER(0x419344u);
L_419344:;
    c->r[0] = 0x1622770u;
    { uint32_t ea = 0x419350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_419354(Cpu *restrict c) {
    FN_ENTER(0x419354u);
L_419354:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_4193c0; }
    c->r[0] = 0x162273cu;
    { uint32_t ea = 0x41937cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x41938cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_4193c0; }
    c->r[0] = 0x161f97cu;
    c->r[1] = 0x1778u;
    c->r[2] = c->r[4];
    { uint32_t ea = 0x4193acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[5] + 0x8u;
    c->r[14] = 0x4193b8u; f_5b4df4(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4193c0:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x4193d4u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4193e4; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4193e4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41940c(Cpu *restrict c) {
    FN_ENTER(0x41940cu);
L_41940c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1621e14u;
    { uint32_t ea = 0x419420u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41942cu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419434u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419480; }
L_419440:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_419440; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419478; }
    c->r[0] = 0x161f71cu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41946cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419478u; rt_dispatch(c);
L_419478:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_419480:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41948cu; f_3e7644(c);
    c->r[0] = 0x1622638u;
    { uint32_t ea = 0x419498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419498u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4194b8(Cpu *restrict c) {
    FN_ENTER(0x4194b8u);
L_4194b8:;
    c->r[0] = 0x162260cu;
    { uint32_t ea = 0x4194c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4194c8(Cpu *restrict c) {
    FN_ENTER(0x4194c8u);
L_4194c8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41953c; }
    c->r[0] = 0x16225d8u;
    { uint32_t ea = 0x4194f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x419500u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41953c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_419558; }
    c->r[0] = 0x161f800u;
    c->r[1] = 0x1778u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x419528u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x419534u; f_5b4cd0(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41953c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x419550u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419560; }
L_419558:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419560:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419588(Cpu *restrict c) {
    FN_ENTER(0x419588u);
L_419588:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1621c98u;
    { uint32_t ea = 0x41959cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4195a8u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x4195b0u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4195fc; }
L_4195bc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4195bc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4195f4; }
    c->r[0] = 0x161f5a0u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x4195e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4195f4u; rt_dispatch(c);
L_4195f4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_4195fc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419608u; f_3e7644(c);
    c->r[0] = 0x16224ccu;
    { uint32_t ea = 0x419614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419614u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419634(Cpu *restrict c) {
    FN_ENTER(0x419634u);
L_419634:;
    c->r[0] = 0x16224a0u;
    { uint32_t ea = 0x419640u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_419644(Cpu *restrict c) {
    FN_ENTER(0x419644u);
L_419644:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_4196b0; }
    c->r[0] = 0x162246cu;
    { uint32_t ea = 0x41966cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x41967cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_4196b0; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_4196cc; }
    c->r[0] = 0x161f6d0u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = 0x4196a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4196a8u; f_5c11a4(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4196b0:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x4196c4u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4196d4; }
L_4196cc:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4196d4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4196fc(Cpu *restrict c) {
    FN_ENTER(0x4196fcu);
L_4196fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1621b24u;
    { uint32_t ea = 0x419710u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41971cu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419724u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419770; }
L_419730:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_419730; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419768; }
    c->r[0] = 0x161f42cu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41975cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419768u; rt_dispatch(c);
L_419768:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_419770:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41977cu; f_3e7644(c);
    c->r[0] = 0x1622368u;
    { uint32_t ea = 0x419788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419788u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4197a8(Cpu *restrict c) {
    FN_ENTER(0x4197a8u);
L_4197a8:;
    c->r[0] = 0x162233cu;
    { uint32_t ea = 0x4197b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4197b8(Cpu *restrict c) {
    FN_ENTER(0x4197b8u);
L_4197b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_419830; }
    c->r[0] = 0x1622308u;
    { uint32_t ea = 0x4197e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x4197f0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_419830; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_41984c; }
    c->r[0] = 0x161f510u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x166fu;
    { uint32_t ea = 0x419818u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419830:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x419844u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419854; }
L_41984c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419854:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41987c(Cpu *restrict c) {
    FN_ENTER(0x41987cu);
L_41987c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16219a4u;
    { uint32_t ea = 0x419890u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41989cu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x4198a4u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4198f0; }
L_4198b0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4198b0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4198e8; }
    c->r[0] = 0x161f2acu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x4198dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4198e8u; rt_dispatch(c);
L_4198e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_4198f0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x4198fcu; f_3e7644(c);
    c->r[0] = 0x16221f8u;
    { uint32_t ea = 0x419908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419908u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419928(Cpu *restrict c) {
    FN_ENTER(0x419928u);
L_419928:;
    c->r[0] = 0x16221ccu;
    { uint32_t ea = 0x419934u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_419938(Cpu *restrict c) {
    FN_ENTER(0x419938u);
L_419938:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_4199a0; }
    c->r[0] = 0x1622198u;
    { uint32_t ea = 0x419960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x419970u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_4199a0; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_4199bc; }
    c->r[0] = 0x161f394u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x419994u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419998u; f_5abbec(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4199a0:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x4199b4u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4199c4; }
L_4199bc:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4199c4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4199ec(Cpu *restrict c) {
    FN_ENTER(0x4199ecu);
L_4199ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1621834u;
    { uint32_t ea = 0x419a00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x419a0cu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419a14u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419a60; }
L_419a20:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_419a20; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419a58; }
    c->r[0] = 0x161f13cu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x419a4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419a58u; rt_dispatch(c);
L_419a58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_419a60:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419a6cu; f_3e7644(c);
    c->r[0] = 0x1622098u;
    { uint32_t ea = 0x419a78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419a78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419a98(Cpu *restrict c) {
    FN_ENTER(0x419a98u);
L_419a98:;
    c->r[0] = 0x162206cu;
    { uint32_t ea = 0x419aa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_419aa8(Cpu *restrict c) {
    FN_ENTER(0x419aa8u);
L_419aa8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_419b14; }
    c->r[0] = 0x1622038u;
    { uint32_t ea = 0x419ad0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x419ae0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_419b14; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_419b30; }
    c->r[0] = 0x161f220u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0x8u;
    { uint32_t ea = 0x419b08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419b0cu; f_5a43cc(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419b14:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x419b28u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419b38; }
L_419b30:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419b38:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419b60(Cpu *restrict c) {
    FN_ENTER(0x419b60u);
L_419b60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16216c0u;
    { uint32_t ea = 0x419b74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x419b80u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419b88u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419bd4; }
L_419b94:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_419b94; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419bcc; }
    c->r[0] = 0x161efc8u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x419bc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419bccu; rt_dispatch(c);
L_419bcc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_419bd4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419be0u; f_3e7644(c);
    c->r[0] = 0x1621f34u;
    { uint32_t ea = 0x419becu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419becu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419c0c(Cpu *restrict c) {
    FN_ENTER(0x419c0cu);
L_419c0c:;
    c->r[0] = 0x1621f08u;
    { uint32_t ea = 0x419c18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_419c1c(Cpu *restrict c) {
    FN_ENTER(0x419c1cu);
L_419c1c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_419c8c; }
    c->r[0] = 0x1621ed4u;
    { uint32_t ea = 0x419c44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x419c54u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_419c8c; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_419ca8; }
    c->r[0] = 0x161f0f4u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    { uint32_t ea = 0x419c80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419c84u; f_5c3634(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419c8c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x419ca0u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419cb0; }
L_419ca8:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419cb0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419cd8(Cpu *restrict c) {
    FN_ENTER(0x419cd8u);
L_419cd8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1621548u;
    { uint32_t ea = 0x419cecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x419cf8u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419d00u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419d4c; }
L_419d0c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_419d0c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419d44; }
    c->r[0] = 0x161ee50u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x419d38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419d44u; rt_dispatch(c);
L_419d44:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_419d4c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419d58u; f_3e7644(c);
    c->r[0] = 0x1621dccu;
    { uint32_t ea = 0x419d64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419d64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419d84(Cpu *restrict c) {
    FN_ENTER(0x419d84u);
L_419d84:;
    c->r[0] = 0x1621da0u;
    { uint32_t ea = 0x419d90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_419d94(Cpu *restrict c) {
    FN_ENTER(0x419d94u);
L_419d94:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_419e04; }
    c->r[0] = 0x1621d6cu;
    { uint32_t ea = 0x419dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x419dccu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_419e04; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_419e20; }
    c->r[0] = 0x161ef30u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    { uint32_t ea = 0x419df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419dfcu; f_5a4530(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419e04:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x419e18u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419e28; }
L_419e20:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419e28:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419e50(Cpu *restrict c) {
    FN_ENTER(0x419e50u);
L_419e50:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16213d0u;
    { uint32_t ea = 0x419e64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x419e70u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419e78u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419ec4; }
L_419e84:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_419e84; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_419ebc; }
    c->r[0] = 0x161ecd8u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x419eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x419ebcu; rt_dispatch(c);
L_419ebc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_419ec4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x419ed0u; f_3e7644(c);
    c->r[0] = 0x1621c64u;
    { uint32_t ea = 0x419edcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419edcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419efc(Cpu *restrict c) {
    FN_ENTER(0x419efcu);
L_419efc:;
    c->r[0] = 0x1621c38u;
    { uint32_t ea = 0x419f08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_419f0c(Cpu *restrict c) {
    FN_ENTER(0x419f0cu);
L_419f0c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_419f7c; }
    c->r[0] = 0x1621c04u;
    { uint32_t ea = 0x419f34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x419f44u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_419f7c; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_419f98; }
    c->r[0] = 0x161edb8u;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    { uint32_t ea = 0x419f70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x419f74u; f_5a57e0(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419f7c:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x419f90u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_419fa0; }
L_419f98:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_419fa0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_419fc8(Cpu *restrict c) {
    FN_ENTER(0x419fc8u);
L_419fc8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1621258u;
    { uint32_t ea = 0x419fdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x419fe8u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x419ff0u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a03c; }
L_419ffc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_419ffc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41a034; }
    c->r[0] = 0x161eb60u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41a028u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41a034u; rt_dispatch(c);
L_41a034:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41a03c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41a048u; f_3e7644(c);
    c->r[0] = 0x1621afcu;
    { uint32_t ea = 0x41a054u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41a054u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a074(Cpu *restrict c) {
    FN_ENTER(0x41a074u);
L_41a074:;
    c->r[0] = 0x1621ad0u;
    { uint32_t ea = 0x41a080u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41a084(Cpu *restrict c) {
    FN_ENTER(0x41a084u);
L_41a084:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41a0e0; }
    c->r[0] = 0x1621a9cu;
    { uint32_t ea = 0x41a0acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x41a0bcu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41a0e0; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x41a0d8u; f_4175d4(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a0e0:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x41a0f4u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a104; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a104:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a128(Cpu *restrict c) {
    FN_ENTER(0x41a128u);
L_41a128:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16210f8u;
    { uint32_t ea = 0x41a13cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41a148u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41a150u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a19c; }
L_41a15c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41a15c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41a194; }
    c->r[0] = 0x161ea00u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41a188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41a194u; rt_dispatch(c);
L_41a194:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41a19c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41a1a8u; f_3e7644(c);
    c->r[0] = 0x16219acu;
    { uint32_t ea = 0x41a1b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41a1b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a1d4(Cpu *restrict c) {
    FN_ENTER(0x41a1d4u);
L_41a1d4:;
    c->r[0] = 0x1621980u;
    { uint32_t ea = 0x41a1e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41a1e4(Cpu *restrict c) {
    FN_ENTER(0x41a1e4u);
L_41a1e4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41a240; }
    c->r[0] = 0x162194cu;
    { uint32_t ea = 0x41a20cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x41a21cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41a240; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x41a238u; f_41777c(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a240:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x41a254u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a264; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a264:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a288(Cpu *restrict c) {
    FN_ENTER(0x41a288u);
L_41a288:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1620f98u;
    { uint32_t ea = 0x41a29cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41a2a8u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41a2b0u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a2fc; }
L_41a2bc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41a2bc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41a2f4; }
    c->r[0] = 0x161e8a0u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41a2e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41a2f4u; rt_dispatch(c);
L_41a2f4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41a2fc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41a308u; f_3e7644(c);
    c->r[0] = 0x162185cu;
    { uint32_t ea = 0x41a314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41a314u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a334(Cpu *restrict c) {
    FN_ENTER(0x41a334u);
L_41a334:;
    c->r[0] = 0x1621830u;
    { uint32_t ea = 0x41a340u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41a344(Cpu *restrict c) {
    FN_ENTER(0x41a344u);
L_41a344:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41a3b4; }
    c->r[0] = 0x16217fcu;
    { uint32_t ea = 0x41a36cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x41a37cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41a3b4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_41a3d0; }
    c->r[0] = 0x161e980u;
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x41a3a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41a3acu; f_5a5178(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a3b4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x41a3c8u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a3d8; }
L_41a3d0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a3d8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a400(Cpu *restrict c) {
    FN_ENTER(0x41a400u);
L_41a400:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1620e20u;
    { uint32_t ea = 0x41a414u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41a420u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41a428u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a474; }
L_41a434:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41a434; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41a46c; }
    c->r[0] = 0x161e728u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41a460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41a46cu; rt_dispatch(c);
L_41a46c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41a474:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41a480u; f_3e7644(c);
    c->r[0] = 0x16216f4u;
    { uint32_t ea = 0x41a48cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41a48cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a4ac(Cpu *restrict c) {
    FN_ENTER(0x41a4acu);
L_41a4ac:;
    c->r[0] = 0x16216c8u;
    { uint32_t ea = 0x41a4b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41a4bc(Cpu *restrict c) {
    FN_ENTER(0x41a4bcu);
L_41a4bc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41a548; }
    c->r[0] = 0x1621694u;
    { uint32_t ea = 0x41a4e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x41a4f4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41a548; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_41a564; }
    c->r[0] = 0x161e868u;
    { uint32_t ea = 0x41a514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0xa90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_41a564; }
    c->r[0] = 0x161e7ecu;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x41a53cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41a540u; f_5aea24(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a548:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x41a55cu; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41a56c; }
L_41a564:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41a56c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41a598(Cpu *restrict c) {
    FN_ENTER(0x41a598u);
L_41a598:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1641d24u;
    c->r[6] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x41a5bcu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x41a604u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x41a61cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x41a634u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = 0x1620ba4u;
    c->r[0] = 0x16213bcu;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a694u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x13412f7u;
    { uint32_t ea = 0x41a69cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a6a0u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0x41a6a4u; f_9aedcc(c);
    c->r[1] = 0x16214c8u;
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a6c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1620c94u;
    c->r[0] = 0x1621384u;
    { uint32_t ea = 0x41a6d4u + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x13412d4u;
    { uint32_t ea = 0x41a6dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a6e0u + c->r[1];
    c->r[2] = c->r[5];
    c->r[14] = 0x41a6e4u; f_9aedcc(c);
    c->r[1] = 0x1621488u;
    c->r[2] = c->r[4];
    c->r[3] = 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a704u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621350u;
    c->r[1] = 0x13412beu;
    { uint32_t ea = 0x41a718u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a71cu + c->r[1];
    c->r[14] = 0x41a71cu; f_9aedcc(c);
    c->r[1] = 0x1621454u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a73cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621320u;
    c->r[1] = 0x13412a3u;
    { uint32_t ea = 0x41a750u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a754u + c->r[1];
    c->r[14] = 0x41a754u; f_9aedcc(c);
    c->r[1] = 0x1621420u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a774u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x16212f0u;
    c->r[1] = 0x1341291u;
    { uint32_t ea = 0x41a788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a78cu + c->r[1];
    c->r[14] = 0x41a78cu; f_9aedcc(c);
    c->r[1] = 0x16213ecu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a7acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x16212c0u;
    c->r[1] = 0x1341278u;
    { uint32_t ea = 0x41a7c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a7c4u + c->r[1];
    c->r[14] = 0x41a7c4u; f_9aedcc(c);
    c->r[1] = 0x16213b8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a7e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621290u;
    c->r[1] = 0x1341268u;
    { uint32_t ea = 0x41a7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a7fcu + c->r[1];
    c->r[14] = 0x41a7fcu; f_9aedcc(c);
    c->r[1] = 0x1621384u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a81cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621260u;
    c->r[1] = 0x134124cu;
    { uint32_t ea = 0x41a830u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a834u + c->r[1];
    c->r[14] = 0x41a834u; f_9aedcc(c);
    c->r[1] = 0x1621350u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a854u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621230u;
    c->r[1] = 0x1341239u;
    { uint32_t ea = 0x41a868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a86cu + c->r[1];
    c->r[14] = 0x41a86cu; f_9aedcc(c);
    c->r[1] = 0x162131cu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a88cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621200u;
    c->r[1] = 0x134121du;
    { uint32_t ea = 0x41a8a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a8a4u + c->r[1];
    c->r[14] = 0x41a8a4u; f_9aedcc(c);
    c->r[1] = 0x16212e8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a8c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x16211d0u;
    c->r[1] = 0x134120au;
    { uint32_t ea = 0x41a8d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a8dcu + c->r[1];
    c->r[14] = 0x41a8dcu; f_9aedcc(c);
    c->r[1] = 0x16212b4u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a8fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x16211a0u;
    c->r[1] = 0x13411edu;
    { uint32_t ea = 0x41a910u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a914u + c->r[1];
    c->r[14] = 0x41a914u; f_9aedcc(c);
    c->r[1] = 0x1621280u;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a934u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621170u;
    c->r[1] = 0x13411d9u;
    { uint32_t ea = 0x41a948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a94cu + c->r[1];
    c->r[14] = 0x41a94cu; f_9aedcc(c);
    c->r[1] = 0x162124cu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a96cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621140u;
    c->r[1] = 0x13411bfu;
    { uint32_t ea = 0x41a980u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a984u + c->r[1];
    c->r[14] = 0x41a984u; f_9aedcc(c);
    c->r[1] = 0x1621218u;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a9a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621110u;
    c->r[1] = 0x13411aeu;
    { uint32_t ea = 0x41a9b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a9bcu + c->r[1];
    c->r[14] = 0x41a9bcu; f_9aedcc(c);
    c->r[1] = 0x16211e4u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41a9dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x16210e0u;
    c->r[1] = 0x1341193u;
    { uint32_t ea = 0x41a9f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41a9f4u + c->r[1];
    c->r[14] = 0x41a9f4u; f_9aedcc(c);
    c->r[1] = 0x16211b0u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41aa14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x16210b0u;
    c->r[1] = 0x1341181u;
    { uint32_t ea = 0x41aa28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41aa2cu + c->r[1];
    c->r[14] = 0x41aa2cu; f_9aedcc(c);
    c->r[1] = 0x162117cu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41aa4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621080u;
    c->r[1] = 0x1341165u;
    { uint32_t ea = 0x41aa60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41aa64u + c->r[1];
    c->r[14] = 0x41aa64u; f_9aedcc(c);
    c->r[1] = 0x1621148u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41aa84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621050u;
    c->r[1] = 0x1341152u;
    { uint32_t ea = 0x41aa98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41aa9cu + c->r[1];
    c->r[14] = 0x41aa9cu; f_9aedcc(c);
    c->r[1] = 0x1621114u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41aabcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1621020u;
    c->r[1] = 0x1341139u;
    { uint32_t ea = 0x41aad0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41aad4u + c->r[1];
    c->r[14] = 0x41aad4u; f_9aedcc(c);
    c->r[1] = 0x16210e0u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41aaf4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620ff0u;
    c->r[1] = 0x1341129u;
    { uint32_t ea = 0x41ab08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ab0cu + c->r[1];
    c->r[14] = 0x41ab0cu; f_9aedcc(c);
    c->r[1] = 0x16210acu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ab2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620fc0u;
    c->r[1] = 0x134110eu;
    { uint32_t ea = 0x41ab40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ab44u + c->r[1];
    c->r[14] = 0x41ab44u; f_9aedcc(c);
    c->r[1] = 0x1621078u;
    c->r[2] = c->r[4];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ab64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620f90u;
    c->r[1] = 0x13410fcu;
    { uint32_t ea = 0x41ab78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ab7cu + c->r[1];
    c->r[14] = 0x41ab7cu; f_9aedcc(c);
    c->r[1] = 0x1621044u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ab9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620f60u;
    c->r[1] = 0x13410e5u;
    { uint32_t ea = 0x41abb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41abb4u + c->r[1];
    c->r[14] = 0x41abb4u; f_9aedcc(c);
    c->r[1] = 0x1621010u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41abd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620f30u;
    c->r[1] = 0x13410d7u;
    { uint32_t ea = 0x41abe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41abecu + c->r[1];
    c->r[14] = 0x41abecu; f_9aedcc(c);
    c->r[1] = 0x1620fdcu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ac0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620f00u;
    c->r[1] = 0x13410c1u;
    { uint32_t ea = 0x41ac20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ac24u + c->r[1];
    c->r[14] = 0x41ac24u; f_9aedcc(c);
    c->r[1] = 0x1620fa8u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ac44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620ed0u;
    c->r[1] = 0x13410b4u;
    { uint32_t ea = 0x41ac58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ac5cu + c->r[1];
    c->r[14] = 0x41ac5cu; f_9aedcc(c);
    c->r[1] = 0x1620f74u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ac7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620ea0u;
    c->r[1] = 0x134109du;
    { uint32_t ea = 0x41ac90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ac94u + c->r[1];
    c->r[14] = 0x41ac94u; f_9aedcc(c);
    c->r[1] = 0x1620f40u;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41acb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620e70u;
    c->r[1] = 0x134108fu;
    { uint32_t ea = 0x41acc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41acccu + c->r[1];
    c->r[14] = 0x41acccu; f_9aedcc(c);
    c->r[1] = 0x1620f0cu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41acecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620e40u;
    c->r[1] = 0x1341077u;
    { uint32_t ea = 0x41ad00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ad04u + c->r[1];
    c->r[14] = 0x41ad04u; f_9aedcc(c);
    c->r[1] = 0x1620ed8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ad24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620e10u;
    c->r[1] = 0x1341068u;
    { uint32_t ea = 0x41ad38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ad3cu + c->r[1];
    c->r[14] = 0x41ad3cu; f_9aedcc(c);
    c->r[1] = 0x1620ea4u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ad5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620de0u;
    c->r[1] = 0x1341055u;
    { uint32_t ea = 0x41ad70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ad74u + c->r[1];
    c->r[14] = 0x41ad74u; f_9aedcc(c);
    c->r[1] = 0x1620e70u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ad94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620db0u;
    c->r[1] = 0x134104bu;
    { uint32_t ea = 0x41ada8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41adacu + c->r[1];
    c->r[14] = 0x41adacu; f_9aedcc(c);
    c->r[1] = 0x1620e3cu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41adccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620d80u;
    c->r[1] = 0x1341035u;
    { uint32_t ea = 0x41ade0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ade4u + c->r[1];
    c->r[14] = 0x41ade4u; f_9aedcc(c);
    c->r[1] = 0x1620e08u;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ae04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620d50u;
    c->r[1] = 0x1341028u;
    { uint32_t ea = 0x41ae18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ae1cu + c->r[1];
    c->r[14] = 0x41ae1cu; f_9aedcc(c);
    c->r[1] = 0x1620dd4u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ae3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620d20u;
    c->r[1] = 0x1341011u;
    { uint32_t ea = 0x41ae50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ae54u + c->r[1];
    c->r[14] = 0x41ae54u; f_9aedcc(c);
    c->r[1] = 0x1620da0u;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ae74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620cf0u;
    c->r[1] = 0x1341003u;
    { uint32_t ea = 0x41ae88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ae8cu + c->r[1];
    c->r[14] = 0x41ae8cu; f_9aedcc(c);
    c->r[1] = 0x1620d6cu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41aeacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1620cc0u;
    c->r[1] = 0x1340fe8u;
    { uint32_t ea = 0x41aec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41aec4u + c->r[1];
    c->r[14] = 0x41aec4u; f_9aedcc(c);
    c->r[1] = 0x1620d4cu;
    { uint32_t ea = 0x41aed0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41b0b0(Cpu *restrict c) {
    FN_ENTER(0x41b0b0u);
L_41b0b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1620b60u;
    { uint32_t ea = 0x41b0c0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b0c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[4]; c->r[14] = 0x41b0dcu; rt_dispatch(c);
    c->r[14] = 0x41b0e0u; f_bfba6c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1620b30u;
    { uint32_t ea = 0x41b0f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b104(Cpu *restrict c) {
    FN_ENTER(0x41b104u);
L_41b104:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1620b14u;
    { uint32_t ea = 0x41b114u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b118u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41b130u; rt_dispatch(c);
    c->r[14] = 0x41b134u; f_bfbf4c(c);
    c->r[1] = 0x1620aecu;
    { uint32_t ea = 0x41b140u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b150(Cpu *restrict c) {
    FN_ENTER(0x41b150u);
L_41b150:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1620ac0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41b168u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41b16cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41b18c(Cpu *restrict c) {
    FN_ENTER(0x41b18cu);
L_41b18c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1620a94u;
    { uint32_t ea = 0x41b19cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b1a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x50u;
    c->pc = c->r[4]; c->r[14] = 0x41b1b8u; rt_dispatch(c);
    c->r[14] = 0x41b1bcu; f_bfba6c(c);
    c->r[2] = 0x1620a64u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x41b1d0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b1e8(Cpu *restrict c) {
    FN_ENTER(0x41b1e8u);
L_41b1e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1620a40u;
    { uint32_t ea = 0x41b1f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b1fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41b214u; rt_dispatch(c);
    c->r[14] = 0x41b218u; f_bfbf4c(c);
    c->r[1] = 0x1620a18u;
    { uint32_t ea = 0x41b224u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b234(Cpu *restrict c) {
    FN_ENTER(0x41b234u);
L_41b234:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16209ecu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41b24cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41b250u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41b270(Cpu *restrict c) {
    FN_ENTER(0x41b270u);
L_41b270:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16209c0u;
    { uint32_t ea = 0x41b280u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b284u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[4]; c->r[14] = 0x41b29cu; rt_dispatch(c);
    c->r[14] = 0x41b2a0u; f_bfba6c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1620990u;
    { uint32_t ea = 0x41b2b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b2c4(Cpu *restrict c) {
    FN_ENTER(0x41b2c4u);
L_41b2c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1620974u;
    { uint32_t ea = 0x41b2d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b2d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41b2f0u; rt_dispatch(c);
    c->r[14] = 0x41b2f4u; f_bfbf4c(c);
    c->r[1] = 0x162094cu;
    { uint32_t ea = 0x41b300u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b310(Cpu *restrict c) {
    FN_ENTER(0x41b310u);
L_41b310:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1620920u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41b328u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41b32cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41b34c(Cpu *restrict c) {
    FN_ENTER(0x41b34cu);
L_41b34c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16208f4u;
    { uint32_t ea = 0x41b35cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b360u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[4]; c->r[14] = 0x41b378u; rt_dispatch(c);
    c->r[14] = 0x41b37cu; f_bfba6c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16208c4u;
    { uint32_t ea = 0x41b390u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b3a0(Cpu *restrict c) {
    FN_ENTER(0x41b3a0u);
L_41b3a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16208a8u;
    { uint32_t ea = 0x41b3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b3b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41b3ccu; rt_dispatch(c);
    c->r[14] = 0x41b3d0u; f_bfbf4c(c);
    c->r[1] = 0x1620880u;
    { uint32_t ea = 0x41b3dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41b3ec(Cpu *restrict c) {
    FN_ENTER(0x41b3ecu);
L_41b3ec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1620854u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41b404u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41b408u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41b428(Cpu *restrict c) {
    FN_ENTER(0x41b428u);
L_41b428:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[6] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    c->r[14] = 0x41b448u; f_bfba6c(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16207c4u;
    { uint32_t ea = 0x41b460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_41b488; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_41b48c;
L_41b488:;
    c->r[0] = 0x1040u;
L_41b48c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    c->r[14] = 0x41b4a0u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41b4ac(Cpu *restrict c) {
    FN_ENTER(0x41b4acu);
L_41b4ac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_41b77c; }
    c->r[0] = 0x161d8ccu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x41b4d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b4d8u; f_68cba4(c);
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_41b77c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x41b4f0u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x41b518u: goto L_41b518; case 0x41b524u: goto L_41b524; case 0x41b580u: goto L_41b580; case 0x41b5e0u: goto L_41b5e0; case 0x41b5fcu: goto L_41b5fc; case 0x41b628u: goto L_41b628; case 0x41b688u: goto L_41b688; case 0x41b6e8u: goto L_41b6e8; case 0x41b77cu: goto L_41b77c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_41b518:;
    c->r[0] = 0x161d87cu;
    { uint32_t ea = 0x41b524u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_41b614;
L_41b524:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_41b77c; }
    c->r[0] = 0x1u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x161d858u;
    { uint32_t ea = 0x41b548u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b54cu; f_68d210(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b558u; f_68cba4(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x41b56cu; f_bfba6c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16206a4u;
    { uint32_t ea = 0x41b580u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_41b744;
L_41b580:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfeu;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_41b77c; }
    c->r[0] = 0x4u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x161d7f8u;
    { uint32_t ea = 0x41b5a8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b5acu; f_68d210(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b5b8u; f_68cba4(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x41b5ccu; f_bfba6c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1620644u;
    { uint32_t ea = 0x41b5e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_41b744;
L_41b5e0:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfeu;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_41b77c; }
    c->r[0] = 0x161d7a4u;
    { uint32_t ea = 0x41b5fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_41b614;
L_41b5fc:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfeu;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_41b77c; }
    c->r[0] = 0x161d788u;
    { uint32_t ea = 0x41b618u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_41b614:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_68d210(c);
L_41b628:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_NE) { goto L_41b77c; }
    c->r[0] = 0x7u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x161d750u;
    { uint32_t ea = 0x41b650u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b654u; f_68d210(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b660u; f_68cba4(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x41b674u; f_bfba6c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x162059cu;
    { uint32_t ea = 0x41b688u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_41b744;
L_41b688:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_NE) { goto L_41b77c; }
    c->r[0] = 0x8u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x161d6f0u;
    { uint32_t ea = 0x41b6b0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b6b4u; f_68d210(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b6c0u; f_68cba4(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x41b6d4u; f_bfba6c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x162053cu;
    { uint32_t ea = 0x41b6e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_41b744;
L_41b6e8:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfeu;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_41b77c; }
    c->r[0] = 0x6u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x161d690u;
    { uint32_t ea = 0x41b710u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b714u; f_68d210(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b720u; f_68cba4(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x41b734u; f_bfba6c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16204dcu;
    { uint32_t ea = 0x41b748u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_41b744:;
    c->r[0] = c->r[0] + 0x8u;
    c->r[2] = c->r[5];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xeu; ST16(ea, c->r[0]); }
    c->r[0] = 0x1040u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b77cu; f_bfc3d8(c);
L_41b77c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41b7bc(Cpu *restrict c) {
    FN_ENTER(0x41b7bcu);
L_41b7bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x60u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x10u;
    c->r[5] = c->r[1];
    c->r[14] = 0x41b7dcu; f_bfba6c(c);
    c->r[1] = 0x1620444u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41b7f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[1] = 0x15bcu;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST16(ea, c->r[1]); }
    c->r[1] = 0x15beu;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1au; ST16(ea, c->r[1]); }
    c->r[1] = 0x15c0u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x15c4u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x15c8u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[1] = 0x159eu;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[1]); }
    c->r[1] = 0x1610u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_41b8a4; }
    c->r[0] = 0x1428u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1b6u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x32u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1614u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1620u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1624u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1628u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1634u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_41b8d0;
L_41b8a4:;
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x32u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST16(ea, c->r[1]); }
    c->r[1] = 0x161d290u;
    { uint32_t ea = 0x41b8bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
L_41b8d0:;
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1040u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41b8f8u; f_bfc3d8(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41b908(Cpu *restrict c) {
    FN_ENTER(0x41b908u);
L_41b908:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_41b9fc; }
    c->r[0] = 0x161d454u;
    c->r[1] = c->r[2];
    { uint32_t ea = 0x41b92cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b930u; f_476748(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41b9fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x41b944u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_41b9fc; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x15c0u;
    c->r[2] = 0x159eu;
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x15c4u;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x15c8u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x15ccu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x22u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_41b9e4; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x161d20cu;
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x41b9b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41b9b8u; f_25e438(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41b9e4; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
    c->r[3] = c->r[4] + 0x30u;
    c->r[0] = c->r[5];
    c->r[14] = 0x41b9e0u; f_68161c(c);
    goto L_41b9ec;
L_41b9e4:;
    c->r[0] = c->r[5];
    c->r[14] = 0x41b9ecu; f_67f2f8(c);
L_41b9ec:;
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x41b9fcu; f_680af4(c);
L_41b9fc:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41ba0c(Cpu *restrict c) {
    FN_ENTER(0x41ba0cu);
L_41ba0c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[6] = c->r[13] + 0x4u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x41ba28u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1620200u;
    { uint32_t ea = 0x41ba44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[0] = 0x1040u;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x41ba60u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41ba6c(Cpu *restrict c) {
    FN_ENTER(0x41ba6cu);
L_41ba6c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[8] = c->r[13] + 0x4u;
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = c->r[8];
    c->r[14] = 0x41ba90u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16201a8u;
    { uint32_t ea = 0x41baacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xfu; ST8(ea, c->r[0]); }
    c->r[0] = 0x1040u;
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x41bad8u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41bae4(Cpu *restrict c) {
    FN_ENTER(0x41bae4u);
L_41bae4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41bae8(Cpu *restrict c) {
    FN_ENTER(0x41bae8u);
L_41bae8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41baec(Cpu *restrict c) {
    FN_ENTER(0x41baecu);
L_41baec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41baf0(Cpu *restrict c) {
    FN_ENTER(0x41baf0u);
L_41baf0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41baf4(Cpu *restrict c) {
    FN_ENTER(0x41baf4u);
L_41baf4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41baf8(Cpu *restrict c) {
    FN_ENTER(0x41baf8u);
L_41baf8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41bafc(Cpu *restrict c) {
    FN_ENTER(0x41bafcu);
L_41bafc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41bb00(Cpu *restrict c) {
    FN_ENTER(0x41bb00u);
L_41bb00:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41bb04(Cpu *restrict c) {
    FN_ENTER(0x41bb04u);
L_41bb04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161f718u;
    { uint32_t ea = 0x41bb18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16200f8u;
    { uint32_t ea = 0x41bb28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41bb28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41bb44(Cpu *restrict c) {
    FN_ENTER(0x41bb44u);
L_41bb44:;
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
    c->r[14] = 0x41bb7cu; f_9bb638(c);
    c->r[1] = 0x134078cu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x41bb94u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x41bbf4u; f_9bb638(c);
    c->r[1] = 0x134071eu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41bc08u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9u;
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
    c->r[14] = 0x41bc6cu; f_9bb638(c);
    c->r[1] = 0x13406b5u;
    c->r[1] = 0x41bc78u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
void f_41bccc(Cpu *restrict c) {
    FN_ENTER(0x41bcccu);
L_41bccc:;
    c->r[0] = 0x161ff48u;
    { uint32_t ea = 0x41bcd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41bcdc(Cpu *restrict c) {
    FN_ENTER(0x41bcdcu);
L_41bcdc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161f544u;
    { uint32_t ea = 0x41bcf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41bcfcu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41bd04u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41bd50; }
L_41bd10:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41bd10; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41bd48; }
    c->r[0] = 0x161ce4cu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41bd3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41bd48u; rt_dispatch(c);
L_41bd48:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41bd50:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41bd5cu; f_3e7644(c);
    c->r[0] = 0x161fec0u;
    { uint32_t ea = 0x41bd68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41bd68u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41bd88(Cpu *restrict c) {
    FN_ENTER(0x41bd88u);
L_41bd88:;
    c->r[0] = 0x161fe94u;
    { uint32_t ea = 0x41bd94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41bd98(Cpu *restrict c) {
    FN_ENTER(0x41bd98u);
L_41bd98:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41bdf4; }
    c->r[0] = 0x161fe60u;
    { uint32_t ea = 0x41bdc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x41bdd0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41bdf4; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x41bdecu; f_41b4ac(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41bdf4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x41be08u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41be18; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41be18:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41be3c(Cpu *restrict c) {
    FN_ENTER(0x41be3cu);
L_41be3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161f3e0u;
    { uint32_t ea = 0x41be50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x161fdd0u;
    { uint32_t ea = 0x41be60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41be60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41be7c(Cpu *restrict c) {
    FN_ENTER(0x41be7cu);
L_41be7c:;
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
    c->r[14] = 0x41beb4u; f_9bb638(c);
    c->r[1] = 0x133f998u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x41beccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
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
    c->r[14] = 0x41bf2cu; f_9bb638(c);
    c->r[1] = 0x133e246u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41bf40u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[14] = 0x41bfa4u; f_9bb638(c);
    c->r[1] = 0x134037fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41bfb8u + c->r[1];
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
    c->r[14] = 0x41c018u; f_9bb638(c);
    c->r[1] = 0x1340318u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c02cu + c->r[1];
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
    c->r[14] = 0x41c090u; f_9bb638(c);
    c->r[1] = 0x13402adu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c0a4u + c->r[1];
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
    c->r[14] = 0x41c104u; f_9bb638(c);
    c->r[1] = 0x133e0e7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c118u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x20u;
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
    c->r[14] = 0x41c17cu; f_9bb638(c);
    c->r[1] = 0x13401ceu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c190u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x22u;
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
    c->r[14] = 0x41c1f0u; f_9bb638(c);
    c->r[1] = 0x1340163u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c204u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x24u;
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
    c->r[14] = 0x41c268u; f_9bb638(c);
    c->r[1] = 0x13400f6u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c27cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x30u;
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
    c->r[14] = 0x41c2dcu; f_9bb638(c);
    c->r[1] = 0x1340093u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c2f0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x34u;
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
    c->r[14] = 0x41c354u; f_9bb638(c);
    c->r[1] = 0x134002cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c368u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x38u;
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
    c->r[14] = 0x41c3c8u; f_9bb638(c);
    c->r[1] = 0x133ffd1u;
    c->r[1] = 0x41c3d4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x40u;
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
void f_41c44c(Cpu *restrict c) {
    FN_ENTER(0x41c44cu);
L_41c44c:;
    c->r[0] = 0x161f7d8u;
    { uint32_t ea = 0x41c458u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41c45c(Cpu *restrict c) {
    FN_ENTER(0x41c45cu);
L_41c45c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161edc4u;
    { uint32_t ea = 0x41c470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41c47cu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41c484u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41c4d0; }
L_41c490:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41c490; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41c4c8; }
    c->r[0] = 0x161c6ccu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41c4bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41c4c8u; rt_dispatch(c);
L_41c4c8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41c4d0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41c4dcu; f_3e7644(c);
    c->r[0] = 0x161f750u;
    { uint32_t ea = 0x41c4e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41c4e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41c508(Cpu *restrict c) {
    FN_ENTER(0x41c508u);
L_41c508:;
    c->r[0] = 0x161f724u;
    { uint32_t ea = 0x41c514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41c518(Cpu *restrict c) {
    FN_ENTER(0x41c518u);
L_41c518:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41c574; }
    c->r[0] = 0x161f6f0u;
    { uint32_t ea = 0x41c540u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x41c550u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41c574; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x41c56cu; f_41b908(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41c574:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x41c588u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41c598; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41c598:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41c5bc(Cpu *restrict c) {
    FN_ENTER(0x41c5bcu);
L_41c5bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161ec60u;
    { uint32_t ea = 0x41c5d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x161f660u;
    { uint32_t ea = 0x41c5e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41c5e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41c5fc(Cpu *restrict c) {
    FN_ENTER(0x41c5fcu);
L_41c5fc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x41c634u; f_9bb638(c);
    c->r[1] = 0x133fd66u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c648u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x8u;
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
void f_41c690(Cpu *restrict c) {
    FN_ENTER(0x41c690u);
L_41c690:;
    c->r[0] = 0x161f5a4u;
    { uint32_t ea = 0x41c69cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41c6a0(Cpu *restrict c) {
    FN_ENTER(0x41c6a0u);
L_41c6a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161eb80u;
    { uint32_t ea = 0x41c6b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41c6c0u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41c6c8u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41c714; }
L_41c6d4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41c6d4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41c70c; }
    c->r[0] = 0x161c488u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41c700u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41c70cu; rt_dispatch(c);
L_41c70c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41c714:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41c720u; f_3e7644(c);
    c->r[0] = 0x161f51cu;
    { uint32_t ea = 0x41c72cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41c72cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41c74c(Cpu *restrict c) {
    FN_ENTER(0x41c74cu);
L_41c74c:;
    c->r[0] = 0x161f4f0u;
    { uint32_t ea = 0x41c758u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41c75c(Cpu *restrict c) {
    FN_ENTER(0x41c75cu);
L_41c75c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41c7f0; }
    c->r[0] = 0x161f4b8u;
    { uint32_t ea = 0x41c788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x41c798u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41c7f0; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_41c80c; }
    c->r[0] = 0x161c5c4u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x41c7bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41c7c0u; f_476748(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_41c80c; }
    c->r[0] = 0x161c5a0u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = 0x41c7e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x41c7ecu; f_477a1c(c);
    goto L_41c80c;
L_41c7f0:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x41c804u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41c818; }
L_41c80c:;
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41c818:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41c848(Cpu *restrict c) {
    FN_ENTER(0x41c848u);
L_41c848:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161e9d4u;
    { uint32_t ea = 0x41c85cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x161f3e4u;
    { uint32_t ea = 0x41c86cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41c86cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41c888(Cpu *restrict c) {
    FN_ENTER(0x41c888u);
L_41c888:;
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
    c->r[14] = 0x41c8c0u; f_9bb638(c);
    c->r[1] = 0x1334445u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x41c8d8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x41c938u; f_9bb638(c);
    c->r[1] = 0x133fa70u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c94cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9u;
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
    c->r[14] = 0x41c9b0u; f_9bb638(c);
    c->r[1] = 0x133fa01u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41c9c4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[14] = 0x41ca24u; f_9bb638(c);
    c->r[1] = 0x133f9a0u;
    c->r[1] = 0x41ca30u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xbu;
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
void f_41ca88(Cpu *restrict c) {
    FN_ENTER(0x41ca88u);
L_41ca88:;
    c->r[0] = 0x161f1bcu;
    { uint32_t ea = 0x41ca94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41ca98(Cpu *restrict c) {
    FN_ENTER(0x41ca98u);
L_41ca98:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161e788u;
    { uint32_t ea = 0x41caacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41cab8u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41cac0u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41cb0c; }
L_41cacc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41cacc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41cb04; }
    c->r[0] = 0x161c090u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41caf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41cb04u; rt_dispatch(c);
L_41cb04:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41cb0c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41cb18u; f_3e7644(c);
    c->r[0] = 0x161f134u;
    { uint32_t ea = 0x41cb24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41cb24u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41cb44(Cpu *restrict c) {
    FN_ENTER(0x41cb44u);
L_41cb44:;
    c->r[0] = 0x161f108u;
    { uint32_t ea = 0x41cb50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41cb54(Cpu *restrict c) {
    FN_ENTER(0x41cb54u);
L_41cb54:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41cbd4; }
    c->r[0] = 0x161f0d4u;
    { uint32_t ea = 0x41cb7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x41cb8cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41cbd4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_41cbf0; }
    c->r[0] = 0x161c0c0u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x41cbb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41cbb4u; f_7041ec(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41cbf0; }
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xbu; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[14] = 0x41cbccu; f_696300(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41cbd4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x41cbe8u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41cbf8; }
L_41cbf0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41cbf8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41cc20(Cpu *restrict c) {
    FN_ENTER(0x41cc20u);
L_41cc20:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x163f7fcu;
    c->r[6] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x41cc44u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x41cc8cu; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x41cca4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x41ccbcu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = 0x161e51cu;
    c->r[0] = 0x161eefcu;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41cd1cu + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x133f4d4u;
    { uint32_t ea = 0x41cd24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41cd28u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0x41cd2cu; f_9aedcc(c);
    c->r[1] = 0x161ef18u;
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41cd48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x161e60cu;
    c->r[0] = 0x161eec4u;
    { uint32_t ea = 0x41cd5cu + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x133f4b3u;
    { uint32_t ea = 0x41cd64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41cd68u + c->r[1];
    c->r[2] = c->r[5];
    c->r[14] = 0x41cd6cu; f_9aedcc(c);
    c->r[1] = 0x161eed8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x50u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41cd8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161ee90u;
    c->r[1] = 0x133f49fu;
    { uint32_t ea = 0x41cda0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41cda4u + c->r[1];
    c->r[14] = 0x41cda4u; f_9aedcc(c);
    c->r[1] = 0x161eea4u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41cdc4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161ee60u;
    c->r[1] = 0x133f482u;
    { uint32_t ea = 0x41cdd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41cddcu + c->r[1];
    c->r[14] = 0x41cddcu; f_9aedcc(c);
    c->r[1] = 0x161ee70u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41cdfcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161ee30u;
    c->r[1] = 0x133f46eu;
    { uint32_t ea = 0x41ce10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ce14u + c->r[1];
    c->r[14] = 0x41ce14u; f_9aedcc(c);
    c->r[1] = 0x161ee3cu;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ce34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161ee00u;
    c->r[1] = 0x133f45du;
    { uint32_t ea = 0x41ce48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ce4cu + c->r[1];
    c->r[14] = 0x41ce4cu; f_9aedcc(c);
    c->r[1] = 0x161ee08u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ce6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161edd0u;
    c->r[1] = 0x133f455u;
    { uint32_t ea = 0x41ce80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ce84u + c->r[1];
    c->r[14] = 0x41ce84u; f_9aedcc(c);
    c->r[1] = 0x161edd4u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41cea4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161eda0u;
    c->r[1] = 0x133f43cu;
    { uint32_t ea = 0x41ceb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41cebcu + c->r[1];
    c->r[14] = 0x41cebcu; f_9aedcc(c);
    c->r[1] = 0x161edb4u;
    { uint32_t ea = 0x41cec8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41cf40(Cpu *restrict c) {
    FN_ENTER(0x41cf40u);
L_41cf40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161ed30u;
    { uint32_t ea = 0x41cf50u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41cf54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[4]; c->r[14] = 0x41cf6cu; rt_dispatch(c);
    c->r[14] = 0x41cf70u; f_bfba6c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x161ed00u;
    { uint32_t ea = 0x41cf84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff0000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41cfa0(Cpu *restrict c) {
    FN_ENTER(0x41cfa0u);
L_41cfa0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161ecd8u;
    { uint32_t ea = 0x41cfb0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41cfb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41cfccu; rt_dispatch(c);
    c->r[14] = 0x41cfd0u; f_bfbf4c(c);
    c->r[1] = 0x161ecb0u;
    { uint32_t ea = 0x41cfdcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41cfec(Cpu *restrict c) {
    FN_ENTER(0x41cfecu);
L_41cfec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161ec84u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41d004u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41d008u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d028(Cpu *restrict c) {
    FN_ENTER(0x41d028u);
L_41d028:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[8] = c->r[13] + 0x4u;
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = c->r[8];
    c->r[14] = 0x41d04cu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x161ec1cu;
    { uint32_t ea = 0x41d068u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xfu; ST8(ea, c->r[0]); }
    c->r[0] = 0x1040u;
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x41d094u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41d0a0(Cpu *restrict c) {
    FN_ENTER(0x41d0a0u);
L_41d0a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41d0a4(Cpu *restrict c) {
    FN_ENTER(0x41d0a4u);
L_41d0a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_41d0a8(Cpu *restrict c) {
    FN_ENTER(0x41d0a8u);
L_41d0a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161e174u;
    { uint32_t ea = 0x41d0bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x161ebb4u;
    { uint32_t ea = 0x41d0ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41d0ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d0e8(Cpu *restrict c) {
    FN_ENTER(0x41d0e8u);
L_41d0e8:;
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
    c->r[14] = 0x41d120u; f_9bb638(c);
    c->r[1] = 0x1334706u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x41d138u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x41d198u; f_9bb638(c);
    c->r[1] = 0x133f27bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41d1acu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9u;
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
    c->r[14] = 0x41d210u; f_9bb638(c);
    c->r[1] = 0x133f206u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x41d224u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[14] = 0x41d284u; f_9bb638(c);
    c->r[1] = 0x133f1a0u;
    c->r[1] = 0x41d290u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xbu;
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
void f_41d2e8(Cpu *restrict c) {
    FN_ENTER(0x41d2e8u);
L_41d2e8:;
    c->r[0] = 0x161e98cu;
    { uint32_t ea = 0x41d2f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41d2f8(Cpu *restrict c) {
    FN_ENTER(0x41d2f8u);
L_41d2f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161df28u;
    { uint32_t ea = 0x41d30cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d318u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x41d320u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41d36c; }
L_41d32c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_41d32c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_41d364; }
    c->r[0] = 0x161b830u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x41d358u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x41d364u; rt_dispatch(c);
L_41d364:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_41d36c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x41d378u; f_3e7644(c);
    c->r[0] = 0x161e904u;
    { uint32_t ea = 0x41d384u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41d384u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d3a4(Cpu *restrict c) {
    FN_ENTER(0x41d3a4u);
L_41d3a4:;
    c->r[0] = 0x161e8d8u;
    { uint32_t ea = 0x41d3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_41d3b4(Cpu *restrict c) {
    FN_ENTER(0x41d3b4u);
L_41d3b4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_41d430; }
    c->r[0] = 0x161e8a4u;
    { uint32_t ea = 0x41d3dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x41d3ecu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_41d430; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_41d44c; }
    c->r[0] = 0x161b85cu;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = 0x41d414u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41d418u; f_700e9c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41d44c; }
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x41d428u; f_715944(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41d430:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x41d444u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41d454; }
L_41d44c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41d454:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d47c(Cpu *restrict c) {
    FN_ENTER(0x41d47cu);
L_41d47c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x163f040u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x41d4a0u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x41d4e8u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x41d500u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x41d518u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = 0x161dcc0u;
    c->r[0] = 0x161e700u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x41d578u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x133ee54u;
    { uint32_t ea = 0x41d580u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41d584u + c->r[1];
    c->r[14] = 0x41d584u; f_9aedcc(c);
    c->r[1] = 0x161e6f0u;
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x41d5a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x161ddb4u;
    c->r[0] = 0x161e6ccu;
    { uint32_t ea = 0x41d5b4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x133ee3bu;
    { uint32_t ea = 0x41d5bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41d5c0u + c->r[1];
    c->r[14] = 0x41d5c0u; f_9aedcc(c);
    c->r[1] = 0x161e6c8u;
    { uint32_t ea = 0x41d5ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41d5fc(Cpu *restrict c) {
    FN_ENTER(0x41d5fcu);
L_41d5fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e68cu;
    { uint32_t ea = 0x41d60cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d610u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xacu;
    c->pc = c->r[4]; c->r[14] = 0x41d628u; rt_dispatch(c);
    c->r[14] = 0x41d62cu; f_bfba6c(c);
    c->r[2] = 0x161e65cu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x41d640u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x32u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41d65c(Cpu *restrict c) {
    FN_ENTER(0x41d65cu);
L_41d65c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e634u;
    { uint32_t ea = 0x41d66cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d670u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41d688u; rt_dispatch(c);
    c->r[14] = 0x41d68cu; f_bfbf4c(c);
    c->r[1] = 0x161e60cu;
    { uint32_t ea = 0x41d698u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41d6a8(Cpu *restrict c) {
    FN_ENTER(0x41d6a8u);
L_41d6a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161e5e0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41d6c0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41d6c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d6e4(Cpu *restrict c) {
    FN_ENTER(0x41d6e4u);
L_41d6e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e5b4u;
    { uint32_t ea = 0x41d6f4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d6f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x110u;
    c->pc = c->r[4]; c->r[14] = 0x41d710u; rt_dispatch(c);
    c->r[14] = 0x41d714u; f_bfba6c(c);
    c->r[2] = 0x161e584u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x41d728u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41d74c(Cpu *restrict c) {
    FN_ENTER(0x41d74cu);
L_41d74c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e554u;
    { uint32_t ea = 0x41d75cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d760u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41d778u; rt_dispatch(c);
    c->r[14] = 0x41d77cu; f_bfbf4c(c);
    c->r[1] = 0x161e52cu;
    { uint32_t ea = 0x41d788u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41d798(Cpu *restrict c) {
    FN_ENTER(0x41d798u);
L_41d798:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161e500u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41d7b0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41d7b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d7d4(Cpu *restrict c) {
    FN_ENTER(0x41d7d4u);
L_41d7d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e4d4u;
    { uint32_t ea = 0x41d7e4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d7e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1c08u;
    c->pc = c->r[4]; c->r[14] = 0x41d800u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x41d808u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1c00u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x161e49cu;
    { uint32_t ea = 0x41d820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    c->r[14] = 0x41d82cu; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41d83c(Cpu *restrict c) {
    FN_ENTER(0x41d83cu);
L_41d83c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e474u;
    { uint32_t ea = 0x41d84cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d850u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41d868u; rt_dispatch(c);
    c->r[14] = 0x41d86cu; f_bfbf4c(c);
    c->r[1] = 0x161e44cu;
    { uint32_t ea = 0x41d878u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41d888(Cpu *restrict c) {
    FN_ENTER(0x41d888u);
L_41d888:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161e420u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41d8a0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41d8a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d8c4(Cpu *restrict c) {
    FN_ENTER(0x41d8c4u);
L_41d8c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x161e3f4u;
    { uint32_t ea = 0x41d8d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d8d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x610u;
    c->pc = c->r[5]; c->r[14] = 0x41d8f0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x41d8f8u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[5] = c->r[4] + 0xacu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x161e3bcu;
    { uint32_t ea = 0x41d910u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x41d91cu; f_46e354(c);
    c->r[0] = c->r[4] + 0x8u;
    c->r[1] = 0xa4u;
    c->r[14] = 0x41d928u; f_15efdc4(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x41d930u; f_46e43c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41d940(Cpu *restrict c) {
    FN_ENTER(0x41d940u);
L_41d940:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e380u;
    { uint32_t ea = 0x41d950u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d954u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41d96cu; rt_dispatch(c);
    c->r[14] = 0x41d970u; f_bfbf4c(c);
    c->r[1] = 0x161e358u;
    { uint32_t ea = 0x41d97cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41d98c(Cpu *restrict c) {
    FN_ENTER(0x41d98cu);
L_41d98c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161e32cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41d9a4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41d9a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41d9c8(Cpu *restrict c) {
    FN_ENTER(0x41d9c8u);
L_41d9c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e300u;
    { uint32_t ea = 0x41d9d8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41d9dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x30u;
    c->pc = c->r[4]; c->r[14] = 0x41d9f4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x41d9fcu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x23u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x161e2c8u;
    { uint32_t ea = 0x41da14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    c->r[14] = 0x41da20u; f_15efdc4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41da30(Cpu *restrict c) {
    FN_ENTER(0x41da30u);
L_41da30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e2a0u;
    { uint32_t ea = 0x41da40u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41da44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41da5cu; rt_dispatch(c);
    c->r[14] = 0x41da60u; f_bfbf4c(c);
    c->r[1] = 0x161e278u;
    { uint32_t ea = 0x41da6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41da7c(Cpu *restrict c) {
    FN_ENTER(0x41da7cu);
L_41da7c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161e24cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41da94u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41da98u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41dab8(Cpu *restrict c) {
    FN_ENTER(0x41dab8u);
L_41dab8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e220u;
    { uint32_t ea = 0x41dac8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41daccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x18d0u;
    c->pc = c->r[4]; c->r[14] = 0x41dae4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x41daecu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x18c1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x161e1e8u;
    { uint32_t ea = 0x41db04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x8u;
    c->r[14] = 0x41db10u; f_15efdc4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41db20(Cpu *restrict c) {
    FN_ENTER(0x41db20u);
L_41db20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e1c0u;
    { uint32_t ea = 0x41db30u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41db34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41db4cu; rt_dispatch(c);
    c->r[14] = 0x41db50u; f_bfbf4c(c);
    c->r[1] = 0x161e198u;
    { uint32_t ea = 0x41db5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41db6c(Cpu *restrict c) {
    FN_ENTER(0x41db6cu);
L_41db6c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161e16cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41db84u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41db88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41dba8(Cpu *restrict c) {
    FN_ENTER(0x41dba8u);
L_41dba8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e140u;
    { uint32_t ea = 0x41dbb8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41dbbcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0x41dbd4u; rt_dispatch(c);
    c->r[14] = 0x41dbd8u; f_bfba6c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x161e110u;
    { uint32_t ea = 0x41dbecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41dbfc(Cpu *restrict c) {
    FN_ENTER(0x41dbfcu);
L_41dbfc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e0f4u;
    { uint32_t ea = 0x41dc0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41dc10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x41dc28u; rt_dispatch(c);
    c->r[14] = 0x41dc2cu; f_bfbf4c(c);
    c->r[1] = 0x161e0ccu;
    { uint32_t ea = 0x41dc38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41dc48(Cpu *restrict c) {
    FN_ENTER(0x41dc48u);
L_41dc48:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x161e0a0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x41dc60u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41dc64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41dc84(Cpu *restrict c) {
    FN_ENTER(0x41dc84u);
L_41dc84:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161e074u;
    { uint32_t ea = 0x41dc94u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x1020u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x41dc9cu; f_46e50c(c);
    c->r[0] = c->r[4] + 0xac0u;
    c->r[14] = 0x41dca4u; f_46e50c(c);
    c->r[0] = c->r[4] + 0x560u;
    c->r[14] = 0x41dcacu; f_46e50c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_46e50c(c);
}
void f_41dcbc(Cpu *restrict c) {
    FN_ENTER(0x41dcbcu);
L_41dcbc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1666628u;
    c->r[6] = 0x0u;
    c->r[8] = 0x1u;
    c->r[9] = 0x2u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x41dce8u + c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x41dd28u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x41dd40u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x41dd58u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[7] = 0xffffu;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[1] = 0x161d480u;
    c->r[0] = 0x161ded8u;
    c->r[3] = 0xacu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ddb8u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x133e672u;
    { uint32_t ea = 0x41ddc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41ddc4u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0x41ddc8u; f_9aedcc(c);
    c->r[1] = 0x161df34u;
    c->r[3] = 0x4cu;
    { uint32_t ea = 0x41ddd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x161d570u;
    c->r[0] = 0x161dea0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41ddf8u + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x133e651u;
    { uint32_t ea = 0x41de00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41de04u + c->r[1];
    c->r[2] = c->r[5];
    c->r[14] = 0x41de08u; f_9aedcc(c);
    c->r[1] = 0x161def4u;
    c->r[2] = c->r[4];
    c->r[3] = 0x110u;
    { uint32_t ea = 0x41de1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161de6cu;
    c->r[1] = 0x133e63du;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41de3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41de40u + c->r[1];
    c->r[14] = 0x41de40u; f_9aedcc(c);
    c->r[1] = 0x161dec0u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = 0x41de54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161de3cu;
    c->r[1] = 0x133e633u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41de74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41de78u + c->r[1];
    c->r[14] = 0x41de78u; f_9aedcc(c);
    c->r[1] = 0x161de8cu;
    c->r[2] = c->r[4];
    c->r[3] = 0x1c08u;
    { uint32_t ea = 0x41de8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161de0cu;
    c->r[1] = 0x133e632u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41deacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41deb0u + c->r[1];
    c->r[14] = 0x41deb0u; f_9aedcc(c);
    c->r[1] = 0x161de58u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = 0x41dec4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dddcu;
    c->r[1] = 0x133e61au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41dee4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41dee8u + c->r[1];
    c->r[14] = 0x41dee8u; f_9aedcc(c);
    c->r[1] = 0x161de24u;
    c->r[2] = c->r[4];
    c->r[3] = 0x610u;
    { uint32_t ea = 0x41defcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161ddacu;
    c->r[1] = 0x133e60bu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41df1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41df20u + c->r[1];
    c->r[14] = 0x41df20u; f_9aedcc(c);
    c->r[1] = 0x161ddf0u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = 0x41df34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dd7cu;
    c->r[1] = 0x133e5edu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41df54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41df58u + c->r[1];
    c->r[14] = 0x41df58u; f_9aedcc(c);
    c->r[1] = 0x161ddbcu;
    c->r[2] = c->r[4];
    c->r[3] = 0x30u;
    { uint32_t ea = 0x41df6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dd4cu;
    c->r[1] = 0x133e5d8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41df8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41df90u + c->r[1];
    c->r[14] = 0x41df90u; f_9aedcc(c);
    c->r[1] = 0x161dd88u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = 0x41dfa4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dd1cu;
    c->r[1] = 0x133e5cfu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41dfc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41dfc8u + c->r[1];
    c->r[14] = 0x41dfc8u; f_9aedcc(c);
    c->r[1] = 0x161dd54u;
    c->r[2] = c->r[4];
    c->r[3] = 0x18d0u;
    { uint32_t ea = 0x41dfdcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dcecu;
    c->r[1] = 0x133e5cfu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41dffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41e000u + c->r[1];
    c->r[14] = 0x41e000u; f_9aedcc(c);
    c->r[1] = 0x161dd20u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = 0x41e014u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dcbcu;
    c->r[1] = 0x133e5b7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41e034u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41e038u + c->r[1];
    c->r[14] = 0x41e038u; f_9aedcc(c);
    c->r[1] = 0x161dcecu;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = 0x41e04cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dc8cu;
    c->r[1] = 0x133e5a8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41e06cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41e070u + c->r[1];
    c->r[14] = 0x41e070u; f_9aedcc(c);
    c->r[1] = 0x161dcb8u;
    c->r[2] = c->r[5];
    c->r[3] = 0x4cu;
    { uint32_t ea = 0x41e084u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dc5cu;
    c->r[1] = 0x133e592u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41e0a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41e0a8u + c->r[1];
    c->r[14] = 0x41e0a8u; f_9aedcc(c);
    c->r[1] = 0x161dc8cu;
    { uint32_t ea = 0x41e0b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x161dc7cu;
    c->r[1] = 0x3e7u;
    { uint32_t ea = 0x41e0c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x22u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x23u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x26u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x34u; ST8(ea, c->r[6]); }
    c->r[0] = 0x161dc08u;
    { uint32_t ea = 0x41e100u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x41e104u; f_46e354(c);
    c->r[0] = c->r[4] + 0x560u;
    c->r[14] = 0x41e10cu; f_46e354(c);
    c->r[0] = c->r[4] + 0xac0u;
    c->r[14] = 0x41e114u; f_46e354(c);
    c->r[0] = 0x1020u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x41e120u; f_46e354(c);
    c->r[0] = 0x161bc88u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x41e130u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xfffffb4cu;
    c->r[0] = 0x41e138u + c->r[0];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_200288(c);
}
void f_41e204(Cpu *restrict c) {
    FN_ENTER(0x41e204u);
L_41e204:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xb0u;
    c->r[7] = c->r[13] + 0x4u;
    c->r[8] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x41e228u; f_bfba6c(c);
    c->r[1] = 0x161da5cu;
    c->r[0] = 0x0u;
    c->r[2] = 0x28u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41e240u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0xau;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[6]); }
    c->r[14] = 0x41e258u; f_15efe30(c);
    c->r[0] = c->r[7] + 0x32u;
    c->r[1] = c->r[4];
    c->r[2] = 0x78u;
    c->r[14] = 0x41e268u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0x41e278u; f_41e284(c);
    c->r[13] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41e284(Cpu *restrict c) {
    FN_ENTER(0x41e284u);
L_41e284:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x41e2a0u; f_754210(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41e49c; }
    c->r[0] = 0x161aac8u;
    { uint32_t ea = 0x41e2b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e2b8u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41e36c; }
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_41e36c; }
    c->r[1] = 0x1efu;
    c->r[2] = 0x1u;
    { uint32_t r = c->r[2] & shc_lsr(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41e36c; }
    c->r[0] = 0x161da58u;
    { uint32_t ea = 0x41e2f0u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x161da48u;
    { uint32_t ea = 0x41e304u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_41e324; }
    c->r[1] = 0x161da28u;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x45610000u;
    { uint32_t ea = 0x41e324u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_41e324:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CC) { goto L_41e36c; }
    c->r[0] = 0x161da14u;
    { uint32_t ea = 0x41e33cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41e4a4; }
    c->r[0] = 0x161a884u;
    c->r[1] = 0x45d0u;
    { uint32_t ea = 0x41e354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & ~0x80000001u;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_41e36c:;
    c->r[0] = 0x161aa04u;
    { uint32_t ea = 0x41e378u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e37cu; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41e3a0; }
    c->r[0] = 0x161a824u;
    { uint32_t ea = 0x41e390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e394u; f_5f8678(c);
    c->r[6] = 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[6] = 0x3u; }
L_41e3a0:;
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_HI) { goto L_41e49c; }
    c->r[0] = (c->r[6] << 2);
    c->r[1] = 0x41e3b4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x41e3c8u: goto L_41e3c8; case 0x41e3dcu: goto L_41e3dc; case 0x41e3f4u: goto L_41e3f4; case 0x41e418u: goto L_41e418; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_41e3c8:;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    c->r[14] = 0x41e3dcu; f_bfc394(c);
L_41e3dc:;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_41e580(c);
L_41e3f4:;
    c->r[0] = 0x161a7b4u;
    { uint32_t ea = 0x41e400u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e404u; f_5f8678(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41e43c; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x400u;
    goto L_41e480;
L_41e418:;
    c->r[0] = 0x161a790u;
    { uint32_t ea = 0x41e424u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e428u; f_5f8678(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41e460; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x440u;
    goto L_41e480;
L_41e43c:;
    c->r[0] = 0x161a76cu;
    { uint32_t ea = 0x41e448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e44cu; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41e49c; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1000u;
    goto L_41e480;
L_41e460:;
    c->r[0] = 0x161a748u;
    { uint32_t ea = 0x41e46cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e470u; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41e49c; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1040u;
L_41e480:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    c->r[14] = 0x41e494u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_41e49c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_41e4a4:;
    c->r[0] = 0x20u;
    c->r[14] = 0x41e4acu; f_7543d4(c);
    c->r[0] = 0x161d894u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x41e4bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41e4f8(Cpu *restrict c) {
    FN_ENTER(0x41e4f8u);
L_41e4f8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xb0u;
    c->r[7] = c->r[13] + 0x4u;
    c->r[8] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x41e51cu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x28u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x161d764u;
    { uint32_t ea = 0x41e538u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0xau;
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[6]); }
    c->r[14] = 0x41e550u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xffu;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x36u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 8);
    { uint32_t ea = c->r[13] + 0x37u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x38u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x41e574u; f_41e284(c);
    c->r[13] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41e580(Cpu *restrict c) {
    FN_ENTER(0x41e580u);
L_41e580:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1ccu;
    c->r[11] = c->r[0];
    c->r[0] = 0x1645d60u;
    c->r[9] = c->r[2];
    c->r[8] = c->r[1];
    { uint32_t ea = 0x41e5a0u + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_GT) { goto L_41ec64; }
    { uint32_t ea = c->r[8] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x41e5acu; f_754210(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x161a7c0u;
    { uint32_t ea = 0x41e5bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e5c0u; f_427ae4(c);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_41e5e4; }
    c->r[0] = 0x161a7a4u;
    c->r[1] = c->r[9];
    { uint32_t ea = 0x41e5d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    c->r[14] = 0x41e5e4u; f_3e6d4c(c);
L_41e5e4:;
    c->r[7] = c->r[13] + 0x60u;
    c->r[1] = 0x168u;
    c->r[0] = c->r[7];
    c->r[14] = 0x41e5f4u; f_15efdc4(c);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_41e62c; }
    { uint32_t ea = c->r[8] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    { uint32_t r = c->r[4] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_41ec64; }
    c->r[1] = c->r[8] + 0x32u;
    c->r[0] = c->r[13] + 0x60u;
    c->r[2] = 0x78u;
L_41e624:;
    c->r[14] = 0x41e628u; f_15efe30(c);
    goto L_41ea2c;
L_41e62c:;
    { uint32_t ea = c->r[8] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x33u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[6] = c->r[5] | (c->r[1] << 8);
    c->r[1] = c->r[0] - 0xeu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_41e74c; }
    c->r[0] = 0x1408f08u;
    (void)f_subs(c, c->r[6], 0x1fu);
    c->r[0] = 0x41e658u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x1332712u;
    c->r[4] = 0x41e664u + c->r[0];
    if (COND_HI) { goto L_41e9a4; }
    c->r[1] = 0x41e66cu + 0xcu;
    c->r[0] = (c->r[6] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x41e6f8u: goto L_41e6f8; case 0x41e784u: goto L_41e784; case 0x41e7f0u: goto L_41e7f0; case 0x41e804u: goto L_41e804; case 0x41e830u: goto L_41e830; case 0x41e864u: goto L_41e864; case 0x41e86cu: goto L_41e86c; case 0x41e9a4u: goto L_41e9a4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_41e6f8:;
    c->r[0] = 0x161a678u;
    { uint32_t ea = 0x41e704u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e708u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41e870; }
    c->r[1] = 0x128u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x3030u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_41e870; }
    c->r[1] = 0x3034u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = 0x161a640u;
    { uint32_t ea = 0x41e73cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e740u; f_428020(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41e7f4; }
    goto L_41e870;
L_41e74c:;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_41ea30; }
    c->r[0] = 0x161a454u;
    { uint32_t ea = 0x41e760u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_41ec64; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41e774u; f_85e524(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[13] + 0x60u;
    c->r[2] = 0x168u;
    goto L_41e624;
L_41e784:;
    c->r[0] = 0x161a5e8u;
    c->r[6] = c->r[6] - 0x4u;
    { uint32_t ea = 0x41e794u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e798u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41e7dc; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[2] = 0x128u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x3030u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_41e7dc; }
    c->r[1] = 0x3034u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = 0x161a5acu;
    { uint32_t ea = 0x41e7d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e7d4u; f_428020(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41e808; }
L_41e7dc:;
    c->r[1] = ~0x0u;
    c->r[0] = 0x0u;
    c->r[10] = 0x1u;
    c->r[5] = 0x0u;
    goto L_41e818;
L_41e7f0:;
    c->r[6] = c->r[6] - 0x8u;
L_41e7f4:;
    c->r[0] = ~0x0u;
    c->r[10] = 0x1u;
    c->r[5] = 0x1u;
    goto L_41e87c;
L_41e804:;
    c->r[6] = c->r[6] - 0xcu;
L_41e808:;
    c->r[1] = ~0x0u;
    c->r[0] = 0x0u;
    c->r[10] = 0x1u;
    c->r[5] = 0x1u;
L_41e818:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { goto L_41e894; }
    goto L_41e900;
L_41e830:;
    c->r[0] = 0x161a4dcu;
    c->r[1] = 0x1669u;
    c->r[6] = c->r[6] - 0x14u;
    c->r[10] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x41e84cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x166au;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_41e888;
L_41e864:;
    c->r[6] = c->r[6] - 0x18u;
    goto L_41e870;
L_41e86c:;
    c->r[6] = c->r[6] - 0x1cu;
L_41e870:;
    c->r[0] = ~0x0u;
    c->r[5] = 0x0u;
    c->r[10] = 0x1u;
L_41e87c:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_41e888:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_41e900; }
L_41e894:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41e8c8; }
    c->r[0] = 0x161a4d0u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x41e8acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    c->r[14] = 0x41e8b8u; f_3e6d4c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41e8c8; }
    c->r[4] = c->r[0] + 0x78u;
    goto L_41e970;
L_41e8c8:;
    c->r[0] = 0x161a2e0u;
    { uint32_t ea = 0x41e8d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e8d8u; f_5f8398(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x161a494u;
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = 0x41e8ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_41e914; }
    c->r[14] = 0x41e8f4u; f_475a30(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41e940; }
    goto L_41e954;
L_41e900:;
    c->r[0] = 0x133246au;
    c->r[4] = 0x41e90cu + c->r[0];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_41e984; }
    goto L_41e990;
L_41e914:;
    c->r[1] = c->r[6];
    c->r[14] = 0x41e91cu; f_47617c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41e940; }
    c->r[0] = 0x161a44cu;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x41e934u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e938u; f_476140(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41e954; }
L_41e940:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { c->r[1] = 0x514u; }
    if (COND_EQ) { c->r[1] = 0x534u; }
    c->r[4] = c->r[0] + c->r[1];
    goto L_41e970;
L_41e954:;
    c->r[0] = 0x161a26cu;
    c->r[1] = 0x1u;
    c->r[2] = 0xb4u;
    { uint32_t ea = 0x41e968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e96cu; f_75bc4c(c);
    c->r[4] = c->r[0];
L_41e970:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41ec64; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_41e990; }
L_41e984:;
    c->r[0] = 0x0u;
    c->r[1] = 0xa1u;
    c->r[14] = 0x41e990u; f_74f260(c);
L_41e990:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_41ea2c; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_41e9c4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
L_41e9a4:;
    c->r[0] = 0x161a21cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x7u;
    { uint32_t ea = 0x41e9b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e9bcu; f_75bac0(c);
    c->r[2] = c->r[0];
    goto L_41ea1c;
L_41e9c4:;
    c->r[0] = 0x161a1f8u;
    c->r[1] = 0x0u;
    c->r[2] = 0x7u;
    c->r[3] = 0x43u;
    { uint32_t ea = 0x41e9dcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41e9e0u; f_75bac0(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[13] + 0x20u;
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x41ea00u; f_15eff2c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x7u;
    c->r[14] = 0x41ea14u; f_75bac0(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
L_41ea1c:;
    c->r[0] = c->r[13] + 0x60u;
    c->r[1] = 0x168u;
    c->r[3] = c->r[4];
    c->r[14] = 0x41ea2cu; f_15eff2c(c);
L_41ea2c:;
    { uint32_t ea = c->r[8] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41ea30:;
    (void)f_subs(c, c->r[0], 0xdu);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    if (COND_HI) { goto L_41ed14; }
    c->r[1] = 0x1u;
    c->r[2] = 0x3fdeu;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41ec6c; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0xcu);
    if (COND_HI) { goto L_41eae0; }
    c->r[3] = 0x1fefu;
    c->r[6] = 0x1u;
    { uint32_t r = c->r[6] & shc_lsr(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41eae0; }
    c->r[2] = 0x1408b74u;
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[2] = 0x41ea7cu + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_41eae0; }
    c->r[0] = 0x161a2ecu;
    { uint32_t ea = 0x41ea94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41ea98u; f_477224(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41eae0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x41eaacu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_41eae0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x41eac0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x41ead4u: goto L_41ead4; case 0x41ed08u: goto L_41ed08; case 0x41ed24u: goto L_41ed24; case 0x41ed30u: goto L_41ed30; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_41ead4:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = 0x0u;
    goto L_41eae8;
L_41eae0:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = 0x6u;
L_41eae8:;
    c->r[14] = 0x41eaecu; f_75415c(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
L_41eaf0:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13] + 0x20u;
    c->r[11] = 0x270fu;
    c->r[9] = 0x0u;
    c->r[4] = 0x0u;
L_41eb08:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x41eb18u; f_9ca340(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41eb34; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_EQ) { goto L_41eb54; }
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_EQ) { goto L_41eb5c; }
L_41eb34:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[11]);
    if (COND_HI) { goto L_41eb78; }
    c->r[9] = c->r[0] + c->r[9];
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41eb08; }
    goto L_41eb78;
L_41eb54:;
    c->r[0] = 0x1u;
    goto L_41eb60;
L_41eb5c:;
    c->r[0] = 0x2u;
L_41eb60:;
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + c->r[9];
    { uint32_t ea = c->r[7] + c->r[9]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[4] = c->r[7] + c->r[0]; }
L_41eb78:;
    c->r[0] = 0x161a04cu;
    { uint32_t ea = c->r[8] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = 0x41eb8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[8] + 0xau;
    c->pc = c->r[7]; c->r[14] = 0x41eba8u; rt_dispatch(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_41ebfc; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x78u;
    c->r[0] = c->r[0] & 0xfeu;
    { uint32_t ea = c->r[8] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x32u;
    c->r[14] = 0x41ebccu; f_15efe30(c);
    c->r[0] = 0x1645720u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->r[4] = 0x41ebe0u + c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41ebf0u; f_41e580(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
L_41ebfc:;
    c->r[0] = 0x1619fccu;
    c->r[2] = 0x45d0u;
    { uint32_t ea = 0x41ec0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x12000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41ec48; }
    c->r[1] = 0x45d4u;
    c->r[4] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[4]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_41ec54; }
    c->r[14] = 0x41ec38u; f_3e4d0c(c);
    c->v.s[2] = 0x42700000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[4], c->v.s[0]);
    goto L_41ec54;
L_41ec48:;
    c->r[0] = c->r[2] & ~0x80000001u;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_41ec54:;
    c->r[0] = 0x161d0ecu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x41ec64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_41ec64:;
    c->r[13] = c->r[13] + 0x1ccu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_41ec6c:;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_41ed14; }
    c->r[0] = 0x161a894u;
    { uint32_t ea = 0x41ec80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x161a0f0u;
    { uint32_t ea = 0x41ec8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41ec90u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41eaf0; }
    c->r[0] = 0x1619f10u;
    { uint32_t ea = 0x41eca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41eca8u; f_5f8634(c);
    (void)f_subs(c, c->r[9], 0x3u);
    if (COND_HI) { goto L_41eaf0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41eaf0; }
    c->r[0] = 0x1619ef4u;
    c->r[1] = c->r[9];
    { uint32_t ea = 0x41ecc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41ecccu; f_458ffc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_41eaf0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x41ece0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_41eaf0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x41ecf4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x41ead4u: goto L_41ead4; case 0x41ed08u: goto L_41ed08; case 0x41ed24u: goto L_41ed24; case 0x41ed30u: goto L_41ed30; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_41ed08:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = 0x1u;
    goto L_41eae8;
L_41ed14:;
    c->r[0] = 0x161a7f4u;
    { uint32_t ea = 0x41ed20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_41eaf0;
L_41ed24:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = 0x2u;
    goto L_41eae8;
L_41ed30:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = 0x3u;
    goto L_41eae8;
}
void f_41edb8(Cpu *restrict c) {
    FN_ENTER(0x41edb8u);
L_41edb8:;
    c->r[0] = 0x161cf88u;
    { uint32_t ea = 0x41edc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_41ee24; }
    c->r[0] = 0x1619fa4u;
    c->r[1] = 0x161cf60u;
    { uint32_t ea = 0x41ede0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    { uint32_t ea = 0x41edecu + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    ST32(c->r[0], c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { return; }
    c->r[0] = 0x161cf3cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x41ee0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x161cf38u;
    { uint32_t ea = 0x41ee18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x161cf28u;
    { uint32_t ea = 0x41ee24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_41ee24:;
    return;
}
void f_41ee40(Cpu *restrict c) {
    FN_ENTER(0x41ee40u);
L_41ee40:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[6] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x41ee5cu; f_bfba6c(c);
    c->r[1] = 0x161ce34u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41ee78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0xefbeu;
    { uint32_t ea = c->r[13] + 0x20u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x41eea4u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41eeb0(Cpu *restrict c) {
    FN_ENTER(0x41eeb0u);
L_41eeb0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[6] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x41eeccu; f_bfba6c(c);
    c->r[1] = 0x161cdc4u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41eee8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = 0x5fu;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4d4du;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x5f590000u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5f5fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x55440000u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x41ef34u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41ef40(Cpu *restrict c) {
    FN_ENTER(0x41ef40u);
L_41ef40:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[5] = c->r[1];
    c->r[14] = 0x41ef58u; f_bfba6c(c);
    c->r[1] = 0x161cd3cu;
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41ef70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x101u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_41efa4; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x41efa4u; f_bfc3d8(c);
L_41efa4:;
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41efb0(Cpu *restrict c) {
    FN_ENTER(0x41efb0u);
L_41efb0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    c->r[14] = 0x41efccu; f_bfba6c(c);
    c->r[1] = 0x161ccc8u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41efe4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_41f02c; }
    c->r[0] = 0x4u;
    (void)f_adds(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[13] + 0x11u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_41f02c; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x41f02cu; f_bfc3d8(c);
L_41f02c:;
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41f038(Cpu *restrict c) {
    FN_ENTER(0x41f038u);
L_41f038:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[6] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x41f054u; f_bfba6c(c);
    c->r[1] = 0x161cc3cu;
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41f070u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = 0xbeefu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbeef0000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x41f0a4u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41f0b0(Cpu *restrict c) {
    FN_ENTER(0x41f0b0u);
L_41f0b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[5] = c->r[1];
    c->r[14] = 0x41f0c8u; f_bfba6c(c);
    c->r[1] = 0x161cbccu;
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41f0e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1001u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_41f114; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x41f114u; f_bfc3d8(c);
L_41f114:;
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41f120(Cpu *restrict c) {
    FN_ENTER(0x41f120u);
L_41f120:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[5] = c->r[1];
    c->r[14] = 0x41f138u; f_bfba6c(c);
    c->r[1] = 0x161cb5cu;
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41f150u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2001u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_41f184; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x41f184u; f_bfc3d8(c);
L_41f184:;
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41f190(Cpu *restrict c) {
    FN_ENTER(0x41f190u);
L_41f190:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[14] = 0x41f1acu; f_bfba6c(c);
    c->r[2] = 0x161cae8u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + 0x1au;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x41f1c4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[2] = 0x36u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[14] = 0x41f1ecu; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_41f214; }
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x41f20cu; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_41f214:;
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    c->r[14] = 0x41f224u; f_bfc394(c);
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41f230(Cpu *restrict c) {
    FN_ENTER(0x41f230u);
L_41f230:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x110u;
    c->r[5] = c->r[13];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x41f248u; f_bfba6c(c);
    c->r[1] = 0x161ca50u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41f25cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x41f280u; f_754210(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x80u;
    c->r[2] = c->r[5];
    c->r[3] = 0x10u;
    if (COND_NE) { c->r[1] = 0x40u; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x41f2acu; f_bfc2ac(c);
    c->r[13] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41f2b8(Cpu *restrict c) {
    FN_ENTER(0x41f2b8u);
L_41f2b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x118u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x41f2ccu; f_bfba6c(c);
    c->r[1] = 0x161c9ccu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41f2e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x801u;
    { uint32_t ea = c->r[13] + 0x10u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1619a78u;
    { uint32_t ea = 0x41f304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41f308u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41f350; }
    c->r[0] = 0x1619a60u;
    { uint32_t ea = 0x41f31cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41f320u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41f350; }
    c->r[0] = 0x1619a48u;
    { uint32_t ea = 0x41f334u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41f338u; f_427b10(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    c->r[14] = 0x41f350u; f_bfc3d8(c);
L_41f350:;
    c->r[13] = c->r[13] + 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41f368(Cpu *restrict c) {
    FN_ENTER(0x41f368u);
L_41f368:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x110u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13];
    c->r[14] = 0x41f37cu; f_bfba6c(c);
    c->r[1] = 0x161c91cu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x41f390u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x41f3b4u; f_754210(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x80u;
    if (COND_NE) { c->r[1] = 0x40u; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x16199a4u;
    { uint32_t ea = 0x41f3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41f3dcu; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41f3f8; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13];
    c->r[0] = c->r[4];
    c->r[3] = 0x10u;
    c->r[14] = 0x41f3f8u; f_bfc2ac(c);
L_41f3f8:;
    c->r[13] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_41f408(Cpu *restrict c) {
    FN_ENTER(0x41f408u);
L_41f408:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_LS) { { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_LS) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_HI) { goto L_41f798; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x41f430u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x41f44cu: goto L_41f44c; case 0x41f480u: goto L_41f480; case 0x41f5ccu: goto L_41f5cc; case 0x41f5f8u: goto L_41f5f8; case 0x41f64cu: goto L_41f64c; case 0x41f6f8u: goto L_41f6f8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_41f44c:;
    c->r[0] = 0x161c914u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x19u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = 0x41f460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + (c->r[4] << 1); ST8(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    c->r[0] = 0x161c8f4u;
    { uint32_t ea = 0x41f474u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    goto L_41f794;
L_41f480:;
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41f4a8; }
    c->r[0] = 0x161c8d0u;
    { uint32_t ea = 0x41f498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41f4a8:;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41f4cc; }
    c->r[0] = 0x161c8acu;
    { uint32_t ea = 0x41f4bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41f4cc:;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41f4f0; }
    c->r[0] = 0x161c888u;
    { uint32_t ea = 0x41f4e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41f4f0:;
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41f514; }
    c->r[0] = 0x161c864u;
    { uint32_t ea = 0x41f504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41f514:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41f538; }
    c->r[0] = 0x161c840u;
    { uint32_t ea = 0x41f528u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41f538:;
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41f55c; }
    c->r[0] = 0x161c81cu;
    { uint32_t ea = 0x41f54cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41f55c:;
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41f584; }
    c->r[0] = 0x161c7f4u;
    c->r[2] = 0xefffu;
    { uint32_t ea = 0x41f574u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
L_41f584:;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_41f5a8; }
    c->r[0] = 0x161c7ccu;
    { uint32_t ea = 0x41f59cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
L_41f5a8:;
    { uint32_t ea = c->r[5] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x161c7a8u;
    { uint32_t ea = 0x41f5c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    goto L_41f794;
L_41f5cc:;
    c->r[2] = 0x161c794u;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = 0x41f5dcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[4] << 3); ST32(ea, c->r[0]); c->r[2] = ea; }
    c->r[0] = 0x161c77cu;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x41f5ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x100u;
    goto L_41f794;
L_41f5f8:;
    c->r[0] = 0x161c738u;
    c->r[1] = c->r[5] + 0x1au;
    c->r[2] = 0x36u;
    { uint32_t ea = 0x41f60cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x41f610u; f_15efe30(c);
    c->r[0] = 0x161975cu;
    { uint32_t ea = c->r[6] + 0x26u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x41f620u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41f62cu; f_42d374(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41f634u; f_42d390(c);
    c->r[0] = 0x161c728u;
    { uint32_t ea = 0x41f640u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    goto L_41f794;
L_41f64c:;
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[1] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[5] - 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] - 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[8] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 8);
    c->r[7] = c->r[6] | (c->r[2] << 8);
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[7] = 0x161c6e8u;
    { uint32_t ea = 0x41f684u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST8(ea, c->r[0]); c->r[7] = ea; }
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x9u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x5u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[3]); }
    c->r[0] = c->r[14] | (c->r[0] << 8);
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[2] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[0]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[2]); }
    c->r[3] = c->r[12] | (c->r[8] << 8);
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[1] | (c->r[0] << 8);
    c->r[2] = c->r[3] | (c->r[2] << 16);
    { uint32_t ea = c->r[7] + 0x4u; ST8(ea, c->r[2]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x161c67cu;
    { uint32_t ea = c->r[7] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = 0x41f6ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000u;
    goto L_41f794;
L_41f6f8:;
    c->r[0] = 0x161c648u;
    c->r[1] = c->r[4] + (c->r[4] << 3);
    c->r[2] = 0x48u;
    { uint32_t ea = 0x41f70cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->r[1] = c->r[5] + 0x5cu;
    c->r[14] = 0x41f714u; f_15efe30(c);
    c->r[0] = 0x161c630u;
    c->r[1] = c->r[5] + 0xa4u;
    c->r[2] = 0x48u;
    { uint32_t ea = 0x41f728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 6);
    c->r[14] = 0x41f72cu; f_15efe30(c);
    c->r[0] = 0x161c61cu;
    c->r[1] = c->r[4] + (c->r[4] << 5);
    c->r[2] = 0x21u;
    { uint32_t ea = 0x41f740u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[5] + 0xe4u;
    c->r[14] = 0x41f748u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0x105u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 8);
    c->r[1] = c->r[2] | (c->r[3] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x161c5f0u;
    { uint32_t ea = 0x41f770u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    c->r[0] = 0x161c5e4u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x41f780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[1]); }
    c->r[0] = 0x161c5dcu;
    { uint32_t ea = 0x41f78cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
L_41f794:;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
L_41f798:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41f7fc(Cpu *restrict c) {
    FN_ENTER(0x41f7fcu);
L_41f7fc:;
    c->r[1] = 0x161ba28u;
    { uint32_t ea = 0x41f808u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_41f814(Cpu *restrict c) {
    FN_ENTER(0x41f814u);
L_41f814:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161ba08u;
    { uint32_t ea = 0x41f828u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x161c480u;
    { uint32_t ea = 0x41f838u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41f838u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_41f854(Cpu *restrict c) {
    FN_ENTER(0x41f854u);
L_41f854:;
    return;
}
void f_41f858(Cpu *restrict c) {
    FN_ENTER(0x41f858u);
L_41f858:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x41f878u; f_d21388(c);
    c->r[0] = 0x0u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1619bb0u;
    { uint32_t ea = 0x41f89cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x8u; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x41f8b4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[1] = 0x1c00u;
    c->r[2] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0x41f8c8u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[2] = 0x1c00u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x41f8d8u; f_15efe30(c);
    c->r[0] = c->r[13];
    c->r[1] = 0x1c00u;
    c->r[2] = 0x6u;
    c->r[3] = 0x0u;
    c->r[14] = 0x41f8ecu; f_5cebdc(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x41f8f8u; f_d215b4(c);
    { uint32_t ea = c->r[13] + 4u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_41f944; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x41f918u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x41f92cu; rt_dispatch(c);
    c->r[0] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_41f944; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_41f95c;
L_41f944:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x41f95cu; rt_dispatch(c);
L_41f95c:;
    c->r[0] = c->r[13];
    c->r[14] = 0x41f964u; f_5cf21c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x41f96cu; f_d213cc(c);
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41f978(Cpu *restrict c) {
    FN_ENTER(0x41f978u);
L_41f978:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x41f998u; f_d219cc(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x41f9b4u; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x1619a84u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x41f9c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x41f9e0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0x41f9f4u; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x41fa10u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[6] = c->r[13];
    c->r[1] = 0x1c00u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[6];
    c->r[14] = 0x41fa2cu; f_5cf294(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0x8u;
    c->r[2] = 0x1c00u;
    c->r[14] = 0x41fa3cu; f_15efe30(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x41fa44u; f_5cf21c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x41fa4cu; f_d21a04(c);
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41fa58(Cpu *restrict c) {
    FN_ENTER(0x41fa58u);
L_41fa58:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[2] = 0x1c00u;
    c->r[14] = 0x41fa68u; f_15efdd0(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_41fa6c(Cpu *restrict c) {
    FN_ENTER(0x41fa6cu);
L_41fa6c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xc10u;
    c->r[13] = c->r[13] - 0x1000u;
    c->r[6] = c->r[1];
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_41fad8; }
    c->r[7] = c->r[13] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x41fa98u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[6];
    c->r[2] = 0x1c00u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x161c208u;
    { uint32_t ea = 0x41fab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x8u;
    c->r[14] = 0x41fac0u; f_15efdd0(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x41fad8u; f_3e5270(c);
L_41fad8:;
    c->r[13] = c->r[13] + 0xc10u;
    c->r[13] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_41fae8(Cpu *restrict c) {
    FN_ENTER(0x41fae8u);
L_41fae8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[9] = c->r[0];
    c->r[0] = 0xfadeu;
    c->r[5] = c->r[1];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfade0000u;
    c->r[2] = c->r[5] + 0x8u;
    c->r[3] = c->r[9] + 0xb4u;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0xc0u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = c->r[5] + 0x1cu;
    c->r[1] = c->r[9] + 0xc8u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[5] + 0x48u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[1] = c->r[9] + 0xf4u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[5] + 0x74u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[1] = c->r[9] + 0x120u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[5] + 0xa0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[1] = c->r[9] + 0x14cu;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[5] + 0xccu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[1] = c->r[9] + 0x178u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[5] + 0xf8u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[1] = c->r[9] + 0x1a4u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[5] + 0x124u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[1] = c->r[9] + 0x1d0u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[9] + 0x1f8u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[1] = c->r[5] + 0x14cu;
    c->r[2] = 0x7au;
    c->r[14] = 0x41fbd8u; f_15efdd0(c);
    c->r[0] = 0x1ccu;
    c->r[1] = 0x278u;
    c->r[3] = c->r[5] + 0x230u;
    c->r[12] = c->r[9] + 0x2dcu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1d4u;
    c->r[1] = 0x280u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1dcu;
    c->r[1] = 0x288u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1e4u;
    c->r[1] = 0x290u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1ecu;
    c->r[1] = 0x298u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1f4u;
    c->r[1] = 0x2a0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1fcu;
    c->r[1] = 0x2a8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x204u;
    c->r[1] = 0x2b0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x20cu;
    c->r[1] = 0x2b8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x214u;
    c->r[1] = 0x2c0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x21cu;
    c->r[1] = 0x2c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x224u;
    c->r[1] = 0x2d0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x22cu;
    c->r[1] = 0x2d8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = c->r[9] + 0x2ecu;
    c->r[1] = c->r[5] + 0x240u;
    c->r[2] = 0x21au;
    c->r[14] = 0x41fcc8u; f_15efdd0(c);
    c->r[0] = 0x460u;
    c->r[1] = 0x50cu;
    c->r[12] = c->r[9] + 0x570u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x468u;
    c->r[1] = 0x514u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x470u;
    c->r[1] = 0x51cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x478u;
    c->r[1] = 0x524u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x480u;
    c->r[1] = 0x52cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x488u;
    c->r[1] = 0x534u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x490u;
    c->r[1] = 0x53cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x498u;
    c->r[1] = 0x544u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4a0u;
    c->r[1] = 0x54cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4a8u;
    c->r[1] = 0x554u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4b0u;
    c->r[1] = 0x55cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4b8u;
    c->r[1] = 0x564u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x4c0u;
    c->r[1] = 0x56cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4ccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4d0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = 0x4d4u;
    c->r[2] = 0x8cu;
    c->r[1] = c->r[5] + c->r[0];
    c->r[0] = c->r[9] + 0x580u;
    c->r[14] = 0x41fdc4u; f_15efdd0(c);
    c->r[6] = c->r[9] + 0xacu;
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x41fdd8u; f_46fd98(c);
    c->r[0] = 0x1618dd4u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x41fde8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41fdecu; f_462838(c);
    c->r[7] = c->r[13] + 0x4u;
    c->r[0] = c->r[7];
    c->r[14] = 0x41fdf8u; f_2daba4(c);
    c->r[0] = 0x1u;
    c->r[4] = 0xffe0u;
    c->r[1] = c->r[7];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[4];
    c->r[0] = c->r[0] | 0x16u;
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x41fe28u; f_46e964(c);
    { uint32_t ea = c->r[13] + 0xau; ST16(ea, c->r[8]); }
    c->r[1] = c->r[7];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[4];
    c->r[0] = c->r[0] | 0x17u;
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x41fe50u; f_46e964(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & c->r[4];
    c->r[0] = c->r[0] | 0x18u;
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x41fe74u; f_46e964(c);
    c->r[0] = c->r[9] + 0xb0u;
    c->r[1] = 0x37u;
    c->r[2] = 0x0u;
    c->r[14] = 0x41fe84u; f_2e7ec0(c);
    c->r[0] = 0x400u;
    c->r[1] = 0x80u;
    { uint32_t ea = c->r[9] + 0x3acu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x41fe98u; f_46fe44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41feac; }
    { uint32_t ea = c->r[9] + 0x3acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x80u;
    { uint32_t ea = c->r[9] + 0x3acu; ST32(ea, c->r[0]); }
L_41feac:;
    c->r[0] = c->r[5];
    c->r[1] = 0x100u;
    c->r[14] = 0x41feb8u; f_46fe44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41fecc; }
    { uint32_t ea = c->r[9] + 0x3acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x100u;
    { uint32_t ea = c->r[9] + 0x3acu; ST32(ea, c->r[0]); }
L_41fecc:;
    c->r[0] = c->r[9] + 0x5c0u;
    c->r[1] = c->r[9] + 0x10u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[9] + 0x368u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[1] = c->r[9] + 0x30u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = 0x1618e7cu;
    { uint32_t ea = 0x41ff04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41ff0cu; f_477454(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[9] + 0x50u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_41ff30; }
    c->r[2] = 0x514u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = 0x20u;
    c->r[14] = 0x41ff2cu; f_15efe30(c);
    goto L_41ff54;
L_41ff30:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
L_41ff54:;
    c->r[0] = 0x1618f5cu;
    { uint32_t ea = 0x41ff60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41ff64u; f_5d8a4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_41ffa0; }
    c->r[0] = 0x3acu;
    c->r[5] = c->r[9] + 0x70u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x180u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_41ffc4; }
    c->r[0] = c->r[9] + 0x32cu;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[5] = c->r[5] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[5] = c->r[5] + 20u; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    goto L_41fff8;
L_41ffa0:;
    c->r[0] = c->r[9] + 0x32cu;
    c->r[1] = c->r[9] + 0x70u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    goto L_41fff8;
L_41ffc4:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3cu;
    c->r[14] = 0x41ffd0u; f_15efdc4(c);
    c->r[0] = 0x1618bf0u;
    c->r[1] = 0x7u;
    c->r[2] = 0x55u;
    { uint32_t ea = 0x41ffe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x41ffe8u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x41fff8u; f_9bd990(c);
L_41fff8:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x420000u; f_2dad24(c);
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_420018(Cpu *restrict c) {
    FN_ENTER(0x420018u);
L_420018:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x6cu;
    c->r[9] = c->r[1];
    c->r[4] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[8]); }
    c->r[14] = 0x420050u; f_9bb638(c);
    c->r[1] = 0x133c601u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x420064u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x580u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x48u;
    c->r[10] = c->r[0] | 0x4u;
    c->r[0] = 0x1339f03u;
    c->r[0] = 0x4200d8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_420118;
L_420118:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x420140u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0xcu);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_420118; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x58cu;
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133c4a0u;
    c->r[0] = 0x4201ccu + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_4201cc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x4201f4u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x24u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_4201cc; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0xb0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e40u;
    c->r[0] = 0x42027cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e51u;
    c->r[0] = 0x420288u + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e5du;
    c->r[0] = 0x420294u + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e6fu;
    c->r[0] = 0x4202a0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e63u;
    c->r[0] = 0x4202acu + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e57u;
    c->r[0] = 0x4202b8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e5fu;
    c->r[0] = 0x4202c4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e53u;
    c->r[0] = 0x4202d0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e47u;
    c->r[0] = 0x4202dcu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e3bu;
    c->r[0] = 0x4202e8u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e2fu;
    c->r[0] = 0x4202f4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1339e23u;
    c->r[0] = 0x420300u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_420300:;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_HI) { goto L_420974; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0x420314u; f_2e0d90(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x420340u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_42039c; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_42039c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x4203c8u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x6u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420424; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420424:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x420450u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4204ac; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_4204ac:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x4204d8u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0xau;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420534; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420534:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x420560u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4205bc; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_4205bc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x4205e8u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0xeu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420644; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420644:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x420670u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4206cc; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_4206cc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x4206f8u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420754; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420754:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x420780u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4207dc; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_4207dc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x420808u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420864; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420864:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x420890u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x20u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4208ec; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_4208ec:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0x420918u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_420974:;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x7u);
    if (COND_NE) { goto L_420300; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x4209acu; f_9bb638(c);
    c->r[1] = 0x133bcbfu;
    c->r[8] = 0x6u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4209c4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[14] + 0x3acu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[1] = c->r[14] + 0x2ecu;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420a10; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420a10:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x420a3cu; f_9bb638(c);
    c->r[1] = 0x133bc51u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x420a50u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420a90; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420a90:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x420ac0u; f_9bb638(c);
    c->r[1] = 0x133bbe0u;
    c->r[8] = 0x4u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x420ad8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x2f0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420b1c; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420b1c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x420b48u; f_9bb638(c);
    c->r[1] = 0x133bb75u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x420b5cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x5u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420ba0; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420ba0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x420bd0u; f_9bb638(c);
    c->r[1] = 0x133bb04u;
    c->r[8] = 0x4u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x420be8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x6u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420c30; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420c30:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x420c5cu; f_9bb638(c);
    c->r[1] = 0x133ba92u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x420c70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x7u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2f4u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133ba4cu;
    c->r[0] = 0x420cd4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_420cd4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[11]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x420cfcu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x8u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_420cd4; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0x2fcu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b9b9u;
    c->r[0] = 0x420d84u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_420d84:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[11]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x420dacu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x8u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_420d84; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0x304u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b929u;
    c->r[0] = 0x420e34u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_420e34:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[11]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x420e5cu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x10u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_420e34; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0x314u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b898u;
    c->r[0] = 0x420ee4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_420ee4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[11]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x420f0cu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0xcu);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_420ee4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x420fa0u; f_9bb638(c);
    c->r[1] = 0x133b7e6u;
    c->r[8] = 0x4u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x420fb8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x320u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_420ffc; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_420ffc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x421028u; f_9bb638(c);
    c->r[1] = 0x133b783u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x42103cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x35u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_421080; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_421080:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x4210b0u; f_9bb638(c);
    c->r[1] = 0x133b717u;
    c->r[8] = 0x4u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4210c8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x36u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_421110; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_421110:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[14] = 0x42113cu; f_9bb638(c);
    c->r[1] = 0x133b6b3u;
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x421150u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x37u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x324u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b672u;
    c->r[0] = 0x4211b4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_4211b4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x4211dcu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x8u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_4211b4; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b5dcu;
    c->r[0] = 0x421264u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_421264:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x42128cu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x20u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_421264; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0x30u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b53bu;
    c->r[0] = 0x421314u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_421314:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x42133cu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x20u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_421314; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b49cu;
    c->r[0] = 0x4213c4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_4213c4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x4213ecu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x20u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_4213c4; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + 0x70u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x133b400u;
    c->r[0] = 0x421474u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_421474:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x42149cu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x48u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[9], 0x3cu);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_421474; }
    c->r[13] = c->r[13] + 0x6cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_421558(Cpu *restrict c) {
    FN_ENTER(0x421558u);
L_421558:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x218u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[6] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[8] = c->r[3];
    c->r[9] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x42157cu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[7] = c->r[6] + 0xacu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x161a738u;
    { uint32_t ea = 0x421594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[14] = 0x4215a0u; f_46e354(c);
    c->r[0] = c->r[6] + 0x8u;
    c->r[1] = 0xa4u;
    c->r[14] = 0x4215acu; f_15efdc4(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x4215b4u; f_46e43c(c);
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    c->r[2] = 0x0u;
    c->r[14] = 0x4215c4u; f_41fae8(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x4215dcu; f_bfc3d8(c);
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[14] = 0x4215e8u; f_46e50c(c);
    c->r[13] = c->r[13] + 0x218u;
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_4215f8(Cpu *restrict c) {
    FN_ENTER(0x4215f8u);
L_4215f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161a6c0u;
    { uint32_t ea = 0x42160cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xacu; }
    c->r[14] = 0x421618u; f_46e50c(c);
    c->r[0] = 0x1619c0cu;
    { uint32_t ea = 0x421624u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_421638(Cpu *restrict c) {
    FN_ENTER(0x421638u);
L_421638:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[2];
    c->r[8] = c->r[1];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_4218d8; }
    c->r[0] = 0x1617558u;
    { uint32_t ea = 0x42165cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x75u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4218d8; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_HI) { goto L_4218d8; }
    c->r[0] = 0x161a6fcu;
    { uint32_t ea = 0x42167cu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[10] << 1);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_4218d8; }
    c->r[0] = c->r[8] + 0xb0u;
    c->r[14] = 0x421694u; f_2e7b74(c);
    c->r[11] = c->r[0];
    c->r[0] = 0x1617518u;
    { uint32_t ea = 0x4216a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4216a8u; f_4613f4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42171c; }
    c->r[0] = 0x16174fcu;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x4216c0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x16174f4u;
    { uint32_t ea = 0x4216c8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x16174e4u;
    { uint32_t ea = 0x4216d0u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_4216cc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x4216d8u; f_4613c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_421708; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x4216ecu; f_2e7b74(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[11];
    c->r[3] = 0x0u;
    c->r[14] = 0x421700u; f_5f8d34(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4218d8; }
L_421708:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[14] = 0x421714u; f_4613f4(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_4216cc; }
L_42171c:;
    c->r[0] = 0x1617494u;
    { uint32_t ea = 0x421728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42172cu; f_45e378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4217a0; }
    c->r[0] = 0x1617478u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x421744u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1617470u;
    { uint32_t ea = 0x42174cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1617460u;
    { uint32_t ea = 0x421754u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_421750:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x42175cu; f_4595e4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42178c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[14] = 0x421770u; f_2e7b74(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[11];
    c->r[3] = 0x0u;
    c->r[14] = 0x421784u; f_5f8d34(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4218d8; }
L_42178c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[14] = 0x421798u; f_45e378(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_421750; }
L_4217a0:;
    c->r[0] = 0x161a5c8u;
    c->r[7] = 0x560u;
    c->r[4] = c->r[8] + 0xacu;
    { uint32_t ea = 0x4217b4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + (c->r[10] << 3); ST32(ea, c->r[0]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x161a540u;
    { uint32_t ea = 0x4217c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[10] * c->r[7] + c->r[0]; c->r[6] = r; }
    c->r[0] = c->r[6];
    c->r[14] = 0x4217d0u; f_46e43c(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x4217f4u; f_46e600(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x3u;
    c->r[2] = 0x0u;
    c->r[14] = 0x421804u; f_46f3fc(c);
    c->r[1] = c->r[8] + 0x10u;
    c->r[0] = 0x514u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    c->r[1] = c->r[8] + 0x30u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); }
    c->r[0] = c->r[6] + 0x2bcu;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    c->r[1] = c->r[8] + 0x50u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); }
    c->r[0] = c->r[6] + 0x2dcu;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); }
    c->r[0] = 0x1617660u;
    { uint32_t ea = 0x42185cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421860u; f_5d8a4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4218ac; }
    c->r[0] = 0x161a490u;
    c->r[1] = 0x300u;
    { uint32_t ea = 0x421878u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[10] * c->r[7] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0x280u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x180u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4218e0; }
    c->r[0] = c->r[8] + 0x70u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[5] = c->r[5] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[5] = c->r[5] + 20u; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_4218ac:;
    c->r[0] = 0x161a44cu;
    c->r[1] = c->r[8] + 0x70u;
    { uint32_t ea = 0x4218bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[10] * c->r[7] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[0] + 0x280u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
L_4218d8:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_4218e0:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3cu;
    c->r[14] = 0x4218ecu; f_15efd7c(c);
    c->r[0] = 0x16172d4u;
    c->r[1] = 0x7u;
    c->r[2] = 0x55u;
    { uint32_t ea = 0x421900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421904u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_9bd990(c);
}
void f_42195c(Cpu *restrict c) {
    FN_ENTER(0x42195cu);
L_42195c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161a408u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x421970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x161a3f4u;
    { uint32_t ea = 0x421988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x161a358u;
    { uint32_t ea = 0x4219b0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x4219b4u; f_46e43c(c);
    c->r[0] = c->r[4] + 0x560u;
    c->r[14] = 0x4219bcu; f_46e43c(c);
    c->r[0] = c->r[4] + 0xac0u;
    c->r[14] = 0x4219c4u; f_46e43c(c);
    c->r[0] = 0x1020u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_46e43c(c);
}
void f_4219e0(Cpu *restrict c) {
    FN_ENTER(0x4219e0u);
L_4219e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[11] = c->r[1];
    c->r[14] = 0x4219f8u; f_bfba6c(c);
    c->r[1] = 0x161a2c0u;
    c->r[6] = 0x0u;
    c->r[10] = c->r[0] + 0x20u;
    c->r[4] = c->r[0] + 0x18u;
    c->r[5] = c->r[0] + 0x8u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x421a1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = 0x1617760u;
    { uint32_t ea = c->r[13] + 0x38u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3au; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x421a64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1617754u;
    { uint32_t ea = 0x421a70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_421a70:;
    c->r[0] = (c->r[6] >> 5);
    c->r[1] = c->r[6] & 0x1fu;
    (void)f_subs(c, c->r[6], 0x3fu);
    c->r[0] = c->r[11] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & sh_lsl(c->r[7], c->r[1]);
    if (COND_HI) { goto L_421ae8; }
    c->r[1] = 0x20u - c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[8] = sh_lsl(c->r[7], c->r[6]);
    c->r[9] = sh_lsr(c->r[7], c->r[1]);
    c->r[1] = c->r[6] - 0x20u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[9] = sh_lsl(c->r[7], c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[3] = c->r[3] | c->r[9]; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[6];
    if (COND_GE) { c->r[8] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[2] = c->r[2] | c->r[8]; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421ad4u; f_3a6340(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[9] = c->r[0]; }
    if (COND_EQ) { c->r[8] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_421b74;
L_421ae8:;
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_421b18; }
    c->r[0] = 0x60u - c->r[6];
    c->r[1] = c->r[6] - 0x60u;
    c->r[0] = sh_lsr(c->r[7], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[0] = sh_lsl(c->r[7], c->r[1]); }
    c->r[1] = c->r[6] - 0x40u;
    c->r[1] = sh_lsl(c->r[7], c->r[1]);
    if (COND_GE) { c->r[1] = 0x0u; }
    goto L_421b20;
L_421b18:;
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
L_421b20:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[3] = c->r[3] | c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] | c->r[1];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421b40u; f_3a6340(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[10];
    c->r[9] = 0x0u;
    if (COND_NE) { goto L_421b74; }
    c->r[0] = 0x60u - c->r[6];
    c->r[9] = sh_lsr(c->r[7], c->r[0]);
    c->r[0] = c->r[6] - 0x60u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { c->r[9] = sh_lsl(c->r[7], c->r[0]); }
    c->r[0] = c->r[6] - 0x40u;
    c->r[8] = sh_lsl(c->r[7], c->r[0]);
    c->r[0] = c->r[10];
    if (COND_GE) { c->r[8] = 0x0u; }
L_421b74:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x63u);
    c->r[2] = c->r[2] | c->r[8];
    c->r[1] = c->r[3] | c->r[9];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_421a70; }
    c->r[0] = 0x161761cu;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = 0x10u;
    { uint32_t ea = 0x421ba8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x39u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x421bbcu; f_bfc394(c);
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_421bd4(Cpu *restrict c) {
    FN_ENTER(0x421bd4u);
L_421bd4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[1];
    c->r[14] = 0x421bf0u; f_bfba6c(c);
    c->r[1] = 0x161a0c8u;
    c->r[7] = 0x0u;
    c->r[11] = c->r[0] + 0x20u;
    c->r[4] = c->r[0] + 0x18u;
    c->r[5] = c->r[0] + 0x8u;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x421c14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x40u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x42u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x10u;
    c->r[0] = 0x1617564u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x421c60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1617558u;
    { uint32_t ea = 0x421c6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_421c6c:;
    c->r[0] = (c->r[7] >> 5);
    c->r[1] = c->r[7] & 0x1fu;
    (void)f_subs(c, c->r[7], 0x3fu);
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & sh_lsl(c->r[8], c->r[1]);
    if (COND_HI) { goto L_421ce4; }
    c->r[1] = 0x20u - c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[9] = sh_lsl(c->r[8], c->r[7]);
    c->r[10] = sh_lsr(c->r[8], c->r[1]);
    c->r[1] = c->r[7] - 0x20u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[10] = sh_lsl(c->r[8], c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[3] = c->r[3] | c->r[10]; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[7];
    if (COND_GE) { c->r[9] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[2] = c->r[2] | c->r[9]; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421cd0u; f_3a6340(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[10] = c->r[0]; }
    if (COND_EQ) { c->r[9] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_421d70;
L_421ce4:;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_421d14; }
    c->r[0] = 0x60u - c->r[7];
    c->r[1] = c->r[7] - 0x60u;
    c->r[0] = sh_lsr(c->r[8], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[0] = sh_lsl(c->r[8], c->r[1]); }
    c->r[1] = c->r[7] - 0x40u;
    c->r[1] = sh_lsl(c->r[8], c->r[1]);
    if (COND_GE) { c->r[1] = 0x0u; }
    goto L_421d1c;
L_421d14:;
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
L_421d1c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[3] = c->r[3] | c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] | c->r[1];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421d3cu; f_3a6340(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[11];
    c->r[10] = 0x0u;
    if (COND_NE) { goto L_421d70; }
    c->r[0] = 0x60u - c->r[7];
    c->r[10] = sh_lsr(c->r[8], c->r[0]);
    c->r[0] = c->r[7] - 0x60u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { c->r[10] = sh_lsl(c->r[8], c->r[0]); }
    c->r[0] = c->r[7] - 0x40u;
    c->r[9] = sh_lsl(c->r[8], c->r[0]);
    c->r[0] = c->r[11];
    if (COND_GE) { c->r[9] = 0x0u; }
L_421d70:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x63u);
    c->r[2] = c->r[2] | c->r[9];
    c->r[1] = c->r[3] | c->r[10];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_421c6c; }
    c->r[0] = 0x1617420u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x10u;
    { uint32_t ea = 0x421da4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x41u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x18u;
    c->r[14] = 0x421dc0u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_421dd8(Cpu *restrict c) {
    FN_ENTER(0x421dd8u);
L_421dd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[6] = c->r[13] + 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x421df4u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x22u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1619ed0u;
    { uint32_t ea = 0x421e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x8u;
    c->r[14] = 0x421e18u; f_15efdc4(c);
    c->r[0] = 0x3u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x32u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST8(ea, c->r[4]); }
    c->r[0] = 0x440u;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x421e40u; f_bfc3d8(c);
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_421e4c(Cpu *restrict c) {
    FN_ENTER(0x421e4cu);
L_421e4c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[2];
    c->r[2] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_HI) { goto L_421f1c; }
    { uint32_t ea = c->r[2] + 0x2au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_421ecc; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_421ee8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x1617334u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x421e90u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421e94u; f_3a79f4(c);
    c->r[0] = 0x1616ed8u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x421ea4u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421ea8u; f_427ae4(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x421eb4u; f_3a79dc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x421ec4u; f_421bd4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_421f08;
L_421ecc:;
    c->r[0] = 0x16172e4u;
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x421ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_3a7dc8(c);
L_421ee8:;
    c->r[0] = 0x16172ccu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x421ef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x421efcu; f_3a79f4(c);
    c->r[0] = 0x1616e74u;
    { uint32_t ea = 0x421f08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_421f08:;
    c->r[1] = 0x6264u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_421f1c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_421f34(Cpu *restrict c) {
    FN_ENTER(0x421f34u);
L_421f34:;
    return;
}
void f_421f38(Cpu *restrict c) {
    FN_ENTER(0x421f38u);
L_421f38:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x421f58u; f_d21388(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[14] = 0x421f60u; f_d21638(c);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_421fb0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x421f84u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x421f98u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_421fb0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_421fc8;
L_421fb0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13];
    c->pc = c->r[3]; c->r[14] = 0x421fc8u; rt_dispatch(c);
L_421fc8:;
    c->r[0] = 0x0u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1617460u;
    { uint32_t ea = 0x421fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x11u; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x422004u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[1] = 0x18b8u;
    c->r[2] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0x422018u; rt_dispatch(c);
    c->r[1] = c->r[7];
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x422028u; f_15efe30(c);
    c->r[0] = c->r[13];
    c->r[1] = 0x18b8u;
    c->r[2] = 0x6u;
    c->r[3] = 0x0u;
    c->r[14] = 0x42203cu; f_5cebdc(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x422048u; f_d215b4(c);
    { uint32_t ea = c->r[13] + 4u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_422094; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422068u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x42207cu; rt_dispatch(c);
    c->r[0] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_422094; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_4220ac;
L_422094:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x4220acu; rt_dispatch(c);
L_4220ac:;
    c->r[0] = c->r[13];
    c->r[14] = 0x4220b4u; f_5cf21c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x4220bcu; f_d213cc(c);
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4220c8(Cpu *restrict c) {
    FN_ENTER(0x4220c8u);
L_4220c8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x4220e8u; f_d219cc(c);
    c->r[14] = 0x4220ecu; f_d21aac(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[6] = 0x0u;
    c->r[2] = 0x1u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13];
    c->pc = c->r[3]; c->r[14] = 0x422114u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[7]); } }
    { uint32_t ea = c->r[5] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x42213cu; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x16172fcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x422150u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x422168u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0x42217cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x422198u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[6] = c->r[13];
    c->r[1] = 0x18b8u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[6];
    c->r[14] = 0x4221b4u; f_5cf294(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0x11u;
    c->r[2] = 0x18b8u;
    c->r[14] = 0x4221c4u; f_15efe30(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x4221ccu; f_5cf21c(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x4221d4u; f_d21a04(c);
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4221e0(Cpu *restrict c) {
    FN_ENTER(0x4221e0u);
L_4221e0:;
    c->r[2] = 0xfadeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xfade0000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x11u;
    c->r[2] = 0x18b8u;
    __attribute__((musttail)) return f_15efe30(c);
}
void f_4221fc(Cpu *restrict c) {
    FN_ENTER(0x4221fcu);
L_4221fc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8d0u;
    c->r[13] = c->r[13] - 0x1000u;
    c->r[6] = c->r[13];
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x42221cu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1619ab4u;
    { uint32_t ea = 0x422238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xfadeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfade0000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x11u;
    c->r[14] = 0x422254u; f_15efe30(c);
    c->r[0] = 0x1u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x422270u; f_3e522c(c);
    c->r[13] = c->r[13] + 0x8d0u;
    c->r[13] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_422280(Cpu *restrict c) {
    FN_ENTER(0x422280u);
L_422280:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xd8u;
    c->r[13] = c->r[13] - 0x1800u;
    c->r[7] = c->r[13] + 0x8u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x4222a4u; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1619a2cu;
    { uint32_t ea = 0x4222c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xfadeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfade0000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x11u;
    c->r[14] = 0x4222dcu; f_15efe30(c);
    c->r[0] = 0x2u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x4222fcu; f_3e5270(c);
    c->r[13] = c->r[13] + 0xd8u;
    c->r[13] = c->r[13] + 0x1800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_42230c(Cpu *restrict c) {
    FN_ENTER(0x42230cu);
L_42230c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8d0u;
    c->r[13] = c->r[13] - 0x1000u;
    c->r[6] = c->r[13];
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x42232cu; f_bfba6c(c);
    c->r[0] = 0x16199a4u;
    c->r[7] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x422348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xfadeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfade0000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x11u;
    c->r[14] = 0x422364u; f_15efe30(c);
    c->r[0] = 0x3u;
    c->r[2] = c->r[6];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x422380u; f_3e522c(c);
    c->r[0] = 0x1616a50u;
    c->r[1] = 0x3760u;
    { uint32_t ea = 0x422390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[7]); }
    c->r[13] = c->r[13] + 0x8d0u;
    c->r[13] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4223a8(Cpu *restrict c) {
    FN_ENTER(0x4223a8u);
L_4223a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xd8u;
    c->r[13] = c->r[13] - 0x1800u;
    c->r[7] = c->r[13] + 0x8u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x4223ccu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1619904u;
    { uint32_t ea = 0x4223e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xfadeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfade0000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x11u;
    c->r[14] = 0x422404u; f_15efe30(c);
    c->r[0] = 0x4u;
    c->r[2] = c->r[7];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x422424u; f_3e5270(c);
    c->r[13] = c->r[13] + 0xd8u;
    c->r[13] = c->r[13] + 0x1800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_422434(Cpu *restrict c) {
    FN_ENTER(0x422434u);
L_422434:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1619938u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x422448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1619914u;
    { uint32_t ea = 0x422470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x1619900u;
    { uint32_t ea = 0x422488u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x16198e8u;
    c->r[1] = 0x62e0u;
    { uint32_t ea = 0x4224a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4224a4u; f_15efd7c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_4224b8(Cpu *restrict c) {
    FN_ENTER(0x4224b8u);
L_4224b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[8] = c->r[13];
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = c->r[8];
    c->r[14] = 0x4224dcu; f_bfba6c(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1619804u;
    { uint32_t ea = 0x4224f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xau; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xeu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x42251cu; f_bfc394(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_422528(Cpu *restrict c) {
    FN_ENTER(0x422528u);
L_422528:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1e4u;
    c->r[10] = c->r[13] + 0xd0u;
    c->r[9] = c->r[0];
    c->r[8] = c->r[1];
    c->r[0] = c->r[10];
    c->r[14] = 0x422544u; f_bfba6c(c);
    c->r[0] = 0x161974cu;
    c->r[11] = 0x0u;
    c->r[7] = c->r[13] + 0x88u;
    c->r[1] = 0x48u;
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0x422560u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0xd9u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xdau; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x422584u; f_15efdc4(c);
    c->r[0] = 0x16167f0u;
    { uint32_t ea = 0x422590u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x422594u; f_477454(c);
    c->r[1] = 0x514u;
    c->r[2] = 0x20u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x4225a8u; f_15efe3c(c);
    c->r[0] = c->r[10] + 0x5cu;
    c->r[1] = c->r[7];
    c->r[2] = 0x48u;
    c->r[14] = 0x4225b8u; f_15efdd0(c);
    c->r[0] = 0x1618c20u;
    { uint32_t ea = 0x4225c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4225c8u; f_a89290(c);
    c->r[3] = c->r[0] + 0x8u;
    c->r[7] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x78u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x40u;
    c->r[14] = 0x4225f0u; f_15efdc4(c);
    c->r[1] = c->r[13] + 0x78u;
    c->r[0] = c->r[7];
    c->r[14] = 0x4225fcu; f_15f0058(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4226f8; }
    { uint32_t ea = c->r[7]; c->r[7] = c->r[7] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    c->r[0] = c->r[10] + 0xa4u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[7]; c->r[7] = c->r[7] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[5] = LD32(ea + 16u); c->r[6] = LD32(ea + 20u); }
    c->r[7] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x21u;
    c->r[14] = 0x422630u; f_15efdc4(c);
    c->r[1] = c->r[13] + 0x78u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x422640u; f_15f0064(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4226f8; }
    { uint32_t ea = c->r[7]; c->r[7] = c->r[7] + 16u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    c->r[0] = c->r[10] + 0xe4u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[7]; c->r[7] = c->r[7] + 16u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); c->r[0] = c->r[0] + 16u; }
    c->r[3] = c->r[13] + 0x78u;
    c->r[2] = 0x20000u;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x1641c89u;
    c->r[1] = 0x422678u + c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x42267cu; f_15f0070(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4226f8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x105u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); c->r[0] = c->r[0] + 0x2u; }
    c->r[2] = (c->r[1] >> 24);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[1] >> 16);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = (c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x1d6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x16166c4u;
    { uint32_t ea = 0x4226b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4226bcu; f_42c8d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4226d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x12cu);
    if (COND_EQ) { c->r[0] = 0x1u; }
    goto L_4226dc;
L_4226d8:;
    c->r[0] = 0x0u;
L_4226dc:;
    { uint32_t ea = c->r[13] + 0x1d9u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0xd0u;
    c->r[0] = c->r[9];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x4226f8u; f_bfc3d8(c);
L_4226f8:;
    c->r[13] = c->r[13] + 0x1e4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_422714(Cpu *restrict c) {
    FN_ENTER(0x422714u);
L_422714:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422718(Cpu *restrict c) {
    FN_ENTER(0x422718u);
L_422718:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_42271c(Cpu *restrict c) {
    FN_ENTER(0x42271cu);
L_42271c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422720(Cpu *restrict c) {
    FN_ENTER(0x422720u);
L_422720:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422724(Cpu *restrict c) {
    FN_ENTER(0x422724u);
L_422724:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422728(Cpu *restrict c) {
    FN_ENTER(0x422728u);
L_422728:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_42272c(Cpu *restrict c) {
    FN_ENTER(0x42272cu);
L_42272c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422730(Cpu *restrict c) {
    FN_ENTER(0x422730u);
L_422730:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1619588u;
    { uint32_t ea = 0x422744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0xacu; }
    c->r[14] = 0x422750u; f_46e50c(c);
    c->r[0] = 0x1618ad4u;
    { uint32_t ea = 0x42275cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x161955cu;
    { uint32_t ea = 0x42276cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42276cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_42278c(Cpu *restrict c) {
    FN_ENTER(0x42278cu);
L_42278c:;
    c->r[0] = 0x1619530u;
    { uint32_t ea = 0x422798u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_42279c(Cpu *restrict c) {
    FN_ENTER(0x42279cu);
L_42279c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_4227a0(Cpu *restrict c) {
    FN_ENTER(0x4227a0u);
L_4227a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_4227a4(Cpu *restrict c) {
    FN_ENTER(0x4227a4u);
L_4227a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_4227a8(Cpu *restrict c) {
    FN_ENTER(0x4227a8u);
L_4227a8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_4227ac(Cpu *restrict c) {
    FN_ENTER(0x4227acu);
L_4227ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1618a70u;
    { uint32_t ea = 0x4227c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1619518u;
    { uint32_t ea = 0x4227d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4227d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4227ec(Cpu *restrict c) {
    FN_ENTER(0x4227ecu);
L_4227ec:;
    c->r[0] = 0x16194f0u;
    { uint32_t ea = 0x4227f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4227fc(Cpu *restrict c) {
    FN_ENTER(0x4227fcu);
L_4227fc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422800(Cpu *restrict c) {
    FN_ENTER(0x422800u);
L_422800:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422804(Cpu *restrict c) {
    FN_ENTER(0x422804u);
L_422804:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_422808(Cpu *restrict c) {
    FN_ENTER(0x422808u);
L_422808:;
    c->r[0] = 0x16194a4u;
    { uint32_t ea = 0x422814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_422818(Cpu *restrict c) {
    FN_ENTER(0x422818u);
L_422818:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1618a04u;
    { uint32_t ea = 0x42282cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x161945cu;
    { uint32_t ea = 0x42283cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42283cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_422858(Cpu *restrict c) {
    FN_ENTER(0x422858u);
L_422858:;
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
    c->r[14] = 0x422890u; f_9bb638(c);
    c->r[1] = 0x1339fd8u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x4228a8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x422908u; f_9bb638(c);
    c->r[1] = 0x1339f6du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x42291cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9u;
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
    c->r[14] = 0x422980u; f_9bb638(c);
    c->r[1] = 0x1339effu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x422994u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x4229fcu; f_9bb638(c);
    c->r[1] = 0x1339e97u;
    c->r[1] = 0x422a08u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x32u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x78u;
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
void f_422a68(Cpu *restrict c) {
    FN_ENTER(0x422a68u);
L_422a68:;
    c->r[0] = 0x1619224u;
    { uint32_t ea = 0x422a74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_422a78(Cpu *restrict c) {
    FN_ENTER(0x422a78u);
L_422a78:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[11] = c->r[0] + 0x4u;
    c->r[0] = c->r[11];
    c->r[14] = 0x422a98u; f_d21388(c);
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0x422aa4u; f_9bb3ec(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x422ab8u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x422ac0u; f_9bba24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_422e94; }
    c->r[9] = 0x0u;
    c->r[5] = c->r[13];
    c->r[10] = 0x1u;
    c->r[8] = c->r[13] + 0x3bu;
    c->r[7] = 0x0u;
    goto L_422c84;
L_422ae0:;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422af0u; f_9bb9e4(c);
    c->r[14] = 0x422af4u; f_9b1b98(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422b04u; f_9bb9e4(c);
    c->r[14] = 0x422b08u; f_9b716c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_422e80; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_EQ) { goto L_422bd4; }
L_422b1c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422b28u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422b38u; f_9bb9e4(c);
    c->r[14] = 0x422b3cu; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_422b84; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422b5cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422b70u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_422b84; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_422b9c;
L_422b84:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x422b9cu; rt_dispatch(c);
L_422b9c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422ba8u; f_9bb9e4(c);
    c->r[14] = 0x422bacu; f_9b1b98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_422e80; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422bc0u; f_9bb9e4(c);
    c->r[14] = 0x422bc4u; f_9b716c(c);
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_422b1c; }
    goto L_422e80;
L_422bd4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422be0u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422bf0u; f_9bb9e4(c);
    c->r[14] = 0x422bf4u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_422c44; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422c14u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422c28u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_422c44; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_NE) { goto L_422c64; }
    goto L_422e80;
L_422c44:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x422c5cu; rt_dispatch(c);
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_EQ) { goto L_422e80; }
L_422c64:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422c70u; f_9bb9e4(c);
    c->r[14] = 0x422c74u; f_9b716c(c);
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_422bd4; }
    goto L_422e80;
L_422c84:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422c90u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4u;
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_HI) { goto L_422e80; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x422cacu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x422ce0u: goto L_422ce0; case 0x422cf4u: goto L_422cf4; case 0x422d64u: goto L_422d64; case 0x422d7cu: goto L_422d7c; case 0x422d90u: goto L_422d90; case 0x422e04u: goto L_422e04; case 0x422e24u: goto L_422e24; case 0x422e44u: goto L_422e44; case 0x422e68u: goto L_422e68; case 0x422e80u: goto L_422e80; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_422ce0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422cecu; f_9bb9e4(c);
    c->r[14] = 0x422cf0u; f_9b1d70(c);
    goto L_422e34;
L_422cf4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422d00u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422d10u; f_9bb9e4(c);
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_422ae0; }
    c->r[14] = 0x422d1cu; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_422de8; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422d3cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422d50u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_422de8; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_422e80;
L_422d64:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422d70u; f_9bb9e4(c);
    c->r[14] = 0x422d74u; f_9b1c84(c);
    c->r[1] = c->r[0];
    goto L_422e18;
L_422d7c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422d88u; f_9bb9e4(c);
    c->r[14] = 0x422d8cu; f_9b1e70(c);
    goto L_422e54;
L_422d90:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422d9cu; f_9bb9e4(c);
    c->r[14] = 0x422da0u; f_9b1f5c(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_422de8; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422dc0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x422dd4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_422de8; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_422e80;
L_422de8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x422e00u; rt_dispatch(c);
    goto L_422e80;
L_422e04:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422e10u; f_9bb9e4(c);
    c->r[14] = 0x422e14u; f_9b204c(c);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
L_422e18:;
    c->r[0] = c->r[11];
    c->r[14] = 0x422e20u; f_d21530(c);
    goto L_422e80;
L_422e24:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422e30u; f_9bb9e4(c);
    c->r[14] = 0x422e34u; f_9b2138(c);
L_422e34:;
    c->r[1] = c->r[0];
    c->r[0] = c->r[11];
    c->r[14] = 0x422e40u; f_d215b4(c);
    goto L_422e80;
L_422e44:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422e50u; f_9bb9e4(c);
    c->r[14] = 0x422e54u; f_9b2238(c);
L_422e54:;
    c->r[2] = c->r[0];
    c->r[0] = c->r[11];
    c->r[3] = c->r[1];
    c->r[14] = 0x422e64u; f_d21638(c);
    goto L_422e80;
L_422e68:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422e74u; f_9bb9e4(c);
    c->r[14] = 0x422e78u; f_9b2328(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x422e80u; f_d216c0(c);
L_422e80:;
    c->r[0] = c->r[5];
    c->r[7] = c->r[7] + 0x1u;
    c->r[14] = 0x422e8cu; f_9bba24(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_422c84; }
L_422e94:;
    c->r[0] = c->r[13];
    c->r[14] = 0x422e9cu; f_9bb7b8(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x422ea4u; f_d213cc(c);
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_422eac(Cpu *restrict c) {
    FN_ENTER(0x422eacu);
L_422eac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[9] = c->r[0] + 0x4u;
    c->r[0] = c->r[9];
    c->r[14] = 0x422ed4u; f_d219cc(c);
    c->r[6] = c->r[13] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x422ee0u; f_9bb3ec(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x422ef4u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x422efcu; f_9bba24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_423220; }
    c->r[10] = 0x0u;
    c->r[5] = c->r[13] + 0x4u;
    c->r[8] = c->r[13];
    c->r[7] = 0x0u;
    goto L_422fe4;
L_422f18:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422f24u; f_9bb9e4(c);
    c->r[14] = 0x422f28u; f_9b716c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42320c; }
    c->r[4] = 0x0u;
    c->r[11] = 0x0u;
L_422f38:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422f44u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x422f64u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[7];
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x422f80u; f_9bb9e4(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x422f88u; f_9b1b24(c);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[6], 0xffu);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[0] & c->r[1];
    c->r[11] = c->r[11] | c->r[0];
    { uint32_t r = c->r[11] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_422fbc; }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_NE) { goto L_422fc4; }
    goto L_42320c;
L_422fbc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_42320c; }
L_422fc4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422fd0u; f_9bb9e4(c);
    c->r[14] = 0x422fd4u; f_9b716c(c);
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_422f38; }
    goto L_42320c;
L_422fe4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x422ff0u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4u;
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_HI) { goto L_42320c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x42300cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x423040u: goto L_423040; case 0x42309cu: goto L_42309c; case 0x4230c0u: goto L_4230c0; case 0x4230e4u: goto L_4230e4; case 0x423110u: goto L_423110; case 0x423154u: goto L_423154; case 0x423178u: goto L_423178; case 0x42319cu: goto L_42319c; case 0x4231c8u: goto L_4231c8; case 0x4231ecu: goto L_4231ec; case 0x42320cu: goto L_42320c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_423040:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x42304cu; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_422f18; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x423074u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[7];
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x423090u; f_9bb9e4(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x423098u; f_9b1b24(c);
    goto L_42320c;
L_42309c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x4230a4u; f_d21a1c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x4230b4u; f_9bb9e4(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x4230bcu; f_9b1c0c(c);
    goto L_42320c;
L_4230c0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x4230c8u; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x4230d8u; f_9bb9e4(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x4230e0u; f_9b1cfc(c);
    goto L_42320c;
L_4230e4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x4230ecu; f_d21aac(c);
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x423100u; f_9bb9e4(c);
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x42310cu; f_9b1de4(c);
    goto L_42320c;
L_423110:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x42312cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[7];
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x423148u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x423150u; f_9b1ee8(c);
    goto L_42320c;
L_423154:;
    c->r[0] = c->r[9];
    c->r[14] = 0x42315cu; f_d21a1c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x42316cu; f_9bb9e4(c);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[14] = 0x423174u; f_9b1fd4(c);
    goto L_42320c;
L_423178:;
    c->r[0] = c->r[9];
    c->r[14] = 0x423180u; f_d21a64(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x423190u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x423198u; f_9b20c4(c);
    goto L_42320c;
L_42319c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x4231a4u; f_d21aac(c);
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x4231b8u; f_9bb9e4(c);
    c->r[2] = c->r[4];
    c->r[3] = c->r[6];
    c->r[14] = 0x4231c4u; f_9b21ac(c);
    goto L_42320c;
L_4231c8:;
    c->r[0] = c->r[9];
    c->r[14] = 0x4231d0u; f_d21af8(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0x4231e0u; f_9bb9e4(c);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x4231e8u; f_9b22b0(c);
    goto L_42320c;
L_4231ec:;
    c->r[0] = c->r[9];
    c->r[14] = 0x4231f4u; f_d21a64(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x423204u; f_9bb9e4(c);
    c->r[1] = c->r[8];
    c->r[14] = 0x42320cu; f_9b26ac(c);
L_42320c:;
    c->r[0] = c->r[5];
    c->r[7] = c->r[7] + 0x1u;
    c->r[14] = 0x423218u; f_9bba24(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_422fe4; }
L_423220:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x423228u; f_9bb7b8(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x423230u; f_d21a04(c);
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_423240(Cpu *restrict c) {
    FN_ENTER(0x423240u);
L_423240:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1617fe0u;
    { uint32_t ea = 0x423254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x423260u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x423268u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4232b4; }
L_423274:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_423274; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4232ac; }
    c->r[0] = 0x16158e8u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x4232a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4232acu; rt_dispatch(c);
L_4232ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_4232b4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x4232c0u; f_3e7644(c);
    c->r[0] = 0x16189d4u;
    { uint32_t ea = 0x4232ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4232ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4232ec(Cpu *restrict c) {
    FN_ENTER(0x4232ecu);
L_4232ec:;
    c->r[0] = 0x16189a8u;
    { uint32_t ea = 0x4232f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4232fc(Cpu *restrict c) {
    FN_ENTER(0x4232fcu);
L_4232fc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_423358; }
    c->r[0] = 0x1618974u;
    { uint32_t ea = 0x423324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x423334u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_423358; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x423350u; f_41e580(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_423358:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x42336cu; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42337c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_42337c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4233a0(Cpu *restrict c) {
    FN_ENTER(0x4233a0u);
L_4233a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1617e7cu;
    { uint32_t ea = 0x4233b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16188e4u;
    { uint32_t ea = 0x4233c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4233c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4233e0(Cpu *restrict c) {
    FN_ENTER(0x4233e0u);
L_4233e0:;
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
    c->r[14] = 0x423418u; f_9bb638(c);
    c->r[1] = 0x132e41au;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x423430u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x423490u; f_9bb638(c);
    c->r[1] = 0x1339404u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4234a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9u;
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
    c->r[14] = 0x423508u; f_9bb638(c);
    c->r[1] = 0x1339397u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x42351cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[14] = 0x42357cu; f_9bb638(c);
    c->r[1] = 0x1339331u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x423590u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x18u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x4235fcu; f_9bb638(c);
    c->r[1] = 0x13392c5u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x423610u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
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
    c->r[14] = 0x423670u; f_9bb638(c);
    c->r[1] = 0x1339257u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x423684u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1au;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x36u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x4236f0u; f_9bb638(c);
    c->r[1] = 0x13391eau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x423704u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x50u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x42376cu; f_9bb638(c);
    c->r[1] = 0x1339179u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x423780u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x5cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x48u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x4237ecu; f_9bb638(c);
    c->r[1] = 0x1339104u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x423800u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xa4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x423868u; f_9bb638(c);
    c->r[1] = 0x133908fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x42387cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xe4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x21u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x4238e8u; f_9bb638(c);
    c->r[1] = 0x133901bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4238fcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x105u;
    c->r[1] = c->r[10] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
    c->r[14] = 0x423968u; f_9bb638(c);
    c->r[1] = 0x1338fb0u;
    c->r[1] = 0x423974u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x109u;
    c->r[1] = c->r[10] + c->r[1];
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
void f_4239f0(Cpu *restrict c) {
    FN_ENTER(0x4239f0u);
L_4239f0:;
    c->r[0] = 0x16182acu;
    { uint32_t ea = 0x4239fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_423a00(Cpu *restrict c) {
    FN_ENTER(0x423a00u);
L_423a00:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x423a20u; f_d21388(c);
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0x423a2cu; f_9bb3ec(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x423a40u; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x423a48u; f_9bba24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424124; }
    c->r[9] = 0x0u;
    c->r[5] = c->r[13];
    c->r[10] = 0x1u;
    c->r[11] = c->r[13] + 0x3bu;
    c->r[7] = 0x0u;
L_423a64:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x423a70u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { goto L_423afc; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_424110; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x423a90u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_423b30; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x423aa8u; f_9bb9e4(c);
    c->r[14] = 0x423aacu; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_423bfc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423accu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423ae0u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_423bfc; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_424110; }
    goto L_423c1c;
L_423afc:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[9]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_424110; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x423b14u; f_9bb9e4(c);
    c->r[14] = 0x423b18u; f_9b1e70(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[8];
    c->r[3] = c->r[1];
    c->r[14] = 0x423b28u; f_d21638(c);
    c->r[9] = 0x2u;
    goto L_424110;
L_423b30:;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_EQ) { { uint32_t r = c->r[9] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_423c34; }
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x423b48u; f_9bb9e4(c);
    c->r[14] = 0x423b4cu; f_9b716c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_423bf4; }
    c->r[6] = 0x0u;
L_423b58:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x423b64u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x423b74u; f_9bb9e4(c);
    c->r[14] = 0x423b78u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_423bc0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423b98u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423bacu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_423bc0; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_423bd8;
L_423bc0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x423bd8u; rt_dispatch(c);
L_423bd8:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x423be4u; f_9bb9e4(c);
    c->r[14] = 0x423be8u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_423b58; }
L_423bf4:;
    c->r[9] = 0x0u;
    goto L_424110;
L_423bfc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x423c14u; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_424110; }
L_423c1c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x423c28u; f_9bb9e4(c);
    c->r[14] = 0x423c2cu; f_9b1b98(c);
    c->r[9] = c->r[0];
    goto L_424110;
L_423c34:;
    (void)f_subs(c, c->r[7], 0x5u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[9]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_NE) { goto L_423d04; }
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x423c50u; f_9bb9e4(c);
    c->r[14] = 0x423c54u; f_9b716c(c);
    c->r[9] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424110; }
    c->r[6] = 0x0u;
L_423c64:;
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x423c70u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x423c80u; f_9bb9e4(c);
    c->r[14] = 0x423c84u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_423ccc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423ca4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423cb8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_423ccc; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_423ce4;
L_423ccc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x423ce4u; rt_dispatch(c);
L_423ce4:;
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x423cf0u; f_9bb9e4(c);
    c->r[14] = 0x423cf4u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_423c64; }
    goto L_424110;
L_423d04:;
    (void)f_subs(c, c->r[7], 0x6u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[9]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_NE) { goto L_423dd4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x423d20u; f_9bb9e4(c);
    c->r[14] = 0x423d24u; f_9b716c(c);
    c->r[9] = 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424110; }
    c->r[6] = 0x0u;
L_423d34:;
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x423d40u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x423d50u; f_9bb9e4(c);
    c->r[14] = 0x423d54u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_423d9c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423d74u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423d88u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_423d9c; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_423db4;
L_423d9c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x423db4u; rt_dispatch(c);
L_423db4:;
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x423dc0u; f_9bb9e4(c);
    c->r[14] = 0x423dc4u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_423d34; }
    goto L_424110;
L_423dd4:;
    (void)f_subs(c, c->r[7], 0x7u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[9]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_423ea4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x423df0u; f_9bb9e4(c);
    c->r[14] = 0x423df4u; f_9b716c(c);
    c->r[9] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424110; }
    c->r[6] = 0x0u;
L_423e04:;
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x423e10u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x423e20u; f_9bb9e4(c);
    c->r[14] = 0x423e24u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_423e6c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423e44u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423e58u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_423e6c; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_423e84;
L_423e6c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x423e84u; rt_dispatch(c);
L_423e84:;
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x423e90u; f_9bb9e4(c);
    c->r[14] = 0x423e94u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_423e04; }
    goto L_424110;
L_423ea4:;
    (void)f_subs(c, c->r[7], 0x8u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[9]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_423f74; }
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x423ec0u; f_9bb9e4(c);
    c->r[14] = 0x423ec4u; f_9b716c(c);
    c->r[9] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424110; }
    c->r[6] = 0x0u;
L_423ed4:;
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x423ee0u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x423ef0u; f_9bb9e4(c);
    c->r[14] = 0x423ef4u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_423f3c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423f14u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423f28u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_423f3c; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_423f54;
L_423f3c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x423f54u; rt_dispatch(c);
L_423f54:;
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x423f60u; f_9bb9e4(c);
    c->r[14] = 0x423f64u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_423ed4; }
    goto L_424110;
L_423f74:;
    (void)f_subs(c, c->r[7], 0x9u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[9]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_424044; }
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[14] = 0x423f90u; f_9bb9e4(c);
    c->r[14] = 0x423f94u; f_9b716c(c);
    c->r[9] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424110; }
    c->r[6] = 0x0u;
L_423fa4:;
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[14] = 0x423fb0u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[14] = 0x423fc0u; f_9bb9e4(c);
    c->r[14] = 0x423fc4u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42400c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423fe4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x423ff8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_42400c; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_424024;
L_42400c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x424024u; rt_dispatch(c);
L_424024:;
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[14] = 0x424030u; f_9bb9e4(c);
    c->r[14] = 0x424034u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_423fa4; }
    goto L_424110;
L_424044:;
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[9]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_424110; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[14] = 0x424060u; f_9bb9e4(c);
    c->r[14] = 0x424064u; f_9b716c(c);
    c->r[9] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424110; }
    c->r[6] = 0x0u;
L_424074:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[14] = 0x424080u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[14] = 0x424090u; f_9bb9e4(c);
    c->r[14] = 0x424094u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4240dc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x4240b4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x4240c8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_4240dc; }
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[10]); }
    goto L_4240f4;
L_4240dc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x4240f4u; rt_dispatch(c);
L_4240f4:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[14] = 0x424100u; f_9bb9e4(c);
    c->r[14] = 0x424104u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_424074; }
L_424110:;
    c->r[0] = c->r[5];
    c->r[7] = c->r[7] + 0x1u;
    c->r[14] = 0x42411cu; f_9bba24(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_423a64; }
L_424124:;
    c->r[0] = c->r[13];
    c->r[14] = 0x42412cu; f_9bb7b8(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x424134u; f_d213cc(c);
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_42413c(Cpu *restrict c) {
    FN_ENTER(0x42413cu);
L_42413c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[8] = c->r[0] + 0x4u;
    c->r[0] = c->r[8];
    c->r[14] = 0x42415cu; f_d219cc(c);
    c->r[6] = c->r[13] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x424168u; f_9bb3ec(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x42417cu; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x424184u; f_9bba24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246d8; }
    c->r[10] = 0x0u;
    c->r[5] = c->r[13] + 0x4u;
    c->r[9] = c->r[13] + 0x3bu;
    c->r[11] = 0x0u;
    c->r[7] = 0x0u;
    goto L_42456c;
L_4241a4:;
    (void)f_subs(c, c->r[7], 0x5u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[11]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_NE) { goto L_42424c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x4241c0u; f_9bb9e4(c);
    c->r[14] = 0x4241c4u; f_9b716c(c);
    c->r[11] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246c4; }
    c->r[6] = c->r[8];
    c->r[8] = 0x0u;
L_4241d8:;
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x4241e4u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x424204u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0x5u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x424220u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x424228u; f_9b1b24(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x424234u; f_9bb9e4(c);
    c->r[14] = 0x424238u; f_9b716c(c);
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { goto L_4241d8; }
    c->r[8] = c->r[6];
    goto L_4246c4;
L_42424c:;
    (void)f_subs(c, c->r[7], 0x6u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[11]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_NE) { goto L_4242ec; }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x424268u; f_9bb9e4(c);
    c->r[14] = 0x42426cu; f_9b716c(c);
    c->r[11] = 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246c4; }
    c->r[6] = 0x0u;
L_42427c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x424288u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x4242a8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0x6u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x4242c4u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x4242ccu; f_9b1b24(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x4242d8u; f_9bb9e4(c);
    c->r[14] = 0x4242dcu; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_42427c; }
    goto L_4246c4;
L_4242ec:;
    (void)f_subs(c, c->r[7], 0x7u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[11]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_42438c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x424308u; f_9bb9e4(c);
    c->r[14] = 0x42430cu; f_9b716c(c);
    c->r[11] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246c4; }
    c->r[6] = 0x0u;
L_42431c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x424328u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x424348u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0x7u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x424364u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x42436cu; f_9b1b24(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x424378u; f_9bb9e4(c);
    c->r[14] = 0x42437cu; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_42431c; }
    goto L_4246c4;
L_42438c:;
    (void)f_subs(c, c->r[7], 0x8u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[11]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_42442c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x4243a8u; f_9bb9e4(c);
    c->r[14] = 0x4243acu; f_9b716c(c);
    c->r[11] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246c4; }
    c->r[6] = 0x0u;
L_4243bc:;
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x4243c8u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x4243e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x424404u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x42440cu; f_9b1b24(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x424418u; f_9bb9e4(c);
    c->r[14] = 0x42441cu; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_4243bc; }
    goto L_4246c4;
L_42442c:;
    (void)f_subs(c, c->r[7], 0x9u);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[11]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_4244cc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[14] = 0x424448u; f_9bb9e4(c);
    c->r[14] = 0x42444cu; f_9b716c(c);
    c->r[11] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246c4; }
    c->r[6] = 0x0u;
L_42445c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[14] = 0x424468u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x424488u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0x9u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x4244a4u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x4244acu; f_9b1b24(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[14] = 0x4244b8u; f_9bb9e4(c);
    c->r[14] = 0x4244bcu; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_42445c; }
    goto L_4246c4;
L_4244cc:;
    (void)f_subs(c, c->r[7], 0xau);
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[11]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_NE) { goto L_4246c4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[14] = 0x4244e8u; f_9bb9e4(c);
    c->r[14] = 0x4244ecu; f_9b716c(c);
    c->r[11] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246c4; }
    c->r[6] = 0x0u;
L_4244fc:;
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[14] = 0x424508u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x424528u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0xau;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x424544u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x42454cu; f_9b1b24(c);
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[14] = 0x424558u; f_9bb9e4(c);
    c->r[14] = 0x42455cu; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_4244fc; }
    goto L_4246c4;
L_42456c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x424578u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { goto L_4245f0; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_4246c4; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x424598u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_42462c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x4245c0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = c->r[7];
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x4245dcu; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x4245e4u; f_9b1b24(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[11] = c->r[4]; }
    goto L_4246c4;
L_4245f0:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[11]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_4246c4; }
    c->r[0] = c->r[8];
    c->r[14] = 0x424604u; f_d21aac(c);
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x424618u; f_9bb9e4(c);
    c->r[2] = c->r[4];
    c->r[3] = c->r[6];
    c->r[14] = 0x424624u; f_9b1de4(c);
    c->r[11] = 0x2u;
    goto L_4246c4;
L_42462c:;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_EQ) { { uint32_t r = c->r[11] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_4241a4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x424644u; f_9bb9e4(c);
    c->r[14] = 0x424648u; f_9b716c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4246c0; }
    c->r[6] = 0x0u;
L_424654:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x424660u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x424680u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0x3u;
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); } }
    c->r[0] = c->r[5];
    c->r[14] = 0x42469cu; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x4246a4u; f_9b1b24(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x4246b0u; f_9bb9e4(c);
    c->r[14] = 0x4246b4u; f_9b716c(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_424654; }
L_4246c0:;
    c->r[11] = 0x0u;
L_4246c4:;
    c->r[0] = c->r[5];
    c->r[7] = c->r[7] + 0x1u;
    c->r[14] = 0x4246d0u; f_9bba24(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_42456c; }
L_4246d8:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x4246e0u; f_9bb7b8(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x4246e8u; f_d21a04(c);
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_4246f0(Cpu *restrict c) {
    FN_ENTER(0x4246f0u);
L_4246f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1616b30u;
    { uint32_t ea = 0x424704u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x424710u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x424718u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424764; }
L_424724:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_424724; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42475c; }
    c->r[0] = 0x1614438u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x424750u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42475cu; rt_dispatch(c);
L_42475c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_424764:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x424770u; f_3e7644(c);
    c->r[0] = 0x1617534u;
    { uint32_t ea = 0x42477cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42477cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_42479c(Cpu *restrict c) {
    FN_ENTER(0x42479cu);
L_42479c:;
    c->r[0] = 0x1617508u;
    { uint32_t ea = 0x4247a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4247ac(Cpu *restrict c) {
    FN_ENTER(0x4247acu);
L_4247ac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_424808; }
    c->r[0] = 0x16174d4u;
    { uint32_t ea = 0x4247d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x4247e4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_424808; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x424800u; f_41f408(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_424808:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x42481cu; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42482c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_42482c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_424850(Cpu *restrict c) {
    FN_ENTER(0x424850u);
L_424850:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16169d0u;
    { uint32_t ea = 0x424864u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x424870u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x424878u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4248c4; }
L_424884:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_424884; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4248bc; }
    c->r[0] = 0x16142d8u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x4248b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4248bcu; rt_dispatch(c);
L_4248bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_4248c4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x4248d0u; f_3e7644(c);
    c->r[0] = 0x16173e4u;
    { uint32_t ea = 0x4248dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4248dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4248fc(Cpu *restrict c) {
    FN_ENTER(0x4248fcu);
L_4248fc:;
    c->r[0] = 0x16173b8u;
    { uint32_t ea = 0x424908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_42490c(Cpu *restrict c) {
    FN_ENTER(0x42490cu);
L_42490c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_424978; }
    c->r[0] = 0x1617384u;
    { uint32_t ea = 0x424934u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x424944u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_424978; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_424994; }
    c->r[0] = 0x1614448u;
    c->r[1] = c->r[5] + 0x8u;
    c->r[2] = c->r[4];
    { uint32_t ea = 0x42496cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x424970u; f_23ca94(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_424978:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x42498cu; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42499c; }
L_424994:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_42499c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4249c4(Cpu *restrict c) {
    FN_ENTER(0x4249c4u);
L_4249c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161685cu;
    { uint32_t ea = 0x4249d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x4249e4u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x4249ecu; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424a38; }
L_4249f8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4249f8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_424a30; }
    c->r[0] = 0x1614164u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x424a24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x424a30u; rt_dispatch(c);
L_424a30:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_424a38:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x424a44u; f_3e7644(c);
    c->r[0] = 0x1617280u;
    { uint32_t ea = 0x424a50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x424a50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_424a70(Cpu *restrict c) {
    FN_ENTER(0x424a70u);
L_424a70:;
    c->r[0] = 0x1617254u;
    { uint32_t ea = 0x424a7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_424a80(Cpu *restrict c) {
    FN_ENTER(0x424a80u);
L_424a80:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_424adc; }
    c->r[0] = 0x1617220u;
    { uint32_t ea = 0x424aa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x424ab8u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_424adc; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x424ad4u; f_421638(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_424adc:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x424af0u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424b00; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_424b00:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_424b24(Cpu *restrict c) {
    FN_ENTER(0x424b24u);
L_424b24:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16166f8u;
    { uint32_t ea = 0x424b38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1617190u;
    { uint32_t ea = 0x424b48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x424b48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_424b64(Cpu *restrict c) {
    FN_ENTER(0x424b64u);
L_424b64:;
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
    c->r[14] = 0x424b9cu; f_9bb638(c);
    c->r[1] = 0x1337d7du;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x424bb4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
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
    c->r[14] = 0x424c14u; f_9bb638(c);
    c->r[1] = 0x1337d15u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x424c28u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
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
    c->r[14] = 0x424c8cu; f_9bb638(c);
    c->r[1] = 0x1337caau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x424ca0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
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
    c->r[14] = 0x424d00u; f_9bb638(c);
    c->r[1] = 0x1337c42u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x424d14u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x20u;
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
    c->r[14] = 0x424d78u; f_9bb638(c);
    c->r[1] = 0x1337bd7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x424d8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x28u;
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
    c->r[14] = 0x424decu; f_9bb638(c);
    c->r[1] = 0x1337b6du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x424e00u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x29u;
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
    c->r[14] = 0x424e64u; f_9bb638(c);
    c->r[1] = 0x1337b0au;
    c->r[1] = 0x424e70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x2au;
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
void f_424ed4(Cpu *restrict c) {
    FN_ENTER(0x424ed4u);
L_424ed4:;
    c->r[0] = 0x1616df8u;
    { uint32_t ea = 0x424ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_424ee4(Cpu *restrict c) {
    FN_ENTER(0x424ee4u);
L_424ee4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161633cu;
    { uint32_t ea = 0x424ef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x424f04u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x424f0cu; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_424f58; }
L_424f18:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_424f18; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_424f50; }
    c->r[0] = 0x1613c44u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x424f44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x424f50u; rt_dispatch(c);
L_424f50:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_424f58:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x424f64u; f_3e7644(c);
    c->r[0] = 0x1616d70u;
    { uint32_t ea = 0x424f70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x424f70u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_424f90(Cpu *restrict c) {
    FN_ENTER(0x424f90u);
L_424f90:;
    c->r[0] = 0x1616d44u;
    { uint32_t ea = 0x424f9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_424fa0(Cpu *restrict c) {
    FN_ENTER(0x424fa0u);
L_424fa0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_424ffc; }
    c->r[0] = 0x1616d10u;
    { uint32_t ea = 0x424fc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x424fd8u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_424ffc; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x424ff4u; f_421e4c(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_424ffc:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x425010u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_425020; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_425020:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_425044(Cpu *restrict c) {
    FN_ENTER(0x425044u);
L_425044:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16161dcu;
    { uint32_t ea = 0x425058u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x425064u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x42506cu; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4250b8; }
L_425078:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_425078; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4250b0; }
    c->r[0] = 0x1613ae4u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x4250a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4250b0u; rt_dispatch(c);
L_4250b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_4250b8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x4250c4u; f_3e7644(c);
    c->r[0] = 0x1616c20u;
    { uint32_t ea = 0x4250d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4250d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4250f0(Cpu *restrict c) {
    FN_ENTER(0x4250f0u);
L_4250f0:;
    c->r[0] = 0x1616bf4u;
    { uint32_t ea = 0x4250fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_425100(Cpu *restrict c) {
    FN_ENTER(0x425100u);
L_425100:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[4] = c->r[3];
    c->r[5] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_425194; }
    c->r[0] = 0x1616bc0u;
    { uint32_t ea = 0x425128u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x425138u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_425194; }
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_HI) { goto L_4251b0; }
    c->r[2] = 0x1616c24u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = 0x42515cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[4] << 3); ST32(ea, c->r[0]); c->r[2] = ea; }
    c->r[0] = 0x1616c14u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x425174u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[1]); }
    c->r[0] = 0x1616c08u;
    c->r[1] = 0x18b8u;
    { uint32_t ea = 0x425184u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[4] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[5] + 0x11u;
    c->r[14] = 0x42518cu; f_15efe30(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_425194:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x4251a8u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4251b8; }
L_4251b0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4251b8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4251e8(Cpu *restrict c) {
    FN_ENTER(0x4251e8u);
L_4251e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1616034u;
    { uint32_t ea = 0x4251fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1616aecu;
    { uint32_t ea = 0x42520cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42520cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_425228(Cpu *restrict c) {
    FN_ENTER(0x425228u);
L_425228:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x425260u; f_9bb638(c);
    c->r[1] = 0x133770au;
    c->r[14] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[14];
    c->r[8] = c->r[14] | 0x4u;
    c->r[1] = 0x42527cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
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
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[9]); }
    c->r[14] = 0x4252e0u; f_9bb638(c);
    c->r[1] = 0x1337692u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x4252f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[9]); }
    c->r[14] = 0x425358u; f_9bb638(c);
    c->r[1] = 0x1337616u;
    c->r[8] = 0x5u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x425370u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x4253ccu; f_9bb638(c);
    c->r[1] = 0x13375c0u;
    c->r[1] = 0x4253d8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[10] + 0xeu;
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
void f_42542c(Cpu *restrict c) {
    FN_ENTER(0x42542cu);
L_42542c:;
    c->r[0] = 0x16168c0u;
    { uint32_t ea = 0x425438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_42543c(Cpu *restrict c) {
    FN_ENTER(0x42543cu);
L_42543c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1615de4u;
    { uint32_t ea = 0x425450u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x42545cu; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x425464u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4254b0; }
L_425470:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_425470; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4254a8; }
    c->r[0] = 0x16136ecu;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x42549cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4254a8u; rt_dispatch(c);
L_4254a8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_4254b0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x4254bcu; f_3e7644(c);
    c->r[0] = 0x1616838u;
    { uint32_t ea = 0x4254c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4254c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4254e8(Cpu *restrict c) {
    FN_ENTER(0x4254e8u);
L_4254e8:;
    c->r[0] = 0x161680cu;
    { uint32_t ea = 0x4254f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_4254f8(Cpu *restrict c) {
    FN_ENTER(0x4254f8u);
L_4254f8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    c->r[4] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_4255e4; }
    c->r[0] = 0x16167d8u;
    { uint32_t ea = 0x425520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x425530u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_4255e4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_425600; }
    c->r[0] = 0x161382cu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x425554u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x425558u; f_47617c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_425600; }
    c->r[2] = 0x556u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); } }
    c->r[2] = 0x558u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); } }
    c->r[2] = 0x55au;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); } }
    c->r[1] = 0x554u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); } }
    c->r[0] = 0x16137acu;
    c->r[1] = 0x6264u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x4255d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_4255e4:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0x4255f8u; f_bfc42c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_425608; }
L_425600:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_425608:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_425634(Cpu *restrict c) {
    FN_ENTER(0x425634u);
L_425634:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161674cu;
    { uint32_t ea = 0x425644u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x425648u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3b7cu;
    c->pc = c->r[4]; c->r[14] = 0x425660u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x425668u; f_a87810(c);
    c->r[0] = 0x1616720u;
    { uint32_t ea = 0x425674u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x19u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1cu;
    c->r[14] = 0x425688u; f_3e61d4(c);
    c->r[0] = 0x1615b54u;
    { uint32_t ea = 0x425694u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_4256a8(Cpu *restrict c) {
    FN_ENTER(0x4256a8u);
L_4256a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16166d0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x4256c0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x4256c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4256e4(Cpu *restrict c) {
    FN_ENTER(0x4256e4u);
L_4256e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x4256f0u; f_a87810(c);
    c->r[0] = 0x1616698u;
    { uint32_t ea = 0x4256fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x19u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1cu;
    c->r[14] = 0x425710u; f_3e61d4(c);
    c->r[0] = 0x1615accu;
    { uint32_t ea = 0x42571cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_42572c(Cpu *restrict c) {
    FN_ENTER(0x42572cu);
L_42572c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1616650u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x425744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x1615a90u;
    { uint32_t ea = 0x425758u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[14] = 0x42575cu; f_3e6288(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_425770(Cpu *restrict c) {
    FN_ENTER(0x425770u);
L_425770:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x161660cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x425788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x1615a4cu;
    { uint32_t ea = 0x42579cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[14] = 0x4257a0u; f_3e6288(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x4257a8u; f_a8784c(c);
    c->r[0] = 0x16165dcu;
    { uint32_t ea = 0x4257b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4257b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4257d4(Cpu *restrict c) {
    FN_ENTER(0x4257d4u);
L_4257d4:;
    __attribute__((musttail)) return f_a878e4(c);
}
void f_4257d8(Cpu *restrict c) {
    FN_ENTER(0x4257d8u);
L_4257d8:;
    __attribute__((musttail)) return f_a878e8(c);
}
void f_4257dc(Cpu *restrict c) {
    FN_ENTER(0x4257dcu);
L_4257dc:;
    c->r[0] = c->r[0] + 0x1cu;
    __attribute__((musttail)) return f_3e62c0(c);
}
void f_4257e4(Cpu *restrict c) {
    FN_ENTER(0x4257e4u);
L_4257e4:;
    c->r[0] = c->r[0] + 0x1cu;
    __attribute__((musttail)) return f_3e6374(c);
}
void f_4257ec(Cpu *restrict c) {
    FN_ENTER(0x4257ecu);
L_4257ec:;
    return;
}
void f_4257f0(Cpu *restrict c) {
    FN_ENTER(0x4257f0u);
L_4257f0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    return;
}
void f_4257fc(Cpu *restrict c) {
    FN_ENTER(0x4257fcu);
L_4257fc:;
    c->r[0] = 0x0u;
    return;
}
void f_425804(Cpu *restrict c) {
    FN_ENTER(0x425804u);
L_425804:;
    c->r[0] = 0x0u;
    return;
}
void f_42580c(Cpu *restrict c) {
    FN_ENTER(0x42580cu);
L_42580c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_425810(Cpu *restrict c) {
    FN_ENTER(0x425810u);
L_425810:;
    c->r[0] = 0x1616574u;
    { uint32_t ea = 0x42581cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_425820(Cpu *restrict c) {
    FN_ENTER(0x425820u);
L_425820:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x165eb4cu;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x425844u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x42588cu; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x4258a4u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4258bcu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x161364cu;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x10u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    c->r[3] = 0x3b7cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1616490u;
    { uint32_t ea = 0x4258f8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1337098u;
    { uint32_t ea = 0x425900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x425904u + c->r[1];
    c->r[14] = 0x425904u; f_9aedcc(c);
    c->r[1] = 0x1616488u;
    { uint32_t ea = 0x425910u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_425930(Cpu *restrict c) {
    FN_ENTER(0x425930u);
L_425930:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x161645cu;
    { uint32_t ea = 0x425940u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x425944u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x6278u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->pc = c->r[4]; c->r[14] = 0x425960u; rt_dispatch(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_4259ac(c);
}
void f_425970(Cpu *restrict c) {
    FN_ENTER(0x425970u);
L_425970:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1616414u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x425988u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x42598cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_4259ac(Cpu *restrict c) {
    FN_ENTER(0x4259acu);
L_4259ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x4259b8u; f_da70f0(c);
    c->r[0] = 0x16163dcu;
    { uint32_t ea = 0x4259c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x5b0u;
    c->r[14] = 0x4259d0u; f_3e560c(c);
    c->r[0] = 0x604u;
    c->r[1] = 0x0u;
    c->r[2] = 0xffffu;
    c->r[5] = c->r[4] + 0x650u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x626u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x627u; ST8(ea, c->r[0]); }
    c->r[0] = 0x628u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = 0x62cu;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x62au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = 0x62eu;
    c->r[2] = 0x3e7u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = 0x636u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x634u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x632u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x630u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x638u; ST8(ea, c->r[1]); }
    c->r[14] = 0x425a40u; f_3e5494(c);
    c->r[0] = 0x6d8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425a4cu; f_3e5494(c);
    c->r[0] = c->r[4] + 0x760u;
    c->r[14] = 0x425a54u; f_3e5494(c);
    c->r[0] = 0x7e8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425a60u; f_3e5494(c);
    c->r[0] = c->r[4] + 0x870u;
    c->r[14] = 0x425a68u; f_3e5494(c);
    c->r[0] = 0x8f8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425a74u; f_3e5494(c);
    c->r[0] = c->r[4] + 0x980u;
    c->r[14] = 0x425a7cu; f_3e5494(c);
    c->r[0] = 0xa08u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425a88u; f_3e5494(c);
    c->r[0] = 0xaa8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425a94u; f_a0c640(c);
    c->r[0] = 0xcc8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425aa0u; f_a0c640(c);
    c->r[0] = 0xee8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425aacu; f_a0c640(c);
    c->r[0] = 0x1108u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425ab8u; f_a0c640(c);
    c->r[0] = 0x1330u;
    c->r[6] = 0x8ca0u;
    c->r[0] = c->r[4] + c->r[0];
L_425ac4:;
    c->r[14] = 0x425ac8u; f_a0c640(c);
    c->r[6] = f_subs(c, c->r[6], 0x78u);
    c->r[0] = c->r[0] + 0x78u;
    if (COND_NE) { goto L_425ac4; }
    c->r[0] = c->r[4] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    c->r[14] = 0x425ae0u; f_3e6774(c);
    c->r[0] = 0x161328cu;
    c->r[1] = 0x1d0u;
    { uint32_t ea = 0x425af0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4] + 0x3e0u;
    c->r[14] = 0x425af8u; f_15efd7c(c);
    c->r[3] = 0x5da8u;
    c->r[0] = 0x0u;
    c->r[1] = 0xffu;
    c->r[2] = 0x1328u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + 0x5b8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5b9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5bau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x63eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x63fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x640u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x644u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x648u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x5db4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[3] = 0x5db0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5dacu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e48u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[3] = 0x5dccu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[3] = 0x5dc8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5dc4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5dc0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5dbcu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5db8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5dd0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x5ddcu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[3] = 0x5dd8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5dd4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e49u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[3] = 0x5df4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[3] = 0x5df0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5decu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5de8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5de4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5de0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5df8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x5e04u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[3] = 0x5e00u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5dfcu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e4au;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[3] = 0x5e1cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[0]); }
    c->r[3] = 0x5e18u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e14u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e10u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e0cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e08u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x5e20u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x5e2cu;
    c->r[3] = 0x30u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[0]); }
    c->r[2] = 0x5e28u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x5e24u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x5e4bu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[0]); }
    c->r[2] = 0x5e44u;
    { uint32_t ea = c->r[4] + 0xa90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xaa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xaa4u; ST32(ea, c->r[0]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[0]); }
    c->r[2] = 0x5e40u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x5e3cu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x5e38u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x5e34u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x5e30u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x6238u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[3]); }
    c->r[2] = 0x6248u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x624cu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[0]); }
    c->r[2] = 0x624du;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x624eu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x63cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x63au;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x250u;
    c->r[1] = 0x21u;
    c->r[0] = c->r[0] + 0x16000u;
    c->r[14] = 0x425db4u; f_15efdc4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_425dc4(Cpu *restrict c) {
    FN_ENTER(0x425dc4u);
L_425dc4:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { return; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[3] = ~0x0u;
    c->r[0] = c->r[0] + (c->r[1] << 3);
    c->r[1] = 0x5da8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x5db4u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = 0x5db0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x5dacu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x5db8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5dccu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0x5dc8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x5dc4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x5dc0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x5dbcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    return;
}
void f_425e58(Cpu *restrict c) {
    FN_ENTER(0x425e58u);
L_425e58:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1615f2cu;
    c->r[5] = 0xf8u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x425e74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_425e78:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_425e94; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x425e90u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[6]); }
L_425e94:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x16cu);
    if (COND_NE) { goto L_425e78; }
    c->r[0] = 0x1612eccu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x425eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    c->r[14] = 0x425ebcu; f_3e6840(c);
    c->r[5] = 0x7360u;
    c->r[0] = 0x9f58u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[4] + c->r[0];
L_425ecc:;
    c->r[14] = 0x425ed0u; f_a0dbbc(c);
    c->r[0] = c->r[0] - 0x78u;
    c->r[5] = f_adds(c, c->r[5], 0x78u);
    if (COND_NE) { goto L_425ecc; }
    c->r[0] = 0x1108u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425ee8u; f_a0dbbc(c);
    c->r[0] = 0xee8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425ef4u; f_a0dbbc(c);
    c->r[0] = 0xcc8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425f00u; f_a0dbbc(c);
    c->r[0] = 0xaa8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425f0cu; f_a0dbbc(c);
    c->r[0] = 0xa08u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425f18u; f_3e5544(c);
    c->r[0] = c->r[4] + 0x980u;
    c->r[14] = 0x425f20u; f_3e5544(c);
    c->r[0] = 0x8f8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425f2cu; f_3e5544(c);
    c->r[0] = c->r[4] + 0x870u;
    c->r[14] = 0x425f34u; f_3e5544(c);
    c->r[0] = 0x7e8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425f40u; f_3e5544(c);
    c->r[0] = c->r[4] + 0x760u;
    c->r[14] = 0x425f48u; f_3e5544(c);
    c->r[0] = 0x6d8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x425f54u; f_3e5544(c);
    c->r[0] = c->r[4] + 0x650u;
    c->r[14] = 0x425f5cu; f_3e5544(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_da7294(c);
}
void f_425f70(Cpu *restrict c) {
    FN_ENTER(0x425f70u);
L_425f70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x425f7cu; f_425e58(c);
    c->r[0] = 0x1615e14u;
    { uint32_t ea = 0x425f88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x425f88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_425fa0(Cpu *restrict c) {
    FN_ENTER(0x425fa0u);
L_425fa0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1a4u;
    c->r[13] = c->r[13] - 0x1800u;
    c->r[4] = c->r[0];
    c->r[14] = 0x425fb4u; f_430968(c);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x63au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426070; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426064; }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_426064; }
    c->r[1] = 0x3e1u;
    c->r[0] = c->r[0] & 0x3ffu;
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] & 0x3ffu;
    { uint32_t r = c->r[2] & shc_lsr(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_426064; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_426064; }
    c->r[0] = 0x16133acu;
    { uint32_t ea = 0x426018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42601cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = ~0x0u;
    c->r[4] = ~0x0u;
    if (COND_NE) { c->r[1] = 0x41ccu; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; } }
    c->r[0] = 0x1613388u;
    { uint32_t ea = 0x42603cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426040u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x41c8u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; } }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_426064; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x604u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[14] = 0x426064u; f_42ef98(c);
L_426064:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x63au; ST8(ea, c->r[0]); }
L_426070:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4260f4; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4260c8; }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_4260c8; }
    c->r[1] = 0x3e1u;
    c->r[0] = c->r[0] & 0x3ffu;
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] & 0x3ffu;
    { uint32_t r = c->r[2] & shc_lsr(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4260c8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426a24; }
L_4260c8:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x624eu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x63du; ST8(ea, c->r[0]); } }
L_4260e8:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x63bu; ST8(ea, c->r[0]); }
L_4260f4:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_426174; }
    c->r[0] = 0x1612c6cu;
    { uint32_t ea = 0x426110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_426168; }
    { uint32_t ea = c->r[2] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_426168; }
    c->r[3] = 0x3e1u;
    c->r[2] = c->r[2] & 0x3ffu;
    c->r[7] = 0x1u;
    c->r[3] = c->r[3] & 0x3ffu;
    { uint32_t r = c->r[7] & shc_lsr(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_426168; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_426168; }
    { uint32_t ea = c->r[0] + 0x590u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426168; }
    c->r[14] = 0x426160u; f_41f368(c);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63cu; uint32_t v = LD8(ea); c->r[1] = v; }
L_426168:;
    c->r[0] = c->r[1] & 0xfeu;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x63cu; ST8(ea, c->r[0]); }
L_426174:;
    c->r[6] = c->r[13] + 0x1800u;
    c->r[0] = c->r[13] + 0xe0u;
    c->r[7] = c->r[6] + 0x19cu;
    c->r[14] = 0x426184u; f_a0c640(c);
    c->r[4] = 0x0u;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    c->r[14] = 0x426194u; f_9af4d4(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x42619cu; f_a0e5e8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = 0x2fu;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x4261b4u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_4261d4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4261d4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x4261d4u; rt_dispatch(c);
L_4261d4:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426388; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0x1800u;
    c->r[2] = c->r[4] + 0x19cu;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2fu;
    c->pc = c->r[3]; c->r[14] = 0x4261fcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_426370; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426360; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x426224u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_426360; }
    c->r[0] = 0x161297cu;
    { uint32_t ea = 0x426238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x77u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_426350; }
    c->r[0] = 0x1612b2cu;
    { uint32_t ea = 0x426250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426350; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x132au;
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[11] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_GT) { goto L_426360; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4262e8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1329u;
    c->r[5] = 0x0u;
    c->r[9] = 0xaa8u;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[4] = c->r[1] + c->r[0];
L_426290:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + c->r[0];
    c->r[6] = c->r[0] & 0x3u;
    c->r[0] = c->r[6] | (c->r[6] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    c->r[1] = c->r[10];
    c->r[0] = c->r[0] + c->r[9];
    c->r[14] = 0x4262b4u; f_a0d150(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4262d8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + (c->r[6] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_426360; }
L_4262d8:;
    { uint32_t ea = c->r[11]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_426290; }
L_4262e8:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1328u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 4);
    c->r[6] = c->r[1] + (c->r[0] << 5);
    c->r[0] = 0xaa8u;
    c->r[1] = c->r[8];
    c->r[0] = c->r[6] + c->r[0];
    c->r[14] = 0x426310u; f_a0c710(c);
    c->r[0] = c->r[6] + 0xb20u;
    c->r[1] = c->r[8] + 0x78u;
    c->r[2] = 0x1a5u;
    c->r[14] = 0x426320u; f_15efdd0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 31);
    c->r[1] = c->r[0] + (c->r[1] >> 30);
    c->r[1] = c->r[1] & 0xfcu;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    goto L_426360;
L_426350:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x426360u; rt_dispatch(c);
L_426360:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x426370u; rt_dispatch(c);
L_426370:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426388; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x426388u; rt_dispatch(c);
L_426388:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[1] + 0x1a8u;
    c->r[5] = c->r[0] + 0x15c00u;
    c->r[0] = c->r[1] + 0x248u;
    c->r[0] = c->r[0] + 0x15c00u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1acu;
    c->r[0] = c->r[0] + 0x15c00u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0xdb0u;
    c->r[0] = c->r[0] + 0x15000u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1ccu;
    c->r[0] = c->r[0] + 0x15c00u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1c4u;
    c->r[0] = c->r[0] + 0x15c00u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1dc0u;
    c->r[0] = c->r[0] + 0x14000u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1bcu;
    c->r[0] = c->r[0] + 0x15c00u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x24cu;
    c->r[0] = c->r[0] + 0x16000u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x624du;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x604u;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1615934u;
    { uint32_t ea = 0x426434u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1615930u;
    { uint32_t ea = 0x42643cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x1615930u;
    { uint32_t ea = 0x426444u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1615924u;
    { uint32_t ea = 0x42644cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1615900u;
    { uint32_t ea = 0x426454u + c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x16158fcu;
    { uint32_t ea = 0x42645cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x16158f8u;
    { uint32_t ea = 0x426464u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x16158f4u;
    { uint32_t ea = 0x42646cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16158ecu;
    { uint32_t ea = 0x426478u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1612f40u;
    { uint32_t ea = 0x426484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1612f34u;
    { uint32_t ea = 0x426490u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x16128e0u;
    { uint32_t ea = 0x42649cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x16128d4u;
    { uint32_t ea = 0x4264a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16128c8u;
    { uint32_t ea = 0x4264b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    goto L_42657c;
L_4264b8:;
    { uint32_t ea = c->r[10] + 0x640u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_4264e0; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_426638;
L_4264cc:;
    { uint32_t ea = c->r[10] + 0x640u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_42653c; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_4266ec;
L_4264e0:;
    { uint32_t ea = c->r[10] + 0x590u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_426638; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[5] = c->r[12];
    c->r[4] = c->r[14];
    c->r[14] = 0x426508u; f_41eeb0(c);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x426514u; f_41ee40(c);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x426520u; f_422528(c);
    c->r[14] = c->r[4];
    c->r[12] = c->r[5];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    goto L_426638;
L_42653c:;
    { uint32_t ea = c->r[10] + 0x590u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4266ec; }
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[4] = c->r[12];
    c->r[10] = c->r[14];
    c->r[14] = 0x426560u; f_41f038(c);
    c->r[12] = c->r[4];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = c->r[10];
    goto L_4266ec;
L_42657c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_426904; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4265ec; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4265e0; }
    { uint32_t ea = c->r[5] + c->r[14]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_4265e0; }
    { uint32_t ea = c->r[5] + c->r[14]; ST32(ea, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
L_4265e0:;
    c->r[0] = 0xfffeu;
    c->r[1] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_4265ec:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_426644; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_426634; }
    { uint32_t ea = c->r[2] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_426634; }
    c->r[3] = 0x3e1u;
    c->r[2] = c->r[2] & 0x3ffu;
    c->r[0] = 0x1u;
    c->r[3] = c->r[3] & 0x3ffu;
    { uint32_t r = c->r[0] & shc_lsr(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4264b8; }
L_426634:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_426638:;
    c->r[0] = 0xfffdu;
    c->r[1] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_426644:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_426660; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffdfffu;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_426660:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_42667c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_42667c:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4266a4; }
    { uint32_t ea = c->r[5] + c->r[14]; ST32(ea, c->r[3]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[0] - 0x17u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_4266a4:;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4266f8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_4266e8; }
    { uint32_t ea = c->r[2] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_4266e8; }
    c->r[3] = 0x3e1u;
    c->r[2] = c->r[2] & 0x3ffu;
    c->r[0] = 0x1u;
    c->r[3] = c->r[3] & 0x3ffu;
    { uint32_t r = c->r[0] & shc_lsr(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_4264cc; }
L_4266e8:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_4266ec:;
    c->r[0] = 0xff7fu;
    c->r[1] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_4266f8:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[9]); }
    if (COND_EQ) { goto L_426748; }
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3];
    c->r[10] = c->r[14];
    c->r[3] = c->r[5];
    c->r[5] = c->r[8];
    c->r[8] = c->r[12];
    c->r[14] = 0x426724u; f_3e6a20(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[12] = c->r[8];
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = c->r[10];
    c->r[1] = c->r[1] & 0xfffffeffu;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_426748:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_42677c; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_426770; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
L_426770:;
    c->r[0] = 0xfdffu;
    c->r[1] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_42677c:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_426798; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_426798:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4267b8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0x63bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_4267b8:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_4268b4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[14];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4267e0u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[8] = ~0x0u;
    c->r[9] = ~0x0u;
    if (COND_NE) { c->r[1] = 0x41ccu; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; } }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426800u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = c->r[10];
    if (COND_NE) { c->r[1] = 0x41c8u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; } }
    (void)f_subs(c, c->r[8], c->r[9]);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_NE) { goto L_42689c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_42689c; }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_42689c; }
    c->r[2] = 0x3e1u;
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[3] = 0x1u;
    c->r[2] = c->r[2] & 0x3ffu;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_42689c; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_42689c; }
    { uint32_t ea = c->r[0] + 0x590u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42689c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x426888u; f_41f190(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = c->r[10];
L_42689c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] & 0xffffbfffu;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[1]); }
L_4268b4:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_426904; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + c->r[14];
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[14]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[14]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7fffu;
    { uint32_t ea = c->r[11]; ST16(ea, c->r[0]); }
L_426904:;
    c->r[14] = c->r[14] + 0x28u;
    c->r[9] = c->r[9] + 0x21u;
    c->r[7] = c->r[7] + 0x40u;
    c->r[12] = c->r[12] + 0x48u;
    c->r[8] = c->r[8] + 0x8u;
    c->r[6] = c->r[6] + 0x2u;
    c->r[4] = c->r[4] + 0xcu;
    c->r[11] = c->r[11] + 0x2u;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[14], 0xa0u);
    if (COND_NE) { goto L_42657c; }
    c->r[9] = c->r[13] + 0xe0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x42693cu; f_a0dbbc(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x1800u;
    c->r[10] = c->r[14] + 0x19cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426ae4; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x6270u;
    (void)f_subs(c, c->r[0], 0x13u);
    c->r[2] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[2]); }
    if (COND_LE) { goto L_42698c; }
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_EQ) { goto L_4269bc; }
    (void)f_subs(c, c->r[0], 0xf0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xfau); }
    if (COND_NE) { goto L_426ae4; }
    c->r[0] = 0x0u;
    goto L_4269e0;
L_42698c:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4269ec; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_NE) { goto L_426ae4; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x5u;
    c->r[3] = 0x0u;
    c->r[14] = 0x4269b0u; f_431460(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_4269bc:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xe0u;
    c->r[1] = 0x5u;
    c->r[14] = 0x4269ccu; f_4317e8(c);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_426ae4; }
    c->r[0] = 0xf0u;
L_4269e0:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_426ae4;
L_4269ec:;
    c->r[0] = 0x16121bcu;
    { uint32_t ea = 0x4269f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4269fcu; f_5f8678(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_426a1c; }
    c->r[0] = 0x16121a4u;
    { uint32_t ea = 0x426a10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426a14u; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426ac0; }
L_426a1c:;
    c->r[1] = 0xau;
    goto L_426adc;
L_426a24:;
    c->r[0] = 0x1612994u;
    { uint32_t ea = 0x426a30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426a34u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = ~0x0u;
    c->r[4] = ~0x0u;
    if (COND_NE) { c->r[1] = 0x41ccu; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; } }
    c->r[0] = 0x1612970u;
    { uint32_t ea = 0x426a54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426a58u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x41c8u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; } }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_4260e8; }
    c->r[0] = 0x1612160u;
    { uint32_t ea = 0x426a78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x19bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4260f4; }
    { uint32_t ea = c->r[0] + 0x198u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_4260f4; }
    { uint32_t ea = c->r[0] + 0x199u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4260f4; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x604u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[1] = c->r[5] + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x426ab8u; f_42f0b8(c);
    { uint32_t ea = c->r[5] + 0x63bu; ST8(ea, c->r[4]); }
    goto L_4260f4;
L_426ac0:;
    c->r[0] = 0x16120e8u;
    { uint32_t ea = 0x426accu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426ad0u; f_5f86a0(c);
    c->r[1] = 0xfau;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[1] = 0xau; }
L_426adc:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_426ae4:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x25cu;
    c->r[6] = c->r[0] + 0x16000u;
    { uint32_t ea = c->r[1] + 0x63eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426d38; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426bd8; }
    c->r[7] = 0x0u;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[7]); }
    c->r[14] = 0x426b20u; f_9af4d4(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x426b28u; f_a0e258(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = 0x2du;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x426b40u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_426b60; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_426b60; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x426b60u; rt_dispatch(c);
L_426b60:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426cd0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0x1800u;
    c->r[2] = c->r[4] + 0x19cu;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2du;
    c->pc = c->r[3]; c->r[14] = 0x426b8cu; rt_dispatch(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_426cb8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426ca4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[2]; c->r[14] = 0x426bb8u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x426bccu; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_426cac;
L_426bd8:;
    c->r[4] = 0x0u;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    c->r[14] = 0x426bf0u; f_9af4d4(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x426bf8u; f_a0e258(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = 0x2du;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x426c10u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_426c30; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_426c30; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x426c30u; rt_dispatch(c);
L_426c30:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426d50; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0x1800u;
    c->r[2] = c->r[4] + 0x19cu;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x2du;
    c->pc = c->r[3]; c->r[14] = 0x426c58u; rt_dispatch(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_427610; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4275fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0xe0u;
    c->pc = c->r[2]; c->r[14] = 0x426c84u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x426c98u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_427604;
L_426ca4:;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
L_426cac:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x426cb8u; rt_dispatch(c);
L_426cb8:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426cd0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x426cd0u; rt_dispatch(c);
L_426cd0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_426d08; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_427254; }
    c->r[1] = 0x1612090u;
    c->r[2] = 0x366cu;
    { uint32_t ea = 0x426cf8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_426d38; }
    goto L_427254;
L_426d08:;
    c->r[1] = c->r[1] - 0x6u;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_427254; }
    { uint32_t r = c->r[5] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_427254; }
    c->r[1] = 0x161205cu;
    c->r[2] = 0x366cu;
    { uint32_t ea = 0x426d2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_427254; }
L_426d38:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6260u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); }
L_426d50:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426d58u; f_3e6ab8(c);
    c->r[0] = 0x878u;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[14] = 0x426d68u; f_41edb8(c);
    c->r[0] = 0x1615004u;
    c->r[11] = 0x18b8u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x426d7cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1615008u;
    { uint32_t ea = 0x426d84u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1614ffcu;
    { uint32_t ea = 0x426d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1612128u;
    { uint32_t ea = 0x426d94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1611e34u;
    { uint32_t ea = 0x426da0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x161443cu;
    { uint32_t ea = 0x426dacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1614fd0u;
    { uint32_t ea = 0x426db8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1613b24u;
    { uint32_t ea = 0x426dc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16120ecu;
    { uint32_t ea = 0x426dd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1611df8u;
    { uint32_t ea = 0x426ddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1614400u;
    { uint32_t ea = 0x426de8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1611dc0u;
    { uint32_t ea = 0x426df4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1613ae8u;
    { uint32_t ea = 0x426e00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1613adcu;
    { uint32_t ea = 0x426e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16120a4u;
    { uint32_t ea = 0x426e18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1611db0u;
    { uint32_t ea = 0x426e24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1614f58u;
    { uint32_t ea = 0x426e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1613aacu;
    { uint32_t ea = 0x426e3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    goto L_426f58;
L_426e40:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5a4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_427184; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426e5cu; f_5f8678(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_426e78; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xffu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426e78u; f_361ac8(c);
L_426e78:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0xe0u;
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x20u;
    c->r[0] = c->r[4];
    c->r[14] = 0x426e94u; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426ea0u; f_5d8a4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_426f2c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x38u;
    c->r[0] = c->r[4];
    c->r[14] = 0x426eb8u; f_15efdc4(c);
    c->r[9] = c->r[13] + 0x70u;
    c->r[1] = 0x6cu;
    c->r[0] = c->r[9];
    c->r[14] = 0x426ec8u; f_15efdc4(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426edcu; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[9];
    c->r[2] = 0x6cu;
    c->r[14] = 0x426eecu; f_9bd990(c);
    c->r[0] = 0x0u;
    c->r[2] = c->r[4];
    c->r[1] = 0x6cu;
    c->r[3] = 0x1cu;
    c->r[4] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x426f0cu; f_9ca420(c);
    c->r[0] = c->r[7] + 0x1d4u;
    c->r[14] = 0x426f14u; f_36623c(c);
    c->r[0] = 0x418u;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x426f20u; f_36623c(c);
    c->r[0] = 0x65cu;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x426f2cu; f_36623c(c);
L_426f2c:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0x426f3cu; f_422280(c);
    c->r[0] = c->r[7];
    c->r[1] = 0x18b8u;
    c->r[14] = 0x426f48u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_42704c;
L_426f58:;
    { uint32_t ea = c->r[10] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; c->r[4] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[1] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_427064; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426f78u; f_5d8a4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_427008; }
    c->r[0] = 0x878u;
    c->r[1] = 0x38u;
    c->r[6] = c->r[7] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x426f94u; f_15efd7c(c);
    c->r[11] = c->r[13] + 0xe0u;
    c->r[1] = 0x6cu;
    c->r[0] = c->r[11];
    c->r[14] = 0x426fa4u; f_15efdc4(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x426fb8u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[11];
    c->r[2] = 0x6cu;
    c->r[14] = 0x426fc8u; f_9bd990(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x6cu;
    c->r[2] = c->r[6];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[11] = 0x18b8u;
    c->r[14] = 0x426fe8u; f_9ca420(c);
    c->r[0] = c->r[7] + 0x1d4u;
    c->r[14] = 0x426ff0u; f_36623c(c);
    c->r[0] = 0x418u;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x426ffcu; f_36623c(c);
    c->r[0] = 0x65cu;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x427008u; f_36623c(c);
L_427008:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42701cu; f_425804(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42703c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42703cu; f_3645e0(c);
L_42703c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x18b8u;
    c->r[14] = 0x427048u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
L_42704c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[5]; ST8(ea, c->r[0]); }
    goto L_427184;
L_427064:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_427184; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427078u; f_5d8a4c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_427108; }
    c->r[0] = 0x878u;
    c->r[1] = 0x38u;
    c->r[6] = c->r[7] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x427094u; f_15efd7c(c);
    c->r[11] = c->r[13] + 0xe0u;
    c->r[1] = 0x6cu;
    c->r[0] = c->r[11];
    c->r[14] = 0x4270a4u; f_15efdc4(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4270b8u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[11];
    c->r[2] = 0x6cu;
    c->r[14] = 0x4270c8u; f_9bd990(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x6cu;
    c->r[2] = c->r[6];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[11] = 0x18b8u;
    c->r[14] = 0x4270e8u; f_9ca420(c);
    c->r[0] = c->r[7] + 0x1d4u;
    c->r[14] = 0x4270f0u; f_36623c(c);
    c->r[0] = 0x418u;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x4270fcu; f_36623c(c);
    c->r[0] = 0x65cu;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x427108u; f_36623c(c);
L_427108:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42711cu; f_425804(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42713c; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42713cu; f_3645e0(c);
L_42713c:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427184; }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_427184; }
    c->r[1] = 0x3e1u;
    c->r[0] = c->r[0] & 0x3ffu;
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] & 0x3ffu;
    { uint32_t r = c->r[2] & shc_lsr(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427184; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_426e40; }
L_427184:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[7] = c->r[7] + c->r[11];
    c->r[8] = c->r[8] + 0x8u;
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_NE) { goto L_426f58; }
    c->r[0] = 0x1611a10u;
    { uint32_t ea = 0x4271a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4271a8u; f_5f8678(c);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4271e4; }
    c->r[0] = 0x16119f4u;
    { uint32_t ea = 0x4271c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4271c4u; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4271e4; }
    c->r[0] = 0x16119dcu;
    { uint32_t ea = 0x4271d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4271dcu; f_5f86a0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_427434; }
L_4271e4:;
    c->r[0] = 0x16119e8u;
    { uint32_t ea = 0x4271f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x19bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_427434; }
    c->r[0] = 0x624eu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427434; }
    c->r[0] = 0x6258u;
    c->r[5] = c->r[6];
    c->v.s[2] = 0x44160000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] - 8u);
    c->r[4] = c->r[5] - 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_EQ) { goto L_4272fc; }
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_427324; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x427250u; f_427be8(c);
    goto L_427320;
L_427254:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_426d50; }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_426d50; }
    c->r[2] = 0x3e1u;
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[3] = 0x1u;
    c->r[2] = c->r[2] & 0x3ffu;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_426d50; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x260u;
    c->r[1] = c->r[1] + 0x16000u;
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_4276e4; }
    c->r[0] = 0x1611ad0u;
    { uint32_t ea = 0x4272b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[1], c->v.s[0]);
    goto L_426d50;
L_4272fc:;
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_427324; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x427314u; f_427be8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427768; }
    c->r[0] = 0x1u;
L_427320:;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
L_427324:;
    c->r[0] = c->r[6] + 0x254u;
    c->v.s[0] = 0x45610000u;
    c->r[5] = c->r[0] + 0x16000u;
    c->v.s[2] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_42734c; }
    { uint32_t ea = c->r[6] + 0x63du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427400; }
L_42734c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427394; }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_427394; }
    c->r[2] = 0x3e1u;
    c->r[0] = c->r[0] & 0x3ffu;
    c->r[1] = 0x1u;
    c->r[2] = c->r[2] & 0x3ffu;
    { uint32_t r = c->r[1] & shc_lsr(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427394; }
    { uint32_t ea = c->r[6] + 0x640u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427400; }
L_427394:;
    c->r[14] = 0x427398u; f_877880(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4273cc; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4273bc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_NE) { goto L_427400; }
L_4273bc:;
    { uint32_t ea = c->r[0] + 0xb0cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x13u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_427400; }
L_4273cc:;
    c->r[0] = 0x1611800u;
    { uint32_t ea = 0x4273d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x198u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_427400; }
    { uint32_t ea = c->r[0] + 0x199u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_427400; }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[14] = 0x427400u; f_42f0b8(c);
L_427400:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x63du; ST8(ea, c->r[0]); }
    c->r[0] = 0x161196cu;
    c->v.s[0] = LD32(c->r[4]);
    { uint32_t ea = 0x427418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4], c->v.s[0]);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[5], c->v.s[0]);
L_427434:;
    c->r[0] = 0x1611b80u;
    { uint32_t ea = 0x427440u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_427484; }
    c->r[1] = 0x1u;
    c->r[2] = 0x182u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = 0x625au; }
    if (COND_NE) { c->r[0] = c->r[6]; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_427484; }
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x427484u; f_427d68(c);
L_427484:;
    c->r[0] = 0x625bu;
    c->r[4] = c->r[6];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4275d4; }
    c->r[1] = 0x16118d0u;
    c->r[5] = 0x0u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x4274b0u + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x16118c4u;
    { uint32_t ea = 0x4274b8u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x16118b8u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x4274c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x16118a8u;
    { uint32_t ea = 0x4274d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    goto L_427518;
L_4274d8:;
    c->r[0] = c->r[5];
    goto L_4274e4;
L_4274e0:;
    c->r[0] = c->r[5] + 0x8u;
L_4274e4:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[9] = v; }
L_4274ec:;
    c->r[14] = 0x4274f0u; f_7543d4(c);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63bu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & ~c->r[10];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
L_427508:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_EQ) { goto L_4275d4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
L_427518:;
    c->r[0] = c->r[0] & sh_lsl(c->r[8], c->r[5]);
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427508; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x427530u; f_47617c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427508; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = sh_lsl(c->r[8], c->r[5]);
    c->r[14] = 0x427544u; f_da84f0(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4274ec; }
    c->r[0] = 0x128u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[1]; c->r[6] = r; }
    c->r[0] = 0x3030u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_EQ) { goto L_4274ec; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x42757cu; f_42c8d4(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_4274ec; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[5];
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_LT) { goto L_4274ec; }
    c->r[0] = 0x3034u;
    c->r[7] = c->r[1] + 0x4u;
    c->r[9] = 0x0u;
    c->r[6] = c->r[6] + c->r[0];
L_4275ac:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x4275b8u; f_a0d150(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_4274e0; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[7] = c->r[7] + 0x78u;
    (void)f_subs(c, c->r[9], c->r[11]);
    if (COND_LT) { goto L_4275ac; }
    goto L_4274d8;
L_4275d4:;
    c->r[0] = 0x1611794u;
    { uint32_t ea = 0x4275e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4275e4u; f_5be73c(c);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4275ecu; f_da74f4(c);
    c->r[13] = c->r[13] + 0x1a4u;
    c->r[13] = c->r[13] + 0x1800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_4275fc:;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
L_427604:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x427610u; rt_dispatch(c);
L_427610:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427634; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x427628u; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_42763c; }
    goto L_427678;
L_427634:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_427678; }
L_42763c:;
    c->r[0] = 0x1611738u;
    c->r[1] = 0x366cu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x427650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_427698; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_426d50; }
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    goto L_4276b8;
L_427678:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_426d50; }
    c->r[0] = 0x16116f4u;
    c->r[1] = 0x366cu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x427694u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_427698:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[2] = 0x6u;
    c->r[3] = 0x8u;
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { c->r[3] = 0x4u; }
    if (COND_NE) { goto L_4276b8; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_NE) { goto L_426d50; }
L_4276b8:;
    c->r[1] = c->r[1] | c->r[3];
    c->r[3] = 0x366cu;
    { uint32_t ea = c->r[0] + c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    c->r[0] = 0x6260u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43960000u;
    { uint32_t ea = c->r[2] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_426d50;
L_4276e4:;
    c->r[2] = 0x161168cu;
    { uint32_t ea = 0x4276f0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x58cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_426d50; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0xdu);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x43160000u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    if (COND_HI) { goto L_426d50; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x42771cu + 0x8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x42775cu: goto L_42775c; case 0x427798u: goto L_427798; case 0x4277a0u: goto L_4277a0; case 0x4277d0u: goto L_4277d0; case 0x427800u: goto L_427800; case 0x427830u: goto L_427830; case 0x427838u: goto L_427838; case 0x427868u: goto L_427868; case 0x427898u: goto L_427898; case 0x4278c8u: goto L_4278c8; case 0x4278f8u: goto L_4278f8; case 0x427928u: goto L_427928; case 0x427958u: goto L_427958; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_42775c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    goto L_426d50;
L_427768:;
    c->r[14] = 0x42776cu; f_877880(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_EQ) { goto L_427324; }
    { uint32_t ea = c->r[0] + 0xb0cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x13u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_427324; }
    c->r[1] = 0xbu;
    c->r[14] = 0x427794u; f_3ced60(c);
    goto L_427324;
L_427798:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_4277a0:;
    c->r[0] = 0x1611420u;
    c->r[1] = 0x7u;
    c->r[2] = 0x44u;
    { uint32_t ea = 0x4277b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4277b8u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x13295a6u;
    c->r[2] = 0x4277d0u + c->r[0];
    goto L_427984;
L_4277d0:;
    c->r[0] = 0x16113f0u;
    c->r[1] = 0x7u;
    c->r[2] = 0x45u;
    { uint32_t ea = 0x4277e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4277e8u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1329576u;
    c->r[2] = 0x427800u + c->r[0];
    goto L_427984;
L_427800:;
    c->r[0] = 0x16113c0u;
    c->r[1] = 0x7u;
    c->r[2] = 0x46u;
    { uint32_t ea = 0x427814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427818u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1329546u;
    c->r[2] = 0x427830u + c->r[0];
    goto L_427984;
L_427830:;
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_427838:;
    c->r[0] = 0x1611388u;
    c->r[1] = 0x7u;
    c->r[2] = 0x44u;
    { uint32_t ea = 0x42784cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427850u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x132950eu;
    c->r[2] = 0x427868u + c->r[0];
    goto L_427984;
L_427868:;
    c->r[0] = 0x1611358u;
    c->r[1] = 0x7u;
    c->r[2] = 0x47u;
    { uint32_t ea = 0x42787cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427880u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x13294deu;
    c->r[2] = 0x427898u + c->r[0];
    goto L_427984;
L_427898:;
    c->r[0] = 0x1611328u;
    c->r[1] = 0x7u;
    c->r[2] = 0x48u;
    { uint32_t ea = 0x4278acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4278b0u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x13294aeu;
    c->r[2] = 0x4278c8u + c->r[0];
    goto L_427984;
L_4278c8:;
    c->r[0] = 0x16112f8u;
    c->r[1] = 0x7u;
    c->r[2] = 0x49u;
    { uint32_t ea = 0x4278dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4278e0u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x132947eu;
    c->r[2] = 0x4278f8u + c->r[0];
    goto L_427984;
L_4278f8:;
    c->r[0] = 0x16112c8u;
    c->r[1] = 0x7u;
    c->r[2] = 0x4au;
    { uint32_t ea = 0x42790cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427910u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x132944eu;
    c->r[2] = 0x427928u + c->r[0];
    goto L_427984;
L_427928:;
    c->r[0] = 0x1611298u;
    c->r[1] = 0x7u;
    c->r[2] = 0x4bu;
    { uint32_t ea = 0x42793cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427940u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x132941eu;
    c->r[2] = 0x427958u + c->r[0];
    goto L_427984;
L_427958:;
    c->r[0] = 0x1611268u;
    c->r[1] = 0x7u;
    c->r[2] = 0x4cu;
    { uint32_t ea = 0x42796cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427970u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x13293eeu;
    c->r[2] = 0x427988u + c->r[0];
L_427984:;
    c->r[0] = c->r[7];
    c->r[1] = 0x10u;
    c->r[14] = 0x427990u; f_41e204(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    goto L_426d50;
}
void f_427a98(Cpu *restrict c) {
    FN_ENTER(0x427a98u);
L_427a98:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x208u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_427ae0; }
    { uint32_t ea = c->r[2] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_427ae0; }
    c->r[2] = c->r[2] & 0x3ffu;
    c->r[12] = 0x3e1u;
    c->r[3] = 0x1u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[12], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
L_427ae0:;
    return;
}
void f_427ae4(Cpu *restrict c) {
    FN_ENTER(0x427ae4u);
L_427ae4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16118d0u;
    { uint32_t ea = 0x427af4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427af8u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = ~0x0u; }
    if (COND_NE) { c->r[1] = 0x41ccu; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_427b10(Cpu *restrict c) {
    FN_ENTER(0x427b10u);
L_427b10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16118a4u;
    { uint32_t ea = 0x427b20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427b24u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = ~0x0u; }
    if (COND_NE) { c->r[1] = 0x41c8u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_427b3c(Cpu *restrict c) {
    FN_ENTER(0x427b3cu);
L_427b3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x73u);
    if (COND_GT) { goto L_427b94; }
    (void)f_subs(c, c->r[1], 0x6bu);
    if (COND_NE) { goto L_427b64; }
L_427b58:;
    c->r[0] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_427b64:;
    { uint32_t ea = c->r[2] + 0x208u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_427b94; }
    { uint32_t ea = c->r[3] + 0xe8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[3] - 0x2u;
    (void)f_subs(c, c->r[14], 0x9u);
    if (COND_HI) { goto L_427b94; }
    c->r[14] = c->r[14] & 0x3ffu;
    c->r[12] = 0x3e1u;
    c->r[3] = 0x1u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[12], c->r[14]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_427b98; }
L_427b94:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_427b98:;
    { uint32_t ea = c->r[2] + 0x640u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_427b58;
}
void f_427ba8(Cpu *restrict c) {
    FN_ENTER(0x427ba8u);
L_427ba8:;
    { uint32_t ea = c->r[0] + 0x63eu; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_427bb0(Cpu *restrict c) {
    FN_ENTER(0x427bb0u);
L_427bb0:;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427be0; }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_427be0; }
    c->r[0] = c->r[0] & 0x3ffu;
    c->r[1] = 0x3e1u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[2] & sh_lsr(c->r[1], c->r[0]);
    return;
L_427be0:;
    c->r[0] = 0x0u;
    return;
}
void f_427be8(Cpu *restrict c) {
    FN_ENTER(0x427be8u);
L_427be8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1610fb8u;
    { uint32_t ea = 0x427bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427c00u; f_5f8678(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_427d2c; }
    { uint32_t ea = c->r[4] + 0x63eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_427c4c; }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_427c4c; }
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[2] = 0x3e1u;
    c->r[0] = 0x1u;
    { uint32_t r = c->r[0] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427c4c; }
    { uint32_t ea = c->r[4] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_427c4c:;
    c->r[0] = 0x1611364u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x427c5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427c60u; f_708984(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_427c84; }
    c->r[0] = 0x1611348u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x427c78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427c7cu; f_708924(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_427d34; }
L_427c84:;
    c->r[0] = 0x1610f18u;
    { uint32_t ea = 0x427c90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427c94u; f_212730(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x427ca0u; rt_dispatch(c);
    c->r[1] = 0x16112f0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x427cb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_427d2c; }
L_427cb8:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427cd8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_427cb8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_427cd8:;
    c->r[0] = 0x1610ec4u;
    { uint32_t ea = 0x427ce4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427ce8u; f_212730(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x427cf4u; rt_dispatch(c);
    c->r[1] = 0x1611300u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x427d04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_427d2c; }
L_427d0c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427d34; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_427d0c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_427d2c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_427d34:;
    c->r[0] = 0x6259u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_427d68(Cpu *restrict c) {
    FN_ENTER(0x427d68u);
L_427d68:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x560u;
    c->r[0] = 0x1610ffcu;
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = 0x427d84u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427d88u; f_475a30(c);
    c->r[6] = c->r[0];
    c->r[14] = 0x427d90u; f_46fc24(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427d98u; f_476054(c);
    c->r[0] = 0x1610fd0u;
    { uint32_t ea = c->r[6] + 0x4d4u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = 0x3e1u;
    { uint32_t ea = 0x427dacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0xfu);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_427e1c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_427e58; }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_427e58; }
    c->r[2] = 0x3e1u;
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[3] = 0x1u;
    c->r[2] = c->r[2] & 0x3ffu;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427e58; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_427e58; }
    { uint32_t ea = c->r[0] + 0x420u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427e58; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_427ff8; }
    c->r[3] = c->r[5];
    c->r[14] = 0x427e18u; f_402a34(c);
    goto L_427e58;
L_427e1c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_427e58; }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_427e58; }
    c->r[2] = 0x3e1u;
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[3] = 0x1u;
    c->r[2] = c->r[2] & 0x3ffu;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427e58; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_427fd0; }
L_427e58:;
    c->r[0] = 0x1610d54u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x427e68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x427e6cu; f_45957c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_427efc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x427e84u; f_46fe44(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_427efc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x427e94u; f_46fc24(c);
    c->r[0] = 0x1610edcu;
    { uint32_t ea = 0x427ea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_427f70; }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_427f70; }
    c->r[2] = 0x3e1u;
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[3] = 0x1u;
    c->r[2] = c->r[2] & 0x3ffu;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427f70; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_427f70; }
    { uint32_t ea = c->r[0] + 0x524u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427f70; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x427ef8u; f_3f76d4(c);
    goto L_427f70;
L_427efc:;
    c->r[0] = c->r[13];
    c->r[14] = 0x427f04u; f_46e354(c);
    c->r[0] = 0x1610e6cu;
    { uint32_t ea = 0x427f10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_427f68; }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_427f68; }
    c->r[2] = 0x3e1u;
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[3] = 0x1u;
    c->r[2] = c->r[2] & 0x3ffu;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427f68; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_427f68; }
    { uint32_t ea = c->r[0] + 0x524u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427f68; }
    c->r[1] = c->r[13];
    c->r[2] = c->r[4];
    c->r[14] = 0x427f68u; f_3f76d4(c);
L_427f68:;
    c->r[0] = c->r[13];
    c->r[14] = 0x427f70u; f_46e50c(c);
L_427f70:;
    c->r[0] = 0x1610e00u;
    { uint32_t ea = 0x427f7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_427fc8; }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_427fc8; }
    c->r[1] = c->r[1] & 0x3ffu;
    c->r[7] = c->r[7] & 0x3ffu;
    c->r[2] = 0x1u;
    { uint32_t r = c->r[2] & shc_lsr(c, c->r[7], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_427fc8; }
    { uint32_t ea = c->r[0] + 0x640u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_427fc8; }
    { uint32_t ea = c->r[0] + 0x590u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427fc8; }
    c->r[14] = 0x427fc8u; f_41f2b8(c);
L_427fc8:;
    c->r[13] = c->r[13] + 0x560u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_427fd0:;
    { uint32_t ea = c->r[0] + 0x41cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_427e58; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_428000; }
    c->r[3] = c->r[5];
    c->r[14] = 0x427ff4u; f_402764(c);
    goto L_427e58;
L_427ff8:;
    c->r[14] = 0x427ffcu; f_403508(c);
    goto L_427e58;
L_428000:;
    c->r[14] = 0x428004u; f_402640(c);
    goto L_427e58;
}
void f_428020(Cpu *restrict c) {
    FN_ENTER(0x428020u);
L_428020:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[1];
    c->r[14] = 0x42802cu; f_42c8d4(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_428080; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_428080; }
    c->r[5] = c->r[1] + 0x4u;
    c->r[7] = 0x0u;
L_428050:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x42805cu; f_a0d150(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_42807c; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[5] = c->r[5] + 0x78u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_LT) { goto L_428050; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_42807c:;
    c->r[0] = 0x1u;
L_428080:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_428084(Cpu *restrict c) {
    FN_ENTER(0x428084u);
L_428084:;
    __attribute__((musttail)) return f_da7818(c);
}
void f_428088(Cpu *restrict c) {
    FN_ENTER(0x428088u);
L_428088:;
    __attribute__((musttail)) return f_da7d4c(c);
}
void f_42808c(Cpu *restrict c) {
    FN_ENTER(0x42808cu);
L_42808c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x604u;
    c->r[5] = 0x0u;
    c->r[1] = 0xffffu;
    c->r[7] = 0x5da8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x626u; ST8(ea, c->r[5]); }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + 0x627u; ST8(ea, c->r[0]); }
    c->r[0] = 0x628u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x62cu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x62au; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x62eu;
    c->r[1] = 0x3e7u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x636u;
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x634u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x632u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x630u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[7];
    { uint32_t ea = c->r[4] + 0x638u; ST8(ea, c->r[5]); }
    c->r[14] = 0x42810cu; f_15efdc4(c);
    c->r[0] = 0x1328u;
    c->r[6] = ~0x0u;
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x5db5u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x5dd0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x5e48u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[7];
    c->r[14] = 0x428148u; f_15efdc4(c);
    c->r[0] = 0x5dddu;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x5df8u;
    c->r[1] = 0x28u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x5e49u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[7];
    c->r[14] = 0x428178u; f_15efdc4(c);
    c->r[0] = 0x5e05u;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x5e20u;
    c->r[1] = 0x28u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x5e4au;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[7];
    c->r[14] = 0x4281a8u; f_15efdc4(c);
    c->r[0] = 0x5e2du;
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x5e4bu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    c->r[14] = 0x4281d0u; f_3e67f8(c);
    c->r[0] = 0x625au;
    { uint32_t ea = c->r[4] + 0x63eu; ST8(ea, c->r[5]); }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x625bu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1610bb0u;
    { uint32_t ea = 0x4281fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x428200u; f_5dd710(c);
    c->r[0] = 0x625cu;
    c->r[1] = 0xffu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x6260u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x624eu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x624cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x6258u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x6254u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x6250u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x624du;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x6264u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x6268u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x626cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x63cu;
    { uint32_t ea = c->r[4] + 0x63fu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x640u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x63au;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_4282a8(Cpu *restrict c) {
    FN_ENTER(0x4282a8u);
L_4282a8:;
    c->r[1] = 0x1610ac8u;
    c->r[2] = 0x3668u;
    c->r[3] = 0x624eu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x4282c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    { uint32_t ea = c->r[0] + c->r[3]; ST8(ea, c->r[2]); }
    c->r[2] = 0x6258u;
    c->r[3] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x6254u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x6250u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0];
    c->r[2] = c->r[2] & 0xfffffffeu;
    if (COND_NE) { c->r[2] = c->r[0] | 0x1u; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    return;
}
void f_428310(Cpu *restrict c) {
    FN_ENTER(0x428310u);
L_428310:;
    c->r[2] = 0x624eu;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[2] = 0x6258u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x6254u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x6250u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[0] = 0x1610a30u;
    c->r[2] = 0x3668u;
    { uint32_t ea = 0x428358u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xfffffffeu;
    if (COND_NE) { c->r[3] = c->r[2] | 0x1u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    return;
}
