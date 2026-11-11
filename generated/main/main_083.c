#include "cpu.h"
#include "neon_rt.h"
void f_240b10(Cpu *c);
void f_240b50(Cpu *c);
void f_25c018(Cpu *c);
void f_25c074(Cpu *c);
void f_25c264(Cpu *c);
void f_352960(Cpu *c);
void f_3687a8(Cpu *c);
void f_3688c8(Cpu *c);
void f_368e98(Cpu *c);
void f_3699bc(Cpu *c);
void f_369aa0(Cpu *c);
void f_369b08(Cpu *c);
void f_369c24(Cpu *c);
void f_3813bc(Cpu *c);
void f_381440(Cpu *c);
void f_3838fc(Cpu *c);
void f_41ba6c(Cpu *c);
void f_427a98(Cpu *c);
void f_427ae4(Cpu *c);
void f_427b3c(Cpu *c);
void f_427ba8(Cpu *c);
void f_476278(Cpu *c);
void f_47724c(Cpu *c);
void f_4772c4(Cpu *c);
void f_47bcd0(Cpu *c);
void f_4a05b8(Cpu *c);
void f_4a063c(Cpu *c);
void f_518f84(Cpu *c);
void f_5191a0(Cpu *c);
void f_5191d8(Cpu *c);
void f_5193a4(Cpu *c);
void f_519554(Cpu *c);
void f_51aa6c(Cpu *c);
void f_51abac(Cpu *c);
void f_5268d8(Cpu *c);
void f_526c78(Cpu *c);
void f_52a400(Cpu *c);
void f_5ea218(Cpu *c);
void f_5f8390(Cpu *c);
void f_5f9670(Cpu *c);
void f_5faf64(Cpu *c);
void f_5fc464(Cpu *c);
void f_5fe49c(Cpu *c);
void f_5ffcec(Cpu *c);
void f_603bec(Cpu *c);
void f_619414(Cpu *c);
void f_6288a8(Cpu *c);
void f_629760(Cpu *c);
void f_6660b4(Cpu *c);
void f_68a8e0(Cpu *c);
void f_68a950(Cpu *c);
void f_68a9c0(Cpu *c);
void f_68aa10(Cpu *c);
void f_68aa60(Cpu *c);
void f_68aab0(Cpu *c);
void f_68ab10(Cpu *c);
void f_68b074(Cpu *c);
void f_68b0c4(Cpu *c);
void f_68b114(Cpu *c);
void f_68b164(Cpu *c);
void f_68c4f0(Cpu *c);
void f_693c24(Cpu *c);
void f_693dcc(Cpu *c);
void f_69406c(Cpu *c);
void f_69576c(Cpu *c);
void f_695924(Cpu *c);
void f_695dac(Cpu *c);
void f_6963a0(Cpu *c);
void f_696500(Cpu *c);
void f_696d54(Cpu *c);
void f_697b84(Cpu *c);
void f_697cc0(Cpu *c);
void f_698144(Cpu *c);
void f_6985cc(Cpu *c);
void f_698f84(Cpu *c);
void f_69a3c8(Cpu *c);
void f_69a3e8(Cpu *c);
void f_69a41c(Cpu *c);
void f_69a458(Cpu *c);
void f_69a484(Cpu *c);
void f_69a4c4(Cpu *c);
void f_69a58c(Cpu *c);
void f_69a8d0(Cpu *c);
void f_69aad0(Cpu *c);
void f_6a1794(Cpu *c);
void f_6a18b4(Cpu *c);
void f_6a1b30(Cpu *c);
void f_6a1b34(Cpu *c);
void f_6a1b50(Cpu *c);
void f_6a1b6c(Cpu *c);
void f_6a1d34(Cpu *c);
void f_6a1e50(Cpu *c);
void f_6a2000(Cpu *c);
void f_6a2240(Cpu *c);
void f_6a2304(Cpu *c);
void f_6a2478(Cpu *c);
void f_6a247c(Cpu *c);
void f_6a24dc(Cpu *c);
void f_6a24f8(Cpu *c);
void f_6a2d88(Cpu *c);
void f_6a2e90(Cpu *c);
void f_6a2ed0(Cpu *c);
void f_6a2f14(Cpu *c);
void f_6a2f5c(Cpu *c);
void f_6a2fe4(Cpu *c);
void f_6a3164(Cpu *c);
void f_6a31f0(Cpu *c);
void f_6eeaa4(Cpu *c);
void f_6ef334(Cpu *c);
void f_6ef3f0(Cpu *c);
void f_7045dc(Cpu *c);
void f_71a6f4(Cpu *c);
void f_71a730(Cpu *c);
void f_739820(Cpu *c);
void f_73985c(Cpu *c);
void f_739bd8(Cpu *c);
void f_739d50(Cpu *c);
void f_739d54(Cpu *c);
void f_739d74(Cpu *c);
void f_739d78(Cpu *c);
void f_739de0(Cpu *c);
void f_739f4c(Cpu *c);
void f_73aa70(Cpu *c);
void f_73aa84(Cpu *c);
void f_73b500(Cpu *c);
void f_85dd68(Cpu *c);
void f_866bac(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c6914(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a8e6dc(Cpu *c);
void f_a8e71c(Cpu *c);
void f_a8f62c(Cpu *c);
void f_a90adc(Cpu *c);
void f_aa7b50(Cpu *c);
void f_aa7dc4(Cpu *c);
void f_b3b124(Cpu *c);
void f_b65f08(Cpu *c);
void f_b65f48(Cpu *c);
void f_b66140(Cpu *c);
void f_b66880(Cpu *c);
void f_b67354(Cpu *c);
void f_b67378(Cpu *c);
void f_d0cab0(Cpu *c);
void f_d0ffb8(Cpu *c);
void f_e067ec(Cpu *c);
void f_e4754c(Cpu *c);
void f_e47dc8(Cpu *c);
void f_e47dec(Cpu *c);
void f_e47f68(Cpu *c);
void f_e482a0(Cpu *c);
void f_f10aa0(Cpu *c);
void f_f117e8(Cpu *c);
void f_f11fd4(Cpu *c);
void f_f245b4(Cpu *c);
void f_f24a1c(Cpu *c);
void f_f24c68(Cpu *c);
void f_f24e80(Cpu *c);
void f_f251e8(Cpu *c);
void f_f335dc(Cpu *c);
void f_f34460(Cpu *c);
void f_f498c8(Cpu *c);
void f_f49bec(Cpu *c);
void f_f55334(Cpu *c);
void f_f558b8(Cpu *c);
void f_f55b1c(Cpu *c);
void f_f627d8(Cpu *c);
void f_f63568(Cpu *c);
void f_f637b4(Cpu *c);
void f_f644e8(Cpu *c);
void f_f646a4(Cpu *c);
void f_f64930(Cpu *c);
void f_f6f660(Cpu *c);
void f_f6f9e4(Cpu *c);
void f_f7785c(Cpu *c);
void f_f77ae4(Cpu *c);
void f_f7fe94(Cpu *c);
void f_f80074(Cpu *c);
void f_f993d8(Cpu *c);
void f_f997e8(Cpu *c);
void f_f999c0(Cpu *c);
void f_f99e0c(Cpu *c);
void f_f9a21c(Cpu *c);
void f_f9a3f4(Cpu *c);
void f_fa6b54(Cpu *c);
void f_fa700c(Cpu *c);
void f_fa71cc(Cpu *c);
void f_fa7718(Cpu *c);
void f_fb634c(Cpu *c);
void f_fb6654(Cpu *c);
void f_fb6cc0(Cpu *c);
void f_fd0858(Cpu *c);
void f_fd0af0(Cpu *c);
void f_fd0cf0(Cpu *c);
void f_fd0fd0(Cpu *c);
void f_fd1164(Cpu *c);
void f_fd141c(Cpu *c);
void f_fd1638(Cpu *c);
void f_fdc7e0(Cpu *c);
void f_fe3ea4(Cpu *c);
void f_fe4184(Cpu *c);
void f_fe43e4(Cpu *c);
void f_ff11b4(Cpu *c);
void f_ff1720(Cpu *c);
void f_ff18d4(Cpu *c);
void f_ff1ba0(Cpu *c);
void f_100072c(Cpu *c);
void f_1000ccc(Cpu *c);
void f_1000f58(Cpu *c);
void f_1001170(Cpu *c);
void f_1001624(Cpu *c);
void f_1001b0c(Cpu *c);
void f_1012038(Cpu *c);
void f_1012434(Cpu *c);
void f_1012668(Cpu *c);
void f_1012b00(Cpu *c);
void f_101ddf4(Cpu *c);
void f_101e0dc(Cpu *c);
void f_101e448(Cpu *c);
void f_101e744(Cpu *c);
void f_103853c(Cpu *c);
void f_1038bf0(Cpu *c);
void f_1041658(Cpu *c);
void f_1041894(Cpu *c);
void f_1048fbc(Cpu *c);
void f_105c18c(Cpu *c);
void f_105c93c(Cpu *c);
void f_105cb64(Cpu *c);
void f_105cf28(Cpu *c);
void f_1066388(Cpu *c);
void f_1066a80(Cpu *c);
void f_1066c7c(Cpu *c);
void f_10752e8(Cpu *c);
void f_10756f0(Cpu *c);
void f_108516c(Cpu *c);
void f_108584c(Cpu *c);
void f_1085a9c(Cpu *c);
void f_1085da8(Cpu *c);
void f_1086300(Cpu *c);
void f_109176c(Cpu *c);
void f_1092008(Cpu *c);
void f_10a0cf8(Cpu *c);
void f_10a1020(Cpu *c);
void f_10a1350(Cpu *c);
void f_10a1824(Cpu *c);
void f_10ad6d8(Cpu *c);
void f_10adca0(Cpu *c);
void f_10ae090(Cpu *c);
void f_10ae584(Cpu *c);
void f_10ae808(Cpu *c);
void f_10b74dc(Cpu *c);
void f_10b794c(Cpu *c);
void f_10c754c(Cpu *c);
void f_10c7798(Cpu *c);
void f_10d26c4(Cpu *c);
void f_10d2ae8(Cpu *c);
void f_10d2d4c(Cpu *c);
void f_10d3078(Cpu *c);
void f_10d35bc(Cpu *c);
void f_10e26a4(Cpu *c);
void f_10ee46c(Cpu *c);
void f_10ee6c0(Cpu *c);
void f_110848c(Cpu *c);
void f_1108b38(Cpu *c);
void f_1109034(Cpu *c);
void f_11124f8(Cpu *c);
void f_11128a4(Cpu *c);
void f_1112e60(Cpu *c);
void f_1113078(Cpu *c);
void f_1113298(Cpu *c);
void f_1113508(Cpu *c);
void f_11136f0(Cpu *c);
void f_112624c(Cpu *c);
void f_1126560(Cpu *c);
void f_112683c(Cpu *c);
void f_1126bf4(Cpu *c);
void f_1126d80(Cpu *c);
void f_1135fdc(Cpu *c);
void f_1136648(Cpu *c);
void f_1136888(Cpu *c);
void f_113758c(Cpu *c);
void f_1137dcc(Cpu *c);
void f_114b2b4(Cpu *c);
void f_1159b40(Cpu *c);
void f_115a018(Cpu *c);
void f_115a294(Cpu *c);
void f_115a854(Cpu *c);
void f_1168080(Cpu *c);
void f_11683a8(Cpu *c);
void f_11685d0(Cpu *c);
void f_1168aac(Cpu *c);
void f_117b5b0(Cpu *c);
void f_117ba30(Cpu *c);
void f_118bb08(Cpu *c);
void f_118bcc4(Cpu *c);
void f_119da04(Cpu *c);
void f_119df48(Cpu *c);
void f_11af568(Cpu *c);
void f_11af99c(Cpu *c);
void f_11afdc8(Cpu *c);
void f_11affe0(Cpu *c);
void f_11dc944(Cpu *c);
void f_11dcd0c(Cpu *c);
void f_11dcec8(Cpu *c);
void f_11f1cf0(Cpu *c);
void f_11f1f3c(Cpu *c);
void f_11f20e8(Cpu *c);
void f_120079c(Cpu *c);
void f_12009d0(Cpu *c);
void f_1200c34(Cpu *c);
void f_1212b54(Cpu *c);
void f_1213570(Cpu *c);
void f_1213abc(Cpu *c);
void f_12343cc(Cpu *c);
void f_1235e90(Cpu *c);
void f_12373b8(Cpu *c);
void f_12376f8(Cpu *c);
void f_125191c(Cpu *c);
void f_1251d8c(Cpu *c);
void f_1251fd0(Cpu *c);
void f_12522a4(Cpu *c);
void f_12525ec(Cpu *c);
void f_1264194(Cpu *c);
void f_1264864(Cpu *c);
void f_1264a7c(Cpu *c);
void f_1265c54(Cpu *c);
void f_1266164(Cpu *c);
void f_12666c0(Cpu *c);
void f_126691c(Cpu *c);
void f_1266c48(Cpu *c);
void f_128bdb4(Cpu *c);
void f_128c334(Cpu *c);
void f_128c830(Cpu *c);
void f_128cd58(Cpu *c);
void f_128d128(Cpu *c);
void f_128da78(Cpu *c);
void f_128dff0(Cpu *c);
void f_128e270(Cpu *c);
void f_12a56f4(Cpu *c);
void f_12a58cc(Cpu *c);
void f_12c5214(Cpu *c);
void f_12c53d0(Cpu *c);
void f_12c5724(Cpu *c);
void f_12c5ba8(Cpu *c);
void f_12c5fa4(Cpu *c);
void f_12c624c(Cpu *c);
void f_12c6ba0(Cpu *c);
void f_12c72b4(Cpu *c);
void f_12c76f0(Cpu *c);
void f_12c7a7c(Cpu *c);
void f_12c7e48(Cpu *c);
void f_12c829c(Cpu *c);
void f_12dda90(Cpu *c);
void f_12e265c(Cpu *c);
void f_12e28f4(Cpu *c);
void f_12edddc(Cpu *c);
void f_12f2210(Cpu *c);
void f_12f8888(Cpu *c);
void f_12fd908(Cpu *c);
void f_13065ec(Cpu *c);
void f_1309850(Cpu *c);
void f_1310430(Cpu *c);
void f_1321190(Cpu *c);
void f_15efd70(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15eff80(Cpu *c);
void f_15eff8c(Cpu *c);
void f_693964(Cpu *restrict c) {
    FN_ENTER(0x693964u);
L_693964:;
    __attribute__((musttail)) return f_6a1b30(c);
}
void f_693968(Cpu *restrict c) {
    FN_ENTER(0x693968u);
L_693968:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[14] = 0x693980u; f_6a2304(c);
    c->r[0] = 0x15acu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6939b0; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); } }
    goto L_6939b4;
L_6939b0:;
    c->r[0] = 0x0u;
L_6939b4:;
    c->r[1] = 0x15c4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6939fc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_693c08; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_6939fc:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xfe8u; uint32_t v = LD32(ea); c->r[2] = v; } }
    c->r[0] = 0x15b4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0x15b8u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x17u;
    c->r[0] = c->r[4];
    c->r[14] = 0x693a30u; f_693c24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_693aac; }
    { uint32_t ea = c->r[13] + 0x17u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_693aa4; }
    c->v.s[0] = LD32(c->r[4] + 28u);
    c->v.s[4] = 0x40400000u;
    c->v.s[2] = 0x43360b61u;
    c->v.s[6] = 0x3f000000u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0xfecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0xfffeu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x10000u;
    c->r[14] = c->r[1] - c->r[12];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[6]);
    c->r[3] = c->v.s[0];
    c->r[2] = c->r[3] + c->r[14];
    c->r[6] = c->r[6] & (c->r[3] << 1);
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_CC) { goto L_693aa8; }
    c->r[1] = c->r[14] & 0x8000u;
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_CS) { c->r[3] = 0x0u - c->r[3]; }
    c->r[1] = c->r[3] + c->r[12];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    goto L_693aa8;
L_693aa4:;
    { uint32_t ea = c->r[0] + 0xfecu; uint32_t v = LD32(ea); c->r[1] = v; }
L_693aa8:;
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[1]); }
L_693aac:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_693b2c; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_693b20; }
    c->r[3] = 0x14b8u;
    c->r[6] = 0x13a9a64u;
    c->v.s[4] = 0x3c23d70au;
    c->v.s[6] = 0x43360b61u;
    c->r[0] = c->r[0] + c->r[3];
    c->r[3] = 0x13a9a58u;
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = 0x693aecu + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { { uint32_t ea = 0x693afcu + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; } }
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = 0x0u - c->r[0];
L_693b20:;
    { uint32_t ea = c->r[1] + 0xfe8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xfecu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xff0u; ST32(ea, c->r[2]); }
L_693b2c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x693b34u; f_693dcc(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x693b3cu; f_69a484(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x693b4cu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x693b5cu; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_693c08; }
    c->r[1] = 0x0u;
    c->v.s[2] = 0x38c90fdbu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xfe8u;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = 0xfecu;
    c->r[1] = c->r[0] + c->r[1];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13], c->v.s[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + 0xff0u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[13];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 8u, c->v.s[0]);
    c->r[14] = 0x693bc0u; f_aa7dc4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x693bd0u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x693be0u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x693becu; f_69a458(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x3du;
    c->r[2] = c->r[2] & (c->r[1] >> 10);
    c->r[1] = c->r[1] & 0xffff03ffu;
    c->r[2] = (c->r[2] & 0xfffffffdu) | ((c->r[0] << 1) & 0x2u);
    c->r[0] = c->r[1] | (c->r[2] << 10);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_693c08:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_693c24(Cpu *restrict c) {
    FN_ENTER(0x693c24u);
L_693c24:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[10] = c->r[0];
    c->r[0] = 0x13a513cu;
    c->r[8] = c->r[1];
    { uint32_t ea = 0x693c44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x693c48u; f_4772c4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_693ce4; }
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_693ce4; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_693ce4; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_693ce4; }
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[2] = c->r[8];
    c->r[14] = 0x693c9cu; f_4a05b8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_693ce4; }
    c->v.s[0] = LD32(c->r[10] + 64u);
    c->v.s[4] = LD32(c->r[6] + 64u);
    c->v.s[2] = LD32(c->r[10] + 72u);
    c->v.s[6] = LD32(c->r[6] + 72u);
    c->v.s[8] = 0x0u;
    c->r[0] = 0x15b0u;
    c->r[0] = c->r[10] + c->r[0];
    c->v.s[10] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[2] = c->v.f[6] - c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[10] * c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_693db0; }
L_693ce4:;
    c->r[0] = 0x15b0u;
    c->v.s[16] = 0x0u;
    c->r[11] = 0x1054u;
    c->r[7] = 0x0u;
    c->r[9] = c->r[10] + c->r[0];
    c->r[0] = 0x13a5078u;
    c->r[5] = c->r[10] + c->r[11];
    { uint32_t ea = 0x693d08u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
L_693d04:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x693d10u; f_47724c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_693da0; }
    c->r[0] = c->r[6];
    c->r[14] = 0x693d24u; f_47bcd0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_693da0; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_693da0; }
    { uint32_t ea = c->r[6] + c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_693da0; }
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[2] = c->r[8];
    c->r[14] = 0x693d60u; f_4a05b8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_693da0; }
    c->v.s[0] = LD32(c->r[10] + 64u);
    c->v.s[4] = LD32(c->r[6] + 64u);
    c->v.s[2] = LD32(c->r[10] + 72u);
    c->v.s[6] = LD32(c->r[6] + 72u);
    c->v.s[8] = LD32(c->r[9]);
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.s[4] = c->v.s[16];
    c->v.f[2] = c->v.f[6] - c->v.f[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[8] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_693db0; }
L_693da0:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x4u);
    if (COND_CC) { goto L_693d04; }
    c->r[6] = 0x0u;
L_693db0:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_693dcc(Cpu *restrict c) {
    FN_ENTER(0x693dccu);
L_693dcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->v.s[16] = 0x3f800000u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15bcu;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x693df8u; f_73aa84(c);
    c->v.s[0] = c->v.s[16];
    c->r[5] = c->r[4] + 0x15c0u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x693e0cu; f_73aa84(c);
    c->r[0] = 0x15acu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_693e74; }
    c->r[1] = 0x15b4u;
    { uint32_t ea = c->r[0] + 0xfe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_693e74; }
    c->v.s[0] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_693e74; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41100000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a4d78u;
    { uint32_t ea = 0x693e68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x30u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x693e74u; f_6ef3f0(c);
L_693e74:;
    c->r[0] = 0x15b8u;
    { uint32_t ea = c->r[4] + 0xfecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_693ecc; }
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_693ecc; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41100000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a4d20u;
    { uint32_t ea = 0x693ec0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2eu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x693eccu; f_6ef3f0(c);
L_693ecc:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_693ee0(Cpu *restrict c) {
    FN_ENTER(0x693ee0u);
L_693ee0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x693ef0u; f_6a2478(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b3b124(c);
}
void f_693f00(Cpu *restrict c) {
    FN_ENTER(0x693f00u);
L_693f00:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x693f1cu; f_69a41c(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_694054; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x13a4c78u;
    { uint32_t ea = 0x693f3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x693f4cu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x693f60u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[1] = 0x15a4u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x15a8u;
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x15b0u;
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x15b4u;
    c->r[1] = 0x15b8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x693fc4u; f_69406c(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[7], 0x1au);
    if (COND_NE) { goto L_694054; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x42c80000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[2] = c->r[13] + 0x10u;
    ST32(c->r[13] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x1060u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = 0x13a52e0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x694040u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694044u; f_381440(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    ST32(c->r[13] + 36u, c->v.s[0]);
    c->r[14] = 0x694054u; f_6a2d88(c);
L_694054:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_69406c(Cpu *restrict c) {
    FN_ENTER(0x69406cu);
L_69406c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1370u;
    c->r[1] = 0x10u;
    c->r[14] = 0x694084u; f_739820(c);
    c->r[1] = 0x8u;
    c->r[5] = c->r[0];
    c->r[14] = 0x694090u; f_73985c(c);
    c->r[0] = 0x15acu;
    c->r[6] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[5]); c->r[6] = ea; }
    c->r[0] = 0x13a4c7cu;
    { uint32_t ea = 0x6940b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1197798u;
    c->r[3] = 0x6940c0u + c->r[1];
    c->r[1] = c->r[5];
    c->r[14] = 0x6940c4u; f_5ea218(c);
    c->r[0] = 0x13a4ca8u;
    { uint32_t ea = 0x6940d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6940e0u; rt_dispatch(c);
    c->r[0] = c->r[0] - 0x9u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_694154; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x6940f8u + 0x8u;
    c->r[1] = 0xd40bu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x69414cu: goto L_69414c; case 0x694154u: goto L_694154; case 0x69415cu: goto L_69415c; case 0x694164u: goto L_694164; case 0x69416cu: goto L_69416c; case 0x694174u: goto L_694174; case 0x69417cu: goto L_69417c; case 0x694180u: goto L_694180; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_69414c:;
    c->r[1] = 0xd412u;
    goto L_694180;
L_694154:;
    c->r[1] = 0x0u;
    goto L_694180;
L_69415c:;
    c->r[1] = 0xd416u;
    goto L_694180;
L_694164:;
    c->r[1] = 0xd418u;
    goto L_694180;
L_69416c:;
    c->r[1] = 0xd41fu;
    goto L_694180;
L_694174:;
    c->r[1] = 0xd431u;
    goto L_694180;
L_69417c:;
    c->r[1] = 0xd41bu;
L_694180:;
    c->r[0] = 0x13a51c8u;
    { uint32_t ea = 0x69418cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x694190u; f_352960(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6941cc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6941b0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x6941ccu; f_a87660(c);
L_6941cc:;
    c->r[0] = 0x13a4ba0u;
    { uint32_t ea = 0x6941d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6941e8u; rt_dispatch(c);
    c->r[0] = c->r[0] - 0x9u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_69425c; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x694200u + 0x8u;
    c->r[1] = 0xd40cu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x694254u: goto L_694254; case 0x69425cu: goto L_69425c; case 0x694264u: goto L_694264; case 0x69426cu: goto L_69426c; case 0x694274u: goto L_694274; case 0x69427cu: goto L_69427c; case 0x694284u: goto L_694284; case 0x694288u: goto L_694288; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_694254:;
    c->r[1] = 0xd413u;
    goto L_694288;
L_69425c:;
    c->r[1] = 0x0u;
    goto L_694288;
L_694264:;
    c->r[1] = 0xd417u;
    goto L_694288;
L_69426c:;
    c->r[1] = 0xd419u;
    goto L_694288;
L_694274:;
    c->r[1] = 0xd420u;
    goto L_694288;
L_69427c:;
    c->r[1] = 0xd432u;
    goto L_694288;
L_694284:;
    c->r[1] = 0xd41cu;
L_694288:;
    c->r[0] = 0x13a50c0u;
    { uint32_t ea = 0x694294u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x694298u; f_352960(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_694318; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694308; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x6942c0u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x6942e4u; rt_dispatch(c);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42960000u;
    c->r[3] = c->r[2] + 0x3c0000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_694308:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87660(c);
L_694318:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_694338(Cpu *restrict c) {
    FN_ENTER(0x694338u);
L_694338:;
    c->r[1] = 0x15c4u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    return;
}
void f_694348(Cpu *restrict c) {
    FN_ENTER(0x694348u);
L_694348:;
    return;
}
void f_69434c(Cpu *restrict c) {
    FN_ENTER(0x69434cu);
L_69434c:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_694350(Cpu *restrict c) {
    FN_ENTER(0x694350u);
L_694350:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_694354(Cpu *restrict c) {
    FN_ENTER(0x694354u);
L_694354:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_694358(Cpu *restrict c) {
    FN_ENTER(0x694358u);
L_694358:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a9558u;
    { uint32_t ea = 0x69436cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69436cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_694384(Cpu *restrict c) {
    FN_ENTER(0x694384u);
L_694384:;
    c->r[0] = 0x13a9534u;
    { uint32_t ea = 0x694390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_694394(Cpu *restrict c) {
    FN_ENTER(0x694394u);
L_694394:;
    c->r[0] = 0x13a951cu;
    { uint32_t ea = 0x6943a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6943a4(Cpu *restrict c) {
    FN_ENTER(0x6943a4u);
L_6943a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13fe490u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x6943d0u + c->r[0];
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
    c->r[14] = 0x69442cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x694444u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x69445cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a93d4u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15d0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a941cu;
    { uint32_t ea = 0x694498u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10d19b0u;
    { uint32_t ea = 0x6944a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6944a4u + c->r[1];
    c->r[14] = 0x6944a4u; f_9aedcc(c);
    c->r[1] = 0x13a940cu;
    c->r[3] = 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x6944c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13a7f34u;
    c->r[0] = 0x13a93e8u;
    { uint32_t ea = 0x6944d4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10d1980u;
    { uint32_t ea = 0x6944dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6944e0u + c->r[1];
    c->r[14] = 0x6944e0u; f_9aedcc(c);
    c->r[1] = 0x13a93e4u;
    { uint32_t ea = 0x6944ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_69451c(Cpu *restrict c) {
    FN_ENTER(0x69451cu);
L_69451c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a93a8u;
    { uint32_t ea = 0x69452cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x694530u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15b0u;
    c->pc = c->r[4]; c->r[14] = 0x694548u; rt_dispatch(c);
    c->r[14] = 0x69454cu; f_69a3c8(c);
    c->r[1] = 0x13a9380u;
    { uint32_t ea = 0x694558u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_694568(Cpu *restrict c) {
    FN_ENTER(0x694568u);
L_694568:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a9364u;
    { uint32_t ea = 0x694578u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69457cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x20u;
    c->pc = c->r[4]; c->r[14] = 0x694594u; rt_dispatch(c);
    c->r[2] = 0x13a932cu;
    c->r[1] = 0x196u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x6945b4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0x13a4588u;
    { uint32_t ea = 0x6945c4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6945ec(Cpu *restrict c) {
    FN_ENTER(0x6945ecu);
L_6945ec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a92d8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x694604u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x694608u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_694628(Cpu *restrict c) {
    FN_ENTER(0x694628u);
L_694628:;
    __attribute__((musttail)) return f_69a3e8(c);
}
void f_69462c(Cpu *restrict c) {
    FN_ENTER(0x69462cu);
L_69462c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x694638u; f_69a3e8(c);
    c->r[0] = 0x13a9290u;
    { uint32_t ea = 0x694644u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694644u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69465c(Cpu *restrict c) {
    FN_ENTER(0x69465cu);
L_69465c:;
    __attribute__((musttail)) return f_6a1b30(c);
}
void f_694660(Cpu *restrict c) {
    FN_ENTER(0x694660u);
L_694660:;
    __attribute__((musttail)) return f_6a1b34(c);
}
void f_694664(Cpu *restrict c) {
    FN_ENTER(0x694664u);
L_694664:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0xf8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x694680u; f_69a41c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_69473c; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x40u; ST32(ea, c->r[0]); c->r[6] = ea; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6946c4u; rt_dispatch(c);
    c->r[5] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x6946d0u; f_240b10(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6946e0u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x1054u;
    c->r[1] = ~0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x694708u; f_6a1d34(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x694718u; f_6a2f5c(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_694730; }
    c->r[2] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[14] = 0x694730u; f_6a1e50(c);
L_694730:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x694738u; f_240b50(c);
    c->r[0] = 0x1u;
L_69473c:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_694744(Cpu *restrict c) {
    FN_ENTER(0x694744u);
L_694744:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0xf8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[14] = 0x694760u; f_6a2304(c);
    c->r[1] = 0x13a443cu;
    c->r[0] = 0x1054u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = 0x694778u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_694880; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_694874; }
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x6947a8u; f_73aa70(c);
    c->v.s[16] = LD32(c->r[5]);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x6947b8u; f_6a2ed0(c);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_694874; }
    c->r[8] = c->r[13] + 0x10u;
    c->r[0] = c->r[8];
    c->r[14] = 0x6947d0u; f_240b10(c);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x40u; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6947e4u; rt_dispatch(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0x69480cu; f_6a1d34(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x69481cu; f_6a2f5c(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_694834; }
    c->r[2] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[14] = 0x694834u; f_6a1e50(c);
L_694834:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x69483cu; f_240b50(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[6] = c->r[0] + 0x100u;
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    c->r[14] = 0x69485cu; f_6a2e90(c);
    c->r[1] = (c->r[6] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_694874; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffff00u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_694874:;
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_694880:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6948a0(Cpu *restrict c) {
    FN_ENTER(0x6948a0u);
L_6948a0:;
    return;
}
void f_6948a4(Cpu *restrict c) {
    FN_ENTER(0x6948a4u);
L_6948a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->r[5] = c->r[2];
    c->v.s[0] = LD32(c->r[4] + 64u);
    c->v.s[2] = LD32(c->r[4] + 72u);
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    c->v.f[1] = c->v.f[2] - c->v.f[6];
    c->r[14] = 0x6948ccu; f_15efd70(c);
    c->v.s[2] = 0x4622f983u;
    c->v.s[4] = 0x3f000000u;
    c->r[1] = ~0x1800u;
    c->r[2] = 0xcfffu;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[5] - c->r[0];
    c->r[1] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1378u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x1u;
    c->r[1] = (c->r[1] & 0xffff0000u) | ((c->r[0] << 0) & 0xffffu);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_694920(Cpu *restrict c) {
    FN_ENTER(0x694920u);
L_694920:;
    return;
}
void f_694924(Cpu *restrict c) {
    FN_ENTER(0x694924u);
L_694924:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_694928(Cpu *restrict c) {
    FN_ENTER(0x694928u);
L_694928:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_69492c(Cpu *restrict c) {
    FN_ENTER(0x69492cu);
L_69492c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_694930(Cpu *restrict c) {
    FN_ENTER(0x694930u);
L_694930:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a8f98u;
    { uint32_t ea = 0x694944u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694944u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69495c(Cpu *restrict c) {
    FN_ENTER(0x69495cu);
L_69495c:;
    c->r[0] = 0x13a8f74u;
    { uint32_t ea = 0x694968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69496c(Cpu *restrict c) {
    FN_ENTER(0x69496cu);
L_69496c:;
    c->r[0] = 0x13a8f5cu;
    { uint32_t ea = 0x694978u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69497c(Cpu *restrict c) {
    FN_ENTER(0x69497cu);
L_69497c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13fdf58u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x6949a8u + c->r[0];
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
    c->r[14] = 0x694a04u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x694a1cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x694a34u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a8dfcu;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15b0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a8e5cu;
    { uint32_t ea = 0x694a70u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10d1402u;
    { uint32_t ea = 0x694a78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x694a7cu + c->r[1];
    c->r[14] = 0x694a7cu; f_9aedcc(c);
    c->r[1] = 0x13a8e4cu;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x694a98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13a795cu;
    c->r[0] = 0x13a8e28u;
    { uint32_t ea = 0x694aacu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10d13d2u;
    { uint32_t ea = 0x694ab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x694ab8u + c->r[1];
    c->r[14] = 0x694ab8u; f_9aedcc(c);
    c->r[1] = 0x13a8e24u;
    { uint32_t ea = 0x694ac4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_694af4(Cpu *restrict c) {
    FN_ENTER(0x694af4u);
L_694af4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a8de8u;
    { uint32_t ea = 0x694b04u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x694b08u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15f0u;
    c->pc = c->r[4]; c->r[14] = 0x694b20u; rt_dispatch(c);
    c->r[14] = 0x694b24u; f_69a3c8(c);
    c->r[1] = 0x13a8db8u;
    c->r[2] = 0x15a8u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x694b38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[2] = 0x15b0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15acu;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15a4u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15c4u;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x15c8u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x15e4u;
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[2] = 0x15c0u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15bcu;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15b8u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15b4u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15dcu;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15d8u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15d4u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15d0u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15ccu;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x15e0u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x15e6u;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[2] = 0x15e7u;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_694be8(Cpu *restrict c) {
    FN_ENTER(0x694be8u);
L_694be8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a8cfcu;
    { uint32_t ea = 0x694bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x694bfcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x694c14u; rt_dispatch(c);
    c->r[2] = 0x13a8cc4u;
    c->r[1] = 0x197u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x694c34u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_694c48(Cpu *restrict c) {
    FN_ENTER(0x694c48u);
L_694c48:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a8c94u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x694c60u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x694c64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_694c84(Cpu *restrict c) {
    FN_ENTER(0x694c84u);
L_694c84:;
    __attribute__((musttail)) return f_69a3e8(c);
}
void f_694c88(Cpu *restrict c) {
    FN_ENTER(0x694c88u);
L_694c88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x694c94u; f_69a3e8(c);
    c->r[0] = 0x13a8c4cu;
    { uint32_t ea = 0x694ca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694ca0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_694cb8(Cpu *restrict c) {
    FN_ENTER(0x694cb8u);
L_694cb8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15a4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694cfc; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_694cf4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x694cf4u; rt_dispatch(c);
L_694cf4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_694cfc:;
    c->r[0] = 0x15a8u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694d38; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_694d30; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x694d30u; rt_dispatch(c);
L_694d30:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_694d38:;
    c->r[0] = 0x15acu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694d74; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_694d6c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x694d6cu; rt_dispatch(c);
L_694d6c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_694d74:;
    c->r[0] = c->r[4];
    c->r[14] = 0x694d7cu; f_6a247c(c);
    c->r[0] = 0x15c0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694d9c; }
    c->r[14] = 0x694d94u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_694d9c:;
    c->r[0] = 0x15bcu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694dbc; }
    c->r[14] = 0x694db4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_694dbc:;
    c->r[0] = 0x15c8u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_694df0; }
    c->r[0] = 0x13a4544u;
    { uint32_t ea = 0x694ddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694de8; }
    c->r[14] = 0x694de8u; f_e482a0(c);
L_694de8:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_694df0:;
    c->r[0] = 0x15c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x13a4514u;
    { uint32_t ea = 0x694e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_694e18; }
    c->r[14] = 0x694e18u; f_e482a0(c);
L_694e18:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_694e2c(Cpu *restrict c) {
    FN_ENTER(0x694e2cu);
L_694e2c:;
    __attribute__((musttail)) return f_6a1b30(c);
}
void f_694e30(Cpu *restrict c) {
    FN_ENTER(0x694e30u);
L_694e30:;
    __attribute__((musttail)) return f_6a1b34(c);
}
void f_694e34(Cpu *restrict c) {
    FN_ENTER(0x694e34u);
L_694e34:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x694e58u; f_69a41c(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6956fc; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[2]; c->r[14] = 0x694e78u; rt_dispatch(c);
    c->r[0] = 0x1054u;
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_694ea8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_694ec8; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xdu;
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    goto L_694eb4;
L_694ea8:;
    c->r[0] = 0xau;
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[10] + 0x4u; ST16(ea, c->r[0]); }
L_694eb4:;
    c->r[0] = c->r[10];
    c->r[14] = 0x694ebcu; f_6a2ed0(c);
    c->r[0] = 0x15e0u;
    c->r[0] = c->r[10] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
L_694ec8:;
    c->r[0] = 0x13a3ea0u;
    c->r[1] = 0x13a4478u;
    { uint32_t ea = 0x694ed8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x694edcu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd422u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694ee4u; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6956fc; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[2]; c->r[14] = 0x694f04u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x4u;
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[10] + 0x100u; ST32(ea, c->r[8]); }
    c->r[14] = 0x694f20u; f_a87660(c);
    c->r[0] = 0x13a3e48u;
    c->r[1] = 0x13a4420u;
    { uint32_t ea = 0x694f30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x694f34u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd423u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694f3cu; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6956fc; }
    c->r[0] = 0x1020u;
    c->r[1] = 0x10u;
    c->r[14] = 0x694f54u; f_71a6f4(c);
    c->r[7] = c->r[0];
    c->r[14] = 0x694f5cu; f_71a730(c);
    c->r[0] = 0x15a4u;
    c->r[4] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); c->r[4] = ea; }
    c->r[0] = 0x13a3da8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x11968d8u;
    { uint32_t ea = 0x694f84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x694f88u + c->r[1];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694f90u; f_5ea218(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x694fa8u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x100u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0xfd1u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0] | (c->r[1] << 8);
    { uint32_t ea = c->r[7] + 0x2u; ST8(ea, c->r[2]); }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[1] = c->r[1] | 0x8000u;
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x694fdcu; f_a87660(c);
    c->r[0] = 0x13a3d8cu;
    c->r[1] = 0x13a4364u;
    { uint32_t ea = 0x694fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x694ff0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd424u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x694ff8u; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6956fc; }
    c->r[0] = 0x1020u;
    c->r[1] = 0x10u;
    c->r[14] = 0x695010u; f_71a6f4(c);
    c->r[7] = c->r[0];
    c->r[14] = 0x695018u; f_71a730(c);
    c->r[0] = 0x15a8u;
    c->r[8] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[7]); c->r[8] = ea; }
    c->r[0] = 0x13a3cecu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x119681cu;
    { uint32_t ea = 0x695040u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x695044u + c->r[1];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69504cu; f_5ea218(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x695064u; rt_dispatch(c);
    c->r[4] = 0x4u;
    { uint32_t ea = c->r[7] + 0x100u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0xfd1u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0] | (c->r[1] << 8);
    { uint32_t ea = c->r[7] + 0x2u; ST8(ea, c->r[2]); }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[1] = c->r[1] | 0x8000u;
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[7] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x69509cu; f_a87660(c);
    c->r[0] = 0x13a3cccu;
    c->r[1] = 0x13a42a4u;
    { uint32_t ea = 0x6950acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6950b0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd425u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6950b8u; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6956fc; }
    c->r[0] = 0x1020u;
    c->r[1] = 0x10u;
    c->r[14] = 0x6950d0u; f_71a6f4(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x6950d8u; f_71a730(c);
    c->r[0] = 0x15acu;
    c->r[7] = c->r[10];
    c->r[1] = 0x1u;
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[5]); c->r[7] = ea; }
    c->r[0] = 0x13a3c2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x119675cu;
    { uint32_t ea = 0x695100u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x695104u + c->r[1];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69510cu; f_5ea218(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x695124u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x100u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xfd1u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0] | (c->r[1] << 8);
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[2]); }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[1] = c->r[1] | 0x8000u;
    c->r[1] = (c->r[1] >> 8);
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x695158u; f_a87660(c);
    c->r[0] = 0x13a3c10u;
    c->r[1] = 0x13a8790u;
    { uint32_t ea = 0x695168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x69516cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd426u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695174u; f_352960(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6951f0; }
    c->r[0] = 0x15bcu;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); c->r[4] = ea; }
    c->r[0] = c->r[5];
    c->r[14] = 0x695194u; f_a87648(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x69519cu; f_a87660(c);
    c->r[0] = 0x13a415cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[6] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x11u;
    { uint32_t ea = 0x6951c4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6951c8u; f_e47f68(c);
    c->r[2] = c->r[0];
    c->r[5] = 0x15c4u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[10] + c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6951e0u; f_e47dc8(c);
    { uint32_t ea = c->r[10] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x6951f0u; f_e47dec(c);
L_6951f0:;
    c->r[0] = 0x13a3b78u;
    c->r[1] = 0x13a86f8u;
    { uint32_t ea = 0x695200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x695204u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd427u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69520cu; f_352960(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_695288; }
    c->r[0] = 0x15c0u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); c->r[4] = ea; }
    c->r[0] = c->r[5];
    c->r[14] = 0x69522cu; f_a87648(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x695234u; f_a87660(c);
    c->r[0] = 0x13a40c4u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[6] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x22u;
    { uint32_t ea = 0x69525cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695260u; f_e47f68(c);
    c->r[2] = c->r[0];
    c->r[5] = 0x15c8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[10] + c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695278u; f_e47dc8(c);
    { uint32_t ea = c->r[10] + c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x695288u; f_e47dec(c);
L_695288:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x40e00000u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_6952ac; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6952cc; }
    c->r[1] = 0x0u;
    goto L_6952b0;
L_6952ac:;
    c->r[1] = 0x1u;
L_6952b0:;
    c->r[0] = c->r[10];
    c->r[14] = 0x6952b8u; f_6a2ed0(c);
    c->v.s[2] = 0x3c8efa36u;
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    goto L_6952d0;
L_6952cc:;
    c->v.s[16] = 0x0u;
L_6952d0:;
    c->r[0] = 0x15a4u;
    c->r[5] = c->r[10];
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x6952f0u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[1] = c->r[9] + 0x27c0000u;
    c->r[2] = c->r[9] + 0x1540000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + 0x44u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 16u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x695328u; f_aa7dc4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[2] = c->r[2] | 0x200u;
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43960000u;
    { uint32_t ea = c->r[0] + 0xfdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[2] = c->r[2] | 0x800u;
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = c->r[9] + 0x1000000u;
    c->r[2] = c->r[9] + 0x2500000u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xff0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xff4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xff8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xffcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[3] = c->r[2] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[4]); }
    c->r[3] = c->r[3] | (c->r[4] << 16);
    c->r[4] = 0x8000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x438d0000u;
    c->r[3] = c->r[3] | 0x1000u;
    c->r[3] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[6]); }
    c->r[2] = 0x1004u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x3d8000u;
    c->r[2] = 0x1008u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xfd3u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = (c->r[1] >> 8);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[0] + 0xfd2u; ST8(ea, c->r[2]); }
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[0] + 0xfd1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xfd3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = ~0x0u;
    c->pc = c->r[3]; c->r[14] = 0x69544cu; rt_dispatch(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + 0xc00000u;
    c->r[2] = c->r[9] + 0x2100000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + 0x44u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[2] = c->r[2] | 0x200u;
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43960000u;
    { uint32_t ea = c->r[0] + 0xfdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[2] = c->r[2] | 0x800u;
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = c->r[9] + 0x17c0000u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xff0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xff4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xff8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xffcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[3] = 0x6u;
    c->r[2] = c->r[2] | 0x1000u;
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x1000u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x1004u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[9]); }
    c->r[1] = 0x1008u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xfd3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; ST8(ea, c->r[3]); }
    c->r[1] = (c->r[1] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = (c->r[1] >> 8);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[0] + 0xfd2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xfd3u; ST8(ea, c->r[1]); }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x695578u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xc000u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[4] + 0x240000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x44140000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc3480000u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[2] = c->r[2] | 0x200u;
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x438c0000u;
    { uint32_t ea = c->r[0] + 0xfdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[1] | (c->r[2] << 8);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[3]); }
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[3] = 0x2u;
    c->r[2] = c->r[2] | 0x2000u;
    c->r[2] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc3d70000u;
    { uint32_t ea = c->r[0] + 0xfe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xfd2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xfd3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xfd1u; ST8(ea, c->r[3]); }
    c->r[1] = (c->r[1] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = (c->r[1] >> 8);
    c->r[1] = (c->r[1] >> 16);
    { uint32_t ea = c->r[0] + 0xfd2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xfd3u; ST8(ea, c->r[1]); }
    c->r[0] = 0x58u;
    c->r[1] = 0x10u;
    c->r[14] = 0x695648u; f_b65f08(c);
    c->r[14] = 0x69564cu; f_b65f48(c);
    c->r[4] = 0x15ccu;
    c->r[1] = 0x13a51e8u;
    { uint32_t ea = c->r[10] + c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x13a370cu;
    { uint32_t ea = 0x695664u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd421u;
    { uint32_t ea = 0x69566cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695670u; f_352960(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x695680u; f_b66880(c);
    c->r[7] = c->r[10] + c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_695694; }
    c->r[0] = c->r[5];
    c->r[14] = 0x695694u; f_a87660(c);
L_695694:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x6956a4u; f_b66140(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x41u; ST8(ea, c->r[6]); }
    c->r[0] = 0x13a3664u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x6956c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6956ccu; f_e067ec(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x6956d8u; f_b67354(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6956ec; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6956ecu; rt_dispatch(c);
L_6956ec:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[14] = 0x6956fcu; f_b67378(c);
L_6956fc:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_69576c(Cpu *restrict c) {
    FN_ENTER(0x69576cu);
L_69576c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_695894; }
    c->r[0] = 0x15dcu;
    c->r[5] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_695894; }
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x6957b4u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_695894; }
    c->r[0] = 0x15e4u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[14] = 0x6957d4u; f_6a2ed0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0x6957e4u; f_6a2ed0(c);
    c->r[0] = 0x13a33c0u;
    c->v.s[18] = c->v.s[0];
    { uint32_t ea = 0x6957f4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6957f8u; f_5f8390(c);
    (void)f_adds(c, c->r[0], 0x1u);
    c->v.s[20] = 0x2f800000u;
    c->r[1] = 0xau;
    if (COND_EQ) { c->r[0] = c->r[0] + 0x1u; }
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[4];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[5], c->v.s[16]);
    c->r[14] = 0x695824u; f_6a2ed0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xbu;
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0x695834u; f_6a2ed0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    c->r[14] = 0x695840u; f_5f8390(c);
    (void)f_adds(c, c->r[0], 0x1u);
    c->v.s[2] = 0x3c8efa36u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    if (COND_EQ) { c->r[0] = c->r[0] + 0x1u; }
    c->v.s[0] = c->r[0];
    c->r[0] = 0x1018u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a3358u;
    { uint32_t ea = 0x695888u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13eu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695894u; f_6ef3f0(c);
L_695894:;
    c->r[0] = 0x15e4u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_695904; }
    c->r[5] = c->r[13] + 0x10u;
    c->r[1] = c->r[4];
    c->r[0] = c->r[5];
    c->r[14] = 0x6958b8u; f_aa7b50(c);
    c->r[1] = 0x1195f9cu;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 24u);
    c->r[1] = 0x6958ccu + c->r[1];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1018u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[5];
    c->v.s[4] = c->r[0];
    c->r[0] = c->r[4];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 24u, c->v.s[2]);
    c->r[14] = 0x6958f8u; f_aa7dc4(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
L_695904:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_695924(Cpu *restrict c) {
    FN_ENTER(0x695924u);
L_695924:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13fd104u;
    c->r[0] = 0x69593cu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695a4c; }
    c->r[0] = 0x13fd0f0u;
    c->r[0] = 0x695950u + c->r[0];
    c->r[14] = 0x695950u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_695a4c; }
    c->r[0] = 0x13fd020u;
    c->r[1] = 0x1bu;
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    c->r[6] = 0x1cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x43480000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x432a0000u;
    c->r[0] = 0x695980u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->r[12] = c->r[0] + 0x5cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43aa0000u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43250000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc3aa0000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x438c0000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[3] = 0x19u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[6]); }
    c->r[6] = 0x8000u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xc3cf0000u;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc38c0000u;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1au;
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x43160000u;
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2d20000u;
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[2]); }
    c->r[0] = 0x13fcff4u;
    c->r[0] = 0x695a4cu + c->r[0];
    c->r[14] = 0x695a4cu; f_15eff8c(c);
L_695a4c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1054u;
    c->r[4] = 0xffffu;
    c->r[11] = 0x0u;
    c->r[6] = c->r[1] + c->r[0];
    c->r[0] = 0x13a3328u;
    { uint32_t ea = 0x695a6cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x13fcf2cu;
    c->r[8] = 0x695a74u + c->r[0];
    c->r[0] = 0x13a3318u;
    { uint32_t ea = 0x695a7cu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_695a78:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695a80u; f_51aa6c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_695b10; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x695aa0u; f_5191a0(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4eu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x50u; ST16(ea, c->r[4]); }
    c->r[1] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x695ac0u; f_5191d8(c);
    c->r[0] = 0x0u;
    c->r[10] = c->r[8] + c->r[11];
    c->r[2] = 0x2u;
    c->r[3] = 0xffu;
    { uint32_t ea = c->r[5] + 0x56u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x695ae8u; f_519554(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x58u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695b10u; f_51abac(c);
L_695b10:;
    c->r[11] = c->r[11] + 0x20u;
    (void)f_subs(c, c->r[11], 0xa0u);
    if (COND_NE) { goto L_695a78; }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_695b40(Cpu *restrict c) {
    FN_ENTER(0x695b40u);
L_695b40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[3] = c->r[1] - 0x19u;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_HI) { goto L_695c1c; }
    c->r[3] = (c->r[3] << 2);
    c->r[1] = 0x695b64u + 0x8u;
    c->r[12] = 0x407u;
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[1]; switch (c->pc) { case 0x695b7cu: goto L_695b7c; case 0x695bbcu: goto L_695bbc; case 0x695bf8u: goto L_695bf8; case 0x695c04u: goto L_695c04; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_695b7c:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[14]);
    (void)f_subs(c, c->r[3], 0xbu);
    if (COND_HI) { goto L_695c1c; }
    c->r[12] = 0x1u;
    c->r[1] = 0xc0fu;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[12], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_695c1c; }
    { uint32_t sc = 0; uint32_t r = c->r[14] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695c1c; }
    c->r[0] = 0x15e5u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_CC) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_695bbc:;
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_695be0; }
    c->r[1] = 0x15e7u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = (c->r[1] >> 3) & 0x7u;
    c->r[1] = c->r[1] & 0x7u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_695be0:;
    c->r[0] = 0x15e5u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_HI) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_695bf8:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    goto L_695c08;
L_695c04:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_695c08:;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0xbu);
    if (COND_CC) { c->r[12] = c->r[12] & 0x7ffu; }
    if (COND_CC) { c->r[0] = 0x1u; }
    if (COND_CC) { c->r[0] = c->r[0] & sh_lsr(c->r[12], c->r[2]); }
L_695c1c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_695c20(Cpu *restrict c) {
    FN_ENTER(0x695c20u);
L_695c20:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x695c30u; f_6a2304(c);
    c->r[1] = 0x15ccu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_695d90; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_695d88; }
    c->r[1] = 0x15b0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_695c84; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_695c84:;
    c->r[1] = 0x15b4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_695cb0; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_695cb0:;
    c->r[1] = 0x15b8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_695cdc; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_695cdc:;
    c->r[0] = 0x15e7u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_695d04; }
    c->r[0] = c->r[4];
    c->r[14] = 0x695cf8u; f_695924(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x80u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
L_695d04:;
    c->r[0] = c->r[4];
    c->r[14] = 0x695d0cu; f_695dac(c);
    c->r[0] = 0x15c8u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x695d24u; rt_dispatch(c);
    c->r[0] = 0x15c4u;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[9] = c->r[4] + 0x50u;
    c->r[8] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x13a35d8u;
    c->r[3] = c->r[9];
    { uint32_t ea = 0x695d48u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[2] >> 6) & 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[8];
    c->r[14] = 0x695d58u; f_e4754c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[9];
    c->r[2] = (c->r[2] >> 6) & 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[8];
    c->r[14] = 0x695d78u; f_e4754c(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_69a484(c);
L_695d88:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_695d90:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_695dac(Cpu *restrict c) {
    FN_ENTER(0x695dacu);
L_695dac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_HI) { goto L_695e28; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x695dd0u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x695e0cu: goto L_695e0c; case 0x695e18u: goto L_695e18; case 0x695f44u: goto L_695f44; case 0x695fd4u: goto L_695fd4; case 0x696064u: goto L_696064; case 0x6960f4u: goto L_6960f4; case 0x696184u: goto L_696184; case 0x696218u: goto L_696218; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_695e0c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    goto L_695e20;
L_695e18:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
L_695e20:;
    c->r[14] = 0x695e24u; f_696500(c);
L_695e24:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_695e28:;
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_695f40; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x695e40u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x695e54u: goto L_695e54; case 0x695ea0u: goto L_695ea0; case 0x695ec8u: goto L_695ec8; case 0x695ed4u: goto L_695ed4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_695e54:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 24));
    if (COND_NE) { goto L_695f40; }
    c->r[2] = 0x1u;
    c->r[0] = (c->r[0] & 0xffffffu) | ((c->r[2] << 24) & 0xff000000u);
    c->r[2] = 0xaaabu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15e6u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x15e7u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xc0u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 1);
    c->r[0] = (c->r[0] & 0xffffffc7u) | ((c->r[1] << 3) & 0x38u);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_695ea0:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 24));
    if (COND_EQ) { goto L_695f14; }
    c->r[1] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_695f40; }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xffffffu) | ((c->r[1] << 24) & 0xff000000u);
    c->r[1] = 0x2u;
    goto L_695ef8;
L_695ec8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_696d54(c);
L_695ed4:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 24));
    if (COND_EQ) { goto L_695f14; }
    c->r[1] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xffffffu) | ((c->r[1] << 24) & 0xff000000u);
    c->r[1] = 0x4u;
L_695ef8:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x695f04u; f_6a2ed0(c);
    c->r[0] = 0x1378u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_695f14:;
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x695f2cu; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); } }
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[0]); } }
L_695f40:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_695f44:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695e24; }
    c->r[0] = 0x15ccu;
    c->r[6] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x695f68u; f_6a2e90(c);
    c->v.s[0] = c->r[0];
    c->r[1] = 0x1u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[7] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x695f80u; f_b66140(c);
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x695f9cu; f_6a24dc(c);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_6962b0; }
L_695fa8:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x695fb4u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6962a8; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LT) { goto L_695fa8; }
    goto L_6962b0;
L_695fd4:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695e24; }
    c->r[0] = 0x15ccu;
    c->r[5] = c->r[4];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x695ff4u; f_6a2e90(c);
    c->v.s[0] = c->r[0];
    c->r[1] = 0x1u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[6] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69600cu; f_b66140(c);
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x696028u; f_6a24dc(c);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_6962b0; }
    c->r[5] = 0x0u;
L_696038:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x696044u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6962a8; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LT) { goto L_696038; }
    goto L_6962b0;
L_696064:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695e24; }
    c->r[0] = 0x15ccu;
    c->r[5] = c->r[4];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x696084u; f_6a2e90(c);
    c->v.s[0] = c->r[0];
    c->r[1] = 0x1u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[6] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69609cu; f_b66140(c);
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6960b8u; f_6a24dc(c);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_6962b0; }
    c->r[5] = 0x0u;
L_6960c8:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x6960d4u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6962a8; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LT) { goto L_6960c8; }
    goto L_6962b0;
L_6960f4:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695e24; }
    c->r[0] = 0x15ccu;
    c->r[5] = c->r[4];
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x696114u; f_6a2e90(c);
    c->v.s[0] = c->r[0];
    c->r[1] = 0x1u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[6] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69612cu; f_b66140(c);
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x696148u; f_6a24dc(c);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_6962b0; }
    c->r[5] = 0x0u;
L_696158:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x696164u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6962a8; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LT) { goto L_696158; }
    goto L_6962b0;
L_696184:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695e24; }
    c->r[0] = 0x15ccu;
    c->r[5] = c->r[4];
    c->r[1] = 0x6u;
    c->r[6] = 0x6u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6961a8u; f_6a2e90(c);
    c->v.s[0] = c->r[0];
    c->r[1] = 0x1u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[7] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6961c0u; f_b66140(c);
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6961dcu; f_6a24dc(c);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_6962cc; }
    c->r[5] = 0x0u;
L_6961ec:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x6961f8u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6962c4; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_LT) { goto L_6961ec; }
    goto L_6962cc;
L_696218:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_695e24; }
    c->r[0] = 0x15ccu;
    c->r[5] = c->r[4];
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x696238u; f_6a2e90(c);
    c->v.s[0] = c->r[0];
    c->r[1] = 0x1u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[6] + 52u, c->v.s[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696250u; f_b66140(c);
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x69626cu; f_6a24dc(c);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_6962b0; }
    c->r[5] = 0x0u;
L_69627c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x696288u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6962a8; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LT) { goto L_69627c; }
    goto L_6962b0;
L_6962a8:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
L_6962b0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    goto L_695e28;
L_6962c4:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
L_6962cc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[6] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    goto L_695e28;
}
void f_6962dc(Cpu *restrict c) {
    FN_ENTER(0x6962dcu);
L_6962dc:;
    __attribute__((musttail)) return f_a8f62c(c);
}
void f_6962e0(Cpu *restrict c) {
    FN_ENTER(0x6962e0u);
L_6962e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x6962f0u; f_6a2478(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b3b124(c);
}
void f_696300(Cpu *restrict c) {
    FN_ENTER(0x696300u);
L_696300:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0xffu);
    c->r[5] = c->r[3];
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[1]); } }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { c->r[0] = c->r[4]; }
    if (COND_NE) { c->r[1] = c->r[2]; }
    if (COND_NE) { c->r[14] = 0x696324u; f_6963a0(c); }
    (void)f_subs(c, c->r[5], 0xffu);
    if (COND_EQ) { goto L_69639c; }
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    (void)f_subs(c, c->r[5], 0x2u);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[2] = c->r[0] & 0xf8u;
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x15e6u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_696380; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_69639c; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    goto L_696398;
L_696380:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] & 0xfe0000u;
    (void)f_subs(c, c->r[2], (c->r[1] >> 17));
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
L_696398:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_69639c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6963a0(Cpu *restrict c) {
    FN_ENTER(0x6963a0u);
L_6963a0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15e5u;
    (void)f_subs(c, c->r[1], 0x9u);
    c->r[5] = c->r[4];
    if (COND_CS) { c->r[1] = 0x9u; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6964f4; }
    c->r[0] = 0xaaabu;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    c->r[2] = c->r[4];
    c->r[3] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = 0xf8u;
    c->r[0] = c->r[0] & (c->r[1] << 2);
    c->r[1] = 0x15e7u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & 0xc7u;
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    c->r[0] = 0x15b8u;
    c->r[2] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x696418u; f_69a4c4(c);
    c->r[1] = 0x15acu;
    c->r[0] = 0x13a27b4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = 0x69642cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[1] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x151u;
    { uint32_t ea = c->r[4] - 0x558u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[14] = 0x69645cu; f_6ef334(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6964f4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[8] = 0x3u;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_LS) { c->r[8] = 0x2u; }
    if (COND_LS) { (void)f_subs(c, c->r[1], 0x5u); }
    if (COND_HI) { goto L_69648c; }
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_HI) { c->r[8] = 0x1u; }
L_69648c:;
    { uint32_t ea = c->r[0] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_6964f4; }
    c->r[5] = c->r[1] - 0x1u;
    c->r[6] = 0x0u;
    goto L_6964ac;
L_6964a4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
L_6964ac:;
    c->r[1] = c->r[6];
    c->r[14] = 0x6964b4u; f_a90adc(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[0] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_6964ec; }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[14] = 0x6964d4u; f_d0ffb8(c);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_6964ec; }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    c->r[14] = 0x6964ecu; f_d0cab0(c);
L_6964ec:;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_6964a4; }
L_6964f4:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_696500(Cpu *restrict c) {
    FN_ENTER(0x696500u);
L_696500:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[9] = c->r[1];
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[4];
    c->r[14] = 0x696528u; f_aa7b50(c);
    c->v.s[4] = 0x3f000000u;
    c->v.s[0] = 0x4622f983u;
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->r[1] = 0x1000u;
    c->v.s[6] = c->v.s[4];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[6]);
    c->v.s[6] = c->v.s[4];
    c->r[0] = c->v.s[2];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[6]);
    c->r[0] = c->v.s[2];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[13] + 24u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xff0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1004u;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1008u;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x100cu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_696d2c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x6965ccu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x6965e8u: goto L_6965e8; case 0x696624u: goto L_696624; case 0x6966c4u: goto L_6966c4; case 0x6967a0u: goto L_6967a0; case 0x696858u: goto L_696858; case 0x6968e4u: goto L_6968e4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_6965e8:;
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_696a88; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[6] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_696b20; }
    c->r[1] = 0x1feu;
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[0] = c->r[1] & (c->r[0] << 1);
    if (COND_NE) { goto L_696b18; }
    c->r[6] = c->r[0] - 0x7u;
    c->r[1] = c->r[0] - 0x8u;
    goto L_696b20;
L_696624:;
    c->v.s[16] = 0x3f800000u;
    c->r[0] = 0x15d4u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x696640u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_696d2c; }
    c->r[0] = 0x2u;
    c->r[5] = c->r[4];
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x15e7u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] & 0xbfu;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x1bu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696674u; f_b66140(c);
    c->r[0] = 0xeb15u;
    c->v.s[0] = 0xbf800000u;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[16] = COND_EQ ? c->v.s[16] : c->v.s[0];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_696bbc; }
    c->r[7] = 0x0u;
L_696698:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x6966a4u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_696bb8; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_LT) { goto L_696698; }
    goto L_696bbc;
L_6966c4:;
    c->r[0] = 0x15e4u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_696734; }
    c->r[6] = c->r[13] + 0x20u;
    c->r[1] = c->r[4];
    c->r[0] = c->r[6];
    c->r[14] = 0x6966e8u; f_aa7b50(c);
    c->r[1] = 0x119516cu;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 40u);
    c->r[1] = 0x6966fcu + c->r[1];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1018u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[6];
    c->v.s[4] = c->r[0];
    c->r[0] = c->r[4];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 40u, c->v.s[2]);
    c->r[14] = 0x696728u; f_aa7dc4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
L_696734:;
    c->r[0] = 0x15d4u;
    c->r[1] = 0x6u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->v.s[16] = LD32(c->r[6]);
    c->r[14] = 0x69674cu; f_6a2ed0(c);
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[16] = COND_EQ ? c->v.s[0] : c->v.s[2];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_696aac; }
    c->r[7] = 0x0u;
L_696774:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x696780u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_696aa8; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_LT) { goto L_696774; }
    goto L_696aac;
L_6967a0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x6967acu; f_69576c(c);
    c->r[0] = 0x15d8u;
    c->v.s[0] = 0x3f800000u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x6967c4u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_696804; }
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a23f8u;
    { uint32_t ea = 0x6967e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x139u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6967f4u; f_6ef3f0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x696800u; f_6a2ed0(c);
    ST32(c->r[6], c->v.s[0]);
L_696804:;
    c->r[0] = 0x15d0u;
    c->r[1] = 0x15ccu;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7u;
    c->v.s[16] = LD32(c->r[0] + 52u);
    c->r[0] = c->r[4];
    c->v.f[18] = (float)c->v.s[0];
    c->r[14] = 0x69682cu; f_6a2ed0(c);
    c->r[0] = 0x15e0u;
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    if (COND_NE) { goto L_696968; }
    c->v.f[0] = c->v.f[18] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_696978; }
    goto L_696d2c;
L_696858:;
    c->r[0] = 0x15d8u;
    c->v.s[0] = 0x3f800000u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x696870u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6968b0; }
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a234cu;
    { uint32_t ea = 0x696894u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x139u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6968a0u; f_6ef3f0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x6968acu; f_6a2ed0(c);
    ST32(c->r[6], c->v.s[0]);
L_6968b0:;
    c->r[1] = 0x15ccu;
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[1] + 52u);
    c->v.f[0] = (float)c->v.s[0];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    if (COND_NE) { goto L_6969bc; }
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_6969c4; }
    goto L_696d2c;
L_6968e4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x6968f0u; f_69576c(c);
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x15d4u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x696904u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_696d2c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[1]); }
    c->r[1] = ~0x3u;
    c->r[1] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_696d2c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x696934u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x696960u: goto L_696960; case 0x696d00u: goto L_696d00; case 0x696d08u: goto L_696d08; case 0x696d10u: goto L_696d10; case 0x696d18u: goto L_696d18; case 0x696d20u: goto L_696d20; case 0x696d2cu: goto L_696d2c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_696960:;
    c->r[1] = 0x1u;
    goto L_696d24;
L_696968:;
    c->v.f[0] = c->v.f[18] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_696d2c; }
L_696978:;
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_696c54; }
    c->r[6] = 0x0u;
L_696990:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x69699cu; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_696c4c; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_LT) { goto L_696990; }
    goto L_696c54;
L_6969bc:;
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_696d2c; }
L_6969c4:;
    ST32(c->r[1] + 52u, c->v.s[0]);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6969d4u; f_b66140(c);
    c->r[0] = 0x15b4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6969f8; }
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x6969f4u; f_52a400(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
L_6969f8:;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[1] = 0x5u;
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[6] = 0x5u;
    c->r[5] = 0x0u;
    if (COND_NE) { c->r[1] = 0x6u; }
    c->r[14] = 0x696a1cu; f_69a4c4(c);
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a21a8u;
    { uint32_t ea = 0x696a38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13bu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696a44u; f_6ef3f0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x696a4cu; f_6a24dc(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x15d4u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[6]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40c00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x15dcu;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfa36u;
    c->r[0] = 0x15e4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3c0e0000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1018u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_696d2c;
L_696a88:;
    c->r[1] = 0x1feu;
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[0] = c->r[1] & (c->r[0] << 1);
    if (COND_NE) { c->r[6] = c->r[0] - 0x14u; }
    if (COND_NE) { c->r[1] = c->r[0] - 0x13u; }
    if (COND_EQ) { c->r[6] = c->r[0] - 0x11u; }
    if (COND_EQ) { c->r[1] = c->r[0] - 0x12u; }
    goto L_696b20;
L_696aa8:;
    ST32(c->r[0] + 32u, c->v.s[16]);
L_696aac:;
    c->v.s[16] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x696ac0u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_696ca4; }
    c->r[0] = 0x3u;
    c->v.s[0] = 0xbf800000u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[16] = COND_EQ ? c->v.s[16] : c->v.s[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_696ca4; }
    c->r[5] = 0x0u;
L_696aec:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x696af8u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_696ca0; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LT) { goto L_696aec; }
    goto L_696ca4;
L_696b18:;
    c->r[1] = c->r[0] - 0xdu;
    c->r[6] = c->r[0] - 0xeu;
L_696b20:;
    c->r[0] = 0x15ccu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x696b34u; f_6a2e90(c);
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[7] + 52u, c->v.s[0]);
    c->r[14] = 0x696b4cu; f_6a2e90(c);
    c->r[1] = 0x15d0u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x15e0u;
    c->r[1] = c->r[4];
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    ST32(c->r[0] + 60u, c->v.s[0]);
    c->r[0] = 0x15e7u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[14] = 0x696b98u; f_b66140(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x696ba4u; f_6a2ed0(c);
    c->r[0] = 0x15d4u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[5]); }
    goto L_696d2c;
L_696bb8:;
    ST32(c->r[0] + 32u, c->v.s[16]);
L_696bbc:;
    c->r[0] = 0x15dcu;
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfa36u;
    c->r[0] = 0x15e4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3c0e0000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0x1018u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x696becu; f_6a2ed0(c);
    c->r[0] = 0x15b4u;
    c->r[1] = c->r[9];
    c->r[3] = 0x0u;
    ST32(c->r[6], c->v.s[0]);
    c->r[2] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x696c08u; f_69a4c4(c);
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a1fbcu;
    { uint32_t ea = 0x696c24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13au;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696c30u; f_6ef3f0(c);
    c->r[0] = 0x15d8u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x696c48u; f_6a2240(c);
    goto L_696d2c;
L_696c4c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
L_696c54:;
    c->r[0] = 0x15b4u;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[3] = 0x0u;
    c->r[2] = c->r[4] + c->r[0];
    if (COND_NE) { c->r[1] = 0x3u; }
    c->r[0] = c->r[4];
    c->r[14] = 0x696c74u; f_69a4c4(c);
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a1f50u;
    { uint32_t ea = 0x696c90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1feu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696c9cu; f_6ef3f0(c);
    goto L_696d2c;
L_696ca0:;
    ST32(c->r[0] + 32u, c->v.s[16]);
L_696ca4:;
    c->r[0] = 0x15d8u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x696cbcu; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_696d2c; }
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4];
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a1f00u;
    { uint32_t ea = 0x696ce0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x139u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696cecu; f_6ef3f0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x696cf8u; f_6a2ed0(c);
    ST32(c->r[5], c->v.s[0]);
    goto L_696d2c;
L_696d00:;
    c->r[1] = 0x2u;
    goto L_696d24;
L_696d08:;
    c->r[1] = 0x3u;
    goto L_696d24;
L_696d10:;
    c->r[0] = c->r[0] & 0xffff0000u;
    goto L_696d28;
L_696d18:;
    c->r[1] = 0xbu;
    goto L_696d24;
L_696d20:;
    c->r[1] = 0xau;
L_696d24:;
    c->r[0] = (c->r[0] & 0xffff0000u) | ((c->r[1] << 0) & 0xffffu);
L_696d28:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_696d2c:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_696d54(Cpu *restrict c) {
    FN_ENTER(0x696d54u);
L_696d54:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[0];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], (c->r[0] >> 24));
    if (COND_EQ) { goto L_696f20; }
    c->r[1] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_69701c; }
    c->r[1] = 0x15e5u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_696fe0; }
    c->r[0] = 0x15b0u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_696dc0; }
    c->r[0] = 0x13a1fc8u;
    { uint32_t ea = 0x696db8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696dbcu; f_4772c4(c);
    c->r[5] = c->r[0];
L_696dc0:;
    c->r[0] = 0x13a1fd0u;
    c->r[1] = 0x10u;
    { uint32_t ea = 0x696dd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x18u;
    c->r[14] = 0x696dd8u; f_6660b4(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x15a4u;
    c->r[2] = 0x1fu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x13a5770u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x696e08u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x696e24u; f_68c4f0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[9] = 0x3u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x7u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x696e48u; f_6a2ed0(c);
    c->r[0] = 0x1378u;
    c->r[4] = c->r[8];
    c->r[0] = c->r[8] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x15acu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_696ef0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_LS) { c->r[9] = 0x2u; }
    if (COND_LS) { (void)f_subs(c, c->r[1], 0x5u); }
    if (COND_HI) { goto L_696e88; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_HI) { c->r[9] = 0x1u; }
L_696e88:;
    { uint32_t ea = c->r[0] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_696ef0; }
    c->r[5] = c->r[1] - 0x1u;
    c->r[6] = 0x0u;
    goto L_696ea8;
L_696ea0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
L_696ea8:;
    c->r[1] = c->r[6];
    c->r[14] = 0x696eb0u; f_a90adc(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3fc00000u;
    { uint32_t sc = 0; uint32_t r = c->r[0] ^ 0x400000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_696ee8; }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[14] = 0x696ed0u; f_d0ffb8(c);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_696ee8; }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = c->r[9];
    c->r[14] = 0x696ee8u; f_d0cab0(c);
L_696ee8:;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_696ea0; }
L_696ef0:;
    c->r[0] = 0x15a8u;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x13a1cd0u;
    { uint32_t ea = 0x696f10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x133u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696f1cu; f_6ef3f0(c);
    goto L_69701c;
L_696f20:;
    c->v.s[16] = 0x3f800000u;
    c->r[0] = 0x1378u;
    c->r[5] = c->r[8] + c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x696f3cu; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_696f98; }
    c->r[1] = 0x13a1becu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x15a8u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x696f60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x696f60u; f_aa7dc4(c);
    c->r[0] = 0x15e5u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_696fe8; }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 1);
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_696ff0; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[8] + 0x6u; ST16(ea, c->r[0]); }
    goto L_69701c;
L_696f98:;
    c->v.s[18] = LD32(c->r[5]);
    c->r[0] = c->r[8];
    c->r[1] = 0x3u;
    c->r[14] = 0x696fa8u; f_6a2ed0(c);
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.s[2] = 0x3f860a93u;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[16] - c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x15a8u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x696fdcu; f_aa7dc4(c);
    goto L_69701c;
L_696fe0:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    goto L_697018;
L_696fe8:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    goto L_697018;
L_696ff0:;
    c->r[0] = 0x15e6u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0xea1eu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    if (COND_NE) { c->r[0] = c->r[0] | 0x30000u; }
L_697018:;
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_69701c:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_697040(Cpu *restrict c) {
    FN_ENTER(0x697040u);
L_697040:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    if (COND_NE) { c->r[0] = 0x15b0u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); } }
    c->r[0] = 0x13a1d14u;
    { uint32_t ea = 0x697068u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69706cu; f_427ba8(c);
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6970d0; }
    c->r[0] = 0x13a1cf8u;
    { uint32_t ea = 0x697084u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697088u; f_427a98(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6970d0; }
    c->r[0] = 0x13a1cd4u;
    c->r[1] = 0xd57u;
    { uint32_t ea = 0x6970a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0xd758u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    c->r[0] = 0x13a1cbcu;
    { uint32_t ea = 0x6970c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6970c4u; f_427ae4(c);
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_697338; }
L_6970d0:;
    c->r[8] = 0xffu;
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_HI) { goto L_6971fc; }
    c->r[0] = (c->r[6] << 2);
    c->r[1] = 0x6970e8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x697100u: goto L_697100; case 0x697168u: goto L_697168; case 0x6971ccu: goto L_6971cc; case 0x697204u: goto L_697204; case 0x697258u: goto L_697258; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_697100:;
    c->r[0] = c->r[4];
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[3] = c->r[2] + (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[3], 0xau);
    if (COND_HI) { goto L_6971fc; }
    c->r[3] = (c->r[3] << 2);
    c->r[7] = 0x697124u + 0x10u;
    c->r[2] = 0x7u;
    c->r[6] = 0xffu;
    c->r[5] = 0xffu;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[7]; switch (c->pc) { case 0x697160u: goto L_697160; case 0x6972c4u: goto L_6972c4; case 0x6972ccu: goto L_6972cc; case 0x6972e0u: goto L_6972e0; case 0x6972fcu: goto L_6972fc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_697160:;
    c->r[2] = 0x8u;
    goto L_6972e0;
L_697168:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[3], 0xau);
    if (COND_HI) { goto L_6971fc; }
    c->r[3] = (c->r[3] << 2);
    c->r[7] = 0x697188u + 0x10u;
    c->r[2] = 0x4u;
    c->r[6] = 0xffu;
    c->r[5] = 0xffu;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[7]; switch (c->pc) { case 0x6971c4u: goto L_6971c4; case 0x6972d4u: goto L_6972d4; case 0x6972dcu: goto L_6972dc; case 0x6972e0u: goto L_6972e0; case 0x6972fcu: goto L_6972fc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_6971c4:;
    c->r[2] = 0x5u;
    goto L_6972e0;
L_6971cc:;
    c->r[0] = 0x15e5u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0x3u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_6971fc; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6971ecu; f_6963a0(c);
    c->r[6] = 0xffu;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_697304; }
    goto L_697338;
L_6971fc:;
    c->r[6] = 0xffu;
    goto L_6972b4;
L_697204:;
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[2] = c->r[0] & 0xf8u;
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x15e6u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xea1eu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_6972b4; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    goto L_6972b0;
L_697258:;
    c->r[0] = 0x15e7u;
    c->r[1] = c->r[4];
    c->r[6] = 0x2u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[2] = c->r[0] & 0xf8u;
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x15e6u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0xea1eu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0xfe0000u;
    (void)f_subs(c, c->r[2], (c->r[1] >> 17));
    if (COND_NE) { goto L_6972b4; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
L_6972b0:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_6972b4:;
    c->r[5] = 0xffu;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_697304; }
    goto L_697338;
L_6972c4:;
    c->r[2] = 0x9u;
    goto L_6972e0;
L_6972cc:;
    c->r[2] = 0xdu;
    goto L_6972e0;
L_6972d4:;
    c->r[2] = 0x6u;
    goto L_6972e0;
L_6972dc:;
    c->r[2] = 0xcu;
L_6972e0:;
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[6] = 0xffu;
    c->r[5] = 0xffu;
    c->r[8] = c->r[2];
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_6972fc:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_697338; }
L_697304:;
    c->r[0] = 0x13a1a68u;
    c->r[1] = 0x6au;
    { uint32_t ea = 0x697314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697318u; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_697338; }
    c->r[1] = 0x1054u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x697338u; f_41ba6c(c);
L_697338:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_697354(Cpu *restrict c) {
    FN_ENTER(0x697354u);
L_697354:;
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
    c->r[14] = 0x69738cu; f_9bb638(c);
    c->r[1] = 0x10b997du;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6973a0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x10u;
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
void f_6973e8(Cpu *restrict c) {
    FN_ENTER(0x6973e8u);
L_6973e8:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_6973ec(Cpu *restrict c) {
    FN_ENTER(0x6973ecu);
L_6973ec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6973f0(Cpu *restrict c) {
    FN_ENTER(0x6973f0u);
L_6973f0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6973f4(Cpu *restrict c) {
    FN_ENTER(0x6973f4u);
L_6973f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a64ecu;
    { uint32_t ea = 0x697408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697408u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_697420(Cpu *restrict c) {
    FN_ENTER(0x697420u);
L_697420:;
    c->r[0] = 0x13a64c8u;
    { uint32_t ea = 0x69742cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_697430(Cpu *restrict c) {
    FN_ENTER(0x697430u);
L_697430:;
    c->r[0] = 0x13a64b0u;
    { uint32_t ea = 0x69743cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_697440(Cpu *restrict c) {
    FN_ENTER(0x697440u);
L_697440:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13fb5e4u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x69746cu + c->r[0];
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
    c->r[14] = 0x6974c8u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x6974e0u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x6974f8u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a6338u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15f0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a63b0u;
    { uint32_t ea = 0x697534u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10ce968u;
    { uint32_t ea = 0x69753cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x697540u + c->r[1];
    c->r[14] = 0x697540u; f_9aedcc(c);
    c->r[1] = 0x13a63a4u;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x69755cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13a4e98u;
    c->r[0] = 0x13a637cu;
    { uint32_t ea = 0x697570u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10ce938u;
    { uint32_t ea = 0x697578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69757cu + c->r[1];
    c->r[14] = 0x69757cu; f_9aedcc(c);
    c->r[1] = 0x13a637cu;
    { uint32_t ea = 0x697588u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6975b8(Cpu *restrict c) {
    FN_ENTER(0x6975b8u);
L_6975b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a6340u;
    { uint32_t ea = 0x6975c8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6975ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15c0u;
    c->pc = c->r[4]; c->r[14] = 0x6975e4u; rt_dispatch(c);
    c->r[14] = 0x6975e8u; f_69a3c8(c);
    c->r[1] = 0x13a6310u;
    c->r[2] = 0x15a8u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x6975fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x15b0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x15acu;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x15a4u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[1] = 0x15b4u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_697638(Cpu *restrict c) {
    FN_ENTER(0x697638u);
L_697638:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a62c8u;
    { uint32_t ea = 0x697648u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69764cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x697664u; rt_dispatch(c);
    c->r[2] = 0x13a6290u;
    c->r[1] = 0x198u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x697684u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_697698(Cpu *restrict c) {
    FN_ENTER(0x697698u);
L_697698:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a6260u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x6976b0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x6976b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6976d4(Cpu *restrict c) {
    FN_ENTER(0x6976d4u);
L_6976d4:;
    __attribute__((musttail)) return f_69a3e8(c);
}
void f_6976d8(Cpu *restrict c) {
    FN_ENTER(0x6976d8u);
L_6976d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6976e4u; f_69a3e8(c);
    c->r[0] = 0x13a6218u;
    { uint32_t ea = 0x6976f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6976f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_697708(Cpu *restrict c) {
    FN_ENTER(0x697708u);
L_697708:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x697714u; f_6a247c(c);
    c->r[0] = 0x15acu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69773c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x697734u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_69773c:;
    c->r[0] = 0x15b0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69775c; }
    c->r[14] = 0x697754u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_69775c:;
    c->r[0] = 0x15b4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x13a1ba8u;
    { uint32_t ea = 0x697778u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_697784; }
    c->r[14] = 0x697784u; f_e482a0(c);
L_697784:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_697794(Cpu *restrict c) {
    FN_ENTER(0x697794u);
L_697794:;
    __attribute__((musttail)) return f_6a1b30(c);
}
void f_697798(Cpu *restrict c) {
    FN_ENTER(0x697798u);
L_697798:;
    __attribute__((musttail)) return f_6a1b34(c);
}
void f_69779c(Cpu *restrict c) {
    FN_ENTER(0x69779cu);
L_69779c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x6977bcu; f_69a41c(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6979f0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6977dcu; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x6977ecu; f_6a2f14(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x697814u; f_6a2ed0(c);
    c->v.s[16] = 0x3c8efa36u;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->v.f[18] = c->v.f[0] * c->v.f[16];
    c->r[14] = 0x697828u; f_6a2ed0(c);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    ST32(c->r[13] + 16u, c->v.s[18]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x697848u; f_aa7dc4(c);
    c->r[0] = 0x13a1520u;
    c->r[1] = 0x13a1af8u;
    { uint32_t ea = 0x697858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x69785cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd429u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697864u; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6979f0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x697884u; rt_dispatch(c);
    c->r[8] = 0x4u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[8]); }
    c->r[14] = 0x697894u; f_a87660(c);
    c->r[0] = 0x13a14d4u;
    c->r[1] = 0x13a1aacu;
    { uint32_t ea = 0x6978a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6978a8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd42au;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6978b0u; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6979f0; }
    c->r[0] = 0x1370u;
    c->r[1] = 0x10u;
    c->r[14] = 0x6978c8u; f_739820(c);
    c->r[1] = 0x8u;
    c->r[14] = 0x6978d0u; f_73985c(c);
    c->r[1] = 0x15acu;
    c->r[7] = c->r[4];
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[1]; ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x6978f4u; rt_dispatch(c);
    c->r[0] = 0x13a141cu;
    c->r[2] = 0x1193f84u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x697910u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x697914u + c->r[2];
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69791cu; f_5ea218(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x697930u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x697950u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x697958u; f_a87660(c);
    c->r[0] = 0x13a1410u;
    c->r[1] = 0x13a5f90u;
    { uint32_t ea = 0x697968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x69796cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd42bu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697974u; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6979f0; }
    c->r[0] = 0x15b0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[6]); c->r[5] = ea; }
    c->r[0] = c->r[6];
    c->r[14] = 0x697994u; f_a87648(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x69799cu; f_a87660(c);
    c->r[0] = 0x13a195cu;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[5] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x20u;
    { uint32_t ea = 0x6979c4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6979c8u; f_e47f68(c);
    c->r[2] = c->r[0];
    c->r[7] = 0x15b4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6979e0u; f_e47dc8(c);
    { uint32_t ea = c->r[4] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x6979f0u; f_e47dec(c);
L_6979f0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_697a28(Cpu *restrict c) {
    FN_ENTER(0x697a28u);
L_697a28:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x697a38u; f_6a2304(c);
    c->r[1] = 0x15a8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_697a64; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_697a64:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_697ae4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x697a80u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x697a98u: goto L_697a98; case 0x697aa8u: goto L_697aa8; case 0x697ab8u: goto L_697ab8; case 0x697ac8u: goto L_697ac8; case 0x697adcu: goto L_697adc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_697a98:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x697aa4u; f_697b84(c);
    goto L_697ae4;
L_697aa8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x697ab0u; f_697cc0(c);
    c->r[5] = 0x0u;
    goto L_697ae4;
L_697ab8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x697ac0u; f_698144(c);
    c->r[5] = 0x0u;
    goto L_697ae4;
L_697ac8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x697ad8u; f_697b84(c);
    goto L_697ae4;
L_697adc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x697ae4u; f_6985cc(c);
L_697ae4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x697af4u; rt_dispatch(c);
    c->r[0] = 0x15acu;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_697b4c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x697b14u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x697b24u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x697b30u; f_69a458(c);
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x3du;
    c->r[2] = c->r[2] & (c->r[1] >> 10);
    c->r[1] = c->r[1] & 0xffff03ffu;
    c->r[2] = (c->r[2] & 0xfffffffdu) | ((c->r[0] << 1) & 0x2u);
    c->r[0] = c->r[1] | (c->r[2] << 10);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
L_697b4c:;
    c->r[0] = 0x15b4u;
    c->r[2] = c->r[4] + 0x40u;
    c->r[3] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x13a17b8u;
    { uint32_t ea = 0x697b68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x697b70u; f_e4754c(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_69a484(c);
}
void f_697b84(Cpu *restrict c) {
    FN_ENTER(0x697b84u);
L_697b84:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_697bb0; }
L_697ba8:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_697bb0:;
    c->r[1] = 0x1u;
    c->r[7] = c->r[4];
    c->r[8] = 0x0u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15acu;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    c->r[1] = c->r[1] | (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697be8u; f_a90adc(c);
    c->r[9] = c->r[5] ^ 0x1u;
    c->r[1] = 0x0u;
    c->r[6] = c->r[0];
    c->r[5] = 0x0u - c->r[9];
    c->r[2] = c->r[5];
    c->r[14] = 0x697c00u; f_d0cab0(c);
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[8]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697c10u; f_a90adc(c);
    c->r[1] = 0x0u;
    c->r[2] = c->r[5];
    c->r[6] = c->r[0];
    c->r[14] = 0x697c20u; f_d0cab0(c);
    c->r[5] = c->r[13] + 0x10u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x697c34u; f_aa7b50(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x697c40u; f_6a2ed0(c);
    c->v.s[2] = 0x3c8efa36u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->r[14] = 0x697c58u; f_aa7dc4(c);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_697c94; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x697c70u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x15a8u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[3] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x697c8cu; f_69a58c(c);
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_697c94:;
    c->r[0] = 0x15a8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_697ba8; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x697cb0u; f_52a400(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_697cc0(Cpu *restrict c) {
    FN_ENTER(0x697cc0u);
L_697cc0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_698110; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x697cf4u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x697d0cu: goto L_697d0c; case 0x697e0cu: goto L_697e0c; case 0x697e5cu: goto L_697e5c; case 0x697f94u: goto L_697f94; case 0x6980f0u: goto L_6980f0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_697d0c:;
    c->r[1] = 0x1u;
    c->r[7] = c->r[4];
    c->r[6] = 0x0u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15acu;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697d40u; f_a90adc(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x697d50u; f_d0cab0(c);
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[6]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697d60u; f_a90adc(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x697d70u; f_d0cab0(c);
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[6]); }
    c->r[0] = 0x15a8u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_697d94; }
    c->r[1] = 0x1u;
    c->r[14] = 0x697d90u; f_52a400(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
L_697d94:;
    c->r[5] = c->r[13] + 0x30u;
    c->r[1] = c->r[4];
    c->r[0] = c->r[5];
    c->r[14] = 0x697da4u; f_aa7b50(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x697db0u; f_6a2ed0(c);
    c->v.s[16] = 0x3c8efa36u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->r[14] = 0x697dc8u; f_aa7dc4(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x1378u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x42700000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x697de4u; f_6a2ed0(c);
    c->v.s[2] = 0x3d800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[0] = 0x1010u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1020u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    goto L_698110;
L_697e0c:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x1378u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x697e20u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_698110; }
    c->r[0] = 0x2u;
    c->r[2] = c->r[4] + 0x40u;
    c->r[1] = 0x12fu;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x13a0d94u;
    { uint32_t ea = 0x697e4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_6ef334(c);
L_697e5c:;
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x697e74u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_697eac; }
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4] + 0x40u;
    c->r[1] = 0x12du;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x13a0d48u;
    { uint32_t ea = 0x697e98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697e9cu; f_6ef334(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x697ea8u; f_6a2ed0(c);
    ST32(c->r[5], c->v.s[0]);
L_697eac:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[4];
    c->r[14] = 0x697eb8u; f_aa7b50(c);
    c->r[0] = 0x1010u;
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.s[4] = LD32(c->r[13] + 48u);
    c->r[1] = 0x2u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->v.s[0] = LD32(c->r[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[13] + 48u, c->v.s[4]);
    c->r[14] = 0x697ee0u; f_6a2ed0(c);
    c->v.s[2] = 0x40a00000u;
    c->v.s[16] = 0x3c8efa36u;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 48u);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_697f4c; }
    c->r[0] = 0x3u;
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->r[7] = c->r[4];
    c->r[1] = 0x12cu;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[3] = v; }
    c->r[0] = 0x1014u;
    c->r[8] = c->r[7] - c->r[0];
    c->r[0] = 0x13a0cacu;
    c->r[2] = c->r[8];
    { uint32_t ea = 0x697f34u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x697f38u; f_6ef334(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x12eu;
    c->r[2] = c->r[8];
    c->r[14] = 0x697f4cu; f_6ef334(c);
L_697f4c:;
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x697f58u; f_aa7dc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[14] = 0x697f64u; f_6a2ed0(c);
    c->r[0] = 0x1020u;
    c->v.s[4] = LD32(c->r[4] + 28u);
    c->v.s[6] = LD32(c->r[6]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GE ? c->v.s[0] : c->v.s[6];
    ST32(c->r[6], c->v.s[0]);
    goto L_698110;
L_697f94:;
    c->r[0] = c->r[13] + 0x30u;
    c->r[1] = c->r[4];
    c->r[14] = 0x697fa0u; f_aa7b50(c);
    c->v.s[0] = 0xbc32b8c4u;
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.s[4] = LD32(c->r[13] + 48u);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[0]);
    ST32(c->r[13] + 48u, c->v.s[4]);
    c->r[14] = 0x697fc0u; f_6a2ed0(c);
    c->v.s[2] = 0x3c8efa36u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 48u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_6980e0; }
    c->r[0] = 0x4u;
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x697ff0u; f_6a2ed0(c);
    c->r[0] = 0x1378u;
    c->r[6] = c->r[4];
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x15acu;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x698014u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x15a8u;
    c->r[5] = 0x0u;
    c->r[1] = 0x0u;
    c->r[3] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x698034u; f_69a58c(c);
    c->r[0] = 0x13a0b04u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x698048u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0xb0u;
    c->v.s[16] = LD32(c->r[0]);
    c->v.s[18] = LD32(c->r[0] + 4u);
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x698058u; f_9c6914(c);
    c->v.s[4] = 0x3f000000u;
    c->v.s[0] = 0x4622f983u;
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->r[2] = c->r[13] + 0x20u;
    c->r[1] = 0x142u;
    c->v.s[6] = c->v.s[4];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[6]);
    c->v.s[6] = 0x450b6000u;
    c->r[0] = c->v.s[2];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[13] + 20u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xff0u; ST32(ea, c->r[5]); }
    c->r[0] = 0x1054u;
    c->v.s[0] = LD32(c->r[6] + 224u);
    c->v.s[2] = LD32(c->r[6] + 228u);
    c->v.s[4] = LD32(c->r[6] + 232u);
    c->v.f[0] = c->v.f[0] + c->v.f[16];
    c->v.f[2] = c->v.f[2] + c->v.f[18];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[6];
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x13a0b04u;
    { uint32_t ea = 0x6980dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6980e0u; f_6ef334(c);
L_6980e0:;
    c->r[1] = c->r[13] + 0x30u;
    c->r[0] = c->r[4];
    c->r[14] = 0x6980ecu; f_aa7dc4(c);
    goto L_698110;
L_6980f0:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x1378u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x698104u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); } }
L_698110:;
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_698144(Cpu *restrict c) {
    FN_ENTER(0x698144u);
L_698144:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_698598; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x698178u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x698190u: goto L_698190; case 0x698300u: goto L_698300; case 0x698378u: goto L_698378; case 0x6983e8u: goto L_6983e8; case 0x698464u: goto L_698464; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_698190:;
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15a4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_6981c0; }
    c->r[0] = 0x13a0bc8u;
    { uint32_t ea = 0x6981b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6981bcu; f_4772c4(c);
    c->r[5] = c->r[0];
L_6981c0:;
    c->r[0] = 0x13a0bd0u;
    c->r[1] = 0x10u;
    { uint32_t ea = 0x6981d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x18u;
    c->r[14] = 0x6981d8u; f_6660b4(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1fu;
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13a4374u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x698204u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[4]); }
    c->r[14] = 0x698218u; f_68c4f0(c);
    c->r[0] = 0x15a8u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_698238; }
    c->r[1] = 0x1u;
    c->r[14] = 0x698234u; f_52a400(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
L_698238:;
    c->r[0] = 0x15acu;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x698250u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x698268u; f_69a58c(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698284u; f_a90adc(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x698294u; f_d0cab0(c);
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[7]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6982a4u; f_a90adc(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x6982b4u; f_d0cab0(c);
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[7]); }
    c->r[5] = c->r[13] + 0x10u;
    c->r[1] = c->r[4];
    c->r[0] = c->r[5];
    c->r[14] = 0x6982c8u; f_aa7b50(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x6982d4u; f_6a2ed0(c);
    c->v.s[2] = 0x3c8efa36u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->r[14] = 0x6982ecu; f_aa7dc4(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x1378u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40c00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_698598;
L_698300:;
    c->v.s[16] = 0x3f800000u;
    c->r[0] = 0x1378u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x69831cu; f_73aa84(c);
    c->v.s[0] = LD32(c->r[5]);
    c->v.s[2] = 0xc0c00000u;
    c->v.s[4] = 0xc3960000u;
    c->r[0] = 0x15acu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[0] + c->v.f[16];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_698598; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42200000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    goto L_698598;
L_698378:;
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x698390u; f_73aa84(c);
    c->v.s[0] = 0x42200000u;
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = 0xc3960000u;
    c->r[0] = 0x15acu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0] + 72u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_698598; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41f00000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    goto L_698598;
L_6983e8:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x1378u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6983fcu; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_698598; }
    c->r[0] = 0x4u;
    c->r[2] = c->r[4] + 0x40u;
    c->r[1] = 0x12fu;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x13a07b8u;
    { uint32_t ea = 0x698428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69842cu; f_6ef334(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x698438u; f_6a2ed0(c);
    c->v.s[2] = 0x3c8efa36u;
    c->v.s[4] = 0x3d800000u;
    c->r[0] = 0x1010u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1020u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    goto L_698598;
L_698464:;
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x69847cu; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6984b4; }
    c->r[0] = 0x1054u;
    c->r[2] = c->r[4] + 0x40u;
    c->r[1] = 0x12du;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x13a0740u;
    { uint32_t ea = 0x6984a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6984a4u; f_6ef334(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x6984b0u; f_6a2ed0(c);
    ST32(c->r[5], c->v.s[0]);
L_6984b4:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[1] = c->r[4];
    c->r[14] = 0x6984c0u; f_aa7b50(c);
    c->r[0] = 0x1010u;
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.s[4] = LD32(c->r[13] + 16u);
    c->r[1] = 0x1u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->v.s[0] = LD32(c->r[6]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[0] * c->v.f[2]);
    ST32(c->r[13] + 16u, c->v.s[4]);
    c->r[14] = 0x6984e8u; f_6a2ed0(c);
    c->v.s[16] = 0x3c8efa36u;
    c->v.s[2] = LD32(c->r[13] + 16u);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_698554; }
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->r[0] = 0x1054u;
    c->r[7] = c->r[4];
    c->r[1] = 0x12cu;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[3] = v; }
    c->r[0] = 0x1014u;
    c->r[8] = c->r[7] - c->r[0];
    c->r[0] = 0x13a06b4u;
    c->r[2] = c->r[8];
    { uint32_t ea = 0x69852cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698530u; f_6ef334(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x12eu;
    c->r[2] = c->r[8];
    c->r[14] = 0x698544u; f_6ef334(c);
    c->r[0] = 0xefb0u;
    c->r[1] = 0x3u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[1]); }
L_698554:;
    c->r[1] = c->r[13] + 0x10u;
    c->r[0] = c->r[4];
    c->r[14] = 0x698560u; f_aa7dc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x69856cu; f_6a2ed0(c);
    c->r[0] = 0x1020u;
    c->v.s[4] = LD32(c->r[4] + 28u);
    c->v.s[6] = LD32(c->r[6]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GE ? c->v.s[0] : c->v.s[6];
    ST32(c->r[6], c->v.s[0]);
L_698598:;
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6985cc(Cpu *restrict c) {
    FN_ENTER(0x6985ccu);
L_6985cc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_6986d0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_6986f0; }
    c->r[1] = 0x1u;
    c->r[7] = c->r[4];
    c->r[8] = 0x0u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15acu;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69862cu; f_a90adc(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x69863cu; f_d0cab0(c);
    c->r[6] = 0x3f800000u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698650u; f_a90adc(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x698660u; f_d0cab0(c);
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[6]); }
    c->r[0] = 0x15a8u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_698684; }
    c->r[1] = 0x0u;
    c->r[14] = 0x698680u; f_52a400(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[8]); }
L_698684:;
    c->r[5] = c->r[13];
    c->r[1] = c->r[4];
    c->r[0] = c->r[5];
    c->r[14] = 0x698694u; f_aa7b50(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x6986a0u; f_6a2ed0(c);
    c->v.s[2] = 0x3c8efa36u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13], c->v.s[0]);
    c->r[14] = 0x6986b8u; f_aa7dc4(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x1378u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43960000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_6986d0:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x1378u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6986e4u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); } }
L_6986f0:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6986fc(Cpu *restrict c) {
    FN_ENTER(0x6986fcu);
L_6986fc:;
    __attribute__((musttail)) return f_a8f62c(c);
}
void f_698700(Cpu *restrict c) {
    FN_ENTER(0x698700u);
L_698700:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x698710u; f_6a2478(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b3b124(c);
}
void f_698720(Cpu *restrict c) {
    FN_ENTER(0x698720u);
L_698720:;
    c->r[2] = 0x15a4u;
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_698734(Cpu *restrict c) {
    FN_ENTER(0x698734u);
L_698734:;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_698740(Cpu *restrict c) {
    FN_ENTER(0x698740u);
L_698740:;
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
    c->r[14] = 0x698778u; f_9bb638(c);
    c->r[1] = 0x10b8591u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x69878cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x10u;
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
void f_6987d4(Cpu *restrict c) {
    FN_ENTER(0x6987d4u);
L_6987d4:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_6987d8(Cpu *restrict c) {
    FN_ENTER(0x6987d8u);
L_6987d8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6987dc(Cpu *restrict c) {
    FN_ENTER(0x6987dcu);
L_6987dc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6987e0(Cpu *restrict c) {
    FN_ENTER(0x6987e0u);
L_6987e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a511cu;
    { uint32_t ea = 0x6987f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6987f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69880c(Cpu *restrict c) {
    FN_ENTER(0x69880cu);
L_69880c:;
    c->r[0] = 0x13a50f8u;
    { uint32_t ea = 0x698818u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69881c(Cpu *restrict c) {
    FN_ENTER(0x69881cu);
L_69881c:;
    c->r[0] = 0x13a50e0u;
    { uint32_t ea = 0x698828u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69882c(Cpu *restrict c) {
    FN_ENTER(0x69882cu);
L_69882c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13fa298u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x698858u + c->r[0];
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
    c->r[14] = 0x6988b4u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x6988ccu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x6988e4u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a4f4cu;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a4fe0u;
    { uint32_t ea = 0x698920u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10cd5a6u;
    { uint32_t ea = 0x698928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69892cu + c->r[1];
    c->r[14] = 0x69892cu; f_9aedcc(c);
    c->r[1] = 0x13a4fd0u;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x698948u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13a3aacu;
    c->r[0] = 0x13a4facu;
    { uint32_t ea = 0x69895cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10cd576u;
    { uint32_t ea = 0x698964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x698968u + c->r[1];
    c->r[14] = 0x698968u; f_9aedcc(c);
    c->r[1] = 0x13a4fa8u;
    { uint32_t ea = 0x698974u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6989a4(Cpu *restrict c) {
    FN_ENTER(0x6989a4u);
L_6989a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a4f6cu;
    { uint32_t ea = 0x6989b4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6989b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15b0u;
    c->pc = c->r[4]; c->r[14] = 0x6989d0u; rt_dispatch(c);
    c->r[14] = 0x6989d4u; f_69a3c8(c);
    c->r[1] = 0x13a4f3cu;
    c->r[2] = 0x15a8u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x6989e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x15a4u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_698a08(Cpu *restrict c) {
    FN_ENTER(0x698a08u);
L_698a08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a4f10u;
    { uint32_t ea = 0x698a18u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x698a1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x698a34u; rt_dispatch(c);
    c->r[2] = 0x13a4ed8u;
    c->r[1] = 0x199u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x698a54u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_698a68(Cpu *restrict c) {
    FN_ENTER(0x698a68u);
L_698a68:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a4ea8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x698a80u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x698a84u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_698aa4(Cpu *restrict c) {
    FN_ENTER(0x698aa4u);
L_698aa4:;
    __attribute__((musttail)) return f_69a3e8(c);
}
void f_698aa8(Cpu *restrict c) {
    FN_ENTER(0x698aa8u);
L_698aa8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x698ab4u; f_69a3e8(c);
    c->r[0] = 0x13a4e60u;
    { uint32_t ea = 0x698ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698ac0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_698ad8(Cpu *restrict c) {
    FN_ENTER(0x698ad8u);
L_698ad8:;
    __attribute__((musttail)) return f_6a247c(c);
}
void f_698adc(Cpu *restrict c) {
    FN_ENTER(0x698adcu);
L_698adc:;
    __attribute__((musttail)) return f_6a1b30(c);
}
void f_698ae0(Cpu *restrict c) {
    FN_ENTER(0x698ae0u);
L_698ae0:;
    __attribute__((musttail)) return f_6a1b34(c);
}
void f_698ae4(Cpu *restrict c) {
    FN_ENTER(0x698ae4u);
L_698ae4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x698b04u; f_69a41c(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_698d90; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x698b24u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x698b38u; f_6a31f0(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x698b64u; f_6a3164(c);
    c->v.s[16] = 0x3c8efa36u;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->v.f[18] = c->v.f[0] * c->v.f[16];
    c->r[14] = 0x698b7cu; f_6a3164(c);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[4];
    ST32(c->r[13] + 32u, c->v.s[18]);
    ST32(c->r[13] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x698b9cu; f_aa7dc4(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13a07a4u;
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = 0x698bb0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd42du;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13a01b8u;
    { uint32_t ea = 0x698bc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698bc4u; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_698d90; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x698be4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x4u;
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[8]); }
    c->r[14] = 0x698c00u; f_a87660(c);
    c->r[0] = 0x13a0168u;
    c->r[1] = 0x13a0740u;
    { uint32_t ea = 0x698c10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x698c14u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd42eu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698c1cu; f_352960(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_698d10; }
    c->r[0] = 0x470u;
    c->r[1] = 0x10u;
    c->r[14] = 0x698c34u; f_a8e6dc(c);
    c->r[6] = c->r[0];
    c->r[14] = 0x698c3cu; f_a8e71c(c);
    c->r[0] = 0x15a4u;
    c->r[7] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[6]); c->r[7] = ea; }
    c->r[0] = 0x13a00c8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1192c38u;
    { uint32_t ea = 0x698c64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x698c68u + c->r[1];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698c70u; f_5ea218(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x698c84u; rt_dispatch(c);
    c->r[0] = 0xeb5cu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x698c98u; f_a87660(c);
    c->r[0] = 0xea9cu;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeaa0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xeaa4u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x698ce0u; f_aa7dc4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x698cf0u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x698d00u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_698d10:;
    c->r[0] = 0x139fe94u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x698d20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1au);
    if (COND_NE) { goto L_698d90; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x1060u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = 0x13a05b0u;
    { uint32_t ea = 0x698d70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    c->r[1] = c->r[13] + 0x10u;
    c->r[2] = 0x0u;
    c->r[14] = 0x698d80u; f_381440(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    ST32(c->r[13] + 20u, c->v.s[0]);
    c->r[14] = 0x698d90u; f_6a2d88(c);
L_698d90:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_698dc4(Cpu *restrict c) {
    FN_ENTER(0x698dc4u);
L_698dc4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[14] = 0x698de0u; f_6a2304(c);
    c->r[0] = 0x15a8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_698e18; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffff7ffu;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x15a4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_698f74; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    goto L_698f70;
L_698e18:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_698f10; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x698e34u + 0x8u;
    c->r[6] = 0xffffu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x698e4cu: goto L_698e4c; case 0x698e88u: goto L_698e88; case 0x698e94u: goto L_698e94; case 0x698f04u: goto L_698f04; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_698e4c:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_698f10; }
    c->r[7] = 0x1u;
    c->r[5] = c->r[13];
    c->r[1] = c->r[4];
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[7] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x698e70u; f_aa7b50(c);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x698e80u; f_6a3164(c);
    c->v.s[2] = 0x3c8efa36u;
    goto L_698ee8;
L_698e88:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    goto L_698f0c;
L_698e94:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_698f10; }
    c->r[7] = 0x1u;
    c->r[5] = c->r[13];
    c->r[1] = c->r[4];
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[7] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x698eb8u; f_aa7b50(c);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = c->r[6];
    c->r[14] = 0x698eccu; f_6a3164(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = c->r[6];
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0x698ee0u; f_6a3164(c);
    c->v.s[2] = 0x3c8efa36u;
    c->v.f[0] = c->v.f[16] + c->v.f[0];
L_698ee8:;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    ST32(c->r[13], c->v.s[0]);
    c->r[14] = 0x698efcu; f_aa7dc4(c);
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[7]); }
    goto L_698f10;
L_698f04:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
L_698f0c:;
    c->r[14] = 0x698f10u; f_698f84(c);
L_698f10:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x698f20u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x698f34u; f_69a484(c);
    c->r[0] = 0x15a4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_698f74; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4807u;
    c->r[3] = 0x3du;
    c->r[7] = 0x4802u;
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[3] = c->r[3] & (c->r[2] >> 10);
    c->r[2] = c->r[2] & 0xffff03ffu;
    if (COND_EQ) { c->r[3] = c->r[3] | 0x2u; }
    c->r[1] = c->r[2] | (c->r[3] << 10);
L_698f70:;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_698f74:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_698f84(Cpu *restrict c) {
    FN_ENTER(0x698f84u);
L_698f84:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[1] = c->r[4];
    c->r[14] = 0x698fb4u; f_aa7b50(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x698fc4u; f_6a3164(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = 0x3c8efa36u;
    c->r[6] = 0xffffu;
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_699050; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_69912c; }
    c->r[1] = 0x1u;
    c->r[2] = c->r[4] + 0x40u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x130u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x139fbd4u;
    { uint32_t ea = 0x69900cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x699010u; f_6ef334(c);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = c->r[6];
    c->r[14] = 0x699024u; f_6a3164(c);
    c->v.s[16] = c->v.s[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_699044; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = c->r[6];
    c->r[14] = 0x699040u; f_6a3164(c);
    c->v.f[16] = c->v.f[16] + c->v.f[0];
L_699044:;
    c->v.f[0] = c->v.f[16] * c->v.f[18];
    ST32(c->r[13], c->v.s[0]);
    goto L_69912c;
L_699050:;
    c->v.s[2] = LD32(c->r[4] + 28u);
    (void)f_subs(c, c->r[5], 0x1u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13]);
    c->v.f[0] = c->v.f[0] * c->v.f[18];
    if (COND_NE) { goto L_6990d0; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = c->r[5];
    ST32(c->r[13], c->v.s[0]);
    c->r[14] = 0x699084u; f_6a3164(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = c->r[5];
    c->v.s[16] = c->v.s[0];
    c->r[6] = 0x2u;
    c->r[14] = 0x69909cu; f_6a3164(c);
    c->v.f[0] = c->v.f[16] + c->v.f[0];
    c->v.s[2] = LD32(c->r[13]);
    c->v.f[0] = c->v.f[0] * c->v.f[18];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_69912c; }
    ST32(c->r[13], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[6]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x139fb10u;
    { uint32_t ea = 0x6990d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_69911c;
L_6990d0:;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    ST32(c->r[13], c->v.s[0]);
    c->r[14] = 0x6990e8u; f_6a3164(c);
    c->v.f[0] = c->v.f[0] * c->v.f[18];
    c->v.s[2] = LD32(c->r[13]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_69912c; }
    ST32(c->r[13], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x139fac0u;
    { uint32_t ea = 0x699120u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_69911c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4] + 0x40u;
    c->r[1] = 0x131u;
    c->r[14] = 0x69912cu; f_6ef334(c);
L_69912c:;
    c->r[1] = c->r[13];
    c->r[0] = c->r[4];
    c->r[14] = 0x699138u; f_aa7dc4(c);
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_699154(Cpu *restrict c) {
    FN_ENTER(0x699154u);
L_699154:;
    __attribute__((musttail)) return f_a8f62c(c);
}
void f_699158(Cpu *restrict c) {
    FN_ENTER(0x699158u);
L_699158:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    return;
}
void f_699164(Cpu *restrict c) {
    FN_ENTER(0x699164u);
L_699164:;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    return;
}
void f_699170(Cpu *restrict c) {
    FN_ENTER(0x699170u);
L_699170:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[2];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
    c->r[1] = c->r[2];
    c->r[14] = 0x6991b4u; f_aa7b50(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6991c4(Cpu *restrict c) {
    FN_ENTER(0x6991c4u);
L_6991c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x6991d4u; f_6a2478(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b3b124(c);
}
void f_6991e4(Cpu *restrict c) {
    FN_ENTER(0x6991e4u);
L_6991e4:;
    c->r[1] = 0x15a8u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[0] = 0x139fa74u;
    { uint32_t ea = 0x6991fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_7045dc(c);
}
void f_699204(Cpu *restrict c) {
    FN_ENTER(0x699204u);
L_699204:;
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
    c->r[14] = 0x69923cu; f_9bb638(c);
    c->r[1] = 0x10b7acdu;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x699250u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x10u;
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
void f_699298(Cpu *restrict c) {
    FN_ENTER(0x699298u);
L_699298:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_69929c(Cpu *restrict c) {
    FN_ENTER(0x69929cu);
L_69929c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6992a0(Cpu *restrict c) {
    FN_ENTER(0x6992a0u);
L_6992a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6992a4(Cpu *restrict c) {
    FN_ENTER(0x6992a4u);
L_6992a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a4670u;
    { uint32_t ea = 0x6992b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6992b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6992d0(Cpu *restrict c) {
    FN_ENTER(0x6992d0u);
L_6992d0:;
    c->r[0] = 0x13a464cu;
    { uint32_t ea = 0x6992dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6992e0(Cpu *restrict c) {
    FN_ENTER(0x6992e0u);
L_6992e0:;
    c->r[0] = 0x13a4634u;
    { uint32_t ea = 0x6992ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6992f0(Cpu *restrict c) {
    FN_ENTER(0x6992f0u);
L_6992f0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13f9874u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x69931cu + c->r[0];
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
    c->r[14] = 0x699378u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x699390u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x6993a8u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a4488u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15b0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a4534u;
    { uint32_t ea = 0x6993e4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10ccb0cu;
    { uint32_t ea = 0x6993ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6993f0u + c->r[1];
    c->r[14] = 0x6993f0u; f_9aedcc(c);
    c->r[1] = 0x13a4524u;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x69940cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13a2fe8u;
    c->r[0] = 0x13a4500u;
    { uint32_t ea = 0x699420u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10ccadcu;
    { uint32_t ea = 0x699428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69942cu + c->r[1];
    c->r[14] = 0x69942cu; f_9aedcc(c);
    c->r[1] = 0x13a44fcu;
    { uint32_t ea = 0x699438u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_699468(Cpu *restrict c) {
    FN_ENTER(0x699468u);
L_699468:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a44c0u;
    { uint32_t ea = 0x699478u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69947cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15b0u;
    c->pc = c->r[4]; c->r[14] = 0x699494u; rt_dispatch(c);
    c->r[14] = 0x699498u; f_69a3c8(c);
    c->r[1] = 0x13a4490u;
    c->r[2] = 0x15a8u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x6994acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x15a4u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6994cc(Cpu *restrict c) {
    FN_ENTER(0x6994ccu);
L_6994cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a4464u;
    { uint32_t ea = 0x6994dcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6994e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x30u;
    c->pc = c->r[4]; c->r[14] = 0x6994f8u; rt_dispatch(c);
    c->r[2] = 0x13a442cu;
    c->r[1] = 0x19au;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x699518u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0x139f624u;
    { uint32_t ea = 0x699528u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x29u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_699564(Cpu *restrict c) {
    FN_ENTER(0x699564u);
L_699564:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a43c4u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x69957cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x699580u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6995a0(Cpu *restrict c) {
    FN_ENTER(0x6995a0u);
L_6995a0:;
    __attribute__((musttail)) return f_69a3e8(c);
}
void f_6995a4(Cpu *restrict c) {
    FN_ENTER(0x6995a4u);
L_6995a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6995b0u; f_69a3e8(c);
    c->r[0] = 0x13a437cu;
    { uint32_t ea = 0x6995bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6995bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6995d4(Cpu *restrict c) {
    FN_ENTER(0x6995d4u);
L_6995d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x6995f8u; f_69a41c(c);
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6999d4; }
    c->r[0] = 0x1054u;
    c->r[5] = c->r[4];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[1] = v; }
    c->r[0] = 0x1060u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x699628u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1378u;
    c->r[2] = c->r[6];
    c->r[10] = 0x0u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x139fcacu;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = c->r[13] + 0x1fu;
    { uint32_t ea = 0x699674u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x20u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    c->r[14] = 0x69968cu; f_3813bc(c);
    c->r[0] = c->r[4];
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0x699698u; f_6a1b50(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_6996b0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffff00u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[6] + 20u, c->v.s[16]);
L_6996b0:;
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f000000u;
    c->v.s[18] = 0x43360b61u;
    c->r[9] = c->r[4];
    c->v.s[2] = c->v.s[20];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[18]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x15a8u;
    { uint32_t ea = c->r[9] + c->r[1]; ST16(ea, c->r[0]); c->r[9] = ea; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x6996f4u; f_6a2ed0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0x699704u; f_6a2ed0(c);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[0] * c->v.f[18]);
    c->v.s[26] = 0x38c90fdbu;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[20]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->v.f[18] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x699730u; f_15efde8(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x69973cu; f_15efdf4(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[22] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0x699758u; f_15efde8(c);
    c->v.s[28] = 0x0u;
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[22];
    c->v.f[30] = c->v.f[18] * c->v.f[28];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[16] * c->v.f[20]);
    c->r[14] = 0x699770u; f_15efdf4(c);
    c->v.f[2] = c->v.f[0] * c->v.f[28];
    c->v.f[10] = c->v.f[16] * c->v.f[18];
    c->v.f[0] = c->v.f[30] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[24]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[20] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[24] * c->v.f[28]);
    c->v.s[4] = LD32(c->r[6] + 16u);
    c->v.s[8] = LD32(c->r[6] + 24u);
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[10]); }
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    ST32(c->r[4] + 64u, c->v.s[2]);
    ST32(c->r[4] + 68u, c->v.s[4]);
    ST32(c->r[4] + 72u, c->v.s[0]);
    c->r[14] = 0x6997bcu; f_6a2ed0(c);
    c->r[0] = 0x1014u;
    c->r[1] = 0x2u;
    c->r[8] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    ST32(c->r[8], c->v.s[0]);
    c->r[14] = 0x6997d4u; f_6a2ed0(c);
    c->r[0] = 0x1024u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = 0x1018u;
    ST32(c->r[6], c->v.s[0]);
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = 0xfe8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = LD32(c->r[7]);
    c->v.s[22] = LD32(c->r[8]);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x69980cu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x699818u; f_15efdf4(c);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[24] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[18]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[18]);
    c->r[0] = 0x1010u;
    c->r[5] = c->r[4] + c->r[0];
    ST32(c->r[8], c->v.s[2]);
    ST32(c->r[7], c->v.s[24]);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = LD32(c->r[5]);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x699854u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x699860u; f_15efdf4(c);
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[20] * c->v.f[18]);
    c->r[0] = 0xfe8u;
    c->r[1] = 0x1028u;
    ST32(c->r[5], c->v.s[2]);
    ST32(c->r[7], c->v.s[0]);
    c->r[7] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = LD32(c->r[7]);
    c->v.s[22] = LD32(c->r[6]);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x6998a4u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x6998b0u; f_15efdf4(c);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[24] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[18]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[18]);
    c->r[1] = 0x1020u;
    c->r[5] = c->r[4] + c->r[1];
    ST32(c->r[6], c->v.s[2]);
    ST32(c->r[7], c->v.s[24]);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[20] = LD32(c->r[5]);
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] * c->v.f[26];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x6998ecu; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x6998f8u; f_15efdf4(c);
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[20] * c->v.f[18]);
    ST32(c->r[5], c->v.s[2]);
    ST32(c->r[7], c->v.s[0]);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x699920u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x699930u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x699940u; rt_dispatch(c);
    c->r[0] = 0x139f428u;
    c->r[1] = 0x139fa00u;
    { uint32_t ea = 0x699950u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x699954u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x8afbu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69995cu; f_352960(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6999d4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x69997cu; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x699984u; f_a87660(c);
    c->r[0] = 0x139f2e0u;
    { uint32_t ea = 0x699990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1a2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x1u;
    if (COND_NE) { goto L_6999b4; }
    c->r[0] = 0x139f3d4u;
    { uint32_t ea = 0x6999acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6999b0u; f_476278(c);
    { uint32_t ea = c->r[0] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
L_6999b4:;
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xfffffff9u) | ((c->r[10] << 1) & 0x6u);
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
L_6999d4:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_699a08(Cpu *restrict c) {
    FN_ENTER(0x699a08u);
L_699a08:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0xf8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x136cu;
    c->r[7] = 0x0u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    c->r[0] = 0xec98u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_69a0e8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x699a58u + 0x8u;
    c->r[8] = 0xffffu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x699a80u: goto L_699a80; case 0x699accu: goto L_699acc; case 0x699b90u: goto L_699b90; case 0x699d80u: goto L_699d80; case 0x699e30u: goto L_699e30; case 0x69a05cu: goto L_69a05c; case 0x69a06cu: goto L_69a06c; case 0x69a0a8u: goto L_69a0a8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_699a80:;
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x699a98u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_699b80; }
    c->r[0] = 0x1u;
    c->r[1] = 0x68u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[14] = 0x699ab8u; f_85dd68(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[14] = 0x699ac4u; f_6a2ed0(c);
    ST32(c->r[5], c->v.s[0]);
    goto L_699b80;
L_699acc:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = 0x1378u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x699ae0u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_699b80; }
    c->r[0] = 0x2u;
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0x699b04u; f_6a2f5c(c);
    c->r[5] = c->r[13] + 0x10u;
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x699b14u; f_240b10(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x699b24u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x1054u;
    c->r[1] = c->r[4] + 0x40u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x699b48u; f_6a1d34(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x699b58u; f_6a1e50(c);
    c->r[1] = 0x15a4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x699b6cu; f_6a2fe4(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x699b78u; f_6a2000(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x699b80u; f_240b50(c);
L_699b80:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffff7ffu;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    goto L_69a178;
L_699b90:;
    c->r[0] = c->r[4];
    c->r[14] = 0x699b98u; f_739f4c(c);
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (c->r[0] << 24);
    (void)f_subs(c, c->r[1], 0x4u);
    c->r[1] = 0x9u;
    if (COND_HI) { c->r[0] = 0x0u; }
    c->r[0] = (c->r[0] >> 24);
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x699bc4u; f_6a2ed0(c);
    c->v.s[18] = 0x3f000000u;
    c->v.s[16] = 0x43360b61u;
    c->r[7] = 0x1u;
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x1191cb4u;
    c->v.s[2] = c->r[1];
    c->r[2] = 0x699bf4u + c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->r[3] = (c->r[0] >> 24);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    c->v.s[0] = LD32(c->r[2]);
    c->r[2] = 0x15aau;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[1] = c->v.s[0];
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[5] + 20u);
    c->v.s[2] = LD32(c->r[4] + 68u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_69a0e8; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + 0x40u; ST32(ea, c->r[1]); c->r[9] = ea; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xffffff00u) | ((c->r[1] << 0) & 0xffu);
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x699c68u; f_6a2ed0(c);
    c->r[0] = 0x1378u;
    c->r[1] = 0x3u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = c->r[4];
    c->r[14] = 0x699c80u; f_6a2ed0(c);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[6] = c->r[4];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[18]);
    c->r[0] = c->v.s[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15a4u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_699cb4; }
    c->r[1] = 0x0u;
    c->r[14] = 0x699cb0u; f_52a400(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
L_699cb4:;
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[7] = 0x1u;
    c->r[2] = c->r[6];
    c->r[14] = 0x699cccu; f_6a2f5c(c);
    c->r[8] = c->r[13] + 0x10u;
    c->r[10] = c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x699cdcu; f_240b10(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x699cecu; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x1054u;
    c->r[5] = c->r[4];
    c->r[1] = c->r[8];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[14] = 0x699d14u; f_6a1d34(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[8];
    c->r[14] = 0x699d24u; f_6a1e50(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x699d30u; f_6a2fe4(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x699d3cu; f_6a2000(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x699d44u; f_240b50(c);
    c->r[0] = 0x139f030u;
    { uint32_t ea = 0x699d50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x699d54u; f_4772c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69a0e8; }
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_69a0e8; }
    c->r[1] = 0xdu;
    c->r[2] = 0x0u;
    c->r[14] = 0x699d7cu; f_4a063c(c);
    goto L_69a0e8;
L_699d80:;
    c->r[7] = 0x1u;
    c->r[1] = c->r[7] + (c->r[0] >> 24);
    c->r[0] = c->r[0] & 0xffffffu;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_LS) { c->r[0] = c->r[0] | (c->r[1] << 24); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x699da8u; f_6a2ed0(c);
    c->v.s[2] = 0x43360b61u;
    c->v.s[4] = 0x3f000000u;
    c->r[1] = 0x1191aecu;
    c->r[1] = 0x699dbcu + c->r[1];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[4]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 24);
    c->r[0] = c->v.s[0];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = 0x15aau;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1378u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x699e08u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_69a0e8; }
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0xfffffff9u) | ((c->r[1] << 1) & 0x6u);
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    goto L_69a0e8;
L_699e30:;
    c->r[7] = 0x1u;
    c->r[1] = c->r[7] + (c->r[0] >> 24);
    c->r[0] = c->r[0] & 0xffffffu;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_LS) { c->r[0] = c->r[0] | (c->r[1] << 24); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x699e58u; f_6a2ed0(c);
    c->v.s[18] = 0x3f000000u;
    c->v.s[16] = 0x43360b61u;
    c->r[1] = 0x1191a30u;
    c->r[5] = 0x15aau;
    c->r[8] = 0x5u;
    c->v.s[2] = c->v.s[18];
    c->r[1] = 0x699e78u + c->r[1];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 24);
    c->r[0] = c->v.s[0];
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = 0x5u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[4] + c->r[5]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x699eb8u; f_6a2ed0(c);
    c->v.s[2] = LD32(c->r[4] + 28u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    { uint32_t ea = c->r[4] + 0xfe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0x4u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x699eecu; f_6a2ed0(c);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[1] = 0xfe8u;
    c->r[1] = c->r[4] + c->r[1];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[18]);
    c->r[0] = c->v.s[0];
    c->v.s[0] = LD32(c->r[1]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = (float)c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_69a0e8; }
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4] + c->r[5];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[8]); }
    c->r[14] = 0x699f40u; f_6a2ed0(c);
    c->r[0] = 0x1378u;
    c->r[8] = c->r[4];
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[0] = 0x1014u;
    c->r[0] = c->r[8] - c->r[0];
    c->r[14] = 0x699f64u; f_866bac(c);
    c->r[0] = 0x139ee20u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x699f74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x699f78u; f_51aa6c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_69a0e8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x699f8cu; f_6a1b50(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[13] + 0x10u;
    if (COND_EQ) { c->r[0] = 0xc000u; }
    if (COND_EQ) { c->r[0] = (c->r[0] & 0xFFFFu) | 0x46280000u; }
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1060u;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[4] + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x699fd4u; f_518f84(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43480000u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43160000u;
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x69a010u; f_5191a0(c);
    c->r[0] = 0x14u;
    c->r[1] = 0xfu;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x24u;
    { uint32_t ea = c->r[5] + 0x4eu; ST16(ea, c->r[7]); }
    c->r[14] = 0x69a030u; f_5191d8(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x26u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x69a040u; f_5193a4(c);
    c->r[0] = 0x139ed40u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = 0x69a054u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a058u; f_51abac(c);
    goto L_69a0e8;
L_69a05c:;
    c->r[1] = 0x6u;
    c->r[7] = 0x1u;
    c->r[0] = (c->r[0] & 0xffffff00u) | ((c->r[1] << 0) & 0xffu);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_69a06c:;
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x69a084u; f_73aa84(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_69a0e8; }
    c->r[0] = 0x7u;
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x69a0a0u; f_6a2ed0(c);
    ST32(c->r[5], c->v.s[0]);
    goto L_69a0e8;
L_69a0a8:;
    c->r[0] = 0x1378u;
    c->v.s[0] = 0x3f800000u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x69a0c0u; f_73aa84(c);
    c->v.s[16] = LD32(c->r[5]);
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[14] = 0x69a0d0u; f_6a2ed0(c);
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    ST32(c->r[4] + 344u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_69a188; }
L_69a0e8:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x3du;
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[3] = c->r[1] & (c->r[2] >> 10);
    c->r[1] = 0x139eaa8u;
    c->r[2] = c->r[2] & 0xffff03ffu;
    { uint32_t ea = 0x69a10cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { c->r[3] = c->r[3] | 0x2u; }
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[2] = c->r[2] | (c->r[3] << 10);
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_69a178; }
    c->r[0] = 0x15a8u;
    c->r[1] = 0x15aau;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x69a158u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x69a168u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x69a178u; rt_dispatch(c);
L_69a178:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_69a188:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69a1c8(Cpu *restrict c) {
    FN_ENTER(0x69a1c8u);
L_69a1c8:;
    __attribute__((musttail)) return f_a8f62c(c);
}
void f_69a1cc(Cpu *restrict c) {
    FN_ENTER(0x69a1ccu);
L_69a1cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x69a1dcu; f_6a2478(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_b3b124(c);
}
void f_69a1ec(Cpu *restrict c) {
    FN_ENTER(0x69a1ecu);
L_69a1ec:;
    return;
}
void f_69a1f0(Cpu *restrict c) {
    FN_ENTER(0x69a1f0u);
L_69a1f0:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_69a1f4(Cpu *restrict c) {
    FN_ENTER(0x69a1f4u);
L_69a1f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_69a1f8(Cpu *restrict c) {
    FN_ENTER(0x69a1f8u);
L_69a1f8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_69a1fc(Cpu *restrict c) {
    FN_ENTER(0x69a1fcu);
L_69a1fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a3730u;
    { uint32_t ea = 0x69a210u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a210u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69a228(Cpu *restrict c) {
    FN_ENTER(0x69a228u);
L_69a228:;
    c->r[0] = 0x13a370cu;
    { uint32_t ea = 0x69a234u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69a238(Cpu *restrict c) {
    FN_ENTER(0x69a238u);
L_69a238:;
    c->r[0] = 0x13a36f4u;
    { uint32_t ea = 0x69a244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69a248(Cpu *restrict c) {
    FN_ENTER(0x69a248u);
L_69a248:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13f89bcu;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x69a274u + c->r[0];
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
    c->r[14] = 0x69a2d0u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x69a2e8u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x69a300u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a3530u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15b0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a35f4u;
    { uint32_t ea = 0x69a33cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10cbbdeu;
    { uint32_t ea = 0x69a344u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69a348u + c->r[1];
    c->r[14] = 0x69a348u; f_9aedcc(c);
    c->r[1] = 0x13a35e4u;
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x69a364u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13a2090u;
    c->r[0] = 0x13a35c0u;
    { uint32_t ea = 0x69a378u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10cbbaeu;
    { uint32_t ea = 0x69a380u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69a384u + c->r[1];
    c->r[14] = 0x69a384u; f_9aedcc(c);
    c->r[1] = 0x13a35bcu;
    { uint32_t ea = 0x69a390u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_69a3c0(Cpu *restrict c) {
    FN_ENTER(0x69a3c0u);
L_69a3c0:;
    c->r[0] = 0x0u;
    return;
}
void f_69a3c8(Cpu *restrict c) {
    FN_ENTER(0x69a3c8u);
L_69a3c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x69a3d0u; f_6a1794(c);
    c->r[1] = 0x13a3574u;
    { uint32_t ea = 0x69a3dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69a3e8(Cpu *restrict c) {
    FN_ENTER(0x69a3e8u);
L_69a3e8:;
    __attribute__((musttail)) return f_6a18b4(c);
}
void f_69a3ec(Cpu *restrict c) {
    FN_ENTER(0x69a3ecu);
L_69a3ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x69a3f8u; f_6a18b4(c);
    c->r[0] = 0x13a3468u;
    { uint32_t ea = 0x69a404u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a404u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69a41c(Cpu *restrict c) {
    FN_ENTER(0x69a41cu);
L_69a41c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x69a428u; f_6a24f8(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69a440u; f_6a1b6c(c);
    c->r[1] = 0x1052u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69a458(Cpu *restrict c) {
    FN_ENTER(0x69a458u);
L_69a458:;
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x139e748u;
    { uint32_t ea = 0x69a46cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x49u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_69a484(Cpu *restrict c) {
    FN_ENTER(0x69a484u);
L_69a484:;
    c->r[1] = 0x1054u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x3du;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = 0x139e70cu;
    c->r[3] = c->r[3] & (c->r[2] >> 10);
    c->r[2] = c->r[2] & 0xffff03ffu;
    { uint32_t ea = 0x69a4a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], c->r[1]);
    if (COND_EQ) { c->r[3] = c->r[3] | 0x2u; }
    c->r[1] = c->r[2] | (c->r[3] << 10);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    return;
}
void f_69a4c4(Cpu *restrict c) {
    FN_ENTER(0x69a4c4u);
L_69a4c4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0xf0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[2];
    c->r[2] = ~0x0u;
    c->r[5] = c->r[3];
    c->r[7] = c->r[0];
    c->r[14] = 0x69a4e8u; f_6a2f5c(c);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[6] = c->r[0];
    if (COND_NE) { { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_69a50c; }
    c->r[1] = c->r[5];
    c->r[14] = 0x69a504u; f_52a400(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_69a50c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_69a584; }
    c->r[9] = c->r[13] + 0x10u;
    c->r[8] = 0xffffu;
    c->r[0] = c->r[9];
    c->r[14] = 0x69a528u; f_240b10(c);
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x40u; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x69a53cu; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x1054u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[9];
    c->r[14] = 0x69a564u; f_6a1d34(c);
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[9];
    c->r[14] = 0x69a574u; f_6a1e50(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x69a584u; f_240b50(c);
L_69a584:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_69a58c(Cpu *restrict c) {
    FN_ENTER(0x69a58cu);
L_69a58c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0xf0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[2];
    c->r[2] = ~0x0u;
    c->r[4] = c->r[3];
    c->r[5] = c->r[0];
    c->r[14] = 0x69a5b0u; f_6a2f5c(c);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[7] = c->r[0];
    if (COND_NE) { { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_69a5d4; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x69a5ccu; f_52a400(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_69a5d4:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_69a63c; }
    c->r[6] = c->r[13] + 0x10u;
    c->r[9] = 0xffffu;
    c->r[0] = c->r[6];
    c->r[14] = 0x69a5f0u; f_240b10(c);
    c->r[0] = 0x1054u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[9]);
    c->r[2] = c->r[5] + 0x40u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[8];
    c->r[14] = 0x69a61cu; f_6a1d34(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x69a62cu; f_6a1e50(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x69a63cu; f_240b50(c);
L_69a63c:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_69a644(Cpu *restrict c) {
    FN_ENTER(0x69a644u);
L_69a644:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_69a648(Cpu *restrict c) {
    FN_ENTER(0x69a648u);
L_69a648:;
    c->r[0] = 0x13a3218u;
    { uint32_t ea = 0x69a654u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69a658(Cpu *restrict c) {
    FN_ENTER(0x69a658u);
L_69a658:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13f8628u;
    c->r[4] = 0x0u;
    c->r[8] = 0x1u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[6] = 0x5u;
    c->r[7] = 0x6u;
    c->r[5] = 0x69a688u + c->r[0];
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[12] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
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
    c->r[14] = 0x69a6e0u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x69a6f8u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x69a710u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a2b18u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15b0u;
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a311cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x69a748u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10cb7fcu;
    { uint32_t ea = 0x69a750u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69a754u + c->r[1];
    c->r[14] = 0x69a754u; f_9aedcc(c);
    c->r[1] = 0x13a31f4u;
    { uint32_t ea = 0x69a760u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_69a780(Cpu *restrict c) {
    FN_ENTER(0x69a780u);
L_69a780:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a31c8u;
    { uint32_t ea = 0x69a790u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69a794u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15b0u;
    c->pc = c->r[4]; c->r[14] = 0x69a7acu; rt_dispatch(c);
    c->r[14] = 0x69a7b0u; f_6a1794(c);
    c->r[1] = 0x13a3198u;
    c->r[2] = 0x15a8u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69a7c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x15a4u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69a7e4(Cpu *restrict c) {
    FN_ENTER(0x69a7e4u);
L_69a7e4:;
    __attribute__((musttail)) return f_6a18b4(c);
}
void f_69a7e8(Cpu *restrict c) {
    FN_ENTER(0x69a7e8u);
L_69a7e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x69a7f4u; f_6a18b4(c);
    c->r[0] = 0x13a3158u;
    { uint32_t ea = 0x69a800u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a800u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69a818(Cpu *restrict c) {
    FN_ENTER(0x69a818u);
L_69a818:;
    __attribute__((musttail)) return f_6a1b30(c);
}
void f_69a81c(Cpu *restrict c) {
    FN_ENTER(0x69a81cu);
L_69a81c:;
    __attribute__((musttail)) return f_6a1b34(c);
}
void f_69a820(Cpu *restrict c) {
    FN_ENTER(0x69a820u);
L_69a820:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15a4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69a84c; }
    c->r[1] = 0x1u;
    c->r[14] = 0x69a844u; f_52a400(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_69a84c:;
    c->r[0] = 0x15a8u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69a870; }
    c->r[1] = 0x1u;
    c->r[14] = 0x69a868u; f_52a400(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_69a870:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_6a247c(c);
}
void f_69a87c(Cpu *restrict c) {
    FN_ENTER(0x69a87cu);
L_69a87c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->v.s[0] = 0x3f800000u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1378u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x69a898u; f_73aa84(c);
    c->r[1] = 0x15a4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_69a8c4; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_69a8c4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_69a8d0(c);
}
void f_69a8d0(Cpu *restrict c) {
    FN_ENTER(0x69a8d0u);
L_69a8d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[2] = 0x139e2c0u;
    c->r[5] = c->r[0];
    c->r[0] = 0x15a8u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    c->r[0] = 0x139e2c8u;
    { uint32_t ea = 0x69a8f4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x69a8f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x49u; uint32_t v = LD8(ea); c->r[4] = v; }
    if (COND_EQ) { goto L_69a970; }
    c->r[1] = c->r[4];
    c->r[14] = 0x69a910u; f_25c018(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_69a950; }
    c->r[0] = 0x139e298u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x69a928u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a92cu; f_25c074(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_69a9b8; }
    c->r[0] = 0x139e27cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x69a944u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a948u; f_25c264(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_69a9b8; }
L_69a950:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x69a968u; f_52a400(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_69a970:;
    c->r[1] = c->r[4];
    c->r[14] = 0x69a978u; f_25c074(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_69a99c; }
    c->r[0] = 0x139e230u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x69a990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a994u; f_25c264(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_69a9b8; }
L_69a99c:;
    c->r[0] = 0x139e214u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x69a9acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69a9b0u; f_25c018(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69a9bc; }
L_69a9b8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_69a9bc:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_69aad0(c);
}
void f_69a9e4(Cpu *restrict c) {
    FN_ENTER(0x69a9e4u);
L_69a9e4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0xe8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x139e1a8u;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x69aa0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_69aac0; }
    c->r[0] = 0x15a4u;
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69aa34; }
    c->r[1] = 0x1u;
    c->r[14] = 0x69aa34u; f_52a400(c);
L_69aa34:;
    c->r[0] = 0x1378u;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->v.s[16] = LD32(c->r[7]);
    c->r[14] = 0x69aa50u; f_6a2ed0(c);
    c->r[0] = c->r[13];
    ST32(c->r[7], c->v.s[0]);
    c->r[14] = 0x69aa5cu; f_240b10(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x69aa6cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    c->r[2] = ~0x0u;
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[6] = 0x1u; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[5]); }
    c->r[14] = 0x69aa9cu; f_6a2f5c(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_69aab8; }
    c->r[2] = c->r[13];
    c->r[0] = c->r[4];
    c->r[14] = 0x69aab4u; f_6a1e50(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_69aab8:;
    c->r[0] = c->r[13];
    c->r[14] = 0x69aac0u; f_240b50(c);
L_69aac0:;
    c->r[13] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_69aad0(Cpu *restrict c) {
    FN_ENTER(0x69aad0u);
L_69aad0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0xe8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x139e0c0u;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x69aaf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_69ab90; }
    c->r[0] = 0x15a8u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_69ab90; }
    c->r[0] = 0x139e09cu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x69ab24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ab28u; f_25c018(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_69ab90; }
    c->r[0] = c->r[13];
    c->r[14] = 0x69ab38u; f_240b10(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x69ab48u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[5]); }
    c->r[14] = 0x69ab6cu; f_6a2f5c(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_69ab88; }
    c->r[2] = c->r[13];
    c->r[0] = c->r[4];
    c->r[14] = 0x69ab84u; f_6a1e50(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_69ab88:;
    c->r[0] = c->r[13];
    c->r[14] = 0x69ab90u; f_240b50(c);
L_69ab90:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_69aba0(Cpu *restrict c) {
    FN_ENTER(0x69aba0u);
L_69aba0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0xe8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15a8u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_69abdc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x69abd4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_69abdc:;
    c->r[1] = 0x139dfc8u;
    c->r[0] = 0x139dfd0u;
    { uint32_t ea = 0x69abecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x69abf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x69ac00u; f_25c018(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_69aca0; }
    c->r[0] = 0x139dfa8u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x69ac18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ac1cu; f_25c074(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_69ac40; }
    c->r[0] = 0x139df8cu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x69ac34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ac38u; f_25c264(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_69aca0; }
L_69ac40:;
    c->r[0] = c->r[13];
    c->r[14] = 0x69ac48u; f_240b10(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x69ac58u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~0x0u;
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[5]); }
    c->r[14] = 0x69ac7cu; f_6a2f5c(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_69ac98; }
    c->r[2] = c->r[13];
    c->r[0] = c->r[4];
    c->r[14] = 0x69ac94u; f_6a1e50(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_69ac98:;
    c->r[0] = c->r[13];
    c->r[14] = 0x69aca0u; f_240b50(c);
L_69aca0:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_69acb8(Cpu *restrict c) {
    FN_ENTER(0x69acb8u);
L_69acb8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_69acbc(Cpu *restrict c) {
    FN_ENTER(0x69acbcu);
L_69acbc:;
    c->r[0] = 0x13a2c90u;
    { uint32_t ea = 0x69acc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_69accc(Cpu *restrict c) {
    FN_ENTER(0x69acccu);
L_69accc:;
    return;
}
void f_69acd0(Cpu *restrict c) {
    FN_ENTER(0x69acd0u);
L_69acd0:;
    return;
}
void f_69acd4(Cpu *restrict c) {
    FN_ENTER(0x69acd4u);
L_69acd4:;
    return;
}
void f_69acd8(Cpu *restrict c) {
    FN_ENTER(0x69acd8u);
L_69acd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13f802cu;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x69ad04u + c->r[0];
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
    c->r[14] = 0x69ad60u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x69ad78u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x69ad90u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13a2494u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x15b0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x13a2b84u;
    { uint32_t ea = 0x69adccu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x10cb184u;
    { uint32_t ea = 0x69add4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69add8u + c->r[1];
    c->r[14] = 0x69add8u; f_9aedcc(c);
    c->r[1] = 0x13a2b7cu;
    { uint32_t ea = 0x69ade4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_69ae04(Cpu *restrict c) {
    FN_ENTER(0x69ae04u);
L_69ae04:;
    c->r[0] = 0x0u;
    return;
}
void f_69ae0c(Cpu *restrict c) {
    FN_ENTER(0x69ae0cu);
L_69ae0c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a15ecu;
    { uint32_t ea = 0x69ae1cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ae20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0x69ae38u; rt_dispatch(c);
    c->r[1] = 0x13a15a8u;
    c->r[2] = 0x19du;
    c->r[3] = 0xffu;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x69ae50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69ae60(Cpu *restrict c) {
    FN_ENTER(0x69ae60u);
L_69ae60:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a1590u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x69ae78u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x69ae7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ae9c(Cpu *restrict c) {
    FN_ENTER(0x69ae9cu);
L_69ae9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1558u;
    { uint32_t ea = 0x69aeb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69aeb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69aec8(Cpu *restrict c) {
    FN_ENTER(0x69aec8u);
L_69aec8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2a8cu;
    { uint32_t ea = 0x69aed8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69aedcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0x69aef4u; rt_dispatch(c);
    c->r[1] = 0x13a294cu;
    c->r[2] = ~0x0u;
    { uint32_t ea = 0x69af04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69af34(Cpu *restrict c) {
    FN_ENTER(0x69af34u);
L_69af34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2a24u;
    { uint32_t ea = 0x69af44u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69af48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69af60u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f10aa0(c);
}
void f_69af6c(Cpu *restrict c) {
    FN_ENTER(0x69af6cu);
L_69af6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a29e8u;
    { uint32_t ea = 0x69af80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69af80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69af98(Cpu *restrict c) {
    FN_ENTER(0x69af98u);
L_69af98:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a28b0u;
    { uint32_t ea = 0x69afa8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69afacu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69afc4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f117e8(c);
}
void f_69afd0(Cpu *restrict c) {
    FN_ENTER(0x69afd0u);
L_69afd0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2874u;
    { uint32_t ea = 0x69afe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69afe4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69affc(Cpu *restrict c) {
    FN_ENTER(0x69affcu);
L_69affc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2960u;
    { uint32_t ea = 0x69b00cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b010u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69b028u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f11fd4(c);
}
void f_69b034(Cpu *restrict c) {
    FN_ENTER(0x69b034u);
L_69b034:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2924u;
    { uint32_t ea = 0x69b048u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b048u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b060(Cpu *restrict c) {
    FN_ENTER(0x69b060u);
L_69b060:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2900u;
    { uint32_t ea = 0x69b070u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b074u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b08cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f245b4(c);
}
void f_69b098(Cpu *restrict c) {
    FN_ENTER(0x69b098u);
L_69b098:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a28c4u;
    { uint32_t ea = 0x69b0acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b0acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b0c4(Cpu *restrict c) {
    FN_ENTER(0x69b0c4u);
L_69b0c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a28a0u;
    { uint32_t ea = 0x69b0d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b0d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b0f0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f24a1c(c);
}
void f_69b0fc(Cpu *restrict c) {
    FN_ENTER(0x69b0fcu);
L_69b0fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2864u;
    { uint32_t ea = 0x69b110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b110u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b128(Cpu *restrict c) {
    FN_ENTER(0x69b128u);
L_69b128:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2840u;
    { uint32_t ea = 0x69b138u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b13cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1700u;
    c->pc = c->r[4]; c->r[14] = 0x69b154u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f24c68(c);
}
void f_69b160(Cpu *restrict c) {
    FN_ENTER(0x69b160u);
L_69b160:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2804u;
    { uint32_t ea = 0x69b174u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b174u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b18c(Cpu *restrict c) {
    FN_ENTER(0x69b18cu);
L_69b18c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a27e0u;
    { uint32_t ea = 0x69b19cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b1a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1600u;
    c->pc = c->r[4]; c->r[14] = 0x69b1b8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f24e80(c);
}
void f_69b1c4(Cpu *restrict c) {
    FN_ENTER(0x69b1c4u);
L_69b1c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a27a4u;
    { uint32_t ea = 0x69b1d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b1d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b1f0(Cpu *restrict c) {
    FN_ENTER(0x69b1f0u);
L_69b1f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2780u;
    { uint32_t ea = 0x69b200u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b204u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69b21cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f251e8(c);
}
void f_69b228(Cpu *restrict c) {
    FN_ENTER(0x69b228u);
L_69b228:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2744u;
    { uint32_t ea = 0x69b23cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b23cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b254(Cpu *restrict c) {
    FN_ENTER(0x69b254u);
L_69b254:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2720u;
    { uint32_t ea = 0x69b264u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b268u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69b280u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f335dc(c);
}
void f_69b28c(Cpu *restrict c) {
    FN_ENTER(0x69b28cu);
L_69b28c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a26e4u;
    { uint32_t ea = 0x69b2a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b2a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b2b8(Cpu *restrict c) {
    FN_ENTER(0x69b2b8u);
L_69b2b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a26c0u;
    { uint32_t ea = 0x69b2c8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b2ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b2e4u; rt_dispatch(c);
    c->r[14] = 0x69b2e8u; f_5faf64(c);
    c->r[1] = 0x13a2698u;
    { uint32_t ea = 0x69b2f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69b304(Cpu *restrict c) {
    FN_ENTER(0x69b304u);
L_69b304:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2670u;
    { uint32_t ea = 0x69b318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b318u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b330(Cpu *restrict c) {
    FN_ENTER(0x69b330u);
L_69b330:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2650u;
    { uint32_t ea = 0x69b340u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b344u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69b35cu; rt_dispatch(c);
    c->r[14] = 0x69b360u; f_5fc464(c);
    c->r[1] = 0x13a2620u;
    c->r[2] = 0x168cu;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69b374u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69b38c(Cpu *restrict c) {
    FN_ENTER(0x69b38cu);
L_69b38c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a25f0u;
    { uint32_t ea = 0x69b3a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b3a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b3b8(Cpu *restrict c) {
    FN_ENTER(0x69b3b8u);
L_69b3b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a25d0u;
    { uint32_t ea = 0x69b3c8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b3ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16b0u;
    c->pc = c->r[4]; c->r[14] = 0x69b3e4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f34460(c);
}
void f_69b3f0(Cpu *restrict c) {
    FN_ENTER(0x69b3f0u);
L_69b3f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2594u;
    { uint32_t ea = 0x69b404u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b404u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b41c(Cpu *restrict c) {
    FN_ENTER(0x69b41cu);
L_69b41c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2570u;
    { uint32_t ea = 0x69b42cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b430u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b448u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f498c8(c);
}
void f_69b454(Cpu *restrict c) {
    FN_ENTER(0x69b454u);
L_69b454:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2534u;
    { uint32_t ea = 0x69b468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b468u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b480(Cpu *restrict c) {
    FN_ENTER(0x69b480u);
L_69b480:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2510u;
    { uint32_t ea = 0x69b490u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b494u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1630u;
    c->pc = c->r[4]; c->r[14] = 0x69b4acu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f49bec(c);
}
void f_69b4b8(Cpu *restrict c) {
    FN_ENTER(0x69b4b8u);
L_69b4b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a24d4u;
    { uint32_t ea = 0x69b4ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b4ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b4e4(Cpu *restrict c) {
    FN_ENTER(0x69b4e4u);
L_69b4e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a24b0u;
    { uint32_t ea = 0x69b4f4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b4f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69b510u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f55334(c);
}
void f_69b51c(Cpu *restrict c) {
    FN_ENTER(0x69b51cu);
L_69b51c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2474u;
    { uint32_t ea = 0x69b530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b530u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b548(Cpu *restrict c) {
    FN_ENTER(0x69b548u);
L_69b548:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2450u;
    { uint32_t ea = 0x69b558u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b55cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b574u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f558b8(c);
}
void f_69b580(Cpu *restrict c) {
    FN_ENTER(0x69b580u);
L_69b580:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2414u;
    { uint32_t ea = 0x69b594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b594u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b5ac(Cpu *restrict c) {
    FN_ENTER(0x69b5acu);
L_69b5ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a23f0u;
    { uint32_t ea = 0x69b5bcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b5c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69b5d8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f55b1c(c);
}
void f_69b5e4(Cpu *restrict c) {
    FN_ENTER(0x69b5e4u);
L_69b5e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a23b4u;
    { uint32_t ea = 0x69b5f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b5f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b610(Cpu *restrict c) {
    FN_ENTER(0x69b610u);
L_69b610:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2390u;
    { uint32_t ea = 0x69b620u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b624u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69b63cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f627d8(c);
}
void f_69b648(Cpu *restrict c) {
    FN_ENTER(0x69b648u);
L_69b648:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2354u;
    { uint32_t ea = 0x69b65cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b65cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b674(Cpu *restrict c) {
    FN_ENTER(0x69b674u);
L_69b674:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2330u;
    { uint32_t ea = 0x69b684u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b688u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b6a0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f63568(c);
}
void f_69b6ac(Cpu *restrict c) {
    FN_ENTER(0x69b6acu);
L_69b6ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a22f4u;
    { uint32_t ea = 0x69b6c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b6c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b6d8(Cpu *restrict c) {
    FN_ENTER(0x69b6d8u);
L_69b6d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a22d0u;
    { uint32_t ea = 0x69b6e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b6ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69b704u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f637b4(c);
}
void f_69b710(Cpu *restrict c) {
    FN_ENTER(0x69b710u);
L_69b710:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2294u;
    { uint32_t ea = 0x69b724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b724u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b73c(Cpu *restrict c) {
    FN_ENTER(0x69b73cu);
L_69b73c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2270u;
    { uint32_t ea = 0x69b74cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b750u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1600u;
    c->pc = c->r[4]; c->r[14] = 0x69b768u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f644e8(c);
}
void f_69b774(Cpu *restrict c) {
    FN_ENTER(0x69b774u);
L_69b774:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2234u;
    { uint32_t ea = 0x69b788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b788u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b7a0(Cpu *restrict c) {
    FN_ENTER(0x69b7a0u);
L_69b7a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2210u;
    { uint32_t ea = 0x69b7b0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b7b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1610u;
    c->pc = c->r[4]; c->r[14] = 0x69b7ccu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f646a4(c);
}
void f_69b7d8(Cpu *restrict c) {
    FN_ENTER(0x69b7d8u);
L_69b7d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a21d4u;
    { uint32_t ea = 0x69b7ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b7ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b804(Cpu *restrict c) {
    FN_ENTER(0x69b804u);
L_69b804:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a21b0u;
    { uint32_t ea = 0x69b814u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b818u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1610u;
    c->pc = c->r[4]; c->r[14] = 0x69b830u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f64930(c);
}
void f_69b83c(Cpu *restrict c) {
    FN_ENTER(0x69b83cu);
L_69b83c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2174u;
    { uint32_t ea = 0x69b850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b850u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b868(Cpu *restrict c) {
    FN_ENTER(0x69b868u);
L_69b868:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2150u;
    { uint32_t ea = 0x69b878u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b87cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69b894u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f6f660(c);
}
void f_69b8a0(Cpu *restrict c) {
    FN_ENTER(0x69b8a0u);
L_69b8a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2114u;
    { uint32_t ea = 0x69b8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b8b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b8cc(Cpu *restrict c) {
    FN_ENTER(0x69b8ccu);
L_69b8cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a20f0u;
    { uint32_t ea = 0x69b8dcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b8e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16b0u;
    c->pc = c->r[4]; c->r[14] = 0x69b8f8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f6f9e4(c);
}
void f_69b904(Cpu *restrict c) {
    FN_ENTER(0x69b904u);
L_69b904:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a20b4u;
    { uint32_t ea = 0x69b918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b918u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b930(Cpu *restrict c) {
    FN_ENTER(0x69b930u);
L_69b930:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2090u;
    { uint32_t ea = 0x69b940u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b944u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b95cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f7785c(c);
}
void f_69b968(Cpu *restrict c) {
    FN_ENTER(0x69b968u);
L_69b968:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a2054u;
    { uint32_t ea = 0x69b97cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b97cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b994(Cpu *restrict c) {
    FN_ENTER(0x69b994u);
L_69b994:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a2030u;
    { uint32_t ea = 0x69b9a4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69b9a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69b9c0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f7fe94(c);
}
void f_69b9cc(Cpu *restrict c) {
    FN_ENTER(0x69b9ccu);
L_69b9cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1ff4u;
    { uint32_t ea = 0x69b9e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69b9e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69b9f8(Cpu *restrict c) {
    FN_ENTER(0x69b9f8u);
L_69b9f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1fd0u;
    { uint32_t ea = 0x69ba08u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ba0cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16b0u;
    c->pc = c->r[4]; c->r[14] = 0x69ba24u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f80074(c);
}
void f_69ba30(Cpu *restrict c) {
    FN_ENTER(0x69ba30u);
L_69ba30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1f94u;
    { uint32_t ea = 0x69ba44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ba44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ba5c(Cpu *restrict c) {
    FN_ENTER(0x69ba5cu);
L_69ba5c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1f70u;
    { uint32_t ea = 0x69ba6cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ba70u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[4]; c->r[14] = 0x69ba88u; rt_dispatch(c);
    c->r[2] = 0x13a1370u;
    c->r[1] = 0x19du;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = 0x69baa8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0x139d094u;
    { uint32_t ea = 0x69bab8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x34u; ST16(ea, c->r[1]); }
    c->r[1] = 0x13a1ee8u;
    { uint32_t ea = 0x69baf8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69bb40(Cpu *restrict c) {
    FN_ENTER(0x69bb40u);
L_69bb40:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a1e84u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x69bb58u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x69bb5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bb7c(Cpu *restrict c) {
    FN_ENTER(0x69bb7cu);
L_69bb7c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1e58u;
    { uint32_t ea = 0x69bb8cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bb90u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69bba8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f77ae4(c);
}
void f_69bbb4(Cpu *restrict c) {
    FN_ENTER(0x69bbb4u);
L_69bbb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1e1cu;
    { uint32_t ea = 0x69bbc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bbc8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bbe0(Cpu *restrict c) {
    FN_ENTER(0x69bbe0u);
L_69bbe0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1df8u;
    { uint32_t ea = 0x69bbf0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bbf4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69bc0cu; rt_dispatch(c);
    c->r[14] = 0x69bc10u; f_5f9670(c);
    c->r[1] = 0x13a1dd0u;
    { uint32_t ea = 0x69bc1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69bc2c(Cpu *restrict c) {
    FN_ENTER(0x69bc2cu);
L_69bc2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1da8u;
    { uint32_t ea = 0x69bc40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bc40u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bc58(Cpu *restrict c) {
    FN_ENTER(0x69bc58u);
L_69bc58:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1d88u;
    { uint32_t ea = 0x69bc68u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bc6cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69bc84u; rt_dispatch(c);
    c->r[14] = 0x69bc88u; f_5faf64(c);
    c->r[1] = 0x13a1d60u;
    { uint32_t ea = 0x69bc94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69bca4(Cpu *restrict c) {
    FN_ENTER(0x69bca4u);
L_69bca4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1d38u;
    { uint32_t ea = 0x69bcb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bcb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bcd0(Cpu *restrict c) {
    FN_ENTER(0x69bcd0u);
L_69bcd0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1d18u;
    { uint32_t ea = 0x69bce0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bce4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69bcfcu; rt_dispatch(c);
    c->r[14] = 0x69bd00u; f_5fc464(c);
    c->r[1] = 0x13a1ce8u;
    c->r[2] = 0x1690u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69bd14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x168cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69bd34(Cpu *restrict c) {
    FN_ENTER(0x69bd34u);
L_69bd34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1cb0u;
    { uint32_t ea = 0x69bd48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bd48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bd60(Cpu *restrict c) {
    FN_ENTER(0x69bd60u);
L_69bd60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1c90u;
    { uint32_t ea = 0x69bd70u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bd74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69bd8cu; rt_dispatch(c);
    c->r[14] = 0x69bd90u; f_629760(c);
    c->r[1] = 0x13a1c68u;
    { uint32_t ea = 0x69bd9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69bdac(Cpu *restrict c) {
    FN_ENTER(0x69bdacu);
L_69bdac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1c40u;
    { uint32_t ea = 0x69bdc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bdc0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bdd8(Cpu *restrict c) {
    FN_ENTER(0x69bdd8u);
L_69bdd8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1c20u;
    { uint32_t ea = 0x69bde8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bdecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69be04u; rt_dispatch(c);
    c->r[14] = 0x69be08u; f_5f9670(c);
    c->r[1] = 0x13a1bf0u;
    c->r[2] = 0x1664u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69be1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x1660u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69be3c(Cpu *restrict c) {
    FN_ENTER(0x69be3cu);
L_69be3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1bb8u;
    { uint32_t ea = 0x69be50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69be50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69be68(Cpu *restrict c) {
    FN_ENTER(0x69be68u);
L_69be68:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1b98u;
    { uint32_t ea = 0x69be78u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69be7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69be94u; rt_dispatch(c);
    c->r[14] = 0x69be98u; f_5faf64(c);
    c->r[1] = 0x13a1b70u;
    { uint32_t ea = 0x69bea4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69beb4(Cpu *restrict c) {
    FN_ENTER(0x69beb4u);
L_69beb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1b48u;
    { uint32_t ea = 0x69bec8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bec8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bee0(Cpu *restrict c) {
    FN_ENTER(0x69bee0u);
L_69bee0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1b28u;
    { uint32_t ea = 0x69bef0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bef4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69bf0cu; rt_dispatch(c);
    c->r[14] = 0x69bf10u; f_5fc464(c);
    c->r[1] = 0x13a1af8u;
    c->r[2] = 0x1690u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69bf24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x168cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69bf44(Cpu *restrict c) {
    FN_ENTER(0x69bf44u);
L_69bf44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1ac0u;
    { uint32_t ea = 0x69bf58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bf58u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bf70(Cpu *restrict c) {
    FN_ENTER(0x69bf70u);
L_69bf70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1aa0u;
    { uint32_t ea = 0x69bf80u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bf84u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69bf9cu; rt_dispatch(c);
    c->r[14] = 0x69bfa0u; f_629760(c);
    c->r[1] = 0x13a1a78u;
    { uint32_t ea = 0x69bfacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69bfbc(Cpu *restrict c) {
    FN_ENTER(0x69bfbcu);
L_69bfbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1a50u;
    { uint32_t ea = 0x69bfd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69bfd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69bfe8(Cpu *restrict c) {
    FN_ENTER(0x69bfe8u);
L_69bfe8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1a30u;
    { uint32_t ea = 0x69bff8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69bffcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c014u; rt_dispatch(c);
    c->r[14] = 0x69c018u; f_5f9670(c);
    c->r[1] = 0x13a1a08u;
    { uint32_t ea = 0x69c024u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69c034(Cpu *restrict c) {
    FN_ENTER(0x69c034u);
L_69c034:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a19e0u;
    { uint32_t ea = 0x69c048u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c048u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c060(Cpu *restrict c) {
    FN_ENTER(0x69c060u);
L_69c060:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a19c0u;
    { uint32_t ea = 0x69c070u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c074u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c08cu; rt_dispatch(c);
    c->r[14] = 0x69c090u; f_5faf64(c);
    c->r[1] = 0x13a1998u;
    { uint32_t ea = 0x69c09cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69c0ac(Cpu *restrict c) {
    FN_ENTER(0x69c0acu);
L_69c0ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1970u;
    { uint32_t ea = 0x69c0c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c0c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c0d8(Cpu *restrict c) {
    FN_ENTER(0x69c0d8u);
L_69c0d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1950u;
    { uint32_t ea = 0x69c0e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c0ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69c104u; rt_dispatch(c);
    c->r[14] = 0x69c108u; f_5fc464(c);
    c->r[1] = 0x13a1920u;
    c->r[2] = 0x1690u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69c11cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x168cu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69c13c(Cpu *restrict c) {
    FN_ENTER(0x69c13cu);
L_69c13c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a18e8u;
    { uint32_t ea = 0x69c150u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c150u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c168(Cpu *restrict c) {
    FN_ENTER(0x69c168u);
L_69c168:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a18c8u;
    { uint32_t ea = 0x69c178u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c17cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69c194u; rt_dispatch(c);
    c->r[14] = 0x69c198u; f_603bec(c);
    c->r[1] = 0x13a18a0u;
    { uint32_t ea = 0x69c1a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69c1b4(Cpu *restrict c) {
    FN_ENTER(0x69c1b4u);
L_69c1b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1878u;
    { uint32_t ea = 0x69c1c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c1c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c1e0(Cpu *restrict c) {
    FN_ENTER(0x69c1e0u);
L_69c1e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1858u;
    { uint32_t ea = 0x69c1f0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c1f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69c20cu; rt_dispatch(c);
    c->r[14] = 0x69c210u; f_629760(c);
    c->r[1] = 0x13a1830u;
    { uint32_t ea = 0x69c21cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69c22c(Cpu *restrict c) {
    FN_ENTER(0x69c22cu);
L_69c22c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1808u;
    { uint32_t ea = 0x69c240u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c240u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c258(Cpu *restrict c) {
    FN_ENTER(0x69c258u);
L_69c258:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a17e8u;
    { uint32_t ea = 0x69c268u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c26cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c284u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f993d8(c);
}
void f_69c290(Cpu *restrict c) {
    FN_ENTER(0x69c290u);
L_69c290:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a17acu;
    { uint32_t ea = 0x69c2a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c2a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c2bc(Cpu *restrict c) {
    FN_ENTER(0x69c2bcu);
L_69c2bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1788u;
    { uint32_t ea = 0x69c2ccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c2d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c2e8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f997e8(c);
}
void f_69c2f4(Cpu *restrict c) {
    FN_ENTER(0x69c2f4u);
L_69c2f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a174cu;
    { uint32_t ea = 0x69c308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c308u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c320(Cpu *restrict c) {
    FN_ENTER(0x69c320u);
L_69c320:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1728u;
    { uint32_t ea = 0x69c330u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c334u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69c34cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f999c0(c);
}
void f_69c358(Cpu *restrict c) {
    FN_ENTER(0x69c358u);
L_69c358:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a16ecu;
    { uint32_t ea = 0x69c36cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c36cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c384(Cpu *restrict c) {
    FN_ENTER(0x69c384u);
L_69c384:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a16c8u;
    { uint32_t ea = 0x69c394u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c398u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c3b0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fa6b54(c);
}
void f_69c3bc(Cpu *restrict c) {
    FN_ENTER(0x69c3bcu);
L_69c3bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a168cu;
    { uint32_t ea = 0x69c3d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c3d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c3e8(Cpu *restrict c) {
    FN_ENTER(0x69c3e8u);
L_69c3e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1668u;
    { uint32_t ea = 0x69c3f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c3fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c414u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fa700c(c);
}
void f_69c420(Cpu *restrict c) {
    FN_ENTER(0x69c420u);
L_69c420:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a162cu;
    { uint32_t ea = 0x69c434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c434u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c44c(Cpu *restrict c) {
    FN_ENTER(0x69c44cu);
L_69c44c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1608u;
    { uint32_t ea = 0x69c45cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c460u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c478u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fb6654(c);
}
void f_69c484(Cpu *restrict c) {
    FN_ENTER(0x69c484u);
L_69c484:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a15ccu;
    { uint32_t ea = 0x69c498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c498u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c4b0(Cpu *restrict c) {
    FN_ENTER(0x69c4b0u);
L_69c4b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a15a8u;
    { uint32_t ea = 0x69c4c0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c4c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c4dcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fb6cc0(c);
}
void f_69c4e8(Cpu *restrict c) {
    FN_ENTER(0x69c4e8u);
L_69c4e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a156cu;
    { uint32_t ea = 0x69c4fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c4fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c514(Cpu *restrict c) {
    FN_ENTER(0x69c514u);
L_69c514:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1548u;
    { uint32_t ea = 0x69c524u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c528u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1630u;
    c->pc = c->r[4]; c->r[14] = 0x69c540u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fb634c(c);
}
void f_69c54c(Cpu *restrict c) {
    FN_ENTER(0x69c54cu);
L_69c54c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a150cu;
    { uint32_t ea = 0x69c560u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c560u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c578(Cpu *restrict c) {
    FN_ENTER(0x69c578u);
L_69c578:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a14e8u;
    { uint32_t ea = 0x69c588u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c58cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c5a4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fd0858(c);
}
void f_69c5b0(Cpu *restrict c) {
    FN_ENTER(0x69c5b0u);
L_69c5b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a14acu;
    { uint32_t ea = 0x69c5c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c5c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c5dc(Cpu *restrict c) {
    FN_ENTER(0x69c5dcu);
L_69c5dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1488u;
    { uint32_t ea = 0x69c5ecu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c5f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c608u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fd0af0(c);
}
void f_69c614(Cpu *restrict c) {
    FN_ENTER(0x69c614u);
L_69c614:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a144cu;
    { uint32_t ea = 0x69c628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c628u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c640(Cpu *restrict c) {
    FN_ENTER(0x69c640u);
L_69c640:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1428u;
    { uint32_t ea = 0x69c650u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c654u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69c66cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fd0cf0(c);
}
void f_69c678(Cpu *restrict c) {
    FN_ENTER(0x69c678u);
L_69c678:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a13ecu;
    { uint32_t ea = 0x69c68cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c68cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c6a4(Cpu *restrict c) {
    FN_ENTER(0x69c6a4u);
L_69c6a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a13c8u;
    { uint32_t ea = 0x69c6b4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c6b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69c6d0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fd141c(c);
}
void f_69c6dc(Cpu *restrict c) {
    FN_ENTER(0x69c6dcu);
L_69c6dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a138cu;
    { uint32_t ea = 0x69c6f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c6f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c708(Cpu *restrict c) {
    FN_ENTER(0x69c708u);
L_69c708:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1368u;
    { uint32_t ea = 0x69c718u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c71cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c734u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fd0fd0(c);
}
void f_69c740(Cpu *restrict c) {
    FN_ENTER(0x69c740u);
L_69c740:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a132cu;
    { uint32_t ea = 0x69c754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c754u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c76c(Cpu *restrict c) {
    FN_ENTER(0x69c76cu);
L_69c76c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1308u;
    { uint32_t ea = 0x69c77cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c780u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69c798u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fd1164(c);
}
void f_69c7a4(Cpu *restrict c) {
    FN_ENTER(0x69c7a4u);
L_69c7a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a12ccu;
    { uint32_t ea = 0x69c7b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c7b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c7d0(Cpu *restrict c) {
    FN_ENTER(0x69c7d0u);
L_69c7d0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a12a8u;
    { uint32_t ea = 0x69c7e0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c7e4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69c7fcu; rt_dispatch(c);
    c->r[14] = 0x69c800u; f_5f9670(c);
    c->r[1] = 0x13a1278u;
    c->r[2] = 0x1660u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69c814u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69c82c(Cpu *restrict c) {
    FN_ENTER(0x69c82cu);
L_69c82c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1248u;
    { uint32_t ea = 0x69c840u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c840u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c858(Cpu *restrict c) {
    FN_ENTER(0x69c858u);
L_69c858:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1228u;
    { uint32_t ea = 0x69c868u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c86cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c884u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fdc7e0(c);
}
void f_69c890(Cpu *restrict c) {
    FN_ENTER(0x69c890u);
L_69c890:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a11ecu;
    { uint32_t ea = 0x69c8a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c8a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c8bc(Cpu *restrict c) {
    FN_ENTER(0x69c8bcu);
L_69c8bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a11c8u;
    { uint32_t ea = 0x69c8ccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c8d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x69c8e8u; rt_dispatch(c);
    c->r[14] = 0x69c8ecu; f_5ffcec(c);
    c->r[1] = 0x13a11a0u;
    { uint32_t ea = 0x69c8f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69c908(Cpu *restrict c) {
    FN_ENTER(0x69c908u);
L_69c908:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a1178u;
    { uint32_t ea = 0x69c91cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c91cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c934(Cpu *restrict c) {
    FN_ENTER(0x69c934u);
L_69c934:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1158u;
    { uint32_t ea = 0x69c944u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c948u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c960u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fe3ea4(c);
}
void f_69c96c(Cpu *restrict c) {
    FN_ENTER(0x69c96cu);
L_69c96c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a111cu;
    { uint32_t ea = 0x69c980u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c980u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c998(Cpu *restrict c) {
    FN_ENTER(0x69c998u);
L_69c998:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a10f8u;
    { uint32_t ea = 0x69c9a8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69c9acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69c9c4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fe4184(c);
}
void f_69c9d0(Cpu *restrict c) {
    FN_ENTER(0x69c9d0u);
L_69c9d0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a10bcu;
    { uint32_t ea = 0x69c9e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69c9e4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69c9fc(Cpu *restrict c) {
    FN_ENTER(0x69c9fcu);
L_69c9fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1098u;
    { uint32_t ea = 0x69ca0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ca10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69ca28u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fe43e4(c);
}
void f_69ca34(Cpu *restrict c) {
    FN_ENTER(0x69ca34u);
L_69ca34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a105cu;
    { uint32_t ea = 0x69ca48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ca48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ca60(Cpu *restrict c) {
    FN_ENTER(0x69ca60u);
L_69ca60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a1038u;
    { uint32_t ea = 0x69ca70u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ca74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ca8cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_ff11b4(c);
}
void f_69ca98(Cpu *restrict c) {
    FN_ENTER(0x69ca98u);
L_69ca98:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0ffcu;
    { uint32_t ea = 0x69caacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69caacu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cac4(Cpu *restrict c) {
    FN_ENTER(0x69cac4u);
L_69cac4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0fd8u;
    { uint32_t ea = 0x69cad4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cad8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69caf0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_ff1720(c);
}
void f_69cafc(Cpu *restrict c) {
    FN_ENTER(0x69cafcu);
L_69cafc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0f9cu;
    { uint32_t ea = 0x69cb10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cb10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cb28(Cpu *restrict c) {
    FN_ENTER(0x69cb28u);
L_69cb28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0f78u;
    { uint32_t ea = 0x69cb38u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cb3cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69cb54u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_ff18d4(c);
}
void f_69cb60(Cpu *restrict c) {
    FN_ENTER(0x69cb60u);
L_69cb60:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0f3cu;
    { uint32_t ea = 0x69cb74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cb74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cb8c(Cpu *restrict c) {
    FN_ENTER(0x69cb8cu);
L_69cb8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0f18u;
    { uint32_t ea = 0x69cb9cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cba0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69cbb8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_ff1ba0(c);
}
void f_69cbc4(Cpu *restrict c) {
    FN_ENTER(0x69cbc4u);
L_69cbc4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0edcu;
    { uint32_t ea = 0x69cbd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cbd8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cbf0(Cpu *restrict c) {
    FN_ENTER(0x69cbf0u);
L_69cbf0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0eb8u;
    { uint32_t ea = 0x69cc00u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cc04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69cc1cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_100072c(c);
}
void f_69cc28(Cpu *restrict c) {
    FN_ENTER(0x69cc28u);
L_69cc28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0e7cu;
    { uint32_t ea = 0x69cc3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cc3cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cc54(Cpu *restrict c) {
    FN_ENTER(0x69cc54u);
L_69cc54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0e58u;
    { uint32_t ea = 0x69cc64u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cc68u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69cc80u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1000ccc(c);
}
void f_69cc8c(Cpu *restrict c) {
    FN_ENTER(0x69cc8cu);
L_69cc8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0e1cu;
    { uint32_t ea = 0x69cca0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cca0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ccb8(Cpu *restrict c) {
    FN_ENTER(0x69ccb8u);
L_69ccb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0df8u;
    { uint32_t ea = 0x69ccc8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ccccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69cce4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1000f58(c);
}
void f_69ccf0(Cpu *restrict c) {
    FN_ENTER(0x69ccf0u);
L_69ccf0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0dbcu;
    { uint32_t ea = 0x69cd04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cd04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cd1c(Cpu *restrict c) {
    FN_ENTER(0x69cd1cu);
L_69cd1c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0d98u;
    { uint32_t ea = 0x69cd2cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cd30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1640u;
    c->pc = c->r[4]; c->r[14] = 0x69cd48u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1001170(c);
}
void f_69cd54(Cpu *restrict c) {
    FN_ENTER(0x69cd54u);
L_69cd54:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0d5cu;
    { uint32_t ea = 0x69cd68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cd68u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cd80(Cpu *restrict c) {
    FN_ENTER(0x69cd80u);
L_69cd80:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0d38u;
    { uint32_t ea = 0x69cd90u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cd94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x69cdacu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1001624(c);
}
void f_69cdb8(Cpu *restrict c) {
    FN_ENTER(0x69cdb8u);
L_69cdb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0cfcu;
    { uint32_t ea = 0x69cdccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cdccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cde4(Cpu *restrict c) {
    FN_ENTER(0x69cde4u);
L_69cde4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0cd8u;
    { uint32_t ea = 0x69cdf4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cdf8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69ce10u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1001b0c(c);
}
void f_69ce1c(Cpu *restrict c) {
    FN_ENTER(0x69ce1cu);
L_69ce1c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0c9cu;
    { uint32_t ea = 0x69ce30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ce30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ce48(Cpu *restrict c) {
    FN_ENTER(0x69ce48u);
L_69ce48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0c78u;
    { uint32_t ea = 0x69ce58u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ce5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ce74u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1012038(c);
}
void f_69ce80(Cpu *restrict c) {
    FN_ENTER(0x69ce80u);
L_69ce80:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0c3cu;
    { uint32_t ea = 0x69ce94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ce94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ceac(Cpu *restrict c) {
    FN_ENTER(0x69ceacu);
L_69ceac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0c18u;
    { uint32_t ea = 0x69cebcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cec0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ced8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1012434(c);
}
void f_69cee4(Cpu *restrict c) {
    FN_ENTER(0x69cee4u);
L_69cee4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0bdcu;
    { uint32_t ea = 0x69cef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cef8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cf10(Cpu *restrict c) {
    FN_ENTER(0x69cf10u);
L_69cf10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0bb8u;
    { uint32_t ea = 0x69cf20u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cf24u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69cf3cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1012668(c);
}
void f_69cf48(Cpu *restrict c) {
    FN_ENTER(0x69cf48u);
L_69cf48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0b7cu;
    { uint32_t ea = 0x69cf5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cf5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cf74(Cpu *restrict c) {
    FN_ENTER(0x69cf74u);
L_69cf74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0b58u;
    { uint32_t ea = 0x69cf84u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cf88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1610u;
    c->pc = c->r[4]; c->r[14] = 0x69cfa0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1012b00(c);
}
void f_69cfac(Cpu *restrict c) {
    FN_ENTER(0x69cfacu);
L_69cfac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0b1cu;
    { uint32_t ea = 0x69cfc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69cfc0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69cfd8(Cpu *restrict c) {
    FN_ENTER(0x69cfd8u);
L_69cfd8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a0af8u;
    { uint32_t ea = 0x69cfe8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69cfecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d004u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_101ddf4(c);
}
void f_69d010(Cpu *restrict c) {
    FN_ENTER(0x69d010u);
L_69d010:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0abcu;
    { uint32_t ea = 0x69d024u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d024u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d03c(Cpu *restrict c) {
    FN_ENTER(0x69d03cu);
L_69d03c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x13a0a98u;
    { uint32_t ea = 0x69d04cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d050u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[4]; c->r[14] = 0x69d068u; rt_dispatch(c);
    c->r[2] = 0x139fcbcu;
    c->r[1] = 0x19du;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[12]); }
    c->r[1] = 0x139c1f4u;
    { uint32_t ea = 0x69d08cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x69d090u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0x139baacu;
    { uint32_t ea = 0x69d0a0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[1]); }
    c->r[1] = 0x13a09f4u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[12]); }
    { uint32_t ea = 0x69d0f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3eu; ST16(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_69d114(Cpu *restrict c) {
    FN_ENTER(0x69d114u);
L_69d114:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a09b8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x69d12cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x69d130u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d150(Cpu *restrict c) {
    FN_ENTER(0x69d150u);
L_69d150:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a098cu;
    { uint32_t ea = 0x69d160u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d164u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x69d17cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_101e0dc(c);
}
void f_69d188(Cpu *restrict c) {
    FN_ENTER(0x69d188u);
L_69d188:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0950u;
    { uint32_t ea = 0x69d19cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d19cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d1b4(Cpu *restrict c) {
    FN_ENTER(0x69d1b4u);
L_69d1b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a092cu;
    { uint32_t ea = 0x69d1c4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d1c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1630u;
    c->pc = c->r[4]; c->r[14] = 0x69d1e0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_101e448(c);
}
void f_69d1ec(Cpu *restrict c) {
    FN_ENTER(0x69d1ecu);
L_69d1ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a08f0u;
    { uint32_t ea = 0x69d200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d200u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d218(Cpu *restrict c) {
    FN_ENTER(0x69d218u);
L_69d218:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a08ccu;
    { uint32_t ea = 0x69d228u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d22cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1640u;
    c->pc = c->r[4]; c->r[14] = 0x69d244u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_101e744(c);
}
void f_69d250(Cpu *restrict c) {
    FN_ENTER(0x69d250u);
L_69d250:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0890u;
    { uint32_t ea = 0x69d264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d264u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d27c(Cpu *restrict c) {
    FN_ENTER(0x69d27cu);
L_69d27c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a086cu;
    { uint32_t ea = 0x69d28cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d290u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x18u;
    c->pc = c->r[4]; c->r[14] = 0x69d2a8u; rt_dispatch(c);
    c->r[1] = 0x19du;
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[2]); }
    c->r[2] = 0x13a0828u;
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[1]); }
    { uint32_t ea = 0x69d2d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69d2e8(Cpu *restrict c) {
    FN_ENTER(0x69d2e8u);
L_69d2e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13a07f8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x69d300u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x69d304u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d324(Cpu *restrict c) {
    FN_ENTER(0x69d324u);
L_69d324:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a07ccu;
    { uint32_t ea = 0x69d334u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d338u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69d350u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_103853c(c);
}
void f_69d35c(Cpu *restrict c) {
    FN_ENTER(0x69d35cu);
L_69d35c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0790u;
    { uint32_t ea = 0x69d370u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d370u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d388(Cpu *restrict c) {
    FN_ENTER(0x69d388u);
L_69d388:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a076cu;
    { uint32_t ea = 0x69d398u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d39cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d3b4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1038bf0(c);
}
void f_69d3c0(Cpu *restrict c) {
    FN_ENTER(0x69d3c0u);
L_69d3c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0730u;
    { uint32_t ea = 0x69d3d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d3d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d3ec(Cpu *restrict c) {
    FN_ENTER(0x69d3ecu);
L_69d3ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a070cu;
    { uint32_t ea = 0x69d3fcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d400u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d418u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1041658(c);
}
void f_69d424(Cpu *restrict c) {
    FN_ENTER(0x69d424u);
L_69d424:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a06d0u;
    { uint32_t ea = 0x69d438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d438u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d450(Cpu *restrict c) {
    FN_ENTER(0x69d450u);
L_69d450:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a06acu;
    { uint32_t ea = 0x69d460u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d464u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69d47cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1041894(c);
}
void f_69d488(Cpu *restrict c) {
    FN_ENTER(0x69d488u);
L_69d488:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0670u;
    { uint32_t ea = 0x69d49cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d49cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d4b4(Cpu *restrict c) {
    FN_ENTER(0x69d4b4u);
L_69d4b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a064cu;
    { uint32_t ea = 0x69d4c4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d4c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d4e0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f99e0c(c);
}
void f_69d4ec(Cpu *restrict c) {
    FN_ENTER(0x69d4ecu);
L_69d4ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0610u;
    { uint32_t ea = 0x69d500u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d500u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d518(Cpu *restrict c) {
    FN_ENTER(0x69d518u);
L_69d518:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a05ecu;
    { uint32_t ea = 0x69d528u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d52cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d544u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f9a21c(c);
}
void f_69d550(Cpu *restrict c) {
    FN_ENTER(0x69d550u);
L_69d550:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a05b0u;
    { uint32_t ea = 0x69d564u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d564u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d57c(Cpu *restrict c) {
    FN_ENTER(0x69d57cu);
L_69d57c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a058cu;
    { uint32_t ea = 0x69d58cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d590u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69d5a8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_f9a3f4(c);
}
void f_69d5b4(Cpu *restrict c) {
    FN_ENTER(0x69d5b4u);
L_69d5b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0550u;
    { uint32_t ea = 0x69d5c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d5c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d5e0(Cpu *restrict c) {
    FN_ENTER(0x69d5e0u);
L_69d5e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a052cu;
    { uint32_t ea = 0x69d5f0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d5f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d60cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1048fbc(c);
}
void f_69d618(Cpu *restrict c) {
    FN_ENTER(0x69d618u);
L_69d618:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a04f0u;
    { uint32_t ea = 0x69d62cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d62cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d644(Cpu *restrict c) {
    FN_ENTER(0x69d644u);
L_69d644:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a04ccu;
    { uint32_t ea = 0x69d654u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d658u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d670u; rt_dispatch(c);
    c->r[14] = 0x69d674u; f_5faf64(c);
    c->r[1] = 0x13a04a4u;
    { uint32_t ea = 0x69d680u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69d690(Cpu *restrict c) {
    FN_ENTER(0x69d690u);
L_69d690:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a047cu;
    { uint32_t ea = 0x69d6a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d6a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d6bc(Cpu *restrict c) {
    FN_ENTER(0x69d6bcu);
L_69d6bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a045cu;
    { uint32_t ea = 0x69d6ccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d6d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69d6e8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_105c18c(c);
}
void f_69d6f4(Cpu *restrict c) {
    FN_ENTER(0x69d6f4u);
L_69d6f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0420u;
    { uint32_t ea = 0x69d708u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d708u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d720(Cpu *restrict c) {
    FN_ENTER(0x69d720u);
L_69d720:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a03fcu;
    { uint32_t ea = 0x69d730u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d734u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d74cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_105c93c(c);
}
void f_69d758(Cpu *restrict c) {
    FN_ENTER(0x69d758u);
L_69d758:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a03c0u;
    { uint32_t ea = 0x69d76cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d76cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d784(Cpu *restrict c) {
    FN_ENTER(0x69d784u);
L_69d784:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a039cu;
    { uint32_t ea = 0x69d794u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d798u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x69d7b0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_105cb64(c);
}
void f_69d7bc(Cpu *restrict c) {
    FN_ENTER(0x69d7bcu);
L_69d7bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0360u;
    { uint32_t ea = 0x69d7d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d7d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d7e8(Cpu *restrict c) {
    FN_ENTER(0x69d7e8u);
L_69d7e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a033cu;
    { uint32_t ea = 0x69d7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d7fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1630u;
    c->pc = c->r[4]; c->r[14] = 0x69d814u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_105cf28(c);
}
void f_69d820(Cpu *restrict c) {
    FN_ENTER(0x69d820u);
L_69d820:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0300u;
    { uint32_t ea = 0x69d834u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d834u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d84c(Cpu *restrict c) {
    FN_ENTER(0x69d84cu);
L_69d84c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a02dcu;
    { uint32_t ea = 0x69d85cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d860u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69d878u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1066388(c);
}
void f_69d884(Cpu *restrict c) {
    FN_ENTER(0x69d884u);
L_69d884:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a02a0u;
    { uint32_t ea = 0x69d898u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d898u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d8b0(Cpu *restrict c) {
    FN_ENTER(0x69d8b0u);
L_69d8b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a027cu;
    { uint32_t ea = 0x69d8c0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d8c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d8dcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1066a80(c);
}
void f_69d8e8(Cpu *restrict c) {
    FN_ENTER(0x69d8e8u);
L_69d8e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0240u;
    { uint32_t ea = 0x69d8fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d8fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d914(Cpu *restrict c) {
    FN_ENTER(0x69d914u);
L_69d914:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a021cu;
    { uint32_t ea = 0x69d924u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d928u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16b0u;
    c->pc = c->r[4]; c->r[14] = 0x69d940u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1066c7c(c);
}
void f_69d94c(Cpu *restrict c) {
    FN_ENTER(0x69d94cu);
L_69d94c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a01e0u;
    { uint32_t ea = 0x69d960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d960u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d978(Cpu *restrict c) {
    FN_ENTER(0x69d978u);
L_69d978:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a01bcu;
    { uint32_t ea = 0x69d988u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d98cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69d9a4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10752e8(c);
}
void f_69d9b0(Cpu *restrict c) {
    FN_ENTER(0x69d9b0u);
L_69d9b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0180u;
    { uint32_t ea = 0x69d9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69d9c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69d9dc(Cpu *restrict c) {
    FN_ENTER(0x69d9dcu);
L_69d9dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a015cu;
    { uint32_t ea = 0x69d9ecu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69d9f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69da08u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10756f0(c);
}
void f_69da14(Cpu *restrict c) {
    FN_ENTER(0x69da14u);
L_69da14:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0120u;
    { uint32_t ea = 0x69da28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69da28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69da40(Cpu *restrict c) {
    FN_ENTER(0x69da40u);
L_69da40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a00fcu;
    { uint32_t ea = 0x69da50u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69da54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69da6cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_108516c(c);
}
void f_69da78(Cpu *restrict c) {
    FN_ENTER(0x69da78u);
L_69da78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a00c0u;
    { uint32_t ea = 0x69da8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69da8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69daa4(Cpu *restrict c) {
    FN_ENTER(0x69daa4u);
L_69daa4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a009cu;
    { uint32_t ea = 0x69dab4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69dab8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69dad0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_108584c(c);
}
void f_69dadc(Cpu *restrict c) {
    FN_ENTER(0x69dadcu);
L_69dadc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0060u;
    { uint32_t ea = 0x69daf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69daf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69db08(Cpu *restrict c) {
    FN_ENTER(0x69db08u);
L_69db08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x13a003cu;
    { uint32_t ea = 0x69db18u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69db1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x69db34u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1085a9c(c);
}
void f_69db40(Cpu *restrict c) {
    FN_ENTER(0x69db40u);
L_69db40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13a0000u;
    { uint32_t ea = 0x69db54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69db54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69db6c(Cpu *restrict c) {
    FN_ENTER(0x69db6cu);
L_69db6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ffdcu;
    { uint32_t ea = 0x69db7cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69db80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69db98u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1085da8(c);
}
void f_69dba4(Cpu *restrict c) {
    FN_ENTER(0x69dba4u);
L_69dba4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ffa0u;
    { uint32_t ea = 0x69dbb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69dbb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69dbd0(Cpu *restrict c) {
    FN_ENTER(0x69dbd0u);
L_69dbd0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ff7cu;
    { uint32_t ea = 0x69dbe0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69dbe4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69dbfcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1086300(c);
}
void f_69dc08(Cpu *restrict c) {
    FN_ENTER(0x69dc08u);
L_69dc08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ff40u;
    { uint32_t ea = 0x69dc1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69dc1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69dc34(Cpu *restrict c) {
    FN_ENTER(0x69dc34u);
L_69dc34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ff1cu;
    { uint32_t ea = 0x69dc44u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69dc48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69dc60u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_109176c(c);
}
void f_69dc6c(Cpu *restrict c) {
    FN_ENTER(0x69dc6cu);
L_69dc6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fee0u;
    { uint32_t ea = 0x69dc80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69dc80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69dc98(Cpu *restrict c) {
    FN_ENTER(0x69dc98u);
L_69dc98:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139febcu;
    { uint32_t ea = 0x69dca8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69dcacu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[4]; c->r[14] = 0x69dcc4u; rt_dispatch(c);
    c->r[2] = 0x139f044u;
    c->r[1] = 0x19du;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x69dce4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[2]); }
    c->r[2] = 0x139ae50u;
    { uint32_t ea = 0x69dcfcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x139b564u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x69dd20u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x139fe28u;
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); }
    { uint32_t ea = 0x69dd40u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x32u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69dd64(Cpu *restrict c) {
    FN_ENTER(0x69dd64u);
L_69dd64:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x139fde8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x69dd7cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x69dd80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69dda0(Cpu *restrict c) {
    FN_ENTER(0x69dda0u);
L_69dda0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fdb0u;
    { uint32_t ea = 0x69ddb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ddb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ddcc(Cpu *restrict c) {
    FN_ENTER(0x69ddccu);
L_69ddcc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fd90u;
    { uint32_t ea = 0x69dddcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69dde0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ddf8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1092008(c);
}
void f_69de04(Cpu *restrict c) {
    FN_ENTER(0x69de04u);
L_69de04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fd54u;
    { uint32_t ea = 0x69de18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69de18u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69de30(Cpu *restrict c) {
    FN_ENTER(0x69de30u);
L_69de30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fd30u;
    { uint32_t ea = 0x69de40u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69de44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69de5cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10a0cf8(c);
}
void f_69de68(Cpu *restrict c) {
    FN_ENTER(0x69de68u);
L_69de68:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fcf4u;
    { uint32_t ea = 0x69de7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69de7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69de94(Cpu *restrict c) {
    FN_ENTER(0x69de94u);
L_69de94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fcd0u;
    { uint32_t ea = 0x69dea4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69dea8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69dec0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10a1020(c);
}
void f_69decc(Cpu *restrict c) {
    FN_ENTER(0x69deccu);
L_69decc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fc94u;
    { uint32_t ea = 0x69dee0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69dee0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69def8(Cpu *restrict c) {
    FN_ENTER(0x69def8u);
L_69def8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fc70u;
    { uint32_t ea = 0x69df08u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69df0cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69df24u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10a1350(c);
}
void f_69df30(Cpu *restrict c) {
    FN_ENTER(0x69df30u);
L_69df30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fc34u;
    { uint32_t ea = 0x69df44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69df44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69df5c(Cpu *restrict c) {
    FN_ENTER(0x69df5cu);
L_69df5c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fc10u;
    { uint32_t ea = 0x69df6cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69df70u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69df88u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10a1824(c);
}
void f_69df94(Cpu *restrict c) {
    FN_ENTER(0x69df94u);
L_69df94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fbd4u;
    { uint32_t ea = 0x69dfa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69dfa8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69dfc0(Cpu *restrict c) {
    FN_ENTER(0x69dfc0u);
L_69dfc0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fbb0u;
    { uint32_t ea = 0x69dfd0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69dfd4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69dfecu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10ad6d8(c);
}
void f_69dff8(Cpu *restrict c) {
    FN_ENTER(0x69dff8u);
L_69dff8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fb74u;
    { uint32_t ea = 0x69e00cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e00cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e024(Cpu *restrict c) {
    FN_ENTER(0x69e024u);
L_69e024:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fb50u;
    { uint32_t ea = 0x69e034u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e038u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e050u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10adca0(c);
}
void f_69e05c(Cpu *restrict c) {
    FN_ENTER(0x69e05cu);
L_69e05c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fb14u;
    { uint32_t ea = 0x69e070u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e070u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e088(Cpu *restrict c) {
    FN_ENTER(0x69e088u);
L_69e088:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139faf0u;
    { uint32_t ea = 0x69e098u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e09cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69e0b4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10ae090(c);
}
void f_69e0c0(Cpu *restrict c) {
    FN_ENTER(0x69e0c0u);
L_69e0c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fab4u;
    { uint32_t ea = 0x69e0d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e0d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e0ec(Cpu *restrict c) {
    FN_ENTER(0x69e0ecu);
L_69e0ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fa90u;
    { uint32_t ea = 0x69e0fcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e100u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1600u;
    c->pc = c->r[4]; c->r[14] = 0x69e118u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10ae584(c);
}
void f_69e124(Cpu *restrict c) {
    FN_ENTER(0x69e124u);
L_69e124:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139fa54u;
    { uint32_t ea = 0x69e138u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e138u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e150(Cpu *restrict c) {
    FN_ENTER(0x69e150u);
L_69e150:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139fa30u;
    { uint32_t ea = 0x69e160u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e164u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x69e17cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10ae808(c);
}
void f_69e188(Cpu *restrict c) {
    FN_ENTER(0x69e188u);
L_69e188:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f9f4u;
    { uint32_t ea = 0x69e19cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e19cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e1b4(Cpu *restrict c) {
    FN_ENTER(0x69e1b4u);
L_69e1b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f9d0u;
    { uint32_t ea = 0x69e1c4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e1c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e1e0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10b74dc(c);
}
void f_69e1ec(Cpu *restrict c) {
    FN_ENTER(0x69e1ecu);
L_69e1ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f994u;
    { uint32_t ea = 0x69e200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e200u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e218(Cpu *restrict c) {
    FN_ENTER(0x69e218u);
L_69e218:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f970u;
    { uint32_t ea = 0x69e228u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e22cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e244u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10b794c(c);
}
void f_69e250(Cpu *restrict c) {
    FN_ENTER(0x69e250u);
L_69e250:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f934u;
    { uint32_t ea = 0x69e264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e264u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e27c(Cpu *restrict c) {
    FN_ENTER(0x69e27cu);
L_69e27c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f910u;
    { uint32_t ea = 0x69e28cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e290u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e2a8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10c754c(c);
}
void f_69e2b4(Cpu *restrict c) {
    FN_ENTER(0x69e2b4u);
L_69e2b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f8d4u;
    { uint32_t ea = 0x69e2c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e2c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e2e0(Cpu *restrict c) {
    FN_ENTER(0x69e2e0u);
L_69e2e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f8b0u;
    { uint32_t ea = 0x69e2f0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e2f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69e30cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10c7798(c);
}
void f_69e318(Cpu *restrict c) {
    FN_ENTER(0x69e318u);
L_69e318:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f874u;
    { uint32_t ea = 0x69e32cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e32cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e344(Cpu *restrict c) {
    FN_ENTER(0x69e344u);
L_69e344:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f850u;
    { uint32_t ea = 0x69e354u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e358u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e370u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10d26c4(c);
}
void f_69e37c(Cpu *restrict c) {
    FN_ENTER(0x69e37cu);
L_69e37c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f814u;
    { uint32_t ea = 0x69e390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e390u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e3a8(Cpu *restrict c) {
    FN_ENTER(0x69e3a8u);
L_69e3a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f7f0u;
    { uint32_t ea = 0x69e3b8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e3bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e3d4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10d2ae8(c);
}
void f_69e3e0(Cpu *restrict c) {
    FN_ENTER(0x69e3e0u);
L_69e3e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f7b4u;
    { uint32_t ea = 0x69e3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e3f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e40c(Cpu *restrict c) {
    FN_ENTER(0x69e40cu);
L_69e40c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f790u;
    { uint32_t ea = 0x69e41cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e420u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69e438u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10d2d4c(c);
}
void f_69e444(Cpu *restrict c) {
    FN_ENTER(0x69e444u);
L_69e444:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f754u;
    { uint32_t ea = 0x69e458u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e458u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e470(Cpu *restrict c) {
    FN_ENTER(0x69e470u);
L_69e470:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f730u;
    { uint32_t ea = 0x69e480u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e484u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69e49cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10d3078(c);
}
void f_69e4a8(Cpu *restrict c) {
    FN_ENTER(0x69e4a8u);
L_69e4a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f6f4u;
    { uint32_t ea = 0x69e4bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e4bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e4d4(Cpu *restrict c) {
    FN_ENTER(0x69e4d4u);
L_69e4d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f6d0u;
    { uint32_t ea = 0x69e4e4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e4e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69e500u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10d35bc(c);
}
void f_69e50c(Cpu *restrict c) {
    FN_ENTER(0x69e50cu);
L_69e50c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f694u;
    { uint32_t ea = 0x69e520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e520u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e538(Cpu *restrict c) {
    FN_ENTER(0x69e538u);
L_69e538:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f670u;
    { uint32_t ea = 0x69e548u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e54cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e564u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10e26a4(c);
}
void f_69e570(Cpu *restrict c) {
    FN_ENTER(0x69e570u);
L_69e570:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f634u;
    { uint32_t ea = 0x69e584u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e584u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e59c(Cpu *restrict c) {
    FN_ENTER(0x69e59cu);
L_69e59c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f610u;
    { uint32_t ea = 0x69e5acu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e5b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69e5c8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10ee46c(c);
}
void f_69e5d4(Cpu *restrict c) {
    FN_ENTER(0x69e5d4u);
L_69e5d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f5d4u;
    { uint32_t ea = 0x69e5e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e5e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e600(Cpu *restrict c) {
    FN_ENTER(0x69e600u);
L_69e600:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f5b0u;
    { uint32_t ea = 0x69e610u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e614u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15f0u;
    c->pc = c->r[4]; c->r[14] = 0x69e62cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_10ee6c0(c);
}
void f_69e638(Cpu *restrict c) {
    FN_ENTER(0x69e638u);
L_69e638:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f574u;
    { uint32_t ea = 0x69e64cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e64cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e664(Cpu *restrict c) {
    FN_ENTER(0x69e664u);
L_69e664:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f550u;
    { uint32_t ea = 0x69e674u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e678u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e690u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_110848c(c);
}
void f_69e69c(Cpu *restrict c) {
    FN_ENTER(0x69e69cu);
L_69e69c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f514u;
    { uint32_t ea = 0x69e6b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e6b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e6c8(Cpu *restrict c) {
    FN_ENTER(0x69e6c8u);
L_69e6c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f4f0u;
    { uint32_t ea = 0x69e6d8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e6dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69e6f4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1108b38(c);
}
void f_69e700(Cpu *restrict c) {
    FN_ENTER(0x69e700u);
L_69e700:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f4b4u;
    { uint32_t ea = 0x69e714u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e714u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e72c(Cpu *restrict c) {
    FN_ENTER(0x69e72cu);
L_69e72c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f490u;
    { uint32_t ea = 0x69e73cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e740u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69e758u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1109034(c);
}
void f_69e764(Cpu *restrict c) {
    FN_ENTER(0x69e764u);
L_69e764:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f454u;
    { uint32_t ea = 0x69e778u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e778u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e790(Cpu *restrict c) {
    FN_ENTER(0x69e790u);
L_69e790:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f430u;
    { uint32_t ea = 0x69e7a0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e7a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69e7bcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11124f8(c);
}
void f_69e7c8(Cpu *restrict c) {
    FN_ENTER(0x69e7c8u);
L_69e7c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f3f4u;
    { uint32_t ea = 0x69e7dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e7dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e7f4(Cpu *restrict c) {
    FN_ENTER(0x69e7f4u);
L_69e7f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f3d0u;
    { uint32_t ea = 0x69e804u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e808u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69e820u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11128a4(c);
}
void f_69e82c(Cpu *restrict c) {
    FN_ENTER(0x69e82cu);
L_69e82c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f394u;
    { uint32_t ea = 0x69e840u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e840u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e858(Cpu *restrict c) {
    FN_ENTER(0x69e858u);
L_69e858:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f370u;
    { uint32_t ea = 0x69e868u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e86cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69e884u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1112e60(c);
}
void f_69e890(Cpu *restrict c) {
    FN_ENTER(0x69e890u);
L_69e890:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f334u;
    { uint32_t ea = 0x69e8a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e8a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e8bc(Cpu *restrict c) {
    FN_ENTER(0x69e8bcu);
L_69e8bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f310u;
    { uint32_t ea = 0x69e8ccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e8d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1620u;
    c->pc = c->r[4]; c->r[14] = 0x69e8e8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1113078(c);
}
void f_69e8f4(Cpu *restrict c) {
    FN_ENTER(0x69e8f4u);
L_69e8f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f2d4u;
    { uint32_t ea = 0x69e908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e908u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e920(Cpu *restrict c) {
    FN_ENTER(0x69e920u);
L_69e920:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f2b0u;
    { uint32_t ea = 0x69e930u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e934u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69e94cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1113298(c);
}
void f_69e958(Cpu *restrict c) {
    FN_ENTER(0x69e958u);
L_69e958:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f274u;
    { uint32_t ea = 0x69e96cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e96cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e984(Cpu *restrict c) {
    FN_ENTER(0x69e984u);
L_69e984:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f250u;
    { uint32_t ea = 0x69e994u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e998u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15f0u;
    c->pc = c->r[4]; c->r[14] = 0x69e9b0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1113508(c);
}
void f_69e9bc(Cpu *restrict c) {
    FN_ENTER(0x69e9bcu);
L_69e9bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f214u;
    { uint32_t ea = 0x69e9d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69e9d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69e9e8(Cpu *restrict c) {
    FN_ENTER(0x69e9e8u);
L_69e9e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f1f0u;
    { uint32_t ea = 0x69e9f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69e9fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69ea14u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11136f0(c);
}
void f_69ea20(Cpu *restrict c) {
    FN_ENTER(0x69ea20u);
L_69ea20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f1b4u;
    { uint32_t ea = 0x69ea34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ea34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ea4c(Cpu *restrict c) {
    FN_ENTER(0x69ea4cu);
L_69ea4c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f190u;
    { uint32_t ea = 0x69ea5cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ea60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ea78u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_112624c(c);
}
void f_69ea84(Cpu *restrict c) {
    FN_ENTER(0x69ea84u);
L_69ea84:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f154u;
    { uint32_t ea = 0x69ea98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ea98u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69eab0(Cpu *restrict c) {
    FN_ENTER(0x69eab0u);
L_69eab0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f130u;
    { uint32_t ea = 0x69eac0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69eac4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69eadcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1126560(c);
}
void f_69eae8(Cpu *restrict c) {
    FN_ENTER(0x69eae8u);
L_69eae8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f0f4u;
    { uint32_t ea = 0x69eafcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69eafcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69eb14(Cpu *restrict c) {
    FN_ENTER(0x69eb14u);
L_69eb14:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f0d0u;
    { uint32_t ea = 0x69eb24u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69eb28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69eb40u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1135fdc(c);
}
void f_69eb4c(Cpu *restrict c) {
    FN_ENTER(0x69eb4cu);
L_69eb4c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f094u;
    { uint32_t ea = 0x69eb60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69eb60u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69eb78(Cpu *restrict c) {
    FN_ENTER(0x69eb78u);
L_69eb78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f070u;
    { uint32_t ea = 0x69eb88u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69eb8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69eba4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1136648(c);
}
void f_69ebb0(Cpu *restrict c) {
    FN_ENTER(0x69ebb0u);
L_69ebb0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139f034u;
    { uint32_t ea = 0x69ebc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ebc4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ebdc(Cpu *restrict c) {
    FN_ENTER(0x69ebdcu);
L_69ebdc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139f010u;
    { uint32_t ea = 0x69ebecu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ebf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69ec08u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1136888(c);
}
void f_69ec14(Cpu *restrict c) {
    FN_ENTER(0x69ec14u);
L_69ec14:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139efd4u;
    { uint32_t ea = 0x69ec28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ec28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ec40(Cpu *restrict c) {
    FN_ENTER(0x69ec40u);
L_69ec40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139efb0u;
    { uint32_t ea = 0x69ec50u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ec54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1740u;
    c->pc = c->r[4]; c->r[14] = 0x69ec6cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_113758c(c);
}
void f_69ec78(Cpu *restrict c) {
    FN_ENTER(0x69ec78u);
L_69ec78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ef74u;
    { uint32_t ea = 0x69ec8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ec8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69eca4(Cpu *restrict c) {
    FN_ENTER(0x69eca4u);
L_69eca4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ef50u;
    { uint32_t ea = 0x69ecb4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ecb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1640u;
    c->pc = c->r[4]; c->r[14] = 0x69ecd0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1137dcc(c);
}
void f_69ecdc(Cpu *restrict c) {
    FN_ENTER(0x69ecdcu);
L_69ecdc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ef14u;
    { uint32_t ea = 0x69ecf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ecf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ed08(Cpu *restrict c) {
    FN_ENTER(0x69ed08u);
L_69ed08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139eef0u;
    { uint32_t ea = 0x69ed18u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ed1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ed34u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_112683c(c);
}
void f_69ed40(Cpu *restrict c) {
    FN_ENTER(0x69ed40u);
L_69ed40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139eeb4u;
    { uint32_t ea = 0x69ed54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ed54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ed6c(Cpu *restrict c) {
    FN_ENTER(0x69ed6cu);
L_69ed6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ee90u;
    { uint32_t ea = 0x69ed7cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ed80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ed98u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1126bf4(c);
}
void f_69eda4(Cpu *restrict c) {
    FN_ENTER(0x69eda4u);
L_69eda4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ee54u;
    { uint32_t ea = 0x69edb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69edb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69edd0(Cpu *restrict c) {
    FN_ENTER(0x69edd0u);
L_69edd0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ee30u;
    { uint32_t ea = 0x69ede0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ede4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15f0u;
    c->pc = c->r[4]; c->r[14] = 0x69edfcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1126d80(c);
}
void f_69ee08(Cpu *restrict c) {
    FN_ENTER(0x69ee08u);
L_69ee08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139edf4u;
    { uint32_t ea = 0x69ee1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ee1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ee34(Cpu *restrict c) {
    FN_ENTER(0x69ee34u);
L_69ee34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139edd0u;
    { uint32_t ea = 0x69ee44u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ee48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69ee60u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_114b2b4(c);
}
void f_69ee6c(Cpu *restrict c) {
    FN_ENTER(0x69ee6cu);
L_69ee6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ed94u;
    { uint32_t ea = 0x69ee80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ee80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ee98(Cpu *restrict c) {
    FN_ENTER(0x69ee98u);
L_69ee98:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ed70u;
    { uint32_t ea = 0x69eea8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69eeacu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69eec4u; rt_dispatch(c);
    c->r[14] = 0x69eec8u; f_603bec(c);
    c->r[1] = 0x139ed3cu;
    c->r[2] = 0x166cu;
    c->r[3] = c->r[0];
    c->r[4] = ~0x0u;
    { uint32_t ea = 0x69eee0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x1664u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1668u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69ef08(Cpu *restrict c) {
    FN_ENTER(0x69ef08u);
L_69ef08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ecfcu;
    { uint32_t ea = 0x69ef1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ef1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ef34(Cpu *restrict c) {
    FN_ENTER(0x69ef34u);
L_69ef34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ecdcu;
    { uint32_t ea = 0x69ef44u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ef48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1600u;
    c->pc = c->r[4]; c->r[14] = 0x69ef60u; rt_dispatch(c);
    c->r[14] = 0x69ef64u; f_619414(c);
    c->r[1] = 0x139ecacu;
    c->r[2] = 0x15fcu;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x69ef78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69ef90(Cpu *restrict c) {
    FN_ENTER(0x69ef90u);
L_69ef90:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ec7cu;
    { uint32_t ea = 0x69efa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69efa4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69efbc(Cpu *restrict c) {
    FN_ENTER(0x69efbcu);
L_69efbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ec5cu;
    { uint32_t ea = 0x69efccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69efd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69efe8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1159b40(c);
}
void f_69eff4(Cpu *restrict c) {
    FN_ENTER(0x69eff4u);
L_69eff4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ec20u;
    { uint32_t ea = 0x69f008u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f008u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f020(Cpu *restrict c) {
    FN_ENTER(0x69f020u);
L_69f020:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ebfcu;
    { uint32_t ea = 0x69f030u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f034u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f04cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_115a018(c);
}
void f_69f058(Cpu *restrict c) {
    FN_ENTER(0x69f058u);
L_69f058:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ebc0u;
    { uint32_t ea = 0x69f06cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f06cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f084(Cpu *restrict c) {
    FN_ENTER(0x69f084u);
L_69f084:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139eb9cu;
    { uint32_t ea = 0x69f094u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f098u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69f0b0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_115a294(c);
}
void f_69f0bc(Cpu *restrict c) {
    FN_ENTER(0x69f0bcu);
L_69f0bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139eb60u;
    { uint32_t ea = 0x69f0d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f0d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f0e8(Cpu *restrict c) {
    FN_ENTER(0x69f0e8u);
L_69f0e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139eb3cu;
    { uint32_t ea = 0x69f0f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f0fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1620u;
    c->pc = c->r[4]; c->r[14] = 0x69f114u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_115a854(c);
}
void f_69f120(Cpu *restrict c) {
    FN_ENTER(0x69f120u);
L_69f120:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139eb00u;
    { uint32_t ea = 0x69f134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f134u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f14c(Cpu *restrict c) {
    FN_ENTER(0x69f14cu);
L_69f14c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139eadcu;
    { uint32_t ea = 0x69f15cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f160u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69f178u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1168080(c);
}
void f_69f184(Cpu *restrict c) {
    FN_ENTER(0x69f184u);
L_69f184:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139eaa0u;
    { uint32_t ea = 0x69f198u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f198u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f1b0(Cpu *restrict c) {
    FN_ENTER(0x69f1b0u);
L_69f1b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ea7cu;
    { uint32_t ea = 0x69f1c0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f1c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f1dcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11683a8(c);
}
void f_69f1e8(Cpu *restrict c) {
    FN_ENTER(0x69f1e8u);
L_69f1e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ea40u;
    { uint32_t ea = 0x69f1fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f1fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f214(Cpu *restrict c) {
    FN_ENTER(0x69f214u);
L_69f214:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ea1cu;
    { uint32_t ea = 0x69f224u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f228u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69f240u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11685d0(c);
}
void f_69f24c(Cpu *restrict c) {
    FN_ENTER(0x69f24cu);
L_69f24c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e9e0u;
    { uint32_t ea = 0x69f260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f260u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f278(Cpu *restrict c) {
    FN_ENTER(0x69f278u);
L_69f278:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e9bcu;
    { uint32_t ea = 0x69f288u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f28cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1610u;
    c->pc = c->r[4]; c->r[14] = 0x69f2a4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1168aac(c);
}
void f_69f2b0(Cpu *restrict c) {
    FN_ENTER(0x69f2b0u);
L_69f2b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e980u;
    { uint32_t ea = 0x69f2c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f2c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f2dc(Cpu *restrict c) {
    FN_ENTER(0x69f2dcu);
L_69f2dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e95cu;
    { uint32_t ea = 0x69f2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f2f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f308u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_117b5b0(c);
}
void f_69f314(Cpu *restrict c) {
    FN_ENTER(0x69f314u);
L_69f314:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e920u;
    { uint32_t ea = 0x69f328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f328u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f340(Cpu *restrict c) {
    FN_ENTER(0x69f340u);
L_69f340:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e8fcu;
    { uint32_t ea = 0x69f350u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f354u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x69f36cu; rt_dispatch(c);
    c->r[14] = 0x69f370u; f_5fc464(c);
    c->r[1] = 0x139e8d4u;
    { uint32_t ea = 0x69f37cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69f38c(Cpu *restrict c) {
    FN_ENTER(0x69f38cu);
L_69f38c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e8acu;
    { uint32_t ea = 0x69f3a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f3a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f3b8(Cpu *restrict c) {
    FN_ENTER(0x69f3b8u);
L_69f3b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e88cu;
    { uint32_t ea = 0x69f3c8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f3ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x69f3e4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_117ba30(c);
}
void f_69f3f0(Cpu *restrict c) {
    FN_ENTER(0x69f3f0u);
L_69f3f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e850u;
    { uint32_t ea = 0x69f404u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f404u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f41c(Cpu *restrict c) {
    FN_ENTER(0x69f41cu);
L_69f41c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e82cu;
    { uint32_t ea = 0x69f42cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f430u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f448u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_118bb08(c);
}
void f_69f454(Cpu *restrict c) {
    FN_ENTER(0x69f454u);
L_69f454:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e7f0u;
    { uint32_t ea = 0x69f468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f468u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f480(Cpu *restrict c) {
    FN_ENTER(0x69f480u);
L_69f480:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e7ccu;
    { uint32_t ea = 0x69f490u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f494u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16b0u;
    c->pc = c->r[4]; c->r[14] = 0x69f4acu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_118bcc4(c);
}
void f_69f4b8(Cpu *restrict c) {
    FN_ENTER(0x69f4b8u);
L_69f4b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e790u;
    { uint32_t ea = 0x69f4ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f4ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f4e4(Cpu *restrict c) {
    FN_ENTER(0x69f4e4u);
L_69f4e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e76cu;
    { uint32_t ea = 0x69f4f4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f4f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f510u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_119da04(c);
}
void f_69f51c(Cpu *restrict c) {
    FN_ENTER(0x69f51cu);
L_69f51c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e730u;
    { uint32_t ea = 0x69f530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f530u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f548(Cpu *restrict c) {
    FN_ENTER(0x69f548u);
L_69f548:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e70cu;
    { uint32_t ea = 0x69f558u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f55cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f574u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_119df48(c);
}
void f_69f580(Cpu *restrict c) {
    FN_ENTER(0x69f580u);
L_69f580:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e6d0u;
    { uint32_t ea = 0x69f594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f594u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f5ac(Cpu *restrict c) {
    FN_ENTER(0x69f5acu);
L_69f5ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e6acu;
    { uint32_t ea = 0x69f5bcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f5c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f5d8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11af568(c);
}
void f_69f5e4(Cpu *restrict c) {
    FN_ENTER(0x69f5e4u);
L_69f5e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e670u;
    { uint32_t ea = 0x69f5f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f5f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f610(Cpu *restrict c) {
    FN_ENTER(0x69f610u);
L_69f610:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e64cu;
    { uint32_t ea = 0x69f620u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f624u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f63cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11af99c(c);
}
void f_69f648(Cpu *restrict c) {
    FN_ENTER(0x69f648u);
L_69f648:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e610u;
    { uint32_t ea = 0x69f65cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f65cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f674(Cpu *restrict c) {
    FN_ENTER(0x69f674u);
L_69f674:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e5ecu;
    { uint32_t ea = 0x69f684u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f688u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f6a0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11afdc8(c);
}
void f_69f6ac(Cpu *restrict c) {
    FN_ENTER(0x69f6acu);
L_69f6ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e5b0u;
    { uint32_t ea = 0x69f6c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f6c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f6d8(Cpu *restrict c) {
    FN_ENTER(0x69f6d8u);
L_69f6d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e58cu;
    { uint32_t ea = 0x69f6e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f6ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69f704u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11affe0(c);
}
void f_69f710(Cpu *restrict c) {
    FN_ENTER(0x69f710u);
L_69f710:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e550u;
    { uint32_t ea = 0x69f724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f724u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f73c(Cpu *restrict c) {
    FN_ENTER(0x69f73cu);
L_69f73c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e52cu;
    { uint32_t ea = 0x69f74cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f750u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f768u; rt_dispatch(c);
    c->r[14] = 0x69f76cu; f_5f9670(c);
    c->r[1] = 0x139e504u;
    { uint32_t ea = 0x69f778u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69f788(Cpu *restrict c) {
    FN_ENTER(0x69f788u);
L_69f788:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e4dcu;
    { uint32_t ea = 0x69f79cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f79cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f7b4(Cpu *restrict c) {
    FN_ENTER(0x69f7b4u);
L_69f7b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e4bcu;
    { uint32_t ea = 0x69f7c4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f7c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f7e0u; rt_dispatch(c);
    c->r[14] = 0x69f7e4u; f_5faf64(c);
    c->r[1] = 0x139e494u;
    { uint32_t ea = 0x69f7f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69f800(Cpu *restrict c) {
    FN_ENTER(0x69f800u);
L_69f800:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e46cu;
    { uint32_t ea = 0x69f814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f814u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f82c(Cpu *restrict c) {
    FN_ENTER(0x69f82cu);
L_69f82c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e44cu;
    { uint32_t ea = 0x69f83cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f840u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1700u;
    c->pc = c->r[4]; c->r[14] = 0x69f858u; rt_dispatch(c);
    c->r[14] = 0x69f85cu; f_5fe49c(c);
    c->r[1] = 0x139e424u;
    { uint32_t ea = 0x69f868u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69f878(Cpu *restrict c) {
    FN_ENTER(0x69f878u);
L_69f878:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e3fcu;
    { uint32_t ea = 0x69f88cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f88cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f8a4(Cpu *restrict c) {
    FN_ENTER(0x69f8a4u);
L_69f8a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e3dcu;
    { uint32_t ea = 0x69f8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f8b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x69f8d0u; rt_dispatch(c);
    c->r[14] = 0x69f8d4u; f_603bec(c);
    c->r[1] = 0x139e3b4u;
    { uint32_t ea = 0x69f8e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69f8f0(Cpu *restrict c) {
    FN_ENTER(0x69f8f0u);
L_69f8f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e38cu;
    { uint32_t ea = 0x69f904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f904u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f91c(Cpu *restrict c) {
    FN_ENTER(0x69f91cu);
L_69f91c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e36cu;
    { uint32_t ea = 0x69f92cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f930u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f948u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11dc944(c);
}
void f_69f954(Cpu *restrict c) {
    FN_ENTER(0x69f954u);
L_69f954:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e330u;
    { uint32_t ea = 0x69f968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f968u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f980(Cpu *restrict c) {
    FN_ENTER(0x69f980u);
L_69f980:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e30cu;
    { uint32_t ea = 0x69f990u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f994u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69f9acu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11dcd0c(c);
}
void f_69f9b8(Cpu *restrict c) {
    FN_ENTER(0x69f9b8u);
L_69f9b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e2d0u;
    { uint32_t ea = 0x69f9ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69f9ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69f9e4(Cpu *restrict c) {
    FN_ENTER(0x69f9e4u);
L_69f9e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e2acu;
    { uint32_t ea = 0x69f9f4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69f9f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x69fa10u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11dcec8(c);
}
void f_69fa1c(Cpu *restrict c) {
    FN_ENTER(0x69fa1cu);
L_69fa1c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e270u;
    { uint32_t ea = 0x69fa30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fa30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fa48(Cpu *restrict c) {
    FN_ENTER(0x69fa48u);
L_69fa48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e24cu;
    { uint32_t ea = 0x69fa58u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fa5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69fa74u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11f1cf0(c);
}
void f_69fa80(Cpu *restrict c) {
    FN_ENTER(0x69fa80u);
L_69fa80:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e210u;
    { uint32_t ea = 0x69fa94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fa94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69faac(Cpu *restrict c) {
    FN_ENTER(0x69faacu);
L_69faac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e1ecu;
    { uint32_t ea = 0x69fabcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fac0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1600u;
    c->pc = c->r[4]; c->r[14] = 0x69fad8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11f1f3c(c);
}
void f_69fae4(Cpu *restrict c) {
    FN_ENTER(0x69fae4u);
L_69fae4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e1b0u;
    { uint32_t ea = 0x69faf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69faf8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fb10(Cpu *restrict c) {
    FN_ENTER(0x69fb10u);
L_69fb10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e18cu;
    { uint32_t ea = 0x69fb20u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fb24u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1630u;
    c->pc = c->r[4]; c->r[14] = 0x69fb3cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_11f20e8(c);
}
void f_69fb48(Cpu *restrict c) {
    FN_ENTER(0x69fb48u);
L_69fb48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e150u;
    { uint32_t ea = 0x69fb5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fb5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fb74(Cpu *restrict c) {
    FN_ENTER(0x69fb74u);
L_69fb74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e12cu;
    { uint32_t ea = 0x69fb84u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fb88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69fba0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_120079c(c);
}
void f_69fbac(Cpu *restrict c) {
    FN_ENTER(0x69fbacu);
L_69fbac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e0f0u;
    { uint32_t ea = 0x69fbc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fbc0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fbd8(Cpu *restrict c) {
    FN_ENTER(0x69fbd8u);
L_69fbd8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e0ccu;
    { uint32_t ea = 0x69fbe8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fbecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x69fc04u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12009d0(c);
}
void f_69fc10(Cpu *restrict c) {
    FN_ENTER(0x69fc10u);
L_69fc10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e090u;
    { uint32_t ea = 0x69fc24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fc24u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fc3c(Cpu *restrict c) {
    FN_ENTER(0x69fc3cu);
L_69fc3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e06cu;
    { uint32_t ea = 0x69fc4cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fc50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1610u;
    c->pc = c->r[4]; c->r[14] = 0x69fc68u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1200c34(c);
}
void f_69fc74(Cpu *restrict c) {
    FN_ENTER(0x69fc74u);
L_69fc74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139e030u;
    { uint32_t ea = 0x69fc88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fc88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fca0(Cpu *restrict c) {
    FN_ENTER(0x69fca0u);
L_69fca0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139e00cu;
    { uint32_t ea = 0x69fcb0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fcb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69fcccu; rt_dispatch(c);
    c->r[14] = 0x69fcd0u; f_5f9670(c);
    c->r[1] = 0x139dfe4u;
    { uint32_t ea = 0x69fcdcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69fcec(Cpu *restrict c) {
    FN_ENTER(0x69fcecu);
L_69fcec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dfbcu;
    { uint32_t ea = 0x69fd00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fd00u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fd18(Cpu *restrict c) {
    FN_ENTER(0x69fd18u);
L_69fd18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139df9cu;
    { uint32_t ea = 0x69fd28u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fd2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69fd44u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1212b54(c);
}
void f_69fd50(Cpu *restrict c) {
    FN_ENTER(0x69fd50u);
L_69fd50:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139df60u;
    { uint32_t ea = 0x69fd64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fd64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fd7c(Cpu *restrict c) {
    FN_ENTER(0x69fd7cu);
L_69fd7c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139df3cu;
    { uint32_t ea = 0x69fd8cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fd90u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69fda8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1213570(c);
}
void f_69fdb4(Cpu *restrict c) {
    FN_ENTER(0x69fdb4u);
L_69fdb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139df00u;
    { uint32_t ea = 0x69fdc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fdc8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fde0(Cpu *restrict c) {
    FN_ENTER(0x69fde0u);
L_69fde0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139dedcu;
    { uint32_t ea = 0x69fdf0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fdf4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1700u;
    c->pc = c->r[4]; c->r[14] = 0x69fe0cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1213abc(c);
}
void f_69fe18(Cpu *restrict c) {
    FN_ENTER(0x69fe18u);
L_69fe18:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dea0u;
    { uint32_t ea = 0x69fe2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fe2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fe44(Cpu *restrict c) {
    FN_ENTER(0x69fe44u);
L_69fe44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139de7cu;
    { uint32_t ea = 0x69fe54u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fe58u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69fe70u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1235e90(c);
}
void f_69fe7c(Cpu *restrict c) {
    FN_ENTER(0x69fe7cu);
L_69fe7c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139de40u;
    { uint32_t ea = 0x69fe90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69fe90u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69fea8(Cpu *restrict c) {
    FN_ENTER(0x69fea8u);
L_69fea8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139de1cu;
    { uint32_t ea = 0x69feb8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69febcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x69fed4u; rt_dispatch(c);
    c->r[14] = 0x69fed8u; f_5faf64(c);
    c->r[1] = 0x139ddf4u;
    { uint32_t ea = 0x69fee4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_69fef4(Cpu *restrict c) {
    FN_ENTER(0x69fef4u);
L_69fef4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ddccu;
    { uint32_t ea = 0x69ff08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ff08u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ff20(Cpu *restrict c) {
    FN_ENTER(0x69ff20u);
L_69ff20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ddacu;
    { uint32_t ea = 0x69ff30u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ff34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16c0u;
    c->pc = c->r[4]; c->r[14] = 0x69ff4cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12373b8(c);
}
void f_69ff58(Cpu *restrict c) {
    FN_ENTER(0x69ff58u);
L_69ff58:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dd70u;
    { uint32_t ea = 0x69ff6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ff6cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ff84(Cpu *restrict c) {
    FN_ENTER(0x69ff84u);
L_69ff84:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139dd4cu;
    { uint32_t ea = 0x69ff94u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69ff98u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1760u;
    c->pc = c->r[4]; c->r[14] = 0x69ffb0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12376f8(c);
}
void f_69ffbc(Cpu *restrict c) {
    FN_ENTER(0x69ffbcu);
L_69ffbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dd10u;
    { uint32_t ea = 0x69ffd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x69ffd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_69ffe8(Cpu *restrict c) {
    FN_ENTER(0x69ffe8u);
L_69ffe8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139dcecu;
    { uint32_t ea = 0x69fff8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x69fffcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x6a0014u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12343cc(c);
}
void f_6a0020(Cpu *restrict c) {
    FN_ENTER(0x6a0020u);
L_6a0020:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dcb0u;
    { uint32_t ea = 0x6a0034u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0034u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a004c(Cpu *restrict c) {
    FN_ENTER(0x6a004cu);
L_6a004c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139dc8cu;
    { uint32_t ea = 0x6a005cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0060u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x6a0078u; rt_dispatch(c);
    c->r[14] = 0x6a007cu; f_5fc464(c);
    c->r[1] = 0x139dc64u;
    { uint32_t ea = 0x6a0088u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a0098(Cpu *restrict c) {
    FN_ENTER(0x6a0098u);
L_6a0098:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dc3cu;
    { uint32_t ea = 0x6a00acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a00acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a00c4(Cpu *restrict c) {
    FN_ENTER(0x6a00c4u);
L_6a00c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139dc1cu;
    { uint32_t ea = 0x6a00d4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a00d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x6a00f0u; rt_dispatch(c);
    c->r[14] = 0x6a00f4u; f_603bec(c);
    c->r[1] = 0x139dbecu;
    c->r[2] = 0x166cu;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x6a0108u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x1664u;
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1668u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a0134(Cpu *restrict c) {
    FN_ENTER(0x6a0134u);
L_6a0134:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dba8u;
    { uint32_t ea = 0x6a0148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0148u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0160(Cpu *restrict c) {
    FN_ENTER(0x6a0160u);
L_6a0160:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139db88u;
    { uint32_t ea = 0x6a0170u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0174u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16b0u;
    c->pc = c->r[4]; c->r[14] = 0x6a018cu; rt_dispatch(c);
    c->r[14] = 0x6a0190u; f_6288a8(c);
    c->r[1] = 0x139db60u;
    { uint32_t ea = 0x6a019cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a01ac(Cpu *restrict c) {
    FN_ENTER(0x6a01acu);
L_6a01ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139db38u;
    { uint32_t ea = 0x6a01c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a01c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a01d8(Cpu *restrict c) {
    FN_ENTER(0x6a01d8u);
L_6a01d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139db18u;
    { uint32_t ea = 0x6a01e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a01ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a0204u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1251d8c(c);
}
void f_6a0210(Cpu *restrict c) {
    FN_ENTER(0x6a0210u);
L_6a0210:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139dadcu;
    { uint32_t ea = 0x6a0224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0224u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a023c(Cpu *restrict c) {
    FN_ENTER(0x6a023cu);
L_6a023c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139dab8u;
    { uint32_t ea = 0x6a024cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0250u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x6a0268u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1251fd0(c);
}
void f_6a0274(Cpu *restrict c) {
    FN_ENTER(0x6a0274u);
L_6a0274:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139da7cu;
    { uint32_t ea = 0x6a0288u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0288u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a02a0(Cpu *restrict c) {
    FN_ENTER(0x6a02a0u);
L_6a02a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139da58u;
    { uint32_t ea = 0x6a02b0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a02b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1610u;
    c->pc = c->r[4]; c->r[14] = 0x6a02ccu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12522a4(c);
}
void f_6a02d8(Cpu *restrict c) {
    FN_ENTER(0x6a02d8u);
L_6a02d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139da1cu;
    { uint32_t ea = 0x6a02ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a02ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0304(Cpu *restrict c) {
    FN_ENTER(0x6a0304u);
L_6a0304:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d9f8u;
    { uint32_t ea = 0x6a0314u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0318u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a0330u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12525ec(c);
}
void f_6a033c(Cpu *restrict c) {
    FN_ENTER(0x6a033cu);
L_6a033c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d9bcu;
    { uint32_t ea = 0x6a0350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0350u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0368(Cpu *restrict c) {
    FN_ENTER(0x6a0368u);
L_6a0368:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d998u;
    { uint32_t ea = 0x6a0378u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a037cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1650u;
    c->pc = c->r[4]; c->r[14] = 0x6a0394u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_125191c(c);
}
void f_6a03a0(Cpu *restrict c) {
    FN_ENTER(0x6a03a0u);
L_6a03a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d95cu;
    { uint32_t ea = 0x6a03b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a03b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a03cc(Cpu *restrict c) {
    FN_ENTER(0x6a03ccu);
L_6a03cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d938u;
    { uint32_t ea = 0x6a03dcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a03e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a03f8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1265c54(c);
}
void f_6a0404(Cpu *restrict c) {
    FN_ENTER(0x6a0404u);
L_6a0404:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d8fcu;
    { uint32_t ea = 0x6a0418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0418u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0430(Cpu *restrict c) {
    FN_ENTER(0x6a0430u);
L_6a0430:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d8d8u;
    { uint32_t ea = 0x6a0440u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0444u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a045cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1266164(c);
}
void f_6a0468(Cpu *restrict c) {
    FN_ENTER(0x6a0468u);
L_6a0468:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d89cu;
    { uint32_t ea = 0x6a047cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a047cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0494(Cpu *restrict c) {
    FN_ENTER(0x6a0494u);
L_6a0494:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d878u;
    { uint32_t ea = 0x6a04a4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a04a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a04c0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12666c0(c);
}
void f_6a04cc(Cpu *restrict c) {
    FN_ENTER(0x6a04ccu);
L_6a04cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d83cu;
    { uint32_t ea = 0x6a04e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a04e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a04f8(Cpu *restrict c) {
    FN_ENTER(0x6a04f8u);
L_6a04f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d818u;
    { uint32_t ea = 0x6a0508u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a050cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a0524u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_126691c(c);
}
void f_6a0530(Cpu *restrict c) {
    FN_ENTER(0x6a0530u);
L_6a0530:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d7dcu;
    { uint32_t ea = 0x6a0544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0544u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a055c(Cpu *restrict c) {
    FN_ENTER(0x6a055cu);
L_6a055c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d7b8u;
    { uint32_t ea = 0x6a056cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0570u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x6a0588u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1266c48(c);
}
void f_6a0594(Cpu *restrict c) {
    FN_ENTER(0x6a0594u);
L_6a0594:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d77cu;
    { uint32_t ea = 0x6a05a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a05a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a05c0(Cpu *restrict c) {
    FN_ENTER(0x6a05c0u);
L_6a05c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d758u;
    { uint32_t ea = 0x6a05d0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a05d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a05ecu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1264194(c);
}
void f_6a05f8(Cpu *restrict c) {
    FN_ENTER(0x6a05f8u);
L_6a05f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d71cu;
    { uint32_t ea = 0x6a060cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a060cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0624(Cpu *restrict c) {
    FN_ENTER(0x6a0624u);
L_6a0624:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d6f8u;
    { uint32_t ea = 0x6a0634u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0638u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x6a0650u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1264864(c);
}
void f_6a065c(Cpu *restrict c) {
    FN_ENTER(0x6a065cu);
L_6a065c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d6bcu;
    { uint32_t ea = 0x6a0670u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0670u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0688(Cpu *restrict c) {
    FN_ENTER(0x6a0688u);
L_6a0688:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d698u;
    { uint32_t ea = 0x6a0698u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a069cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16b0u;
    c->pc = c->r[4]; c->r[14] = 0x6a06b4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1264a7c(c);
}
void f_6a06c0(Cpu *restrict c) {
    FN_ENTER(0x6a06c0u);
L_6a06c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d65cu;
    { uint32_t ea = 0x6a06d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a06d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a06ec(Cpu *restrict c) {
    FN_ENTER(0x6a06ecu);
L_6a06ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d638u;
    { uint32_t ea = 0x6a06fcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0700u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a0718u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128bdb4(c);
}
void f_6a0724(Cpu *restrict c) {
    FN_ENTER(0x6a0724u);
L_6a0724:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d5fcu;
    { uint32_t ea = 0x6a0738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0738u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0750(Cpu *restrict c) {
    FN_ENTER(0x6a0750u);
L_6a0750:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d5d8u;
    { uint32_t ea = 0x6a0760u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0764u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a077cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128c334(c);
}
void f_6a0788(Cpu *restrict c) {
    FN_ENTER(0x6a0788u);
L_6a0788:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d59cu;
    { uint32_t ea = 0x6a079cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a079cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a07b4(Cpu *restrict c) {
    FN_ENTER(0x6a07b4u);
L_6a07b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d578u;
    { uint32_t ea = 0x6a07c4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a07c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x6a07e0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128c830(c);
}
void f_6a07ec(Cpu *restrict c) {
    FN_ENTER(0x6a07ecu);
L_6a07ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d53cu;
    { uint32_t ea = 0x6a0800u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0800u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0818(Cpu *restrict c) {
    FN_ENTER(0x6a0818u);
L_6a0818:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d518u;
    { uint32_t ea = 0x6a0828u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a082cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1620u;
    c->pc = c->r[4]; c->r[14] = 0x6a0844u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128cd58(c);
}
void f_6a0850(Cpu *restrict c) {
    FN_ENTER(0x6a0850u);
L_6a0850:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d4dcu;
    { uint32_t ea = 0x6a0864u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0864u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a087c(Cpu *restrict c) {
    FN_ENTER(0x6a087cu);
L_6a087c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d4b8u;
    { uint32_t ea = 0x6a088cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0890u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16a0u;
    c->pc = c->r[4]; c->r[14] = 0x6a08a8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128d128(c);
}
void f_6a08b4(Cpu *restrict c) {
    FN_ENTER(0x6a08b4u);
L_6a08b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d47cu;
    { uint32_t ea = 0x6a08c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a08c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a08e0(Cpu *restrict c) {
    FN_ENTER(0x6a08e0u);
L_6a08e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d458u;
    { uint32_t ea = 0x6a08f0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a08f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x6a090cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128da78(c);
}
void f_6a0918(Cpu *restrict c) {
    FN_ENTER(0x6a0918u);
L_6a0918:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d41cu;
    { uint32_t ea = 0x6a092cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a092cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0944(Cpu *restrict c) {
    FN_ENTER(0x6a0944u);
L_6a0944:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d3f8u;
    { uint32_t ea = 0x6a0954u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0958u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a0970u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128dff0(c);
}
void f_6a097c(Cpu *restrict c) {
    FN_ENTER(0x6a097cu);
L_6a097c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d3bcu;
    { uint32_t ea = 0x6a0990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0990u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a09a8(Cpu *restrict c) {
    FN_ENTER(0x6a09a8u);
L_6a09a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d398u;
    { uint32_t ea = 0x6a09b8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a09bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a09d4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_128e270(c);
}
void f_6a09e0(Cpu *restrict c) {
    FN_ENTER(0x6a09e0u);
L_6a09e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d35cu;
    { uint32_t ea = 0x6a09f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a09f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0a0c(Cpu *restrict c) {
    FN_ENTER(0x6a0a0cu);
L_6a0a0c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d338u;
    { uint32_t ea = 0x6a0a1cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0a20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a0a38u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12a56f4(c);
}
void f_6a0a44(Cpu *restrict c) {
    FN_ENTER(0x6a0a44u);
L_6a0a44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d2fcu;
    { uint32_t ea = 0x6a0a58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0a58u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0a70(Cpu *restrict c) {
    FN_ENTER(0x6a0a70u);
L_6a0a70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d2d8u;
    { uint32_t ea = 0x6a0a80u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0a84u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1630u;
    c->pc = c->r[4]; c->r[14] = 0x6a0a9cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12a58cc(c);
}
void f_6a0aa8(Cpu *restrict c) {
    FN_ENTER(0x6a0aa8u);
L_6a0aa8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d29cu;
    { uint32_t ea = 0x6a0abcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0abcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0ad4(Cpu *restrict c) {
    FN_ENTER(0x6a0ad4u);
L_6a0ad4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d278u;
    { uint32_t ea = 0x6a0ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0ae8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a0b00u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c5214(c);
}
void f_6a0b0c(Cpu *restrict c) {
    FN_ENTER(0x6a0b0cu);
L_6a0b0c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d23cu;
    { uint32_t ea = 0x6a0b20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0b20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0b38(Cpu *restrict c) {
    FN_ENTER(0x6a0b38u);
L_6a0b38:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d218u;
    { uint32_t ea = 0x6a0b48u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0b4cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[4]; c->r[14] = 0x6a0b64u; rt_dispatch(c);
    c->r[1] = 0x19du;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x139c1a4u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = 0x6a0b84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[1]); }
    c->r[1] = 0x1397fb0u;
    { uint32_t ea = 0x6a0b9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x13986c4u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = 0x6a0bc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x139d180u;
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = 0x6a0be4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a0c04(Cpu *restrict c) {
    FN_ENTER(0x6a0c04u);
L_6a0c04:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x139d144u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x6a0c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x6a0c20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0c40(Cpu *restrict c) {
    FN_ENTER(0x6a0c40u);
L_6a0c40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d118u;
    { uint32_t ea = 0x6a0c50u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0c54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a0c6cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c53d0(c);
}
void f_6a0c78(Cpu *restrict c) {
    FN_ENTER(0x6a0c78u);
L_6a0c78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d0dcu;
    { uint32_t ea = 0x6a0c8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0c8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0ca4(Cpu *restrict c) {
    FN_ENTER(0x6a0ca4u);
L_6a0ca4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d0b8u;
    { uint32_t ea = 0x6a0cb4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0cb8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a0cd0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c5724(c);
}
void f_6a0cdc(Cpu *restrict c) {
    FN_ENTER(0x6a0cdcu);
L_6a0cdc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d07cu;
    { uint32_t ea = 0x6a0cf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0cf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0d08(Cpu *restrict c) {
    FN_ENTER(0x6a0d08u);
L_6a0d08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139d058u;
    { uint32_t ea = 0x6a0d18u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0d1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x6a0d34u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c5ba8(c);
}
void f_6a0d40(Cpu *restrict c) {
    FN_ENTER(0x6a0d40u);
L_6a0d40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139d01cu;
    { uint32_t ea = 0x6a0d54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0d54u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0d6c(Cpu *restrict c) {
    FN_ENTER(0x6a0d6cu);
L_6a0d6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cff8u;
    { uint32_t ea = 0x6a0d7cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0d80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1610u;
    c->pc = c->r[4]; c->r[14] = 0x6a0d98u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c5fa4(c);
}
void f_6a0da4(Cpu *restrict c) {
    FN_ENTER(0x6a0da4u);
L_6a0da4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cfbcu;
    { uint32_t ea = 0x6a0db8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0db8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0dd0(Cpu *restrict c) {
    FN_ENTER(0x6a0dd0u);
L_6a0dd0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cf98u;
    { uint32_t ea = 0x6a0de0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0de4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a0dfcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c624c(c);
}
void f_6a0e08(Cpu *restrict c) {
    FN_ENTER(0x6a0e08u);
L_6a0e08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cf5cu;
    { uint32_t ea = 0x6a0e1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0e1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0e34(Cpu *restrict c) {
    FN_ENTER(0x6a0e34u);
L_6a0e34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cf38u;
    { uint32_t ea = 0x6a0e44u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0e48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[4]; c->r[14] = 0x6a0e60u; rt_dispatch(c);
    c->r[2] = 0x139bea8u;
    c->r[1] = 0x19du;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x6a0e80u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[2]); }
    c->r[2] = 0x1397cb4u;
    { uint32_t ea = 0x6a0e98u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x13983c8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x6a0ebcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x139cea4u;
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[1]); }
    { uint32_t ea = 0x6a0edcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a0efc(Cpu *restrict c) {
    FN_ENTER(0x6a0efcu);
L_6a0efc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x139ce68u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x6a0f14u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x6a0f18u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0f38(Cpu *restrict c) {
    FN_ENTER(0x6a0f38u);
L_6a0f38:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ce3cu;
    { uint32_t ea = 0x6a0f48u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0f4cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a0f64u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c6ba0(c);
}
void f_6a0f70(Cpu *restrict c) {
    FN_ENTER(0x6a0f70u);
L_6a0f70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ce00u;
    { uint32_t ea = 0x6a0f84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0f84u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a0f9c(Cpu *restrict c) {
    FN_ENTER(0x6a0f9cu);
L_6a0f9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cddcu;
    { uint32_t ea = 0x6a0facu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a0fb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1680u;
    c->pc = c->r[4]; c->r[14] = 0x6a0fc8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c72b4(c);
}
void f_6a0fd4(Cpu *restrict c) {
    FN_ENTER(0x6a0fd4u);
L_6a0fd4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cda0u;
    { uint32_t ea = 0x6a0fe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a0fe8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1000(Cpu *restrict c) {
    FN_ENTER(0x6a1000u);
L_6a1000:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cd7cu;
    { uint32_t ea = 0x6a1010u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1014u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1750u;
    c->pc = c->r[4]; c->r[14] = 0x6a102cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c76f0(c);
}
void f_6a1038(Cpu *restrict c) {
    FN_ENTER(0x6a1038u);
L_6a1038:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cd40u;
    { uint32_t ea = 0x6a104cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a104cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1064(Cpu *restrict c) {
    FN_ENTER(0x6a1064u);
L_6a1064:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cd1cu;
    { uint32_t ea = 0x6a1074u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1078u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1690u;
    c->pc = c->r[4]; c->r[14] = 0x6a1090u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c7a7c(c);
}
void f_6a109c(Cpu *restrict c) {
    FN_ENTER(0x6a109cu);
L_6a109c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cce0u;
    { uint32_t ea = 0x6a10b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a10b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a10c8(Cpu *restrict c) {
    FN_ENTER(0x6a10c8u);
L_6a10c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ccbcu;
    { uint32_t ea = 0x6a10d8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a10dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x16d0u;
    c->pc = c->r[4]; c->r[14] = 0x6a10f4u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c7e48(c);
}
void f_6a1100(Cpu *restrict c) {
    FN_ENTER(0x6a1100u);
L_6a1100:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cc80u;
    { uint32_t ea = 0x6a1114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1114u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a112c(Cpu *restrict c) {
    FN_ENTER(0x6a112cu);
L_6a112c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cc5cu;
    { uint32_t ea = 0x6a113cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1140u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1700u;
    c->pc = c->r[4]; c->r[14] = 0x6a1158u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12c829c(c);
}
void f_6a1164(Cpu *restrict c) {
    FN_ENTER(0x6a1164u);
L_6a1164:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cc20u;
    { uint32_t ea = 0x6a1178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1178u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1190(Cpu *restrict c) {
    FN_ENTER(0x6a1190u);
L_6a1190:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cbfcu;
    { uint32_t ea = 0x6a11a0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a11a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x15d0u;
    c->pc = c->r[4]; c->r[14] = 0x6a11bcu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12dda90(c);
}
void f_6a11c8(Cpu *restrict c) {
    FN_ENTER(0x6a11c8u);
L_6a11c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cbc0u;
    { uint32_t ea = 0x6a11dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a11dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a11f4(Cpu *restrict c) {
    FN_ENTER(0x6a11f4u);
L_6a11f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cb9cu;
    { uint32_t ea = 0x6a1204u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1208u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a1220u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12e265c(c);
}
void f_6a122c(Cpu *restrict c) {
    FN_ENTER(0x6a122cu);
L_6a122c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cb60u;
    { uint32_t ea = 0x6a1240u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1240u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1258(Cpu *restrict c) {
    FN_ENTER(0x6a1258u);
L_6a1258:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cb3cu;
    { uint32_t ea = 0x6a1268u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a126cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a1284u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fa71cc(c);
}
void f_6a1290(Cpu *restrict c) {
    FN_ENTER(0x6a1290u);
L_6a1290:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139cb00u;
    { uint32_t ea = 0x6a12a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a12a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a12bc(Cpu *restrict c) {
    FN_ENTER(0x6a12bcu);
L_6a12bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139cadcu;
    { uint32_t ea = 0x6a12ccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a12d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a12e8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fa7718(c);
}
void f_6a12f4(Cpu *restrict c) {
    FN_ENTER(0x6a12f4u);
L_6a12f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139caa0u;
    { uint32_t ea = 0x6a1308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1308u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1320(Cpu *restrict c) {
    FN_ENTER(0x6a1320u);
L_6a1320:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ca7cu;
    { uint32_t ea = 0x6a1330u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1334u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a134cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12e28f4(c);
}
void f_6a1358(Cpu *restrict c) {
    FN_ENTER(0x6a1358u);
L_6a1358:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139ca40u;
    { uint32_t ea = 0x6a136cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a136cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1384(Cpu *restrict c) {
    FN_ENTER(0x6a1384u);
L_6a1384:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139ca1cu;
    { uint32_t ea = 0x6a1394u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1398u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a13b0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12edddc(c);
}
void f_6a13bc(Cpu *restrict c) {
    FN_ENTER(0x6a13bcu);
L_6a13bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c9e0u;
    { uint32_t ea = 0x6a13d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a13d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a13e8(Cpu *restrict c) {
    FN_ENTER(0x6a13e8u);
L_6a13e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c9bcu;
    { uint32_t ea = 0x6a13f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a13fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a1414u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_fd1638(c);
}
void f_6a1420(Cpu *restrict c) {
    FN_ENTER(0x6a1420u);
L_6a1420:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c980u;
    { uint32_t ea = 0x6a1434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1434u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a144c(Cpu *restrict c) {
    FN_ENTER(0x6a144cu);
L_6a144c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c95cu;
    { uint32_t ea = 0x6a145cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1460u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1670u;
    c->pc = c->r[4]; c->r[14] = 0x6a1478u; rt_dispatch(c);
    c->r[14] = 0x6a147cu; f_5f9670(c);
    c->r[1] = 0x139c92cu;
    c->r[2] = 0x1660u;
    c->r[3] = c->r[0];
    { uint32_t ea = 0x6a1490u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); c->r[3] = c->r[3] + c->r[2]; }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x42200000u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a14ac(Cpu *restrict c) {
    FN_ENTER(0x6a14acu);
L_6a14ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c8f8u;
    { uint32_t ea = 0x6a14c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a14c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a14d8(Cpu *restrict c) {
    FN_ENTER(0x6a14d8u);
L_6a14d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c8d8u;
    { uint32_t ea = 0x6a14e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a14ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a1504u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12f2210(c);
}
void f_6a1510(Cpu *restrict c) {
    FN_ENTER(0x6a1510u);
L_6a1510:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c89cu;
    { uint32_t ea = 0x6a1524u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1524u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a153c(Cpu *restrict c) {
    FN_ENTER(0x6a153cu);
L_6a153c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c878u;
    { uint32_t ea = 0x6a154cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1550u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a1568u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12f8888(c);
}
void f_6a1574(Cpu *restrict c) {
    FN_ENTER(0x6a1574u);
L_6a1574:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c83cu;
    { uint32_t ea = 0x6a1588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1588u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a15a0(Cpu *restrict c) {
    FN_ENTER(0x6a15a0u);
L_6a15a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c818u;
    { uint32_t ea = 0x6a15b0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a15b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a15ccu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_12fd908(c);
}
void f_6a15d8(Cpu *restrict c) {
    FN_ENTER(0x6a15d8u);
L_6a15d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c7dcu;
    { uint32_t ea = 0x6a15ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a15ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1604(Cpu *restrict c) {
    FN_ENTER(0x6a1604u);
L_6a1604:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c7b8u;
    { uint32_t ea = 0x6a1614u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1618u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a1630u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_13065ec(c);
}
void f_6a163c(Cpu *restrict c) {
    FN_ENTER(0x6a163cu);
L_6a163c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c77cu;
    { uint32_t ea = 0x6a1650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1650u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1668(Cpu *restrict c) {
    FN_ENTER(0x6a1668u);
L_6a1668:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c758u;
    { uint32_t ea = 0x6a1678u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a167cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a1694u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1309850(c);
}
void f_6a16a0(Cpu *restrict c) {
    FN_ENTER(0x6a16a0u);
L_6a16a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c71cu;
    { uint32_t ea = 0x6a16b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a16b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a16cc(Cpu *restrict c) {
    FN_ENTER(0x6a16ccu);
L_6a16cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c6f8u;
    { uint32_t ea = 0x6a16dcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a16e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a16f8u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1310430(c);
}
void f_6a1704(Cpu *restrict c) {
    FN_ENTER(0x6a1704u);
L_6a1704:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c6bcu;
    { uint32_t ea = 0x6a1718u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1718u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1730(Cpu *restrict c) {
    FN_ENTER(0x6a1730u);
L_6a1730:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x139c698u;
    { uint32_t ea = 0x6a1740u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6a1744u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1660u;
    c->pc = c->r[4]; c->r[14] = 0x6a175cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1321190(c);
}
void f_6a1768(Cpu *restrict c) {
    FN_ENTER(0x6a1768u);
L_6a1768:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c65cu;
    { uint32_t ea = 0x6a177cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a177cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1794(Cpu *restrict c) {
    FN_ENTER(0x6a1794u);
L_6a1794:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x6a17a4u; f_73985c(c);
    c->r[0] = 0x139c62cu;
    { uint32_t ea = 0x6a17b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x13a8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a17c0u; f_3687a8(c);
    c->r[0] = 0x1460u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a17ccu; f_3687a8(c);
    c->r[0] = 0x1518u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a17d8u; f_3699bc(c);
    c->r[0] = 0x136cu;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1370u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1374u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1397348u;
    { uint32_t ea = 0x6a1804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x24u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1378u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfe8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xff0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x137cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1380u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x1384u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a1850u; f_15efd7c(c);
    c->r[0] = 0x1588u;
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x158au;
    c->r[1] = 0x35u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x158cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1590u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1594u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1598u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x159cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x15a0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x159eu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a18b4(Cpu *restrict c) {
    FN_ENTER(0x6a18b4u);
L_6a18b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139c510u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x6a18ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1388u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a18f8; }
    c->r[0] = 0x13972f8u;
    { uint32_t ea = 0x6a18ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a18f0u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a18f8:;
    c->r[0] = 0x138cu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a1924; }
    c->r[0] = 0x13972ccu;
    { uint32_t ea = 0x6a1918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a191cu; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1924:;
    c->r[0] = 0x1390u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a1950; }
    c->r[0] = 0x13972a0u;
    { uint32_t ea = 0x6a1944u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1948u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1950:;
    c->r[0] = 0x1394u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a197c; }
    c->r[0] = 0x1397274u;
    { uint32_t ea = 0x6a1970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1974u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a197c:;
    c->r[0] = 0x1398u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a19a8; }
    c->r[0] = 0x1397248u;
    { uint32_t ea = 0x6a199cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a19a0u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a19a8:;
    c->r[0] = 0x139cu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a19d4; }
    c->r[0] = 0x139721cu;
    { uint32_t ea = 0x6a19c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a19ccu; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a19d4:;
    c->r[0] = 0x13a0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a1a00; }
    c->r[0] = 0x13971f0u;
    { uint32_t ea = 0x6a19f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a19f8u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1a00:;
    c->r[0] = 0x13a4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a1a2c; }
    c->r[0] = 0x13971c4u;
    { uint32_t ea = 0x6a1a20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1a24u; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1a2c:;
    c->r[0] = 0x136cu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1a54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a1a4cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1a54:;
    c->r[0] = 0x1594u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a1a88; }
    c->r[0] = 0x13979d8u;
    { uint32_t ea = 0x6a1a74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x6a1a80u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1a88:;
    c->r[0] = 0x1384u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1aa8; }
    c->r[14] = 0x6a1aa0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1aa8:;
    c->r[0] = 0x1518u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a1ab4u; f_369aa0(c);
    c->r[0] = 0x1460u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a1ac0u; f_3688c8(c);
    c->r[0] = 0x13a8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a1accu; f_3688c8(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_739bd8(c);
}
void f_6a1b00(Cpu *restrict c) {
    FN_ENTER(0x6a1b00u);
L_6a1b00:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6a1b0cu; f_6a18b4(c);
    c->r[0] = 0x139b748u;
    { uint32_t ea = 0x6a1b18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1b18u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a1b30(Cpu *restrict c) {
    FN_ENTER(0x6a1b30u);
L_6a1b30:;
    __attribute__((musttail)) return f_739d50(c);
}
void f_6a1b34(Cpu *restrict c) {
    FN_ENTER(0x6a1b34u);
L_6a1b34:;
    __attribute__((musttail)) return f_739d54(c);
}
void f_6a1b38(Cpu *restrict c) {
    FN_ENTER(0x6a1b38u);
L_6a1b38:;
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { c->r[0] = 0x19du; }
    return;
}
void f_6a1b50(Cpu *restrict c) {
    FN_ENTER(0x6a1b50u);
L_6a1b50:;
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { c->r[0] = 0xffu; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    return;
}
void f_6a1b6c(Cpu *restrict c) {
    FN_ENTER(0x6a1b6cu);
L_6a1b6c:;
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_6a1ba0; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[1] = 0x0u; }
    c->r[0] = c->r[1];
L_6a1ba0:;
    return;
}
void f_6a1ba4(Cpu *restrict c) {
    FN_ENTER(0x6a1ba4u);
L_6a1ba4:;
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6a1bf8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_6a1bf8; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a1be0u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_EQ) { c->r[0] = 0x0u; }
    return;
L_6a1bf8:;
    c->r[0] = 0x0u;
    return;
}
void f_6a1c00(Cpu *restrict c) {
    FN_ENTER(0x6a1c00u);
L_6a1c00:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6a1c50; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_6a1c50; }
    c->r[1] = 0x1052u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_6a1c58; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_6a1c50; }
    c->r[14] = 0x6a1c4cu; f_47bcd0(c);
    goto L_6a1c64;
L_6a1c50:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_6a1c58:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a1c64u; rt_dispatch(c);
L_6a1c64:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a1c78(Cpu *restrict c) {
    FN_ENTER(0x6a1c78u);
L_6a1c78:;
    c->r[1] = 0x1384u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6a1c84(Cpu *restrict c) {
    FN_ENTER(0x6a1c84u);
L_6a1c84:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1cb4; }
    c->r[14] = 0x6a1cacu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6a1cb4:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_6a1ccc; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
L_6a1ccc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a1cd0(Cpu *restrict c) {
    FN_ENTER(0x6a1cd0u);
L_6a1cd0:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x1370u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    if (COND_GE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[2] & c->r[0];
    return;
}
void f_6a1cf4(Cpu *restrict c) {
    FN_ENTER(0x6a1cf4u);
L_6a1cf4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0] + (c->r[1] << 2);
    c->r[0] = 0x1396ed4u;
    c->r[4] = c->r[2];
    c->r[1] = c->r[4];
    { uint32_t ea = 0x6a1d10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a1d14u; f_5268d8(c);
    c->r[1] = 0x1388u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
}
void f_6a1d34(Cpu *restrict c) {
    FN_ENTER(0x6a1d34u);
L_6a1d34:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1e04; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GE) { goto L_6a1d80; }
    c->r[2] = 0x136cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a1d7c; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[7] = v; }
    goto L_6a1d80;
L_6a1d7c:;
    c->r[7] = 0xffu;
L_6a1d80:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a1d8cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1e04; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[3] | 0x1u;
    c->r[3] = c->r[3] | 0x3u;
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xc0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xc4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xc8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xd0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] | 0x40000000u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST8(ea, c->r[2]); }
L_6a1e04:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6a1e08(Cpu *restrict c) {
    FN_ENTER(0x6a1e08u);
L_6a1e08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x6a1e24u; f_73b500(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_6a1e44; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6a1e44u; rt_dispatch(c);
L_6a1e44:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a1e50(Cpu *restrict c) {
    FN_ENTER(0x6a1e50u);
L_6a1e50:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[2];
    c->r[2] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_6a1ec0; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_6a1ec0; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_6a1ec0; }
    c->r[0] = 0x1370u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1ec0; }
    c->r[7] = c->r[4] + (c->r[1] << 2);
    c->r[0] = 0x1388u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1ec0; }
    c->r[0] = 0x1384u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1ecc; }
    c->r[14] = 0x6a1ebcu; f_68a950(c);
    goto L_6a1ed0;
L_6a1ec0:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_6a1ecc:;
    c->r[0] = 0x0u;
L_6a1ed0:;
    c->r[1] = 0x3u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x138u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[2] = 0x2u;
    c->pc = c->r[7]; c->r[14] = 0x6a1efcu; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6a1f04(Cpu *restrict c) {
    FN_ENTER(0x6a1f04u);
L_6a1f04:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[3];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_6a1ff0; }
    c->r[0] = 0x1396cb8u;
    { uint32_t ea = 0x6a1f2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a1ff0; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_6a1ff0; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
L_6a1f5c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x6a1f68u; f_a90adc(c);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] >> 22) & 0xffu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_6a1f88; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_CC) { goto L_6a1f5c; }
    goto L_6a1ff0;
L_6a1f88:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = 0x3b808081u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->v.s[0] = c->r[3];
    c->v.s[4] = c->r[2];
    c->r[2] = (c->r[1] >> 24);
    c->v.s[8] = c->r[2];
    c->v.f[0] = (float)c->v.s[0];
    c->r[1] = (c->r[1] >> 16) & 0xffu;
    c->v.f[4] = (float)c->v.s[4];
    c->v.s[6] = c->r[1];
    c->v.f[6] = (float)c->v.s[6];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[4] * c->v.f[2];
    c->v.f[6] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13], c->v.s[0]);
    c->v.f[0] = (float)c->v.s[8];
    ST32(c->r[13] + 4u, c->v.s[4]);
    ST32(c->r[13] + 8u, c->v.s[6]);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 12u, c->v.s[0]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13];
    c->pc = c->r[2]; c->r[14] = 0x6a1ff0u; rt_dispatch(c);
L_6a1ff0:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6a2000(Cpu *restrict c) {
    FN_ENTER(0x6a2000u);
L_6a2000:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_6a208c; }
    c->r[0] = 0x1370u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a208c; }
    c->r[1] = 0x1396b78u;
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x6a203cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_6a208c; }
    c->r[1] = 0x1396b80u;
    c->r[0] = 0x1384u;
    c->r[7] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6a2060u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { goto L_6a2074; }
    c->r[14] = 0x6a206cu; f_68a9c0(c);
    c->r[2] = c->r[0];
    goto L_6a2078;
L_6a2074:;
    c->r[2] = 0x0u;
L_6a2078:;
    c->r[0] = c->r[6];
    c->r[1] = 0xbu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); }
    c->r[14] = 0x6a208cu; f_6eeaa4(c);
L_6a208c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6a209c(Cpu *restrict c) {
    FN_ENTER(0x6a209cu);
L_6a209c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[2];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_6a2134; }
    c->r[0] = 0x1370u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2134; }
    c->r[1] = 0x1396ad8u;
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x6a20dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_6a2134; }
    c->r[1] = 0x1396adcu;
    c->r[0] = 0x1384u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[6] = 0x0u; }
    { uint32_t ea = 0x6a2104u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { goto L_6a2118; }
    c->r[14] = 0x6a2110u; f_68a9c0(c);
    c->r[2] = c->r[0];
    goto L_6a211c;
L_6a2118:;
    c->r[2] = 0x0u;
L_6a211c:;
    c->r[0] = c->r[7];
    c->r[1] = 0xbu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x6a2134u; f_6eeaa4(c);
L_6a2134:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6a2144(Cpu *restrict c) {
    FN_ENTER(0x6a2144u);
L_6a2144:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[1];
    c->r[1] = 0x1384u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6a21f0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6a2168u; f_68aa10(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a21f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x6a2180u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a21f0; }
    { uint32_t ea = c->r[0] + 0x19u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6a2194u; f_68aa60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a21f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x6a21acu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_6a21f0; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x3f2u;
    c->r[4] = 0x0u;
L_6a21cc:;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6a21e4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { c->r[4] = c->r[4] + 0x1u; }
L_6a21e4:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_6a21cc; }
L_6a21f0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a21f8(Cpu *restrict c) {
    FN_ENTER(0x6a21f8u);
L_6a21f8:;
    c->r[1] = 0x1384u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    __attribute__((musttail)) return f_68aa10(c);
}
void f_6a2210(Cpu *restrict c) {
    FN_ENTER(0x6a2210u);
L_6a2210:;
    c->r[1] = 0x1384u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    __attribute__((musttail)) return f_68aa60(c);
}
void f_6a2228(Cpu *restrict c) {
    FN_ENTER(0x6a2228u);
L_6a2228:;
    c->r[2] = 0x1384u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { return; }
    __attribute__((musttail)) return f_68aab0(c);
}
void f_6a2240(Cpu *restrict c) {
    FN_ENTER(0x6a2240u);
L_6a2240:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_6a22f8; }
    c->r[0] = 0x1384u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a22f8; }
    c->r[14] = 0x6a2270u; f_68aab0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a22f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a2284u; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a22f8; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[2] = 0x2u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1518u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x6a22acu; f_369b08(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a22f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a22c4u; rt_dispatch(c);
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a22dc; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_6a22e0;
L_6a22dc:;
    c->r[1] = 0xffu;
L_6a22e0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[1] = 0x152cu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); } }
L_6a22f8:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a2300(Cpu *restrict c) {
    FN_ENTER(0x6a2300u);
L_6a2300:;
    return;
}
void f_6a2304(Cpu *restrict c) {
    FN_ENTER(0x6a2304u);
L_6a2304:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6a2310u; f_739d74(c);
    c->r[0] = 0x1378u;
    c->r[1] = 0x137cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x136cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6a234c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_6a234c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a2360(Cpu *restrict c) {
    FN_ENTER(0x6a2360u);
L_6a2360:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x136cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6a23c8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_6a23c8; }
    c->r[1] = 0x13a8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a23a8u; rt_dispatch(c);
    c->r[0] = 0x1460u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6a23bcu; rt_dispatch(c);
    c->r[0] = c->r[4] + 0xb8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_369c24(c);
L_6a23c8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a23dc(Cpu *restrict c) {
    FN_ENTER(0x6a23dcu);
L_6a23dc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6a23e8u; f_739d78(c);
    c->r[0] = 0x136cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6a2464; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_6a2464; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6a2424u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6a2434u; rt_dispatch(c);
    c->r[1] = 0x15a1u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a2458; }
    c->r[1] = 0x15a0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
L_6a2458:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_6a2464:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a2478(Cpu *restrict c) {
    FN_ENTER(0x6a2478u);
L_6a2478:;
    return;
}
void f_6a247c(Cpu *restrict c) {
    FN_ENTER(0x6a247cu);
L_6a247c:;
    c->r[1] = 0x13aeu;
    c->r[2] = 0xffu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x13adu;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0x1466u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x1465u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0x151eu;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x151du;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[3]); }
    __attribute__((musttail)) return f_739de0(c);
}
void f_6a24b8(Cpu *restrict c) {
    FN_ENTER(0x6a24b8u);
L_6a24b8:;
    c->r[2] = 0xb8u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
    c->r[1] = 0x13aeu;
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x13adu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    return;
}
void f_6a24dc(Cpu *restrict c) {
    FN_ENTER(0x6a24dcu);
L_6a24dc:;
    c->r[1] = 0x151eu;
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x151du;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    return;
}
void f_6a24f8(Cpu *restrict c) {
    FN_ENTER(0x6a24f8u);
L_6a24f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x136cu;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_6a26fc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_6a26fc; }
    c->r[0] = 0x111au;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1384u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6a2558u; rt_dispatch(c);
    c->r[0] = 0x10f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6a2718; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x6a257cu; f_68a8e0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a25a0; }
    c->r[0] = 0x1396650u;
    { uint32_t ea = 0x6a2594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a2598u; f_5268d8(c);
    c->r[1] = 0x1388u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a25a0:;
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x6a25acu; f_68a8e0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a25d0; }
    c->r[0] = 0x1396620u;
    { uint32_t ea = 0x6a25c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a25c8u; f_5268d8(c);
    c->r[1] = 0x138cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a25d0:;
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x6a25dcu; f_68a8e0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a2600; }
    c->r[0] = 0x13965f0u;
    { uint32_t ea = 0x6a25f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a25f8u; f_5268d8(c);
    c->r[1] = 0x1390u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a2600:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x6a260cu; f_68a8e0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a2630; }
    c->r[0] = 0x13965c0u;
    { uint32_t ea = 0x6a2624u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a2628u; f_5268d8(c);
    c->r[1] = 0x1394u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a2630:;
    c->r[0] = c->r[5];
    c->r[1] = 0x4u;
    c->r[14] = 0x6a263cu; f_68a8e0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a2660; }
    c->r[0] = 0x1396590u;
    { uint32_t ea = 0x6a2654u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a2658u; f_5268d8(c);
    c->r[1] = 0x1398u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a2660:;
    c->r[0] = c->r[5];
    c->r[1] = 0x5u;
    c->r[14] = 0x6a266cu; f_68a8e0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a2690; }
    c->r[0] = 0x1396560u;
    { uint32_t ea = 0x6a2684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a2688u; f_5268d8(c);
    c->r[1] = 0x139cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a2690:;
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x6a269cu; f_68a8e0(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a26c0; }
    c->r[0] = 0x1396530u;
    { uint32_t ea = 0x6a26b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a26b8u; f_5268d8(c);
    c->r[1] = 0x13a0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a26c0:;
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x6a26ccu; f_68a8e0(c);
    c->r[1] = c->r[0];
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a26f4; }
    c->r[0] = 0x13964fcu;
    { uint32_t ea = 0x6a26e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a26ecu; f_5268d8(c);
    c->r[1] = 0x13a4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_6a26f4:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_6a26fc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6a270cu; rt_dispatch(c);
    c->r[5] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_6a2718:;
    c->r[5] = 0x1u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a2744(Cpu *restrict c) {
    FN_ENTER(0x6a2744u);
L_6a2744:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1384u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2788; }
    c->r[14] = 0x6a2760u; f_68aa10(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6a2788; }
    c->r[14] = 0x6a2774u; f_68aa60(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_6a2788:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a2790(Cpu *restrict c) {
    FN_ENTER(0x6a2790u);
L_6a2790:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[10] = c->r[0];
    c->r[0] = 0x136cu;
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    c->r[8] = c->r[1];
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_6a2a2c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[5] = 0x0u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_6a2a2c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[0] = 0x1384u; }
    if (COND_NE) { c->r[11] = c->r[10]; }
    if (COND_NE) { { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD32(ea); c->r[11] = ea; c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6a2a2c; }
    c->r[14] = 0x6a27fcu; f_68aa10(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2a2c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x6a2814u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6a2a2c; }
    (void)f_adds(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x19u; uint32_t v = LD8(ea); c->r[7] = v; } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2a2c; }
    c->r[14] = 0x6a2838u; f_68aa60(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2a2c; }
    c->r[1] = 0xb8u;
    c->r[2] = 0x13a8u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t r = c->r[8] * c->r[1] + c->r[10]; c->r[1] = r; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[1];
    c->r[1] = 0x2u;
    c->r[3] = c->r[6];
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10];
    c->r[14] = 0x6a2884u; f_368e98(c);
    c->r[0] = 0xffffu;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_NE) { c->r[0] = 0xb8u; }
    if (COND_NE) { c->r[1] = 0x13dcu; }
    if (COND_NE) { { uint32_t r = c->r[8] * c->r[0] + c->r[10]; c->r[0] = r; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[9]); } }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a28f0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a28b4u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a28c8; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_6a28cc;
L_6a28c8:;
    c->r[1] = 0xffu;
L_6a28cc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a28f0; }
    c->r[1] = 0xb8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x13bcu;
    { uint32_t r = c->r[8] * c->r[1] + c->r[10]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[0]); }
L_6a28f0:;
    c->r[0] = 0x1052u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_6a2920; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_6a2950; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_6a2a20; }
    c->r[0] = 0xb8u;
    c->r[1] = 0x1416u;
    c->r[2] = 0x0u;
    goto L_6a292c;
L_6a2920:;
    c->r[0] = 0xb8u;
    c->r[1] = 0x1416u;
    c->r[2] = 0x3u;
L_6a292c:;
    { uint32_t r = c->r[8] * c->r[0] + c->r[10]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x1418u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[5]); }
    c->r[1] = 0x13d8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2000000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_6a2a20;
L_6a2950:;
    c->r[0] = 0xb8u;
    c->r[2] = 0x1u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[10]; c->r[1] = r; }
    c->r[0] = 0x1416u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0x1418u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_6a29cc; }
    c->r[2] = 0x13e0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_6a29d0; }
    c->r[0] = 0x1428u;
    c->v.s[2] = c->r[2];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 900u);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    c->r[0] = c->v.s[2];
    if (COND_LS) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6a29d8; }
    goto L_6a2a00;
L_6a29cc:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
L_6a29d0:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_6a2a00; }
L_6a29d8:;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x4u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_HI) { goto L_6a2a04; }
    c->r[2] = 0xc00fu;
    c->r[3] = 0x1u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[7] = c->r[7] & 0xf7u; }
    goto L_6a2a04;
L_6a2a00:;
    c->r[7] = c->r[7] & 0xf7u;
L_6a2a04:;
    c->r[1] = 0xb8u;
    c->r[2] = 0x20u;
    c->r[0] = c->r[2] & (c->r[0] >> 15);
    { uint32_t r = c->r[8] * c->r[1] + c->r[10]; c->r[1] = r; }
    c->r[2] = 0x13b0u;
    c->r[0] = c->r[0] | c->r[7];
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[0]); }
L_6a2a20:;
    c->r[0] = 0x15a1u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
L_6a2a2c:;
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_6a2a34(Cpu *restrict c) {
    FN_ENTER(0x6a2a34u);
L_6a2a34:;
    c->r[2] = 0xb8u;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
    c->r[2] = 0x0u;
    c->r[1] = 0x1408u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    return;
}
void f_6a2a50(Cpu *restrict c) {
    FN_ENTER(0x6a2a50u);
L_6a2a50:;
    c->r[1] = 0x13aeu;
    c->r[2] = 0xffu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x13adu;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0x1466u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x1465u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = 0x151eu;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x151du;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[3]); }
    return;
}
void f_6a2a8c(Cpu *restrict c) {
    FN_ENTER(0x6a2a8cu);
L_6a2a8c:;
    c->r[1] = 0x1374u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x40u;
    c->r[0] = (c->r[0] & 0xfeffffffu) | ((c->r[1] << 24) & 0x1000000u);
    return;
}
void f_6a2aa0(Cpu *restrict c) {
    FN_ENTER(0x6a2aa0u);
L_6a2aa0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = 0x1374u;
    c->r[14] = 0x40u;
    c->r[3] = 0x1054u;
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[0] + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[14] = (c->r[14] & 0xfeffffffu) | ((c->r[12] << 24) & 0x1000000u);
    c->r[12] = 0x1396850u;
    { uint32_t ea = 0x6a2ad0u + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[14]); }
    c->r[1] = c->r[0] + 0x40u;
    c->r[2] = c->r[0] + 0x1000u;
    c->r[0] = c->r[12];
    c->r[14] = 0x6a2ae4u; f_3838fc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a2af0(Cpu *restrict c) {
    FN_ENTER(0x6a2af0u);
L_6a2af0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = 0x1396808u;
    c->r[14] = 0x1374u;
    c->r[12] = 0x1054u;
    c->r[5] = 0x40u;
    { uint32_t ea = c->r[0] + c->r[14]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + c->r[12]; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = 0x6a2b18u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] & 0xfeffffffu) | ((c->r[14] << 24) & 0x1000000u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); }
    c->r[1] = c->r[0] + 0x40u;
    c->r[2] = c->r[0] + 0x1000u;
    c->r[3] = c->r[12];
    c->r[0] = c->r[14];
    c->r[14] = 0x6a2b34u; f_3838fc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a2b40(Cpu *restrict c) {
    FN_ENTER(0x6a2b40u);
L_6a2b40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = 0x1374u;
    c->r[14] = 0x40u;
    c->r[3] = 0x1054u;
    c->r[4] = 0x20u;
    { uint32_t ea = c->r[0] + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[14] = (c->r[14] & 0xfeffffffu) | ((c->r[12] << 24) & 0x1000000u);
    c->r[12] = 0x13967b0u;
    { uint32_t ea = 0x6a2b70u + c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[14]); }
    c->r[1] = c->r[0] + 0x40u;
    c->r[2] = c->r[0] + 0x1000u;
    c->r[0] = c->r[12];
    c->r[14] = 0x6a2b84u; f_3838fc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a2b90(Cpu *restrict c) {
    FN_ENTER(0x6a2b90u);
L_6a2b90:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[14] = 0x1396770u;
    c->r[12] = 0x1054u;
    c->r[4] = 0x80u;
    { uint32_t ea = c->r[0] + c->r[12]; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = 0x6a2bb0u + c->r[14]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    c->r[1] = c->r[0] + 0x40u;
    c->r[2] = c->r[0] + 0x1000u;
    c->r[3] = c->r[12];
    c->r[0] = c->r[14];
    c->r[14] = 0x6a2bc8u; f_3838fc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a2bd4(Cpu *restrict c) {
    FN_ENTER(0x6a2bd4u);
L_6a2bd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->r[14] = c->r[0] + 0x1000u;
    c->r[4] = 0x1008u;
    c->v.s[6] = LD32(c->r[12]);
    c->v.s[8] = LD32(c->r[12] + 4u);
    c->v.s[10] = LD32(c->r[12] + 8u);
    c->r[12] = 0x0u;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[12]); }
    c->v.s[0] = LD32(c->r[14]);
    c->r[14] = c->r[0] + c->r[4];
    c->r[4] = 0x1004u;
    c->r[4] = c->r[0] + c->r[4];
    c->v.s[4] = LD32(c->r[14]);
    c->v.s[2] = LD32(c->r[4]);
    c->r[4] = 0x1054u;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[4] = 0x1374u;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x13966a4u;
    c->r[4] = 0x40u;
    { uint32_t ea = 0x6a2c7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[4] & 0xfeffffffu) | ((c->r[14] << 24) & 0x1000000u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[12];
    c->r[14] = 0x6a2c94u; f_3838fc(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a2ca0(Cpu *restrict c) {
    FN_ENTER(0x6a2ca0u);
L_6a2ca0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->r[14] = c->r[0] + 0x1000u;
    c->r[4] = 0x1008u;
    c->v.s[6] = LD32(c->r[12]);
    c->v.s[8] = LD32(c->r[12] + 4u);
    c->v.s[10] = LD32(c->r[12] + 8u);
    c->r[12] = 0x0u;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    ST32(c->r[13] + 32u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[12]); }
    c->v.s[0] = LD32(c->r[14]);
    c->r[14] = c->r[0] + c->r[4];
    c->r[4] = 0x1004u;
    c->r[4] = c->r[0] + c->r[4];
    c->v.s[4] = LD32(c->r[14]);
    c->v.s[2] = LD32(c->r[4]);
    c->r[4] = 0x1054u;
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[10];
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[0] = 0x13965e0u;
    c->r[4] = 0x80u;
    { uint32_t ea = 0x6a2d40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[2] = c->r[13] + 0x10u;
    c->r[3] = c->r[12];
    c->r[14] = 0x6a2d54u; f_3838fc(c);
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a2d60(Cpu *restrict c) {
    FN_ENTER(0x6a2d60u);
L_6a2d60:;
    c->r[0] = 0x851fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[0]; c->r[0] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[1] = c->r[1] - c->r[0] * c->r[2];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x28u);
    if (COND_CC) { c->r[0] = 0x1u; }
    return;
}
void f_6a2d88(Cpu *restrict c) {
    FN_ENTER(0x6a2d88u);
L_6a2d88:;
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x31u);
    if (COND_HI) { c->r[2] = c->r[1]; }
    c->r[1] = 0x159cu;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    return;
}
void f_6a2da4(Cpu *restrict c) {
    FN_ENTER(0x6a2da4u);
L_6a2da4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x38u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->v.s[2] = 0xc3960000u;
    c->v.s[4] = 0x43960000u;
    c->r[7] = 0x0u;
    c->r[6] = c->r[2];
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 4u);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[1] = 0x2u;
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[13] + 36u, c->v.s[2]);
    ST32(c->r[13] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x13964f0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x6a2e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a2e34u; f_381440(c);
    { uint32_t ea = c->r[6] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[4] = 0x41f00000u;
    (void)f_subs(c, c->r[1], 0x31u);
    if (COND_HI) { c->r[0] = c->r[1]; }
    c->r[1] = 0x159cu;
    { uint32_t ea = c->r[5] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.s[2] = LD32(c->r[4] + 4u);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = 0xc1f00000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_LS) { c->r[0] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_GE) { c->r[7] = 0x1u; }
    c->r[0] = c->r[7] & c->r[0];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6a2e90(Cpu *restrict c) {
    FN_ENTER(0x6a2e90u);
L_6a2e90:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    c->r[1] = 0x1384u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2ec8; }
    c->r[14] = 0x6a2eacu; f_68ab10(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2ec8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a2ec8:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a2ed0(Cpu *restrict c) {
    FN_ENTER(0x6a2ed0u);
L_6a2ed0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    c->r[1] = 0x1384u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2f08; }
    c->r[14] = 0x6a2eecu; f_68ab10(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2f08; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a2f08:;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a2f14(Cpu *restrict c) {
    FN_ENTER(0x6a2f14u);
L_6a2f14:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    c->r[1] = 0x1384u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2f4c; }
    c->r[14] = 0x6a2f30u; f_68ab10(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2f4c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a2f4c:;
    c->r[0] = 0x1395bf4u;
    { uint32_t ea = 0x6a2f58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6a2f5c(Cpu *restrict c) {
    FN_ENTER(0x6a2f5cu);
L_6a2f5c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2fdc; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_6a2fa0; }
    c->r[2] = 0x136cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a2f9c; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[5] = v; }
    goto L_6a2fa0;
L_6a2f9c:;
    c->r[5] = 0xffu;
L_6a2fa0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a2facu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2fdc; }
    c->r[14] = 0x6a2fc0u; f_68b074(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a2fdc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a2fdc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a2fe4(Cpu *restrict c) {
    FN_ENTER(0x6a2fe4u);
L_6a2fe4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a3058; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a300cu; rt_dispatch(c);
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a3024; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_6a3028;
L_6a3024:;
    c->r[1] = 0xffu;
L_6a3028:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a3058; }
    c->r[14] = 0x6a303cu; f_68b0c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a3058; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a3058:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a3060(Cpu *restrict c) {
    FN_ENTER(0x6a3060u);
L_6a3060:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a30d4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a3088u; rt_dispatch(c);
    c->r[1] = 0x136cu;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a30a0; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_6a30a4;
L_6a30a0:;
    c->r[1] = 0xffu;
L_6a30a4:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a30d4; }
    c->r[14] = 0x6a30b8u; f_68b114(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a30d4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a30d4:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a30dc(Cpu *restrict c) {
    FN_ENTER(0x6a30dcu);
L_6a30dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a315c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_6a3120; }
    c->r[2] = 0x136cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a311c; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[5] = v; }
    goto L_6a3120;
L_6a311c:;
    c->r[5] = 0xffu;
L_6a3120:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a312cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a315c; }
    c->r[14] = 0x6a3140u; f_68b164(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a315c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a315c:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a3164(Cpu *restrict c) {
    FN_ENTER(0x6a3164u);
L_6a3164:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a31e4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_6a31a8; }
    c->r[2] = 0x136cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a31a4; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[5] = v; }
    goto L_6a31a8;
L_6a31a4:;
    c->r[5] = 0xffu;
L_6a31a8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a31b4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a31e4; }
    c->r[14] = 0x6a31c8u; f_68b164(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a31e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a31e4:;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a31f0(Cpu *restrict c) {
    FN_ENTER(0x6a31f0u);
L_6a31f0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x1384u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a3270; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GE) { goto L_6a3234; }
    c->r[2] = 0x136cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6a3230; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[5] = v; }
    goto L_6a3234;
L_6a3230:;
    c->r[5] = 0xffu;
L_6a3234:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6a3240u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a3270; }
    c->r[14] = 0x6a3254u; f_68b164(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6a3270; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_6a3270:;
    c->r[0] = 0x13958d0u;
    { uint32_t ea = 0x6a327cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6a3280(Cpu *restrict c) {
    FN_ENTER(0x6a3280u);
L_6a3280:;
    return;
}
void f_6a3284(Cpu *restrict c) {
    FN_ENTER(0x6a3284u);
L_6a3284:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_6a3288(Cpu *restrict c) {
    FN_ENTER(0x6a3288u);
L_6a3288:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a328c(Cpu *restrict c) {
    FN_ENTER(0x6a328cu);
L_6a328c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3290(Cpu *restrict c) {
    FN_ENTER(0x6a3290u);
L_6a3290:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139a6c0u;
    { uint32_t ea = 0x6a32a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a32a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a32bc(Cpu *restrict c) {
    FN_ENTER(0x6a32bcu);
L_6a32bc:;
    c->r[0] = 0x139a69cu;
    { uint32_t ea = 0x6a32c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6a32cc(Cpu *restrict c) {
    FN_ENTER(0x6a32ccu);
L_6a32cc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32d0(Cpu *restrict c) {
    FN_ENTER(0x6a32d0u);
L_6a32d0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32d4(Cpu *restrict c) {
    FN_ENTER(0x6a32d4u);
L_6a32d4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32d8(Cpu *restrict c) {
    FN_ENTER(0x6a32d8u);
L_6a32d8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32dc(Cpu *restrict c) {
    FN_ENTER(0x6a32dcu);
L_6a32dc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32e0(Cpu *restrict c) {
    FN_ENTER(0x6a32e0u);
L_6a32e0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32e4(Cpu *restrict c) {
    FN_ENTER(0x6a32e4u);
L_6a32e4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32e8(Cpu *restrict c) {
    FN_ENTER(0x6a32e8u);
L_6a32e8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32ec(Cpu *restrict c) {
    FN_ENTER(0x6a32ecu);
L_6a32ec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32f0(Cpu *restrict c) {
    FN_ENTER(0x6a32f0u);
L_6a32f0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32f4(Cpu *restrict c) {
    FN_ENTER(0x6a32f4u);
L_6a32f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32f8(Cpu *restrict c) {
    FN_ENTER(0x6a32f8u);
L_6a32f8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a32fc(Cpu *restrict c) {
    FN_ENTER(0x6a32fcu);
L_6a32fc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3300(Cpu *restrict c) {
    FN_ENTER(0x6a3300u);
L_6a3300:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3304(Cpu *restrict c) {
    FN_ENTER(0x6a3304u);
L_6a3304:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3308(Cpu *restrict c) {
    FN_ENTER(0x6a3308u);
L_6a3308:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a330c(Cpu *restrict c) {
    FN_ENTER(0x6a330cu);
L_6a330c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3310(Cpu *restrict c) {
    FN_ENTER(0x6a3310u);
L_6a3310:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3314(Cpu *restrict c) {
    FN_ENTER(0x6a3314u);
L_6a3314:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3318(Cpu *restrict c) {
    FN_ENTER(0x6a3318u);
L_6a3318:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a331c(Cpu *restrict c) {
    FN_ENTER(0x6a331cu);
L_6a331c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3320(Cpu *restrict c) {
    FN_ENTER(0x6a3320u);
L_6a3320:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3324(Cpu *restrict c) {
    FN_ENTER(0x6a3324u);
L_6a3324:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3328(Cpu *restrict c) {
    FN_ENTER(0x6a3328u);
L_6a3328:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a332c(Cpu *restrict c) {
    FN_ENTER(0x6a332cu);
L_6a332c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3330(Cpu *restrict c) {
    FN_ENTER(0x6a3330u);
L_6a3330:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3334(Cpu *restrict c) {
    FN_ENTER(0x6a3334u);
L_6a3334:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3338(Cpu *restrict c) {
    FN_ENTER(0x6a3338u);
L_6a3338:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a333c(Cpu *restrict c) {
    FN_ENTER(0x6a333cu);
L_6a333c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3340(Cpu *restrict c) {
    FN_ENTER(0x6a3340u);
L_6a3340:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3344(Cpu *restrict c) {
    FN_ENTER(0x6a3344u);
L_6a3344:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3348(Cpu *restrict c) {
    FN_ENTER(0x6a3348u);
L_6a3348:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a334c(Cpu *restrict c) {
    FN_ENTER(0x6a334cu);
L_6a334c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3350(Cpu *restrict c) {
    FN_ENTER(0x6a3350u);
L_6a3350:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3354(Cpu *restrict c) {
    FN_ENTER(0x6a3354u);
L_6a3354:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3358(Cpu *restrict c) {
    FN_ENTER(0x6a3358u);
L_6a3358:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a335c(Cpu *restrict c) {
    FN_ENTER(0x6a335cu);
L_6a335c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3360(Cpu *restrict c) {
    FN_ENTER(0x6a3360u);
L_6a3360:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3364(Cpu *restrict c) {
    FN_ENTER(0x6a3364u);
L_6a3364:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3368(Cpu *restrict c) {
    FN_ENTER(0x6a3368u);
L_6a3368:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a336c(Cpu *restrict c) {
    FN_ENTER(0x6a336cu);
L_6a336c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3370(Cpu *restrict c) {
    FN_ENTER(0x6a3370u);
L_6a3370:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3374(Cpu *restrict c) {
    FN_ENTER(0x6a3374u);
L_6a3374:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3378(Cpu *restrict c) {
    FN_ENTER(0x6a3378u);
L_6a3378:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a337c(Cpu *restrict c) {
    FN_ENTER(0x6a337cu);
L_6a337c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3380(Cpu *restrict c) {
    FN_ENTER(0x6a3380u);
L_6a3380:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3384(Cpu *restrict c) {
    FN_ENTER(0x6a3384u);
L_6a3384:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3388(Cpu *restrict c) {
    FN_ENTER(0x6a3388u);
L_6a3388:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a338c(Cpu *restrict c) {
    FN_ENTER(0x6a338cu);
L_6a338c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3390(Cpu *restrict c) {
    FN_ENTER(0x6a3390u);
L_6a3390:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3394(Cpu *restrict c) {
    FN_ENTER(0x6a3394u);
L_6a3394:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3398(Cpu *restrict c) {
    FN_ENTER(0x6a3398u);
L_6a3398:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a339c(Cpu *restrict c) {
    FN_ENTER(0x6a339cu);
L_6a339c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33a0(Cpu *restrict c) {
    FN_ENTER(0x6a33a0u);
L_6a33a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33a4(Cpu *restrict c) {
    FN_ENTER(0x6a33a4u);
L_6a33a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33a8(Cpu *restrict c) {
    FN_ENTER(0x6a33a8u);
L_6a33a8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33ac(Cpu *restrict c) {
    FN_ENTER(0x6a33acu);
L_6a33ac:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33b0(Cpu *restrict c) {
    FN_ENTER(0x6a33b0u);
L_6a33b0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33b4(Cpu *restrict c) {
    FN_ENTER(0x6a33b4u);
L_6a33b4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33b8(Cpu *restrict c) {
    FN_ENTER(0x6a33b8u);
L_6a33b8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33bc(Cpu *restrict c) {
    FN_ENTER(0x6a33bcu);
L_6a33bc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33c0(Cpu *restrict c) {
    FN_ENTER(0x6a33c0u);
L_6a33c0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33c4(Cpu *restrict c) {
    FN_ENTER(0x6a33c4u);
L_6a33c4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33c8(Cpu *restrict c) {
    FN_ENTER(0x6a33c8u);
L_6a33c8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33cc(Cpu *restrict c) {
    FN_ENTER(0x6a33ccu);
L_6a33cc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33d0(Cpu *restrict c) {
    FN_ENTER(0x6a33d0u);
L_6a33d0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33d4(Cpu *restrict c) {
    FN_ENTER(0x6a33d4u);
L_6a33d4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33d8(Cpu *restrict c) {
    FN_ENTER(0x6a33d8u);
L_6a33d8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33dc(Cpu *restrict c) {
    FN_ENTER(0x6a33dcu);
L_6a33dc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33e0(Cpu *restrict c) {
    FN_ENTER(0x6a33e0u);
L_6a33e0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33e4(Cpu *restrict c) {
    FN_ENTER(0x6a33e4u);
L_6a33e4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33e8(Cpu *restrict c) {
    FN_ENTER(0x6a33e8u);
L_6a33e8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33ec(Cpu *restrict c) {
    FN_ENTER(0x6a33ecu);
L_6a33ec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33f0(Cpu *restrict c) {
    FN_ENTER(0x6a33f0u);
L_6a33f0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33f4(Cpu *restrict c) {
    FN_ENTER(0x6a33f4u);
L_6a33f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33f8(Cpu *restrict c) {
    FN_ENTER(0x6a33f8u);
L_6a33f8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a33fc(Cpu *restrict c) {
    FN_ENTER(0x6a33fcu);
L_6a33fc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3400(Cpu *restrict c) {
    FN_ENTER(0x6a3400u);
L_6a3400:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3404(Cpu *restrict c) {
    FN_ENTER(0x6a3404u);
L_6a3404:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3408(Cpu *restrict c) {
    FN_ENTER(0x6a3408u);
L_6a3408:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a340c(Cpu *restrict c) {
    FN_ENTER(0x6a340cu);
L_6a340c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3410(Cpu *restrict c) {
    FN_ENTER(0x6a3410u);
L_6a3410:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3414(Cpu *restrict c) {
    FN_ENTER(0x6a3414u);
L_6a3414:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3418(Cpu *restrict c) {
    FN_ENTER(0x6a3418u);
L_6a3418:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a341c(Cpu *restrict c) {
    FN_ENTER(0x6a341cu);
L_6a341c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3420(Cpu *restrict c) {
    FN_ENTER(0x6a3420u);
L_6a3420:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3424(Cpu *restrict c) {
    FN_ENTER(0x6a3424u);
L_6a3424:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3428(Cpu *restrict c) {
    FN_ENTER(0x6a3428u);
L_6a3428:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a342c(Cpu *restrict c) {
    FN_ENTER(0x6a342cu);
L_6a342c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3430(Cpu *restrict c) {
    FN_ENTER(0x6a3430u);
L_6a3430:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3434(Cpu *restrict c) {
    FN_ENTER(0x6a3434u);
L_6a3434:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3438(Cpu *restrict c) {
    FN_ENTER(0x6a3438u);
L_6a3438:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a343c(Cpu *restrict c) {
    FN_ENTER(0x6a343cu);
L_6a343c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3440(Cpu *restrict c) {
    FN_ENTER(0x6a3440u);
L_6a3440:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3444(Cpu *restrict c) {
    FN_ENTER(0x6a3444u);
L_6a3444:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3448(Cpu *restrict c) {
    FN_ENTER(0x6a3448u);
L_6a3448:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a344c(Cpu *restrict c) {
    FN_ENTER(0x6a344cu);
L_6a344c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3450(Cpu *restrict c) {
    FN_ENTER(0x6a3450u);
L_6a3450:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3454(Cpu *restrict c) {
    FN_ENTER(0x6a3454u);
L_6a3454:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3458(Cpu *restrict c) {
    FN_ENTER(0x6a3458u);
L_6a3458:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a345c(Cpu *restrict c) {
    FN_ENTER(0x6a345cu);
L_6a345c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3460(Cpu *restrict c) {
    FN_ENTER(0x6a3460u);
L_6a3460:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3464(Cpu *restrict c) {
    FN_ENTER(0x6a3464u);
L_6a3464:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3468(Cpu *restrict c) {
    FN_ENTER(0x6a3468u);
L_6a3468:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a346c(Cpu *restrict c) {
    FN_ENTER(0x6a346cu);
L_6a346c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3470(Cpu *restrict c) {
    FN_ENTER(0x6a3470u);
L_6a3470:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3474(Cpu *restrict c) {
    FN_ENTER(0x6a3474u);
L_6a3474:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3478(Cpu *restrict c) {
    FN_ENTER(0x6a3478u);
L_6a3478:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a347c(Cpu *restrict c) {
    FN_ENTER(0x6a347cu);
L_6a347c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3480(Cpu *restrict c) {
    FN_ENTER(0x6a3480u);
L_6a3480:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3484(Cpu *restrict c) {
    FN_ENTER(0x6a3484u);
L_6a3484:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3488(Cpu *restrict c) {
    FN_ENTER(0x6a3488u);
L_6a3488:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a348c(Cpu *restrict c) {
    FN_ENTER(0x6a348cu);
L_6a348c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3490(Cpu *restrict c) {
    FN_ENTER(0x6a3490u);
L_6a3490:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3494(Cpu *restrict c) {
    FN_ENTER(0x6a3494u);
L_6a3494:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3498(Cpu *restrict c) {
    FN_ENTER(0x6a3498u);
L_6a3498:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a349c(Cpu *restrict c) {
    FN_ENTER(0x6a349cu);
L_6a349c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34a0(Cpu *restrict c) {
    FN_ENTER(0x6a34a0u);
L_6a34a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34a4(Cpu *restrict c) {
    FN_ENTER(0x6a34a4u);
L_6a34a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34a8(Cpu *restrict c) {
    FN_ENTER(0x6a34a8u);
L_6a34a8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34ac(Cpu *restrict c) {
    FN_ENTER(0x6a34acu);
L_6a34ac:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34b0(Cpu *restrict c) {
    FN_ENTER(0x6a34b0u);
L_6a34b0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34b4(Cpu *restrict c) {
    FN_ENTER(0x6a34b4u);
L_6a34b4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34b8(Cpu *restrict c) {
    FN_ENTER(0x6a34b8u);
L_6a34b8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34bc(Cpu *restrict c) {
    FN_ENTER(0x6a34bcu);
L_6a34bc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34c0(Cpu *restrict c) {
    FN_ENTER(0x6a34c0u);
L_6a34c0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34c4(Cpu *restrict c) {
    FN_ENTER(0x6a34c4u);
L_6a34c4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34c8(Cpu *restrict c) {
    FN_ENTER(0x6a34c8u);
L_6a34c8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34cc(Cpu *restrict c) {
    FN_ENTER(0x6a34ccu);
L_6a34cc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34d0(Cpu *restrict c) {
    FN_ENTER(0x6a34d0u);
L_6a34d0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34d4(Cpu *restrict c) {
    FN_ENTER(0x6a34d4u);
L_6a34d4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34d8(Cpu *restrict c) {
    FN_ENTER(0x6a34d8u);
L_6a34d8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34dc(Cpu *restrict c) {
    FN_ENTER(0x6a34dcu);
L_6a34dc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34e0(Cpu *restrict c) {
    FN_ENTER(0x6a34e0u);
L_6a34e0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34e4(Cpu *restrict c) {
    FN_ENTER(0x6a34e4u);
L_6a34e4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34e8(Cpu *restrict c) {
    FN_ENTER(0x6a34e8u);
L_6a34e8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34ec(Cpu *restrict c) {
    FN_ENTER(0x6a34ecu);
L_6a34ec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34f0(Cpu *restrict c) {
    FN_ENTER(0x6a34f0u);
L_6a34f0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34f4(Cpu *restrict c) {
    FN_ENTER(0x6a34f4u);
L_6a34f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34f8(Cpu *restrict c) {
    FN_ENTER(0x6a34f8u);
L_6a34f8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a34fc(Cpu *restrict c) {
    FN_ENTER(0x6a34fcu);
L_6a34fc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3500(Cpu *restrict c) {
    FN_ENTER(0x6a3500u);
L_6a3500:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3504(Cpu *restrict c) {
    FN_ENTER(0x6a3504u);
L_6a3504:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3508(Cpu *restrict c) {
    FN_ENTER(0x6a3508u);
L_6a3508:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a350c(Cpu *restrict c) {
    FN_ENTER(0x6a350cu);
L_6a350c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3510(Cpu *restrict c) {
    FN_ENTER(0x6a3510u);
L_6a3510:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3514(Cpu *restrict c) {
    FN_ENTER(0x6a3514u);
L_6a3514:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3518(Cpu *restrict c) {
    FN_ENTER(0x6a3518u);
L_6a3518:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a351c(Cpu *restrict c) {
    FN_ENTER(0x6a351cu);
L_6a351c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3520(Cpu *restrict c) {
    FN_ENTER(0x6a3520u);
L_6a3520:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3524(Cpu *restrict c) {
    FN_ENTER(0x6a3524u);
L_6a3524:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3528(Cpu *restrict c) {
    FN_ENTER(0x6a3528u);
L_6a3528:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a352c(Cpu *restrict c) {
    FN_ENTER(0x6a352cu);
L_6a352c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3530(Cpu *restrict c) {
    FN_ENTER(0x6a3530u);
L_6a3530:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3534(Cpu *restrict c) {
    FN_ENTER(0x6a3534u);
L_6a3534:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3538(Cpu *restrict c) {
    FN_ENTER(0x6a3538u);
L_6a3538:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a353c(Cpu *restrict c) {
    FN_ENTER(0x6a353cu);
L_6a353c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3540(Cpu *restrict c) {
    FN_ENTER(0x6a3540u);
L_6a3540:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3544(Cpu *restrict c) {
    FN_ENTER(0x6a3544u);
L_6a3544:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3548(Cpu *restrict c) {
    FN_ENTER(0x6a3548u);
L_6a3548:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a354c(Cpu *restrict c) {
    FN_ENTER(0x6a354cu);
L_6a354c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3550(Cpu *restrict c) {
    FN_ENTER(0x6a3550u);
L_6a3550:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3554(Cpu *restrict c) {
    FN_ENTER(0x6a3554u);
L_6a3554:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3558(Cpu *restrict c) {
    FN_ENTER(0x6a3558u);
L_6a3558:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a355c(Cpu *restrict c) {
    FN_ENTER(0x6a355cu);
L_6a355c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3560(Cpu *restrict c) {
    FN_ENTER(0x6a3560u);
L_6a3560:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3564(Cpu *restrict c) {
    FN_ENTER(0x6a3564u);
L_6a3564:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3568(Cpu *restrict c) {
    FN_ENTER(0x6a3568u);
L_6a3568:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a356c(Cpu *restrict c) {
    FN_ENTER(0x6a356cu);
L_6a356c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3570(Cpu *restrict c) {
    FN_ENTER(0x6a3570u);
L_6a3570:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3574(Cpu *restrict c) {
    FN_ENTER(0x6a3574u);
L_6a3574:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3578(Cpu *restrict c) {
    FN_ENTER(0x6a3578u);
L_6a3578:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a357c(Cpu *restrict c) {
    FN_ENTER(0x6a357cu);
L_6a357c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3580(Cpu *restrict c) {
    FN_ENTER(0x6a3580u);
L_6a3580:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3584(Cpu *restrict c) {
    FN_ENTER(0x6a3584u);
L_6a3584:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3588(Cpu *restrict c) {
    FN_ENTER(0x6a3588u);
L_6a3588:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a358c(Cpu *restrict c) {
    FN_ENTER(0x6a358cu);
L_6a358c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3590(Cpu *restrict c) {
    FN_ENTER(0x6a3590u);
L_6a3590:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3594(Cpu *restrict c) {
    FN_ENTER(0x6a3594u);
L_6a3594:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3598(Cpu *restrict c) {
    FN_ENTER(0x6a3598u);
L_6a3598:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a359c(Cpu *restrict c) {
    FN_ENTER(0x6a359cu);
L_6a359c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35a0(Cpu *restrict c) {
    FN_ENTER(0x6a35a0u);
L_6a35a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35a4(Cpu *restrict c) {
    FN_ENTER(0x6a35a4u);
L_6a35a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35a8(Cpu *restrict c) {
    FN_ENTER(0x6a35a8u);
L_6a35a8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35ac(Cpu *restrict c) {
    FN_ENTER(0x6a35acu);
L_6a35ac:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35b0(Cpu *restrict c) {
    FN_ENTER(0x6a35b0u);
L_6a35b0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35b4(Cpu *restrict c) {
    FN_ENTER(0x6a35b4u);
L_6a35b4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35b8(Cpu *restrict c) {
    FN_ENTER(0x6a35b8u);
L_6a35b8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35bc(Cpu *restrict c) {
    FN_ENTER(0x6a35bcu);
L_6a35bc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35c0(Cpu *restrict c) {
    FN_ENTER(0x6a35c0u);
L_6a35c0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35c4(Cpu *restrict c) {
    FN_ENTER(0x6a35c4u);
L_6a35c4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35c8(Cpu *restrict c) {
    FN_ENTER(0x6a35c8u);
L_6a35c8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35cc(Cpu *restrict c) {
    FN_ENTER(0x6a35ccu);
L_6a35cc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35d0(Cpu *restrict c) {
    FN_ENTER(0x6a35d0u);
L_6a35d0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35d4(Cpu *restrict c) {
    FN_ENTER(0x6a35d4u);
L_6a35d4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35d8(Cpu *restrict c) {
    FN_ENTER(0x6a35d8u);
L_6a35d8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35dc(Cpu *restrict c) {
    FN_ENTER(0x6a35dcu);
L_6a35dc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35e0(Cpu *restrict c) {
    FN_ENTER(0x6a35e0u);
L_6a35e0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35e4(Cpu *restrict c) {
    FN_ENTER(0x6a35e4u);
L_6a35e4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35e8(Cpu *restrict c) {
    FN_ENTER(0x6a35e8u);
L_6a35e8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35ec(Cpu *restrict c) {
    FN_ENTER(0x6a35ecu);
L_6a35ec:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35f0(Cpu *restrict c) {
    FN_ENTER(0x6a35f0u);
L_6a35f0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35f4(Cpu *restrict c) {
    FN_ENTER(0x6a35f4u);
L_6a35f4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35f8(Cpu *restrict c) {
    FN_ENTER(0x6a35f8u);
L_6a35f8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a35fc(Cpu *restrict c) {
    FN_ENTER(0x6a35fcu);
L_6a35fc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3600(Cpu *restrict c) {
    FN_ENTER(0x6a3600u);
L_6a3600:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3604(Cpu *restrict c) {
    FN_ENTER(0x6a3604u);
L_6a3604:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3608(Cpu *restrict c) {
    FN_ENTER(0x6a3608u);
L_6a3608:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a360c(Cpu *restrict c) {
    FN_ENTER(0x6a360cu);
L_6a360c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3610(Cpu *restrict c) {
    FN_ENTER(0x6a3610u);
L_6a3610:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3614(Cpu *restrict c) {
    FN_ENTER(0x6a3614u);
L_6a3614:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3618(Cpu *restrict c) {
    FN_ENTER(0x6a3618u);
L_6a3618:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a361c(Cpu *restrict c) {
    FN_ENTER(0x6a361cu);
L_6a361c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3620(Cpu *restrict c) {
    FN_ENTER(0x6a3620u);
L_6a3620:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3624(Cpu *restrict c) {
    FN_ENTER(0x6a3624u);
L_6a3624:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3628(Cpu *restrict c) {
    FN_ENTER(0x6a3628u);
L_6a3628:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a362c(Cpu *restrict c) {
    FN_ENTER(0x6a362cu);
L_6a362c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3630(Cpu *restrict c) {
    FN_ENTER(0x6a3630u);
L_6a3630:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3634(Cpu *restrict c) {
    FN_ENTER(0x6a3634u);
L_6a3634:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3638(Cpu *restrict c) {
    FN_ENTER(0x6a3638u);
L_6a3638:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a363c(Cpu *restrict c) {
    FN_ENTER(0x6a363cu);
L_6a363c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3640(Cpu *restrict c) {
    FN_ENTER(0x6a3640u);
L_6a3640:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3644(Cpu *restrict c) {
    FN_ENTER(0x6a3644u);
L_6a3644:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3648(Cpu *restrict c) {
    FN_ENTER(0x6a3648u);
L_6a3648:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a364c(Cpu *restrict c) {
    FN_ENTER(0x6a364cu);
L_6a364c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3650(Cpu *restrict c) {
    FN_ENTER(0x6a3650u);
L_6a3650:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3654(Cpu *restrict c) {
    FN_ENTER(0x6a3654u);
L_6a3654:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3658(Cpu *restrict c) {
    FN_ENTER(0x6a3658u);
L_6a3658:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a365c(Cpu *restrict c) {
    FN_ENTER(0x6a365cu);
L_6a365c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3660(Cpu *restrict c) {
    FN_ENTER(0x6a3660u);
L_6a3660:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3664(Cpu *restrict c) {
    FN_ENTER(0x6a3664u);
L_6a3664:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3668(Cpu *restrict c) {
    FN_ENTER(0x6a3668u);
L_6a3668:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a366c(Cpu *restrict c) {
    FN_ENTER(0x6a366cu);
L_6a366c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3670(Cpu *restrict c) {
    FN_ENTER(0x6a3670u);
L_6a3670:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3674(Cpu *restrict c) {
    FN_ENTER(0x6a3674u);
L_6a3674:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3678(Cpu *restrict c) {
    FN_ENTER(0x6a3678u);
L_6a3678:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a367c(Cpu *restrict c) {
    FN_ENTER(0x6a367cu);
L_6a367c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3680(Cpu *restrict c) {
    FN_ENTER(0x6a3680u);
L_6a3680:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3684(Cpu *restrict c) {
    FN_ENTER(0x6a3684u);
L_6a3684:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3688(Cpu *restrict c) {
    FN_ENTER(0x6a3688u);
L_6a3688:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a368c(Cpu *restrict c) {
    FN_ENTER(0x6a368cu);
L_6a368c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3690(Cpu *restrict c) {
    FN_ENTER(0x6a3690u);
L_6a3690:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3694(Cpu *restrict c) {
    FN_ENTER(0x6a3694u);
L_6a3694:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a3698(Cpu *restrict c) {
    FN_ENTER(0x6a3698u);
L_6a3698:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a369c(Cpu *restrict c) {
    FN_ENTER(0x6a369cu);
L_6a369c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a36a0(Cpu *restrict c) {
    FN_ENTER(0x6a36a0u);
L_6a36a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a36a4(Cpu *restrict c) {
    FN_ENTER(0x6a36a4u);
L_6a36a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a36a8(Cpu *restrict c) {
    FN_ENTER(0x6a36a8u);
L_6a36a8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a36ac(Cpu *restrict c) {
    FN_ENTER(0x6a36acu);
L_6a36ac:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a36b0(Cpu *restrict c) {
    FN_ENTER(0x6a36b0u);
L_6a36b0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6a36b4(Cpu *restrict c) {
    FN_ENTER(0x6a36b4u);
L_6a36b4:;
    c->r[0] = 0x1399ba0u;
    { uint32_t ea = 0x6a36c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6a36c4(Cpu *restrict c) {
    FN_ENTER(0x6a36c4u);
L_6a36c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139a304u;
    { uint32_t ea = 0x6a36d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a36d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a36f0(Cpu *restrict c) {
    FN_ENTER(0x6a36f0u);
L_6a36f0:;
    c->r[0] = 0x139a2e0u;
    { uint32_t ea = 0x6a36fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6a3700(Cpu *restrict c) {
    FN_ENTER(0x6a3700u);
L_6a3700:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139a3d0u;
    { uint32_t ea = 0x6a3714u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a3714u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a372c(Cpu *restrict c) {
    FN_ENTER(0x6a372cu);
L_6a372c:;
    c->r[0] = 0x139a3acu;
    { uint32_t ea = 0x6a3738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6a373c(Cpu *restrict c) {
    FN_ENTER(0x6a373cu);
L_6a373c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139a3a8u;
    { uint32_t ea = 0x6a3750u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a3750u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a3768(Cpu *restrict c) {
    FN_ENTER(0x6a3768u);
L_6a3768:;
    c->r[0] = 0x139a384u;
    { uint32_t ea = 0x6a3774u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6a3778(Cpu *restrict c) {
    FN_ENTER(0x6a3778u);
L_6a3778:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139a5d4u;
    { uint32_t ea = 0x6a378cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a378cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a37a4(Cpu *restrict c) {
    FN_ENTER(0x6a37a4u);
L_6a37a4:;
    c->r[0] = 0x139a5b0u;
    { uint32_t ea = 0x6a37b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6a37b4(Cpu *restrict c) {
    FN_ENTER(0x6a37b4u);
L_6a37b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x139a5b4u;
    { uint32_t ea = 0x6a37c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6a37c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6a37e0(Cpu *restrict c) {
    FN_ENTER(0x6a37e0u);
L_6a37e0:;
    c->r[0] = 0x139a590u;
    { uint32_t ea = 0x6a37ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
