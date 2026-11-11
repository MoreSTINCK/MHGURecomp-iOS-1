#include "cpu.h"
#include "neon_rt.h"
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_52c38c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_a261fc(Cpu *c);
void f_15efd7c(Cpu *c);
void f_530310(Cpu *restrict c) {
    FN_ENTER(0x530310u);
L_530310:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x53032cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530358; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530348u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530368; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530358:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530368:;
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x53037cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x530390u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5303a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5303b8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5303ccu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5303e0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5303f4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x24u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530420; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530410u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530430; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530420:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530430:;
    { uint32_t ea = c->r[4] + 0x42u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x530444u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x26u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530470; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530460u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530480; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530470:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530480:;
    { uint32_t ea = c->r[4] + 0x43u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x530494u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x28u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5304c0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5304b0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5304d0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5304c0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5304d0:;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5304fc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5304ecu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_53050c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5304fc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_53050c:;
    { uint32_t ea = c->r[4] + 0x51u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530538; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530528u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530548; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530538:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530548:;
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530574; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530564u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530584; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530574:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530584:;
    { uint32_t ea = c->r[4] + 0x5bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5305b0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5305a0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5305c0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5305b0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5305c0:;
    { uint32_t ea = c->r[4] + 0x60u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5305ec; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5305dcu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5305fc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5305ec:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5305fc:;
    { uint32_t ea = c->r[4] + 0x61u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530628; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530618u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530638; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530628:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530638:;
    { uint32_t ea = c->r[4] + 0x62u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530664; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530654u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530674; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530664:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530674:;
    { uint32_t ea = c->r[4] + 0x63u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5306a0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530690u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5306b0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5306a0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5306b0:;
    { uint32_t ea = c->r[4] + 0x64u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5306dc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5306ccu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5306ec; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5306dc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5306ec:;
    { uint32_t ea = c->r[4] + 0x65u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530718; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530708u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530728; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530718:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530728:;
    { uint32_t ea = c->r[4] + 0x66u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530754; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530744u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530764; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530754:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530764:;
    { uint32_t ea = c->r[4] + 0x67u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530790; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530780u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5307a0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530790:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5307a0:;
    { uint32_t ea = c->r[4] + 0x88u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5307cc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5307bcu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5307dc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5307cc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5307dc:;
    { uint32_t ea = c->r[4] + 0x89u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530808; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5307f8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530818; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530808:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530818:;
    { uint32_t ea = c->r[4] + 0x8au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530844; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530834u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530854; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530844:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530854:;
    { uint32_t ea = c->r[4] + 0x8bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530880; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530870u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530890; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530880:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530890:;
    { uint32_t ea = c->r[4] + 0x8cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5308bc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5308acu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5308cc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5308bc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5308cc:;
    { uint32_t ea = c->r[4] + 0x8du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5308f8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5308e8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530908; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5308f8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530908:;
    { uint32_t ea = c->r[4] + 0x8eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530934; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530924u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530944; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530934:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530944:;
    { uint32_t ea = c->r[4] + 0x8fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x530958u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530984; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530974u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530994; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530984:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530994:;
    { uint32_t ea = c->r[4] + 0x45u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5309a8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5309d4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5309c4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5309e4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5309d4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5309e4:;
    { uint32_t ea = c->r[4] + 0x46u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5309f8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x2eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530a24; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530a14u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530a34; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530a24:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530a34:;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530a60; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530a50u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530a70; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530a60:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530a70:;
    { uint32_t ea = c->r[4] + 0x52u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530a9c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530a8cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530aac; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530a9c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530aac:;
    { uint32_t ea = c->r[4] + 0x57u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530ad8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530ac8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530ae8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530ad8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530ae8:;
    { uint32_t ea = c->r[4] + 0x5cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530b14; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530b04u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530b24; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530b14:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530b24:;
    { uint32_t ea = c->r[4] + 0x68u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530b50; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530b40u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530b60; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530b50:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530b60:;
    { uint32_t ea = c->r[4] + 0x69u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530b8c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530b7cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530b9c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530b8c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530b9c:;
    { uint32_t ea = c->r[4] + 0x6au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530bc8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530bb8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530bd8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530bc8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530bd8:;
    { uint32_t ea = c->r[4] + 0x6bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530c04; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530bf4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530c14; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530c04:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530c14:;
    { uint32_t ea = c->r[4] + 0x6cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530c40; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530c30u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530c50; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530c40:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530c50:;
    { uint32_t ea = c->r[4] + 0x6du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530c7c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530c6cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530c8c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530c7c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530c8c:;
    { uint32_t ea = c->r[4] + 0x6eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530cb8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530ca8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530cc8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530cb8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530cc8:;
    { uint32_t ea = c->r[4] + 0x6fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530cf4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530ce4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530d04; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530cf4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530d04:;
    { uint32_t ea = c->r[4] + 0x90u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530d30; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530d20u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530d40; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530d30:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530d40:;
    { uint32_t ea = c->r[4] + 0x91u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530d6c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530d5cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530d7c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530d6c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530d7c:;
    { uint32_t ea = c->r[4] + 0x92u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530da8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530d98u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530db8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530da8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530db8:;
    { uint32_t ea = c->r[4] + 0x93u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530de4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530dd4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530df4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530de4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530df4:;
    { uint32_t ea = c->r[4] + 0x94u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530e20; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530e10u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530e30; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530e20:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530e30:;
    { uint32_t ea = c->r[4] + 0x95u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530e5c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530e4cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530e6c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530e5c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530e6c:;
    { uint32_t ea = c->r[4] + 0x96u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530e98; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530e88u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530ea8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530e98:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530ea8:;
    { uint32_t ea = c->r[4] + 0x97u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x530ebcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530ee8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530ed8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530ef8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530ee8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530ef8:;
    { uint32_t ea = c->r[4] + 0x48u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x530f0cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x32u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530f38; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530f28u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530f48; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530f38:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530f48:;
    { uint32_t ea = c->r[4] + 0x49u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x530f5cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530f88; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530f78u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530f98; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530f88:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530f98:;
    { uint32_t ea = c->r[4] + 0x4au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_530fc4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530fb4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_530fd4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_530fc4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_530fd4:;
    { uint32_t ea = c->r[4] + 0x53u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531000; }
    c->r[0] = c->r[5];
    c->r[14] = 0x530ff0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531010; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531000:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531010:;
    { uint32_t ea = c->r[4] + 0x58u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53103c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x53102cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_53104c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53103c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_53104c:;
    { uint32_t ea = c->r[4] + 0x5du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531078; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531068u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531088; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531078:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531088:;
    { uint32_t ea = c->r[4] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5310b4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5310a4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5310c4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5310b4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5310c4:;
    { uint32_t ea = c->r[4] + 0x71u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5310f0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5310e0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531100; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5310f0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531100:;
    { uint32_t ea = c->r[4] + 0x72u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53112c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x53111cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_53113c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53112c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_53113c:;
    { uint32_t ea = c->r[4] + 0x73u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531168; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531158u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531178; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531168:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531178:;
    { uint32_t ea = c->r[4] + 0x74u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5311a4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531194u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5311b4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5311a4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5311b4:;
    { uint32_t ea = c->r[4] + 0x75u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5311e0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5311d0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5311f0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5311e0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5311f0:;
    { uint32_t ea = c->r[4] + 0x76u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53121c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x53120cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_53122c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53121c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_53122c:;
    { uint32_t ea = c->r[4] + 0x77u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531258; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531248u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531268; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531258:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531268:;
    { uint32_t ea = c->r[4] + 0x98u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531294; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531284u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5312a4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531294:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5312a4:;
    { uint32_t ea = c->r[4] + 0x99u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5312d0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5312c0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5312e0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5312d0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5312e0:;
    { uint32_t ea = c->r[4] + 0x9au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53130c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5312fcu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_53131c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53130c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_53131c:;
    { uint32_t ea = c->r[4] + 0x9bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531348; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531338u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531358; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531348:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531358:;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531384; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531374u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531394; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531384:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531394:;
    { uint32_t ea = c->r[4] + 0x9du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5313c0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5313b0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5313d0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5313c0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5313d0:;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5313fc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5313ecu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_53140c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5313fc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_53140c:;
    { uint32_t ea = c->r[4] + 0x9fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x531420u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x36u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53144c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x53143cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_53145c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53144c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_53145c:;
    { uint32_t ea = c->r[4] + 0x4bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x531470u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x38u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53149c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x53148cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5314ac; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53149c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5314ac:;
    { uint32_t ea = c->r[4] + 0x4cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5314c0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x3au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5314ec; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5314dcu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5314fc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5314ec:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5314fc:;
    { uint32_t ea = c->r[4] + 0x4du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531528; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531518u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531538; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531528:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531538:;
    { uint32_t ea = c->r[4] + 0x54u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531564; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531554u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531574; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531564:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531574:;
    { uint32_t ea = c->r[4] + 0x59u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5315a0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531590u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5315b0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5315a0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5315b0:;
    { uint32_t ea = c->r[4] + 0x5eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5315dc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5315ccu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5315ec; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5315dc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5315ec:;
    { uint32_t ea = c->r[4] + 0x78u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531618; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531608u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531628; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531618:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531628:;
    { uint32_t ea = c->r[4] + 0x79u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531654; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531644u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531664; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531654:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531664:;
    { uint32_t ea = c->r[4] + 0x7au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531690; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531680u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5316a0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531690:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5316a0:;
    { uint32_t ea = c->r[4] + 0x7bu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5316cc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5316bcu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5316dc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5316cc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5316dc:;
    { uint32_t ea = c->r[4] + 0x7cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531708; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5316f8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531718; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531708:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531718:;
    { uint32_t ea = c->r[4] + 0x7du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531744; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531734u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531754; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531744:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531754:;
    { uint32_t ea = c->r[4] + 0x7eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531780; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531770u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531790; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531780:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531790:;
    { uint32_t ea = c->r[4] + 0x7fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5317bc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5317acu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5317cc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5317bc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5317cc:;
    { uint32_t ea = c->r[4] + 0xa0u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5317f8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5317e8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531808; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5317f8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531808:;
    { uint32_t ea = c->r[4] + 0xa1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531834; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531824u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531844; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531834:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531844:;
    { uint32_t ea = c->r[4] + 0xa2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531870; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531860u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531880; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531870:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531880:;
    { uint32_t ea = c->r[4] + 0xa3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5318ac; }
    c->r[0] = c->r[5];
    c->r[14] = 0x53189cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5318bc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5318ac:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5318bc:;
    { uint32_t ea = c->r[4] + 0xa4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5318e8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5318d8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5318f8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5318e8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5318f8:;
    { uint32_t ea = c->r[4] + 0xa5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531924; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531914u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531934; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531924:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531934:;
    { uint32_t ea = c->r[4] + 0xa6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531960; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531950u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531970; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531960:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531970:;
    { uint32_t ea = c->r[4] + 0xa7u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x531984u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x3cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5319b0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5319a0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5319c0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5319b0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5319c0:;
    { uint32_t ea = c->r[4] + 0x4eu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5319d4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x3eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531a00; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5319f0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531a10; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531a00:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531a10:;
    { uint32_t ea = c->r[4] + 0x4fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x531a24u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531a50; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531a40u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531a60; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531a50:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531a60:;
    { uint32_t ea = c->r[4] + 0x50u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531a8c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531a7cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531a9c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531a8c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531a9c:;
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531ac8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531ab8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531ad8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531ac8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531ad8:;
    { uint32_t ea = c->r[4] + 0x5au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531b04; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531af4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531b14; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531b04:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531b14:;
    { uint32_t ea = c->r[4] + 0x5fu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531b40; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531b30u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531b50; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531b40:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531b50:;
    { uint32_t ea = c->r[4] + 0x80u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531b7c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531b6cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531b8c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531b7c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531b8c:;
    { uint32_t ea = c->r[4] + 0x81u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531bb8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531ba8u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531bc8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531bb8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531bc8:;
    { uint32_t ea = c->r[4] + 0x82u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531bf4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531be4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531c04; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531bf4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531c04:;
    { uint32_t ea = c->r[4] + 0x83u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531c30; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531c20u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531c40; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531c30:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531c40:;
    { uint32_t ea = c->r[4] + 0x84u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531c6c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531c5cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531c7c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531c6c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531c7c:;
    { uint32_t ea = c->r[4] + 0x85u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531ca8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531c98u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531cb8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531ca8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531cb8:;
    { uint32_t ea = c->r[4] + 0x86u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531ce4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531cd4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531cf4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531ce4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531cf4:;
    { uint32_t ea = c->r[4] + 0x87u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531d20; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531d10u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531d30; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531d20:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531d30:;
    { uint32_t ea = c->r[4] + 0xa8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531d5c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531d4cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531d6c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531d5c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531d6c:;
    { uint32_t ea = c->r[4] + 0xa9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531d98; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531d88u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531da8; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531d98:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531da8:;
    { uint32_t ea = c->r[4] + 0xaau; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531dd4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531dc4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531de4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531dd4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531de4:;
    { uint32_t ea = c->r[4] + 0xabu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531e10; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531e00u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531e20; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531e10:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531e20:;
    { uint32_t ea = c->r[4] + 0xacu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531e4c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531e3cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531e5c; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531e4c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531e5c:;
    { uint32_t ea = c->r[4] + 0xadu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531e88; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531e78u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531e98; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531e88:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531e98:;
    { uint32_t ea = c->r[4] + 0xaeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531ec4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x531eb4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_531ed4; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531ec4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_531ed4:;
    { uint32_t ea = c->r[4] + 0xafu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_531edc(Cpu *restrict c) {
    FN_ENTER(0x531edcu);
L_531edc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531efcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531f24; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x531f20u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531f24:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531f4cu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531f60u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531f74u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531f88u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531f9cu; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531fb0u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x531fc4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x42u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_531fec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x531fe8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_531fec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x26u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x532014u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x43u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53203c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532038u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53203c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x532064u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53208c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532088u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53208c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x51u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5320c4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5320c0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5320c4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x56u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5320fc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5320f8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5320fc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5bu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532134; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532130u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532134:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53216c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532168u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53216c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x61u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5321a4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5321a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5321a4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x62u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5321dc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5321d8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5321dc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x63u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532214; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532210u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532214:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53224c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532248u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53224c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x65u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532284; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532280u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532284:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x66u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5322bc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5322b8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5322bc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x67u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5322f4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5322f0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5322f4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53232c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532328u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53232c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x89u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532364; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532360u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532364:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53239c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532398u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53239c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8bu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5323d4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5323d0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5323d4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53240c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532408u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53240c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532444; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532440u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532444:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53247c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532478u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53247c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5324b4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5324b0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5324b4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5324dcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x45u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532504; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532500u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532504:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x53252cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x46u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532554; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532550u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532554:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x53257cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x47u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5325a4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5325a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5325a4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x52u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5325dc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5325d8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5325dc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x57u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532614; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532610u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532614:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53264c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532648u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53264c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532684; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532680u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532684:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x69u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5326bc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5326b8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5326bc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5326f4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5326f0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5326f4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6bu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53272c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532728u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53272c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532764; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532760u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532764:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53279c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532798u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53279c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5327d4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5327d0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5327d4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x6fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53280c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532808u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53280c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532844; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532840u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532844:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x91u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53287c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532878u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53287c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x92u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5328b4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5328b0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5328b4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x93u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5328ec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5328e8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5328ec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532924; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532920u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532924:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x95u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53295c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532958u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53295c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x96u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532994; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532990u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532994:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x97u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5329cc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5329c8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5329cc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5329f4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532a1c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532a18u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532a1c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x32u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x532a44u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x49u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532a6c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532a68u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532a6c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x532a94u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532abc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532ab8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532abc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x53u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532af4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532af0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532af4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532b2c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532b28u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532b2c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532b64; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532b60u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532b64:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532b9c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532b98u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532b9c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x71u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532bd4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532bd0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532bd4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x72u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532c0c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532c08u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532c0c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x73u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532c44; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532c40u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532c44:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532c7c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532c78u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532c7c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x75u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532cb4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532cb0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532cb4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x76u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532cec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532ce8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532cec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x77u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532d24; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532d20u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532d24:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x98u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532d5c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532d58u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532d5c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x99u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532d94; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532d90u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532d94:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532dcc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532dc8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532dcc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9bu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532e04; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532e00u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532e04:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532e3c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532e38u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532e3c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532e74; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532e70u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532e74:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532eac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532ea8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532eac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532ee4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532ee0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532ee4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x36u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x532f0cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4bu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532f34; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532f30u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532f34:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x532f5cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532f84; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532f80u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532f84:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x532facu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_532fd4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x532fd0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_532fd4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53300c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533008u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53300c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x59u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533044; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533040u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533044:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53307c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533078u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53307c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5330b4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5330b0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5330b4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x79u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5330ec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5330e8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5330ec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533124; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533120u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533124:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7bu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53315c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533158u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53315c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533194; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533190u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533194:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7du; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5331cc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5331c8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5331cc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533204; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533200u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533204:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53323c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533238u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53323c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533274; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533270u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533274:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa1u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5332ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5332a8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5332ac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa2u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5332e4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5332e0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5332e4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa3u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53331c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533318u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53331c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa4u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533354; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533350u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533354:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa5u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53338c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533388u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53338c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa6u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5333c4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5333c0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5333c4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa7u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5333fc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5333f8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5333fc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x533424u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4eu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53344c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533448u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53344c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3eu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x533474u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53349c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533498u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53349c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5334c4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5334ec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5334e8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5334ec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x55u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533524; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533520u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533524:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5au; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53355c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533558u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53355c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533594; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533590u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533594:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5335cc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5335c8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5335cc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x81u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533604; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533600u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533604:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x82u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53363c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533638u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53363c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x83u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533674; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533670u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533674:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5336ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5336a8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5336ac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x85u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5336e4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5336e0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5336e4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x86u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53371c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533718u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53371c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x87u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533754; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533750u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533754:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa8u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53378c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533788u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53378c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa9u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5337c4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5337c0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5337c4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xaau; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5337fc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5337f8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5337fc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xabu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533834; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533830u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533834:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xacu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_53386c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533868u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_53386c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xadu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5338a4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5338a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5338a4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xaeu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5338dc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5338d8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5338dc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xafu; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_533914; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x533910u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_533914:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_53392c(Cpu *restrict c) {
    FN_ENTER(0x53392cu);
L_53392c:;
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
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x42u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x42u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x26u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x26u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x43u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x43u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x51u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x51u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x56u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x61u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x61u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x62u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x62u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x63u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x63u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x65u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x65u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x66u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x66u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x67u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x67u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x88u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x89u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x89u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2au; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x45u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x45u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x46u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x46u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2eu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x2eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x47u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x47u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x52u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x57u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x57u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x69u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x69u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x6fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x6fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x91u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x91u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x92u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x92u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x93u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x93u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x94u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x94u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x95u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x95u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x96u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x96u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x97u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x97u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x32u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x32u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x49u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x49u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x53u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x53u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x71u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x71u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x72u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x72u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x73u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x73u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x75u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x75u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x76u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x76u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x77u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x77u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x98u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x99u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x99u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x9fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x9fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x36u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x36u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3au; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x59u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x59u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x79u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x79u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7bu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7du; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7du; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x7fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x7fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa0u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa1u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa1u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa4u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa6u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa7u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa7u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3eu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3eu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5fu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5fu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x80u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x81u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x81u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x82u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x82u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x83u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x83u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x84u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x85u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x85u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x86u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x86u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x87u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x87u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa8u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xa9u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xa9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xaau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xaau; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xabu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xabu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xacu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xacu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xadu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xadu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xaeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xaeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xafu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xafu; ST8(ea, c->r[1]); }
    return;
}
void f_533d58(Cpu *restrict c) {
    FN_ENTER(0x533d58u);
L_533d58:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x15089c0u;
    { uint32_t ea = 0x533d68u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x533d6cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xb0u;
    c->pc = c->r[4]; c->r[14] = 0x533d84u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x533d8cu; f_22b8f0(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xa4u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xcu;
    c->r[14] = 0x533da4u; f_15efd7c(c);
    c->r[0] = 0x150897cu;
    { uint32_t ea = 0x533db0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_533dc4(Cpu *restrict c) {
    FN_ENTER(0x533dc4u);
L_533dc4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x533dd0u; f_22b908(c);
    c->r[0] = 0x150894cu;
    { uint32_t ea = 0x533ddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x533ddcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_533df4(Cpu *restrict c) {
    FN_ENTER(0x533df4u);
L_533df4:;
    __attribute__((musttail)) return f_52c38c(c);
}
void f_533df8(Cpu *restrict c) {
    FN_ENTER(0x533df8u);
L_533df8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_533dfc(Cpu *restrict c) {
    FN_ENTER(0x533dfcu);
L_533dfc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_533e00(Cpu *restrict c) {
    FN_ENTER(0x533e00u);
L_533e00:;
    c->r[0] = 0x1508914u;
    { uint32_t ea = 0x533e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_533e10(Cpu *restrict c) {
    FN_ENTER(0x533e10u);
L_533e10:;
    c->r[0] = 0x150890cu;
    { uint32_t ea = 0x533e1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_533e20(Cpu *restrict c) {
    FN_ENTER(0x533e20u);
L_533e20:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x15088d8u;
    c->r[5] = 0x0u;
    c->r[3] = 0xb0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x533e48u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x15050c4u;
    { uint32_t ea = 0x533e50u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x122a507u;
    c->r[1] = 0x533e58u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x533e5cu; f_9aedcc(c);
    c->r[0] = 0x15088b0u;
    c->r[1] = 0x122aaacu;
    c->r[2] = c->r[4];
    c->r[3] = 0xb0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x533e80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x533e84u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1508894u;
    { uint32_t ea = 0x533e94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x533e94u; f_9aedcc(c);
    c->r[1] = 0x1508894u;
    { uint32_t ea = 0x533ea0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_533ec8(Cpu *restrict c) {
    FN_ENTER(0x533ec8u);
L_533ec8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1508860u;
    { uint32_t ea = 0x533ed8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x533edcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3b8u;
    c->pc = c->r[4]; c->r[14] = 0x533ef4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x533efcu; f_22b8f0(c);
    c->r[0] = 0x1508830u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x533f0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0xcu;
    c->r[1] = 0x3a9u;
    c->r[14] = 0x533f20u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_533f30(Cpu *restrict c) {
    FN_ENTER(0x533f30u);
L_533f30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x15087f0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x533f48u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x533f4cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_533f6c(Cpu *restrict c) {
    FN_ENTER(0x533f6cu);
L_533f6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15087b8u;
    { uint32_t ea = 0x533f80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x533f80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_533f98(Cpu *restrict c) {
    FN_ENTER(0x533f98u);
L_533f98:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x533fa4u; f_22b8f0(c);
    c->r[0] = 0x1508788u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x533fb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4] + 0xcu;
    c->r[1] = 0x3a9u;
    c->r[14] = 0x533fc8u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_533fd4(Cpu *restrict c) {
    FN_ENTER(0x533fd4u);
L_533fd4:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_533fd8(Cpu *restrict c) {
    FN_ENTER(0x533fd8u);
L_533fd8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x533fe4u; f_22b908(c);
    c->r[0] = 0x1508748u;
    { uint32_t ea = 0x533ff0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x533ff0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
