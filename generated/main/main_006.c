#include "cpu.h"
#include "neon_rt.h"
void f_2496f0(Cpu *c);
void f_249938(Cpu *c);
void f_2499ec(Cpu *c);
void f_250c64(Cpu *c);
void f_250ce0(Cpu *c);
void f_275574(Cpu *c);
void f_276008(Cpu *c);
void f_2816d0(Cpu *c);
void f_281ff8(Cpu *c);
void f_282020(Cpu *c);
void f_28282c(Cpu *c);
void f_282cd4(Cpu *c);
void f_2862cc(Cpu *c);
void f_28654c(Cpu *c);
void f_286668(Cpu *c);
void f_286728(Cpu *c);
void f_286808(Cpu *c);
void f_2868ac(Cpu *c);
void f_286970(Cpu *c);
void f_286ac0(Cpu *c);
void f_286b78(Cpu *c);
void f_286c34(Cpu *c);
void f_286ccc(Cpu *c);
void f_286e48(Cpu *c);
void f_286ee8(Cpu *c);
void f_286fa8(Cpu *c);
void f_287068(Cpu *c);
void f_287100(Cpu *c);
void f_2871d4(Cpu *c);
void f_28728c(Cpu *c);
void f_287354(Cpu *c);
void f_2873f0(Cpu *c);
void f_287520(Cpu *c);
void f_287604(Cpu *c);
void f_2876f4(Cpu *c);
void f_2877d4(Cpu *c);
void f_287898(Cpu *c);
void f_287930(Cpu *c);
void f_2879dc(Cpu *c);
void f_287b44(Cpu *c);
void f_287bfc(Cpu *c);
void f_287c94(Cpu *c);
void f_287d68(Cpu *c);
void f_287e00(Cpu *c);
void f_287ea8(Cpu *c);
void f_287f6c(Cpu *c);
void f_288938(Cpu *c);
void f_288b00(Cpu *c);
void f_288ba8(Cpu *c);
void f_288c40(Cpu *c);
void f_288cd8(Cpu *c);
void f_288d70(Cpu *c);
void f_288f50(Cpu *c);
void f_288ff0(Cpu *c);
void f_289088(Cpu *c);
void f_289128(Cpu *c);
void f_289208(Cpu *c);
void f_2892a4(Cpu *c);
void f_28932c(Cpu *c);
void f_2894a8(Cpu *c);
void f_289554(Cpu *c);
void f_289794(Cpu *c);
void f_289830(Cpu *c);
void f_2898cc(Cpu *c);
void f_28996c(Cpu *c);
void f_289a2c(Cpu *c);
void f_289c94(Cpu *c);
void f_289d34(Cpu *c);
void f_289dcc(Cpu *c);
void f_289f58(Cpu *c);
void f_289ff0(Cpu *c);
void f_28a088(Cpu *c);
void f_28a1cc(Cpu *c);
void f_28a278(Cpu *c);
void f_28a310(Cpu *c);
void f_28a3a8(Cpu *c);
void f_28a430(Cpu *c);
void f_28a4cc(Cpu *c);
void f_28a5c0(Cpu *c);
void f_28a690(Cpu *c);
void f_28a7fc(Cpu *c);
void f_28b2b8(Cpu *c);
void f_28c8d4(Cpu *c);
void f_28cc84(Cpu *c);
void f_28cd1c(Cpu *c);
void f_28cdc8(Cpu *c);
void f_28d0e4(Cpu *c);
void f_28d418(Cpu *c);
void f_28d854(Cpu *c);
void f_28e044(Cpu *c);
void f_28e144(Cpu *c);
void f_28f004(Cpu *c);
void f_2a1fc8(Cpu *c);
void f_2b2c34(Cpu *c);
void f_2b710c(Cpu *c);
void f_2b72a8(Cpu *c);
void f_2b88f8(Cpu *c);
void f_2bcb9c(Cpu *c);
void f_2bf858(Cpu *c);
void f_2c267c(Cpu *c);
void f_2c46c8(Cpu *c);
void f_2c6e14(Cpu *c);
void f_2c6f64(Cpu *c);
void f_2c72e0(Cpu *c);
void f_2c9b58(Cpu *c);
void f_68cba4(Cpu *c);
void f_68cd9c(Cpu *c);
void f_15efdd0(Cpu *c);
void f_282f80(Cpu *restrict c) {
    FN_ENTER(0x282f80u);
L_282f80:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = 0x0u;
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x198u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x199u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1a0u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1a1u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1a9u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b1u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1b9u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1c1u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1c9u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1d1u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1d9u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e0u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e1u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e9u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1f0u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1f1u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_283068; }
    c->r[0] = 0x1428u;
    c->r[9] = c->r[8] + c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    goto L_283230;
L_283068:;
    c->r[1] = 0x17b5ac4u;
    c->r[14] = c->r[13] + 0x200u;
    c->r[10] = 0x0u;
    c->r[9] = c->r[8];
    c->r[5] = 0x5ed0u;
    c->r[0] = c->r[14] + 0x36u;
    { uint32_t ea = 0x283088u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[10]); }
    c->r[0] = 0x1428u;
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x36au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_2831a4; }
    { uint32_t ea = c->r[0] + 0x230u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x232u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x23au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x234u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x236u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x236u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x238u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x231u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x23du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x233u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x23bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x235u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x239u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x237u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x237u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x23cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1e8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x72fcu;
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] - 0x3u;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_CS) { goto L_2831b0; }
    { uint32_t ea = c->r[0] + 0x368u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xffu);
    if (COND_EQ) { goto L_2831bc; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    goto L_2831cc;
L_2831a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    goto L_283208;
L_2831b0:;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x11u); }
    if (COND_NE) { goto L_2831d8; }
L_2831bc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
L_2831cc:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2831d8u; f_2c6e14(c);
L_2831d8:;
    c->r[0] = 0x734cu;
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_283200; }
    c->r[0] = 0x7350u;
    c->r[2] = (c->r[10] << 3);
    c->r[1] = c->r[8] + c->r[0];
    c->r[0] = c->r[13] + 0x198u;
    c->r[14] = 0x283200u; f_15efdd0(c);
L_283200:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
L_283208:;
    c->r[0] = c->r[9] + c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x283220u; f_2c46c8(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[14] = 0x283230u; f_2c46c8(c);
L_283230:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x230u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { goto L_28328c; }
    c->r[0] = 0x17b5b4cu;
    c->r[7] = 0x0u;
    c->r[4] = 0x1b6u;
    { uint32_t ea = 0x283254u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x17b5b44u;
    { uint32_t ea = 0x28325cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_283258:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x283264u; f_68cba4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_283280; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x283280u; f_68cd9c(c);
L_283280:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0xcu);
    if (COND_NE) { goto L_283258; }
L_28328c:;
    c->r[14] = 0x283290u; f_2496f0(c);
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ffu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2862ac; }
    c->r[0] = 0xba51u;
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xba50u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9fcu;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x22cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9f8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9f4u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x236u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9f0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9ecu;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x237u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9e8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9e4u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xb9e0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xba30u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x239u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xba2cu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb5f5u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x23au; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb5f4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x733fu;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x23bu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73f9u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1065u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0x7414u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73f8u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x23du; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1408u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7404u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = 0x733eu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x733cu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7348u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = 0x733du;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73cdu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73ccu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73b2u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73b0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73ceu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73d5u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73d8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73d3u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73d4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73d1u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73d0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73c8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7420u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    c->r[0] = 0xba44u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7bcu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1404u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7b8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xba52u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7b4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7b3u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73f3u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7b2u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73f0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7b1u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73bcu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73c4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x73c1u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73c0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73b8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73b5u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73b4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7344u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7341u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x7340u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7307u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x734cu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7b0u;
    c->r[6] = c->r[8] + c->r[0];
    c->r[0] = 0x73f4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x7304u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x72f8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    c->r[0] = 0x72fdu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    c->r[0] = 0x72fcu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb7c0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[0]); }
    c->r[0] = 0x72f4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7350u;
    c->r[1] = c->r[8] + c->r[0];
    c->r[0] = c->r[10] - 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[0] = c->r[13] + 0x200u;
    c->r[0] = c->r[0] + 0x10u;
    c->r[2] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[10] << 3);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x7300u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[1]); }
    goto L_286268;
L_2836a8:;
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_283770; }
    { uint32_t ea = c->r[13] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_283770; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[14] = 0x2836dcu; f_282020(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_28372c; }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_28372c; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x14u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
L_28372c:;
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_283768; }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_283770; }
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x283760u; f_2b88f8(c);
    c->r[14] = 0x283764u; f_2496f0(c);
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
L_283768:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
L_283770:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x283778u; f_250ce0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0xffu);
    if (COND_EQ) { goto L_283d80; }
L_283788:;
    c->r[9] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_28470c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x2837a8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x283bacu: goto L_283bac; case 0x283db4u: goto L_283db4; case 0x283dd4u: goto L_283dd4; case 0x283de0u: goto L_283de0; case 0x283e10u: goto L_283e10; case 0x283e48u: goto L_283e48; case 0x283e80u: goto L_283e80; case 0x283ea8u: goto L_283ea8; case 0x283ec0u: goto L_283ec0; case 0x283ed8u: goto L_283ed8; case 0x283fa4u: goto L_283fa4; case 0x283fccu: goto L_283fcc; case 0x283ff4u: goto L_283ff4; case 0x284008u: goto L_284008; case 0x284030u: goto L_284030; case 0x28404cu: goto L_28404c; case 0x284084u: goto L_284084; case 0x2840bcu: goto L_2840bc; case 0x2840e4u: goto L_2840e4; case 0x2840fcu: goto L_2840fc; case 0x2841b4u: goto L_2841b4; case 0x2841d0u: goto L_2841d0; case 0x2842acu: goto L_2842ac; case 0x2842c4u: goto L_2842c4; case 0x2842dcu: goto L_2842dc; case 0x2842f0u: goto L_2842f0; case 0x284308u: goto L_284308; case 0x284320u: goto L_284320; case 0x284338u: goto L_284338; case 0x28436cu: goto L_28436c; case 0x284384u: goto L_284384; case 0x28439cu: goto L_28439c; case 0x2843b4u: goto L_2843b4; case 0x2843e4u: goto L_2843e4; case 0x2843fcu: goto L_2843fc; case 0x284418u: goto L_284418; case 0x284430u: goto L_284430; case 0x284450u: goto L_284450; case 0x284488u: goto L_284488; case 0x2844a0u: goto L_2844a0; case 0x2844b8u: goto L_2844b8; case 0x2844d0u: goto L_2844d0; case 0x2844e8u: goto L_2844e8; case 0x28451cu: goto L_28451c; case 0x284534u: goto L_284534; case 0x28454cu: goto L_28454c; case 0x284574u: goto L_284574; case 0x28458cu: goto L_28458c; case 0x2845a4u: goto L_2845a4; case 0x2845e0u: goto L_2845e0; case 0x2845f8u: goto L_2845f8; case 0x284628u: goto L_284628; case 0x2846e0u: goto L_2846e0; case 0x28470cu: goto L_28470c; case 0x284714u: goto L_284714; case 0x28472cu: goto L_28472c; case 0x284760u: goto L_284760; case 0x284788u: goto L_284788; case 0x2847bcu: goto L_2847bc; case 0x2847d4u: goto L_2847d4; case 0x2847ecu: goto L_2847ec; case 0x284804u: goto L_284804; case 0x28481cu: goto L_28481c; case 0x284844u: goto L_284844; case 0x284870u: goto L_284870; case 0x2848f8u: goto L_2848f8; case 0x284910u: goto L_284910; case 0x284928u: goto L_284928; case 0x28494cu: goto L_28494c; case 0x284964u: goto L_284964; case 0x284984u: goto L_284984; case 0x28499cu: goto L_28499c; case 0x2849b8u: goto L_2849b8; case 0x2849d0u: goto L_2849d0; case 0x2849e8u: goto L_2849e8; case 0x284a00u: goto L_284a00; case 0x284a18u: goto L_284a18; case 0x284a58u: goto L_284a58; case 0x284a70u: goto L_284a70; case 0x284a88u: goto L_284a88; case 0x284aa0u: goto L_284aa0; case 0x284ad4u: goto L_284ad4; case 0x284b28u: goto L_284b28; case 0x284b40u: goto L_284b40; case 0x284b70u: goto L_284b70; case 0x284b88u: goto L_284b88; case 0x284bb8u: goto L_284bb8; case 0x284bd0u: goto L_284bd0; case 0x284bf8u: goto L_284bf8; case 0x284c10u: goto L_284c10; case 0x284c24u: goto L_284c24; case 0x284c54u: goto L_284c54; case 0x284c7cu: goto L_284c7c; case 0x284c94u: goto L_284c94; case 0x284cb0u: goto L_284cb0; case 0x284cecu: goto L_284cec; case 0x284d04u: goto L_284d04; case 0x284d34u: goto L_284d34; case 0x284d5cu: goto L_284d5c; case 0x284d84u: goto L_284d84; case 0x284dacu: goto L_284dac; case 0x284dd4u: goto L_284dd4; case 0x284df4u: goto L_284df4; case 0x284e0cu: goto L_284e0c; case 0x284e44u: goto L_284e44; case 0x284e58u: goto L_284e58; case 0x284e80u: goto L_284e80; case 0x284e98u: goto L_284e98; case 0x284eb0u: goto L_284eb0; case 0x284ec8u: goto L_284ec8; case 0x284ef8u: goto L_284ef8; case 0x284f34u: goto L_284f34; case 0x284f70u: goto L_284f70; case 0x284f9cu: goto L_284f9c; case 0x284fb4u: goto L_284fb4; case 0x284fccu: goto L_284fcc; case 0x284ff4u: goto L_284ff4; case 0x28501cu: goto L_28501c; case 0x285034u: goto L_285034; case 0x28505cu: goto L_28505c; case 0x285084u: goto L_285084; case 0x2850acu: goto L_2850ac; case 0x2850d4u: goto L_2850d4; case 0x2850ecu: goto L_2850ec; case 0x285104u: goto L_285104; case 0x285174u: goto L_285174; case 0x28519cu: goto L_28519c; case 0x2851b4u: goto L_2851b4; case 0x2851ccu: goto L_2851cc; case 0x2851e4u: goto L_2851e4; case 0x2851fcu: goto L_2851fc; case 0x285214u: goto L_285214; case 0x28522cu: goto L_28522c; case 0x285244u: goto L_285244; case 0x28525cu: goto L_28525c; case 0x285274u: goto L_285274; case 0x28528cu: goto L_28528c; case 0x2852a4u: goto L_2852a4; case 0x2852bcu: goto L_2852bc; case 0x2852ecu: goto L_2852ec; case 0x285320u: goto L_285320; case 0x285334u: goto L_285334; case 0x28534cu: goto L_28534c; case 0x285364u: goto L_285364; case 0x285380u: goto L_285380; case 0x2853b8u: goto L_2853b8; case 0x285404u: goto L_285404; case 0x28541cu: goto L_28541c; case 0x285434u: goto L_285434; case 0x28544cu: goto L_28544c; case 0x28549cu: goto L_28549c; case 0x28552cu: goto L_28552c; case 0x285544u: goto L_285544; case 0x285568u: goto L_285568; case 0x2855d8u: goto L_2855d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_283bac:;
    { uint32_t ea = c->r[13] + 0x188u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x800u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_HI) { goto L_283d8c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x283bd8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x283c30u: goto L_283c30; case 0x283d8cu: goto L_283d8c; case 0x285af8u: goto L_285af8; case 0x285b80u: goto L_285b80; case 0x285bc8u: goto L_285bc8; case 0x285c0cu: goto L_285c0c; case 0x285c24u: goto L_285c24; case 0x285c70u: goto L_285c70; case 0x285d08u: goto L_285d08; case 0x285d24u: goto L_285d24; case 0x285d38u: goto L_285d38; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_283c30:;
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_283d8c; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x36au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_283ccc; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_283ccc:;
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[10]); }
    if (COND_EQ) { goto L_283cec; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x198u;
    c->r[14] = 0x283cecu; f_15efdd0(c);
L_283cec:;
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_285f38; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x283d08u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x283d58u: goto L_283d58; case 0x285e50u: goto L_285e50; case 0x285e88u: goto L_285e88; case 0x285eccu: goto L_285ecc; case 0x285f08u: goto L_285f08; case 0x285f38u: goto L_285f38; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_283d58:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_285f2c;
L_283d80:;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_283788; }
L_283d8c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2855c4; }
L_283da4:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x283db0u; f_28282c(c);
    goto L_2855b8;
L_283db4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x283dd0u; f_2862cc(c);
    goto L_2848ec;
L_283dd4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_284b30;
L_283de0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_283dfc; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_283dfc:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x7u;
    goto L_285598;
L_283e10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_283e34; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cdcu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_283e34:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x8u;
    goto L_285598;
L_283e48:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_283e6c; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cddu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_283e6c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x9u;
    goto L_285598;
L_283e80:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2855ac; }
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x283ea4u; f_28282c(c);
    goto L_2855ac;
L_283ea8:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x283ebcu; f_286808(c);
    goto L_2855a0;
L_283ec0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x283ed4u; f_2868ac(c);
    goto L_2855a0;
L_283ed8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_283f40; }
    c->r[1] = c->r[3] + 0x2u;
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[6];
    c->r[6] = 0x7350u;
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xcu);
    if (COND_CS) { c->r[2] = c->r[2] - 0x1u; }
    if (COND_CS) { { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); } }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[8] + (c->r[2] << 3);
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[6]; ST8(ea, c->r[3]); }
    c->r[6] = 0x7351u;
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + c->r[6]; ST8(ea, c->r[3]); }
    c->r[3] = 0x7354u;
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[2] + c->r[3]; ST32(ea, c->r[1]); }
L_283f40:;
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_2856a8; }
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2855b8; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_2856e4;
L_283fa4:;
    c->r[3] = 0x0u;
    c->r[1] = c->r[9];
    c->r[2] = 0x17u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8];
    if (COND_EQ) { c->r[3] = 0x6u; }
    goto L_28559c;
L_283fcc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285708; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x18u;
    goto L_285598;
L_283ff4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284004u; f_286b78(c);
    goto L_2855ac;
L_284008:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[3] + 0x2u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28572c; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_2855b8;
L_284030:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284044u; f_286ee8(c);
    goto L_2855a0;
L_28404c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284070; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cb7u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284070:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x23u;
    goto L_285598;
L_284084:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2840a8; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cb6u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_2840a8:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x29u;
    goto L_285598;
L_2840bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2857dc; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x2au;
    goto L_285598;
L_2840e4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2840f8u; f_287520(c);
    goto L_2855a0;
L_2840fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_28418c; }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_284148; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
L_284148:;
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_28418c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_2855ac;
L_2841b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2841c4u; f_282cd4(c);
    goto L_2855ac;
L_2841d0:;
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_284260; }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28421c; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[1]); }
L_28421c:;
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
L_284260:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_285a54; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_285a84; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_2855a0; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    goto L_2855a0;
L_2842ac:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2842c0u; f_287604(c);
    goto L_2855a0;
L_2842c4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2842d8u; f_2876f4(c);
    goto L_2855a0;
L_2842dc:;
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_2855ac;
L_2842f0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284304u; f_287b44(c);
    goto L_2855a0;
L_284308:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x28431cu; f_287c94(c);
    goto L_2855a0;
L_284320:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284334u; f_287e00(c);
    goto L_2855a0;
L_284338:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284358; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
L_284358:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x47u;
    goto L_285598;
L_28436c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284380u; f_287f6c(c);
    goto L_2855a0;
L_284384:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284398u; f_288938(c);
    goto L_2855a0;
L_28439c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2843b0u; f_288ba8(c);
    goto L_2855a0;
L_2843b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2843d0; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_2843d0:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x51u;
    goto L_285598;
L_2843e4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2843f8u; f_288c40(c);
    goto L_2855a0;
L_2843fc:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x234u; ST8(ea, c->r[1]); }
    goto L_2855ac;
L_284418:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x28442cu; f_288d70(c);
    goto L_2855a0;
L_284430:;
    c->r[0] = 0x0u;
    c->r[2] = 0x7305u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    goto L_2855ac;
L_284450:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284474; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x7305u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284474:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x5bu;
    goto L_285598;
L_284488:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_2855ac;
L_2844a0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2844b4u; f_288f50(c);
    goto L_2855a0;
L_2844b8:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2844ccu; f_2892a4(c);
    goto L_2855a0;
L_2844d0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2844e4u; f_28932c(c);
    goto L_2855a0;
L_2844e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284508; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x284508u; f_281ff8(c);
L_284508:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x6fu;
    goto L_285598;
L_28451c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284530u; f_289794(c);
    goto L_2855a0;
L_284534:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284548u; f_2898cc(c);
    goto L_2855a0;
L_28454c:;
    c->r[3] = 0x0u;
    c->r[1] = c->r[9];
    c->r[2] = 0x7cu;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8];
    if (COND_EQ) { c->r[3] = 0x18u; }
    goto L_28559c;
L_284574:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284588u; f_289a2c(c);
    goto L_2855a0;
L_28458c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2845a0u; f_289c94(c);
    goto L_2855a0;
L_2845a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_285804; }
    c->v.s[0] = c->r[1];
    c->v.s[2] = 0x42c80000u;
    c->r[1] = (c->r[0] << 8);
    c->r[0] = c->r[8];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[14] = 0x2845dcu; f_2c6f64(c);
    goto L_2855ac;
L_2845e0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2845f4u; f_289ff0(c);
    goto L_2855a0;
L_2845f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284614; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284614:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x92u;
    goto L_285598;
L_284628:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2846b8; }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_284674; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
L_284674:;
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_2846b8:;
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[2], 0xffu); }
    if (COND_NE) { goto L_285a00; }
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x2846dcu; f_276008(c);
    goto L_285a18;
L_2846e0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285814; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    goto L_285848;
L_28470c:;
    c->r[0] = 0x0u;
    goto L_285a1c;
L_284714:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284728u; f_28654c(c);
    goto L_2855ac;
L_28472c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_28474c; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2c0u; uint32_t v = LD8(ea); c->r[0] = v; }
L_28474c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0xau;
    goto L_285598;
L_284760:;
    c->r[3] = 0x0u;
    c->r[1] = c->r[9];
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8];
    if (COND_EQ) { c->r[3] = 0x4u; }
    goto L_28559c;
L_284788:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2847a8; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1bau; uint32_t v = LD8(ea); c->r[0] = v; }
L_2847a8:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0xcu;
    goto L_285598;
L_2847bc:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2847d0u; f_286668(c);
    goto L_2855a0;
L_2847d4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2847e8u; f_286728(c);
    goto L_2855ac;
L_2847ec:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284800u; f_286970(c);
    goto L_2855a0;
L_284804:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284818u; f_286ac0(c);
    goto L_2855a0;
L_28481c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285864; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x16u;
    goto L_285598;
L_284844:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_285a24; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2855ac; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x40u;
    goto L_285a30;
L_284870:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[1] + 0x236u; ST8(ea, c->r[2]); }
    c->r[2] = 0x64u;
    { uint32_t ea = c->r[3] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->r[1];
    c->r[1] = c->r[2] + (c->r[0] << 2);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[1] + 568u, c->v.s[0]);
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2848d4; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[0] + 0x236u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0] + 0x236u; ST8(ea, c->r[1]); }
L_2848d4:;
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x2848e8u; f_2862cc(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2848ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    goto L_2855ac;
L_2848f8:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x28490cu; f_286c34(c);
    goto L_2855a0;
L_284910:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284924u; f_286ccc(c);
    goto L_2855a0;
L_284928:;
    c->r[0] = 0x0u;
    c->r[1] = 0x64u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x250u; ST32(ea, c->r[0]); }
    goto L_2855ac;
L_28494c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284960u; f_286e48(c);
    goto L_2855a0;
L_284964:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x284980u; f_286fa8(c);
    goto L_28584c;
L_284984:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284998u; f_287068(c);
    goto L_2855a0;
L_28499c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2849b0u; f_287100(c);
    goto L_2855a0;
L_2849b8:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2849ccu; f_2871d4(c);
    goto L_2855a0;
L_2849d0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2849e4u; f_28728c(c);
    goto L_2855a0;
L_2849e8:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2849fcu; f_287354(c);
    goto L_2855a0;
L_284a00:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284a14u; f_2873f0(c);
    goto L_2855ac;
L_284a18:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 8);
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    goto L_2855ac;
L_284a58:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284a6cu; f_2877d4(c);
    goto L_2855a0;
L_284a70:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284a84u; f_287898(c);
    goto L_2855a0;
L_284a88:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284a9cu; f_287930(c);
    goto L_2855a0;
L_284aa0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284ab4u; f_2879dc(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_NE) { goto L_2855ac; }
    goto L_2855b8;
L_284ad4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = 0x3bu;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[14] = 0x284ae8u; f_250c64(c);
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x3bu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[1];
    c->r[14] = 0x284b04u; f_28e044(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6] + c->r[9];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0x284b14u; f_250ce0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[1] + (uint32_t)(int32_t)(int16_t)(c->r[0]);
    goto L_2855a8;
L_284b28:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_284b30:;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_2855ac;
L_284b40:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284b5c; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284b5c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x3du;
    goto L_285598;
L_284b70:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284b84u; f_287bfc(c);
    goto L_2855a0;
L_284b88:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284ba4; }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284ba4:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x40u;
    goto L_285598;
L_284bb8:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284bccu; f_287d68(c);
    goto L_2855a0;
L_284bd0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285878; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x44u;
    goto L_285598;
L_284bf8:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284c0cu; f_287ea8(c);
    goto L_2855a0;
L_284c10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    goto L_2855ac;
L_284c24:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284c40; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284c40:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x49u;
    goto L_285598;
L_284c54:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285898; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x4au;
    goto L_285598;
L_284c7c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284c90u; f_288b00(c);
    goto L_2855a0;
L_284c94:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x400u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x284cacu; rt_dispatch(c);
    goto L_2855ac;
L_284cb0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284cd8; }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_285ad4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284cd8:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x52u;
    goto L_285598;
L_284cec:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284d00u; f_288cd8(c);
    goto L_2855a0;
L_284d04:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284d20; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284d20:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x56u;
    goto L_285598;
L_284d34:;
    c->r[3] = 0x0u;
    c->r[1] = c->r[9];
    c->r[2] = 0x57u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8];
    if (COND_EQ) { c->r[3] = 0xeu; }
    goto L_28559c;
L_284d5c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2858c8; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x58u;
    goto L_285598;
L_284d84:;
    c->r[3] = 0x0u;
    c->r[1] = c->r[9];
    c->r[2] = 0x5cu;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[8];
    if (COND_EQ) { c->r[3] = 0x10u; }
    goto L_28559c;
L_284dac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2858dc; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x5fu;
    goto L_285598;
L_284dd4:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x5ccbu;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    goto L_2855ac;
L_284df4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284e08u; f_288ff0(c);
    goto L_2855a0;
L_284e0c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284e30; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cbau;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
L_284e30:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x63u;
    goto L_285598;
L_284e44:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    goto L_2855ac;
L_284e58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x65u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = (uint32_t)(uint8_t)(c->r[1]); }
    c->r[1] = c->r[9];
    goto L_285490;
L_284e80:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284e94u; f_289088(c);
    goto L_2855a0;
L_284e98:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284eacu; f_289128(c);
    goto L_2855a0;
L_284eb0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284ec4u; f_289208(c);
    goto L_2855a0;
L_284ec8:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[6]); }
    c->r[14] = 0x284ed8u; f_249938(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285918; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x6au;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    goto L_2853b0;
L_284ef8:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24fu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x284f30u; f_2bcb9c(c);
    goto L_2855ac;
L_284f34:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284f5c; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[0] + 0x230u; uint32_t v = LD8(ea); c->r[0] = v; }
L_284f5c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x6du;
    goto L_285598;
L_284f70:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_284f8c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
L_284f8c:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = c->r[9];
    c->r[2] = 0x6eu;
    goto L_285490;
L_284f9c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284fb0u; f_2894a8(c);
    goto L_2855a0;
L_284fb4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x284fc8u; f_289554(c);
    goto L_2855a0;
L_284fcc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285930; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x73u;
    goto L_285598;
L_284ff4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285944; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x74u;
    goto L_285598;
L_28501c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285030u; f_289830(c);
    goto L_2855a0;
L_285034:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285958; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x77u;
    goto L_285598;
L_28505c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_28596c; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x78u;
    goto L_285598;
L_285084:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285980; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x79u;
    goto L_285598;
L_2850ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2859a0; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x7au;
    goto L_285598;
L_2850d4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2850e8u; f_28996c(c);
    goto L_2855a0;
L_2850ec:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285100u; f_2c9b58(c);
    goto L_2855a0;
L_285104:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[0] + 0x236u; ST8(ea, c->r[1]); }
    c->r[1] = 0x64u;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[1] + (c->r[2] << 2);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 568u, c->v.s[0]);
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_285164; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[0] + 0x236u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0] + 0x236u; ST8(ea, c->r[1]); }
L_285164:;
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x285170u; f_2c46c8(c);
    goto L_2855ac;
L_285174:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2859b4; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x82u;
    goto L_285598;
L_28519c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2851b0u; f_289d34(c);
    goto L_2855a0;
L_2851b4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2851c8u; f_289dcc(c);
    goto L_2855a0;
L_2851cc:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2851e0u; f_289f58(c);
    goto L_2855a0;
L_2851e4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2851f8u; f_28a088(c);
    goto L_2855a0;
L_2851fc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285210u; f_2c267c(c);
    goto L_2855ac;
L_285214:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285228u; f_28a1cc(c);
    goto L_2855a0;
L_28522c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285240u; f_28a278(c);
    goto L_2855a0;
L_285244:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285258u; f_28a310(c);
    goto L_2855a0;
L_28525c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285270u; f_28a3a8(c);
    goto L_2855a0;
L_285274:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285288u; f_28a430(c);
    goto L_2855a0;
L_28528c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2852a0u; f_28a4cc(c);
    goto L_2855a0;
L_2852a4:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x2852b8u; f_28a5c0(c);
    goto L_2855a0;
L_2852bc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2852d8; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
L_2852d8:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x91u;
    goto L_285598;
L_2852ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_28530c; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x28530cu; f_2b710c(c);
L_28530c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x93u;
    goto L_285598;
L_285320:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285330u; f_28f004(c);
    goto L_2855ac;
L_285334:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285348u; f_28a690(c);
    goto L_28555c;
L_28534c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285360u; f_28a7fc(c);
    goto L_2855ac;
L_285364:;
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x28537cu; f_28b2b8(c);
    goto L_28555c;
L_285380:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[6]); }
    c->r[14] = 0x285394u; f_2499ec(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2859d0; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x98u;
L_2853b0:;
    c->r[3] = 0x0u;
    goto L_2859e8;
L_2853b8:;
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2855fc; }
    c->r[0] = c->r[0] | 0x1000000u;
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1d0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x2853f8u; f_2b2c34(c);
    c->r[14] = c->r[6];
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_285608;
L_285404:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285418u; f_28c8d4(c);
    goto L_2855b8;
L_28541c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285430u; f_28cc84(c);
    goto L_2855a0;
L_285434:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285448u; f_28cd1c(c);
    goto L_2855a0;
L_28544c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_285484; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaaabu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaaaa0000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x248u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 1);
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] - c->r[1];
L_285484:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = c->r[9];
    c->r[2] = 0x9du;
L_285490:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    goto L_285598;
L_28549c:;
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[5] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x3u;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[1] = c->r[5] + 0x3fu;
    c->r[5] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    c->r[2] = c->r[5] + 0x3eu;
L_285520:;
    c->r[0] = c->r[8];
    c->r[14] = 0x285528u; f_28d418(c);
    goto L_2855b8;
L_28552c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285540u; f_28cdc8(c);
    goto L_2855ac;
L_285544:;
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x28555cu; f_28d0e4(c);
L_28555c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2855ac; }
    goto L_2855b8;
L_285568:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_285588; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x361u; uint32_t v = LD8(ea); c->r[0] = v; }
L_285588:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0xa2u;
L_285598:;
    c->r[3] = 0x0u;
L_28559c:;
    c->r[14] = 0x2855a0u; f_28e144(c);
L_2855a0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
L_2855a8:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_2855ac:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    { extern void emtrace_cmd(Cpu *); ST32(c->r[4], c->r[0]); emtrace_cmd(c); }
L_2855b8:;
    { uint32_t ea = c->r[13] + 0x1ffu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2862ac; }
L_2855c4:;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[1], 0x3e8u);
    if (COND_LT) { goto L_286268; }
    goto L_28627c;
L_2855d8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x218u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x2855f8u; rt_dispatch(c);
    goto L_2855ac;
L_2855fc:;
    c->r[0] = c->r[0] & 0xfeffffffu;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
L_285608:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[12] = 0x0u;
    c->r[0] = c->r[0] | 0x10000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x43960000u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1d4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[12]); }
    c->r[0] = c->r[1] & ~0x8000001u;
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_2855ac;
L_2856a8:;
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2855b8; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x7350u;
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[8] + (c->r[1] << 3);
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[3]); }
    c->r[3] = 0x7351u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
L_2856e4:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[6] = c->r[12];
    goto L_2855b8;
L_285708:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x18u;
    c->r[3] = 0x7u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 8);
    c->r[1] = c->r[9];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    goto L_2859c4;
L_28572c:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[3] = 0x72f0u;
    c->r[12] = c->r[6];
    c->r[3] = c->r[8] + c->r[3];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CS) { c->r[2] = c->r[2] - 0x1u; }
    if (COND_CS) { { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); } }
    c->r[6] = c->r[3] + (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST8(ea, c->r[5]); }
    c->r[6] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285acc; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[12];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2855b8; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[14], 0x0u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[2]); }
    if (COND_NE) { goto L_2855b8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x308u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x2857d8u; rt_dispatch(c);
    goto L_2855b8;
L_2857dc:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x2857ecu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x2au;
    c->r[3] = 0x11u;
    goto L_28559c;
L_285804:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[2];
    c->r[14] = 0x285810u; f_2c72e0(c);
    goto L_2855ac;
L_285814:;
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x851fu;
    c->r[3] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->r[1] = c->r[9];
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
L_285848:;
    c->r[14] = 0x28584cu; f_28e144(c);
L_28584c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[14] = 0x28585cu; f_2496f0(c);
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    goto L_2855ac;
L_285864:;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x16u;
    c->r[3] = 0x5u;
    goto L_2859c4;
L_285878:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cb6u;
    c->r[2] = 0x44u;
    c->r[3] = 0x9u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    goto L_2859c4;
L_285898:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x851fu;
    c->r[3] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[2] = 0x64u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->r[1] = c->r[9];
    c->r[2] = 0x4au;
    goto L_2859c4;
L_2858c8:;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x58u;
    c->r[3] = 0xfu;
    goto L_2859c4;
L_2858dc:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = 0x42c80000u;
    c->r[1] = c->r[9];
    c->r[2] = 0x5fu;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 880u);
    c->v.s[2] = LD32(c->r[0] + 884u);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    goto L_2859c4;
L_285918:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[2] = 0x6au;
    c->r[3] = 0x1au;
    goto L_2859e8;
L_285930:;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x73u;
    c->r[3] = 0x13u;
    goto L_2859c4;
L_285944:;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x74u;
    c->r[3] = 0x14u;
    goto L_2859c4;
L_285958:;
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x77u;
    c->r[3] = 0x15u;
    goto L_2859c4;
L_28596c:;
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x78u;
    c->r[3] = 0x16u;
    goto L_2859c4;
L_285980:;
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x28598cu; f_2b72a8(c);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = c->r[9];
    c->r[2] = 0x79u;
    c->r[3] = 0xbu;
    goto L_2859c4;
L_2859a0:;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x7au;
    c->r[3] = 0x17u;
    goto L_2859c4;
L_2859b4:;
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[2] = 0x82u;
    c->r[3] = 0x19u;
L_2859c4:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    goto L_28559c;
L_2859d0:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = c->r[9];
    c->r[2] = 0x98u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
L_2859e8:;
    c->r[14] = 0x2859ecu; f_28e144(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_2855ac;
L_285a00:;
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_285a18; }
    c->r[0] = c->r[8];
    c->r[3] = 0x0u;
    c->r[14] = 0x285a18u; f_275574(c);
L_285a18:;
    c->r[0] = 0x1u;
L_285a1c:;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    goto L_2855ac;
L_285a24:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1d0u;
L_285a30:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    goto L_2855ac;
L_285a54:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_285dfc; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_285e30; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2855a0; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    goto L_2855b8;
L_285a84:;
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_285aa4; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xffu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[1] = v; }
L_285aa4:;
    c->r[0] = 0x31u;
    c->r[14] = 0x285aacu; f_250c64(c);
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x31u;
    c->r[3] = 0x1u;
    c->r[14] = 0x285ac0u; f_28e044(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_2855a0; }
    goto L_2855b8;
L_285acc:;
    c->r[6] = c->r[12];
    goto L_2855b8;
L_285ad4:;
    c->r[0] = 0x52u;
    c->r[1] = 0x0u;
    c->r[14] = 0x285ae0u; f_250c64(c);
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x52u;
    c->r[3] = 0x1u;
    c->r[14] = 0x285af4u; f_28e044(c);
    goto L_2855a0;
L_285af8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_285c58; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x59cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_285c58; }
    c->r[1] = 0x5a4u;
    c->r[0] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_285c58; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_2855b8; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_285cec;
L_285b80:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_285e78; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x72f0u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2860d0;
L_285bc8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_285db0; }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_285db0; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2860dc; }
    c->r[0] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    goto L_285dc8;
L_285c0c:;
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[5] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[1] = c->r[5] + 0xffu;
    goto L_285520;
L_285c24:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285c34u; f_2816d0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_285c50; }
    c->r[0] = c->r[8];
    c->r[1] = 0x20u;
    c->r[14] = 0x285c48u; f_2a1fc8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_285c58; }
L_285c50:;
    c->r[0] = c->r[8];
    c->r[14] = 0x285c58u; f_282cd4(c);
L_285c58:;
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_283da4; }
    goto L_2855b8;
L_285c70:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2860a8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2855c4; }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x234u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x17b30f8u;
    { uint32_t ea = 0x285ca8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x285cacu; f_68cba4(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_286000; }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2855b8; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2855b8; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
L_285cec:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_2855b8;
L_285d08:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffeffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_2855b8;
L_285d24:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x285d34u; f_28d854(c);
    goto L_2855b8;
L_285d38:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[5]); }
    c->r[14] = 0x285d4cu; f_2c267c(c);
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_283da4; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xfbbfu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xeffe0000u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf1c0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1ff0000u;
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_283da4;
L_285db0:;
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2855b8; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_285dc8:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x7350u;
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x7351u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x7354u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2860d0;
L_285dfc:;
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = 0x5ccbu;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    c->r[2] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CS) { goto L_2855a0; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    goto L_2855b8;
L_285e30:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - 0x1u;
    { uint32_t r = c->r[2] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    if (COND_EQ) { goto L_2855a0; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    goto L_2855b8;
L_285e50:;
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_285f2c;
L_285e78:;
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x285e84u; f_28282c(c);
    goto L_2855b8;
L_285e88:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_285f38; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x72f0u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x24u;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    goto L_285f2c;
L_285ecc:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_285f38; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_285f2c;
L_285f08:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_285f2c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_285f38:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x230u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x232u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x234u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x236u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x238u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x200u;
    c->r[0] = c->r[8];
    c->r[14] = 0x285f88u; f_2c46c8(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[0] + 0x231u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x233u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x235u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x237u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x23cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x285fd8u; f_2c46c8(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x250u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2862b8; }
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_2855c4;
L_286000:;
    c->r[0] = c->r[8];
    c->r[14] = 0x286008u; f_2bf858(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x35u);
    if (COND_NE) { goto L_2860f0; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_2855b8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x286030u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x2855b8u: goto L_2855b8; case 0x286080u: goto L_286080; case 0x2860a8u: goto L_2860a8; case 0x28617cu: goto L_28617c; case 0x2861a4u: goto L_2861a4; case 0x2861f4u: goto L_2861f4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_286080:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2860cc;
L_2860a8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_2860cc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2860d0:;
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_2855b8;
L_2860dc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xfffffcffu;
    c->r[0] = c->r[0] ^ 0x240u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_285c58;
L_2860f0:;
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_286138; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_286138:;
    c->r[0] = 0x17b2c58u;
    c->r[1] = c->r[9];
    { uint32_t ea = 0x286148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x28614cu; f_68cba4(c);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[9]);
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x286168u; f_2c6e14(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x286178u; f_2c46c8(c);
    goto L_2855b8;
L_28617c:;
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2860cc;
L_2861a4:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_28625c; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x72f0u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x24u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_2860cc;
L_2861f4:;
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_286250; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x7350u;
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[1] = 0x7351u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    c->r[1] = 0x7354u;
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + c->r[1];
    goto L_2860cc;
L_286250:;
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[2];
    goto L_2855b8;
L_28625c:;
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[3];
    goto L_2855b8;
L_286268:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[7] = c->r[0];
    if (COND_NE) { { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_2836a8; }
L_28627c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = c->r[8]; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { c->r[14] = 0x28629cu; f_28282c(c); }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x2862acu; f_276008(c);
L_2862ac:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2862b8:;
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1ffu; ST8(ea, c->r[5]); }
    goto L_2862ac;
}
