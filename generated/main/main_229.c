#include "cpu.h"
#include "neon_rt.h"
void f_200288(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9aeebc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af4f8(Cpu *c);
void f_9af518(Cpu *c);
void f_9af53c(Cpu *c);
void f_9af55c(Cpu *c);
void f_9af9b0(Cpu *c);
void f_9b187c(Cpu *c);
void f_9b18f0(Cpu *c);
void f_9b1a3c(Cpu *c);
void f_9b1b24(Cpu *c);
void f_9b1c0c(Cpu *c);
void f_9b1cfc(Cpu *c);
void f_9b1de4(Cpu *c);
void f_9b1ee8(Cpu *c);
void f_9b1fd4(Cpu *c);
void f_9b20c4(Cpu *c);
void f_9b21ac(Cpu *c);
void f_9b22b0(Cpu *c);
void f_9b23fc(Cpu *c);
void f_9b24ec(Cpu *c);
void f_9b25e8(Cpu *c);
void f_9b26ac(Cpu *c);
void f_9b279c(Cpu *c);
void f_9b2898(Cpu *c);
void f_9b2994(Cpu *c);
void f_9b2dd4(Cpu *c);
void f_9b3e40(Cpu *c);
void f_9b3f98(Cpu *c);
void f_9b40b8(Cpu *c);
void f_9b4480(Cpu *c);
void f_9b4578(Cpu *c);
void f_9b466c(Cpu *c);
void f_9b4774(Cpu *c);
void f_9b4880(Cpu *c);
void f_9b4974(Cpu *c);
void f_9b4ad4(Cpu *c);
void f_9b4c34(Cpu *c);
void f_9b4d94(Cpu *c);
void f_9b4e9c(Cpu *c);
void f_9b4fa8(Cpu *c);
void f_9b5118(Cpu *c);
void f_9b5270(Cpu *c);
void f_9b549c(Cpu *c);
void f_9b560c(Cpu *c);
void f_9b57a4(Cpu *c);
void f_9b58ac(Cpu *c);
void f_9b59b4(Cpu *c);
void f_9b5b0c(Cpu *c);
void f_9b5c08(Cpu *c);
void f_9b5d04(Cpu *c);
void f_9b5e08(Cpu *c);
void f_9bb224(Cpu *c);
void f_9bb230(Cpu *c);
void f_9bb3ec(Cpu *c);
void f_9bb638(Cpu *c);
void f_9bb7b8(Cpu *c);
void f_9bba44(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7a048(Cpu *c);
void f_a7a0b8(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a85804(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a93ca8(Cpu *c);
void f_c287f8(Cpu *c);
void f_c28894(Cpu *c);
void f_c28a2c(Cpu *c);
void f_c28a34(Cpu *c);
void f_c29344(Cpu *c);
void f_c293d0(Cpu *c);
void f_c2948c(Cpu *c);
void f_c296b8(Cpu *c);
void f_c296f4(Cpu *c);
void f_c29750(Cpu *c);
void f_c29a54(Cpu *c);
void f_c29a7c(Cpu *c);
void f_dd0dac(Cpu *c);
void f_dd2adc(Cpu *c);
void f_e843e8(Cpu *c);
void f_e88214(Cpu *c);
void f_e8847c(Cpu *c);
void f_e88bf4(Cpu *c);
void f_e88cb8(Cpu *c);
void f_e8a3ac(Cpu *c);
void f_e8b7e0(Cpu *c);
void f_e8be24(Cpu *c);
void f_e8ce78(Cpu *c);
void f_e8d43c(Cpu *c);
void f_e8d9c4(Cpu *c);
void f_e8e20c(Cpu *c);
void f_e8f36c(Cpu *c);
void f_e8f384(Cpu *c);
void f_e8f3bc(Cpu *c);
void f_e8fdd0(Cpu *c);
void f_e9016c(Cpu *c);
void f_e90494(Cpu *c);
void f_e90b50(Cpu *c);
void f_e95fdc(Cpu *c);
void f_e96018(Cpu *c);
void f_e96154(Cpu *c);
void f_e96198(Cpu *c);
void f_15b9c7c(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe00(Cpu *c);
void f_15efe0c(Cpu *c);
void f_15eff08(Cpu *c);
void f_15effa4(Cpu *c);
void f_15effb0(Cpu *c);
void f_15f004c(Cpu *c);
void f_15f0ea4(Cpu *c);
void f_15f1528(Cpu *c);
void f_e8816c(Cpu *restrict c) {
    FN_ENTER(0xe8816cu);
L_e8816c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e881e8; }
    c->r[7] = c->r[13];
    c->r[0] = c->r[7];
    c->r[14] = 0xe88194u; f_9bb3ec(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xe881a8u; rt_dispatch(c);
    c->r[0] = 0x8c8bc2u;
    c->r[5] = 0xe881b4u + c->r[0];
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[2] = c->r[0] + 0x8u; }
    c->r[0] = c->r[7];
    c->r[14] = 0xe881c8u; f_9bba44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e881dc; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xe881d8u; f_9b25e8(c);
    c->r[5] = c->r[0];
L_e881dc:;
    c->r[0] = c->r[13];
    c->r[14] = 0xe881e4u; f_9bb7b8(c);
    goto L_e88200;
L_e881e8:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8c8b72u;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = 0xe88204u + c->r[1]; }
L_e88200:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e88214(Cpu *restrict c) {
    FN_ENTER(0xe88214u);
L_e88214:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88298; }
    c->r[7] = c->r[13];
    c->r[0] = c->r[7];
    c->r[14] = 0xe88240u; f_9bb3ec(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xe88254u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c8b06u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88270u + c->r[0]; }
    c->r[0] = c->r[7];
    c->r[14] = 0xe88274u; f_9bba44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88288; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xe88288u; f_9b24ec(c);
L_e88288:;
    c->r[0] = c->r[13];
    c->r[14] = 0xe88290u; f_9bb7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_e88298:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_e88318; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e882f8; }
L_e882b4:;
    c->r[0] = ldrex32(c, c->r[1]);
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = strex32(c, c->r[1], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e882b4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_e882ec; }
    c->r[0] = 0xbb08a8u;
    { uint32_t ea = c->r[6] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe882e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe882ecu; rt_dispatch(c);
L_e882ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_e882f8:;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_e88318; }
L_e88304:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = strex32(c, c->r[0], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_e88304; }
L_e88318:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e88328(Cpu *restrict c) {
    FN_ENTER(0xe88328u);
L_e88328:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e88330(Cpu *restrict c) {
    FN_ENTER(0xe88330u);
L_e88330:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0xbbd7c8u;
    { uint32_t ea = 0xe88354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe88354u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe88364u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88378(Cpu *restrict c) {
    FN_ENTER(0xe88378u);
L_e88378:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { c->r[0] = ~0x0u; }
    return;
}
void f_e8838c(Cpu *restrict c) {
    FN_ENTER(0xe8838cu);
L_e8838c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e883e8; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbbd75cu;
    { uint32_t ea = 0xe883c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe883c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe883d4u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xe883e4u; f_15eff08(c);
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e883e8:;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e883f4(Cpu *restrict c) {
    FN_ENTER(0xe883f4u);
L_e883f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88468; }
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0xe8841cu; f_9bb3ec(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe88430u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c892au;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe8844cu + c->r[0]; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe88450u; f_9bba44(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[5]; }
    if (COND_NE) { c->r[14] = 0xe88460u; f_e8a3ac(c); }
    c->r[0] = c->r[13];
    c->r[14] = 0xe88468u; f_9bb7b8(c);
L_e88468:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8847c(Cpu *restrict c) {
    FN_ENTER(0xe8847cu);
L_e8847c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[0];
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e884f8; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbbd668u;
    { uint32_t ea = 0xe884b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe884b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe884c8u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e884f8; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_e884e0:;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[1]); }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_e884e0; }
L_e884f8:;
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88508; }
    c->r[14] = 0xe88508u; f_a87660(c);
L_e88508:;
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_e88520; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe88520u; f_a87648(c);
L_e88520:;
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88660; }
    c->r[5] = c->r[13] + 0xcu;
    c->r[0] = c->r[5];
    c->r[14] = 0xe88538u; f_9bb3ec(c);
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8854cu; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c880eu;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88568u + c->r[0]; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe8856cu; f_9bba44(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_e88658; }
    c->r[0] = 0x8d547du;
    c->r[6] = 0x0u;
    c->r[9] = 0xe88590u + c->r[0];
    c->r[0] = 0x8e5c43u;
    c->r[0] = 0xe88598u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8e5c3du;
    c->r[11] = 0xe885a4u + c->r[0];
    c->r[0] = 0x8e5a92u;
    c->r[0] = 0xe885acu + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8c87beu;
    c->r[0] = 0xe885b8u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_e885b8:;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0xe885c4u; f_9af9b0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xe885d8u; rt_dispatch(c);
    c->r[1] = c->r[9];
    c->r[14] = 0xe885e0u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e88648; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8861c; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[8] = c->r[8] + 0x8u; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe88614u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_e88624;
L_e8861c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[8] = v; }
L_e88624:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[5];
    c->r[2] = c->r[13] + 0x14u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[4]; c->r[14] = 0xe88648u; rt_dispatch(c);
L_e88648:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e885b8; }
L_e88658:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0xe88660u; f_9bb7b8(c);
L_e88660:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e88684(Cpu *restrict c) {
    FN_ENTER(0xe88684u);
L_e88684:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e886a0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_e886a0:;
    c->r[0] = c->r[2];
    __attribute__((musttail)) return f_9af55c(c);
}
void f_e886a8(Cpu *restrict c) {
    FN_ENTER(0xe886a8u);
L_e886a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[7] = c->r[1];
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88728; }
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0xe886d4u; f_9bb3ec(c);
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe886e8u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c8672u;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88704u + c->r[0]; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe88708u; f_9bba44(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe88718u; f_9bb224(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xe88720u; f_9bb7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_e88728:;
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 6); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
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
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e887b8(Cpu *restrict c) {
    FN_ENTER(0xe887b8u);
L_e887b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e88808; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 6);
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbbd32cu;
    { uint32_t ea = 0xe887f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe887f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe88804u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
L_e88808:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e88870; }
    c->r[7] = c->r[13];
    c->r[0] = c->r[7];
    c->r[14] = 0xe88820u; f_9bb3ec(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xe88834u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c8526u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88850u + c->r[0]; }
    c->r[0] = c->r[7];
    c->r[14] = 0xe88854u; f_9bba44(c);
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe88860u; f_9bb230(c);
    c->r[0] = c->r[7];
    c->r[14] = 0xe88868u; f_9bb7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_e88870:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 6); ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e88900(Cpu *restrict c) {
    FN_ENTER(0xe88900u);
L_e88900:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88978; }
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0xe88928u; f_9bb3ec(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe8893cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c841eu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88958u + c->r[0]; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe8895cu; f_9bba44(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xe88968u; f_9bb224(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xe88970u; f_9bb7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_e88978:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
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
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88a08(Cpu *restrict c) {
    FN_ENTER(0xe88a08u);
L_e88a08:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e88a50; }
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbbd0e4u;
    { uint32_t ea = 0xe88a38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe88a38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe88a4cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
L_e88a50:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e88ab4; }
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0xe88a68u; f_9bb3ec(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe88a7cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c82deu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88a98u + c->r[0]; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe88a9cu; f_9bba44(c);
    c->r[1] = c->r[4];
    c->r[14] = 0xe88aa4u; f_9bb230(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xe88aacu; f_9bb7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_e88ab4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88b44(Cpu *restrict c) {
    FN_ENTER(0xe88b44u);
L_e88b44:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88bc0; }
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0xe88b68u; f_9bb3ec(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe88b7cu; rt_dispatch(c);
    c->r[0] = 0x8c81eeu;
    c->r[4] = 0xe88b88u + c->r[0];
    { uint32_t ea = c->r[5] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[2] = c->r[0] + 0x8u; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe88b9cu; f_9bba44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88bb4; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[14] = 0xe88bb0u; f_9b25e8(c);
    c->r[4] = c->r[0];
L_e88bb4:;
    c->r[0] = c->r[13];
    c->r[14] = 0xe88bbcu; f_9bb7b8(c);
    goto L_e88bd8;
L_e88bc0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x8c819au;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[4] = 0xe88bdcu + c->r[0]; }
L_e88bd8:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88bec(Cpu *restrict c) {
    FN_ENTER(0xe88becu);
L_e88bec:;
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_e88214(c);
}
void f_e88bf4(Cpu *restrict c) {
    FN_ENTER(0xe88bf4u);
L_e88bf4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[4]); }
    if (COND_LS) { goto L_e88ca8; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e88c80; }
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0xe88c34u; f_9bb3ec(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe88c48u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c8112u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88c64u + c->r[0]; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe88c68u; f_9bba44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88c9c; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xe88c78u; f_9b18f0(c);
    c->r[5] = c->r[0];
    goto L_e88ca0;
L_e88c80:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_e88ca8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_e88ca8;
L_e88c9c:;
    c->r[5] = 0x0u;
L_e88ca0:;
    c->r[0] = c->r[13];
    c->r[14] = 0xe88ca8u; f_9bb7b8(c);
L_e88ca8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88cb8(Cpu *restrict c) {
    FN_ENTER(0xe88cb8u);
L_e88cb8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[4]); }
    if (COND_HI) { goto L_e88ce8; }
L_e88ce0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_e88ce8:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e88d30; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbbce10u;
    { uint32_t ea = 0xe88d0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe88d0cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe88d20u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xe88d30u; f_15eff08(c);
L_e88d30:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88da0; }
    c->r[7] = c->r[13];
    c->r[0] = c->r[7];
    c->r[14] = 0xe88d48u; f_9bb3ec(c);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xe88d5cu; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c7ffeu;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88d78u + c->r[0]; }
    c->r[0] = c->r[7];
    c->r[14] = 0xe88d7cu; f_9bba44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88d90; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xe88d90u; f_9b187c(c);
L_e88d90:;
    c->r[0] = c->r[13];
    c->r[14] = 0xe88d98u; f_9bb7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_e88da0:;
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e88ce0; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
L_e88db8:;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { goto L_e88dd4; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_e88db8; }
    goto L_e88ce0;
L_e88dd4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[0]); } }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e88df0(Cpu *restrict c) {
    FN_ENTER(0xe88df0u);
L_e88df0:;
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_e88bf4(c);
}
void f_e88df8(Cpu *restrict c) {
    FN_ENTER(0xe88df8u);
L_e88df8:;
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_e88cb8(c);
}
void f_e88e00(Cpu *restrict c) {
    FN_ENTER(0xe88e00u);
L_e88e00:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88e70; }
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0xe88e24u; f_9bb3ec(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe88e38u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c7f22u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88e54u + c->r[0]; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe88e58u; f_9bba44(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0xe88e68u; f_e8a3ac(c); }
    c->r[0] = c->r[13];
    c->r[14] = 0xe88e70u; f_9bb7b8(c);
L_e88e70:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88e84(Cpu *restrict c) {
    FN_ENTER(0xe88e84u);
L_e88e84:;
    c->r[2] = 0x0u;
    __attribute__((musttail)) return f_e8847c(c);
}
void f_e88e8c(Cpu *restrict c) {
    FN_ENTER(0xe88e8cu);
L_e88e8c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88f00; }
    c->r[6] = c->r[13];
    c->r[0] = c->r[6];
    c->r[14] = 0xe88eb4u; f_9bb3ec(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe88ec8u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c7e92u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88ee4u + c->r[0]; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe88ee8u; f_9bba44(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[5]; }
    if (COND_NE) { c->r[14] = 0xe88ef8u; f_e843e8(c); }
    c->r[0] = c->r[13];
    c->r[14] = 0xe88f00u; f_9bb7b8(c);
L_e88f00:;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[4]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88f10(Cpu *restrict c) {
    FN_ENTER(0xe88f10u);
L_e88f10:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e88f80; }
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0xe88f34u; f_9bb3ec(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe88f48u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8c7e12u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[2] = 0xe88f64u + c->r[0]; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe88f68u; f_9bba44(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0xe88f78u; f_e843e8(c); }
    c->r[0] = c->r[13];
    c->r[14] = 0xe88f80u; f_9bb7b8(c);
L_e88f80:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e88f8c(Cpu *restrict c) {
    FN_ENTER(0xe88f8cu);
L_e88f8c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e88f94(Cpu *restrict c) {
    FN_ENTER(0xe88f94u);
L_e88f94:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8c7dcau;
    c->r[0] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[0] = 0xe88facu + c->r[1]; }
    return;
}
void f_e88fb0(Cpu *restrict c) {
    FN_ENTER(0xe88fb0u);
L_e88fb0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_e8a390; }
    c->r[2] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[2], 0x7eu);
    if (COND_HI) { goto L_e8a390; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0xe88ffcu + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0xe891fcu: goto L_e891fc; case 0xe89254u: goto L_e89254; case 0xe892acu: goto L_e892ac; case 0xe89304u: goto L_e89304; case 0xe89368u: goto L_e89368; case 0xe893c0u: goto L_e893c0; case 0xe89424u: goto L_e89424; case 0xe89480u: goto L_e89480; case 0xe894e4u: goto L_e894e4; case 0xe8953cu: goto L_e8953c; case 0xe895a0u: goto L_e895a0; case 0xe89604u: goto L_e89604; case 0xe89668u: goto L_e89668; case 0xe896c4u: goto L_e896c4; case 0xe89720u: goto L_e89720; case 0xe8977cu: goto L_e8977c; case 0xe897d8u: goto L_e897d8; case 0xe89834u: goto L_e89834; case 0xe89890u: goto L_e89890; case 0xe898ecu: goto L_e898ec; case 0xe89948u: goto L_e89948; case 0xe899a8u: goto L_e899a8; case 0xe89a04u: goto L_e89a04; case 0xe89a60u: goto L_e89a60; case 0xe89abcu: goto L_e89abc; case 0xe89b18u: goto L_e89b18; case 0xe89b74u: goto L_e89b74; case 0xe89bd0u: goto L_e89bd0; case 0xe89c2cu: goto L_e89c2c; case 0xe89c88u: goto L_e89c88; case 0xe89ce4u: goto L_e89ce4; case 0xe89d40u: goto L_e89d40; case 0xe89d9cu: goto L_e89d9c; case 0xe89df8u: goto L_e89df8; case 0xe89e54u: goto L_e89e54; case 0xe89eb0u: goto L_e89eb0; case 0xe89f0cu: goto L_e89f0c; case 0xe89f68u: goto L_e89f68; case 0xe89fc4u: goto L_e89fc4; case 0xe8a020u: goto L_e8a020; case 0xe8a07cu: goto L_e8a07c; case 0xe8a0d8u: goto L_e8a0d8; case 0xe8a134u: goto L_e8a134; case 0xe8a190u: goto L_e8a190; case 0xe8a1ecu: goto L_e8a1ec; case 0xe8a248u: goto L_e8a248; case 0xe8a2a4u: goto L_e8a2a4; case 0xe8a390u: goto L_e8a390; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_e891fc:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_e8a390; }
    c->r[6] = 0x0u;
L_e89214:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_e89240; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89240u; f_9b187c(c);
L_e89240:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89214; }
    goto L_e8a390;
L_e89254:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0xe89274u; f_9b1a3c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
L_e89284:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89298u; f_9b1a3c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89284; }
    goto L_e8a390;
L_e892ac:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0xe892ccu; f_9b1b24(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
L_e892dc:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe892f0u; f_9b1b24(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e892dc; }
    goto L_e8a390;
L_e89304:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0xe89324u; f_9b1c0c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x2u;
L_e89338:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89350u; f_9b1c0c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x2u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89338; }
    goto L_e8a390;
L_e89368:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xe89388u; f_9b1cfc(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
L_e89398:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe893acu; f_9b1cfc(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89398; }
    goto L_e8a390;
L_e893c0:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[14] = 0xe893e0u; f_9b1de4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e893f4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8940cu; f_9b1de4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e893f4; }
    goto L_e8a390;
L_e89424:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[14] = 0xe89444u; f_9b1ee8(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
L_e89454:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8946cu; f_9b1ee8(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89454; }
    goto L_e8a390;
L_e89480:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[14] = 0xe894a0u; f_9b1fd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x2u;
L_e894b4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe894ccu; f_9b1fd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x2u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e894b4; }
    goto L_e8a390;
L_e894e4:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xe89504u; f_9b20c4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
L_e89514:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89528u; f_9b20c4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89514; }
    goto L_e8a390;
L_e8953c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[14] = 0xe8955cu; f_9b21ac(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e89570:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89588u; f_9b21ac(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89570; }
    goto L_e8a390;
L_e895a0:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[0] = LD32(c->r[1]);
    c->r[14] = 0xe895c0u; f_9b22b0(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x4u;
L_e895d4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + c->r[7];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0xe895ecu; f_9b22b0(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e895d4; }
    goto L_e8a390;
L_e89604:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.d[0] = LD64(c->r[1]);
    c->r[14] = 0xe89624u; f_9b23fc(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e89638:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + c->r[7];
    c->v.d[0] = LD64(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0xe89650u; f_9b23fc(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89638; }
    goto L_e8a390;
L_e89668:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89684u; f_9b24ec(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x4u;
L_e89698:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe896acu; f_9b24ec(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89698; }
    goto L_e8a390;
L_e896c4:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe896e0u; f_9b26ac(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x4u;
L_e896f4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89708u; f_9b26ac(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e896f4; }
    goto L_e8a390;
L_e89720:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8973cu; f_9b279c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e89750:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89764u; f_9b279c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89750; }
    goto L_e8a390;
L_e8977c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89798u; f_9b2898(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e897ac:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe897c0u; f_9b2898(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e897ac; }
    goto L_e8a390;
L_e897d8:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe897f4u; f_9b2994(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x10u;
L_e89808:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8981cu; f_9b2994(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89808; }
    goto L_e8a390;
L_e89834:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89850u; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x40u;
L_e89864:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89878u; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x40u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89864; }
    goto L_e8a390;
L_e89890:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe898acu; f_9b3e40(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x10u;
L_e898c0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe898d4u; f_9b3e40(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e898c0; }
    goto L_e8a390;
L_e898ec:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89908u; f_9b3f98(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x10u;
L_e8991c:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89930u; f_9b3f98(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8991c; }
    goto L_e8a390;
L_e89948:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[7] = 0x0u;
    c->r[6] = c->r[13] + 0x10u;
    goto L_e89964;
L_e89960:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_e89964:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + (c->r[7] << 4); uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89994u; f_9b40b8(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_e89960; }
    goto L_e8a390;
L_e899a8:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe899c4u; f_9b4480(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e899d8:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe899ecu; f_9b4480(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e899d8; }
    goto L_e8a390;
L_e89a04:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89a20u; f_9b4578(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e89a34:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89a48u; f_9b4578(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89a34; }
    goto L_e8a390;
L_e89a60:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89a7cu; f_9b466c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0xcu;
L_e89a90:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89aa4u; f_9b466c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0xcu;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89a90; }
    goto L_e8a390;
L_e89abc:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89ad8u; f_9b4774(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x10u;
L_e89aec:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89b00u; f_9b4774(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89aec; }
    goto L_e8a390;
L_e89b18:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89b34u; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x40u;
L_e89b48:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89b5cu; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x40u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89b48; }
    goto L_e8a390;
L_e89b74:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89b90u; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x40u;
L_e89ba4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89bb8u; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x40u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89ba4; }
    goto L_e8a390;
L_e89bd0:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89becu; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x40u;
L_e89c00:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89c14u; f_9b2dd4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x40u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89c00; }
    goto L_e8a390;
L_e89c2c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89c48u; f_9b4880(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e89c5c:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89c70u; f_9b4880(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89c5c; }
    goto L_e8a390;
L_e89c88:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89ca4u; f_9b4974(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x20u;
L_e89cb8:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89cccu; f_9b4974(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x20u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89cb8; }
    goto L_e8a390;
L_e89ce4:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89d00u; f_9b4ad4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x20u;
L_e89d14:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89d28u; f_9b4ad4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x20u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89d14; }
    goto L_e8a390;
L_e89d40:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89d5cu; f_9b4c34(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x20u;
L_e89d70:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89d84u; f_9b4c34(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x20u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89d70; }
    goto L_e8a390;
L_e89d9c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89db8u; f_9b4d94(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x10u;
L_e89dcc:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89de0u; f_9b4d94(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89dcc; }
    goto L_e8a390;
L_e89df8:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89e14u; f_9b4e9c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x10u;
L_e89e28:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89e3cu; f_9b4e9c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89e28; }
    goto L_e8a390;
L_e89e54:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89e70u; f_9b4fa8(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x30u;
L_e89e84:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89e98u; f_9b4fa8(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x30u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89e84; }
    goto L_e8a390;
L_e89eb0:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89eccu; f_9b5118(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x20u;
L_e89ee0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89ef4u; f_9b5118(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x20u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89ee0; }
    goto L_e8a390;
L_e89f0c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89f28u; f_9b5270(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x50u;
L_e89f3c:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89f50u; f_9b5270(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x50u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89f3c; }
    goto L_e8a390;
L_e89f68:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89f84u; f_9b549c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x30u;
L_e89f98:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe89facu; f_9b549c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x30u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89f98; }
    goto L_e8a390;
L_e89fc4:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe89fe0u; f_9b560c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x30u;
L_e89ff4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a008u; f_9b560c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x30u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e89ff4; }
    goto L_e8a390;
L_e8a020:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a03cu; f_9b57a4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x20u;
L_e8a050:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a064u; f_9b57a4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x20u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a050; }
    goto L_e8a390;
L_e8a07c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a098u; f_9b58ac(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x20u;
L_e8a0ac:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a0c0u; f_9b58ac(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x20u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a0ac; }
    goto L_e8a390;
L_e8a0d8:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a0f4u; f_9b59b4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x20u;
L_e8a108:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a11cu; f_9b59b4(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x20u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a108; }
    goto L_e8a390;
L_e8a134:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a150u; f_9b5b0c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e8a164:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a178u; f_9b5b0c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a164; }
    goto L_e8a390;
L_e8a190:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a1acu; f_9b5c08(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x8u;
L_e8a1c0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a1d4u; f_9b5c08(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a1c0; }
    goto L_e8a390;
L_e8a1ec:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a208u; f_9b5d04(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x4u;
L_e8a21c:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a230u; f_9b5d04(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a21c; }
    goto L_e8a390;
L_e8a248:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a264u; f_9b5e08(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8a390; }
    c->r[6] = 0x1u;
    c->r[7] = 0x40u;
L_e8a278:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a28cu; f_9b5e08(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[7] = c->r[7] + 0x40u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a278; }
    goto L_e8a390;
L_e8a2a4:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8a390; }
    c->r[1] = 0x8d374du;
    c->r[6] = 0x0u;
    c->r[9] = 0xe8a2c0u + c->r[1];
    c->r[1] = 0x8e3f13u;
    c->r[1] = 0xe8a2c8u + c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8e3f0du;
    c->r[8] = 0xe8a2d4u + c->r[1];
    c->r[1] = 0x8e3d62u;
    c->r[1] = 0xe8a2dcu + c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8c6a8eu;
    c->r[1] = 0xe8a2e8u + c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    goto L_e8a2f0;
L_e8a2ec:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
L_e8a2f0:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xe8a2fcu; f_9af9b0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xe8a310u; rt_dispatch(c);
    c->r[1] = c->r[9];
    c->r[14] = 0xe8a318u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8a380; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a354; }
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[10] = c->r[10] + 0x8u; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8a34cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_e8a35c;
L_e8a354:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
L_e8a35c:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    c->r[1] = c->r[4];
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[12]; c->r[14] = 0xe8a380u; rt_dispatch(c);
L_e8a380:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8a2ec; }
L_e8a390:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8a3ac(Cpu *restrict c) {
    FN_ENTER(0xe8a3acu);
L_e8a3ac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x104u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a48c; }
    c->r[0] = 0x8d3635u;
    c->r[10] = 0x0u;
    c->r[6] = 0xe8a3d8u + c->r[0];
    c->r[0] = 0xbae79cu;
    { uint32_t ea = 0xe8a3e0u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0xbaf068u;
    { uint32_t ea = 0xe8a3e8u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_e8a3e4:;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0xe8a3f0u; f_9af9b0(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xe8a404u; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[14] = 0xe8a40cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8a47c; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8a430; }
    c->r[14] = 0xe8a428u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + (c->r[10] << 2); ST32(ea, c->r[0]); }
L_e8a430:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xe8a448u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0xe8a454u; f_9aeebc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8a47c; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[7]; c->r[14] = 0xe8a478u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + (c->r[10] << 2); ST32(ea, c->r[0]); }
L_e8a47c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CC) { goto L_e8a3e4; }
L_e8a48c:;
    c->r[13] = c->r[13] + 0x104u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8a4a0(Cpu *restrict c) {
    FN_ENTER(0xe8a4a0u);
L_e8a4a0:;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    return;
}
void f_e8a4a8(Cpu *restrict c) {
    FN_ENTER(0xe8a4a8u);
L_e8a4a8:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8a4b0(Cpu *restrict c) {
    FN_ENTER(0xe8a4b0u);
L_e8a4b0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8a4b8(Cpu *restrict c) {
    FN_ENTER(0xe8a4b8u);
L_e8a4b8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_e8a4f0; }
    c->r[0] = ~0x0u;
    c->r[1] = c->r[0] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1eu);
    if (COND_HI) { return; }
    c->r[0] = 0xdffeu;
    c->r[1] = c->r[1] & 0x7fffffffu;
    c->r[2] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x38ff0000u;
    c->r[0] = c->r[2] & sh_lsr(c->r[0], c->r[1]);
L_e8a4f0:;
    return;
}
void f_e8a4f4(Cpu *restrict c) {
    FN_ENTER(0xe8a4f4u);
L_e8a4f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8a4f8(Cpu *restrict c) {
    FN_ENTER(0xe8a4f8u);
L_e8a4f8:;
    c->r[0] = 0xbbb618u;
    { uint32_t ea = 0xe8a504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8a508(Cpu *restrict c) {
    FN_ENTER(0xe8a508u);
L_e8a508:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0xbae630u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbbb5e0u;
    { uint32_t ea = 0xe8a534u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8cc759u;
    { uint32_t ea = 0xe8a53cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8a540u + c->r[1];
    c->r[14] = 0xe8a540u; f_9aedcc(c);
    c->r[1] = 0xbbb8a8u;
    { uint32_t ea = 0xe8a54cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8a568(Cpu *restrict c) {
    FN_ENTER(0xe8a568u);
L_e8a568:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] + 0x8u;
    c->r[14] = 0xe8a578u; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8a580(Cpu *restrict c) {
    FN_ENTER(0xe8a580u);
L_e8a580:;
    c->r[0] = 0x149dd70u;
    c->r[0] = 0xe8a58cu + c->r[0];
    return;
}
void f_e8a590(Cpu *restrict c) {
    FN_ENTER(0xe8a590u);
L_e8a590:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[5] + 0x8u;
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a5a4u; f_15efe00(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8a5cc; }
L_e8a5b0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xe8a5c0u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_e8a5b0; }
L_e8a5cc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_e8a5d8(Cpu *restrict c) {
    FN_ENTER(0xe8a5d8u);
L_e8a5d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x149dd0cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[4] = 0xe8a5f0u + c->r[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x8u; }
    c->r[1] = 0x1u;
    c->r[14] = 0xe8a5fcu; f_15effb0(c);
    c->r[0] = 0xbbb7e8u;
    c->r[1] = 0xbaf7acu;
    { uint32_t ea = 0xe8a60cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xe8a610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_200288(c);
}
void f_e8a624(Cpu *restrict c) {
    FN_ENTER(0xe8a624u);
L_e8a624:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbbb7c8u;
    { uint32_t ea = 0xe8a634u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8a638u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x80u;
    c->pc = c->r[4]; c->r[14] = 0xe8a650u; rt_dispatch(c);
    c->r[1] = 0xbbb798u;
    c->r[4] = 0x0u;
    c->r[12] = 0x3f000000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x42340000u;
    { uint32_t ea = 0xe8a668u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbae4d4u;
    { uint32_t ea = 0xe8a678u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0xbaebc4u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe8a694u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x70a4u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x407d0000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0xd70au;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3e800000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0xd70au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbc230000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    c->r[2] = 0xcccdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3dcc0000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0xd70au;
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[12]); }
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3ca30000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x420c0000u;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x6666u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f660000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40a00000u;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8a754(Cpu *restrict c) {
    FN_ENTER(0xe8a754u);
L_e8a754:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0xbbb690u;
    c->r[14] = 0x0u;
    c->r[12] = 0x3f000000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x42340000u;
    { uint32_t ea = 0xe8a770u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbae3ccu;
    { uint32_t ea = 0xe8a780u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0xbaeabcu;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe8a79cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x70a4u;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x407d0000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0xd70au;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3c230000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3e800000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0xd70au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbc230000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    c->r[2] = 0xcccdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3dcc0000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0xd70au;
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[12]); }
    c->r[2] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3ca30000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x420c0000u;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x6666u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f660000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40a00000u;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8a858(Cpu *restrict c) {
    FN_ENTER(0xe8a858u);
L_e8a858:;
    return;
}
void f_e8a85c(Cpu *restrict c) {
    FN_ENTER(0xe8a85cu);
L_e8a85c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbbb58cu;
    { uint32_t ea = 0xe8a870u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8a870u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8a888(Cpu *restrict c) {
    FN_ENTER(0xe8a888u);
L_e8a888:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xe8a8c0u; f_9bb638(c);
    c->r[1] = 0x8f7b06u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xe8a8d4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x20u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8a918u; f_9bb638(c);
    c->r[1] = 0x8f7abfu;
    c->r[1] = 0xe8a924u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x810000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = 0xbbb4c8u;
    { uint32_t ea = 0xe8a93cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb4b4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xe8a954u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8a98cu; f_9bb638(c);
    c->r[1] = 0x8f7a48u;
    c->r[6] = 0xcu;
    c->r[7] = 0x0u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x800000u;
    c->r[1] = 0xe8a9a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb458u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = 0xe8a9b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb444u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8a9ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8aa04u; f_9bb638(c);
    c->r[1] = 0x8f79ebu;
    c->r[1] = 0xe8aa10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb3f8u;
    { uint32_t ea = 0xe8aa1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb3e4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8aa34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8aa6cu; f_9bb638(c);
    c->r[1] = 0x8f7991u;
    c->r[7] = 0x0u;
    c->r[1] = 0xe8aa7cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb394u;
    { uint32_t ea = 0xe8aa88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb380u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8aaa0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8aad8u; f_9bb638(c);
    c->r[1] = 0x8f793bu;
    c->r[1] = 0xe8aae4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb334u;
    { uint32_t ea = 0xe8aaf0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb320u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8ab08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8ab40u; f_9bb638(c);
    c->r[1] = 0x8f78dcu;
    c->r[8] = c->r[6] + 0x2bu;
    c->r[7] = 0x0u;
    c->r[1] = 0xe8ab54u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb2c8u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = 0xe8ab64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb2b4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8ab7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8abb4u; f_9bb638(c);
    c->r[1] = 0x8f787fu;
    c->r[1] = 0xe8abc0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb268u;
    { uint32_t ea = 0xe8abccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb254u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8abe4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8ac1cu; f_9bb638(c);
    c->r[1] = 0x8f7820u;
    c->r[7] = 0x0u;
    c->r[1] = 0xe8ac2cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb204u;
    { uint32_t ea = 0xe8ac38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb1f0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8ac50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8ac88u; f_9bb638(c);
    c->r[1] = 0x8f77c8u;
    c->r[1] = 0xe8ac94u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb1a4u;
    { uint32_t ea = 0xe8aca0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb190u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8acb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8acf0u; f_9bb638(c);
    c->r[1] = 0x8f776cu;
    c->r[7] = 0x0u;
    c->r[1] = 0xe8ad00u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb140u;
    { uint32_t ea = 0xe8ad0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb12cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8ad24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8ad5cu; f_9bb638(c);
    c->r[1] = 0x8f7713u;
    c->r[1] = 0xe8ad68u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb0e0u;
    { uint32_t ea = 0xe8ad74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb0ccu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8ad8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8adc4u; f_9bb638(c);
    c->r[1] = 0x8f76b4u;
    c->r[7] = 0x0u;
    c->r[1] = 0xe8add4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb07cu;
    { uint32_t ea = 0xe8ade0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb068u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8adf8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8ae30u; f_9bb638(c);
    c->r[1] = 0x8f7658u;
    c->r[1] = 0xe8ae3cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbb01cu;
    { uint32_t ea = 0xe8ae48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbb008u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8ae60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8ae98u; f_9bb638(c);
    c->r[1] = 0x8f75fbu;
    c->r[7] = 0x0u;
    c->r[1] = 0xe8aea8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbafb8u;
    { uint32_t ea = 0xe8aeb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbafa4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8aeccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8af04u; f_9bb638(c);
    c->r[1] = 0x8f75a2u;
    c->r[1] = 0xe8af10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbaf58u;
    { uint32_t ea = 0xe8af1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbbaf44u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe8af34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xe8af6cu; f_9bb638(c);
    c->r[1] = 0x8f7544u;
    c->r[2] = 0xbbaf00u;
    c->r[1] = 0xe8af7cu + c->r[1];
    { uint32_t ea = 0xe8af80u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    c->r[1] = 0xbbaef0u;
    { uint32_t ea = 0xe8af8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_e8b09c(Cpu *restrict c) {
    FN_ENTER(0xe8b09cu);
L_e8b09c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_e8b0d8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xe8b0d8u; f_15efddc(c);
L_e8b0d8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_e8b100; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_e8b12c;
L_e8b100:;
    c->v.s[2] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[5] + 16u);
    c->v.s[6] = LD32(c->r[5] + 20u);
    c->v.s[8] = LD32(c->r[5] + 24u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[4];
    c->v.f[4] = c->v.f[0] * c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[0];
    ST32(c->r[4], c->v.s[2]);
    ST32(c->r[4] + 4u, c->v.s[4]);
L_e8b12c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8b13c(Cpu *restrict c) {
    FN_ENTER(0xe8b13cu);
L_e8b13c:;
    return;
}
void f_e8b140(Cpu *restrict c) {
    FN_ENTER(0xe8b140u);
L_e8b140:;
    c->v.s[0] = LD32(c->r[0] + 56u);
    return;
}
void f_e8b148(Cpu *restrict c) {
    FN_ENTER(0xe8b148u);
L_e8b148:;
    ST32(c->r[0] + 56u, c->v.s[0]);
    return;
}
void f_e8b150(Cpu *restrict c) {
    FN_ENTER(0xe8b150u);
L_e8b150:;
    c->v.s[0] = LD32(c->r[0] + 60u);
    return;
}
void f_e8b158(Cpu *restrict c) {
    FN_ENTER(0xe8b158u);
L_e8b158:;
    ST32(c->r[0] + 60u, c->v.s[0]);
    return;
}
void f_e8b160(Cpu *restrict c) {
    FN_ENTER(0xe8b160u);
L_e8b160:;
    c->v.s[0] = LD32(c->r[0] + 48u);
    return;
}
void f_e8b168(Cpu *restrict c) {
    FN_ENTER(0xe8b168u);
L_e8b168:;
    c->v.s[2] = 0x3f7d70a4u;
    c->v.s[4] = 0x3c23d70au;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    ST32(c->r[0] + 48u, c->v.s[0]);
    return;
}
void f_e8b190(Cpu *restrict c) {
    FN_ENTER(0xe8b190u);
L_e8b190:;
    c->v.s[0] = LD32(c->r[0] + 52u);
    return;
}
void f_e8b198(Cpu *restrict c) {
    FN_ENTER(0xe8b198u);
L_e8b198:;
    c->v.s[2] = 0x40800000u;
    c->v.s[4] = 0x40647ae1u;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    ST32(c->r[0] + 52u, c->v.s[0]);
    return;
}
void f_e8b1bc(Cpu *restrict c) {
    FN_ENTER(0xe8b1bcu);
L_e8b1bc:;
    c->v.s[2] = LD32(c->r[1] + 100u);
    c->v.s[4] = 0x0u;
    c->v.s[8] = 0x40000000u;
    c->v.s[10] = 0xc0000000u;
    c->v.s[0] = LD32(c->r[1] + 96u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[6] = c->v.s[2] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[2] : c->v.s[6];
    c->v.s[6] = COND_GT ? c->v.s[10] : c->v.s[8];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[0], c->v.s[0]);
    ST32(c->r[0] + 4u, c->v.s[2]);
    return;
}
void f_e8b1fc(Cpu *restrict c) {
    FN_ENTER(0xe8b1fcu);
L_e8b1fc:;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[0] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0] + 100u, c->v.s[0]);
    return;
}
void f_e8b220(Cpu *restrict c) {
    FN_ENTER(0xe8b220u);
L_e8b220:;
    c->v.s[0] = LD32(c->r[0] + 72u);
    return;
}
void f_e8b228(Cpu *restrict c) {
    FN_ENTER(0xe8b228u);
L_e8b228:;
    ST32(c->r[0] + 72u, c->v.s[0]);
    return;
}
void f_e8b230(Cpu *restrict c) {
    FN_ENTER(0xe8b230u);
L_e8b230:;
    c->v.s[0] = LD32(c->r[0] + 76u);
    return;
}
void f_e8b238(Cpu *restrict c) {
    FN_ENTER(0xe8b238u);
L_e8b238:;
    ST32(c->r[0] + 76u, c->v.s[0]);
    return;
}
void f_e8b240(Cpu *restrict c) {
    FN_ENTER(0xe8b240u);
L_e8b240:;
    c->v.s[0] = LD32(c->r[0] + 64u);
    return;
}
void f_e8b248(Cpu *restrict c) {
    FN_ENTER(0xe8b248u);
L_e8b248:;
    c->v.s[2] = 0x3f7d70a4u;
    c->v.s[4] = 0x3c23d70au;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    ST32(c->r[0] + 64u, c->v.s[0]);
    return;
}
void f_e8b270(Cpu *restrict c) {
    FN_ENTER(0xe8b270u);
L_e8b270:;
    c->v.s[0] = LD32(c->r[0] + 68u);
    return;
}
void f_e8b278(Cpu *restrict c) {
    FN_ENTER(0xe8b278u);
L_e8b278:;
    c->v.s[2] = 0x40800000u;
    c->v.s[4] = 0x40647ae1u;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    ST32(c->r[0] + 68u, c->v.s[0]);
    return;
}
void f_e8b29c(Cpu *restrict c) {
    FN_ENTER(0xe8b29cu);
L_e8b29c:;
    c->v.s[2] = LD32(c->r[1] + 108u);
    c->v.s[4] = 0x0u;
    c->v.s[8] = 0x40000000u;
    c->v.s[10] = 0xc0000000u;
    c->v.s[0] = LD32(c->r[1] + 104u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[6] = c->v.s[2] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[2] : c->v.s[6];
    c->v.s[6] = COND_GT ? c->v.s[10] : c->v.s[8];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[0], c->v.s[0]);
    ST32(c->r[0] + 4u, c->v.s[2]);
    return;
}
void f_e8b2dc(Cpu *restrict c) {
    FN_ENTER(0xe8b2dcu);
L_e8b2dc:;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[0] + 104u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0] + 108u, c->v.s[0]);
    return;
}
void f_e8b300(Cpu *restrict c) {
    FN_ENTER(0xe8b300u);
L_e8b300:;
    c->v.s[0] = LD32(c->r[0] + 88u);
    return;
}
void f_e8b308(Cpu *restrict c) {
    FN_ENTER(0xe8b308u);
L_e8b308:;
    ST32(c->r[0] + 88u, c->v.s[0]);
    return;
}
void f_e8b310(Cpu *restrict c) {
    FN_ENTER(0xe8b310u);
L_e8b310:;
    c->v.s[0] = LD32(c->r[0] + 92u);
    return;
}
void f_e8b318(Cpu *restrict c) {
    FN_ENTER(0xe8b318u);
L_e8b318:;
    ST32(c->r[0] + 92u, c->v.s[0]);
    return;
}
void f_e8b320(Cpu *restrict c) {
    FN_ENTER(0xe8b320u);
L_e8b320:;
    c->v.s[0] = LD32(c->r[0] + 80u);
    return;
}
void f_e8b328(Cpu *restrict c) {
    FN_ENTER(0xe8b328u);
L_e8b328:;
    c->v.s[2] = 0x3f7d70a4u;
    c->v.s[4] = 0x3c23d70au;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    ST32(c->r[0] + 80u, c->v.s[0]);
    return;
}
void f_e8b350(Cpu *restrict c) {
    FN_ENTER(0xe8b350u);
L_e8b350:;
    c->v.s[0] = LD32(c->r[0] + 84u);
    return;
}
void f_e8b358(Cpu *restrict c) {
    FN_ENTER(0xe8b358u);
L_e8b358:;
    c->v.s[2] = 0x40800000u;
    c->v.s[4] = 0x40647ae1u;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[2];
    ST32(c->r[0] + 84u, c->v.s[0]);
    return;
}
void f_e8b37c(Cpu *restrict c) {
    FN_ENTER(0xe8b37cu);
L_e8b37c:;
    c->v.s[2] = LD32(c->r[1] + 116u);
    c->v.s[4] = 0x0u;
    c->v.s[8] = 0x40000000u;
    c->v.s[10] = 0xc0000000u;
    c->v.s[0] = LD32(c->r[1] + 112u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    c->v.s[6] = c->v.s[2] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[2] : c->v.s[6];
    c->v.s[6] = COND_GT ? c->v.s[10] : c->v.s[8];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[0], c->v.s[0]);
    ST32(c->r[0] + 4u, c->v.s[2]);
    return;
}
void f_e8b3bc(Cpu *restrict c) {
    FN_ENTER(0xe8b3bcu);
L_e8b3bc:;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[0] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0] + 116u, c->v.s[0]);
    return;
}
void f_e8b3e0(Cpu *restrict c) {
    FN_ENTER(0xe8b3e0u);
L_e8b3e0:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_e8b3e4(Cpu *restrict c) {
    FN_ENTER(0xe8b3e4u);
L_e8b3e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->v.s[16] = c->v.s[0];
    c->v.s[22] = LD32(c->r[5] + 96u);
    c->v.s[24] = LD32(c->r[5] + 100u);
    c->r[0] = c->r[5] + 0x30u;
    c->r[14] = 0xe8b408u; f_15b9c7c(c);
    c->v.s[28] = LD32(c->r[5] + 104u);
    c->v.s[30] = LD32(c->r[5] + 108u);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[5] + 0x40u;
    c->r[14] = 0xe8b420u; f_15b9c7c(c);
    c->v.s[26] = LD32(c->r[5] + 112u);
    c->v.s[17] = LD32(c->r[5] + 116u);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[5] + 0x50u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[24] * c->v.f[18]);
    c->r[14] = 0xe8b43cu; f_15b9c7c(c);
    c->v.s[24] = 0x3c8efa36u;
    c->v.s[16] = c->v.s[0];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[18] = c->v.f[22] * c->v.f[24];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xe8b454u; f_15efde8(c);
    c->v.f[22] = c->v.f[28] * c->v.f[24];
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xe8b464u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xe8b470u; f_15efdf4(c);
    c->r[0] = 0xbaddccu;
    c->v.s[28] = 0x0u;
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->v.f[19] = c->v.f[24] * c->v.f[18];
    { uint32_t ea = 0xe8b48cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xe8b48cu; f_15efdf4(c);
    c->v.s[1] = c->v.s[20];
    c->v.f[14] = c->v.f[20] * c->v.f[24];
    c->v.s[3] = c->v.s[18];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[8] = LD32(c->r[5] + 36u);
    c->v.s[10] = LD32(c->r[5] + 32u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[12] = LD32(c->r[5] + 40u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[17] * c->v.f[16]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[19] * c->v.f[28]);
    c->v.f[19] = -c->v.f[19] + (float)(c->v.f[20] * c->v.f[28]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[14] * c->v.f[28]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[18] * c->v.f[28]);
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[22] = c->v.f[2] * c->v.f[1];
    c->v.f[1] = c->v.f[0] * c->v.f[28];
    c->v.f[28] = c->v.f[0] * c->v.f[4];
    c->v.f[10] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[4] * c->v.f[19]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[30] = c->v.f[3] * c->v.f[2];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.s[0] = 0xbf7fbe77u;
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_e8b538; }
    c->v.s[0] = 0x3c23d70au;
    c->v.f[8] = fabsf(c->v.f[4]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_e8b5b0; }
    c->r[0] = 0xbadcd8u;
    { uint32_t ea = 0xe8b530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_e8b5ec;
L_e8b538:;
    c->v.s[16] = 0x3f800000u;
    c->v.f[0] = c->v.f[8] + c->v.f[16];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_e8b55c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xe8b55cu; f_15efddc(c);
L_e8b55c:;
    c->r[0] = 0xbadcd8u;
    c->v.f[7] = c->v.f[16] / c->v.f[0];
    c->v.s[2] = LD32(c->r[5] + 32u);
    c->v.s[4] = LD32(c->r[5] + 36u);
    c->v.s[6] = LD32(c->r[5] + 40u);
    c->v.s[5] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[5];
    { uint32_t ea = 0xe8b580u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->v.f[14] = c->v.f[4] * c->v.f[8];
    c->v.f[1] = c->v.f[12] * c->v.f[2];
    c->v.f[3] = c->v.f[10] * c->v.f[6];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[6] = c->v.f[7] * c->v.f[14];
    c->v.f[4] = c->v.f[7] * c->v.f[1];
    c->v.f[2] = c->v.f[7] * c->v.f[3];
    goto L_e8b64c;
L_e8b5b0:;
    c->r[0] = 0xbadc40u;
    c->v.f[8] = fabsf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    { uint32_t ea = 0xe8b5c4u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xbadc84u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    { uint32_t ea = 0xe8b5d4u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_e8b5ec:;
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[2]);
    c->v.f[18] = c->v.f[6] * c->v.f[8];
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[20] = c->v.f[4] * c->v.f[10];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_e8b634; }
    c->r[14] = 0xe8b630u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_e8b634:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[2] = c->v.f[0] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[6] = c->v.f[20] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[18];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
L_e8b64c:;
    c->v.f[10] = c->v.f[6] + c->v.f[6];
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[12] = c->v.f[2] + c->v.f[2];
    c->v.s[3] = 0x3f800000u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[4] * c->v.f[8];
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[7] = c->v.f[0] * c->v.f[10];
    c->v.f[9] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[2] * c->v.f[12];
    c->v.f[12] = c->v.f[0] * c->v.f[12];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[10];
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[5] = c->v.f[6] + c->v.f[14];
    c->v.f[8] = c->v.f[9] - c->v.f[7];
    c->v.f[6] = c->v.f[6] + c->v.f[1];
    c->v.f[7] = c->v.f[7] + c->v.f[9];
    c->v.f[9] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[5] = c->v.f[3] - c->v.f[5];
    c->v.f[6] = c->v.f[3] - c->v.f[6];
    c->v.f[10] = c->v.f[28] * c->v.f[5];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[30] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] + c->v.f[1];
    c->v.f[5] = c->v.f[4] + c->v.f[12];
    c->v.f[4] = c->v.f[4] - c->v.f[12];
    c->v.f[6] = c->v.f[30] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[28] * c->v.f[7]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[22] * c->v.f[9]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[8] = c->v.f[3] - c->v.f[8];
    c->v.f[2] = c->v.f[30] * c->v.f[5];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[0]);
    c->v.f[0] = c->v.f[26] * c->v.f[10];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[26] * c->v.f[6];
    ST32(c->r[5] + 16u, c->v.s[0]);
    c->v.f[2] = c->v.f[26] * c->v.f[2];
    ST32(c->r[5] + 20u, c->v.s[4]);
    ST32(c->r[5] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4], c->v.s[0]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[2]);
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8b734(Cpu *restrict c) {
    FN_ENTER(0xe8b734u);
L_e8b734:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8b738(Cpu *restrict c) {
    FN_ENTER(0xe8b738u);
L_e8b738:;
    c->r[0] = 0xbba6b8u;
    { uint32_t ea = 0xe8b744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8b748(Cpu *restrict c) {
    FN_ENTER(0xe8b748u);
L_e8b748:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0xbad3f0u;
    c->r[3] = 0x80u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbba680u;
    { uint32_t ea = 0xe8b774u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8caa8eu;
    { uint32_t ea = 0xe8b77cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8b780u + c->r[1];
    c->r[14] = 0xe8b780u; f_9aedcc(c);
    c->r[1] = 0xbba6f8u;
    { uint32_t ea = 0xe8b78cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8b7a8(Cpu *restrict c) {
    FN_ENTER(0xe8b7a8u);
L_e8b7a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbba6d0u;
    { uint32_t ea = 0xe8b7b8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8b7bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x48u;
    c->pc = c->r[4]; c->r[14] = 0xe8b7d4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_e8b7e0(c);
}
void f_e8b7e0(Cpu *restrict c) {
    FN_ENTER(0xe8b7e0u);
L_e8b7e0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[14] = 0xe8b7ecu; f_e8f36c(c);
    c->r[0] = 0xbba68cu;
    c->r[6] = 0x0u;
    c->r[1] = c->r[8];
    { uint32_t ea = 0xe8b800u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x8c5562u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[6]); }
    c->r[0] = 0xe8b814u + c->r[0];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = 0xbb5518u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xe8b84cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = 0xbad320u;
    { uint32_t ea = 0xe8b868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe8b880u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x1u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x6fu;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6f6eu;
    { uint32_t ea = c->r[5] + 0xcu; ST8(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x656e0000u;
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = 0x65u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6eu;
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_e8b934; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8b910; }
L_e8b8d0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8b8d0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_e8b908; }
    c->r[0] = 0xbad28cu;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe8b8fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8b908u; rt_dispatch(c);
L_e8b908:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
L_e8b910:;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_e8b974; }
L_e8b91c:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = strex32(c, c->r[5], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_e8b91c; }
    goto L_e8b93c;
L_e8b934:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8b974; }
L_e8b93c:;
    c->r[0] = ldrex32(c, c->r[5]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[5], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_e8b93c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_e8b974; }
    c->r[0] = 0xbad224u;
    { uint32_t ea = 0xe8b964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8b974u; rt_dispatch(c);
L_e8b974:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e8b9a0(Cpu *restrict c) {
    FN_ENTER(0xe8b9a0u);
L_e8b9a0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0xe8b9d8u; f_9bb638(c);
    c->r[1] = 0x8c6180u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[9] = c->r[10] + 0x10u;
    c->r[1] = 0xe8b9f0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
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
    c->r[14] = 0xe8ba38u; f_9bb638(c);
    { uint32_t ea = c->r[9]; c->r[9] = c->r[9] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[9] = 0x0u;
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
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0xe8ba94u; f_9bb638(c);
    c->r[1] = 0x8f6a26u;
    c->r[8] = 0x2u;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x20000u;
    c->r[1] = 0xe8bab0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x4u;
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
    c->r[14] = 0xe8bb0cu; f_9bb638(c);
    c->r[1] = 0x8f69cbu;
    c->r[1] = 0xe8bb18u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
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
void f_e8bb68(Cpu *restrict c) {
    FN_ENTER(0xe8bb68u);
L_e8bb68:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbba318u;
    { uint32_t ea = 0xe8bb78u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8bb7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x88u;
    c->pc = c->r[4]; c->r[14] = 0xe8bb94u; rt_dispatch(c);
    c->r[14] = 0xe8bb98u; f_e8f36c(c);
    c->r[1] = 0xbba2ecu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xe8bba8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8bbb8(Cpu *restrict c) {
    FN_ENTER(0xe8bbb8u);
L_e8bbb8:;
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
    c->r[14] = 0xe8bbf0u; f_9bb638(c);
    c->r[1] = 0x8f68f6u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xe8bc08u + c->r[1];
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
    c->r[14] = 0xe8bc68u; f_9bb638(c);
    c->r[1] = 0x8f689au;
    c->r[1] = 0xe8bc74u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x200000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
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
void f_e8bccc(Cpu *restrict c) {
    FN_ENTER(0xe8bcccu);
L_e8bccc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbba1bcu;
    { uint32_t ea = 0xe8bcdcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8bce0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0xe8bcf8u; rt_dispatch(c);
    c->r[14] = 0xe8bcfcu; f_e8f36c(c);
    c->r[1] = 0xbba190u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xe8bd0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8bd24(Cpu *restrict c) {
    FN_ENTER(0xe8bd24u);
L_e8bd24:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb7450u;
    { uint32_t ea = 0xe8bd34u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8bd38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x7cu;
    c->pc = c->r[4]; c->r[14] = 0xe8bd50u; rt_dispatch(c);
    c->r[14] = 0xe8bd54u; f_c287f8(c);
    c->r[1] = 0xbba140u;
    { uint32_t ea = 0xe8bd60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x50u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8bd9c(Cpu *restrict c) {
    FN_ENTER(0xe8bd9cu);
L_e8bd9c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xbb73d0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xe8bdb4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe8bdb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8bdd8(Cpu *restrict c) {
    FN_ENTER(0xe8bdd8u);
L_e8bdd8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xe8bde0u; f_c287f8(c);
    c->r[1] = 0xbba0b4u;
    { uint32_t ea = 0xe8bdecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x50u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8be24(Cpu *restrict c) {
    FN_ENTER(0xe8be24u);
L_e8be24:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[6] = c->r[0];
    c->r[0] = 0xbba064u;
    { uint32_t ea = 0xe8be3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_e8bf48; }
    { uint32_t ea = c->r[6] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_e8bea4; }
    c->r[4] = 0x0u;
    c->r[5] = 0x8u;
L_e8be6c:;
    { uint32_t ea = c->r[10] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8be88; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8be84u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
L_e8be88:;
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x14u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_e8be6c; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_e8bf48; }
L_e8bea4:;
    { uint32_t ea = c->r[10] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[10] - 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8bf28; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[5] = 0x0u;
    c->r[11] = c->r[10] + (c->r[0] << 2);
    c->r[0] = 0xbb9fd8u;
    { uint32_t ea = 0xe8beccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + 0x8u;
    c->r[0] = 0xbb72acu;
    { uint32_t ea = 0xe8bed8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_e8bed4:;
    c->r[4] = c->r[11];
    { uint32_t ea = c->r[11] - 0x14u; ST32(ea, c->r[9]); c->r[11] = ea; }
    { uint32_t ea = c->r[11] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8bf14; }
    goto L_e8bf20;
L_e8beec:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8bf04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xe8bf14u; rt_dispatch(c);
L_e8bf14:;
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_e8beec; }
L_e8bf20:;
    (void)f_subs(c, c->r[11], c->r[10]);
    if (COND_NE) { goto L_e8bed4; }
L_e8bf28:;
    c->r[0] = 0xbb9f74u;
    { uint32_t ea = 0xe8bf34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8bf34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0xe8bf44u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
L_e8bf48:;
    { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_e8c09c; }
    { uint32_t ea = c->r[6] + 0x51u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_e8bfac; }
    c->r[4] = 0x0u;
    c->r[5] = 0x8u;
L_e8bf70:;
    { uint32_t ea = c->r[7] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8bf8c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8bf88u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
L_e8bf8c:;
    { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[5] = c->r[5] + 0x1cu;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_e8bf70; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_e8c09c; }
L_e8bfac:;
    c->r[0] = c->r[7] - 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c07c; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[9] = 0x0u;
    c->r[10] = c->r[7] + (c->r[0] << 2);
    c->r[0] = 0xbb9ed4u;
    { uint32_t ea = 0xe8bfd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[0] + 0x8u;
    c->r[0] = 0xbb9ec0u;
    { uint32_t ea = 0xe8bfe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x8u;
    c->r[0] = 0xbb7194u;
    { uint32_t ea = 0xe8bff0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0xbb718cu;
    { uint32_t ea = 0xe8bff8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_e8bff8:;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[10] - 0x1cu; ST32(ea, c->r[11]); c->r[10] = ea; }
    { uint32_t ea = c->r[10] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8c02c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c01cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8c02cu; rt_dispatch(c);
L_e8c02c:;
    { uint32_t ea = c->r[4] - 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] - 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8c068; }
    goto L_e8c074;
L_e8c040:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[9]); }
    c->r[14] = 0xe8c058u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8c068u; rt_dispatch(c);
L_e8c068:;
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_e8c040; }
L_e8c074:;
    (void)f_subs(c, c->r[10], c->r[7]);
    if (COND_NE) { goto L_e8bff8; }
L_e8c07c:;
    c->r[0] = 0xbb9e28u;
    { uint32_t ea = 0xe8c088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c088u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8c098u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
L_e8c09c:;
    { uint32_t ea = c->r[6] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8c0c4; }
    c->r[0] = 0xbb70d0u;
    { uint32_t ea = 0xe8c0b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c0b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8c0c4u; rt_dispatch(c);
L_e8c0c4:;
    { uint32_t ea = c->r[6] + 0x62u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8c0f4; }
    c->r[0] = 0xbb70a0u;
    { uint32_t ea = 0xe8c0e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c0e4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8c0f4u; rt_dispatch(c);
L_e8c0f4:;
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8c124; }
    c->r[0] = 0xbb7070u;
    { uint32_t ea = 0xe8c114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c114u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8c124u; rt_dispatch(c);
L_e8c124:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_c28894(c);
}
void f_e8c164(Cpu *restrict c) {
    FN_ENTER(0xe8c164u);
L_e8c164:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xe8c170u; f_e8be24(c);
    c->r[0] = 0xbb7008u;
    { uint32_t ea = 0xe8c17cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c17cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8c194(Cpu *restrict c) {
    FN_ENTER(0xe8c194u);
L_e8c194:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x34u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c538; }
    c->r[0] = c->r[2] & 0x1u;
    c->r[10] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb6fb4u;
    { uint32_t ea = 0xe8c1d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb6fa8u;
    { uint32_t ea = 0xe8c1dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb6f9cu;
    { uint32_t ea = 0xe8c1e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb6f90u;
    { uint32_t ea = 0xe8c1f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_e8c1f4:;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[6] + (c->r[6] << 2);
    c->r[0] = c->r[0] + (c->r[8] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8c398; }
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[11];
    c->r[2] = c->r[13] + 0x28u;
    c->r[3] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->pc = c->r[4]; c->r[14] = 0xe8c24cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_e8c514; }
    c->r[7] = 0x0u;
L_e8c258:;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + (c->r[8] << 2);
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e8c28c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c2a8; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + (c->r[9] << 2);
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    goto L_e8c2e4;
L_e8c28c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c2f4; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + (c->r[9] << 2);
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    goto L_e8c334;
L_e8c2a8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c2b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[3]; c->r[14] = 0xe8c2c4u; rt_dispatch(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
L_e8c2e4:;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_e8c348;
L_e8c2f4:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c2fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[3]; c->r[14] = 0xe8c310u; rt_dispatch(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
L_e8c334:;
    c->r[1] = c->r[1] + (c->r[8] << 2);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[8] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
L_e8c348:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x28u;
    c->r[3] = c->r[13] + 0x24u;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->pc = c->r[4]; c->r[14] = 0xe8c38cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8c258; }
    goto L_e8c514;
L_e8c398:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11];
    c->r[2] = c->r[13] + 0x28u;
    c->r[3] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->pc = c->r[7]; c->r[14] = 0xe8c3c4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_e8c514; }
    c->r[7] = 0x0u;
L_e8c3d0:;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + (c->r[8] << 2);
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e8c404; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c420; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + (c->r[9] << 2);
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    goto L_e8c45c;
L_e8c404:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c46c; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + (c->r[9] << 2);
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    goto L_e8c4ac;
L_e8c420:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c428u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[3]; c->r[14] = 0xe8c43cu; rt_dispatch(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
L_e8c45c:;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_e8c4c0;
L_e8c46c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c474u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[3]; c->r[14] = 0xe8c488u; rt_dispatch(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
L_e8c4ac:;
    c->r[1] = c->r[1] + (c->r[8] << 2);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[8] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
L_e8c4c0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x28u;
    c->r[3] = c->r[13] + 0x24u;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->pc = c->r[6]; c->r[14] = 0xe8c50cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8c3d0; }
L_e8c514:;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[8] << 2);
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8c1f4; }
L_e8c538:;
    c->r[13] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8c550(Cpu *restrict c) {
    FN_ENTER(0xe8c550u);
L_e8c550:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8c618; }
    c->r[0] = c->r[5] - 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c5f8; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[8] = 0x0u;
    c->r[9] = c->r[5] + (c->r[0] << 2);
    c->r[0] = 0xbb9908u;
    { uint32_t ea = 0xe8c59cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[0] + 0x8u;
    c->r[0] = 0xbb6bdcu;
    { uint32_t ea = 0xe8c5a8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_e8c5a4:;
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[9] - 0x14u; ST32(ea, c->r[11]); c->r[9] = ea; }
    { uint32_t ea = c->r[9] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8c5e4; }
    goto L_e8c5f0;
L_e8c5bc:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    c->r[14] = 0xe8c5d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe8c5e4u; rt_dispatch(c);
L_e8c5e4:;
    { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_e8c5bc; }
L_e8c5f0:;
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_NE) { goto L_e8c5a4; }
L_e8c5f8:;
    c->r[0] = 0xbb98a4u;
    { uint32_t ea = 0xe8c604u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c604u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8c614u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_e8c618:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_e8c6b0; }
    c->r[5] = 0x14u;
    { uint64_t r = (uint64_t)c->r[10] * c->r[5]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[0] = 0xbb985cu;
    if (COND_CC) { c->r[6] = ~0x0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = 0xe8c64cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { c->r[6] = ~0x0u; }
    c->r[0] = c->r[7];
    c->r[14] = 0xe8c654u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xe8c66cu; rt_dispatch(c);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[10]); }
    c->r[7] = c->r[0] + 0x8u;
    c->r[0] = c->r[10] + (c->r[10] << 2);
    c->r[3] = 0x0u;
    c->r[1] = c->r[7] + (c->r[0] << 2);
    c->r[0] = 0xbb9818u;
    { uint32_t ea = 0xe8c68cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x8u;
    c->r[0] = c->r[7];
L_e8c690:;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x14u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_e8c690; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[7]); }
L_e8c6b0:;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[10]); }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8c6d0(Cpu *restrict c) {
    FN_ENTER(0xe8c6d0u);
L_e8c6d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c710; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + (c->r[5] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c710; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8c710u; rt_dispatch(c);
L_e8c710:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + (c->r[5] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8c73c(Cpu *restrict c) {
    FN_ENTER(0xe8c73cu);
L_e8c73c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_e8c770; }
    c->r[0] = 0xbb6a24u;
    { uint32_t ea = 0xe8c760u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c760u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xe8c770u; rt_dispatch(c);
L_e8c770:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_e8c7ec; }
    c->r[0] = 0x14u;
    { uint64_t r = (uint64_t)c->r[4] * c->r[0]; c->r[6] = (uint32_t)r; c->r[0] = (uint32_t)(r >> 32); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xbb69e8u;
    if (COND_NE) { c->r[6] = ~0x0u; }
    { uint32_t ea = 0xe8c79cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c79cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xe8c7b0u; rt_dispatch(c);
    c->r[1] = c->r[4] + (c->r[4] << 2);
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[6] = c->r[0];
    c->r[1] = c->r[0] + (c->r[1] << 2);
L_e8c7c4:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x10u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x12u; ST16(ea, c->r[2]); }
    c->r[6] = c->r[6] + 0x14u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_e8c7c4; }
    { uint32_t ea = c->r[5] + 0x6cu; ST32(ea, c->r[0]); }
L_e8c7ec:;
    { uint32_t ea = c->r[5] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8c7fc(Cpu *restrict c) {
    FN_ENTER(0xe8c7fcu);
L_e8c7fc:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8c81c; }
L_e8c80c:;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8c80c; }
L_e8c81c:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[0]); }
    return;
}
void f_e8c830(Cpu *restrict c) {
    FN_ENTER(0xe8c830u);
L_e8c830:;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_e8c858; }
L_e8c840:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_e8c840; }
L_e8c858:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1] + 0x12u; ST8(ea, c->r[0]); }
    return;
}
void f_e8c878(Cpu *restrict c) {
    FN_ENTER(0xe8c878u);
L_e8c878:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb9620u;
    { uint32_t ea = 0xe8c888u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8c88cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0xe8c8a4u; rt_dispatch(c);
    c->r[1] = 0xbb95f0u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xe8c8b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8c8d0(Cpu *restrict c) {
    FN_ENTER(0xe8c8d0u);
L_e8c8d0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb95c0u;
    { uint32_t ea = 0xe8c8e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8c93c; }
    c->r[0] = 0xbb6878u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xe8c90cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_e8c908:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    c->r[14] = 0xe8c920u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8c930u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_e8c908; }
L_e8c93c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e8c94c(Cpu *restrict c) {
    FN_ENTER(0xe8c94cu);
L_e8c94c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb9544u;
    { uint32_t ea = 0xe8c960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8c9b8; }
    c->r[0] = 0xbb67fcu;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xe8c988u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_e8c984:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    c->r[14] = 0xe8c99cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8c9acu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_e8c984; }
L_e8c9b8:;
    c->r[0] = 0xbb94e4u;
    { uint32_t ea = 0xe8c9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8c9c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8c9e4(Cpu *restrict c) {
    FN_ENTER(0xe8c9e4u);
L_e8c9e4:;
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
    c->r[14] = 0xe8ca1cu; f_9bb638(c);
    c->r[1] = 0x8d6b2cu;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0xe8ca34u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x10u;
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
    c->r[14] = 0xe8ca9cu; f_9bb638(c);
    c->r[1] = 0x8ed275u;
    c->r[1] = 0xe8caa8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x12u;
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
void f_e8cafc(Cpu *restrict c) {
    FN_ENTER(0xe8cafcu);
L_e8cafc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb93a4u;
    { uint32_t ea = 0xe8cb0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8cb10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0xe8cb28u; rt_dispatch(c);
    c->r[2] = 0xbb9364u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xe8cb48u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8cb60(Cpu *restrict c) {
    FN_ENTER(0xe8cb60u);
L_e8cb60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb9338u;
    { uint32_t ea = 0xe8cb74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8cba8; }
    c->r[0] = 0xbb65ecu;
    { uint32_t ea = 0xe8cb98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8cb98u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8cba8u; rt_dispatch(c);
L_e8cba8:;
    c->r[0] = 0xbb92f0u;
    { uint32_t ea = 0xe8cbb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8cc0c; }
    c->r[0] = 0xbb65a8u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xe8cbdcu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_e8cbd8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    c->r[14] = 0xe8cbf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8cc00u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_e8cbd8; }
L_e8cc0c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e8cc24(Cpu *restrict c) {
    FN_ENTER(0xe8cc24u);
L_e8cc24:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb9274u;
    { uint32_t ea = 0xe8cc38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8cc6c; }
    c->r[0] = 0xbb6528u;
    { uint32_t ea = 0xe8cc5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8cc5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8cc6cu; rt_dispatch(c);
L_e8cc6c:;
    c->r[0] = 0xbb922cu;
    { uint32_t ea = 0xe8cc78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_e8ccd0; }
    c->r[0] = 0xbb64e4u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xe8cca0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_e8cc9c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    c->r[14] = 0xe8ccb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8ccc4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_e8cc9c; }
L_e8ccd0:;
    c->r[0] = 0xbb91d4u;
    { uint32_t ea = 0xe8ccdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8ccdcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8cd04(Cpu *restrict c) {
    FN_ENTER(0xe8cd04u);
L_e8cd04:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xbb64e0u;
    { uint32_t ea = 0xe8cd14u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8cd18u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x104u;
    c->pc = c->r[5]; c->r[14] = 0xe8cd30u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xe8cd38u; f_c287f8(c);
    c->r[0] = 0xbb9140u;
    c->r[5] = 0x0u;
    c->r[1] = 0x2cu;
    { uint32_t ea = c->r[4] + 0x50u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8cd74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb9134u;
    { uint32_t ea = 0xe8cd84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x80u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8cda8u; f_15efd7c(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43480000u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xecu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8cdd4(Cpu *restrict c) {
    FN_ENTER(0xe8cdd4u);
L_e8cdd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xe8cde0u; f_c287f8(c);
    c->r[0] = 0xbb9098u;
    c->r[5] = 0x0u;
    c->r[1] = 0x2cu;
    { uint32_t ea = c->r[4] + 0x50u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8ce1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb908cu;
    { uint32_t ea = 0xe8ce2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x80u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8ce50u; f_15efd7c(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43480000u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xecu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8ce78(Cpu *restrict c) {
    FN_ENTER(0xe8ce78u);
L_e8ce78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb9028u;
    { uint32_t ea = 0xe8ce8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8cea4; }
    c->r[0] = c->r[0] - 0x8u;
    c->r[14] = 0xe8cea4u; f_9af53c(c);
L_e8cea4:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8ced4; }
    c->r[0] = 0xbb6338u;
    { uint32_t ea = 0xe8cebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8cebcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8ceccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
L_e8ced4:;
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8cefc; }
    c->r[0] = 0xbb6308u;
    { uint32_t ea = 0xe8ceecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8ceecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8cefcu; rt_dispatch(c);
L_e8cefc:;
    c->r[0] = 0xbb8fb0u;
    { uint32_t ea = 0xe8cf08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8cf34; }
    c->r[0] = 0xbb6260u;
    { uint32_t ea = 0xe8cf24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8cf24u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8cf34u; rt_dispatch(c);
L_e8cf34:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_e8be24(c);
}
void f_e8cf64(Cpu *restrict c) {
    FN_ENTER(0xe8cf64u);
L_e8cf64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb8f40u;
    { uint32_t ea = 0xe8cf78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8cfa4; }
    c->r[0] = 0xbb61f0u;
    { uint32_t ea = 0xe8cf94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8cf94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8cfa4u; rt_dispatch(c);
L_e8cfa4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8cfc4(Cpu *restrict c) {
    FN_ENTER(0xe8cfc4u);
L_e8cfc4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xe8cfd0u; f_e8ce78(c);
    c->r[0] = 0xbb6218u;
    { uint32_t ea = 0xe8cfdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8cfdcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8cff4(Cpu *restrict c) {
    FN_ENTER(0xe8cff4u);
L_e8cff4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xe8d008u; f_c28a34(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xe8d030u; f_9bb638(c);
    c->r[1] = 0x8f5510u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xe8d044u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x7cu;
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
void f_e8d08c(Cpu *restrict c) {
    FN_ENTER(0xe8d08cu);
L_e8d08c:;
    __attribute__((musttail)) return f_c28a34(c);
}
void f_e8d090(Cpu *restrict c) {
    FN_ENTER(0xe8d090u);
L_e8d090:;
    __attribute__((musttail)) return f_c28a2c(c);
}
void f_e8d094(Cpu *restrict c) {
    FN_ENTER(0xe8d094u);
L_e8d094:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = 0x1cu;
    c->r[1] = 0x10u;
    c->r[14] = 0xe8d0acu; f_c293d0(c);
    c->r[6] = c->r[0];
    c->r[14] = 0xe8d0b4u; f_e8f36c(c);
    c->r[0] = 0xbb6088u;
    c->r[1] = 0xbb8df4u;
    { uint32_t ea = 0xe8d0c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xe8d0c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_c2948c(c);
}
void f_e8d100(Cpu *restrict c) {
    FN_ENTER(0xe8d100u);
L_e8d100:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xe8d10cu; f_e8d9c4(c);
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_NE) { goto L_e8d124; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c29344(c);
L_e8d124:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8d128(Cpu *restrict c) {
    FN_ENTER(0xe8d128u);
L_e8d128:;
    c->r[3] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x84u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], c->r[1]);
    if (COND_LS) { return; }
    { uint32_t ea = c->r[3] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8d160; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { return; }
    c->r[0] = c->r[1];
L_e8d160:;
    return;
}
void f_e8d164(Cpu *restrict c) {
    FN_ENTER(0xe8d164u);
L_e8d164:;
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8d16c(Cpu *restrict c) {
    FN_ENTER(0xe8d16cu);
L_e8d16c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[10] = c->r[1];
    c->r[9] = c->r[2];
    c->r[4] = c->r[0];
    c->r[8] = c->r[3];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_EQ) { goto L_e8d410; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d1c0; }
    c->r[0] = 0xbb604cu;
    { uint32_t ea = 0xe8d1a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d1a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d1b8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
L_e8d1c0:;
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d1f0; }
    c->r[0] = 0xbb601cu;
    { uint32_t ea = 0xe8d1d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d1d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d1e8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
L_e8d1f0:;
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d218; }
    c->r[0] = 0xbb5f7cu;
    { uint32_t ea = 0xe8d208u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d208u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d218u; rt_dispatch(c);
L_e8d218:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d244; }
    c->r[0] = c->r[0] - 0x8u;
    c->r[14] = 0xe8d23cu; f_9af53c(c);
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
L_e8d244:;
    c->r[0] = 0xbb5fa4u;
    { uint32_t ea = 0xe8d250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d250u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = (c->r[1] << 3);
    c->pc = c->r[3]; c->r[14] = 0xe8d26cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb5f04u;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = 0xe8d280u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d280u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = (c->r[6] << 2);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xe8d298u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_e8d2fc; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0xe8d2b0u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xe8d2c4u; f_15efdd0(c);
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d2ec; }
    c->r[0] = 0xbb5ea8u;
    { uint32_t ea = 0xe8d2dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d2dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d2ecu; rt_dispatch(c);
L_e8d2ec:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[6]); }
    goto L_e8d300;
L_e8d2fc:;
    c->r[5] = 0x1u;
L_e8d300:;
    c->r[0] = 0xbb5ee8u;
    { uint32_t ea = 0xe8d30cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d30cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe8d320u; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_e8d378; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_e8d378; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = (c->r[1] << 3);
    c->r[14] = 0xe8d350u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d35cu; f_15efdac(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xe8d370u; f_e8d43c(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_e8d378:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d3a4; }
    c->r[0] = 0xbb5e68u;
    { uint32_t ea = 0xe8d38cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d38cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d39cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
L_e8d3a4:;
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d3cc; }
    c->r[0] = 0xbb5dc8u;
    { uint32_t ea = 0xe8d3bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d3bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d3ccu; rt_dispatch(c);
L_e8d3cc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8d410; }
    c->r[0] = 0xbb5e00u;
    { uint32_t ea = 0xe8d3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d3f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d404u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_e8d410:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_e8d43c(Cpu *restrict c) {
    FN_ENTER(0xe8d43cu);
L_e8d43c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[11] = c->r[2];
    c->r[6] = c->r[1];
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d53c; }
    c->r[10] = 0x0u;
    c->r[2] = c->r[0];
L_e8d474:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_e8d530; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_e8d490:;
    { uint32_t ea = c->r[13] + 0x13u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x12u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e8d4b8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_e8d4b8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[13] + 0x12u;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x13u;
    c->pc = c->r[7]; c->r[14] = 0xe8d4dcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_e8d518; }
    { uint32_t ea = c->r[13] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[8] = v; } }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_e8d490; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    goto L_e8d520;
L_e8d518:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1u;
L_e8d520:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_e8d474; }
    goto L_e8d53c;
L_e8d530:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[8] = 0x0u;
L_e8d53c:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[2];
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { c->r[3] = c->r[2]; }
    if (COND_NE) { c->r[8] = c->r[2]; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[7] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8d5d0(Cpu *restrict c) {
    FN_ENTER(0xe8d5d0u);
L_e8d5d0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[9] = c->r[3];
    c->r[8] = c->r[2];
    c->r[11] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_e8d608; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { goto L_e8d618; }
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_e8d608:;
    (void)f_subs(c, c->r[11], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x0u); }
    if (COND_EQ) { goto L_e8d994; }
L_e8d618:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d648; }
    c->r[0] = 0xbb5bc4u;
    { uint32_t ea = 0xe8d630u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d630u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d640u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
L_e8d648:;
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d678; }
    c->r[0] = 0xbb5b94u;
    { uint32_t ea = 0xe8d660u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d660u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d670u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
L_e8d678:;
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d6a0; }
    c->r[0] = 0xbb5af4u;
    { uint32_t ea = 0xe8d690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d690u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d6a0u; rt_dispatch(c);
L_e8d6a0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb5b38u;
    { uint32_t ea = 0xe8d6bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d6bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = (c->r[1] << 3);
    c->pc = c->r[3]; c->r[14] = 0xe8d6d8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb5a98u;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0xe8d6ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d6ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[6] << 2);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xe8d704u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8d768; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xe8d71cu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xe8d730u; f_15efdd0(c);
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d758; }
    c->r[0] = 0xbb5a3cu;
    { uint32_t ea = 0xe8d748u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d748u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d758u; rt_dispatch(c);
L_e8d758:;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[6]); }
    goto L_e8d76c;
L_e8d768:;
    c->r[5] = 0x1u;
L_e8d76c:;
    c->r[0] = 0xbb5a7cu;
    { uint32_t ea = 0xe8d778u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d778u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xe8d78cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_e8d7dc; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_e8d7dc; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = (c->r[1] << 3);
    c->r[14] = 0xe8d7bcu; f_15efd7c(c);
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_EQ) { goto L_e8d878; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_e8d8ec; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d7d8u; f_15efdac(c);
    goto L_e8d8ec;
L_e8d7dc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d808; }
    c->r[0] = 0xbb5a04u;
    { uint32_t ea = 0xe8d7f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d7f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d800u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
L_e8d808:;
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d830; }
    c->r[0] = 0xbb5964u;
    { uint32_t ea = 0xe8d820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d820u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d830u; rt_dispatch(c);
L_e8d830:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8d994; }
    c->r[0] = 0xbb599cu;
    { uint32_t ea = 0xe8d858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8d858u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8d868u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_e8d878:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    c->r[14] = 0xe8d888u; f_15eff08(c);
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d8ec; }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[6] & 0x1u;
    c->r[1] = c->r[6];
    { uint32_t r = c->r[2] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_e8d8c8; }
    c->r[1] = c->r[1] & c->r[3];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_e8d8ec; }
L_e8d8c8:;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e8d8dc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_e8d8dc:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0xe8d8ecu; rt_dispatch(c);
L_e8d8ec:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8d90c; }
    c->r[0] = c->r[0] - 0x8u;
    c->r[14] = 0xe8d900u; f_9af53c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
L_e8d90c:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_e8d944; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x66u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[2] = c->r[2] + (c->r[0] << 3);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[11]); }
    goto L_e8d968;
L_e8d944:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x66u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[2] = c->r[2] + (c->r[0] << 3);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[8]); }
L_e8d968:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[2] = c->r[3] + (c->r[7] << 2);
    c->r[6] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; ST8(ea, c->r[0]); }
L_e8d994:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8d9c4(Cpu *restrict c) {
    FN_ENTER(0xe8d9c4u);
L_e8d9c4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[9] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8da9c; }
    c->r[0] = 0xffffu;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[9] + 0xecu; ST16(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_e8db34; }
    c->v.s[0] = LD32(c->r[9] + 124u);
    c->v.s[2] = LD32(c->r[4] + 16u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_e8dd50; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e8da44; }
    c->r[0] = 0xbb5750u;
    { uint32_t ea = 0xe8da34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8da34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8da44u; rt_dispatch(c);
L_e8da44:;
    c->r[0] = 0xbb5794u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[9] + 0xf8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0xfcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xe8da60u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe8da64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8da74u; rt_dispatch(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[9] + 0xe4u; ST32(ea, c->r[6]); }
    c->r[14] = 0xe8da80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8da94u; rt_dispatch(c);
    c->r[6] = 0x30u;
    goto L_e8dd30;
L_e8da9c:;
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8dac4; }
    c->r[0] = 0xbb56d0u;
    { uint32_t ea = 0xe8dab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8dab4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8dac4u; rt_dispatch(c);
L_e8dac4:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[9] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x100u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8db00; }
    c->r[0] = 0xbb5708u;
    { uint32_t ea = 0xe8daecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8daecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8dafcu; rt_dispatch(c);
    { uint32_t ea = c->r[9] + 0xe4u; ST32(ea, c->r[5]); }
L_e8db00:;
    c->r[5] = c->r[9];
    c->r[6] = 0x10u;
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8dd30; }
    c->r[0] = 0xbb56d4u;
    { uint32_t ea = 0xe8db20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8db20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8db30u; rt_dispatch(c);
    goto L_e8dd30;
L_e8db34:;
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8db48; }
    c->r[0] = c->r[0] - 0x8u;
    c->r[14] = 0xe8db48u; f_9af53c(c);
L_e8db48:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[9] + 0x84u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_e8db74; }
    c->r[5] = 0x0u;
    c->r[0] = c->r[4];
L_e8db60:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[9] + 0x84u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_e8db60; }
L_e8db74:;
    c->r[6] = 0x10u;
    { uint64_t r = (uint64_t)c->r[5] * c->r[6]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { c->r[0] = ~0x0u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0xe8db9cu; f_9af518(c);
    c->r[1] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_e8dc38; }
    c->r[2] = ~0xfu;
    c->r[7] = 0x1u;
    c->r[2] = c->r[2] + (c->r[5] << 4);
    { uint32_t sc = ((c->r[2] >> 3) & 1); uint32_t r = c->r[7] & (c->r[2] >> 4); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = (c->r[2] >> 4);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_e8dbf0; }
    c->r[2] = 0xbb558cu;
    { uint32_t ea = 0xe8dbd8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x18u;
L_e8dbf0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_e8dc38; }
    c->r[7] = 0xbb5558u;
    c->r[3] = c->r[1] + (c->r[5] << 4);
    c->r[6] = 0x0u;
    { uint32_t ea = 0xe8dc0cu + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x8u;
L_e8dc0c:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x14u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[2] + 0x20u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_e8dc0c; }
L_e8dc38:;
    { uint32_t ea = c->r[9] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8dcac; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_e8dcac; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
L_e8dc70:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[0] << 4);
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[0] << 4);
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[9] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[0] = c->r[2];
    if (COND_CC) { goto L_e8dc70; }
L_e8dcac:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8dcdc; }
    c->r[0] = 0xbb54b8u;
    { uint32_t ea = 0xe8dcccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8dcccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8dcdcu; rt_dispatch(c);
L_e8dcdc:;
    c->r[0] = 0xbb54fcu;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[9] + 0xf8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0xfcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x100u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xe8dcf8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe8dcfcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8dd0cu; rt_dispatch(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[9] + 0xe4u; ST32(ea, c->r[6]); }
    c->r[14] = 0xe8dd18u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8dd2cu; rt_dispatch(c);
    c->r[6] = 0x2u;
L_e8dd30:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_e8dd38:;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_e8dd50:;
    c->r[3] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_e8dd9c; }
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[2] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[9] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_e8dd9c; }
L_e8dd74:;
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + 0x3u;
    { uint32_t ea = c->r[9] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = c->r[2];
    if (COND_CC) { goto L_e8dd74; }
L_e8dd9c:;
    c->r[0] = c->r[1] - 0x1u;
    c->r[2] = 0x2u;
    c->r[6] = 0x8u;
    { uint32_t ea = c->r[9] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x66u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[9] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8dd38; }
    c->v.s[18] = 0x0u;
    c->v.s[20] = 0x42c80000u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
L_e8dde8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x66u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[11] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[9] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[11]; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t r = c->r[10] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_e8e158; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e158; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8de84; }
    { uint32_t ea = c->r[9] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[7] & 0x1u;
    c->r[2] = c->r[7];
    { uint32_t r = c->r[12] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_NE) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8de5c; }
    c->r[2] = c->r[2] & c->r[5];
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_e8de84; }
L_e8de5c:;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_e8de70; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_e8de70:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0xe8de7cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e154; }
L_e8de84:;
    { uint32_t ea = c->r[9] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8def0; }
    { uint32_t ea = c->r[9] + 0xbcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[5] & 0x1u;
    c->r[1] = c->r[5];
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    if (COND_NE) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8dec4; }
    c->r[1] = c->r[1] & c->r[7];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_e8def0; }
L_e8dec4:;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[5] >> 1);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e8ded8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_e8ded8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0xe8dee8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e154; }
L_e8def0:;
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8df34; }
    { uint32_t ea = c->r[9] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e8df20; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_e8df20:;
    { uint32_t ea = c->r[9] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0xe8df30u; rt_dispatch(c);
    c->v.s[16] = c->v.s[0];
L_e8df34:;
    c->v.s[0] = LD32(c->r[4] + 12u);
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[13] + 4u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] & 0x1u;
    c->r[0] = c->r[7];
    { uint32_t r = c->r[1] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8df78; }
    c->r[0] = c->r[0] & c->r[2];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_e8dfa4; }
L_e8df78:;
    { uint32_t ea = c->r[9] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8dfa4; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8df98; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_e8df98:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x4u;
    c->pc = c->r[3]; c->r[14] = 0xe8dfa4u; rt_dispatch(c);
L_e8dfa4:;
    { uint32_t ea = c->r[9] + 0xe4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t r = c->r[10] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_e8e0f8; }
    c->r[1] = c->r[11] + (c->r[11] << 1);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[14] + (c->r[1] << 3); ST32(ea, c->r[4]); c->r[14] = ea; }
    c->r[1] = c->r[5] + 0xcu;
    { uint32_t ea = c->r[14] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[14] + 0xcu; ST32(ea, c->r[1]); }
    ST32(c->r[14] + 16u, c->v.s[16]);
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[14] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + c->r[11]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_e8e0ec; }
    c->r[1] = c->r[14] + 0x14u;
    c->r[10] = c->r[5];
    c->r[8] = c->r[4];
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
L_e8e018:;
    c->r[5] = c->r[3] + c->r[1];
    c->r[5] = c->r[5] + (c->r[5] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[5] >> 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_HI) { c->r[1] = (uint32_t)((int32_t)c->r[5] >> 1); }
    if (COND_LS) { c->r[3] = c->r[0]; }
    c->r[0] = c->r[3] - c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GT) { goto L_e8e018; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_HI) { c->r[1] = c->r[1] + 0x1u; }
    (void)f_subs(c, c->r[12], c->r[1]);
    if (COND_LE) { goto L_e8e0dc; }
    c->r[7] = c->r[12] - 0x1u;
    { uint32_t ea = c->r[2] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[0]); }
    if (COND_LE) { goto L_e8e0d4; }
    c->r[0] = c->r[12] + 0x1u;
    c->r[2] = c->r[12] - 0x2u;
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e8e094; }
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[3]); }
    c->r[7] = c->r[2];
L_e8e094:;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_e8e0d4; }
    c->r[0] = ~0x3u;
    c->r[3] = c->r[7] - 0x2u;
    c->r[2] = c->r[0] + (c->r[7] << 2);
L_e8e0a8:;
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[3] - 0x2u;
    c->r[2] = c->r[2] - 0x8u;
    c->r[3] = c->r[0];
    if (COND_GT) { goto L_e8e0a8; }
L_e8e0d4:;
    { uint32_t ea = c->r[9] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
L_e8e0dc:;
    c->r[2] = c->r[2] + (c->r[1] << 2);
    c->r[0] = c->r[12] + 0x1u;
    c->r[4] = c->r[8];
    c->r[5] = c->r[10];
L_e8e0ec:;
    { uint32_t ea = c->r[9] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[14]); }
    goto L_e8e15c;
L_e8e0f8:;
    c->r[1] = c->r[11] + (c->r[11] << 1);
    c->v.s[0] = LD32(c->r[13] + 4u);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[14] + (c->r[1] << 3);
    c->v.s[2] = LD32(c->r[2] + 12u);
    c->v.s[4] = LD32(c->r[2] + 16u);
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_e8e15c; }
    { uint32_t ea = c->r[14] + (c->r[1] << 3); ST32(ea, c->r[4]); c->r[14] = ea; }
    c->r[3] = c->r[2] + 0x10u;
    c->r[2] = c->r[2] + 0xcu;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    ST32(c->r[3], c->v.s[16]);
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[14] + 20u, c->v.s[0]);
    goto L_e8e15c;
L_e8e154:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[5] = v; }
L_e8e158:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_e8e15c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_e8dde8; }
    c->r[6] = 0x8u;
    goto L_e8dd38;
}
void f_e8e1a4(Cpu *restrict c) {
    FN_ENTER(0xe8e1a4u);
L_e8e1a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb5100u;
    { uint32_t ea = 0xe8e1b4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8e1b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x60u;
    c->pc = c->r[4]; c->r[14] = 0xe8e1d0u; rt_dispatch(c);
    c->r[14] = 0xe8e1d4u; f_c287f8(c);
    c->r[1] = 0xbb7ce0u;
    { uint32_t ea = 0xe8e1e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x50u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x51u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8e20c(Cpu *restrict c) {
    FN_ENTER(0xe8e20cu);
L_e8e20c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[9] = c->r[0];
    c->r[0] = 0xbb7c9cu;
    { uint32_t ea = 0xe8e224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8e2f0; }
    c->r[0] = c->r[5] - 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e2d4; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[4] = 0x0u;
    c->r[6] = c->r[5] + (c->r[0] << 2);
    c->r[0] = 0xbb7c64u;
    { uint32_t ea = 0xe8e260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[0] + 0x8u;
    c->r[0] = 0xbb5048u;
    { uint32_t ea = 0xe8e26cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_e8e268:;
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[8] - 0xcu; ST32(ea, c->r[11]); c->r[8] = ea; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_e8e2c8; }
    { uint32_t ea = c->r[6] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e2ac; }
    c->r[0] = 0x0u;
L_e8e28c:;
    c->r[1] = c->r[7] + (c->r[0] << 3);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] - 8u; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_e8e28c; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_e8e2c4; }
L_e8e2ac:;
    c->r[0] = c->r[10];
    c->r[14] = 0xe8e2b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xe8e2c4u; rt_dispatch(c);
L_e8e2c4:;
    { uint32_t ea = c->r[6] - 0x8u; ST32(ea, c->r[4]); }
L_e8e2c8:;
    (void)f_subs(c, c->r[8], c->r[5]);
    c->r[6] = c->r[8];
    if (COND_NE) { goto L_e8e268; }
L_e8e2d4:;
    c->r[0] = 0xbb7be8u;
    { uint32_t ea = 0xe8e2e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e2e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8e2f0u; rt_dispatch(c);
L_e8e2f0:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_c28894(c);
}
void f_e8e310(Cpu *restrict c) {
    FN_ENTER(0xe8e310u);
L_e8e310:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xe8e31cu; f_e8e20c(c);
    c->r[0] = 0xbb4f8cu;
    { uint32_t ea = 0xe8e328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e328u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8e340(Cpu *restrict c) {
    FN_ENTER(0xe8e340u);
L_e8e340:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb7b78u;
    { uint32_t ea = 0xe8e350u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8e354u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xcu;
    c->pc = c->r[4]; c->r[14] = 0xe8e36cu; rt_dispatch(c);
    c->r[1] = 0xbb7b48u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xe8e37cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8e390(Cpu *restrict c) {
    FN_ENTER(0xe8e390u);
L_e8e390:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb7b20u;
    { uint32_t ea = 0xe8e3a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8e40c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e3e8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_e8e3c8:;
    c->r[2] = c->r[5] + (c->r[1] << 3);
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[2] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_e8e3c8; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8e404; }
L_e8e3e8:;
    c->r[0] = 0xbb4ec0u;
    { uint32_t ea = 0xe8e3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e3f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8e404u; rt_dispatch(c);
L_e8e404:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_e8e40c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8e41c(Cpu *restrict c) {
    FN_ENTER(0xe8e41cu);
L_e8e41c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb7a94u;
    { uint32_t ea = 0xe8e430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8e498; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e474; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_e8e454:;
    c->r[2] = c->r[5] + (c->r[1] << 3);
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[2] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_e8e454; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e8e490; }
L_e8e474:;
    c->r[0] = 0xbb4e34u;
    { uint32_t ea = 0xe8e480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e480u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xe8e490u; rt_dispatch(c);
L_e8e490:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_e8e498:;
    c->r[0] = 0xbb7a24u;
    { uint32_t ea = 0xe8e4a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e4a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8e4c4(Cpu *restrict c) {
    FN_ENTER(0xe8e4c4u);
L_e8e4c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb79f8u;
    { uint32_t ea = 0xe8e4d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8e4d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x90u;
    c->pc = c->r[4]; c->r[14] = 0xe8e4f0u; rt_dispatch(c);
    c->r[14] = 0xe8e4f4u; f_c287f8(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[12] = c->r[0] + 0x6cu;
    { uint32_t ea = c->r[0] + 0x50u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x51u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[2]); }
    c->r[2] = 0xbb79b0u;
    { uint32_t ea = 0xe8e520u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0xbaa61cu;
    { uint32_t ea = 0xe8e530u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8e568(Cpu *restrict c) {
    FN_ENTER(0xe8e568u);
L_e8e568:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xbb794cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xe8e580u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe8e584u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8e5a4(Cpu *restrict c) {
    FN_ENTER(0xe8e5a4u);
L_e8e5a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xe8e5acu; f_c287f8(c);
    c->r[12] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x51u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[2]); }
    c->r[2] = 0xbb78fcu;
    { uint32_t ea = 0xe8e5d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0xbaa568u;
    { uint32_t ea = 0xe8e5e4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x74u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8e61c(Cpu *restrict c) {
    FN_ENTER(0xe8e61cu);
L_e8e61c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb78a0u;
    { uint32_t ea = 0xe8e630u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e664; }
    c->r[0] = 0xbb7880u;
    { uint32_t ea = 0xe8e64cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e64cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8e65cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
L_e8e664:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_e8e20c(c);
}
void f_e8e678(Cpu *restrict c) {
    FN_ENTER(0xe8e678u);
L_e8e678:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb7844u;
    { uint32_t ea = 0xe8e68cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8e6c0; }
    c->r[0] = 0xbb7824u;
    { uint32_t ea = 0xe8e6a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e6a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8e6b8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
L_e8e6c0:;
    c->r[0] = c->r[4];
    c->r[14] = 0xe8e6c8u; f_e8e20c(c);
    c->r[0] = 0xbb77f8u;
    { uint32_t ea = 0xe8e6d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8e6d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8e6f4(Cpu *restrict c) {
    FN_ENTER(0xe8e6f4u);
L_e8e6f4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[7] = c->r[2];
    c->r[8] = c->r[3];
    c->r[9] = c->r[1];
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_e8e77c; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_e8e780; }
    c->v.d[8] = 0x4010000000000000ull;
    c->r[4] = c->r[7] & 0x1u;
    c->r[5] = c->r[4];
L_e8e730:;
    c->v.s[0] = c->r[4];
    c->v.df[1] = (double)(int32_t)c->v.s[0];
    c->v.d[0] = c->v.d[8];
    c->r[14] = 0xe8e740u; f_15f0ea4(c);
    c->r[0] = c->r[4] + 0x1u;
    c->v.s[0] = vcvt_u32_f64(c->v.df[0]);
    c->v.s[2] = c->r[0];
    c->v.df[1] = (double)(int32_t)c->v.s[2];
    c->r[6] = c->v.s[0];
    c->v.d[0] = c->v.d[8];
    c->r[14] = 0xe8e75cu; f_15f0ea4(c);
    c->v.s[0] = vcvt_u32_f64(c->v.df[0]);
    c->r[4] = c->r[4] + 0x2u;
    c->r[0] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[1] = c->v.s[0];
    c->r[5] = c->r[1] + c->r[0];
    if (COND_NE) { goto L_e8e730; }
    goto L_e8e780;
L_e8e77c:;
    c->r[5] = 0x0u;
L_e8e780:;
    c->r[11] = 0xcu;
    { uint64_t r = (uint64_t)c->r[5] * c->r[11]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[4] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[4], c->r[0]);
    c->r[0] = 0xbb771cu;
    if (COND_CC) { c->r[4] = ~0x0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = 0xe8e7acu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { c->r[4] = ~0x0u; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe8e7b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[6]; c->r[14] = 0xe8e7ccu; rt_dispatch(c);
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_e8e810; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[3] = 0x0u;
    c->r[1] = c->r[6] + (c->r[0] << 2);
    c->r[0] = 0xbb76ccu;
    { uint32_t ea = 0xe8e7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x8u;
    c->r[0] = c->r[6];
L_e8e7fc:;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0xcu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_e8e7fc; }
L_e8e810:;
    c->v.d[0] = 0x3ff0000000000000ull;
    c->r[0] = c->r[7] - 0x1u;
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x50u; ST8(ea, c->r[7]); }
    c->r[14] = 0xe8e828u; f_15f1528(c);
    c->v.s[0] = vcvt_u32_f64(c->v.df[0]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[10] + 0x51u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9] + 4u);
    c->v.s[8] = LD32(c->r[9] + 20u);
    c->v.s[2] = LD32(c->r[9] + 8u);
    c->v.s[10] = LD32(c->r[9] + 24u);
    c->v.s[4] = LD32(c->r[9]);
    c->v.s[6] = LD32(c->r[9] + 16u);
    { uint32_t ea = c->r[10] + 0x7cu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    ST32(c->r[10] + 112u, c->v.s[4]);
    ST32(c->r[10] + 116u, c->v.s[0]);
    ST32(c->r[10] + 120u, c->v.s[2]);
    { uint32_t ea = c->r[10] + 0x5du; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8e8a0(Cpu *restrict c) {
    FN_ENTER(0xe8e8a0u);
L_e8e8a0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[7] = c->r[3];
    c->r[10] = 0xcu;
    c->r[9] = c->r[1];
    c->r[4] = c->r[0];
    c->r[8] = c->r[2];
    { uint64_t r = (uint64_t)c->r[7] * c->r[10]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[0] = 0xbb75e8u;
    if (COND_CC) { c->r[6] = ~0x0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = 0xe8e8e0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_NE) { c->r[6] = ~0x0u; }
    c->r[0] = c->r[5];
    c->r[14] = 0xe8e8e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[5]; c->r[14] = 0xe8e900u; rt_dispatch(c);
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_e8e944; }
    c->r[1] = 0xbb7598u;
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[3] = 0x0u;
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = 0xe8e92cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x8u;
    c->r[1] = c->r[6];
L_e8e930:;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0xcu;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_e8e930; }
L_e8e944:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x1u;
    c->r[2] = f_subs(c, c->r[8], 0x1u);
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x50u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x51u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_e8e9cc; }
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    c->r[7] = c->r[8] - 0x2u;
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_e8e9a0; }
    c->r[0] = 0x1u;
    c->r[5] = 0x1feu;
L_e8e97c:;
    c->r[1] = c->r[0];
    c->r[3] = c->r[3] + 0x1u;
    c->r[0] = c->r[5] & (c->r[1] << 1);
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_NE) { goto L_e8e97c; }
    c->r[6] = (c->r[1] << 1);
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_CS) { goto L_e8e9a8; }
    goto L_e8e9c8;
L_e8e9a0:;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_CC) { goto L_e8e9c8; }
L_e8e9a8:;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = 0x1f0u;
L_e8e9b0:;
    c->r[7] = c->r[0];
    c->r[2] = f_subs(c, c->r[2], 0x4u);
    c->r[0] = c->r[3] & (c->r[7] << 4);
    if (COND_NE) { goto L_e8e9b0; }
    c->r[0] = (c->r[7] << 4);
    c->r[6] = c->r[0] & 0x3f0u;
L_e8e9c8:;
    { uint32_t ea = c->r[4] + 0x51u; ST8(ea, c->r[6]); }
L_e8e9cc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9] + 4u);
    c->v.s[8] = LD32(c->r[9] + 20u);
    c->v.s[2] = LD32(c->r[9] + 8u);
    c->v.s[10] = LD32(c->r[9] + 24u);
    c->v.s[4] = LD32(c->r[9]);
    c->v.s[6] = LD32(c->r[9] + 16u);
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->v.f[4] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[8] - c->v.f[0];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    ST32(c->r[4] + 112u, c->v.s[4]);
    ST32(c->r[4] + 116u, c->v.s[0]);
    ST32(c->r[4] + 120u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x5du; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_e8ea30(Cpu *restrict c) {
    FN_ENTER(0xe8ea30u);
L_e8ea30:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_LS) { goto L_e8ec54; }
    c->v.s[0] = LD32(c->r[0] + 96u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0] + 100u);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[0] + 104u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[3] = 0x0u;
    c->r[4] = c->r[0] + 0x70u;
    c->r[12] = c->r[13] + 0x10u;
    c->r[6] = c->r[13] + 0x10u;
    c->r[7] = 0xf0fu;
    c->r[1] = c->r[4];
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xf0f0000u;
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    ST32(c->r[13] + 16u, c->v.s[0]);
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->v.s[10] = LD32(c->r[0] + 120u);
    c->v.s[8] = LD32(c->r[0] + 116u);
    c->v.s[6] = LD32(c->r[0] + 112u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[10]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[8]);
    if (COND_MI) { c->r[1] = c->r[12]; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[4];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    if (COND_MI) { c->r[1] = c->r[12]; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x51u; uint32_t v = LD8(ea); c->r[1] = v; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[4] = c->r[12]; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[0] = c->r[1];
    c->v.s[2] = c->r[4];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->v.f[0] = (float)c->v.s[0];
    c->r[5] = c->r[13];
    c->r[6] = 0x5555u;
    c->r[4] = c->r[5];
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x55550000u;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[4] = c->r[12]; }
    c->v.s[4] = LD32(c->r[4]);
    c->v.f[2] = c->v.f[6] * c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[4] = c->v.s[2];
    c->v.s[2] = c->r[14];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CS) { c->r[4] = c->r[4] - 0x1u; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[5] = c->r[12]; }
    c->v.s[2] = LD32(c->r[5] + 8u);
    c->r[4] = c->r[4] | (c->r[4] << 8);
    c->r[4] = uxtb16(c->r[4]);
    c->r[4] = c->r[4] | (c->r[4] << 4);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->r[4] = c->r[4] & c->r[7];
    c->r[5] = c->r[4] | (c->r[4] << 2);
    c->r[4] = 0x3333u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x33330000u;
    c->r[5] = c->r[5] & c->r[4];
    c->r[5] = c->r[5] | (c->r[5] << 1);
    c->r[6] = c->r[5] & c->r[6];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[5] = c->v.s[0];
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CS) { c->r[5] = c->r[5] - 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[5] | (c->r[5] << 8);
    c->r[1] = uxtb16(c->r[1]);
    c->r[1] = c->r[1] | (c->r[1] << 4);
    c->r[1] = c->r[1] & c->r[7];
    c->r[7] = 0xaaaau;
    c->r[1] = c->r[1] | (c->r[1] << 2);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    c->r[1] = c->r[1] & c->r[4];
    c->r[1] = c->r[1] | (c->r[1] << 1);
    c->r[1] = c->r[7] & (c->r[1] << 1);
    c->r[12] = c->r[1] | c->r[6];
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_e8ec24; }
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    c->r[14] = c->r[2] - 0x1u;
    c->r[1] = 0x1u;
    c->r[4] = 0x0u;
    if (COND_EQ) { goto L_e8ebf8; }
L_e8ebe8:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[1] << 2);
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_NE) { goto L_e8ebe8; }
L_e8ebf8:;
    (void)f_subs(c, c->r[14], 0x3u);
    if (COND_CC) { goto L_e8ec10; }
    c->r[5] = c->r[2] - c->r[4];
L_e8ec04:;
    c->r[5] = f_subs(c, c->r[5], 0x4u);
    c->r[1] = (c->r[1] << 8);
    if (COND_NE) { goto L_e8ec04; }
L_e8ec10:;
    c->r[7] = 0xaaabu;
    c->r[1] = c->r[1] - 0x1u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[7]; c->r[1] = (uint32_t)r; c->r[7] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[7] >> 1);
L_e8ec24:;
    c->r[7] = ~0x80000000u;
    c->r[2] = c->r[7] - c->r[2];
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + c->r[7];
    c->r[2] = (c->r[2] << 1);
    c->r[1] = c->r[1] + sh_lsr(c->r[12], c->r[2]);
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_e8ec54; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[3] = c->r[0] + (c->r[1] << 2);
L_e8ec54:;
    c->r[0] = c->r[3];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e8ec60(Cpu *restrict c) {
    FN_ENTER(0xe8ec60u);
L_e8ec60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    c->v.s[6] = c->r[12];
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->v.s[8] = c->r[3];
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[14]); }
    c->v.s[0] = LD32(c->r[1] + 112u);
    c->v.s[2] = LD32(c->r[1] + 116u);
    c->v.s[4] = LD32(c->r[1] + 120u);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[14]); }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.s[6] = c->r[2];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] + 16u, c->v.s[0]);
    ST32(c->r[0] + 20u, c->v.s[2]);
    ST32(c->r[0] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8ecbc(Cpu *restrict c) {
    FN_ENTER(0xe8ecbcu);
L_e8ecbc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ecc0(Cpu *restrict c) {
    FN_ENTER(0xe8ecc0u);
L_e8ecc0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb71b8u;
    { uint32_t ea = 0xe8ecd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8ed24; }
L_e8ece4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8ece4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_e8ed1c; }
    c->r[0] = 0xba9e78u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe8ed10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8ed1cu; rt_dispatch(c);
L_e8ed1c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_e8ed24:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_e8f384(c);
}
void f_e8ed38(Cpu *restrict c) {
    FN_ENTER(0xe8ed38u);
L_e8ed38:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb7140u;
    { uint32_t ea = 0xe8ed4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8ed9c; }
L_e8ed5c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8ed5c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_e8ed94; }
    c->r[0] = 0xba9e00u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe8ed88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8ed94u; rt_dispatch(c);
L_e8ed94:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_e8ed9c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xe8eda4u; f_e8f384(c);
    c->r[0] = 0xbb70d8u;
    { uint32_t ea = 0xe8edb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8edb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8edd0(Cpu *restrict c) {
    FN_ENTER(0xe8edd0u);
L_e8edd0:;
    c->r[0] = 0xbb70acu;
    { uint32_t ea = 0xe8eddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8ede0(Cpu *restrict c) {
    FN_ENTER(0xe8ede0u);
L_e8ede0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ede4(Cpu *restrict c) {
    FN_ENTER(0xe8ede4u);
L_e8ede4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xe8edf0u; f_e8f384(c);
    c->r[0] = 0xbb7094u;
    { uint32_t ea = 0xe8edfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8edfcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8ee14(Cpu *restrict c) {
    FN_ENTER(0xe8ee14u);
L_e8ee14:;
    c->r[0] = 0xbb7070u;
    { uint32_t ea = 0xe8ee20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8ee24(Cpu *restrict c) {
    FN_ENTER(0xe8ee24u);
L_e8ee24:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee28(Cpu *restrict c) {
    FN_ENTER(0xe8ee28u);
L_e8ee28:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee2c(Cpu *restrict c) {
    FN_ENTER(0xe8ee2cu);
L_e8ee2c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee30(Cpu *restrict c) {
    FN_ENTER(0xe8ee30u);
L_e8ee30:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee34(Cpu *restrict c) {
    FN_ENTER(0xe8ee34u);
L_e8ee34:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee38(Cpu *restrict c) {
    FN_ENTER(0xe8ee38u);
L_e8ee38:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee3c(Cpu *restrict c) {
    FN_ENTER(0xe8ee3cu);
L_e8ee3c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee40(Cpu *restrict c) {
    FN_ENTER(0xe8ee40u);
L_e8ee40:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8ee44(Cpu *restrict c) {
    FN_ENTER(0xe8ee44u);
L_e8ee44:;
    c->r[0] = 0xbb4334u;
    { uint32_t ea = 0xe8ee50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8ee54(Cpu *restrict c) {
    FN_ENTER(0xe8ee54u);
L_e8ee54:;
    c->r[0] = 0xbb7048u;
    { uint32_t ea = 0xe8ee60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8ee64(Cpu *restrict c) {
    FN_ENTER(0xe8ee64u);
L_e8ee64:;
    c->r[0] = 0xbb7040u;
    { uint32_t ea = 0xe8ee70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8ee74(Cpu *restrict c) {
    FN_ENTER(0xe8ee74u);
L_e8ee74:;
    c->r[0] = 0xbb4374u;
    { uint32_t ea = 0xe8ee80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8ee84(Cpu *restrict c) {
    FN_ENTER(0xe8ee84u);
L_e8ee84:;
    c->r[0] = 0xbb4424u;
    { uint32_t ea = 0xe8ee90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8ee94(Cpu *restrict c) {
    FN_ENTER(0xe8ee94u);
L_e8ee94:;
    c->r[0] = 0xbb7028u;
    { uint32_t ea = 0xe8eea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8eea4(Cpu *restrict c) {
    FN_ENTER(0xe8eea4u);
L_e8eea4:;
    c->r[0] = 0xbb701cu;
    { uint32_t ea = 0xe8eeb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8eeb4(Cpu *restrict c) {
    FN_ENTER(0xe8eeb4u);
L_e8eeb4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb6fd4u;
    { uint32_t ea = 0xe8eec8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8ef10; }
    c->r[5] = 0x0u;
L_e8eedc:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8eefc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8eef8u; rt_dispatch(c);
    goto L_e8ef04;
L_e8eefc:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
L_e8ef04:;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[0] = c->r[6];
    if (COND_NE) { goto L_e8eedc; }
L_e8ef10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_e8f384(c);
}
void f_e8ef2c(Cpu *restrict c) {
    FN_ENTER(0xe8ef2cu);
L_e8ef2c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb6f5cu;
    { uint32_t ea = 0xe8ef40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8ef88; }
    c->r[5] = 0x0u;
L_e8ef54:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e8ef74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8ef70u; rt_dispatch(c);
    goto L_e8ef7c;
L_e8ef74:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
L_e8ef7c:;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[0] = c->r[6];
    if (COND_NE) { goto L_e8ef54; }
L_e8ef88:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8ef9cu; f_e8f384(c);
    c->r[0] = 0xbb6ef0u;
    { uint32_t ea = 0xe8efa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8efa8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8efc4(Cpu *restrict c) {
    FN_ENTER(0xe8efc4u);
L_e8efc4:;
    c->r[0] = 0xbb6ec8u;
    { uint32_t ea = 0xe8efd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8efd4(Cpu *restrict c) {
    FN_ENTER(0xe8efd4u);
L_e8efd4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb6ed0u;
    { uint32_t ea = 0xe8efe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8f014; }
    c->r[0] = 0xbb4180u;
    { uint32_t ea = 0xe8f004u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8f004u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8f014u; rt_dispatch(c);
L_e8f014:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9af4f8(c);
}
void f_e8f038(Cpu *restrict c) {
    FN_ENTER(0xe8f038u);
L_e8f038:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[1] = 0xbb42e8u;
    c->r[0] = 0xbb6e1cu;
    c->r[5] = 0x0u;
    c->r[3] = 0x48u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f064u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8f345cu;
    { uint32_t ea = 0xe8f06cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f070u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0xe8f074u; f_9aedcc(c);
    c->r[1] = 0xbb6e40u;
    c->r[2] = c->r[4];
    c->r[3] = 0x88u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f094u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb6de8u;
    c->r[1] = 0x8f3444u;
    { uint32_t ea = 0xe8f0a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f0acu + c->r[1];
    c->r[14] = 0xe8f0acu; f_9aedcc(c);
    c->r[1] = 0xbb6e0cu;
    c->r[2] = c->r[4];
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f0ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb6db8u;
    c->r[1] = 0x8f3431u;
    { uint32_t ea = 0xe8f0e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f0e4u + c->r[1];
    c->r[14] = 0xe8f0e4u; f_9aedcc(c);
    c->r[1] = 0xbb6ddcu;
    c->r[3] = 0x7cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f100u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb4074u;
    { uint32_t ea = 0xe8f110u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0xbb4220u;
    { uint32_t ea = 0xe8f118u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x8f3404u;
    c->r[1] = 0xe8f120u + c->r[0];
    c->r[0] = c->r[6];
    c->r[2] = c->r[8];
    c->r[14] = 0xe8f128u; f_9aedcc(c);
    c->r[0] = 0xbb6d9cu;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f144u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb6d54u;
    { uint32_t ea = 0xe8f154u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0xba9a08u;
    { uint32_t ea = 0xe8f15cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x8f33c9u;
    c->r[1] = 0xe8f164u + c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = c->r[4];
    c->r[14] = 0xe8f16cu; f_9aedcc(c);
    c->r[0] = 0xbb6d54u;
    c->r[1] = 0x8f33a8u;
    c->r[2] = c->r[7];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f190u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f194u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb6d0cu;
    { uint32_t ea = 0xe8f1a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8f1a4u; f_9aedcc(c);
    c->r[1] = 0xbb6d24u;
    c->r[2] = c->r[6];
    c->r[3] = 0x104u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f1c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb401cu;
    c->r[1] = 0x8f336fu;
    { uint32_t ea = 0xe8f1d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f1dcu + c->r[1];
    c->r[14] = 0xe8f1dcu; f_9aedcc(c);
    c->r[1] = 0xbb6cf0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f1fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb40a8u;
    { uint32_t ea = 0xe8f20cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x8f334eu;
    c->r[1] = 0xe8f214u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xe8f218u; f_9aedcc(c);
    c->r[0] = 0xbb6cb4u;
    c->r[1] = 0x8f332eu;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f23cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f240u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb6c78u;
    { uint32_t ea = 0xe8f250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8f250u; f_9aedcc(c);
    c->r[1] = 0xbb6c84u;
    c->r[2] = c->r[6];
    c->r[3] = 0x90u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f270u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb6c48u;
    c->r[1] = 0x8f32f8u;
    { uint32_t ea = 0xe8f284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f288u + c->r[1];
    c->r[14] = 0xe8f288u; f_9aedcc(c);
    c->r[1] = 0xbb6c64u;
    { uint32_t ea = 0xe8f294u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e8f324(Cpu *restrict c) {
    FN_ENTER(0xe8f324u);
L_e8f324:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb4018u;
    { uint32_t ea = 0xe8f334u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8f338u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[4]; c->r[14] = 0xe8f350u; rt_dispatch(c);
    c->r[1] = 0xbb6ba0u;
    { uint32_t ea = 0xe8f35cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8f36c(Cpu *restrict c) {
    FN_ENTER(0xe8f36cu);
L_e8f36c:;
    c->r[1] = 0xbb6b84u;
    { uint32_t ea = 0xe8f378u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_e8f384(Cpu *restrict c) {
    FN_ENTER(0xe8f384u);
L_e8f384:;
    return;
}
void f_e8f388(Cpu *restrict c) {
    FN_ENTER(0xe8f388u);
L_e8f388:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb3fb0u;
    { uint32_t ea = 0xe8f39cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8f39cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8f3b4(Cpu *restrict c) {
    FN_ENTER(0xe8f3b4u);
L_e8f3b4:;
    c->r[0] = 0x0u;
    return;
}
void f_e8f3bc(Cpu *restrict c) {
    FN_ENTER(0xe8f3bcu);
L_e8f3bc:;
    return;
}
void f_e8f3c0(Cpu *restrict c) {
    FN_ENTER(0xe8f3c0u);
L_e8f3c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xbb6b30u;
    { uint32_t ea = 0xe8f3d0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8f3d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[4]; c->r[14] = 0xe8f3ecu; rt_dispatch(c);
    c->r[1] = 0xbb6b0cu;
    { uint32_t ea = 0xe8f3f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8f408(Cpu *restrict c) {
    FN_ENTER(0xe8f408u);
L_e8f408:;
    c->r[1] = 0xbb6af0u;
    { uint32_t ea = 0xe8f414u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_e8f420(Cpu *restrict c) {
    FN_ENTER(0xe8f420u);
L_e8f420:;
    return;
}
void f_e8f424(Cpu *restrict c) {
    FN_ENTER(0xe8f424u);
L_e8f424:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb6ac8u;
    { uint32_t ea = 0xe8f438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8f438u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8f450(Cpu *restrict c) {
    FN_ENTER(0xe8f450u);
L_e8f450:;
    c->r[0] = 0x0u;
    return;
}
void f_e8f458(Cpu *restrict c) {
    FN_ENTER(0xe8f458u);
L_e8f458:;
    return;
}
void f_e8f45c(Cpu *restrict c) {
    FN_ENTER(0xe8f45cu);
L_e8f45c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8f460(Cpu *restrict c) {
    FN_ENTER(0xe8f460u);
L_e8f460:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8f464(Cpu *restrict c) {
    FN_ENTER(0xe8f464u);
L_e8f464:;
    c->r[0] = 0xbb3edcu;
    { uint32_t ea = 0xe8f470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8f474(Cpu *restrict c) {
    FN_ENTER(0xe8f474u);
L_e8f474:;
    c->r[0] = 0xbb6a80u;
    { uint32_t ea = 0xe8f480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8f484(Cpu *restrict c) {
    FN_ENTER(0xe8f484u);
L_e8f484:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[1] = 0xba96b4u;
    c->r[0] = 0xbb3e94u;
    c->r[5] = 0x0u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f4b0u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8c6d2eu;
    { uint32_t ea = 0xe8f4b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f4bcu + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0xe8f4c0u; f_9aedcc(c);
    c->r[1] = 0xbb6a28u;
    c->r[2] = c->r[4];
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xe8f4e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xbb6a0cu;
    c->r[1] = 0x8c6cfcu;
    { uint32_t ea = 0xe8f4f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f4f8u + c->r[1];
    c->r[14] = 0xe8f4f8u; f_9aedcc(c);
    c->r[1] = 0xbb6a08u;
    { uint32_t ea = 0xe8f504u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8f52c(Cpu *restrict c) {
    FN_ENTER(0xe8f52cu);
L_e8f52c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xbb3d24u;
    { uint32_t ea = 0xe8f53cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8f540u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2cu;
    c->pc = c->r[4]; c->r[14] = 0xe8f558u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xe8f560u; f_e8f36c(c);
    c->r[0] = 0xbb6998u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xe8f578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8f58cu; f_15effb0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8f5a4(Cpu *restrict c) {
    FN_ENTER(0xe8f5a4u);
L_e8f5a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xe8f5b0u; f_e8f36c(c);
    c->r[0] = 0xbb6948u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0xe8f5c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8f5dcu; f_15effb0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8f5f0(Cpu *restrict c) {
    FN_ENTER(0xe8f5f0u);
L_e8f5f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb690cu;
    { uint32_t ea = 0xe8f604u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x10u;
    c->r[14] = 0xe8f610u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8f65c; }
L_e8f61c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8f61c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_e8f654; }
    c->r[0] = 0xba9540u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe8f648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8f654u; rt_dispatch(c);
L_e8f654:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_e8f65c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_e8f384(c);
}
void f_e8f670(Cpu *restrict c) {
    FN_ENTER(0xe8f670u);
L_e8f670:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb688cu;
    { uint32_t ea = 0xe8f684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x10u;
    c->r[14] = 0xe8f690u; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8f6dc; }
L_e8f69c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e8f69c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_e8f6d4; }
    c->r[0] = 0xba94c0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe8f6c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe8f6d4u; rt_dispatch(c);
L_e8f6d4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_e8f6dc:;
    c->r[0] = c->r[4];
    c->r[14] = 0xe8f6e4u; f_e8f384(c);
    c->r[0] = 0xbb3b70u;
    { uint32_t ea = 0xe8f6f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8f6f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8f710(Cpu *restrict c) {
    FN_ENTER(0xe8f710u);
L_e8f710:;
    c->r[0] = 0x0u;
    return;
}
void f_e8f718(Cpu *restrict c) {
    FN_ENTER(0xe8f718u);
L_e8f718:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[14] = 0xe8f72cu; f_e8f3bc(c);
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xe8f754u; f_9bb638(c);
    c->r[1] = 0x8c2404u;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0xe8f76cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x4u;
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
    c->r[14] = 0xe8f7b0u; f_9bb638(c);
    c->r[1] = 0x8ea185u;
    c->r[1] = 0xe8f7bcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x810000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = 0xbb6740u;
    { uint32_t ea = 0xe8f7d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xbb672cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0xe8f7ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[11]); }
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
    c->r[14] = 0xe8f844u; f_9bb638(c);
    c->r[1] = 0x8d3d10u;
    c->r[1] = 0xe8f850u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
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
void f_e8f8b0(Cpu *restrict c) {
    FN_ENTER(0xe8f8b0u);
L_e8f8b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8f8c0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8f8c8(Cpu *restrict c) {
    FN_ENTER(0xe8f8c8u);
L_e8f8c8:;
    return;
}
void f_e8f8cc(Cpu *restrict c) {
    FN_ENTER(0xe8f8ccu);
L_e8f8cc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_e8f8d0(Cpu *restrict c) {
    FN_ENTER(0xe8f8d0u);
L_e8f8d0:;
    c->r[0] = 0xbb3984u;
    { uint32_t ea = 0xe8f8dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_e8f8e0(Cpu *restrict c) {
    FN_ENTER(0xe8f8e0u);
L_e8f8e0:;
    return;
}
void f_e8f8e4(Cpu *restrict c) {
    FN_ENTER(0xe8f8e4u);
L_e8f8e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0xbb3a3cu;
    c->r[3] = 0x2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbb3948u;
    { uint32_t ea = 0xe8f910u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8f2c70u;
    { uint32_t ea = 0xe8f918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8f91cu + c->r[1];
    c->r[14] = 0xe8f91cu; f_9aedcc(c);
    c->r[1] = 0xbb65f4u;
    { uint32_t ea = 0xe8f928u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8f944(Cpu *restrict c) {
    FN_ENTER(0xe8f944u);
L_e8f944:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0xbb65ccu;
    { uint32_t ea = 0xe8f954u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe8f958u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x270u;
    c->pc = c->r[5]; c->r[14] = 0xe8f970u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0xbb659cu;
    c->r[5] = 0x0u;
    c->r[1] = 0x31u;
    { uint32_t ea = 0xe8f988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x94u;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x224u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x238u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x220u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x230u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x240u; ST8(ea, c->r[5]); }
    c->r[14] = 0xe8f9f4u; f_15efd7c(c);
    c->r[0] = c->r[4] + 0x248u;
    c->r[14] = 0xe8f9fcu; f_c29a54(c);
    c->r[0] = 0x18u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x25cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8fa0cu; f_c296b8(c);
    c->r[14] = 0xe8fa10u; f_c296f4(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x84u;
    c->r[1] = 0x10u;
    c->r[14] = 0xe8fa20u; f_e95fdc(c);
    c->r[14] = 0xe8fa24u; f_e96018(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8fa30u; f_c29750(c);
    c->r[0] = c->r[4] + 0xa0u;
    c->r[1] = 0x25u;
    { uint32_t ea = c->r[4] + 0x24cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x250u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x254u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x258u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8fa54u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8fa78(Cpu *restrict c) {
    FN_ENTER(0xe8fa78u);
L_e8fa78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xbb6490u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xe8fa90u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xe8fa94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8fab4(Cpu *restrict c) {
    FN_ENTER(0xe8fab4u);
L_e8fab4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb6454u;
    c->r[5] = 0x0u;
    c->r[1] = 0x31u;
    { uint32_t ea = 0xe8fad0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x94u;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x224u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x238u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x220u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x230u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x240u; ST8(ea, c->r[5]); }
    c->r[14] = 0xe8fb3cu; f_15efd7c(c);
    c->r[0] = c->r[4] + 0x248u;
    c->r[14] = 0xe8fb44u; f_c29a54(c);
    c->r[0] = 0x18u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x25cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8fb54u; f_c296b8(c);
    c->r[14] = 0xe8fb58u; f_c296f4(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x84u;
    c->r[1] = 0x10u;
    c->r[14] = 0xe8fb68u; f_e95fdc(c);
    c->r[14] = 0xe8fb6cu; f_e96018(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8fb78u; f_c29750(c);
    c->r[0] = c->r[4] + 0xa0u;
    c->r[1] = 0x25u;
    { uint32_t ea = c->r[4] + 0x24cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x250u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x254u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x258u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    c->r[14] = 0xe8fb9cu; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e8fbbc(Cpu *restrict c) {
    FN_ENTER(0xe8fbbcu);
L_e8fbbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb6354u;
    { uint32_t ea = 0xe8fbd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8fbf4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8fbecu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_e8fbf4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8fc14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8fc0cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_e8fc14:;
    c->r[0] = c->r[4] + 0x248u;
    c->r[14] = 0xe8fc1cu; f_c29a7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8fc28(Cpu *restrict c) {
    FN_ENTER(0xe8fc28u);
L_e8fc28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xbb62e8u;
    { uint32_t ea = 0xe8fc3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8fc60; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8fc58u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_e8fc60:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e8fc80; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xe8fc78u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_e8fc80:;
    c->r[0] = c->r[4] + 0x248u;
    c->r[14] = 0xe8fc88u; f_c29a7c(c);
    c->r[0] = 0xbb628cu;
    { uint32_t ea = 0xe8fc94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8fc94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8fcb0(Cpu *restrict c) {
    FN_ENTER(0xe8fcb0u);
L_e8fcb0:;
    c->r[0] = 0x0u;
    return;
}
void f_e8fcb8(Cpu *restrict c) {
    FN_ENTER(0xe8fcb8u);
L_e8fcb8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xe8fcd8u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_e8fcf0(Cpu *restrict c) {
    FN_ENTER(0xe8fcf0u);
L_e8fcf0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe8fd00u; f_c29750(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x25u;
    { uint32_t ea = c->r[4] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x250u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x254u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x258u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0xe8fd3cu; f_15efd7c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e8fd40(Cpu *restrict c) {
    FN_ENTER(0xe8fd40u);
L_e8fd40:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_e8fdc8; }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_LT) { goto L_e8fdc8; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = 0x1u;
L_e8fd78:;
    c->r[7] = c->r[10];
    c->r[5] = c->r[6] - c->r[7];
    c->r[10] = (c->r[7] << 1);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_e8fdc0; }
    c->r[3] = 0x0u;
L_e8fd90:;
    c->r[4] = c->r[3] + c->r[10];
    c->r[0] = c->r[7] + c->r[3];
    c->r[2] = c->r[8];
    (void)f_subs(c, c->r[4], c->r[6]);
    c->r[1] = c->r[4];
    if (COND_GT) { c->r[1] = c->r[6]; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[1] = c->r[9];
    c->r[14] = 0xe8fdb4u; f_e8fdd0(c);
    (void)f_subs(c, c->r[4], c->r[5]);
    c->r[3] = c->r[4];
    if (COND_LT) { goto L_e8fd90; }
L_e8fdc0:;
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_GT) { goto L_e8fd78; }
L_e8fdc8:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_e8fdd0(Cpu *restrict c) {
    FN_ENTER(0xe8fdd0u);
L_e8fdd0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_GE) { goto L_e8fe18; }
    c->r[4] = c->r[1] + (c->r[3] << 3);
    c->r[5] = c->r[2] + (c->r[3] << 3);
    c->r[0] = c->r[12] - c->r[3];
    c->r[4] = c->r[4] + 0x4u;
    c->r[5] = c->r[5] + 0x4u;
L_e8fdf8:;
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[5] - 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    c->r[5] = c->r[5] + 0x8u;
    if (COND_NE) { goto L_e8fdf8; }
L_e8fe18:;
    (void)f_subs(c, c->r[12], c->r[14]);
    if (COND_GE) { goto L_e8fe54; }
    c->r[4] = c->r[1] + (c->r[12] << 3);
    c->r[5] = c->r[2] + (c->r[12] << 3);
    c->r[0] = c->r[14] - c->r[12];
    c->r[4] = c->r[4] + 0x4u;
    c->r[5] = c->r[5] + 0x4u;
L_e8fe34:;
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[5] - 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    c->r[5] = c->r[5] + 0x8u;
    if (COND_NE) { goto L_e8fe34; }
L_e8fe54:;
    c->r[8] = c->r[2] + 0x4u;
    c->r[9] = c->r[1] + 0x4u;
    c->r[0] = c->r[12];
    c->r[10] = c->r[3];
L_e8fe64:;
    c->r[4] = c->r[2] + (c->r[10] << 3);
    c->r[7] = c->r[8] + (c->r[0] << 3);
    c->r[5] = c->r[9] + (c->r[3] << 3);
    c->r[11] = c->r[4] + 0x4u;
    c->r[4] = c->r[3];
L_e8fe78:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LS) { goto L_e8feb4; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[0]);
    { uint32_t ea = c->r[5] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[3]); }
    c->r[5] = c->r[5] + 0x8u;
    if (COND_NE) { goto L_e8fe78; }
    goto L_e8fee4;
L_e8feb4:;
    { uint32_t ea = c->r[2] + (c->r[10] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[12]);
    { uint32_t ea = c->r[5] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0x1u;
    if (COND_NE) { goto L_e8fe64; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_LT) { goto L_e8fef0; }
    goto L_e8ff24;
L_e8fee4:;
    c->r[0] = c->r[10];
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_GE) { goto L_e8ff24; }
L_e8fef0:;
    c->r[1] = c->r[1] + (c->r[4] << 3);
    c->r[0] = c->r[2] + (c->r[0] << 3);
    c->r[3] = c->r[14] - c->r[4];
    c->r[1] = c->r[1] + 0x4u;
    c->r[0] = c->r[0] + 0x4u;
L_e8ff04:;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x8u;
    if (COND_NE) { goto L_e8ff04; }
L_e8ff24:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_e8ff28(Cpu *restrict c) {
    FN_ENTER(0xe8ff28u);
L_e8ff28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + (c->r[0] << 1);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    c->r[2] = c->r[4] + (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x8u;
    if (COND_EQ) { c->r[2] = 0x8u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[14] = 0xe8ff5cu; f_a85804(c);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[6] = LD32(c->r[0] + 56u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[4] + 96u, c->v.s[0]);
    ST32(c->r[4] + 100u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[4] + 104u, c->v.s[0]);
    ST32(c->r[4] + 108u, c->v.s[2]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e90010(Cpu *restrict c) {
    FN_ENTER(0xe90010u);
L_e90010:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x5u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe90034u; f_e96154(c);
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[4] + (c->r[0] << 2);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e9005c(Cpu *restrict c) {
    FN_ENTER(0xe9005cu);
L_e9005c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e9008c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe90078u; f_e96198(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_e9008c:;
    c->r[0] = 0xau;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_e90094(Cpu *restrict c) {
    FN_ENTER(0xe90094u);
L_e90094:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[1] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2080000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e90108; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_e90130; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_e900fc; }
    c->r[2] = 0xbaeed8u;
    c->r[3] = 0xbaeed8u;
    { uint32_t ea = 0xe900e0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xe900e4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x150u; ST32(ea, c->r[2]); }
L_e900fc:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    goto L_e90130;
L_e90108:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x25cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x260u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x264u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    c->r[14] = 0xe90130u; f_e9016c(c);
L_e90130:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7fff0000u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LE) { goto L_e9014c; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    goto L_e90158;
L_e9014c:;
    c->r[0] = c->r[0] + 0x20000u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); } }
L_e90158:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_e9016c(Cpu *restrict c) {
    FN_ENTER(0xe9016cu);
L_e9016c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[0] = 0xba8bc0u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = c->r[3];
    c->r[9] = c->r[2];
    c->r[3] = 0x7u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xe901a4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe901acu; f_dd0dac(c);
    c->r[1] = 0xbac9f4u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = 0xe901c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xe901d0u; f_dd2adc(c);
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_e90224; }
    { uint32_t ea = c->r[5] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_e9021c; }
    c->r[1] = 0xbaedb8u;
    c->r[2] = 0xbaedb8u;
    { uint32_t ea = 0xe90200u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xe90204u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
L_e9021c:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5] + 0x90u; ST32(ea, c->r[0]); }
L_e90224:;
    { uint32_t ea = c->r[5] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e90368; }
    { uint32_t ea = c->r[5] + 0x260u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_e902c0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x29fu;
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
    c->r[1] = 0x16fcu;
    c->r[2] = 0x1700u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_e902c0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xe902d4u; f_a6a438(c);
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
    if (COND_LS) { goto L_e90328; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xe90324u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e90328:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16fcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_e90368:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_e90380(Cpu *restrict c) {
    FN_ENTER(0xe90380u);
L_e90380:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    { uint32_t ea = c->r[1] + 0x168u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[12] & 0x2080000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e90460; }
    c->r[4] = 0xc7bcu;
    c->r[14] = 0x3854u;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[12] + c->r[14]; uint32_t v = LD32(ea); c->r[12] = ea; c->r[5] = v; }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[12] + c->r[4]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[4] = 0x3658u;
    { uint32_t ea = c->r[14] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_e90458; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e90428; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[1] + 0xecu;
    c->r[6] = 0x6cau;
    c->r[5] = c->r[5] + 0x30c00u;
    c->r[14] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[5] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[5] + (c->r[14] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[5] + (c->r[6] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[6] = c->r[5] + (c->r[6] << 2);
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
L_e90428:;
    c->r[4] = 0x3658u;
    c->r[5] = 0xf6cbu;
    { uint32_t ea = c->r[14] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc9220000u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[6]); }
    c->r[6] = 0x3858u;
    { uint32_t ea = c->r[1] + c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_e90458:;
    c->r[14] = 0xe9045cu; f_e90494(c);
    goto L_e90488;
L_e90460:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    c->r[14] = 0xe90488u; f_e90b50(c);
L_e90488:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_e90494(Cpu *restrict c) {
    FN_ENTER(0xe90494u);
L_e90494:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[6] = c->r[0];
    c->r[1] = 0x2abcu;
    c->r[8] = c->r[2];
    c->r[7] = c->r[3];
    c->r[3] = 0x28c0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd554u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_e90570; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e90540; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[5] = 0x517u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
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
L_e90540:;
    c->r[2] = 0x28c0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7518u;
    c->r[0] = 0x2ac0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd3d30000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_e90570:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_e905dc; }
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
L_e905dc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xe905f0u; f_a6a438(c);
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
    if (COND_LS) { goto L_e90644; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xe90640u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e90644:;
    c->r[1] = c->r[0] + c->r[5];
    c->r[5] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_e90748; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
L_e90748:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x33d4u;
    c->r[7] = 0x31d0u;
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[1] = 0xcc3cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_e90804; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e907e0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x63au;
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
L_e907e0:;
    c->r[2] = 0x31d0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x33d8u;
    c->r[1] = 0x63au;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_e90804:;
    { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[8] + (c->r[8] << 1);
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[6] = c->r[1] + (c->r[3] << 4);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 12) & 0xfffu;
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xe9082cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 31);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_e909a4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xe90848u; f_a7a048(c);
    c->r[1] = 0x2ed4u;
    c->r[0] = c->r[4];
    c->r[3] = 0x2cd0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd13cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_e908f8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e908d4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x59au;
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
L_e908d4:;
    c->r[2] = 0x2cd0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2ed8u;
    c->r[1] = 0x59au;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_e908f8:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e909c0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e9096c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x37bu;
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
L_e9096c:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1de0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e909ac; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    goto L_e909b4;
L_e909a4:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_e909ac:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e909b4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_e909c0:;
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_e909dc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_e90a50;
L_e909dc:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e90a38; }
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
L_e90a38:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_e90a50:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x3fu;
    c->r[7] = (c->r[1] >> 21) & 0xffu;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_e90a84; }
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[1] | (c->r[3] << 21);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_e90a84:;
    c->r[1] = (c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[9]); }
    if (COND_EQ) { goto L_e90b34; }
L_e90aa0:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_e90ac8; }
    c->r[2] = 0xbae500u;
    c->r[3] = 0xbae500u;
    { uint32_t ea = 0xe90ab8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xe90abcu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[2]); }
L_e90ac8:;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_e90adc:;
    c->r[0] = c->r[4];
    c->r[14] = 0xe90ae4u; f_a826fc(c);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[4] + 0x164u;
    c->r[7] = 0x1fe0u;
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[0] = c->r[7] & (c->r[0] >> 3);
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[4] + 0x164u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xe90b1cu; f_a93ca8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xe90b24u; f_a82760(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_a7a0b8(c);
L_e90b34:;
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_e90aa0; }
    goto L_e90adc;
}
