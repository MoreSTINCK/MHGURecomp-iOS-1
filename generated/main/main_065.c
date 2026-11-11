#include "cpu.h"
#include "neon_rt.h"
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_250bdc(Cpu *c);
void f_250c5c(Cpu *c);
void f_2daba4(Cpu *c);
void f_2dac14(Cpu *c);
void f_2dad24(Cpu *c);
void f_2dadc4(Cpu *c);
void f_2dadf0(Cpu *c);
void f_2ddd48(Cpu *c);
void f_2df814(Cpu *c);
void f_2e0da0(Cpu *c);
void f_2e1e08(Cpu *c);
void f_2e715c(Cpu *c);
void f_2e7b7c(Cpu *c);
void f_2e82e0(Cpu *c);
void f_33f03c(Cpu *c);
void f_33f70c(Cpu *c);
void f_343160(Cpu *c);
void f_345bbc(Cpu *c);
void f_34bba8(Cpu *c);
void f_35d8d8(Cpu *c);
void f_35d978(Cpu *c);
void f_361ac8(Cpu *c);
void f_362758(Cpu *c);
void f_3636a8(Cpu *c);
void f_363d0c(Cpu *c);
void f_364900(Cpu *c);
void f_365128(Cpu *c);
void f_366a80(Cpu *c);
void f_366ad0(Cpu *c);
void f_366b7c(Cpu *c);
void f_38e920(Cpu *c);
void f_38e930(Cpu *c);
void f_38e958(Cpu *c);
void f_391474(Cpu *c);
void f_394228(Cpu *c);
void f_395758(Cpu *c);
void f_396474(Cpu *c);
void f_3974ac(Cpu *c);
void f_399390(Cpu *c);
void f_39945c(Cpu *c);
void f_39b670(Cpu *c);
void f_39b7fc(Cpu *c);
void f_39c27c(Cpu *c);
void f_39c58c(Cpu *c);
void f_39d278(Cpu *c);
void f_39e26c(Cpu *c);
void f_3a57a0(Cpu *c);
void f_3c8be0(Cpu *c);
void f_3c8ca8(Cpu *c);
void f_3c8cc8(Cpu *c);
void f_3c95a4(Cpu *c);
void f_427a98(Cpu *c);
void f_427ba8(Cpu *c);
void f_431d2c(Cpu *c);
void f_43210c(Cpu *c);
void f_440b0c(Cpu *c);
void f_440b30(Cpu *c);
void f_444f14(Cpu *c);
void f_4481ac(Cpu *c);
void f_45aee0(Cpu *c);
void f_45c288(Cpu *c);
void f_45d484(Cpu *c);
void f_45ec74(Cpu *c);
void f_45f840(Cpu *c);
void f_46248c(Cpu *c);
void f_4625cc(Cpu *c);
void f_462acc(Cpu *c);
void f_462bd0(Cpu *c);
void f_464258(Cpu *c);
void f_464ed8(Cpu *c);
void f_46fe10(Cpu *c);
void f_46fe3c(Cpu *c);
void f_475a30(Cpu *c);
void f_477454(Cpu *c);
void f_554484(Cpu *c);
void f_57c44c(Cpu *c);
void f_57c500(Cpu *c);
void f_57d920(Cpu *c);
void f_5811f4(Cpu *c);
void f_5812f8(Cpu *c);
void f_581a78(Cpu *c);
void f_581d30(Cpu *c);
void f_581fec(Cpu *c);
void f_58211c(Cpu *c);
void f_5822bc(Cpu *c);
void f_58236c(Cpu *c);
void f_5828e8(Cpu *c);
void f_582c18(Cpu *c);
void f_582e1c(Cpu *c);
void f_582ffc(Cpu *c);
void f_5839bc(Cpu *c);
void f_584208(Cpu *c);
void f_584408(Cpu *c);
void f_58468c(Cpu *c);
void f_584af0(Cpu *c);
void f_5850b0(Cpu *c);
void f_585a54(Cpu *c);
void f_585bc4(Cpu *c);
void f_585d10(Cpu *c);
void f_585e30(Cpu *c);
void f_585f6c(Cpu *c);
void f_58607c(Cpu *c);
void f_58618c(Cpu *c);
void f_58629c(Cpu *c);
void f_5863f8(Cpu *c);
void f_586580(Cpu *c);
void f_58669c(Cpu *c);
void f_5867b4(Cpu *c);
void f_5869a8(Cpu *c);
void f_586a2c(Cpu *c);
void f_586c6c(Cpu *c);
void f_58701c(Cpu *c);
void f_5872d0(Cpu *c);
void f_5873cc(Cpu *c);
void f_587454(Cpu *c);
void f_5874e0(Cpu *c);
void f_588798(Cpu *c);
void f_588ab4(Cpu *c);
void f_588d40(Cpu *c);
void f_588ee8(Cpu *c);
void f_58a1d8(Cpu *c);
void f_58a2dc(Cpu *c);
void f_58a408(Cpu *c);
void f_58a5cc(Cpu *c);
void f_58a6a4(Cpu *c);
void f_58a7cc(Cpu *c);
void f_58a950(Cpu *c);
void f_58aca4(Cpu *c);
void f_58af0c(Cpu *c);
void f_58b124(Cpu *c);
void f_58b230(Cpu *c);
void f_58b34c(Cpu *c);
void f_58b4ec(Cpu *c);
void f_58b808(Cpu *c);
void f_58b904(Cpu *c);
void f_58bcb8(Cpu *c);
void f_58ce60(Cpu *c);
void f_58d2c0(Cpu *c);
void f_58d468(Cpu *c);
void f_58d6dc(Cpu *c);
void f_58d820(Cpu *c);
void f_58d990(Cpu *c);
void f_58dcdc(Cpu *c);
void f_58ddf4(Cpu *c);
void f_58df54(Cpu *c);
void f_58e0b4(Cpu *c);
void f_58e214(Cpu *c);
void f_58e75c(Cpu *c);
void f_58e84c(Cpu *c);
void f_58eae4(Cpu *c);
void f_58f278(Cpu *c);
void f_58f454(Cpu *c);
void f_5905c8(Cpu *c);
void f_5906e0(Cpu *c);
void f_590aac(Cpu *c);
void f_590cd0(Cpu *c);
void f_590e98(Cpu *c);
void f_59106c(Cpu *c);
void f_59157c(Cpu *c);
void f_5a2900(Cpu *c);
void f_5a30f4(Cpu *c);
void f_5a31b0(Cpu *c);
void f_5a3284(Cpu *c);
void f_5a329c(Cpu *c);
void f_5a3370(Cpu *c);
void f_5a3388(Cpu *c);
void f_5a33ac(Cpu *c);
void f_5a33d0(Cpu *c);
void f_5a33f4(Cpu *c);
void f_5a340c(Cpu *c);
void f_5a3424(Cpu *c);
void f_5a3470(Cpu *c);
void f_5a3778(Cpu *c);
void f_5a3874(Cpu *c);
void f_5a5324(Cpu *c);
void f_5a5364(Cpu *c);
void f_5a5b80(Cpu *c);
void f_5a5ed0(Cpu *c);
void f_5a75b0(Cpu *c);
void f_5a864c(Cpu *c);
void f_5a8708(Cpu *c);
void f_5a8bdc(Cpu *c);
void f_5a8c3c(Cpu *c);
void f_5a8cb4(Cpu *c);
void f_5a8d68(Cpu *c);
void f_5a9e38(Cpu *c);
void f_5a9e54(Cpu *c);
void f_5a9e68(Cpu *c);
void f_5a9e7c(Cpu *c);
void f_5a9e90(Cpu *c);
void f_5a9ea4(Cpu *c);
void f_5a9f10(Cpu *c);
void f_5a9f54(Cpu *c);
void f_5abb14(Cpu *c);
void f_5abb3c(Cpu *c);
void f_5ad924(Cpu *c);
void f_5ae21c(Cpu *c);
void f_5ae378(Cpu *c);
void f_5ae3b4(Cpu *c);
void f_5ae3c8(Cpu *c);
void f_5ae5b8(Cpu *c);
void f_5ae744(Cpu *c);
void f_5ae750(Cpu *c);
void f_5ae75c(Cpu *c);
void f_5ae768(Cpu *c);
void f_5ae93c(Cpu *c);
void f_5ae9b0(Cpu *c);
void f_5b2174(Cpu *c);
void f_5b5ac0(Cpu *c);
void f_5b5af0(Cpu *c);
void f_5b5b28(Cpu *c);
void f_5b5bb4(Cpu *c);
void f_5b9870(Cpu *c);
void f_5b98a4(Cpu *c);
void f_5b98cc(Cpu *c);
void f_5b98e8(Cpu *c);
void f_5b9a18(Cpu *c);
void f_5b9b60(Cpu *c);
void f_5b9ccc(Cpu *c);
void f_5b9e50(Cpu *c);
void f_5b9ff8(Cpu *c);
void f_5ba100(Cpu *c);
void f_5bb96c(Cpu *c);
void f_5bc030(Cpu *c);
void f_5bc0ec(Cpu *c);
void f_5bce2c(Cpu *c);
void f_5bcf68(Cpu *c);
void f_5c2f60(Cpu *c);
void f_5c5b48(Cpu *c);
void f_5c6124(Cpu *c);
void f_5c613c(Cpu *c);
void f_5c6b64(Cpu *c);
void f_5c6be4(Cpu *c);
void f_5c6c6c(Cpu *c);
void f_5c6d44(Cpu *c);
void f_5c6dcc(Cpu *c);
void f_5c6dd8(Cpu *c);
void f_5c6df8(Cpu *c);
void f_5c6e50(Cpu *c);
void f_5c6f80(Cpu *c);
void f_5c7034(Cpu *c);
void f_5c7134(Cpu *c);
void f_5c7234(Cpu *c);
void f_5d754c(Cpu *c);
void f_5ea6e8(Cpu *c);
void f_5f18b8(Cpu *c);
void f_5f1950(Cpu *c);
void f_5f8344(Cpu *c);
void f_5f8534(Cpu *c);
void f_5f856c(Cpu *c);
void f_5f85fc(Cpu *c);
void f_6d0070(Cpu *c);
void f_6d31ac(Cpu *c);
void f_6d31bc(Cpu *c);
void f_6e3478(Cpu *c);
void f_70636c(Cpu *c);
void f_70cbd0(Cpu *c);
void f_70d794(Cpu *c);
void f_7106f8(Cpu *c);
void f_723030(Cpu *c);
void f_723150(Cpu *c);
void f_723194(Cpu *c);
void f_7232cc(Cpu *c);
void f_723390(Cpu *c);
void f_723504(Cpu *c);
void f_723700(Cpu *c);
void f_723a80(Cpu *c);
void f_723b0c(Cpu *c);
void f_723b7c(Cpu *c);
void f_723da4(Cpu *c);
void f_723f30(Cpu *c);
void f_724040(Cpu *c);
void f_724580(Cpu *c);
void f_7245a8(Cpu *c);
void f_7245f8(Cpu *c);
void f_72462c(Cpu *c);
void f_724e58(Cpu *c);
void f_725938(Cpu *c);
void f_725a9c(Cpu *c);
void f_7262b4(Cpu *c);
void f_726b98(Cpu *c);
void f_726d94(Cpu *c);
void f_726e00(Cpu *c);
void f_726eb0(Cpu *c);
void f_726ef8(Cpu *c);
void f_726f48(Cpu *c);
void f_74b0d4(Cpu *c);
void f_74b1c4(Cpu *c);
void f_74ecc0(Cpu *c);
void f_74ed74(Cpu *c);
void f_74edec(Cpu *c);
void f_74ee34(Cpu *c);
void f_74ee98(Cpu *c);
void f_74f260(Cpu *c);
void f_74fc94(Cpu *c);
void f_751e1c(Cpu *c);
void f_752988(Cpu *c);
void f_753030(Cpu *c);
void f_7530b8(Cpu *c);
void f_753a74(Cpu *c);
void f_753f54(Cpu *c);
void f_75d2b4(Cpu *c);
void f_75ff98(Cpu *c);
void f_760058(Cpu *c);
void f_761fb0(Cpu *c);
void f_770688(Cpu *c);
void f_770710(Cpu *c);
void f_77e65c(Cpu *c);
void f_77e938(Cpu *c);
void f_77edac(Cpu *c);
void f_77f468(Cpu *c);
void f_7b9d10(Cpu *c);
void f_7b9d88(Cpu *c);
void f_7bb87c(Cpu *c);
void f_7bb910(Cpu *c);
void f_7bb938(Cpu *c);
void f_7bc0e8(Cpu *c);
void f_7bc0f4(Cpu *c);
void f_7bc490(Cpu *c);
void f_823a04(Cpu *c);
void f_823a6c(Cpu *c);
void f_823c08(Cpu *c);
void f_824630(Cpu *c);
void f_824664(Cpu *c);
void f_85c7e8(Cpu *c);
void f_85c870(Cpu *c);
void f_85c9c8(Cpu *c);
void f_85c9cc(Cpu *c);
void f_85ca7c(Cpu *c);
void f_85ca84(Cpu *c);
void f_85cb3c(Cpu *c);
void f_85cba0(Cpu *c);
void f_85cbc4(Cpu *c);
void f_85cbe8(Cpu *c);
void f_85cc0c(Cpu *c);
void f_85d424(Cpu *c);
void f_85d464(Cpu *c);
void f_85e5bc(Cpu *c);
void f_85e67c(Cpu *c);
void f_85e6bc(Cpu *c);
void f_85e794(Cpu *c);
void f_85f98c(Cpu *c);
void f_85f9dc(Cpu *c);
void f_8a2580(Cpu *c);
void f_8a2c78(Cpu *c);
void f_8a64b8(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af630(Cpu *c);
void f_9bb638(Cpu *c);
void f_9ca420(Cpu *c);
void f_a26c38(Cpu *c);
void f_a27c9c(Cpu *c);
void f_a87660(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15eff08(Cpu *c);
void f_580ea0(Cpu *restrict c) {
    FN_ENTER(0x580ea0u);
L_580ea0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14bb9b8u;
    { uint32_t ea = 0x580eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x580eb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x94u;
    c->pc = c->r[4]; c->r[14] = 0x580eccu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[1] = 0x90u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x580edcu; f_15efd7c(c);
    c->r[0] = 0x14bb984u;
    { uint32_t ea = 0x580ee8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_580efc(Cpu *restrict c) {
    FN_ENTER(0x580efcu);
L_580efc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14bb958u;
    { uint32_t ea = 0x580f10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x580f10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_580f28(Cpu *restrict c) {
    FN_ENTER(0x580f28u);
L_580f28:;
    __attribute__((musttail)) return f_57d920(c);
}
void f_580f2c(Cpu *restrict c) {
    FN_ENTER(0x580f2cu);
L_580f2c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_580f30(Cpu *restrict c) {
    FN_ENTER(0x580f30u);
L_580f30:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_580f34(Cpu *restrict c) {
    FN_ENTER(0x580f34u);
L_580f34:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_580f38(Cpu *restrict c) {
    FN_ENTER(0x580f38u);
L_580f38:;
    c->r[0] = 0x14bb914u;
    { uint32_t ea = 0x580f44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_580f48(Cpu *restrict c) {
    FN_ENTER(0x580f48u);
L_580f48:;
    c->r[0] = 0x14bb90cu;
    { uint32_t ea = 0x580f54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_580f58(Cpu *restrict c) {
    FN_ENTER(0x580f58u);
L_580f58:;
    c->r[0] = 0x14bb904u;
    { uint32_t ea = 0x580f64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_580f68(Cpu *restrict c) {
    FN_ENTER(0x580f68u);
L_580f68:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1509750u;
    c->r[6] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    c->r[3] = 0xb4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = 0x580f98u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
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
    c->r[1] = 0x14b7b80u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[0] = 0x14bb86cu;
    { uint32_t ea = 0x580fe4u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x11d585cu;
    { uint32_t ea = 0x580fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x580ff0u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0x580ff4u; f_9aedcc(c);
    c->r[1] = 0x14bb85cu;
    c->r[2] = c->r[4];
    c->r[3] = 0x94u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x581014u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x14bb83cu;
    { uint32_t ea = 0x581024u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x11d581bu;
    c->r[1] = 0x58102cu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x581030u; f_9aedcc(c);
    c->r[0] = 0x14bb820u;
    c->r[1] = 0x11e22a1u;
    c->r[2] = c->r[5];
    c->r[3] = 0x94u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x581054u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x581058u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14bb800u;
    { uint32_t ea = 0x581068u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581068u; f_9aedcc(c);
    c->r[1] = 0x14bb804u;
    { uint32_t ea = 0x581074u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5810ac(Cpu *restrict c) {
    FN_ENTER(0x5810acu);
L_5810ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14bb7c0u;
    { uint32_t ea = 0x5810bcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5810c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x30u;
    c->pc = c->r[4]; c->r[14] = 0x5810d8u; rt_dispatch(c);
    c->r[1] = 0x14bb798u;
    c->r[2] = 0x14b7a60u;
    { uint32_t ea = 0x5810e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5810ecu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_581134(Cpu *restrict c) {
    FN_ENTER(0x581134u);
L_581134:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14bb730u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x58114cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x581150u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_581170(Cpu *restrict c) {
    FN_ENTER(0x581170u);
L_581170:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14bb6f8u;
    { uint32_t ea = 0x581184u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581184u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_58119c(Cpu *restrict c) {
    FN_ENTER(0x58119cu);
L_58119c:;
    c->r[1] = 0x14bb6d4u;
    c->r[2] = 0x14b799cu;
    { uint32_t ea = 0x5811acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5811b0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    return;
}
void f_5811f4(Cpu *restrict c) {
    FN_ENTER(0x5811f4u);
L_5811f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14bb678u;
    { uint32_t ea = 0x581208u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_581224; }
    c->r[14] = 0x58121cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_581224:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58123c; }
    c->r[14] = 0x581234u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_58123c:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_581254; }
    c->r[14] = 0x58124cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_581254:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58126c; }
    c->r[14] = 0x581264u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_58126c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5812b8; }
L_581278:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_581278; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5812b0; }
    c->r[0] = 0x14b78e4u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5812a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5812b0u; rt_dispatch(c);
L_5812b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5812b8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5812c8(Cpu *restrict c) {
    FN_ENTER(0x5812c8u);
L_5812c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5812d4u; f_5811f4(c);
    c->r[0] = 0x14bb59cu;
    { uint32_t ea = 0x5812e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5812e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5812f8(Cpu *restrict c) {
    FN_ENTER(0x5812f8u);
L_5812f8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[11] = c->r[1];
    c->r[9] = c->r[0];
    c->r[10] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    c->r[14] = 0x581330u; f_9bb638(c);
    c->r[1] = 0x11d0828u;
    c->r[8] = c->r[13] + 0x10u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0x581348u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x8u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[0] = 0x11e1f61u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[2] = 0x5813a0u + c->r[0];
    c->r[0] = 0x11dc665u;
    c->r[3] = 0x5813a8u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x5813acu; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x5813b4u; f_9bb638(c);
    c->r[12] = c->r[8];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0xcu;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[0] = 0x11e1f02u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[2] = 0x58140cu + c->r[0];
    c->r[0] = 0x11dc5f9u;
    c->r[3] = 0x581414u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x581418u; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x581420u; f_9bb638(c);
    c->r[2] = c->r[8];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x14u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[0] = 0x11e1ea7u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[2] = 0x581474u + c->r[0];
    c->r[0] = 0x11dc591u;
    c->r[3] = 0x58147cu + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x581480u; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x581488u; f_9bb638(c);
    c->r[12] = c->r[8];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x10u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[0] = 0x11e1e46u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[2] = 0x5814e0u + c->r[0];
    c->r[0] = 0x11dc525u;
    c->r[3] = 0x5814e8u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x5814ecu; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x5814f4u; f_9bb638(c);
    c->r[2] = c->r[8];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    c->r[14] = 0x581550u; f_9bb638(c);
    c->r[1] = 0x11e1dd7u;
    c->r[1] = 0x58155cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x20u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5815cc(Cpu *restrict c) {
    FN_ENTER(0x5815ccu);
L_5815cc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x100u;
    c->r[5] = c->r[1];
    c->r[6] = c->r[13];
    c->r[4] = c->r[0];
    c->r[2] = 0x100u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x5815f0u; f_a26c38(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x11cf76eu;
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[2] = 0x581608u + c->r[1]; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_5816b8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_581654; }
L_581614:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_581614; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_58164c; }
    c->r[0] = 0x14b7548u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x581640u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x58164cu; rt_dispatch(c);
L_58164c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_581654:;
    c->r[0] = c->r[13];
    c->r[14] = 0x58165cu; f_15efd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5816b0; }
    c->r[0] = 0x14b7510u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x581678u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x581688u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x5816acu; f_15efd94(c);
    goto L_5816b8;
L_5816b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5816b8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5816c0u; f_43210c(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5816ccu; f_43210c(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5816d8u; f_43210c(c);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5816e4u; f_43210c(c);
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5816f8u; rt_dispatch(c);
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x58170cu; rt_dispatch(c);
    ST32(c->r[4] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x581720u; rt_dispatch(c);
    ST32(c->r[4] + 40u, c->v.s[0]);
    c->r[13] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_581738(Cpu *restrict c) {
    FN_ENTER(0x581738u);
L_581738:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x11cf61au;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = 0x58175cu + c->r[0]; }
    c->r[0] = c->r[4];
    c->r[14] = 0x581760u; f_a27c9c(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x58176cu; f_431d2c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x581778u; f_431d2c(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x581784u; f_431d2c(c);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x581790u; f_431d2c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 32u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5817a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 36u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5817b8u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 40u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5817d4(Cpu *restrict c) {
    FN_ENTER(0x5817d4u);
L_5817d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14bb0a0u;
    { uint32_t ea = 0x5817e4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5817e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x30u;
    c->pc = c->r[4]; c->r[14] = 0x581800u; rt_dispatch(c);
    c->r[1] = 0x14bb070u;
    c->r[2] = 0x14b7338u;
    { uint32_t ea = 0x581810u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x581814u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x14bb030u;
    { uint32_t ea = 0x581858u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_581870(Cpu *restrict c) {
    FN_ENTER(0x581870u);
L_581870:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x58187cu; f_5811f4(c);
    c->r[0] = 0x14baffcu;
    { uint32_t ea = 0x581888u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581888u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5818a0(Cpu *restrict c) {
    FN_ENTER(0x5818a0u);
L_5818a0:;
    __attribute__((musttail)) return f_5812f8(c);
}
void f_5818a4(Cpu *restrict c) {
    FN_ENTER(0x5818a4u);
L_5818a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5818a8(Cpu *restrict c) {
    FN_ENTER(0x5818a8u);
L_5818a8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5818ac(Cpu *restrict c) {
    FN_ENTER(0x5818acu);
L_5818ac:;
    c->r[0] = 0x14bafc4u;
    { uint32_t ea = 0x5818b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5818bc(Cpu *restrict c) {
    FN_ENTER(0x5818bcu);
L_5818bc:;
    c->r[0] = 0x14bafbcu;
    { uint32_t ea = 0x5818c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5818cc(Cpu *restrict c) {
    FN_ENTER(0x5818ccu);
L_5818cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1508e74u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0x5818fcu + c->r[0];
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
    c->r[0] = 0x14baf38u;
    { uint32_t ea = 0x581944u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14b7218u;
    { uint32_t ea = 0x58194cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x11d4e7du;
    c->r[1] = 0x581954u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x581958u; f_9aedcc(c);
    c->r[0] = 0x14baf10u;
    c->r[1] = 0x11e19bcu;
    c->r[2] = c->r[4];
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x58197cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x581980u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14baef4u;
    { uint32_t ea = 0x581990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581990u; f_9aedcc(c);
    c->r[1] = 0x14baef4u;
    { uint32_t ea = 0x58199cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5819c8(Cpu *restrict c) {
    FN_ENTER(0x5819c8u);
L_5819c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14baebcu;
    { uint32_t ea = 0x5819d8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5819dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x5819f4u; rt_dispatch(c);
    c->r[1] = 0x14bae94u;
    c->r[2] = c->r[0];
    { uint32_t ea = 0x581a04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_581a48(Cpu *restrict c) {
    FN_ENTER(0x581a48u);
L_581a48:;
    return;
}
void f_581a4c(Cpu *restrict c) {
    FN_ENTER(0x581a4cu);
L_581a4c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14bae34u;
    { uint32_t ea = 0x581a60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581a60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_581a78(Cpu *restrict c) {
    FN_ENTER(0x581a78u);
L_581a78:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_HI) { goto L_581cf4; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x581a98u + 0x8u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x581ae4u: goto L_581ae4; case 0x581b14u: goto L_581b14; case 0x581b28u: goto L_581b28; case 0x581b4cu: goto L_581b4c; case 0x581b78u: goto L_581b78; case 0x581b98u: goto L_581b98; case 0x581bacu: goto L_581bac; case 0x581c04u: goto L_581c04; case 0x581c24u: goto L_581c24; case 0x581c78u: goto L_581c78; case 0x581ca4u: goto L_581ca4; case 0x581cb8u: goto L_581cb8; case 0x581ce8u: goto L_581ce8; case 0x581cf8u: goto L_581cf8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_581ae4:;
    c->r[0] = 0x14b7234u;
    c->r[6] = 0x7u;
    { uint32_t ea = 0x581af4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_581cf8; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf8; }
    c->r[5] = 0x3u;
L_581b14:;
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf8; }
    c->r[5] = 0x4u;
L_581b28:;
    c->r[0] = 0x14b72a8u;
    c->r[6] = c->r[5];
    { uint32_t ea = 0x581b38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb11u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_581cf8; }
    c->r[6] = 0x5u;
    goto L_581b5c;
L_581b4c:;
    c->r[0] = 0x14b7284u;
    c->r[6] = c->r[5];
    { uint32_t ea = 0x581b5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_581b5c:;
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = 0x6u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_581b84; }
    goto L_581cf8;
L_581b78:;
    c->r[0] = 0x14b725cu;
    { uint32_t ea = 0x581b84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_581b84:;
    { uint32_t ea = c->r[0] + 0xb16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = 0x7u; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_581b98:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf8; }
    c->r[5] = 0xau;
L_581bac:;
    c->r[0] = 0x14b7164u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[6] = c->r[5];
    { uint32_t ea = 0x581bc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581bc8u; f_5a5ed0(c);
    c->r[5] = 0xbu;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_581c04; }
    c->r[0] = 0x14b7148u;
    { uint32_t ea = 0x581be0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581be4u; f_5a9e7c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_581c04; }
    c->r[0] = 0x14b7130u;
    { uint32_t ea = 0x581bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581bfcu; f_5a9ea4(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581cf8; }
L_581c04:;
    c->r[0] = 0x14b7110u;
    c->r[6] = c->r[5];
    c->r[5] = 0xcu;
    { uint32_t ea = 0x581c18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_581cf8; }
L_581c24:;
    c->r[0] = 0x14b7154u;
    c->r[6] = c->r[5];
    { uint32_t ea = 0x581c34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581c38u; f_7232cc(c);
    c->r[5] = 0xdu;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_581c78; }
    c->r[0] = 0x14b70d4u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x581c54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581c58u; f_5a9f54(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_581cf8; }
    c->r[0] = 0x14b7174u;
    { uint32_t ea = 0x581c6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581c70u; f_5c7134(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf8; }
L_581c78:;
    c->r[0] = 0x14b70f4u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[5];
    { uint32_t ea = 0x581c8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581c90u; f_477454(c);
    c->r[1] = 0x554u;
    c->r[5] = 0xeu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_581cf8; }
L_581ca4:;
    { uint32_t ea = c->r[4] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf8; }
    c->r[5] = 0xfu;
L_581cb8:;
    { uint32_t ea = c->r[4] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf4; }
    { uint32_t ea = c->r[4] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_581cf4; }
    c->r[6] = 0x10u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_581ce8:;
    { uint32_t ea = c->r[4] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = 0x12u; }
L_581cf4:;
    c->r[6] = c->r[5];
L_581cf8:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_581d30(Cpu *restrict c) {
    FN_ENTER(0x581d30u);
L_581d30:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[2];
    c->r[7] = c->r[1];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_581dbc; }
    c->r[2] = 0x0u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_581d6c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[2]); }
    c->r[2] = 0x1u;
L_581d6c:;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_581dbc; }
    c->r[1] = c->r[3] - c->r[2];
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x0u;
L_581d80:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[6] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[6]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[6] + 0x4u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[2];
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[6] + 0x6u; ST16(ea, c->r[3]); }
    if (COND_NE) { goto L_581d80; }
L_581dbc:;
    c->r[1] = c->r[7];
    c->r[14] = 0x581dc4u; f_581fec(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_581dec; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_581e64; }
    c->r[0] = 0x14b6f44u;
    { uint32_t ea = 0x581de4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581de8u; f_5a329c(c);
    goto L_581dfc;
L_581dec:;
    c->r[0] = 0x14b6f30u;
    { uint32_t ea = 0x581df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581dfcu; f_5a31b0(c);
L_581dfc:;
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_581e64; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_581e6c; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_581e64; }
L_581e1c:;
    c->r[7] = 0x0u;
L_581e20:;
    c->r[0] = c->r[6];
    c->r[14] = 0x581e28u; f_57c500(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_581e64; }
    c->r[0] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_NE) { goto L_581e50; }
    c->r[0] = 0x1u;
L_581e50:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[3] = c->r[5];
    c->r[14] = 0x581e64u; f_58211c(c);
L_581e64:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_581e6c:;
    c->r[0] = 0x14b6eacu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x581e7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x581e80u; f_5a5b80(c);
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_581f20; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_NE) { goto L_581e64; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581e1c; }
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581fb0; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581fb8; }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581fc0; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581fc8; }
    { uint32_t ea = c->r[6] + 0x9u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581fd0; }
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_581fd8; }
    { uint32_t ea = c->r[6] + 0xbu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e64; }
    c->r[7] = 0x7u;
    goto L_581e20;
L_581f20:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x2u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x3u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[7] = 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    { uint32_t ea = c->r[6] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x5u;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x6u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    { uint32_t ea = c->r[6] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_581e20; }
    goto L_581e64;
L_581fb0:;
    c->r[7] = 0x1u;
    goto L_581e20;
L_581fb8:;
    c->r[7] = 0x2u;
    goto L_581e20;
L_581fc0:;
    c->r[7] = 0x3u;
    goto L_581e20;
L_581fc8:;
    c->r[7] = 0x4u;
    goto L_581e20;
L_581fd0:;
    c->r[7] = 0x5u;
    goto L_581e20;
L_581fd8:;
    c->r[7] = 0x6u;
    goto L_581e20;
}
void f_581fec(Cpu *restrict c) {
    FN_ENTER(0x581fecu);
L_581fec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x14b6d28u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x582000u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582004u; f_5ae5b8(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_HI) { goto L_582020; }
    c->r[1] = 0x14ba880u;
    { uint32_t ea = 0x58201cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[5] = v; }
L_582020:;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_582044; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_582058; }
    c->r[0] = 0x14b6cecu;
    { uint32_t ea = 0x58203cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582040u; f_5a3284(c);
    goto L_582054;
L_582044:;
    c->r[0] = 0x14b6cd8u;
    { uint32_t ea = 0x582050u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582054u; f_5a3370(c);
L_582054:;
    c->r[5] = c->r[0] + c->r[5];
L_582058:;
    c->r[0] = 0x14b6d1cu;
    { uint32_t ea = 0x582064u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582068u; f_475a30(c);
    c->r[1] = 0x10u;
    c->r[4] = c->r[0];
    c->r[14] = 0x582074u; f_46fe10(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5820ac; }
    c->r[0] = c->r[4];
    c->r[1] = 0x11u;
    c->r[14] = 0x58208cu; f_46fe10(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5820ac; }
    c->r[0] = 0x14b6b10u;
    { uint32_t ea = 0x5820a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5820a8u; f_5f8344(c);
    c->r[1] = c->r[0] & 0x1u;
L_5820ac:;
    c->r[4] = c->r[1] + c->r[5];
    c->r[14] = 0x5820b4u; f_5822bc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x7u);
    if (COND_HI) { goto L_5820e8; }
    c->r[0] = 0x14b6ae8u;
    { uint32_t ea = 0x5820ccu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_5820c8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5820d0u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LS) { goto L_5820e8; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x8u);
    if (COND_CC) { goto L_5820c8; }
L_5820e8:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[4], 0x8u);
    if (COND_CS) { c->r[4] = 0x8u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58211c(Cpu *restrict c) {
    FN_ENTER(0x58211cu);
L_58211c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[2];
    c->r[10] = c->r[0];
    c->r[8] = c->r[3];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5822a8; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_5822a8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5] + 0x4u;
    c->r[6] = 0x0u;
L_58215c:;
    c->r[6] = c->r[6] + (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x4u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_58215c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_582218; }
    c->r[9] = c->r[5] + 0x2u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_582220; }
    c->r[0] = 0x14b6a24u;
    { uint32_t ea = 0x582190u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_58218c:;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_5821a8; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5821a0u; f_5f8344(c);
    c->r[1] = sdiv32(c->r[0], c->r[6]);
    c->r[0] = c->r[0] - c->r[1] * c->r[6];
L_5821a8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_582208; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[9];
L_5821bc:;
    c->r[2] = c->r[2] + (uint32_t)(uint8_t)(c->r[3]);
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_5821e0; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[4] = c->r[1] + 0x4u;
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_NE) { goto L_5821bc; }
    goto L_582208;
L_5821e0:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[7] + c->r[0];
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] - 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
L_582208:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_NE) { goto L_58218c; }
    goto L_5822a4;
L_582218:;
    c->r[0] = 0x0u;
    goto L_5822a8;
L_582220:;
    c->r[0] = 0x14b6988u;
    { uint32_t ea = 0x58222cu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_582228:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582230u; f_5f8344(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_582298; }
    c->r[1] = sdiv32(c->r[0], c->r[6]);
    c->r[3] = 0x0u;
    c->r[1] = c->r[0] - c->r[1] * c->r[6];
    c->r[0] = c->r[9];
L_58224c:;
    c->r[3] = c->r[3] + (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_582270; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[4] = c->r[0] + 0x4u;
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { goto L_58224c; }
    goto L_582298;
L_582270:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + c->r[1];
    c->r[2] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_582298:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_NE) { goto L_582228; }
L_5822a4:;
    c->r[0] = c->r[8];
L_5822a8:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5822bc(Cpu *restrict c) {
    FN_ENTER(0x5822bcu);
L_5822bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x14b6ab4u;
    { uint32_t ea = 0x5822ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5822d0u; f_475a30(c);
    c->r[4] = c->r[0] + 0x4u;
    c->r[1] = 0xfbu;
    c->r[0] = c->r[4];
    c->r[14] = 0x5822e0u; f_2e0da0(c);
    c->r[5] = 0x1fu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_582360; }
    c->r[0] = c->r[4];
    c->r[1] = 0xfcu;
    c->r[14] = 0x5822f8u; f_2e0da0(c);
    c->r[5] = 0x1cu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_582360; }
    c->r[0] = c->r[4];
    c->r[1] = 0x141u;
    c->r[14] = 0x582310u; f_2e0da0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_582360; }
    c->r[0] = c->r[4];
    c->r[1] = 0xfdu;
    c->r[14] = 0x582324u; f_2e0da0(c);
    c->r[5] = 0x19u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_582360; }
    c->r[0] = c->r[4];
    c->r[1] = 0xffu;
    c->r[14] = 0x58233cu; f_2e0da0(c);
    c->r[5] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_582360; }
    c->r[0] = c->r[4];
    c->r[1] = 0xfeu;
    c->r[14] = 0x582354u; f_2e0da0(c);
    c->r[5] = 0x16u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[5] = 0x10u; }
L_582360:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58236c(Cpu *restrict c) {
    FN_ENTER(0x58236cu);
L_58236c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x54u;
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_5828a0; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5823ac; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    c->r[1] = 0x1u;
L_5823ac:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_5823fc; }
    c->r[0] = c->r[9] - c->r[1];
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x0u;
L_5823c0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3] + 0x6u; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_5823c0; }
L_5823fc:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_5828a0; }
    c->r[0] = 0x14b6910u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = 0x582418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b6790u;
    { uint32_t ea = 0x582424u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b68f8u;
    { uint32_t ea = 0x582430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ba470u;
    { uint32_t ea = 0x58243cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b68e0u;
    { uint32_t ea = 0x582448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ba454u;
    { uint32_t ea = 0x582454u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b68c8u;
    { uint32_t ea = 0x582460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ba438u;
    { uint32_t ea = 0x58246cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b68b0u;
    { uint32_t ea = 0x582478u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b68a4u;
    { uint32_t ea = 0x582484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b6898u;
    { uint32_t ea = 0x582490u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b688cu;
    { uint32_t ea = 0x58249cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ba3f8u;
    { uint32_t ea = 0x5824a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b6874u;
    { uint32_t ea = 0x5824b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b6868u;
    { uint32_t ea = 0x5824c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b685cu;
    { uint32_t ea = 0x5824ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_5824d0:;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5824f4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58288c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5824f0u; f_5a3388(c);
    goto L_582500;
L_5824f4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582500u; f_5a33ac(c);
L_582500:;
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58288c; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    goto L_5825a4;
L_582518:;
    c->r[10] = 0x1u;
    goto L_582780;
L_582520:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582530u; f_5a5b80(c);
    c->r[10] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_582598; }
    goto L_582780;
L_582540:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1742u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[10] = 0x1u; }
    goto L_582780;
L_582560:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1742u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { c->r[10] = 0x0u; }
    goto L_582780;
L_58257c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58258cu; f_5a5b80(c);
    c->r[10] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_582780; }
L_582598:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_582780; }
    goto L_582880;
L_5825a4:;
    c->r[0] = c->r[5] + c->r[7];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x30u);
    if (COND_HI) { goto L_582780; }
    c->r[0] = (c->r[4] << 2);
    c->r[1] = 0x5825c4u + 0x8u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x582518u: goto L_582518; case 0x582520u: goto L_582520; case 0x582540u: goto L_582540; case 0x582560u: goto L_582560; case 0x58257cu: goto L_58257c; case 0x582690u: goto L_582690; case 0x5826acu: goto L_5826ac; case 0x5826c8u: goto L_5826c8; case 0x58275cu: goto L_58275c; case 0x582780u: goto L_582780; case 0x582880u: goto L_582880; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_582690:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] - 0x19u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x9au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    goto L_582774;
L_5826ac:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] - 0x6u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_582774;
L_5826c8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5826d4u; f_5ae93c(c);
    c->r[1] = 0xcccdu;
    c->r[0] = c->r[0] + 0x9u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xcccc0000u;
    c->r[8] = c->r[1];
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[1] >> 3);
    c->r[6] = c->r[0] + (c->r[0] << 2);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x5826fcu; f_5ae9b0(c);
    c->r[0] = c->r[0] + 0x9u;
    c->r[10] = 0x0u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[2] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[0] + (c->r[6] << 1);
    c->r[2] = (c->r[3] >> 3);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] - (c->r[2] << 1);
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[1] - 0x26u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], (uint32_t)((int32_t)c->r[0] >> 1));
    if (COND_GT) { goto L_582780; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582748u; f_5a5b80(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_582780; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_582780; }
    goto L_582880;
L_58275c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] - 0x10u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x99u; uint32_t v = LD8(ea); c->r[1] = v; }
L_582774:;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[10] = 0x0u;
    if (COND_LE) { c->r[10] = 0x1u; }
L_582780:;
    c->r[0] = c->r[10] + c->r[11];
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[0], c->r[9]);
    c->r[0] = c->r[5];
    if (COND_HI) { c->r[10] = c->r[9] - c->r[11]; }
    c->r[14] = 0x582798u; f_57c44c(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_582880; }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_58287c; }
    c->r[1] = c->r[4] + 0x4u;
    c->r[8] = 0x0u;
L_5827c0:;
    c->r[8] = c->r[8] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_5827c0; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_582878; }
    c->r[5] = c->r[11];
    c->r[9] = c->r[4] + 0x2u;
    c->r[11] = 0x0u;
L_5827e4:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5827f0u; f_5f8344(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_582858; }
    c->r[1] = sdiv32(c->r[0], c->r[8]);
    c->r[3] = 0x0u;
    c->r[1] = c->r[0] - c->r[1] * c->r[8];
    c->r[0] = c->r[9];
L_58280c:;
    c->r[3] = c->r[3] + (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_582830; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[6] = c->r[0] + 0x4u;
    c->r[0] = c->r[6];
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { goto L_58280c; }
    goto L_582858;
L_582830:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = c->r[11] + c->r[5];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_582858:;
    c->r[11] = c->r[11] + 0x1u;
    (void)f_subs(c, c->r[11], c->r[10]);
    if (COND_NE) { goto L_5827e4; }
    c->r[11] = c->r[5];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[10];
    goto L_58287c;
L_582878:;
    c->r[1] = 0x0u;
L_58287c:;
    c->r[11] = c->r[11] + (uint32_t)(uint8_t)(c->r[1]);
L_582880:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x8u);
    if (COND_NE) { goto L_5825a4; }
L_58288c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LS) { (void)f_subs(c, c->r[11], c->r[9]); }
    if (COND_CC) { goto L_5824d0; }
L_5828a0:;
    c->r[13] = c->r[13] + 0x54u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5828e8(Cpu *restrict c) {
    FN_ENTER(0x5828e8u);
L_5828e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[0] = 0x14b6480u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x582900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582904u; f_475a30(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x14b6400u;
    c->r[11] = 0x0u;
    c->r[10] = 0x0u;
    c->r[7] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x582928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b63e8u;
    { uint32_t ea = 0x582940u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a742cu;
    c->r[0] = 0x58294cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b625cu;
    { uint32_t ea = 0x582958u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b6250u;
    { uint32_t ea = 0x582964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b6244u;
    { uint32_t ea = 0x582970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b6238u;
    { uint32_t ea = 0x58297cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_58297c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + (c->r[10] << 1);
    c->r[8] = c->r[1] + (c->r[0] << 1);
    c->r[0] = 0x566u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_582bf0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5829a4u; f_5a3874(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_582be4; }
    { uint32_t ea = c->r[8] + 0x568u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x5829b4u; f_554484(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[8] + 0x569u; uint32_t v = LD8(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_582a1c; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CS) { c->r[0] = 0xau; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_582ae4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[1] = ea; c->r[11] = v; }
    c->r[0] = c->r[0] - 0x6u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_582ae4; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
L_5829f4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582a00u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1eu;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_CC) { c->r[11] = c->r[11] + 0x1u; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_CC) { goto L_5829f4; }
    goto L_582ae4;
L_582a1c:;
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_582ae4; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_582ab4; }
L_582a34:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582a40u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1eu;
    c->r[6] = 0x2u;
    c->r[1] = 0x102u;
    (void)f_subs(c, c->r[0], 0x16u);
    c->r[0] = c->r[7];
    if (COND_CC) { c->r[6] = 0x3u; }
    c->r[14] = 0x582a5cu; f_2e0da0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_582a6c; }
    c->r[6] = c->r[6] + 0x1u;
    goto L_582a9c;
L_582a6c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x103u;
    c->r[14] = 0x582a78u; f_2e0da0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_582a88; }
    c->r[6] = 0x3u;
    goto L_582a9c;
L_582a88:;
    c->r[0] = c->r[7];
    c->r[1] = 0x141u;
    c->r[14] = 0x582a94u; f_2e0da0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[6] = 0x3u; }
L_582a9c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[11] = c->r[6] + c->r[11];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_582a34; }
    goto L_582ae4;
L_582ab4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582ac0u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1eu;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], 0x16u);
    c->r[0] = 0x2u;
    if (COND_CC) { c->r[0] = 0x3u; }
    c->r[11] = c->r[0] + c->r[11];
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_582ab4; }
L_582ae4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11] + c->r[2];
    (void)f_subs(c, c->r[0], 0x37u);
    if (COND_GT) { c->r[11] = 0x38u - c->r[2]; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_582bd8; }
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_LT) { goto L_582bd8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_582bd0; }
    c->r[1] = c->r[9] + 0x4u;
    c->r[5] = 0x0u;
L_582b18:;
    c->r[5] = c->r[5] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_582b18; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_582bd0; }
    c->r[8] = c->r[9] + 0x2u;
    c->r[7] = 0x0u;
L_582b3c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582b48u; f_5f8344(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_582bb0; }
    c->r[1] = sdiv32(c->r[0], c->r[5]);
    c->r[3] = 0x0u;
    c->r[1] = c->r[0] - c->r[1] * c->r[5];
    c->r[0] = c->r[8];
L_582b64:;
    c->r[3] = c->r[3] + (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_582b88; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[4] = c->r[0] + 0x4u;
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { goto L_582b64; }
    goto L_582bb0;
L_582b88:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + c->r[1];
    c->r[2] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_582bb0:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[11]);
    if (COND_NE) { goto L_582b3c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11];
    goto L_582bd4;
L_582bd0:;
    c->r[0] = 0x0u;
L_582bd4:;
    c->r[2] = c->r[2] + (uint32_t)(uint8_t)(c->r[0]);
L_582bd8:;
    (void)f_subs(c, c->r[2], 0x37u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    if (COND_GT) { goto L_582bf0; }
L_582be4:;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], 0x3cu);
    if (COND_CC) { goto L_58297c; }
L_582bf0:;
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_582c18(Cpu *restrict c) {
    FN_ENTER(0x582c18u);
L_582c18:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[11] = c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_582ca0; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_582c50; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    c->r[1] = 0x1u;
L_582c50:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_582ca0; }
    c->r[0] = c->r[2] - c->r[1];
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x0u;
L_582c64:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3] + 0x6u; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_582c64; }
L_582ca0:;
    c->r[0] = 0x14b607cu;
    { uint32_t ea = 0x582cacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582cb0u; f_5a33d0(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_582e04; }
    c->r[0] = 0x14b6060u;
    { uint32_t ea = 0x582cc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582cccu; f_5a33f4(c);
    c->r[7] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_582cfc; }
    c->r[1] = c->r[0] + (c->r[0] >> 31);
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfffffffeu;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[6] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_LT) { goto L_582d08; }
    goto L_582d30;
L_582cfc:;
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_GE) { goto L_582d30; }
L_582d08:;
    c->r[0] = 0x14b5ea0u;
    { uint32_t ea = 0x582d14u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_582d10:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582d18u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1eu;
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_HI) { goto L_582d30; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_LT) { goto L_582d10; }
L_582d30:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_582e04; }
    c->r[0] = c->r[8];
    c->r[14] = 0x582d44u; f_57c500(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_582e04; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_582e04; }
    c->r[1] = c->r[9] + 0x4u;
    c->r[7] = 0x0u;
L_582d68:;
    c->r[7] = c->r[7] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_582d68; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_582e04; }
    c->r[0] = 0x14b5e20u;
    c->r[8] = c->r[9] + 0x2u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x582d94u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_582d90:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582d98u; f_5f8344(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_582df8; }
    c->r[1] = sdiv32(c->r[0], c->r[7]);
    c->r[3] = 0x0u;
    c->r[1] = c->r[0] - c->r[1] * c->r[7];
    c->r[0] = c->r[8];
L_582db4:;
    c->r[3] = c->r[3] + (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_582dd8; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[4] = c->r[0] + 0x4u;
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { goto L_582db4; }
    goto L_582df8;
L_582dd8:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_582df8:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_582d90; }
L_582e04:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_582e1c(Cpu *restrict c) {
    FN_ENTER(0x582e1cu);
L_582e1c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_582ea4; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_582e54; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    c->r[1] = 0x1u;
L_582e54:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_582ea4; }
    c->r[0] = c->r[2] - c->r[1];
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x0u;
L_582e68:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3] + 0x6u; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_582e68; }
L_582ea4:;
    c->r[0] = 0x14b5f30u;
    { uint32_t ea = 0x582eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582eb4u; f_5c6124(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_582fd8; }
    c->r[14] = 0x582ec4u; f_5822bc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x14b5ce0u;
    { uint32_t ea = 0x582ed4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582ed8u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[7] = 0x2u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_582f88; }
    c->r[0] = 0x14b5cc0u;
    { uint32_t ea = 0x582ef4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582ef8u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[7] = 0x3u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_582f88; }
    c->r[0] = 0x14b5ca0u;
    { uint32_t ea = 0x582f14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582f18u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[7] = 0x4u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_582f88; }
    c->r[0] = 0x14b5c80u;
    { uint32_t ea = 0x582f34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582f38u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[7] = 0x5u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_582f88; }
    c->r[0] = 0x14b5c60u;
    { uint32_t ea = 0x582f54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582f58u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[7] = 0x6u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_582f88; }
    c->r[0] = 0x14b5c40u;
    { uint32_t ea = 0x582f74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x582f78u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[7] = 0x7u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_HI) { c->r[7] = 0x8u; }
L_582f88:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_582fd8; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x582fa0u; f_57c500(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_582fd8; }
    (void)f_subs(c, c->r[6], 0x4u);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[3] = c->r[7];
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { c->r[6] = 0x0u; }
    c->r[0] = c->r[6] | c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x582fd8u; f_58211c(c);
L_582fd8:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_582ffc(Cpu *restrict c) {
    FN_ENTER(0x582ffcu);
L_582ffc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xacu;
    c->r[0] = 0x14b5dc4u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = 0x58301cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x583024u; f_5c6d44(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5838c4; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaf8u;
    c->r[0] = c->r[6] + (c->r[0] << 3);
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0x583050u; f_2e82e0(c);
    c->r[1] = 0x12a6d77u;
    c->r[4] = 0x1u;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    c->r[1] = 0x583068u + c->r[1];
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[1] = 0x12a6d62u;
    c->r[1] = 0x583078u + c->r[1];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    c->r[1] = 0x12a6d4cu;
    c->r[2] = 0x583084u + c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x245u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5b04u;
    if (COND_EQ) { c->r[4] = 0x2u; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5830b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5c6cu;
    { uint32_t ea = 0x5830bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5d18u;
    { uint32_t ea = 0x5830c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5d0cu;
    { uint32_t ea = 0x5830d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a6cf5u;
    c->r[0] = 0x5830e0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5ac8u;
    { uint32_t ea = 0x5830ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5c30u;
    { uint32_t ea = 0x5830f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5cdcu;
    { uint32_t ea = 0x583104u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5cd0u;
    { uint32_t ea = 0x583110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a6cc8u;
    c->r[0] = 0x58311cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a6cc1u;
    c->r[0] = 0x583128u + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5a28u;
    { uint32_t ea = 0x583134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5a90u;
    { uint32_t ea = 0x583140u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5a68u;
    { uint32_t ea = 0x58314cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5a5cu;
    { uint32_t ea = 0x583158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b59f8u;
    { uint32_t ea = 0x583164u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5c70u;
    { uint32_t ea = 0x583170u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5a38u;
    { uint32_t ea = 0x58317cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5a2cu;
    { uint32_t ea = 0x583188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5b94u;
    { uint32_t ea = 0x583194u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5c40u;
    { uint32_t ea = 0x5831a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5c34u;
    { uint32_t ea = 0x5831acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a6c1du;
    c->r[11] = 0x5831b8u + c->r[0];
    c->r[0] = 0x14b59f0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = 0x5831c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5b58u;
    { uint32_t ea = 0x5831d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5c04u;
    { uint32_t ea = 0x5831dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b5bf8u;
    { uint32_t ea = 0x5831e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
L_5831e8:;
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[6] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[7]); }
    if (COND_NE) { c->r[6] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
L_583200:;
    c->r[0] = c->r[8];
    c->r[14] = 0x583208u; f_250bdc(c);
    c->r[14] = 0x58320cu; f_250c5c(c);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] | c->r[6];
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[0] = c->r[2] & c->r[0];
    c->r[0] = c->r[0] ^ c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5838ac; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xa8u;
    c->r[2] = c->r[13] + 0xa4u;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x583248u; f_751e1c(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5838a4; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x16u;
    c->r[14] = 0x583274u; f_2e1e08(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x1u;
    c->r[9] = 0x0u;
    if (COND_NE) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_583288:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_5833f8; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5834f0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[11] = 0x0u;
    c->r[5] = 0x0u;
L_5832a8:;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5832d4; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58331c; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_583324; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_58330c;
L_5832d4:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_5832f8; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_583324; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_58330c;
L_5832f8:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_583324; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
L_58330c:;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[11] | c->r[9]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_58334c; }
    goto L_58332c;
L_58331c:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
L_583324:;
    { uint32_t r = c->r[11] | c->r[9]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_58334c; }
L_58332c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x64u;
    if (COND_NE) { c->r[6] = c->r[0]; }
L_58334c:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583358u; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_5833e8; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583388u; f_5a8bdc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_5833a8; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5833a4u; f_5c6dd8(c);
    c->r[6] = c->r[0];
L_5833a8:;
    c->r[0] = c->r[8];
    c->r[14] = 0x5833b0u; f_250bdc(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5833c4u; f_5c6df8(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x5833d8u; f_5c613c(c);
    c->r[10] = c->r[0];
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_5836e4; }
L_5833e8:;
    c->r[11] = c->r[11] + 0x1u;
    (void)f_subs(c, c->r[11], c->r[4]);
    if (COND_CC) { goto L_5832a8; }
    goto L_5836d8;
L_5833f8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5835f4; }
    c->r[5] = 0x0u;
L_583404:;
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[6] = 0x0u;
    if (COND_NE) { goto L_583418; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = v; }
L_583418:;
    { uint32_t r = c->r[5] | c->r[9]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_583444; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x64u;
    if (COND_NE) { c->r[6] = c->r[0]; }
L_583444:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583450u; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_5834e0; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583480u; f_5a8bdc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5834a0; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58349cu; f_5c6dd8(c);
    c->r[6] = c->r[0];
L_5834a0:;
    c->r[0] = c->r[8];
    c->r[14] = 0x5834a8u; f_250bdc(c);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5834bcu; f_5c6df8(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x5834d0u; f_5c613c(c);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_5836e4; }
L_5834e0:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_CC) { goto L_583404; }
    goto L_583894;
L_5834f0:;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_5834f8:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[2] + c->r[1]; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[5] | c->r[9]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_583548; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x64u;
    if (COND_NE) { c->r[7] = c->r[0]; }
L_583548:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583554u; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LS) { goto L_5835e4; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583584u; f_5a8bdc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5835a4; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5835a0u; f_5c6dd8(c);
    c->r[6] = c->r[0];
L_5835a4:;
    c->r[0] = c->r[8];
    c->r[14] = 0x5835acu; f_250bdc(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5835c0u; f_5c6df8(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x5835d4u; f_5c613c(c);
    c->r[10] = c->r[0];
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_5836e4; }
L_5835e4:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_CC) { goto L_5834f8; }
    goto L_5836d8;
L_5835f4:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[5] = v; }
L_583600:;
    { uint32_t r = c->r[7] | c->r[9]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[6] = c->r[5];
    if (COND_NE) { goto L_583630; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x64u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[6] = c->r[5]; }
L_583630:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58363cu; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LS) { goto L_5836cc; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58366cu; f_5a8bdc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58368c; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583688u; f_5c6dd8(c);
    c->r[6] = c->r[0];
L_58368c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x583694u; f_250bdc(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5836a8u; f_5c6df8(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[6];
    c->r[14] = 0x5836bcu; f_5c613c(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_5836e4; }
L_5836cc:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_CC) { goto L_583600; }
L_5836d8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_583894;
L_5836e4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5836ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[3]; c->r[14] = 0x583700u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = 0x0u; }
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); } }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_5837a0; }
    c->r[1] = c->r[10] + 0x4u;
    c->r[5] = 0x0u;
L_58372c:;
    c->r[5] = c->r[5] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_58372c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5837a0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583750u; f_5f8344(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_5837a0; }
    c->r[2] = sdiv32(c->r[0], c->r[5]);
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] - c->r[2] * c->r[5];
    c->r[2] = c->r[10] + 0x2u;
L_58376c:;
    c->r[3] = c->r[3] + (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { goto L_583790; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[7] = c->r[2] + 0x4u;
    c->r[2] = c->r[7];
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_58376c; }
    goto L_5837a0;
L_583790:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
L_5837a0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5837b0u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5837d8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5837d4u; f_5c6be4(c);
    goto L_583874;
L_5837d8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_583814; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[7] << 2);
    c->r[7] = c->r[7] + 0x1u;
    c->r[1] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[2] + c->r[3]; ST16(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    goto L_583874;
L_583814:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583820u; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[0], 0x31u);
    if (COND_HI) { goto L_583874; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58384cu; f_5f8344(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | (c->r[1] << 16);
    c->r[5] = udiv32(c->r[0], c->r[7]);
    c->r[0] = c->r[0] - c->r[5] * c->r[7];
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[3] + c->r[0]; ST16(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[1]); }
L_583874:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x583884u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x583894u; rt_dispatch(c);
L_583894:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_CC) { goto L_583288; }
L_5838a4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
L_5838ac:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], 0x89u);
    if (COND_NE) { goto L_583200; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { goto L_5831e8; }
L_5838c4:;
    c->r[13] = c->r[13] + 0xacu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_583948(Cpu *restrict c) {
    FN_ENTER(0x583948u);
L_583948:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14b8f58u;
    { uint32_t ea = 0x583958u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x58395cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3f0u;
    c->pc = c->r[4]; c->r[14] = 0x583974u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_5839bc(c);
}
void f_583980(Cpu *restrict c) {
    FN_ENTER(0x583980u);
L_583980:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14b8f18u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x583998u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x58399cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5839bc(Cpu *restrict c) {
    FN_ENTER(0x5839bcu);
L_5839bc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[1] = 0x6u;
    c->r[4] = c->r[0];
    c->r[14] = 0x5839d0u; f_85c7e8(c);
    c->r[0] = 0x14b8ed0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x28u;
    { uint32_t ea = 0x5839e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x5cu;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    c->r[14] = 0x5839f4u; f_15efd7c(c);
    c->r[0] = 0x14b8e98u;
    { uint32_t ea = 0x583a00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x95u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x94u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x91u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8du; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x90u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x8cu; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0x583a40u; f_74ed74(c);
    c->r[0] = c->r[4] + 0xc4u;
    c->r[14] = 0x583a48u; f_753030(c);
    c->r[0] = c->r[4] + 0xe8u;
    c->r[14] = 0x583a50u; f_74ed74(c);
    c->r[0] = c->r[4] + 0x10cu;
    c->r[14] = 0x583a58u; f_74ed74(c);
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x583a60u; f_74ed74(c);
    c->r[0] = c->r[4] + 0x1a0u;
    c->r[1] = 0x2cu;
    c->r[14] = 0x583a6cu; f_15efdac(c);
    c->r[8] = c->r[4];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x1e4u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1e5u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[5]); }
    c->r[6] = 0xffu;
    c->r[9] = ~0x0u;
    c->r[1] = 0x1aeu;
    { uint32_t ea = c->r[8] + 0x164u; ST32(ea, c->r[5]); c->r[8] = ea; }
    { uint32_t ea = c->r[4] + 0x1ddu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d9u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d5u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1d1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1dcu; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1d8u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1d4u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1d0u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x1e1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1e0u; ST8(ea, c->r[9]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[6]); }
    c->r[0] = 0x1e6u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x583b10u; f_15efdac(c);
    c->r[0] = 0x2fcu;
    c->r[1] = 0xbu;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x394u; ST8(ea, c->r[9]); c->r[7] = ea; }
    c->r[0] = 0x24u;
    { uint32_t ea = c->r[7] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x73u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x74u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x72u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] - 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_HI) { goto L_583be4; }
    c->r[0] = 0x14b4fe4u;
    { uint32_t ea = 0x583b78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583b78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xc0u;
    c->pc = c->r[3]; c->r[14] = 0x583b8cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_583c30; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_583bf0; }
    c->r[0] = 0x0u;
L_583ba8:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[5] = c->r[6];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[3]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_583ba8; }
    (void)f_subs(c, c->r[1], 0x2fu);
    if (COND_LS) { goto L_583bf4; }
    goto L_583c04;
L_583be4:;
    (void)f_subs(c, c->r[0], 0x30u);
    if (COND_NE) { goto L_583c30; }
    goto L_583c38;
L_583bf0:;
    c->r[1] = 0x0u;
L_583bf4:;
    c->r[2] = 0xc0u;
    c->r[0] = c->r[6] + (c->r[1] << 2);
    c->r[1] = c->r[2] - (c->r[1] << 2);
    c->r[14] = 0x583c04u; f_15efdac(c);
L_583c04:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_583c2c; }
    c->r[0] = 0x14b4f40u;
    { uint32_t ea = 0x583c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583c1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x583c2cu; rt_dispatch(c);
L_583c2c:;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[6]); }
L_583c30:;
    c->r[0] = 0x30u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_583c38:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_583cbc; }
    c->r[0] = 0x14b4f0cu;
    { uint32_t ea = 0x583c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583c50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x583c64u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_583d08; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_583cc8; }
    c->r[0] = 0x0u;
L_583c80:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[5] = c->r[6];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[3]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_583c80; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_LS) { goto L_583ccc; }
    goto L_583cdc;
L_583cbc:;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_583d08; }
    goto L_583d10;
L_583cc8:;
    c->r[1] = 0x0u;
L_583ccc:;
    c->r[2] = 0x20u;
    c->r[0] = c->r[6] + (c->r[1] << 2);
    c->r[1] = c->r[2] - (c->r[1] << 2);
    c->r[14] = 0x583cdcu; f_15efdac(c);
L_583cdc:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_583d04; }
    c->r[0] = 0x14b4e68u;
    { uint32_t ea = 0x583cf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583cf4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x583d04u; rt_dispatch(c);
L_583d04:;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
L_583d08:;
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
L_583d10:;
    c->r[1] = 0x14b50bcu;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[7] - 0x318u;
    { uint32_t ea = 0x583d24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_583db0; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_HI) { goto L_583e30; }
    c->r[0] = 0x14b4e18u;
    { uint32_t ea = 0x583d44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583d44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[3]; c->r[14] = 0x583d58u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_583e38; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_583e4c; }
    c->r[0] = 0x0u;
L_583d74:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[6] = c->r[5];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[6] + c->r[2]; ST16(ea, c->r[3]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_583d74; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_LS) { goto L_583e50; }
    goto L_583e60;
L_583db0:;
    (void)f_subs(c, c->r[0], 0x1fu);
    if (COND_HI) { goto L_583e40; }
    c->r[0] = 0x14b4d98u;
    { uint32_t ea = 0x583dc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583dc4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x80u;
    c->pc = c->r[3]; c->r[14] = 0x583dd8u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_583ed4; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_583e94; }
    c->r[0] = 0x0u;
L_583df4:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[6] = c->r[5];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[6] + c->r[2]; ST16(ea, c->r[3]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_583df4; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_LS) { goto L_583e98; }
    goto L_583ea8;
L_583e30:;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_EQ) { goto L_583edc; }
L_583e38:;
    c->r[0] = 0x10u;
    goto L_583ed8;
L_583e40:;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_NE) { goto L_583ed4; }
    goto L_583edc;
L_583e4c:;
    c->r[1] = 0x0u;
L_583e50:;
    c->r[2] = 0x40u;
    c->r[0] = c->r[5] + (c->r[1] << 2);
    c->r[1] = c->r[2] - (c->r[1] << 2);
    c->r[14] = 0x583e60u; f_15efdac(c);
L_583e60:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_583e88; }
    c->r[0] = 0x14b4ce4u;
    { uint32_t ea = 0x583e78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583e78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x583e88u; rt_dispatch(c);
L_583e88:;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    c->r[0] = 0x10u;
    goto L_583ed8;
L_583e94:;
    c->r[1] = 0x0u;
L_583e98:;
    c->r[2] = 0x80u;
    c->r[0] = c->r[5] + (c->r[1] << 2);
    c->r[1] = c->r[2] - (c->r[1] << 2);
    c->r[14] = 0x583ea8u; f_15efdac(c);
L_583ea8:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_583ed0; }
    c->r[0] = 0x14b4c9cu;
    { uint32_t ea = 0x583ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583ec0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x583ed0u; rt_dispatch(c);
L_583ed0:;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
L_583ed4:;
    c->r[0] = 0x20u;
L_583ed8:;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
L_583edc:;
    c->r[6] = c->r[13];
    c->r[1] = 0x34u;
    c->r[0] = c->r[6];
    c->r[14] = 0x583eecu; f_15efdc4(c);
    c->r[7] = c->r[6] + 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x583ef8u; f_2daba4(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x96u;
    c->r[2] = c->r[6];
    c->r[14] = 0x583f08u; f_59106c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x583f10u; f_2dad24(c);
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbaeu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { goto L_583f88; }
    c->r[0] = 0x14b4c30u;
    { uint32_t ea = 0x583f2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583f2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xbafu;
    c->pc = c->r[3]; c->r[14] = 0x583f40u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_583fd8; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_583f98; }
    c->r[0] = 0x0u;
L_583f5c:;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_583f5c; }
    c->r[0] = 0xbaeu;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { goto L_583f9c; }
    goto L_583fac;
L_583f88:;
    c->r[1] = 0xbafu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_583fd8; }
    goto L_583fe0;
L_583f98:;
    c->r[1] = 0x0u;
L_583f9c:;
    c->r[2] = 0xbafu;
    c->r[0] = c->r[5] + c->r[1];
    c->r[1] = c->r[2] - c->r[1];
    c->r[14] = 0x583facu; f_15efdac(c);
L_583fac:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_583fd4; }
    c->r[0] = 0x14b4b98u;
    { uint32_t ea = 0x583fc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583fc4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x583fd4u; rt_dispatch(c);
L_583fd4:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
L_583fd8:;
    c->r[0] = 0xbafu;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
L_583fe0:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_584064; }
    c->r[0] = 0x14b4b64u;
    { uint32_t ea = 0x583ff8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x583ff8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[3]; c->r[14] = 0x58400cu; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5840b0; }
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_584070; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_58402c:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[7];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_58402c; }
    (void)f_subs(c, c->r[2], 0x7u);
    if (COND_LS) { goto L_584074; }
    goto L_584084;
L_584064:;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_5840b0; }
    goto L_5840b8;
L_584070:;
    c->r[2] = 0x0u;
L_584074:;
    c->r[1] = 0x40u;
    c->r[0] = c->r[7] + (c->r[2] << 3);
    c->r[1] = c->r[1] - (c->r[2] << 3);
    c->r[14] = 0x584084u; f_15efd7c(c);
L_584084:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5840ac; }
    c->r[0] = 0x14b4ac0u;
    { uint32_t ea = 0x58409cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58409cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x5840acu; rt_dispatch(c);
L_5840ac:;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[7]); }
L_5840b0:;
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[0]); }
L_5840b8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_5840c4:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[3] + c->r[1]; ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_5840c4; }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_HI) { goto L_584154; }
    c->r[0] = 0x14b4a60u;
    { uint32_t ea = 0x5840fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5840fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x30u;
    c->pc = c->r[3]; c->r[14] = 0x584110u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58419c; }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_584160; }
    c->r[0] = 0x0u;
L_58412c:;
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_58412c; }
    (void)f_subs(c, c->r[1], 0x2fu);
    if (COND_LS) { goto L_584164; }
    goto L_584170;
L_584154:;
    (void)f_subs(c, c->r[0], 0x30u);
    if (COND_NE) { goto L_58419c; }
    goto L_5841a4;
L_584160:;
    c->r[1] = 0x0u;
L_584164:;
    c->r[0] = c->r[5] + c->r[1];
    c->r[1] = 0x30u - c->r[1];
    c->r[14] = 0x584170u; f_15efdac(c);
L_584170:;
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_584198; }
    c->r[0] = 0x14b49d4u;
    { uint32_t ea = 0x584188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584188u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x584198u; rt_dispatch(c);
L_584198:;
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[5]); }
L_58419c:;
    c->r[0] = 0x30u;
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[0]); }
L_5841a4:;
    c->r[0] = c->r[4] + 0x3b8u;
    c->r[1] = 0x34u;
    c->r[14] = 0x5841b0u; f_15efdc4(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5841b8u; f_584208(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_584208(Cpu *restrict c) {
    FN_ENTER(0x584208u);
L_584208:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST16(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x56u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_584294; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_584268:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_584268; }
L_584294:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5842d8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_5842ac:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_5842ac; }
L_5842d8:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58431c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_5842f0:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_5842f0; }
L_58431c:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_584360; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_584334:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_584334; }
L_584360:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_584394; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_584378:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[3] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x34u;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_584378; }
L_584394:;
    c->r[5] = 0x0u;
    c->r[0] = 0x4u;
    c->r[1] = 0x38u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    c->r[0] = 0x19cu;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[4] + 0x1a0u;
    { uint32_t ea = c->r[4] + 0x19eu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[5]); }
    c->r[14] = 0x5843d8u; f_15efdac(c);
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[5] = c->r[0] + c->r[1]; }
    c->r[1] = c->r[5] - c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_5843f8; }
    c->r[14] = 0x5843f8u; f_15efdac(c);
L_5843f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_584408(Cpu *restrict c) {
    FN_ENTER(0x584408u);
L_584408:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14b8498u;
    { uint32_t ea = 0x58441cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_584448; }
    c->r[0] = 0x14b4724u;
    { uint32_t ea = 0x584438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584438u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x584448u; rt_dispatch(c);
L_584448:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_584470; }
    c->r[0] = 0x14b46fcu;
    { uint32_t ea = 0x584460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584460u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x584470u; rt_dispatch(c);
L_584470:;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_584498; }
    c->r[0] = 0x14b46d4u;
    { uint32_t ea = 0x584488u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584488u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x584498u; rt_dispatch(c);
L_584498:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5844bc; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x34u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[5]; c->r[6] = r; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_5844c8; }
    goto L_5844e0;
L_5844bc:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_5844e0; }
L_5844c8:;
    c->r[0] = c->r[5] + 0x8u;
    c->r[14] = 0x5844d0u; f_2dad24(c);
    c->r[5] = c->r[5] + 0x34u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_5844c8; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_5844e0:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_584504; }
    c->r[0] = 0x14b4668u;
    { uint32_t ea = 0x5844f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5844f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x584504u; rt_dispatch(c);
L_584504:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58452c; }
    c->r[0] = 0x14b4640u;
    { uint32_t ea = 0x58451cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58451cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x58452cu; rt_dispatch(c);
L_58452c:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_584554; }
    c->r[0] = 0x14b4618u;
    { uint32_t ea = 0x584544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584544u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x584554u; rt_dispatch(c);
L_584554:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58457c; }
    c->r[0] = 0x14b45f0u;
    { uint32_t ea = 0x58456cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58456cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x58457cu; rt_dispatch(c);
L_58457c:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5845a4; }
    c->r[0] = 0x14b45c8u;
    { uint32_t ea = 0x584594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584594u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5845a4u; rt_dispatch(c);
L_5845a4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_85c870(c);
}
void f_5845d4(Cpu *restrict c) {
    FN_ENTER(0x5845d4u);
L_5845d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5845e0u; f_584408(c);
    c->r[0] = 0x14b82c4u;
    { uint32_t ea = 0x5845ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5845ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_584604(Cpu *restrict c) {
    FN_ENTER(0x584604u);
L_584604:;
    __attribute__((musttail)) return f_85c9c8(c);
}
void f_584608(Cpu *restrict c) {
    FN_ENTER(0x584608u);
L_584608:;
    __attribute__((musttail)) return f_85c9cc(c);
}
void f_58460c(Cpu *restrict c) {
    FN_ENTER(0x58460cu);
L_58460c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_584618(Cpu *restrict c) {
    FN_ENTER(0x584618u);
L_584618:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x70u;
    c->r[4] = c->r[0];
    c->r[14] = 0x584628u; f_85ca7c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x584630u; f_58468c(c);
    c->r[5] = c->r[13] + 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x58463cu; f_770688(c);
    c->r[0] = 0x14b8268u;
    c->r[1] = 0x4u;
    c->r[3] = c->r[5];
    { uint32_t ea = 0x584650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b476cu;
    { uint32_t ea = 0x584668u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x58466cu; f_85ca84(c);
    c->r[1] = c->r[4] + 0x130u;
    c->r[14] = 0x584674u; f_8a64b8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x58467cu; f_770710(c);
    c->r[13] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58468c(Cpu *restrict c) {
    FN_ENTER(0x58468cu);
L_58468c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x74u;
    c->r[6] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x5846a4u; f_770688(c);
    c->r[0] = 0x14b81f4u;
    c->r[10] = 0x20u;
    c->r[1] = 0x0u;
    c->r[3] = c->r[6];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x5846c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b4704u;
    { uint32_t ea = 0x5846d4u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5846d8u; f_85ca84(c);
    c->r[1] = c->r[4] + 0xa0u;
    c->r[11] = c->r[4] + 0xc4u;
    c->r[9] = c->r[4] + 0x154u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x160u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x584700u; f_770710(c);
    c->r[5] = c->r[13] + 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x58470cu; f_770688(c);
    c->r[0] = 0x14b8198u;
    c->r[1] = 0x1u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x584724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14b8190u;
    { uint32_t ea = 0x584730u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[14] = 0x584738u; f_85ca84(c);
    c->r[1] = c->r[4] + 0xe8u;
    c->r[7] = c->r[0];
    c->r[14] = 0x584744u; f_7bb87c(c);
    c->r[1] = c->r[4] + 0x9cu;
    c->r[0] = c->r[7];
    c->r[14] = 0x584750u; f_7bc0e8(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x584758u; f_7bc490(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x584760u; f_7bc0f4(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x584768u; f_770710(c);
    c->r[5] = c->r[13] + 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x584774u; f_770688(c);
    c->r[0] = 0x14b8134u;
    c->r[1] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x584790u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x584794u; f_85ca84(c);
    c->r[1] = c->r[11];
    c->r[2] = 0x0u;
    c->r[3] = 0xdu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x5847a8u; f_7b9d88(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5847b0u; f_770710(c);
    c->r[5] = c->r[13] + 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5847bcu; f_770688(c);
    c->r[0] = 0x14b80f0u;
    c->r[1] = 0x3u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x5847d8u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5847dcu; f_85ca84(c);
    c->r[1] = c->r[4] + 0x10cu;
    c->r[14] = 0x5847e4u; f_77e938(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5847ecu; f_770710(c);
    c->r[5] = c->r[13] + 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5847f8u; f_770688(c);
    c->r[0] = 0x14b80b8u;
    c->r[1] = 0x5u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = 0x584814u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x584818u; f_85ca84(c);
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x584824u; f_770710(c);
    c->r[13] = c->r[13] + 0x74u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_584848(Cpu *restrict c) {
    FN_ENTER(0x584848u);
L_584848:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14b4544u;
    c->r[1] = 0x14b4518u;
    c->v.s[6] = 0x0u;
    c->v.s[4] = LD32(c->r[4] + 340u);
    { uint32_t ea = 0x584868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x58486cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 56u);
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[6]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[7]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    ST32(c->r[4] + 340u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_584ac4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5848a4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5848f4u: goto L_5848f4; case 0x584900u: goto L_584900; case 0x58490cu: goto L_58490c; case 0x584918u: goto L_584918; case 0x584928u: goto L_584928; case 0x584934u: goto L_584934; case 0x584940u: goto L_584940; case 0x58494cu: goto L_58494c; case 0x584958u: goto L_584958; case 0x584964u: goto L_584964; case 0x584970u: goto L_584970; case 0x58497cu: goto L_58497c; case 0x5849acu: goto L_5849ac; case 0x5849b8u: goto L_5849b8; case 0x5849c4u: goto L_5849c4; case 0x5849dcu: goto L_5849dc; case 0x5849e8u: goto L_5849e8; case 0x5849f4u: goto L_5849f4; case 0x584a00u: goto L_584a00; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5848f4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5848fcu; f_584af0(c);
    goto L_584ac4;
L_584900:;
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    goto L_584920;
L_58490c:;
    c->r[0] = 0x2u;
    c->r[1] = 0x2u;
    goto L_584920;
L_584918:;
    c->r[0] = 0x3u;
    c->r[1] = 0x3u;
L_584920:;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    goto L_584980;
L_584928:;
    c->r[0] = c->r[4];
    c->r[14] = 0x584930u; f_585bc4(c);
    goto L_584ac4;
L_584934:;
    c->r[0] = c->r[4];
    c->r[14] = 0x58493cu; f_585f6c(c);
    goto L_584ac4;
L_584940:;
    c->r[0] = c->r[4];
    c->r[14] = 0x584948u; f_58618c(c);
    goto L_584ac4;
L_58494c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x584954u; f_58629c(c);
    goto L_584ac4;
L_584958:;
    c->r[0] = c->r[4];
    c->r[14] = 0x584960u; f_586580(c);
    goto L_584ac4;
L_584964:;
    c->r[0] = c->r[4];
    c->r[14] = 0x58496cu; f_58669c(c);
    goto L_584ac4;
L_584970:;
    c->r[0] = c->r[4];
    c->r[14] = 0x584978u; f_5867b4(c);
    goto L_584ac4;
L_58497c:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_584980:;
    c->r[0] = c->r[4];
    c->r[14] = 0x584988u; f_588ee8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_584ac4; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
    goto L_584ac4;
L_5849ac:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5849b4u; f_5850b0(c);
    goto L_584ac4;
L_5849b8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5849c0u; f_585a54(c);
    goto L_584ac4;
L_5849c4:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_584a40; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5849d8u; f_585d10(c);
    goto L_584ac4;
L_5849dc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5849e4u; f_58607c(c);
    goto L_584ac4;
L_5849e8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5849f0u; f_5863f8(c);
    goto L_584ac4;
L_5849f4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5849fcu; f_5869a8(c);
    goto L_584ac4;
L_584a00:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_584a4c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_584ac4; }
    c->r[0] = 0x1u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b417cu;
    { uint32_t ea = 0x584a38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584a3cu; f_5f856c(c);
    goto L_584ac4;
L_584a40:;
    c->r[0] = c->r[4];
    c->r[14] = 0x584a48u; f_585e30(c);
    goto L_584ac4;
L_584a4c:;
    c->r[0] = 0x14b415cu;
    { uint32_t ea = 0x584a58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584a5cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_584ac4; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x88u;
    c->r[14] = 0x584a70u; f_581a78(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x7u);
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    c->r[2] = 0x584a8cu + 0x54u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[2] = c->r[2] + 0x4u; }
    (void)f_subs(c, c->r[0], 0x12u);
    c->v.s[0] = LD32(c->r[2]);
    ST32(c->r[4] + 340u, c->v.s[0]);
    if (COND_EQ) { goto L_584ac4; }
    c->r[0] = 0x14b40f4u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x584ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584ac4u; f_5f8534(c);
L_584ac4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_586a2c(c);
}
void f_584af0(Cpu *restrict c) {
    FN_ENTER(0x584af0u);
L_584af0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x14b4224u;
    { uint32_t ea = 0x584b04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584b08u; f_5a75b0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_584b94; }
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_HI) { goto L_584c30; }
    c->r[0] = 0x14b4034u;
    { uint32_t ea = 0x584b28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584b28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[3]; c->r[14] = 0x584b3cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_584d1c; }
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_584cdc; }
    c->r[0] = 0x0u;
L_584b58:;
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[3]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_584b58; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_LS) { goto L_584ce0; }
    goto L_584cf0;
L_584b94:;
    c->r[0] = 0x14b4188u;
    { uint32_t ea = 0x584ba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584ba4u; f_5ae744(c);
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_584c3c; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_HI) { goto L_584cbc; }
    c->r[0] = 0x14b3f98u;
    { uint32_t ea = 0x584bc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584bc4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[3]; c->r[14] = 0x584bd8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_584d70; }
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_584d30; }
    c->r[0] = 0x0u;
L_584bf4:;
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[3]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_584bf4; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_LS) { goto L_584d34; }
    goto L_584d44;
L_584c30:;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_NE) { goto L_584d1c; }
    goto L_584d24;
L_584c3c:;
    (void)f_subs(c, c->r[1], 0x2fu);
    if (COND_HI) { goto L_584cc8; }
    c->r[0] = 0x14b3f0cu;
    { uint32_t ea = 0x584c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584c50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xc0u;
    c->pc = c->r[3]; c->r[14] = 0x584c64u; rt_dispatch(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_584dc4; }
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_584d84; }
    c->r[0] = 0x0u;
L_584c80:;
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[5] + c->r[2]; ST16(ea, c->r[3]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_584c80; }
    (void)f_subs(c, c->r[1], 0x2fu);
    if (COND_LS) { goto L_584d88; }
    goto L_584d98;
L_584cbc:;
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_NE) { goto L_584d70; }
    goto L_584d78;
L_584cc8:;
    (void)f_subs(c, c->r[1], 0x30u);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_584dc4; }
    goto L_584dd4;
L_584cdc:;
    c->r[1] = 0x0u;
L_584ce0:;
    c->r[2] = 0x40u;
    c->r[0] = c->r[4] + (c->r[1] << 2);
    c->r[1] = c->r[2] - (c->r[1] << 2);
    c->r[14] = 0x584cf0u; f_15efdac(c);
L_584cf0:;
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_584d18; }
    c->r[0] = 0x14b3e54u;
    { uint32_t ea = 0x584d08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584d08u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x584d18u; rt_dispatch(c);
L_584d18:;
    { uint32_t ea = c->r[8] + 0x5cu; ST32(ea, c->r[4]); }
L_584d1c:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[8] + 0x60u; ST32(ea, c->r[0]); }
L_584d24:;
    c->r[1] = 0x4u;
    c->r[0] = 0x1u;
    goto L_584dd4;
L_584d30:;
    c->r[1] = 0x0u;
L_584d34:;
    c->r[2] = 0x40u;
    c->r[0] = c->r[4] + (c->r[1] << 2);
    c->r[1] = c->r[2] - (c->r[1] << 2);
    c->r[14] = 0x584d44u; f_15efdac(c);
L_584d44:;
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_584d6c; }
    c->r[0] = 0x14b3e00u;
    { uint32_t ea = 0x584d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584d5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x584d6cu; rt_dispatch(c);
L_584d6c:;
    { uint32_t ea = c->r[8] + 0x5cu; ST32(ea, c->r[4]); }
L_584d70:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[8] + 0x60u; ST32(ea, c->r[0]); }
L_584d78:;
    c->r[1] = 0x5u;
    c->r[0] = 0x2u;
    goto L_584dd4;
L_584d84:;
    c->r[1] = 0x0u;
L_584d88:;
    c->r[2] = 0xc0u;
    c->r[0] = c->r[4] + (c->r[1] << 2);
    c->r[1] = c->r[2] - (c->r[1] << 2);
    c->r[14] = 0x584d98u; f_15efdac(c);
L_584d98:;
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_584dc0; }
    c->r[0] = 0x14b3dacu;
    { uint32_t ea = 0x584db0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584db0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x584dc0u; rt_dispatch(c);
L_584dc0:;
    { uint32_t ea = c->r[8] + 0x5cu; ST32(ea, c->r[4]); }
L_584dc4:;
    c->r[0] = 0x30u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_584dd4:;
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x4u;
    c->r[14] = 0x584de8u; f_85cb3c(c);
    c->r[0] = c->r[0] + 0x50u;
    c->r[14] = 0x584df0u; f_8a2580(c);
    c->r[0] = 0x14b3f88u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x584e00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x965u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x961u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x964u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x960u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0x989u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x985u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x988u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x984u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0xd1du; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0xd1cu; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[0] + 0xc11u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xc0du; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xc09u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xc05u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xc01u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0xc10u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0xc0cu; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0xc08u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0xc04u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0xc00u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[1] = c->r[8] + 0x1a0u;
    c->r[14] = 0x584ed0u; f_723030(c);
    c->r[0] = 0x14b79f0u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x584ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14b3e40u;
    { uint32_t ea = 0x584ee8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_584ee4:;
    { uint32_t ea = c->r[6] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584ef0u; f_5b2174(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_584f0c; }
    c->r[0] = (c->r[5] >> 5);
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | sh_lsl(c->r[4], c->r[5]);
    { uint32_t ea = c->r[0] + 0x1d0u; ST32(ea, c->r[1]); }
L_584f0c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x12u);
    if (COND_NE) { goto L_584ee4; }
    c->r[0] = 0x14b79a8u;
    c->r[5] = 0x0u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x584f2cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x14b3df4u;
    { uint32_t ea = 0x584f34u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_584f30:;
    { uint32_t ea = c->r[6] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584f3cu; f_5b2174(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_584f58; }
    c->r[0] = (c->r[5] >> 5);
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | sh_lsl(c->r[4], c->r[5]);
    { uint32_t ea = c->r[0] + 0x1d4u; ST32(ea, c->r[1]); }
L_584f58:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x11u);
    if (COND_NE) { goto L_584f30; }
    c->r[0] = c->r[8];
    c->r[14] = 0x584f6cu; f_58e214(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x584f74u; f_588ab4(c);
    c->r[0] = 0x14b3e08u;
    { uint32_t ea = 0x584f80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584f84u; f_723504(c);
    { uint32_t ea = c->r[8] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x584f90u; f_588d40(c);
    c->r[0] = 0x14b7014u;
    { uint32_t ea = 0x584f9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584fa0u; f_5f18b8(c);
    c->r[0] = 0x14b3d78u;
    c->r[5] = c->r[8] + 0x88u;
    { uint32_t ea = 0x584fb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_585000; }
    c->r[0] = c->r[8];
    c->r[14] = 0x584fc4u; f_5874e0(c);
    c->r[0] = 0x14b3d58u;
    { uint32_t ea = 0x584fd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_EQ) { goto L_585000; }
    c->r[14] = 0x584fe0u; f_5a75b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585000; }
    c->r[0] = 0x14b3d34u;
    { uint32_t ea = 0x584ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x584ff8u; f_5ae744(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_585010; }
L_585000:;
    c->r[0] = 0x14b3dd4u;
    { uint32_t ea = 0x58500cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585010u; f_5c7234(c);
L_585010:;
    c->r[0] = 0x14b580cu;
    { uint32_t ea = 0x58501cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585020u; f_39e26c(c);
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x58502cu; f_581a78(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x7u);
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[1]); }
    c->r[2] = 0x585044u + 0x64u;
    { uint32_t ea = c->r[8] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x198u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[2] = c->r[2] + 0x4u; }
    c->v.s[0] = LD32(c->r[2]);
    ST32(c->r[8] + 340u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5850b0(Cpu *restrict c) {
    FN_ENTER(0x5850b0u);
L_5850b0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_585720; }
    c->r[0] = 0x14b423cu;
    c->r[3] = 0x6c34u;
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = 0x5850e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x6bfcu;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xf0u;
    c->r[10] = c->r[2] | c->r[0];
    c->r[2] = 0x5850fcu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x58511cu: goto L_58511c; case 0x585230u: goto L_585230; case 0x585260u: goto L_585260; case 0x585350u: goto L_585350; case 0x585388u: goto L_585388; case 0x5853ccu: goto L_5853cc; case 0x58547cu: goto L_58547c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_58511c:;
    c->r[5] = c->r[4] + 0xa0u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x585138u; f_74edec(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x585144u; f_74ecc0(c);
    c->r[0] = 0x14b3c84u;
    c->r[5] = c->r[4] + 0xc4u;
    c->r[2] = 0xau;
    c->r[3] = 0xau;
    { uint32_t ea = 0x58515cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb16u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x65u);
    c->r[0] = c->r[5];
    if (COND_CC) { c->r[1] = 0x64u; }
    if (COND_CS) { c->r[1] = 0xc8u; }
    c->r[14] = 0x58517cu; f_753a74(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x585188u; f_74ecc0(c);
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[5] = 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0xdbu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x1u;
    if (COND_LS) { goto L_585204; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x34u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_585204; }
    c->r[0] = c->r[1];
    c->r[14] = 0x5851e4u; f_38e958(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_585204; }
    c->r[0] = c->r[1];
    c->r[1] = 0x0u;
    c->r[2] = 0x288u;
    c->r[14] = 0x585204u; f_77edac(c);
L_585204:;
    c->r[2] = c->r[4] + 0x10cu;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = c->r[2];
    c->r[2] = 0x6u;
    c->r[14] = 0x585220u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[5]); }
    goto L_585720;
L_585230:;
    c->r[0] = 0x14b3978u;
    { uint32_t ea = 0x58523cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585240u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585720; }
    c->r[0] = 0x2u;
    c->r[6] = 0x0u;
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_585670;
L_585260:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_585720; }
    c->r[0] = c->r[4];
    c->r[14] = 0x585270u; f_58a6a4(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585320; }
    c->r[0] = 0x14b7640u;
    c->r[5] = 0x0u;
    c->r[6] = 0x34u;
    c->r[7] = 0xbafu;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x585298u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x14b7638u;
    { uint32_t ea = 0x5852a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + 0x2u;
L_5852a0:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] * c->r[6] + c->r[0]; c->r[0] = r; }
    c->r[14] = 0x5852acu; f_38e920(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585310; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[7]); }
    if (COND_EQ) { goto L_585310; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[9];
L_5852d0:;
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_5852f0; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[3] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_5852d0; }
    goto L_585310;
L_5852f0:;
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 31);
    c->r[0] = c->r[1] + (c->r[0] >> 27);
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x188u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | sh_lsl(c->r[11], c->r[1]);
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[1]); }
L_585310:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_5852a0; }
L_585320:;
    c->r[0] = 0x3u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0x585334u; f_74ecc0(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x585348u; f_74f260(c);
    c->r[6] = 0x0u;
    goto L_585720;
L_585350:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x58535cu; f_85cba0(c);
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5854c8; }
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x585374u; f_7b9d10(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_585720; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    goto L_585718;
L_585388:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5854fc; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] & 0x2000u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5855e4; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x0u;
L_5853ac:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_5855e0; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[3] = c->r[3] + 0x34u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_CC) { goto L_5853ac; }
    goto L_5855e4;
L_5853cc:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_585540; }
    c->r[9] = c->r[4] + 0xc4u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5855a0; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[14] = 0x5853ecu; f_7530b8(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_585700; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[8] = 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0xdbu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { goto L_585460; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x34u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585460; }
    c->r[14] = 0x585448u; f_38e958(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585460; }
    c->r[1] = 0x0u;
    c->r[2] = 0x288u;
    c->r[14] = 0x58545cu; f_77edac(c);
    c->r[8] = c->r[0];
L_585460:;
    c->r[7] = c->r[4] + 0x10cu;
    c->r[1] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[2] = 0x6u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[7];
    c->r[14] = 0x585478u; f_74edec(c);
    goto L_585704;
L_58547c:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[4] + 0x9cu;
    c->r[1] = c->r[10];
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x58549cu; f_74fc94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_58557c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_585720; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5854b4u; f_58a7cc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    c->r[14] = 0x5854c0u; f_74f260(c);
    c->r[6] = 0x1u;
    goto L_585720;
L_5854c8:;
    c->r[1] = 0x1u;
    c->r[14] = 0x5854d0u; f_7b9d10(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_585720; }
    c->r[0] = 0x4u;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0x5854f8u; f_74ecc0(c);
    goto L_585720;
L_5854fc:;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xadu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xaeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[1] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_585720; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[6] = 0x0u;
    c->r[1] = 0x4u;
    if (COND_NE) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4] + 0xb0u; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0xadu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_585670;
L_585540:;
    c->r[0] = 0x4u;
    c->r[1] = 0x2u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x585558u; f_74f260(c);
    c->r[0] = c->r[4] + 0xa0u;
    c->r[1] = 0x0u;
    c->r[14] = 0x585564u; f_74ecc0(c);
    c->r[0] = c->r[4] + 0xc4u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST16(ea, c->r[6]); }
    c->r[14] = 0x585578u; f_74ecc0(c);
    goto L_585718;
L_58557c:;
    c->r[0] = 0x4u;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0x585594u; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_585670;
L_5855a0:;
    { uint32_t ea = c->r[4] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[6] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[6], 0x96u);
    if (COND_CC) { goto L_585678; }
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    goto L_585670;
L_5855e0:;
    c->r[0] = 0x0u;
L_5855e4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_585604; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585720; }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[1] = c->r[10];
    c->r[14] = 0x585600u; f_74ee98(c);
    goto L_585720;
L_585604:;
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585668; }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xadu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaeu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[5] = 0x1u;
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x5u;
    c->r[0] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0x58563cu; f_74ecc0(c);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_585660; }
    c->r[0] = c->r[4] + 0xc4u;
    c->r[1] = 0x0u;
    c->r[14] = 0x585660u; f_74ecc0(c);
L_585660:;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[5]); }
L_585668:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_585670:;
    c->r[14] = 0x585674u; f_74f260(c);
    goto L_585720;
L_585678:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x34u;
    { uint32_t r = c->r[6] * c->r[0]; c->r[1] = r; }
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_5858a4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_585960; }
    c->r[0] = 0x34u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[5]; c->r[8] = r; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD16(ea); c->r[8] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_585960; }
    c->r[0] = 0x14b3514u;
    { uint32_t ea = 0x5856bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5856c0u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585960; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5859f4; }
    c->r[0] = 0x14b36fcu;
    c->r[1] = c->r[8];
    { uint32_t ea = 0x5856e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5856e8u; f_5c6b64(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1fu;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_585968;
L_585700:;
    c->r[7] = c->r[4] + 0x10cu;
L_585704:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[10];
    c->r[14] = 0x585710u; f_74ee98(c);
    { uint32_t r = c->r[0] | c->r[9]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_585720; }
L_585718:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); }
L_585720:;
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585848; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_58574c; }
    c->r[0] = 0x14b3694u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x58574cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_585760;
L_58574c:;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_585768; }
    c->r[0] = 0x14b367cu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x585764u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_585760:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585768u; f_5c6e50(c);
L_585768:;
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585848; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58583c; }
    c->r[0] = 0x14b3428u;
    c->r[8] = 0x967fu;
    c->r[6] = 0x0u;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x980000u;
    { uint32_t ea = 0x5857a4u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x14b3424u;
    { uint32_t ea = 0x5857acu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_5857a8:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_5857f4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_585824; }
    c->r[10] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x5857d0u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585824; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_585824; }
    { uint32_t ea = c->r[10] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[5]; c->r[5] = r; }
    goto L_585824;
L_5857f4:;
    c->r[0] = c->r[0] + c->r[6];
    c->r[1] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585804u; f_33f03c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58581c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x585818u; rt_dispatch(c);
    c->r[5] = c->r[0] + c->r[5];
L_58581c:;
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_GE) { c->r[5] = c->r[8]; }
L_585824:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x34u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5857a8; }
    goto L_585840;
L_58583c:;
    c->r[5] = 0x0u;
L_585840:;
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
L_585848:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_585884; }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_58589c; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LS) { c->r[0] = c->r[4]; }
    if (COND_LS) { c->r[14] = 0x585870u; f_58a6a4(c); }
    c->r[0] = c->r[4];
    c->r[14] = 0x585878u; f_58a7cc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    c->r[14] = 0x585884u; f_74f260(c);
L_585884:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_58589c:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5858a4:;
    { uint32_t r = c->r[6] * c->r[0] + c->r[5]; c->r[0] = r; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[2] = c->r[0] + 0x8u;
    c->r[0] = 0x14b3ad4u;
    { uint32_t ea = 0x5858c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5858c4u; f_343160(c);
    c->r[1] = 0xffffu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_585960; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1fu;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    c->r[14] = 0x5858e0u; f_74f260(c);
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[6] = 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0xdbu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { goto L_585948; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x34u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585948; }
    c->r[14] = 0x585930u; f_38e958(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_585948; }
    c->r[1] = 0x0u;
    c->r[2] = 0x288u;
    c->r[14] = 0x585944u; f_77edac(c);
    c->r[6] = c->r[0];
L_585948:;
    c->r[0] = c->r[4] + 0x10cu;
    c->r[1] = (uint32_t)(uint8_t)(c->r[6]);
    c->r[2] = 0x6u;
    c->r[3] = 0x1u;
    c->r[14] = 0x58595cu; f_74edec(c);
    goto L_58596c;
L_585960:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
L_585968:;
    c->r[14] = 0x58596cu; f_74f260(c);
L_58596c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5859a8; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
L_58598c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_585720; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x34u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_58598c; }
L_5859a8:;
    c->r[0] = 0x4u;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xaeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4] + 0xb0u; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0xadu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xa0u;
    c->r[14] = 0x5859dcu; f_74ecc0(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST16(ea, c->r[6]); }
    c->r[14] = 0x5859f0u; f_74ecc0(c);
    goto L_585720;
L_5859f4:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0x585a00u; f_58a2dc(c);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { goto L_58596c; }
    c->r[0] = 0x34u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); } }
    goto L_58596c;
}
void f_585a54(Cpu *restrict c) {
    FN_ENTER(0x585a54u);
L_585a54:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14b32c0u;
    { uint32_t ea = 0x585a68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_585a88; }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    goto L_585b98;
L_585a88:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x88u;
    c->r[14] = 0x585a94u; f_581a78(c);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x585aacu; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x585ab8u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x585ac4u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x585ad0u; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x585adcu; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x585ae4u; f_58a950(c);
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_585afc; }
    c->r[0] = c->r[4];
    c->r[14] = 0x585af8u; f_58aca4(c);
    goto L_585b04;
L_585afc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x585b04u; f_58af0c(c);
L_585b04:;
    c->r[0] = c->r[4];
    c->r[14] = 0x585b0cu; f_58b124(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x585b18u; f_85cb3c(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x14b3200u;
    { uint32_t ea = 0x585b28u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585b2cu; f_5a5364(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585b38u; f_5a5324(c);
    c->r[0] = c->r[6] - c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[5] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_585b88; }
    c->r[0] = 0x14b31c4u;
    c->r[1] = 0x1740u;
    { uint32_t ea = 0x585b64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xacu; ST8(ea, c->r[1]); }
    c->r[1] = 0x1742u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14b31f4u;
    { uint32_t ea = 0x585b80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585b84u; f_5c2f60(c);
    { uint32_t ea = c->r[5] + 0xb0u; ST32(ea, c->r[0]); }
L_585b88:;
    c->r[0] = c->r[4];
    c->r[14] = 0x585b90u; f_58b4ec(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x585b98u; f_58b230(c);
L_585b98:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x585ba4u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_585bc4(Cpu *restrict c) {
    FN_ENTER(0x585bc4u);
L_585bc4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x585bd4u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_585c88; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_585c64; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585d00; }
    c->r[0] = 0x1u;
    c->r[5] = c->r[4] + 0x130u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x585c1cu; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x8fu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = 0x2u;
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x14b31a4u;
    if (COND_EQ) { c->r[4] = 0x1u; }
    { uint32_t ea = 0x585c3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585c40u; f_5c6f80(c);
    c->r[0] = c->r[0] + c->r[4];
    c->r[2] = 0x3u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0x585c54u; f_74ee34(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_585c64:;
    c->r[0] = 0x14b2f44u;
    { uint32_t ea = 0x585c70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585c74u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585d00; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_585c88:;
    c->r[0] = 0x14b3684u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x585c98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_585cdc; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x585cbcu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    goto L_585ce8;
L_585cdc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x585ce8u; f_74f260(c);
L_585ce8:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_585d00:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_585d10(Cpu *restrict c) {
    FN_ENTER(0x585d10u);
L_585d10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x585d20u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_585dac; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_585d88; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585e24; }
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x130u;
    c->r[0] = c->r[4];
    c->r[14] = 0x585d68u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x3u;
    c->r[14] = 0x585d78u; f_74ee34(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_585d88:;
    c->r[0] = 0x14b2e20u;
    { uint32_t ea = 0x585d94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585d98u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_585dac:;
    c->r[0] = 0x14b3560u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x585dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_585e00; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x585de0u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_585e0c;
L_585e00:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x585e0cu; f_74f260(c);
L_585e0c:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_585e24:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_585e30(Cpu *restrict c) {
    FN_ENTER(0x585e30u);
L_585e30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x585e40u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_585ee4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_585ec0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_585f5c; }
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x130u;
    c->r[0] = c->r[4];
    c->r[14] = 0x585e88u; f_74edec(c);
    c->r[0] = 0x14b2f48u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x585e98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585e9cu; f_5c6f80(c);
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = 0x3u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x585eb0u; f_74ee34(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_585ec0:;
    c->r[0] = 0x14b2ce8u;
    { uint32_t ea = 0x585eccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585ed0u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_585ee4:;
    c->r[0] = 0x14b3428u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x585ef4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_585f38; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x585f18u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_585f44;
L_585f38:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x585f44u; f_74f260(c);
L_585f44:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_585f5c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_585f6c(Cpu *restrict c) {
    FN_ENTER(0x585f6cu);
L_585f6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x585f7cu; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_585ff8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_585fd4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586070; }
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x130u;
    c->r[0] = c->r[4];
    c->r[14] = 0x585fc4u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_585fd4:;
    c->r[0] = 0x14b2bd4u;
    { uint32_t ea = 0x585fe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x585fe4u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_585ff8:;
    c->r[0] = 0x14b3314u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x586008u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58604c; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x58602cu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_586058;
L_58604c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x586058u; f_74f260(c);
L_586058:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_586070:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58607c(Cpu *restrict c) {
    FN_ENTER(0x58607cu);
L_58607c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x58608cu; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_586108; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5860e4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586180; }
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x130u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5860d4u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_5860e4:;
    c->r[0] = 0x14b2ac4u;
    { uint32_t ea = 0x5860f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5860f4u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_586108:;
    c->r[0] = 0x14b3204u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x586118u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58615c; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x58613cu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_586168;
L_58615c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x586168u; f_74f260(c);
L_586168:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_586180:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58618c(Cpu *restrict c) {
    FN_ENTER(0x58618cu);
L_58618c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x58619cu; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_586218; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5861f4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586290; }
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x130u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5861e4u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_5861f4:;
    c->r[0] = 0x14b29b4u;
    { uint32_t ea = 0x586200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586204u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_586218:;
    c->r[0] = 0x14b30f4u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x586228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58626c; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x58624cu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_586278;
L_58626c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x586278u; f_74f260(c);
L_586278:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_586290:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58629c(Cpu *restrict c) {
    FN_ENTER(0x58629cu);
L_58629c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x5862b0u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_58636c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_58630c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5863e4; }
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x130u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5862f8u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_58630c:;
    c->r[0] = 0x14b289cu;
    { uint32_t ea = 0x586318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58631cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5863e4; }
    c->r[0] = 0x2u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x586338u; f_74f260(c);
    c->r[0] = 0x14b2890u;
    c->r[1] = 0x0u;
    c->r[2] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x586350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[2] = 0xeu;
    c->r[14] = 0x586364u; f_6e3478(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_58636c:;
    c->r[0] = 0x14b2fa0u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x58637cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5863c0; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x5863a0u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_5863cc; }
    goto L_5863e4;
L_5863c0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x5863ccu; f_74f260(c);
L_5863cc:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_5863e4:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5863f8(Cpu *restrict c) {
    FN_ENTER(0x5863f8u);
L_5863f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x586408u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_586568; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x58642cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x586440u: goto L_586440; case 0x58644cu: goto L_58644c; case 0x58647cu: goto L_58647c; case 0x586500u: goto L_586500; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_586440:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); }
L_58644c:;
    c->r[0] = 0x14b275cu;
    { uint32_t ea = 0x586458u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58645cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586568; }
    c->r[0] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_74f260(c);
L_58647c:;
    c->r[0] = 0x14b2e90u;
    c->r[1] = 0x6bfdu;
    { uint32_t ea = 0x58648cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5864a8; }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_586568; }
L_5864a8:;
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x5864c4u; f_74f260(c);
    { uint32_t ea = c->r[4] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_586554; }
    c->r[0] = 0x3u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b26bcu;
    { uint32_t ea = 0x5864f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5f856c(c);
L_586500:;
    c->r[0] = 0x14b26a8u;
    { uint32_t ea = 0x58650cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586510u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x1u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); }
    c->r[0] = 0x14b2674u;
    { uint32_t ea = 0x586540u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586544u; f_5f8534(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42f00000u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_586554:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
L_586568:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_586580(Cpu *restrict c) {
    FN_ENTER(0x586580u);
L_586580:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x586590u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_586618; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5865e8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586690; }
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x130u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5865d8u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74ecc0(c);
L_5865e8:;
    c->r[0] = 0x14b25c0u;
    { uint32_t ea = 0x5865f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5865f8u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586690; }
    c->r[0] = 0x2u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74f260(c);
L_586618:;
    c->r[0] = 0x14b2cf4u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x586628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58666c; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf0u;
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x130u;
    c->r[14] = 0x58664cu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); } }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_586678;
L_58666c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[14] = 0x586678u; f_74f260(c);
L_586678:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[2]); }
L_586690:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58669c(Cpu *restrict c) {
    FN_ENTER(0x58669cu);
L_58669c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5866a8u; f_58b904(c);
    c->r[0] = 0x14b58fcu;
    { uint32_t ea = 0x5866b4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5866b8u; f_5ea6e8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x19du; ST8(ea, c->r[0]); }
    c->r[0] = 0x14b26b0u;
    { uint32_t ea = 0x5866d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5866d8:;
    c->r[3] = (c->r[1] >> 5);
    c->r[5] = c->r[1] & 0x1fu;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xc00u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x19eu; ST8(ea, c->r[2]); } }
    (void)f_subs(c, c->r[1], 0x88u);
    if (COND_NE) { goto L_5866d8; }
    c->r[14] = 0x586700u; f_724e58(c);
    c->r[0] = 0x14b267cu;
    { uint32_t ea = 0x58670cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586710u; f_725938(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586718u; f_725a9c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x586720u; f_58bcb8(c);
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x88u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    c->r[14] = 0x586730u; f_581a78(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x7u);
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    c->r[2] = 0x586748u + 0x60u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[1]); }
    if (COND_CC) { c->r[2] = c->r[2] + 0x4u; }
    (void)f_subs(c, c->r[0], 0x12u);
    c->v.s[0] = LD32(c->r[2]);
    ST32(c->r[4] + 340u, c->v.s[0]);
    if (COND_EQ) { goto L_586780; }
    c->r[0] = 0x14b2438u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x58677cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586780u; f_5f8534(c);
L_586780:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x58678cu; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5867b4(Cpu *restrict c) {
    FN_ENTER(0x5867b4u);
L_5867b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x5867c8u; f_85cb3c(c);
    c->v.s[0] = LD32(c->r[4] + 340u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[0] + 84u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_586988; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5867ecu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x586800u: goto L_586800; case 0x586808u: goto L_586808; case 0x586880u: goto L_586880; case 0x586908u: goto L_586908; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_586800:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
L_586808:;
    c->r[0] = 0x14b23a0u;
    { uint32_t ea = 0x586814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586818u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586988; }
    c->r[0] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x586834u; f_85cb3c(c);
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_586960; }
    c->r[0] = 0x14b237cu;
    c->r[1] = 0x0u;
    c->r[2] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x586864u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[2] = 0xeu;
    c->r[14] = 0x586878u; f_6e3478(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_586880:;
    c->r[0] = 0x14b2a8cu;
    c->r[1] = 0x6bfdu;
    { uint32_t ea = 0x586890u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5868ac; }
    c->v.s[0] = LD32(c->r[4] + 340u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_586988; }
L_5868ac:;
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x5868c8u; f_74f260(c);
    { uint32_t ea = c->r[4] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_586974; }
    c->r[0] = 0x3u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b22b8u;
    { uint32_t ea = 0x5868fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5f856c(c);
L_586908:;
    c->r[0] = 0x14b22a0u;
    { uint32_t ea = 0x586914u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x586918u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586988; }
    c->r[0] = 0x1u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); }
    c->r[0] = 0x14b226cu;
    { uint32_t ea = 0x586948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58694cu; f_5f8534(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42f00000u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_586960:;
    c->r[0] = 0x4u;
    c->r[1] = 0x4u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_74f260(c);
L_586974:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
L_586988:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5869a8(Cpu *restrict c) {
    FN_ENTER(0x5869a8u);
L_5869a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5869c4u; f_58ce60(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5869ccu; f_58d2c0(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x54u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5869e0u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x5869ecu; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x5869f8u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x586a04u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586a10u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x586a1cu; f_85cbc4(c);
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_586a2c(Cpu *restrict c) {
    FN_ENTER(0x586a2cu);
L_586a2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_HI) { goto L_586bdc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x586a50u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x586a94u: goto L_586a94; case 0x586aa4u: goto L_586aa4; case 0x586ab4u: goto L_586ab4; case 0x586ac4u: goto L_586ac4; case 0x586ad4u: goto L_586ad4; case 0x586ae0u: goto L_586ae0; case 0x586aecu: goto L_586aec; case 0x586b04u: goto L_586b04; case 0x586b24u: goto L_586b24; case 0x586b44u: goto L_586b44; case 0x586b64u: goto L_586b64; case 0x586b84u: goto L_586b84; case 0x586bb0u: goto L_586bb0; case 0x586bdcu: goto L_586bdc; case 0x586be8u: goto L_586be8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_586a94:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x586aa0u; f_586c6c(c);
    goto L_586bdc;
L_586aa4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x586ab0u; f_586c6c(c);
    goto L_586bdc;
L_586ab4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x586ac0u; f_586c6c(c);
    goto L_586bdc;
L_586ac4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x586ad0u; f_586c6c(c);
    goto L_586bdc;
L_586ad4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x586adcu; f_58701c(c);
    goto L_586bdc;
L_586ae0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x586ae8u; f_5872d0(c);
    goto L_586bdc;
L_586aec:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_586c14; }
    c->r[0] = c->r[4];
    c->r[14] = 0x586b00u; f_5873cc(c);
    goto L_586bdc;
L_586b04:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586bdc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586b1cu; f_85cbe8(c);
    c->r[1] = 0x3u;
    goto L_586bcc;
L_586b24:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586bdc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586b3cu; f_85cbe8(c);
    c->r[1] = 0x5u;
    goto L_586bcc;
L_586b44:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586bdc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586b5cu; f_85cbe8(c);
    c->r[1] = 0x6u;
    goto L_586bcc;
L_586b64:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586bdc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586b7cu; f_85cbe8(c);
    c->r[1] = 0x7u;
    goto L_586bcc;
L_586b84:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_586c20; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586bdc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586ba4u; f_85cbe8(c);
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8u;
    goto L_586bd0;
L_586bb0:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586bdc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586bc8u; f_85cbe8(c);
    c->r[1] = 0x9u;
L_586bcc:;
    c->r[2] = 0x0u;
L_586bd0:;
    c->r[14] = 0x586bd4u; f_8a2c78(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_586bdc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_586be8:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_586c44; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586bdc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586c08u; f_85cbe8(c);
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xau;
    goto L_586bd0;
L_586c14:;
    c->r[0] = c->r[4];
    c->r[14] = 0x586c1cu; f_587454(c);
    goto L_586bdc;
L_586c20:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586c2cu; f_85cbe8(c);
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_586bdc; }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8u;
    goto L_586c64;
L_586c44:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x586c50u; f_85cbe8(c);
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_586bdc; }
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xau;
L_586c64:;
    c->r[14] = 0x586c68u; f_8a2c78(c);
    goto L_586bdc;
}
void f_586c6c(Cpu *restrict c) {
    FN_ENTER(0x586c6cu);
L_586c6c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_586d00; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_586ff8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x586ca0u; f_85cba0(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_HI) { goto L_586cb8; }
    c->r[0] = 0x12a38a8u;
    c->r[0] = 0x586cb8u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
L_586cb8:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[14] = 0x586cc4u; f_823a04(c);
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_HI) { goto L_586da8; }
    c->r[0] = (c->r[5] << 2);
    c->r[2] = 0x586cd8u + 0x8u;
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x586cf8u: goto L_586cf8; case 0x586dacu: goto L_586dac; case 0x586e24u: goto L_586e24; case 0x586e3cu: goto L_586e3c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_586cf8:;
    c->r[1] = 0x2u;
    goto L_586dac;
L_586d00:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { goto L_586fec; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x586d1cu; f_85cb3c(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_586f80; }
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_HI) { goto L_586d60; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x586d40u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x586d5cu: goto L_586d5c; case 0x586f08u: goto L_586f08; case 0x586f10u: goto L_586f10; case 0x586f18u: goto L_586f18; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_586d5c:;
    c->r[7] = c->r[4] + 0x5cu;
L_586d60:;
    c->r[2] = c->r[4] + 0x174u;
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[14] = 0x586d70u; f_823c08(c);
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_HI) { goto L_586f6c; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x586d84u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x586da0u: goto L_586da0; case 0x587000u: goto L_587000; case 0x587008u: goto L_587008; case 0x587010u: goto L_587010; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_586da0:;
    c->r[7] = c->r[4] + 0x5cu;
    goto L_586f2c;
L_586da8:;
    c->r[1] = 0x0u;
L_586dac:;
    c->r[0] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x586db8u; f_823a6c(c);
    c->r[0] = c->r[5] - 0x4u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_586ddc; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_586e54; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[4] + 0x5cu; }
    goto L_586de0;
L_586ddc:;
    c->r[1] = c->r[4] + 0x5cu;
L_586de0:;
    c->r[2] = c->r[4] + 0x174u;
    c->r[0] = c->r[6];
    c->r[14] = 0x586decu; f_823c08(c);
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_HI) { goto L_586ea8; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x586e00u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x586e1cu: goto L_586e1c; case 0x586ef0u: goto L_586ef0; case 0x586ef8u: goto L_586ef8; case 0x586f00u: goto L_586f00; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_586e1c:;
    c->r[7] = c->r[4] + 0x5cu;
    goto L_586e68;
L_586e24:;
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    c->r[14] = 0x586e34u; f_823a6c(c);
    c->r[7] = c->r[4] + 0x6cu;
    goto L_586e58;
L_586e3c:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x3u;
    c->r[14] = 0x586e4cu; f_823a6c(c);
    c->r[7] = c->r[4] + 0x74u;
    goto L_586e58;
L_586e54:;
    c->r[7] = c->r[4] + 0x64u;
L_586e58:;
    c->r[2] = c->r[4] + 0x174u;
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[14] = 0x586e68u; f_823c08(c);
L_586e68:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_586eac; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
L_586e80:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_586ea0; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_586e80; }
    goto L_586eac;
L_586ea0:;
    c->r[2] = 0x0u;
    goto L_586eac;
L_586ea8:;
    c->r[2] = 0x1u;
L_586eac:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[3] = 0x0u;
    c->r[14] = 0x586ebcu; f_824664(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x586ec8u; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x586ed4u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x586ee0u; f_5906e0(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_586ef0:;
    c->r[7] = c->r[4] + 0x64u;
    goto L_586e68;
L_586ef8:;
    c->r[7] = c->r[4] + 0x6cu;
    goto L_586e68;
L_586f00:;
    c->r[7] = c->r[4] + 0x74u;
    goto L_586e68;
L_586f08:;
    c->r[7] = c->r[4] + 0x64u;
    goto L_586f1c;
L_586f10:;
    c->r[7] = c->r[4] + 0x6cu;
    goto L_586f1c;
L_586f18:;
    c->r[7] = c->r[4] + 0x74u;
L_586f1c:;
    c->r[2] = c->r[4] + 0x174u;
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[14] = 0x586f2cu; f_823c08(c);
L_586f2c:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_586f70; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
L_586f44:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_586f64; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_586f44; }
    goto L_586f70;
L_586f64:;
    c->r[2] = 0x0u;
    goto L_586f70;
L_586f6c:;
    c->r[2] = 0x1u;
L_586f70:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[3] = 0x0u;
    c->r[14] = 0x586f80u; f_824664(c);
L_586f80:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_586fd4; }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x586f98u; f_824630(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x586fa4u; f_85cba0(c);
    c->r[6] = c->r[0];
    c->r[14] = 0x586facu; f_7bc0f4(c);
    c->r[7] = c->r[13];
    c->r[0] = c->r[7];
    c->r[14] = 0x586fb8u; f_7bb910(c);
    c->r[0] = c->r[4] + 0x16cu;
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x586fd0u; f_7bb938(c);
    goto L_586fec;
L_586fd4:;
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[14] = 0x586fe0u; f_824630(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x586fecu; f_85cbc4(c);
L_586fec:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x586ff8u; f_5906e0(c);
L_586ff8:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_587000:;
    c->r[7] = c->r[4] + 0x64u;
    goto L_586f2c;
L_587008:;
    c->r[7] = c->r[4] + 0x6cu;
    goto L_586f2c;
L_587010:;
    c->r[7] = c->r[4] + 0x74u;
    goto L_586f2c;
}
void f_58701c(Cpu *restrict c) {
    FN_ENTER(0x58701cu);
L_58701c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_587098; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5872c4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x58704cu; f_85cba0(c);
    c->r[1] = 0x3u;
    c->r[6] = c->r[0];
    c->r[14] = 0x587058u; f_823a04(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4] + 0xc4u;
    c->r[8] = 0x1u;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_587210; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_587074:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_58720c; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[1] = c->r[1] + 0x34u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_587074; }
    c->r[2] = 0x1u;
    goto L_587210;
L_587098:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x5870a8u; f_85cba0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0xdbu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { goto L_5871bc; }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5871bc; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x34u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[2] = r; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5871bc; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_5871bc; }
    c->r[2] = 0x34u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1fu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5871bc; }
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5871d4; }
    c->r[7] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x58713cu; f_85cbe8(c);
    c->r[6] = c->r[13] + 0x14u;
    c->r[8] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x58714cu; f_2daba4(c);
    c->r[1] = c->r[7];
    c->r[14] = 0x587154u; f_2dadf0(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x58715cu; f_2dadc4(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x587164u; f_2ddd48(c);
    c->r[1] = 0x6u;
    c->r[0] = 0x1u;
    c->r[2] = c->r[4] + 0x10cu;
    c->r[3] = 0x288u;
    c->r[7] = 0x0u;
    c->r[9] = 0x288u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x587190u; f_752988(c);
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x5871b0u; f_77f468(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x5871b8u; f_2dad24(c);
    goto L_5871d4;
L_5871bc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x5871c8u; f_85cc0c(c);
    c->r[0] = 0x11cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x119u; ST8(ea, c->r[6]); }
L_5871d4:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5872ac; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
L_5871ec:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_5872a8; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] + 0x34u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_5871ec; }
    goto L_5872ac;
L_58720c:;
    c->r[2] = 0x0u;
L_587210:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[1] = 0x6u;
    c->r[14] = 0x587220u; f_824664(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x58722cu; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x587238u; f_85cba0(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x587250u; f_7b9d88(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x58725cu; f_85cc0c(c);
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x14b209cu;
    { uint32_t ea = 0x587270u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1dcu;
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x66u;
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x587294u; f_77e65c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x58729cu; f_590aac(c);
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[8]); }
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5872a8:;
    c->r[2] = 0x0u;
L_5872ac:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x5872bcu; f_824664(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5872c4u; f_590aac(c);
L_5872c4:;
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5872d0(Cpu *restrict c) {
    FN_ENTER(0x5872d0u);
L_5872d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_587354; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58739c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x5872fcu; f_85cbe8(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[5] = c->r[0];
    c->r[6] = 0x0u;
    c->r[14] = 0x587310u; f_8a2c78(c);
    { uint32_t ea = c->r[4] + 0x8fu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x7u;
    { uint32_t ea = c->r[5] + 0x1c8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[5] = 0x1u;
    c->r[14] = 0x587338u; f_85e5bc(c);
    c->r[14] = 0x58733cu; f_85d464(c);
    c->r[0] = 0x5u;
    c->r[1] = 0x1u;
    c->r[14] = 0x587348u; f_85e794(c);
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_587354:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x587360u; f_85cb3c(c);
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58739c; }
    c->r[1] = 0x140u;
    { uint32_t ea = c->r[4] + 0x13du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x13eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[1] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_5873a4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5873b8; }
    c->r[1] = 0x0u;
    goto L_5873bc;
L_58739c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5873a4:;
    { uint32_t ea = c->r[4] + 0x8fu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5873b8; }
    c->r[1] = 0x1u;
    goto L_5873bc;
L_5873b8:;
    c->r[1] = 0x4u;
L_5873bc:;
    c->r[2] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a2c78(c);
}
void f_5873cc(Cpu *restrict c) {
    FN_ENTER(0x5873ccu);
L_5873cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_58740c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x5873f4u; f_85cbe8(c);
    c->r[1] = 0xbu;
    c->r[2] = 0x0u;
    c->r[14] = 0x587400u; f_8a2c78(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_587408:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_58740c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x587418u; f_85cb3c(c);
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_587408; }
    c->r[1] = 0x140u;
    { uint32_t ea = c->r[4] + 0x13du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x13eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[1] = r; }
    c->r[2] = 0xffffu;
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[1] = 0xbu; }
    if (COND_NE) { c->r[1] = 0xcu; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_8a2c78(c);
}
void f_587454(Cpu *restrict c) {
    FN_ENTER(0x587454u);
L_587454:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_587494; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x58747cu; f_85cbe8(c);
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0x587488u; f_8a2c78(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_587490:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_587494:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x5874a0u; f_85cb3c(c);
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_587490; }
    c->r[1] = 0x140u;
    { uint32_t ea = c->r[4] + 0x13du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x13eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[2]; c->r[1] = r; }
    c->r[2] = 0xffffu;
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[1] = 0x2u; }
    if (COND_EQ) { c->r[2] = 0x0u; }
    if (COND_NE) { c->r[1] = 0x4u; }
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_8a2c78(c);
}
void f_5874e0(Cpu *restrict c) {
    FN_ENTER(0x5874e0u);
L_5874e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[0] = 0x14b1824u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x587504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587508u; f_5a5ed0(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_587814; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_588648; }
    c->r[0] = 0x14b162cu;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x587530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587530u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x587544u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_587598; }
    c->r[1] = 0x0u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_587598:;
    c->r[0] = 0x8u;
    c->r[6] = c->r[4] + 0x88u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
    c->r[3] = 0x8u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x5875bcu; f_581d30(c);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    if (COND_EQ) { goto L_5876a0; }
    c->r[0] = 0x14b14ccu;
    { uint32_t ea = 0x587690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587690u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x5876a0u; rt_dispatch(c);
L_5876a0:;
    c->r[0] = 0x14b14a8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5876b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5876b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x5876c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58771c; }
    c->r[1] = 0x0u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_58771c:;
    c->r[0] = 0x8u;
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x587734u; f_58236c(c);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x22u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x26u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x36u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3eu; ST16(ea, c->r[1]); }
    c->r[0] = 0x14b135cu;
    { uint32_t ea = 0x587800u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587800u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x587810u; rt_dispatch(c);
    goto L_588648;
L_587814:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_588338; }
    c->r[0] = 0x14b14f8u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x587830u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587834u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_587d58; }
    c->r[0] = 0x14b1308u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x587854u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587854u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x587868u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5878bc; }
    c->r[1] = 0x0u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_5878bc:;
    c->r[0] = 0x8u;
    c->r[8] = c->r[4] + 0x88u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
    c->r[3] = 0x8u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x5878e0u; f_581d30(c);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    if (COND_EQ) { goto L_5879c4; }
    c->r[0] = 0x14b11a8u;
    { uint32_t ea = 0x5879b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5879b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x5879c4u; rt_dispatch(c);
L_5879c4:;
    c->r[0] = 0x14b1184u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x5879d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5879d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x5879ecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_587a40; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_587a40:;
    c->r[0] = 0x8u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x587a98u; f_581fec(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x14b1280u;
    { uint32_t ea = 0x587aa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587aacu; f_5a329c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_587b00; }
    c->r[0] = c->r[5];
    c->r[14] = 0x587ac8u; f_57c500(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_587b00; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_NE) { goto L_587aec; }
    c->r[0] = 0x1u;
L_587aec:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
    c->r[3] = c->r[7];
    c->r[14] = 0x587b00u; f_58211c(c);
L_587b00:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x22u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x26u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x36u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3eu; ST16(ea, c->r[1]); }
    if (COND_EQ) { goto L_587be4; }
    c->r[0] = 0x14b0f88u;
    { uint32_t ea = 0x587bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587bd4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x587be4u; rt_dispatch(c);
L_587be4:;
    c->r[0] = 0x14b0f60u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x587bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587bfcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x587c10u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_587c64; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_587c64:;
    c->r[0] = 0x8u;
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x587c7cu; f_58236c(c);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x42u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x46u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x52u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x56u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5eu; ST16(ea, c->r[1]); }
    c->r[0] = 0x14b0e14u;
    { uint32_t ea = 0x587d48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587d48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x587d58u; rt_dispatch(c);
L_587d58:;
    c->r[0] = 0x14b0decu;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x587d70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587d70u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xe0u;
    c->pc = c->r[3]; c->r[14] = 0x587d84u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_587db0; }
    c->r[0] = c->r[5];
    c->r[1] = 0xe0u;
    c->r[14] = 0x587d9cu; f_15efdac(c);
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    goto L_587db8;
L_587db0:;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
L_587db8:;
    c->r[0] = 0x38u;
    c->r[1] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[14] = 0x587dc8u; f_5828e8(c);
L_587dc8:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[2] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[2] + 0x60u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[6];
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[6], 0x60u);
    { uint32_t ea = c->r[1] + 0x62u; ST16(ea, c->r[0]); }
    if (COND_NE) { goto L_587dc8; }
    c->r[0] = 0x0u;
L_587dfc:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[2] + 0x60u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[1] + 0x60u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x62u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[0], 0x60u);
    { uint32_t ea = c->r[1] + 0x62u; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_587dfc; }
    c->r[0] = 0x14b0d24u;
    { uint32_t ea = 0x587e38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587e38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x587e48u; rt_dispatch(c);
    c->r[0] = 0x14b0ec8u;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x587e60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587e64u; f_5a2900(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_587fd8; }
    c->r[0] = 0x14b0cdcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x587e80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587e80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x587e94u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_587ee8; }
    c->r[1] = 0x0u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_587ee8:;
    c->r[0] = 0x8u;
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[14] = 0x587efcu; f_582c18(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    c->r[0] = 0x14b0b94u;
    { uint32_t ea = 0x587fc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587fc8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x587fd8u; rt_dispatch(c);
L_587fd8:;
    c->r[0] = 0x14b0d44u;
    { uint32_t ea = 0x587fe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x587fe8u; f_5abb3c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_588160; }
    c->r[0] = 0x14b0b54u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x588008u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588008u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x58801cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_588070; }
    c->r[1] = 0x0u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_588070:;
    c->r[0] = 0x8u;
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[14] = 0x588084u; f_582e1c(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x22u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x26u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x36u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3eu; ST16(ea, c->r[1]); }
    c->r[0] = 0x14b0a0cu;
    { uint32_t ea = 0x588150u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588150u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x588160u; rt_dispatch(c);
L_588160:;
    c->r[0] = 0x14b0bb8u;
    c->r[1] = 0x1667u;
    { uint32_t ea = 0x588170u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_588338; }
    c->r[0] = 0x14b0be8u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x58818cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588190u; f_5bc030(c);
    c->r[5] = 0x10u;
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_5881c0; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5881c0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x11u;
    { uint32_t ea = c->r[1] + 0x40u; ST16(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x42u; ST16(ea, c->r[0]); }
L_5881c0:;
    c->r[0] = 0x14b0ba4u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5881d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5881d4u; f_5bc030(c);
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_588208; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588208; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_588208:;
    c->r[0] = 0x14b0b5cu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x588218u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58821cu; f_5bc030(c);
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_588250; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588250; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_588250:;
    c->r[0] = 0x14b0b14u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x588260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588264u; f_5bc030(c);
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_588298; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588298; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_588298:;
    c->r[0] = 0x14b0accu;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x5882a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5882acu; f_5bc030(c);
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_5882e0; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5882e0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_5882e0:;
    c->r[0] = 0x14b0a84u;
    c->r[1] = 0x5u;
    { uint32_t ea = 0x5882f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5882f4u; f_5bc030(c);
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_588324; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588324; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 2);
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
L_588324:;
    c->r[0] = 0x14b0a40u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x588334u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588338u; f_5bb96c(c);
L_588338:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_588384; }
    c->r[0] = 0x14b0a8cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x588354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_588354:;
    { uint32_t ea = c->r[0] + 0xae0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[7] = c->r[7] | (c->r[2] << 16);
    { uint32_t ea = c->r[6] + c->r[3]; ST16(ea, c->r[7]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_588354; }
L_588384:;
    c->r[0] = 0x14b0a50u;
    { uint32_t ea = 0x588390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588648; }
    c->r[1] = 0x14b079cu;
    c->r[10] = c->r[4] + 0x88u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x5883c0u + c->r[1]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[1] = 0x14b0a18u;
    { uint32_t ea = 0x5883c8u + c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x14b078cu;
    { uint32_t ea = 0x5883d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_5883d0:;
    { uint32_t ea = c->r[0] + 0xaf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = (c->r[7] << 6);
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    { uint32_t ea = c->r[3] + c->r[5]; ST16(ea, c->r[1]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 6);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 6);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 6);
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 6);
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x12u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x10u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 6);
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x16u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 6);
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x1au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x18u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x1eu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[2] + 0x1cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[14] = 0x5884c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x5884dcu; rt_dispatch(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_588534; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[9] + 0x1eu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x1cu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x1au; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x18u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x16u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x12u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x10u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0xeu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0xcu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0xau; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x8u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x6u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x4u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    goto L_58853c;
L_588534:;
    c->r[9] = 0x0u;
    c->r[5] = 0x0u;
L_58853c:;
    c->r[0] = 0x8u;
    c->r[1] = c->r[13] + 0xcu;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x588554u; f_582ffc(c);
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x22u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x26u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xau; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x12u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x16u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x36u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1au; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x3au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1eu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 6);
    { uint32_t ea = c->r[0] + 0x3eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[1]); }
    if (COND_EQ) { goto L_588634; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588624u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x588634u; rt_dispatch(c);
L_588634:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CC) { goto L_5883d0; }
L_588648:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588690; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_588660:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_588688; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_588660; }
    goto L_588690;
L_588688:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8cu; ST8(ea, c->r[0]); }
L_588690:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5886d0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
L_5886a8:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5886c8; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5886a8; }
    goto L_5886d0;
L_5886c8:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8du; ST8(ea, c->r[0]); }
L_5886d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588710; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
L_5886e8:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_588708; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5886e8; }
    goto L_588710;
L_588708:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8eu; ST8(ea, c->r[0]); }
L_588710:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_588798(c);
}
void f_588798(Cpu *restrict c) {
    FN_ENTER(0x588798u);
L_588798:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_588844; }
    c->r[7] = 0x14b4110u;
    c->r[3] = 0x14b410cu;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x5887c8u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x5887ccu + c->r[3]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0xbafu;
    c->r[14] = c->r[7] + 0x2u;
L_5887d0:;
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[4] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[4], c->r[3]); }
    if (COND_EQ) { goto L_588838; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[14];
L_5887f4:;
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_588814; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[4] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_NE) { goto L_5887f4; }
    goto L_588838;
L_588814:;
    c->r[2] = (uint32_t)((int32_t)c->r[6] >> 31);
    c->r[5] = c->r[6] & 0x1fu;
    c->r[2] = c->r[6] + (c->r[2] >> 27);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 5);
    c->r[2] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0x188u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | sh_lsl(c->r[8], c->r[5]);
    { uint32_t ea = c->r[2] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
L_588838:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_5887d0; }
L_588844:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5888e4; }
    c->r[7] = 0x14b4070u;
    c->r[3] = 0x14b406cu;
    c->r[1] = 0x0u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x588868u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x58886cu + c->r[3]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0xbafu;
    c->r[14] = c->r[7] + 0x2u;
L_588870:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[4] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[4], c->r[3]); }
    if (COND_EQ) { goto L_5888d8; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[14];
L_588894:;
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_5888b4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[4] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_NE) { goto L_588894; }
    goto L_5888d8;
L_5888b4:;
    c->r[2] = (uint32_t)((int32_t)c->r[6] >> 31);
    c->r[5] = c->r[6] & 0x1fu;
    c->r[2] = c->r[6] + (c->r[2] >> 27);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 5);
    c->r[2] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0x188u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | sh_lsl(c->r[8], c->r[5]);
    { uint32_t ea = c->r[2] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
L_5888d8:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_588870; }
L_5888e4:;
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_588984; }
    c->r[7] = 0x14b3fd0u;
    c->r[3] = 0x14b3fccu;
    c->r[1] = 0x0u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x588908u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x58890cu + c->r[3]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0xbafu;
    c->r[14] = c->r[7] + 0x2u;
L_588910:;
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[4] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[4], c->r[3]); }
    if (COND_EQ) { goto L_588978; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[14];
L_588934:;
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_588954; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[4] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_NE) { goto L_588934; }
    goto L_588978;
L_588954:;
    c->r[2] = (uint32_t)((int32_t)c->r[6] >> 31);
    c->r[5] = c->r[6] & 0x1fu;
    c->r[2] = c->r[6] + (c->r[2] >> 27);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 5);
    c->r[2] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0x188u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | sh_lsl(c->r[8], c->r[5]);
    { uint32_t ea = c->r[2] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
L_588978:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_588910; }
L_588984:;
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_588a24; }
    c->r[7] = 0x14b3f30u;
    c->r[3] = 0x14b3f2cu;
    c->r[1] = 0x0u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x5889a8u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x5889acu + c->r[3]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0xbafu;
    c->r[14] = c->r[7] + 0x2u;
L_5889b0:;
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[4] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[4], c->r[3]); }
    if (COND_EQ) { goto L_588a18; }
    c->r[6] = 0x0u;
    c->r[7] = c->r[14];
L_5889d4:;
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_5889f4; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[4] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_NE) { goto L_5889d4; }
    goto L_588a18;
L_5889f4:;
    c->r[2] = (uint32_t)((int32_t)c->r[6] >> 31);
    c->r[5] = c->r[6] & 0x1fu;
    c->r[2] = c->r[6] + (c->r[2] >> 27);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 5);
    c->r[2] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0x188u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | sh_lsl(c->r[8], c->r[5]);
    { uint32_t ea = c->r[2] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
L_588a18:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_5889b0; }
L_588a24:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_588a48(Cpu *restrict c) {
    FN_ENTER(0x588a48u);
L_588a48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14b017cu;
    c->r[1] = 0xbu;
    { uint32_t ea = 0x588a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588a60u; f_75d2b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_588a78(Cpu *restrict c) {
    FN_ENTER(0x588a78u);
L_588a78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14b014cu;
    c->r[1] = 0xbu;
    { uint32_t ea = 0x588a8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588a90u; f_75d2b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_588aa8; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_588aa8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_588ab4(Cpu *restrict c) {
    FN_ENTER(0x588ab4u);
L_588ab4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[0];
    c->r[14] = 0x588ac0u; f_58e75c(c);
    c->r[0] = 0x14b0258u;
    c->r[8] = c->r[9] + 0x2f8u;
    { uint32_t ea = 0x588ad0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_588afc; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x14b1df4u;
    c->r[1] = c->r[8];
    c->r[2] = 0x9u;
    { uint32_t ea = 0x588af4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_363d0c(c);
L_588afc:;
    c->r[0] = c->r[9];
    c->r[14] = 0x588b04u; f_58d990(c);
    c->r[0] = 0x14b0218u;
    { uint32_t ea = 0x588b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_588b38; }
    c->r[1] = 0x14b0260u;
    { uint32_t ea = 0x588b28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xc0u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { c->r[2] = c->r[2] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xc0u; ST8(ea, c->r[2]); } }
L_588b38:;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[14] = 0x588b44u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_588c14; }
    c->r[14] = 0x588b50u; f_58e84c(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x588b58u; f_58eae4(c);
    c->r[0] = 0x14b01c4u;
    { uint32_t ea = 0x588b64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588b68u; f_5a75b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588be0; }
    c->r[0] = 0x14b01acu;
    { uint32_t ea = 0x588b7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588b80u; f_5ae744(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588be0; }
    c->r[0] = 0x14b0244u;
    c->r[1] = 0x14b0240u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x588b9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x588ba0u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14b0010u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x588bacu + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[7] = v; }
    goto L_588bb8;
L_588bb0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
L_588bb8:;
    c->r[1] = c->r[6];
    c->r[14] = 0x588bc0u; f_5c6d44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_588bd8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x4u;
    c->r[0] = c->r[2];
    c->r[14] = 0x588bd8u; f_462bd0(c);
L_588bd8:;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_588bb0; }
L_588be0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x588be8u; f_58f278(c);
    c->r[1] = 0x14b012cu;
    c->r[0] = 0x14b1ce8u;
    c->r[2] = 0x7u;
    { uint32_t ea = 0x588bfcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x588c00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_363d0c(c);
L_588c14:;
    c->r[0] = 0x14b0100u;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x588c28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588c2cu; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_588cf0; }
    c->r[0] = c->r[9];
    c->r[14] = 0x588c3cu; f_58eae4(c);
    c->r[0] = 0x14b00e0u;
    { uint32_t ea = 0x588c48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588c4cu; f_5a75b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588cc4; }
    c->r[0] = 0x14b00c8u;
    { uint32_t ea = 0x588c60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588c64u; f_5ae744(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588cc4; }
    c->r[0] = 0x14b0160u;
    c->r[1] = 0x14b015cu;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x588c80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x588c84u + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x14aff2cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x588c90u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[6] = v; }
    goto L_588c9c;
L_588c94:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
L_588c9c:;
    c->r[1] = c->r[5];
    c->r[14] = 0x588ca4u; f_5c6d44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_588cbc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x4u;
    c->r[0] = c->r[2];
    c->r[14] = 0x588cbcu; f_462bd0(c);
L_588cbc:;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_588c94; }
L_588cc4:;
    c->r[1] = 0x14b0050u;
    c->r[0] = 0x14b1c0cu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x588cd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x588cdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_363d0c(c);
L_588cf0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_588d40(Cpu *restrict c) {
    FN_ENTER(0x588d40u);
L_588d40:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14affccu;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x588d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588d60u; f_5a5ed0(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_588e70; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x588d78u; f_5a8c3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588eb4; }
    c->r[0] = 0x14aff9cu;
    { uint32_t ea = 0x588d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588d90u; f_5ae3b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588de0; }
    c->r[0] = 0x14aff84u;
    { uint32_t ea = 0x588da4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588da8u; f_5ae75c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588eb4; }
    c->r[0] = 0x14aff6cu;
    { uint32_t ea = 0x588dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588dc0u; f_5ae768(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_588eb4; }
    c->r[0] = 0x14aff54u;
    { uint32_t ea = 0x588dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588dd8u; f_5a3424(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
L_588de0:;
    c->r[0] = 0x14aff94u;
    c->r[6] = 0x42cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x588df4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x588dfcu; f_723da4(c);
    c->r[1] = c->r[0] ^ 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0x19cu; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_588e28; }
    c->r[0] = 0x14b01a4u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x588e1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x588e24u; f_7106f8(c);
    { uint32_t ea = c->r[5] + 0x3d4u; ST32(ea, c->r[0]); }
L_588e28:;
    c->r[0] = 0x14aff4cu;
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    { uint32_t ea = 0x588e3cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x588e44u; f_723f30(c);
    c->r[0] = 0x14b016cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x588e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588e58u; f_70cbd0(c);
    c->r[0] = 0x14b19f4u;
    { uint32_t ea = 0x588e64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x588e68u; f_3c8be0(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5f1950(c);
L_588e70:;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[14] = 0x588e7cu; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_588eb4; }
    c->r[0] = 0x14afef0u;
    c->r[1] = 0x42cu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x588e98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x14afe80u;
    { uint32_t ea = 0x588ea8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_726b98(c);
L_588eb4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_588ee8(Cpu *restrict c) {
    FN_ENTER(0x588ee8u);
L_588ee8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[8] = c->r[0];
    c->r[12] = c->r[1];
    c->r[10] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_58941c; }
    c->r[1] = 0x14b03f8u;
    c->r[2] = 0x6bfcu;
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = 0x588f24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x588f38u + 0xcu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] & 0xf0u;
    c->r[1] = c->r[1] | c->r[7];
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x588f68u: goto L_588f68; case 0x58900cu: goto L_58900c; case 0x589034u: goto L_589034; case 0x589070u: goto L_589070; case 0x58908cu: goto L_58908c; case 0x5890acu: goto L_5890ac; case 0x589100u: goto L_589100; case 0x589124u: goto L_589124; case 0x58914cu: goto L_58914c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_588f68:;
    c->r[6] = c->r[8] + 0xa0u;
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x588f84u; f_74edec(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x588f90u; f_74ecc0(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[8] + 0xc4u;
    (void)f_subs(c, c->r[3], 0x5u);
    if (COND_HI) { goto L_588fcc; }
    c->r[0] = (c->r[3] << 2);
    c->r[1] = 0x588facu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x588fc8u: goto L_588fc8; case 0x5899b0u: goto L_5899b0; case 0x5899bcu: goto L_5899bc; case 0x5899c8u: goto L_5899c8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_588fc8:;
    c->r[4] = c->r[8] + 0x5cu;
L_588fcc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], 0x5u);
    if (COND_HI) { goto L_589a10; }
    c->r[1] = (c->r[3] << 2);
    c->r[3] = 0x588fe4u + 0x8u;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x589004u: goto L_589004; case 0x5899c0u: goto L_5899c0; case 0x5899ccu: goto L_5899cc; case 0x589a14u: goto L_589a14; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589004:;
    c->r[2] = 0x2u;
    goto L_589a14;
L_58900c:;
    c->r[0] = 0x14afb9cu;
    { uint32_t ea = 0x589018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58901cu; f_5f85fc(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_589258; }
    c->r[0] = 0x2u;
    goto L_589240;
L_589034:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5891c4; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58984c; }
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_5899d4; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_5899d4; }
    c->r[0] = c->r[8];
    c->r[14] = 0x58905cu; f_58a1d8(c);
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x48u; ST32(ea, c->r[0]); }
    goto L_589244;
L_589070:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58919c; }
    c->r[5] = c->r[8] + 0xc4u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_589888; }
    c->r[0] = c->r[5];
    goto L_5890a4;
L_58908c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58919c; }
    c->r[4] = c->r[8] + 0xc4u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5898e8; }
    c->r[0] = c->r[4];
L_5890a4:;
    c->r[14] = 0x5890a8u; f_7530b8(c);
    goto L_589118;
L_5890ac:;
    c->r[9] = 0x0u;
    c->r[0] = c->r[8] + 0x9cu;
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5890c8u; f_74fc94(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_589828; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_589258; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[12];
    c->r[14] = 0x5890e8u; f_58a408(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    c->r[14] = 0x5890f4u; f_74f260(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = 0x1u;
    goto L_589258;
L_589100:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58920c; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_589948; }
    c->r[0] = c->r[8] + 0xe8u;
    c->r[14] = 0x589118u; f_74ee98(c);
L_589118:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = 0x0u;
    goto L_589258;
L_589124:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_589234; }
    c->r[9] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_589258; }
    c->r[0] = c->r[8];
    c->r[1] = 0x5u;
    c->r[14] = 0x589144u; f_85cc0c(c);
    c->r[0] = 0x8u;
    goto L_589240;
L_58914c:;
    c->r[14] = 0x589150u; f_85f98c(c);
    c->r[6] = c->r[0];
    c->r[14] = 0x589158u; f_85f9dc(c);
    c->r[0] = c->r[6] | c->r[0];
    c->r[1] = 0xf309u;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t r = c->r[0] & c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_589188; }
    c->r[0] = 0x14b01a0u;
    c->r[1] = 0x6ba4u;
    { uint32_t ea = 0x58917cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_589cc0; }
L_589188:;
    c->r[0] = c->r[8];
    c->r[1] = 0x5u;
    c->r[14] = 0x589194u; f_85cbe8(c);
    c->r[0] = 0x7u;
    goto L_589240;
L_58919c:;
    c->r[0] = 0x2u;
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xa0u;
    c->r[14] = 0x5891b4u; f_74ecc0(c);
    c->r[0] = c->r[8] + 0xc4u;
    c->r[1] = 0x2u;
    c->r[14] = 0x5891c0u; f_74ecc0(c);
    goto L_589218;
L_5891c4:;
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xadu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xaeu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[1] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_589258; }
    c->r[1] = 0x2u;
    c->r[9] = 0x0u;
    c->r[1] = udiv32(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t ea = c->r[8] + 0xb0u; ST16(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[0] = 0x2u - c->r[0];
    { uint32_t ea = c->r[8] + 0xadu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_589250;
L_58920c:;
    c->r[0] = 0x3u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
L_589218:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[14] = 0x589224u; f_74f260(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x55u; ST8(ea, c->r[0]); }
    goto L_589258;
L_589234:;
    c->r[0] = c->r[8];
    c->r[14] = 0x58923cu; f_58a5cc(c);
    { uint32_t ea = c->r[8] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
L_589240:;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
L_589244:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
L_589250:;
    c->r[14] = 0x589254u; f_74f260(c);
L_589254:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
L_589258:;
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_58941c; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[12], 0x5u);
    c->r[6] = 0x0u;
    if (COND_HI) { goto L_5892e8; }
    { uint32_t ea = c->r[8] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xdcu; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = (c->r[12] << 2);
    c->r[2] = 0x58929cu + 0x10u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5892c4u: goto L_5892c4; case 0x5892ccu: goto L_5892cc; case 0x5892d4u: goto L_5892d4; case 0x5892dcu: goto L_5892dc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5892c4:;
    c->r[1] = c->r[8] + 0x5cu;
    goto L_5892e0;
L_5892cc:;
    c->r[1] = c->r[8] + 0x64u;
    goto L_5892e0;
L_5892d4:;
    c->r[1] = c->r[8] + 0x6cu;
    goto L_5892e0;
L_5892dc:;
    c->r[1] = c->r[8] + 0x74u;
L_5892e0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + (c->r[0] << 2);
L_5892e8:;
    { uint32_t ea = c->r[8] + 0xf6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xf8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[7] = r; }
    c->r[0] = 0x14b1518u;
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t ea = 0x589310u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589314u; f_39d278(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[5]); }
    c->r[0] = c->r[7] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589338u; f_39d278(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[7] + 0x2u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58935cu; f_39d278(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x15u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST8(ea, c->r[5]); }
    c->r[0] = c->r[7] + 0x3u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589380u; f_39d278(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[7] + 0x4u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5893a4u; f_39d278(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x25u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[5]); }
    c->r[0] = c->r[7] + 0x5u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5893c8u; f_39d278(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[7] + 0x6u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5893ecu; f_39d278(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x35u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST8(ea, c->r[5]); }
    c->r[0] = c->r[7] + 0x7u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589410u; f_39d278(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3du; ST8(ea, c->r[0]); }
L_58941c:;
    { uint32_t ea = c->r[8] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; } }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    if (COND_NE) { c->r[10] = c->r[0] + c->r[1]; }
    c->r[1] = c->r[10] - c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_589464; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = 0x1u;
    c->r[1] = c->r[1] - c->r[10];
    (void)f_adds(c, c->r[1], 0x2u);
    if (COND_LE) { c->r[1] = ~0x1u; }
    c->r[1] = c->r[10] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    c->r[1] = c->r[1] - c->r[0];
    c->r[14] = 0x589460u; f_15eff08(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
L_589464:;
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_5896f4; }
    c->r[0] = c->r[8] + 0x6cu;
    c->r[6] = c->r[8] + 0x74u;
    c->r[5] = c->r[8] + 0x64u;
    c->r[7] = c->r[8] + 0x5cu;
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5895e8; }
    c->r[0] = 0x14af72cu;
    c->r[9] = 0x0u;
    c->r[11] = 0x0u;
    { uint32_t ea = 0x5894a4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x14b137cu;
    { uint32_t ea = 0x5894acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b1364u;
    { uint32_t ea = 0x5894b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    goto L_5894c4;
L_5894bc:;
    c->r[9] = c->r[9] - 0x4u;
    c->r[11] = c->r[11] + 0x1u;
L_5894c4:;
    (void)f_subs(c, c->r[12], 0x5u);
    c->r[0] = 0x0u;
    if (COND_HI) { goto L_589514; }
    c->r[0] = (c->r[12] << 2);
    c->r[1] = 0x5894dcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5894f8u: goto L_5894f8; case 0x589500u: goto L_589500; case 0x589508u: goto L_589508; case 0x589510u: goto L_589510; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5894f8:;
    c->r[0] = c->r[7];
    goto L_589514;
L_589500:;
    c->r[0] = c->r[5];
    goto L_589514;
L_589508:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_589514;
L_589510:;
    c->r[0] = c->r[6];
L_589514:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[11], c->r[0]);
    if (COND_CS) { goto L_5896f4; }
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_5894bc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x589538u + 0x8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2] + c->r[1]; switch (c->pc) { case 0x589558u: goto L_589558; case 0x589560u: goto L_589560; case 0x589568u: goto L_589568; case 0x58956cu: goto L_58956c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589558:;
    c->r[0] = c->r[5];
    goto L_58956c;
L_589560:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_58956c;
L_589568:;
    c->r[0] = c->r[6];
L_58956c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[9]);
    if (COND_EQ) { goto L_5894bc; }
    { uint32_t ea = c->r[4] - c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589584u; f_394228(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5894bc; }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5894bc; }
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_5895bc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5895b8u; f_39c58c(c);
    goto L_5895cc;
L_5895bc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5895ccu; f_399390(c);
L_5895cc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5894bc; }
    { uint32_t ea = c->r[8] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[11]; ST8(ea, c->r[1]); }
    goto L_5894bc;
L_5895e8:;
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5896f4; }
    c->r[0] = 0x14af5c8u;
    c->r[9] = 0x0u;
    c->r[10] = 0x0u;
    { uint32_t ea = 0x589608u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14b1218u;
    { uint32_t ea = 0x589610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14b1200u;
    { uint32_t ea = 0x58961cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_58961c:;
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_5896e0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x589634u + 0x8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2] + c->r[1]; switch (c->pc) { case 0x589654u: goto L_589654; case 0x58965cu: goto L_58965c; case 0x589664u: goto L_589664; case 0x589668u: goto L_589668; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589654:;
    c->r[0] = c->r[7];
    goto L_589668;
L_58965c:;
    c->r[0] = c->r[5];
    goto L_589668;
L_589664:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_589668:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[11], c->r[9]);
    if (COND_EQ) { goto L_5896e0; }
    { uint32_t ea = c->r[11] - c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589680u; f_394228(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5896e0; }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5896e0; }
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_5896b8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5896b4u; f_39c58c(c);
    goto L_5896c8;
L_5896b8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5896c8u; f_399390(c);
L_5896c8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5896e0; }
    { uint32_t ea = c->r[8] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[10]; ST8(ea, c->r[1]); }
L_5896e0:;
    { uint32_t ea = c->r[8] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = c->r[9] - 0x4u;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CC) { goto L_58961c; }
L_5896f4:;
    { uint32_t ea = c->r[8] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5897e0; }
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_5897dc; }
    c->r[0] = (c->r[12] << 2);
    c->r[1] = 0x589718u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x589734u: goto L_589734; case 0x58973cu: goto L_58973c; case 0x589744u: goto L_589744; case 0x58974cu: goto L_58974c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589734:;
    c->r[6] = c->r[8] + 0x5cu;
    goto L_589750;
L_58973c:;
    c->r[6] = c->r[8] + 0x64u;
    goto L_589750;
L_589744:;
    c->r[6] = c->r[8] + 0x6cu;
    goto L_589750;
L_58974c:;
    c->r[6] = c->r[8] + 0x74u;
L_589750:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5897dc; }
    c->r[1] = 0x14af454u;
    c->r[9] = 0x967fu;
    c->r[7] = 0x0u;
    c->r[11] = 0x0u;
    c->r[5] = 0x0u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x980000u;
    { uint32_t ea = 0x58977cu + c->r[1]; uint32_t v = LD32(ea); c->r[10] = v; }
L_589778:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5897c4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589794u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5897b4; }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5897b4; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[11]; c->r[11] = r; }
L_5897b4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[11], c->r[9]);
    if (COND_GT) { goto L_5897d8; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5897c4:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_589778; }
    goto L_5897dc;
L_5897d8:;
    c->r[11] = c->r[9];
L_5897dc:;
    { uint32_t ea = c->r[8] + 0x160u; ST32(ea, c->r[11]); }
L_5897e0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_589820; }
    c->v.s[0] = LD32(c->r[8] + 340u);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_589820; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[12];
    c->r[14] = 0x589810u; f_58a408(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    c->r[14] = 0x58981cu; f_74f260(c);
    c->r[0] = 0x1u;
L_589820:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_589828:;
    c->r[0] = 0x2u;
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xa0u;
    c->r[14] = 0x589840u; f_74ecc0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_589250;
L_58984c:;
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_589b1c; }
    c->r[0] = (c->r[12] << 2);
    c->r[1] = 0x589864u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x589880u: goto L_589880; case 0x589a7cu: goto L_589a7c; case 0x589a84u: goto L_589a84; case 0x589a8cu: goto L_589a8c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589880:;
    c->r[1] = c->r[8] + 0x5cu;
    goto L_589a90;
L_589888:;
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_589b28; }
    { uint32_t ea = c->r[8] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xdcu; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = (c->r[12] << 2);
    c->r[2] = 0x5898b8u + 0x10u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5898e0u: goto L_5898e0; case 0x589b30u: goto L_589b30; case 0x589b38u: goto L_589b38; case 0x589b40u: goto L_589b40; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5898e0:;
    c->r[1] = c->r[8] + 0x5cu;
    goto L_589b44;
L_5898e8:;
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_589c2c; }
    { uint32_t ea = c->r[8] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xdcu; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = (c->r[12] << 2);
    c->r[2] = 0x589918u + 0x10u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x589940u: goto L_589940; case 0x589c34u: goto L_589c34; case 0x589c3cu: goto L_589c3c; case 0x589c44u: goto L_589c44; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589940:;
    c->r[1] = c->r[8] + 0x5cu;
    goto L_589c48;
L_589948:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[12], 0x5u);
    { uint32_t ea = c->r[8] + 0x55u; ST8(ea, c->r[0]); }
    if (COND_HI) { goto L_589d10; }
    { uint32_t ea = c->r[8] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xdcu; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = (c->r[12] << 2);
    c->r[2] = 0x589980u + 0x10u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5899a8u: goto L_5899a8; case 0x589d18u: goto L_589d18; case 0x589d20u: goto L_589d20; case 0x589d28u: goto L_589d28; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5899a8:;
    c->r[1] = c->r[8] + 0x5cu;
    goto L_589d2c;
L_5899b0:;
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x6u;
    goto L_589a14;
L_5899bc:;
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5899c0:;
    c->r[2] = 0x1u;
    goto L_589a14;
L_5899c8:;
    { uint32_t ea = c->r[8] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5899cc:;
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_589a14;
L_5899d4:;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_589258; }
    c->r[0] = (c->r[12] << 2);
    c->r[2] = 0x5899ecu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x589a08u: goto L_589a08; case 0x589e74u: goto L_589e74; case 0x589e7cu: goto L_589e7c; case 0x589e84u: goto L_589e84; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589a08:;
    c->r[2] = c->r[8] + 0x5cu;
    goto L_589e88;
L_589a10:;
    c->r[2] = 0x0u;
L_589a14:;
    c->r[9] = 0x0u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[6];
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x589a34u; f_753a74(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x2u;
    c->r[14] = 0x589a40u; f_74ecc0(c);
    c->r[6] = c->r[8] + 0xe8u;
    c->r[1] = 0x8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x589a5cu; f_74edec(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x20u;
    c->r[2] = 0x3u;
    c->r[14] = 0x589a6cu; f_74ee34(c);
    { uint32_t ea = c->r[8] + 0x55u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_58941c;
L_589a7c:;
    c->r[1] = c->r[8] + 0x64u;
    goto L_589a90;
L_589a84:;
    c->r[1] = c->r[8] + 0x6cu;
    goto L_589a90;
L_589a8c:;
    c->r[1] = c->r[8] + 0x74u;
L_589a90:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589b1c; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
L_589aa4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_589ac4; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_589aa4; }
    goto L_589b1c;
L_589ac4:;
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xadu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xaeu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[4] = 0x1u;
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x3u;
    c->r[0] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xa0u;
    c->r[14] = 0x589af0u; f_74ecc0(c);
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0xdcu; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0xd8u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { goto L_589b14; }
    c->r[0] = c->r[8] + 0xc4u;
    c->r[1] = 0x0u;
    c->r[14] = 0x589b14u; f_74ecc0(c);
L_589b14:;
    { uint32_t ea = c->r[8] + 0x9cu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x55u; ST8(ea, c->r[4]); }
L_589b1c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_589250;
L_589b28:;
    c->r[6] = 0x0u;
    goto L_589b4c;
L_589b30:;
    c->r[1] = c->r[8] + 0x64u;
    goto L_589b44;
L_589b38:;
    c->r[1] = c->r[8] + 0x6cu;
    goto L_589b44;
L_589b40:;
    c->r[1] = c->r[8] + 0x74u;
L_589b44:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + (c->r[0] << 2);
L_589b4c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589e10; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x55u; ST8(ea, c->r[0]); }
    c->r[0] = 0x14b0cb8u;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x589b70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589b74u; f_39c58c(c);
    c->r[9] = c->r[0];
    c->r[0] = 0x14af048u;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x589b88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589b8cu; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589cc0; }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589c0c; }
    c->r[0] = 0x14af228u;
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x589bb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589bbcu; f_5c6c6c(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[6]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[4]); }
L_589bcc:;
    c->r[14] = 0x589bd0u; f_74f260(c);
L_589bd0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_589f30; }
    c->r[0] = (c->r[12] << 2);
    c->r[1] = 0x589be8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x589c04u: goto L_589c04; case 0x589ee4u: goto L_589ee4; case 0x589eecu: goto L_589eec; case 0x589ef8u: goto L_589ef8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589c04:;
    c->r[1] = c->r[8] + 0x5cu;
    goto L_589efc;
L_589c0c:;
    (void)f_adds(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_589ff0; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[9]);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_58a008; }
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    goto L_589bcc;
L_589c2c:;
    c->r[6] = 0x0u;
    goto L_589c50;
L_589c34:;
    c->r[1] = c->r[8] + 0x64u;
    goto L_589c48;
L_589c3c:;
    c->r[1] = c->r[8] + 0x6cu;
    goto L_589c48;
L_589c44:;
    c->r[1] = c->r[8] + 0x74u;
L_589c48:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + (c->r[0] << 2);
L_589c50:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589e10; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x55u; ST8(ea, c->r[0]); }
    c->r[0] = 0x14aef5cu;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x589c74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589c78u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589cc0; }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589cc8; }
    c->r[0] = 0x14af13cu;
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x589ca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589ca8u; f_5c6c6c(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1fu;
    { uint32_t ea = c->r[6]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[5]); }
    c->r[14] = 0x589cbcu; f_74f260(c);
    goto L_589cd4;
L_589cc0:;
    c->r[9] = 0x0u;
    goto L_589254;
L_589cc8:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0x589cd4u; f_58a2dc(c);
L_589cd4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x5u);
    if (COND_HI) { goto L_589fb0; }
    c->r[0] = (c->r[12] << 2);
    c->r[1] = 0x589cecu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x589d08u: goto L_589d08; case 0x589f68u: goto L_589f68; case 0x589f70u: goto L_589f70; case 0x589f78u: goto L_589f78; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_589d08:;
    c->r[1] = c->r[8] + 0x5cu;
    goto L_589f7c;
L_589d10:;
    c->r[4] = 0x0u;
    goto L_589d34;
L_589d18:;
    c->r[1] = c->r[8] + 0x64u;
    goto L_589d2c;
L_589d20:;
    c->r[1] = c->r[8] + 0x6cu;
    goto L_589d2c;
L_589d28:;
    c->r[1] = c->r[8] + 0x74u;
L_589d2c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[1] + (c->r[0] << 2);
L_589d34:;
    { uint32_t ea = c->r[8] + 0xf8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xf5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xf6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14b0ad0u;
    { uint32_t ea = 0x589d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589d5cu; f_39d278(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589e10; }
    { uint32_t ea = c->r[8] + 0xf8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xf5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xf6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[2] = 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x14b0aa0u;
    { uint32_t ea = 0x589d88u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589d8cu; f_39b670(c);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0xf8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xf5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xf6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589db0u; f_39c27c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x589dc8u; f_39b7fc(c);
    c->r[0] = 0x14b2b04u;
    { uint32_t ea = 0x589dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0xbafu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_589e54; }
    c->r[3] = 0x14b2ae8u;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x589df0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x2u;
L_589df0:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_589e20; }
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[2] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_589df0; }
    goto L_589e54;
L_589e10:;
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    goto L_589250;
L_589e20:;
    c->r[0] = (uint32_t)((int32_t)c->r[5] >> 31);
    c->r[2] = c->r[5] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[5] + (c->r[0] >> 27);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_589e54; }
    c->r[0] = 0x14aeed8u;
    { uint32_t ea = 0x589e50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x589e54u; f_5a864c(c);
L_589e54:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[6]); }
    c->r[9] = 0x0u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_589250;
L_589e74:;
    c->r[2] = c->r[8] + 0x64u;
    goto L_589e88;
L_589e7c:;
    c->r[2] = c->r[8] + 0x6cu;
    goto L_589e88;
L_589e84:;
    c->r[2] = c->r[8] + 0x74u;
L_589e88:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589258; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[9] = 0x0u;
L_589ea0:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_589ec0; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_CC) { goto L_589ea0; }
    goto L_589258;
L_589ec0:;
    { uint32_t ea = c->r[8] + 0xadu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = c->r[8] + 0xa0u;
    c->r[14] = 0x589eccu; f_74ee98(c);
    { uint32_t ea = c->r[8] + 0xadu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x55u; ST8(ea, c->r[0]); } }
    goto L_589254;
L_589ee4:;
    c->r[1] = c->r[8] + 0x64u;
    goto L_589efc;
L_589eec:;
    c->r[1] = c->r[8] + 0x6cu;
    goto L_589efc;
L_589ef8:;
    c->r[1] = c->r[8] + 0x74u;
L_589efc:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589f30; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0x0u;
    c->r[2] = 0x0u;
L_589f14:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_589258; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_589f14; }
L_589f30:;
    c->r[0] = 0x2u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xaeu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = udiv32(c->r[0], c->r[1]);
    { uint32_t ea = c->r[8] + 0xb0u; ST16(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[1] = 0x0u;
    c->r[0] = 0x2u - c->r[0];
    { uint32_t ea = c->r[8] + 0xadu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xa0u;
    c->r[14] = 0x589f60u; f_74ecc0(c);
    c->r[0] = c->r[5];
    goto L_589fe4;
L_589f68:;
    c->r[1] = c->r[8] + 0x64u;
    goto L_589f7c;
L_589f70:;
    c->r[1] = c->r[8] + 0x6cu;
    goto L_589f7c;
L_589f78:;
    c->r[1] = c->r[8] + 0x74u;
L_589f7c:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_589fb0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0x0u;
    c->r[2] = 0x0u;
L_589f94:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_589258; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_589f94; }
L_589fb0:;
    c->r[0] = 0x2u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xaeu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = udiv32(c->r[0], c->r[1]);
    { uint32_t ea = c->r[8] + 0xb0u; ST16(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[1] = 0x0u;
    c->r[0] = 0x2u - c->r[0];
    { uint32_t ea = c->r[8] + 0xadu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xa0u;
    c->r[14] = 0x589fe0u; f_74ecc0(c);
    c->r[0] = c->r[4];
L_589fe4:;
    c->r[1] = 0x2u;
    c->r[14] = 0x589fecu; f_74ecc0(c);
    goto L_589254;
L_589ff0:;
    c->r[0] = 0x6u;
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_589bcc;
L_58a008:;
    c->r[0] = 0x14b080cu;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x58a01cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[2]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_GE) { goto L_58a07c; }
    c->r[2] = c->r[9];
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x58a034u; f_39b7fc(c);
    c->r[0] = 0x14b2898u;
    { uint32_t ea = 0x58a040u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0xbafu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_58a104; }
    c->r[3] = 0x14b287cu;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x58a05cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x2u;
L_58a05c:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_58a0d0; }
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[2] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_58a05c; }
    goto L_58a104;
L_58a07c:;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x58a088u; f_39b7fc(c);
    c->r[0] = 0x14b2844u;
    { uint32_t ea = 0x58a094u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0xbafu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_58a154; }
    c->r[3] = 0x14b2828u;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x58a0b0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x2u;
L_58a0b0:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_58a120; }
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[2] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_58a0b0; }
    goto L_58a154;
L_58a0d0:;
    c->r[0] = (uint32_t)((int32_t)c->r[7] >> 31);
    c->r[2] = c->r[7] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[7] + (c->r[0] >> 27);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58a104; }
    c->r[0] = 0x14aec28u;
    { uint32_t ea = 0x58a100u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a104u; f_5a864c(c);
L_58a104:;
    c->r[0] = 0x0u;
    c->r[1] = 0x9u;
    c->r[14] = 0x58a110u; f_74f260(c);
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[4];
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    goto L_589bd0;
L_58a120:;
    c->r[0] = (uint32_t)((int32_t)c->r[4] >> 31);
    c->r[2] = c->r[4] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[4] + (c->r[0] >> 27);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58a154; }
    c->r[0] = 0x14aebd8u;
    { uint32_t ea = 0x58a150u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a154u; f_5a864c(c);
L_58a154:;
    c->r[0] = 0x0u;
    c->r[1] = 0x9u;
    c->r[4] = 0x0u;
    c->r[14] = 0x58a164u; f_74f260(c);
    { uint32_t ea = c->r[6]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[4]); }
    goto L_589bd0;
}
void f_58a1d8(Cpu *restrict c) {
    FN_ENTER(0x58a1d8u);
L_58a1d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x0u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[14] = 0x58a1ecu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x58a208u; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x58a214u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x1u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[5] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x57u; ST8(ea, c->r[5]); }
    c->r[14] = 0x58a22cu; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x58a238u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x58u; ST8(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x58a258u; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x58a264u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x3u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[5] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x59u; ST8(ea, c->r[5]); }
    c->r[14] = 0x58a27cu; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x58a288u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x5au; ST8(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[14] = 0x58a2a8u; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x58a2b4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x5u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[5] = v; } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x5bu; ST8(ea, c->r[5]); }
    c->r[14] = 0x58a2ccu; f_85cc0c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_85cbe8(c);
}
void f_58a2dc(Cpu *restrict c) {
    FN_ENTER(0x58a2dcu);
L_58a2dc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[0] = 0x14b0520u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x58a2fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a300u; f_399390(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a380; }
    c->r[0] = 0x14b04ecu;
    c->r[7] = 0x0u;
    c->r[3] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = 0x58a330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a334u; f_39945c(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x14b2594u;
    { uint32_t ea = 0x58a344u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = 0xbafu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_58a3c8; }
    c->r[3] = 0x14b2578u;
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x58a360u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x2u;
L_58a360:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_58a394; }
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[2] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_58a360; }
    goto L_58a3c8;
L_58a380:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    c->r[14] = 0x58a38cu; f_74f260(c);
    c->r[5] = 0x7u;
    goto L_58a3e8;
L_58a394:;
    c->r[0] = (uint32_t)((int32_t)c->r[7] >> 31);
    c->r[2] = c->r[7] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[7] + (c->r[0] >> 27);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58a3c8; }
    c->r[0] = 0x14ae964u;
    { uint32_t ea = 0x58a3c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a3c8u; f_5a864c(c);
L_58a3c8:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1fu;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { c->r[0] = 0x0u; }
    if (COND_LT) { { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x58a3e8u; f_74f260(c);
L_58a3e8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_58a408(Cpu *restrict c) {
    FN_ENTER(0x58a408u);
L_58a408:;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { return; }
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[2] = (c->r[1] << 2);
    c->r[3] = 0x58a428u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[3]; switch (c->pc) { case 0x58a444u: goto L_58a444; case 0x58a480u: goto L_58a480; case 0x58a48cu: goto L_58a48c; case 0x58a498u: goto L_58a498; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_58a444:;
    c->r[11] = c->r[0] + 0x5cu;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_58a538; }
    c->r[1] = 0x58a458u + 0x8u;
    c->r[6] = c->r[11];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[1]; switch (c->pc) { case 0x58a478u: goto L_58a478; case 0x58a4a4u: goto L_58a4a4; case 0x58a4acu: goto L_58a4ac; case 0x58a4b0u: goto L_58a4b0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_58a478:;
    c->r[6] = c->r[0] + 0x64u;
    goto L_58a4b0;
L_58a480:;
    c->r[11] = c->r[0] + 0x64u;
    c->r[6] = c->r[11];
    goto L_58a4b0;
L_58a48c:;
    c->r[11] = c->r[0] + 0x6cu;
    c->r[6] = c->r[11];
    goto L_58a4b0;
L_58a498:;
    c->r[11] = c->r[0] + 0x74u;
    c->r[6] = c->r[11];
    goto L_58a4b0;
L_58a4a4:;
    c->r[6] = c->r[0] + 0x6cu;
    goto L_58a4b0;
L_58a4ac:;
    c->r[6] = c->r[0] + 0x74u;
L_58a4b0:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a538; }
    c->r[1] = 0x14ae6f4u;
    c->r[8] = 0x967fu;
    c->r[7] = 0x0u;
    c->r[10] = 0x0u;
    c->r[4] = 0x0u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x980000u;
    { uint32_t ea = 0x58a4dcu + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
L_58a4d8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58a520; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a4f4u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a514; }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_58a514; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[10]; c->r[10] = r; }
L_58a514:;
    (void)f_subs(c, c->r[10], c->r[8]);
    if (COND_GT) { goto L_58a53c; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58a520:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_58a4d8; }
    c->r[8] = c->r[10];
    goto L_58a53c;
L_58a538:;
    c->r[8] = 0x0u;
L_58a53c:;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a598; }
    c->r[1] = 0x14ae880u;
    c->r[9] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x58a560u + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
L_58a55c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_58a588; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[14] = 0x58a57cu; f_5c6c6c(c);
    { uint32_t ea = c->r[4] + c->r[7]; ST16(ea, c->r[9]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58a588:;
    c->r[5] = c->r[5] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_58a55c; }
L_58a598:;
    c->r[0] = 0x14ae7e0u;
    c->r[1] = c->r[8];
    { uint32_t ea = 0x58a5a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a5acu; f_723150(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GT) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58a5cc(Cpu *restrict c) {
    FN_ENTER(0x58a5ccu);
L_58a5cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x56u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a5f4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x58a5f0u; f_85cbe8(c);
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[5]); }
L_58a5f4:;
    { uint32_t ea = c->r[4] + 0x57u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a614; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x58a60cu; f_85cbe8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x57u; ST8(ea, c->r[0]); }
L_58a614:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a634; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x58a62cu; f_85cbe8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x58u; ST8(ea, c->r[0]); }
L_58a634:;
    { uint32_t ea = c->r[4] + 0x59u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a654; }
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x58a64cu; f_85cbe8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x59u; ST8(ea, c->r[0]); }
L_58a654:;
    { uint32_t ea = c->r[4] + 0x5au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a674; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x58a66cu; f_85cbe8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5au; ST8(ea, c->r[0]); }
L_58a674:;
    { uint32_t ea = c->r[4] + 0x5bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a694; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x58a68cu; f_85cbe8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5bu; ST8(ea, c->r[0]); }
L_58a694:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_85cc0c(c);
}
void f_58a6a4(Cpu *restrict c) {
    FN_ENTER(0x58a6a4u);
L_58a6a4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a70c; }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
L_58a6c8:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x58a6f8u; f_2dac14(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x34u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_58a6c8; }
L_58a70c:;
    c->r[0] = 0x14ae6c8u;
    { uint32_t ea = 0x58a718u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58a7bc; }
    c->r[1] = 0x14ae494u;
    c->r[6] = 0x0u;
    c->r[9] = 0x34u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x58a73cu + c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x14ae69cu;
    { uint32_t ea = 0x58a744u + c->r[1]; uint32_t v = LD32(ea); c->r[10] = v; }
L_58a740:;
    { uint32_t ea = c->r[0] + 0xb08u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x58a758u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_58a7a4; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[9] + c->r[0]; c->r[2] = r; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x58a780u; f_58d468(c);
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[9]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[0], 0x95u);
    if (COND_HI) { goto L_58a7bc; }
L_58a7a4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[0] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CC) { goto L_58a740; }
L_58a7bc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_58a7cc(Cpu *restrict c) {
    FN_ENTER(0x58a7ccu);
L_58a7cc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[0];
    c->r[4] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a914; }
    c->r[0] = 0x14ae3c0u;
    c->r[9] = 0x967fu;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    c->r[4] = 0x0u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x980000u;
    { uint32_t ea = 0x58a80cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x14ae3bcu;
    { uint32_t ea = 0x58a814u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_58a810:;
    { uint32_t ea = c->r[6] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_58a85c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_58a88c; }
    c->r[5] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x58a838u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a88c; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_58a88c; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[8]; c->r[8] = r; }
    goto L_58a88c;
L_58a85c:;
    c->r[0] = c->r[0] + c->r[7];
    c->r[1] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a86cu; f_33f03c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a884; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x58a880u; rt_dispatch(c);
    c->r[8] = c->r[0] + c->r[8];
L_58a884:;
    (void)f_subs(c, c->r[8], c->r[9]);
    if (COND_GE) { c->r[8] = c->r[9]; }
L_58a88c:;
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = c->r[7] + 0x34u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_58a810; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58a914; }
    c->r[0] = 0x14ae314u;
    c->r[5] = 0x4u;
    { uint32_t ea = 0x58a8bcu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x14ae51cu;
    { uint32_t ea = 0x58a8c4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_58a8c0:;
    { uint32_t ea = c->r[6] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58a8fc; }
    { uint32_t ea = c->r[7] + c->r[5]; uint32_t v = LD16(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a8e0u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_58a8fc; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x58a8fcu; f_5c6b64(c);
L_58a8fc:;
    { uint32_t ea = c->r[6] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x34u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_58a8c0; }
    c->r[4] = 0x0u;
L_58a914:;
    c->r[0] = 0x14ae464u;
    c->r[1] = c->r[8];
    { uint32_t ea = 0x58a924u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a928u; f_723150(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_GT) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58a950(Cpu *restrict c) {
    FN_ENTER(0x58a950u);
L_58a950:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x4u;
    c->r[5] = c->r[0];
    c->r[14] = 0x58a960u; f_85cb3c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x58a96cu; f_58b34c(c);
    c->r[0] = 0x14ae3b0u;
    { uint32_t ea = 0x58a978u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a97cu; f_5ae21c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58abdc; }
    c->r[0] = 0x14ae398u;
    { uint32_t ea = 0x58a990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a994u; f_5a8c3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58a9b0; }
    c->r[0] = 0x14ae380u;
    { uint32_t ea = 0x58a9a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a9acu; f_5a9e38(c);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_58a9b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ae364u;
    { uint32_t ea = 0x58a9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a9c8u; f_5a8c3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58aa04; }
    c->r[0] = 0x14ae34cu;
    { uint32_t ea = 0x58a9dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a9e0u; f_5ae3b4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58aa04; }
    c->r[0] = 0x14ae334u;
    { uint32_t ea = 0x58a9f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58a9f8u; f_5a9e54(c);
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
L_58aa04:;
    c->r[0] = 0x14ae310u;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58aa18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58aa1cu; f_5a2900(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58aa38; }
    c->r[0] = 0x14ae2f8u;
    { uint32_t ea = 0x58aa30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58aa34u; f_5a9e68(c);
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
L_58aa38:;
    c->r[0] = 0x14ae2e4u;
    { uint32_t ea = 0x58aa44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58aa48u; f_5abb3c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58aa6c; }
    c->r[0] = 0x14ae384u;
    { uint32_t ea = 0x58aa5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58aa60u; f_5c7034(c);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x8fu; ST8(ea, c->r[0]); }
L_58aa6c:;
    c->r[0] = 0x14ae2acu;
    c->r[1] = 0x1667u;
    { uint32_t ea = 0x58aa7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58aaa8; }
    c->r[0] = 0x14ae2e0u;
    { uint32_t ea = 0x58aa94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58aa98u; f_5bc0ec(c);
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ae280u;
    { uint32_t ea = 0x58aaa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58aaa8:;
    c->r[1] = 0x1668u;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = sdiv32(c->r[2], c->r[1]);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = sdiv32(c->r[2], c->r[1]);
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ae28cu;
    { uint32_t ea = 0x58aaf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58aaf8u; f_475a30(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58abdc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x29u;
    c->r[14] = 0x58ab10u; f_46fe10(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58ab58; }
    c->r[0] = 0x14ae090u;
    { uint32_t ea = 0x58ab24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ab28u; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[0], 0x31u);
    if (COND_HI) { goto L_58abac; }
    c->v.s[0] = LD32(c->r[4] + 120u);
    c->v.s[2] = 0x3fc00000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    goto L_58abd8;
L_58ab58:;
    c->r[0] = c->r[5];
    c->r[1] = 0x42u;
    c->r[14] = 0x58ab64u; f_46fe3c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58abdc; }
    c->r[0] = 0x14ae03cu;
    { uint32_t ea = 0x58ab78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ab7cu; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[0], 0x31u);
    if (COND_HI) { goto L_58abbc; }
    c->v.s[0] = 0x3f866666u;
    c->v.s[2] = LD32(c->r[4] + 120u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    goto L_58abd8;
L_58abac:;
    c->v.s[0] = LD32(c->r[4] + 120u);
    c->v.s[2] = 0x3fe00000u;
    c->v.s[4] = 0x40000000u;
    goto L_58abc8;
L_58abbc:;
    c->v.s[0] = LD32(c->r[4] + 120u);
    c->v.s[2] = 0x3fa00000u;
    c->v.s[4] = 0x3fc00000u;
L_58abc8:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x50u);
    if (COND_CC) { c->v.s[4] = c->v.s[2]; }
    c->v.f[0] = c->v.f[4] * c->v.f[0];
L_58abd8:;
    ST32(c->r[4] + 120u, c->v.s[0]);
L_58abdc:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 104u);
    c->v.s[2] = LD32(c->r[4] + 120u);
    c->v.s[4] = LD32(c->r[4] + 124u);
    c->r[1] = c->r[1] + c->r[3];
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = c->r[1];
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->v.s[6] = c->r[0];
    c->r[0] = 0x14ae160u;
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[8] = (float)(int32_t)c->v.s[8];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = 0x58ac28u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[2] = (float)(int32_t)c->v.s[4];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[4] + 108u, c->v.s[2]);
    c->r[1] = c->v.s[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ac4cu; f_723150(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58aca4(Cpu *restrict c) {
    FN_ENTER(0x58aca4u);
L_58aca4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x58acb8u; f_85cb3c(c);
    c->r[10] = c->r[0];
    c->r[0] = 0x14afc20u;
    { uint32_t ea = 0x58acc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14ae054u;
    { uint32_t ea = 0x58acd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x58ace4u; f_366ad0(c);
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_58aedc; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[1] = c->r[6];
    c->r[4] = c->r[7] + (c->r[0] << 2);
    c->r[0] = 0x14ae06cu;
    { uint32_t ea = 0x58ad08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ad0cu; f_5b5ac0(c);
    c->r[11] = c->r[0];
    c->r[0] = 0x1244u;
    c->r[8] = 0x8889u;
    c->r[5] = 0xffu;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = 0x14ae040u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x88880000u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x58ad34u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x129f7e4u;
    c->r[0] = 0x58ad3cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x129f7d8u;
    c->r[0] = 0x58ad48u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_58ad48:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[10] + c->r[4];
    (void)f_subs(c, c->r[11], 0x1u);
    c->r[0] = c->r[0] & 0x3ffffu;
    { uint32_t ea = c->r[9] + 0xc4u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_58add4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58ae4c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8e39u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x38e30000u;
    c->r[3] = c->r[1];
    c->r[0] = (c->r[0] >> 18) & 0xffu;
    { uint64_t r = (uint64_t)c->r[0] * c->r[3]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 1);
    c->r[1] = c->r[1] + (c->r[1] << 3);
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { c->r[0] = 0xeu; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CS) { c->r[0] = c->r[5]; }
    { uint32_t ea = c->r[9] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 18) & 0xffu;
    { uint64_t r = (uint64_t)c->r[0] * c->r[3]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[1] >> 1);
    { uint64_t r = (uint64_t)c->r[0] * c->r[3]; c->r[0] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[2] >> 1);
    c->r[0] = c->r[0] + (c->r[0] << 3);
    c->r[0] = (c->r[1] >> 1) - c->r[0];
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { c->r[0] = 0xeu; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CS) { c->r[0] = c->r[5]; }
    goto L_58ae54;
L_58add4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58ae4c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 18) & 0xffu;
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 3);
    c->r[1] = (c->r[1] << 4);
    c->r[1] = c->r[1] - (c->r[2] >> 3);
    c->r[2] = c->r[0] - c->r[1];
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    (void)f_subs(c, c->r[2], 0xdu);
    if (COND_HI) { goto L_58ae10; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
L_58ae10:;
    { uint32_t ea = c->r[9] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 18) & 0xffu;
    { uint64_t r = (uint64_t)c->r[1] * c->r[8]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 3);
    { uint64_t r = (uint64_t)c->r[1] * c->r[8]; c->r[1] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[3] >> 3);
    c->r[1] = (c->r[1] << 4);
    c->r[1] = c->r[1] - (c->r[3] >> 3);
    c->r[1] = (c->r[2] >> 3) - c->r[1];
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_HI) { goto L_58ae54; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_58ae54;
L_58ae4c:;
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[9] + 0xb4u; ST32(ea, c->r[0]); }
L_58ae54:;
    { uint32_t ea = c->r[9] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 29);
    c->r[14] = 0x58ae70u; f_5c2f60(c);
    { uint32_t ea = c->r[9] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x18u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    (void)f_subs(c, c->r[4], 0x78u);
    { uint32_t ea = c->r[9] + 0xc8u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_58ad48; }
    c->r[0] = 0x14ade8cu;
    c->r[1] = 0x1741u;
    { uint32_t ea = 0x58ae9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x12cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1744u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x14aded0u;
    { uint32_t ea = 0x58aeb8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58aec4u; f_723194(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_58aee0;
L_58aedc:;
    c->r[0] = 0x0u;
L_58aee0:;
    { uint32_t ea = c->r[4] + 0x90u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58af0c(Cpu *restrict c) {
    FN_ENTER(0x58af0cu);
L_58af0c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x58af1cu; f_85cb3c(c);
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x14adde4u;
    { uint32_t ea = 0x58af44u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58af48u; f_5ae21c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_58afd4; }
    c->r[14] = 0x58af5cu; f_5a8c3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58af7c; }
    c->r[0] = 0x14addb4u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x58af74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58af78u; f_5a9f10(c);
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
L_58af7c:;
    { uint32_t ea = c->r[4] + 0x19cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58af98; }
    c->v.s[0] = LD32(c->r[5] + 64u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[5] + 68u, c->v.s[0]);
L_58af98:;
    c->r[0] = 0x14add7cu;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58afacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58afb0u; f_5a2900(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58afe4; }
    c->r[0] = 0x14add60u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x58afc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58afccu; f_5a9f10(c);
    c->r[1] = 0x12u;
    goto L_58afe0;
L_58afd4:;
    c->r[1] = 0x1u;
    c->r[14] = 0x58afdcu; f_5a9f10(c);
    c->r[1] = 0x10u;
L_58afe0:;
    { uint32_t ea = c->r[5] + (c->r[1] << 2); ST32(ea, c->r[0]); }
L_58afe4:;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14add88u;
    { uint32_t ea = 0x58aff8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58affcu; f_475a30(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b074; }
    c->r[1] = 0x3fu;
    c->r[14] = 0x58b00cu; f_46fe10(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58b074; }
    c->r[0] = 0x14adb94u;
    { uint32_t ea = 0x58b020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b024u; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[0], 0x31u);
    if (COND_HI) { goto L_58b054; }
    c->v.s[0] = LD32(c->r[5] + 80u);
    c->v.s[2] = 0x3fc00000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    goto L_58b070;
L_58b054:;
    c->v.s[2] = 0x3fe00000u;
    c->v.s[4] = 0x40000000u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = LD32(c->r[5] + 80u);
    (void)f_subs(c, c->r[0], 0x50u);
    if (COND_CC) { c->v.s[4] = c->v.s[2]; }
    c->v.f[0] = c->v.f[4] * c->v.f[0];
L_58b070:;
    ST32(c->r[5] + 80u, c->v.s[0]);
L_58b074:;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[5] + 52u);
    c->v.s[2] = LD32(c->r[5] + 56u);
    c->v.s[4] = LD32(c->r[5] + 60u);
    c->v.s[6] = LD32(c->r[5] + 68u);
    c->v.s[8] = LD32(c->r[5] + 80u);
    c->r[0] = c->r[1] + c->r[0];
    c->v.s[10] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[0] = 0x14adcd8u;
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = 0x58b0b0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.s[8] = LD32(c->r[5] + 76u);
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[2] = (float)(int32_t)c->v.s[6];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.f[4] = (float)(int32_t)c->v.s[8];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[5] + 84u, c->v.s[2]);
    c->r[1] = c->v.s[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b0e8u; f_723194(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { c->r[0] = 0x1u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x90u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58b124(Cpu *restrict c) {
    FN_ENTER(0x58b124u);
L_58b124:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14adbe8u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58b140u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b144u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58b214; }
    c->r[0] = 0x14adbd0u;
    { uint32_t ea = 0x58b158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b15cu; f_5a9e7c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_58b214; }
    c->r[0] = 0x14adbb8u;
    { uint32_t ea = 0x58b170u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b174u; f_5a9ea4(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x58b188u; f_85cb3c(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x14adb90u;
    { uint32_t ea = 0x58b198u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b19cu; f_5a9ea4(c);
    c->r[1] = 0x129f090u;
    c->r[1] = 0x58b1a8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b1b4u; f_5a9e7c(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x14adbb8u;
    { uint32_t ea = c->r[4] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[3] = c->r[5];
    { uint32_t ea = 0x58b1d0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b1d4u; f_723a80(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b1dcu; f_5a9e90(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[3] = c->r[6];
    c->r[14] = 0x58b1f4u; f_723a80(c);
    c->r[0] = c->r[6] + c->r[5];
    c->r[1] = ~0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b210u; f_723b0c(c);
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
L_58b214:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_58b230(Cpu *restrict c) {
    FN_ENTER(0x58b230u);
L_58b230:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[14] = 0x58b23cu; f_58b808(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x4u;
    c->r[14] = 0x58b248u; f_85cb3c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x92u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b29c; }
    c->r[0] = 0x14adb78u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x58b268u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b26cu; f_5c6d44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b29c; }
    c->r[1] = 0x514u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[1]); }
    c->r[14] = 0x58b288u; f_2e715c(c);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x170u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
L_58b29c:;
    { uint32_t ea = c->r[5] + 0x93u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b2ec; }
    c->r[0] = 0x14adb28u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x58b2b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b2bcu; f_5c6d44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b2ec; }
    c->r[1] = 0x514u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[1]); }
    c->r[14] = 0x58b2d8u; f_2e715c(c);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x178u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
L_58b2ec:;
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b33c; }
    c->r[0] = 0x14adad8u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x58b308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b30cu; f_5c6d44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x514u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[1]); }
    c->r[14] = 0x58b328u; f_2e715c(c);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x180u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
L_58b33c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58b34c(Cpu *restrict c) {
    FN_ENTER(0x58b34cu);
L_58b34c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[1] = 0x4u;
    c->r[4] = c->r[0];
    c->r[14] = 0x58b35cu; f_85cb3c(c);
    c->r[8] = c->r[0];
    c->r[0] = 0x14ada64u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x58b37cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0xb10u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58b3dc; }
    c->r[0] = 0x14ad83cu;
    { uint32_t ea = 0x58b394u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_58b390:;
    { uint32_t ea = c->r[6] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b3a4u; f_394228(c);
    { uint32_t ea = c->r[6] + 0xad8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[1] = c->r[1] + c->r[7];
    c->r[7] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_58b390; }
    c->r[0] = 0x14ada08u;
    { uint32_t ea = 0x58b3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_58b3f4;
L_58b3dc:;
    { uint32_t ea = c->r[6] + 0xb12u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58b3f4; }
    { uint32_t ea = c->r[6] + 0xb13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b4d0; }
L_58b3f4:;
    { uint32_t ea = c->r[6] + 0xb12u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58b458; }
    c->r[0] = 0x14ad7bcu;
    { uint32_t ea = c->r[6] + 0xae8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = 0x58b414u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_58b410:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b424u; f_394228(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[1] = c->r[1] + c->r[6];
    c->r[6] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_58b410; }
    c->r[0] = 0x14ad988u;
    { uint32_t ea = 0x58b458u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_58b458:;
    { uint32_t ea = c->r[6] + 0xb13u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58b4b4; }
    c->r[0] = 0x14ad758u;
    { uint32_t ea = c->r[6] + 0xae8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = 0x58b478u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_58b474:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b488u; f_394228(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[1] = c->r[1] + c->r[6];
    c->r[6] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_58b474; }
    goto L_58b4b8;
L_58b4b4:;
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58b4b8:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_58b4d0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_58b4ec(Cpu *restrict c) {
    FN_ENTER(0x58b4ecu);
L_58b4ec:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x14ad820u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x58b508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b50cu; f_5a9f54(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_58b52c; }
    c->r[0] = 0x14ad8c0u;
    { uint32_t ea = 0x58b520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b524u; f_5c7134(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b7bc; }
L_58b52c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x58b538u; f_85cb3c(c);
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x14ad7d8u;
    { uint32_t ea = 0x58b550u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b554u; f_5ae21c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x58b568u; f_5a9f54(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_58b614; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_58b5e4; }
    c->r[0] = 0x14ad7a4u;
    { uint32_t ea = 0x58b584u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b588u; f_5a8c3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58b5a8; }
    c->r[0] = 0x14ad788u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x58b5a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b5a4u; f_5a9f54(c);
    { uint32_t ea = c->r[6] + 0xf0u; ST32(ea, c->r[0]); }
L_58b5a8:;
    c->r[0] = 0x14ad76cu;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58b5bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b5c0u; f_5a2900(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58b5f0; }
    c->r[0] = 0x14ad750u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x58b5d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b5dcu; f_5a9f54(c);
    c->r[1] = 0x3du;
    goto L_58b5ec;
L_58b5e4:;
    c->r[0] = ~0xeu;
    c->r[1] = 0x3cu;
L_58b5ec:;
    { uint32_t ea = c->r[6] + (c->r[1] << 2); ST32(ea, c->r[0]); }
L_58b5f0:;
    c->r[0] = 0x14ad72cu;
    { uint32_t ea = 0x58b5fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b600u; f_5ae378(c);
    c->r[1] = c->r[0] + (c->r[0] << 2);
    c->r[1] = 0x0u - c->r[1];
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = c->r[6] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x108u; ST32(ea, c->r[0]); }
L_58b614:;
    c->r[0] = 0x14ad7b8u;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { c->r[7] = 0x1u; }
    { uint32_t ea = 0x58b628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b62cu; f_5c7134(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b668; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_58b668; }
    c->r[0] = 0x14ad6e0u;
    { uint32_t ea = 0x58b648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b64cu; f_5abb3c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58b668; }
    c->r[0] = 0x14ad780u;
    { uint32_t ea = 0x58b660u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b664u; f_5c7134(c);
    { uint32_t ea = c->r[6] + 0xf8u; ST32(ea, c->r[0]); }
L_58b668:;
    c->r[0] = 0x14ad70cu;
    { uint32_t ea = 0x58b674u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b678u; f_475a30(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b6e0; }
    c->r[1] = 0x1bu;
    c->r[14] = 0x58b688u; f_46fe10(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58b6e0; }
    { uint32_t ea = c->r[6] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_58b6b4; }
    c->v.s[2] = c->r[0];
    c->v.s[0] = 0x3fc00000u;
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[6] + 240u, c->v.s[0]);
L_58b6b4:;
    c->v.s[0] = LD32(c->r[6] + 244u);
    c->v.s[2] = 0x3fc00000u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[6] + 244u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 248u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[6] + 248u, c->v.s[0]);
L_58b6e0:;
    { uint32_t ea = c->r[6] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x104u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[0] + c->r[3];
    c->r[0] = 0x14ad67cu;
    { uint32_t ea = c->r[6] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x58b70cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b710u; f_723700(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x10cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x58b724u; f_723504(c);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_GE) { goto L_58b764; }
    c->r[0] = 0x14af1b0u;
    { uint32_t ea = 0x58b738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x14ad644u;
    { uint32_t ea = 0x58b744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b748u; f_723504(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = c->r[4] + 0x2f8u;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x58b764u; f_3636a8(c);
L_58b764:;
    c->r[0] = 0x14ad618u;
    { uint32_t ea = 0x58b770u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b774u; f_723504(c);
    { uint32_t ea = c->r[6] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e7u;
    { uint32_t ea = c->r[6] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { goto L_58b790; }
    c->r[6] = c->r[6] + 0x110u;
    goto L_58b7b4;
L_58b790:;
    c->r[0] = 0x14ad5e4u;
    c->r[1] = c->r[1] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = 0x58b7a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b7a8u; f_723390(c);
    { uint32_t ea = c->r[6] + 0x110u; ST32(ea, c->r[0]); c->r[6] = ea; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_58b7bc; }
L_58b7b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_58b7bc:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_58b808(Cpu *restrict c) {
    FN_ENTER(0x58b808u);
L_58b808:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[8] = c->r[0];
    c->r[0] = 0x14ad508u;
    { uint32_t ea = 0x58b820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b824u; f_5a75b0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58b844; }
    c->r[0] = 0x14ad4f0u;
    { uint32_t ea = 0x58b838u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b83cu; f_5ae744(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58b84c; }
L_58b844:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_58b84c:;
    c->r[0] = 0x14ad588u;
    { uint32_t ea = 0x58b858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58b8d8; }
    c->r[1] = 0x14ad344u;
    c->r[5] = 0x0u;
    c->r[10] = 0x1674u;
    { uint32_t ea = 0x58b878u + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x14ad560u;
    { uint32_t ea = 0x58b880u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14ad4a0u;
    { uint32_t ea = 0x58b888u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x14ad32cu;
    { uint32_t ea = 0x58b890u + c->r[1]; uint32_t v = LD32(ea); c->r[11] = v; }
L_58b88c:;
    c->r[1] = c->r[5];
    c->r[14] = 0x58b894u; f_5c6dcc(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x58b8a4u; f_45f840(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58b8c4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 1);
    { uint32_t ea = c->r[0] + c->r[10]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b8c4u; f_464ed8(c);
L_58b8c4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_58b88c; }
L_58b8d8:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_5905c8(c);
}
void f_58b904(Cpu *restrict c) {
    FN_ENTER(0x58b904u);
L_58b904:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x14ad414u;
    { uint32_t ea = 0x58b914u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_58b928; }
    c->r[14] = 0x58b924u; f_74b0d4(c);
    goto L_58bb10;
L_58b928:;
    c->r[14] = 0x58b92cu; f_5a340c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ba88; }
    c->r[0] = 0x14ad27cu;
    { uint32_t ea = 0x58b940u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b944u; f_46248c(c);
    c->r[0] = 0x14ad430u;
    c->r[1] = 0x3670u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58b958u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); c->r[0] = ea; }
    c->r[1] = 0x2acu;
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    c->r[0] = 0x14ad764u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58b97cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    c->r[14] = 0x58b984u; f_444f14(c);
    c->r[0] = 0x14ad630u;
    { uint32_t ea = 0x58b990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b994u; f_70636c(c);
    c->r[0] = 0x14ad230u;
    { uint32_t ea = 0x58b9a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b9a4u; f_395758(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x95cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58b9c4; }
    c->r[0] = 0x14ad1fcu;
    { uint32_t ea = 0x58b9c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b9c4u; f_45c288(c);
L_58b9c4:;
    c->r[0] = 0x14ad200u;
    { uint32_t ea = 0x58b9d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b9d4u; f_396474(c);
    c->r[0] = 0x14ad3fcu;
    { uint32_t ea = 0x58b9e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b9e4u; f_35d8d8(c);
    c->r[0] = 0x14ad5ccu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x58b9f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58b9f8u; f_70d794(c);
    c->r[0] = 0x14ad7c0u;
    { uint32_t ea = 0x58ba04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ba08u; f_3a57a0(c);
    c->r[0] = 0x14ad980u;
    { uint32_t ea = 0x58ba14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ba18u; f_345bbc(c);
    c->r[0] = 0x14aee34u;
    { uint32_t ea = 0x58ba24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ba28u; f_3c8cc8(c);
    c->r[0] = 0x14ad188u;
    { uint32_t ea = 0x58ba34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ba38u; f_45aee0(c);
    c->r[0] = 0x14ad398u;
    c->r[1] = 0x1156u;
    { uint32_t ea = 0x58ba48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58ba74; }
    c->r[1] = 0x10cdu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_58ba74; }
    c->r[0] = 0x14ad318u;
    { uint32_t ea = 0x58ba70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ba74u; f_723b7c(c);
L_58ba74:;
    c->r[0] = 0x14ad13cu;
    { uint32_t ea = 0x58ba80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ba84u; f_462acc(c);
    c->r[14] = 0x58ba88u; f_74b1c4(c);
L_58ba88:;
    c->r[0] = 0x14ad64cu;
    { uint32_t ea = 0x58ba94u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ba98u; f_440b0c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58baa0u; f_440b30(c);
    c->r[0] = 0x14ad274u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58bab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bab8u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58bad0; }
    c->r[0] = 0x14ad614u;
    { uint32_t ea = 0x58baccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bad0u; f_4481ac(c);
L_58bad0:;
    c->r[0] = 0x14ad24cu;
    { uint32_t ea = 0x58badcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bae0u; f_5ae744(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58baecu; f_5a75b0(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_58bb10; }
    c->r[0] = 0x14ad0b8u;
    { uint32_t ea = 0x58bb04u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bb08u; f_45ec74(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bb10u; f_4625cc(c);
L_58bb10:;
    c->r[0] = 0x14ad0a8u;
    { uint32_t ea = 0x58bb1cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bb20u; f_6d31ac(c);
    c->r[14] = 0x58bb24u; f_6d0070(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bb2cu; f_6d31bc(c);
    c->r[14] = 0x58bb30u; f_6d0070(c);
    c->r[0] = 0x14ad080u;
    { uint32_t ea = 0x58bb3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bb40u; f_45d484(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58bb80; }
    c->r[0] = 0x14ad234u;
    { uint32_t ea = 0x58bb54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x95cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58bb78; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0x964u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x96cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0x96cu; ST32(ea, c->r[2]); }
L_58bb78:;
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x95cu; ST32(ea, c->r[1]); }
L_58bb80:;
    c->r[0] = 0x14ad250u;
    { uint32_t ea = 0x58bb8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bb90u; f_35d978(c);
    c->r[0] = 0x14ad1fcu;
    { uint32_t ea = 0x58bb9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bba0u; f_391474(c);
    c->r[0] = 0x14ad530u;
    c->r[1] = 0x48u;
    { uint32_t ea = 0x58bbb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x5c0u;
    c->r[14] = 0x58bbb8u; f_15efdac(c);
    c->r[0] = 0x14ad164u;
    { uint32_t ea = 0x58bbc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bbc8u; f_5a340c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58bbf0; }
    c->r[1] = 0x14ad148u;
    c->r[0] = 0x14ad1c0u;
    { uint32_t ea = 0x58bbe0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58bbe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x58bbf0u; f_5d754c(c);
L_58bbf0:;
    c->r[0] = 0x14ad180u;
    { uint32_t ea = 0x58bbfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bc00u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58bc1c; }
    c->r[0] = 0x14ad164u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x58bc18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63bu; ST8(ea, c->r[1]); }
L_58bc1c:;
    c->r[0] = 0x14acfb0u;
    { uint32_t ea = 0x58bc28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_761fb0(c);
}
void f_58bcb8(Cpu *restrict c) {
    FN_ENTER(0x58bcb8u);
L_58bcb8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[1] = 0x4u;
    c->r[11] = c->r[0];
    c->r[14] = 0x58bcccu; f_85cb3c(c);
    c->r[9] = 0x0u;
    c->r[5] = c->r[11];
    c->r[8] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[5] + 0x194u; ST32(ea, c->r[9]); c->r[5] = ea; }
    goto L_58cc64;
L_58bce0:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x58bcf0u; f_58ddf4(c);
L_58bcf0:;
    c->r[9] = c->r[9] + 0x1u;
    goto L_58cc64;
L_58bcf8:;
    c->r[0] = 0x14ad084u;
    { uint32_t ea = 0x58bd04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    goto L_58cb18;
L_58bd20:;
    c->r[0] = 0x14ad05cu;
    { uint32_t ea = 0x58bd2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x5u;
    goto L_58cb18;
L_58bd48:;
    c->r[0] = 0x14ad034u;
    { uint32_t ea = 0x58bd54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x6u;
    goto L_58cb18;
L_58bd70:;
    c->r[0] = 0x0u;
L_58bd74:;
    c->r[1] = 0x14ad004u;
    c->r[2] = (c->r[0] >> 5);
    { uint32_t ea = 0x58bd84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0xd1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bdcc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x7u;
    c->r[2] = (c->r[2] << 3) - c->r[2];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] << 3) - c->r[2];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
L_58bdcc:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_58bd74; }
    goto L_58cc58;
L_58bddc:;
    c->r[0] = 0x14acf98u;
    c->r[2] = 0xffffu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = 0x58bdf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    c->r[14] = 0x58be00u; f_7262b4(c);
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_58bcf0; }
    c->r[2] = 0x402u;
    c->r[1] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40000u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x9u;
    c->r[2] = (c->r[2] << 3) - c->r[2];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] << 3) - c->r[2];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    goto L_58cb38;
L_58be48:;
    c->r[0] = 0x14ae9f4u;
    { uint32_t ea = c->r[11] + 0x1ccu; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[10] = 0x0u;
    c->r[6] = c->r[11];
    c->r[11] = 0x0u;
    { uint32_t ea = 0x58be64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_CC) { c->r[10] = 0x1u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58be70u; f_3c8ca8(c);
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_HI) { c->r[12] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_CC) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x6u);
    if (COND_CC) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x9u);
    c->r[7] = 0x0u;
    if (COND_CC) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { c->r[11] = 0x1u; }
    { uint32_t r = c->r[7] & c->r[11]; c->nf = r >> 31; c->zf = r == 0; }
    c->r[11] = c->r[6];
    if (COND_NE) { goto L_58bee4; }
    { uint32_t r = c->r[4] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_58bee4; }
    c->r[0] = c->r[10] & c->r[12];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58bcf0; }
L_58bee4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xau;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ad1b8u;
    { uint32_t ea = 0x58bf28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_58bfc0;
L_58bf28:;
    c->r[0] = 0x14ae920u;
    { uint32_t ea = c->r[11] + 0x1ccu; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = 0x58bf38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bf3cu; f_3c8ca8(c);
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_HI) { goto L_58bcf0; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_CC) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xbu;
    goto L_58cb18;
L_58bf5c:;
    c->r[0] = 0x14ae8ecu;
    { uint32_t ea = c->r[11] + 0x1ccu; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = 0x58bf6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58bf70u; f_3c8ca8(c);
    (void)f_subs(c, c->r[4], 0x7u);
    if (COND_HI) { goto L_58bcf0; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CC) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xcu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ad11cu;
    { uint32_t ea = 0x58bfc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58bfc0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe7u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[0] + 0x500u;
    c->r[14] = 0x58bfd4u; f_444f14(c);
    c->r[9] = c->r[9] + 0x1u;
    goto L_58cc64;
L_58bfdc:;
    c->r[0] = 0x14acda0u;
    { uint32_t ea = 0x58bfe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c03c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xdu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14acd50u;
    { uint32_t ea = 0x58c038u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
L_58c03c:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c088; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xdu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14acd00u;
    { uint32_t ea = 0x58c088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c088:;
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c0dc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xdu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14accb0u;
    { uint32_t ea = 0x58c0d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c0dc:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cc58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xdu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x4u;
    goto L_58ca88;
L_58c110:;
    c->r[0] = 0x14acc6cu;
    { uint32_t ea = 0x58c11cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xeu;
    goto L_58cb18;
L_58c138:;
    c->r[0] = 0x14acc44u;
    { uint32_t ea = 0x58c144u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c198; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14acbf4u;
    { uint32_t ea = 0x58c194u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
L_58c198:;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c1e4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14acba4u;
    { uint32_t ea = 0x58c1e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c1e4:;
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c238; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14acb54u;
    { uint32_t ea = 0x58c234u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c238:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cc58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x3u;
    goto L_58ca88;
L_58c26c:;
    c->r[0] = 0x14acb10u;
    { uint32_t ea = 0x58c278u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c2cc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14acac0u;
    { uint32_t ea = 0x58c2c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c2cc:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cc58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x1u;
    goto L_58ca88;
L_58c300:;
    c->r[0] = 0x0u;
L_58c304:;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[1] = sh_lsl(c->r[2], c->r[1]);
    c->r[2] = (c->r[0] >> 5);
L_58c318:;
    c->r[7] = 0x14b05b8u;
    { uint32_t ea = 0x58c324u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_58c37c; }
    c->r[7] = 0x14aca50u;
    { uint32_t ea = 0x58c338u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[7] + 0x984u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c37c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x11u;
    c->r[4] = (c->r[4] << 3) - c->r[4];
    { uint32_t ea = c->r[7] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = (c->r[6] << 3) - c->r[6];
    c->r[7] = c->r[7] + (c->r[6] << 2);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
L_58c37c:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], 0x9u);
    if (COND_NE) { goto L_58c318; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x2du);
    if (COND_NE) { goto L_58c304; }
    goto L_58cc58;
L_58c398:;
    c->r[0] = 0x14ac9e4u;
    { uint32_t ea = 0x58c3a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c3f8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x12u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac994u;
    { uint32_t ea = 0x58c3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c3f8:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c448; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x12u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac944u;
    { uint32_t ea = 0x58c444u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c448:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cc58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x12u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x2u;
    goto L_58ca88;
L_58c47c:;
    c->r[0] = 0x14ac900u;
    { uint32_t ea = 0x58c488u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c508; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c4c0; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x13u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c4c4;
L_58c4c0:;
    c->r[0] = 0x0u;
L_58c4c4:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac884u;
    { uint32_t ea = 0x58c504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c508:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cc58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c53c; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x13u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c540;
L_58c53c:;
    c->r[0] = 0x0u;
L_58c540:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x13u;
    goto L_58ca70;
L_58c550:;
    c->r[0] = 0x14ac82cu;
    { uint32_t ea = 0x58c55cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c5dc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c594; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x14u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c598;
L_58c594:;
    c->r[0] = 0x0u;
L_58c598:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x14u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac7b0u;
    { uint32_t ea = 0x58c5d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
L_58c5dc:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c658; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c610; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x14u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c614;
L_58c610:;
    c->r[0] = 0x0u;
L_58c614:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x14u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac734u;
    { uint32_t ea = 0x58c654u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
L_58c658:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c6d0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c68c; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x14u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c690;
L_58c68c:;
    c->r[0] = 0x0u;
L_58c690:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x14u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac6b8u;
    { uint32_t ea = 0x58c6d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c6d0:;
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c750; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c708; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x14u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c70c;
L_58c708:;
    c->r[0] = 0x0u;
L_58c70c:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x14u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac63cu;
    { uint32_t ea = 0x58c74cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c750:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cc58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c784; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x14u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c788;
L_58c784:;
    c->r[0] = 0x0u;
L_58c788:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x14u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x6u;
    goto L_58ca88;
L_58c7b0:;
    c->r[0] = 0x14ac5ccu;
    { uint32_t ea = 0x58c7bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c83c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c7f4; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x15u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c7f8;
L_58c7f4:;
    c->r[0] = 0x0u;
L_58c7f8:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac550u;
    { uint32_t ea = 0x58c838u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
L_58c83c:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c8b8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c870; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x15u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c874;
L_58c870:;
    c->r[0] = 0x0u;
L_58c874:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac4d4u;
    { uint32_t ea = 0x58c8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
L_58c8b8:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c930; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c8ec; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x15u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c8f0;
L_58c8ec:;
    c->r[0] = 0x0u;
L_58c8f0:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac458u;
    { uint32_t ea = 0x58c930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c930:;
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58c9b0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c968; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x15u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c96c;
L_58c968:;
    c->r[0] = 0x0u;
L_58c96c:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac3dcu;
    { uint32_t ea = 0x58c9acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58c9b0:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58ca2c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58c9e4; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x15u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58c9e8;
L_58c9e4:;
    c->r[0] = 0x0u;
L_58c9e8:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ac360u;
    { uint32_t ea = 0x58ca28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD32(ea); c->r[0] = v; }
L_58ca2c:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cc58; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58ca60; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[3] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x15u);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); } }
    goto L_58ca64;
L_58ca60:;
    c->r[0] = 0x0u;
L_58ca64:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[2] = 0x15u;
L_58ca70:;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
L_58ca88:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    goto L_58cc58;
L_58ca9c:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x58caacu; f_58df54(c);
    c->r[9] = c->r[9] + 0x1u;
    goto L_58cc64;
L_58cab4:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x58cac4u; f_58e0b4(c);
    c->r[9] = c->r[9] + 0x1u;
    goto L_58cc64;
L_58cacc:;
    c->r[0] = 0x14ac2b0u;
    { uint32_t ea = 0x58cad8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x18u;
    goto L_58cb18;
L_58caf4:;
    c->r[0] = 0x14ac288u;
    { uint32_t ea = 0x58cb00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x964u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x19u;
L_58cb18:;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_58cb38:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    goto L_58cc64;
L_58cb4c:;
    c->r[4] = 0x0u;
L_58cb50:;
    c->r[0] = (c->r[4] >> 5);
    c->r[1] = 0x1u;
    c->r[0] = c->r[11] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[1], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58cbc4; }
    c->r[0] = 0x14afd5cu;
    { uint32_t ea = 0x58cb74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14ac1a8u;
    { uint32_t ea = 0x58cb80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58cb88u; f_5b2174(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58cbc4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1au;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_58cbc4:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x12u);
    if (COND_NE) { goto L_58cb50; }
    goto L_58cc58;
L_58cbd4:;
    c->r[4] = 0x0u;
L_58cbd8:;
    c->r[0] = (c->r[4] >> 5);
    c->r[1] = 0x1u;
    c->r[0] = c->r[11] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[1], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58cc4c; }
    c->r[0] = 0x14afcd8u;
    { uint32_t ea = 0x58cbfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14ac120u;
    { uint32_t ea = 0x58cc08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58cc10u; f_5b2174(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58cc4c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1bu;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_58cc4c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x11u);
    if (COND_NE) { goto L_58cbd8; }
L_58cc58:;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x1cu);
    if (COND_EQ) { goto L_58cda0; }
L_58cc64:;
    c->r[0] = c->r[9] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1au);
    if (COND_HI) { goto L_58cc58; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x58cc7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x58bce0u: goto L_58bce0; case 0x58bcf8u: goto L_58bcf8; case 0x58bd20u: goto L_58bd20; case 0x58bd48u: goto L_58bd48; case 0x58bd70u: goto L_58bd70; case 0x58bddcu: goto L_58bddc; case 0x58be48u: goto L_58be48; case 0x58bf28u: goto L_58bf28; case 0x58bf5cu: goto L_58bf5c; case 0x58bfdcu: goto L_58bfdc; case 0x58c110u: goto L_58c110; case 0x58c138u: goto L_58c138; case 0x58c26cu: goto L_58c26c; case 0x58c300u: goto L_58c300; case 0x58c398u: goto L_58c398; case 0x58c47cu: goto L_58c47c; case 0x58c550u: goto L_58c550; case 0x58c7b0u: goto L_58c7b0; case 0x58ca9cu: goto L_58ca9c; case 0x58cab4u: goto L_58cab4; case 0x58caccu: goto L_58cacc; case 0x58caf4u: goto L_58caf4; case 0x58cb4cu: goto L_58cb4c; case 0x58cbd4u: goto L_58cbd4; case 0x58ccf0u: goto L_58ccf0; case 0x58cd10u: goto L_58cd10; case 0x58cd34u: goto L_58cd34; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_58ccf0:;
    { uint32_t ea = c->r[11] + 0x19du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    goto L_58cb18;
L_58cd10:;
    { uint32_t ea = c->r[11] + 0x19eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58bcf0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    goto L_58cb18;
L_58cd34:;
    c->r[0] = 0x0u;
L_58cd38:;
    c->r[1] = 0x14ac040u;
    c->r[2] = (c->r[0] >> 5);
    { uint32_t ea = 0x58cd48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[1] + 0x974u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58cd90; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x3u;
    c->r[2] = (c->r[2] << 3) - c->r[2];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] << 3) - c->r[2];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
L_58cd90:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_NE) { goto L_58cd38; }
    goto L_58cc58;
L_58cda0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x95u; ST8(ea, c->r[0]); } }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58ce60(Cpu *restrict c) {
    FN_ENTER(0x58ce60u);
L_58ce60:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x94u;
    c->r[1] = 0x14abf68u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x58ce78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x4u;
    c->r[14] = 0x58ce80u; f_85cb3c(c);
    c->r[0] = 0x14abe98u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x58ce90u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ce94u; f_5a9f54(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[14] = 0x58cea8u; f_5a5ed0(c);
    c->r[12] = c->r[6];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58d254; }
    (void)f_subs(c, c->r[12], 0x14u);
    if (COND_CC) { goto L_58d254; }
    { uint32_t ea = c->r[8] + 0xbf1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58d254; }
    c->r[0] = 0x375cu;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58d254; }
    c->r[1] = 0x3743u;
    c->r[3] = 0x3754u;
    c->r[7] = 0xd56u;
    c->r[4] = 0xd758u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x31cfu;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x31ccu;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2c5bu;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2c58u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x26e7u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x26e4u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c1cu;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16b8u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1154u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] + 0x3740u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] + 0x2180u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x14abde8u;
    { uint32_t ea = 0x58cf8cu + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x14abd94u;
    { uint32_t ea = 0x58cf94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x14ad944u;
    { uint32_t ea = 0x58cfa4u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x14ad93cu;
    { uint32_t ea = 0x58cfacu + c->r[1]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x14ad934u;
    { uint32_t ea = 0x58cfb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x14ad928u;
    { uint32_t ea = 0x58cfc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    goto L_58d06c;
L_58cfc4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_58cfe8; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_58d054; }
L_58cfe8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_58d00c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_58d054; }
L_58d00c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_58d030; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_58d054; }
L_58d030:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_58d228; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58d228; }
L_58d054:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x574u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[8]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x26b8u;
    goto L_58d150;
L_58d06c:;
    c->r[1] = c->r[8] + c->r[11];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_EQ) { goto L_58d244; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_58d244; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d0a8u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[7] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[7] | (c->r[2] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_58d13c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_58d13c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_58d13c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_58cfc4; }
L_58d13c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x564u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[8]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x1108u;
L_58d150:;
    c->r[4] = c->r[13] + 0x70u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x20u;
    c->r[3] = 0x10u;
    c->r[2] = c->r[4];
    c->r[14] = 0x58d168u; f_9ca420(c);
    c->r[1] = c->r[4];
    c->r[8] = c->r[13] + 0x58u;
    c->r[6] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    c->r[4] = 0x0u;
    c->r[7] = 0x18f4u;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
L_58d190:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[14] = 0x58d19cu; f_364900(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58d1e0; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5] + 0x8b0u;
    c->r[1] = c->r[6];
    c->r[14] = 0x58d1bcu; f_365128(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58d1e0; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d1d8u; f_366a80(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_58d1f4; }
L_58d1e0:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = c->r[7] + 0x2cu;
    (void)f_subs(c, c->r[4], 0x64u);
    if (COND_CC) { goto L_58d190; }
    goto L_58d224;
L_58d1f4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d204u; f_366b7c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x869fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x4cu;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[1]); }
L_58d224:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[8] = v; }
L_58d228:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x3754u;
    c->r[7] = 0xd56u;
    c->r[4] = 0xd758u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_58d244:;
    c->r[11] = c->r[11] + 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[11], c->r[1]);
    if (COND_CC) { goto L_58d06c; }
L_58d254:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x14u);
    c->r[1] = 0x0u;
    if (COND_CC) { c->r[1] = 0x1u; }
    c->r[14] = 0x58d268u; f_58f454(c);
    c->r[0] = 0x14abb6cu;
    { uint32_t ea = 0x58d274u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d278u; f_5c5b48(c);
    c->r[0] = 0x14ad65cu;
    c->r[1] = 0xffu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58d28cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d290u; f_361ac8(c);
    c->r[13] = c->r[13] + 0x94u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58d2c0(Cpu *restrict c) {
    FN_ENTER(0x58d2c0u);
L_58d2c0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14abab4u;
    { uint32_t ea = 0x58d2d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d2d8u; f_723504(c);
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_CC) { goto L_58d398; }
    c->r[1] = 0x14aba38u;
    c->r[0] = 0x14aba80u;
    { uint32_t ea = 0x58d2f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58d2f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x58d304u; f_5b5bb4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58d350; }
    { uint32_t ea = c->r[4] + 0x19cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58d350; }
    c->r[0] = 0x14aba4cu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x58d328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d32cu; f_5b98cc(c);
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { goto L_58d350; }
    c->r[0] = 0x14abd98u;
    c->r[1] = 0x5e4u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58d348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    c->r[14] = 0x58d350u; f_444f14(c);
L_58d350:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x63u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x129d15cu;
    c->r[4] = 0x0u;
    c->r[7] = 0x42cu;
    c->r[5] = 0x58d370u + c->r[0];
    c->r[0] = 0x14aba10u;
    { uint32_t ea = 0x58d378u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_58d374:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x58d384u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_58d39c; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x11u);
    if (COND_LS) { goto L_58d374; }
L_58d398:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_58d39c:;
    c->r[0] = 0x14abd30u;
    c->r[1] = 0x5e4u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58d3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_444f14(c);
}
void f_58d3dc(Cpu *restrict c) {
    FN_ENTER(0x58d3dcu);
L_58d3dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14ab7e4u;
    c->r[1] = 0xbu;
    { uint32_t ea = 0x58d3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d3f8u; f_75d2b4(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58d45c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_HI) { goto L_58d45c; }
    c->r[1] = (c->r[2] << 2);
    c->r[2] = 0x58d41cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x58d438u: goto L_58d438; case 0x58d440u: goto L_58d440; case 0x58d448u: goto L_58d448; case 0x58d450u: goto L_58d450; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_58d438:;
    c->r[0] = c->r[0] + 0x5cu;
    goto L_58d454;
L_58d440:;
    c->r[0] = c->r[0] + 0x64u;
    goto L_58d454;
L_58d448:;
    c->r[0] = c->r[0] + 0x6cu;
    goto L_58d454;
L_58d450:;
    c->r[0] = c->r[0] + 0x74u;
L_58d454:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 2);
L_58d45c:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58d468(Cpu *restrict c) {
    FN_ENTER(0x58d468u);
L_58d468:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[2];
    c->r[2] = c->r[1];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_58d56c; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x161u;
    c->r[3] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[3], 0x5u);
    if (COND_HI) { goto L_58d4ec; }
    c->r[0] = 0x2u;
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[3], 0x4u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); c->r[1] = c->r[1] + 0x8u; }
    if (COND_CS) { goto L_58d51c; }
    c->r[0] = 0x14ad374u;
    c->r[8] = c->r[13] + 0x4u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x58d4c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x58d4c8u; f_34bba8(c);
    c->r[0] = c->r[8] + 0x4u;
    c->r[1] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[14] = 0x58d4e8u; f_2dad24(c);
    goto L_58d558;
L_58d4ec:;
    c->r[1] = 0x1u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); c->r[5] = c->r[5] + 0x4u; }
    c->r[1] = c->r[2];
    c->r[2] = c->r[5];
    c->r[14] = 0x58d504u; f_58d6dc(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_58d564; }
    goto L_58d56c;
L_58d51c:;
    c->r[0] = 0x166u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_58d544; }
    c->r[0] = 0x165u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_58d558; }
    c->r[0] = 0x14ab688u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58d544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_58d550;
L_58d544:;
    c->r[0] = 0x14ab678u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58d554u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58d550:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d558u; f_33f70c(c);
L_58d558:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1fu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58d56c; }
L_58d564:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_58d56c:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_58d580(Cpu *restrict c) {
    FN_ENTER(0x58d580u);
L_58d580:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14ab644u;
    c->r[1] = 0xbu;
    { uint32_t ea = 0x58d594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d598u; f_75d2b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58d5ac(Cpu *restrict c) {
    FN_ENTER(0x58d5acu);
L_58d5ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[0] = 0x14ab60cu;
    c->r[5] = c->r[1];
    c->r[1] = 0xbu;
    c->r[4] = c->r[2];
    { uint32_t ea = 0x58d5ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d5d0u; f_75d2b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58d61c; }
    c->r[0] = 0x64u;
    c->r[1] = c->r[4] + (c->r[4] << 2);
    { uint32_t r = c->r[6] * c->r[0] + c->r[5]; c->r[0] = r; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    (void)f_subs(c, c->r[0], 0x95u);
    if (COND_HI) { goto L_58d61c; }
    c->r[1] = 0x14ab7e4u;
    { uint32_t ea = 0x58d5fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xb08u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x14ab5bcu;
    { uint32_t ea = 0x58d614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_394228(c);
L_58d61c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58d630(Cpu *restrict c) {
    FN_ENTER(0x58d630u);
L_58d630:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[0] = 0x14ab588u;
    c->r[5] = c->r[1];
    c->r[1] = 0xbu;
    c->r[4] = c->r[2];
    { uint32_t ea = 0x58d650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d654u; f_75d2b4(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58d68c; }
    c->r[2] = 0x64u;
    c->r[3] = c->r[4] + (c->r[4] << 2);
    { uint32_t r = c->r[6] * c->r[2] + c->r[5]; c->r[2] = r; }
    c->r[2] = c->r[2] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x34u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
L_58d68c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58d694(Cpu *restrict c) {
    FN_ENTER(0x58d694u);
L_58d694:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14ab52cu;
    c->r[1] = 0xbu;
    { uint32_t ea = 0x58d6acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d6b0u; f_75d2b4(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[4]); }
    if (COND_LS) { goto L_58d6d4; }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x34u;
    { uint32_t r = c->r[4] * c->r[1] + c->r[0]; c->r[0] = r; }
L_58d6d4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58d6dc(Cpu *restrict c) {
    FN_ENTER(0x58d6dcu);
L_58d6dc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[0];
    c->r[4] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[9] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[14] = 0x58d6fcu; f_58d820(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58d7bc; }
    c->r[0] = 0x14ab448u;
    { uint32_t ea = 0x58d714u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d714u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[3]; c->r[14] = 0x58d728u; rt_dispatch(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[7] = 0x0u; }
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); } }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_58d7d0; }
    c->r[1] = c->r[5] + 0x4u;
    c->r[6] = 0x0u;
L_58d754:;
    c->r[6] = c->r[6] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_58d754; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_58d7d0; }
    c->r[0] = 0x14ab43cu;
    { uint32_t ea = 0x58d778u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d77cu; f_5f8344(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_58d7d0; }
    c->r[2] = sdiv32(c->r[0], c->r[6]);
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] - c->r[2] * c->r[6];
    c->r[2] = c->r[5] + 0x2u;
L_58d798:;
    c->r[3] = c->r[3] + (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { goto L_58d7c0; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[6] = c->r[2] + 0x4u;
    c->r[2] = c->r[6];
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_58d798; }
    goto L_58d7d0;
L_58d7bc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_58d7c0:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[0]); }
L_58d7d0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_LS) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_LS) { { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[1]); } }
    c->r[0] = 0x14ab35cu;
    { uint32_t ea = 0x58d800u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d800u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_58d820(Cpu *restrict c) {
    FN_ENTER(0x58d820u);
L_58d820:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[1];
    c->r[6] = c->r[2];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58d8d8; }
    c->r[0] = 0x14ab4e0u;
    c->r[1] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x58d848u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d84cu; f_5a8bdc(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x14af084u;
    { uint32_t ea = 0x58d85cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    goto L_58d868;
L_58d860:;
    c->r[0] = c->r[0] + 0x10u;
    c->r[4] = c->r[4] + 0x2u;
L_58d868:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58d87c; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_58d89c; }
L_58d87c:;
    (void)f_subs(c, c->r[4], 0x89u);
    if (COND_CS) { goto L_58d8d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_58d860; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_NE) { goto L_58d860; }
    goto L_58d8a0;
L_58d89c:;
    c->r[4] = c->r[4] - 0x1u;
L_58d8a0:;
    c->r[0] = 0x14af034u;
    { uint32_t ea = 0x58d8acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58d8d8; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58d8e0; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = 0x129c975u;
    if (COND_CS) { c->r[6] = 0x2u; }
    c->r[0] = 0x58d8d8u + c->r[0];
    goto L_58d8f0;
L_58d8d8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_58d8e0:;
    (void)f_subs(c, c->r[0], 0x4u);
    c->r[0] = 0x129c954u;
    if (COND_CS) { c->r[6] = 0x4u; }
    c->r[0] = 0x58d8f4u + c->r[0];
L_58d8f0:;
    c->r[6] = c->r[0] + (uint32_t)(uint8_t)(c->r[6]);
    c->r[0] = 0x14ab2b4u;
    { uint32_t ea = 0x58d900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d904u; f_5f8344(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_58d940; }
    c->r[0] = 0x14ab4a8u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x58d938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d93cu; f_5c6dd8(c);
    c->r[5] = c->r[0];
L_58d940:;
    c->r[0] = 0x14ab48cu;
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    { uint32_t ea = 0x58d954u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d958u; f_5c6df8(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_5c613c(c);
}
void f_58d990(Cpu *restrict c) {
    FN_ENTER(0x58d990u);
L_58d990:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[1] = 0x4u;
    c->r[11] = c->r[0];
    c->r[14] = 0x58d9a4u; f_85cb3c(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] + 0x190u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab36cu;
    { uint32_t ea = 0x58d9bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_58dcb0; }
    c->r[0] = 0x14ab3b4u;
    { uint32_t ea = 0x58d9d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d9d8u; f_724580(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d9e0u; f_7245a8(c);
    c->r[0] = 0x14ab33cu;
    { uint32_t ea = 0x58d9ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58d9f0u; f_5ae744(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58dca0; }
    c->r[0] = c->r[5] + 0x50u;
    c->r[1] = c->r[11] + 0x2f8u;
    c->r[8] = 0x0u;
    c->r[0] = c->r[0] + 0x134u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x129c834u;
    c->r[0] = 0x58da1cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab360u;
    { uint32_t ea = 0x58da28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ace24u;
    { uint32_t ea = 0x58da34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab198u;
    { uint32_t ea = 0x58da40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ace9cu;
    { uint32_t ea = 0x58da4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ace90u;
    { uint32_t ea = 0x58da58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_58da58:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x116u;
    c->r[9] = c->r[10] + (c->r[5] << 3);
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD16(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0xffffu;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58dc94; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[0] = c->r[11];
    c->r[14] = 0x58da98u; f_58dcdc(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x72cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + c->r[1];
    c->r[0] = c->r[5];
    c->r[14] = 0x58dab0u; f_250bdc(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[5] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x58dac4u; f_726d94(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x58dad4u; f_726e00(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58dae4u; f_3c95a4(c);
    { uint32_t ea = c->r[11] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_58dc94; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58db08u; f_75ff98(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = 0x1u;
    c->r[1] = c->r[6];
    c->r[14] = 0x58db1cu; f_726f48(c);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x58db30u; f_726f48(c);
    c->r[5] = c->r[0];
    c->r[10] = c->r[9];
    c->r[0] = 0x110u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[10] = ea; c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x58db4cu; f_726eb0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58dbe0; }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[6];
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[2] = 0x1bu;
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] + 0x190u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58dbe0u; f_3636a8(c);
L_58dbe0:;
    c->r[0] = 0x112u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[9] = ea; c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x58dbf4u; f_726ef8(c);
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[10] = c->r[4];
    if (COND_EQ) { goto L_58dc94; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_58dc94; }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[3] = c->r[6];
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[2] = 0x1cu;
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] + 0x190u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58dc94u; f_3636a8(c);
L_58dc94:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], 0x89u);
    if (COND_NE) { goto L_58da58; }
L_58dca0:;
    { uint32_t ea = c->r[11] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x91u; ST8(ea, c->r[0]); } }
L_58dcb0:;
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58dcdc(Cpu *restrict c) {
    FN_ENTER(0x58dcdcu);
L_58dcdc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_58dd18; }
    c->r[0] = c->r[6] - 0x69u;
    (void)f_subs(c, c->r[0], 0x1cu);
    if (COND_HI) { goto L_58dd20; }
    c->r[2] = 0x7fu;
    c->r[1] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000000u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58dd20; }
L_58dd18:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_58dd20:;
    c->r[0] = c->r[6];
    c->r[14] = 0x58dd28u; f_250bdc(c);
    c->r[14] = 0x58dd2cu; f_250c5c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x58dd38u; f_250bdc(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14aae8cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58dd4cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58dd50u; f_75ff98(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[14] = 0x58dd60u; f_760058(c);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[2] = 0x2706u;
    c->r[1] = 0xau;
    if (COND_NE) { c->r[2] = 0x26deu; }
    if (COND_NE) { c->r[1] = 0x32u; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_58dd18; }
    c->r[3] = udiv32(c->r[0], c->r[1]);
    c->r[3] = c->r[0] - c->r[3] * c->r[1];
    c->r[3] = c->r[3] + c->r[5];
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { goto L_58dd18; }
    c->r[0] = c->r[0] + c->r[5];
    c->r[0] = udiv32(c->r[0], c->r[1]);
    { uint32_t r = c->r[0] * c->r[1]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { c->r[3] = c->r[2]; }
    c->r[2] = 0xdu;
    (void)f_subs(c, c->r[8], 0x100u);
    if (COND_CC) { goto L_58ddc8; }
    c->r[2] = 0xfu;
    (void)f_subs(c, c->r[8], 0x400u);
    if (COND_HI) { goto L_58ddc8; }
    (void)f_subs(c, c->r[8], 0x200u);
    c->r[2] = 0xdu;
    if (COND_LS) { goto L_58dd18; }
L_58ddc8:;
    c->r[0] = 0x14acb08u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[4] + 0x2f8u;
    c->r[3] = c->r[8];
    { uint32_t ea = 0x58dde0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58dde4u; f_3636a8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_58ddf4(Cpu *restrict c) {
    FN_ENTER(0x58ddf4u);
L_58ddf4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[5] = c->r[1];
    c->r[1] = 0x14aaf48u;
    c->r[11] = c->r[0];
    c->r[0] = ~0x0u;
    c->r[4] = c->r[2];
    c->r[8] = 0x1u;
    c->r[10] = c->r[13];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = 0x58de40u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
L_58de3c:;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_CS) { goto L_58de98; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58de3c; }
    c->r[0] = (c->r[7] >> 5);
    c->r[1] = c->r[7] & 0x1fu;
    c->r[0] = c->r[11] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[8], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58de84; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x58de78u; f_724040(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[10] + (c->r[6] << 2); ST32(ea, c->r[7]); } }
    if (COND_EQ) { c->r[6] = c->r[6] + 0x1u; }
L_58de84:;
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], 0xbfu);
    if (COND_CC) { goto L_58de3c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_58df48; }
L_58de98:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x8u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_58df48:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58df54(Cpu *restrict c) {
    FN_ENTER(0x58df54u);
L_58df54:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[5] = c->r[1];
    c->r[1] = 0x14aade8u;
    c->r[11] = c->r[0];
    c->r[0] = ~0x0u;
    c->r[4] = c->r[2];
    c->r[8] = 0x1u;
    c->r[10] = c->r[13];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = 0x58dfa0u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
L_58df9c:;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_CS) { goto L_58dff8; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58df9c; }
    c->r[0] = (c->r[7] >> 5);
    c->r[1] = c->r[7] & 0x1fu;
    c->r[0] = c->r[11] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[8], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58dfe4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x58dfd8u; f_72462c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[10] + (c->r[6] << 2); ST32(ea, c->r[7]); } }
    if (COND_EQ) { c->r[6] = c->r[6] + 0x1u; }
L_58dfe4:;
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], 0x39u);
    if (COND_CC) { goto L_58df9c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_58e0a8; }
L_58dff8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x16u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_58e0a8:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58e0b4(Cpu *restrict c) {
    FN_ENTER(0x58e0b4u);
L_58e0b4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[5] = c->r[1];
    c->r[1] = 0x14aac88u;
    c->r[11] = c->r[0];
    c->r[0] = ~0x0u;
    c->r[4] = c->r[2];
    c->r[8] = 0x1u;
    c->r[10] = c->r[13];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = 0x58e100u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
L_58e0fc:;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_CS) { goto L_58e158; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_58e0fc; }
    c->r[0] = (c->r[7] >> 5);
    c->r[1] = c->r[7] & 0x1fu;
    c->r[0] = c->r[11] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[8], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58e144; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x58e138u; f_7245f8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[10] + (c->r[6] << 2); ST32(ea, c->r[7]); } }
    if (COND_EQ) { c->r[6] = c->r[6] + 0x1u; }
L_58e144:;
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], 0x60u);
    if (COND_CC) { goto L_58e0fc; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_58e208; }
L_58e158:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x17u;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_58e208:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_58e214(Cpu *restrict c) {
    FN_ENTER(0x58e214u);
L_58e214:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[8] = c->r[0];
    c->r[0] = 0x14aabb4u;
    { uint32_t ea = 0x58e22cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1156u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xbf2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xbf3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[10] = c->r[1] + c->r[2];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58e3dc; }
    c->r[0] = 0x1154u;
    c->r[6] = c->r[13] + 0x20u;
    c->r[1] = 0x20u;
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1108u;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x58e278u; f_9ca420(c);
    c->r[0] = c->r[8] + 0x33cu;
    c->r[1] = c->r[6];
    c->r[2] = 0x16u;
    c->r[14] = 0x58e288u; f_15efe30(c);
    c->r[0] = 0xbf8u;
    c->r[5] = c->r[8];
    c->r[1] = 0x0u;
    c->r[8] = c->r[7] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x58e2a0u; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[0] + 0xf9u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_CS) { c->r[1] = c->r[0] + 0xf8u; }
    c->r[0] = 0x14aaa5cu;
    { uint32_t ea = c->r[5] + 0x394u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[9];
    { uint32_t ea = 0x58e2ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58e2d0u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[4] = c->r[3] | (c->r[6] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[14] = c->r[1] | (c->r[4] << 16);
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[12] = v; }
    c->r[1] = c->r[5] + 0x398u;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[14]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[5] + 0x399u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[6]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[5] + 0x39du; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = c->r[12] | (c->r[4] << 8);
    c->r[2] = c->r[9] | (c->r[0] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = c->r[5] + 0x39cu;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); c->r[2] = c->r[2] + 0x2u; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[9]); }
    c->r[0] = 0x1155u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1dcu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x58e34cu; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58e3d0; }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x58e364u; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58e3d0; }
    c->r[0] = c->r[8];
    c->r[1] = 0x3u;
    c->r[14] = 0x58e37cu; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58e3d0; }
    c->r[0] = c->r[8];
    c->r[1] = 0x4u;
    c->r[14] = 0x58e394u; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58e3d0; }
    c->r[0] = c->r[8];
    c->r[1] = 0x5u;
    c->r[14] = 0x58e3acu; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58e3d0; }
    c->r[0] = c->r[8];
    c->r[1] = 0x6u;
    c->r[14] = 0x58e3c4u; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58e73c; }
L_58e3d0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
    goto L_58e434;
L_58e3dc:;
    c->r[0] = 0x26e6u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58e42c; }
    c->r[6] = 0x0u;
    c->r[0] = 0x26e4u;
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x2184u;
    c->r[2] = c->r[7] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x58e410u; f_590e98(c);
    c->r[0] = 0x26e5u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[1] + 0x1dcu; ST8(ea, c->r[0]); }
    c->r[1] = 0x1u;
    goto L_58e434;
L_58e42c:;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
L_58e434:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[10]);
    c->r[12] = c->r[6] + c->r[1];
    (void)f_subs(c, c->r[12], c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    if (COND_CS) { goto L_58e734; }
    c->r[0] = 0x14aa8c8u;
    c->r[11] = c->r[12];
    c->r[10] = c->r[6];
    c->r[5] = c->r[1];
    { uint32_t ea = 0x58e460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_58e460:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
L_58e468:;
    { uint32_t ea = c->r[7] + 0xbf2u; uint32_t v = LD8(ea); c->r[1] = v; }
L_58e46c:;
    c->r[6] = (uint32_t)(uint8_t)(c->r[10]);
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_58e48c; }
    { uint32_t ea = c->r[7] + 0xbf3u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { goto L_58e46c; }
    goto L_58e5c8;
L_58e48c:;
    c->r[1] = 0x564u;
    c->r[4] = c->r[13] + 0x20u;
    c->r[3] = 0x10u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[7]; c->r[9] = r; }
    c->r[0] = 0x1154u;
    c->r[1] = 0x20u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1108u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0x58e4c8u; f_9ca420(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[11]);
    c->r[6] = c->r[8] + 0x2f8u;
    c->r[0] = 0x16u;
    c->r[2] = 0x16u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[0] = c->r[0] + 0x44u;
    c->r[14] = 0x58e4ecu; f_15efe30(c);
    c->r[0] = 0xbf8u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0x58e4fcu; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[0] + 0xf9u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_CS) { c->r[1] = c->r[0] + 0xf8u; }
    c->r[0] = c->r[6] + (uint32_t)(uint8_t)(c->r[11]);
    { uint32_t ea = c->r[0] + 0x9cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58e52cu; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[11] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[4] = c->r[11] | (c->r[8] << 8);
    c->r[1] = c->r[1] | (c->r[14] << 8);
    c->r[2] = c->r[6] + (c->r[2] << 3);
    c->r[12] = c->r[1] | (c->r[4] << 16);
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xa0u; ST8(ea, c->r[12]); c->r[2] = ea; }
    c->r[1] = c->r[1] | (c->r[4] << 8);
    c->r[6] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[1] | (c->r[6] << 16);
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[2] - 0x1u; ST8(ea, c->r[8]); }
    c->r[0] = 0x1155u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] - 0x2u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[2] - 0x3u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[1] + 0x1dcu; ST8(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[10]);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[11] = c->r[1] + (uint32_t)(uint8_t)(c->r[10]);
    c->r[12] = (uint32_t)(uint8_t)(c->r[11]);
    (void)f_subs(c, c->r[12], c->r[2]);
    if (COND_CC) { goto L_58e468; }
    goto L_58e734;
L_58e5c8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x574u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[7]; c->r[4] = r; }
    c->r[0] = 0x26e7u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58e61c; }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[11]); }
    c->r[0] = 0x26e4u;
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x2184u;
    c->r[2] = c->r[4] + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x58e604u; f_590e98(c);
    c->r[0] = 0x26e5u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[1] + 0x1dcu; ST8(ea, c->r[0]); }
    goto L_58e718;
L_58e61c:;
    c->r[8] = c->r[4];
    c->r[0] = 0x26e8u;
    c->r[11] = c->r[13] + 0x20u;
    c->r[1] = 0x20u;
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[8] = ea; c->r[9] = v; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[11];
    c->r[11] = c->r[12];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] - 0x50u;
    c->r[14] = 0x58e64cu; f_9ca420(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[11], 0x3u);
    c->r[2] = 0x16u;
    if (COND_EQ) { c->r[11] = c->r[11] - 0x1u; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { c->r[11] = 0x3u; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[11]);
    c->r[9] = c->r[1] + 0x2f8u;
    c->r[1] = 0x16u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[9]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[0] + 0x44u;
    c->r[14] = 0x58e680u; f_15efe30(c);
    c->r[0] = c->r[9] + (uint32_t)(uint8_t)(c->r[11]);
    c->r[1] = 0xfu;
    c->r[3] = 0x3b8u;
    { uint32_t ea = c->r[0] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = c->r[11] + (c->r[11] << 1);
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[8] + (c->r[1] << 2);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x1e5u; ST8(ea, c->r[0]); } }
    c->r[0] = 0x26eau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = 0x26ecu;
    c->r[3] = 0x3bau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = 0x26f4u;
    c->r[3] = 0x3c2u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = 0x26f0u;
    c->r[3] = 0x3beu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = 0x26f2u;
    c->r[3] = 0x3c0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = 0x26eeu;
    c->r[3] = 0x3bcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = 0x26e9u;
    c->r[1] = c->r[8] + c->r[11];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x3e8u; ST8(ea, c->r[0]); }
L_58e718:;
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[6] + (uint32_t)(uint8_t)(c->r[5]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[12] = (uint32_t)(uint8_t)(c->r[11]);
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_CC) { goto L_58e460; }
L_58e734:;
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_58e73c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + 0x1e4u; ST8(ea, c->r[6]); }
    goto L_58e434;
}
void f_58e75c(Cpu *restrict c) {
    FN_ENTER(0x58e75cu);
L_58e75c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x14aa5b8u;
    c->r[0] = 0x14aa600u;
    { uint32_t ea = 0x58e770u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58e774u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e780u; f_5b5b28(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x14aa5ecu;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58e79cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14aa580u;
    { uint32_t ea = 0x58e7a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58e7acu; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58e800; }
    c->r[0] = 0x14aa568u;
    { uint32_t ea = 0x58e7c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58e7c4u; f_5a30f4(c);
    (void)f_subs(c, c->r[0], 0x1bu);
    if (COND_HI) { goto L_58e800; }
    c->r[1] = 0x14aa494u;
    c->r[0] = c->r[4] + (c->r[0] << 1);
    { uint32_t ea = 0x58e7dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1a2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58e7f0; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    goto L_58e7f4;
L_58e7f0:;
    { uint32_t ea = c->r[0] + 0x89u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
L_58e7f4:;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); } }
L_58e800:;
    c->r[0] = 0x14aa51cu;
    { uint32_t ea = 0x58e80cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_58e82c; }
    { uint32_t ea = c->r[4] + 0xc2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x270eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { c->r[0] = c->r[0] + 0x1u; }
    if (COND_LS) { { uint32_t ea = c->r[4] + 0xc2u; ST16(ea, c->r[0]); } }
L_58e82c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_58e84c(Cpu *restrict c) {
    FN_ENTER(0x58e84cu);
L_58e84c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x14aa4c8u;
    c->r[0] = 0x14aa510u;
    { uint32_t ea = 0x58e860u + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x58e864u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e870u; f_5b9870(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_58e900; }
    c->r[14] = 0x58e88cu; f_5b9ff8(c);
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ea68; }
    c->r[1] = 0x14aa480u;
    c->r[0] = 0x14aa4c8u;
    { uint32_t ea = 0x58e8a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58e8acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e8b8u; f_5ba100(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58ea90; }
    c->r[1] = 0x14aa458u;
    c->r[0] = 0x14aa4a0u;
    { uint32_t ea = 0x58e8d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58e8d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e8e0u; f_5b98a4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58ea5c; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { goto L_58ea64; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58ea90; }
    c->r[1] = 0x3u;
    goto L_58ea68;
L_58e900:;
    c->r[14] = 0x58e904u; f_5b5b28(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x14aa40cu;
    c->r[0] = 0x14aa454u;
    { uint32_t ea = 0x58e91cu + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x58e920u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e92cu; f_5bcf68(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_58e97c; }
    c->r[14] = 0x58e948u; f_5b98e8(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ea68; }
    c->r[1] = 0x14aa3c4u;
    c->r[0] = 0x14aa40cu;
    { uint32_t ea = 0x58e964u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58e968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e974u; f_5b9a18(c);
    c->r[1] = 0x1u;
    goto L_58ea04;
L_58e97c:;
    c->r[14] = 0x58e980u; f_5bce2c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58ea10; }
    c->r[1] = 0x14aa390u;
    c->r[0] = 0x14aa3d8u;
    { uint32_t ea = 0x58e998u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58e99cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e9a8u; f_5b9b60(c);
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ea68; }
    c->r[1] = 0x14aa364u;
    c->r[0] = 0x14aa3acu;
    { uint32_t ea = 0x58e9c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58e9c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58e9d4u; f_5b9ccc(c);
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ea68; }
    c->r[1] = 0x14aa338u;
    c->r[0] = 0x14aa380u;
    { uint32_t ea = 0x58e9f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58e9f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58ea00u; f_5b9e50(c);
    c->r[1] = 0x4u;
L_58ea04:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ea68; }
    goto L_58ea90;
L_58ea10:;
    c->r[0] = 0x14aa30cu;
    { uint32_t ea = 0x58ea1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ea20u; f_5a75b0(c);
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ea68; }
    c->r[1] = 0x14aa2ecu;
    c->r[0] = 0x14aa334u;
    { uint32_t ea = 0x58ea3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58ea40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58ea4cu; f_5b5bb4(c);
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_58ea68; }
    goto L_58ea90;
L_58ea5c:;
    c->r[1] = 0x2u;
    goto L_58ea68;
L_58ea64:;
    c->r[1] = 0x4u;
L_58ea68:;
    c->r[0] = 0x14abe70u;
    c->r[2] = 0x270eu;
    { uint32_t ea = 0x58ea78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[1] = 0x87eu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { c->r[1] = c->r[1] + 0x1u; }
    if (COND_LS) { { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); } }
L_58ea90:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58eae4(Cpu *restrict c) {
    FN_ENTER(0x58eae4u);
L_58eae4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[9] = c->r[0];
    c->r[0] = 0x14aa2e0u;
    c->r[1] = 0x14aa224u;
    { uint32_t ea = 0x58eb00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x58eb04u + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x14aa260u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58eb14u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58eb1cu; f_5b9870(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_58eb74; }
    c->r[14] = 0x58eb38u; f_5b9ff8(c);
    c->r[7] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ebf4; }
    c->r[1] = 0x14aa1d4u;
    c->r[0] = 0x14aa21cu;
    { uint32_t ea = 0x58eb54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58eb58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58eb64u; f_5ba100(c);
L_58eb64:;
    c->r[7] = 0xffu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[7] = 0x1u; }
    goto L_58ebf4;
L_58eb74:;
    c->r[14] = 0x58eb78u; f_5b5b28(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58f1cc; }
    c->r[1] = 0x14aa198u;
    c->r[0] = 0x14aa1e0u;
    { uint32_t ea = 0x58eb90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58eb94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58eba0u; f_5bcf68(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ebf4; }
    c->r[1] = 0x14aa16cu;
    c->r[0] = 0x14aa1b4u;
    { uint32_t ea = 0x58ebbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58ebc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58ebccu; f_5bce2c(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ebf4; }
    c->r[0] = 0x14aa144u;
    { uint32_t ea = 0x58ebe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ebe8u; f_5a75b0(c);
    c->r[7] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58f1d4; }
L_58ebf4:;
    c->r[0] = 0x14aa17cu;
    { uint32_t ea = 0x58ec00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ec04u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58ecec; }
    c->r[0] = 0x14aa164u;
    { uint32_t ea = 0x58ec18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ec1cu; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58ecec; }
    c->r[0] = 0x14abcb8u;
    { uint32_t ea = 0x58ec30u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x1154u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14aa0e4u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x58ec44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ec48u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[5] = c->r[5] + 0x8d0u;
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58eca0u; f_365128(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58ed48; }
L_58ecac:;
    c->r[0] = 0x564u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[10]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0xbf8u;
    c->r[0] = c->r[0] + c->r[1];
L_58ecbc:;
    c->r[1] = 0x0u;
    c->r[14] = 0x58ecc4u; f_2df814(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x1fu;
    c->r[0] = c->r[1] + 0xf9u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { c->r[0] = c->r[1] + 0xf8u; }
    c->r[5] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[5], 0xeu);
    if (COND_LS) { goto L_58f114; }
    goto L_58f1cc;
L_58ecec:;
    c->r[0] = 0x26e7u;
    c->r[5] = 0xeu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58f114; }
    c->r[0] = 0x2c5bu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58f114; }
    c->r[0] = 0x31cfu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58f114; }
    c->r[0] = 0x3743u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58f114; }
    c->r[0] = 0x14aa044u;
    { uint32_t ea = 0x58ed3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ed40u; f_477454(c);
    c->r[0] = c->r[0] + 0x4u;
    goto L_58ecbc;
L_58ed48:;
    c->r[0] = 0x26e7u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = 0x26e4u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14a9fc4u;
    { uint32_t ea = 0x58ed64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ed68u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14abb28u;
    { uint32_t ea = 0x58edc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58edc4u; f_365128(c);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = 0xeu;
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x1u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_58f114; }
    c->r[0] = 0x14abb04u;
    { uint32_t ea = 0x58ede4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x16b8u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14a9f30u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x58edf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58edfcu; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[8] = c->r[8] + 0x8d0u;
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ee54u; f_365128(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ecac; }
    c->r[0] = 0x2c5bu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = 0x2c58u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14a9eacu;
    { uint32_t ea = 0x58ee7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ee80u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14aba10u;
    { uint32_t ea = 0x58eed8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58eedcu; f_365128(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x1u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_58f114; }
    c->r[0] = 0x14ab9f0u;
    { uint32_t ea = 0x58eef8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x1c1cu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14a9e1cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x58ef0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ef10u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[8] = c->r[8] + 0x8d0u;
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ef68u; f_365128(c);
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ecac; }
    c->r[0] = 0x31cfu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = 0x31ccu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14a9d98u;
    { uint32_t ea = 0x58ef90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58ef94u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab8fcu;
    { uint32_t ea = 0x58efecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58eff0u; f_365128(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x1u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_58f114; }
    c->r[0] = 0x14ab8dcu;
    { uint32_t ea = 0x58f00cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2180u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14a9d08u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x58f020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f024u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[8] = c->r[8] + 0x8d0u;
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f07cu; f_365128(c);
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58ecac; }
    c->r[0] = 0x3743u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[0] = 0x3740u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x14a9c84u;
    { uint32_t ea = 0x58f0a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f0a8u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[3] | (c->r[0] << 8);
    c->r[1] = c->r[6] | (c->r[2] << 8);
    c->r[2] = c->r[13] + 0x8u;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab7e8u;
    { uint32_t ea = 0x58f100u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f104u; f_365128(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_58f1cc; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_58f1cc; }
L_58f114:;
    c->r[0] = 0x14ab7bcu;
    c->r[2] = 0x8dau;
    c->r[6] = 0x8f8u;
    (void)f_subs(c, c->r[7], 0xffu);
    { uint32_t ea = 0x58f12cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[5] << 1);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[3] = c->r[6] + c->r[3];
    c->r[6] = 0x916u;
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[3];
    c->r[3] = c->r[1];
    if (COND_EQ) { goto L_58f178; }
    c->r[3] = (c->r[7] << 4) - c->r[7];
    c->r[7] = 0x270eu;
    c->r[3] = c->r[0] + (c->r[3] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_HI) { c->r[3] = c->r[1]; }
    if (COND_LS) { c->r[2] = c->r[2] + 0x1u; }
    if (COND_LS) { { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); } }
    if (COND_LS) { c->r[3] = c->r[1] + 0x1u; }
L_58f178:;
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[2] = 0x26abu;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_HI) { goto L_58f1cc; }
    c->r[2] = 0x851fu;
    c->r[1] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[2] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[2] = (c->r[3] >> 5);
    c->r[3] = 0x64u;
    c->r[1] = c->r[1] - c->r[2] * c->r[3];
    c->r[3] = 0xffffu;
    { uint32_t r = c->r[1] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_58f1cc; }
    c->r[3] = 0x64u;
    c->r[1] = c->r[9] + 0x2f8u;
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x1au;
    c->r[14] = 0x58f1ccu; f_3636a8(c);
L_58f1cc:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_58f1d4:;
    c->r[1] = 0x14a9b44u;
    c->r[0] = 0x14a9b8cu;
    { uint32_t ea = 0x58f1e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58f1e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58f1f4u; f_5b5bb4(c);
    goto L_58eb64;
}
void f_58f278(Cpu *restrict c) {
    FN_ENTER(0x58f278u);
L_58f278:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x14a9a9cu;
    c->r[0] = 0x14a9ae4u;
    { uint32_t ea = 0x58f28cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58f290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x58f2a0u; f_5b9e50(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58f2c8; }
    c->r[0] = 0x14a9a70u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x58f2b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f2bcu; f_5a9f54(c);
    (void)f_subs(c, c->r[0], 0x13u);
    if (COND_HI) { goto L_58f370; }
    goto L_58f388;
L_58f2c8:;
    c->r[0] = 0x14a9a9cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x58f2d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f2dcu; f_5b9a18(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58f300; }
    c->r[0] = 0x14a9a38u;
    { uint32_t ea = 0x58f2f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f2f4u; f_5a8d68(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { goto L_58f370; }
    goto L_58f388;
L_58f300:;
    c->r[0] = 0x14a9a64u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x58f310u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f314u; f_5b5af0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58f354; }
    c->r[0] = 0x14a9a48u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x58f32cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f330u; f_5ba100(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_58f354; }
    c->r[0] = 0x14a9a2cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x58f348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f34cu; f_5b9ff8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_58f388; }
L_58f354:;
    c->r[0] = 0x14a99c8u;
    { uint32_t ea = 0x58f360u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f364u; f_5a8cb4(c);
    c->r[0] = c->r[0] - 0xbu;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_58f388; }
L_58f370:;
    c->r[0] = 0x14a984cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58f384u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f388u; f_3974ac(c);
L_58f388:;
    c->r[0] = 0x14a9994u;
    { uint32_t ea = 0x58f394u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f398u; f_5a3470(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x14a99c8u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x58f3acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f3b0u; f_5b9a18(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58f3c4; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    goto L_58f3e0;
L_58f3c4:;
    c->r[0] = 0x14a99a0u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x58f3d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f3d8u; f_5b9e50(c);
    { uint32_t r = c->r[5] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58f414; }
L_58f3e0:;
    c->r[1] = 0x14a9934u;
    c->r[0] = 0x14a97d8u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x58f3f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58f3f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xb8u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0xbu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_EQ) { c->r[1] = 0x3u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_3974ac(c);
L_58f414:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_58f454(Cpu *restrict c) {
    FN_ENTER(0x58f454u);
L_58f454:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x2fcu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x14a98fcu;
    (void)f_subs(c, c->r[0], 0x9u);
    { uint32_t ea = 0x58f48cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x14ab44cu;
    { uint32_t ea = 0x58f49cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_58f6ac; }
    c->r[0] = 0x14a9878u;
    { uint32_t ea = 0x58f4b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f4b4u; f_5ae750(c);
    c->r[1] = 0x129afa4u;
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[8] = 0x0u;
    c->r[9] = 0x3bcu;
    c->r[7] = 0x0u;
    c->r[1] = 0x58f4d0u + c->r[1];
    c->r[6] = c->r[1] + c->r[0];
    c->r[0] = c->r[6] + 0x6u;
    c->r[11] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x5u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x3u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab3e0u;
    { uint32_t ea = 0x58f508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab3d4u;
    { uint32_t ea = 0x58f514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab3c8u;
    { uint32_t ea = 0x58f520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab3bcu;
    { uint32_t ea = 0x58f52cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab3b0u;
    { uint32_t ea = 0x58f538u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab3a4u;
    { uint32_t ea = 0x58f544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab398u;
    { uint32_t ea = 0x58f550u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_58f54c:;
    c->r[0] = c->r[4] + c->r[7];
    { uint32_t ea = c->r[0] + 0x394u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { goto L_58f69c; }
    c->r[1] = c->r[4] + c->r[8];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[9]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_58f61c; }
    c->r[2] = 0x3bau;
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_58f630; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x3beu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_58f644; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x3b8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_58f658; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_58f66c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x3c0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_58f680; }
    c->r[2] = 0x3c2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_HI) { goto L_58f69c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_58f69c; }
    { uint32_t ea = c->r[0] + 0x3e8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58f69c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x23u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    goto L_58f690;
L_58f61c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x1du;
    goto L_58f694;
L_58f630:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x1eu;
    goto L_58f690;
L_58f644:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x1fu;
    goto L_58f690;
L_58f658:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x20u;
    goto L_58f690;
L_58f66c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x21u;
    goto L_58f690;
L_58f680:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = 0x22u;
L_58f690:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_58f694:;
    c->r[3] = c->r[7];
    c->r[14] = 0x58f69cu; f_3636a8(c);
L_58f69c:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[8] = c->r[8] + 0xcu;
    (void)f_subs(c, c->r[7], 0x4u);
    if (COND_NE) { goto L_58f54c; }
L_58f6ac:;
    c->r[2] = 0x14a94e4u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0xb3c5u;
    c->r[0] = 0x64u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x91a20000u;
    { uint32_t ea = 0x58f6d0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xc1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint64_t r = (uint64_t)c->r[2] * c->r[7]; c->r[2] = (uint32_t)r; c->r[7] = (uint32_t)(r >> 32); }
    c->r[2] = (c->r[7] >> 11);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_58f730; }
L_58f6ec:;
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_58f730; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[5] + 0xc1u; ST8(ea, c->r[1]); }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_CS) { goto L_58f6ec; }
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[0] = 0x14ab1bcu;
    c->r[1] = 0x0u;
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58f72cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f730u; f_3636a8(c);
L_58f730:;
    { uint32_t ea = c->r[8]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_EQ) { goto L_5901e0; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { goto L_590230; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_590290; }
    { uint32_t ea = c->r[4] + 0x1e4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58f788; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_58f788; }
    c->r[0] = 0x14ab164u;
    c->r[1] = 0x0u;
    c->r[2] = 0x17u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58f784u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f788u; f_3636a8(c);
L_58f788:;
    c->r[0] = 0x14a9594u;
    { uint32_t ea = 0x58f794u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f798u; f_5a8708(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58f7d8; }
    c->r[0] = 0x14ab13cu;
    { uint32_t ea = 0x58f7acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14a9570u;
    { uint32_t ea = 0x58f7b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f7bcu; f_5a8708(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x58f7d8u; f_3636a8(c);
L_58f7d8:;
    c->r[0] = 0x14a953cu;
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x58f7ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f7f0u; f_5abb14(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_58f850; }
    c->r[0] = 0x14a9518u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x58f810u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f814u; f_5abb14(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14a93b0u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x58f828u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f82cu; f_75ff98(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x14ab0a0u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x58f848u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f84cu; f_3636a8(c);
    c->r[7] = 0x1u;
L_58f850:;
    c->r[0] = 0x14a94c8u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x58f860u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f864u; f_5abb14(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58f8c0; }
    c->r[0] = 0x14a94acu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x58f87cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f880u; f_5abb14(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14a9340u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x58f898u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f89cu; f_75ff98(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x14ab030u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x58f8b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f8bcu; f_3636a8(c);
    c->r[7] = 0x1u;
L_58f8c0:;
    c->r[0] = 0x14a9458u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x58f8d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f8d4u; f_5abb14(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_58f930; }
    c->r[0] = 0x14a943cu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x58f8ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f8f0u; f_5abb14(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x14a92d0u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x58f908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f90cu; f_75ff98(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x14aafc0u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x58f928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f92cu; f_3636a8(c);
    c->r[7] = 0x1u;
L_58f930:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_58f9e0; }
    c->r[0] = 0x14a93e4u;
    { uint32_t ea = 0x58f944u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f948u; f_5a5364(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f954u; f_5a5324(c);
    c->r[0] = c->r[6] - c->r[0];
    c->r[1] = 0x464fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_58f990; }
    c->r[0] = 0x14aaf5cu;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[2] = 0x18u; }
    if (COND_EQ) { c->r[2] = 0x8u; }
    { uint32_t ea = 0x58f98cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f990u; f_3636a8(c);
L_58f990:;
    c->r[0] = 0x14a938cu;
    { uint32_t ea = 0x58f99cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f9a0u; f_5a5324(c);
    c->r[1] = 0xe0fu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1c1eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { goto L_58f9e0; }
    c->r[0] = 0x14aaf0cu;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[2] = 0x9u; }
    if (COND_NE) { c->r[2] = 0x19u; }
    { uint32_t ea = 0x58f9dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58f9e0u; f_3636a8(c);
L_58f9e0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x87eu;
    c->r[1] = 0x880u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x882u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x884u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x886u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x888u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x88au;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + c->r[0];
    c->r[1] = 0x270fu;
    c->r[0] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_58fab0; }
    c->r[1] = 0x14a92d4u;
    c->r[0] = 0x14a931cu;
    { uint32_t ea = 0x58fa54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fa58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58fa64u; f_5b5b28(c);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[6] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[1] = c->r[6] - c->r[1] * c->r[2];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[0] ^ 0x1u; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_58fab0; }
    c->r[0] = 0x14aae3cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x10u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58faacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fab0u; f_3636a8(c);
L_58fab0:;
    c->r[0] = 0x14a92ccu;
    { uint32_t ea = 0x58fabcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fb04; }
    c->r[0] = 0x14aae00u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fae8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58faecu; f_3636a8(c);
    c->r[0] = 0x14a9290u;
    { uint32_t ea = 0x58faf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    { uint32_t ea = c->r[0] + 0xc90u; ST32(ea, c->r[1]); }
L_58fb04:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fb48; }
    c->r[0] = 0x14aadbcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fb2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fb30u; f_3636a8(c);
    c->r[0] = 0x14a924cu;
    { uint32_t ea = 0x58fb3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0xc90u; ST32(ea, c->r[1]); }
L_58fb48:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fb8c; }
    c->r[0] = 0x14aad78u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fb70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fb74u; f_3636a8(c);
    c->r[0] = 0x14a9208u;
    { uint32_t ea = 0x58fb80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0xc90u; ST32(ea, c->r[1]); }
L_58fb8c:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fbd0; }
    c->r[0] = 0x14aad34u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fbb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fbb8u; f_3636a8(c);
    c->r[0] = 0x14a91c4u;
    { uint32_t ea = 0x58fbc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0xc90u; ST32(ea, c->r[1]); }
L_58fbd0:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fc14; }
    c->r[0] = 0x14aacf0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fbf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fbfcu; f_3636a8(c);
    c->r[0] = 0x14a9180u;
    { uint32_t ea = 0x58fc08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0xc90u; ST32(ea, c->r[1]); }
L_58fc14:;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fc58; }
    c->r[0] = 0x14aacacu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x5u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fc3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fc40u; f_3636a8(c);
    c->r[0] = 0x14a913cu;
    { uint32_t ea = 0x58fc4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0xc90u; ST32(ea, c->r[1]); }
L_58fc58:;
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fca0; }
    c->r[0] = 0x14aac64u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fc84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fc88u; f_3636a8(c);
    c->r[0] = 0x14a90f4u;
    { uint32_t ea = 0x58fc94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffbfffffu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_58fca0:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fce4; }
    c->r[0] = 0x14aac20u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fcc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fcccu; f_3636a8(c);
    c->r[0] = 0x14a90b0u;
    { uint32_t ea = 0x58fcd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xff7fffffu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_58fce4:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fd28; }
    c->r[0] = 0x14aabdcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fd0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fd10u; f_3636a8(c);
    c->r[0] = 0x14a906cu;
    { uint32_t ea = 0x58fd1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfeffffffu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_58fd28:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fd6c; }
    c->r[0] = 0x14aab98u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x9u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fd50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fd54u; f_3636a8(c);
    c->r[0] = 0x14a9028u;
    { uint32_t ea = 0x58fd60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfdffffffu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_58fd6c:;
    c->r[1] = 0x14aab64u;
    c->r[8] = 0x0u;
    c->r[4] = 0x1u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x58fd84u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x14a8ffcu;
    { uint32_t ea = 0x58fd8cu + c->r[1]; uint32_t v = LD32(ea); c->r[10] = v; }
L_58fd88:;
    c->r[1] = c->r[6] + 0x6u;
    c->r[7] = (c->r[1] >> 5);
    c->r[2] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[2] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[4], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fdd0; }
    c->r[5] = sh_lsl(c->r[4], c->r[1]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x58fdbcu; f_3636a8(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & ~c->r[5];
    { uint32_t ea = c->r[1] + 0xc90u; ST32(ea, c->r[2]); }
L_58fdd0:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x7u);
    if (COND_NE) { goto L_58fd88; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fe24; }
    c->r[0] = 0x14aaae0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fe08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fe0cu; f_3636a8(c);
    c->r[0] = 0x14a8f70u;
    { uint32_t ea = 0x58fe18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xbfffffffu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_58fe24:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_58fe68; }
    c->r[0] = 0x14aaa9cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fe4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fe50u; f_3636a8(c);
    c->r[0] = 0x14a8f2cu;
    { uint32_t ea = 0x58fe5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_58fe68:;
    { uint32_t ea = c->r[0] + 0xc98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58feb0; }
    c->r[0] = 0x14aaa54u;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fe94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fe98u; f_3636a8(c);
    c->r[0] = 0x14a8ee4u;
    { uint32_t ea = 0x58fea4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    { uint32_t ea = c->r[0] + 0xc98u; ST32(ea, c->r[1]); }
L_58feb0:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58fef4; }
    c->r[0] = 0x14aaa10u;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x58fed8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x58fedcu; f_3636a8(c);
    c->r[0] = 0x14a8ea0u;
    { uint32_t ea = 0x58fee8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0xc98u; ST32(ea, c->r[1]); }
L_58fef4:;
    c->r[1] = 0x14aa9dcu;
    c->r[8] = 0x0u;
    c->r[7] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x58ff0cu + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x129a570u;
    c->r[10] = 0x58ff14u + c->r[1];
    c->r[1] = 0x14a8e6cu;
    { uint32_t ea = 0x58ff1cu + c->r[1]; uint32_t v = LD32(ea); c->r[11] = v; }
L_58ff18:;
    c->r[2] = c->r[5] + 0x1au;
    c->r[4] = (c->r[2] >> 5);
    c->r[1] = c->r[2] & 0x1fu;
    c->r[2] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[2] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[7], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58ff64; }
    c->r[6] = sh_lsl(c->r[7], c->r[1]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x58ff50u; f_3636a8(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & ~c->r[6];
    { uint32_t ea = c->r[1] + 0xc90u; ST32(ea, c->r[2]); }
L_58ff64:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0xcu);
    if (COND_NE) { goto L_58ff18; }
    c->r[1] = 0x14aa960u;
    c->r[8] = 0x0u;
    c->r[7] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x58ff88u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x129a4f4u;
    c->r[10] = 0x58ff90u + c->r[1];
    c->r[1] = 0x14a8df0u;
    { uint32_t ea = 0x58ff98u + c->r[1]; uint32_t v = LD32(ea); c->r[11] = v; }
L_58ff94:;
    c->r[2] = c->r[5] + 0x48u;
    c->r[1] = c->r[5] + 0x8u;
    c->r[4] = (c->r[2] >> 5);
    c->r[2] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[2] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[7], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_58ffe4; }
    c->r[6] = sh_lsl(c->r[7], c->r[1]);
    c->r[1] = c->r[10] + (c->r[5] << 2);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x58ffd0u; f_3636a8(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & ~c->r[6];
    { uint32_t ea = c->r[1] + 0xc90u; ST32(ea, c->r[2]); }
L_58ffe4:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x6u);
    if (COND_NE) { goto L_58ff94; }
    c->r[1] = 0x14aa8e0u;
    c->r[8] = 0x0u;
    c->r[7] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x590008u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x129a474u;
    c->r[10] = 0x590010u + c->r[1];
    c->r[1] = 0x14a8d70u;
    { uint32_t ea = 0x590018u + c->r[1]; uint32_t v = LD32(ea); c->r[11] = v; }
L_590014:;
    c->r[2] = c->r[5] + 0x50u;
    c->r[4] = (c->r[2] >> 5);
    c->r[1] = c->r[2] & 0x1fu;
    c->r[2] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[2] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[7], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_590060; }
    c->r[6] = sh_lsl(c->r[7], c->r[1]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x59004cu; f_3636a8(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & ~c->r[6];
    { uint32_t ea = c->r[1] + 0xc90u; ST32(ea, c->r[2]); }
L_590060:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x12u);
    if (COND_NE) { goto L_590014; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5900b4; }
    c->r[0] = 0x14aa850u;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x590098u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x59009cu; f_3636a8(c);
    c->r[0] = 0x14a8ce0u;
    { uint32_t ea = 0x5900a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_5900b4:;
    { uint32_t ea = c->r[0] + 0xc98u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_590108; }
    c->r[0] = 0x14aa7fcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5900ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5900f0u; f_3636a8(c);
    c->r[0] = 0x14a8c8cu;
    { uint32_t ea = 0x5900fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0xc98u; ST32(ea, c->r[1]); }
L_590108:;
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_590150; }
    c->r[0] = 0x14aa7b4u;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x590134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x590138u; f_3636a8(c);
    c->r[0] = 0x14a8c44u;
    { uint32_t ea = 0x590144u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffff7fu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_590150:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_590194; }
    c->r[0] = 0x14aa770u;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x590178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x59017cu; f_3636a8(c);
    c->r[0] = 0x14a8c00u;
    { uint32_t ea = 0x590188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffeffu;
    { uint32_t ea = c->r[0] + 0xc94u; ST32(ea, c->r[1]); }
L_590194:;
    { uint32_t ea = c->r[0] + 0xc98u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_590280; }
    c->r[0] = 0x14aa728u;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5901c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5901c4u; f_3636a8(c);
    c->r[0] = 0x14a8bb8u;
    { uint32_t ea = 0x5901d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffff7fu;
    { uint32_t ea = c->r[0] + 0xc98u; ST32(ea, c->r[1]); }
    goto L_590280;
L_5901e0:;
    { uint32_t ea = c->r[5] + 0xc2u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_590280; }
    c->r[0] = 0xcccdu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xcccc0000u;
    { uint64_t r = (uint64_t)c->r[3] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[1] >> 3);
    c->r[1] = 0xffffu;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[3] - (c->r[0] << 1);
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_590280; }
    c->r[0] = 0x14aa6bcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x59022cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_59027c;
L_590230:;
    c->r[0] = 0x14a8aecu;
    { uint32_t ea = 0x59023cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x590240u; f_5a8708(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_590280; }
    c->r[0] = 0x14aa694u;
    { uint32_t ea = 0x590254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14a8ac8u;
    { uint32_t ea = 0x590260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x590264u; f_5a8708(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
L_59027c:;
    c->r[14] = 0x590280u; f_3636a8(c);
L_590280:;
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { goto L_59029c; }
    goto L_5903b4;
L_590290:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_EQ) { goto L_5903b4; }
L_59029c:;
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_HI) { goto L_5902e0; }
    c->r[0] = (c->r[6] << 2);
    c->r[1] = 0x5902b4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5902c8u: goto L_5902c8; case 0x5902f8u: goto L_5902f8; case 0x590310u: goto L_590310; case 0x5903acu: goto L_5903ac; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5902c8:;
    c->r[0] = 0x14aa608u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = 0x16u;
    { uint32_t ea = 0x5902e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590324;
L_5902e0:;
    c->r[0] = 0x14aa5f0u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x5902f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590324;
L_5902f8:;
    c->r[0] = 0x14aa5d8u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = 0x15u;
    { uint32_t ea = 0x590310u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590324;
L_590310:;
    c->r[0] = 0x14aa5c0u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = 0x14u;
    { uint32_t ea = 0x590328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_590324:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[14] = 0x590330u; f_3636a8(c);
    { uint32_t ea = c->r[5] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc9ffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3b9a0000u;
    c->r[0] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { c->r[1] = c->r[0]; }
    c->r[0] = 0x270fu;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[5] + 0xd4u; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_5903ac; }
    c->r[2] = 0x851fu;
    c->r[0] = c->r[1] - c->r[6];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[2]; c->r[3] = (uint32_t)r; c->r[7] = (uint32_t)(r >> 32); }
    c->r[3] = 0x64u;
    c->r[7] = (c->r[7] >> 5);
    c->r[0] = c->r[0] - c->r[7] * c->r[3];
    c->r[0] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_CC) { goto L_5903ac; }
    c->r[0] = 0x14aa550u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x590398u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x12u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5903acu; f_3636a8(c);
L_5903ac:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5903b4u; f_590cd0(c);
L_5903b4:;
    c->r[0] = 0x14a895cu;
    c->r[1] = 0x0u;
    c->r[5] = c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5903ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5903d0u; f_5a3778(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x14a87c8u;
    c->r[1] = 0x1u;
    c->r[6] = c->r[13] + 0x44u;
    c->r[3] = 0xfu;
    { uint32_t ea = 0x5903ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    c->r[0] = 0xfu;
    if (COND_HI) { c->r[0] = 0xau; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x20u;
    c->r[14] = 0x59040cu; f_753f54(c);
    c->r[2] = c->r[5] + 0x300u;
    c->r[0] = c->r[6];
    c->r[1] = 0x40u;
    c->r[3] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x590424u; f_9ca420(c);
    c->r[0] = 0x14aa4b4u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x590434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x590438u; f_362758(c);
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5905c8(Cpu *restrict c) {
    FN_ENTER(0x5905c8u);
L_5905c8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[6] = c->r[0];
    c->r[0] = 0x14a87a0u;
    { uint32_t ea = 0x5905e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5905e4u; f_475a30(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x14a85c8u;
    { uint32_t ea = 0x5905f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5905f8u; f_464258(c);
    c->r[8] = c->r[0];
    c->r[0] = 0x14a8720u;
    { uint32_t ea = 0x590608u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x59060cu; f_5ae3c8(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_590644; }
    c->r[0] = c->r[7];
    c->r[1] = 0x34u;
    c->r[14] = 0x590624u; f_46fe10(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_590644; }
    c->v.s[2] = c->r[5];
    c->v.s[0] = LD32(c->r[8] + 8u);
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[5] = c->v.s[0];
L_590644:;
    c->r[0] = 0x14a877cu;
    c->r[1] = 0x14a8778u;
    c->v.s[0] = c->r[5];
    c->r[9] = c->r[6] + 0x92u;
    c->r[6] = 0x0u;
    c->r[10] = 0x1u;
    { uint32_t ea = 0x590664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x590668u + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[16] = (float)c->v.s[0];
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[4] = v; }
    goto L_59067c;
L_590674:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
L_59067c:;
    c->r[1] = c->r[6];
    c->r[14] = 0x590684u; f_5c6d44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5906bc; }
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[1] = c->r[5];
    if (COND_NE) { goto L_5906ac; }
    c->v.s[0] = LD32(c->r[8] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[1] = c->v.s[0];
L_5906ac:;
    c->r[2] = 0x0u;
    c->r[14] = 0x5906b4u; f_2e7b7c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[9] + c->r[6]; ST8(ea, c->r[10]); } }
L_5906bc:;
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_NE) { goto L_590674; }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5906e0(Cpu *restrict c) {
    FN_ENTER(0x5906e0u);
L_5906e0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_590a08; }
    c->r[2] = (c->r[1] << 2);
    c->r[3] = 0x590708u + 0x8u;
    c->r[0] = 0x77u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x590730u: goto L_590730; case 0x59076cu: goto L_59076c; case 0x5907d8u: goto L_5907d8; case 0x590934u: goto L_590934; case 0x590a08u: goto L_590a08; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_590730:;
    c->r[0] = 0x78u;
    (void)f_subs(c, c->r[8], 0x5u);
    if (COND_HI) { goto L_590934; }
    c->r[1] = (c->r[8] << 2);
    c->r[2] = 0x590748u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x590764u: goto L_590764; case 0x590810u: goto L_590810; case 0x590818u: goto L_590818; case 0x590820u: goto L_590820; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_590764:;
    c->r[2] = c->r[5] + 0x5cu;
    goto L_590824;
L_59076c:;
    c->r[6] = 0x79u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { c->r[6] = 0x74u; }
    (void)f_subs(c, c->r[8], 0x5u);
    if (COND_HI) { goto L_590930; }
    { uint32_t ea = c->r[5] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xdcu; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = (c->r[8] << 2);
    c->r[2] = 0x5907a8u + 0x10u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5907d0u: goto L_5907d0; case 0x590880u: goto L_590880; case 0x590888u: goto L_590888; case 0x590890u: goto L_590890; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5907d0:;
    c->r[1] = c->r[5] + 0x5cu;
    goto L_590894;
L_5907d8:;
    (void)f_subs(c, c->r[8], 0x5u);
    if (COND_HI) { goto L_5909dc; }
    c->r[0] = (c->r[8] << 2);
    c->r[1] = 0x5907ecu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x590808u: goto L_590808; case 0x59096cu: goto L_59096c; case 0x590974u: goto L_590974; case 0x59097cu: goto L_59097c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_590808:;
    c->r[6] = c->r[5] + 0x5cu;
    goto L_590980;
L_590810:;
    c->r[2] = c->r[5] + 0x64u;
    goto L_590824;
L_590818:;
    c->r[2] = c->r[5] + 0x6cu;
    goto L_590824;
L_590820:;
    c->r[2] = c->r[5] + 0x74u;
L_590824:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_590934; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
L_590838:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_590858; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { goto L_590838; }
    goto L_590934;
L_590858:;
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xadu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xaeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = c->r[8] | 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    if (COND_NE) { c->r[0] = c->r[0] + 0x71u; }
    if (COND_EQ) { c->r[0] = c->r[0] + 0x7du; }
    goto L_590934;
L_590880:;
    c->r[1] = c->r[5] + 0x64u;
    goto L_590894;
L_590888:;
    c->r[1] = c->r[5] + 0x6cu;
    goto L_590894;
L_590890:;
    c->r[1] = c->r[5] + 0x74u;
L_590894:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_590930; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_590930; }
    c->r[0] = 0x14a8314u;
    { uint32_t ea = 0x5908bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5908c0u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_590930; }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x76u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_590934; }
    { uint32_t ea = c->r[5] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xdcu; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[5] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[6];
    if (COND_NE) { goto L_590934; }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7au;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { c->r[0] = 0x75u; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_EQ) { goto L_590940; }
    goto L_59094c;
L_590930:;
    c->r[0] = c->r[6];
L_590934:;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_NE) { goto L_59094c; }
L_590940:;
    c->r[0] = 0x1u;
    c->r[14] = 0x590948u; f_85e67c(c);
    goto L_590a04;
L_59094c:;
    c->r[1] = 0x0u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x4u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    goto L_590a00;
L_59096c:;
    c->r[6] = c->r[5] + 0x64u;
    goto L_590980;
L_590974:;
    c->r[6] = c->r[5] + 0x6cu;
    goto L_590980;
L_59097c:;
    c->r[6] = c->r[5] + 0x74u;
L_590980:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5909dc; }
    c->r[0] = 0x14a8230u;
    c->r[7] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5909a0u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_59099c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5909c8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5909b8u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_590a84; }
L_5909c8:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_59099c; }
L_5909dc:;
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x7cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14u;
L_5909f8:;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
L_590a00:;
    c->r[14] = 0x590a04u; f_85e5bc(c);
L_590a04:;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
L_590a08:;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_590a5c; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x590a1cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x590a44u: goto L_590a44; case 0x590a4cu: goto L_590a4c; case 0x590a5cu: goto L_590a5c; case 0x590a64u: goto L_590a64; case 0x590a78u: goto L_590a78; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_590a44:;
    c->r[0] = 0x2u;
    goto L_590a68;
L_590a4c:;
    (void)f_subs(c, c->r[8], 0x5u);
    if (COND_LS) { c->r[0] = 0xbfu; }
    if (COND_HI) { c->r[0] = 0x3u; }
    goto L_590a68;
L_590a5c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_590a64:;
    c->r[0] = 0xd2u;
L_590a68:;
    c->r[1] = 0x1u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85e794(c);
L_590a78:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85d424(c);
L_590a84:;
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x7bu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x18u;
    goto L_5909f8;
}
void f_590aac(Cpu *restrict c) {
    FN_ENTER(0x590aacu);
L_590aac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_590c68; }
    c->r[1] = (c->r[0] << 2);
    c->r[2] = 0x590ad0u + 0x8u;
    c->r[5] = 0x83u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x590af4u: goto L_590af4; case 0x590afcu: goto L_590afc; case 0x590b34u: goto L_590b34; case 0x590bd4u: goto L_590bd4; case 0x590c44u: goto L_590c44; case 0x590c68u: goto L_590c68; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_590af4:;
    c->r[5] = 0x84u;
    goto L_590c44;
L_590afc:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x9eu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_590c44; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
L_590b14:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_590c08; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + 0x34u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_590b14; }
    goto L_590c44;
L_590b34:;
    { uint32_t ea = c->r[4] + 0xdau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xdbu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[5] * c->r[2]; c->r[5] = r; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[5] = 0x87u;
    c->r[0] = c->r[3] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x95u);
    if (COND_HI) { goto L_590c44; }
    c->r[0] = 0x34u;
    { uint32_t r = c->r[1] * c->r[0]; c->r[2] = r; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_590c44; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_590c24; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_590c64; }
    c->r[2] = 0x14a8240u;
    c->r[5] = 0x7au;
    { uint32_t ea = 0x590ba0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[1] + 0xb1au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[5] = 0x87u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_590c44; }
    c->r[14] = 0x590bbcu; f_38e930(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_590c44; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[5] = 0x88u; }
    goto L_590c44;
L_590bd4:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[3] = 0x7cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14u;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[14] = 0x590bfcu; f_85e5bc(c);
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x590c04u; f_85e6bc(c);
    goto L_590c64;
L_590c08:;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xadu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xaeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x85u;
    c->r[5] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    goto L_590c44;
L_590c24:;
    c->r[0] = 0x14a81acu;
    c->r[5] = 0x8au;
    { uint32_t ea = 0x590c34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[0] + 0xb1au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[5] = 0x89u; }
L_590c44:;
    c->r[0] = 0x0u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x590c64u; f_85e5bc(c);
L_590c64:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
L_590c68:;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_590cac; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x590c7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x590c9cu: goto L_590c9c; case 0x590ca4u: goto L_590ca4; case 0x590cacu: goto L_590cac; case 0x590cb4u: goto L_590cb4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_590c9c:;
    c->r[0] = 0x3u;
    goto L_590cb8;
L_590ca4:;
    c->r[0] = 0x2u;
    goto L_590cb8;
L_590cac:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_590cb4:;
    c->r[0] = 0x1u;
L_590cb8:;
    c->r[1] = 0x1u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_85e794(c);
}
void f_590cd0(Cpu *restrict c) {
    FN_ENTER(0x590cd0u);
L_590cd0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5] + 0x395u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[5] + 0x2f8u;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_590d64; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x1ddu; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_590d64; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_590d28; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_590d44; }
    c->r[0] = 0x14a9bc0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x16u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x590d28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590d58;
L_590d28:;
    c->r[0] = 0x14a9ba4u;
    c->r[1] = 0x2u;
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x590d44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590d58;
L_590d44:;
    c->r[0] = 0x14a9b8cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x14u;
    { uint32_t ea = 0x590d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_590d58:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[14] = 0x590d64u; f_3636a8(c);
L_590d64:;
    { uint32_t ea = c->r[5] + 0x396u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_590de8; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x1deu; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_590de8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_590dac; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_590dc8; }
    c->r[0] = 0x14a9b3cu;
    c->r[1] = 0x2u;
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x590dacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590ddc;
L_590dac:;
    c->r[0] = 0x14a9b20u;
    c->r[1] = 0x1u;
    c->r[2] = 0x16u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x590dc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590ddc;
L_590dc8:;
    c->r[0] = 0x14a9b08u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x14u;
    { uint32_t ea = 0x590de0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_590ddc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x2u;
    c->r[14] = 0x590de8u; f_3636a8(c);
L_590de8:;
    { uint32_t ea = c->r[5] + 0x397u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_590e6c; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x1dfu; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_590e6c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_590e30; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_590e4c; }
    c->r[0] = 0x14a9ab8u;
    c->r[1] = 0x2u;
    c->r[2] = 0x15u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x590e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590e60;
L_590e30:;
    c->r[0] = 0x14a9a9cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x16u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x590e4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_590e60;
L_590e4c:;
    c->r[0] = 0x14a9a84u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->r[2] = 0x14u;
    { uint32_t ea = 0x590e64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_590e60:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x3u;
    c->r[14] = 0x590e6cu; f_3636a8(c);
L_590e6c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_590e98(Cpu *restrict c) {
    FN_ENTER(0x590e98u);
L_590e98:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[7] = c->r[1];
    c->r[11] = c->r[2];
    c->r[9] = c->r[3];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[11], 0x0u); }
    if (COND_EQ) { goto L_591038; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_590f78; }
    c->r[10] = c->r[6] - 0x1u;
    c->r[4] = c->r[6];
    c->r[8] = c->r[5] + c->r[10];
    { uint32_t ea = c->r[8] + 0x394u; uint32_t v = LD8(ea); c->r[8] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { goto L_590f78; }
    c->r[1] = c->r[5] + 0x33cu;
    c->r[2] = 0x16u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[2] = 0x16u;
    c->r[14] = 0x590f00u; f_15efe30(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + c->r[6];
    c->r[3] = c->r[6] + (c->r[6] << 1);
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[0] + 0x394u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5] + 0x398u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[10] << 3); uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 3); ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + (c->r[6] << 3);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x3b8u;
    c->r[0] = c->r[10] + (c->r[10] << 1);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[2] + 4u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[5] + 0x3e8u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[10]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + c->r[10]; ST8(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[10]); }
L_590f78:;
    c->r[0] = 0x514u;
    c->r[6] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[3] = 0x10u;
    c->r[0] = c->r[11] + c->r[0];
    c->r[2] = c->r[6];
    c->r[14] = 0x590f98u; f_9ca420(c);
    c->r[7] = c->r[5] + 0x2f8u;
    c->r[8] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = 0x16u;
    c->r[1] = c->r[6];
    c->r[2] = 0x16u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[8] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = c->r[0] + 0x44u;
    c->r[14] = 0x590fb8u; f_15efe30(c);
    c->r[0] = c->r[7] + (uint32_t)(uint8_t)(c->r[4]);
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[0] = 0x14a7d54u;
    c->r[1] = c->r[9];
    { uint32_t ea = 0x590fd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x590fd8u; f_5ad924(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[8] << 3);
    c->r[4] = c->r[3] | (c->r[6] << 8);
    c->r[1] = c->r[1] | (c->r[14] << 8);
    c->r[12] = c->r[1] | (c->r[4] << 16);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x3u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0xa0u; ST8(ea, c->r[12]); c->r[7] = ea; }
    c->r[5] = c->r[5] | (c->r[0] << 8);
    c->r[2] = c->r[1] | (c->r[4] << 8);
    c->r[2] = c->r[5] | (c->r[2] << 16);
    { uint32_t ea = c->r[7] + 0x4u; ST8(ea, c->r[2]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x3u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] - 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[7] - 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x3u; ST8(ea, c->r[14]); }
L_591038:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_591044(Cpu *restrict c) {
    FN_ENTER(0x591044u);
L_591044:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_591048(Cpu *restrict c) {
    FN_ENTER(0x591048u);
L_591048:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_59104c(Cpu *restrict c) {
    FN_ENTER(0x59104cu);
L_59104c:;
    c->r[0] = 0x14ab83cu;
    { uint32_t ea = 0x591058u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_59105c(Cpu *restrict c) {
    FN_ENTER(0x59105cu);
L_59105c:;
    c->r[0] = 0x14ab848u;
    { uint32_t ea = 0x591068u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_59106c(Cpu *restrict c) {
    FN_ENTER(0x59106cu);
L_59106c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[10] = c->r[0];
    c->r[8] = c->r[1];
    c->r[11] = c->r[2];
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_CS) { goto L_591120; }
    c->r[0] = 0x14a7ac4u;
    { uint32_t ea = 0x591098u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x591098u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x34u;
    { uint32_t r = c->r[8] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x5910b0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_591240; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_591158; }
    c->r[1] = 0x14a8c90u;
    c->r[9] = 0x0u;
    c->r[14] = 0x0u;
    { uint32_t ea = 0x5910d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[1] + 0x8u;
L_5910d8:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[0];
    c->r[14] = c->r[14] + 0x1u;
    { uint32_t ea = c->r[3] + c->r[9]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + 0xcu;
    { uint32_t ea = c->r[5] + c->r[9]; ST32(ea, c->r[4]); c->r[5] = ea; }
    c->r[9] = c->r[9] + 0x34u;
    { uint32_t ea = c->r[5] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[12]); }
    c->r[6] = c->r[5] + 0xcu;
    { uint32_t ea = c->r[3]; c->r[3] = c->r[3] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[6] = c->r[6] + 20u; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[14], c->r[3]);
    if (COND_CC) { goto L_5910d8; }
    goto L_59115c;
L_591120:;
    if (COND_LS) { goto L_591244; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x34u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t r = c->r[8] * c->r[1] + c->r[6]; c->r[4] = r; }
    if (COND_NE) { { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[6] = r; } }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { goto L_591240; }
L_591140:;
    c->r[0] = c->r[4] + 0x8u;
    c->r[14] = 0x591148u; f_2dad24(c);
    c->r[4] = c->r[4] + 0x34u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_591140; }
    goto L_591240;
L_591158:;
    c->r[3] = 0x0u;
L_59115c:;
    (void)f_subs(c, c->r[3], c->r[8]);
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    if (COND_CS) { goto L_5911c0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x34u;
    c->r[12] = c->r[11] + 0xcu;
    { uint32_t r = c->r[3] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[1] - c->r[3];
    c->r[3] = 0x14a8bdcu;
    { uint32_t ea = 0x59118cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[3] + 0x8u;
L_59118c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[12];
    c->r[9] = f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[14]); }
    c->r[7] = c->r[0] + 0xcu;
    c->r[0] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[8]); c->r[7] = c->r[7] + 20u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); }
    if (COND_NE) { goto L_59118c; }
L_5911c0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5911dc; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x34u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[7]; c->r[4] = r; }
    goto L_5911e0;
L_5911dc:;
    c->r[4] = 0x0u;
L_5911e0:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_591214; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
L_5911f0:;
    c->r[0] = c->r[7] + 0x8u;
    c->r[14] = 0x5911f8u; f_2dad24(c);
    c->r[7] = c->r[7] + 0x34u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_5911f0; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_591220; }
    goto L_59123c;
L_591214:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_59123c; }
L_591220:;
    c->r[0] = 0x14a7930u;
    { uint32_t ea = 0x59122cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x59122cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x59123cu; rt_dispatch(c);
L_59123c:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[5]); }
L_591240:;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
L_591244:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_59125c(Cpu *restrict c) {
    FN_ENTER(0x59125cu);
L_59125c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14f95a0u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x591280u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[5] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[5] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x78u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5912c8u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5912e0u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5912f8u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x3cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x42u; ST16(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x4cu;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xc8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff000000u;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x6e00u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = ~0xff0000u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd200u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff500000u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd2d2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffd20000u;
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x32cdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfff00000u;
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2323u;
    c->r[1] = 0x14a77acu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff230000u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7f7fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff7f0000u;
    { uint32_t ea = 0x5913b8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x11d1f87u;
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ab4c8u;
    c->r[1] = 0x5913c8u + c->r[1];
    { uint32_t ea = 0x5913ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5913ccu; f_9aedcc(c);
    c->r[1] = 0x14ab4fcu;
    c->r[3] = 0x3f0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5913e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14a7cf0u;
    c->r[0] = 0x14ab4acu;
    { uint32_t ea = 0x5913fcu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x11d1f4fu;
    { uint32_t ea = 0x591404u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x591408u + c->r[1];
    c->r[14] = 0x591408u; f_9aedcc(c);
    c->r[1] = 0x14ab4d4u;
    { uint32_t ea = 0x591414u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_591444(Cpu *restrict c) {
    FN_ENTER(0x591444u);
L_591444:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14ab498u;
    { uint32_t ea = 0x591454u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x591458u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0x591470u; rt_dispatch(c);
    c->r[14] = 0x591474u; f_22b8f0(c);
    c->r[1] = 0x14ab46cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x591484u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5914a8(Cpu *restrict c) {
    FN_ENTER(0x5914a8u);
L_5914a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14ab42cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5914c0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5914c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5914e4(Cpu *restrict c) {
    FN_ENTER(0x5914e4u);
L_5914e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14ab3f4u;
    { uint32_t ea = 0x5914f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5914f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_591510(Cpu *restrict c) {
    FN_ENTER(0x591510u);
L_591510:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x591518u; f_22b8f0(c);
    c->r[1] = 0x14ab3c8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x591528u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_591548(Cpu *restrict c) {
    FN_ENTER(0x591548u);
L_591548:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_59154c(Cpu *restrict c) {
    FN_ENTER(0x59154cu);
L_59154c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x591558u; f_22b908(c);
    c->r[0] = 0x14ab388u;
    { uint32_t ea = 0x591564u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x591564u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_59157c(Cpu *restrict c) {
    FN_ENTER(0x59157cu);
L_59157c:;
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
    c->r[14] = 0x5915b4u; f_9bb638(c);
    c->r[1] = 0x11d1d95u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x5915ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
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
    c->r[14] = 0x59162cu; f_9bb638(c);
    c->r[1] = 0x11bf6ddu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x591640u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
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
    c->r[14] = 0x5916a4u; f_9bb638(c);
    c->r[1] = 0x11d1cb2u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5916b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
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
    c->r[14] = 0x591718u; f_9bb638(c);
    c->r[1] = 0x11d1c45u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x59172cu + c->r[1];
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
    c->r[14] = 0x591790u; f_9bb638(c);
    c->r[1] = 0x11d1bd3u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5917a4u + c->r[1];
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
    c->r[14] = 0x591804u; f_9bb638(c);
    c->r[1] = 0x11d1b6du;
    c->r[1] = 0x591810u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
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
void f_591870(Cpu *restrict c) {
    FN_ENTER(0x591870u);
L_591870:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x59188cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5918a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5918b4u; rt_dispatch(c);
    ST32(c->r[4] + 12u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5918c8u; rt_dispatch(c);
    ST32(c->r[4] + 16u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5918dcu; rt_dispatch(c);
    ST32(c->r[4] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5918f0u; rt_dispatch(c);
    ST32(c->r[4] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5918f8(Cpu *restrict c) {
    FN_ENTER(0x5918f8u);
L_5918f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x591918u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x59192cu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 12u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x591940u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 16u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x591954u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 20u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x591968u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[5] + 24u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_591980(Cpu *restrict c) {
    FN_ENTER(0x591980u);
L_591980:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14aaf64u;
    { uint32_t ea = 0x591990u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x591994u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2cu;
    c->pc = c->r[4]; c->r[14] = 0x5919acu; rt_dispatch(c);
    c->r[14] = 0x5919b0u; f_22b8f0(c);
    c->r[2] = 0x14aaf20u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x5919d8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5919f8(Cpu *restrict c) {
    FN_ENTER(0x5919f8u);
L_5919f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14aaeecu;
    { uint32_t ea = 0x591a0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_591a5c; }
L_591a1c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_591a1c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_591a54; }
    c->r[0] = 0x14a7140u;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x591a48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x591a54u; rt_dispatch(c);
L_591a54:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_591a5c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_22b908(c);
}
void f_591a70(Cpu *restrict c) {
    FN_ENTER(0x591a70u);
L_591a70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14aae74u;
    { uint32_t ea = 0x591a84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_591ad4; }
L_591a94:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_591a94; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_591acc; }
    c->r[0] = 0x14a70c8u;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x591ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x591accu; rt_dispatch(c);
L_591acc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_591ad4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x591adcu; f_22b908(c);
    c->r[0] = 0x14aae0cu;
    { uint32_t ea = 0x591ae8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x591ae8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_591b08(Cpu *restrict c) {
    FN_ENTER(0x591b08u);
L_591b08:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x591b1cu; f_59157c(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x591b44u; f_9bb638(c);
    c->r[1] = 0x11c6254u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x591b5cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1cu;
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
    c->r[14] = 0x591bbcu; f_9bb638(c);
    c->r[1] = 0x11d17c1u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x591bd0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
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
    c->r[14] = 0x591c34u; f_9bb638(c);
    c->r[1] = 0x11d1752u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x591c48u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x24u;
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
    c->r[14] = 0x591ca8u; f_9bb638(c);
    c->r[1] = 0x11bf062u;
    c->r[1] = 0x591cb4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x28u;
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
void f_591d0c(Cpu *restrict c) {
    FN_ENTER(0x591d0cu);
L_591d0c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_591d10(Cpu *restrict c) {
    FN_ENTER(0x591d10u);
L_591d10:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_591d14(Cpu *restrict c) {
    FN_ENTER(0x591d14u);
L_591d14:;
    c->r[0] = 0x14aabccu;
    { uint32_t ea = 0x591d20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_591d24(Cpu *restrict c) {
    FN_ENTER(0x591d24u);
L_591d24:;
    c->r[0] = 0x14aabc4u;
    { uint32_t ea = 0x591d30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_591d34(Cpu *restrict c) {
    FN_ENTER(0x591d34u);
L_591d34:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14aab90u;
    c->r[5] = 0x0u;
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x591d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14a71b0u;
    { uint32_t ea = 0x591d64u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x11c4aa8u;
    c->r[1] = 0x591d6cu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x591d70u; f_9aedcc(c);
    c->r[0] = 0x14aab68u;
    c->r[1] = 0x11d15ebu;
    c->r[2] = c->r[4];
    c->r[3] = 0x2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x591d94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x591d98u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14aab4cu;
    { uint32_t ea = 0x591da8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x591da8u; f_9aedcc(c);
    c->r[1] = 0x14aab4cu;
    { uint32_t ea = 0x591db4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_591ddc(Cpu *restrict c) {
    FN_ENTER(0x591ddcu);
L_591ddc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14aab18u;
    { uint32_t ea = 0x591decu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x591df0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xa4u;
    c->pc = c->r[4]; c->r[14] = 0x591e08u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x14aaaf0u;
    { uint32_t ea = 0x591e18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0xa0u;
    c->r[14] = 0x591e28u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_591e38(Cpu *restrict c) {
    FN_ENTER(0x591e38u);
L_591e38:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14aaab4u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x591e50u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x591e54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_591e74(Cpu *restrict c) {
    FN_ENTER(0x591e74u);
L_591e74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14aaa7cu;
    { uint32_t ea = 0x591e88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x591e88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_591ea0(Cpu *restrict c) {
    FN_ENTER(0x591ea0u);
L_591ea0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14aaa54u;
    { uint32_t ea = 0x591eb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0xa0u;
    c->r[14] = 0x591ec4u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_591ed0(Cpu *restrict c) {
    FN_ENTER(0x591ed0u);
L_591ed0:;
    return;
}
void f_591ed4(Cpu *restrict c) {
    FN_ENTER(0x591ed4u);
L_591ed4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14aaa1cu;
    { uint32_t ea = 0x591ee8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x591ee8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
