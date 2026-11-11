#include "cpu.h"
#include "neon_rt.h"
void f_2727100(Cpu *c);
void f_272d3f0(Cpu *c);
void f_272d770(Cpu *c);
void f_272e400(Cpu *c);
void f_272ed50(Cpu *c);
void f_27272f0(Cpu *restrict c) {
    FN_ENTER(0x27272f0u);
L_27272f0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[4] = c->r[0];
    c->r[11] = c->r[2];
    c->r[8] = c->r[1];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9fu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[14] = 0x2727318u; f_2727100(c);
    c->r[0] = c->r[8] - 0x5u;
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2du);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_27273ec; }
    c->r[1] = 0x48be8cu;
    (void)f_subs(c, c->r[8], 0x5u);
    c->r[1] = 0x2727344u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x488340u;
    c->r[1] = 0x2727350u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x4881c4u;
    c->r[1] = 0x272735cu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_27273ec; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9du; ST8(ea, c->r[1]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
L_2727378:;
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_27277c8; }
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_EQ) { goto L_2727650; }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_27278a4; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[10] << 1);
    c->r[1] = c->r[1] | (c->r[2] << 2);
    c->r[1] = c->r[1] | c->r[9];
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_27278a4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27273b4u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x27273d8u: goto L_27273d8; case 0x2727488u: goto L_2727488; case 0x2727698u: goto L_2727698; case 0x27276b0u: goto L_27276b0; case 0x272770cu: goto L_272770c; case 0x2727724u: goto L_2727724; case 0x2727810u: goto L_2727810; case 0x2727838u: goto L_2727838; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_27273d8:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x800au;
    goto L_27276fc;
L_27273ec:;
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_2727498; }
    c->r[1] = c->r[8] - 0x11u;
    (void)f_subs(c, c->r[1], 0x1du);
    if (COND_HI) { goto L_2727378; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x272740cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2727378u: goto L_2727378; case 0x2727488u: goto L_2727488; case 0x27276a4u: goto L_27276a4; case 0x27276b0u: goto L_27276b0; case 0x27276bcu: goto L_27276bc; case 0x27276e8u: goto L_27276e8; case 0x272782cu: goto L_272782c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2727488:;
    c->r[1] = 0x1u;
    c->r[2] = 0x4000u;
    c->r[3] = 0x4001u;
    goto L_2727888;
L_2727498:;
    { uint32_t ea = c->r[4] + 0x9fu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_272757c; }
    c->r[2] = c->r[8] - 0x6u;
    (void)f_subs(c, c->r[2], 0x28u);
    if (COND_HI) { goto L_27277c8; }
    c->r[2] = (c->r[2] << 2);
    c->r[7] = 0x27274bcu + 0x10u;
    c->r[1] = 0x4000u;
    c->r[3] = 0x4001u;
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x4001u;
    c->pc = c->r[6] + c->r[7]; switch (c->pc) { case 0x2727488u: goto L_2727488; case 0x2727570u: goto L_2727570; case 0x27276a4u: goto L_27276a4; case 0x27276b0u: goto L_27276b0; case 0x27276bcu: goto L_27276bc; case 0x27276d4u: goto L_27276d4; case 0x272773cu: goto L_272773c; case 0x2727748u: goto L_2727748; case 0x2727754u: goto L_2727754; case 0x272775cu: goto L_272775c; case 0x2727768u: goto L_2727768; case 0x2727770u: goto L_2727770; case 0x272777cu: goto L_272777c; case 0x2727788u: goto L_2727788; case 0x2727794u: goto L_2727794; case 0x27277b8u: goto L_27277b8; case 0x27277c8u: goto L_27277c8; case 0x272782cu: goto L_272782c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2727570:;
    c->r[1] = 0x4001u;
    c->r[2] = 0x4000u;
    goto L_27277b8;
L_272757c:;
    c->r[7] = c->r[8] - 0x6u;
    (void)f_subs(c, c->r[7], 0x28u);
    if (COND_HI) { goto L_27277c8; }
    c->r[7] = (c->r[7] << 2);
    c->r[6] = 0x2727594u + 0x10u;
    c->r[3] = 0x4302u;
    c->r[1] = 0x4001u;
    c->r[2] = 0x4000u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[6]; switch (c->pc) { case 0x2727488u: goto L_2727488; case 0x2727648u: goto L_2727648; case 0x27276a4u: goto L_27276a4; case 0x27276b0u: goto L_27276b0; case 0x27276bcu: goto L_27276bc; case 0x27276d4u: goto L_27276d4; case 0x27277a0u: goto L_27277a0; case 0x27277acu: goto L_27277ac; case 0x27277b4u: goto L_27277b4; case 0x27277b8u: goto L_27277b8; case 0x27277c8u: goto L_27277c8; case 0x272782cu: goto L_272782c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2727648:;
    c->r[1] = 0x4000u;
    goto L_27277a4;
L_2727650:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[10] << 1);
    c->r[1] = c->r[1] | (c->r[2] << 2);
    c->r[1] = c->r[1] | c->r[9];
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_27278a4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x2727674u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2727488u: goto L_2727488; case 0x2727698u: goto L_2727698; case 0x27276a4u: goto L_27276a4; case 0x2727810u: goto L_2727810; case 0x2727838u: goto L_2727838; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2727698:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    goto L_272781c;
L_27276a4:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    goto L_27276f4;
L_27276b0:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    goto L_27276c8;
L_27276bc:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
L_27276c8:;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x800bu;
    goto L_27276fc;
L_27276d4:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9du; ST8(ea, c->r[1]); }
    c->r[1] = 0x4001u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[3]); }
L_27276e8:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
L_27276f4:;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x8006u;
L_27276fc:;
    c->r[2] = 0x4001u;
L_2727700:;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[2]); }
    goto L_27278a0;
L_272770c:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x8007u;
    goto L_27276fc;
L_2727724:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x8008u;
    goto L_27276fc;
L_272773c:;
    c->r[1] = 0x4303u;
    c->r[2] = 0x4001u;
    goto L_27277b8;
L_2727748:;
    c->r[1] = 0x4001u;
    c->r[2] = 0x4305u;
    goto L_27277b8;
L_2727754:;
    c->r[2] = 0x4304u;
    goto L_27277b8;
L_272775c:;
    c->r[1] = 0x4302u;
    c->r[2] = 0x4000u;
    goto L_27277b8;
L_2727768:;
    c->r[2] = 0x4305u;
    goto L_27277b8;
L_2727770:;
    c->r[1] = 0x4303u;
    c->r[2] = 0x4000u;
    goto L_27277b8;
L_272777c:;
    c->r[1] = 0x4303u;
    c->r[2] = 0x4304u;
    goto L_27277b8;
L_2727788:;
    c->r[1] = 0x4302u;
    c->r[2] = 0x4305u;
    goto L_27277b8;
L_2727794:;
    c->r[1] = 0x4303u;
    c->r[2] = 0x4305u;
    goto L_27277b8;
L_27277a0:;
    c->r[1] = 0x4303u;
L_27277a4:;
    c->r[2] = 0x4302u;
    goto L_27277b8;
L_27277ac:;
    c->r[1] = 0x4302u;
    goto L_27277b8;
L_27277b4:;
    c->r[1] = 0x4303u;
L_27277b8:;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9du; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[2]); }
L_27277c8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[10] << 1);
    c->r[1] = c->r[1] | (c->r[2] << 2);
    c->r[1] = c->r[1] | c->r[9];
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_HI) { goto L_27278a4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x27277ecu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2727488u: goto L_2727488; case 0x2727810u: goto L_2727810; case 0x272782cu: goto L_272782c; case 0x2727838u: goto L_2727838; case 0x2727844u: goto L_2727844; case 0x2727850u: goto L_2727850; case 0x272785cu: goto L_272785c; case 0x272787cu: goto L_272787c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2727810:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
L_272781c:;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x8006u;
    c->r[2] = 0x4000u;
    goto L_2727700;
L_272782c:;
    c->r[1] = 0x1u;
    c->r[2] = 0x4001u;
    goto L_2727864;
L_2727838:;
    c->r[1] = 0x1u;
    c->r[2] = 0x4001u;
    goto L_2727884;
L_2727844:;
    c->r[1] = 0x1u;
    c->r[2] = 0x4000u;
    goto L_2727864;
L_2727850:;
    c->r[1] = 0x1u;
    c->r[2] = 0x4305u;
    goto L_2727884;
L_272785c:;
    c->r[1] = 0x1u;
    c->r[2] = 0x4305u;
L_2727864:;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x8006u;
    c->r[3] = 0x4303u;
    goto L_2727898;
L_272787c:;
    c->r[1] = 0x1u;
    c->r[2] = 0x4304u;
L_2727884:;
    c->r[3] = 0x4000u;
L_2727888:;
    { uint32_t ea = c->r[4] + 0x9cu; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x9eu; ST8(ea, c->r[1]); }
    c->r[1] = 0x8006u;
L_2727898:;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[3]); }
L_27278a0:;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[2]); }
L_27278a4:;
    { uint32_t ea = c->r[4] + 0x9eu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x9cu; ST16(ea, c->r[1]); } }
    (void)f_subs(c, c->r[0], 0x2du);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    if (COND_HI) { goto L_2729d7c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x27278d0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x272798cu: goto L_272798c; case 0x27279fcu: goto L_27279fc; case 0x2727a48u: goto L_2727a48; case 0x2727aecu: goto L_2727aec; case 0x2727b80u: goto L_2727b80; case 0x2727bd8u: goto L_2727bd8; case 0x2727d80u: goto L_2727d80; case 0x2727f98u: goto L_2727f98; case 0x2728040u: goto L_2728040; case 0x27280b4u: goto L_27280b4; case 0x272832cu: goto L_272832c; case 0x27285dcu: goto L_27285dc; case 0x27288e0u: goto L_27288e0; case 0x2729140u: goto L_2729140; case 0x2729210u: goto L_2729210; case 0x2729304u: goto L_2729304; case 0x2729390u: goto L_2729390; case 0x272944cu: goto L_272944c; case 0x2729500u: goto L_2729500; case 0x27296a0u: goto L_27296a0; case 0x2729c04u: goto L_2729c04; case 0x2729d7cu: goto L_2729d7c; case 0x2729e70u: goto L_2729e70; case 0x272a070u: goto L_272a070; case 0x272a1e0u: goto L_272a1e0; case 0x272a288u: goto L_272a288; case 0x272a338u: goto L_272a338; case 0x272a3e0u: goto L_272a3e0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_272798c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x27279acu + 0x2f4u;
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0x4u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[7]); }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_272bb9c; }
    goto L_272bdc0;
L_27279fc:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.d[18] = 0x1f0000001full; c->v.d[19] = 0x1f0000001full;
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2727a30u + 0x280u;
    if (COND_EQ) { c->r[14] = 0x1u; }
    { uint16_t t = (uint16_t)c->r[14]; c->v.h[64] = t; c->v.h[65] = t; c->v.h[66] = t; c->v.h[67] = t; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2727a48u + 0x278u;
    goto L_2727a90;
L_2727a48:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = 0x0u;
    c->v.d[18] = 0x1f0000001full; c->v.d[19] = 0x1f0000001full;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2727a7cu + 0x254u;
    if (COND_EQ) { c->r[14] = 0x1u; }
    { uint16_t t = (uint16_t)c->r[14]; c->v.h[64] = t; c->v.h[65] = t; c->v.h[66] = t; c->v.h[67] = t; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2727a94u + 0x24cu;
L_2727a90:;
    { uint32_t t0 = (uint32_t)((int32_t)(uint16_t)c->v.h[64] << 0); uint32_t t1 = (uint32_t)((int32_t)(uint16_t)c->v.h[65] << 0); uint32_t t2 = (uint32_t)((int32_t)(uint16_t)c->v.h[66] << 0); uint32_t t3 = (uint32_t)((int32_t)(uint16_t)c->v.h[67] << 0); c->v.s[32] = t0; c->v.s[33] = t1; c->v.s[34] = t2; c->v.s[35] = t3; }
    { uint32_t t0 = (uint32_t)(-(int32_t)c->v.s[36]); uint32_t t1 = (uint32_t)(-(int32_t)c->v.s[37]); uint32_t t2 = (uint32_t)(-(int32_t)c->v.s[38]); uint32_t t3 = (uint32_t)(-(int32_t)c->v.s[39]); c->v.s[36] = t0; c->v.s[37] = t1; c->v.s[38] = t2; c->v.s[39] = t3; }
    { uint32_t t0 = (uint32_t)((uint64_t)c->v.s[32] << 31); uint32_t t1 = (uint32_t)((uint64_t)c->v.s[33] << 31); uint32_t t2 = (uint32_t)((uint64_t)c->v.s[34] << 31); uint32_t t3 = (uint32_t)((uint64_t)c->v.s[35] << 31); c->v.s[32] = t0; c->v.s[33] = t1; c->v.s[34] = t2; c->v.s[35] = t3; }
    { uint32_t ea = c->r[1]; c->v.d[20] = LD64(ea + 0u); c->v.d[21] = LD64(ea + 8u); }
    { uint32_t ea = c->r[2]; c->v.d[22] = LD64(ea + 0u); c->v.d[23] = LD64(ea + 8u); }
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t t0 = (uint32_t)(((int8_t)c->v.s[36]) >= 0 ? (((int8_t)c->v.s[36]) >= 32 ? 0 : (uint64_t)c->v.s[32] << ((int8_t)c->v.s[36])) : ((int32_t)c->v.s[32] >> (-((int8_t)c->v.s[36]) >= 32 ? 31 : -((int8_t)c->v.s[36])))); uint32_t t1 = (uint32_t)(((int8_t)c->v.s[37]) >= 0 ? (((int8_t)c->v.s[37]) >= 32 ? 0 : (uint64_t)c->v.s[33] << ((int8_t)c->v.s[37])) : ((int32_t)c->v.s[33] >> (-((int8_t)c->v.s[37]) >= 32 ? 31 : -((int8_t)c->v.s[37])))); uint32_t t2 = (uint32_t)(((int8_t)c->v.s[38]) >= 0 ? (((int8_t)c->v.s[38]) >= 32 ? 0 : (uint64_t)c->v.s[34] << ((int8_t)c->v.s[38])) : ((int32_t)c->v.s[34] >> (-((int8_t)c->v.s[38]) >= 32 ? 31 : -((int8_t)c->v.s[38])))); uint32_t t3 = (uint32_t)(((int8_t)c->v.s[39]) >= 0 ? (((int8_t)c->v.s[39]) >= 32 ? 0 : (uint64_t)c->v.s[35] << ((int8_t)c->v.s[39])) : ((int32_t)c->v.s[35] >> (-((int8_t)c->v.s[39]) >= 32 ? 31 : -((int8_t)c->v.s[39])))); c->v.s[32] = t0; c->v.s[33] = t1; c->v.s[34] = t2; c->v.s[35] = t3; }
    { uint64_t t0 = (c->v.d[16] & c->v.d[22]) | (~c->v.d[16] & c->v.d[20]); uint64_t t1 = (c->v.d[17] & c->v.d[23]) | (~c->v.d[17] & c->v.d[21]); c->v.d[16] = t0; c->v.d[17] = t1; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
L_2727adc:;
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[12]); }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_272bb9c; }
    goto L_272bdc0;
L_2727aec:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x0u;
    c->v.d[18] = 0x1f0000001full; c->v.d[19] = 0x1f0000001full;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = 0x0u;
    { uint32_t t0 = (uint32_t)(-(int32_t)c->v.s[36]); uint32_t t1 = (uint32_t)(-(int32_t)c->v.s[37]); uint32_t t2 = (uint32_t)(-(int32_t)c->v.s[38]); uint32_t t3 = (uint32_t)(-(int32_t)c->v.s[39]); c->v.s[36] = t0; c->v.s[37] = t1; c->v.s[38] = t2; c->v.s[39] = t3; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x2727b24u + 0x1acu;
    if (COND_EQ) { c->r[14] = 0x1u; }
    { uint32_t ea = c->r[10]; c->v.d[22] = LD64(ea + 0u); c->v.d[23] = LD64(ea + 8u); }
    { uint16_t t = (uint16_t)c->r[14]; c->v.h[64] = t; c->v.h[65] = t; c->v.h[66] = t; c->v.h[67] = t; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2727b40u + 0x1a0u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1]; c->v.d[20] = LD64(ea + 0u); c->v.d[21] = LD64(ea + 8u); }
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[5] + 0x4u;
    c->r[3] = c->r[5] + 0x14u;
    { uint32_t t0 = (uint32_t)((int32_t)(uint16_t)c->v.h[64] << 0); uint32_t t1 = (uint32_t)((int32_t)(uint16_t)c->v.h[65] << 0); uint32_t t2 = (uint32_t)((int32_t)(uint16_t)c->v.h[66] << 0); uint32_t t3 = (uint32_t)((int32_t)(uint16_t)c->v.h[67] << 0); c->v.s[32] = t0; c->v.s[33] = t1; c->v.s[34] = t2; c->v.s[35] = t3; }
    { uint32_t t0 = (uint32_t)((uint64_t)c->v.s[32] << 31); uint32_t t1 = (uint32_t)((uint64_t)c->v.s[33] << 31); uint32_t t2 = (uint32_t)((uint64_t)c->v.s[34] << 31); uint32_t t3 = (uint32_t)((uint64_t)c->v.s[35] << 31); c->v.s[32] = t0; c->v.s[33] = t1; c->v.s[34] = t2; c->v.s[35] = t3; }
    { uint32_t t0 = (uint32_t)(((int8_t)c->v.s[36]) >= 0 ? (((int8_t)c->v.s[36]) >= 32 ? 0 : (uint64_t)c->v.s[32] << ((int8_t)c->v.s[36])) : ((int32_t)c->v.s[32] >> (-((int8_t)c->v.s[36]) >= 32 ? 31 : -((int8_t)c->v.s[36])))); uint32_t t1 = (uint32_t)(((int8_t)c->v.s[37]) >= 0 ? (((int8_t)c->v.s[37]) >= 32 ? 0 : (uint64_t)c->v.s[33] << ((int8_t)c->v.s[37])) : ((int32_t)c->v.s[33] >> (-((int8_t)c->v.s[37]) >= 32 ? 31 : -((int8_t)c->v.s[37])))); uint32_t t2 = (uint32_t)(((int8_t)c->v.s[38]) >= 0 ? (((int8_t)c->v.s[38]) >= 32 ? 0 : (uint64_t)c->v.s[34] << ((int8_t)c->v.s[38])) : ((int32_t)c->v.s[34] >> (-((int8_t)c->v.s[38]) >= 32 ? 31 : -((int8_t)c->v.s[38])))); uint32_t t3 = (uint32_t)(((int8_t)c->v.s[39]) >= 0 ? (((int8_t)c->v.s[39]) >= 32 ? 0 : (uint64_t)c->v.s[35] << ((int8_t)c->v.s[39])) : ((int32_t)c->v.s[35] >> (-((int8_t)c->v.s[39]) >= 32 ? 31 : -((int8_t)c->v.s[39])))); c->v.s[32] = t0; c->v.s[33] = t1; c->v.s[34] = t2; c->v.s[35] = t3; }
    { uint64_t t0 = (c->v.d[16] & c->v.d[22]) | (~c->v.d[16] & c->v.d[20]); uint64_t t1 = (c->v.d[17] & c->v.d[23]) | (~c->v.d[17] & c->v.d[21]); c->v.d[16] = t0; c->v.d[17] = t1; }
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[2]); }
    goto L_2727adc;
L_2727b80:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    if (COND_EQ) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    goto L_2729358;
L_2727bd8:;
    c->r[12] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[1] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[7] << 4); ST32(ea, c->r[6]); c->r[1] = ea; }
    c->r[6] = c->r[1] + 0x4u;
    if (COND_EQ) { goto L_272af9c; }
    c->r[1] = 0x2727c14u + 0xccu;
    c->r[0] = c->r[0] + (c->r[7] << 4);
    c->r[10] = 0x3u;
    c->r[14] = 0x0u;
    c->r[7] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[1] = 0x2727c58u + 0x98u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = c->r[5] + 0x2cu;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[7]); }
    goto L_272b1a4;
L_2727d80:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2727da8; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f000000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_2727da8:;
    c->r[12] = 0x0u;
    c->r[10] = 0x4u;
    c->r[11] = 0x1u;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2727dd8u - 0xd8u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[2] = c->r[7] + 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x17u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x2727e28u - 0x118u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x3u;
    c->r[1] = c->r[7] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0x2727e7cu - 0x15cu;
    { uint32_t ea = c->r[14]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = 0x18u;
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2727ed4u - 0x1a4u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    c->r[0] = 0x9u;
    c->r[1] = c->r[3] + 0x20u;
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[11] = 0x2727f28u - 0x1e8u;
    { uint32_t ea = c->r[11]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[1] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[7] + (c->r[1] << 4); ST32(ea, c->r[6]); c->r[7] = ea; }
    c->r[1] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[1] = c->r[7] + 0x14u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[7] << 4); ST32(ea, c->r[1]); c->r[6] = ea; }
    c->r[1] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[11] = v; }
    goto L_2729d74;
L_2727f98:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[3] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[3] + (c->r[1] << 4); ST32(ea, c->r[6]); c->r[3] = ea; }
    c->r[6] = c->r[3] + 0x4u;
    if (COND_EQ) { goto L_272b02c; }
    c->r[3] = 0x2727fd8u - 0x288u;
    goto L_272807c;
L_2728040:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[3] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[3] + (c->r[1] << 4); ST32(ea, c->r[6]); c->r[3] = ea; }
    c->r[6] = c->r[3] + 0x4u;
    if (COND_EQ) { goto L_272b0c8; }
    c->r[3] = 0x2728080u - 0x320u;
L_272807c:;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->r[1] = 0x14u;
    c->r[3] = 0x4u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[0] + 0x2cu;
    goto L_272b1a4;
L_27280b4:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[5] = c->r[6] + 0x1u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[1] + (c->r[6] << 4); ST32(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = 0x12u;
    c->r[5] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_272b2c0; }
    c->r[0] = 0x18u;
    c->r[8] = 0x4u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[6] << 4);
    c->r[6] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[10]); }
    c->r[10] = 0x0u;
    c->r[11] = 0x14u;
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[10]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x2728158u - 0x3e8u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[7] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[11]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = 0x27281a4u + 0x14cu;
    { uint32_t ea = c->r[12]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[12] = c->r[4] + 0xcu;
    c->r[3] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[7] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x27281e8u - 0x208u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x272822cu - 0x23cu;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = 0x18u;
    c->r[7] = c->r[7] + (c->r[3] << 4);
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[3] = ea + 16u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[10]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x272827cu - 0x27cu;
    { uint32_t ea = c->r[6]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = 0x3u;
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[7] = c->r[3];
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); c->r[7] = ea + 16u; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    c->r[7] = 0x9u;
    c->r[1] = c->r[3] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[10]); }
    c->r[2] = c->r[4] + 0x10u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[7] = c->r[7] + (c->r[3] << 4);
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[3] = ea + 16u; }
    goto L_2728300;
L_2728300:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[7] + 0x2cu;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[2]); }
    goto L_272b550;
L_272832c:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[14]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0] + (c->r[2] << 4); ST32(ea, c->r[6]); c->r[0] = ea; }
    c->r[6] = c->r[0] + 0x4u;
    if (COND_EQ) { goto L_272b5e0; }
    c->r[0] = 0x2728370u - 0x360u;
    c->r[11] = 0x14u;
    c->r[10] = 0x4u;
    c->r[5] = c->r[4] + 0x10u;
    c->r[9] = 0x9u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[2] << 4);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[14]); }
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x27283c8u - 0x3a8u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[6] << 1);
    c->r[1] = c->r[7] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[11]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[5] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = 0x2728414u - 0x3e4u;
    { uint32_t ea = c->r[12]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0x3u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[12] = 0x2728468u + 0x398u;
    { uint32_t ea = c->r[12]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[8] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[3] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[7] + (c->r[3] << 4);
    c->r[7] = 0x2728500u + 0x310u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[3] = ea + 16u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = 0x18u;
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[7] = 0x2728550u + 0x2d0u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[3];
    { uint32_t ea = c->r[7]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[7] = ea + 16u; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2728594u + 0x29cu;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[6]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x2cu;
    goto L_272b890;
L_27285dc:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[9] = c->r[11];
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728608; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f000000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_2728608:;
    c->r[12] = 0x0u;
    c->r[8] = 0x4u;
    c->r[14] = 0x1u;
    c->r[10] = 0x3u;
    c->r[11] = 0x9u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x272863cu + 0x204u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = c->r[7] + 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x17u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[8]); ST32(ea + 16u, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x2728684u + 0x1ccu;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[1] = c->r[7] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[10]); }
    c->r[2] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x27286d8u + 0x188u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = 0x18u;
    c->r[7] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2728730u + 0x140u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[5]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x272877cu + 0x104u;
    { uint32_t ea = c->r[1]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[0] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[3] << 1);
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[6]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[0] = c->r[5] + 0x18u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[11]); }
    c->r[11] = c->r[9];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[5] << 4); ST32(ea, c->r[1]); c->r[6] = ea; }
    c->r[1] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[14]); }
    goto L_2729bfc;
L_27288e0:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728904; }
    c->r[0] = c->r[0] | 0x10u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e800000u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_2728904:;
    c->r[12] = 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[8] = 0x17u;
    c->r[14] = 0x9u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x2728934u - 0xa4u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = 0x1u;
    c->r[5] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x18u;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[2]); }
    c->r[3] = 0x0u;
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_272899c; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x60c2u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3e850000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[2]); }
L_272899c:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[3]); }
    c->r[12] = 0x14u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x27289c0u - 0x120u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[7] + (c->r[0] << 4);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728a1c; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2879u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbf480000u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_2728a1c:;
    c->r[14] = 0x1u;
    c->r[6] = c->r[4] + 0xcu;
    c->r[8] = 0x17u;
    c->r[10] = 0x9u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    c->r[7] = 0x2728a48u - 0x198u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[14] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[14]; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    c->r[2] = 0x2728a8cu - 0x1ccu;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728ae0; }
    c->r[0] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xc780u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3e9a0000u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_2728ae0:;
    c->r[12] = 0x2u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2728b04u - 0x254u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); ST32(ea + 12u, c->r[11]); ST32(ea + 16u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2728b4cu - 0x28cu;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    c->r[2] = c->r[3] + 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728b9c; }
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x78f3u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3e600000u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
L_2728b9c:;
    c->r[12] = 0x3u;
    c->r[7] = c->r[4] + 0xcu;
    c->r[8] = 0x17u;
    c->r[14] = 0x4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[3] = 0x2728bc4u - 0x314u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    c->r[12] = 0x5u;
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728c2c; }
    c->r[7] = c->r[7] | 0x20u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x41800000u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[7]); }
L_2728c2c:;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x2728c44u - 0x374u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[6] + (c->r[1] << 4);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[8]); }
    c->r[8] = 0x14u;
    c->r[1] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728ca4; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41400000u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_2728ca4:;
    c->r[14] = 0x6u;
    c->r[7] = c->r[4] + 0xcu;
    c->r[10] = 0x17u;
    c->r[12] = 0x4u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[3] = 0x2728cd0u + 0x390u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[14] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    c->r[1] = 0x2728d1cu + 0x354u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[5]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2728d78; }
    c->r[0] = c->r[1] | 0x80u;
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40400000u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
L_2728d78:;
    c->r[14] = 0x7u;
    c->r[9] = 0x14u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2728da0u + 0x2e0u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[10]); }
    c->r[10] = 0x9u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2728df4u + 0x27cu;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[6] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[8]); }
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x2728e4cu + 0x244u;
    { uint32_t ea = c->r[1]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[1] = c->r[2] + (c->r[2] << 1);
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[3] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[8]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x2728ea0u + 0x200u;
    { uint32_t ea = c->r[14]; c->v.d[20] = LD64(ea + 0u); c->v.d[21] = LD64(ea + 8u); }
    c->r[14] = 0x18u;
    c->r[2] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[5] + (c->r[2] << 4); ST32(ea, c->r[6]); c->r[5] = ea; }
    c->r[2] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[20]); ST64(ea + 8u, c->v.d[21]); }
    c->r[2] = c->r[5] + 0x18u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x2728ef8u + 0x1b8u;
    { uint32_t ea = c->r[3]; c->v.d[22] = LD64(ea + 0u); c->v.d[23] = LD64(ea + 8u); }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    c->r[3] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[22]); ST64(ea + 8u, c->v.d[23]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[14]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[5]); c->r[3] = ea; }
    c->r[2] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[8]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[5]); c->r[3] = ea; }
    c->r[2] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[20]); ST64(ea + 8u, c->v.d[21]); }
    c->r[2] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); ST32(ea + 12u, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x2729020u + 0xa0u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[5] << 4); ST32(ea, c->r[1]); c->r[6] = ea; }
    c->r[1] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[11]); }
    goto L_2729bf8;
L_2729140:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x4u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272915cu - 0x8cu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[3] = 0x27291a8u - 0xc8u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[6] + (c->r[6] << 1);
    c->r[6] = c->r[5] + (c->r[3] << 4);
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[3] = ea + 16u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[7]); }
    goto L_272a1cc;
L_2729210:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[3] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[6]); c->r[3] = ea; }
    c->r[6] = c->r[3] + 0x4u;
    if (COND_EQ) { goto L_272b8b8; }
    c->r[3] = 0x2729250u - 0x160u;
    c->r[0] = c->r[0] + (c->r[2] << 4);
    c->r[10] = 0x3u;
    c->r[12] = 0x4u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[8] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x2729290u - 0x190u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 4); ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[5] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    c->r[1] = c->r[6] + 0x2cu;
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
    goto L_272b974;
L_2729304:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = c->r[6] + 0x1u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[5] + (c->r[6] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    if (COND_EQ) { c->r[7] = 0x3u; }
    c->r[0] = 0x12u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x18u;
    if (COND_EQ) { c->r[0] = 0x13u; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    if (COND_EQ) { c->r[0] = 0x2u; }
L_2729358:;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[14]); }
    if (COND_EQ) { c->r[14] = 0x1u; }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_272bb9c; }
    goto L_272bdc0;
L_2729390:;
    c->r[12] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[1] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[7] << 4); ST32(ea, c->r[6]); c->r[1] = ea; }
    c->r[6] = c->r[1] + 0x4u;
    if (COND_EQ) { goto L_272b990; }
    c->r[1] = 0x27293ccu - 0x2bcu;
    c->r[0] = c->r[0] + (c->r[7] << 4);
    c->r[8] = 0x4u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272940cu - 0x2ecu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[6] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    goto L_272b9cc;
L_272944c:;
    c->r[12] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + (c->r[1] << 4); ST32(ea, c->r[6]); c->r[2] = ea; }
    c->r[6] = c->r[2] + 0x4u;
    if (COND_EQ) { goto L_272b9e0; }
    c->r[2] = 0x2729488u - 0x398u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->r[1] = 0x3u;
    c->r[8] = 0x4u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = 0x27294c8u - 0x398u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[2] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    c->r[1] = c->r[5] + 0x2cu;
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    goto L_272bb88;
L_2729500:;
    c->r[12] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + (c->r[1] << 4); ST32(ea, c->r[6]); c->r[2] = ea; }
    c->r[6] = c->r[2] + 0x4u;
    if (COND_EQ) { goto L_272bab4; }
    c->r[2] = 0x272953cu + 0xa4u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->r[8] = 0x4u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = 0x3u;
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = 0x272957cu - 0x38cu;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x27295c4u - 0x3c4u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    goto L_27295f0;
L_27295f0:;
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[6] + 0x2cu;
    goto L_272bb88;
L_27296a0:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_27296cc; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f000000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_27296cc:;
    c->r[8] = 0x0u;
    c->r[12] = 0x1u;
    c->r[11] = 0x4u;
    c->r[10] = 0x14u;
    c->r[9] = 0x9u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2729700u - 0xf0u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    c->r[14] = c->r[3] + 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x17u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x272975cu - 0x13cu;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[2] + (c->r[2] << 1);
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[3] + (c->r[1] << 4);
    c->r[3] = 0x18u;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = 0x27297b8u - 0x188u;
    { uint32_t ea = c->r[12]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + (c->r[2] << 4); ST32(ea, c->r[6]); c->r[5] = ea; }
    c->r[2] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[5] + 0x18u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2729808u - 0x1c8u;
    { uint32_t ea = c->r[0]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x2729858u - 0x208u;
    { uint32_t ea = c->r[14]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[14] = 0x1u;
    c->r[0] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[6]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x18u;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x27298acu - 0x24cu;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[6]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x18u;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x27298fcu - 0x28cu;
    { uint32_t ea = c->r[5]; c->v.d[20] = LD64(ea + 0u); c->v.d[21] = LD64(ea + 8u); }
    c->r[6] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = 0x1u;
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[20]); ST64(ea + 8u, c->v.d[21]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[2] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[2] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x27299a0u - 0x320u;
    { uint32_t ea = c->r[0]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    c->r[2] = c->r[3] + 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x27299f0u - 0x360u;
    { uint32_t ea = c->r[0]; c->v.d[20] = LD64(ea + 0u); c->v.d[21] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[5] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[20]); ST64(ea + 8u, c->v.d[21]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[2] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = 0x18u;
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[2] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[2] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x2729ad0u + 0x2c0u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[14]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = 0x2729b30u + 0x270u;
    { uint32_t ea = c->r[2]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[14]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[2] + (c->r[1] << 4);
    c->r[2] = 0x2729bccu + 0x1e4u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[14]); }
L_2729bf8:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[11] = v; }
L_2729bfc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_2729d74;
L_2729c04:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2729c28; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x40000000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_2729c28:;
    c->r[12] = 0x0u;
    c->r[8] = 0x18u;
    c->r[14] = 0x4u;
    c->r[10] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2729c58u + 0x168u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    c->r[2] = 0x2729c9cu + 0x134u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[5]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[10] = 0x14u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2729cf4u + 0xecu;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[5]); c->r[3] = ea; }
    c->r[5] = c->r[4] + 0xcu;
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x2729d40u + 0xb0u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[12]); }
L_2729d74:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
L_2729d7c:;
    c->r[0] = c->r[8] - 0x2fu;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LS) { goto L_272a48c; }
    goto L_272a49c;
L_2729e70:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x1u;
    c->r[10] = 0x4u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x2729e94u - 0x94u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x2729ed8u - 0x108u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 4); ST32(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[3] = c->r[4] + 0xcu;
    c->r[12] = 0x14u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[7] = 0x9u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x2729f6cu - 0x15cu;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[7] = c->r[7] + (c->r[3] << 4);
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x2729fbcu - 0x19cu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[5] = ea + 16u; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[5] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = 0x272a018u - 0x1e8u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[8]); }
    goto L_272b980;
L_272a070:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[10] = 0x4u;
    c->r[14] = 0x0u;
    c->r[8] = c->r[9];
    c->r[9] = c->r[11];
    c->r[11] = 0x18u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272a09cu - 0x29cu;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[5] = 0x272a0f0u - 0x320u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    c->r[1] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    c->r[7] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[2] = 0x272a138u - 0x2f8u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = 0x14u;
    c->r[6] = c->r[2];
    c->r[0] = c->r[2] + 0x1cu;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[3] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[7] = 0x272a190u - 0x3e0u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[6] + (c->r[0] << 4);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[0] = ea + 16u; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[11]); }
    c->r[11] = c->r[9];
    c->r[9] = c->r[8];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
L_272a1cc:;
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_272bb9c; }
    goto L_272bdc0;
L_272a1e0:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x14u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272a1fcu - 0x3acu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0xau;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[6] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[7] = 0x272a240u - 0x3e0u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xbu;
    goto L_272a32c;
L_272a288:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x14u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272a2a4u - 0x254u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0xau;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[6] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[7] = 0x272a2e8u - 0x288u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
L_272a32c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0x272a334u; f_272e400(c);
    goto L_272a48c;
L_272a338:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x14u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272a354u - 0x304u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0xau;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[6] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[7] = 0x272a398u - 0x338u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0xau;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xbu;
    goto L_272a484;
L_272a3e0:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x14u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272a3fcu - 0x3acu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0xau;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[6] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[7] = 0x272a440u - 0x3e0u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
L_272a484:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0x272a48cu; f_272ed50(c);
L_272a48c:;
    { uint32_t ea = c->r[4] + 0x9fu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = c->r[4];
    c->r[14] = 0x272a49cu; f_2727100(c);
L_272a49c:;
    c->r[0] = c->r[8] - 0x11u;
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1du);
    if (COND_HI) { goto L_272bb94; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x272a4b8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x272a534u: goto L_272a534; case 0x272a548u: goto L_272a548; case 0x272a5b4u: goto L_272a5b4; case 0x272a714u: goto L_272a714; case 0x272aa30u: goto L_272aa30; case 0x272aa84u: goto L_272aa84; case 0x272ab30u: goto L_272ab30; case 0x272ad30u: goto L_272ad30; case 0x272add4u: goto L_272add4; case 0x272ae60u: goto L_272ae60; case 0x272aeecu: goto L_272aeec; case 0x272bb94u: goto L_272bb94; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_272a534:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272a548u + 0x3e8u;
    goto L_272aa40;
L_272a548:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x4u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272a560u + 0x3d0u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0x272a5b4u + 0x38cu;
    goto L_272aaec;
L_272a5b4:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[10] = 0x9u;
    c->r[14] = c->r[9];
    c->r[9] = c->r[11];
    c->r[11] = 0x14u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272a5dcu + 0x354u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[3] = 0x272a634u + 0x31cu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[5] + (c->r[5] << 1);
    c->r[6] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + (c->r[3] << 4); ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[2] = c->r[1] + 0x4u;
    c->r[3] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = 0x13u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0x272a680u + 0x2e0u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[6] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[1]); c->r[3] = ea; }
    c->r[1] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[0]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272a6d0u + 0x2a0u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + (c->r[5] << 4); ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[2] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[11]); }
    c->r[11] = c->r[9];
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[9] = c->r[14];
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[0]); }
    goto L_272c9fc;
L_272a714:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = c->r[9];
    c->r[8] = 0x4u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x272a738u + 0x218u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x13u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[7] = 0x272a788u + 0x1b8u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + (c->r[2] << 4); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[2] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[2] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = c->r[1] + 0x20u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0x272a7d0u + 0x1b0u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[6] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[1]); c->r[3] = ea; }
    c->r[1] = c->r[3] + 0x4u;
    c->r[0] = c->r[3] + 0x20u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = c->r[6] + 0x1u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + (c->r[6] << 4); ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[1] = c->r[5] + 0x4u;
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[2] = 0x272a858u + 0x138u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[6] + (c->r[6] << 1);
    c->r[7] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[5] + (c->r[2] << 4); ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[1] = c->r[5] + 0x4u;
    c->r[0] = c->r[5] + 0x14u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x12u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x13u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[5] = 0x272a8e0u + 0xc0u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[9] = c->r[14];
    goto L_272c9fc;
L_272aa30:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272aa44u - 0x94u;
L_272aa40:;
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0x4u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[0]); }
    goto L_272c9fc;
L_272aa84:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x4u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272aa9cu - 0xecu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = 0x272aaf0u - 0x150u;
L_272aaec:;
    c->r[6] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + (c->r[2] << 4); ST32(ea, c->r[1]); c->r[3] = ea; }
    c->r[1] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[0]); }
    goto L_272c9fc;
L_272ab30:;
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[9];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_272ab58; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x40000000u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_272ab58:;
    c->r[12] = 0x0u;
    c->r[8] = 0x18u;
    c->r[14] = 0x4u;
    c->r[9] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x272ab88u - 0x1c8u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[1] << 1);
    c->r[5] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[7]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); }
    c->r[2] = 0x272abccu - 0x1fcu;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[5]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[9] = 0x14u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x272ac28u - 0x248u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 4); ST32(ea, c->r[5]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x272ac78u - 0x2f8u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[6]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[2] = c->r[5] + 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x13u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_272accc; }
    c->r[0] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f000000u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_272accc:;
    c->r[8] = 0x1u;
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x272acecu - 0x2fcu;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_272c9fc;
L_272ad30:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272ad48u - 0x348u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0x2u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = 0x272ad94u - 0x384u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x15u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[14]); }
    goto L_272c9fc;
L_272add4:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x14u;
    c->r[14] = 0x4u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272adf0u - 0x3d0u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x272ae40u + 0x370u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x1u;
    goto L_272af74;
L_272ae60:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x14u;
    c->r[14] = 0x4u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272ae7cu + 0x344u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x272aeccu + 0x2e4u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x2u;
    goto L_272af74;
L_272aeec:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x14u;
    c->r[14] = 0x4u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272af08u + 0x2b8u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x272af58u + 0x258u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[3]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x3u;
L_272af74:;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    goto L_272c9fc;
L_272af9c:;
    c->r[1] = 0x272afa4u + 0x22cu;
    c->r[0] = c->r[0] + (c->r[7] << 4);
    c->r[14] = 0x4u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = 0x12u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[10]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x272afecu + 0x1f4u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[5] + (c->r[5] << 1);
    c->r[6] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] + 0x2cu;
    c->r[14] = 0x1u;
    goto L_272b1a4;
L_272b02c:;
    c->r[3] = 0x272b034u + 0x1bcu;
    c->r[8] = c->r[11];
    c->r[14] = 0x14u;
    c->r[12] = 0x4u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[0] + (c->r[1] << 4);
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[10] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272b078u + 0x188u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[2]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272b0c8u + 0x148u;
    goto L_272b160;
L_272b0c8:;
    c->r[3] = 0x272b0d0u + 0x120u;
    c->r[8] = c->r[11];
    c->r[14] = 0x14u;
    c->r[12] = 0x4u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[0] + (c->r[1] << 4);
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[10] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272b114u + 0xecu;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[2]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272b164u + 0xbcu;
L_272b160:;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[5] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[11]); }
    c->r[11] = c->r[8];
    c->r[1] = c->r[6] + 0x2cu;
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
L_272b1a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_272b8a8;
L_272b2c0:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[6] << 4);
    c->r[12] = 0x0u;
    c->r[1] = 0x9u;
    c->r[5] = c->r[4] + 0x10u;
    c->r[8] = 0x9u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[0] = 0x6u;
    c->r[10] = 0x14u;
    c->r[11] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x272b318u - 0xe8u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[7] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[6] + (c->r[1] << 4);
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[11]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[11] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x272b360u - 0x120u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[7] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[11] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[11]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[11] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x272b3a8u - 0x158u;
    { uint32_t ea = c->r[3]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[3] = c->r[5] + (c->r[5] << 1);
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[11] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[11]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[11] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x272b3f0u - 0x190u;
    { uint32_t ea = c->r[3]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[3] = c->r[5] + (c->r[5] << 1);
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[2] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[2] = 0x4u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272b47cu - 0x20cu;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = 0x13u;
    c->r[5] = c->r[6] + (c->r[5] << 4);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[3] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = 0x2u;
    c->r[5] = c->r[6] + (c->r[5] << 4);
    c->r[6] = 0x272b4e0u - 0x260u;
    { uint32_t ea = c->r[6]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); c->r[6] = ea + 16u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[3] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[5] = c->r[6] + (c->r[5] << 4);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[5] + 0x2cu;
L_272b550:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[11] = v; }
    goto L_272b97c;
L_272b5e0:;
    c->r[0] = 0x272b5e8u - 0x358u;
    c->r[11] = 0x0u;
    c->r[12] = 0x14u;
    c->r[9] = 0x9u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + (c->r[2] << 4);
    c->r[2] = 0x2u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = 0x272b63cu - 0x39cu;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[14] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = 0x272b68cu - 0x3dcu;
    { uint32_t ea = c->r[10]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[10] = c->r[4] + 0xcu;
    c->r[0] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[6] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[14] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[1] = 0x272b6d0u - 0x100u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[6] + (c->r[6] << 1);
    c->r[7] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[14] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272b710u + 0x170u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x4u;
    c->r[1] = c->r[6] + 0x20u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272b758u - 0x1e8u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[6] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[10] = 0x4u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[5] = 0x272b7b4u - 0x234u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[5] = ea + 16u; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = 0x13u;
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[5] = 0x272b808u - 0x278u;
    { uint32_t ea = c->r[5]; c->v.d[18] = LD64(ea + 0u); c->v.d[19] = LD64(ea + 8u); }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[18]); ST64(ea + 8u, c->v.d[19]); c->r[5] = ea + 16u; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    c->r[5] = 0x2u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[14]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[11]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[5] = ea + 16u; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[3] + 0x2cu;
    goto L_272b890;
L_272b890:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
L_272b8a8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_272bb9c; }
    goto L_272bdc0;
L_272b8b8:;
    c->r[3] = 0x272b8c0u - 0x320u;
    c->r[12] = 0x4u;
    c->r[14] = 0x0u;
    c->r[10] = 0x2u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[0] + (c->r[2] << 4);
    c->r[0] = c->r[3] + 0x18u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[6] = 0x12u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[14]); }
    c->r[8] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272b900u - 0x350u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5] + (c->r[5] << 1);
    c->r[5] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[0] + (c->r[2] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[7] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    c->r[1] = c->r[7] + 0x2cu;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[5]); }
    c->r[14] = 0x1u;
L_272b974:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_272b97c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
L_272b980:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_272bb9c; }
    goto L_272bdc0;
L_272b990:;
    c->r[1] = 0x272b998u - 0x3d8u;
    c->r[0] = c->r[0] + (c->r[7] << 4);
    c->r[7] = 0x4u;
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[0] + 0x2cu;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
L_272b9cc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_NE) { goto L_272bb9c; }
    goto L_272bdc0;
L_272b9e0:;
    c->r[2] = 0x272b9e8u + 0x2a8u;
    c->r[14] = 0x4u;
    c->r[8] = 0x0u;
    c->r[10] = 0x14u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[6] = 0x12u;
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272ba30u + 0x270u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[2]); c->r[0] = ea; }
    c->r[2] = 0x9u;
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[7] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[1] = 0x272ba78u + 0x238u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    c->r[1] = c->r[5] + 0x2cu;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[7]); }
    goto L_272bb84;
L_272bab4:;
    c->r[2] = 0x272babcu + 0x1d4u;
    c->r[14] = 0x4u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[6] = 0x12u;
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272bb00u + 0x1c0u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 4); ST32(ea, c->r[2]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[1] = 0x13u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272bb4cu + 0x184u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[6] + 0x2cu;
L_272bb84:;
    c->r[14] = 0x1u;
L_272bb88:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
L_272bb94:;
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_EQ) { goto L_272bdc0; }
L_272bb9c:;
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_EQ) { goto L_272bf40; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { goto L_272c9b4; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272c168; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_EQ) { goto L_272c168; }
    c->r[8] = c->r[4] + 0xcu;
    c->r[10] = c->r[9];
    c->r[12] = 0xau;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[14], 0x1u);
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x272bbecu + 0xf4u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x15u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[6] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[1] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = c->r[1] + 0x4u;
    if (COND_NE) { goto L_272c0e8; }
    c->r[1] = 0x272bc58u + 0x98u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + (c->r[7] << 4);
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[9] = c->r[10];
    goto L_272c9ac;
L_272bdc0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272c1dc; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_EQ) { goto L_272c1dc; }
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = c->r[9];
    c->r[9] = 0x13u;
    c->r[8] = 0x6u;
    c->r[10] = 0x8u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x272be00u - 0x100u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = 0x272be54u - 0x144u;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[3] + (c->r[3] << 1);
    c->r[7] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] + (c->r[2] << 4);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[9]); }
    c->r[2] = c->r[1] + 0x18u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[2] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272bea4u - 0x184u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[5] = c->r[6] + (c->r[5] << 4);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[9]); }
    c->r[6] = 0x12u;
    c->r[9] = c->r[14];
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[12]); }
    c->r[5] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[7] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[0] = 0x272bf08u - 0x1d8u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[8]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    goto L_272c9b4;
L_272bf40:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272c530; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_EQ) { goto L_272c530; }
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x9u;
    c->r[14] = 0x18u;
    c->r[10] = 0x8u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x272bf7cu - 0x23cu;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[5] = 0x272bfd0u - 0x280u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[0] << 4); ST32(ea, c->r[3]); c->r[1] = ea; }
    c->r[0] = c->r[1] + 0x4u;
    c->r[2] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[8]); ST32(ea + 16u, c->r[9]); ST32(ea + 20u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x272c010u - 0x2b0u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[4] + 0xcu;
    c->r[7] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[7] = 0x272c058u - 0x2e8u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[5] = 0x272c0a8u - 0x328u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_272c9b4;
L_272c0e8:;
    c->r[1] = 0x272c0f0u - 0x360u;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[5] + (c->r[7] << 4);
    c->r[7] = 0x5u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272c12cu - 0x38cu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0x8u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[9] = c->r[10];
    goto L_272c9ac;
L_272c168:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272c850; }
    c->r[12] = c->r[4] + 0xcu;
    (void)f_subs(c, c->r[14], 0x1u);
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[5] = c->r[6] + 0x1u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + (c->r[6] << 4); ST32(ea, c->r[0]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    if (COND_NE) { goto L_272c7c8; }
    c->r[7] = 0x272c1a8u - 0x3f8u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = 0x8u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[1] + (c->r[6] << 4);
    c->r[1] = 0x14u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    c->r[0] = c->r[0] + 0x2cu;
    goto L_272c848;
L_272c1dc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272c27c; }
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x14u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272c204u + 0x2acu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0x5u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272c248u + 0x278u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + (c->r[5] << 4); ST32(ea, c->r[1]); c->r[0] = ea; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x8u;
    c->r[2] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
L_272c27c:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_272c38c; }
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x6u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272c2a4u + 0x22cu;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = 0x13u;
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272c2f0u + 0x1f0u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[1] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[0] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[7] = c->r[6] + 0x1u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + (c->r[6] << 4); ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[1] = 0x8u; }
    if (COND_NE) { c->r[0] = 0x18u; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    c->r[1] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[8]); }
L_272c38c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_272c9b4; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x6u;
    c->r[8] = 0x0u;
    c->r[9] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272c3bcu + 0x134u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[3] = 0x12u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = 0x14u;
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[9] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x272c40cu + 0xd4u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[7] = ea; }
    c->r[1] = 0x3u;
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[14] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[3] + (c->r[3] << 1);
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[3] + (c->r[5] << 4); ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[3] = c->r[3] + 0xcu;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[10] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_272c944; }
    c->r[1] = c->r[6] + (c->r[5] << 4);
    c->r[0] = 0x8u;
    c->r[6] = 0x18u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x7u;
    c->r[12] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x20u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[8]); }
    goto L_272c970;
L_272c530:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_272c624; }
    c->r[12] = c->r[4] + 0xcu;
    c->r[10] = c->r[9];
    c->r[14] = 0x14u;
    c->r[8] = 0x5u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272c564u - 0x64u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x272c5a8u - 0xb8u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272c5e8u - 0x128u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x8u;
    c->r[1] = c->r[6] + 0x20u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
L_272c624:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_272c6e8; }
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0x6u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272c64cu - 0x13cu;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[1] = 0x14u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[5] = ea; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[0] = 0x8u; }
    if (COND_NE) { c->r[1] = 0x18u; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = 0x8u;
    c->r[1] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[8]); }
L_272c6e8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_272c9b4; }
    c->r[8] = c->r[4] + 0xcu;
    c->r[12] = c->r[9];
    c->r[14] = 0x7u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272c714u - 0x214u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[6] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[3] + 0x1u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + (c->r[3] << 4); ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[10] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_272c978; }
    c->r[1] = c->r[5] + (c->r[3] << 4);
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x18u;
    c->r[3] = c->r[1] + 0x14u;
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x2cu; ST8(ea, c->r[9]); }
    goto L_272c9a8;
L_272c7c8:;
    c->r[7] = 0x272c7d0u - 0x2b0u;
    c->r[14] = 0x14u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = 0x5u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[1] + (c->r[6] << 4);
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[7] = 0x272c80cu - 0x34cu;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[6] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + (c->r[5] << 4); ST32(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[1] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[12]); }
L_272c848:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_272c850:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_272c8cc; }
    c->r[3] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = 0x2u;
    c->r[7] = 0x10u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[7] = 0x8u; }
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[7]); }
    c->r[7] = 0x16u;
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[7]); }
    c->r[7] = 0x14u;
    if (COND_NE) { c->r[7] = 0x18u; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[0]); }
L_272c8cc:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_272c9b4; }
    c->r[12] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[7] << 4); ST32(ea, c->r[6]); c->r[3] = ea; }
    c->r[6] = 0x2u;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[10] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    c->r[6] = c->r[3] + 0xcu;
    if (COND_EQ) { goto L_272cc14; }
    c->r[3] = 0x8u;
    c->r[0] = c->r[0] + (c->r[7] << 4);
    c->r[5] = 0x0u;
    c->r[7] = 0x15u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0x18u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    goto L_272cc44;
L_272c944:;
    c->r[0] = 0x10u;
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[5] << 4);
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[8]); }
L_272c970:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_272c9ac;
L_272c978:;
    c->r[0] = 0x10u;
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + (c->r[3] << 4);
    c->r[2] = 0x14u;
    c->r[3] = c->r[0] + 0x14u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[9]); }
L_272c9a8:;
    c->r[9] = c->r[12];
L_272c9ac:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
L_272c9b4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], 0xbu);
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x7u); }
    if (COND_NE) { goto L_272c9d8; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_NE) { goto L_272c9d8; }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
L_272c9d8:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_272c9fc; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { c->r[9] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); } }
L_272c9fc:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_272cfac; }
    c->r[0] = c->r[8] - 0x11u;
    (void)f_subs(c, c->r[0], 0x1du);
    if (COND_HI) { goto L_272cb34; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x272ca20u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x272ca9cu: goto L_272ca9c; case 0x272cb00u: goto L_272cb00; case 0x272cb34u: goto L_272cb34; case 0x272cbacu: goto L_272cbac; case 0x272cbe0u: goto L_272cbe0; case 0x272ccd4u: goto L_272ccd4; case 0x272ce70u: goto L_272ce70; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_272ca9c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x272cabcu + 0x304u;
L_272cab8:;
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
L_272cad8:;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x2cu;
    c->r[3] = 0xau;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    goto L_272cf28;
L_272cb00:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272cb14u + 0x2bcu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x13u;
    goto L_272cad8;
L_272cb34:;
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_EQ) { goto L_272cc54; }
    (void)f_subs(c, c->r[11], 0x1u);
    if (COND_EQ) { goto L_272cd54; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { goto L_272cf3c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[10] << 1);
    c->r[0] = c->r[0] | (c->r[1] << 2);
    c->r[0] = c->r[0] | c->r[9];
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_272cfe4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x272cb74u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x272ca9cu: goto L_272ca9c; case 0x272cb98u: goto L_272cb98; case 0x272cda0u: goto L_272cda0; case 0x272cfc4u: goto L_272cfc4; case 0x272cfe4u: goto L_272cfe4; case 0x272cff8u: goto L_272cff8; case 0x272d02cu: goto L_272d02c; case 0x272d040u: goto L_272d040; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_272cb98:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272cbacu + 0x234u;
    goto L_272cab8;
L_272cbac:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272cbc0u + 0x230u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x12u;
    goto L_272cad8;
L_272cbe0:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272cbf4u + 0x20cu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x15u;
    goto L_272cad8;
L_272cc14:;
    c->r[3] = 0x10u;
    c->r[0] = c->r[0] + (c->r[7] << 4);
    c->r[7] = 0x14u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    c->r[3] = 0x15u;
    c->r[6] = 0x8u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[6]); }
L_272cc44:;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[5]); }
    goto L_272c9b4;
L_272cc54:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[10] << 1);
    c->r[0] = c->r[0] | (c->r[1] << 2);
    c->r[0] = c->r[0] | c->r[9];
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_272ccd4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x272cc7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x272ca9cu: goto L_272ca9c; case 0x272cca0u: goto L_272cca0; case 0x272ccd4u: goto L_272ccd4; case 0x272cda0u: goto L_272cda0; case 0x272cfc4u: goto L_272cfc4; case 0x272d074u: goto L_272d074; case 0x272d16cu: goto L_272d16c; case 0x272d180u: goto L_272d180; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_272cca0:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272ccb4u + 0x15cu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x13u;
    goto L_272cd10;
L_272ccd4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x272ccf4u + 0xfcu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x12u;
L_272cd10:;
    c->r[14] = 0xau;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x272cd54u + 0xccu;
    goto L_272ceec;
L_272cd54:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[10] << 1);
    c->r[0] = c->r[0] | (c->r[1] << 2);
    c->r[0] = c->r[0] | c->r[9];
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_272d194; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x272cd7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x272ca9cu: goto L_272ca9c; case 0x272cda0u: goto L_272cda0; case 0x272ce70u: goto L_272ce70; case 0x272cfc4u: goto L_272cfc4; case 0x272d194u: goto L_272d194; case 0x272d1a8u: goto L_272d1a8; case 0x272d1bcu: goto L_272d1bc; case 0x272d2b0u: goto L_272d2b0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_272cda0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x272cdc0u + 0x70u;
    goto L_272cab8;
L_272ce70:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x272ce90u - 0xc0u;
    c->r[14] = 0xau;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x13u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x272cef0u - 0xb0u;
L_272ceec:;
    c->r[7] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + (c->r[5] << 4); ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[0]); }
L_272cf10:;
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[12]); }
    c->r[0] = c->r[3] + 0x2cu;
L_272cf28:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_272cf50; }
L_272cf3c:;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] - 0x18u; ST32(ea, c->r[1]); }
L_272cf50:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[4] = 0x272cf68u - 0x118u;
    { uint32_t ea = c->r[4]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[4] = c->r[3];
    c->r[5] = c->r[7] + 0x1u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6] + (c->r[7] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[7] = 0x8u;
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[5]); }
L_272cfac:;
    c->r[0] = c->r[4];
    c->r[14] = 0x272cfb4u; f_272d3f0(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_272d770(c);
L_272cfc4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x272cfe4u + 0x38cu;
    goto L_272cab8;
L_272cfe4:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272cff8u - 0x198u;
    goto L_272cab8;
L_272cff8:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d00cu + 0x3d4u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x16u;
    goto L_272cad8;
L_272d02c:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d040u + 0x300u;
    goto L_272cab8;
L_272d040:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d054u + 0x38cu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x18u;
    goto L_272cad8;
L_272d074:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x12u;
    c->r[9] = 0xau;
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d094u + 0x2ecu;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = c->r[6] + 0x1cu;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[0] = 0x272d0e0u + 0x270u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[3] + (c->r[0] << 4);
    c->r[3] = c->r[0];
    c->r[1] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[3] = ea + 16u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[8]); }
    c->r[3] = 0x13u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[14]); }
    c->r[3] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[1] = 0x272d130u + 0x230u;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[7] = c->r[6] + (c->r[1] << 4);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[9]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + 0x1cu;
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[7] + 0x2cu;
    goto L_272cf28;
L_272d16c:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d180u + 0x240u;
    goto L_272cab8;
L_272d180:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d194u + 0x21cu;
    goto L_272cab8;
L_272d194:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d1a8u + 0x1e8u;
    goto L_272cab8;
L_272d1a8:;
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d1bcu + 0x1e4u;
    goto L_272cab8;
L_272d1bc:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[8] = 0x14u;
    c->r[14] = 0xau;
    c->r[9] = 0x0u;
    c->r[10] = 0x9u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x272d1e4u + 0x1acu;
    { uint32_t ea = c->r[7]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[5] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[1] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x272d230u + 0x170u;
    { uint32_t ea = c->r[5]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + (c->r[0] << 4); ST32(ea, c->r[2]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x2cu; ST8(ea, c->r[9]); }
    c->r[7] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    c->r[0] = 0x272d278u + 0x158u;
    { uint32_t ea = c->r[0]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 4); ST32(ea, c->r[1]); c->r[5] = ea; }
    c->r[0] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[5] + 0x2cu;
    goto L_272cf28;
L_272d2b0:;
    c->r[12] = c->r[4] + 0xcu;
    c->r[14] = 0xau;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[3] = 0x272d2ccu + 0xc4u;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[3] = c->r[7] + (c->r[7] << 1);
    c->r[5] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + (c->r[3] << 4); ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    c->r[0] = 0x14u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST8(ea, c->r[8]); }
    c->r[12] = c->r[4] + 0xcu;
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[6] = 0x272d318u + 0x68u;
    { uint32_t ea = c->r[6]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); }
    c->r[7] = c->r[5] + 0x1u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + (c->r[5] << 4); ST32(ea, c->r[0]); c->r[3] = ea; }
    c->r[0] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[14]); }
    goto L_272cf10;
}
