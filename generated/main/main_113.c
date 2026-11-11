#include "cpu.h"
#include "neon_rt.h"
void f_200690(Cpu *c);
void f_20152c(Cpu *c);
void f_201530(Cpu *c);
void f_201534(Cpu *c);
void f_208674(Cpu *c);
void f_208a90(Cpu *c);
void f_2098a0(Cpu *c);
void f_209904(Cpu *c);
void f_209968(Cpu *c);
void f_2099cc(Cpu *c);
void f_209a30(Cpu *c);
void f_209a94(Cpu *c);
void f_209af8(Cpu *c);
void f_209c8c(Cpu *c);
void f_209cf0(Cpu *c);
void f_209d54(Cpu *c);
void f_209db8(Cpu *c);
void f_209e1c(Cpu *c);
void f_209e80(Cpu *c);
void f_209ee4(Cpu *c);
void f_209f48(Cpu *c);
void f_209fac(Cpu *c);
void f_20a04c(Cpu *c);
void f_20a0f0(Cpu *c);
void f_20a190(Cpu *c);
void f_20a230(Cpu *c);
void f_212710(Cpu *c);
void f_212750(Cpu *c);
void f_218600(Cpu *c);
void f_2189e0(Cpu *c);
void f_22b4e4(Cpu *c);
void f_2402d8(Cpu *c);
void f_24ed9c(Cpu *c);
void f_24edec(Cpu *c);
void f_2604c0(Cpu *c);
void f_260560(Cpu *c);
void f_267310(Cpu *c);
void f_34b2c8(Cpu *c);
void f_34b854(Cpu *c);
void f_34b890(Cpu *c);
void f_34b95c(Cpu *c);
void f_34c410(Cpu *c);
void f_34c628(Cpu *c);
void f_34c688(Cpu *c);
void f_34c8b8(Cpu *c);
void f_34c988(Cpu *c);
void f_34cad8(Cpu *c);
void f_34cd64(Cpu *c);
void f_34cecc(Cpu *c);
void f_34d704(Cpu *c);
void f_34d93c(Cpu *c);
void f_34dfdc(Cpu *c);
void f_34e080(Cpu *c);
void f_34e4b4(Cpu *c);
void f_34e4b8(Cpu *c);
void f_34e5a8(Cpu *c);
void f_34e850(Cpu *c);
void f_34e9b0(Cpu *c);
void f_34ea3c(Cpu *c);
void f_34ea80(Cpu *c);
void f_34fb50(Cpu *c);
void f_34fbfc(Cpu *c);
void f_34fd9c(Cpu *c);
void f_352960(Cpu *c);
void f_3529a8(Cpu *c);
void f_352ef8(Cpu *c);
void f_353030(Cpu *c);
void f_35334c(Cpu *c);
void f_353370(Cpu *c);
void f_35c028(Cpu *c);
void f_363ea8(Cpu *c);
void f_364410(Cpu *c);
void f_391474(Cpu *c);
void f_39412c(Cpu *c);
void f_394228(Cpu *c);
void f_398824(Cpu *c);
void f_39a5d4(Cpu *c);
void f_39e108(Cpu *c);
void f_3a48e8(Cpu *c);
void f_3a4e78(Cpu *c);
void f_3c8a48(Cpu *c);
void f_3c9460(Cpu *c);
void f_401128(Cpu *c);
void f_416ac4(Cpu *c);
void f_4257ec(Cpu *c);
void f_427a98(Cpu *c);
void f_427b3c(Cpu *c);
void f_427ba8(Cpu *c);
void f_42808c(Cpu *c);
void f_440ddc(Cpu *c);
void f_44a468(Cpu *c);
void f_44a4a4(Cpu *c);
void f_44af24(Cpu *c);
void f_44afac(Cpu *c);
void f_44c0c4(Cpu *c);
void f_44c100(Cpu *c);
void f_44c15c(Cpu *c);
void f_457b60(Cpu *c);
void f_45d43c(Cpu *c);
void f_45e378(Cpu *c);
void f_460ebc(Cpu *c);
void f_4634cc(Cpu *c);
void f_463d94(Cpu *c);
void f_464784(Cpu *c);
void f_46e600(Cpu *c);
void f_474514(Cpu *c);
void f_474ce4(Cpu *c);
void f_475838(Cpu *c);
void f_475a30(Cpu *c);
void f_476278(Cpu *c);
void f_4772c4(Cpu *c);
void f_4778cc(Cpu *c);
void f_4779d8(Cpu *c);
void f_479228(Cpu *c);
void f_51a400(Cpu *c);
void f_51a8e8(Cpu *c);
void f_588a48(Cpu *c);
void f_588a78(Cpu *c);
void f_5a24a0(Cpu *c);
void f_5a2ad0(Cpu *c);
void f_5a30a4(Cpu *c);
void f_5a3778(Cpu *c);
void f_5a3ecc(Cpu *c);
void f_5a5ed0(Cpu *c);
void f_5a9018(Cpu *c);
void f_5aa530(Cpu *c);
void f_5aa7c8(Cpu *c);
void f_5aa93c(Cpu *c);
void f_5aab38(Cpu *c);
void f_5aad08(Cpu *c);
void f_5abb14(Cpu *c);
void f_5abb80(Cpu *c);
void f_5abbf8(Cpu *c);
void f_5ad954(Cpu *c);
void f_5ae21c(Cpu *c);
void f_5aefc0(Cpu *c);
void f_5aefec(Cpu *c);
void f_5af2cc(Cpu *c);
void f_5b123c(Cpu *c);
void f_5b190c(Cpu *c);
void f_5b1940(Cpu *c);
void f_5b50dc(Cpu *c);
void f_5b5ac0(Cpu *c);
void f_5bf8c8(Cpu *c);
void f_5c0d20(Cpu *c);
void f_5c2f3c(Cpu *c);
void f_5c300c(Cpu *c);
void f_5c5b50(Cpu *c);
void f_5c6104(Cpu *c);
void f_5c6180(Cpu *c);
void f_5c6d44(Cpu *c);
void f_5c6f80(Cpu *c);
void f_5cd56c(Cpu *c);
void f_5d7318(Cpu *c);
void f_5d733c(Cpu *c);
void f_5d7428(Cpu *c);
void f_5dd72c(Cpu *c);
void f_5deb90(Cpu *c);
void f_5dec14(Cpu *c);
void f_5df850(Cpu *c);
void f_5e6434(Cpu *c);
void f_5e9bac(Cpu *c);
void f_5ea218(Cpu *c);
void f_5ea270(Cpu *c);
void f_5ea2b0(Cpu *c);
void f_5ea4c4(Cpu *c);
void f_5ea570(Cpu *c);
void f_5ef5fc(Cpu *c);
void f_5f43e8(Cpu *c);
void f_5f8398(Cpu *c);
void f_5f83a8(Cpu *c);
void f_5f8534(Cpu *c);
void f_5f856c(Cpu *c);
void f_5f85fc(Cpu *c);
void f_5f8a20(Cpu *c);
void f_5f8e40(Cpu *c);
void f_5f8f90(Cpu *c);
void f_6cf2d0(Cpu *c);
void f_6d02ec(Cpu *c);
void f_6de048(Cpu *c);
void f_6de320(Cpu *c);
void f_6de348(Cpu *c);
void f_6de39c(Cpu *c);
void f_6de768(Cpu *c);
void f_6dee3c(Cpu *c);
void f_6dee48(Cpu *c);
void f_6df23c(Cpu *c);
void f_6df270(Cpu *c);
void f_6df80c(Cpu *c);
void f_6e3fa0(Cpu *c);
void f_6e8f50(Cpu *c);
void f_6e98ac(Cpu *c);
void f_6e9b38(Cpu *c);
void f_6eeb78(Cpu *c);
void f_6fda4c(Cpu *c);
void f_6fdc70(Cpu *c);
void f_6fe450(Cpu *c);
void f_6fe4c0(Cpu *c);
void f_6fed98(Cpu *c);
void f_6ff50c(Cpu *c);
void f_6fff00(Cpu *c);
void f_70005c(Cpu *c);
void f_700420(Cpu *c);
void f_70049c(Cpu *c);
void f_7004fc(Cpu *c);
void f_702ba4(Cpu *c);
void f_70306c(Cpu *c);
void f_70362c(Cpu *c);
void f_70373c(Cpu *c);
void f_703854(Cpu *c);
void f_7054bc(Cpu *c);
void f_7054f4(Cpu *c);
void f_705504(Cpu *c);
void f_705514(Cpu *c);
void f_7068b0(Cpu *c);
void f_707efc(Cpu *c);
void f_70cbd0(Cpu *c);
void f_71e6d8(Cpu *c);
void f_72139c(Cpu *c);
void f_72171c(Cpu *c);
void f_721d4c(Cpu *c);
void f_737a64(Cpu *c);
void f_737b44(Cpu *c);
void f_739180(Cpu *c);
void f_74533c(Cpu *c);
void f_745ac0(Cpu *c);
void f_745af8(Cpu *c);
void f_7464dc(Cpu *c);
void f_74f9c0(Cpu *c);
void f_74f9f0(Cpu *c);
void f_74fa20(Cpu *c);
void f_751e38(Cpu *c);
void f_7543d4(Cpu *c);
void f_75b018(Cpu *c);
void f_75b430(Cpu *c);
void f_75bc4c(Cpu *c);
void f_75bcdc(Cpu *c);
void f_75bda4(Cpu *c);
void f_75d5fc(Cpu *c);
void f_75db48(Cpu *c);
void f_75dd88(Cpu *c);
void f_75dff0(Cpu *c);
void f_75e294(Cpu *c);
void f_75e2bc(Cpu *c);
void f_75ebdc(Cpu *c);
void f_75ee80(Cpu *c);
void f_75f18c(Cpu *c);
void f_75f1a0(Cpu *c);
void f_75ff98(Cpu *c);
void f_760ca4(Cpu *c);
void f_760e90(Cpu *c);
void f_7610d0(Cpu *c);
void f_761124(Cpu *c);
void f_761188(Cpu *c);
void f_7611c8(Cpu *c);
void f_7611e8(Cpu *c);
void f_761e80(Cpu *c);
void f_761e88(Cpu *c);
void f_761e98(Cpu *c);
void f_76d97c(Cpu *c);
void f_76da30(Cpu *c);
void f_76dc20(Cpu *c);
void f_76dc24(Cpu *c);
void f_76dd44(Cpu *c);
void f_76e1a8(Cpu *c);
void f_76e3ac(Cpu *c);
void f_76e3b0(Cpu *c);
void f_76e4d8(Cpu *c);
void f_76e530(Cpu *c);
void f_76e538(Cpu *c);
void f_76e61c(Cpu *c);
void f_76e62c(Cpu *c);
void f_76e6a8(Cpu *c);
void f_76e6fc(Cpu *c);
void f_76e7b8(Cpu *c);
void f_76e808(Cpu *c);
void f_76ef50(Cpu *c);
void f_76efe0(Cpu *c);
void f_76fb94(Cpu *c);
void f_76fde0(Cpu *c);
void f_770710(Cpu *c);
void f_80097c(Cpu *c);
void f_85da38(Cpu *c);
void f_85dd68(Cpu *c);
void f_85e794(Cpu *c);
void f_85f118(Cpu *c);
void f_85f190(Cpu *c);
void f_85f270(Cpu *c);
void f_89f0b4(Cpu *c);
void f_89f2d8(Cpu *c);
void f_89f4d8(Cpu *c);
void f_89f778(Cpu *c);
void f_89f9fc(Cpu *c);
void f_89fb68(Cpu *c);
void f_8a091c(Cpu *c);
void f_8a0a7c(Cpu *c);
void f_8a0bcc(Cpu *c);
void f_8a0cf4(Cpu *c);
void f_8a0eb4(Cpu *c);
void f_8a1004(Cpu *c);
void f_8a11c8(Cpu *c);
void f_8a13e0(Cpu *c);
void f_8a1674(Cpu *c);
void f_8a1ae8(Cpu *c);
void f_8a2204(Cpu *c);
void f_8a2380(Cpu *c);
void f_8a2cbc(Cpu *c);
void f_8a32fc(Cpu *c);
void f_8a3640(Cpu *c);
void f_8a37bc(Cpu *c);
void f_8a3bc4(Cpu *c);
void f_8a3e08(Cpu *c);
void f_8a3ee8(Cpu *c);
void f_8a4280(Cpu *c);
void f_8a4634(Cpu *c);
void f_8a4970(Cpu *c);
void f_8a4b3c(Cpu *c);
void f_8a5150(Cpu *c);
void f_8a526c(Cpu *c);
void f_8a5420(Cpu *c);
void f_8a55f4(Cpu *c);
void f_8a568c(Cpu *c);
void f_8a5ae0(Cpu *c);
void f_8a5bb4(Cpu *c);
void f_8a61d0(Cpu *c);
void f_8a641c(Cpu *c);
void f_8a64dc(Cpu *c);
void f_8a689c(Cpu *c);
void f_8a6a74(Cpu *c);
void f_8a6cf8(Cpu *c);
void f_8a6e34(Cpu *c);
void f_8a7130(Cpu *c);
void f_8a71c0(Cpu *c);
void f_8a7350(Cpu *c);
void f_8a73c0(Cpu *c);
void f_8a747c(Cpu *c);
void f_8a7684(Cpu *c);
void f_8a76c4(Cpu *c);
void f_8a76d8(Cpu *c);
void f_8a800c(Cpu *c);
void f_8a8054(Cpu *c);
void f_8a8088(Cpu *c);
void f_8a8180(Cpu *c);
void f_8a81b0(Cpu *c);
void f_8a81d0(Cpu *c);
void f_8a8220(Cpu *c);
void f_8a8240(Cpu *c);
void f_8a8274(Cpu *c);
void f_8a87a8(Cpu *c);
void f_8a8a9c(Cpu *c);
void f_8a8d3c(Cpu *c);
void f_8a8fd8(Cpu *c);
void f_8a9280(Cpu *c);
void f_8a958c(Cpu *c);
void f_8a96c0(Cpu *c);
void f_8a97ac(Cpu *c);
void f_8a9cb8(Cpu *c);
void f_8aa094(Cpu *c);
void f_8aa2ac(Cpu *c);
void f_8aa800(Cpu *c);
void f_8adba8(Cpu *c);
void f_8add34(Cpu *c);
void f_8add84(Cpu *c);
void f_8ae19c(Cpu *c);
void f_8ae460(Cpu *c);
void f_8ae5a0(Cpu *c);
void f_8aeadc(Cpu *c);
void f_8af494(Cpu *c);
void f_8af678(Cpu *c);
void f_8af930(Cpu *c);
void f_8afb70(Cpu *c);
void f_8afdb4(Cpu *c);
void f_8b046c(Cpu *c);
void f_8b0600(Cpu *c);
void f_8b0a74(Cpu *c);
void f_8b0da4(Cpu *c);
void f_8b0fe0(Cpu *c);
void f_8b151c(Cpu *c);
void f_8b1e38(Cpu *c);
void f_8b1e6c(Cpu *c);
void f_8b24d4(Cpu *c);
void f_8bbbc4(Cpu *c);
void f_8bbc38(Cpu *c);
void f_8bbc70(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af3e4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c95b8(Cpu *c);
void f_9ca854(Cpu *c);
void f_a2fb08(Cpu *c);
void f_a2fb10(Cpu *c);
void f_a2fb14(Cpu *c);
void f_a31b90(Cpu *c);
void f_a776fc(Cpu *c);
void f_a777f4(Cpu *c);
void f_a78d54(Cpu *c);
void f_a870b8(Cpu *c);
void f_a87100(Cpu *c);
void f_a871d8(Cpu *c);
void f_a87810(Cpu *c);
void f_a8784c(Cpu *c);
void f_a878e4(Cpu *c);
void f_a878e8(Cpu *c);
void f_b28dd0(Cpu *c);
void f_b28e10(Cpu *c);
void f_b66140(Cpu *c);
void f_b6b874(Cpu *c);
void f_b6b8b0(Cpu *c);
void f_d84114(Cpu *c);
void f_dad28c(Cpu *c);
void f_e067ec(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efe30(Cpu *c);
void f_15eff2c(Cpu *c);
void f_15eff98(Cpu *c);
void f_15f0088(Cpu *c);
void f_89e1e4(Cpu *restrict c) {
    FN_ENTER(0x89e1e4u);
L_89e1e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_89e22c; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = 0x0u;
L_89e1fc:;
    { uint32_t ea = c->r[14] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89e220; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_89e220; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_89e230; }
L_89e220:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_CC) { goto L_89e1fc; }
L_89e22c:;
    c->r[0] = 0x0u;
L_89e230:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_89e234(Cpu *restrict c) {
    FN_ENTER(0x89e234u);
L_89e234:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_89e238(Cpu *restrict c) {
    FN_ENTER(0x89e238u);
L_89e238:;
    c->r[0] = 0x119b418u;
    { uint32_t ea = 0x89e244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_89e248(Cpu *restrict c) {
    FN_ENTER(0x89e248u);
L_89e248:;
    c->r[0] = 0xece301u;
    c->r[0] = 0x89e254u + c->r[0];
    return;
}
void f_89e258(Cpu *restrict c) {
    FN_ENTER(0x89e258u);
L_89e258:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x89e260u; f_200690(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9ca854(c);
}
void f_89e268(Cpu *restrict c) {
    FN_ENTER(0x89e268u);
L_89e268:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1204534u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x89e294u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0x119a89cu;
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
    c->r[0] = 0x119b370u;
    { uint32_t ea = 0x89e2e0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xece257u;
    c->r[3] = 0x78u;
    { uint32_t ea = 0x89e2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x89e2f0u + c->r[1];
    c->r[14] = 0x89e2f0u; f_9aedcc(c);
    c->r[1] = 0x11a26e4u;
    { uint32_t ea = 0x89e2fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_89e31c(Cpu *restrict c) {
    FN_ENTER(0x89e31cu);
L_89e31c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x119b340u;
    { uint32_t ea = 0x89e32cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x89e330u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x89e348u; rt_dispatch(c);
    c->r[14] = 0x89e34cu; f_a870b8(c);
    c->r[1] = 0x11a268cu;
    { uint32_t ea = 0x89e358u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x11a2680u;
    { uint32_t ea = 0x89e368u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_89e39c(Cpu *restrict c) {
    FN_ENTER(0x89e39cu);
L_89e39c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11a2634u;
    { uint32_t ea = 0x89e3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x64u; }
    c->r[14] = 0x89e3bcu; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_89e3cc(Cpu *restrict c) {
    FN_ENTER(0x89e3ccu);
L_89e3cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11a2604u;
    { uint32_t ea = 0x89e3e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x64u; }
    c->r[14] = 0x89e3ecu; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x89e3f4u; f_a87100(c);
    c->r[0] = 0x119b26cu;
    { uint32_t ea = 0x89e400u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89e400u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_89e41c(Cpu *restrict c) {
    FN_ENTER(0x89e41cu);
L_89e41c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x348u;
    c->r[6] = c->r[13] + 0xcu;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x89e43cu; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x100u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x119b210u;
    { uint32_t ea = 0x89e45cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x89e464u; f_a31b90(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x89e470u; f_a2fb10(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x348u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_89e480(Cpu *restrict c) {
    FN_ENTER(0x89e480u);
L_89e480:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x340u;
    c->r[6] = c->r[13] + 0x4u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x89e4a0u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x100u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x89e4bcu; f_a2fb14(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x89e4c8u; f_a2fb10(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x340u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_89e4dc(Cpu *restrict c) {
    FN_ENTER(0x89e4dcu);
L_89e4dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_89e520; }
    c->r[5] = 0x0u;
L_89e4f4:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89e514; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x89e510u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_89e514:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_89e4f4; }
L_89e520:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89e548; }
    c->r[0] = 0x119a624u;
    { uint32_t ea = 0x89e538u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89e538u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x89e548u; rt_dispatch(c);
L_89e548:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89e560(Cpu *restrict c) {
    FN_ENTER(0x89e560u);
L_89e560:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x89e574u; f_a871d8(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x89e59cu; f_9bb638(c);
    c->r[1] = 0xeb279au;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x89e5b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
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
void f_89e5f8(Cpu *restrict c) {
    FN_ENTER(0x89e5f8u);
L_89e5f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_89e654; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
L_89e61c:;
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_89e648; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[5], c->r[2]); }
    if (COND_NE) { goto L_89e648; }
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_EQ) { goto L_89e65c; }
L_89e648:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_CC) { goto L_89e61c; }
L_89e654:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89e65c:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89e664(Cpu *restrict c) {
    FN_ENTER(0x89e664u);
L_89e664:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_89e6e8; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
L_89e68c:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89e6b8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_89e6b8; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[3]); }
    if (COND_EQ) { goto L_89e6c8; }
L_89e6b8:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[12]);
    if (COND_CC) { goto L_89e68c; }
    goto L_89e6e8;
L_89e6c8:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[14]);
    if (COND_LS) { goto L_89e6b8; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89e6b8; }
    goto L_89e6ec;
L_89e6e8:;
    c->r[0] = 0x0u;
L_89e6ec:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89e6f0(Cpu *restrict c) {
    FN_ENTER(0x89e6f0u);
L_89e6f0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_89e74c; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[4] = 0x0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
L_89e714:;
    { uint32_t ea = c->r[14] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89e740; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[5], c->r[2]); }
    if (COND_NE) { goto L_89e740; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_EQ) { goto L_89e750; }
L_89e740:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[12]);
    if (COND_CC) { goto L_89e714; }
L_89e74c:;
    c->r[0] = 0x0u;
L_89e750:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89e754(Cpu *restrict c) {
    FN_ENTER(0x89e754u);
L_89e754:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_89e758(Cpu *restrict c) {
    FN_ENTER(0x89e758u);
L_89e758:;
    c->r[0] = 0x119af08u;
    { uint32_t ea = 0x89e764u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_89e768(Cpu *restrict c) {
    FN_ENTER(0x89e768u);
L_89e768:;
    c->r[0] = 0xecddfdu;
    c->r[0] = 0x89e774u + c->r[0];
    return;
}
void f_89e778(Cpu *restrict c) {
    FN_ENTER(0x89e778u);
L_89e778:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x89e780u; f_200690(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9ca854(c);
}
void f_89e788(Cpu *restrict c) {
    FN_ENTER(0x89e788u);
L_89e788:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x120405cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x89e7b4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0x119a37cu;
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
    c->r[0] = 0x119ae60u;
    { uint32_t ea = 0x89e800u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xecdd51u;
    c->r[3] = 0x78u;
    { uint32_t ea = 0x89e80cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x89e810u + c->r[1];
    c->r[14] = 0x89e810u; f_9aedcc(c);
    c->r[1] = 0x11a21d0u;
    { uint32_t ea = 0x89e81cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_89e83c(Cpu *restrict c) {
    FN_ENTER(0x89e83cu);
L_89e83c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x119ae1cu;
    { uint32_t ea = 0x89e84cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x89e850u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x89e868u; rt_dispatch(c);
    c->r[14] = 0x89e86cu; f_a870b8(c);
    c->r[1] = 0x11a2178u;
    { uint32_t ea = 0x89e878u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x11a216cu;
    { uint32_t ea = 0x89e888u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_89e8bc(Cpu *restrict c) {
    FN_ENTER(0x89e8bcu);
L_89e8bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11a2120u;
    { uint32_t ea = 0x89e8d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x64u; }
    c->r[14] = 0x89e8dcu; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_89e8ec(Cpu *restrict c) {
    FN_ENTER(0x89e8ecu);
L_89e8ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11a20f0u;
    { uint32_t ea = 0x89e900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x64u; }
    c->r[14] = 0x89e90cu; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x89e914u; f_a87100(c);
    c->r[0] = 0x119ad48u;
    { uint32_t ea = 0x89e920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89e920u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_89e93c(Cpu *restrict c) {
    FN_ENTER(0x89e93cu);
L_89e93c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x348u;
    c->r[6] = c->r[13] + 0xcu;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x89e95cu; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x1fdu;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x119acecu;
    { uint32_t ea = 0x89e97cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x89e984u; f_a31b90(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x89e990u; f_a2fb10(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x348u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_89e9a0(Cpu *restrict c) {
    FN_ENTER(0x89e9a0u);
L_89e9a0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x340u;
    c->r[6] = c->r[13] + 0x4u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x89e9c0u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x1fdu;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x89e9dcu; f_a2fb14(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x89e9e8u; f_a2fb10(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x340u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_89e9fc(Cpu *restrict c) {
    FN_ENTER(0x89e9fcu);
L_89e9fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_89ea40; }
    c->r[5] = 0x0u;
L_89ea14:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89ea34; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x89ea30u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_89ea34:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_89ea14; }
L_89ea40:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89ea68; }
    c->r[0] = 0x119a104u;
    { uint32_t ea = 0x89ea58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ea58u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x89ea68u; rt_dispatch(c);
L_89ea68:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89ea80(Cpu *restrict c) {
    FN_ENTER(0x89ea80u);
L_89ea80:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x89ea94u; f_a871d8(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x89eabcu; f_9bb638(c);
    c->r[1] = 0xeb227au;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x89ead0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
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
void f_89eb18(Cpu *restrict c) {
    FN_ENTER(0x89eb18u);
L_89eb18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_89eb5c; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = 0x0u;
L_89eb30:;
    { uint32_t ea = c->r[14] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89eb50; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x5u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[4], c->r[2]); }
    if (COND_EQ) { goto L_89eb60; }
L_89eb50:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_CC) { goto L_89eb30; }
L_89eb5c:;
    c->r[0] = 0x0u;
L_89eb60:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_89eb64(Cpu *restrict c) {
    FN_ENTER(0x89eb64u);
L_89eb64:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_89eb68(Cpu *restrict c) {
    FN_ENTER(0x89eb68u);
L_89eb68:;
    c->r[0] = 0x119aaf4u;
    { uint32_t ea = 0x89eb74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_89eb78(Cpu *restrict c) {
    FN_ENTER(0x89eb78u);
L_89eb78:;
    c->r[0] = 0xecda08u;
    c->r[0] = 0x89eb84u + c->r[0];
    return;
}
void f_89eb88(Cpu *restrict c) {
    FN_ENTER(0x89eb88u);
L_89eb88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x89eb90u; f_200690(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9ca854(c);
}
void f_89eb98(Cpu *restrict c) {
    FN_ENTER(0x89eb98u);
L_89eb98:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1203cbcu;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x89ebc4u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[11] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x89ec20u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x89ec38u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x89ec50u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x1199ef0u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x119a9d4u;
    { uint32_t ea = 0x89ec8cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xecd8e4u;
    { uint32_t ea = 0x89ec94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x89ec98u + c->r[1];
    c->r[14] = 0x89ec98u; f_9aedcc(c);
    c->r[1] = 0x11a1d54u;
    { uint32_t ea = 0x89eca4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89ecc4(Cpu *restrict c) {
    FN_ENTER(0x89ecc4u);
L_89ecc4:;
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
    c->r[14] = 0x89ecfcu; f_9bb638(c);
    c->r[1] = 0xecd883u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x89ed14u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xbcu;
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
    c->r[14] = 0x89ed74u; f_9bb638(c);
    c->r[1] = 0xecd81au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x89ed88u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc4u;
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
    c->r[14] = 0x89edf0u; f_9bb638(c);
    c->r[1] = 0xecd7aau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x89ee04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xc8u;
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
    c->r[14] = 0x89ee68u; f_9bb638(c);
    c->r[1] = 0xecd745u;
    c->r[1] = 0x89ee74u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xccu;
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
    c->r[0] = c->r[10];
    c->r[1] = c->r[11];
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_20152c(c);
}
void f_89eed8(Cpu *restrict c) {
    FN_ENTER(0x89eed8u);
L_89eed8:;
    __attribute__((musttail)) return f_201530(c);
}
void f_89eedc(Cpu *restrict c) {
    FN_ENTER(0x89eedcu);
L_89eedc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x89eee4u; f_201534(c);
    c->r[0] = 0x1199d80u;
    { uint32_t ea = 0x89eef0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89eef4u; f_702ba4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89eefcu; f_7054bc(c);
    c->r[0] = 0x1199e58u;
    { uint32_t ea = 0x89ef08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ef0cu; f_34cd64(c);
    c->r[0] = 0x10u;
    c->r[14] = 0x89ef14u; f_7543d4(c);
    c->r[0] = 0x1199e5cu;
    { uint32_t ea = 0x89ef20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ef24u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89ef3c; }
    c->r[0] = 0x1199df0u;
    { uint32_t ea = 0x89ef38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ef3cu; f_5a9018(c);
L_89ef3c:;
    c->r[0] = 0x1199e30u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x89ef4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x63au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_89ef6c(Cpu *restrict c) {
    FN_ENTER(0x89ef6cu);
L_89ef6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1199e04u;
    { uint32_t ea = 0x89ef80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_89f038; }
L_89ef8c:;
    c->r[0] = 0x1199dd8u;
    { uint32_t ea = 0x89ef98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ef9cu; f_22b4e4(c);
    c->r[0] = 0x1199de4u;
    { uint32_t ea = 0x89efa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89efacu; f_737b44(c);
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89efc8; }
    c->r[0] = 0x1199d64u;
    { uint32_t ea = 0x89efc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89efc8u; f_5a2ad0(c);
L_89efc8:;
    c->r[0] = 0x1199be0u;
    { uint32_t ea = 0x89efd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89efd8u; f_5f8a20(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_89f08c; }
    c->r[0] = 0x1199c84u;
    { uint32_t ea = 0x89efecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x89eff8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x89f010u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x89f02cu: goto L_89f02c; case 0x89f048u: goto L_89f048; case 0x89f054u: goto L_89f054; case 0x89f060u: goto L_89f060; case 0x89f06cu: goto L_89f06c; case 0x89f090u: goto L_89f090; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_89f02c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_89f0b4(c);
L_89f038:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_89f08c; }
    goto L_89ef8c;
L_89f048:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_89f2d8(c);
L_89f054:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_89f4d8(c);
L_89f060:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_89f778(c);
L_89f06c:;
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_89f08c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x5u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); } }
L_89f08c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_89f090:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_89f9fc(c);
}
void f_89f0b4(Cpu *restrict c) {
    FN_ENTER(0x89f0b4u);
L_89f0b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_89f170; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x1199c44u;
    c->r[1] = 0x174cu;
    { uint32_t ea = 0x89f0e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_89f108; }
    c->r[0] = 0x1199c64u;
    { uint32_t ea = 0x89f0fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f100u; f_34fb50(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f184; }
L_89f108:;
    c->r[0] = 0x1199accu;
    { uint32_t ea = 0x89f114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f118u; f_6de39c(c);
    c->r[0] = 0x1199c08u;
    { uint32_t ea = 0x89f124u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_89f120:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x2u;
L_89f128:;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[14] = 0x89f134u; f_5ea2b0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_89f138:;
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[14] = 0x89f144u; f_5ea2b0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0x1u;
    c->r[14] = 0x89f154u; f_5ea2b0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = 0x1u;
    c->r[14] = 0x89f164u; f_5ea2b0(c);
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_89f178;
L_89f170:;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[1]); }
L_89f178:;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_89f180:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89f184:;
    c->r[0] = 0x1199bd0u;
    { uint32_t ea = 0x89f190u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f194u; f_34c8b8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f1c0; }
    c->r[0] = 0x1199b7cu;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x89f1b0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f1b4u; f_5ea2b0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x3u;
    goto L_89f138;
L_89f1c0:;
    c->r[0] = 0x1199a14u;
    { uint32_t ea = 0x89f1ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f1d0u; f_6de39c(c);
    c->r[0] = 0x1199b80u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x89f1e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f1e4u; f_34c988(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f200; }
    c->r[0] = 0x1199b30u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0x89f1fcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_89f128;
L_89f200:;
    c->r[0] = 0x1199b50u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x89f210u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f214u; f_34cad8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f228; }
    c->r[0] = 0x1199b04u;
    { uint32_t ea = 0x89f228u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_89f120;
L_89f228:;
    c->r[0] = 0x1199980u;
    { uint32_t ea = 0x89f234u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f238u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_89f180; }
    c->r[0] = 0x1199b3cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x89f250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x1a0u; ST8(ea, c->r[1]); }
    c->r[14] = 0x89f25cu; f_737a64(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_89f290; }
    c->r[1] = 0x11a177cu;
    c->r[0] = 0x1199930u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f280u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x89f290u; f_5f8534(c);
L_89f290:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89f2d8(Cpu *restrict c) {
    FN_ENTER(0x89f2d8u);
L_89f2d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_89f428; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x89f2f8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x89f30cu: goto L_89f30c; case 0x89f340u: goto L_89f340; case 0x89f3a4u: goto L_89f3a4; case 0x89f42cu: goto L_89f42c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_89f30c:;
    c->r[0] = 0x1199a48u;
    { uint32_t ea = 0x89f318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f31cu; f_34ea3c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f428; }
    c->r[0] = 0x1199a30u;
    { uint32_t ea = 0x89f330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f334u; f_34d704(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89f340:;
    c->r[0] = 0x1199a14u;
    { uint32_t ea = 0x89f34cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f350u; f_34e4b4(c);
    c->r[0] = 0x1199914u;
    { uint32_t ea = 0x89f35cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f360u; f_705514(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f368u; f_34dfdc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f428; }
    c->r[1] = 0x11a167cu;
    c->r[0] = 0x1199828u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f388u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f38cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f398u; f_5f856c(c);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89f3a4:;
    c->r[0] = 0x1199804u;
    { uint32_t ea = 0x89f3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f3b4u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x11998a8u;
    { uint32_t ea = 0x89f3c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f3ccu; f_705504(c);
    c->r[0] = 0x1199988u;
    { uint32_t ea = 0x89f3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f3dcu; f_34e080(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f3e4u; f_34e4b8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f3ecu; f_34e9b0(c);
    c->r[1] = 0x11a15fcu;
    c->r[0] = 0x11997acu;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f404u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f414u; f_5f8534(c);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_89f428:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89f42c:;
    c->r[0] = 0x1199928u;
    { uint32_t ea = 0x89f438u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f43cu; f_34e5a8(c);
    c->r[0] = 0x1199790u;
    { uint32_t ea = 0x89f448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f44cu; f_761188(c);
    c->r[0] = 0x1199818u;
    { uint32_t ea = 0x89f458u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f45cu; f_7054f4(c);
    c->r[1] = 0x11a158cu;
    c->r[0] = 0x119973cu;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f474u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f478u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f484u; f_5f8534(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f48cu; f_34d93c(c);
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_89f4d8(Cpu *restrict c) {
    FN_ENTER(0x89f4d8u);
L_89f4d8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_89f6d0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x89f4f8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x89f50cu: goto L_89f50c; case 0x89f52cu: goto L_89f52c; case 0x89f58cu: goto L_89f58c; case 0x89f660u: goto L_89f660; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_89f50c:;
    c->r[0] = 0x1199848u;
    { uint32_t ea = 0x89f518u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f51cu; f_34ea3c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f6d0; }
    c->r[0] = 0x1u;
    goto L_89f6cc;
L_89f52c:;
    c->r[0] = 0x1199828u;
    { uint32_t ea = 0x89f538u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f53cu; f_34e4b4(c);
    c->r[0] = 0x1199728u;
    { uint32_t ea = 0x89f548u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f54cu; f_705514(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f554u; f_34dfdc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f6d0; }
    c->r[1] = 0x11a1490u;
    c->r[0] = 0x119963cu;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f574u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f584u; f_5f856c(c);
    c->r[0] = 0x3u;
    goto L_89f6cc;
L_89f58c:;
    c->r[0] = 0x119961cu;
    { uint32_t ea = 0x89f598u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f59cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x11996c0u;
    { uint32_t ea = 0x89f5b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f5b4u; f_705504(c);
    c->r[0] = 0x11997a0u;
    { uint32_t ea = 0x89f5c0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f5c4u; f_34e080(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f5ccu; f_34e4b8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f5d4u; f_34e9b0(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f5dcu; f_34fd9c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f5ec; }
    c->r[0] = 0x50u;
    c->r[14] = 0x89f5ecu; f_24edec(c);
L_89f5ec:;
    c->r[0] = 0x1199768u;
    { uint32_t ea = 0x89f5f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f5fcu; f_34fbfc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f6d4; }
    c->r[0] = 0x5u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xff000000u) | ((c->r[1] << 0) & 0xffffffu);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1199588u;
    { uint32_t ea = 0x89f62cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4au; ST8(ea, c->r[2]); }
    c->r[0] = 0x1199598u;
    { uint32_t ea = c->r[4] + 0xceu; ST8(ea, c->r[1]); }
    { uint32_t ea = 0x89f640u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2b9u; ST8(ea, c->r[1]); }
    c->r[0] = 0x1199620u;
    { uint32_t ea = 0x89f650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x6u;
    { uint32_t ea = c->r[0] + 0x1a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89f660:;
    c->r[0] = 0x11996f4u;
    { uint32_t ea = 0x89f66cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f670u; f_34e5a8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f678u; f_34d704(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f680u; f_34d93c(c);
    c->r[0] = 0x119954cu;
    { uint32_t ea = 0x89f68cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f690u; f_761188(c);
    c->r[0] = 0x11995d4u;
    { uint32_t ea = 0x89f69cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f6a0u; f_7054f4(c);
    c->r[1] = 0x11a1348u;
    c->r[0] = 0x11994f8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f6b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f6bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f6c8u; f_5f8534(c);
    c->r[0] = 0x2u;
L_89f6cc:;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
L_89f6d0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89f6d4:;
    c->r[1] = 0x11a1314u;
    c->r[0] = 0x11994c4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f6ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f6f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f6fcu; f_5f8534(c);
    c->r[0] = 0x4u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1199608u;
    { uint32_t ea = 0x89f720u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5a3ecc(c);
}
void f_89f778(Cpu *restrict c) {
    FN_ENTER(0x89f778u);
L_89f778:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_89f914; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x89f798u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x89f7acu: goto L_89f7ac; case 0x89f7c4u: goto L_89f7c4; case 0x89f840u: goto L_89f840; case 0x89f918u: goto L_89f918; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_89f7ac:;
    c->r[0] = 0x11995a8u;
    { uint32_t ea = 0x89f7b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f7bcu; f_34d704(c);
    c->r[0] = 0x1u;
    goto L_89f910;
L_89f7c4:;
    c->r[0] = 0x1199590u;
    { uint32_t ea = 0x89f7d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f7d4u; f_34ea80(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f914; }
    c->r[0] = 0x1199578u;
    { uint32_t ea = 0x89f7e8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f7ecu; f_34e5a8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f7f4u; f_34d93c(c);
    c->r[0] = 0x11993d8u;
    { uint32_t ea = 0x89f800u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f804u; f_761188(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2bau; ST8(ea, c->r[1]); }
    c->r[1] = 0x11a11d8u;
    c->r[0] = 0x1199388u;
    { uint32_t ea = 0x89f828u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f82cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f838u; f_5f8534(c);
    c->r[0] = 0x2u;
    goto L_89f910;
L_89f840:;
    c->r[0] = 0x11994d8u;
    c->r[2] = 0x3edu;
    { uint32_t ea = 0x89f850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_89f8b0; }
    { uint32_t ea = c->r[0] + 0x61u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_89f8b0; }
    c->r[0] = 0x1199358u;
    c->r[2] = 0x1199a98u;
    c->r[1] = 0x1u;
    c->r[3] = 0x6bfdu;
    { uint32_t ea = 0x89f880u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x89f884u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2bau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_89f8b0; }
    c->r[2] = 0x11994bcu;
    { uint32_t ea = 0x89f8a4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x60u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2bau; ST8(ea, c->r[1]); }
L_89f8b0:;
    c->r[0] = 0x11994a4u;
    { uint32_t ea = 0x89f8bcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f8c0u; f_34e4b4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f8c8u; f_34dfdc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89f914; }
    c->r[1] = 0x11a1118u;
    c->r[0] = 0x11992c4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x89f8ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f8f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f8fcu; f_5f856c(c);
    c->r[0] = 0x11992d0u;
    { uint32_t ea = 0x89f908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2bau; ST8(ea, c->r[5]); }
    c->r[0] = 0x3u;
L_89f910:;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
L_89f914:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_89f918:;
    c->r[0] = 0x1199290u;
    { uint32_t ea = 0x89f924u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f928u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x1199424u;
    { uint32_t ea = 0x89f93cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f940u; f_34e080(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f948u; f_34e4b8(c);
    c->r[1] = 0x11a10a0u;
    c->r[0] = 0x1199250u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x89f960u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89f964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x89f970u; f_5f8534(c);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1199250u;
    { uint32_t ea = 0x89f990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89f994u; f_6de39c(c);
    c->r[0] = 0x1199384u;
    c->r[1] = 0x5u;
    { uint32_t ea = 0x89f9a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5a3ecc(c);
}
void f_89f9fc(Cpu *restrict c) {
    FN_ENTER(0x89f9fcu);
L_89f9fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_89faf8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0xcdu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_89faa8; }
    c->r[0] = 0x1199240u;
    { uint32_t ea = 0x89fa30u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fa34u; f_70005c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_89faa8; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_89fa64; }
    c->r[1] = 0x1199158u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x89fa5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_89fa64:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_89fa90; }
    c->r[1] = 0x1199138u;
    c->r[0] = 0x1199158u;
    { uint32_t ea = 0x89fa7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89fa80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4au; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x89fa90u; f_761124(c);
L_89fa90:;
    c->r[0] = 0x11992e4u;
    { uint32_t ea = 0x89fa9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89faa0u; f_479228(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
L_89faa8:;
    c->r[0] = 0x11992c0u;
    { uint32_t ea = 0x89fab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fab8u; f_5c0d20(c);
    c->r[0] = 0x1199264u;
    { uint32_t ea = 0x89fac4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x89fad0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_89fb04; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_89fb10; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_89fb18; }
    c->r[0] = c->r[4];
    c->r[14] = 0x89faf4u; f_8a0eb4(c);
    goto L_89fb18;
L_89faf8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_89fb68(c);
L_89fb04:;
    c->r[0] = c->r[4];
    c->r[14] = 0x89fb0cu; f_8a11c8(c);
    goto L_89fb18;
L_89fb10:;
    c->r[0] = c->r[4];
    c->r[14] = 0x89fb18u; f_8a1004(c);
L_89fb18:;
    c->r[0] = 0x1199090u;
    { uint32_t ea = 0x89fb24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fb28u; f_5f83a8(c);
    c->r[0] = 0x119913cu;
    { uint32_t ea = 0x89fb34u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fb38u; f_70306c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_70362c(c);
}
void f_89fb68(Cpu *restrict c) {
    FN_ENTER(0x89fb68u);
L_89fb68:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x3cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_HI) { goto L_8a0718; }
    { uint32_t ea = c->r[4] + 0xceu; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x89fb9cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x89fbccu: goto L_89fbcc; case 0x89fcacu: goto L_89fcac; case 0x89fd8cu: goto L_89fd8c; case 0x89fdf8u: goto L_89fdf8; case 0x89fe1cu: goto L_89fe1c; case 0x8a0040u: goto L_8a0040; case 0x8a00b4u: goto L_8a00b4; case 0x8a0120u: goto L_8a0120; case 0x8a0204u: goto L_8a0204; case 0x8a036cu: goto L_8a036c; case 0x8a0374u: goto L_8a0374; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_89fbcc:;
    c->r[1] = (c->r[0] >> 8);
    c->r[2] = 0x100u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[1] = (c->r[1] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1199174u;
    { uint32_t ea = 0x89fbf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fbf4u; f_5e9bac(c);
    c->r[0] = 0x11991b0u;
    { uint32_t ea = 0x89fc00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fc04u; f_5dec14(c);
    c->r[0] = 0x1198f3cu;
    { uint32_t ea = 0x89fc10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1199034u;
    { uint32_t ea = 0x89fc3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8a049c; }
    c->r[0] = 0x1199128u;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = 0x89fc58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_8a054c; }
    c->r[1] = 0x1198f48u;
    c->r[5] = 0x4u;
    { uint32_t ea = 0x89fc6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4au; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[1] = 0x4u;
    c->r[14] = 0x89fc78u; f_4779d8(c);
    c->r[0] = 0x11990f4u;
    c->r[1] = 0xbu;
    { uint32_t ea = 0x89fc88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fc8cu; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0578; }
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x89fca8u; f_401128(c);
    goto L_8a0578;
L_89fcac:;
    c->r[0] = 0x1198f24u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x89fcbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fcc0u; f_6dee48(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a0718; }
    c->r[0] = 0x1198f9cu;
    { uint32_t ea = 0x89fcd4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fcd8u; f_6fdc70(c);
    c->r[0] = 0x1198efcu;
    { uint32_t ea = 0x89fce4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fce8u; f_6de320(c);
    c->r[0] = 0x1198eccu;
    { uint32_t ea = 0x89fcf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fcf8u; f_260560(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fd00u; f_6ff50c(c);
    c->r[0] = 0x119901cu;
    c->r[1] = 0x18u;
    { uint32_t ea = 0x89fd10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fd14u; f_5ea270(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); c->r[4] = ea; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[4] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0xcu; ST16(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = 0x1198fd0u;
    { uint32_t ea = 0x89fd58u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fd5cu; f_5aa530(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x89fd6cu; f_5aab38(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fd74u; f_5aa7c8(c);
    { uint32_t ea = c->r[4] - 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x100u;
    c->r[0] = (c->r[0] >> 8);
    { uint32_t ea = c->r[4] - 0xd7u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_89fd8c:;
    c->r[1] = 0x1198e18u;
    c->r[0] = 0x1198ed0u;
    { uint32_t ea = 0x89fd9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89fda0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[14] = 0x89fdb4u; f_703854(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x89fdbcu; f_8a091c(c);
    c->r[0] = c->r[4] + 0xf2u;
    c->r[8] = c->r[4] + 0xeau;
    c->r[9] = c->r[4] + 0xe8u;
    c->r[10] = 0xdcu;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xeeu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1198f80u;
    { uint32_t ea = 0x89fdf8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_8a03b8;
L_89fdf8:;
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x5u);
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_8a0718; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    goto L_8a053c;
L_89fe1c:;
    c->r[1] = 0x1198d88u;
    c->r[0] = 0x1198e40u;
    { uint32_t ea = 0x89fe2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x89fe30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4au; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[14] = 0x89fe44u; f_70373c(c);
    c->r[0] = c->r[4] + 0xf2u;
    c->r[5] = c->r[4] + 0xecu;
    c->r[8] = c->r[4] + 0xeau;
    c->r[9] = c->r[4] + 0xe8u;
    c->r[10] = 0xd0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xeeu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1198f00u;
    { uint32_t ea = 0x89fe78u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_89fe74:;
    c->r[0] = c->r[4] + c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_89ff10; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x89fe90u; f_35334c(c);
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xf4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[9];
    if (COND_EQ) { goto L_89ff0c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8];
    if (COND_EQ) { goto L_89ff0c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_EQ) { goto L_89ff0c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { goto L_89ff0c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { goto L_89ff0c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); } }
    goto L_89ff10;
L_89ff0c:;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
L_89ff10:;
    c->r[10] = c->r[10] + 0x2u;
    (void)f_subs(c, c->r[10], 0xdcu);
    if (COND_NE) { goto L_89fe74; }
    c->r[0] = c->r[4];
    c->r[14] = 0x89ff24u; f_8a0a7c(c);
    c->r[0] = 0x1198df8u;
    { uint32_t ea = 0x89ff30u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ff34u; f_5aa93c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1694u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1698u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_89ff90; }
    c->r[0] = 0x1198e04u;
    c->r[1] = 0x40u;
    c->r[2] = 0x7u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x89ff74u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ff78u; f_3529a8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41u;
    c->r[2] = 0x7u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x89ff90u; f_3529a8(c);
L_89ff90:;
    c->r[0] = 0x1198cd0u;
    c->r[1] = 0x1a2u;
    { uint32_t ea = 0x89ffa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[0] & 0x1u;
    c->r[0] = 0x1198bfcu;
    { uint32_t ea = 0x89ffb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x89ffc0u; f_44c100(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_89ffe8; }
    c->r[0] = 0x1198d94u;
    c->r[1] = 0x40u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x89ffe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89ffe8u; f_3529a8(c);
L_89ffe8:;
    c->r[0] = 0x1198be8u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x89fff8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x89fffcu; f_6e98ac(c);
    c->r[0] = 0x1198bccu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a000cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0010u; f_75dd88(c);
    c->r[0] = 0x1198d40u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a0020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0024u; f_34c688(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a0484; }
    c->r[0] = 0x1198d28u;
    { uint32_t ea = 0x8a0038u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a003cu; f_34e850(c);
    goto L_8a0484;
L_8a0040:;
    c->r[0] = 0x1198d2cu;
    { uint32_t ea = 0x8a004cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0050u; f_353030(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a0718; }
    c->r[0] = 0x1198b28u;
    { uint32_t ea = 0x8a0064u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0068u; f_5cd56c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a0718; }
    c->r[0] = 0x1198ce4u;
    { uint32_t ea = 0x8a007cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x31u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a008c; }
    c->r[14] = 0x8a008cu; f_34cecc(c);
L_8a008c:;
    c->r[0] = 0x1198bd8u;
    { uint32_t ea = 0x8a0098u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a009cu; f_6fe450(c);
    c->r[0] = 0x1198b38u;
    { uint32_t ea = 0x8a00a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a00acu; f_6de348(c);
    c->r[0] = 0x6u;
    goto L_8a0490;
L_8a00b4:;
    c->r[0] = 0x1198af4u;
    { uint32_t ea = 0x8a00c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x49u; ST8(ea, c->r[1]); }
    c->r[0] = 0x1198b94u;
    { uint32_t ea = 0x8a00dcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a00e0u; f_6fe4c0(c);
    c->r[0] = 0x1198ca4u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a00f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a00f4u; f_51a8e8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a00fcu; f_6fed98(c);
    c->r[0] = 0x1198ad0u;
    { uint32_t ea = 0x8a0108u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a010cu; f_75f1a0(c);
    c->r[0] = 0x1198aa8u;
    { uint32_t ea = 0x8a0118u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a011cu; f_2604c0(c);
    goto L_8a0484;
L_8a0120:;
    c->r[14] = 0x8a0124u; f_8a0bcc(c);
    c->r[0] = 0x1198a84u;
    { uint32_t ea = 0x8a0130u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a013cu; f_8a0cf4(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a0164; }
    c->r[0] = 0x1198c28u;
    c->r[1] = 0x5du;
    { uint32_t ea = 0x8a0154u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0158u; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0164; }
    c->r[14] = 0x8a0164u; f_416ac4(c);
L_8a0164:;
    c->r[0] = 0x1198bb8u;
    { uint32_t ea = 0x8a0170u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_NE) { goto L_8a019c; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_CC) { goto L_8a019c; }
    c->r[1] = 0x2u;
    c->r[14] = 0x8a0190u; f_5a24a0(c);
    c->r[0] = 0x1198b8cu;
    { uint32_t ea = 0x8a019cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a019c:;
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_NE) { goto L_8a01fc; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x38au;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_8a01fc; }
    c->r[1] = 0x11989f0u;
    { uint32_t ea = 0x8a01c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_8a01fc; }
    c->r[1] = 0x9u;
    c->r[2] = 0x12cu;
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); }
    c->r[1] = 0x1198b9cu;
    { uint32_t ea = 0x8a01e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 56u);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[1] = c->v.s[0];
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
L_8a01fc:;
    c->r[0] = 0x8u;
    goto L_8a0490;
L_8a0204:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a0538; }
    c->r[0] = 0x1198b64u;
    { uint32_t ea = 0x8a0218u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a021cu; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0534; }
    c->r[0] = 0x1198984u;
    { uint32_t ea = 0x8a0230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0234u; f_5f8398(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0274; }
    c->r[0] = 0x1198b30u;
    { uint32_t ea = 0x8a024cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_8a0274; }
    c->r[0] = 0x1198ac0u;
    c->r[1] = 0x166fu;
    { uint32_t ea = 0x8a0268u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
L_8a0274:;
    c->r[0] = 0x1198934u;
    { uint32_t ea = 0x8a0280u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0284u; f_5f8398(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a02c4; }
    c->r[0] = 0x1198ae4u;
    { uint32_t ea = 0x8a0298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_8a02c4; }
    c->r[0] = 0x1198a74u;
    c->r[1] = 0x1670u;
    { uint32_t ea = 0x8a02b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[5] = c->r[5] & c->r[0];
L_8a02c4:;
    c->r[0] = 0x11988e4u;
    { uint32_t ea = 0x8a02d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a02d4u; f_5f8398(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8a0314; }
    c->r[0] = 0x1198a94u;
    { uint32_t ea = 0x8a02e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_8a0314; }
    c->r[0] = 0x1198a24u;
    c->r[1] = 0x1671u;
    { uint32_t ea = 0x8a0304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[5] = c->r[5] & c->r[0];
L_8a0314:;
    c->r[0] = 0x1198894u;
    { uint32_t ea = 0x8a0320u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0324u; f_5f8398(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_8a0720; }
    c->r[0] = 0x1198a44u;
    { uint32_t ea = 0x8a0338u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_8a0720; }
    c->r[0] = 0x11989d4u;
    c->r[1] = 0x1672u;
    { uint32_t ea = 0x8a0354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[5] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8a0718; }
    goto L_8a0728;
L_8a036c:;
    c->r[1] = 0x8u;
    goto L_8a053c;
L_8a0374:;
    c->r[0] = 0x11989dcu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a0384u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0388u; f_34c988(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a04bc; }
    c->r[0] = 0x119898cu;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x8a03a0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_8a04e4;
L_8a03a0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[0] = c->r[1];
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST16(ea, c->r[7]); } }
    goto L_8a0434;
L_8a03b8:;
    c->r[0] = c->r[4] + c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_8a0440; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x8a03d4u; f_353370(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[0] = c->r[9];
    if (COND_EQ) { goto L_8a0430; }
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[0] = c->r[8];
    if (COND_EQ) { goto L_8a0430; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[0] = c->r[1];
    if (COND_EQ) { goto L_8a0430; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[0] = c->r[1];
    if (COND_EQ) { goto L_8a0430; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[0] = c->r[1];
    if (COND_NE) { goto L_8a03a0; }
L_8a0430:;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[7]); }
L_8a0434:;
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0xf4u; ST8(ea, c->r[0]); }
L_8a0440:;
    c->r[10] = c->r[10] + 0x2u;
    (void)f_subs(c, c->r[10], 0xe8u);
    if (COND_NE) { goto L_8a03b8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x8a045cu; f_208674(c);
    c->r[0] = 0x1198774u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a046cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0470u; f_6e9b38(c);
    c->r[0] = 0x1198758u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a0480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0484u; f_75dff0(c);
L_8a0484:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x100u;
    c->r[0] = (c->r[0] >> 8);
L_8a0490:;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8a049c:;
    c->r[0] = 0x11988d4u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x8a04acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a04b0u; f_4779d8(c);
    c->r[0] = 0x11987b4u;
    { uint32_t ea = 0x8a04bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a055c;
L_8a04bc:;
    c->r[0] = 0x1198894u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a04ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a04d0u; f_34cad8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a05e0; }
    c->r[0] = 0x1198844u;
    c->r[5] = 0x2u;
    { uint32_t ea = 0x8a04e8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_8a04e4:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a04f4u; f_5ea2b0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a0504u; f_5ea2b0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a0514u; f_5ea2b0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a0524u; f_5ea2b0(c);
    c->r[0] = ~0xff0000u;
    c->r[1] = ~0xff00u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    goto L_8a05e8;
L_8a0534:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a0538:;
    c->r[1] = 0xau;
L_8a053c:;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8a054c:;
    c->r[1] = 0x2u;
    c->r[14] = 0x8a0554u; f_4779d8(c);
    c->r[0] = 0x1198710u;
    { uint32_t ea = 0x8a0560u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a055c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x1cu;
    c->r[3] = c->r[13] + 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x8a0578u; f_70049c(c);
L_8a0578:;
    c->r[0] = 0x1198650u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a0588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2b9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x1198790u;
    { uint32_t ea = 0x8a0598u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_8a05b0; }
    c->r[1] = 0x3u;
    c->r[14] = 0x8a05acu; f_7610d0(c);
    goto L_8a05c8;
L_8a05b0:;
    c->r[1] = 0x11985f8u;
    { uint32_t ea = 0x8a05bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4au; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x8a05c8u; f_761124(c);
L_8a05c8:;
    c->r[0] = 0x119860cu;
    { uint32_t ea = 0x8a05d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a05d8u; f_6de048(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8a05e0:;
    c->r[0] = ~0xff00u;
    c->r[1] = ~0xffu;
L_8a05e8:;
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1198724u;
    { uint32_t ea = 0x8a0604u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_EQ) { c->r[1] = 0x7u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); } }
    c->r[0] = 0x1198650u;
    { uint32_t ea = 0x8a0620u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0624u; f_702ba4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a062cu; f_7054bc(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0634u; f_6fff00(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a065c; }
    c->r[0] = 0x1198628u;
    { uint32_t ea = 0x8a0648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a065c; }
    c->r[1] = 0x0u;
    c->r[14] = 0x8a065cu; f_b66140(c);
L_8a065c:;
    c->r[0] = 0x1198728u;
    { uint32_t ea = 0x8a0668u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a066cu; f_2189e0(c);
    c->r[0] = 0x1198538u;
    c->r[1] = 0xffu;
    { uint32_t ea = 0x8a067cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_8a06cc; }
    c->r[0] = 0x1198538u;
    { uint32_t ea = 0x8a06a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a06a4u; f_761188(c);
    c->r[1] = 0x11a0340u;
    c->r[0] = 0x11984f4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x8a06bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a06c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x8a06ccu; f_5f8534(c);
L_8a06cc:;
    c->r[0] = 0x11986b4u;
    { uint32_t ea = 0x8a06d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a06dcu; f_737b44(c);
    c->r[0] = 0x11986c8u;
    { uint32_t ea = 0x8a06e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a06ecu; f_5deb90(c);
    c->r[0] = 0x11984e8u;
    { uint32_t ea = 0x8a06f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a06fcu; f_6de39c(c);
    c->r[0] = 0x1198564u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a070cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xceu; ST8(ea, c->r[0]); }
L_8a0718:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8a0720:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a0718; }
L_8a0728:;
    c->r[0] = 0xau;
    goto L_8a0490;
}
void f_8a0878(Cpu *restrict c) {
    FN_ENTER(0x8a0878u);
L_8a0878:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1198460u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0xd0u; ST16(ea, c->r[6]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x10u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xeu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xcu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xau; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x8u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = 0x8a08c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_8a08ec; }
    c->r[14] = 0x8a08d0u; f_5aa530(c);
    c->r[0] = 0x1198444u;
    c->r[2] = c->r[4] + 0xdcu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a08e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5aab38(c);
L_8a08ec:;
    c->r[1] = c->r[5];
    c->r[14] = 0x8a08f4u; f_5aad08(c);
    { uint32_t ea = c->r[4] + 0xf2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xeeu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xecu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xeau; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a091c(Cpu *restrict c) {
    FN_ENTER(0x8a091cu);
L_8a091c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0934; }
    c->r[14] = 0x8a0934u; f_24edec(c);
L_8a0934:;
    { uint32_t ea = c->r[4] + 0xdeu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0944; }
    c->r[14] = 0x8a0944u; f_24edec(c);
L_8a0944:;
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0954; }
    c->r[14] = 0x8a0954u; f_24edec(c);
L_8a0954:;
    { uint32_t ea = c->r[4] + 0xe2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0964; }
    c->r[14] = 0x8a0964u; f_24edec(c);
L_8a0964:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0974; }
    c->r[14] = 0x8a0974u; f_24edec(c);
L_8a0974:;
    { uint32_t ea = c->r[4] + 0xe6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[14] = 0x8a0984u; f_24edec(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a0988(Cpu *restrict c) {
    FN_ENTER(0x8a0988u);
L_8a0988:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[4] + 0xf2u;
    c->r[6] = c->r[4] + 0xd0u;
    c->r[11] = c->r[4] + 0xecu;
    c->r[7] = c->r[4] + 0xeau;
    c->r[8] = c->r[4] + 0xe8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xeeu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11983acu;
    { uint32_t ea = 0x8a09ccu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_8a09c8:;
    c->r[0] = c->r[6] + c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a0a64; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x8a09e4u; f_35334c(c);
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xf4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8];
    if (COND_EQ) { goto L_8a0a60; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[7];
    if (COND_EQ) { goto L_8a0a60; }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[11];
    if (COND_EQ) { goto L_8a0a60; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { goto L_8a0a60; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { goto L_8a0a60; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[1];
    if (COND_EQ) { { uint32_t ea = c->r[0]; ST16(ea, c->r[5]); } }
    goto L_8a0a64;
L_8a0a60:;
    { uint32_t ea = c->r[0]; ST16(ea, c->r[5]); }
L_8a0a64:;
    c->r[9] = c->r[9] + 0x2u;
    (void)f_subs(c, c->r[9], 0xcu);
    if (COND_NE) { goto L_8a09c8; }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a0a7c(Cpu *restrict c) {
    FN_ENTER(0x8a0a7cu);
L_8a0a7c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0a94; }
    c->r[14] = 0x8a0a94u; f_24ed9c(c);
L_8a0a94:;
    { uint32_t ea = c->r[4] + 0xd2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0aa4; }
    c->r[14] = 0x8a0aa4u; f_24ed9c(c);
L_8a0aa4:;
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0ab4; }
    c->r[14] = 0x8a0ab4u; f_24ed9c(c);
L_8a0ab4:;
    { uint32_t ea = c->r[4] + 0xd6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0ac4; }
    c->r[14] = 0x8a0ac4u; f_24ed9c(c);
L_8a0ac4:;
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a0ad4; }
    c->r[14] = 0x8a0ad4u; f_24ed9c(c);
L_8a0ad4:;
    { uint32_t ea = c->r[4] + 0xdau; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[14] = 0x8a0ae4u; f_24ed9c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a0ae8(Cpu *restrict c) {
    FN_ENTER(0x8a0ae8u);
L_8a0ae8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1198218u;
    c->r[5] = c->r[1];
    c->r[1] = 0x1694u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = 0x8a0b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1698u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_8a0b58; }
    c->r[0] = 0x119823cu;
    c->r[1] = 0x40u;
    c->r[2] = 0x7u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x8a0b3cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0b40u; f_3529a8(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x41u;
    c->r[2] = 0x7u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x8a0b58u; f_3529a8(c);
L_8a0b58:;
    c->r[0] = 0x1198108u;
    c->r[1] = 0x1a2u;
    { uint32_t ea = 0x8a0b68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[0] & 0x1u;
    c->r[0] = 0x1198034u;
    { uint32_t ea = 0x8a0b80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x8a0b88u; f_44c100(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a0bb0; }
    c->r[0] = 0x11981ccu;
    c->r[1] = 0x40u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x8a0bacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0bb0u; f_3529a8(c);
L_8a0bb0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a0bcc(Cpu *restrict c) {
    FN_ENTER(0x8a0bccu);
L_8a0bcc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[0] = 0x1197f64u;
    { uint32_t ea = 0x8a0be8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x1197f9cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1198054u;
    { uint32_t ea = 0x8a0c18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a0c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4au; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8a0c84; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8a0ca0; }
    c->r[0] = 0x1198130u;
    { uint32_t ea = c->r[1] + 0x4bu; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x51u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = 0x8a0c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0c54u; f_4779d8(c);
    c->r[0] = 0x1197ffcu;
    c->r[2] = c->r[13] + 0x10u;
    c->r[1] = c->r[13] + 0xcu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5];
    { uint32_t ea = 0x8a0c74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    c->r[1] = c->r[4];
    c->r[14] = 0x8a0c80u; f_7004fc(c);
    goto L_8a0cb8;
L_8a0c84:;
    c->r[1] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0x10u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x8a0c9cu; f_70049c(c);
    goto L_8a0cb8;
L_8a0ca0:;
    c->r[1] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0x10u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x8a0cb8u; f_700420(c);
L_8a0cb8:;
    c->r[0] = 0x11980b0u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x10u;
    c->r[3] = c->r[4];
    { uint32_t ea = 0x8a0cd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0cd4u; f_4778cc(c);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_8a0cf4(Cpu *restrict c) {
    FN_ENTER(0x8a0cf4u);
L_8a0cf4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_8a0db0; }
    c->r[0] = 0x1197ea0u;
    { uint32_t ea = 0x8a0d14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x17u);
    if (COND_HI) { goto L_8a0db0; }
    c->r[1] = 0x3cffu;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[2] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe00000u;
    { uint32_t r = c->r[2] & shc_lsr(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8a0db0; }
    c->r[0] = 0x1197fdcu;
    { uint32_t ea = 0x8a0d4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0d50u; f_5aefc0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a0db0; }
    c->r[0] = 0x13b0u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a0d64u; f_44af24(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x8a0d6cu; f_44afac(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a0db0; }
    c->r[0] = 0x1197fa0u;
    c->r[1] = 0x1694u;
    c->r[2] = 0x6u;
    { uint32_t ea = 0x8a0d88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1197f90u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a0d9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf9defcu;
    c->r[3] = 0x8a0dacu + c->r[1];
    c->r[1] = c->r[5];
    c->r[14] = 0x8a0db0u; f_5ea218(c);
L_8a0db0:;
    c->r[0] = 0x1197f6cu;
    { uint32_t ea = 0x8a0dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0dc0u; f_5aefec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a0e58; }
    c->r[0] = 0x1197e98u;
    c->r[1] = 0x1a2u;
    { uint32_t ea = 0x8a0dd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[0] & 0x1u;
    c->r[0] = 0x1197dc4u;
    { uint32_t ea = 0x8a0df0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[14] = 0x8a0df8u; f_44c100(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a0e58; }
    c->r[0] = 0x14e0u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a0e0cu; f_44c0c4(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x8a0e14u; f_44c15c(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a0e58; }
    c->r[0] = 0x1197ef8u;
    c->r[1] = 0x1698u;
    c->r[2] = 0x6u;
    { uint32_t ea = 0x8a0e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1197ee8u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a0e44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf9de54u;
    c->r[3] = 0x8a0e54u + c->r[1];
    c->r[1] = c->r[5];
    c->r[14] = 0x8a0e58u; f_5ea218(c);
L_8a0e58:;
    c->r[13] = c->r[13] + 0x8u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a1ae8(c);
}
void f_8a0e98(Cpu *restrict c) {
    FN_ENTER(0x8a0e98u);
L_8a0e98:;
    c->r[0] = 0x1197e80u;
    c->r[1] = 0x1b68u;
    { uint32_t ea = 0x8a0ea8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    __attribute__((musttail)) return f_5b50dc(c);
}
void f_8a0eb4(Cpu *restrict c) {
    FN_ENTER(0x8a0eb4u);
L_8a0eb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a0f58; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a0fe4; }
    c->r[0] = 0x1197e4cu;
    { uint32_t ea = 0x8a0edcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0ee0u; f_5ae21c(c);
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a0f4c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8a0f88; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a0fe4; }
    c->r[0] = 0x1197e24u;
    { uint32_t ea = 0x8a0f04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0f08u; f_5abbf8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_8a0f34; }
    c->r[0] = 0x1197e60u;
    c->v.s[2] = 0x40a00000u;
    { uint32_t ea = 0x8a0f24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[4] + 188u, c->v.s[0]);
L_8a0f34:;
    c->r[0] = 0x1197de8u;
    { uint32_t ea = 0x8a0f40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xcu);
    if (COND_NE) { goto L_8a0fc4; }
L_8a0f4c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    goto L_8a0fc4;
L_8a0f58:;
    c->r[0] = 0x1197dc4u;
    { uint32_t ea = 0x8a0f64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0f68u; f_5ae21c(c);
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a0f80; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8a0fd0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_8a0f80:;
    c->r[0] = 0x2u;
    goto L_8a0fd4;
L_8a0f88:;
    c->r[0] = 0x1197d94u;
    { uint32_t ea = 0x8a0f94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a0f98u; f_5abbf8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_8a0fc4; }
    c->r[0] = 0x1197dd0u;
    c->v.s[2] = 0x40a00000u;
    { uint32_t ea = 0x8a0fb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[4] + 188u, c->v.s[0]);
L_8a0fc4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_8a0fd0:;
    c->r[0] = 0x1u;
L_8a0fd4:;
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_8a0fe4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a1004(Cpu *restrict c) {
    FN_ENTER(0x8a1004u);
L_8a1004:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_8a1078; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_8a110c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8a11a0; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    c->r[1] = 0x1197b7cu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1197d18u;
    { uint32_t ea = 0x8a105cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a1060u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x48u;
    c->r[14] = 0x8a1070u; f_3529a8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a1078:;
    c->r[0] = 0x1197c94u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x8a1094u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = 0x2c9u;
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = 0x1197af8u;
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = 0x8a10bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4au; ST8(ea, c->r[0]); }
    c->r[0] = 0x1197b08u;
    { uint32_t ea = c->r[4] + 0xceu; ST8(ea, c->r[6]); }
    { uint32_t ea = 0x8a10d0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a10d4u; f_75e294(c);
    c->r[0] = 0x1197c8cu;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x8a10ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1a3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2b9u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcdu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x48u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1104u; f_352ef8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a110c:;
    c->r[0] = 0x1197c68u;
    c->v.s[0] = LD32(c->r[4] + 192u);
    { uint32_t ea = 0x8a111cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    ST32(c->r[4] + 192u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_8a1160; }
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = 0xbf800000u;
L_8a1140:;
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { c->r[0] = c->r[0] - 0x1u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); } }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_8a1140; }
    ST32(c->r[4] + 192u, c->v.s[0]);
L_8a1160:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a1168u; f_8a13e0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a11a0; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1197a5cu;
    { uint32_t ea = 0x8a1184u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1188u; f_6dee3c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1b56u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a11a0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_8a11c8(Cpu *restrict c) {
    FN_ENTER(0x8a11c8u);
L_8a11c8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_8a12d0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_8a123c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8a13a0; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    c->r[1] = 0x11979b8u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1197b54u;
    { uint32_t ea = 0x8a1220u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a1224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x47u;
    c->r[14] = 0x8a1234u; f_3529a8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a123c:;
    c->r[0] = 0x1197b38u;
    c->v.s[0] = LD32(c->r[4] + 192u);
    { uint32_t ea = 0x8a124cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.s[2] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    ST32(c->r[4] + 192u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_8a1290; }
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = 0xbf800000u;
L_8a1270:;
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { c->r[0] = c->r[0] - 0x1u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); } }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_8a1270; }
    ST32(c->r[4] + 192u, c->v.s[0]);
L_8a1290:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a1298u; f_8a1674(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a13a0; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[0]); }
    c->r[0] = 0x119792cu;
    { uint32_t ea = 0x8a12b4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a12b8u; f_6dee3c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1b56u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a12d0:;
    c->r[0] = 0x11978fcu;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x8a12e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a12e8u; f_6dee48(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a13a0; }
    c->r[0] = 0x1197ae0u;
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x8a1300u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1304u; f_5c6180(c);
    c->r[0] = 0x1197a64u;
    { uint32_t ea = 0x8a1310u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1314u; f_5bf8c8(c);
    c->r[0] = 0x1197a08u;
    { uint32_t ea = 0x8a1320u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1324u; f_5b123c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a132cu; f_5ad954(c);
    c->r[0] = 0x119786cu;
    c->r[1] = 0x1197a7cu;
    { uint32_t ea = 0x8a133cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x8a1340u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1344u; f_212710(c);
    c->r[1] = 0x119f69cu;
    c->r[0] = 0x1197850u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x8a1360u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a1364u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x8a1370u; f_5f8534(c);
    c->r[1] = 0x119784cu;
    c->r[0] = 0x11979e8u;
    { uint32_t ea = c->r[4] + 0xccu; ST16(ea, c->r[5]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x8a138cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a1390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x47u;
    c->r[14] = 0x8a13a0u; f_352ef8(c);
L_8a13a0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a13e0(Cpu *restrict c) {
    FN_ENTER(0x8a13e0u);
L_8a13e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1197878u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x8a13f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8a160c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_8a157c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x8a1420u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x8a143cu: goto L_8a143c; case 0x8a14d0u: goto L_8a14d0; case 0x8a152cu: goto L_8a152c; case 0x8a1560u: goto L_8a1560; case 0x8a1588u: goto L_8a1588; case 0x8a1614u: goto L_8a1614; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a143c:;
    { uint32_t ea = c->r[5] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { goto L_8a160c; }
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = (c->r[0] & 0xffffffu) | ((c->r[1] << 24) & 0xff000000u);
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[14] = 0x8a1468u; f_85dd68(c);
    c->r[0] = 0x11u;
    c->r[14] = 0x8a1470u; f_7543d4(c);
    c->r[0] = 0x11978a8u;
    c->r[1] = 0x9u;
    { uint32_t ea = 0x8a1480u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1484u; f_5a24a0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->v.s[4] = 0x41700000u;
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); }
    c->r[0] = 0x11978e0u;
    c->v.s[0] = LD32(c->r[5] + 188u);
    { uint32_t ea = 0x8a14a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 56u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[0] = 0x1197720u;
    { uint32_t ea = 0x8a14b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[5] + 188u, c->v.s[0]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a14c8u; f_75e2bc(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a14d0:;
    { uint32_t ea = c->r[5] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_8a160c; }
    c->r[0] = 0x11976f0u;
    { uint32_t ea = 0x8a14e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a14ecu; f_761e98(c);
    c->r[0] = 0x11976a8u;
    c->v.s[0] = 0x41400000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x8a150cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1510u; f_5f856c(c);
    c->r[0] = 0x1197808u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a1520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1524u; f_5abb80(c);
    c->r[0] = 0x3u;
    goto L_8a1608;
L_8a152c:;
    c->r[0] = 0x119767cu;
    { uint32_t ea = 0x8a1538u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a153cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a160c; }
    c->r[0] = 0x11977d4u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x8a1554u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); }
    c->r[0] = 0x4u;
    goto L_8a1608;
L_8a1560:;
    c->r[0] = 0x11977b8u;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x8a1570u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); }
    c->r[0] = 0x5u;
    goto L_8a1608;
L_8a157c:;
    c->r[4] = 0x1u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a1588:;
    c->r[0] = 0x11977e8u;
    c->v.s[0] = LD32(c->r[5] + 188u);
    c->v.s[4] = 0x40400000u;
    { uint32_t ea = 0x8a159cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 56u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_8a160c; }
    c->r[0] = 0x11977b8u;
    { uint32_t ea = 0x8a15c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a15c4u; f_353030(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a15dc; }
    c->r[0] = 0x1197600u;
    { uint32_t ea = 0x8a15d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a15dcu; f_761e88(c);
L_8a15dc:;
    c->r[0] = 0x11975f8u;
    { uint32_t ea = 0x8a15e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a15ecu; f_6df80c(c);
    c->r[0] = 0x11975b8u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a15fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcdu; ST8(ea, c->r[1]); }
    c->r[0] = 0x2u;
L_8a1608:;
    { uint32_t ea = c->r[5] + 0x7u; ST8(ea, c->r[0]); }
L_8a160c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a1614:;
    c->r[0] = 0x1197708u;
    { uint32_t ea = 0x8a1620u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a1674(Cpu *restrict c) {
    FN_ENTER(0x8a1674u);
L_8a1674:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11975e0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x8a1690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8a1a6c; }
    c->r[0] = 0x1197680u;
    { uint32_t ea = 0x8a16a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a16acu; f_5a30a4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a16cc; }
    c->r[0] = 0x1197668u;
    { uint32_t ea = 0x8a16c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xcu);
    if (COND_EQ) { goto L_8a1a6c; }
L_8a16cc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_8a1864; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x8a16e8u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x8a16fcu: goto L_8a16fc; case 0x8a1798u: goto L_8a1798; case 0x8a1804u: goto L_8a1804; case 0x8a1844u: goto L_8a1844; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a16fc:;
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { goto L_8a1a6c; }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xffffffu) | ((c->r[1] << 24) & 0xff000000u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1197608u;
    { uint32_t ea = 0x8a1720u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1724u; f_5ae21c(c);
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a18bc; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a19b0; }
    c->r[0] = 0x11975e8u;
    { uint32_t ea = 0x8a1740u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CC) { goto L_8a1900; }
    c->r[0] = 0x1197628u;
    { uint32_t ea = 0x8a1758u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a175cu; f_4772c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a1774; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x260u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x4u;
    c->pc = c->r[2]; c->r[14] = 0x8a1774u; rt_dispatch(c);
L_8a1774:;
    c->r[0] = 0x11975a8u;
    { uint32_t ea = 0x8a1780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0xcu;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CS) { goto L_8a1900; }
    c->v.s[16] = 0x40e00000u;
    goto L_8a1928;
L_8a1798:;
    c->r[0] = 0x11975d8u;
    c->v.s[0] = LD32(c->r[4] + 188u);
    c->v.s[4] = 0x40a00000u;
    { uint32_t ea = 0x8a17acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 56u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_8a1a6c; }
    c->r[0] = 0x1197558u;
    { uint32_t ea = 0x8a17d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a17d4u; f_5ae21c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a186c; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a18b0; }
    c->r[0] = 0x1197534u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x8a17f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { c->r[5] = 0x2u; }
    goto L_8a1870;
L_8a1804:;
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_8a1a6c; }
    c->r[0] = 0x1197380u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[6] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x8a1834u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1838u; f_5f856c(c);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0xcdu; ST8(ea, c->r[6]); }
    goto L_8a1a68;
L_8a1844:;
    c->r[0] = 0x1197364u;
    { uint32_t ea = 0x8a1850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1854u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a1a6c; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[0]); }
L_8a1864:;
    c->r[5] = 0x1u;
    goto L_8a1a6c;
L_8a186c:;
    c->r[5] = 0x0u;
L_8a1870:;
    c->r[0] = 0x11974fcu;
    { uint32_t ea = 0x8a187cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1880u; f_353030(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a18b0; }
    c->r[0] = 0x1197348u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a1898u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a189cu; f_6e8f50(c);
    c->r[0] = 0x119732cu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a18acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a18b0u; f_761e80(c);
L_8a18b0:;
    c->r[0] = 0x2u;
    c->r[5] = 0x0u;
    goto L_8a1a68;
L_8a18bc:;
    c->r[0] = 0x1197460u;
    { uint32_t ea = 0x8a18c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_8a1968; }
    c->r[0] = 0x1u;
    c->r[1] = 0x16u;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a18e4u; f_85dd68(c);
    c->r[0] = 0x13u;
    c->r[14] = 0x8a18ecu; f_7543d4(c);
    c->r[0] = 0x119742cu;
    c->r[1] = 0x6u;
    { uint32_t ea = 0x8a18fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a1998;
L_8a1900:;
    c->r[0] = 0x1u;
    c->r[1] = 0x14u;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a1910u; f_85dd68(c);
    c->r[0] = 0x11u;
    c->r[14] = 0x8a1918u; f_7543d4(c);
    c->r[0] = 0x1197400u;
    c->v.s[16] = 0x41700000u;
    { uint32_t ea = 0x8a1928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a1928:;
    c->r[14] = 0x8a192cu; f_5af2cc(c);
    c->r[0] = 0x11973ecu;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x8a193cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1940u; f_5a24a0(c);
    c->r[0] = 0x1197434u;
    c->v.s[0] = LD32(c->r[4] + 188u);
    { uint32_t ea = 0x8a1950u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 56u);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    goto L_8a19ac;
L_8a1968:;
    c->r[0] = 0x1u;
    c->r[1] = 0x15u;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a1978u; f_85dd68(c);
    c->r[0] = 0x12u;
    c->r[14] = 0x8a1980u; f_7543d4(c);
    c->r[0] = 0x119739cu;
    { uint32_t ea = 0x8a198cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1990u; f_5af2cc(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
L_8a1998:;
    c->r[14] = 0x8a199cu; f_5a24a0(c);
    c->r[0] = 0x1197380u;
    { uint32_t ea = 0x8a19a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a19acu; f_5abbf8(c);
L_8a19ac:;
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
L_8a19b0:;
    c->r[0] = 0x11973b8u;
    { uint32_t ea = 0x8a19bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a19c0u; f_5c300c(c);
    c->r[0] = 0x119720cu;
    { uint32_t ea = 0x8a19ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a19d0u; f_75e2bc(c);
    c->r[0] = 0x119734cu;
    { uint32_t ea = 0x8a19dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0xdu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_8a1a34; }
    (void)f_subs(c, c->r[0], 0xcu);
    if (COND_EQ) { goto L_8a1a44; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { goto L_8a1a6c; }
    c->r[0] = 0x1u;
    c->r[1] = 0x6cu;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x8a1a10u; f_85dd68(c);
    c->r[0] = 0x1197364u;
    c->v.s[2] = 0x41700000u;
    { uint32_t ea = 0x8a1a20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[4] + 188u, c->v.s[0]);
    goto L_8a1a6c;
L_8a1a34:;
    c->r[0] = 0x1197340u;
    c->v.s[2] = 0x40e00000u;
    { uint32_t ea = 0x8a1a44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a1a50;
L_8a1a44:;
    c->r[0] = 0x1197330u;
    c->v.s[2] = 0x41300000u;
    { uint32_t ea = 0x8a1a54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a1a50:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 56u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[0] = 0x2u;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[4] + 188u, c->v.s[0]);
L_8a1a68:;
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[0]); }
L_8a1a6c:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a1ae8(Cpu *restrict c) {
    FN_ENTER(0x8a1ae8u);
L_8a1ae8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1197280u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a1b00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1b04u; f_474ce4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a1b7c; }
    c->r[0] = 0x1390u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a1b1cu; f_44a468(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x8a1b24u; f_44a4a4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a1b7c; }
    c->r[0] = 0x138cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x11971dcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf9d154u;
    { uint32_t ea = 0x8a1b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x8a1b54u + c->r[1];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1b5cu; f_5ea218(c);
    c->r[0] = 0x11971bcu;
    c->r[1] = 0x169cu;
    { uint32_t ea = 0x8a1b6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1051u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
L_8a1b7c:;
    c->r[0] = 0x11971f4u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a1b8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1b90u; f_474ce4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a1c08; }
    c->r[0] = 0x1390u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a1ba8u; f_44a468(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x8a1bb0u; f_44a4a4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a1c08; }
    c->r[0] = 0x138cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1197150u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf9d0c8u;
    { uint32_t ea = 0x8a1bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x8a1be0u + c->r[1];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1be8u; f_5ea218(c);
    c->r[0] = 0x1197130u;
    c->r[1] = 0x16a0u;
    { uint32_t ea = 0x8a1bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1051u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
L_8a1c08:;
    c->r[0] = 0x1197168u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x8a1c18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1c1cu; f_474ce4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a1c94; }
    c->r[0] = 0x1390u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a1c34u; f_44a468(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x8a1c3cu; f_44a4a4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a1c94; }
    c->r[0] = 0x138cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x11970c4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf9d03cu;
    { uint32_t ea = 0x8a1c68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x8a1c6cu + c->r[1];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1c74u; f_5ea218(c);
    c->r[0] = 0x11970a4u;
    c->r[1] = 0x16a4u;
    { uint32_t ea = 0x8a1c84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1051u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
L_8a1c94:;
    c->r[0] = 0x11970dcu;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x8a1ca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1ca8u; f_474ce4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a1d20; }
    c->r[0] = 0x1390u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a1cc0u; f_44a468(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x8a1cc8u; f_44a4a4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a1d20; }
    c->r[0] = 0x138cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1197038u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf9cfb0u;
    { uint32_t ea = 0x8a1cf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x8a1cf8u + c->r[1];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1d00u; f_5ea218(c);
    c->r[0] = 0x1197018u;
    c->r[1] = 0x16a8u;
    { uint32_t ea = 0x8a1d10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1051u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
L_8a1d20:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a1d68(Cpu *restrict c) {
    FN_ENTER(0x8a1d68u);
L_8a1d68:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8a1ddc; }
    c->r[1] = 0x1196e30u;
    { uint32_t ea = 0x8a1d84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x17u);
    if (COND_HI) { goto L_8a1ddc; }
    c->r[2] = 0xc300u;
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[3] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { return; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf9ceecu;
    c->r[2] = 0x119a160u;
    c->r[0] = 0x8a1dc4u + c->r[0];
    { uint32_t ea = 0x8a1dc8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1196fa4u;
    { uint32_t ea = 0x8a1dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1dd8u; f_352960(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
L_8a1ddc:;
    return;
}
void f_8a1df0(Cpu *restrict c) {
    FN_ENTER(0x8a1df0u);
L_8a1df0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1200ad0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a1e10u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
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
    c->r[14] = 0x8a1e58u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a1e70u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a1e88u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a1ed0(Cpu *restrict c) {
    FN_ENTER(0x8a1ed0u);
L_8a1ed0:;
    __attribute__((musttail)) return f_20152c(c);
}
void f_8a1ed4(Cpu *restrict c) {
    FN_ENTER(0x8a1ed4u);
L_8a1ed4:;
    __attribute__((musttail)) return f_201530(c);
}
void f_8a1ed8(Cpu *restrict c) {
    FN_ENTER(0x8a1ed8u);
L_8a1ed8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x8a1ee8u; f_201534(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1196e90u;
    { uint32_t ea = 0x8a1f00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1196e74u;
    { uint32_t ea = 0x8a1f0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1f10u; f_476278(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x8a1f20u; f_218600(c);
    c->r[0] = 0x3e0u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a1f2cu; f_b28dd0(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x8a1f34u; f_b28e10(c);
    c->r[0] = 0x1196de0u;
    c->r[6] = 0x0u;
    c->r[1] = 0x2u;
    c->r[2] = c->r[5];
    { uint32_t ea = 0x8a1f4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a1f58u; f_e067ec(c);
    c->r[0] = 0x1196dc4u;
    { uint32_t ea = 0x8a1f64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1f68u; f_5b190c(c);
    c->r[0] = 0x1196c60u;
    { uint32_t ea = 0x8a1f74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1f78u; f_75b018(c);
    c->r[0] = 0x1196e5cu;
    { uint32_t ea = 0x8a1f84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1f88u; f_5c5b50(c);
    c->r[0] = 0x1196c3cu;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x8a1f9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1fa0u; f_75ebdc(c);
    c->r[0] = 0x1196c34u;
    { uint32_t ea = 0x8a1facu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1fb0u; f_6de768(c);
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a1fbcu; f_34b854(c);
    c->r[14] = 0x8a1fc0u; f_34b890(c);
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x8a1fc8u; f_34b95c(c);
    c->r[0] = 0x1196dd0u;
    { uint32_t ea = 0x8a1fd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a1fd8u; f_5d7428(c);
    c->r[0] = 0x1196d90u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    { uint32_t ea = 0x8a1fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x63au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    c->r[0] = 0x8u;
    c->r[1] = 0x1u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_85da38(c);
}
void f_8a2034(Cpu *restrict c) {
    FN_ENTER(0x8a2034u);
L_8a2034:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_8a21d4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8a2054u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8a206cu: goto L_8a206c; case 0x8a208cu: goto L_8a208c; case 0x8a2140u: goto L_8a2140; case 0x8a217cu: goto L_8a217c; case 0x8a21d4u: goto L_8a21d4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a206c:;
    c->r[14] = 0x8a2070u; f_588a48(c);
    c->r[1] = 0x1196b30u;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = 0x8a2084u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a208c:;
    c->r[14] = 0x8a2090u; f_588a78(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a21d4; }
    c->r[0] = 0x1196b0cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a20a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa2u; ST8(ea, c->r[1]); }
    c->r[0] = 0x1196f08u;
    { uint32_t ea = 0x8a20b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x474u; ST8(ea, c->r[1]); } }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1196c9cu;
    { uint32_t ea = 0x8a20d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a20dcu; f_5c2f3c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a2100; }
    c->r[0] = 0x1196c8cu;
    { uint32_t ea = 0x8a20f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a20f8u; f_475a30(c);
    c->r[1] = c->r[5];
    c->r[14] = 0x8a2100u; f_46e600(c);
L_8a2100:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1196abcu;
    { uint32_t ea = 0x8a211cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2120u; f_7610d0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2128u; f_7611c8(c);
    c->r[0] = 0x1196aa8u;
    c->r[1] = 0x5dcu;
    { uint32_t ea = 0x8a2138u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_6e3fa0(c);
L_8a2140:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a2148u; f_8a2204(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x4u;
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1196a78u;
    { uint32_t ea = 0x8a2168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a216cu; f_6df23c(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42700000u;
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a217c:;
    c->r[0] = 0x1196bf8u;
    c->v.s[0] = LD32(c->r[4] + 188u);
    { uint32_t ea = 0x8a218cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    ST32(c->r[4] + 188u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_8a21bc; }
    c->r[0] = 0x1196a30u;
    { uint32_t ea = 0x8a21b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a21b4u; f_6df270(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[14] = 0x8a21bcu; f_8a2380(c); }
L_8a21bc:;
    c->r[0] = 0x1196a10u;
    c->r[1] = 0x1b56u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x8a21d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
L_8a21d4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a2204(Cpu *restrict c) {
    FN_ENTER(0x8a2204u);
L_8a2204:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_8a2358; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x8a2230u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x8a2248u: goto L_8a2248; case 0x8a2258u: goto L_8a2258; case 0x8a2270u: goto L_8a2270; case 0x8a22c4u: goto L_8a22c4; case 0x8a230cu: goto L_8a230c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a2248:;
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    goto L_8a2358;
L_8a2258:;
    c->r[0] = 0x1196974u;
    { uint32_t ea = 0x8a2264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2268u; f_7611e8(c);
    c->r[4] = 0x1u;
    goto L_8a2358;
L_8a2270:;
    c->r[1] = 0x2u;
    c->r[2] = 0x5bu;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1196944u;
    { uint32_t ea = 0x8a2290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2294u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[4] = 0x0u;
    c->r[0] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x8a22b0u; f_85f190(c);
    c->r[0] = 0x1196aecu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a22c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a2354;
L_8a22c4:;
    c->r[14] = 0x8a22c8u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8a2334; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a2358; }
    c->r[0] = 0x1196bdcu;
    { uint32_t ea = 0x8a22e4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a22e8u; f_5df850(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x88u; ST8(ea, c->r[1]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[14] = 0x8a2300u; f_85f118(c);
    c->r[0] = 0x1196aa0u;
    { uint32_t ea = 0x8a230cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a2348;
L_8a230c:;
    c->r[0] = 0x1196ba8u;
    { uint32_t ea = 0x8a2318u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a231cu; f_5e6434(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x4u; }
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); } }
    goto L_8a2358;
L_8a2334:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[14] = 0x8a2340u; f_85f118(c);
    c->r[0] = 0x1196a60u;
    { uint32_t ea = 0x8a234cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a2348:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
L_8a2354:;
    c->r[14] = 0x8a2358u; f_5dd72c(c);
L_8a2358:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a2380(Cpu *restrict c) {
    FN_ENTER(0x8a2380u);
L_8a2380:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1196c30u;
    { uint32_t ea = 0x8a2390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3d4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_NE) { goto L_8a23b0; }
    c->r[0] = 0x119680cu;
    { uint32_t ea = 0x8a23a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[4] = v; }
    goto L_8a23b8;
L_8a23b0:;
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x3d4u; ST32(ea, c->r[1]); }
L_8a23b8:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { c->r[4] = 0x1u; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_8a2404; }
    c->r[0] = 0x119699cu;
    { uint32_t ea = 0x8a23e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a23e4u; f_427ba8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a2404; }
    c->r[0] = 0x11969e0u;
    c->r[1] = 0x3760u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x8a2400u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
L_8a2404:;
    c->r[0] = 0x11967a4u;
    { uint32_t ea = 0x8a2410u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4du; ST8(ea, c->r[4]); }
    c->r[0] = 0x1196780u;
    { uint32_t ea = 0x8a2428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a242cu; f_212750(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a2444; }
    c->r[0] = 0x1196764u;
    { uint32_t ea = 0x8a2444u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a246c;
L_8a2444:;
    c->r[0] = 0x1196760u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a2454u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4du; ST8(ea, c->r[4]); }
    c->r[0] = 0x1196b44u;
    { uint32_t ea = 0x8a2468u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1196738u;
    { uint32_t ea = 0x8a2470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a246c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_212710(c);
}
void f_8a24a0(Cpu *restrict c) {
    FN_ENTER(0x8a24a0u);
L_8a24a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1200480u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a24c0u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
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
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7fu;
    c->r[14] = 0x8a2510u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a2528u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a2540u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a2580(Cpu *restrict c) {
    FN_ENTER(0x8a2580u);
L_8a2580:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[9] = c->r[0];
    c->r[1] = 0x24u;
    c->r[0] = c->r[9] + 0x4u;
    c->r[14] = 0x8a2598u; f_15efd7c(c);
    c->r[5] = 0x3f800000u;
    c->r[0] = c->r[9] + 0x2cu;
    c->r[1] = 0x24u;
    { uint32_t ea = c->r[9] + 0x28u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a25acu; f_15efd7c(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[9] + 0x50u; ST32(ea, c->r[5]); }
    c->r[3] = c->r[9] + 0x64u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[2] = c->r[0] + 0x10u;
    c->r[3] = c->r[9] + 0x7cu;
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x68u; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x6cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x70u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[3], c->r[0]);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    if (COND_NE) { c->r[3] = 0xffu; }
    { uint32_t ea = c->r[9] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x78u; ST32(ea, c->r[2]); }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x7cu; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x80u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x84u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x88u; ST32(ea, c->r[3]); } }
    c->r[3] = c->r[9] + 0x94u;
    { uint32_t ea = c->r[9] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x90u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { c->r[3] = 0xffu; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x94u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x98u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x9cu; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xa0u; ST32(ea, c->r[3]); } }
    c->r[3] = c->r[9] + 0xacu;
    { uint32_t ea = c->r[9] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xa8u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { c->r[3] = 0xffu; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xacu; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xb0u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xb4u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xb8u; ST32(ea, c->r[3]); } }
    c->r[3] = c->r[9] + 0xc4u;
    { uint32_t ea = c->r[9] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xc0u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { c->r[0] = 0xffu; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xc4u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xc8u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xccu; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xd0u; ST32(ea, c->r[0]); } }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[9] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0xd8u; ST32(ea, c->r[2]); }
    c->r[1] = 0x32u;
    { uint32_t ea = c->r[9] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x134u;
    { uint32_t ea = c->r[9] + 0x124u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x128u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x12cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x130u; ST8(ea, c->r[5]); }
    c->r[14] = 0x8a26c4u; f_15efdac(c);
    c->r[0] = c->r[9] + 0xe0u;
    c->r[1] = 0x41u;
    c->r[14] = 0x8a26d0u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7fu);
    if (COND_HI) { goto L_8a2774; }
    c->r[0] = 0x1196458u;
    { uint32_t ea = 0x8a2704u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2704u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xe00u;
    c->pc = c->r[3]; c->r[14] = 0x8a2718u; rt_dispatch(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_8a2880; }
    { uint32_t ea = c->r[9] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a2780; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
L_8a2738:;
    { uint32_t ea = c->r[9] + 0x168u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + c->r[1];
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[3]; c->r[3] = c->r[3] + 12u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); c->r[0] = c->r[0] + 12u; }
    { uint32_t ea = c->r[3]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_8a2738; }
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_CC) { goto L_8a2784; }
    goto L_8a2854;
L_8a2774:;
    (void)f_subs(c, c->r[0], 0x80u);
    if (COND_NE) { goto L_8a2880; }
    goto L_8a2888;
L_8a2780:;
    c->r[0] = 0x0u;
L_8a2784:;
    c->r[2] = 0x0u - c->r[0];
    c->r[12] = 0x7fu - c->r[0];
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_8a27cc; }
    c->r[2] = (c->r[0] << 3) - c->r[0];
    c->r[10] = 0x0u - c->r[3];
    c->r[14] = c->r[13] + 0x18u;
    c->r[5] = c->r[8] + (c->r[2] << 2);
L_8a27a4:;
    c->r[6] = c->r[14];
    c->r[2] = c->r[5];
    c->r[10] = f_adds(c, c->r[10], 0x1u);
    c->r[5] = c->r[5] + 0x1cu;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6]; c->r[6] = c->r[6] + 12u; c->r[1] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[7]); c->r[2] = c->r[2] + 12u; }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); }
    if (COND_NE) { goto L_8a27a4; }
L_8a27cc:;
    (void)f_subs(c, c->r[12], 0x3u);
    if (COND_CC) { goto L_8a2854; }
    c->r[1] = (c->r[0] << 3) - c->r[0];
    c->r[0] = 0x80u - c->r[0];
    c->r[12] = c->r[13] + 0x18u;
    c->r[1] = c->r[8] + (c->r[1] << 2);
    c->r[1] = c->r[1] + 0x54u;
L_8a27e8:;
    c->r[2] = c->r[12];
    c->r[3] = c->r[1] - 0x54u;
    c->r[0] = f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 12u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); c->r[3] = c->r[3] + 12u; }
    { uint32_t ea = c->r[2]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[2] = c->r[1] - 0x38u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[3]; c->r[3] = c->r[3] + 12u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); c->r[2] = c->r[2] + 12u; }
    { uint32_t ea = c->r[3]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[2] = c->r[1] - 0x1cu;
    { uint32_t ea = c->r[3]; c->r[3] = c->r[3] + 12u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); c->r[2] = c->r[2] + 12u; }
    { uint32_t ea = c->r[3]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[2] = c->r[1];
    c->r[1] = c->r[1] + 0x70u;
    { uint32_t ea = c->r[3]; c->r[3] = c->r[3] + 12u; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); c->r[2] = c->r[2] + 12u; }
    { uint32_t ea = c->r[3]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    if (COND_NE) { goto L_8a27e8; }
L_8a2854:;
    { uint32_t ea = c->r[9] + 0x168u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_8a287c; }
    c->r[0] = 0x11962f0u;
    { uint32_t ea = 0x8a286cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a286cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x8a287cu; rt_dispatch(c);
L_8a287c:;
    { uint32_t ea = c->r[9] + 0x168u; ST32(ea, c->r[8]); }
L_8a2880:;
    c->r[0] = 0x80u;
    { uint32_t ea = c->r[9] + 0x16cu; ST32(ea, c->r[0]); }
L_8a2888:;
    c->r[0] = 0x0u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
L_8a2898:;
    { uint32_t ea = c->r[9] + 0x168u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[7] + c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x168u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + c->r[2];
    c->r[2] = c->r[2] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x16cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CC) { goto L_8a2898; }
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_8a28e4(Cpu *restrict c) {
    FN_ENTER(0x8a28e4u);
L_8a28e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x8a28ecu; f_76d97c(c);
    c->r[1] = 0x119e10cu;
    c->r[2] = 0xffu;
    { uint32_t ea = 0x8a28fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x11964c4u;
    { uint32_t ea = 0x8a290cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xecu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x11cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x120u; ST32(ea, c->r[2]); }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a29b4(Cpu *restrict c) {
    FN_ENTER(0x8a29b4u);
L_8a29b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x119e040u;
    { uint32_t ea = 0x8a29c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x11963f8u;
    { uint32_t ea = 0x8a29d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a2a04; }
    c->r[0] = 0x1196168u;
    { uint32_t ea = 0x8a29f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a29f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a2a04u; rt_dispatch(c);
L_8a2a04:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_76da30(c);
}
void f_8a2a1c(Cpu *restrict c) {
    FN_ENTER(0x8a2a1cu);
L_8a2a1c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x119dfd8u;
    { uint32_t ea = 0x8a2a30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1196390u;
    { uint32_t ea = 0x8a2a40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a2a6c; }
    c->r[0] = 0x1196100u;
    { uint32_t ea = 0x8a2a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2a5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a2a6cu; rt_dispatch(c);
L_8a2a6c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a2a74u; f_76da30(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_208a90(c);
}
void f_8a2a88(Cpu *restrict c) {
    FN_ENTER(0x8a2a88u);
L_8a2a88:;
    __attribute__((musttail)) return f_76dc20(c);
}
void f_8a2a8c(Cpu *restrict c) {
    FN_ENTER(0x8a2a8cu);
L_8a2a8c:;
    __attribute__((musttail)) return f_76dc24(c);
}
void f_8a2a90(Cpu *restrict c) {
    FN_ENTER(0x8a2a90u);
L_8a2a90:;
    c->r[1] = 0x1196118u;
    { uint32_t ea = 0x8a2a9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x6u);
    c->r[1] = 0xf9c3acu;
    if (COND_HI) { c->r[2] = 0x0u; }
    c->r[1] = 0x8a2ab8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    __attribute__((musttail)) return f_76e1a8(c);
}
void f_8a2ac4(Cpu *restrict c) {
    FN_ENTER(0x8a2ac4u);
L_8a2ac4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x70u;
    c->r[4] = c->r[0];
    c->r[6] = 0x4u;
    c->r[0] = 0x25u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x26u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x27u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x28u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a2b00u; f_76e3b0(c);
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0x8a2b0cu; f_80097c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xfu;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x119c700u;
    { uint32_t ea = 0x8a2b3cu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a2b40u; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x8a2b4cu; f_770710(c);
    c->r[0] = 0x1196074u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    { uint32_t ea = 0x8a2b60u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2b64u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2b78u; f_76e808(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x70u;
    c->r[14] = 0x8a2b88u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2b9cu; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a2bb0u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a2bc4u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x7u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a2bd8u; f_76e530(c);
    c->r[0] = 0x1196144u;
    { uint32_t ea = 0x8a2be4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_8a2c00; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x7u;
    goto L_8a2c20;
L_8a2c00:;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2c0cu; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    if (COND_NE) { c->r[2] = 0x5u; }
    if (COND_EQ) { c->r[2] = 0x2u; }
L_8a2c20:;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a2c28u; f_76e530(c);
    c->r[13] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a2c3c(Cpu *restrict c) {
    FN_ENTER(0x8a2c3cu);
L_8a2c3c:;
    __attribute__((musttail)) return f_76e3ac(c);
}
void f_8a2c40(Cpu *restrict c) {
    FN_ENTER(0x8a2c40u);
L_8a2c40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x8a2c50u; f_76e4d8(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a2c70u; f_76fde0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a2c78(Cpu *restrict c) {
    FN_ENTER(0x8a2c78u);
L_8a2c78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    (void)f_adds(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x119dd70u;
    { uint32_t ea = 0x8a2c9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x8a2ca4u; f_76e61c(c);
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a2cbc(c);
}
void f_8a2cbc(Cpu *restrict c) {
    FN_ENTER(0x8a2cbcu);
L_8a2cbc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0xcu);
    if (COND_HI) { goto L_8a32b0; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x8a2ce0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8a2d18u: goto L_8a2d18; case 0x8a2d64u: goto L_8a2d64; case 0x8a2db0u: goto L_8a2db0; case 0x8a2dfcu: goto L_8a2dfc; case 0x8a2e48u: goto L_8a2e48; case 0x8a2e94u: goto L_8a2e94; case 0x8a2ee0u: goto L_8a2ee0; case 0x8a2f2cu: goto L_8a2f2c; case 0x8a2f78u: goto L_8a2f78; case 0x8a2fc4u: goto L_8a2fc4; case 0x8a3010u: goto L_8a3010; case 0x8a305cu: goto L_8a305c; case 0x8a30a8u: goto L_8a30a8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a2d18:;
    c->r[0] = 0x1195ea8u;
    c->r[1] = 0x1u;
    c->r[2] = 0x21u;
    { uint32_t ea = 0x8a2d2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2d30u; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a30f4; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2d4cu; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a2d60u; f_76e808(c);
    goto L_8a30fc;
L_8a2d64:;
    c->r[0] = 0x1195e5cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x25u;
    { uint32_t ea = 0x8a2d78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2d7cu; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a310c; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2d98u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a2dacu; f_76e808(c);
    goto L_8a3114;
L_8a2db0:;
    c->r[0] = 0x1195e10u;
    c->r[1] = 0x1u;
    c->r[2] = 0x29u;
    { uint32_t ea = 0x8a2dc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2dc8u; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a3124; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2de4u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a2df8u; f_76e808(c);
    goto L_8a312c;
L_8a2dfc:;
    c->r[0] = 0x1195dc4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3du;
    { uint32_t ea = 0x8a2e10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2e14u; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a313c; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2e30u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a2e44u; f_76e808(c);
    goto L_8a3144;
L_8a2e48:;
    c->r[0] = 0x1195d78u;
    c->r[1] = 0x1u;
    c->r[2] = 0x28u;
    { uint32_t ea = 0x8a2e5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2e60u; f_75bcdc(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_8a3154; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2e7cu; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a2e90u; f_76e808(c);
    goto L_8a315c;
L_8a2e94:;
    c->r[0] = 0x1195d2cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x3fu;
    { uint32_t ea = 0x8a2ea8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2eacu; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a31b8; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2ec8u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a2edcu; f_76e808(c);
    goto L_8a31c0;
L_8a2ee0:;
    c->r[0] = 0x1195ce0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x48u;
    { uint32_t ea = 0x8a2ef4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2ef8u; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a31d0; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2f14u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a2f28u; f_76e808(c);
    goto L_8a31d8;
L_8a2f2c:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a2f3cu; f_74533c(c);
    c->r[0] = 0x1195c84u;
    c->r[1] = 0x1u;
    c->r[2] = 0x51u;
    { uint32_t ea = 0x8a2f50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2f54u; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x29u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a2f70u; f_76e7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a2f78:;
    c->r[0] = 0x1195c48u;
    c->r[1] = 0x1u;
    c->r[2] = 0x52u;
    { uint32_t ea = 0x8a2f8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2f90u; f_75bcdc(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_8a31e8; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2facu; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a2fc0u; f_76e808(c);
    goto L_8a31f0;
L_8a2fc4:;
    c->r[0] = 0x1195bfcu;
    c->r[1] = 0x1u;
    c->r[2] = 0x52u;
    { uint32_t ea = 0x8a2fd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a2fdcu; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a3170; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a2ff8u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a300cu; f_76e808(c);
    goto L_8a3178;
L_8a3010:;
    c->r[0] = 0x1195bb0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x52u;
    { uint32_t ea = 0x8a3024u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3028u; f_75bcdc(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_8a3204; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3044u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a3058u; f_76e808(c);
    goto L_8a320c;
L_8a305c:;
    c->r[0] = 0x1195b64u;
    c->r[1] = 0x1u;
    c->r[2] = 0x2eu;
    { uint32_t ea = 0x8a3070u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3074u; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a3188; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3090u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a30a4u; f_76e808(c);
    goto L_8a3190;
L_8a30a8:;
    c->r[0] = 0x1195b18u;
    c->r[1] = 0x1u;
    c->r[2] = 0x2eu;
    { uint32_t ea = 0x8a30bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a30c0u; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a31a0; }
    c->r[2] = 0x1u;
    c->r[14] = 0x8a30dcu; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x4u;
    c->r[3] = c->r[5];
    c->r[14] = 0x8a30f0u; f_76e808(c);
    goto L_8a31a8;
L_8a30f4:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a30fcu; f_74533c(c);
L_8a30fc:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a32fc(c);
L_8a310c:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a3114u; f_74533c(c);
L_8a3114:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a3640(c);
L_8a3124:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a312cu; f_74533c(c);
L_8a312c:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a37bc(c);
L_8a313c:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a3144u; f_74533c(c);
L_8a3144:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a3bc4(c);
L_8a3154:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a315cu; f_74533c(c);
L_8a315c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a3e08(c);
L_8a3170:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a3178u; f_74533c(c);
L_8a3178:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a4970(c);
L_8a3188:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a3190u; f_74533c(c);
L_8a3190:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a4b3c(c);
L_8a31a0:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a31a8u; f_74533c(c);
L_8a31a8:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a5150(c);
L_8a31b8:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a31c0u; f_74533c(c);
L_8a31c0:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a3ee8(c);
L_8a31d0:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a31d8u; f_74533c(c);
L_8a31d8:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a4280(c);
L_8a31e8:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a31f0u; f_74533c(c);
L_8a31f0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a4634(c);
L_8a3204:;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a320cu; f_74533c(c);
L_8a320c:;
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[5] << 3) - c->r[5];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1au);
    if (COND_HI) { goto L_8a32b0; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x8a3230u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x8a32a0u: goto L_8a32a0; case 0x8a32b8u: goto L_8a32b8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a32a0:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a5bb4(c);
L_8a32b0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a32b8:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a61d0(c);
}
void f_8a32fc(Cpu *restrict c) {
    FN_ENTER(0x8a32fcu);
L_8a32fc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1195aa0u;
    c->r[10] = c->r[13] + 0x10u;
    c->r[6] = 0x0u;
    c->r[7] = c->r[10] | 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x8a3328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a3334u; f_74f9c0(c);
    c->r[8] = c->r[13] + 0x8u;
    c->r[9] = 0x1u;
    c->r[1] = 0x7u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x2du; ST8(ea, c->r[9]); }
    c->r[14] = 0x8a3360u; f_8a64dc(c);
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a336cu; f_74f9f0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x8a3374u; f_8a526c(c);
    c->v.s[0] = LD32(c->r[4] + 116u);
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x22u;
    c->r[3] = 0x101u;
    c->v.s[4] = 0x3f800000u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    ST32(c->r[1] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xau; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xcu; ST16(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0xeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST16(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[4] + 120u);
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[7]); }
    c->r[7] = 0x23u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    ST32(c->r[1] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x28u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x54u; ST32(ea, c->r[3]); }
    c->r[3] = 0x24u;
    ST32(c->r[1] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x48u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x4cu; ST16(ea, c->r[3]); }
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[1] + 0x4eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x50u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x74u; ST32(ea, c->r[7]); }
    c->r[7] = 0x25u;
    ST32(c->r[1] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x68u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x6au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x6cu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x6eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x94u; ST32(ea, c->r[7]); }
    c->r[7] = 0x28u;
    { uint32_t ea = c->r[1] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x88u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x8cu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x9cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0xa8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x8eu;
    { uint32_t ea = c->r[7] + 0xaau; ST16(ea, c->r[9]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[7] + 0xacu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xaeu; ST16(ea, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[7] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0xbcu; ST16(ea, c->r[3]); }
    c->r[14] = 0x8a34acu; f_8a5420(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xdu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a34c0u; f_74533c(c);
    c->r[0] = 0x26u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[1] = 0xdu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a34e0u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a34fcu; f_76fde0(c);
    c->r[0] = 0x11956c4u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    { uint32_t ea = 0x8a3510u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3514u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a3528u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a353cu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3550u; f_74533c(c);
    c->r[0] = 0x27u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a3570u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a358cu; f_76fde0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    c->r[14] = 0x8a359cu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a35b0u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a35c4u; f_76e530(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = c->r[4];
    if (COND_NE) { c->r[5] = c->r[5] + (c->r[0] << 5); }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_8a3604; }
L_8a35e0:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x20u; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x8a35f4u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[4] = c->r[6];
    if (COND_NE) { goto L_8a35e0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_8a3604:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a3628; }
    c->r[0] = 0x1195544u;
    { uint32_t ea = 0x8a3618u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3618u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x8a3628u; rt_dispatch(c);
L_8a3628:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_8a3640(Cpu *restrict c) {
    FN_ENTER(0x8a3640u);
L_8a3640:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x8a3650u; f_8a526c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0x1u;
    c->r[8] = 0x1u;
    c->r[14] = 0x8a3664u; f_74533c(c);
    c->r[0] = 0x1195560u;
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x8a3678u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x11956a4u;
    { uint32_t ea = 0x8a3684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3688u; f_5abb14(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x8a3698u; f_75ff98(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x119552cu;
    { uint32_t ea = 0x8a36a8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a36acu; f_75bda4(c);
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x8a36ccu; f_76fb94(c);
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a36e8u; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    c->r[14] = 0x8a36f8u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[2] = 0x5u;
    c->r[14] = 0x8a370cu; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[2] = 0x5u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a3720u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3734u; f_74533c(c);
    c->r[0] = 0x26u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a3754u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a3770u; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    c->r[14] = 0x8a3780u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a3794u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_76e530(c);
}
void f_8a37bc(Cpu *restrict c) {
    FN_ENTER(0x8a37bcu);
L_8a37bc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    c->r[0] = 0x11955d8u;
    c->r[8] = c->r[13] + 0x10u;
    c->r[11] = 0x0u;
    c->r[6] = c->r[8] | 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = 0x8a37f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a37fcu; f_74f9c0(c);
    c->r[7] = 0x1u;
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = 0x7u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2du; ST8(ea, c->r[7]); }
    c->r[14] = 0x8a3824u; f_8a64dc(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a3830u; f_74f9f0(c);
    c->r[0] = 0x1195540u;
    c->v.s[16] = LD32(c->r[4] + 160u);
    { uint32_t ea = 0x8a3840u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3844u; f_475a30(c);
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = 0x3f800000u;
    c->r[6] = 0x514u;
    c->v.s[0] = 0x0u;
    c->r[9] = 0x4u;
    c->r[10] = 0x1au;
    c->r[8] = 0xffffu;
    c->r[0] = c->r[0] + c->r[6];
    vfp_cmp_f(c, c->v.f[16], c->v.f[2]);
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0xau; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0xeu; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST16(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    c->v.s[16] = COND_EQ ? c->v.s[0] : c->v.s[16];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_8a38e8; }
    c->r[0] = 0x119552cu;
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x8a38b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a38b8u; f_5c6d44(c);
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x2u;
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x28u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x2au; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST16(ea, c->r[11]); }
L_8a38e8:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_8a3950; }
    c->r[0] = 0x11954dcu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x8a3904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3908u; f_5c6d44(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x4u;
    c->r[2] = c->r[1] + (c->r[7] << 5);
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[6]); }
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[2] + 0xau; ST16(ea, c->r[6]); }
    c->r[6] = 0x1au;
    { uint32_t ea = c->r[2] + 0xcu; ST16(ea, c->r[6]); }
    c->r[6] = 0x514u;
    { uint32_t ea = c->r[2] + 0xeu; ST16(ea, c->r[8]); }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST16(ea, c->r[3]); }
L_8a3950:;
    c->r[0] = c->r[1] + (c->r[7] << 5);
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0x1u;
    c->r[2] = 0x8cu;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    ST32(c->r[0] + 24u, c->v.s[16]);
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[2]); }
    c->r[2] = 0x100u;
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    c->r[3] = 0x2cu;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    c->r[3] = 0x24u;
    ST32(c->r[0] + 88u, c->v.s[16]);
    { uint32_t ea = c->r[0] + 0x48u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4eu; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_8a3a0c; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x68u; ST8(ea, c->r[1]); }
    c->r[1] = 0x22u;
    { uint32_t ea = c->r[0] + 0x6au; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6eu; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST16(ea, c->r[2]); }
L_8a3a0c:;
    c->r[1] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x8a3a1cu; f_8a5420(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xdu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3a30u; f_74533c(c);
    c->r[0] = 0x26u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[1] = 0xdu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a3a50u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a3a6cu; f_76fde0(c);
    c->r[0] = 0x1195154u;
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    { uint32_t ea = 0x8a3a80u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3a84u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a3a98u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a3aacu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3ac0u; f_74533c(c);
    c->r[0] = 0x2au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a3ae0u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a3afcu; f_76fde0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    c->r[14] = 0x8a3b0cu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a3b20u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a3b34u; f_76e530(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = c->r[4];
    if (COND_NE) { c->r[5] = c->r[5] + (c->r[0] << 5); }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_8a3b74; }
L_8a3b50:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x20u; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x8a3b64u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[4] = c->r[6];
    if (COND_NE) { goto L_8a3b50; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_8a3b74:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a3b98; }
    c->r[0] = 0x1194fd4u;
    { uint32_t ea = 0x8a3b88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3b88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x8a3b98u; rt_dispatch(c);
L_8a3b98:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a3bc4(Cpu *restrict c) {
    FN_ENTER(0x8a3bc4u);
L_8a3bc4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    c->r[0] = 0x11951d8u;
    c->r[10] = c->r[13] + 0x10u;
    c->r[7] = 0x0u;
    c->r[6] = c->r[10] | 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x8a3bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a3bfcu; f_74f9c0(c);
    c->r[8] = c->r[13] + 0x8u;
    c->r[9] = 0x1u;
    c->r[1] = 0x7u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13] + 0x2cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x2du; ST8(ea, c->r[9]); }
    c->r[14] = 0x8a3c28u; f_8a64dc(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a3c34u; f_74f9f0(c);
    { uint32_t ea = c->r[4] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x4du;
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0xau; ST16(ea, c->r[9]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[2] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[2] + 0xeu; ST16(ea, c->r[0]); }
    c->r[0] = 0x100u;
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x8a3c7cu; f_8a5420(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xdu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3c90u; f_74533c(c);
    c->r[8] = 0x26u;
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x8a3cb0u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a3cccu; f_76fde0(c);
    c->r[0] = 0x1194ef4u;
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    { uint32_t ea = 0x8a3ce0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3ce4u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a3cf8u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a3d0cu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3d20u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x8a3d3cu; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a3d58u; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    c->r[14] = 0x8a3d68u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a3d7cu; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a3d90u; f_76e530(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = c->r[4];
    if (COND_NE) { c->r[5] = c->r[5] + (c->r[0] << 5); }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_8a3dd0; }
L_8a3dac:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x20u; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x8a3dc0u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[4] = c->r[6];
    if (COND_NE) { goto L_8a3dac; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_8a3dd0:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a3df4; }
    c->r[0] = 0x1194d78u;
    { uint32_t ea = 0x8a3de4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3de4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x8a3df4u; rt_dispatch(c);
L_8a3df4:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_8a3e08(Cpu *restrict c) {
    FN_ENTER(0x8a3e08u);
L_8a3e08:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a3e70; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x8a3e2cu; rt_dispatch(c);
    c->r[6] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_8a3e44; }
    { uint32_t ea = c->r[5] + 0x1c8u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] - 0x2u; }
L_8a3e44:;
    c->r[0] = 0x1194f8cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a3e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3e58u; f_5c6f80(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_8a3e74; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    goto L_8a3ed0;
L_8a3e70:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a3e74:;
    c->r[0] = 0x1194f5cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a3e84u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3e88u; f_5c6f80(c);
    c->r[6] = c->r[6] - c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x8a3e98u; f_5c6f80(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_8a3eb0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    goto L_8a3ed0;
L_8a3eb0:;
    c->r[0] = 0x1194f20u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a3ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3ec4u; f_5c6f80(c);
    c->r[1] = c->r[6] - c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x2u;
L_8a3ed0:;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_8a568c(c);
}
void f_8a3ee8(Cpu *restrict c) {
    FN_ENTER(0x8a3ee8u);
L_8a3ee8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[1] = 0x1du;
    c->r[2] = 0x1u;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x8a3f0cu; f_74533c(c);
    c->r[0] = 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x1du;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a3f2cu; f_76fb94(c);
    c->r[7] = 0x0u;
    c->r[0] = c->r[4];
    c->r[1] = 0x1du;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a3f4cu; f_76fde0(c);
    c->r[0] = 0x1194c74u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    { uint32_t ea = 0x8a3f60u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a3f64u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1du;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a3f78u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1du;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a3f8cu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1eu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a3fa0u; f_74533c(c);
    c->r[0] = 0x41u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x1eu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a3fc0u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1eu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a3fdcu; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    c->r[14] = 0x8a3fecu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1eu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a4000u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1eu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4014u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x1fu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4028u; f_74533c(c);
    c->r[0] = 0x42u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x1fu;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a4048u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1fu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a4064u; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    c->r[14] = 0x8a4074u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1fu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a4088u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1fu;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a409cu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x20u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a40b0u; f_74533c(c);
    c->r[0] = 0x2bu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x20u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a40d0u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x20u;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a40ecu; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    c->r[14] = 0x8a40fcu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x20u;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a4110u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x20u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4124u; f_76e530(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x46u;
    c->r[14] = 0x8a4134u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1au;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4148u; f_76e808(c);
    { uint32_t ea = c->r[4] + 0x13cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1au;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a4160u; f_8a5ae0(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x44u;
    c->r[14] = 0x8a4170u; f_74533c(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x3au;
    c->r[14] = 0x8a4180u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x44u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4194u; f_76e808(c);
    c->r[0] = 0x1194a34u;
    c->r[1] = 0xeu;
    { uint32_t ea = 0x8a41a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a41a8u; f_760e90(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x44u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a41bcu; f_76e6fc(c);
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_8a424c; }
    c->r[1] = 0x3au;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a41d8u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3bu;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a41e8u; f_74533c(c);
    c->r[0] = 0x11949d8u;
    c->r[1] = 0x1u;
    c->r[2] = 0xdu;
    { uint32_t ea = 0x8a41fcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4200u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x3au;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4214u; f_76e808(c);
    c->r[0] = 0x119c7ecu;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a4224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x8a4230u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x3bu;
    c->r[2] = 0x1u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_76e808(c);
L_8a424c:;
    c->r[1] = 0x3au;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a4258u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3bu;
    c->r[2] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_74533c(c);
}
void f_8a4280(Cpu *restrict c) {
    FN_ENTER(0x8a4280u);
L_8a4280:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    c->r[14] = 0x8a4290u; f_8a526c(c);
    c->r[0] = 0x1194b18u;
    c->r[9] = c->r[13] + 0x10u;
    c->r[7] = 0x0u;
    c->r[6] = c->r[9] | 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x8a42b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a42bcu; f_74f9c0(c);
    c->r[8] = 0x1u;
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = 0x5u;
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2du; ST8(ea, c->r[8]); }
    c->r[14] = 0x8a42e4u; f_8a64dc(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a42f0u; f_74f9f0(c);
    c->r[0] = 0x1194a2cu;
    { uint32_t ea = 0x8a42fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4300u; f_5ae21c(c);
    { uint32_t ea = c->r[4] + 0x140u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[3] = 0x4du;
    c->r[0] = 0xffffu;
    if (COND_EQ) { c->r[3] = 0x49u; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xau; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0xcu; ST16(ea, c->r[3]); }
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[1] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x144u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x34u; ST32(ea, c->r[6]); }
    c->r[6] = 0x4au;
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x28u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2au; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; ST32(ea, c->r[6]); }
    c->r[6] = 0x4bu;
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x48u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4au; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x4cu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x50u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_8a43cc; }
    c->v.s[0] = c->r[6];
    c->r[5] = ~0x13u;
    { uint32_t ea = c->r[1] + 0x74u; ST32(ea, c->r[5]); }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[1] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x68u; ST8(ea, c->r[2]); }
    c->r[2] = 0x4cu;
    { uint32_t ea = c->r[1] + 0x6au; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x70u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST16(ea, c->r[3]); }
L_8a43cc:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x23u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a43e0u; f_74533c(c);
    c->r[0] = 0x26u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x23u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a4400u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x23u;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a441cu; f_76fde0(c);
    c->r[0] = 0x11947a4u;
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    { uint32_t ea = 0x8a4430u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4434u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x23u;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a4448u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x23u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a445cu; f_76e530(c);
    c->r[1] = c->r[13] + 0x8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x8a446cu; f_8a5420(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x150u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x24u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4480u; f_74533c(c);
    c->r[0] = 0x4eu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x24u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a44a0u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x24u;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a44bcu; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    c->r[14] = 0x8a44ccu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x24u;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a44e0u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x24u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a44f4u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x32u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4508u; f_74533c(c);
    c->r[0] = 0x4fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = 0x32u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a4528u; f_76fb94(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x32u;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a4544u; f_76fde0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    c->r[14] = 0x8a4554u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x32u;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a4568u; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x32u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a457cu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x21u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a458cu; f_74533c(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x50u;
    c->r[14] = 0x8a459cu; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x21u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a45b8u; f_76e7b8(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = c->r[4];
    if (COND_NE) { c->r[5] = c->r[5] + (c->r[0] << 5); }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_8a45f8; }
L_8a45d4:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x20u; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x8a45e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[4] = c->r[6];
    if (COND_NE) { goto L_8a45d4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_8a45f8:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a461c; }
    c->r[0] = 0x1194550u;
    { uint32_t ea = 0x8a460cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a460cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x8a461cu; rt_dispatch(c);
L_8a461c:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_8a4634(Cpu *restrict c) {
    FN_ENTER(0x8a4634u);
L_8a4634:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[4] = c->r[0];
    c->r[0] = 0x1194578u;
    c->r[5] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x53u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x8a465cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4660u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x2eu;
    c->r[2] = 0x3u;
    c->r[8] = 0x3u;
    c->r[14] = 0x8a4678u; f_76e808(c);
    c->r[0] = c->r[5] + (c->r[5] << 2);
    c->r[5] = c->r[4] + (c->r[0] << 1);
    c->r[0] = 0x184u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x8a4694u; f_75bda4(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x2eu;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x8a46b4u; f_76fb94(c);
    c->r[0] = 0x1194510u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x8a46c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a46ccu; f_760ca4(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x10d70ecu;
    c->r[1] = 0x2eu;
    c->r[2] = 0x2u;
    c->r[0] = 0x8a46e4u + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a46ecu; f_76ef50(c);
    c->r[0] = 0x188u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a4718; }
    c->r[0] = 0x186u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = 0x2u; }
    c->r[9] = c->r[6];
L_8a4718:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x31u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4728u; f_74533c(c);
    c->r[0] = c->r[9] & 0x3u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8a474c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a4770; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a477c; }
    c->r[8] = 0x0u;
    goto L_8a4774;
L_8a474c:;
    c->r[8] = 0x2u;
    c->r[0] = 0x0u;
    c->r[1] = 0x31u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a476cu; f_74533c(c);
    goto L_8a477c;
L_8a4770:;
    c->r[8] = 0x1u;
L_8a4774:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
L_8a477c:;
    c->r[0] = 0x18au;
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[6] = 0x54u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[5] + c->r[0];
    if (COND_EQ) { c->r[6] = 0x55u; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x186u;
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x18cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x34u;
    c->r[10] = c->r[0] + 0x4u;
    c->r[0] = 0x1194414u;
    { uint32_t ea = 0x8a47c0u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x119440cu;
    { uint32_t ea = 0x8a47c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11943ecu;
    { uint32_t ea = 0x8a47d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11943f4u;
    { uint32_t ea = 0x8a47e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11943d4u;
    { uint32_t ea = 0x8a47ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_8a47fc;
L_8a47f0:;
    { uint32_t ea = c->r[10] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[9] + 0x1u;
    c->r[9] = c->r[0];
L_8a47fc:;
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[7] = 0x2du;
    c->r[0] = c->r[4];
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x2fu; }
    c->r[1] = c->r[7];
    c->r[14] = 0x8a481cu; f_76e530(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = c->r[6];
    c->r[14] = 0x8a482cu; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4840u; f_76e808(c);
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_NE) { goto L_8a487c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x9fu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a485cu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a4870u; f_76e808(c);
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_8a47f0; }
    goto L_8a4948;
L_8a487c:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_8a489c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x1u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_8a48b4; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_8a48c0;
L_8a489c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_8a48bc; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_8a48c0;
L_8a48b4:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_8a48c0;
L_8a48bc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_8a48c0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[13] + 0x2cu;
    c->r[14] = 0x8a48d0u; f_267310(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x56u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a48e4u; f_75bcdc(c);
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = 0x2u;
    c->v.df[16] = (double)c->v.f[0];
    ST64(c->r[13], c->v.d[16]);
    c->r[14] = 0x8a4904u; f_76e7b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_HI) { goto L_8a4940; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4928u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = 0x3u;
    c->r[3] = 0xeu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a4940u; f_76e6a8(c);
L_8a4940:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_8a47f0; }
L_8a4948:;
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a4970(Cpu *restrict c) {
    FN_ENTER(0x8a4970u);
L_8a4970:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[2] = 0x4240u;
    c->r[6] = 0x2u;
    c->r[5] = 0x3u;
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf0000u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_8a49bc; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8a49c4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a4b24; }
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a49e4; }
    c->r[6] = 0x1u;
    goto L_8a49fc;
L_8a49bc:;
    c->r[2] = c->r[2] + 0x1u;
    goto L_8a49fc;
L_8a49c4:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a49f8; }
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    c->r[6] = 0x2u;
    c->r[2] = c->r[2] + 0x2u;
    goto L_8a49ec;
L_8a49e4:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
L_8a49ec:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = 0x3u; }
    goto L_8a49fc;
L_8a49f8:;
    c->r[2] = c->r[2] + 0x3u;
L_8a49fc:;
    c->r[0] = 0x119a6ecu;
    { uint32_t ea = 0x8a4a08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_8a4b24; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2au;
    c->r[14] = 0x8a4a1cu; f_76e538(c);
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a4a74; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2au;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4a3cu; f_7464dc(c);
    c->r[0] = 0x1194184u;
    c->r[1] = 0x1u;
    c->r[2] = 0x57u;
    { uint32_t ea = 0x8a4a50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4a54u; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x2au;
    c->r[14] = 0x8a4a74u; f_76e7b8(c);
L_8a4a74:;
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a4acc; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2au;
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4a94u; f_7464dc(c);
    c->r[0] = 0x119412cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x57u;
    { uint32_t ea = 0x8a4aa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4aacu; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x2au;
    c->r[14] = 0x8a4accu; f_76e7b8(c);
L_8a4acc:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a4b24; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2au;
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4aecu; f_7464dc(c);
    c->r[0] = 0x11940d4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x57u;
    { uint32_t ea = 0x8a4b00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4b04u; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x2au;
    c->r[14] = 0x8a4b24u; f_76e7b8(c);
L_8a4b24:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a4b3c(Cpu *restrict c) {
    FN_ENTER(0x8a4b3cu);
L_8a4b3c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x34u;
    c->r[4] = c->r[0];
    c->r[0] = 0x11941ccu;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x8a4b5cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4b60u; f_5a3778(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x35u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4b74u; f_76e808(c);
    { uint32_t ea = c->r[4] + 0x13cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x38u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a4b8cu; f_8a5ae0(c);
    c->r[0] = 0x119be74u;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a4b9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1194028u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a4bacu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4bb0u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x38u;
    c->r[2] = 0x2u;
    c->r[14] = 0x8a4bc4u; f_76e808(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x32u;
    c->r[14] = 0x8a4bd4u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x37u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a4be8u; f_76e808(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x33u;
    c->r[14] = 0x8a4bf8u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x37u;
    c->r[2] = 0x2u;
    c->r[14] = 0x8a4c0cu; f_76e808(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x34u;
    c->r[14] = 0x8a4c1cu; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x37u;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a4c30u; f_76e808(c);
    c->r[0] = 0x1194134u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a4c40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4c48u; f_5b5ac0(c);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1193f78u;
    c->r[11] = 0x0u;
    c->r[9] = 0x0u;
    { uint32_t ea = 0x8a4c60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf9a22cu;
    c->r[0] = 0x8a4c6cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1193f5cu;
    { uint32_t ea = 0x8a4c78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1193f50u;
    { uint32_t ea = 0x8a4c84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x119bd84u;
    { uint32_t ea = 0x8a4c90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1193f38u;
    { uint32_t ea = 0x8a4c9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_8a4c9c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4cacu; f_760e90(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = c->r[4];
    c->r[3] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0x8a4cdcu; f_76fde0(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a4cf0u; f_76e6fc(c);
    c->r[10] = c->r[4] + c->r[11];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xb4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a4d24; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[8], 0xffu);
    if (COND_NE) { goto L_8a4d44; }
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4d20u; f_76e530(c);
    goto L_8a4d68;
L_8a4d24:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[8], 0xffu);
    if (COND_NE) { goto L_8a4d8c; }
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4d40u; f_76e530(c);
    goto L_8a4dac;
L_8a4d44:;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4d4cu; f_76e530(c);
    c->r[0] = 0xcu;
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a4d68u; f_76efe0(c);
L_8a4d68:;
    { uint32_t ea = c->r[10] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_NE) { goto L_8a4dd0; }
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4d88u; f_76e530(c);
    goto L_8a4df4;
L_8a4d8c:;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4d94u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x8a4dacu; f_76e6a8(c);
L_8a4dac:;
    { uint32_t ea = c->r[10] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_NE) { goto L_8a4e18; }
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4dccu; f_76e530(c);
    goto L_8a4e38;
L_8a4dd0:;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4dd8u; f_76e530(c);
    c->r[0] = 0xcu;
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a4df4u; f_76efe0(c);
L_8a4df4:;
    { uint32_t ea = c->r[10] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_NE) { goto L_8a4e5c; }
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4e14u; f_76e530(c);
    goto L_8a4e80;
L_8a4e18:;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4e20u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a4e38u; f_76e6a8(c);
L_8a4e38:;
    { uint32_t ea = c->r[10] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_NE) { goto L_8a4ec0; }
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4e58u; f_76e530(c);
    goto L_8a4ee0;
L_8a4e5c:;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4e64u; f_76e530(c);
    c->r[0] = 0xcu;
    c->r[1] = c->r[5];
    c->r[2] = 0x4u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a4e80u; f_76efe0(c);
L_8a4e80:;
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { goto L_8a4eec; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x5u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4ea0u; f_76e530(c);
    c->r[0] = 0xcu;
    c->r[1] = c->r[5];
    c->r[2] = 0x5u;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a4ebcu; f_76efe0(c);
    goto L_8a4f30;
L_8a4ec0:;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4ec8u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x4u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a4ee0u; f_76e6a8(c);
L_8a4ee0:;
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_NE) { goto L_8a4f04; }
L_8a4eec:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x5u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a4f00u; f_76e530(c);
    goto L_8a4f30;
L_8a4f04:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x5u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a4f18u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x5u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x8a4f30u; f_76e6a8(c);
L_8a4f30:;
    { uint32_t ea = c->r[10] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a4f88; }
    c->r[1] = c->r[13] + 0x30u;
    c->r[2] = c->r[13] + 0x2cu;
    c->r[3] = c->r[13] + 0x28u;
    c->r[14] = 0x8a4f4cu; f_751e38(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x47u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4f60u; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x6u;
    c->r[14] = 0x8a4f84u; f_76e7b8(c);
    goto L_8a4fb0;
L_8a4f88:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x9eu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a4f9cu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x6u;
    c->r[14] = 0x8a4fb0u; f_76e808(c);
L_8a4fb0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x6u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a4fc4u; f_76e6fc(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a4fec; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x8a4fe8u; f_75bcdc(c);
    goto L_8a4ff8;
L_8a4fec:;
    c->r[1] = 0x1u;
    c->r[2] = 0x95u;
    c->r[14] = 0x8a4ff8u; f_75bc4c(c);
L_8a4ff8:;
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x7u;
    c->r[14] = 0x8a500cu; f_76e808(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x7u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a5020u; f_76e6fc(c);
    c->r[11] = c->r[11] + 0x18u;
    (void)f_subs(c, c->r[11], 0x78u);
    if (COND_NE) { goto L_8a4c9c; }
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_8a5050; }
    c->r[1] = 0x36u;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a5048u; f_74533c(c);
    c->r[13] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8a5050:;
    c->r[1] = 0x36u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a505cu; f_74533c(c);
    c->r[2] = 0xf99e28u;
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x8a5070u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x8a5074u; f_745af8(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x36u;
    c->r[14] = 0x8a5080u; f_745ac0(c);
    c->r[0] = 0x1193b48u;
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a5090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_8a50c8; }
    c->r[1] = 0xeu;
    c->r[14] = 0x8a50a0u; f_760e90(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x36u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a50b4u; f_76e6fc(c);
    c->r[0] = 0x1193b0cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x3au;
    { uint32_t ea = 0x8a50c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a50f4;
L_8a50c8:;
    c->r[1] = 0x5u;
    c->r[14] = 0x8a50d0u; f_760e90(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x36u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a50e4u; f_76e6fc(c);
    c->r[0] = 0x1193adcu;
    c->r[1] = 0x1u;
    c->r[2] = 0x3bu;
    { uint32_t ea = 0x8a50f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a50f4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a50fcu; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x36u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a5110u; f_76e808(c);
    c->r[13] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a5150(Cpu *restrict c) {
    FN_ENTER(0x8a5150u);
L_8a5150:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1193bb8u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x8a5170u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5174u; f_5a3778(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x35u;
    c->r[2] = 0x1u;
    c->r[6] = 0x1u;
    c->r[14] = 0x8a518cu; f_76e808(c);
    { uint32_t ea = c->r[4] + 0x13cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x38u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a51a4u; f_8a5ae0(c);
    c->r[0] = 0x119b85cu;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a51b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1193a10u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a51c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a51c8u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x38u;
    c->r[2] = 0x2u;
    c->r[7] = 0x2u;
    c->r[14] = 0x8a51e0u; f_76e808(c);
    c->r[0] = 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[1] = 0x39u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a5200u; f_76fb94(c);
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x41u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a521cu; f_76fde0(c);
    c->r[0] = 0x2au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[1] = 0x42u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a523cu; f_76fb94(c);
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x43u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a5258u; f_76fde0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_8a526c(Cpu *restrict c) {
    FN_ENTER(0x8a526cu);
L_8a526c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5284u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a5298u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a52acu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbu;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a52bcu; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xbu;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a52d0u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xbu;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a52e4u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xau;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a52f4u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a5308u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a531cu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x9u;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a532cu; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a5340u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a5354u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a5364u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a5378u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a538cu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a539cu; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a53b0u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a53c4u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xcu;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a53d4u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[2] = 0x3u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a53e8u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a53fcu; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xdu;
    c->r[2] = 0x0u;
    c->r[14] = 0x8a540cu; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_74533c(c);
}
void f_8a5420(Cpu *restrict c) {
    FN_ENTER(0x8a5420u);
L_8a5420:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[4] = c->r[2];
    c->r[7] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x8a5438u; f_8a526c(c);
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a55e4; }
    c->r[1] = 0x119b5a8u;
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x8a5470u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1193758u;
    { uint32_t ea = 0x8a547cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_8a547c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[11] = c->r[4] + (c->r[8] << 5);
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8a54a0; }
    c->r[1] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a55d4; }
L_8a54a0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[7];
    c->r[14] = 0x8a54bcu; f_74533c(c);
    { uint32_t ea = c->r[11] + 0x1du; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a54d0u; f_7464dc(c);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[9] = c->r[4] + c->r[6];
    c->r[0] = c->r[9] + 0x4u;
    c->r[14] = 0x8a54e0u; f_74fa20(c);
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_8a5508; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x8a5504u; f_76e7b8(c);
    goto L_8a5518;
L_8a5508:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a5518u; f_76e808(c);
L_8a5518:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[7];
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x8a5538u; f_76fde0(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = 0x5u;
    c->r[14] = 0x8a554cu; f_8a55f4(c);
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a55c4; }
    c->v.s[0] = LD32(c->r[9] + 24u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_8a55c4; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a557cu; f_76e530(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = 0x4u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a5590u; f_76e530(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xb2u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a55a4u; f_75bc4c(c);
    c->v.s[0] = LD32(c->r[9] + 24u);
    c->r[3] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = 0x4u;
    c->v.df[16] = (double)c->v.f[0];
    ST64(c->r[13], c->v.d[16]);
    c->r[14] = 0x8a55c4u; f_76e7b8(c);
L_8a55c4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x1u;
L_8a55d4:;
    c->r[8] = c->r[8] + 0x1u;
    c->r[6] = c->r[6] + 0x20u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_CC) { goto L_8a547c; }
L_8a55e4:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a55f4(Cpu *restrict c) {
    FN_ENTER(0x8a55f4u);
L_8a55f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_8a5628; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { goto L_8a566c; }
    c->r[0] = 0x11935acu;
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    { uint32_t ea = 0x8a5628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a5638;
L_8a5628:;
    c->r[0] = 0x1193598u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    { uint32_t ea = 0x8a563cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a5638:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5640u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x8a5654u; f_76e808(c);
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_76e530(c);
L_8a566c:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_76e530(c);
}
void f_8a568c(Cpu *restrict c) {
    FN_ENTER(0x8a568cu);
L_8a568c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[6] = c->r[1];
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_8a56e4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_8a5714; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_8a5928; }
    c->r[0] = 0x119371cu;
    { uint32_t ea = 0x8a56c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb13u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x8a56d8u; f_5c6d44(c);
    c->r[7] = c->r[0];
    c->r[4] = c->r[4] + 0x8u;
    goto L_8a5738;
L_8a56e4:;
    c->r[0] = 0x11936ecu;
    c->r[1] = 0xad8u;
    { uint32_t ea = 0x8a56f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1193674u;
    { uint32_t ea = 0x8a570cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5710u; f_475a30(c);
    goto L_8a5734;
L_8a5714:;
    c->r[0] = 0x11936c0u;
    { uint32_t ea = 0x8a5720u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb12u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x8a5734u; f_5c6d44(c);
L_8a5734:;
    c->r[7] = c->r[0];
L_8a5738:;
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x19u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a5748u; f_74533c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x19u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a575cu; f_7464dc(c);
    c->r[0] = 0x1193464u;
    c->r[1] = 0x1u;
    c->r[2] = 0x1au;
    { uint32_t ea = 0x8a5770u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5774u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x514u;
    c->r[1] = 0x19u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x8a5794u; f_76e7b8(c);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_8a5aa4; }
    c->r[0] = (c->r[6] << 3);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a5940; }
    c->r[0] = 0xf996acu;
    c->r[5] = (c->r[6] << 5);
    c->r[11] = 0x0u;
    c->r[9] = 0x0u;
    c->r[8] = 0x8a57ccu + c->r[0];
    c->r[0] = 0x11933fcu;
    { uint32_t ea = 0x8a57d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x119544cu;
    { uint32_t ea = 0x8a57e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x11933e8u;
    { uint32_t ea = 0x8a57ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
L_8a57f0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[0] + c->r[9];
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_8a5908; }
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a5818u; f_74533c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5830u; f_394228(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[3] = c->r[7];
    c->r[14] = 0x8a5854u; f_76e62c(c);
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5868u; f_d84114(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = 0x3u;
    c->r[14] = 0x8a587cu; f_76e808(c);
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x8a5898u; f_76fde0(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a58e0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xaeu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a58b8u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = 0x7u;
    c->r[14] = 0x8a58ccu; f_76e808(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a58e0u; f_76e530(c);
L_8a58e0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = 0x6u;
    c->r[0] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x8a5904u; f_76fde0(c);
    goto L_8a5914;
L_8a5908:;
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x8a5914u; f_74533c(c);
L_8a5914:;
    c->r[9] = c->r[9] + 0x1u;
    c->r[5] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[9], 0x8u);
    if (COND_NE) { goto L_8a57f0; }
    goto L_8a5aa4;
L_8a5928:;
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x19u;
    c->r[2] = 0x0u;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_74533c(c);
L_8a5940:;
    c->r[0] = 0xf99520u;
    c->r[7] = (c->r[6] << 5);
    c->r[8] = 0x0u;
    c->r[4] = 0x0u;
    c->r[11] = 0x8a5958u + c->r[0];
    c->r[0] = 0x1193270u;
    { uint32_t ea = 0x8a5960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11952c0u;
    { uint32_t ea = 0x8a596cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x119325cu;
    { uint32_t ea = 0x8a5978u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
L_8a597c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_8a5a88; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a59a4u; f_74533c(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a59bcu; f_394228(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[3] = c->r[6];
    c->r[14] = 0x8a59e0u; f_76e62c(c);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a59f4u; f_d84114(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[14] = 0x8a5a08u; f_76e808(c);
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[5];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x8a5a24u; f_76fde0(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5a38u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = c->r[5];
    c->r[2] = 0x7u;
    c->r[14] = 0x8a5a4cu; f_76e808(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[5];
    c->r[2] = 0x7u;
    c->r[3] = 0x1u;
    c->r[14] = 0x8a5a60u; f_76e530(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x6u;
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x8a5a84u; f_76fde0(c);
    goto L_8a5a94;
L_8a5a88:;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x8a5a94u; f_74533c(c);
L_8a5a94:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[4], 0x8u);
    if (COND_NE) { goto L_8a597c; }
L_8a5aa4:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a5ae0(Cpu *restrict c) {
    FN_ENTER(0x8a5ae0u);
L_8a5ae0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[3];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a5b1c; }
    c->r[0] = 0x1193218u;
    { uint32_t ea = 0x8a5b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5b14u; f_5ae21c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a5b74; }
L_8a5b1c:;
    c->r[1] = c->r[13] + 0x14u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[13] + 0xcu;
    c->r[0] = c->r[7];
    c->r[14] = 0x8a5b30u; f_751e38(c);
    c->r[0] = 0x1193090u;
    c->r[1] = 0x1u;
    c->r[2] = 0x47u;
    { uint32_t ea = 0x8a5b44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5b48u; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x8a5b6cu; f_76e7b8(c);
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a5b74:;
    c->r[0] = 0x119304cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x9eu;
    { uint32_t ea = 0x8a5b88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5b8cu; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_76e808(c);
}
void f_8a5bb4(Cpu *restrict c) {
    FN_ENTER(0x8a5bb4u);
L_8a5bb4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1au);
    if (COND_HI) { goto L_8a5d54; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8a5be0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8a5c50u: goto L_8a5c50; case 0x8a5c64u: goto L_8a5c64; case 0x8a5c78u: goto L_8a5c78; case 0x8a5cb0u: goto L_8a5cb0; case 0x8a5cc4u: goto L_8a5cc4; case 0x8a5cd8u: goto L_8a5cd8; case 0x8a5cecu: goto L_8a5cec; case 0x8a5d24u: goto L_8a5d24; case 0x8a5d54u: goto L_8a5d54; case 0x8a5d5cu: goto L_8a5d5c; case 0x8a5d70u: goto L_8a5d70; case 0x8a5d84u: goto L_8a5d84; case 0x8a5db8u: goto L_8a5db8; case 0x8a5de8u: goto L_8a5de8; case 0x8a5e20u: goto L_8a5e20; case 0x8a5e68u: goto L_8a5e68; case 0x8a5f50u: goto L_8a5f50; case 0x8a5f94u: goto L_8a5f94; case 0x8a5fa8u: goto L_8a5fa8; case 0x8a5fbcu: goto L_8a5fbc; case 0x8a5fe8u: goto L_8a5fe8; case 0x8a601cu: goto L_8a601c; case 0x8a6030u: goto L_8a6030; case 0x8a6068u: goto L_8a6068; case 0x8a607cu: goto L_8a607c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a5c50:;
    c->r[0] = 0x1192f70u;
    c->r[1] = 0x1u;
    c->r[2] = 0x58u;
    { uint32_t ea = 0x8a5c64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5c64:;
    c->r[0] = 0x1192f5cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x5au;
    { uint32_t ea = 0x8a5c78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5c78:;
    c->r[0] = 0x1192f48u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5bu;
    { uint32_t ea = 0x8a5c8cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5c90u; f_75bcdc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x119ad84u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a5ca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    goto L_8a6120;
L_8a5cb0:;
    c->r[0] = 0x1192f10u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5cu;
    { uint32_t ea = 0x8a5cc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5cc4:;
    c->r[0] = 0x1192efcu;
    c->r[1] = 0x1u;
    c->r[2] = 0x5du;
    { uint32_t ea = 0x8a5cd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5cd8:;
    c->r[0] = 0x1192ee8u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5fu;
    { uint32_t ea = 0x8a5cecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5cec:;
    c->r[0] = 0x1192ed4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x5eu;
    { uint32_t ea = 0x8a5d00u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5d04u; f_75bcdc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x119ad0cu;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a5d18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    goto L_8a6120;
L_8a5d24:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_EQ) { goto L_8a6090; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { goto L_8a60a4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a5d54; }
    c->r[0] = 0x1192e80u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb3u;
    { uint32_t ea = 0x8a5d54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5d54:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a5d5c:;
    c->r[0] = 0x1192e64u;
    c->r[1] = 0x1u;
    c->r[2] = 0x62u;
    { uint32_t ea = 0x8a5d70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5d70:;
    c->r[0] = 0x1192e50u;
    c->r[1] = 0x1u;
    c->r[2] = 0x63u;
    { uint32_t ea = 0x8a5d84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5d84:;
    c->r[0] = 0x1192e3cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x64u;
    { uint32_t ea = 0x8a5d98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5d9cu; f_75bcdc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x1192e0cu;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a5db0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5db4u; f_464784(c);
    goto L_8a6124;
L_8a5db8:;
    c->r[0] = 0x1192e08u;
    c->r[1] = 0x1u;
    c->r[2] = 0x65u;
    { uint32_t ea = 0x8a5dccu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5dd0u; f_75bcdc(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x8du;
    c->r[14] = 0x8a5de4u; f_75bcdc(c);
    goto L_8a5f7c;
L_8a5de8:;
    c->r[0] = 0x1192dd8u;
    c->r[1] = 0x1u;
    c->r[2] = 0x66u;
    { uint32_t ea = 0x8a5dfcu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5e00u; f_75bcdc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x119ac0cu;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a5e14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    goto L_8a6120;
L_8a5e20:;
    c->r[0] = 0x1192da0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x9du;
    { uint32_t ea = 0x8a5e34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5e38u; f_75bcdc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[1] = 0xau; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[4];
    if (COND_EQ) { c->r[1] = 0x5u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2cu;
    goto L_8a6138;
L_8a5e68:;
    c->r[0] = 0x1192d58u;
    c->r[1] = 0x1u;
    c->r[2] = 0x67u;
    { uint32_t ea = 0x8a5e7cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5e80u; f_75bcdc(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] - 0x3u;
    (void)f_subs(c, c->r[1], 0x26u);
    if (COND_HI) { goto L_8a611c; }
    c->r[1] = (c->r[1] << 2);
    c->r[3] = 0x8a5ea8u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x8a5f48u: goto L_8a5f48; case 0x8a60d8u: goto L_8a60d8; case 0x8a60e0u: goto L_8a60e0; case 0x8a60e8u: goto L_8a60e8; case 0x8a60f0u: goto L_8a60f0; case 0x8a60f8u: goto L_8a60f8; case 0x8a6100u: goto L_8a6100; case 0x8a6108u: goto L_8a6108; case 0x8a610cu: goto L_8a610c; case 0x8a611cu: goto L_8a611c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a5f48:;
    c->r[2] = 0x1u;
    goto L_8a610c;
L_8a5f50:;
    c->r[0] = 0x1192c70u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6au;
    { uint32_t ea = 0x8a5f64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5f68u; f_75bcdc(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x1192c44u;
    { uint32_t ea = 0x8a5f78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5f7cu; f_45e378(c);
L_8a5f7c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x2cu;
    c->r[2] = 0x1u;
    c->r[3] = c->r[5];
    goto L_8a6138;
L_8a5f94:;
    c->r[0] = 0x1192c2cu;
    c->r[1] = 0x1u;
    c->r[2] = 0x6bu;
    { uint32_t ea = 0x8a5fa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5fa8:;
    c->r[0] = 0x1192c18u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb7u;
    { uint32_t ea = 0x8a5fbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a5fbc:;
    c->r[0] = 0x1192c04u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6eu;
    { uint32_t ea = 0x8a5fd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a5fd4u; f_75bcdc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x1192df8u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a5fe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a6010;
L_8a5fe8:;
    c->r[0] = 0x1192bd8u;
    c->r[1] = 0x1u;
    c->r[2] = 0x6fu;
    { uint32_t ea = 0x8a5ffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6000u; f_75bcdc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x1192dccu;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a6014u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a6010:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6018u; f_5c6104(c);
    goto L_8a6124;
L_8a601c:;
    c->r[0] = 0x1192ba4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x61u;
    { uint32_t ea = 0x8a6030u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a6030:;
    c->r[0] = 0x1192b90u;
    c->r[1] = 0x1u;
    c->r[2] = 0x68u;
    { uint32_t ea = 0x8a6044u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6048u; f_75bcdc(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x119a9c0u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a605cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    goto L_8a6120;
L_8a6068:;
    c->r[0] = 0x1192b58u;
    c->r[1] = 0x1u;
    c->r[2] = 0x69u;
    { uint32_t ea = 0x8a607cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a607c:;
    c->r[0] = 0x1192b44u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb6u;
    { uint32_t ea = 0x8a6090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a6090:;
    c->r[0] = 0x1192b30u;
    c->r[1] = 0x1u;
    c->r[2] = 0xb5u;
    { uint32_t ea = 0x8a60a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a60b4;
L_8a60a4:;
    c->r[0] = 0x1192b1cu;
    c->r[1] = 0x1u;
    c->r[2] = 0xb4u;
    { uint32_t ea = 0x8a60b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a60b4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a60bcu; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x2cu;
    c->r[2] = 0x1u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_76e808(c);
L_8a60d8:;
    c->r[2] = 0x2u;
    goto L_8a610c;
L_8a60e0:;
    c->r[2] = 0x3u;
    goto L_8a610c;
L_8a60e8:;
    c->r[2] = 0x4u;
    goto L_8a610c;
L_8a60f0:;
    c->r[2] = 0x5u;
    goto L_8a610c;
L_8a60f8:;
    c->r[2] = 0x6u;
    goto L_8a610c;
L_8a6100:;
    c->r[2] = 0x7u;
    goto L_8a610c;
L_8a6108:;
    c->r[2] = 0x8u;
L_8a610c:;
    c->r[1] = 0x11967c4u;
    { uint32_t ea = 0x8a6118u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
L_8a611c:;
    c->r[1] = 0x2u;
L_8a6120:;
    c->r[14] = 0x8a6124u; f_75bcdc(c);
L_8a6124:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x2cu;
    c->r[2] = 0x1u;
    c->r[3] = c->r[6];
L_8a6138:;
    c->r[14] = 0x8a613cu; f_76e7b8(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_8a61d0(Cpu *restrict c) {
    FN_ENTER(0x8a61d0u);
L_8a61d0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x21cu;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x17u);
    if (COND_EQ) { goto L_8a6208; }
    (void)f_subs(c, c->r[1], 0x16u);
    if (COND_EQ) { goto L_8a6210; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_NE) { goto L_8a6228; }
    c->r[2] = 0x60u;
    goto L_8a6214;
L_8a6208:;
    c->r[2] = 0x6du;
    goto L_8a6214;
L_8a6210:;
    c->r[2] = 0x6cu;
L_8a6214:;
    c->r[0] = 0x11929b0u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x8a6224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6228u; f_75bcdc(c);
L_8a6228:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1cu;
    c->r[1] = 0x1ffu;
    c->r[0] = c->r[0] + 0x1u;
    c->r[14] = 0x8a623cu; f_15efdac(c);
    c->r[0] = 0xau;
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_8a63d0; }
    c->r[0] = 0x1192958u;
    c->r[7] = c->r[13] + 0x1cu;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x8a6264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1195f14u;
    { uint32_t ea = 0x8a6270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1192958u;
    { uint32_t ea = 0x8a627cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xec45ccu;
    c->r[0] = 0x8a6288u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1192928u;
    { uint32_t ea = 0x8a6294u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1195ee4u;
    { uint32_t ea = 0x8a629cu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1192924u;
    { uint32_t ea = 0x8a62a4u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1198504u;
    { uint32_t ea = 0x8a62acu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_8a62dc;
L_8a62ac:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0xeu;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a62c4u; f_75bc4c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = 0x200u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a62d8u; f_15eff2c(c);
    goto L_8a63c0;
L_8a62dc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x17u);
    if (COND_EQ) { goto L_8a6314; }
    (void)f_subs(c, c->r[0], 0x16u);
    if (COND_EQ) { goto L_8a6334; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { goto L_8a63b4; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[14] = 0x8a6304u; f_6cf2d0(c);
    c->r[0] = c->r[0] + 0x4u;
    c->r[1] = 0x2u;
    c->r[2] = c->r[8];
    goto L_8a6348;
L_8a6314:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6324u; f_45d43c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[1] = 0x1u;
    goto L_8a6348;
L_8a6334:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a633cu; f_460ebc(c);
    c->r[0] = c->r[0] + 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = c->r[9];
L_8a6348:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = sh_lsl(c->r[0], c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6358u; f_d84114(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_8a63b4; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_8a62ac; }
    c->r[0] = c->r[7];
    c->r[14] = 0x8a6374u; f_15efd88(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 9));
    if (COND_NE) { goto L_8a6390; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x200u - c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x8a6390u; f_15eff98(c);
L_8a6390:;
    c->r[0] = c->r[7];
    c->r[14] = 0x8a6398u; f_15efd88(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 9));
    if (COND_NE) { goto L_8a63b4; }
    c->r[2] = 0x200u - c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x8a63b4u; f_15eff98(c);
L_8a63b4:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_HI) { goto L_8a63d0; }
L_8a63c0:;
    c->r[0] = c->r[5] + (c->r[4] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_8a62dc; }
L_8a63d0:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    c->r[2] = c->r[13] + 0x1cu;
    (void)f_adds(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[3] = 0x1u; }
    c->r[14] = 0x8a63f0u; f_8a641c(c);
    c->r[13] = c->r[13] + 0x21cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a641c(Cpu *restrict c) {
    FN_ENTER(0x8a641cu);
L_8a641c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[1];
    c->r[1] = 0xfu;
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    c->r[5] = c->r[0];
    c->r[14] = 0x8a6438u; f_76e61c(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_8a6454; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2bu;
    c->r[2] = 0x1u;
    c->r[3] = c->r[7];
    c->r[14] = 0x8a6454u; f_76e808(c);
L_8a6454:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_8a6470; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2bu;
    c->r[2] = 0x2u;
    c->r[3] = c->r[6];
    c->r[14] = 0x8a6470u; f_76e808(c);
L_8a6470:;
    c->r[0] = 0x1192750u;
    c->r[1] = 0x1u;
    c->r[2] = 0x59u;
    { uint32_t ea = 0x8a6484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6488u; f_75bcdc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x2bu;
    c->r[2] = 0x3u;
    c->r[14] = 0x8a649cu; f_76e808(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x2bu;
    c->r[2] = 0x3u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_76e530(c);
}
void f_8a64b8(Cpu *restrict c) {
    FN_ENTER(0x8a64b8u);
L_8a64b8:;
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); } }
    return;
}
void f_8a64cc(Cpu *restrict c) {
    FN_ENTER(0x8a64ccu);
L_8a64cc:;
    c->r[0] = 0x11928fcu;
    { uint32_t ea = 0x8a64d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a64dc(Cpu *restrict c) {
    FN_ENTER(0x8a64dcu);
L_8a64dc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[9] = c->r[0];
    c->r[8] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_8a65b4; }
    c->r[0] = 0x1192654u;
    { uint32_t ea = 0x8a6508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6508u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[8] << 5);
    c->pc = c->r[3]; c->r[14] = 0x8a651cu; rt_dispatch(c);
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_8a66e0; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a65f0; }
    c->r[1] = 0x119287cu;
    c->r[2] = 0x1198be0u;
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x8a654cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8a6550u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    c->r[2] = c->r[2] + 0x8u;
L_8a6554:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[11] + (c->r[3] << 5);
    c->r[6] = c->r[11];
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[1]); c->r[6] = ea; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_CC) { goto L_8a6554; }
    goto L_8a65f4;
L_8a65b4:;
    if (COND_LS) { goto L_8a66e4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = c->r[4] + (c->r[8] << 5);
    if (COND_NE) { c->r[4] = c->r[4] + (c->r[1] << 5); }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_8a66e0; }
L_8a65d0:;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x20u; c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x8a65e0u; rt_dispatch(c);
    (void)f_subs(c, c->r[4], c->r[5]);
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_8a65d0; }
    goto L_8a66e0;
L_8a65f0:;
    c->r[4] = 0x0u;
L_8a65f4:;
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_CS) { goto L_8a6668; }
    c->r[1] = c->r[11] + (c->r[4] << 5);
    c->r[7] = 0x11927a4u;
    c->r[0] = c->r[8] - c->r[4];
    c->r[4] = 0x1198b10u;
    c->r[2] = c->r[10] + 0x10u;
    c->r[3] = c->r[10] + 0x8u;
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = 0x8a6620u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x8a6624u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = c->r[7] + 0x8u;
    c->r[4] = c->r[4] + 0x8u;
L_8a6628:;
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[4]); }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] + 0x20u;
    if (COND_NE) { goto L_8a6628; }
L_8a6668:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_8a6688; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[7] + (c->r[0] << 5);
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_NE) { goto L_8a6694; }
    goto L_8a66b8;
L_8a6688:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_8a66b8; }
L_8a6694:;
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x20u; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x8a66a8u; rt_dispatch(c);
    (void)f_subs(c, c->r[4], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_NE) { goto L_8a6694; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[7] = v; }
L_8a66b8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_8a66dc; }
    c->r[0] = 0x1192490u;
    { uint32_t ea = 0x8a66ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a66ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x8a66dcu; rt_dispatch(c);
L_8a66dc:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[11]); }
L_8a66e0:;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[8]); }
L_8a66e4:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a6704(Cpu *restrict c) {
    FN_ENTER(0x8a6704u);
L_8a6704:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fc27cu;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a6724u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
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
    c->r[14] = 0x8a676cu; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a6784u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a679cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a67e4(Cpu *restrict c) {
    FN_ENTER(0x8a67e4u);
L_8a67e4:;
    c->r[1] = 0x119a238u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a67f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    return;
}
void f_8a6804(Cpu *restrict c) {
    FN_ENTER(0x8a6804u);
L_8a6804:;
    return;
}
void f_8a6808(Cpu *restrict c) {
    FN_ENTER(0x8a6808u);
L_8a6808:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_8a680c(Cpu *restrict c) {
    FN_ENTER(0x8a680cu);
L_8a680c:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10d4fccu;
    c->r[1] = 0x8a681cu + c->r[1];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    return;
}
void f_8a6828(Cpu *restrict c) {
    FN_ENTER(0x8a6828u);
L_8a6828:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10d5270u;
    c->r[1] = 0x8a6838u + c->r[1];
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    return;
}
void f_8a6844(Cpu *restrict c) {
    FN_ENTER(0x8a6844u);
L_8a6844:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[6] = 0x0u;
    c->r[4] = c->r[0];
    c->r[1] = 0x6u;
    c->r[2] = 0x2au;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6868u; f_8a689c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a687c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_8a687c:;
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[14] = 0x8a6884u; f_8a6a74(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a689c(Cpu *restrict c) {
    FN_ENTER(0x8a689cu);
L_8a689c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[8] = c->r[0];
    c->r[9] = c->r[2];
    c->r[7] = c->r[1];
    c->r[5] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a6924; }
    c->r[4] = 0x0u;
    c->r[6] = c->r[8];
L_8a68cc:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[14] = 0x8a68d4u; f_9c95b8(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_8a68f0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8a6918; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x30u;
    goto L_8a690c;
L_8a68f0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xefu);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0xbcu); }
    if (COND_NE) { goto L_8a6918; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x70u;
L_8a690c:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0xau);
    if (COND_CC) { c->r[4] = c->r[4] + 0x1u; }
L_8a6918:;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a68cc; }
L_8a6924:;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_CC) { goto L_8a6a68; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a6a68; }
    c->r[10] = 0x0u;
    c->r[11] = c->r[8];
L_8a6944:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[14] = 0x8a694cu; f_9c95b8(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_8a6984; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[12] = c->r[0];
    if (COND_NE) { goto L_8a69c4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[12] = 0x1u;
    c->r[1] = c->r[1] - 0x30u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_8a69c4; }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[9]); }
    c->r[12] = 0x1u;
    goto L_8a6a48;
L_8a6984:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[12] = 0x3u;
    (void)f_subs(c, c->r[2], 0xefu);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], 0xbcu); }
    if (COND_NE) { goto L_8a69c4; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x70u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[2], 0x9u);
    if (COND_HI) { goto L_8a69c4; }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x1u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x2u; ST8(ea, c->r[10]); }
    c->r[12] = 0x1u;
    goto L_8a6a48;
L_8a69c4:;
    (void)f_subs(c, c->r[11], c->r[8]);
    if (COND_EQ) { goto L_8a6a48; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_8a6a44; }
    { uint32_t r = c->r[12] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[2] = c->r[12] - 0x1u;
    c->r[6] = 0x0u;
    if (COND_EQ) { goto L_8a69f8; }
L_8a69e4:;
    { uint32_t ea = c->r[8] + c->r[6]; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + c->r[6]; ST8(ea, c->r[4]); }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_NE) { goto L_8a69e4; }
L_8a69f8:;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_CC) { goto L_8a6a44; }
    c->r[2] = c->r[8] + c->r[6];
    c->r[3] = c->r[11] + c->r[6];
    c->r[6] = c->r[6] - c->r[12];
    c->r[4] = 0x0u;
L_8a6a10:;
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[3] + c->r[4]; ST8(ea, c->r[1]); }
    c->r[1] = c->r[3] + c->r[4];
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[7]); }
    c->r[1] = f_adds(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_8a6a10; }
L_8a6a44:;
    { uint32_t ea = c->r[11] + c->r[12]; ST8(ea, c->r[10]); }
L_8a6a48:;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[11] = c->r[11] + c->r[12];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a6944; }
    (void)f_subs(c, c->r[11], c->r[8]);
    c->r[5] = 0x1u;
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); } }
L_8a6a68:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a6a74(Cpu *restrict c) {
    FN_ENTER(0x8a6a74u);
L_8a6a74:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_8a6be0; }
    c->r[7] = 0x0u;
    c->r[11] = 0x2au;
    c->r[10] = c->r[2];
    c->r[6] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_8a6aa0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a6bc8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8a6bb4; }
L_8a6ac0:;
    c->r[2] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_8a6af0; }
    c->r[0] = 0x1u;
L_8a6ad4:;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_8a6b00; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_8a6ad4; }
L_8a6af0:;
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a6ac0; }
    goto L_8a6bc4;
L_8a6b00:;
    c->r[9] = 0x0u;
L_8a6b04:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[14] = 0x8a6b0cu; f_9c95b8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_8a6b50; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[4]; ST8(ea, c->r[11]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8a6b50; }
L_8a6b2c:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    if (COND_EQ) { c->r[2] = 0x2au; }
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[2]); c->r[3] = ea; }
    c->r[1] = c->r[1] + 0x2u;
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[7]); }
    if (COND_NE) { goto L_8a6b2c; }
L_8a6b50:;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[8] = ea; c->r[5] = v; }
    c->r[0] = c->r[9] + c->r[0];
    c->r[4] = c->r[4] + 0x1u;
    c->r[9] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_8a6b04; }
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a6b90; }
    c->r[2] = c->r[4];
L_8a6b7c:;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8a6b7c; }
L_8a6b90:;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[7]); }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a6bc4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_8a6ac0; }
L_8a6bb4:;
    c->r[0] = c->r[4] + 0x1u;
L_8a6bb8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8a6bb8; }
L_8a6bc4:;
    { uint32_t ea = c->r[13]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
L_8a6bc8:;
    c->r[3] = c->r[3] + 0x1u;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[10] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[10] = ea; c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_8a6aa0; }
    goto L_8a6be4;
L_8a6be0:;
    c->r[6] = 0x0u;
L_8a6be4:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a6bf0(Cpu *restrict c) {
    FN_ENTER(0x8a6bf0u);
L_8a6bf0:;
    __attribute__((musttail)) return f_20152c(c);
}
void f_8a6bf4(Cpu *restrict c) {
    FN_ENTER(0x8a6bf4u);
L_8a6bf4:;
    __attribute__((musttail)) return f_201530(c);
}
void f_8a6bf8(Cpu *restrict c) {
    FN_ENTER(0x8a6bf8u);
L_8a6bf8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x8a6c08u; f_201534(c);
    c->r[0] = 0x70u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a6c14u; f_b6b874(c);
    c->r[5] = c->r[0];
    c->r[0] = 0xec61c5u;
    c->r[1] = 0x8a6c24u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x8a6c28u; f_b6b8b0(c);
    c->r[0] = 0x11920e8u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    c->r[6] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = c->r[5];
    { uint32_t ea = 0x8a6c44u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a6c50u; f_e067ec(c);
    c->r[0] = 0x119212cu;
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a6c64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6c68u; f_218600(c);
    c->r[0] = 0x3e0u;
    c->r[1] = 0x10u;
    c->r[14] = 0x8a6c74u; f_b28dd0(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x8a6c7cu; f_b28e10(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x8a6c94u; f_e067ec(c);
    c->r[0] = 0x1191f34u;
    { uint32_t ea = 0x8a6ca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6ca4u; f_75b430(c);
    c->r[0] = 0x1192218u;
    { uint32_t ea = 0x8a6cb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6cb4u; f_2402d8(c);
    c->r[14] = 0x8a6cb8u; f_8a6cf8(c);
    c->r[0] = 0xcu;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1191f04u;
    { uint32_t ea = 0x8a6cd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_75ee80(c);
}
void f_8a6cf8(Cpu *restrict c) {
    FN_ENTER(0x8a6cf8u);
L_8a6cf8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x11922b8u;
    { uint32_t ea = 0x8a6d08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d0cu; f_7068b0(c);
    c->r[0] = 0x1191f58u;
    { uint32_t ea = 0x8a6d18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d1cu; f_6fda4c(c);
    c->r[0] = 0x1192038u;
    { uint32_t ea = 0x8a6d28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d2cu; f_34c410(c);
    c->r[0] = 0x1192048u;
    { uint32_t ea = 0x8a6d38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d3cu; f_474514(c);
    c->r[0] = 0x1191e74u;
    { uint32_t ea = 0x8a6d48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d4cu; f_457b60(c);
    c->r[0] = 0x1191e6cu;
    { uint32_t ea = 0x8a6d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d5cu; f_6d02ec(c);
    c->r[0] = 0x119202cu;
    { uint32_t ea = 0x8a6d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d6cu; f_51a400(c);
    c->r[0] = 0x1192004u;
    { uint32_t ea = 0x8a6d78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d7cu; f_42808c(c);
    c->r[0] = 0x1195228u;
    { uint32_t ea = 0x8a6d88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d8cu; f_5ea4c4(c);
    c->r[0] = 0x1193ac0u;
    { uint32_t ea = 0x8a6d98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6d9cu; f_3c8a48(c);
    c->r[0] = 0x1191fdcu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a6dacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6db0u; f_721d4c(c);
    c->r[0] = 0x1191e1cu;
    { uint32_t ea = 0x8a6dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6dc0u; f_75db48(c);
    c->r[0] = 0x1191e04u;
    { uint32_t ea = 0x8a6dccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6dd0u; f_39412c(c);
    c->r[0] = 0x1191fbcu;
    { uint32_t ea = 0x8a6ddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6de0u; f_391474(c);
    c->r[0] = 0x11923d8u;
    { uint32_t ea = 0x8a6decu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_3a48e8(c);
}
void f_8a6e34(Cpu *restrict c) {
    FN_ENTER(0x8a6e34u);
L_8a6e34:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1191d8cu;
    c->v.s[0] = 0x3f800000u;
    c->r[3] = 0x0u;
    c->r[4] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x8a6e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1191d54u;
    { uint32_t ea = 0x8a6e60u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x25u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x26u; ST8(ea, c->r[2]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8a6e84u; f_5f856c(c);
    c->r[0] = 0x1191d44u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a6e94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6e98u; f_7610d0(c);
    c->r[1] = 0x1192118u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x8a6ea8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x474u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4du; ST8(ea, c->r[5]); }
    c->r[0] = 0x1191ce8u;
    { uint32_t ea = 0x8a6ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6ec4u; f_212750(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a6edc; }
    c->r[0] = 0x1191cccu;
    { uint32_t ea = 0x8a6edcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a6f00;
L_8a6edc:;
    c->r[0] = 0x1191cccu;
    { uint32_t ea = 0x8a6ee8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4du; ST8(ea, c->r[5]); }
    c->r[0] = 0x11920b0u;
    { uint32_t ea = 0x8a6efcu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1191ca4u;
    { uint32_t ea = 0x8a6f04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a6f00:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_212710(c);
}
void f_8a6f30(Cpu *restrict c) {
    FN_ENTER(0x8a6f30u);
L_8a6f30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a6f5c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); } }
L_8a6f5c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_8a6f84; }
    c->r[0] = 0x1191c60u;
    { uint32_t ea = 0x8a6f78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a6f7cu; f_75f18c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[14] = 0x8a6f84u; f_8a6e34(c); }
L_8a6f84:;
    c->r[0] = 0x1192388u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a6f94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x8a6f9cu; f_dad28c(c);
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[2] = 0xb50u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[5]; c->r[0] = r; }
    c->r[2] = 0x3du;
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = ~c->r[3];
    c->r[2] = c->r[2] & (c->r[0] >> 10);
    c->r[0] = c->r[0] & 0xffff03ffu;
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x300u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = c->r[3] & 0x2u; }
    if (COND_EQ) { c->r[2] = c->r[2] | c->r[3]; }
    c->r[0] = c->r[0] | (c->r[2] << 10);
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a6fe8(Cpu *restrict c) {
    FN_ENTER(0x8a6fe8u);
L_8a6fe8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fb9f8u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a7008u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a7050u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a7068u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a7080u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[4] + 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x42u; ST16(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x4cu;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0xc8u;
    c->r[1] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
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
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7130(Cpu *restrict c) {
    FN_ENTER(0x8a7130u);
L_8a7130:;
    c->r[1] = 0x11998f4u;
    { uint32_t ea = 0x8a713cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    return;
}
void f_8a7184(Cpu *restrict c) {
    FN_ENTER(0x8a7184u);
L_8a7184:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    return;
}
void f_8a71c0(Cpu *restrict c) {
    FN_ENTER(0x8a71c0u);
L_8a71c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x119985cu;
    { uint32_t ea = 0x8a71d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a71f0; }
    c->r[14] = 0x8a71e8u; f_9af3e4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
L_8a71f0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a71fc(Cpu *restrict c) {
    FN_ENTER(0x8a71fcu);
L_8a71fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1199820u;
    { uint32_t ea = 0x8a7210u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a722c; }
    c->r[14] = 0x8a7224u; f_9af3e4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
L_8a722c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_2098a0(c);
}
void f_8a723c(Cpu *restrict c) {
    FN_ENTER(0x8a723cu);
L_8a723c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[12] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[5] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7284(Cpu *restrict c) {
    FN_ENTER(0x8a7284u);
L_8a7284:;
    c->r[0] = 0x1191b98u;
    { uint32_t ea = 0x8a7290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a7294(Cpu *restrict c) {
    FN_ENTER(0x8a7294u);
L_8a7294:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fb7ccu;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a72b4u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a72fcu; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a7314u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a732cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7350(Cpu *restrict c) {
    FN_ENTER(0x8a7350u);
L_8a7350:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11996ccu;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x8a7368u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x44u; }
    c->r[0] = c->r[4] + 0x14u;
    c->r[14] = 0x8a7374u; f_8a7130(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x8a737cu; f_8a7130(c);
    c->r[0] = c->r[4] + 0x74u;
    c->r[14] = 0x8a7384u; f_8a7130(c);
    c->r[0] = c->r[4] + 0xa4u;
    c->r[14] = 0x8a738cu; f_8a7130(c);
    c->r[0] = c->r[4] + 0xd4u;
    c->r[14] = 0x8a7394u; f_8a7130(c);
    c->r[0] = c->r[4] + 0x104u;
    c->r[14] = 0x8a739cu; f_8a7130(c);
    c->r[0] = c->r[4] + 0x134u;
    c->r[14] = 0x8a73a4u; f_8a7130(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x8a73b4u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a73c0(Cpu *restrict c) {
    FN_ENTER(0x8a73c0u);
L_8a73c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1199660u;
    { uint32_t ea = 0x8a73d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x134u; }
    c->r[14] = 0x8a73e0u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x104u;
    c->r[14] = 0x8a73e8u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0xd4u;
    c->r[14] = 0x8a73f0u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0xa4u;
    c->r[14] = 0x8a73f8u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x74u;
    c->r[14] = 0x8a7400u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x44u;
    c->r[14] = 0x8a7408u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x14u;
    c->r[14] = 0x8a7410u; f_8a71c0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a741c(Cpu *restrict c) {
    FN_ENTER(0x8a741cu);
L_8a741c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1199604u;
    { uint32_t ea = 0x8a7430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x134u; }
    c->r[14] = 0x8a743cu; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x104u;
    c->r[14] = 0x8a7444u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0xd4u;
    c->r[14] = 0x8a744cu; f_8a71c0(c);
    c->r[0] = c->r[4] + 0xa4u;
    c->r[14] = 0x8a7454u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x74u;
    c->r[14] = 0x8a745cu; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x44u;
    c->r[14] = 0x8a7464u; f_8a71c0(c);
    c->r[0] = c->r[4] + 0x14u;
    c->r[14] = 0x8a746cu; f_8a71c0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_209904(c);
}
void f_8a747c(Cpu *restrict c) {
    FN_ENTER(0x8a747cu);
L_8a747c:;
    return;
}
void f_8a7480(Cpu *restrict c) {
    FN_ENTER(0x8a7480u);
L_8a7480:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11995a0u;
    c->r[1] = 0x39eu;
    { uint32_t ea = 0x8a7498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x8a74a4u; f_15efd7c(c);
    c->r[0] = 0xffu;
    c->r[1] = 0x3a2u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3b4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3a4u;
    { uint32_t ea = c->r[4] + 0x3b5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3a6u;
    { uint32_t ea = c->r[4] + 0x3b6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3a8u;
    { uint32_t ea = c->r[4] + 0x3b7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3aau;
    { uint32_t ea = c->r[4] + 0x3b8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3acu;
    { uint32_t ea = c->r[4] + 0x3b9u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3aeu;
    { uint32_t ea = c->r[4] + 0x3bau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3b0u;
    { uint32_t ea = c->r[4] + 0x3bbu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x3b2u;
    { uint32_t ea = c->r[4] + 0x3bcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x3bdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a7528(Cpu *restrict c) {
    FN_ENTER(0x8a7528u);
L_8a7528:;
    return;
}
void f_8a752c(Cpu *restrict c) {
    FN_ENTER(0x8a752cu);
L_8a752c:;
    __attribute__((musttail)) return f_209a30(c);
}
void f_8a7530(Cpu *restrict c) {
    FN_ENTER(0x8a7530u);
L_8a7530:;
    c->r[1] = 0x1199500u;
    { uint32_t ea = 0x8a753cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_8a7558(Cpu *restrict c) {
    FN_ENTER(0x8a7558u);
L_8a7558:;
    return;
}
void f_8a755c(Cpu *restrict c) {
    FN_ENTER(0x8a755cu);
L_8a755c:;
    __attribute__((musttail)) return f_209968(c);
}
void f_8a7560(Cpu *restrict c) {
    FN_ENTER(0x8a7560u);
L_8a7560:;
    c->r[1] = 0x11994d4u;
    { uint32_t ea = 0x8a756cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    return;
}
void f_8a7580(Cpu *restrict c) {
    FN_ENTER(0x8a7580u);
L_8a7580:;
    return;
}
void f_8a7584(Cpu *restrict c) {
    FN_ENTER(0x8a7584u);
L_8a7584:;
    __attribute__((musttail)) return f_2099cc(c);
}
void f_8a7588(Cpu *restrict c) {
    FN_ENTER(0x8a7588u);
L_8a7588:;
    c->r[0] = 0x1191898u;
    { uint32_t ea = 0x8a7594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a7598(Cpu *restrict c) {
    FN_ENTER(0x8a7598u);
L_8a7598:;
    c->r[0] = 0x1191894u;
    { uint32_t ea = 0x8a75a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a75a8(Cpu *restrict c) {
    FN_ENTER(0x8a75a8u);
L_8a75a8:;
    c->r[0] = 0x119187cu;
    { uint32_t ea = 0x8a75b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a75b8(Cpu *restrict c) {
    FN_ENTER(0x8a75b8u);
L_8a75b8:;
    c->r[0] = 0x1191870u;
    { uint32_t ea = 0x8a75c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a75c8(Cpu *restrict c) {
    FN_ENTER(0x8a75c8u);
L_8a75c8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fb4d8u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a75e8u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a7630u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a7648u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a7660u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7684(Cpu *restrict c) {
    FN_ENTER(0x8a7684u);
L_8a7684:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x8a7690u; f_8a7350(c);
    c->r[0] = 0x11993a4u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x8a76a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x164u; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a76acu; f_8a747c(c);
    c->r[0] = c->r[5];
    c->r[1] = 0xe0u;
    c->r[14] = 0x8a76b8u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a76c4(Cpu *restrict c) {
    FN_ENTER(0x8a76c4u);
L_8a76c4:;
    __attribute__((musttail)) return f_8a73c0(c);
}
void f_8a76c8(Cpu *restrict c) {
    FN_ENTER(0x8a76c8u);
L_8a76c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x8a76d0u; f_8a73c0(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_209a94(c);
}
void f_8a76d8(Cpu *restrict c) {
    FN_ENTER(0x8a76d8u);
L_8a76d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x8a76e4u; f_8a747c(c);
    c->r[0] = c->r[4] + 0x164u;
    c->r[1] = 0xe0u;
    c->r[14] = 0x8a76f0u; f_15efd7c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a76f4(Cpu *restrict c) {
    FN_ENTER(0x8a76f4u);
L_8a76f4:;
    c->r[0] = 0x119173cu;
    { uint32_t ea = 0x8a7700u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a7704(Cpu *restrict c) {
    FN_ENTER(0x8a7704u);
L_8a7704:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fb3dcu;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a7724u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a776cu; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a7784u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a779cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a77c0(Cpu *restrict c) {
    FN_ENTER(0x8a77c0u);
L_8a77c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1199270u;
    { uint32_t ea = 0x8a77d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[14] = 0x8a77e8u; f_8a8180(c);
    c->r[0] = c->r[4] + 0x30u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[14] = 0x8a77f4u; f_8a8180(c);
    c->r[0] = c->r[4] + 0x48u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x8a7800u; f_8a8180(c);
    c->r[0] = c->r[4] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[14] = 0x8a780cu; f_8a8180(c);
    c->r[6] = c->r[4] + 0x78u;
    c->r[0] = c->r[6];
    c->r[14] = 0x8a7818u; f_8a8240(c);
    c->r[7] = c->r[4] + 0x90u;
    c->r[0] = c->r[7];
    c->r[14] = 0x8a7824u; f_8a800c(c);
    c->r[5] = c->r[4] + 0xb0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x8a7830u; f_8a800c(c);
    c->r[8] = c->r[4] + 0xd0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x8a783cu; f_8a800c(c);
    c->r[9] = c->r[4] + 0xf0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x8a7848u; f_8a800c(c);
    c->r[10] = c->r[4] + 0x110u;
    c->r[0] = c->r[10];
    c->r[14] = 0x8a7854u; f_8a800c(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[11] = c->r[4];
    { uint32_t ea = c->r[1] + 0x144u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x140u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x13cu; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x138u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x134u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = 0x210u;
    { uint32_t ea = c->r[4] + 0x145u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x141u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x139u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x135u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x131u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x130u; ST8(ea, c->r[0]); c->r[11] = ea; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x19820000u;
    { uint32_t ea = c->r[11] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a78f4u; f_8a81b0(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a78fcu; f_8a81b0(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a7904u; f_8a81b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a790cu; f_8a81b0(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x8a7914u; f_8a8220(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x8a791cu; f_8a8054(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x8a7924u; f_8a8054(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x8a792cu; f_8a8054(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x8a7934u; f_8a8054(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x8a793cu; f_8a8054(c);
    c->r[0] = c->r[11];
    c->r[1] = 0x78u;
    c->r[14] = 0x8a7948u; f_15efdac(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a7958(Cpu *restrict c) {
    FN_ENTER(0x8a7958u);
L_8a7958:;
    c->r[1] = 0x11990e4u;
    { uint32_t ea = 0x8a7964u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_8a7970(Cpu *restrict c) {
    FN_ENTER(0x8a7970u);
L_8a7970:;
    c->r[1] = 0x11990ccu;
    { uint32_t ea = 0x8a797cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    __attribute__((musttail)) return f_209af8(c);
}
void f_8a7988(Cpu *restrict c) {
    FN_ENTER(0x8a7988u);
L_8a7988:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x4u;
    c->r[1] = c->r[5] + 0x4u;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a79a4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a79b4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xcu;
    c->r[0] = c->r[4];
    c->r[2] = 0xcu;
    c->r[14] = 0x8a79c4u; f_8a9280(c);
    c->r[0] = c->r[5] + 0x18u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a79d0u; f_8a81d0(c);
    c->r[0] = c->r[5] + 0x30u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a79dcu; f_8a81d0(c);
    c->r[0] = c->r[5] + 0x48u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a79e8u; f_8a81d0(c);
    c->r[0] = c->r[5] + 0x60u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a79f4u; f_8a81d0(c);
    c->r[0] = c->r[5] + 0x78u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a7a00u; f_8a8274(c);
    c->r[0] = c->r[5] + 0x90u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a7a0cu; f_8a8088(c);
    c->r[0] = c->r[5] + 0xb0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a7a18u; f_8a8088(c);
    c->r[0] = c->r[5] + 0xd0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a7a24u; f_8a8088(c);
    c->r[0] = c->r[5] + 0xf0u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a7a30u; f_8a8088(c);
    c->r[0] = c->r[5] + 0x110u;
    c->r[1] = c->r[4];
    c->r[14] = 0x8a7a3cu; f_8a8088(c);
    c->r[1] = c->r[5] + 0x130u;
    c->r[0] = c->r[4];
    c->r[2] = 0xcu;
    c->r[14] = 0x8a7a4cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x13cu;
    c->r[0] = c->r[4];
    c->r[2] = 0xcu;
    c->r[14] = 0x8a7a5cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x148u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7a6cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x150u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7a7cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x158u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7a8cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x160u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7a9cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x168u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7aacu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x170u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7abcu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x178u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7accu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x180u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7adcu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x188u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7aecu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x190u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7afcu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x198u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7b0cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x1a0u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a7b20(Cpu *restrict c) {
    FN_ENTER(0x8a7b20u);
L_8a7b20:;
    c->r[0] = 0x1191314u;
    { uint32_t ea = 0x8a7b2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a7b30(Cpu *restrict c) {
    FN_ENTER(0x8a7b30u);
L_8a7b30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11faff0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a7b50u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a7b98u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a7bb0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a7bc8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x30u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x32u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    c->r[0] = 0xc8u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff000000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x6e00u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = ~0xff0000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd200u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff500000u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa578u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfff00000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x32cdu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfff00000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9b9u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffb90000u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7c44(Cpu *restrict c) {
    FN_ENTER(0x8a7c44u);
L_8a7c44:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1198decu;
    c->r[5] = 0x0u;
    c->r[1] = 0xadu;
    { uint32_t ea = 0x8a7c60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST8(ea, c->r[5]); }
    c->r[14] = 0x8a7c78u; f_15efd7c(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x13cu;
    { uint32_t ea = c->r[4] + 0xbdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xd8u;
    { uint32_t ea = c->r[4] + 0xbeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a7ca8u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7cb4(Cpu *restrict c) {
    FN_ENTER(0x8a7cb4u);
L_8a7cb4:;
    return;
}
void f_8a7cb8(Cpu *restrict c) {
    FN_ENTER(0x8a7cb8u);
L_8a7cb8:;
    __attribute__((musttail)) return f_209c8c(c);
}
void f_8a7cbc(Cpu *restrict c) {
    FN_ENTER(0x8a7cbcu);
L_8a7cbc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[1] = 0xadu;
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST8(ea, c->r[5]); }
    c->r[14] = 0x8a7ce0u; f_15efd7c(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x13cu;
    { uint32_t ea = c->r[4] + 0xbdu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xd8u;
    { uint32_t ea = c->r[4] + 0xbeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[5]); }
    c->r[14] = 0x8a7d10u; f_15efd7c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7d14(Cpu *restrict c) {
    FN_ENTER(0x8a7d14u);
L_8a7d14:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x16u;
    c->r[1] = c->r[5] + 0x4u;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a7d30u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x1au;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a7d40u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x1cu;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a7d50u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x1eu;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a7d60u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x20u;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a7d70u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x22u;
    c->r[0] = c->r[4];
    c->r[2] = 0x38u;
    c->r[14] = 0x8a7d80u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xaeu;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a7d90u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xb0u;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a7da0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xb4u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a7db0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xb8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a7dc0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xbcu;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a7dd0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xc2u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a7de0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xc0u;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a7df0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xbeu;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a7e00u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xbdu;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a7e10u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xcau;
    c->r[0] = c->r[4];
    c->r[2] = 0xcu;
    c->r[14] = 0x8a7e20u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xd8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x24u;
    c->r[14] = 0x8a7e30u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xfcu;
    c->r[0] = c->r[4];
    c->r[2] = 0x118u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a7e44(Cpu *restrict c) {
    FN_ENTER(0x8a7e44u);
L_8a7e44:;
    c->r[0] = 0x1190ffcu;
    { uint32_t ea = 0x8a7e50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a7e54(Cpu *restrict c) {
    FN_ENTER(0x8a7e54u);
L_8a7e54:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fad2cu;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a7e74u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a7ebcu; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a7ed4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a7eecu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a7f10(Cpu *restrict c) {
    FN_ENTER(0x8a7f10u);
L_8a7f10:;
    c->r[1] = 0x1198b2cu;
    c->r[2] = 0x0u;
    c->r[3] = 0x7u;
    { uint32_t ea = 0x8a7f24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    return;
}
void f_8a7f30(Cpu *restrict c) {
    FN_ENTER(0x8a7f30u);
L_8a7f30:;
    c->r[1] = 0x1198b0cu;
    c->r[2] = 0x0u;
    c->r[3] = 0xau;
    c->r[12] = 0x7u;
    { uint32_t ea = 0x8a7f48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[12]); }
    return;
}
void f_8a7f54(Cpu *restrict c) {
    FN_ENTER(0x8a7f54u);
L_8a7f54:;
    c->r[1] = 0x1198af0u;
    c->r[2] = 0x7u;
    c->r[3] = 0xau;
    { uint32_t ea = 0x8a7f68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1198ad8u;
    { uint32_t ea = 0x8a7f78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1198ac4u;
    { uint32_t ea = 0x8a7f90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[2]); }
    return;
}
void f_8a800c(Cpu *restrict c) {
    FN_ENTER(0x8a800cu);
L_8a800c:;
    c->r[1] = 0x1198a38u;
    c->r[2] = 0xau;
    c->r[3] = 0x7u;
    c->r[12] = 0x5u;
    { uint32_t ea = 0x8a8024u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    return;
}
void f_8a8054(Cpu *restrict c) {
    FN_ENTER(0x8a8054u);
L_8a8054:;
    c->r[1] = 0x0u;
    c->r[2] = 0xau;
    c->r[3] = 0x7u;
    c->r[12] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    return;
}
void f_8a8088(Cpu *restrict c) {
    FN_ENTER(0x8a8088u);
L_8a8088:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x1u;
    c->r[1] = c->r[5] + 0x4u;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a80a4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x5u;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a80b4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a80c4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xcu;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a80d4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a80e4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x14u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a80f4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x18u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a8104u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x1cu;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a8118(Cpu *restrict c) {
    FN_ENTER(0x8a8118u);
L_8a8118:;
    c->r[1] = 0x1198934u;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc47a0000u;
    { uint32_t ea = 0x8a812cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0xea8c22u;
    c->r[2] = 0x8a8154u + c->r[2];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    return;
}
void f_8a8178(Cpu *restrict c) {
    FN_ENTER(0x8a8178u);
L_8a8178:;
    return;
}
void f_8a817c(Cpu *restrict c) {
    FN_ENTER(0x8a817cu);
L_8a817c:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_8a8180(Cpu *restrict c) {
    FN_ENTER(0x8a8180u);
L_8a8180:;
    c->r[1] = 0x11988c8u;
    c->r[3] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[12] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc47a0000u;
    { uint32_t ea = 0x8a819cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[12]); }
    return;
}
void f_8a81b0(Cpu *restrict c) {
    FN_ENTER(0x8a81b0u);
L_8a81b0:;
    c->r[2] = 0x0u;
    c->r[1] = ~0x0u;
    c->r[3] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc47a0000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    return;
}
void f_8a81d0(Cpu *restrict c) {
    FN_ENTER(0x8a81d0u);
L_8a81d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x4u;
    c->r[1] = c->r[5] + 0x4u;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a81ecu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a81fcu; f_8a9280(c);
    c->r[1] = c->r[5] + 0xcu;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a820cu; f_8a9280(c);
    c->r[1] = c->r[5] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a8220(Cpu *restrict c) {
    FN_ENTER(0x8a8220u);
L_8a8220:;
    c->r[1] = 0x0u;
    c->r[2] = 0x7u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    return;
}
void f_8a8240(Cpu *restrict c) {
    FN_ENTER(0x8a8240u);
L_8a8240:;
    c->r[1] = 0x1198818u;
    c->r[2] = 0x7u;
    { uint32_t ea = 0x8a8250u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    return;
}
void f_8a8274(Cpu *restrict c) {
    FN_ENTER(0x8a8274u);
L_8a8274:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x1u;
    c->r[1] = c->r[5] + 0x4u;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8290u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x5u;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a82a0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a82b0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0xcu;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a82c0u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a82d4(Cpu *restrict c) {
    FN_ENTER(0x8a82d4u);
L_8a82d4:;
    __attribute__((musttail)) return f_209e80(c);
}
void f_8a82d8(Cpu *restrict c) {
    FN_ENTER(0x8a82d8u);
L_8a82d8:;
    c->r[0] = 0x1190b7cu;
    { uint32_t ea = 0x8a82e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a82e8(Cpu *restrict c) {
    FN_ENTER(0x8a82e8u);
L_8a82e8:;
    __attribute__((musttail)) return f_209cf0(c);
}
void f_8a82ec(Cpu *restrict c) {
    FN_ENTER(0x8a82ecu);
L_8a82ec:;
    c->r[0] = 0x1190b58u;
    { uint32_t ea = 0x8a82f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a82fc(Cpu *restrict c) {
    FN_ENTER(0x8a82fcu);
L_8a82fc:;
    __attribute__((musttail)) return f_209d54(c);
}
void f_8a8300(Cpu *restrict c) {
    FN_ENTER(0x8a8300u);
L_8a8300:;
    c->r[0] = 0x1190b48u;
    { uint32_t ea = 0x8a830cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a8310(Cpu *restrict c) {
    FN_ENTER(0x8a8310u);
L_8a8310:;
    return;
}
void f_8a8314(Cpu *restrict c) {
    FN_ENTER(0x8a8314u);
L_8a8314:;
    __attribute__((musttail)) return f_209db8(c);
}
void f_8a8318(Cpu *restrict c) {
    FN_ENTER(0x8a8318u);
L_8a8318:;
    c->r[0] = 0x1190b34u;
    { uint32_t ea = 0x8a8324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a8328(Cpu *restrict c) {
    FN_ENTER(0x8a8328u);
L_8a8328:;
    __attribute__((musttail)) return f_209e1c(c);
}
void f_8a832c(Cpu *restrict c) {
    FN_ENTER(0x8a832cu);
L_8a832c:;
    c->r[0] = 0x1190b24u;
    { uint32_t ea = 0x8a8338u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a833c(Cpu *restrict c) {
    FN_ENTER(0x8a833cu);
L_8a833c:;
    __attribute__((musttail)) return f_209ee4(c);
}
void f_8a8340(Cpu *restrict c) {
    FN_ENTER(0x8a8340u);
L_8a8340:;
    c->r[0] = 0x1190b18u;
    { uint32_t ea = 0x8a834cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a8350(Cpu *restrict c) {
    FN_ENTER(0x8a8350u);
L_8a8350:;
    __attribute__((musttail)) return f_209f48(c);
}
void f_8a8354(Cpu *restrict c) {
    FN_ENTER(0x8a8354u);
L_8a8354:;
    c->r[0] = 0x1190b08u;
    { uint32_t ea = 0x8a8360u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a8364(Cpu *restrict c) {
    FN_ENTER(0x8a8364u);
L_8a8364:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fa85cu;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a8384u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a83ccu; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a83e4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a83fcu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x30u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x32u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    c->r[0] = 0xc8u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff000000u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x6e00u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = ~0xff0000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd200u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff500000u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa578u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfff00000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x32cdu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfff00000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9b9u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffb90000u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a8478(Cpu *restrict c) {
    FN_ENTER(0x8a8478u);
L_8a8478:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11985e0u;
    { uint32_t ea = 0x8a848cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x8a8498u; f_8a7684(c);
    c->r[14] = 0x8a849cu; f_8a76d8(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + 0x251u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x249u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x250u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x24cu; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x248u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[1] = 0x1190d6cu;
    { uint32_t ea = 0x8a84e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x274u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x254u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x258u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x25cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x260u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x264u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x268u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x26cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x270u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x278u; ST8(ea, c->r[0]); }
    c->r[0] = 0x27au;
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a852c(Cpu *restrict c) {
    FN_ENTER(0x8a852cu);
L_8a852c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x8a853cu; f_8a76d8(c);
    c->r[1] = 0x1190cfcu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x248u; ST8(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = 0x8a8558u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a85b4(Cpu *restrict c) {
    FN_ENTER(0x8a85b4u);
L_8a85b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11984a4u;
    { uint32_t ea = 0x8a85c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[14] = 0x8a85d4u; f_8a76c4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a85e0(Cpu *restrict c) {
    FN_ENTER(0x8a85e0u);
L_8a85e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1198478u;
    { uint32_t ea = 0x8a85f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[14] = 0x8a8600u; f_8a76c4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_209fac(c);
}
void f_8a8610(Cpu *restrict c) {
    FN_ENTER(0x8a8610u);
L_8a8610:;
    c->r[0] = 0x1190850u;
    { uint32_t ea = 0x8a861cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a8620(Cpu *restrict c) {
    FN_ENTER(0x8a8620u);
L_8a8620:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fa600u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a8640u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a8688u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a86a0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a86b8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a86dc(Cpu *restrict c) {
    FN_ENTER(0x8a86dcu);
L_8a86dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x8a86e8u; f_a87810(c);
    c->r[0] = 0x119837cu;
    { uint32_t ea = 0x8a86f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[14] = 0x8a8700u; f_8bbbc4(c);
    c->r[0] = 0x1198368u;
    { uint32_t ea = 0x8a870cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a871c(Cpu *restrict c) {
    FN_ENTER(0x8a871cu);
L_8a871c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x119833cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a8734u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x119832cu;
    { uint32_t ea = 0x8a8748u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[14] = 0x8a874cu; f_8bbc38(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_8a8760(Cpu *restrict c) {
    FN_ENTER(0x8a8760u);
L_8a8760:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11982f8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a8778u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x11982e8u;
    { uint32_t ea = 0x8a878cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[14] = 0x8a8790u; f_8bbc38(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8798u; f_a8784c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_20a04c(c);
}
void f_8a87a8(Cpu *restrict c) {
    FN_ENTER(0x8a87a8u);
L_8a87a8:;
    c->r[0] = c->r[0] + 0x1cu;
    __attribute__((musttail)) return f_8bbc70(c);
}
void f_8a87b0(Cpu *restrict c) {
    FN_ENTER(0x8a87b0u);
L_8a87b0:;
    c->r[0] = 0x11906b4u;
    { uint32_t ea = 0x8a87bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a87c0(Cpu *restrict c) {
    FN_ENTER(0x8a87c0u);
L_8a87c0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    c->r[14] = 0x8a87e0u; f_15efda0(c);
    c->r[1] = 0x11fa49cu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[4] = 0x8a87f4u + c->r[1];
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[14] = 0x8a8800u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a8818u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a887c(Cpu *restrict c) {
    FN_ENTER(0x8a887cu);
L_8a887c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x8a8888u; f_a87810(c);
    c->r[0] = 0x11981d8u;
    c->r[6] = 0x680u;
    c->r[5] = 0x0u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x8a88a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_8a88a4:;
    c->r[0] = c->r[4] + c->r[5];
    c->r[0] = c->r[0] + 0x1cu;
    c->r[14] = 0x8a88b0u; f_8a7130(c);
    c->r[5] = c->r[5] + 0x30u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_8a88a4; }
    c->r[0] = c->r[4] + 0x29cu;
    c->r[5] = 0x8340u;
    c->r[0] = c->r[0] + 0x10400u;
L_8a88c8:;
    c->r[14] = 0x8a88ccu; f_8a7130(c);
    c->r[5] = f_subs(c, c->r[5], 0x30u);
    c->r[0] = c->r[0] + 0x30u;
    if (COND_NE) { goto L_8a88c8; }
    c->r[0] = 0x1198194u;
    c->r[1] = 0x19c0u;
    { uint32_t ea = 0x8a88e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4] + 0x1dcu;
    c->r[0] = c->r[0] + 0x18800u;
    c->r[14] = 0x8a88f4u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a8904(Cpu *restrict c) {
    FN_ENTER(0x8a8904u);
L_8a8904:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1198150u;
    c->r[2] = 0x89acu;
    c->r[5] = 0x7cc0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0x8a8928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + c->r[2]; }
    c->r[1] = 0x119813cu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a8940u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_8a8940:;
    c->r[14] = 0x8a8944u; f_8a71c0(c);
    c->r[0] = c->r[0] - 0x30u;
    c->r[5] = f_adds(c, c->r[5], 0x30u);
    if (COND_NE) { goto L_8a8940; }
    c->r[7] = 0xf980u;
    c->r[0] = c->r[4] + 0x26cu;
    c->r[6] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xfffe0000u;
    c->r[5] = c->r[0] + 0x10400u;
L_8a8964:;
    c->r[0] = c->r[5] + c->r[6];
    c->r[14] = 0x8a896cu; f_8a71c0(c);
    c->r[6] = c->r[6] - 0x30u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_8a8964; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_8a898c(Cpu *restrict c) {
    FN_ENTER(0x8a898cu);
L_8a898c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11980c8u;
    c->r[2] = 0x89acu;
    c->r[5] = 0x7cc0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0x8a89b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + c->r[2]; }
    c->r[1] = 0x11980b4u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a89c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_8a89c8:;
    c->r[14] = 0x8a89ccu; f_8a71c0(c);
    c->r[0] = c->r[0] - 0x30u;
    c->r[5] = f_adds(c, c->r[5], 0x30u);
    if (COND_NE) { goto L_8a89c8; }
    c->r[5] = 0xf980u;
    c->r[0] = c->r[4] + 0x26cu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xfffe0000u;
    c->r[0] = c->r[0] + 0x10400u;
L_8a89e8:;
    c->r[14] = 0x8a89ecu; f_8a71c0(c);
    c->r[0] = c->r[0] - 0x30u;
    c->r[5] = f_adds(c, c->r[5], 0x30u);
    if (COND_NE) { goto L_8a89e8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8a00u; f_a8784c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_20a0f0(c);
}
void f_8a8a10(Cpu *restrict c) {
    FN_ENTER(0x8a8a10u);
L_8a8a10:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[12] = c->r[0];
    c->r[0] = 0x119095cu;
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = 0x8a8a28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = (c->r[0] >> 22) & 0x1u;
    c->r[3] = (c->r[0] >> 21) & 0x1u;
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_8a8a4c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8a8a94; }
    c->r[5] = 0x3e8u;
    goto L_8a8a50;
L_8a8a4c:;
    c->r[5] = 0x12cu;
L_8a8a50:;
    c->r[3] = c->r[3] + c->r[14];
    c->r[4] = 0xc8u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LS) { goto L_8a8a94; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_8a8a84; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[12] + (c->r[0] << 4);
    c->r[0] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8a8a84:;
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[12] + (c->r[0] << 4);
    c->r[0] = c->r[0] + 0x29cu;
    c->r[0] = c->r[0] + 0x10400u;
L_8a8a94:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a8a9c(Cpu *restrict c) {
    FN_ENTER(0x8a8a9cu);
L_8a8a9c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = 0x680u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[6] = 0x0u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x10000u;
L_8a8ab4:;
    c->r[7] = c->r[5] + c->r[6];
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[1] = c->r[7] + 0x20u;
    c->r[14] = 0x8a8ac8u; f_8a9280(c);
    c->r[1] = c->r[7] + 0x22u;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a8ad8u; f_8a9280(c);
    c->r[1] = c->r[7] + 0x24u;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a8ae8u; f_8a9280(c);
    c->r[1] = c->r[7] + 0x26u;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a8af8u; f_8a9280(c);
    c->r[1] = c->r[7] + 0x28u;
    c->r[0] = c->r[4];
    c->r[2] = 0x6u;
    c->r[14] = 0x8a8b08u; f_8a9280(c);
    c->r[1] = c->r[7] + 0x30u;
    c->r[0] = c->r[4];
    c->r[2] = 0x18u;
    c->r[14] = 0x8a8b18u; f_8a9280(c);
    c->r[6] = c->r[6] + 0x30u;
    (void)f_subs(c, c->r[6], c->r[8]);
    if (COND_NE) { goto L_8a8ab4; }
    c->r[0] = c->r[5] + 0x6a0u;
    c->r[7] = 0x2bcu;
    c->r[6] = c->r[0] + 0x10000u;
L_8a8b30:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a8b40u; f_8a9280(c);
    c->r[1] = c->r[6] + 0x2u;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a8b50u; f_8a9280(c);
    c->r[1] = c->r[6] + 0x4u;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x8a8b60u; f_8a9280(c);
    c->r[1] = c->r[6] + 0x6u;
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->r[14] = 0x8a8b70u; f_8a9280(c);
    c->r[1] = c->r[6] + 0x8u;
    c->r[0] = c->r[4];
    c->r[2] = 0x6u;
    c->r[14] = 0x8a8b80u; f_8a9280(c);
    c->r[1] = c->r[6] + 0x10u;
    c->r[0] = c->r[4];
    c->r[2] = 0x18u;
    c->r[14] = 0x8a8b90u; f_8a9280(c);
    c->r[6] = c->r[6] + 0x30u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_8a8b30; }
    c->r[0] = c->r[5] + 0x1dcu;
    c->r[2] = 0x1540u;
    c->r[1] = c->r[0] + 0x18800u;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8bb0u; f_8a9280(c);
    c->r[0] = c->r[5] + 0x31cu;
    c->r[2] = 0x480u;
    c->r[1] = c->r[0] + 0x19c00u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a8bc8(Cpu *restrict c) {
    FN_ENTER(0x8a8bc8u);
L_8a8bc8:;
    c->r[0] = 0x11902a0u;
    { uint32_t ea = 0x8a8bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a8bd8(Cpu *restrict c) {
    FN_ENTER(0x8a8bd8u);
L_8a8bd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11fa0e8u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a8bf8u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a8c40u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a8c58u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a8c70u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a8c94(Cpu *restrict c) {
    FN_ENTER(0x8a8c94u);
L_8a8c94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x8a8c9cu; f_a87810(c);
    c->r[1] = 0x1197dd8u;
    { uint32_t ea = 0x8a8ca8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1197dccu;
    { uint32_t ea = 0x8a8cb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a8cd8(Cpu *restrict c) {
    FN_ENTER(0x8a8cd8u);
L_8a8cd8:;
    c->r[1] = 0x1197d98u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a8ce8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1197d8cu;
    { uint32_t ea = 0x8a8cf8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_8a8d04(Cpu *restrict c) {
    FN_ENTER(0x8a8d04u);
L_8a8d04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x1197d68u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a8d18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1197d5cu;
    { uint32_t ea = 0x8a8d28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[14] = 0x8a8d2cu; f_a8784c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_20a190(c);
}
void f_8a8d3c(Cpu *restrict c) {
    FN_ENTER(0x8a8d3cu);
L_8a8d3c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x4u;
    c->r[1] = c->r[5] + 0x1cu;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8d58u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x20u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a8d68u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x24u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a8d78u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x28u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a8d8c(Cpu *restrict c) {
    FN_ENTER(0x8a8d8cu);
L_8a8d8c:;
    c->r[0] = 0x11900e0u;
    { uint32_t ea = 0x8a8d98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a8d9c(Cpu *restrict c) {
    FN_ENTER(0x8a8d9cu);
L_8a8d9c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x11f9f74u;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x8a8dbcu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x8a8e04u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a8e1cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a8e34u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a8e58(Cpu *restrict c) {
    FN_ENTER(0x8a8e58u);
L_8a8e58:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1197c20u;
    { uint32_t ea = 0x8a8e68u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8e6cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x64u;
    c->pc = c->r[4]; c->r[14] = 0x8a8e84u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x8a8e8cu; f_a87810(c);
    c->r[0] = 0x1197bf4u;
    { uint32_t ea = 0x8a8e98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x1197be4u;
    { uint32_t ea = 0x8a8eacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = 0x48u;
    c->r[14] = 0x8a8eb4u; f_15efdac(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a8ec8(Cpu *restrict c) {
    FN_ENTER(0x8a8ec8u);
L_8a8ec8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1197ba8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x8a8ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x8a8ee4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_8a8f04(Cpu *restrict c) {
    FN_ENTER(0x8a8f04u);
L_8a8f04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x8a8f10u; f_a87810(c);
    c->r[0] = 0x1197b70u;
    { uint32_t ea = 0x8a8f1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x1197b60u;
    { uint32_t ea = 0x8a8f30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = 0x48u;
    c->r[14] = 0x8a8f38u; f_15efdac(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a8f48(Cpu *restrict c) {
    FN_ENTER(0x8a8f48u);
L_8a8f48:;
    c->r[1] = 0x1197b34u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a8f58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1197b28u;
    { uint32_t ea = 0x8a8f68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_8a8f74(Cpu *restrict c) {
    FN_ENTER(0x8a8f74u);
L_8a8f74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1197b00u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a8f8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1197af4u;
    { uint32_t ea = 0x8a8f9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8fa4u; f_a8784c(c);
    c->r[0] = 0x1197ad8u;
    { uint32_t ea = 0x8a8fb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a8fb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_8a8fd0(Cpu *restrict c) {
    FN_ENTER(0x8a8fd0u);
L_8a8fd0:;
    __attribute__((musttail)) return f_a878e4(c);
}
void f_8a8fd4(Cpu *restrict c) {
    FN_ENTER(0x8a8fd4u);
L_8a8fd4:;
    __attribute__((musttail)) return f_a878e8(c);
}
void f_8a8fd8(Cpu *restrict c) {
    FN_ENTER(0x8a8fd8u);
L_8a8fd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x8u;
    c->r[1] = c->r[5] + 0x1cu;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a8ff4u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x24u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a9004u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x2cu;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a9014u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x30u;
    c->r[0] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x8a9024u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x38u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a9034u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x3cu;
    c->r[0] = c->r[4];
    c->r[2] = 0x14u;
    c->r[14] = 0x8a9044u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x50u;
    c->r[0] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x8a9054u; f_8a9280(c);
    c->r[1] = c->r[5] + 0x54u;
    c->r[0] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_8a9280(c);
}
void f_8a9068(Cpu *restrict c) {
    FN_ENTER(0x8a9068u);
L_8a9068:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_8a906c(Cpu *restrict c) {
    FN_ENTER(0x8a906cu);
L_8a906c:;
    c->r[0] = 0x1197a10u;
    { uint32_t ea = 0x8a9078u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a907c(Cpu *restrict c) {
    FN_ENTER(0x8a907cu);
L_8a907c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x11f9d00u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x8a90a0u + c->r[0];
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
    c->r[14] = 0x8a90e8u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x8a9100u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x8a9118u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x118fdf0u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x10u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    c->r[3] = 0x64u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = 0x119792cu;
    { uint32_t ea = 0x8a9154u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xec3ceau;
    { uint32_t ea = 0x8a915cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8a9160u + c->r[1];
    c->r[14] = 0x8a9160u; f_9aedcc(c);
    c->r[1] = 0x1197928u;
    { uint32_t ea = 0x8a916cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a918c(Cpu *restrict c) {
    FN_ENTER(0x8a918cu);
L_8a918c:;
    return;
}
void f_8a9190(Cpu *restrict c) {
    FN_ENTER(0x8a9190u);
L_8a9190:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[0], (c->r[1] >> 24));
    if (COND_EQ) { goto L_8a91a8; }
    c->r[2] = 0x20u;
    c->r[3] = ~0x80000000u;
    goto L_8a91d4;
L_8a91a8:;
    (void)f_subs(c, c->r[0], (c->r[1] >> 16));
    if (COND_EQ) { goto L_8a91c0; }
    c->r[3] = 0xffffu;
    c->r[2] = 0x18u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x7f0000u;
    goto L_8a91d4;
L_8a91c0:;
    c->r[2] = 0x8u;
    (void)f_subs(c, c->r[1], 0xffu);
    c->r[3] = 0x7fu;
    if (COND_HI) { c->r[2] = 0x10u; }
    if (COND_HI) { c->r[3] = 0x7fffu; }
L_8a91d4:;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { c->r[0] = c->r[2]; }
    if (COND_CC) { return; }
L_8a91e0:;
    c->r[3] = (c->r[3] >> 1);
    c->r[0] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { return; }
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[2] = c->r[0];
    if (COND_NE) { goto L_8a91e0; }
    return;
}
void f_8a9200(Cpu *restrict c) {
    FN_ENTER(0x8a9200u);
L_8a9200:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_8a9204(Cpu *restrict c) {
    FN_ENTER(0x8a9204u);
L_8a9204:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a9270; }
    c->r[4] = 0x119786cu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x8a922cu + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
L_8a9228:;
    { uint32_t ea = c->r[4] + c->r[14]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[14], 0x6u);
    c->r[5] = c->r[6] & c->r[5];
    if (COND_HI) { goto L_8a9248; }
    c->r[14] = c->r[14] + 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    goto L_8a9258;
L_8a9248:;
    c->r[14] = 0x0u;
    c->r[12] = c->r[12] + 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
L_8a9258:;
    { uint32_t r = c->r[5] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = c->r[2] + c->r[3]; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[3] = (c->r[3] << 1);
    if (COND_NE) { goto L_8a9228; }
    goto L_8a9274;
L_8a9270:;
    c->r[2] = 0x0u;
L_8a9274:;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a9280(Cpu *restrict c) {
    FN_ENTER(0x8a9280u);
L_8a9280:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a92b0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    goto L_8a92b4;
L_8a92b0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[2] = v; }
L_8a92b4:;
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = c->r[4];
    c->r[14] = 0x8a92c4u; f_15efe30(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a92d4(Cpu *restrict c) {
    FN_ENTER(0x8a92d4u);
L_8a92d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x8a92dcu; f_a87810(c);
    c->r[1] = 0x11977b0u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x8a92ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x11977a8u;
    { uint32_t ea = 0x8a92f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1190080u;
    { uint32_t ea = 0x8a9308u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x45u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x46u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8a9378(Cpu *restrict c) {
    FN_ENTER(0x8a9378u);
L_8a9378:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1197714u;
    { uint32_t ea = 0x8a938cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a93bc; }
    c->r[0] = 0x11900a4u;
    { uint32_t ea = 0x8a93a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x8a93b4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_8a93bc:;
    c->r[0] = 0x118ffbcu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a93ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x11976ccu;
    { uint32_t ea = 0x8a93d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x11976b4u;
    { uint32_t ea = 0x8a93e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_8a9408(Cpu *restrict c) {
    FN_ENTER(0x8a9408u);
L_8a9408:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1197684u;
    { uint32_t ea = 0x8a941cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8a944c; }
    c->r[0] = 0x1190014u;
    { uint32_t ea = 0x8a9438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x8a9444u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_8a944c:;
    c->r[0] = 0x118ff2cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a945cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x119763cu;
    { uint32_t ea = 0x8a9468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1197624u;
    { uint32_t ea = 0x8a9478u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a9480u; f_a8784c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_20a230(c);
}
void f_8a949c(Cpu *restrict c) {
    FN_ENTER(0x8a949cu);
L_8a949c:;
    c->r[2] = 0x0u;
    c->r[12] = 0x40u;
    c->r[3] = 0xcu;
    (void)f_subs(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x46u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x47u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x48u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x44u; ST8(ea, c->r[2]); }
    if (COND_HI) { goto L_8a94e4; }
    { uint32_t ea = c->r[0] + 0x45u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[12] = 0xau; }
    if (COND_EQ) { c->r[3] = 0x3u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); } }
L_8a94e4:;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[12]); }
    return;
}
void f_8a94f0(Cpu *restrict c) {
    FN_ENTER(0x8a94f0u);
L_8a94f0:;
    c->r[1] = 0x0u;
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x46u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST8(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x44u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x45u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x19u;
    if (COND_NE) { c->r[2] = 0xbu; }
    if (COND_NE) { c->r[1] = 0x42u; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_8a9538(Cpu *restrict c) {
    FN_ENTER(0x8a9538u);
L_8a9538:;
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { return; }
    c->r[1] = 0x1u;
    c->r[2] = 0x5au;
    { uint32_t ea = c->r[0] + 0x44u; ST8(ea, c->r[1]); }
    c->r[1] = 0x11u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    return;
}
void f_8a9560(Cpu *restrict c) {
    FN_ENTER(0x8a9560u);
L_8a9560:;
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { return; }
    c->r[2] = 0x1u;
    c->r[3] = 0x5eu;
    { uint32_t ea = c->r[0] + 0x44u; ST8(ea, c->r[2]); }
    c->r[2] = 0x11u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    return;
}
void f_8a958c(Cpu *restrict c) {
    FN_ENTER(0x8a958cu);
L_8a958c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x9b2bu;
    c->r[6] = 0x0u;
    c->r[5] = c->r[13];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x380000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11974ecu;
    { uint32_t ea = 0x8a95bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x118fd98u;
    { uint32_t ea = 0x8a95ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a95f0u; f_8b1e38(c);
    c->r[0] = 0x11974acu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a9600u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9604u; f_8b046c(c);
    c->r[0] = 0x1197460u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a9614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9618u; f_8a87a8(c);
    c->r[0] = 0x1197488u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a9628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a962cu; f_8ae5a0(c);
    c->r[0] = 0x1197478u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x8a963cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9640u; f_8add84(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[1] = c->r[2] + c->r[1];
    (void)f_adds(c, c->r[1], c->r[3]);
    if (COND_NE) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x49u; ST8(ea, c->r[6]); }
    if (COND_EQ) { goto L_8a9694; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_8a9694; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
L_8a9694:;
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8a96b8(Cpu *restrict c) {
    FN_ENTER(0x8a96b8u);
L_8a96b8:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_8a96c0(Cpu *restrict c) {
    FN_ENTER(0x8a96c0u);
L_8a96c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x29cu;
    c->r[4] = c->r[13] + 0x8u;
    c->r[7] = c->r[1];
    c->r[0] = c->r[4] + 0x10cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[14] = 0x8a96dcu; f_8a7130(c);
    c->r[9] = c->r[4] + 0x13cu;
    c->r[0] = c->r[9];
    c->r[14] = 0x8a96e8u; f_8a7130(c);
    c->r[10] = c->r[4] + 0x16cu;
    c->r[0] = c->r[10];
    c->r[14] = 0x8a96f4u; f_8a7130(c);
    c->r[11] = c->r[4] + 0x19cu;
    c->r[0] = c->r[11];
    c->r[14] = 0x8a9700u; f_8a7130(c);
    c->r[5] = c->r[4] + 0x1ccu;
    c->r[0] = c->r[5];
    c->r[14] = 0x8a970cu; f_8a7130(c);
    c->r[6] = c->r[4] + 0x1fcu;
    c->r[0] = c->r[6];
    c->r[14] = 0x8a9718u; f_8a7130(c);
    c->r[4] = c->r[4] + 0x22cu;
    c->r[0] = c->r[4];
    c->r[14] = 0x8a9724u; f_8a7130(c);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8a9748; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[8]); }
    goto L_8a974c;
L_8a9748:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
L_8a974c:;
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[8];
    c->r[2] = 0x290u;
    c->r[14] = 0x8a975cu; f_15efe30(c);
    c->r[0] = c->r[8] + 0x290u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x8a976cu; f_8aa800(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x8a9774u; f_8a71c0(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x8a977cu; f_8a71c0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x8a9784u; f_8a71c0(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x8a978cu; f_8a71c0(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x8a9794u; f_8a71c0(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x8a979cu; f_8a71c0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a97a4u; f_8a71c0(c);
    c->r[13] = c->r[13] + 0x29cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_8a97ac(Cpu *restrict c) {
    FN_ENTER(0x8a97acu);
L_8a97ac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0xau;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_8a9afc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8a97d4u + 0xcu;
    c->r[5] = 0x9b2bu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x380000u;
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8a9800u: goto L_8a9800; case 0x8a9808u: goto L_8a9808; case 0x8a9930u: goto L_8a9930; case 0x8a9a34u: goto L_8a9a34; case 0x8a9a94u: goto L_8a9a94; case 0x8a9af0u: goto L_8a9af0; case 0x8a9afcu: goto L_8a9afc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a9800:;
    c->r[0] = 0xbu;
    goto L_8a9c54;
L_8a9808:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a9838; }
    c->r[0] = 0x118fc28u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a9824u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x8a9834u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_8a9838:;
    c->r[1] = 0x9b2bu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x380000u;
    c->r[14] = 0x8a9844u; f_15efdac(c);
    c->r[0] = 0x118fb34u;
    c->r[2] = 0xebaab1u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a9858u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x8a985cu + c->r[2];
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x8a9870u; f_a777f4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x8a987cu; f_a78d54(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9884u; f_a776fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_8a9b04; }
    c->r[6] = 0x40u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_8a98a8; }
    c->r[1] = 0xfa5958u;
    c->r[1] = 0x8a98a8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
L_8a98a8:;
    c->r[0] = 0x118fb94u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a98b8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x8a98c8u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x118f2f4u;
    c->r[1] = 0x8u;
    c->r[2] = c->r[6];
    { uint32_t ea = 0x8a98e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a98e4u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x8a98f4u; f_15f0088(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x8a9910u; f_85f190(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a9924u; rt_dispatch(c);
    c->r[0] = 0x118f2b0u;
    { uint32_t ea = 0x8a9930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a9c44;
L_8a9930:;
    c->r[0] = 0x118fa50u;
    { uint32_t ea = 0x8a993cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_8a9afc; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_8a9b20; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a9ba8; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[1] | c->r[2];
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = 0xeu;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_8a9c54; }
    c->r[0] = 0x118fa90u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a99bcu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x8a99ccu; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x118f1f0u;
    c->r[1] = 0x8u;
    c->r[2] = 0x54u;
    { uint32_t ea = 0x8a99e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a99e8u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x8a99f8u; f_15f0088(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x8a9a14u; f_85f190(c);
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a9a28u; rt_dispatch(c);
    c->r[0] = 0x118f1acu;
    { uint32_t ea = 0x8a9a34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a9c44;
L_8a9a34:;
    c->r[2] = 0x1197058u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x8a9a50u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a9a7cu; f_8a96c0(c);
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[4]; }
    if (COND_EQ) { c->r[14] = 0x8a9a8cu; f_8a958c(c); }
    c->r[0] = 0x11u;
    goto L_8a9c54;
L_8a9a94:;
    c->r[0] = 0x118f874u;
    c->r[1] = 0x6bfcu;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x8a9aa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x8a9ab8u; f_85e794(c);
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8a9afc; }
    c->r[14] = 0x8a9ac4u; f_85f118(c);
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[5]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x118f0fcu;
    { uint32_t ea = c->r[4] + 0x4bu; ST8(ea, c->r[5]); }
    { uint32_t ea = 0x8a9ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_6eeb78(c);
L_8a9af0:;
    c->r[14] = 0x8a9af4u; f_85f118(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[0]); }
L_8a9afc:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a9b04:;
    c->r[0] = 0x118f87cu;
    { uint32_t ea = 0x8a9b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xcu;
    goto L_8a9c54;
L_8a9b20:;
    c->r[0] = 0x118f91cu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a9b30u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x8a9b40u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x118f07cu;
    c->r[1] = 0x8u;
    c->r[2] = 0x54u;
    { uint32_t ea = 0x8a9b58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9b5cu; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x8a9b6cu; f_15f0088(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x8a9b88u; f_85f190(c);
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a9b9cu; rt_dispatch(c);
    c->r[0] = 0x118f038u;
    { uint32_t ea = 0x8a9ba8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8a9c44;
L_8a9ba8:;
    c->r[6] = 0x40u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_8a9bc0; }
    c->r[1] = 0xfa5640u;
    c->r[1] = 0x8a9bc0u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
L_8a9bc0:;
    c->r[0] = 0x118f87cu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a9bd0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x8a9be0u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x118efdcu;
    c->r[1] = 0x8u;
    c->r[2] = c->r[6];
    { uint32_t ea = 0x8a9bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9bfcu; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x8a9c0cu; f_15f0088(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x8a9c28u; f_85f190(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a9c3cu; rt_dispatch(c);
    c->r[0] = 0x118ef98u;
    { uint32_t ea = 0x8a9c48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8a9c44:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xdu;
    c->r[14] = 0x8a9c50u; f_6eeb78(c);
    c->r[0] = 0xfu;
L_8a9c54:;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_8a9cb8(Cpu *restrict c) {
    FN_ENTER(0x8a9cb8u);
L_8a9cb8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x19u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_8aa030; }
    c->r[1] = 0x118f634u;
    c->r[2] = 0x6bfcu;
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = 0x8a9ce8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x8a9cf4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x8a9d14u: goto L_8a9d14; case 0x8a9d1cu: goto L_8a9d1c; case 0x8a9d58u: goto L_8a9d58; case 0x8a9d64u: goto L_8a9d64; case 0x8a9e94u: goto L_8a9e94; case 0x8a9ec8u: goto L_8a9ec8; case 0x8aa030u: goto L_8aa030; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8a9d14:;
    c->r[0] = 0x1au;
    goto L_8aa02c;
L_8a9d1c:;
    c->r[0] = 0x118f664u;
    { uint32_t ea = 0x8a9d28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_8aa030; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_8a9ef8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a9f80; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8a9d54u; f_8a958c(c);
    goto L_8a9ec0;
L_8a9d58:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8a9ec0; }
    goto L_8aa030;
L_8a9d64:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x9b2bu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x380000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8a9d9c; }
    c->r[0] = 0x118f6c4u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a9d88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x8a9d98u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_8a9d9c:;
    c->r[1] = 0x9b2bu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x380000u;
    c->r[14] = 0x8a9da8u; f_15efdac(c);
    c->r[0] = 0x118f5d0u;
    c->r[2] = 0xeba54du;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8a9dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x8a9dc0u + c->r[2];
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x8a9dd4u; f_a777f4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x8a9de0u; f_a78d54(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9de8u; f_a776fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_8a9edc; }
    c->r[6] = 0x40u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_8a9e0c; }
    c->r[1] = 0xfa53f4u;
    c->r[1] = 0x8a9e0cu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
L_8a9e0c:;
    c->r[0] = 0x118f630u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a9e1cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x8a9e2cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x118ed90u;
    c->r[1] = 0x8u;
    c->r[2] = c->r[6];
    { uint32_t ea = 0x8a9e44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9e48u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x8a9e58u; f_15f0088(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x8a9e74u; f_85f190(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a9e88u; rt_dispatch(c);
    c->r[0] = 0x118ed4cu;
    { uint32_t ea = 0x8a9e94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8aa01c;
L_8a9e94:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8aa030; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_8aa038; }
    c->r[2] = 0x218u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[0], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8aa038; }
    c->r[14] = 0x8a9ec0u; f_85f118(c);
L_8a9ec0:;
    c->r[0] = 0x1eu;
    goto L_8aa02c;
L_8a9ec8:;
    c->r[14] = 0x8a9eccu; f_85f118(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8a9edc:;
    c->r[0] = 0x118f4a4u;
    { uint32_t ea = 0x8a9ee8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bu;
    goto L_8aa02c;
L_8a9ef8:;
    c->r[0] = 0x118f544u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a9f08u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x8a9f18u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x118eca4u;
    c->r[1] = 0x8u;
    c->r[2] = 0x54u;
    { uint32_t ea = 0x8a9f30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9f34u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x8a9f44u; f_15f0088(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x8a9f60u; f_85f190(c);
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8a9f74u; rt_dispatch(c);
    c->r[0] = 0x118ec60u;
    { uint32_t ea = 0x8a9f80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8aa01c;
L_8a9f80:;
    c->r[6] = 0x40u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_8a9f98; }
    c->r[1] = 0xfa5268u;
    c->r[1] = 0x8a9f98u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
L_8a9f98:;
    c->r[0] = 0x118f4a4u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x8a9fa8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x200u;
    c->pc = c->r[3]; c->r[14] = 0x8a9fb8u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x118ec04u;
    c->r[1] = 0x8u;
    c->r[2] = c->r[6];
    { uint32_t ea = 0x8a9fd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8a9fd4u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x3cu;
    c->r[14] = 0x8a9fe4u; f_15f0088(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x8aa000u; f_85f190(c);
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x8aa014u; rt_dispatch(c);
    c->r[0] = 0x118ebc0u;
    { uint32_t ea = 0x8aa020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_8aa01c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xdu;
    c->r[14] = 0x8aa028u; f_6eeb78(c);
    c->r[0] = 0x1du;
L_8aa02c:;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_8aa030:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8aa038:;
    c->r[1] = 0x1fu;
    { uint32_t ea = c->r[4] + 0x45u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4bu; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_8aa094(Cpu *restrict c) {
    FN_ENTER(0x8aa094u);
L_8aa094:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x32u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_8aa268; }
    c->r[1] = 0x118f258u;
    c->r[2] = 0x6bfcu;
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = 0x8aa0c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x8aa0d0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x8aa0f0u: goto L_8aa0f0; case 0x8aa0f8u: goto L_8aa0f8; case 0x8aa1a4u: goto L_8aa1a4; case 0x8aa1d4u: goto L_8aa1d4; case 0x8aa1fcu: goto L_8aa1fc; case 0x8aa210u: goto L_8aa210; case 0x8aa268u: goto L_8aa268; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8aa0f0:;
    c->r[0] = 0x33u;
    goto L_8aa264;
L_8aa0f8:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8aa128; }
    c->r[0] = 0x118f338u;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x8aa114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x8aa124u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_8aa128:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x8aa130u; f_15efdac(c);
    c->r[0] = 0x118f248u;
    c->r[3] = 0xeba1c5u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x8aa144u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x8aa148u + c->r[3];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x8aa15cu; f_a777f4(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x8aa168u; f_a78d54(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa170u; f_a776fc(c);
    c->r[1] = 0x36u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_8aa198; }
    c->r[0] = 0x118f1fcu;
    c->r[1] = 0x34u;
    { uint32_t ea = 0x8aa190u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_8aa198:;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8aa1a4:;
    c->r[0] = 0x118f1dcu;
    { uint32_t ea = 0x8aa1b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_8aa268; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_8aa21c; }
    c->r[0] = 0x36u;
    goto L_8aa264;
L_8aa1d4:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_8aa268; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_NE) { goto L_8aa270; }
    c->r[14] = 0x8aa1f8u; f_85f118(c);
    goto L_8aa260;
L_8aa1fc:;
    c->r[14] = 0x8aa200u; f_85f118(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8aa210:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8aa260; }
    goto L_8aa268;
L_8aa21c:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1196870u;
    { uint32_t ea = 0x8aa238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1196834u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    { uint32_t ea = 0x8aa25cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa260u; f_8a8fd8(c);
L_8aa260:;
    c->r[0] = 0x37u;
L_8aa264:;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_8aa268:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8aa270:;
    c->r[0] = 0x1u;
    c->r[1] = 0x38u;
    { uint32_t ea = c->r[4] + 0x45u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4bu; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8aa2ac(Cpu *restrict c) {
    FN_ENTER(0x8aa2acu);
L_8aa2ac:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x5au;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_8aa2fc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8aa2d0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8aa2f4u: goto L_8aa2f4; case 0x8aa2fcu: goto L_8aa2fc; case 0x8aa300u: goto L_8aa300; case 0x8aa30cu: goto L_8aa30c; case 0x8aa3a4u: goto L_8aa3a4; case 0x8aa3b0u: goto L_8aa3b0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8aa2f4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[0]); }
L_8aa2fc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_8aa300:;
    c->r[0] = 0x5bu;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_8aa30c:;
    c->r[0] = 0x118f06cu;
    { uint32_t ea = 0x8aa318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118ea64u;
    { uint32_t ea = 0x8aa324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa328u; f_72171c(c);
    c->r[0] = 0x1196778u;
    { uint32_t ea = 0x8aa334u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e87cu;
    { uint32_t ea = 0x8aa340u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa344u; f_4634cc(c);
    c->r[0] = 0x1196724u;
    { uint32_t ea = 0x8aa350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1190e8cu;
    { uint32_t ea = 0x8aa35cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa360u; f_4257ec(c);
    c->r[0] = 0x1196744u;
    { uint32_t ea = 0x8aa36cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1190570u;
    { uint32_t ea = 0x8aa378u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa37cu; f_364410(c);
    c->r[0] = 0x119672cu;
    { uint32_t ea = 0x8aa388u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e820u;
    { uint32_t ea = 0x8aa394u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa398u; f_5f8f90(c);
    c->r[0] = 0x5du;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_8aa3a4:;
    c->r[0] = 0x5fu;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_8aa3b0:;
    c->r[0] = 0x11966fcu;
    { uint32_t ea = 0x8aa3bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1190454u;
    { uint32_t ea = 0x8aa3c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa3ccu; f_39a5d4(c);
    c->r[0] = 0x11966e4u;
    { uint32_t ea = 0x8aa3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1190444u;
    { uint32_t ea = 0x8aa3e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa3e8u; f_39e108(c);
    c->r[0] = 0x118ef90u;
    { uint32_t ea = 0x8aa3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x118e98cu;
    { uint32_t ea = 0x8aa3fcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa404u; f_71e6d8(c);
    c->r[0] = 0x119666cu;
    { uint32_t ea = 0x8aa410u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118ef78u;
    { uint32_t ea = 0x8aa41cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa420u; f_34b2c8(c);
    c->r[0] = 0x1196688u;
    { uint32_t ea = 0x8aa42cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e77cu;
    { uint32_t ea = 0x8aa438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa43cu; f_5f8e40(c);
    c->r[0] = 0x1196678u;
    { uint32_t ea = 0x8aa448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e77cu;
    { uint32_t ea = 0x8aa454u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa458u; f_398824(c);
    c->r[0] = 0x1196660u;
    { uint32_t ea = 0x8aa464u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e910u;
    { uint32_t ea = 0x8aa470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa474u; f_475838(c);
    c->r[0] = 0x119662cu;
    { uint32_t ea = 0x8aa480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e730u;
    { uint32_t ea = 0x8aa48cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa490u; f_463d94(c);
    c->r[0] = 0x119662cu;
    { uint32_t ea = 0x8aa49cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118eb18u;
    { uint32_t ea = 0x8aa4a8u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa4acu; f_707efc(c);
    c->r[0] = 0x1196614u;
    { uint32_t ea = 0x8aa4b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118ec1cu;
    { uint32_t ea = 0x8aa4c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa4c8u; f_440ddc(c);
    c->r[0] = 0x11965fcu;
    { uint32_t ea = 0x8aa4d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118ece4u;
    { uint32_t ea = 0x8aa4e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa4e4u; f_3a4e78(c);
    c->r[0] = 0x11965e4u;
    { uint32_t ea = 0x8aa4f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1191ab4u;
    { uint32_t ea = 0x8aa4fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa500u; f_5f43e8(c);
    c->r[0] = 0x1196578u;
    { uint32_t ea = 0x8aa50cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e848u;
    { uint32_t ea = 0x8aa518u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa51cu; f_34c628(c);
    c->r[0] = 0x1196588u;
    { uint32_t ea = 0x8aa528u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x11903b4u;
    { uint32_t ea = 0x8aa534u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa538u; f_363ea8(c);
    c->r[0] = 0x1196594u;
    { uint32_t ea = 0x8aa544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e88cu;
    { uint32_t ea = 0x8aa550u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa554u; f_35c028(c);
    c->r[0] = 0x119657cu;
    { uint32_t ea = 0x8aa560u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e820u;
    { uint32_t ea = 0x8aa56cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa570u; f_739180(c);
    c->r[0] = 0x1196564u;
    { uint32_t ea = 0x8aa57cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x11902d0u;
    { uint32_t ea = 0x8aa588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa58cu; f_3c9460(c);
    c->r[0] = 0x119654cu;
    { uint32_t ea = 0x8aa598u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x118e634u;
    { uint32_t ea = 0x8aa5a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa5a8u; f_75d5fc(c);
    c->r[0] = 0x118e774u;
    { uint32_t ea = 0x8aa5b4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa5b8u; f_5b190c(c);
    c->r[0] = 0x118e7e0u;
    { uint32_t ea = 0x8aa5c4u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa5c8u; f_5d733c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa5d4u; f_70cbd0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa5dcu; f_5d7318(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa5e4u; f_5b1940(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0x8aa5f0u; f_8b1e6c(c);
    c->r[1] = 0x3682u;
    { uint32_t ea = c->r[6] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa600u; f_72139c(c);
    c->r[14] = 0x8aa604u; f_5ea570(c);
    c->r[14] = 0x8aa608u; f_5ef5fc(c);
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_8aa6d4(Cpu *restrict c) {
    FN_ENTER(0x8aa6d4u);
L_8aa6d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_HI) { goto L_8aa7f8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x8aa700u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x8aa748u: goto L_8aa748; case 0x8aa784u: goto L_8aa784; case 0x8aa790u: goto L_8aa790; case 0x8aa79cu: goto L_8aa79c; case 0x8aa7a8u: goto L_8aa7a8; case 0x8aa7f8u: goto L_8aa7f8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8aa748:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x42u);
    if (COND_EQ) { goto L_8aa7b4; }
    (void)f_subs(c, c->r[0], 0x41u);
    if (COND_EQ) { goto L_8aa7d4; }
    (void)f_subs(c, c->r[0], 0x40u);
    if (COND_NE) { goto L_8aa7f8; }
    c->r[0] = 0x41u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_8aa784:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_8a97ac(c);
L_8aa790:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_8a9cb8(c);
L_8aa79c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_8aa094(c);
L_8aa7a8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_8aa2ac(c);
L_8aa7b4:;
    c->r[14] = 0x8aa7b8u; f_85f118(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_8aa7d4:;
    c->r[0] = 0x118eb38u;
    c->r[1] = 0x6bfdu;
    { uint32_t ea = 0x8aa7e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x42u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_8aa7f8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_8aa800(Cpu *restrict c) {
    FN_ENTER(0x8aa800u);
L_8aa800:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x11962a4u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x8aa814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa818u; f_8af494(c);
    c->r[0] = 0x1196294u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa828u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa82cu; f_8af678(c);
    c->r[0] = 0x118eb48u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa83cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa840u; f_8b151c(c);
    c->r[0] = 0x119622cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa854u; f_8a8a9c(c);
    c->r[0] = 0x1196250u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa864u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa868u; f_8add34(c);
    c->r[0] = 0x1196248u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa878u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa87cu; f_8aeadc(c);
    c->r[0] = 0x1196238u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa88cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa890u; f_8b0a74(c);
    c->r[0] = 0x119620cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa8a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa8a4u; f_8b0600(c);
    c->r[0] = 0x1196214u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa8b8u; f_8b24d4(c);
    c->r[0] = 0x1196204u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa8c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa8ccu; f_8afdb4(c);
    c->r[0] = 0x11961f4u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa8dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa8e0u; f_8af930(c);
    c->r[0] = 0x11961e4u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa8f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa8f4u; f_8adba8(c);
    c->r[0] = 0x1196180u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa908u; f_8a8d3c(c);
    c->r[0] = 0x1196198u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa91cu; f_8ae460(c);
    c->r[0] = 0x11961acu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa92cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa930u; f_8ae19c(c);
    c->r[0] = 0x119619cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa940u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa944u; f_8b0da4(c);
    c->r[0] = 0x119618cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8aa958u; f_8afb70(c);
    c->r[0] = 0x119617cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x8aa968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_8b0fe0(c);
}
