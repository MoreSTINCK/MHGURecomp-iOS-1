#include "cpu.h"
#include "neon_rt.h"
void f_2619898(Cpu *restrict c) {
    FN_ENTER(0x2619898u);
L_2619898:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_26198c0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
L_26198c0:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_26198c8(Cpu *restrict c) {
    FN_ENTER(0x26198c8u);
L_26198c8:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - 0x8u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_26198f0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
L_26198f0:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_26198f8(Cpu *restrict c) {
    FN_ENTER(0x26198f8u);
L_26198f8:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8eu; ST16(ea, c->r[1]); }
    return;
}
