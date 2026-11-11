#include "cpu.h"
#include "neon_rt.h"
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_534008(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9bb638(Cpu *c);
void f_a261fc(Cpu *c);
void f_15efd7c(Cpu *c);
void f_55235c(Cpu *restrict c) {
    FN_ENTER(0x55235cu);
L_55235c:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x29u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x29u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2eu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x42u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x42u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x56u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6au; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x83u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x83u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x88u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x92u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x92u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x97u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x97u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xabu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xabu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb0u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xbau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xbau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xbfu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xbfu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xc4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x100u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x100u; ST8(ea, c->r[2]); }
    c->r[2] = 0x11eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x15au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x196u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xc6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xc6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x101u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x101u; ST8(ea, c->r[2]); }
    c->r[2] = 0x120u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x15cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x198u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xc8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xc8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x102u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x102u; ST8(ea, c->r[2]); }
    c->r[2] = 0x122u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x15eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x19au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xcau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcau; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x103u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x103u; ST8(ea, c->r[2]); }
    c->r[2] = 0x124u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x160u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x19cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xccu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xccu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x104u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x104u; ST8(ea, c->r[2]); }
    c->r[2] = 0x126u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x162u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x19eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xceu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xceu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x105u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x105u; ST8(ea, c->r[2]); }
    c->r[2] = 0x128u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x164u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1a0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1d2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x312u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x312u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1d4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x313u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x313u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1d6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x314u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x314u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1d8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x315u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x315u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1dau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x316u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x316u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1dcu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x317u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x317u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1deu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x318u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x318u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1e0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x319u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x319u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1e2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x31au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x31au; ST8(ea, c->r[2]); }
    c->r[2] = 0x1e4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x31bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x31bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x1e6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x31cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x31cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x1e8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x31du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x31du; ST8(ea, c->r[2]); }
    c->r[2] = 0x1eau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x31eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x31eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x1ecu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x31fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x31fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x1eeu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x320u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x320u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1f0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x321u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x321u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1f2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x322u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x322u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1f4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x323u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x323u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1f6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x324u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x324u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1f8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x325u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x325u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1fau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x326u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x326u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1fcu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x327u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x327u; ST8(ea, c->r[2]); }
    c->r[2] = 0x1feu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x328u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x328u; ST8(ea, c->r[2]); }
    c->r[2] = 0x200u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x329u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x329u; ST8(ea, c->r[2]); }
    c->r[2] = 0x202u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x32au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32au; ST8(ea, c->r[2]); }
    c->r[2] = 0x204u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x32bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x206u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x32cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x208u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x32du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32du; ST8(ea, c->r[2]); }
    c->r[2] = 0x20au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x32eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x20cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x32fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x20eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x330u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x330u; ST8(ea, c->r[2]); }
    c->r[2] = 0x210u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x331u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x331u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x25u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x25u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3au; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x57u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x57u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x62u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x62u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x76u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x76u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x84u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x89u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x89u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x93u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x93u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa7u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xacu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xacu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xbbu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xbbu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc0u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x106u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x106u; ST8(ea, c->r[2]); }
    c->r[2] = 0x12au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x166u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1a2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xd2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x107u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x107u; ST8(ea, c->r[2]); }
    c->r[2] = 0x12cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x168u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1a4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xd4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x108u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x108u; ST8(ea, c->r[2]); }
    c->r[2] = 0x12eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x16au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1a6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xd6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x109u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x109u; ST8(ea, c->r[2]); }
    c->r[2] = 0x130u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x16cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1a8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xd8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10au; ST8(ea, c->r[2]); }
    c->r[2] = 0x132u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x16eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1aau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xdau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xdau; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x134u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x170u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1acu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x212u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x332u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x332u; ST8(ea, c->r[2]); }
    c->r[2] = 0x214u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x333u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x333u; ST8(ea, c->r[2]); }
    c->r[2] = 0x216u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x334u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x334u; ST8(ea, c->r[2]); }
    c->r[2] = 0x218u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x335u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x335u; ST8(ea, c->r[2]); }
    c->r[2] = 0x21au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x336u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x336u; ST8(ea, c->r[2]); }
    c->r[2] = 0x21cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x337u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x337u; ST8(ea, c->r[2]); }
    c->r[2] = 0x21eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x338u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x338u; ST8(ea, c->r[2]); }
    c->r[2] = 0x220u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x339u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x339u; ST8(ea, c->r[2]); }
    c->r[2] = 0x222u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x33au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x33au; ST8(ea, c->r[2]); }
    c->r[2] = 0x224u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x33bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x33bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x226u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x33cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x33cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x228u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x33du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x33du; ST8(ea, c->r[2]); }
    c->r[2] = 0x22au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x33eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x33eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x22cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x33fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x33fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x22eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x340u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x340u; ST8(ea, c->r[2]); }
    c->r[2] = 0x230u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x341u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x341u; ST8(ea, c->r[2]); }
    c->r[2] = 0x232u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x342u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x342u; ST8(ea, c->r[2]); }
    c->r[2] = 0x234u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x343u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x343u; ST8(ea, c->r[2]); }
    c->r[2] = 0x236u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x344u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x344u; ST8(ea, c->r[2]); }
    c->r[2] = 0x238u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x345u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x345u; ST8(ea, c->r[2]); }
    c->r[2] = 0x23au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x346u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x346u; ST8(ea, c->r[2]); }
    c->r[2] = 0x23cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x347u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x347u; ST8(ea, c->r[2]); }
    c->r[2] = 0x23eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x348u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x348u; ST8(ea, c->r[2]); }
    c->r[2] = 0x240u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x349u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x349u; ST8(ea, c->r[2]); }
    c->r[2] = 0x242u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x34au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34au; ST8(ea, c->r[2]); }
    c->r[2] = 0x244u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x34bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x246u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x34cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x248u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x34du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34du; ST8(ea, c->r[2]); }
    c->r[2] = 0x24au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x34eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x24cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x34fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x24eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x350u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x350u; ST8(ea, c->r[2]); }
    c->r[2] = 0x250u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x351u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x351u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x26u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x26u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x32u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x46u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x46u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6eu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x80u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x85u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x85u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x94u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x99u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x99u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xadu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xadu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb7u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xbcu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xbcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xc1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xdcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xdcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x136u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x172u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1aeu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xdeu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xdeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10du; ST8(ea, c->r[2]); }
    c->r[2] = 0x138u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x174u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1b0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x13au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x176u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1b2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xe2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xe2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x13cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x178u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1b4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xe4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xe4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x110u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x110u; ST8(ea, c->r[2]); }
    c->r[2] = 0x13eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x17au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1b6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xe6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xe6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x111u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x111u; ST8(ea, c->r[2]); }
    c->r[2] = 0x140u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x17cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1b8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x252u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x352u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x352u; ST8(ea, c->r[2]); }
    c->r[2] = 0x254u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x353u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x353u; ST8(ea, c->r[2]); }
    c->r[2] = 0x256u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x354u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x354u; ST8(ea, c->r[2]); }
    c->r[2] = 0x258u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x355u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x355u; ST8(ea, c->r[2]); }
    c->r[2] = 0x25au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x356u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x356u; ST8(ea, c->r[2]); }
    c->r[2] = 0x25cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x357u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x357u; ST8(ea, c->r[2]); }
    c->r[2] = 0x25eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x358u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x358u; ST8(ea, c->r[2]); }
    c->r[2] = 0x260u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x359u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x359u; ST8(ea, c->r[2]); }
    c->r[2] = 0x262u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x35au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x35au; ST8(ea, c->r[2]); }
    c->r[2] = 0x264u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x35bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x35bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x266u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x35cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x35cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x268u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x35du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x35du; ST8(ea, c->r[2]); }
    c->r[2] = 0x26au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x35eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x35eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x26cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x35fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x35fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x26eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x360u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x360u; ST8(ea, c->r[2]); }
    c->r[2] = 0x270u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x361u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x361u; ST8(ea, c->r[2]); }
    c->r[2] = 0x272u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x362u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x362u; ST8(ea, c->r[2]); }
    c->r[2] = 0x274u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x363u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x363u; ST8(ea, c->r[2]); }
    c->r[2] = 0x276u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x364u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x364u; ST8(ea, c->r[2]); }
    c->r[2] = 0x278u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x365u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x365u; ST8(ea, c->r[2]); }
    c->r[2] = 0x27au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x366u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x366u; ST8(ea, c->r[2]); }
    c->r[2] = 0x27cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x367u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x367u; ST8(ea, c->r[2]); }
    c->r[2] = 0x27eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x368u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x368u; ST8(ea, c->r[2]); }
    c->r[2] = 0x280u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x369u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x369u; ST8(ea, c->r[2]); }
    c->r[2] = 0x282u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x36au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36au; ST8(ea, c->r[2]); }
    c->r[2] = 0x284u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x36bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x286u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x36cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x288u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x36du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36du; ST8(ea, c->r[2]); }
    c->r[2] = 0x28au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x36eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x28cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x36fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x28eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x370u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x370u; ST8(ea, c->r[2]); }
    c->r[2] = 0x290u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x371u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x371u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x27u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x27u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3eu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x52u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x59u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x59u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x66u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x66u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7au; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x81u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x81u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x86u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x86u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x95u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x95u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa4u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xaeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xaeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xbdu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xbdu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xc2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xe8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x112u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x112u; ST8(ea, c->r[2]); }
    c->r[2] = 0x142u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x17eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1bau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xeau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xeau; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x113u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x113u; ST8(ea, c->r[2]); }
    c->r[2] = 0x144u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x180u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1bcu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xecu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xecu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x114u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x114u; ST8(ea, c->r[2]); }
    c->r[2] = 0x146u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x182u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1beu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xeeu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xeeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x115u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x115u; ST8(ea, c->r[2]); }
    c->r[2] = 0x148u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x184u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1c0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xf0u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x116u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x116u; ST8(ea, c->r[2]); }
    c->r[2] = 0x14au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x186u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1c2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xf2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xf2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x117u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x117u; ST8(ea, c->r[2]); }
    c->r[2] = 0x14cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x188u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1c4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x292u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x372u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x372u; ST8(ea, c->r[2]); }
    c->r[2] = 0x294u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x373u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x373u; ST8(ea, c->r[2]); }
    c->r[2] = 0x296u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x374u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x374u; ST8(ea, c->r[2]); }
    c->r[2] = 0x298u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x375u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x375u; ST8(ea, c->r[2]); }
    c->r[2] = 0x29au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x376u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x376u; ST8(ea, c->r[2]); }
    c->r[2] = 0x29cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x377u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x377u; ST8(ea, c->r[2]); }
    c->r[2] = 0x29eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x378u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x378u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x379u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x379u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x37au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x37au; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x37bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x37bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x37cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x37cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2a8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x37du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x37du; ST8(ea, c->r[2]); }
    c->r[2] = 0x2aau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x37eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x37eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2acu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x37fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x37fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2aeu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x380u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x380u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x381u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x381u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x382u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x382u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x383u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x383u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x384u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x384u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2b8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x385u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x385u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2bau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x386u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x386u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2bcu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x387u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x387u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2beu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x388u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x388u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2c0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x389u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x389u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2c2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x38au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38au; ST8(ea, c->r[2]); }
    c->r[2] = 0x2c4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x38bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2c6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x38cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2c8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x38du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38du; ST8(ea, c->r[2]); }
    c->r[2] = 0x2cau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x38eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2ccu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x38fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2ceu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x390u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x390u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2d0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x391u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x391u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x36u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4au; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x72u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x72u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x82u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x82u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x87u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x87u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x91u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x91u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x96u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x96u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa0u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xaau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xaau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xafu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xafu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb4u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xb9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xbeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xbeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xc3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xf4u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xf4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x118u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x118u; ST8(ea, c->r[2]); }
    c->r[2] = 0x14eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x18au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1c6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xf6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xf6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x119u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x119u; ST8(ea, c->r[2]); }
    c->r[2] = 0x150u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x18cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1c8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xf8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xf8u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x11au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x11au; ST8(ea, c->r[2]); }
    c->r[2] = 0x152u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x18eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1cau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xfau; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xfau; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x11bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x11bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x154u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x190u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1ccu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xfcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xfcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x11cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x156u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x192u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1ceu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0xfeu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xfeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x11du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x11du; ST8(ea, c->r[2]); }
    c->r[2] = 0x158u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x194u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x1d0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = 0x2d2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x392u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x392u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2d4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x393u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x393u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2d6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x394u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x394u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2d8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x395u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x395u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2dau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x396u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x396u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2dcu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x397u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x397u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2deu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x398u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x398u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2e0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x399u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x399u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2e2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x39au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x39au; ST8(ea, c->r[2]); }
    c->r[2] = 0x2e4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x39bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x39bu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2e6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x39cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x39cu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2e8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x39du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x39du; ST8(ea, c->r[2]); }
    c->r[2] = 0x2eau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x39eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x39eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2ecu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x39fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x39fu; ST8(ea, c->r[2]); }
    c->r[2] = 0x2eeu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a0u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a0u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2f0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a1u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2f2u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a2u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2f4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a3u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2f6u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a4u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a4u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2f8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a5u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2fau;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a6u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2fcu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a7u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a7u; ST8(ea, c->r[2]); }
    c->r[2] = 0x2feu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a8u; ST8(ea, c->r[2]); }
    c->r[2] = 0x300u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3a9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3a9u; ST8(ea, c->r[2]); }
    c->r[2] = 0x302u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3aau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3aau; ST8(ea, c->r[2]); }
    c->r[2] = 0x304u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3abu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3abu; ST8(ea, c->r[2]); }
    c->r[2] = 0x306u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3acu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3acu; ST8(ea, c->r[2]); }
    c->r[2] = 0x308u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3adu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3adu; ST8(ea, c->r[2]); }
    c->r[2] = 0x30au;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3aeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3aeu; ST8(ea, c->r[2]); }
    c->r[2] = 0x30cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3afu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3afu; ST8(ea, c->r[2]); }
    c->r[2] = 0x30eu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3b0u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3b0u; ST8(ea, c->r[2]); }
    c->r[2] = 0x310u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x3b1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3b1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3b2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3b2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3b3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3b3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3b4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3b4u; ST8(ea, c->r[1]); }
    return;
}
void f_553a38(Cpu *restrict c) {
    FN_ENTER(0x553a38u);
L_553a38:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x14e8cf8u;
    { uint32_t ea = 0x553a48u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x553a4cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x3c4u;
    c->pc = c->r[5]; c->r[14] = 0x553a64u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x553a6cu; f_22b8f0(c);
    c->r[5] = 0x0u;
    c->r[0] = c->r[4] + 0xcu;
    c->r[1] = 0x3a9u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[5]); }
    c->r[14] = 0x553a84u; f_15efd7c(c);
    c->r[0] = 0x14e8cb4u;
    { uint32_t ea = 0x553a90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x3c2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3c1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3beu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3bau; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3b6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3c3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x3bdu; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x3b9u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x3b5u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_553aec(Cpu *restrict c) {
    FN_ENTER(0x553aecu);
L_553aec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x553af8u; f_22b908(c);
    c->r[0] = 0x14e8c3cu;
    { uint32_t ea = 0x553b04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x553b04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_553b1c(Cpu *restrict c) {
    FN_ENTER(0x553b1cu);
L_553b1c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x553b30u; f_534008(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x553b58u; f_9bb638(c);
    c->r[1] = 0x120cb53u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x553b70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3b5u;
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
    c->r[14] = 0x553bd4u; f_9bb638(c);
    c->r[1] = 0x120caecu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553be8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3b6u;
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
    c->r[14] = 0x553c50u; f_9bb638(c);
    c->r[1] = 0x120ca81u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553c64u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3b7u;
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
    c->r[14] = 0x553cc8u; f_9bb638(c);
    c->r[1] = 0x120ca1au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553cdcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x3b8u;
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
    c->r[14] = 0x553d40u; f_9bb638(c);
    c->r[1] = 0x120c9b3u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553d54u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3b9u;
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
    c->r[14] = 0x553db8u; f_9bb638(c);
    c->r[1] = 0x120c94cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553dccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3bau;
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
    c->r[14] = 0x553e34u; f_9bb638(c);
    c->r[1] = 0x120c8e1u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553e48u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3bbu;
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
    c->r[14] = 0x553eacu; f_9bb638(c);
    c->r[1] = 0x120c87au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553ec0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x3bcu;
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
    c->r[14] = 0x553f24u; f_9bb638(c);
    c->r[1] = 0x120c813u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553f38u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3bdu;
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
    c->r[14] = 0x553f9cu; f_9bb638(c);
    c->r[1] = 0x120c7acu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x553fb0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3beu;
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
    c->r[14] = 0x554018u; f_9bb638(c);
    c->r[1] = 0x120c741u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x55402cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3bfu;
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
    c->r[14] = 0x554090u; f_9bb638(c);
    c->r[1] = 0x120c6dau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5540a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x3c0u;
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
    c->r[14] = 0x554108u; f_9bb638(c);
    c->r[1] = 0x120c673u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x55411cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3c1u;
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
    c->r[14] = 0x554180u; f_9bb638(c);
    c->r[1] = 0x120c60cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554194u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3c2u;
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
    c->r[14] = 0x5541fcu; f_9bb638(c);
    c->r[1] = 0x120c5a9u;
    c->r[1] = 0x554208u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x3c3u;
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
void f_554290(Cpu *restrict c) {
    FN_ENTER(0x554290u);
L_554290:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_554294(Cpu *restrict c) {
    FN_ENTER(0x554294u);
L_554294:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_554298(Cpu *restrict c) {
    FN_ENTER(0x554298u);
L_554298:;
    c->r[0] = 0x14e8494u;
    { uint32_t ea = 0x5542a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5542a8(Cpu *restrict c) {
    FN_ENTER(0x5542a8u);
L_5542a8:;
    c->r[0] = 0x14e848cu;
    { uint32_t ea = 0x5542b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5542b8(Cpu *restrict c) {
    FN_ENTER(0x5542b8u);
L_5542b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14e8458u;
    c->r[5] = 0x0u;
    c->r[3] = 0x3b8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5542e0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14e4c2cu;
    { uint32_t ea = 0x5542e8u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x120a653u;
    c->r[1] = 0x5542f0u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x5542f4u; f_9aedcc(c);
    c->r[0] = 0x14e8430u;
    c->r[1] = 0x120c395u;
    c->r[2] = c->r[4];
    c->r[3] = 0x3c4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x554318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x55431cu + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x14e8414u;
    { uint32_t ea = 0x55432cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x55432cu; f_9aedcc(c);
    c->r[1] = 0x14e8414u;
    { uint32_t ea = 0x554338u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_554360(Cpu *restrict c) {
    FN_ENTER(0x554360u);
L_554360:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14e83e0u;
    { uint32_t ea = 0x554370u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x554374u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1d4u;
    c->pc = c->r[4]; c->r[14] = 0x55438cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x14e83b8u;
    { uint32_t ea = 0x55439cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0x1ceu;
    c->r[14] = 0x5543acu; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5543bc(Cpu *restrict c) {
    FN_ENTER(0x5543bcu);
L_5543bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x14e837cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5543d4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5543d8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5543f8(Cpu *restrict c) {
    FN_ENTER(0x5543f8u);
L_5543f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14e8344u;
    { uint32_t ea = 0x55440cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x55440cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_554424(Cpu *restrict c) {
    FN_ENTER(0x554424u);
L_554424:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14e831cu;
    { uint32_t ea = 0x554438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0x1ceu;
    c->r[14] = 0x554448u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_554454(Cpu *restrict c) {
    FN_ENTER(0x554454u);
L_554454:;
    return;
}
void f_554458(Cpu *restrict c) {
    FN_ENTER(0x554458u);
L_554458:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14e82e4u;
    { uint32_t ea = 0x55446cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x55446cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_554484(Cpu *restrict c) {
    FN_ENTER(0x554484u);
L_554484:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[3] = c->r[0] + 0x18u;
    c->r[2] = 0x0u;
    c->r[14] = 0x0u;
    c->r[12] = 0x0u;
L_554498:;
    { uint32_t ea = c->r[3] - 0x12u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_EQ) { goto L_5544d8; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (uint32_t)(uint8_t)(c->r[14]);
    c->r[14] = c->r[4] + 0x1u;
    c->r[4] = c->r[14] & 0xfeu;
    (void)f_subs(c, c->r[4], 0x6au);
    if (COND_CS) { goto L_5544d0; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + 0x1u;
    c->r[4] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[4], 0x11u);
    if (COND_LS) { goto L_554498; }
L_5544d0:;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_5544d8:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[14]);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[12] = c->r[0] + 0x2au;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5544ec(Cpu *restrict c) {
    FN_ENTER(0x5544ecu);
L_5544ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[9] = c->r[1];
    c->r[4] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554524u; f_9bb638(c);
    c->r[1] = 0x120c286u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[11] = c->r[9];
    c->r[1] = 0x55453cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[11] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5545a8u; f_9bb638(c);
    c->r[1] = 0x120c20au;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5545c0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x6u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x55462cu; f_9bb638(c);
    c->r[1] = 0x120c197u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554640u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5546a4u; f_9bb638(c);
    c->r[1] = 0x120c12bu;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5546bcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x7u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554728u; f_9bb638(c);
    c->r[1] = 0x120c0b8u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x55473cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x19u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5547a0u; f_9bb638(c);
    c->r[1] = 0x120c04cu;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5547b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554824u; f_9bb638(c);
    c->r[1] = 0x120bfd9u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554838u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1au;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x55489cu; f_9bb638(c);
    c->r[1] = 0x120bf6du;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5548b4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x9u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554920u; f_9bb638(c);
    c->r[1] = 0x120befau;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554934u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1bu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554998u; f_9bb638(c);
    c->r[1] = 0x120be8eu;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5549b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0xau;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554a1cu; f_9bb638(c);
    c->r[1] = 0x120be1bu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554a30u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554a94u; f_9bb638(c);
    c->r[1] = 0x120bdafu;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554aacu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0xbu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554b18u; f_9bb638(c);
    c->r[1] = 0x120bd3cu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554b2cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1du;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554b90u; f_9bb638(c);
    c->r[1] = 0x120bcd0u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554ba8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554c14u; f_9bb638(c);
    c->r[1] = 0x120bc5du;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554c28u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1eu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554c8cu; f_9bb638(c);
    c->r[1] = 0x120bbf1u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554ca4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0xdu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554d10u; f_9bb638(c);
    c->r[1] = 0x120bb7eu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554d24u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1fu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554d88u; f_9bb638(c);
    c->r[1] = 0x120bb12u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554da0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0xeu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554e0cu; f_9bb638(c);
    c->r[1] = 0x120ba9fu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554e20u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x20u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554e84u; f_9bb638(c);
    c->r[1] = 0x120ba33u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554e9cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0xfu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554f08u; f_9bb638(c);
    c->r[1] = 0x120b9c0u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554f1cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x21u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x554f80u; f_9bb638(c);
    c->r[1] = 0x120b954u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x554f98u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555004u; f_9bb638(c);
    c->r[1] = 0x120b8e2u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555018u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x22u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x55507cu; f_9bb638(c);
    c->r[1] = 0x120b877u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555094u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x11u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555100u; f_9bb638(c);
    c->r[1] = 0x120b805u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555114u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x23u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555178u; f_9bb638(c);
    c->r[1] = 0x120b79au;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555190u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x12u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5551fcu; f_9bb638(c);
    c->r[1] = 0x120b728u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555210u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x24u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555274u; f_9bb638(c);
    c->r[1] = 0x120b6bdu;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x55528cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x13u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5552f8u; f_9bb638(c);
    c->r[1] = 0x120b64bu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x55530cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x25u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555370u; f_9bb638(c);
    c->r[1] = 0x120b5e0u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555388u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5553f4u; f_9bb638(c);
    c->r[1] = 0x120b56eu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555408u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x26u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x55546cu; f_9bb638(c);
    c->r[1] = 0x120b503u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555484u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x15u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5554f0u; f_9bb638(c);
    c->r[1] = 0x120b491u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555504u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x27u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    goto L_555544;
L_555544:;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555590u; f_9bb638(c);
    c->r[1] = 0x120b3feu;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5555a8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x16u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555614u; f_9bb638(c);
    c->r[1] = 0x120b38cu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555628u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x55568cu; f_9bb638(c);
    c->r[1] = 0x120b321u;
    c->r[10] = 0x4u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5556a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x17u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    c->r[14] = 0x555710u; f_9bb638(c);
    c->r[1] = 0x120b2afu;
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x555724u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x29u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[11] = 0x0u;
    c->r[9] = c->r[0] | 0x4u;
    c->r[0] = 0x120b264u;
    c->r[0] = 0x555780u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x120b268u;
    c->r[0] = 0x55578cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x120b269u;
    c->r[0] = 0x555798u + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_555798:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[11]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x5557c0u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + c->r[10];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x2cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_555820; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_555820:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[11]); }
    c->r[14] = 0x55584cu; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2bu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5558a8; }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
L_5558a8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[11]); }
    c->r[14] = 0x5558d4u; f_9bb638(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x20u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[10] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x2au;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[10], 0x1a8u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_555798; }
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5559c0(Cpu *restrict c) {
    FN_ENTER(0x5559c0u);
L_5559c0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5559dcu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555a08; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5559f8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555a18; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555a08:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555a18:;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555a44; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555a34u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555a54; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555a44:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555a54:;
    { uint32_t ea = c->r[5] + 0x18u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555a80; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555a70u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555a90; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555a80:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555a90:;
    { uint32_t ea = c->r[5] + 0x7u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555abc; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555aacu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555acc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555abc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555acc:;
    { uint32_t ea = c->r[5] + 0x19u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555af8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555ae8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555b08; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555af8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555b08:;
    { uint32_t ea = c->r[5] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555b34; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555b24u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555b44; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555b34:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555b44:;
    { uint32_t ea = c->r[5] + 0x1au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555b70; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555b60u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555b80; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555b70:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555b80:;
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555bac; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555b9cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555bbc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555bac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555bbc:;
    { uint32_t ea = c->r[5] + 0x1bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555be8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555bd8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555bf8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555be8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555bf8:;
    { uint32_t ea = c->r[5] + 0xau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555c24; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555c14u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555c34; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555c24:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555c34:;
    { uint32_t ea = c->r[5] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555c60; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555c50u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555c70; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555c60:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555c70:;
    { uint32_t ea = c->r[5] + 0xbu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555c9c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555c8cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555cac; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555c9c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555cac:;
    { uint32_t ea = c->r[5] + 0x1du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555cd8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555cc8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555ce8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555cd8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555ce8:;
    { uint32_t ea = c->r[5] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555d14; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555d04u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555d24; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555d14:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555d24:;
    { uint32_t ea = c->r[5] + 0x1eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555d50; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555d40u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555d60; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555d50:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555d60:;
    { uint32_t ea = c->r[5] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555d8c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555d7cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555d9c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555d8c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555d9c:;
    { uint32_t ea = c->r[5] + 0x1fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555dc8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555db8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555dd8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555dc8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555dd8:;
    { uint32_t ea = c->r[5] + 0xeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555e04; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555df4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555e14; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555e04:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555e14:;
    { uint32_t ea = c->r[5] + 0x20u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555e40; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555e30u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555e50; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555e40:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555e50:;
    { uint32_t ea = c->r[5] + 0xfu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555e7c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555e6cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555e8c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555e7c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555e8c:;
    { uint32_t ea = c->r[5] + 0x21u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555eb8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555ea8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555ec8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555eb8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555ec8:;
    { uint32_t ea = c->r[5] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555ef4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555ee4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555f04; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555ef4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555f04:;
    { uint32_t ea = c->r[5] + 0x22u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555f30; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555f20u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555f40; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555f30:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555f40:;
    { uint32_t ea = c->r[5] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555f6c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555f5cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555f7c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555f6c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555f7c:;
    { uint32_t ea = c->r[5] + 0x23u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555fa8; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555f98u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555fb8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555fa8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555fb8:;
    { uint32_t ea = c->r[5] + 0x12u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_555fe4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x555fd4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_555ff4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_555fe4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_555ff4:;
    { uint32_t ea = c->r[5] + 0x24u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556020; }
    c->r[0] = c->r[4];
    c->r[14] = 0x556010u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_556030; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556020:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_556030:;
    { uint32_t ea = c->r[5] + 0x13u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_55605c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x55604cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_55606c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_55605c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_55606c:;
    { uint32_t ea = c->r[5] + 0x25u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556098; }
    c->r[0] = c->r[4];
    c->r[14] = 0x556088u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5560a8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556098:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5560a8:;
    { uint32_t ea = c->r[5] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5560d4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5560c4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5560e4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5560d4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5560e4:;
    { uint32_t ea = c->r[5] + 0x26u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556110; }
    c->r[0] = c->r[4];
    c->r[14] = 0x556100u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_556120; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556110:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_556120:;
    { uint32_t ea = c->r[5] + 0x15u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_55614c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x55613cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_55615c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_55614c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_55615c:;
    { uint32_t ea = c->r[5] + 0x27u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556188; }
    c->r[0] = c->r[4];
    c->r[14] = 0x556178u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_556198; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556188:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_556198:;
    { uint32_t ea = c->r[5] + 0x16u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5561c4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5561b4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5561d4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5561c4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5561d4:;
    { uint32_t ea = c->r[5] + 0x28u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556200; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5561f0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_556210; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556200:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_556210:;
    { uint32_t ea = c->r[5] + 0x17u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556238; }
    c->r[0] = c->r[4];
    c->r[14] = 0x55622cu; f_a261fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_55624c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556238:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    goto L_556250;
L_55624c:;
    c->r[1] = 0x0u;
L_556250:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0x29u; ST8(ea, c->r[1]); }
L_556258:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556280; }
    c->r[0] = c->r[4];
    c->r[14] = 0x556270u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_556290; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556280:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_556290:;
    c->r[7] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[7] + 0x2au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5562c0; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5562b0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5562d0; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5562c0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5562d0:;
    { uint32_t ea = c->r[7] + 0x2bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5562e4u; rt_dispatch(c);
    c->r[6] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[7] + 0x2cu; ST16(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], 0x1a8u);
    if (COND_NE) { goto L_556258; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5562f8(Cpu *restrict c) {
    FN_ENTER(0x5562f8u);
L_5562f8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[1];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x556318u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556340; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55633cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556340:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556378; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556374u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556378:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5563b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5563acu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5563b0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x19u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5563e8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5563e4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5563e8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556420; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55641cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556420:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556458; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556454u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556458:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x9u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556490; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55648cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556490:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1bu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5564c8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5564c4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5564c8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xau; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556500; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5564fcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556500:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556538; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556534u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556538:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xbu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556570; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55656cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556570:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5565a8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5565a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5565a8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5565e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5565dcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5565e0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556618; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556614u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556618:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xdu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556650; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55664cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556650:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556688; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556684u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556688:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xeu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5566c0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5566bcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5566c0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5566f8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5566f4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5566f8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xfu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556730; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55672cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556730:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x21u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556768; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556764u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556768:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5567a0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55679cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5567a0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x22u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5567d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5567d4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5567d8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x11u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556810; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55680cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556810:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x23u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556848; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556844u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556848:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x12u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556880; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55687cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556880:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5568b8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5568b4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5568b8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x13u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5568f0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5568ecu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5568f0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x25u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556928; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556924u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556928:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556960; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x55695cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556960:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x26u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556998; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556994u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556998:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x15u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5569d0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5569ccu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5569d0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x27u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556a08; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556a04u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556a08:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x16u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556a40; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556a3cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556a40:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556a78; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556a74u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556a78:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x17u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556ab0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556aacu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556ab0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x29u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556ae8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556ae4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556ae8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    goto L_556b0c;
L_556b04:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x4u;
L_556b0c:;
    c->r[7] = c->r[8] + c->r[6];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2au; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556b34; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556b30u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556b34:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2bu; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_556b6c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x556b68u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_556b6c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x556b94u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], 0x1a4u);
    if (COND_NE) { goto L_556b04; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_556ba0(Cpu *restrict c) {
    FN_ENTER(0x556ba0u);
L_556ba0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14e5ba8u;
    { uint32_t ea = 0x556bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x556bb4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x18cu;
    c->pc = c->r[4]; c->r[14] = 0x556bccu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x556bd4u; f_22b8f0(c);
    c->r[0] = 0x14e5b7cu;
    { uint32_t ea = 0x556be0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0x186u;
    c->r[14] = 0x556bf0u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_556c00(Cpu *restrict c) {
    FN_ENTER(0x556c00u);
L_556c00:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_556c04(Cpu *restrict c) {
    FN_ENTER(0x556c04u);
L_556c04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x556c10u; f_22b908(c);
    c->r[0] = 0x14e5b3cu;
    { uint32_t ea = 0x556c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x556c1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
