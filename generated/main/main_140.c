#include "cpu.h"
#include "neon_rt.h"
void f_a65408(Cpu *restrict c) {
    FN_ENTER(0xa65408u);
L_a65408:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xd08fadu;
    c->r[4] = c->r[1];
    c->r[1] = 0xa65420u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65424u; rt_dispatch(c);
    c->r[1] = 0xfdbe3cu;
    { uint32_t ea = 0xa65430u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fadu;
    c->r[1] = 0xa6543cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65440u; rt_dispatch(c);
    c->r[1] = 0xfdbe24u;
    { uint32_t ea = 0xa6544cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08faau;
    c->r[1] = 0xa65458u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6545cu; rt_dispatch(c);
    c->r[1] = 0xfdbe0cu;
    { uint32_t ea = 0xa65468u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fa2u;
    c->r[1] = 0xa65474u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65478u; rt_dispatch(c);
    c->r[1] = 0xfdbdf4u;
    { uint32_t ea = 0xa65484u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f98u;
    c->r[1] = 0xa65490u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65494u; rt_dispatch(c);
    c->r[1] = 0xfdbddcu;
    { uint32_t ea = 0xa654a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f93u;
    c->r[1] = 0xa654acu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa654b0u; rt_dispatch(c);
    c->r[1] = 0xfdbdc4u;
    { uint32_t ea = 0xa654bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f8fu;
    c->r[1] = 0xa654c8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa654ccu; rt_dispatch(c);
    c->r[1] = 0xfdbdacu;
    { uint32_t ea = 0xa654d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f87u;
    c->r[1] = 0xa654e4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa654e8u; rt_dispatch(c);
    c->r[1] = 0xfdbd94u;
    { uint32_t ea = 0xa654f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f95u;
    c->r[1] = 0xa65500u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65504u; rt_dispatch(c);
    c->r[1] = 0xfdbd7cu;
    { uint32_t ea = 0xa65510u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9du;
    c->r[1] = 0xa6551cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65520u; rt_dispatch(c);
    c->r[1] = 0xfdbd64u;
    { uint32_t ea = 0xa6552cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9bu;
    c->r[1] = 0xa65538u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6553cu; rt_dispatch(c);
    c->r[1] = 0xfdbd4cu;
    { uint32_t ea = 0xa65548u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9cu;
    c->r[1] = 0xa65554u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65558u; rt_dispatch(c);
    c->r[1] = 0xfdbd34u;
    { uint32_t ea = 0xa65564u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f98u;
    c->r[1] = 0xa65570u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65574u; rt_dispatch(c);
    c->r[1] = 0xfdbd1cu;
    { uint32_t ea = 0xa65580u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9au;
    c->r[1] = 0xa6558cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65590u; rt_dispatch(c);
    c->r[1] = 0xfdbd04u;
    { uint32_t ea = 0xa6559cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9du;
    c->r[1] = 0xa655a8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa655acu; rt_dispatch(c);
    c->r[1] = 0xfdbcecu;
    { uint32_t ea = 0xa655b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9eu;
    c->r[1] = 0xa655c4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa655c8u; rt_dispatch(c);
    c->r[1] = 0xfdbcd4u;
    { uint32_t ea = 0xa655d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f98u;
    c->r[1] = 0xa655e0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa655e4u; rt_dispatch(c);
    c->r[1] = 0xfdbcbcu;
    { uint32_t ea = 0xa655f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9cu;
    c->r[1] = 0xa655fcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65600u; rt_dispatch(c);
    c->r[1] = 0xfdbca4u;
    { uint32_t ea = 0xa6560cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fa1u;
    c->r[1] = 0xa65618u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6561cu; rt_dispatch(c);
    c->r[1] = 0xfdbc8cu;
    { uint32_t ea = 0xa65628u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fa7u;
    c->r[1] = 0xa65634u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65638u; rt_dispatch(c);
    c->r[1] = 0xfdbc74u;
    { uint32_t ea = 0xa65644u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fabu;
    c->r[1] = 0xa65650u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65654u; rt_dispatch(c);
    c->r[1] = 0xfdbc5cu;
    { uint32_t ea = 0xa65660u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08facu;
    c->r[1] = 0xa6566cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65670u; rt_dispatch(c);
    c->r[1] = 0xfdbc44u;
    { uint32_t ea = 0xa6567cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fa6u;
    c->r[1] = 0xa65688u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6568cu; rt_dispatch(c);
    c->r[1] = 0xfdbc2cu;
    { uint32_t ea = 0xa65698u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fadu;
    c->r[1] = 0xa656a4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa656a8u; rt_dispatch(c);
    c->r[1] = 0xfdbc14u;
    { uint32_t ea = 0xa656b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb1u;
    c->r[1] = 0xa656c0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa656c4u; rt_dispatch(c);
    c->r[1] = 0xfdbbfcu;
    { uint32_t ea = 0xa656d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb4u;
    c->r[1] = 0xa656dcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa656e0u; rt_dispatch(c);
    c->r[1] = 0xfdbbe4u;
    { uint32_t ea = 0xa656ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb3u;
    c->r[1] = 0xa656f8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa656fcu; rt_dispatch(c);
    c->r[1] = 0xfdbbccu;
    { uint32_t ea = 0xa65708u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb9u;
    c->r[1] = 0xa65714u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65718u; rt_dispatch(c);
    c->r[1] = 0xfdbbb4u;
    { uint32_t ea = 0xa65724u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fbfu;
    c->r[1] = 0xa65730u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65734u; rt_dispatch(c);
    c->r[1] = 0xfdbb9cu;
    { uint32_t ea = 0xa65740u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fc7u;
    c->r[1] = 0xa6574cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65750u; rt_dispatch(c);
    c->r[1] = 0xfdbb84u;
    { uint32_t ea = 0xa6575cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fbcu;
    c->r[1] = 0xa65768u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6576cu; rt_dispatch(c);
    c->r[1] = 0xfdbb6cu;
    { uint32_t ea = 0xa65778u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fc2u;
    c->r[1] = 0xa65784u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65788u; rt_dispatch(c);
    c->r[1] = 0xfdbb54u;
    { uint32_t ea = 0xa65794u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fc8u;
    c->r[1] = 0xa657a0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa657a4u; rt_dispatch(c);
    c->r[1] = 0xfdbb3cu;
    { uint32_t ea = 0xa657b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fceu;
    c->r[1] = 0xa657bcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa657c0u; rt_dispatch(c);
    c->r[1] = 0xfdbb24u;
    { uint32_t ea = 0xa657ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fd1u;
    c->r[1] = 0xa657d8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa657dcu; rt_dispatch(c);
    c->r[1] = 0xfdbb0cu;
    { uint32_t ea = 0xa657e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fceu;
    c->r[1] = 0xa657f4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa657f8u; rt_dispatch(c);
    c->r[1] = 0xfdbaf4u;
    { uint32_t ea = 0xa65804u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fcdu;
    c->r[1] = 0xa65810u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65814u; rt_dispatch(c);
    c->r[1] = 0xfdbadcu;
    { uint32_t ea = 0xa65820u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fc9u;
    c->r[1] = 0xa6582cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65830u; rt_dispatch(c);
    c->r[1] = 0xfdbac4u;
    { uint32_t ea = 0xa6583cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fd1u;
    c->r[1] = 0xa65848u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6584cu; rt_dispatch(c);
    c->r[1] = 0xfdbaacu;
    { uint32_t ea = 0xa65858u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fd9u;
    c->r[1] = 0xa65864u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65868u; rt_dispatch(c);
    c->r[1] = 0xfdba94u;
    { uint32_t ea = 0xa65874u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fe1u;
    c->r[1] = 0xa65880u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65884u; rt_dispatch(c);
    c->r[1] = 0xfdba7cu;
    { uint32_t ea = 0xa65890u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fe7u;
    c->r[1] = 0xa6589cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa658a0u; rt_dispatch(c);
    c->r[1] = 0xfdba64u;
    { uint32_t ea = 0xa658acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fe9u;
    c->r[1] = 0xa658b8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa658bcu; rt_dispatch(c);
    c->r[1] = 0xfdba4cu;
    { uint32_t ea = 0xa658c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08ff5u;
    c->r[1] = 0xa658d4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa658d8u; rt_dispatch(c);
    c->r[1] = 0xfdba34u;
    { uint32_t ea = 0xa658e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fecu;
    c->r[1] = 0xa658f0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa658f4u; rt_dispatch(c);
    c->r[1] = 0xfdba1cu;
    { uint32_t ea = 0xa65900u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fe1u;
    c->r[1] = 0xa6590cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65910u; rt_dispatch(c);
    c->r[1] = 0xfdba04u;
    { uint32_t ea = 0xa6591cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fdbu;
    c->r[1] = 0xa65928u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6592cu; rt_dispatch(c);
    c->r[1] = 0xfdb9ecu;
    { uint32_t ea = 0xa65938u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fd6u;
    c->r[1] = 0xa65944u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65948u; rt_dispatch(c);
    c->r[1] = 0xfdb9d4u;
    { uint32_t ea = 0xa65954u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fc8u;
    c->r[1] = 0xa65960u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65964u; rt_dispatch(c);
    c->r[1] = 0xfdb9bcu;
    { uint32_t ea = 0xa65970u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fbbu;
    c->r[1] = 0xa6597cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65980u; rt_dispatch(c);
    c->r[1] = 0xfdb9a4u;
    { uint32_t ea = 0xa6598cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb6u;
    c->r[1] = 0xa65998u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6599cu; rt_dispatch(c);
    c->r[1] = 0xfdb98cu;
    { uint32_t ea = 0xa659a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb1u;
    c->r[1] = 0xa659b4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa659b8u; rt_dispatch(c);
    c->r[1] = 0xfdb974u;
    { uint32_t ea = 0xa659c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fafu;
    c->r[1] = 0xa659d0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa659d4u; rt_dispatch(c);
    c->r[1] = 0xfdb95cu;
    { uint32_t ea = 0xa659e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fafu;
    c->r[1] = 0xa659ecu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa659f0u; rt_dispatch(c);
    c->r[1] = 0xfdb944u;
    { uint32_t ea = 0xa659fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb3u;
    c->r[1] = 0xa65a08u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65a0cu; rt_dispatch(c);
    c->r[1] = 0xfdb92cu;
    { uint32_t ea = 0xa65a18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb3u;
    c->r[1] = 0xa65a24u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65a28u; rt_dispatch(c);
    c->r[1] = 0xfdb914u;
    { uint32_t ea = 0xa65a34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fbau;
    c->r[1] = 0xa65a40u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65a44u; rt_dispatch(c);
    c->r[1] = 0xfdb8fcu;
    { uint32_t ea = 0xa65a50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fbeu;
    c->r[1] = 0xa65a5cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65a60u; rt_dispatch(c);
    c->r[1] = 0xfdb8e4u;
    { uint32_t ea = 0xa65a6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fc5u;
    c->r[1] = 0xa65a78u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65a7cu; rt_dispatch(c);
    c->r[1] = 0xfdb8ccu;
    { uint32_t ea = 0xa65a88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fbdu;
    c->r[1] = 0xa65a94u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65a98u; rt_dispatch(c);
    c->r[1] = 0xfdb8b4u;
    { uint32_t ea = 0xa65aa4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fb3u;
    c->r[1] = 0xa65ab0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65ab4u; rt_dispatch(c);
    c->r[1] = 0xfdb89cu;
    { uint32_t ea = 0xa65ac0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08faeu;
    c->r[1] = 0xa65accu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65ad0u; rt_dispatch(c);
    c->r[1] = 0xfdb884u;
    { uint32_t ea = 0xa65adcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08faau;
    c->r[1] = 0xa65ae8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65aecu; rt_dispatch(c);
    c->r[1] = 0xfdb86cu;
    { uint32_t ea = 0xa65af8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fa7u;
    c->r[1] = 0xa65b04u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65b08u; rt_dispatch(c);
    c->r[1] = 0xfdb854u;
    { uint32_t ea = 0xa65b14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fa7u;
    c->r[1] = 0xa65b20u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65b24u; rt_dispatch(c);
    c->r[1] = 0xfdb83cu;
    { uint32_t ea = 0xa65b30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08fa7u;
    c->r[1] = 0xa65b3cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65b40u; rt_dispatch(c);
    c->r[1] = 0xfdb824u;
    { uint32_t ea = 0xa65b4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f9cu;
    c->r[1] = 0xa65b58u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65b5cu; rt_dispatch(c);
    c->r[1] = 0xfdb80cu;
    { uint32_t ea = 0xa65b68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f91u;
    c->r[1] = 0xa65b74u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65b78u; rt_dispatch(c);
    c->r[1] = 0xfdb7f4u;
    { uint32_t ea = 0xa65b84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f8au;
    c->r[1] = 0xa65b90u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65b94u; rt_dispatch(c);
    c->r[1] = 0xfdb7dcu;
    { uint32_t ea = 0xa65ba0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f81u;
    c->r[1] = 0xa65bacu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65bb0u; rt_dispatch(c);
    c->r[1] = 0xfdb7c4u;
    { uint32_t ea = 0xa65bbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f7du;
    c->r[1] = 0xa65bc8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65bccu; rt_dispatch(c);
    c->r[1] = 0xfdb7acu;
    { uint32_t ea = 0xa65bd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f76u;
    c->r[1] = 0xa65be4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65be8u; rt_dispatch(c);
    c->r[1] = 0xfdb1a0u;
    { uint32_t ea = 0xa65bf4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f78u;
    c->r[1] = 0xa65c00u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65c04u; rt_dispatch(c);
    c->r[1] = 0xfdb188u;
    { uint32_t ea = 0xa65c10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f7cu;
    c->r[1] = 0xa65c1cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65c20u; rt_dispatch(c);
    c->r[1] = 0xfdb174u;
    { uint32_t ea = 0xa65c2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f7fu;
    c->r[1] = 0xa65c38u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65c3cu; rt_dispatch(c);
    c->r[1] = 0xfdb154u;
    { uint32_t ea = 0xa65c48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f80u;
    c->r[1] = 0xa65c54u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65c58u; rt_dispatch(c);
    c->r[1] = 0xfdb724u;
    { uint32_t ea = 0xa65c64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f82u;
    c->r[1] = 0xa65c70u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65c74u; rt_dispatch(c);
    c->r[1] = 0xfdb70cu;
    { uint32_t ea = 0xa65c80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f82u;
    c->r[1] = 0xa65c8cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65c90u; rt_dispatch(c);
    c->r[1] = 0xfdb6f4u;
    { uint32_t ea = 0xa65c9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f83u;
    c->r[1] = 0xa65ca8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65cacu; rt_dispatch(c);
    c->r[1] = 0xfdb0ecu;
    { uint32_t ea = 0xa65cb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f7fu;
    c->r[1] = 0xa65cc4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65cc8u; rt_dispatch(c);
    c->r[1] = 0xfdb6c0u;
    { uint32_t ea = 0xa65cd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f7eu;
    c->r[1] = 0xa65ce0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65ce4u; rt_dispatch(c);
    c->r[1] = 0xfdb0d4u;
    { uint32_t ea = 0xa65cf0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f78u;
    c->r[1] = 0xa65cfcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65d00u; rt_dispatch(c);
    c->r[1] = 0xfdb0a0u;
    { uint32_t ea = 0xa65d0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f6du;
    c->r[1] = 0xa65d18u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65d1cu; rt_dispatch(c);
    c->r[1] = 0xfdb670u;
    { uint32_t ea = 0xa65d28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f6fu;
    c->r[1] = 0xa65d34u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65d38u; rt_dispatch(c);
    c->r[1] = 0xfdb658u;
    { uint32_t ea = 0xa65d44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f76u;
    c->r[1] = 0xa65d50u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65d54u; rt_dispatch(c);
    c->r[1] = 0xfdb640u;
    { uint32_t ea = 0xa65d60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f78u;
    c->r[1] = 0xa65d6cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65d70u; rt_dispatch(c);
    c->r[1] = 0xfdb628u;
    { uint32_t ea = 0xa65d7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f74u;
    c->r[1] = 0xa65d88u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65d8cu; rt_dispatch(c);
    c->r[1] = 0xfdb610u;
    { uint32_t ea = 0xa65d98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f6du;
    c->r[1] = 0xa65da4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65da8u; rt_dispatch(c);
    c->r[1] = 0xfdb5f8u;
    { uint32_t ea = 0xa65db4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f67u;
    c->r[1] = 0xa65dc0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65dc4u; rt_dispatch(c);
    c->r[1] = 0xfdb5e0u;
    { uint32_t ea = 0xa65dd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f64u;
    c->r[1] = 0xa65ddcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65de0u; rt_dispatch(c);
    c->r[1] = 0xfdb5c8u;
    { uint32_t ea = 0xa65decu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f64u;
    c->r[1] = 0xa65df8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65dfcu; rt_dispatch(c);
    c->r[1] = 0xfdb5b0u;
    { uint32_t ea = 0xa65e08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5fu;
    c->r[1] = 0xa65e14u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65e18u; rt_dispatch(c);
    c->r[1] = 0xfdb598u;
    { uint32_t ea = 0xa65e24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f61u;
    c->r[1] = 0xa65e30u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65e34u; rt_dispatch(c);
    c->r[1] = 0xfdb580u;
    { uint32_t ea = 0xa65e40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f61u;
    c->r[1] = 0xa65e4cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65e50u; rt_dispatch(c);
    c->r[1] = 0xfdb568u;
    { uint32_t ea = 0xa65e5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f61u;
    c->r[1] = 0xa65e68u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65e6cu; rt_dispatch(c);
    c->r[1] = 0xfdb550u;
    { uint32_t ea = 0xa65e78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f63u;
    c->r[1] = 0xa65e84u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65e88u; rt_dispatch(c);
    c->r[1] = 0xfdb538u;
    { uint32_t ea = 0xa65e94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5du;
    c->r[1] = 0xa65ea0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65ea4u; rt_dispatch(c);
    c->r[1] = 0xfdb520u;
    { uint32_t ea = 0xa65eb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5au;
    c->r[1] = 0xa65ebcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65ec0u; rt_dispatch(c);
    c->r[1] = 0xfdb508u;
    { uint32_t ea = 0xa65eccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5au;
    c->r[1] = 0xa65ed8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65edcu; rt_dispatch(c);
    c->r[1] = 0xfdb4f0u;
    { uint32_t ea = 0xa65ee8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f55u;
    c->r[1] = 0xa65ef4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65ef8u; rt_dispatch(c);
    c->r[1] = 0xfdb4d8u;
    { uint32_t ea = 0xa65f04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f57u;
    c->r[1] = 0xa65f10u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65f14u; rt_dispatch(c);
    c->r[1] = 0xfdb4c0u;
    { uint32_t ea = 0xa65f20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f60u;
    c->r[1] = 0xa65f2cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65f30u; rt_dispatch(c);
    c->r[1] = 0xfdb4a8u;
    { uint32_t ea = 0xa65f3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f60u;
    c->r[1] = 0xa65f48u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65f4cu; rt_dispatch(c);
    c->r[1] = 0xfdb490u;
    { uint32_t ea = 0xa65f58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f62u;
    c->r[1] = 0xa65f64u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65f68u; rt_dispatch(c);
    c->r[1] = 0xfdb478u;
    { uint32_t ea = 0xa65f74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5cu;
    c->r[1] = 0xa65f80u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65f84u; rt_dispatch(c);
    c->r[1] = 0xfdae20u;
    { uint32_t ea = 0xa65f90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5au;
    c->r[1] = 0xa65f9cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65fa0u; rt_dispatch(c);
    c->r[1] = 0xfdae08u;
    { uint32_t ea = 0xa65facu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5au;
    c->r[1] = 0xa65fb8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65fbcu; rt_dispatch(c);
    c->r[1] = 0xfdadf0u;
    { uint32_t ea = 0xa65fc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f59u;
    c->r[1] = 0xa65fd4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65fd8u; rt_dispatch(c);
    c->r[1] = 0xfdb40cu;
    { uint32_t ea = 0xa65fe4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5bu;
    c->r[1] = 0xa65ff0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa65ff4u; rt_dispatch(c);
    c->r[1] = 0xfdb3f4u;
    { uint32_t ea = 0xa66000u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5fu;
    c->r[1] = 0xa6600cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66010u; rt_dispatch(c);
    c->r[1] = 0xfdb3dcu;
    { uint32_t ea = 0xa6601cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f5bu;
    c->r[1] = 0xa66028u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6602cu; rt_dispatch(c);
    c->r[1] = 0xfdad84u;
    { uint32_t ea = 0xa66038u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f53u;
    c->r[1] = 0xa66044u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66048u; rt_dispatch(c);
    c->r[1] = 0xfdb3a8u;
    { uint32_t ea = 0xa66054u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f4eu;
    c->r[1] = 0xa66060u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66064u; rt_dispatch(c);
    c->r[1] = 0xfdad50u;
    { uint32_t ea = 0xa66070u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f44u;
    c->r[1] = 0xa6607cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66080u; rt_dispatch(c);
    c->r[1] = 0xfdb374u;
    { uint32_t ea = 0xa6608cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f35u;
    c->r[1] = 0xa66098u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6609cu; rt_dispatch(c);
    c->r[1] = 0xfdb35cu;
    { uint32_t ea = 0xa660a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f2du;
    c->r[1] = 0xa660b4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa660b8u; rt_dispatch(c);
    c->r[1] = 0xfdb344u;
    { uint32_t ea = 0xa660c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f2bu;
    c->r[1] = 0xa660d0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa660d4u; rt_dispatch(c);
    c->r[1] = 0xfdb32cu;
    { uint32_t ea = 0xa660e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f2eu;
    c->r[1] = 0xa660ecu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa660f0u; rt_dispatch(c);
    c->r[1] = 0xfdb314u;
    { uint32_t ea = 0xa660fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f29u;
    c->r[1] = 0xa66108u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6610cu; rt_dispatch(c);
    c->r[1] = 0xfdb2fcu;
    { uint32_t ea = 0xa66118u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f26u;
    c->r[1] = 0xa66124u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66128u; rt_dispatch(c);
    c->r[1] = 0xfdb2e4u;
    { uint32_t ea = 0xa66134u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f1bu;
    c->r[1] = 0xa66140u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66144u; rt_dispatch(c);
    c->r[1] = 0xfdb2ccu;
    { uint32_t ea = 0xa66150u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f13u;
    c->r[1] = 0xa6615cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66160u; rt_dispatch(c);
    c->r[1] = 0xfdb2b4u;
    { uint32_t ea = 0xa6616cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f12u;
    c->r[1] = 0xa66178u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6617cu; rt_dispatch(c);
    c->r[1] = 0xfdb29cu;
    { uint32_t ea = 0xa66188u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f13u;
    c->r[1] = 0xa66194u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66198u; rt_dispatch(c);
    c->r[1] = 0xfdb284u;
    { uint32_t ea = 0xa661a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f11u;
    c->r[1] = 0xa661b0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa661b4u; rt_dispatch(c);
    c->r[1] = 0xfdb26cu;
    { uint32_t ea = 0xa661c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f10u;
    c->r[1] = 0xa661ccu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa661d0u; rt_dispatch(c);
    c->r[1] = 0xfdb254u;
    { uint32_t ea = 0xa661dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f0eu;
    c->r[1] = 0xa661e8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa661ecu; rt_dispatch(c);
    c->r[1] = 0xfdb23cu;
    { uint32_t ea = 0xa661f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f0du;
    c->r[1] = 0xa66204u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66208u; rt_dispatch(c);
    c->r[1] = 0xfdb224u;
    { uint32_t ea = 0xa66214u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f0bu;
    c->r[1] = 0xa66220u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66224u; rt_dispatch(c);
    c->r[1] = 0xfdb20cu;
    { uint32_t ea = 0xa66230u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f0au;
    c->r[1] = 0xa6623cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66240u; rt_dispatch(c);
    c->r[1] = 0xfdb1f4u;
    { uint32_t ea = 0xa6624cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f09u;
    c->r[1] = 0xa66258u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6625cu; rt_dispatch(c);
    c->r[1] = 0xfdb1dcu;
    { uint32_t ea = 0xa66268u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f08u;
    c->r[1] = 0xa66274u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66278u; rt_dispatch(c);
    c->r[1] = 0xfdb1c4u;
    { uint32_t ea = 0xa66284u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f07u;
    c->r[1] = 0xa66290u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66294u; rt_dispatch(c);
    c->r[1] = 0xfdb1acu;
    { uint32_t ea = 0xa662a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f06u;
    c->r[1] = 0xa662acu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa662b0u; rt_dispatch(c);
    c->r[1] = 0xfdb194u;
    { uint32_t ea = 0xa662bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f06u;
    c->r[1] = 0xa662c8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa662ccu; rt_dispatch(c);
    c->r[1] = 0xfdb17cu;
    { uint32_t ea = 0xa662d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f06u;
    c->r[1] = 0xa662e4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa662e8u; rt_dispatch(c);
    c->r[1] = 0xfdb164u;
    { uint32_t ea = 0xa662f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f0fu;
    c->r[1] = 0xa66300u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66304u; rt_dispatch(c);
    c->r[1] = 0xfdb14cu;
    { uint32_t ea = 0xa66310u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f13u;
    c->r[1] = 0xa6631cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66320u; rt_dispatch(c);
    c->r[1] = 0xfdb134u;
    { uint32_t ea = 0xa6632cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f1cu;
    c->r[1] = 0xa66338u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6633cu; rt_dispatch(c);
    c->r[1] = 0xfdb11cu;
    { uint32_t ea = 0xa66348u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f1cu;
    c->r[1] = 0xa66354u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66358u; rt_dispatch(c);
    c->r[1] = 0xfdb104u;
    { uint32_t ea = 0xa66364u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f28u;
    c->r[1] = 0xa66370u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66374u; rt_dispatch(c);
    c->r[1] = 0xfdb0ecu;
    { uint32_t ea = 0xa66380u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f36u;
    c->r[1] = 0xa6638cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66390u; rt_dispatch(c);
    c->r[1] = 0xfdb0d4u;
    { uint32_t ea = 0xa6639cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f35u;
    c->r[1] = 0xa663a8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa663acu; rt_dispatch(c);
    c->r[1] = 0xfdb0bcu;
    { uint32_t ea = 0xa663b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f3bu;
    c->r[1] = 0xa663c4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa663c8u; rt_dispatch(c);
    c->r[1] = 0xfdb0a4u;
    { uint32_t ea = 0xa663d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f40u;
    c->r[1] = 0xa663e0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa663e4u; rt_dispatch(c);
    c->r[1] = 0xfdb08cu;
    { uint32_t ea = 0xa663f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08f3eu;
    c->r[1] = 0xa663fcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66400u; rt_dispatch(c);
    c->r[1] = 0xfdb074u;
    { uint32_t ea = 0xa6640cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a66d2c;
L_a66d2c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08619u;
    c->r[1] = 0xa66d3cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66d40u; rt_dispatch(c);
    c->r[1] = 0xfda738u;
    { uint32_t ea = 0xa66d4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08617u;
    c->r[1] = 0xa66d58u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66d5cu; rt_dispatch(c);
    c->r[1] = 0xfda720u;
    { uint32_t ea = 0xa66d68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08616u;
    c->r[1] = 0xa66d74u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66d78u; rt_dispatch(c);
    c->r[1] = 0xfda708u;
    { uint32_t ea = 0xa66d84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08614u;
    c->r[1] = 0xa66d90u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66d94u; rt_dispatch(c);
    c->r[1] = 0xfda6f0u;
    { uint32_t ea = 0xa66da0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08613u;
    c->r[1] = 0xa66dacu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66db0u; rt_dispatch(c);
    c->r[1] = 0xfda6d8u;
    { uint32_t ea = 0xa66dbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08612u;
    c->r[1] = 0xa66dc8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66dccu; rt_dispatch(c);
    c->r[1] = 0xfda6c0u;
    { uint32_t ea = 0xa66dd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08612u;
    c->r[1] = 0xa66de4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66de8u; rt_dispatch(c);
    c->r[1] = 0xfda6a8u;
    { uint32_t ea = 0xa66df4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08612u;
    c->r[1] = 0xa66e00u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66e04u; rt_dispatch(c);
    c->r[1] = 0xfda690u;
    { uint32_t ea = 0xa66e10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0861bu;
    c->r[1] = 0xa66e1cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66e20u; rt_dispatch(c);
    c->r[1] = 0xfda678u;
    { uint32_t ea = 0xa66e2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08627u;
    c->r[1] = 0xa66e38u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66e3cu; rt_dispatch(c);
    c->r[1] = 0xfda660u;
    { uint32_t ea = 0xa66e48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08626u;
    c->r[1] = 0xa66e54u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66e58u; rt_dispatch(c);
    c->r[1] = 0xfda648u;
    { uint32_t ea = 0xa66e64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0862fu;
    c->r[1] = 0xa66e70u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66e74u; rt_dispatch(c);
    c->r[1] = 0xfda630u;
    { uint32_t ea = 0xa66e80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08635u;
    c->r[1] = 0xa66e8cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66e90u; rt_dispatch(c);
    c->r[1] = 0xfda618u;
    { uint32_t ea = 0xa66e9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0863eu;
    c->r[1] = 0xa66ea8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66eacu; rt_dispatch(c);
    c->r[1] = 0xfda600u;
    { uint32_t ea = 0xa66eb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08641u;
    c->r[1] = 0xa66ec4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66ec8u; rt_dispatch(c);
    c->r[1] = 0xfda5e8u;
    { uint32_t ea = 0xa66ed4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08646u;
    c->r[1] = 0xa66ee0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66ee4u; rt_dispatch(c);
    c->r[1] = 0xfda5d0u;
    { uint32_t ea = 0xa66ef0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08644u;
    c->r[1] = 0xa66efcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66f00u; rt_dispatch(c);
    c->r[1] = 0xfda5b8u;
    { uint32_t ea = 0xa66f0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08640u;
    c->r[1] = 0xa66f18u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66f1cu; rt_dispatch(c);
    c->r[1] = 0xfda5a0u;
    { uint32_t ea = 0xa66f28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0863cu;
    c->r[1] = 0xa66f34u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66f38u; rt_dispatch(c);
    c->r[1] = 0xfda588u;
    { uint32_t ea = 0xa66f44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08638u;
    c->r[1] = 0xa66f50u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66f54u; rt_dispatch(c);
    c->r[1] = 0xfda570u;
    { uint32_t ea = 0xa66f60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08635u;
    c->r[1] = 0xa66f6cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66f70u; rt_dispatch(c);
    c->r[1] = 0xfda558u;
    { uint32_t ea = 0xa66f7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0863bu;
    c->r[1] = 0xa66f88u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66f8cu; rt_dispatch(c);
    c->r[1] = 0xfda540u;
    { uint32_t ea = 0xa66f98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08637u;
    c->r[1] = 0xa66fa4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66fa8u; rt_dispatch(c);
    c->r[1] = 0xfda528u;
    { uint32_t ea = 0xa66fb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08633u;
    c->r[1] = 0xa66fc0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66fc4u; rt_dispatch(c);
    c->r[1] = 0xfda510u;
    { uint32_t ea = 0xa66fd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0862fu;
    c->r[1] = 0xa66fdcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66fe0u; rt_dispatch(c);
    c->r[1] = 0xfda4f8u;
    { uint32_t ea = 0xa66fecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0862bu;
    c->r[1] = 0xa66ff8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa66ffcu; rt_dispatch(c);
    c->r[1] = 0xfda4e0u;
    { uint32_t ea = 0xa67008u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08628u;
    c->r[1] = 0xa67014u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67018u; rt_dispatch(c);
    c->r[1] = 0xfda4c8u;
    { uint32_t ea = 0xa67024u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0862eu;
    c->r[1] = 0xa67030u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67034u; rt_dispatch(c);
    c->r[1] = 0xfda4b0u;
    { uint32_t ea = 0xa67040u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0862au;
    c->r[1] = 0xa6704cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67050u; rt_dispatch(c);
    c->r[1] = 0xfda498u;
    { uint32_t ea = 0xa6705cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08624u;
    c->r[1] = 0xa67068u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6706cu; rt_dispatch(c);
    c->r[1] = 0xfda480u;
    { uint32_t ea = 0xa67078u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0861du;
    c->r[1] = 0xa67084u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67088u; rt_dispatch(c);
    c->r[1] = 0xfda468u;
    { uint32_t ea = 0xa67094u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0861fu;
    c->r[1] = 0xa670a0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa670a4u; rt_dispatch(c);
    c->r[1] = 0xfda450u;
    { uint32_t ea = 0xa670b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08616u;
    c->r[1] = 0xa670bcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa670c0u; rt_dispatch(c);
    c->r[1] = 0xfda438u;
    { uint32_t ea = 0xa670ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08612u;
    c->r[1] = 0xa670d8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa670dcu; rt_dispatch(c);
    c->r[1] = 0xfda420u;
    { uint32_t ea = 0xa670e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08610u;
    c->r[1] = 0xa670f4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa670f8u; rt_dispatch(c);
    c->r[1] = 0xfda408u;
    { uint32_t ea = 0xa67104u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0860cu;
    c->r[1] = 0xa67110u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67114u; rt_dispatch(c);
    c->r[1] = 0xfda3f0u;
    { uint32_t ea = 0xa67120u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08603u;
    c->r[1] = 0xa6712cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67130u; rt_dispatch(c);
    c->r[1] = 0xfda3d8u;
    { uint32_t ea = 0xa6713cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085fbu;
    c->r[1] = 0xa67148u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6714cu; rt_dispatch(c);
    c->r[1] = 0xfda3c0u;
    { uint32_t ea = 0xa67158u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085f2u;
    c->r[1] = 0xa67164u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67168u; rt_dispatch(c);
    c->r[1] = 0xfda3a8u;
    { uint32_t ea = 0xa67174u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085eau;
    c->r[1] = 0xa67180u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67184u; rt_dispatch(c);
    c->r[1] = 0xfda390u;
    { uint32_t ea = 0xa67190u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085e1u;
    c->r[1] = 0xa6719cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa671a0u; rt_dispatch(c);
    c->r[1] = 0xfda378u;
    { uint32_t ea = 0xa671acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085d9u;
    c->r[1] = 0xa671b8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa671bcu; rt_dispatch(c);
    c->r[1] = 0xfda360u;
    { uint32_t ea = 0xa671c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085d1u;
    c->r[1] = 0xa671d4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa671d8u; rt_dispatch(c);
    c->r[1] = 0xfda348u;
    { uint32_t ea = 0xa671e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085cau;
    c->r[1] = 0xa671f0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa671f4u; rt_dispatch(c);
    c->r[1] = 0xfda330u;
    { uint32_t ea = 0xa67200u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c3u;
    c->r[1] = 0xa6720cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67210u; rt_dispatch(c);
    c->r[1] = 0xfda318u;
    { uint32_t ea = 0xa6721cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c5u;
    c->r[1] = 0xa67228u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6722cu; rt_dispatch(c);
    c->r[1] = 0xfda300u;
    { uint32_t ea = 0xa67238u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bdu;
    c->r[1] = 0xa67244u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67248u; rt_dispatch(c);
    c->r[1] = 0xfda2e8u;
    { uint32_t ea = 0xa67254u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bdu;
    c->r[1] = 0xa67260u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67264u; rt_dispatch(c);
    c->r[1] = 0xfda2d0u;
    { uint32_t ea = 0xa67270u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bfu;
    c->r[1] = 0xa6727cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67280u; rt_dispatch(c);
    c->r[1] = 0xfda2b8u;
    { uint32_t ea = 0xa6728cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b9u;
    c->r[1] = 0xa67298u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6729cu; rt_dispatch(c);
    c->r[1] = 0xfda2a0u;
    { uint32_t ea = 0xa672a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bau;
    c->r[1] = 0xa672b4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa672b8u; rt_dispatch(c);
    c->r[1] = 0xfda288u;
    { uint32_t ea = 0xa672c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b3u;
    c->r[1] = 0xa672d0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa672d4u; rt_dispatch(c);
    c->r[1] = 0xfda270u;
    { uint32_t ea = 0xa672e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b3u;
    c->r[1] = 0xa672ecu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa672f0u; rt_dispatch(c);
    c->r[1] = 0xfda258u;
    { uint32_t ea = 0xa672fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085adu;
    c->r[1] = 0xa67308u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6730cu; rt_dispatch(c);
    c->r[1] = 0xfda240u;
    { uint32_t ea = 0xa67318u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085acu;
    c->r[1] = 0xa67324u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67328u; rt_dispatch(c);
    c->r[1] = 0xfda228u;
    { uint32_t ea = 0xa67334u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a8u;
    c->r[1] = 0xa67340u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67344u; rt_dispatch(c);
    c->r[1] = 0xfda210u;
    { uint32_t ea = 0xa67350u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a6u;
    c->r[1] = 0xa6735cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67360u; rt_dispatch(c);
    c->r[1] = 0xfda1f8u;
    { uint32_t ea = 0xa6736cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a3u;
    c->r[1] = 0xa67378u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6737cu; rt_dispatch(c);
    c->r[1] = 0xfda1e0u;
    { uint32_t ea = 0xa67388u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08599u;
    c->r[1] = 0xa67394u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67398u; rt_dispatch(c);
    c->r[1] = 0xfda1c8u;
    { uint32_t ea = 0xa673a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08592u;
    c->r[1] = 0xa673b0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa673b4u; rt_dispatch(c);
    c->r[1] = 0xfda1b0u;
    { uint32_t ea = 0xa673c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08591u;
    c->r[1] = 0xa673ccu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa673d0u; rt_dispatch(c);
    c->r[1] = 0xfda198u;
    { uint32_t ea = 0xa673dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08592u;
    c->r[1] = 0xa673e8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa673ecu; rt_dispatch(c);
    c->r[1] = 0xfda180u;
    { uint32_t ea = 0xa673f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08597u;
    c->r[1] = 0xa67404u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67408u; rt_dispatch(c);
    c->r[1] = 0xfda168u;
    { uint32_t ea = 0xa67414u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08598u;
    c->r[1] = 0xa67420u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67424u; rt_dispatch(c);
    c->r[1] = 0xfda150u;
    { uint32_t ea = 0xa67430u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08599u;
    c->r[1] = 0xa6743cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67440u; rt_dispatch(c);
    c->r[1] = 0xfda138u;
    { uint32_t ea = 0xa6744cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08599u;
    c->r[1] = 0xa67458u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6745cu; rt_dispatch(c);
    c->r[1] = 0xfda120u;
    { uint32_t ea = 0xa67468u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08599u;
    c->r[1] = 0xa67474u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67478u; rt_dispatch(c);
    c->r[1] = 0xfda108u;
    { uint32_t ea = 0xa67484u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0859du;
    c->r[1] = 0xa67490u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67494u; rt_dispatch(c);
    c->r[1] = 0xfda0f0u;
    { uint32_t ea = 0xa674a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a2u;
    c->r[1] = 0xa674acu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa674b0u; rt_dispatch(c);
    c->r[1] = 0xfda0d8u;
    { uint32_t ea = 0xa674bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a8u;
    c->r[1] = 0xa674c8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa674ccu; rt_dispatch(c);
    c->r[1] = 0xfda0c0u;
    { uint32_t ea = 0xa674d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085aeu;
    c->r[1] = 0xa674e4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa674e8u; rt_dispatch(c);
    c->r[1] = 0xfda0a8u;
    { uint32_t ea = 0xa674f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b6u;
    c->r[1] = 0xa67500u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67504u; rt_dispatch(c);
    c->r[1] = 0xfda090u;
    { uint32_t ea = 0xa67510u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b6u;
    c->r[1] = 0xa6751cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67520u; rt_dispatch(c);
    c->r[1] = 0xfda078u;
    { uint32_t ea = 0xa6752cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bbu;
    c->r[1] = 0xa67538u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6753cu; rt_dispatch(c);
    c->r[1] = 0xfda060u;
    { uint32_t ea = 0xa67548u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bcu;
    c->r[1] = 0xa67554u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67558u; rt_dispatch(c);
    c->r[1] = 0xfda048u;
    { uint32_t ea = 0xa67564u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bdu;
    c->r[1] = 0xa67570u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67574u; rt_dispatch(c);
    c->r[1] = 0xfda030u;
    { uint32_t ea = 0xa67580u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bdu;
    c->r[1] = 0xa6758cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67590u; rt_dispatch(c);
    c->r[1] = 0xfda018u;
    { uint32_t ea = 0xa6759cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bdu;
    c->r[1] = 0xa675a8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa675acu; rt_dispatch(c);
    c->r[1] = 0xfda000u;
    { uint32_t ea = 0xa675b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c1u;
    c->r[1] = 0xa675c4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa675c8u; rt_dispatch(c);
    c->r[1] = 0xfd9fe8u;
    { uint32_t ea = 0xa675d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c6u;
    c->r[1] = 0xa675e0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa675e4u; rt_dispatch(c);
    c->r[1] = 0xfd9fd0u;
    { uint32_t ea = 0xa675f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085ccu;
    c->r[1] = 0xa675fcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67600u; rt_dispatch(c);
    c->r[1] = 0xfd9fb8u;
    { uint32_t ea = 0xa6760cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085d2u;
    c->r[1] = 0xa67618u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6761cu; rt_dispatch(c);
    c->r[1] = 0xfd9fa0u;
    { uint32_t ea = 0xa67628u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085dau;
    c->r[1] = 0xa67634u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67638u; rt_dispatch(c);
    c->r[1] = 0xfd9f88u;
    { uint32_t ea = 0xa67644u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085dau;
    c->r[1] = 0xa67650u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67654u; rt_dispatch(c);
    c->r[1] = 0xfd9f70u;
    { uint32_t ea = 0xa67660u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085d3u;
    c->r[1] = 0xa6766cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67670u; rt_dispatch(c);
    c->r[1] = 0xfd9f58u;
    { uint32_t ea = 0xa6767cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085cau;
    c->r[1] = 0xa67688u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6768cu; rt_dispatch(c);
    c->r[1] = 0xfd9f40u;
    { uint32_t ea = 0xa67698u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c6u;
    c->r[1] = 0xa676a4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa676a8u; rt_dispatch(c);
    c->r[1] = 0xfd9f28u;
    { uint32_t ea = 0xa676b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c4u;
    c->r[1] = 0xa676c0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa676c4u; rt_dispatch(c);
    c->r[1] = 0xfd9f10u;
    { uint32_t ea = 0xa676d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085beu;
    c->r[1] = 0xa676dcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa676e0u; rt_dispatch(c);
    c->r[1] = 0xfd9ef8u;
    { uint32_t ea = 0xa676ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b8u;
    c->r[1] = 0xa676f8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa676fcu; rt_dispatch(c);
    c->r[1] = 0xfd9ee0u;
    { uint32_t ea = 0xa67708u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b1u;
    c->r[1] = 0xa67714u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67718u; rt_dispatch(c);
    c->r[1] = 0xfd9ec8u;
    { uint32_t ea = 0xa67724u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085aau;
    c->r[1] = 0xa67730u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67734u; rt_dispatch(c);
    c->r[1] = 0xfd9eb0u;
    { uint32_t ea = 0xa67740u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a7u;
    c->r[1] = 0xa6774cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67750u; rt_dispatch(c);
    c->r[1] = 0xfd9e98u;
    { uint32_t ea = 0xa6775cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a5u;
    c->r[1] = 0xa67768u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6776cu; rt_dispatch(c);
    c->r[1] = 0xfd9e80u;
    { uint32_t ea = 0xa67778u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a4u;
    c->r[1] = 0xa67784u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67788u; rt_dispatch(c);
    c->r[1] = 0xfd9e68u;
    { uint32_t ea = 0xa67794u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a3u;
    c->r[1] = 0xa677a0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa677a4u; rt_dispatch(c);
    c->r[1] = 0xfd9e50u;
    { uint32_t ea = 0xa677b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a4u;
    c->r[1] = 0xa677bcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa677c0u; rt_dispatch(c);
    c->r[1] = 0xfd9e38u;
    { uint32_t ea = 0xa677ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0859au;
    c->r[1] = 0xa677d8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa677dcu; rt_dispatch(c);
    c->r[1] = 0xfd9e20u;
    { uint32_t ea = 0xa677e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08593u;
    c->r[1] = 0xa677f4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa677f8u; rt_dispatch(c);
    c->r[1] = 0xfd9e08u;
    { uint32_t ea = 0xa67804u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08590u;
    c->r[1] = 0xa67810u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67814u; rt_dispatch(c);
    c->r[1] = 0xfd9df0u;
    { uint32_t ea = 0xa67820u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08590u;
    c->r[1] = 0xa6782cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67830u; rt_dispatch(c);
    c->r[1] = 0xfd9dd8u;
    { uint32_t ea = 0xa6783cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0858eu;
    c->r[1] = 0xa67848u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6784cu; rt_dispatch(c);
    c->r[1] = 0xfd9dc0u;
    { uint32_t ea = 0xa67858u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08590u;
    c->r[1] = 0xa67864u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67868u; rt_dispatch(c);
    c->r[1] = 0xfd9da8u;
    { uint32_t ea = 0xa67874u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08591u;
    c->r[1] = 0xa67880u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67884u; rt_dispatch(c);
    c->r[1] = 0xfd9d90u;
    { uint32_t ea = 0xa67890u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08595u;
    c->r[1] = 0xa6789cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa678a0u; rt_dispatch(c);
    c->r[1] = 0xfd9d78u;
    { uint32_t ea = 0xa678acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085a2u;
    c->r[1] = 0xa678b8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa678bcu; rt_dispatch(c);
    c->r[1] = 0xfd9d60u;
    { uint32_t ea = 0xa678c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085acu;
    c->r[1] = 0xa678d4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa678d8u; rt_dispatch(c);
    c->r[1] = 0xfd9d48u;
    { uint32_t ea = 0xa678e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085acu;
    c->r[1] = 0xa678f0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa678f4u; rt_dispatch(c);
    c->r[1] = 0xfd9d30u;
    { uint32_t ea = 0xa67900u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085aau;
    c->r[1] = 0xa6790cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67910u; rt_dispatch(c);
    c->r[1] = 0xfd9d18u;
    { uint32_t ea = 0xa6791cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085acu;
    c->r[1] = 0xa67928u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6792cu; rt_dispatch(c);
    c->r[1] = 0xfd9d00u;
    { uint32_t ea = 0xa67938u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085adu;
    c->r[1] = 0xa67944u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67948u; rt_dispatch(c);
    c->r[1] = 0xfd9ce8u;
    { uint32_t ea = 0xa67954u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b1u;
    c->r[1] = 0xa67960u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67964u; rt_dispatch(c);
    c->r[1] = 0xfd9cd0u;
    { uint32_t ea = 0xa67970u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085beu;
    c->r[1] = 0xa6797cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67980u; rt_dispatch(c);
    c->r[1] = 0xfd9cb8u;
    { uint32_t ea = 0xa6798cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c8u;
    c->r[1] = 0xa67998u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6799cu; rt_dispatch(c);
    c->r[1] = 0xfd9ca0u;
    { uint32_t ea = 0xa679a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c5u;
    c->r[1] = 0xa679b4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa679b8u; rt_dispatch(c);
    c->r[1] = 0xfd9c88u;
    { uint32_t ea = 0xa679c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c5u;
    c->r[1] = 0xa679d0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa679d4u; rt_dispatch(c);
    c->r[1] = 0xfd9c70u;
    { uint32_t ea = 0xa679e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c1u;
    c->r[1] = 0xa679ecu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa679f0u; rt_dispatch(c);
    c->r[1] = 0xfd9c58u;
    { uint32_t ea = 0xa679fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bfu;
    c->r[1] = 0xa67a08u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67a0cu; rt_dispatch(c);
    c->r[1] = 0xfd9c40u;
    { uint32_t ea = 0xa67a18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bfu;
    c->r[1] = 0xa67a24u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67a28u; rt_dispatch(c);
    c->r[1] = 0xfd9c28u;
    { uint32_t ea = 0xa67a34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bbu;
    c->r[1] = 0xa67a40u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67a44u; rt_dispatch(c);
    c->r[1] = 0xfd9c10u;
    { uint32_t ea = 0xa67a50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085b9u;
    c->r[1] = 0xa67a5cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67a60u; rt_dispatch(c);
    c->r[1] = 0xfd9bf8u;
    { uint32_t ea = 0xa67a6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085bcu;
    c->r[1] = 0xa67a78u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67a7cu; rt_dispatch(c);
    c->r[1] = 0xfd9be0u;
    { uint32_t ea = 0xa67a88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c2u;
    c->r[1] = 0xa67a94u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67a98u; rt_dispatch(c);
    c->r[1] = 0xfd9bc8u;
    { uint32_t ea = 0xa67aa4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085c8u;
    c->r[1] = 0xa67ab0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67ab4u; rt_dispatch(c);
    c->r[1] = 0xfd9bb0u;
    { uint32_t ea = 0xa67ac0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085cbu;
    c->r[1] = 0xa67accu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67ad0u; rt_dispatch(c);
    c->r[1] = 0xfd9b98u;
    { uint32_t ea = 0xa67adcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085d7u;
    c->r[1] = 0xa67ae8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67aecu; rt_dispatch(c);
    c->r[1] = 0xfd9b80u;
    { uint32_t ea = 0xa67af8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085d9u;
    c->r[1] = 0xa67b04u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67b08u; rt_dispatch(c);
    c->r[1] = 0xfd9b68u;
    { uint32_t ea = 0xa67b14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085e9u;
    c->r[1] = 0xa67b20u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67b24u; rt_dispatch(c);
    c->r[1] = 0xfd9b50u;
    { uint32_t ea = 0xa67b30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd085f9u;
    c->r[1] = 0xa67b3cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67b40u; rt_dispatch(c);
    c->r[1] = 0xfd9b38u;
    { uint32_t ea = 0xa67b4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08605u;
    c->r[1] = 0xa67b58u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67b5cu; rt_dispatch(c);
    c->r[1] = 0xfd9b20u;
    { uint32_t ea = 0xa67b68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08607u;
    c->r[1] = 0xa67b74u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67b78u; rt_dispatch(c);
    c->r[1] = 0xfd9b08u;
    { uint32_t ea = 0xa67b84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08617u;
    c->r[1] = 0xa67b90u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67b94u; rt_dispatch(c);
    c->r[1] = 0xfd9af0u;
    { uint32_t ea = 0xa67ba0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08627u;
    c->r[1] = 0xa67bacu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67bb0u; rt_dispatch(c);
    c->r[1] = 0xfd9ad8u;
    { uint32_t ea = 0xa67bbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0862fu;
    c->r[1] = 0xa67bc8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67bccu; rt_dispatch(c);
    c->r[1] = 0xfd9ac0u;
    { uint32_t ea = 0xa67bd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08637u;
    c->r[1] = 0xa67be4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67be8u; rt_dispatch(c);
    c->r[1] = 0xfd9aa8u;
    { uint32_t ea = 0xa67bf4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08648u;
    c->r[1] = 0xa67c00u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67c04u; rt_dispatch(c);
    c->r[1] = 0xfd9a90u;
    { uint32_t ea = 0xa67c10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08659u;
    c->r[1] = 0xa67c1cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67c20u; rt_dispatch(c);
    c->r[1] = 0xfd9a78u;
    { uint32_t ea = 0xa67c2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08669u;
    c->r[1] = 0xa67c38u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67c3cu; rt_dispatch(c);
    c->r[1] = 0xfd9a60u;
    { uint32_t ea = 0xa67c48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08679u;
    c->r[1] = 0xa67c54u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67c58u; rt_dispatch(c);
    c->r[1] = 0xfd9a48u;
    { uint32_t ea = 0xa67c64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08689u;
    c->r[1] = 0xa67c70u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67c74u; rt_dispatch(c);
    c->r[1] = 0xfd9a30u;
    { uint32_t ea = 0xa67c80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08699u;
    c->r[1] = 0xa67c8cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67c90u; rt_dispatch(c);
    c->r[1] = 0xfd9a18u;
    { uint32_t ea = 0xa67c9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086a9u;
    c->r[1] = 0xa67ca8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67cacu; rt_dispatch(c);
    c->r[1] = 0xfd9a00u;
    { uint32_t ea = 0xa67cb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086b9u;
    c->r[1] = 0xa67cc4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67cc8u; rt_dispatch(c);
    c->r[1] = 0xfd99e8u;
    { uint32_t ea = 0xa67cd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086c7u;
    c->r[1] = 0xa67ce0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67ce4u; rt_dispatch(c);
    c->r[1] = 0xfd99d0u;
    { uint32_t ea = 0xa67cf0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086dbu;
    c->r[1] = 0xa67cfcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67d00u; rt_dispatch(c);
    c->r[1] = 0xfd99b8u;
    { uint32_t ea = 0xa67d0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086efu;
    c->r[1] = 0xa67d18u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67d1cu; rt_dispatch(c);
    c->r[1] = 0xfd99a0u;
    { uint32_t ea = 0xa67d28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086f9u;
    c->r[1] = 0xa67d34u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67d38u; rt_dispatch(c);
    c->r[1] = 0xfd9988u;
    { uint32_t ea = 0xa67d44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086f8u;
    c->r[1] = 0xa67d50u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67d54u; rt_dispatch(c);
    c->r[1] = 0xfd9970u;
    { uint32_t ea = 0xa67d60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086f7u;
    c->r[1] = 0xa67d6cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67d70u; rt_dispatch(c);
    c->r[1] = 0xfd9958u;
    { uint32_t ea = 0xa67d7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086f7u;
    c->r[1] = 0xa67d88u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67d8cu; rt_dispatch(c);
    c->r[1] = 0xfd9940u;
    { uint32_t ea = 0xa67d98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd086f9u;
    c->r[1] = 0xa67da4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67da8u; rt_dispatch(c);
    c->r[1] = 0xfd9928u;
    { uint32_t ea = 0xa67db4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08704u;
    c->r[1] = 0xa67dc0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67dc4u; rt_dispatch(c);
    c->r[1] = 0xfd9910u;
    { uint32_t ea = 0xa67dd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08703u;
    c->r[1] = 0xa67ddcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67de0u; rt_dispatch(c);
    c->r[1] = 0xfd98f8u;
    { uint32_t ea = 0xa67decu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08703u;
    c->r[1] = 0xa67df8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67dfcu; rt_dispatch(c);
    c->r[1] = 0xfd98e0u;
    { uint32_t ea = 0xa67e08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08705u;
    c->r[1] = 0xa67e14u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67e18u; rt_dispatch(c);
    c->r[1] = 0xfd98c8u;
    { uint32_t ea = 0xa67e24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08710u;
    c->r[1] = 0xa67e30u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67e34u; rt_dispatch(c);
    c->r[1] = 0xfd98b0u;
    { uint32_t ea = 0xa67e40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08714u;
    c->r[1] = 0xa67e4cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67e50u; rt_dispatch(c);
    c->r[1] = 0xfd9898u;
    { uint32_t ea = 0xa67e5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0871fu;
    c->r[1] = 0xa67e68u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67e6cu; rt_dispatch(c);
    c->r[1] = 0xfd9880u;
    { uint32_t ea = 0xa67e78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0872bu;
    c->r[1] = 0xa67e84u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67e88u; rt_dispatch(c);
    c->r[1] = 0xfd9868u;
    { uint32_t ea = 0xa67e94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08730u;
    c->r[1] = 0xa67ea0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67ea4u; rt_dispatch(c);
    c->r[1] = 0xfd9850u;
    { uint32_t ea = 0xa67eb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0873du;
    c->r[1] = 0xa67ebcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67ec0u; rt_dispatch(c);
    c->r[1] = 0xfd9838u;
    { uint32_t ea = 0xa67eccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08744u;
    c->r[1] = 0xa67ed8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67edcu; rt_dispatch(c);
    c->r[1] = 0xfd9820u;
    { uint32_t ea = 0xa67ee8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08749u;
    c->r[1] = 0xa67ef4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67ef8u; rt_dispatch(c);
    c->r[1] = 0xfd9808u;
    { uint32_t ea = 0xa67f04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08754u;
    c->r[1] = 0xa67f10u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67f14u; rt_dispatch(c);
    c->r[1] = 0xfd97f0u;
    { uint32_t ea = 0xa67f20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08760u;
    c->r[1] = 0xa67f2cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67f30u; rt_dispatch(c);
    c->r[1] = 0xfd97d8u;
    { uint32_t ea = 0xa67f3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08765u;
    c->r[1] = 0xa67f48u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67f4cu; rt_dispatch(c);
    c->r[1] = 0xfd97c0u;
    { uint32_t ea = 0xa67f58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08772u;
    c->r[1] = 0xa67f64u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67f68u; rt_dispatch(c);
    c->r[1] = 0xfd97a8u;
    { uint32_t ea = 0xa67f74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08779u;
    c->r[1] = 0xa67f80u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67f84u; rt_dispatch(c);
    c->r[1] = 0xfd9790u;
    { uint32_t ea = 0xa67f90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0877eu;
    c->r[1] = 0xa67f9cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67fa0u; rt_dispatch(c);
    c->r[1] = 0xfd9778u;
    { uint32_t ea = 0xa67facu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08782u;
    c->r[1] = 0xa67fb8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67fbcu; rt_dispatch(c);
    c->r[1] = 0xfd9760u;
    { uint32_t ea = 0xa67fc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08784u;
    c->r[1] = 0xa67fd4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67fd8u; rt_dispatch(c);
    c->r[1] = 0xfd9748u;
    { uint32_t ea = 0xa67fe4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0878bu;
    c->r[1] = 0xa67ff0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa67ff4u; rt_dispatch(c);
    c->r[1] = 0xfd9730u;
    { uint32_t ea = 0xa68000u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0878du;
    c->r[1] = 0xa6800cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68010u; rt_dispatch(c);
    c->r[1] = 0xfd9718u;
    { uint32_t ea = 0xa6801cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08794u;
    c->r[1] = 0xa68028u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6802cu; rt_dispatch(c);
    c->r[1] = 0xfd9700u;
    { uint32_t ea = 0xa68038u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08798u;
    c->r[1] = 0xa68044u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68048u; rt_dispatch(c);
    c->r[1] = 0xfd96e8u;
    { uint32_t ea = 0xa68054u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0879au;
    c->r[1] = 0xa68060u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68064u; rt_dispatch(c);
    c->r[1] = 0xfd96d0u;
    { uint32_t ea = 0xa68070u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0879du;
    c->r[1] = 0xa6807cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68080u; rt_dispatch(c);
    c->r[1] = 0xfd96b8u;
    { uint32_t ea = 0xa6808cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0879fu;
    c->r[1] = 0xa68098u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6809cu; rt_dispatch(c);
    c->r[1] = 0xfd96a0u;
    { uint32_t ea = 0xa680a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087a2u;
    c->r[1] = 0xa680b4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa680b8u; rt_dispatch(c);
    c->r[1] = 0xfd9688u;
    { uint32_t ea = 0xa680c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087a1u;
    c->r[1] = 0xa680d0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa680d4u; rt_dispatch(c);
    c->r[1] = 0xfd9670u;
    { uint32_t ea = 0xa680e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0879eu;
    c->r[1] = 0xa680ecu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa680f0u; rt_dispatch(c);
    c->r[1] = 0xfd9658u;
    { uint32_t ea = 0xa680fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087a0u;
    c->r[1] = 0xa68108u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6810cu; rt_dispatch(c);
    c->r[1] = 0xfd9640u;
    { uint32_t ea = 0xa68118u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087a6u;
    c->r[1] = 0xa68124u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68128u; rt_dispatch(c);
    c->r[1] = 0xfd9628u;
    { uint32_t ea = 0xa68134u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087b0u;
    c->r[1] = 0xa68140u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68144u; rt_dispatch(c);
    c->r[1] = 0xfd9610u;
    { uint32_t ea = 0xa68150u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087b5u;
    c->r[1] = 0xa6815cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68160u; rt_dispatch(c);
    c->r[1] = 0xfd95f8u;
    { uint32_t ea = 0xa6816cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087bau;
    c->r[1] = 0xa68178u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6817cu; rt_dispatch(c);
    c->r[1] = 0xfd95e0u;
    { uint32_t ea = 0xa68188u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087c3u;
    c->r[1] = 0xa68194u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68198u; rt_dispatch(c);
    c->r[1] = 0xfd95c8u;
    { uint32_t ea = 0xa681a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087ccu;
    c->r[1] = 0xa681b0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa681b4u; rt_dispatch(c);
    c->r[1] = 0xfd95b0u;
    { uint32_t ea = 0xa681c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087d5u;
    c->r[1] = 0xa681ccu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa681d0u; rt_dispatch(c);
    c->r[1] = 0xfd9598u;
    { uint32_t ea = 0xa681dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087deu;
    c->r[1] = 0xa681e8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa681ecu; rt_dispatch(c);
    c->r[1] = 0xfd9580u;
    { uint32_t ea = 0xa681f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087e7u;
    c->r[1] = 0xa68204u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68208u; rt_dispatch(c);
    c->r[1] = 0xfd9568u;
    { uint32_t ea = 0xa68214u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087f0u;
    c->r[1] = 0xa68220u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68224u; rt_dispatch(c);
    c->r[1] = 0xfd9550u;
    { uint32_t ea = 0xa68230u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087f3u;
    c->r[1] = 0xa6823cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68240u; rt_dispatch(c);
    c->r[1] = 0xfd9538u;
    { uint32_t ea = 0xa6824cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087f4u;
    c->r[1] = 0xa68258u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6825cu; rt_dispatch(c);
    c->r[1] = 0xfd9520u;
    { uint32_t ea = 0xa68268u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087f5u;
    c->r[1] = 0xa68274u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68278u; rt_dispatch(c);
    c->r[1] = 0xfd9508u;
    { uint32_t ea = 0xa68284u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087f6u;
    c->r[1] = 0xa68290u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68294u; rt_dispatch(c);
    c->r[1] = 0xfd94f0u;
    { uint32_t ea = 0xa682a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd087f9u;
    c->r[1] = 0xa682acu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa682b0u; rt_dispatch(c);
    c->r[1] = 0xfd94d8u;
    { uint32_t ea = 0xa682bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08802u;
    c->r[1] = 0xa682c8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa682ccu; rt_dispatch(c);
    c->r[1] = 0xfd94c0u;
    { uint32_t ea = 0xa682d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08805u;
    c->r[1] = 0xa682e4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa682e8u; rt_dispatch(c);
    c->r[1] = 0xfd94a8u;
    { uint32_t ea = 0xa682f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0880eu;
    c->r[1] = 0xa68300u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68304u; rt_dispatch(c);
    c->r[1] = 0xfd9490u;
    { uint32_t ea = 0xa68310u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08813u;
    c->r[1] = 0xa6831cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68320u; rt_dispatch(c);
    c->r[1] = 0xfd9478u;
    { uint32_t ea = 0xa6832cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0881du;
    c->r[1] = 0xa68338u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6833cu; rt_dispatch(c);
    c->r[1] = 0xfd9460u;
    { uint32_t ea = 0xa68348u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08827u;
    c->r[1] = 0xa68354u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68358u; rt_dispatch(c);
    c->r[1] = 0xfd9448u;
    { uint32_t ea = 0xa68364u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08831u;
    c->r[1] = 0xa68370u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68374u; rt_dispatch(c);
    c->r[1] = 0xfd9430u;
    { uint32_t ea = 0xa68380u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08831u;
    c->r[1] = 0xa6838cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68390u; rt_dispatch(c);
    c->r[1] = 0xfd9418u;
    { uint32_t ea = 0xa6839cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08836u;
    c->r[1] = 0xa683a8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa683acu; rt_dispatch(c);
    c->r[1] = 0xfd9400u;
    { uint32_t ea = 0xa683b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0883cu;
    c->r[1] = 0xa683c4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa683c8u; rt_dispatch(c);
    c->r[1] = 0xfd93e8u;
    { uint32_t ea = 0xa683d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08842u;
    c->r[1] = 0xa683e0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa683e4u; rt_dispatch(c);
    c->r[1] = 0xfd93d0u;
    { uint32_t ea = 0xa683f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08849u;
    c->r[1] = 0xa683fcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68400u; rt_dispatch(c);
    c->r[1] = 0xfd93b8u;
    { uint32_t ea = 0xa6840cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08859u;
    c->r[1] = 0xa68418u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6841cu; rt_dispatch(c);
    c->r[1] = 0xfd93a0u;
    { uint32_t ea = 0xa68428u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0886au;
    c->r[1] = 0xa68434u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68438u; rt_dispatch(c);
    c->r[1] = 0xfd9388u;
    { uint32_t ea = 0xa68444u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08870u;
    c->r[1] = 0xa68450u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68454u; rt_dispatch(c);
    c->r[1] = 0xfd9370u;
    { uint32_t ea = 0xa68460u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08877u;
    c->r[1] = 0xa6846cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68470u; rt_dispatch(c);
    c->r[1] = 0xfd9358u;
    { uint32_t ea = 0xa6847cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08877u;
    c->r[1] = 0xa68488u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6848cu; rt_dispatch(c);
    c->r[1] = 0xfd9340u;
    { uint32_t ea = 0xa68498u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08878u;
    c->r[1] = 0xa684a4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa684a8u; rt_dispatch(c);
    c->r[1] = 0xfd9328u;
    { uint32_t ea = 0xa684b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08876u;
    c->r[1] = 0xa684c0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa684c4u; rt_dispatch(c);
    c->r[1] = 0xfd9310u;
    { uint32_t ea = 0xa684d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08875u;
    c->r[1] = 0xa684dcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa684e0u; rt_dispatch(c);
    c->r[1] = 0xfd92f8u;
    { uint32_t ea = 0xa684ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08876u;
    c->r[1] = 0xa684f8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa684fcu; rt_dispatch(c);
    c->r[1] = 0xfd92e0u;
    { uint32_t ea = 0xa68508u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08885u;
    c->r[1] = 0xa68514u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68518u; rt_dispatch(c);
    c->r[1] = 0xfd92c8u;
    { uint32_t ea = 0xa68524u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08894u;
    c->r[1] = 0xa68530u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68534u; rt_dispatch(c);
    c->r[1] = 0xfd92b0u;
    { uint32_t ea = 0xa68540u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0889cu;
    c->r[1] = 0xa6854cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68550u; rt_dispatch(c);
    c->r[1] = 0xfd9298u;
    { uint32_t ea = 0xa6855cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088a7u;
    c->r[1] = 0xa68568u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6856cu; rt_dispatch(c);
    c->r[1] = 0xfd9280u;
    { uint32_t ea = 0xa68578u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088b0u;
    c->r[1] = 0xa68584u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68588u; rt_dispatch(c);
    c->r[1] = 0xfd9268u;
    { uint32_t ea = 0xa68594u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088bbu;
    c->r[1] = 0xa685a0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa685a4u; rt_dispatch(c);
    c->r[1] = 0xfd9250u;
    { uint32_t ea = 0xa685b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088c7u;
    c->r[1] = 0xa685bcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa685c0u; rt_dispatch(c);
    c->r[1] = 0xfd9238u;
    { uint32_t ea = 0xa685ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088d1u;
    c->r[1] = 0xa685d8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa685dcu; rt_dispatch(c);
    c->r[1] = 0xfd9220u;
    { uint32_t ea = 0xa685e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088d0u;
    c->r[1] = 0xa685f4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa685f8u; rt_dispatch(c);
    c->r[1] = 0xfd9208u;
    { uint32_t ea = 0xa68604u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088d1u;
    c->r[1] = 0xa68610u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68614u; rt_dispatch(c);
    c->r[1] = 0xfd91f0u;
    { uint32_t ea = 0xa68620u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088dcu;
    c->r[1] = 0xa6862cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68630u; rt_dispatch(c);
    c->r[1] = 0xfd91d8u;
    { uint32_t ea = 0xa6863cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088e4u;
    c->r[1] = 0xa68648u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6864cu; rt_dispatch(c);
    c->r[1] = 0xfd91c0u;
    { uint32_t ea = 0xa68658u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088eeu;
    c->r[1] = 0xa68664u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68668u; rt_dispatch(c);
    c->r[1] = 0xfd91a8u;
    { uint32_t ea = 0xa68674u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088f5u;
    c->r[1] = 0xa68680u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68684u; rt_dispatch(c);
    c->r[1] = 0xfd9190u;
    { uint32_t ea = 0xa68690u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088feu;
    c->r[1] = 0xa6869cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa686a0u; rt_dispatch(c);
    c->r[1] = 0xfd9178u;
    { uint32_t ea = 0xa686acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0890fu;
    c->r[1] = 0xa686b8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa686bcu; rt_dispatch(c);
    c->r[1] = 0xfd9160u;
    { uint32_t ea = 0xa686c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08922u;
    c->r[1] = 0xa686d4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa686d8u; rt_dispatch(c);
    c->r[1] = 0xfd9148u;
    { uint32_t ea = 0xa686e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08921u;
    c->r[1] = 0xa686f0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa686f4u; rt_dispatch(c);
    c->r[1] = 0xfd9130u;
    { uint32_t ea = 0xa68700u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08921u;
    c->r[1] = 0xa6870cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68710u; rt_dispatch(c);
    c->r[1] = 0xfd9118u;
    { uint32_t ea = 0xa6871cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08922u;
    c->r[1] = 0xa68728u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6872cu; rt_dispatch(c);
    c->r[1] = 0xfd9100u;
    { uint32_t ea = 0xa68738u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08928u;
    c->r[1] = 0xa68744u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68748u; rt_dispatch(c);
    c->r[1] = 0xfd90e8u;
    { uint32_t ea = 0xa68754u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0892cu;
    c->r[1] = 0xa68760u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68764u; rt_dispatch(c);
    c->r[1] = 0xfd90d0u;
    { uint32_t ea = 0xa68770u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08938u;
    c->r[1] = 0xa6877cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68780u; rt_dispatch(c);
    c->r[1] = 0xfd90b8u;
    { uint32_t ea = 0xa6878cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08938u;
    c->r[1] = 0xa68798u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6879cu; rt_dispatch(c);
    c->r[1] = 0xfd90a0u;
    { uint32_t ea = 0xa687a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08939u;
    c->r[1] = 0xa687b4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa687b8u; rt_dispatch(c);
    c->r[1] = 0xfd9088u;
    { uint32_t ea = 0xa687c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08941u;
    c->r[1] = 0xa687d0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa687d4u; rt_dispatch(c);
    c->r[1] = 0xfd9070u;
    { uint32_t ea = 0xa687e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08940u;
    c->r[1] = 0xa687ecu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa687f0u; rt_dispatch(c);
    c->r[1] = 0xfd9058u;
    { uint32_t ea = 0xa687fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08940u;
    c->r[1] = 0xa68808u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6880cu; rt_dispatch(c);
    c->r[1] = 0xfd9040u;
    { uint32_t ea = 0xa68818u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08942u;
    c->r[1] = 0xa68824u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68828u; rt_dispatch(c);
    c->r[1] = 0xfd9028u;
    { uint32_t ea = 0xa68834u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08945u;
    c->r[1] = 0xa68840u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68844u; rt_dispatch(c);
    c->r[1] = 0xfd9010u;
    { uint32_t ea = 0xa68850u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08948u;
    c->r[1] = 0xa6885cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68860u; rt_dispatch(c);
    c->r[1] = 0xfd8ff8u;
    { uint32_t ea = 0xa6886cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08950u;
    c->r[1] = 0xa68878u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6887cu; rt_dispatch(c);
    c->r[1] = 0xfd8fe0u;
    { uint32_t ea = 0xa68888u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0895au;
    c->r[1] = 0xa68894u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68898u; rt_dispatch(c);
    c->r[1] = 0xfd8fc8u;
    { uint32_t ea = 0xa688a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08962u;
    c->r[1] = 0xa688b0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa688b4u; rt_dispatch(c);
    c->r[1] = 0xfd8fb0u;
    { uint32_t ea = 0xa688c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0896au;
    c->r[1] = 0xa688ccu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa688d0u; rt_dispatch(c);
    c->r[1] = 0xfd8f98u;
    { uint32_t ea = 0xa688dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08973u;
    c->r[1] = 0xa688e8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa688ecu; rt_dispatch(c);
    c->r[1] = 0xfd8f80u;
    { uint32_t ea = 0xa688f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0897cu;
    c->r[1] = 0xa68904u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68908u; rt_dispatch(c);
    c->r[1] = 0xfd8f68u;
    { uint32_t ea = 0xa68914u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08984u;
    c->r[1] = 0xa68920u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68924u; rt_dispatch(c);
    c->r[1] = 0xfd8f50u;
    { uint32_t ea = 0xa68930u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08987u;
    c->r[1] = 0xa6893cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68940u; rt_dispatch(c);
    c->r[1] = 0xfd8f38u;
    { uint32_t ea = 0xa6894cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08989u;
    c->r[1] = 0xa68958u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6895cu; rt_dispatch(c);
    c->r[1] = 0xfd8f20u;
    { uint32_t ea = 0xa68968u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0898bu;
    c->r[1] = 0xa68974u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68978u; rt_dispatch(c);
    c->r[1] = 0xfd8f08u;
    { uint32_t ea = 0xa68984u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0898cu;
    c->r[1] = 0xa68990u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68994u; rt_dispatch(c);
    c->r[1] = 0xfd8ef0u;
    { uint32_t ea = 0xa689a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0898du;
    c->r[1] = 0xa689acu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa689b0u; rt_dispatch(c);
    c->r[1] = 0xfd8ed8u;
    { uint32_t ea = 0xa689bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08997u;
    c->r[1] = 0xa689c8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa689ccu; rt_dispatch(c);
    c->r[1] = 0xfd8ec0u;
    { uint32_t ea = 0xa689d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08997u;
    c->r[1] = 0xa689e4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa689e8u; rt_dispatch(c);
    c->r[1] = 0xfd8ea8u;
    { uint32_t ea = 0xa689f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08999u;
    c->r[1] = 0xa68a00u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68a04u; rt_dispatch(c);
    c->r[1] = 0xfd8e90u;
    { uint32_t ea = 0xa68a10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089a2u;
    c->r[1] = 0xa68a1cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68a20u; rt_dispatch(c);
    c->r[1] = 0xfd8e78u;
    { uint32_t ea = 0xa68a2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089a4u;
    c->r[1] = 0xa68a38u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68a3cu; rt_dispatch(c);
    c->r[1] = 0xfd8e60u;
    { uint32_t ea = 0xa68a48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089b4u;
    c->r[1] = 0xa68a54u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68a58u; rt_dispatch(c);
    c->r[1] = 0xfd8e48u;
    { uint32_t ea = 0xa68a64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089c4u;
    c->r[1] = 0xa68a70u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68a74u; rt_dispatch(c);
    c->r[1] = 0xfd8e30u;
    { uint32_t ea = 0xa68a80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089d1u;
    c->r[1] = 0xa68a8cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68a90u; rt_dispatch(c);
    c->r[1] = 0xfd8e18u;
    { uint32_t ea = 0xa68a9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089d9u;
    c->r[1] = 0xa68aa8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68aacu; rt_dispatch(c);
    c->r[1] = 0xfd8e00u;
    { uint32_t ea = 0xa68ab8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089e1u;
    c->r[1] = 0xa68ac4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68ac8u; rt_dispatch(c);
    c->r[1] = 0xfd8de8u;
    { uint32_t ea = 0xa68ad4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089eau;
    c->r[1] = 0xa68ae0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68ae4u; rt_dispatch(c);
    c->r[1] = 0xfd8dd0u;
    { uint32_t ea = 0xa68af0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089f1u;
    c->r[1] = 0xa68afcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68b00u; rt_dispatch(c);
    c->r[1] = 0xfd8db8u;
    { uint32_t ea = 0xa68b0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089f1u;
    c->r[1] = 0xa68b18u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68b1cu; rt_dispatch(c);
    c->r[1] = 0xfd8da0u;
    { uint32_t ea = 0xa68b28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089f2u;
    c->r[1] = 0xa68b34u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68b38u; rt_dispatch(c);
    c->r[1] = 0xfd8d88u;
    { uint32_t ea = 0xa68b44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089f4u;
    c->r[1] = 0xa68b50u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68b54u; rt_dispatch(c);
    c->r[1] = 0xfd8d70u;
    { uint32_t ea = 0xa68b60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089f7u;
    c->r[1] = 0xa68b6cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68b70u; rt_dispatch(c);
    c->r[1] = 0xfd8d58u;
    { uint32_t ea = 0xa68b7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd089ffu;
    c->r[1] = 0xa68b88u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68b8cu; rt_dispatch(c);
    c->r[1] = 0xfd8d40u;
    { uint32_t ea = 0xa68b98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a01u;
    c->r[1] = 0xa68ba4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68ba8u; rt_dispatch(c);
    c->r[1] = 0xfd8d28u;
    { uint32_t ea = 0xa68bb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a02u;
    c->r[1] = 0xa68bc0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68bc4u; rt_dispatch(c);
    c->r[1] = 0xfd8d10u;
    { uint32_t ea = 0xa68bd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a02u;
    c->r[1] = 0xa68bdcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68be0u; rt_dispatch(c);
    c->r[1] = 0xfd8cf8u;
    { uint32_t ea = 0xa68becu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a06u;
    c->r[1] = 0xa68bf8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68bfcu; rt_dispatch(c);
    c->r[1] = 0xfd8ce0u;
    { uint32_t ea = 0xa68c08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a15u;
    c->r[1] = 0xa68c14u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68c18u; rt_dispatch(c);
    c->r[1] = 0xfd8cc8u;
    { uint32_t ea = 0xa68c24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a1au;
    c->r[1] = 0xa68c30u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68c34u; rt_dispatch(c);
    c->r[1] = 0xfd8cb0u;
    { uint32_t ea = 0xa68c40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a1bu;
    c->r[1] = 0xa68c4cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68c50u; rt_dispatch(c);
    c->r[1] = 0xfd8c98u;
    { uint32_t ea = 0xa68c5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a23u;
    c->r[1] = 0xa68c68u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68c6cu; rt_dispatch(c);
    c->r[1] = 0xfd8c80u;
    { uint32_t ea = 0xa68c78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a22u;
    c->r[1] = 0xa68c84u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68c88u; rt_dispatch(c);
    c->r[1] = 0xfd8c68u;
    { uint32_t ea = 0xa68c94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a26u;
    c->r[1] = 0xa68ca0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68ca4u; rt_dispatch(c);
    c->r[1] = 0xfd8c50u;
    { uint32_t ea = 0xa68cb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a30u;
    c->r[1] = 0xa68cbcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68cc0u; rt_dispatch(c);
    c->r[1] = 0xfd8c38u;
    { uint32_t ea = 0xa68cccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a3fu;
    c->r[1] = 0xa68cd8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68cdcu; rt_dispatch(c);
    c->r[1] = 0xfd8c20u;
    { uint32_t ea = 0xa68ce8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a3bu;
    c->r[1] = 0xa68cf4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68cf8u; rt_dispatch(c);
    c->r[1] = 0xfd8c08u;
    { uint32_t ea = 0xa68d04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08a38u;
    c->r[1] = 0xa68d10u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68d14u; rt_dispatch(c);
    c->r[1] = 0xfd8bf0u;
    { uint32_t ea = 0xa68d20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_a68ed8;
L_a68ed8:;
    c->r[0] = 0xd0887eu;
    c->r[1] = 0xa68ee4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68ee8u; rt_dispatch(c);
    c->r[1] = 0xfd8a20u;
    { uint32_t ea = 0xa68ef4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08881u;
    c->r[1] = 0xa68f00u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68f04u; rt_dispatch(c);
    c->r[1] = 0xfd8a08u;
    { uint32_t ea = 0xa68f10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08884u;
    c->r[1] = 0xa68f1cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68f20u; rt_dispatch(c);
    c->r[1] = 0xfd89f0u;
    { uint32_t ea = 0xa68f2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0888fu;
    c->r[1] = 0xa68f38u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68f3cu; rt_dispatch(c);
    c->r[1] = 0xfd89d8u;
    { uint32_t ea = 0xa68f48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08891u;
    c->r[1] = 0xa68f54u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68f58u; rt_dispatch(c);
    c->r[1] = 0xfd89c0u;
    { uint32_t ea = 0xa68f64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08896u;
    c->r[1] = 0xa68f70u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68f74u; rt_dispatch(c);
    c->r[1] = 0xfd89a8u;
    { uint32_t ea = 0xa68f80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0889bu;
    c->r[1] = 0xa68f8cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68f90u; rt_dispatch(c);
    c->r[1] = 0xfd8990u;
    { uint32_t ea = 0xa68f9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088a2u;
    c->r[1] = 0xa68fa8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68facu; rt_dispatch(c);
    c->r[1] = 0xfd8978u;
    { uint32_t ea = 0xa68fb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088a7u;
    c->r[1] = 0xa68fc4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68fc8u; rt_dispatch(c);
    c->r[1] = 0xfd8960u;
    { uint32_t ea = 0xa68fd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088aeu;
    c->r[1] = 0xa68fe0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa68fe4u; rt_dispatch(c);
    c->r[1] = 0xfd8948u;
    { uint32_t ea = 0xa68ff0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088aeu;
    c->r[1] = 0xa68ffcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69000u; rt_dispatch(c);
    c->r[1] = 0xfd8930u;
    { uint32_t ea = 0xa6900cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088b1u;
    c->r[1] = 0xa69018u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6901cu; rt_dispatch(c);
    c->r[1] = 0xfd8918u;
    { uint32_t ea = 0xa69028u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088bbu;
    c->r[1] = 0xa69034u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69038u; rt_dispatch(c);
    c->r[1] = 0xfd8900u;
    { uint32_t ea = 0xa69044u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088cbu;
    c->r[1] = 0xa69050u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69054u; rt_dispatch(c);
    c->r[1] = 0xfd88e8u;
    { uint32_t ea = 0xa69060u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088d2u;
    c->r[1] = 0xa6906cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69070u; rt_dispatch(c);
    c->r[1] = 0xfd88d0u;
    { uint32_t ea = 0xa6907cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088dbu;
    c->r[1] = 0xa69088u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6908cu; rt_dispatch(c);
    c->r[1] = 0xfd88b8u;
    { uint32_t ea = 0xa69098u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088e5u;
    c->r[1] = 0xa690a4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa690a8u; rt_dispatch(c);
    c->r[1] = 0xfd88a0u;
    { uint32_t ea = 0xa690b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088e8u;
    c->r[1] = 0xa690c0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa690c4u; rt_dispatch(c);
    c->r[1] = 0xfd8888u;
    { uint32_t ea = 0xa690d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088eau;
    c->r[1] = 0xa690dcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa690e0u; rt_dispatch(c);
    c->r[1] = 0xfd8870u;
    { uint32_t ea = 0xa690ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088eeu;
    c->r[1] = 0xa690f8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa690fcu; rt_dispatch(c);
    c->r[1] = 0xfd8858u;
    { uint32_t ea = 0xa69108u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088fau;
    c->r[1] = 0xa69114u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69118u; rt_dispatch(c);
    c->r[1] = 0xfd8840u;
    { uint32_t ea = 0xa69124u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08907u;
    c->r[1] = 0xa69130u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69134u; rt_dispatch(c);
    c->r[1] = 0xfd8828u;
    { uint32_t ea = 0xa69140u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0890du;
    c->r[1] = 0xa6914cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69150u; rt_dispatch(c);
    c->r[1] = 0xfd8810u;
    { uint32_t ea = 0xa6915cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08913u;
    c->r[1] = 0xa69168u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6916cu; rt_dispatch(c);
    c->r[1] = 0xfd87f8u;
    { uint32_t ea = 0xa69178u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0891du;
    c->r[1] = 0xa69184u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69188u; rt_dispatch(c);
    c->r[1] = 0xfd87e0u;
    { uint32_t ea = 0xa69194u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd0891du;
    c->r[1] = 0xa691a0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa691a4u; rt_dispatch(c);
    c->r[1] = 0xfd87c8u;
    { uint32_t ea = 0xa691b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08913u;
    c->r[1] = 0xa691bcu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa691c0u; rt_dispatch(c);
    c->r[1] = 0xfd87b0u;
    { uint32_t ea = 0xa691ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08907u;
    c->r[1] = 0xa691d8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa691dcu; rt_dispatch(c);
    c->r[1] = 0xfd8798u;
    { uint32_t ea = 0xa691e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd08900u;
    c->r[1] = 0xa691f4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa691f8u; rt_dispatch(c);
    c->r[1] = 0xfd8780u;
    { uint32_t ea = 0xa69204u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088f6u;
    c->r[1] = 0xa69210u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69214u; rt_dispatch(c);
    c->r[1] = 0xfd8768u;
    { uint32_t ea = 0xa69220u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088e6u;
    c->r[1] = 0xa6922cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69230u; rt_dispatch(c);
    c->r[1] = 0xfd8750u;
    { uint32_t ea = 0xa6923cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088dbu;
    c->r[1] = 0xa69248u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa6924cu; rt_dispatch(c);
    c->r[1] = 0xfd8738u;
    { uint32_t ea = 0xa69258u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088dau;
    c->r[1] = 0xa69264u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69268u; rt_dispatch(c);
    c->r[1] = 0xfd8720u;
    { uint32_t ea = 0xa69274u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088d8u;
    c->r[1] = 0xa69280u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69284u; rt_dispatch(c);
    c->r[1] = 0xfd8708u;
    { uint32_t ea = 0xa69290u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088cfu;
    c->r[1] = 0xa6929cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa692a0u; rt_dispatch(c);
    c->r[1] = 0xfd86f0u;
    { uint32_t ea = 0xa692acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088c4u;
    c->r[1] = 0xa692b8u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa692bcu; rt_dispatch(c);
    c->r[1] = 0xfd86d8u;
    { uint32_t ea = 0xa692c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088b9u;
    c->r[1] = 0xa692d4u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa692d8u; rt_dispatch(c);
    c->r[1] = 0xfd86c0u;
    { uint32_t ea = 0xa692e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088acu;
    c->r[1] = 0xa692f0u + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa692f4u; rt_dispatch(c);
    c->r[1] = 0xfd86a8u;
    { uint32_t ea = 0xa69300u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xd088aau;
    c->r[1] = 0xa6930cu + c->r[0];
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0xa69310u; rt_dispatch(c);
    c->r[1] = 0xfd8690u;
    { uint32_t ea = 0xa6931cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
