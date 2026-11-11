#include "cpu.h"
#include "neon_rt.h"
void f_74b65c(Cpu *c);
void f_8aa9b8(Cpu *c);
void f_8b1eec(Cpu *c);
void f_8b2118(Cpu *c);
void f_8b2134(Cpu *c);
void f_8b2154(Cpu *c);
void f_71e6d8(Cpu *restrict c) {
    FN_ENTER(0x71e6d8u);
L_71e6d8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x51u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x52u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x3fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x53u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x41u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x57u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x45u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x59u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x46u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x66u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x52u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x56u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x72u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x5au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x76u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x5eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7au; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_71e7f4:;
    c->r[2] = c->r[5] + c->r[0];
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[2] + 0x62u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x2cu);
    { uint32_t ea = c->r[1] + 0x88u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x63u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x89u; ST8(ea, c->r[2]); }
    if (COND_NE) { goto L_71e7f4; }
    { uint32_t ea = c->r[5] + 0x8eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8fu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x92u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x96u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x9au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xccu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xceu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x9eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd0u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xaau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xdeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xacu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xaeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xeau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xecu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xbau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xeeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xbcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xbeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xfeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x102u;
    { uint32_t ea = c->r[5] + 0xceu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x104u;
    { uint32_t ea = c->r[5] + 0xd0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x106u;
    { uint32_t ea = c->r[5] + 0xd2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x108u;
    { uint32_t ea = c->r[5] + 0xd4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x10au;
    { uint32_t ea = c->r[5] + 0xd6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x10cu;
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x10eu;
    { uint32_t ea = c->r[5] + 0xdau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x112u;
    { uint32_t ea = c->r[5] + 0xdcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x114u;
    { uint32_t ea = c->r[5] + 0xdeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x116u;
    { uint32_t ea = c->r[5] + 0xe0u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x11au;
    { uint32_t ea = c->r[5] + 0xe2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xe4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x11cu;
    { uint32_t ea = c->r[5] + 0xe6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x11eu;
    { uint32_t ea = c->r[5] + 0xe8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x120u;
    { uint32_t ea = c->r[5] + 0xeau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x12au;
    { uint32_t ea = c->r[5] + 0xecu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x128u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xedu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x129u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xeeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x12eu;
    { uint32_t ea = c->r[5] + 0xf0u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xf1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x12du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xf2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x132u;
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xf5u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x131u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xf6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_71ea2c:;
    (void)f_subs(c, c->r[0], 0x54u);
    c->r[7] = c->r[5] + c->r[0];
    if (COND_EQ) { c->r[2] = c->r[2] + 0x4u; }
    (void)f_subs(c, c->r[0], 0x78u);
    { uint32_t ea = c->r[7] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + 0xcu;
    if (COND_EQ) { c->r[2] = c->r[2] + 0x3u; }
    (void)f_subs(c, c->r[0], 0x168u);
    c->r[3] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[3] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0x134u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0xfcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x100u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x13cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x138u; ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_71ea2c; }
    c->r[8] = 0x46u;
    c->r[9] = 0x1u;
    c->r[0] = c->r[5] + 0x260u;
    c->r[1] = 0x104a75eu;
    c->r[10] = c->r[13] + 0x34u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x404u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x131a8c8u;
    c->r[6] = 0x71eab4u + c->r[1];
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x71eac0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71eac4u; f_8aa9b8(c);
    c->r[0] = 0x261u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x405u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71eafcu; f_8aa9b8(c);
    c->r[0] = 0x262u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x406u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71eb34u; f_8aa9b8(c);
    { uint32_t ea = c->r[5] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x408u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x71eb44u; f_8b1eec(c);
    c->r[1] = 0x41au;
    (void)f_subs(c, c->r[0], 0x8u);
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x41cu; ST32(ea, c->r[1]); }
    if (COND_CS) { goto L_71eb6c; }
    c->r[1] = 0x1078854u;
    c->r[1] = 0x71eb68u + c->r[1];
    c->r[0] = c->r[1] + (c->r[0] << 1);
    goto L_71eb9c;
L_71eb6c:;
    { uint32_t ea = c->r[5] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffefffffu;
    { uint32_t ea = c->r[5] + 0x744u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffefffffu;
    { uint32_t ea = c->r[5] + 0x740u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffefffffu;
    { uint32_t ea = c->r[5] + 0x73cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1078820u;
    c->r[0] = 0x71eb9cu + c->r[0];
    c->r[0] = c->r[0] + 0xeu;
L_71eb9c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71ebc0; }
    { uint32_t ea = c->r[4] + 0x424u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x424u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_71ebc0:;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71ebd4; }
    { uint32_t ea = c->r[4] + 0x424u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[4] + 0x424u; ST32(ea, c->r[0]); }
L_71ebd4:;
    { uint32_t ea = c->r[5] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71ebf0; }
    { uint32_t ea = c->r[4] + 0x428u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x428u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
L_71ebf0:;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_71ec08; }
    { uint32_t ea = c->r[4] + 0x428u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[4] + 0x428u; ST32(ea, c->r[0]); }
L_71ec08:;
    c->r[0] = 0x131a75cu;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    c->r[6] = 0x2u;
    c->r[9] = 0x3u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x71ec2cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x104a5f7u;
    c->r[7] = 0x71ec34u + c->r[0];
L_71ec30:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71ec6cu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_71ed0c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[2] & 0x1fu;
    c->r[2] = (c->r[2] >> 5);
    c->r[2] = c->r[6] + (c->r[2] << 2);
    c->r[1] = sh_lsl(c->r[11], c->r[3]);
    { uint32_t ea = c->r[2] + 0x9e8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[11], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71ecb8; }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[3] = c->r[6] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xd24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] | sh_lsl(c->r[11], c->r[5]);
    { uint32_t ea = c->r[3] + 0xd24u; ST32(ea, c->r[6]); }
L_71ecb8:;
    { uint32_t ea = c->r[2] + 0x9fcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[1] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71ece0; }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[3] = c->r[6] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xd3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] | sh_lsl(c->r[11], c->r[5]);
    { uint32_t ea = c->r[3] + 0xd3cu; ST32(ea, c->r[6]); }
L_71ece0:;
    { uint32_t ea = c->r[2] + 0xa10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x2u;
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71ed0c; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xd54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[11], c->r[0]);
    { uint32_t ea = c->r[1] + 0xd54u; ST32(ea, c->r[0]); }
L_71ed0c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x92u);
    if (COND_NE) { goto L_71ec30; }
    c->r[0] = 0x131a64cu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
    c->r[8] = 0xfu;
    c->r[9] = 0x3u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x71ed3cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x104a4e7u;
    c->r[7] = 0x71ed44u + c->r[0];
L_71ed40:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71ed78u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xa24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[11], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71edb4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xd6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[11], c->r[0]);
    { uint32_t ea = c->r[1] + 0xd6cu; ST32(ea, c->r[0]); }
L_71edb4:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x19u);
    if (COND_NE) { goto L_71ed40; }
    c->r[0] = 0x131a5a8u;
    c->r[4] = 0x0u;
    c->r[8] = 0x10u;
    c->r[9] = 0x3u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x71ede0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x104a443u;
    c->r[7] = 0x71ede8u + c->r[0];
L_71ede4:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71ee1cu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xa28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[11], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71ee58; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xd70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[11], c->r[0]);
    { uint32_t ea = c->r[1] + 0xd70u; ST32(ea, c->r[0]); }
L_71ee58:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xeu);
    if (COND_NE) { goto L_71ede4; }
    c->r[0] = 0x131a504u;
    c->r[4] = 0x0u;
    c->r[8] = 0x11u;
    c->r[9] = 0x3u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x71ee84u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x104a39fu;
    c->r[7] = 0x71ee8cu + c->r[0];
L_71ee88:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71eec0u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xa30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[11], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71eefc; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xd78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[11], c->r[0]);
    { uint32_t ea = c->r[1] + 0xd78u; ST32(ea, c->r[0]); }
L_71eefc:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x4du);
    if (COND_NE) { goto L_71ee88; }
    c->r[0] = 0x131a460u;
    c->r[4] = 0x0u;
    c->r[8] = 0x12u;
    c->r[9] = 0x3u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x71ef28u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x104a2fbu;
    c->r[7] = 0x71ef30u + c->r[0];
L_71ef2c:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71ef64u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xa3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[11], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71efa0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xd84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[11], c->r[0]);
    { uint32_t ea = c->r[1] + 0xd84u; ST32(ea, c->r[0]); }
L_71efa0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x2eu);
    if (COND_NE) { goto L_71ef2c; }
    c->r[0] = 0x131a3b8u;
    c->r[6] = c->r[6] + 0x274u;
    c->r[10] = 0x45u;
    c->r[11] = 0x3u;
    c->r[8] = c->r[13] + 0x34u;
    c->r[7] = 0x1u;
    c->r[9] = 0xffffu;
    { uint32_t ea = 0x71efd0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x104a253u;
    c->r[5] = 0x71efd8u + c->r[0];
L_71efd4:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f00cu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_71f0b4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x71f024u; f_8b2118(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_71f04c; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] + (c->r[0] >> 3);
    c->r[0] = c->r[0] & 0x7u;
    { uint32_t ea = c->r[1] + 0x42cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1] + 0x42cu; ST8(ea, c->r[0]); }
L_71f04c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x71f058u; f_8b2134(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_71f080; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] + (c->r[0] >> 3);
    c->r[0] = c->r[0] & 0x7u;
    { uint32_t ea = c->r[1] + 0x52cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1] + 0x52cu; ST8(ea, c->r[0]); }
L_71f080:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x71f08cu; f_8b2154(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_71f0b4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] + (c->r[0] >> 3);
    c->r[0] = c->r[0] & 0x7u;
    { uint32_t ea = c->r[1] + 0x62cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1] + 0x62cu; ST8(ea, c->r[0]); }
L_71f0b4:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x800u);
    if (COND_NE) { goto L_71efd4; }
    c->r[0] = 0x131a2b0u;
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71f0d8u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x104a14bu;
    c->r[8] = 0x71f0e0u + c->r[0];
L_71f0dc:;
    c->r[0] = 0x13u;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f11cu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x740u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x744u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x73cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] & 0x1fu;
    c->r[3] = c->r[3] & sh_lsl(c->r[9], c->r[5]);
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[5]);
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0x958u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[0]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[0]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0x958u; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0x960u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[0]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0x960u; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x968u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] & ~c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
    (void)f_subs(c, c->r[4], 0x1fu);
    { uint32_t ea = c->r[1] + 0x968u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_71f0dc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_71f1cc:;
    c->r[2] = (c->r[0] >> 5);
    c->r[3] = c->r[12] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x74cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x748u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x750u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = sh_lsl(c->r[1], c->r[0]);
    c->r[7] = c->r[7] & sh_lsl(c->r[1], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71f208; }
    c->r[5] = c->r[14] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x970u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[3];
    goto L_71f214;
L_71f208:;
    c->r[5] = c->r[14] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x970u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & ~c->r[3];
L_71f214:;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = c->r[14] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x970u; ST32(ea, c->r[4]); }
    c->r[2] = c->r[14] + (c->r[2] << 2);
    c->r[6] = c->r[6] & sh_lsl(c->r[1], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7] + 0x974u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[3]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[3]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7] + 0x974u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x978u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[3] = c->r[7] & ~c->r[3]; }
    if (COND_NE) { c->r[3] = c->r[7] | c->r[3]; }
    (void)f_subs(c, c->r[0], 0x7u);
    { uint32_t ea = c->r[2] + 0x978u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_71f1cc; }
    { uint32_t ea = c->r[14] + 0x970u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_71f27c; }
    { uint32_t ea = c->r[14] + 0x974u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[14] + 0x974u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x978u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[14] + 0x978u; ST32(ea, c->r[1]); }
L_71f27c:;
    c->r[1] = c->r[0] | 0x1u;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[14] + 0x970u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_71f2a4; }
    { uint32_t ea = c->r[14] + 0x974u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[14] + 0x974u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x978u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[14] + 0x978u; ST32(ea, c->r[1]); }
L_71f2a4:;
    c->r[0] = c->r[0] | 0x3u;
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[14] + 0x970u; ST32(ea, c->r[0]); }
    c->r[0] = 0x131a0c4u;
    { uint32_t ea = 0x71f2c4u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1049f5fu;
    c->r[8] = 0x71f2ccu + c->r[0];
L_71f2c8:;
    c->r[0] = 0x14u;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f308u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x758u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x75cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x754u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] & 0x1fu;
    c->r[3] = c->r[3] & sh_lsl(c->r[9], c->r[5]);
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[5]);
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0x97cu; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[0]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[0]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0x97cu; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0x984u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[0]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0x984u; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x98cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] & ~c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
    (void)f_subs(c, c->r[4], 0x1fu);
    { uint32_t ea = c->r[1] + 0x98cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_71f2c8; }
    c->r[0] = 0x1319fc8u;
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71f3c0u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1049e63u;
    c->r[8] = 0x71f3c8u + c->r[0];
L_71f3c4:;
    c->r[0] = 0xeu;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f404u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x768u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x770u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x760u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] & 0x1fu;
    c->r[3] = c->r[3] & sh_lsl(c->r[9], c->r[5]);
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[5]);
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0x994u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[0]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[0]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0x994u; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0x99cu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[0]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0x99cu; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x9a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] & ~c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
    (void)f_subs(c, c->r[4], 0x23u);
    { uint32_t ea = c->r[1] + 0x9a4u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_71f3c4; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[14] = 0x1u;
L_71f4b4:;
    c->r[2] = (c->r[0] >> 5);
    c->r[3] = c->r[12] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x778u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x77cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x780u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = sh_lsl(c->r[14], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[14], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[1] + (c->r[2] << 2);
    c->r[7] = c->r[7] & sh_lsl(c->r[14], c->r[0]);
    c->r[6] = c->r[6] & sh_lsl(c->r[14], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x9acu; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { c->r[4] = c->r[4] & ~c->r[3]; }
    if (COND_NE) { c->r[4] = c->r[4] | c->r[3]; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x9acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x9b0u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[3]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[3]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7] + 0x9b0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x9b4u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[3] = c->r[7] & ~c->r[3]; }
    if (COND_NE) { c->r[3] = c->r[7] | c->r[3]; }
    (void)f_subs(c, c->r[0], 0xcu);
    { uint32_t ea = c->r[2] + 0x9b4u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_71f4b4; }
    c->r[0] = 0x0u;
    c->r[14] = 0x1u;
L_71f530:;
    c->r[2] = (c->r[0] >> 5);
    c->r[3] = c->r[12] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x784u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x788u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x78cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = sh_lsl(c->r[14], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[14], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[1] + (c->r[2] << 2);
    c->r[7] = c->r[7] & sh_lsl(c->r[14], c->r[0]);
    c->r[6] = c->r[6] & sh_lsl(c->r[14], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x9b8u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { c->r[4] = c->r[4] & ~c->r[3]; }
    if (COND_NE) { c->r[4] = c->r[4] | c->r[3]; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x9b8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x9bcu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[3]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[3]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7] + 0x9bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x9c0u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[3] = c->r[7] & ~c->r[3]; }
    if (COND_NE) { c->r[3] = c->r[7] | c->r[3]; }
    (void)f_subs(c, c->r[0], 0xcu);
    { uint32_t ea = c->r[2] + 0x9c0u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_71f530; }
    c->r[0] = 0x0u;
    c->r[14] = 0x1u;
L_71f5ac:;
    c->r[2] = (c->r[0] >> 5);
    c->r[3] = c->r[12] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x790u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x794u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x798u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = sh_lsl(c->r[14], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[14], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[1] + (c->r[2] << 2);
    c->r[7] = c->r[7] & sh_lsl(c->r[14], c->r[0]);
    c->r[6] = c->r[6] & sh_lsl(c->r[14], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x9c4u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { c->r[4] = c->r[4] & ~c->r[3]; }
    if (COND_NE) { c->r[4] = c->r[4] | c->r[3]; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x9c4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x9c8u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[3]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[3]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7] + 0x9c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x9ccu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[3] = c->r[7] & ~c->r[3]; }
    if (COND_NE) { c->r[3] = c->r[7] | c->r[3]; }
    (void)f_subs(c, c->r[0], 0x6u);
    { uint32_t ea = c->r[2] + 0x9ccu; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_71f5ac; }
    c->r[0] = 0x1319d50u;
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71f638u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1049bebu;
    c->r[8] = 0x71f640u + c->r[0];
L_71f63c:;
    c->r[0] = 0x15u;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f67cu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x814u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x88cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x79cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] & 0x1fu;
    c->r[3] = c->r[3] & sh_lsl(c->r[9], c->r[5]);
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[5]);
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0x9d0u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[0]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[0]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0x9d0u; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xa74u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[0]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0xa74u; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xb18u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] & ~c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
    (void)f_subs(c, c->r[4], 0x3b8u);
    { uint32_t ea = c->r[1] + 0xb18u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_71f63c; }
    c->r[0] = 0x1319c54u;
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71f734u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1049aefu;
    c->r[8] = 0x71f73cu + c->r[0];
L_71f738:;
    c->r[0] = 0x17u;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f778u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x914u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x924u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x904u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] & 0x1fu;
    c->r[3] = c->r[3] & sh_lsl(c->r[9], c->r[5]);
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[5]);
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0xbbcu; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[0]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[0]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0xbbcu; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xbccu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[0]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0xbccu; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xbdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] & ~c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
    (void)f_subs(c, c->r[4], 0x65u);
    { uint32_t ea = c->r[1] + 0xbdcu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_71f738; }
    c->r[0] = 0x1319b58u;
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71f830u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x10499f3u;
    c->r[8] = 0x71f838u + c->r[0];
L_71f834:;
    c->r[0] = 0x16u;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f874u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x940u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x94cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x934u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] & 0x1fu;
    c->r[3] = c->r[3] & sh_lsl(c->r[9], c->r[5]);
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[5]);
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0xbecu; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[0]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[0]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0xbecu; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xc00u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[0]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0xc00u; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xc14u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] & ~c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
    (void)f_subs(c, c->r[4], 0x5eu);
    { uint32_t ea = c->r[1] + 0xc14u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_71f834; }
    c->r[0] = 0x1319a5cu;
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71f92cu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x10498f7u;
    c->r[8] = 0x71f934u + c->r[0];
L_71f930:;
    c->r[0] = 0x18u;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71f970u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x968u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x978u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x958u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[1] & 0x1fu;
    c->r[3] = c->r[3] & sh_lsl(c->r[9], c->r[5]);
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[5]);
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0xc28u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[0]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[0]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0xc28u; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xc3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[0]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[0]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0xc3cu; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] & ~c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[2] | c->r[0]; }
    (void)f_subs(c, c->r[4], 0x64u);
    { uint32_t ea = c->r[1] + 0xc50u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_71f930; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_71fa20:;
    c->r[2] = (c->r[0] >> 5);
    c->r[3] = c->r[14] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x988u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x98cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x990u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = sh_lsl(c->r[1], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[8] + (c->r[2] << 2);
    c->r[7] = c->r[7] & sh_lsl(c->r[1], c->r[0]);
    c->r[6] = c->r[6] & sh_lsl(c->r[1], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xc64u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { c->r[4] = c->r[4] & ~c->r[3]; }
    if (COND_NE) { c->r[4] = c->r[4] | c->r[3]; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = c->r[8] + (c->r[2] << 2);
    c->r[2] = c->r[8] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0xc64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0xc68u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[3]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[3]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7] + 0xc68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0xc6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[3] = c->r[7] & ~c->r[3]; }
    if (COND_NE) { c->r[3] = c->r[7] | c->r[3]; }
    (void)f_subs(c, c->r[0], 0x16u);
    { uint32_t ea = c->r[2] + 0xc6cu; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_71fa20; }
    c->r[0] = 0x0u;
    c->r[12] = 0x1u;
L_71fa9c:;
    c->r[2] = (c->r[0] >> 5);
    c->r[5] = c->r[0] & 0x1fu;
    c->r[3] = c->r[14] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x99cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x994u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0x9a4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = sh_lsl(c->r[12], c->r[5]);
    c->r[6] = c->r[6] & sh_lsl(c->r[12], c->r[5]);
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[12], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_71fae8; }
    c->r[4] = c->r[8] + (c->r[2] << 2);
    { uint32_t ea = c->r[4] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[4] + 0xc70u; ST32(ea, c->r[1]); }
    goto L_71faf8;
L_71fae8:;
    c->r[1] = c->r[8] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0xc70u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & ~c->r[3];
    { uint32_t ea = c->r[1] + 0xc70u; ST32(ea, c->r[4]); }
L_71faf8:;
    c->r[1] = c->r[8] + (c->r[2] << 2);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = c->r[7] & sh_lsl(c->r[12], c->r[5]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + 0xc80u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[3]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[3]; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[1] + 0xc80u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[8] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0xc90u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[2] = c->r[2] & ~c->r[3]; }
    if (COND_NE) { c->r[2] = c->r[2] | c->r[3]; }
    (void)f_subs(c, c->r[0], 0x36u);
    { uint32_t ea = c->r[1] + 0xc90u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_71fa9c; }
    c->r[0] = 0x1319830u;
    c->r[4] = 0x0u;
    c->r[6] = 0x1au;
    c->r[7] = 0x3u;
    c->r[11] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71fb58u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x10496cbu;
    c->r[8] = 0x71fb60u + c->r[0];
L_71fb5c:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[11];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71fb98u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_71fc54; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = 0x1ebcu;
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0x1f04u;
    c->r[3] = c->r[1] & 0x1fu;
    c->r[1] = 0x1ee0u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[1] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = sh_lsl(c->r[9], c->r[1]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->r[6] = 0x2a0cu;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[1]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[1]; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x1au;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->r[7] = 0x2a30u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x2a54u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_71fc54:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x120u);
    if (COND_NE) { goto L_71fb5c; }
    c->r[0] = 0x0u;
    c->r[12] = 0x27f0u;
    c->r[2] = 0x1u;
    c->r[14] = 0x27ecu;
    c->r[8] = 0x27e8u;
    c->r[9] = 0x3488u;
    c->r[10] = 0x348cu;
    c->r[11] = 0x3490u;
L_71fc80:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[0] >> 5);
    c->r[5] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[1] & sh_lsl(c->r[2], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = sh_lsl(c->r[2], c->r[0]);
    if (COND_EQ) { goto L_71fce8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[9]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[1];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    goto L_71fcfc;
L_71fce8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] & ~c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
L_71fcfc:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = c->r[7] & sh_lsl(c->r[2], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[10]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[1]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[1]; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + c->r[11]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    if (COND_EQ) { c->r[1] = c->r[4] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[4] | c->r[1]; }
    (void)f_subs(c, c->r[0], 0x20u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_71fc80; }
    c->r[0] = 0x1319624u;
    c->r[4] = 0x0u;
    c->r[6] = 0x47u;
    c->r[7] = 0x3u;
    c->r[11] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71fd64u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x10494bfu;
    c->r[8] = 0x71fd6cu + c->r[0];
L_71fd68:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[11];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71fda4u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_71fe60; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = 0x27f4u;
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0x27fcu;
    c->r[3] = c->r[1] & 0x1fu;
    c->r[1] = 0x27f8u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[1] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = sh_lsl(c->r[9], c->r[1]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->r[6] = 0x3494u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[1]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[1]; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x47u;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->r[7] = 0x3498u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x349cu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_71fe60:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x20u);
    if (COND_NE) { goto L_71fd68; }
    c->r[0] = 0x13194fcu;
    c->r[4] = 0x0u;
    c->r[6] = 0x48u;
    c->r[7] = 0x3u;
    c->r[11] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x71fe8cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1049397u;
    c->r[8] = 0x71fe94u + c->r[0];
L_71fe90:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[11];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x71feccu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_71ff88; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = 0x2800u;
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0x2840u;
    c->r[3] = c->r[1] & 0x1fu;
    c->r[1] = 0x2820u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[1] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = sh_lsl(c->r[9], c->r[1]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->r[6] = 0x34a0u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[1]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[1]; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x48u;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->r[7] = 0x34d8u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x3510u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_71ff88:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x100u);
    if (COND_NE) { goto L_71fe90; }
    c->r[0] = 0x0u;
    c->r[14] = 0x1u;
    c->r[8] = 0x2860u;
    c->r[9] = 0x3548u;
    c->r[10] = 0x355cu;
    c->r[11] = 0x3570u;
L_71ffac:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[0] >> 5);
    c->r[6] = c->r[0] & 0x1fu;
    c->r[4] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x2878u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x286cu;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[8]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[3] & sh_lsl(c->r[14], c->r[6]);
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[14], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = sh_lsl(c->r[14], c->r[6]);
    if (COND_EQ) { goto L_71fff8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[12] = v; }
    c->r[2] = c->r[12] | c->r[3];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    goto L_72000c;
L_71fff8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[2] + c->r[9]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[4] = v; }
    c->r[4] = c->r[4] & ~c->r[3];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
L_72000c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[7] & sh_lsl(c->r[14], c->r[6]);
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[2] + c->r[10]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[3]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[3]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + c->r[11]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[2] = c->r[2] & ~c->r[3]; }
    if (COND_NE) { c->r[2] = c->r[2] | c->r[3]; }
    (void)f_subs(c, c->r[0], 0x60u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_71ffac; }
    c->r[0] = 0x0u;
    c->r[12] = 0x288cu;
    c->r[2] = 0x1u;
    c->r[14] = 0x2888u;
    c->r[8] = 0x2884u;
    c->r[9] = 0x3584u;
    c->r[10] = 0x3588u;
    c->r[11] = 0x358cu;
L_720074:;
    (void)f_subs(c, c->r[0], 0xcu);
    if (COND_HI) { goto L_720114; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[0] >> 5);
    c->r[5] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[1] & sh_lsl(c->r[2], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = sh_lsl(c->r[2], c->r[0]);
    if (COND_EQ) { goto L_7200c4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[9]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[1];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    goto L_7200d8;
L_7200c4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] & ~c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
L_7200d8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = c->r[7] & sh_lsl(c->r[2], c->r[0]);
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[10]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[1]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[1]; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + c->r[11]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    if (COND_EQ) { c->r[1] = c->r[4] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[4] | c->r[1]; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_720114:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_NE) { goto L_720074; }
    c->r[0] = 0x0u;
    c->r[12] = 0x2898u;
    c->r[2] = 0x1u;
    c->r[14] = 0x2894u;
    c->r[8] = 0x2890u;
    c->r[9] = 0x3590u;
    c->r[10] = 0x3594u;
    c->r[11] = 0x3598u;
L_720140:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[0] >> 5);
    c->r[5] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[1] & sh_lsl(c->r[2], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = sh_lsl(c->r[2], c->r[0]);
    if (COND_EQ) { goto L_720180; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[9]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[1];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    goto L_720194;
L_720180:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] & ~c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
L_720194:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = c->r[7] & sh_lsl(c->r[2], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[10]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[1]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[1]; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + c->r[11]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    if (COND_EQ) { c->r[1] = c->r[4] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[4] | c->r[1]; }
    (void)f_subs(c, c->r[0], 0x10u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_720140; }
    c->r[0] = 0x0u;
    c->r[12] = 0x28a4u;
    c->r[2] = 0x1u;
    c->r[14] = 0x28a0u;
    c->r[8] = 0x289cu;
    c->r[9] = 0x359cu;
    c->r[10] = 0x35a0u;
    c->r[11] = 0x35a4u;
L_7201fc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[0] >> 5);
    c->r[5] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[1] & sh_lsl(c->r[2], c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = sh_lsl(c->r[2], c->r[0]);
    if (COND_EQ) { goto L_72024c; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[5] + c->r[9]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    c->r[4] = c->r[4] | c->r[1];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    goto L_720260;
L_72024c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[9]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] & ~c->r[1];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
L_720260:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = c->r[7] & sh_lsl(c->r[2], c->r[0]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[4] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[4] + c->r[10]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[1]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[1]; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + c->r[11]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    if (COND_EQ) { c->r[1] = c->r[4] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[4] | c->r[1]; }
    (void)f_subs(c, c->r[0], 0x10u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_7201fc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x28a8u;
    c->r[12] = 0x35a8u;
L_7202c0:;
    c->r[7] = (c->r[0] >> 5);
    c->r[6] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[6] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7202e8; }
    c->r[7] = c->r[3] + (c->r[7] << 2);
    c->r[6] = sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[7] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    c->r[6] = c->r[5] | c->r[6];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
L_7202e8:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_NE) { goto L_7202c0; }
    c->r[1] = 0x28acu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720320; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_720320:;
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720340; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_720340:;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720360; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_720360:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720380; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_720380:;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7203a0; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_7203a0:;
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7203c0; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_7203c0:;
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7203e0; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_7203e0:;
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720400; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_720400:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720420; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x100u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_720420:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720440; }
    c->r[1] = 0x35acu;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x200u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_720440:;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_72045c; }
    c->r[0] = 0x35acu;
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | 0x400u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_72045c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x28b0u;
    c->r[12] = 0x35b0u;
L_72046c:;
    c->r[7] = (c->r[0] >> 5);
    c->r[6] = c->r[0] & 0x1fu;
    c->r[5] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[1], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720498; }
    c->r[7] = c->r[3] + (c->r[7] << 2);
    c->r[6] = sh_lsl(c->r[1], c->r[6]);
    { uint32_t ea = c->r[7] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    c->r[6] = c->r[5] | c->r[6];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
L_720498:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x67u);
    if (COND_NE) { goto L_72046c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x28d0u;
    c->r[12] = 0x35d0u;
L_7204b4:;
    c->r[7] = (c->r[0] >> 5);
    c->r[6] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[6] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7204dc; }
    c->r[7] = c->r[3] + (c->r[7] << 2);
    c->r[6] = sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[7] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    c->r[6] = c->r[5] | c->r[6];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
L_7204dc:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x14u);
    if (COND_NE) { goto L_7204b4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x28d8u;
    c->r[12] = 0x35dcu;
L_7204f8:;
    c->r[7] = (c->r[0] >> 5);
    c->r[6] = c->r[0] & 0x1fu;
    c->r[5] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[1], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720524; }
    c->r[7] = c->r[3] + (c->r[7] << 2);
    c->r[6] = sh_lsl(c->r[1], c->r[6]);
    { uint32_t ea = c->r[7] + c->r[12]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    c->r[6] = c->r[5] | c->r[6];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
L_720524:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x32u);
    if (COND_NE) { goto L_7204f8; }
    c->r[0] = 0x28e0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720554; }
    c->r[0] = 0x3668u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_720554:;
    c->r[0] = 0x1318e14u;
    c->r[4] = 0x0u;
    c->r[6] = 0x1bu;
    c->r[7] = 0x3u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x720574u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1048cafu;
    c->r[9] = 0x72057cu + c->r[0];
L_720578:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7205b4u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_720684; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[1] & 0x1fu;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[1] = sh_lsl(c->r[8], c->r[1]);
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0xa6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xa4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0xa8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] & sh_lsl(c->r[8], c->r[5]);
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[8], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720620; }
    c->r[6] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + (c->r[6] << 2);
    { uint32_t ea = c->r[6] + 0xd98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[6] + 0xd98u; ST32(ea, c->r[7]); }
    goto L_720638;
L_720620:;
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0xd98u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & ~c->r[1];
    { uint32_t ea = c->r[7] + 0xd98u; ST32(ea, c->r[6]); }
L_720638:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] & sh_lsl(c->r[8], c->r[5]);
    c->r[6] = 0x1bu;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xdb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0xdb8u; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xdd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0] + 0xdd8u; ST32(ea, c->r[1]); }
L_720684:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x100u);
    if (COND_NE) { goto L_720578; }
    c->r[0] = 0x1318cd8u;
    c->r[4] = 0x0u;
    c->r[6] = 0x1cu;
    c->r[7] = 0x3u;
    c->r[10] = c->r[13] + 0x34u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x7206b0u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1048b73u;
    c->r[9] = 0x7206b8u + c->r[0];
L_7206b4:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7206f0u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_7207b0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[1] & 0x1fu;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[1] = sh_lsl(c->r[8], c->r[1]);
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0xaccu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xaacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0xaecu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] & sh_lsl(c->r[8], c->r[5]);
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[8], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_72074c; }
    c->r[6] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] + (c->r[6] << 2);
    { uint32_t ea = c->r[6] + 0xdf8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[1];
    { uint32_t ea = c->r[6] + 0xdf8u; ST32(ea, c->r[7]); }
    goto L_720764;
L_72074c:;
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6] + (c->r[7] << 2);
    { uint32_t ea = c->r[7] + 0xdf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & ~c->r[1];
    { uint32_t ea = c->r[7] + 0xdf8u; ST32(ea, c->r[6]); }
L_720764:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] & sh_lsl(c->r[8], c->r[5]);
    c->r[6] = 0x1cu;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0xe18u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + 0xe18u; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xe38u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0] + 0xe38u; ST32(ea, c->r[1]); }
L_7207b0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x100u);
    if (COND_NE) { goto L_7206b4; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0x0u;
    c->r[12] = 0x1u;
L_7207cc:;
    c->r[2] = 0x0u;
L_7207d0:;
    c->r[3] = c->r[14] + (c->r[14] << 1);
    c->r[4] = c->r[2] & 0x1fu;
    c->r[7] = c->r[8] + (c->r[3] << 4);
    c->r[3] = (c->r[2] >> 5);
    c->r[7] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[7] + 0xb1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0xb0cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xb2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = sh_lsl(c->r[12], c->r[4]);
    c->r[5] = c->r[5] & sh_lsl(c->r[12], c->r[4]);
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[12], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_72082c; }
    c->r[1] = (c->r[14] << 4) - c->r[14];
    c->r[1] = c->r[9] + (c->r[1] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[1] + 0xe58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[7];
    { uint32_t ea = c->r[1] + 0xe58u; ST32(ea, c->r[0]); }
    goto L_720844;
L_72082c:;
    c->r[0] = (c->r[14] << 4) - c->r[14];
    c->r[0] = c->r[9] + (c->r[0] << 2);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 0xe58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & ~c->r[7];
    { uint32_t ea = c->r[0] + 0xe58u; ST32(ea, c->r[1]); }
L_720844:;
    c->r[0] = (c->r[14] << 4) - c->r[14];
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[6] = c->r[6] & sh_lsl(c->r[12], c->r[4]);
    c->r[2] = c->r[2] + 0x1u;
    c->r[0] = c->r[9] + (c->r[0] << 2);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 0xe6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[1] & ~c->r[7]; }
    if (COND_NE) { c->r[1] = c->r[1] | c->r[7]; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + 0xe6cu; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[14] << 4) - c->r[14];
    c->r[0] = c->r[9] + (c->r[0] << 2);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 0xe80u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[1] & ~c->r[7]; }
    if (COND_NE) { c->r[1] = c->r[1] | c->r[7]; }
    (void)f_subs(c, c->r[2], 0x80u);
    { uint32_t ea = c->r[0] + 0xe80u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_7207d0; }
    c->r[14] = c->r[14] + 0x1u;
    (void)f_subs(c, c->r[14], 0x15u);
    if (COND_NE) { goto L_7207cc; }
    c->r[0] = 0x1318ad0u;
    c->r[4] = 0x0u;
    c->r[6] = 0x3u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x7208b8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x104896bu;
    c->r[9] = 0x7208c0u + c->r[0];
L_7208bc:;
    c->r[11] = c->r[4] + 0x1du;
    c->r[10] = 0x0u;
L_7208c4:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[13] + 0x34u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x720900u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_720a0c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + (c->r[4] << 1);
    c->r[12] = c->r[7];
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = (c->r[3] >> 5) & 0x7ffu;
    c->r[7] = c->r[3] & 0x1fu;
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0xefcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0xf0cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0xf1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] & 0x1fu;
    c->r[1] = sh_lsl(c->r[8], c->r[1]);
    c->r[3] = c->r[6] & sh_lsl(c->r[8], c->r[7]);
    c->r[6] = (c->r[4] << 4) - c->r[4];
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[8], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720988; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[5] + (c->r[6] << 2);
    c->r[5] = (c->r[0] >> 5) & 0x7ffu;
    c->r[6] = c->r[6] + (c->r[5] << 2);
    c->r[5] = 0x1344u;
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] | c->r[1];
    goto L_7209a4;
L_720988:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[5] + (c->r[6] << 2);
    c->r[5] = (c->r[0] >> 5) & 0x7ffu;
    c->r[6] = c->r[6] + (c->r[5] << 2);
    c->r[5] = 0x1344u;
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    c->r[5] = c->r[5] & ~c->r[1];
L_7209a4:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[2] & sh_lsl(c->r[8], c->r[7]);
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = (c->r[4] << 4) - c->r[4];
    c->r[6] = 0x3u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    c->r[3] = c->r[3] + (c->r[7] << 2);
    c->r[7] = 0x1358u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = (c->r[4] << 4) - c->r[4];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[7] = c->r[12];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x136cu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_720a0c:;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], 0x80u);
    if (COND_NE) { goto L_7208c4; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xfu);
    if (COND_NE) { goto L_7208bc; }
    c->r[0] = 0x1318950u;
    c->r[9] = 0x0u;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x720a38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10487e7u;
    c->r[0] = 0x720a44u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_720a44:;
    c->r[0] = c->r[9] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_720a50:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0xffffu;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x720aa0u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_720ba8; }
    c->r[2] = 0x1cu;
    c->r[4] = 0x0u;
    c->r[1] = c->r[2] & (c->r[0] << 2);
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = c->r[2] & (c->r[1] << 2);
    c->r[14] = (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
L_720ad4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + (c->r[9] << 3);
    c->r[2] = 0x128cu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[1] = c->r[14] + c->r[4];
    c->r[1] = (c->r[1] >> 5);
    c->r[5] = c->r[0] + (c->r[1] << 2);
    c->r[0] = 0x134cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x11ccu;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[6] & sh_lsl(c->r[11], c->r[1]);
    { uint32_t r = c->r[10] & shc_lsl(c, c->r[11], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[6] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (c->r[6] >> 5);
    c->r[5] = c->r[0] + c->r[4];
    c->r[0] = 0x360u;
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t r = c->r[9] * c->r[0] + c->r[7]; c->r[2] = r; }
    c->r[5] = sh_lsl(c->r[11], c->r[5]);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    c->r[3] = 0x16c8u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    if (COND_EQ) { c->r[3] = c->r[3] & ~c->r[5]; }
    if (COND_NE) { c->r[3] = c->r[3] | c->r[5]; }
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[12] & sh_lsl(c->r[11], c->r[1]);
    { uint32_t r = c->r[9] * c->r[0] + c->r[7]; c->r[1] = r; }
    c->r[2] = (c->r[6] >> 5);
    { uint32_t r = c->r[9] * c->r[0] + c->r[7]; c->r[0] = r; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = 0x17e8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[2] = c->r[2] & ~c->r[5]; }
    if (COND_NE) { c->r[2] = c->r[2] | c->r[5]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[6] >> 5);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = 0x1908u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[1] & ~c->r[5]; }
    if (COND_NE) { c->r[1] = c->r[1] | c->r[5]; }
    (void)f_subs(c, c->r[4], 0x4u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_720ad4; }
L_720ba8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x600u);
    if (COND_NE) { goto L_720a50; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x5u);
    if (COND_NE) { goto L_720a44; }
    c->r[0] = 0x13187a4u;
    c->r[4] = 0x0u;
    c->r[6] = 0x32u;
    c->r[7] = 0x3u;
    c->r[11] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x720be4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x104863fu;
    c->r[8] = 0x720becu + c->r[0];
L_720be8:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[11];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x720c24u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_720ce0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = 0x1d0cu;
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0x1d6cu;
    c->r[3] = c->r[1] & 0x1fu;
    c->r[1] = 0x1d3cu;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[1] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = sh_lsl(c->r[9], c->r[1]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->r[6] = 0x27a8u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[1]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[1]; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x32u;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->r[7] = 0x27ecu;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x2830u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_720ce0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x180u);
    if (COND_NE) { goto L_720be8; }
    c->r[0] = 0x131867cu;
    c->r[4] = 0x0u;
    c->r[6] = 0x33u;
    c->r[7] = 0x3u;
    c->r[11] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x720d0cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1048517u;
    c->r[8] = 0x720d14u + c->r[0];
L_720d10:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[11];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x720d4cu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_720e08; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = 0x1d9cu;
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0x1dfcu;
    c->r[3] = c->r[1] & 0x1fu;
    c->r[1] = 0x1dccu;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[1] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = sh_lsl(c->r[9], c->r[1]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->r[6] = 0x2874u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[1]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[1]; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x33u;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->r[7] = 0x28b8u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x28fcu;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_720e08:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x180u);
    if (COND_NE) { goto L_720d10; }
    c->r[0] = 0x1318554u;
    c->r[4] = 0x0u;
    c->r[6] = 0x34u;
    c->r[7] = 0x3u;
    c->r[11] = c->r[13] + 0x34u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x720e34u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x10483efu;
    c->r[8] = 0x720e3cu + c->r[0];
L_720e38:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[5] = 0xffffu;
    c->r[1] = c->r[11];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x720e74u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_720f30; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[6] = 0x1e2cu;
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0x1e8cu;
    c->r[3] = c->r[1] & 0x1fu;
    c->r[1] = 0x1e5cu;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[9], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[1] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = c->r[2] & sh_lsl(c->r[9], c->r[3]);
    c->r[1] = sh_lsl(c->r[9], c->r[1]);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->r[6] = 0x2940u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    if (COND_EQ) { c->r[6] = c->r[6] & ~c->r[1]; }
    if (COND_NE) { c->r[6] = c->r[6] | c->r[1]; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x34u;
    c->r[3] = c->r[7] + (c->r[3] << 2);
    c->r[7] = 0x2984u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    if (COND_EQ) { c->r[7] = c->r[7] & ~c->r[1]; }
    if (COND_NE) { c->r[7] = c->r[7] | c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x3u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x29c8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[2] & ~c->r[1]; }
    if (COND_NE) { c->r[1] = c->r[2] | c->r[1]; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_720f30:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x180u);
    if (COND_NE) { goto L_720e38; }
    c->r[0] = 0x1318430u;
    c->r[4] = 0x0u;
    c->r[8] = 0x3u;
    c->r[6] = c->r[13] + 0x34u;
    c->r[10] = 0xffffu;
    { uint32_t ea = 0x720f58u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x10482cbu;
    c->r[5] = 0x720f60u + c->r[0];
L_720f5c:;
    c->r[11] = c->r[4] + 0x35u;
    c->r[9] = 0x0u;
L_720f64:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x720f9cu; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_720ffc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[4] << 7);
    c->r[3] = (c->r[2] >> 5) & 0x7ffu;
    c->r[2] = c->r[2] & 0x1fu;
    c->r[1] = c->r[1] + (c->r[3] << 2);
    c->r[3] = 0x1f28u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_720ffc; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[0] & 0x1fu;
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] + (c->r[4] << 7);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = 0x2a78u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[3], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_720ffc:;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x400u);
    if (COND_NE) { goto L_720f64; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xfu);
    if (COND_NE) { goto L_720f5c; }
    c->r[0] = 0x1318350u;
    c->r[4] = 0x0u;
    c->r[8] = 0x44u;
    c->r[9] = 0x3u;
    c->r[6] = c->r[13] + 0x34u;
    c->r[11] = 0x1u;
    c->r[10] = 0xffffu;
    { uint32_t ea = 0x721038u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x10481ebu;
    c->r[7] = 0x721040u + c->r[0];
L_72103c:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x721074u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_EQ) { goto L_7210c4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->r[3] = 0x26a8u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[11], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7210c4; }
    c->r[1] = (c->r[0] >> 5) & 0x7ffu;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x31f8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[11], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_7210c4:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xa00u);
    if (COND_NE) { goto L_72103c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_7210e0:;
    c->r[2] = (c->r[0] >> 5);
    c->r[3] = c->r[0] & 0x1fu;
    c->r[7] = c->r[6] + (c->r[2] << 2);
    { uint32_t ea = c->r[7] + 0xa44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[1], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_72110c; }
    c->r[2] = c->r[5] + (c->r[2] << 2);
    c->r[3] = sh_lsl(c->r[1], c->r[3]);
    { uint32_t ea = c->r[2] + 0xd8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] | c->r[3];
    { uint32_t ea = c->r[2] + 0xd8cu; ST32(ea, c->r[3]); }
L_72110c:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x2au);
    if (COND_NE) { goto L_7210e0; }
    c->r[0] = 0x0u;
    c->r[11] = 0x1u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1318254u;
    { uint32_t ea = 0x721134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10480f4u;
    c->r[8] = 0x721140u + c->r[0];
L_72113c:;
    c->r[0] = 0x46u;
    c->r[1] = c->r[13] + 0x34u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x721178u; f_8aa9b8(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
    c->r[14] = c->r[0] + (c->r[0] << 2);
    c->r[10] = c->r[12] + (c->r[12] << 2);
L_72118c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + c->r[3];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[14] + c->r[3];
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = (c->r[0] >> 5);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = (c->r[7] >> 5);
    c->r[2] = c->r[5] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x9acu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x9c0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x9d4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[2] + 0xca0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6] & sh_lsl(c->r[11], c->r[1]);
    c->r[6] = c->r[7] & 0x1fu;
    { uint32_t r = c->r[9] & shc_lsl(c, c->r[11], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[4] & sh_lsl(c->r[11], c->r[1]);
    c->r[6] = sh_lsl(c->r[11], c->r[6]);
    if (COND_EQ) { c->r[5] = c->r[5] & ~c->r[6]; }
    if (COND_NE) { c->r[5] = c->r[5] | c->r[6]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = (c->r[7] >> 5);
    { uint32_t ea = c->r[2] + 0xca0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xcc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[2] = c->r[2] & ~c->r[6]; }
    if (COND_NE) { c->r[2] = c->r[2] | c->r[6]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0] + 0xcc8u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[7] >> 5);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xcf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[1] = c->r[1] & ~c->r[6]; }
    if (COND_NE) { c->r[1] = c->r[1] | c->r[6]; }
    (void)f_subs(c, c->r[3], 0x5u);
    { uint32_t ea = c->r[0] + 0xcf0u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_72118c; }
    c->r[0] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[0], 0x1eu);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_CC) { goto L_72113c; }
    c->r[0] = 0x110ac40u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = 0x0u;
    c->r[5] = 0x28d4u;
    c->r[6] = 0x1u;
    c->r[8] = 0x35d4u;
    c->r[7] = 0x721260u + c->r[0];
L_72125c:;
    c->r[0] = (c->r[4] >> 5);
    c->r[0] = c->r[9] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[6], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_721298; }
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x721278u; f_74b65c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_721298; }
    c->r[1] = (c->r[0] >> 5);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + c->r[8]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[2] | sh_lsl(c->r[6], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_721298:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x1bu);
    if (COND_NE) { goto L_72125c; }
    c->r[0] = 0x28e4u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7212c8; }
    c->r[0] = 0x3670u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_7212c8:;
    c->r[0] = 0x83eu;
    c->r[1] = 0x654u;
    c->r[2] = 0x72cu;
    c->r[3] = 0x0u;
    c->r[0] = c->r[10] + c->r[0];
    c->r[1] = c->r[9] + c->r[1];
    c->r[2] = c->r[10] + c->r[2];
L_7212e4:;
    c->r[6] = c->r[1] + c->r[3];
    c->r[7] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[6] - 0xe0u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[5]); }
    c->r[7] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x734u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x950u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x734u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x950u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + 0x2u;
    (void)f_subs(c, c->r[3], 0xe0u);
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[6]); }
    if (COND_NE) { goto L_7212e4; }
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
