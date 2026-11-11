#include "cpu.h"
#include "neon_rt.h"
void f_250bdc(Cpu *c);
void f_267310(Cpu *c);
void f_3630c4(Cpu *c);
void f_366ad0(Cpu *c);
void f_394c80(Cpu *c);
void f_394cbc(Cpu *c);
void f_3971f0(Cpu *c);
void f_39738c(Cpu *c);
void f_3a6490(Cpu *c);
void f_3a6538(Cpu *c);
void f_3a6598(Cpu *c);
void f_3a72e4(Cpu *c);
void f_444f14(Cpu *c);
void f_45e378(Cpu *c);
void f_462f68(Cpu *c);
void f_462f94(Cpu *c);
void f_5b1964(Cpu *c);
void f_5b1d70(Cpu *c);
void f_5ba060(Cpu *c);
void f_5d7e90(Cpu *c);
void f_5df2a8(Cpu *c);
void f_5df378(Cpu *c);
void f_5eb1f4(Cpu *c);
void f_5eed68(Cpu *c);
void f_5efb30(Cpu *c);
void f_5f0c3c(Cpu *c);
void f_5f0f24(Cpu *c);
void f_5f1030(Cpu *c);
void f_5f141c(Cpu *c);
void f_5f1778(Cpu *c);
void f_5f1da4(Cpu *c);
void f_5f2ef8(Cpu *c);
void f_5f2fa0(Cpu *c);
void f_5f85fc(Cpu *c);
void f_5f8610(Cpu *c);
void f_5f8634(Cpu *c);
void f_6e3478(Cpu *c);
void f_70cbd0(Cpu *c);
void f_723984(Cpu *c);
void f_7239ac(Cpu *c);
void f_723b0c(Cpu *c);
void f_723da4(Cpu *c);
void f_724040(Cpu *c);
void f_724190(Cpu *c);
void f_72420c(Cpu *c);
void f_724288(Cpu *c);
void f_724384(Cpu *c);
void f_72441c(Cpu *c);
void f_724e58(Cpu *c);
void f_725938(Cpu *c);
void f_725a9c(Cpu *c);
void f_726254(Cpu *c);
void f_726dd4(Cpu *c);
void f_726f48(Cpu *c);
void f_75fef8(Cpu *c);
void f_75ff50(Cpu *c);
void f_760058(Cpu *c);
void f_760238(Cpu *c);
void f_761ed8(Cpu *c);
void f_85dce4(Cpu *c);
void f_85dd24(Cpu *c);
void f_85dd68(Cpu *c);
void f_85e078(Cpu *c);
void f_8798d4(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdc4(Cpu *c);
void f_5eebb8(Cpu *restrict c) {
    FN_ENTER(0x5eebb8u);
L_5eebb8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x144a514u;
    { uint32_t ea = 0x5eebccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14] + 0x572u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5eec6c; }
    c->r[0] = 0x144a19cu;
    c->r[2] = 0x0u;
    c->r[9] = 0x1u;
    { uint32_t ea = 0x5eebecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x123c310u;
    c->r[3] = 0x5eebf8u + c->r[0];
    c->r[0] = 0x123c308u;
    c->r[12] = 0x5eec00u + c->r[0];
L_5eebfc:;
    c->r[0] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = c->r[5] & 0x1fu;
    c->r[5] = (c->r[5] >> 5);
    c->r[7] = c->r[10] + (c->r[5] << 2);
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[6] + 0x958u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[9], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eec60; }
    c->r[4] = c->r[12] + c->r[2];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[14] + (c->r[4] >> 3);
    c->r[4] = c->r[4] & 0x7u;
    { uint32_t ea = c->r[1] + 0x500u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[9], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5eec60; }
    { uint32_t ea = c->r[7] + 0x960u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sh_lsl(c->r[9], c->r[0]);
    c->r[1] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[7] + 0x960u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x968u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    c->r[0] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[7] + 0x968u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_5eec60:;
    c->r[2] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[2], 0x30u);
    if (COND_NE) { goto L_5eebfc; }
L_5eec6c:;
    c->r[0] = 0x123c1acu;
    c->r[2] = 0x5u;
    c->r[1] = 0x5eec7cu + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x5eec80u; f_5f1778(c);
    c->r[0] = 0x123c1c0u;
    c->r[2] = 0x2u;
    c->r[1] = 0x5eec90u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x5eec94u; f_5f1778(c);
    c->r[14] = 0x5eec98u; f_5eb1f4(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x5eeca0u; f_5eed68(c);
    c->r[0] = 0x144a0dcu;
    { uint32_t ea = 0x5eecacu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eecb0u; f_725a9c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eecb8u; f_724e58(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eecc0u; f_725938(c);
    c->r[0] = 0x144a4f4u;
    c->r[1] = 0x62u;
    { uint32_t ea = 0x5eecd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eecd4u; f_3a6490(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5eed38; }
    c->r[1] = 0x144a3f4u;
    c->r[0] = 0x144a4d4u;
    { uint32_t ea = 0x5eececu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5eecf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x577u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eed2c; }
    c->r[14] = 0x5eed04u; f_3a72e4(c);
    (void)f_subs(c, c->r[0], 0x46u);
    if (COND_CC) { goto L_5eed38; }
    c->r[0] = 0x144a3c0u;
    c->r[1] = 0x25eu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5eed20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_444f14(c);
L_5eed2c:;
    { uint32_t ea = c->r[0] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[1]); }
L_5eed38:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5eed68(Cpu *restrict c) {
    FN_ENTER(0x5eed68u);
L_5eed68:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[0] = 0x144a008u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5eed80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eee1c; }
    c->r[3] = 0x0u;
    c->r[2] = 0x1u;
L_5eed94:;
    c->r[7] = c->r[3];
    c->r[3] = 0x6u;
    (void)f_subs(c, c->r[7], 0x5u);
    if (COND_EQ) { goto L_5eed94; }
    c->r[3] = c->r[7] + 0x5u;
    c->r[6] = (c->r[3] >> 5);
    c->r[6] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[6] + 0xd8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5eee1c; }
    c->r[3] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[3], 0xfu);
    if (COND_CC) { goto L_5eed94; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144baf0u;
    c->r[1] = 0x1cu;
    { uint32_t ea = 0x5eedf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eedfcu; f_3630c4(c);
    c->r[0] = 0x1449f7cu;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5eee0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5eee28; }
    goto L_5eee70;
L_5eee1c:;
    c->r[5] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eee70; }
L_5eee28:;
    { uint32_t ea = c->r[0] + 0xd8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x1fu;
    (void)f_subs(c, c->r[2], 0x1fu);
    if (COND_NE) { goto L_5eee70; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144ba80u;
    c->r[1] = 0x1du;
    { uint32_t ea = 0x5eee68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eee6cu; f_3630c4(c);
    c->r[4] = 0x1u;
L_5eee70:;
    c->r[0] = 0x144a25cu;
    c->r[6] = 0x0u;
    c->r[11] = 0x0u;
    { uint32_t ea = 0x5eee84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x501u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5eeee4; }
    c->r[0] = 0x1449ee8u;
    c->r[11] = 0x0u;
    { uint32_t ea = 0x5eeea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eeee4; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40000000u;
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144ba0cu;
    c->r[1] = 0x1eu;
    { uint32_t ea = 0x5eeedcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eeee0u; f_3630c4(c);
    c->r[11] = 0x1u;
L_5eeee4:;
    c->r[0] = 0x1449e98u;
    { uint32_t ea = 0x5eeef0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eef58; }
    c->r[14] = 0x5eef00u; f_5f2ef8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5eef58; }
    c->r[0] = 0x1449e74u;
    { uint32_t ea = 0x5eef14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eef38; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5eef38:;
    c->r[1] = c->r[1] | 0x80u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b998u;
    c->r[1] = 0x27u;
    { uint32_t ea = 0x5eef50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eef54u; f_3630c4(c);
    c->r[6] = 0x1u;
L_5eef58:;
    c->r[0] = 0x1449e1cu;
    c->r[10] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x5eef6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eefdc; }
    c->r[1] = 0x4u;
    c->r[14] = 0x5eef80u; f_72420c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_5eefdc; }
    c->r[0] = 0x1449df0u;
    { uint32_t ea = 0x5eef98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5eefbc; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5eefbc:;
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b914u;
    c->r[1] = 0x2fu;
    { uint32_t ea = 0x5eefd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5eefd8u; f_3630c4(c);
    c->r[7] = 0x1u;
L_5eefdc:;
    c->r[0] = 0x1449da0u;
    { uint32_t ea = 0x5eefe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef08c; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ef08c; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_5ef08c; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_5ef08c; }
    { uint32_t ea = c->r[0] + 0xd91u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd91u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_5ef08c; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x80000u;
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b870u;
    c->r[1] = 0x33u;
    { uint32_t ea = 0x5ef078u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef07cu; f_3630c4(c);
    c->r[0] = 0x1449cfcu;
    c->r[10] = 0x1u;
    { uint32_t ea = 0x5ef08cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ef08c:;
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef104; }
    c->r[1] = 0xau;
    c->r[14] = 0x5ef0a8u; f_724190(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_5ef104; }
    c->r[0] = 0x1449cc8u;
    { uint32_t ea = 0x5ef0c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef0e4; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5ef0e4:;
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b7ecu;
    c->r[1] = 0x44u;
    { uint32_t ea = 0x5ef0fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef100u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5ef104:;
    c->r[0] = 0x1449c78u;
    { uint32_t ea = 0x5ef110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef17c; }
    c->r[2] = 0x1449fb8u;
    { uint32_t ea = 0x5ef128u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x51au; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ef17c; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x200u;
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b784u;
    c->r[1] = 0x49u;
    { uint32_t ea = 0x5ef164u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef168u; f_3630c4(c);
    c->r[0] = 0x1449c10u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x5ef178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ef17c:;
    c->r[6] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[9] = 0x0u;
    if (COND_NE) { goto L_5ef1f0; }
    c->r[1] = 0x14u;
    c->r[14] = 0x5ef194u; f_724190(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[9] = 0x0u;
    if (COND_NE) { goto L_5ef1f0; }
    c->r[0] = 0x1449bdcu;
    { uint32_t ea = 0x5ef1acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef1d0; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5ef1d0:;
    c->r[1] = c->r[1] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b700u;
    c->r[1] = 0x53u;
    { uint32_t ea = 0x5ef1e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef1ecu; f_3630c4(c);
    c->r[9] = 0x1u;
L_5ef1f0:;
    c->r[0] = 0x1449b8cu;
    { uint32_t ea = 0x5ef1fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef274; }
    { uint32_t ea = c->r[0] + 0xd8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xff000000u);
    if (COND_CC) { goto L_5ef274; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7u;
    (void)f_subs(c, c->r[2], 0x7u);
    if (COND_NE) { goto L_5ef274; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b688u;
    c->r[1] = 0x58u;
    { uint32_t ea = 0x5ef260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef264u; f_3630c4(c);
    c->r[0] = 0x1449b14u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0x5ef274u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ef274:;
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[11] = 0x0u;
    c->r[10] = 0x0u;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef2ec; }
    c->r[1] = 0x1cu;
    c->r[14] = 0x5ef290u; f_724190(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[10] = 0x0u;
    if (COND_NE) { goto L_5ef2ec; }
    c->r[0] = 0x1449ae0u;
    { uint32_t ea = 0x5ef2a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef2cc; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5ef2cc:;
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b604u;
    c->r[1] = 0x62u;
    { uint32_t ea = 0x5ef2e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef2e8u; f_3630c4(c);
    c->r[10] = 0x1u;
L_5ef2ec:;
    c->r[0] = 0x1449a90u;
    { uint32_t ea = 0x5ef2f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_5ef390; }
    c->r[3] = 0x0u;
    c->r[2] = 0x1u;
L_5ef30c:;
    c->r[7] = c->r[3];
    c->r[3] = 0x6u;
    (void)f_subs(c, c->r[7], 0x5u);
    if (COND_EQ) { goto L_5ef30c; }
    c->r[3] = c->r[7] + 0x2au;
    c->r[4] = (c->r[3] >> 5);
    c->r[3] = c->r[3] & 0x1fu;
    c->r[4] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[4] + 0xd8cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[2], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5ef38c; }
    c->r[3] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[3], 0xfu);
    if (COND_CC) { goto L_5ef30c; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b574u;
    c->r[1] = 0x7fu;
    { uint32_t ea = 0x5ef374u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef378u; f_3630c4(c);
    c->r[0] = 0x1449a00u;
    c->r[11] = 0x1u;
    { uint32_t ea = 0x5ef388u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef390;
L_5ef38c:;
    c->r[11] = 0x0u;
L_5ef390:;
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef3fc; }
    c->r[14] = 0x5ef3a4u; f_5f2fa0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ef3fc; }
    c->r[0] = 0x14499d0u;
    { uint32_t ea = 0x5ef3b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef3dc; }
    { uint32_t ea = c->r[0] + 0xc4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc60u; ST32(ea, c->r[2]); }
L_5ef3dc:;
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc38u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b4f4u;
    c->r[1] = 0x81u;
    { uint32_t ea = 0x5ef3f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef3f8u; f_3630c4(c);
    c->r[7] = 0x1u;
L_5ef3fc:;
    c->r[0] = 0x1449980u;
    { uint32_t ea = 0x5ef408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef474; }
    c->r[14] = 0x5ef418u; f_724288(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ef474; }
    c->r[0] = 0x144995cu;
    { uint32_t ea = 0x5ef42cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef450; }
    { uint32_t ea = c->r[0] + 0xc4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc60u; ST32(ea, c->r[2]); }
L_5ef450:;
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc38u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144b480u;
    c->r[1] = 0x83u;
    { uint32_t ea = 0x5ef468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef46cu; f_3630c4(c);
    c->r[14] = 0x5ef470u; f_5f1da4(c);
    goto L_5ef4d0;
L_5ef474:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | c->r[1];
    c->r[0] = c->r[0] | c->r[5];
    c->r[0] = c->r[0] | c->r[8];
    c->r[0] = c->r[0] | c->r[9];
    c->r[0] = c->r[0] | c->r[6];
    c->r[0] = c->r[0] | c->r[10];
    c->r[0] = c->r[0] | c->r[11];
    c->r[4] = c->r[0] | c->r[7];
    c->r[14] = 0x5ef4c0u; f_5f1da4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_5ef4d0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ef550; }
L_5ef4d0:;
    c->r[0] = 0x1449ae4u;
    { uint32_t ea = 0x5ef4dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ef518; }
    c->r[0] = 0x14496c0u;
    { uint32_t ea = 0x5ef4f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef4f8u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5ef550; }
    c->r[0] = 0x14496a8u;
    { uint32_t ea = 0x5ef50cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef510u; f_5f8610(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5ef550; }
L_5ef518:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1du;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x5ef52cu; f_85dd68(c);
    c->r[0] = 0x144969cu;
    c->r[1] = 0xfu;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x5ef544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x5ef550u; f_6e3478(c);
L_5ef550:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5ef5fc(Cpu *restrict c) {
    FN_ENTER(0x5ef5fcu);
L_5ef5fc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1449bb4u;
    c->r[1] = 0x62u;
    { uint32_t ea = 0x5ef610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ef614u; f_3a6490(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5ef678; }
    c->r[1] = 0x1449ab4u;
    c->r[0] = 0x1449b94u;
    { uint32_t ea = 0x5ef62cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5ef630u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x577u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef66c; }
    c->r[14] = 0x5ef644u; f_3a72e4(c);
    (void)f_subs(c, c->r[0], 0x46u);
    if (COND_CC) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x1449a80u;
    c->r[1] = 0x25eu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5ef660u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_444f14(c);
L_5ef66c:;
    { uint32_t ea = c->r[0] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[1]); }
L_5ef678:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ef68c(Cpu *restrict c) {
    FN_ENTER(0x5ef68cu);
L_5ef68c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    c->r[0] = 0x1d5u;
    c->r[0] = c->r[4] - c->r[0];
    (void)f_subs(c, c->r[0], 0x44u);
    if (COND_HI) { goto L_5ef7d4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5ef6b0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5ef7c8u: goto L_5ef7c8; case 0x5ef7d4u: goto L_5ef7d4; case 0x5ef7f0u: goto L_5ef7f0; case 0x5ef7fcu: goto L_5ef7fc; case 0x5ef808u: goto L_5ef808; case 0x5ef814u: goto L_5ef814; case 0x5ef820u: goto L_5ef820; case 0x5ef82cu: goto L_5ef82c; case 0x5ef838u: goto L_5ef838; case 0x5ef844u: goto L_5ef844; case 0x5ef850u: goto L_5ef850; case 0x5ef85cu: goto L_5ef85c; case 0x5ef868u: goto L_5ef868; case 0x5ef874u: goto L_5ef874; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5ef7c8:;
    c->r[0] = 0x14493fcu;
    { uint32_t ea = 0x5ef7d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef7d4:;
    c->r[0] = c->r[4] - 0x12cu;
    (void)f_subs(c, c->r[0], 0x100u);
    if (COND_CS) { c->r[0] = 0x4f6u; }
    if (COND_CS) { c->r[0] = c->r[4] - c->r[0]; }
    if (COND_CS) { (void)f_subs(c, c->r[0], 0x7eu); }
    if (COND_CC) { goto L_5ef88c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_5ef7f0:;
    c->r[0] = 0x14493d4u;
    { uint32_t ea = 0x5ef7fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef7fc:;
    c->r[0] = 0x14493c8u;
    { uint32_t ea = 0x5ef808u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef808:;
    c->r[0] = 0x14493bcu;
    { uint32_t ea = 0x5ef814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef814:;
    c->r[0] = 0x14493b0u;
    { uint32_t ea = 0x5ef820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef820:;
    c->r[0] = 0x14493a4u;
    { uint32_t ea = 0x5ef82cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef82c:;
    c->r[0] = 0x1449398u;
    { uint32_t ea = 0x5ef838u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef838:;
    c->r[0] = 0x144938cu;
    { uint32_t ea = 0x5ef844u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef844:;
    c->r[0] = 0x1449380u;
    { uint32_t ea = 0x5ef850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef850:;
    c->r[0] = 0x1449374u;
    { uint32_t ea = 0x5ef85cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef85c:;
    c->r[0] = 0x1449368u;
    { uint32_t ea = 0x5ef868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef868:;
    c->r[0] = 0x144935cu;
    { uint32_t ea = 0x5ef874u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5ef87c;
L_5ef874:;
    c->r[0] = 0x1449350u;
    { uint32_t ea = 0x5ef880u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ef87c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[14] = 0x5ef88cu; f_39738c(c);
L_5ef88c:;
    c->r[14] = 0x5ef890u; f_8798d4(c);
    c->r[0] = 0x1449338u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x5ef8a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_761ed8(c);
}
void f_5ef8e0(Cpu *restrict c) {
    FN_ENTER(0x5ef8e0u);
L_5ef8e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5ef970; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; c->r[14] = 0x5ef8fcu; rt_dispatch(c);
    c->r[1] = 0x1449738u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x5ef90cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_5ef970; }
    c->r[0] = 0x1449468u;
    { uint32_t ea = 0x5ef920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x958u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0] + 0x994u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5ef970; }
    { uint32_t ea = c->r[0] + 0x99cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1000000u;
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0x99cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x9a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0x9a4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x994u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x19u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5ef968u; f_85dd68(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_5f141c(c);
L_5ef970:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ef97c(Cpu *restrict c) {
    FN_ENTER(0x5ef97cu);
L_5ef97c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x14493f0u;
    c->r[2] = (c->r[0] >> 5);
    c->r[12] = c->r[0] & 0x1fu;
    c->r[14] = 0x1u;
    { uint32_t ea = 0x5ef998u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + (c->r[2] << 2);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + 0x994u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[4] = v; }
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[3] + 0x99cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = sh_lsl(c->r[14], c->r[12]);
    (void)f_subs(c, c->r[0], 0x5u);
    c->r[0] = 0x0u;
    c->r[2] = c->r[2] | c->r[12];
    { uint32_t ea = c->r[3] + 0x99cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x9a4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | c->r[12];
    { uint32_t ea = c->r[3] + 0x9a4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] | c->r[12];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    if (COND_HI) { c->r[1] = 0x19u; }
    c->r[2] = 0x0u;
    if (COND_LS) { c->r[1] = 0x1au; }
    c->r[14] = 0x5ef9e8u; f_85dd68(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_5f141c(c);
}
void f_5ef9f4(Cpu *restrict c) {
    FN_ENTER(0x5ef9f4u);
L_5ef9f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1449380u;
    { uint32_t ea = 0x5efa08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5efb10; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5efb10; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_5efb10; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_5efb10; }
    { uint32_t ea = c->r[0] + 0xd91u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xd91u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_5efb10; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x80000u;
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x144ae5cu;
    c->r[1] = 0x33u;
    { uint32_t ea = 0x5efa8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5efa90u; f_3630c4(c);
    c->r[0] = 0x1449524u;
    { uint32_t ea = 0x5efa9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5efad8; }
    c->r[0] = 0x1449100u;
    { uint32_t ea = 0x5efab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5efab8u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5efb10; }
    c->r[0] = 0x14490e8u;
    { uint32_t ea = 0x5efaccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5efad0u; f_5f8610(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5efb10; }
L_5efad8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1du;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x5efaecu; f_85dd68(c);
    c->r[0] = 0x14490dcu;
    c->r[1] = 0xfu;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x5efb04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x5efb10u; f_6e3478(c);
L_5efb10:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5efb30(Cpu *restrict c) {
    FN_ENTER(0x5efb30u);
L_5efb30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1449240u;
    c->r[6] = c->r[1];
    { uint32_t ea = 0x5efb48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5efb4cu; f_724040(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5efb60; }
L_5efb58:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5efb60:;
    c->r[0] = c->r[6] - 0x2u;
    (void)f_subs(c, c->r[0], 0xbcu);
    if (COND_HI) { goto L_5efb58; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x5efb78u + 0xcu;
    c->r[1] = 0x8899u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x5efb58u: goto L_5efb58; case 0x5efe78u: goto L_5efe78; case 0x5efe98u: goto L_5efe98; case 0x5efec4u: goto L_5efec4; case 0x5efee8u: goto L_5efee8; case 0x5eff20u: goto L_5eff20; case 0x5eff40u: goto L_5eff40; case 0x5eff60u: goto L_5eff60; case 0x5eff80u: goto L_5eff80; case 0x5effa0u: goto L_5effa0; case 0x5effc0u: goto L_5effc0; case 0x5effe0u: goto L_5effe0; case 0x5f0000u: goto L_5f0000; case 0x5f0020u: goto L_5f0020; case 0x5f0040u: goto L_5f0040; case 0x5f0060u: goto L_5f0060; case 0x5f006cu: goto L_5f006c; case 0x5f008cu: goto L_5f008c; case 0x5f00acu: goto L_5f00ac; case 0x5f00ccu: goto L_5f00cc; case 0x5f00ecu: goto L_5f00ec; case 0x5f00f4u: goto L_5f00f4; case 0x5f00fcu: goto L_5f00fc; case 0x5f011cu: goto L_5f011c; case 0x5f0124u: goto L_5f0124; case 0x5f0144u: goto L_5f0144; case 0x5f0154u: goto L_5f0154; case 0x5f016cu: goto L_5f016c; case 0x5f018cu: goto L_5f018c; case 0x5f01acu: goto L_5f01ac; case 0x5f01ccu: goto L_5f01cc; case 0x5f01ecu: goto L_5f01ec; case 0x5f0228u: goto L_5f0228; case 0x5f0248u: goto L_5f0248; case 0x5f025cu: goto L_5f025c; case 0x5f027cu: goto L_5f027c; case 0x5f029cu: goto L_5f029c; case 0x5f02bcu: goto L_5f02bc; case 0x5f02dcu: goto L_5f02dc; case 0x5f02fcu: goto L_5f02fc; case 0x5f031cu: goto L_5f031c; case 0x5f033cu: goto L_5f033c; case 0x5f0350u: goto L_5f0350; case 0x5f0370u: goto L_5f0370; case 0x5f0390u: goto L_5f0390; case 0x5f03b0u: goto L_5f03b0; case 0x5f03d0u: goto L_5f03d0; case 0x5f03f0u: goto L_5f03f0; case 0x5f0410u: goto L_5f0410; case 0x5f0430u: goto L_5f0430; case 0x5f0450u: goto L_5f0450; case 0x5f0470u: goto L_5f0470; case 0x5f0490u: goto L_5f0490; case 0x5f04b0u: goto L_5f04b0; case 0x5f04d0u: goto L_5f04d0; case 0x5f04f0u: goto L_5f04f0; case 0x5f0510u: goto L_5f0510; case 0x5f0530u: goto L_5f0530; case 0x5f0550u: goto L_5f0550; case 0x5f0578u: goto L_5f0578; case 0x5f0598u: goto L_5f0598; case 0x5f05b8u: goto L_5f05b8; case 0x5f05d8u: goto L_5f05d8; case 0x5f05f8u: goto L_5f05f8; case 0x5f0618u: goto L_5f0618; case 0x5f0638u: goto L_5f0638; case 0x5f0658u: goto L_5f0658; case 0x5f0678u: goto L_5f0678; case 0x5f0698u: goto L_5f0698; case 0x5f06b8u: goto L_5f06b8; case 0x5f06d8u: goto L_5f06d8; case 0x5f06f8u: goto L_5f06f8; case 0x5f0718u: goto L_5f0718; case 0x5f0738u: goto L_5f0738; case 0x5f0778u: goto L_5f0778; case 0x5f0798u: goto L_5f0798; case 0x5f07b8u: goto L_5f07b8; case 0x5f07d0u: goto L_5f07d0; case 0x5f07f0u: goto L_5f07f0; case 0x5f0830u: goto L_5f0830; case 0x5f0850u: goto L_5f0850; case 0x5f0870u: goto L_5f0870; case 0x5f0890u: goto L_5f0890; case 0x5f08b0u: goto L_5f08b0; case 0x5f08d0u: goto L_5f08d0; case 0x5f08f0u: goto L_5f08f0; case 0x5f0910u: goto L_5f0910; case 0x5f0930u: goto L_5f0930; case 0x5f0950u: goto L_5f0950; case 0x5f0970u: goto L_5f0970; case 0x5f0990u: goto L_5f0990; case 0x5f09b0u: goto L_5f09b0; case 0x5f09e0u: goto L_5f09e0; case 0x5f0a00u: goto L_5f0a00; case 0x5f0a34u: goto L_5f0a34; case 0x5f0a54u: goto L_5f0a54; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5efe78:;
    c->r[0] = 0x1449258u;
    c->r[1] = 0x501u;
    { uint32_t ea = 0x5efe88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_5efeb4; }
    goto L_5eff14;
L_5efe98:;
    c->r[0] = 0x1449238u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x5efea8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x503u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5efb58; }
L_5efeb4:;
    { uint32_t ea = c->r[0] + 0x50du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = (c->r[0] >> 4) & 0x1u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5efec4:;
    c->r[0] = 0x144920cu;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x5efed4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x501u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5efb58; }
    { uint32_t ea = c->r[0] + 0x50du; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5eff08;
L_5efee8:;
    c->r[0] = 0x14491e8u;
    c->r[1] = 0x57du;
    { uint32_t ea = 0x5efef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_5eff14; }
    { uint32_t ea = c->r[0] + 0x5afu; uint32_t v = LD8(ea); c->r[0] = v; }
L_5eff08:;
    c->r[4] = c->r[0] & 0x1u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5eff14:;
    c->r[4] = 0x1u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5eff20:;
    c->r[0] = 0x1448e58u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5eff30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2979u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5eff40:;
    c->r[0] = 0x1448e38u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5eff50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2bceu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5eff60:;
    c->r[0] = 0x1448e18u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5eff70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x292eu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5eff80:;
    c->r[0] = 0x1448df8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5eff90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2bd0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5effa0:;
    c->r[0] = 0x1448dd8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5effb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2984u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5effc0:;
    c->r[0] = 0x1448db8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5effd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2bcdu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5effe0:;
    c->r[0] = 0x1448d98u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5efff0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x290fu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0000:;
    c->r[0] = 0x1448d78u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0010u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2be7u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0020:;
    c->r[0] = 0x1448d58u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0030u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x291du;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0040:;
    c->r[0] = 0x1448d38u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0050u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2bcau;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0060:;
    c->r[0] = 0x1448d1cu;
    { uint32_t ea = 0x5f006cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5f08d8;
L_5f006c:;
    c->r[0] = 0x1448d0cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f007cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2bc7u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f008c:;
    c->r[0] = 0x1448cecu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f009cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2971u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f00ac:;
    c->r[0] = 0x1448cccu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f00bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2bcbu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f00cc:;
    c->r[0] = 0x1448cacu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f00dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2855u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f00ec:;
    { uint32_t ea = c->r[5] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5f0148;
L_5f00f4:;
    { uint32_t ea = c->r[5] + 0x1bu; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5f0148;
L_5f00fc:;
    c->r[0] = 0x1448c7cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f010cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x296cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f011c:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5f0148;
L_5f0124:;
    c->r[0] = 0x1448c54u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2918u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0144:;
    { uint32_t ea = c->r[5] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
L_5f0148:;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x4u);
    goto L_5f0a28;
L_5f0154:;
    c->r[0] = 0x1448a58u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5f0164u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_462f68(c);
L_5f016c:;
    c->r[0] = 0x1448c0cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f017cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29e0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f018c:;
    c->r[0] = 0x1448becu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f019cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x259u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f01ac:;
    c->r[0] = 0x1448bccu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f01bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29f7u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f01cc:;
    c->r[0] = 0x1448bacu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f01dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2cb1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f01ec:;
    c->r[0] = 0x1448dc0u;
    c->r[2] = 0x3e2u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x5f0200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_5efb58; }
    c->r[0] = 0x1448b6cu;
    c->r[2] = 0x42cu;
    { uint32_t ea = 0x5f021cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0228:;
    c->r[0] = 0x1448b50u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29f8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0248:;
    c->r[0] = 0x1448b2cu;
    c->r[1] = ~0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5f025cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5f0560;
L_5f025c:;
    c->r[0] = 0x1448b1cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f026cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x298bu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f027c:;
    c->r[0] = 0x1448afcu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f028cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2cd1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f029c:;
    c->r[0] = 0x1448adcu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f02acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x291cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f02bc:;
    c->r[0] = 0x1448abcu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f02ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x292du;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f02dc:;
    c->r[0] = 0x1448a9cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f02ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1fcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f02fc:;
    c->r[0] = 0x1448a7cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f030cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29fau;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f031c:;
    c->r[0] = 0x1448a5cu;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f032cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2c9du;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f033c:;
    c->r[0] = 0x1448a38u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x2u;
    { uint32_t ea = 0x5f0350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5f0560;
L_5f0350:;
    c->r[0] = 0x1448a28u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0360u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2a04u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0370:;
    c->r[0] = 0x1448a08u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0380u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2850u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0390:;
    c->r[0] = 0x14489e8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f03a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x298au;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f03b0:;
    c->r[0] = 0x14489c8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f03c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2cafu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f03d0:;
    c->r[0] = 0x14489a8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f03e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x264u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f03f0:;
    c->r[0] = 0x1448988u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0400u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2a08u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0410:;
    c->r[0] = 0x1448968u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0420u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1feu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0430:;
    c->r[0] = 0x1448948u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0440u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x298cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0450:;
    c->r[0] = 0x1448928u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2ce0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0470:;
    c->r[0] = 0x1448908u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0480u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1f8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0490:;
    c->r[0] = 0x14488e8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f04a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29f5u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f04b0:;
    c->r[0] = 0x14488c8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f04c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x285eu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f04d0:;
    c->r[0] = 0x14488a8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f04e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29ddu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f04f0:;
    c->r[0] = 0x1448888u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0500u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2c9eu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0510:;
    c->r[0] = 0x1448868u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2a06u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0530:;
    c->r[0] = 0x1448848u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0540u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x283fu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0550:;
    c->r[0] = 0x1448824u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x3u;
    { uint32_t ea = 0x5f0564u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5f0560:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[14] = 0x5f056cu; f_723b0c(c);
    c->r[0] = (c->r[0] >> 4);
    c->r[4] = 0x0u;
    goto L_5f0a24;
L_5f0578:;
    c->r[0] = 0x1448800u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29deu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0598:;
    c->r[0] = 0x14487e0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f05a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2ce2u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f05b8:;
    c->r[0] = 0x14487c0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f05c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2913u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f05d8:;
    c->r[0] = 0x14487a0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f05e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2a01u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f05f8:;
    c->r[0] = 0x1448780u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0608u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x201u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0618:;
    c->r[0] = 0x1448760u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x298fu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0638:;
    c->r[0] = 0x1448740u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0648u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2ca9u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0658:;
    c->r[0] = 0x1448720u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0668u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x285du;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0678:;
    c->r[0] = 0x1448700u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0688u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29fdu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0698:;
    c->r[0] = 0x14486e0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f06a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x200u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f06b8:;
    c->r[0] = 0x14486c0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f06c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29dfu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f06d8:;
    c->r[0] = 0x14486a0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f06e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2cdfu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f06f8:;
    c->r[0] = 0x1448680u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0708u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29f9u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0718:;
    c->r[0] = 0x1448660u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x4e25u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0738:;
    c->r[0] = 0x1448874u;
    c->r[2] = 0x3e2u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x5f074cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_5efb58; }
    c->r[0] = 0x144861cu;
    c->r[2] = 0x42cu;
    c->r[1] = c->r[1] + 0x62u;
    { uint32_t ea = 0x5f076cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0778:;
    c->r[0] = 0x1448600u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x298du;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0798:;
    c->r[0] = 0x14485e0u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f07a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2c9cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f07b8:;
    c->r[0] = 0x14483f4u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x5f07c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_462f68(c);
L_5f07d0:;
    c->r[0] = 0x14485a8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f07e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2990u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f07f0:;
    c->r[0] = 0x1448584u;
    c->r[5] = 0x72cu;
    c->r[1] = 0x2bu;
    { uint32_t ea = 0x5f0804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    c->r[14] = 0x5f080cu; f_726dd4(c);
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5efb58; }
    c->r[0] = 0x1448560u;
    c->r[1] = 0x52bu;
    { uint32_t ea = 0x5f0828u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    goto L_5f09c8;
L_5f0830:;
    c->r[0] = 0x1448548u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0840u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2a03u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0850:;
    c->r[0] = 0x1448528u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0860u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2cb0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0870:;
    c->r[0] = 0x1448508u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0880u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x4e23u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0890:;
    c->r[0] = 0x14484e8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f08a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29f4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f08b0:;
    c->r[0] = 0x14484c8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f08c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x28b6u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f08d0:;
    c->r[0] = 0x14484acu;
    { uint32_t ea = 0x5f08dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5f08d8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x42cu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x292bu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f08f0:;
    c->r[0] = 0x1448488u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2ce1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0910:;
    c->r[0] = 0x1448468u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2848u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0930:;
    c->r[0] = 0x1448448u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0940u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29f6u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0950:;
    c->r[0] = 0x1448428u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x28c1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0970:;
    c->r[0] = 0x1448408u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0980u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x298eu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0990:;
    c->r[0] = 0x14483e8u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f09a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2c93u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f09b0:;
    c->r[0] = 0x14483c8u;
    c->r[1] = 0x72cu;
    { uint32_t ea = 0x5f09c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0xbu;
L_5f09c8:;
    c->r[14] = 0x5f09ccu; f_726dd4(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5f09e0:;
    c->r[0] = 0x1448398u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f09f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x29fbu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0a00:;
    c->r[0] = 0x144836cu;
    c->r[1] = ~0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f0a1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f0a20u; f_723b0c(c);
    c->r[0] = (c->r[0] >> 4);
L_5f0a24:;
    (void)f_subs(c, c->r[0], 0x18u);
L_5f0a28:;
    if (COND_HI) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5f0a34:;
    c->r[0] = 0x1448344u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0a44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2989u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
L_5f0a54:;
    c->r[0] = 0x1448324u;
    c->r[1] = 0x42cu;
    { uint32_t ea = 0x5f0a64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x2cb2u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_723da4(c);
}
void f_5f0bf0(Cpu *restrict c) {
    FN_ENTER(0x5f0bf0u);
L_5f0bf0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x144817cu;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5f0c0cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5f0c08:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x5f0c14u; f_724040(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->r[5] + 0x1u;
    if (COND_NE) { c->r[6] = c->r[6] + 0x1u; }
    (void)f_subs(c, c->r[5], 0xbfu);
    if (COND_NE) { goto L_5f0c08; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_GE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5f0c3c(Cpu *restrict c) {
    FN_ENTER(0x5f0c3cu);
L_5f0c3c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[5] = c->r[3];
    c->r[4] = c->r[2];
    c->r[10] = c->r[1];
    c->r[11] = c->r[0];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_5f0c7c; }
    c->r[0] = 0x1448110u;
    c->r[1] = 0x9c5cu;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5f0c70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5f0ea0; }
L_5f0c7c:;
    c->r[6] = c->r[13] + 0x10u;
    c->r[1] = 0x3cu;
    c->r[0] = c->r[6];
    c->r[14] = 0x5f0c8cu; f_15efdc4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5f0cec; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_5f0cf4; }
    c->r[0] = 0x14480dcu;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5f0cacu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_5f0ca8:;
    { uint32_t ea = c->r[10] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x5f0cb8u; f_724040(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[11]; }
    if (COND_EQ) { c->r[1] = c->r[7]; }
    if (COND_EQ) { c->r[14] = 0x5f0cd0u; f_5efb30(c); }
    c->r[0] = c->r[0] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5f0e9c; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_CC) { goto L_5f0ca8; }
L_5f0cec:;
    c->r[6] = 0x0u;
    goto L_5f0ea0;
L_5f0cf4:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f0db8; }
    c->r[0] = 0x1448070u;
    c->r[9] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5f0d18u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1448068u;
    { uint32_t ea = 0x5f0d20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_5f0d28:;
    { uint32_t ea = c->r[10] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x5f0d38u; f_724040(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5f0d98; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[14] = 0x5f0d54u; f_5efb30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f0d98; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[7] >> 5);
    c->r[2] = c->r[7] & 0x1fu;
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[5], 0xeu);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0xd24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | sh_lsl(c->r[3], c->r[2]);
    { uint32_t ea = c->r[0] + 0xd24u; ST32(ea, c->r[1]); }
    if (COND_LS) { { uint32_t ea = c->r[6] + (c->r[5] << 2); ST32(ea, c->r[7]); } }
    c->r[1] = 0x1u;
    c->r[5] = c->r[5] + 0x1u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
L_5f0d98:;
    c->r[0] = c->r[0] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5f0e9c; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_CC) { goto L_5f0d28; }
    goto L_5f0e58;
L_5f0db8:;
    c->r[0] = 0x1447fbcu;
    c->r[6] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5f0dccu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1447fb4u;
    { uint32_t ea = 0x5f0dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_5f0dd8:;
    { uint32_t ea = c->r[10] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x5f0de8u; f_724040(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5f0e3c; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[7];
    c->r[14] = 0x5f0e04u; f_5efb30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f0e3c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[7] >> 5);
    c->r[2] = c->r[7] & 0x1fu;
    c->r[7] = 0x1u;
    c->r[3] = 0x1u;
    c->r[5] = c->r[5] + 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0xd24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] | sh_lsl(c->r[7], c->r[2]);
    { uint32_t ea = c->r[0] + 0xd24u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
L_5f0e3c:;
    c->r[0] = c->r[0] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5f0e9c; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_CC) { goto L_5f0dd8; }
L_5f0e58:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f0eac; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_5f0eac; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6] ^ 0x1u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f0ea0; }
    (void)f_subs(c, c->r[5], 0x10u);
    if (COND_CC) { goto L_5f0eb4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x64u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5f0e98u; f_85dd68(c);
    goto L_5f0ea0;
L_5f0e9c:;
    c->r[6] = 0x1u;
L_5f0ea0:;
    c->r[0] = c->r[6] & 0x1u;
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5f0eac:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_5f0ea0;
L_5f0eb4:;
    c->r[0] = 0xcccdu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xcccc0000u;
    { uint64_t r = (uint64_t)c->r[5] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = 0x1u;
    c->r[2] = (c->r[1] >> 2);
    c->r[3] = c->r[2] + (c->r[2] << 2);
    c->r[3] = f_subs(c, c->r[5], c->r[3]);
    if (COND_NE) { c->r[2] = c->r[0] + (c->r[1] >> 2); }
    c->r[4] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5f0ea0; }
    c->r[7] = 0x0u;
    c->r[8] = c->r[13] + 0x10u;
L_5f0ee8:;
    c->r[3] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x5f0ef8u; f_5f0f24(c);
    c->r[7] = c->r[7] + 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CC) { goto L_5f0ee8; }
    goto L_5f0ea0;
}
void f_5f0f24(Cpu *restrict c) {
    FN_ENTER(0x5f0f24u);
L_5f0f24:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[3];
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    c->r[14] = 0x5f0f38u; f_85dce4(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x65u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5f0f48u; f_85dd68(c);
    c->r[6] = c->r[6] + (c->r[6] << 2);
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_CS) { goto L_5f0fe8; }
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x63u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5f0f68u; f_85e078(c);
    c->r[0] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_5f0fe8; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x63u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5f0f88u; f_85e078(c);
    c->r[0] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_5f0fe8; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x63u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5f0fa8u; f_85e078(c);
    c->r[0] = c->r[6] + 0x3u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_5f0fe8; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x63u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5f0fc8u; f_85e078(c);
    c->r[0] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_5f0fe8; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x63u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5f0fe8u; f_85e078(c);
L_5f0fe8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_85dd24(c);
}
void f_5f0ff0(Cpu *restrict c) {
    FN_ENTER(0x5f0ff0u);
L_5f0ff0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x5f1004u; f_5f1030(c);
    c->r[0] = 0x1u;
    c->r[2] = 0x5cu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1239b64u;
    c->r[1] = 0x5f1020u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x5f1024u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5f1030(Cpu *restrict c) {
    FN_ENTER(0x5f1030u);
L_5f1030:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = 0x0u;
    c->r[4] = c->r[0];
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[0] + 0x19u; ST8(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[5]); }
    c->r[0] = 0x1448084u;
    { uint32_t ea = 0x5f105cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1447b68u;
    { uint32_t ea = 0x5f1068u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x144bc28u;
    { uint32_t ea = 0x5f1070u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_5f106c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x5f1078u; f_3971f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f10f8; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = c->r[6] + (c->r[1] >> 3);
    c->r[1] = c->r[1] & 0x7u;
    { uint32_t ea = c->r[2] + 0x500u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[8], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f10f8; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_5f10f8; }
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f10bc; }
    { uint32_t ea = c->r[4] + 0x19u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x19u; ST8(ea, c->r[1]); }
L_5f10bc:;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f10d0; }
    { uint32_t ea = c->r[4] + 0x1au; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1au; ST8(ea, c->r[1]); }
L_5f10d0:;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f10e4; }
    { uint32_t ea = c->r[4] + 0x1bu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1bu; ST8(ea, c->r[1]); }
L_5f10e4:;
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f10f8; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST8(ea, c->r[0]); }
L_5f10f8:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0xb7u);
    if (COND_NE) { goto L_5f106c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5f1114(Cpu *restrict c) {
    FN_ENTER(0x5f1114u);
L_5f1114:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239bbcu;
    c->r[1] = 0x5f1138u + c->r[1];
    c->r[14] = 0x5f1138u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f1144(Cpu *restrict c) {
    FN_ENTER(0x5f1144u);
L_5f1144:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239b9cu;
    c->r[1] = 0x5f1168u + c->r[1];
    c->r[14] = 0x5f1168u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f1174(Cpu *restrict c) {
    FN_ENTER(0x5f1174u);
L_5f1174:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239b7cu;
    c->r[1] = 0x5f1198u + c->r[1];
    c->r[14] = 0x5f1198u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f11a4(Cpu *restrict c) {
    FN_ENTER(0x5f11a4u);
L_5f11a4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239b54u;
    c->r[1] = 0x5f11c8u + c->r[1];
    c->r[14] = 0x5f11c8u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f11d4(Cpu *restrict c) {
    FN_ENTER(0x5f11d4u);
L_5f11d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239b34u;
    c->r[1] = 0x5f11f8u + c->r[1];
    c->r[14] = 0x5f11f8u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f1204(Cpu *restrict c) {
    FN_ENTER(0x5f1204u);
L_5f1204:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239b0cu;
    c->r[1] = 0x5f1228u + c->r[1];
    c->r[14] = 0x5f1228u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f1234(Cpu *restrict c) {
    FN_ENTER(0x5f1234u);
L_5f1234:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239aecu;
    c->r[1] = 0x5f1258u + c->r[1];
    c->r[14] = 0x5f1258u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f1264(Cpu *restrict c) {
    FN_ENTER(0x5f1264u);
L_5f1264:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239ac4u;
    c->r[1] = 0x5f1288u + c->r[1];
    c->r[14] = 0x5f1288u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f1294(Cpu *restrict c) {
    FN_ENTER(0x5f1294u);
L_5f1294:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[1];
    c->r[1] = 0x1u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1239a9cu;
    c->r[1] = 0x5f12b8u + c->r[1];
    c->r[14] = 0x5f12b8u; f_5f0c3c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f12c4(Cpu *restrict c) {
    FN_ENTER(0x5f12c4u);
L_5f12c4:;
    c->r[0] = 0x1447ab8u;
    { uint32_t ea = 0x5f12d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x958u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[0] = 0x1u; }
    if (COND_LT) { return; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1447cc4u;
    { uint32_t ea = 0x5f12fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1300u; f_70cbd0(c);
    c->r[0] = 0x1447a90u;
    c->r[1] = c->r[13] + 0x7u;
    c->r[2] = 0x2996u;
    { uint32_t ea = 0x5f1314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1318u; f_5d7e90(c);
    { uint32_t ea = c->r[13] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_EQ) { goto L_5f1364; }
    c->r[1] = 0x1447a50u;
    { uint32_t ea = 0x5f1338u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x958u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_5f135c; }
    { uint32_t ea = c->r[1] + 0x960u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + 0x960u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x968u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + 0x968u; ST32(ea, c->r[3]); }
L_5f135c:;
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[1] + 0x958u; ST32(ea, c->r[2]); }
L_5f1364:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    return;
}
void f_5f1380(Cpu *restrict c) {
    FN_ENTER(0x5f1380u);
L_5f1380:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x14479e4u;
    c->r[14] = 0x1u;
    c->r[0] = c->r[0] - 0x1u;
    c->r[12] = c->r[0] & 0x1fu;
    c->r[0] = (c->r[0] >> 5);
    { uint32_t ea = 0x5f13a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + (c->r[0] << 2);
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[0] + 0x97cu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[4] = v; }
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[2] + 0x984u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = sh_lsl(c->r[14], c->r[12]);
    (void)f_subs(c, c->r[3], 0x1u);
    c->r[1] = c->r[1] | c->r[12];
    { uint32_t ea = c->r[2] + 0x984u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x98cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[12];
    { uint32_t ea = c->r[2] + 0x98cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] | c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_5f13f4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x49u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5f13f4u; f_85dd68(c);
L_5f13f4:;
    c->r[0] = 0x1447cd8u;
    c->r[1] = 0x258u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5f1408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_444f14(c);
}
void f_5f141c(Cpu *restrict c) {
    FN_ENTER(0x5f141cu);
L_5f141c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1447950u;
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5f1438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f14a8; }
    c->r[1] = 0x4u;
    c->r[14] = 0x5f144cu; f_72420c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_5f14a8; }
    c->r[0] = 0x1447924u;
    { uint32_t ea = 0x5f1464u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1488; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f1488:;
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1449448u;
    c->r[1] = 0x2fu;
    { uint32_t ea = 0x5f14a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f14a4u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5f14a8:;
    c->r[0] = 0x14478d4u;
    { uint32_t ea = 0x5f14b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1520; }
    c->r[1] = 0xau;
    c->r[14] = 0x5f14c8u; f_724190(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f1520; }
    c->r[0] = 0x14478acu;
    { uint32_t ea = 0x5f14dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1500; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f1500:;
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14493d0u;
    c->r[1] = 0x44u;
    { uint32_t ea = 0x5f1518u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f151cu; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f1520:;
    c->r[0] = 0x1447854u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x5f1534u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc32u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f15a4; }
    c->r[1] = 0x14u;
    c->r[14] = 0x5f1548u; f_724190(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_5f15a4; }
    c->r[0] = 0x1447828u;
    { uint32_t ea = 0x5f1560u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1584; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f1584:;
    c->r[1] = c->r[1] | 0x80000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144934cu;
    c->r[1] = 0x53u;
    { uint32_t ea = 0x5f159cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f15a0u; f_3630c4(c);
    c->r[7] = 0x1u;
L_5f15a4:;
    c->r[0] = 0x14477d8u;
    { uint32_t ea = 0x5f15b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f161c; }
    c->r[1] = 0x1cu;
    c->r[14] = 0x5f15c4u; f_724190(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f161c; }
    c->r[0] = 0x14477b0u;
    { uint32_t ea = 0x5f15d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f15fc; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5f15fc:;
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14492d4u;
    c->r[1] = 0x62u;
    { uint32_t ea = 0x5f1614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1618u; f_3630c4(c);
    c->r[6] = 0x1u;
L_5f161c:;
    c->r[0] = 0x1447760u;
    { uint32_t ea = 0x5f1628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1690; }
    c->r[14] = 0x5f1638u; f_724288(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f1690; }
    c->r[0] = 0x144773cu;
    { uint32_t ea = 0x5f164cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1670; }
    { uint32_t ea = c->r[0] + 0xc4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc60u; ST32(ea, c->r[2]); }
L_5f1670:;
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc38u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1449260u;
    c->r[1] = 0x83u;
    { uint32_t ea = 0x5f1688u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f168cu; f_3630c4(c);
    goto L_5f16a4;
L_5f1690:;
    c->r[0] = c->r[5] | c->r[4];
    c->r[0] = c->r[0] | c->r[7];
    c->r[0] = c->r[0] | c->r[6];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f1724; }
L_5f16a4:;
    c->r[0] = 0x1447910u;
    { uint32_t ea = 0x5f16b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f16ec; }
    c->r[0] = 0x14474ecu;
    { uint32_t ea = 0x5f16c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f16ccu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f1724; }
    c->r[0] = 0x14474d4u;
    { uint32_t ea = 0x5f16e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f16e4u; f_5f8610(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f1724; }
L_5f16ec:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1du;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x5f1700u; f_85dd68(c);
    c->r[0] = 0x14474c8u;
    c->r[1] = 0xfu;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x5f1718u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x5f1724u; f_6e3478(c);
L_5f1724:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5f1778(Cpu *restrict c) {
    FN_ENTER(0x5f1778u);
L_5f1778:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[11] = c->r[2];
    c->r[6] = c->r[0];
    c->r[3] = c->r[11] - 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_5f18a4; }
    c->r[0] = 0x1447818u;
    c->r[2] = 0x3e2u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x5f17a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3e0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x144791cu;
    { uint32_t ea = 0x5f17c4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[11] << 3);
    c->r[9] = c->r[0] - 0x10u;
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x14478fcu;
    { uint32_t ea = 0x5f17e4u + c->r[2]; uint32_t v = LD32(ea); c->r[8] = v; }
L_5f17e0:;
    c->r[5] = c->r[11];
    c->r[11] = c->r[3];
    c->r[10] = c->r[1];
    c->r[2] = (c->r[11] << 3);
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD16(ea); c->r[10] = ea; c->r[2] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1890; }
    c->r[1] = c->r[1] + (c->r[11] << 3);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CS) { goto L_5f1820; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_5f1890; }
L_5f1820:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x500u;
    c->r[14] = 0x5f1838u; f_444f14(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | sh_lsl(c->r[4], c->r[0]);
    c->r[1] = c->r[5] - 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_5f1890; }
    c->r[7] = c->r[9];
    c->r[5] = c->r[11];
L_5f185c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x500u;
    c->r[14] = 0x5f1870u; f_444f14(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] - 0x1u;
    c->r[7] = c->r[7] - 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = c->r[1] | sh_lsl(c->r[4], c->r[0]);
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_GT) { goto L_5f185c; }
L_5f1890:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[11] - 0x1u;
    c->r[9] = c->r[9] - 0x8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GE) { goto L_5f17e0; }
L_5f18a4:;
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f18b8(Cpu *restrict c) {
    FN_ENTER(0x5f18b8u);
L_5f18b8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[0] = 0x144aff4u;
    c->r[8] = 0x851fu;
    c->r[4] = 0x0u;
    c->r[9] = 0x64u;
    c->r[10] = 0x42cu;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = 0x5f18dcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x14474a4u;
    { uint32_t ea = 0x5f18e4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x144749cu;
    { uint32_t ea = 0x5f18ecu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5f18e8:;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint64_t r = (uint64_t)c->r[0] * c->r[8]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 5);
    c->r[1] = c->r[0] - c->r[1] * c->r[9];
    c->r[0] = c->r[0] + 0x10u;
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[14] = 0x5f190cu; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f1920; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x5f1920u; f_726254(c);
L_5f1920:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x12u);
    if (COND_NE) { goto L_5f18e8; }
    c->r[0] = 0x1447450u;
    { uint32_t ea = 0x5f1938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_7239ac(c);
}
void f_5f1950(Cpu *restrict c) {
    FN_ENTER(0x5f1950u);
L_5f1950:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[0] = 0x1447408u;
    c->r[8] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0x5f196cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1447414u;
    { uint32_t ea = 0x5f1974u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1448f68u;
    { uint32_t ea = 0x5f1980u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14473a0u;
    { uint32_t ea = 0x5f1988u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_5f1984:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[14] = 0x5f1990u; f_5ba060(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] - 0x2eu;
    (void)f_subs(c, c->r[0], 0x21u);
    if (COND_HI) { goto L_5f1a98; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5f19acu + 0x8u;
    c->r[11] = 0x2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5f1a3cu: goto L_5f1a3c; case 0x5f1a44u: goto L_5f1a44; case 0x5f1a48u: goto L_5f1a48; case 0x5f1aacu: goto L_5f1aac; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5f1a3c:;
    c->r[11] = 0x1u;
    goto L_5f1a48;
L_5f1a44:;
    c->r[11] = 0x0u;
L_5f1a48:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x5f1a58u; f_366ad0(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = 0x1244u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 29));
    if (COND_EQ) { goto L_5f1aac; }
    c->r[0] = (c->r[0] >> 29);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5f1aa4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f1af4; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_NE) { goto L_5f1aac; }
    goto L_5f1af4;
L_5f1a98:;
    (void)f_subs(c, c->r[4], 0xffu);
    if (COND_NE) { goto L_5f1aac; }
    goto L_5f1af4;
L_5f1aa4:;
    (void)f_subs(c, c->r[11], 0x2u);
    if (COND_CC) { goto L_5f1af4; }
L_5f1aac:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[4] >> 5);
    c->r[5] = c->r[4] & 0x1fu;
    c->r[0] = sh_lsl(c->r[6], c->r[5]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + (c->r[2] << 2);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + 0xc70u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[6], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1aec; }
    { uint32_t ea = c->r[3] + 0xc80u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] | c->r[0];
    { uint32_t ea = c->r[3] + 0xc80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0xc90u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] | c->r[0];
    { uint32_t ea = c->r[3] + 0xc90u; ST32(ea, c->r[5]); }
L_5f1aec:;
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_5f1af4:;
    c->r[8] = c->r[8] + 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CC) { goto L_5f1984; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f1b1c(Cpu *restrict c) {
    FN_ENTER(0x5f1b1cu);
L_5f1b1c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1448e54u;
    c->r[4] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x5f1b34u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x144709cu;
    { uint32_t ea = 0x5f1b3cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_5f1b38:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0xau;
    (void)f_subs(c, c->r[1], 0x7cu);
    if (COND_HI) { goto L_5f1d5c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x5f1b54u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5f1d4cu: goto L_5f1d4c; case 0x5f1d5cu: goto L_5f1d5c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5f1d4c:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x57u);
    if (COND_CC) { goto L_5f1b38; }
    goto L_5f1d88;
L_5f1d5c:;
    c->r[14] = 0x5f1d60u; f_250bdc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5f1d4c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1d74u; f_760238(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[4] = c->r[4] + 0x1u; }
    if (COND_NE) { c->r[0] = (uint32_t)(uint8_t)(c->r[4]); }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x3au); }
    if (COND_LS) { goto L_5f1d4c; }
L_5f1d88:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x3au);
    if (COND_HI) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5f1da4(Cpu *restrict c) {
    FN_ENTER(0x5f1da4u);
L_5f1da4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1446fccu;
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5f1dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1e2c; }
    c->r[1] = 0x1u;
    c->r[14] = 0x5f1dd0u; f_724384(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_5f1e2c; }
    c->r[0] = 0x1446fa0u;
    { uint32_t ea = 0x5f1de8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1e0c; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f1e0c:;
    c->r[1] = c->r[1] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448ac4u;
    c->r[1] = 0x28u;
    { uint32_t ea = 0x5f1e24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1e28u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5f1e2c:;
    c->r[0] = 0x1446f50u;
    { uint32_t ea = 0x5f1e38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1ea4; }
    c->r[1] = 0x1u;
    c->r[14] = 0x5f1e4cu; f_72441c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f1ea4; }
    c->r[0] = 0x1446f28u;
    { uint32_t ea = 0x5f1e60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1e84; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f1e84:;
    c->r[1] = c->r[1] | 0x200u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448a4cu;
    c->r[1] = 0x29u;
    { uint32_t ea = 0x5f1e9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1ea0u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f1ea4:;
    c->r[0] = 0x1446ed0u;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f1eb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f1f3c; }
    c->r[0] = 0x14472e8u;
    c->r[1] = 0x1u;
    c->r[2] = 0x3u;
    { uint32_t ea = 0x5f1edcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1ee0u; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f1f3c; }
    c->r[0] = 0x1446e90u;
    { uint32_t ea = 0x5f1ef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1f1c; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f1f1c:;
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x14489b4u;
    c->r[1] = 0x2au;
    { uint32_t ea = 0x5f1f34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1f38u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5f1f3c:;
    c->r[5] = c->r[5] | c->r[0];
    c->r[0] = 0x1446e3cu;
    { uint32_t ea = 0x5f1f4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1fc8; }
    c->r[0] = 0x1447258u;
    c->r[1] = 0x1u;
    c->r[2] = 0x7u;
    { uint32_t ea = 0x5f1f6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1f70u; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f1fc8; }
    c->r[0] = 0x1446e04u;
    { uint32_t ea = 0x5f1f84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f1fa8; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f1fa8:;
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448928u;
    c->r[1] = 0x2bu;
    { uint32_t ea = 0x5f1fc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f1fc4u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f1fc8:;
    c->r[0] = 0x1446dacu;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f1fdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f205c; }
    c->r[0] = 0x14471c8u;
    c->r[1] = 0x1fu;
    { uint32_t ea = 0x5f1ffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2000u; f_3a6538(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f205c; }
    c->r[0] = 0x1446d70u;
    { uint32_t ea = 0x5f2018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f203c; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f203c:;
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448894u;
    c->r[1] = 0x2cu;
    { uint32_t ea = 0x5f2054u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2058u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5f205c:;
    c->r[5] = c->r[5] | c->r[0];
    c->r[0] = 0x1446d1cu;
    { uint32_t ea = 0x5f206cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f20e0; }
    c->r[0] = 0x1446b38u;
    { uint32_t ea = 0x5f2084u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2088u; f_462f94(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_CC) { goto L_5f20e0; }
    c->r[0] = 0x1446cecu;
    { uint32_t ea = 0x5f209cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f20c0; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f20c0:;
    c->r[1] = c->r[1] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448810u;
    c->r[1] = 0x32u;
    { uint32_t ea = 0x5f20d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f20dcu; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f20e0:;
    c->r[0] = 0x1446c94u;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f20f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f2170; }
    c->r[0] = 0x1446aacu;
    { uint32_t ea = 0x5f2110u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2114u; f_45e378(c);
    (void)f_subs(c, c->r[0], 0x3cu);
    c->r[0] = 0x0u;
    if (COND_CC) { goto L_5f2170; }
    c->r[0] = 0x1446c5cu;
    { uint32_t ea = 0x5f212cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2150; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
L_5f2150:;
    c->r[1] = c->r[1] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448780u;
    c->r[1] = 0x34u;
    { uint32_t ea = 0x5f2168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f216cu; f_3630c4(c);
    c->r[0] = 0x1u;
L_5f2170:;
    c->r[5] = c->r[5] | c->r[0];
    c->r[0] = 0x1446c08u;
    { uint32_t ea = 0x5f2180u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f21ec; }
    c->r[1] = 0x2u;
    c->r[14] = 0x5f2194u; f_724384(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f21ec; }
    c->r[0] = 0x1446be0u;
    { uint32_t ea = 0x5f21a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f21cc; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f21cc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448704u;
    c->r[1] = 0x40u;
    { uint32_t ea = 0x5f21e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f21e8u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f21ec:;
    c->r[0] = 0x1446b88u;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f2200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_5f2274; }
    c->r[1] = 0x2u;
    c->r[14] = 0x5f2218u; f_72441c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_5f2274; }
    c->r[0] = 0x1446b58u;
    { uint32_t ea = 0x5f2230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2254; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f2254:;
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144867cu;
    c->r[1] = 0x41u;
    { uint32_t ea = 0x5f226cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2270u; f_3630c4(c);
    c->r[1] = 0x1u;
L_5f2274:;
    c->r[0] = 0x1446b04u;
    c->r[5] = c->r[5] | c->r[1];
    { uint32_t ea = 0x5f2284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2300; }
    c->r[0] = 0x1446f20u;
    c->r[1] = 0x2u;
    c->r[2] = 0x3u;
    { uint32_t ea = 0x5f22a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f22a8u; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f2300; }
    c->r[0] = 0x1446accu;
    { uint32_t ea = 0x5f22bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f22e0; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f22e0:;
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14485f0u;
    c->r[1] = 0x42u;
    { uint32_t ea = 0x5f22f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f22fcu; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f2300:;
    c->r[0] = 0x1446a74u;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f2314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f2398; }
    c->r[0] = 0x1446e8cu;
    c->r[1] = 0x2u;
    c->r[2] = 0x7u;
    { uint32_t ea = 0x5f2338u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f233cu; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f2398; }
    c->r[0] = 0x1446a34u;
    { uint32_t ea = 0x5f2354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2378; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f2378:;
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448558u;
    c->r[1] = 0x43u;
    { uint32_t ea = 0x5f2390u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2394u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5f2398:;
    c->r[5] = c->r[5] | c->r[0];
    c->r[0] = 0x14469e0u;
    { uint32_t ea = 0x5f23a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc31u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2414; }
    c->r[1] = 0x3u;
    c->r[14] = 0x5f23bcu; f_724384(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f2414; }
    c->r[0] = 0x14469b8u;
    { uint32_t ea = 0x5f23d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f23f4; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f23f4:;
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14484dcu;
    c->r[1] = 0x4fu;
    { uint32_t ea = 0x5f240cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2410u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f2414:;
    c->r[0] = 0x1446960u;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f2428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc32u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_5f249c; }
    c->r[1] = 0x3u;
    c->r[14] = 0x5f2440u; f_72441c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_5f249c; }
    c->r[0] = 0x1446930u;
    { uint32_t ea = 0x5f2458u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f247c; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f247c:;
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448454u;
    c->r[1] = 0x50u;
    { uint32_t ea = 0x5f2494u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2498u; f_3630c4(c);
    c->r[1] = 0x1u;
L_5f249c:;
    c->r[0] = 0x14468dcu;
    c->r[5] = c->r[5] | c->r[1];
    { uint32_t ea = 0x5f24acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc32u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2528; }
    c->r[0] = 0x1446cf8u;
    c->r[1] = 0x3u;
    c->r[2] = 0x3u;
    { uint32_t ea = 0x5f24ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f24d0u; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f2528; }
    c->r[0] = 0x14468a4u;
    { uint32_t ea = 0x5f24e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2508; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f2508:;
    c->r[1] = c->r[1] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14483c8u;
    c->r[1] = 0x51u;
    { uint32_t ea = 0x5f2520u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2524u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f2528:;
    c->r[0] = 0x144684cu;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f253cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc32u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f25c0; }
    c->r[0] = 0x1446c64u;
    c->r[1] = 0x3u;
    c->r[2] = 0x7u;
    { uint32_t ea = 0x5f2560u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2564u; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f25c0; }
    c->r[0] = 0x144680cu;
    { uint32_t ea = 0x5f257cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f25a0; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f25a0:;
    c->r[1] = c->r[1] | 0x40000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448330u;
    c->r[1] = 0x52u;
    { uint32_t ea = 0x5f25b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f25bcu; f_3630c4(c);
    c->r[0] = 0x1u;
L_5f25c0:;
    c->r[5] = c->r[5] | c->r[0];
    c->r[0] = 0x14467b8u;
    { uint32_t ea = 0x5f25d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc33u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f263c; }
    c->r[1] = 0x4u;
    c->r[14] = 0x5f25e4u; f_724384(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f263c; }
    c->r[0] = 0x1446790u;
    { uint32_t ea = 0x5f25f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f261c; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f261c:;
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14482b4u;
    c->r[1] = 0x5eu;
    { uint32_t ea = 0x5f2634u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2638u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f263c:;
    c->r[0] = 0x1446738u;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f2650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    if (COND_LT) { goto L_5f26c4; }
    c->r[1] = 0x4u;
    c->r[14] = 0x5f2668u; f_72441c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[1] = 0x0u;
    if (COND_NE) { goto L_5f26c4; }
    c->r[0] = 0x1446708u;
    { uint32_t ea = 0x5f2680u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_5f26a4; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
L_5f26a4:;
    c->r[1] = c->r[1] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144822cu;
    c->r[1] = 0x5fu;
    { uint32_t ea = 0x5f26bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f26c0u; f_3630c4(c);
    c->r[1] = 0x1u;
L_5f26c4:;
    c->r[0] = 0x14466b4u;
    c->r[5] = c->r[5] | c->r[1];
    { uint32_t ea = 0x5f26d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2750; }
    c->r[0] = 0x1446ad0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5f26f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f26f8u; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f2750; }
    c->r[0] = 0x144667cu;
    { uint32_t ea = 0x5f270cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2730; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5f2730:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14481a0u;
    c->r[1] = 0x60u;
    { uint32_t ea = 0x5f2748u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f274cu; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f2750:;
    c->r[0] = 0x1446624u;
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f2764u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f27e8; }
    c->r[0] = 0x1446a3cu;
    c->r[1] = 0x4u;
    c->r[2] = 0x3u;
    { uint32_t ea = 0x5f2788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f278cu; f_3a6598(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_5f27e8; }
    c->r[0] = 0x14465e4u;
    { uint32_t ea = 0x5f27a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f27c8; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
L_5f27c8:;
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1448108u;
    c->r[1] = 0x61u;
    { uint32_t ea = 0x5f27e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f27e4u; f_3630c4(c);
    c->r[0] = 0x1u;
L_5f27e8:;
    c->r[5] = c->r[5] | c->r[0];
    c->r[0] = 0x1446590u;
    { uint32_t ea = 0x5f27f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2860; }
    c->r[2] = 0x14463c0u;
    { uint32_t ea = 0x5f2810u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x7d0u);
    if (COND_CC) { goto L_5f2860; }
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x100u;
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144809cu;
    c->r[1] = 0x68u;
    { uint32_t ea = 0x5f284cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2850u; f_3630c4(c);
    c->r[0] = 0x1446528u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x5f2860u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5f2860:;
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[5] | c->r[4];
    c->r[5] = 0x0u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2880; }
    { uint32_t ea = c->r[0] + 0xd90u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xfe000000u);
    if (COND_CS) { goto L_5f2d04; }
L_5f2880:;
    c->r[0] = 0x0u;
L_5f2884:;
    c->r[6] = c->r[4] | c->r[0];
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f28fc; }
    c->r[0] = 0x1446924u;
    c->r[1] = 0x2du;
    { uint32_t ea = 0x5f28a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f28a4u; f_3a6538(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f28fc; }
    c->r[0] = 0x14464d0u;
    { uint32_t ea = 0x5f28b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f28dc; }
    { uint32_t ea = c->r[0] + 0xc4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc60u; ST32(ea, c->r[2]); }
L_5f28dc:;
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0xc38u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447ff4u;
    c->r[1] = 0x82u;
    { uint32_t ea = 0x5f28f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f28f8u; f_3630c4(c);
    c->r[5] = 0x1u;
L_5f28fc:;
    c->r[0] = 0x1446470u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f2918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f291cu; f_723b0c(c);
    c->r[5] = c->r[6] | c->r[5];
    (void)f_subs(c, c->r[0], 0x3e8u);
    c->r[6] = 0x0u;
    if (COND_CC) { goto L_5f2980; }
    c->r[0] = 0x144644cu;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5f293cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2980; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20u;
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447f70u;
    c->r[1] = 0x25u;
    { uint32_t ea = 0x5f2978u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f297cu; f_3630c4(c);
    c->r[6] = 0x1u;
L_5f2980:;
    c->r[0] = 0x14463f0u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5f2998u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f299cu; f_723b0c(c);
    c->r[1] = 0xbb8u;
    c->r[5] = c->r[5] | c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5f29fc; }
    c->r[0] = 0x14463d0u;
    { uint32_t ea = 0x5f29b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f29fc; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40u;
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447ef4u;
    c->r[1] = 0x26u;
    { uint32_t ea = 0x5f29f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f29f8u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f29fc:;
    c->r[0] = 0x1446374u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5f2a14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2a18u; f_723b0c(c);
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x3e8u);
    c->r[6] = 0x0u;
    if (COND_CC) { goto L_5f2a80; }
    c->r[0] = 0x144634cu;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5f2a3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x40000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2a80; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x40000000u;
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447e70u;
    c->r[1] = 0x3eu;
    { uint32_t ea = 0x5f2a78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2a7cu; f_3630c4(c);
    c->r[6] = 0x1u;
L_5f2a80:;
    c->r[0] = 0x14462f0u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5f2a98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2a9cu; f_723b0c(c);
    c->r[1] = 0xbb8u;
    c->r[5] = c->r[5] | c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5f2afc; }
    c->r[0] = 0x14462d0u;
    { uint32_t ea = 0x5f2ab8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_5f2afc; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447df4u;
    c->r[1] = 0x3fu;
    { uint32_t ea = 0x5f2af4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2af8u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f2afc:;
    c->r[0] = 0x1446274u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5f2b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2b18u; f_723b0c(c);
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x3e8u);
    c->r[6] = 0x0u;
    if (COND_CC) { goto L_5f2b80; }
    c->r[0] = 0x144624cu;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5f2b3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2b80; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x2000u;
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447d70u;
    c->r[1] = 0x4du;
    { uint32_t ea = 0x5f2b78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2b7cu; f_3630c4(c);
    c->r[6] = 0x1u;
L_5f2b80:;
    c->r[0] = 0x14461f0u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5f2b98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2b9cu; f_723b0c(c);
    c->r[1] = 0xbb8u;
    c->r[5] = c->r[5] | c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5f2bfc; }
    c->r[0] = 0x14461d0u;
    { uint32_t ea = 0x5f2bb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2bfc; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447cf4u;
    c->r[1] = 0x4eu;
    { uint32_t ea = 0x5f2bf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2bf8u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f2bfc:;
    c->r[0] = 0x1446174u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5f2c14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2c18u; f_723b0c(c);
    c->r[5] = c->r[5] | c->r[4];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x3e8u);
    c->r[6] = 0x0u;
    if (COND_CC) { goto L_5f2c80; }
    c->r[0] = 0x144614cu;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5f2c3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2c80; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x10000000u;
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447c70u;
    c->r[1] = 0x5cu;
    { uint32_t ea = 0x5f2c78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2c7cu; f_3630c4(c);
    c->r[6] = 0x1u;
L_5f2c80:;
    c->r[0] = 0x14460f0u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5f2c98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2c9cu; f_723b0c(c);
    c->r[1] = 0xbb8u;
    c->r[5] = c->r[5] | c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5f2cfc; }
    c->r[0] = 0x14460d0u;
    { uint32_t ea = 0x5f2cb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2cfc; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20000000u;
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447bf4u;
    c->r[1] = 0x5du;
    { uint32_t ea = 0x5f2cf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2cf8u; f_3630c4(c);
    c->r[4] = 0x1u;
L_5f2cfc:;
    c->r[0] = c->r[5] | c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5f2d04:;
    { uint32_t ea = c->r[0] + 0xd94u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f2d18; }
    c->r[0] = 0x0u;
    goto L_5f2884;
L_5f2d18:;
    { uint32_t ea = c->r[0] + 0xc4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc38u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1447ba0u;
    c->r[1] = 0x80u;
    { uint32_t ea = 0x5f2d48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f2d4cu; f_3630c4(c);
    c->r[0] = 0x1446030u;
    { uint32_t ea = 0x5f2d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    goto L_5f2884;
}
void f_5f2ef8(Cpu *restrict c) {
    FN_ENTER(0x5f2ef8u);
L_5f2ef8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x14461ccu;
    c->r[6] = 0xb7u;
    c->r[4] = 0x0u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x5f2f14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1445cb0u;
    { uint32_t ea = 0x5f2f20u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5f2f1c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x5f2f28u; f_3971f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f2f50; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + (c->r[0] >> 3);
    c->r[0] = c->r[0] & 0x7u;
    { uint32_t ea = c->r[1] + 0x500u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[8], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f2f58; }
    c->r[1] = 0x0u;
    goto L_5f2f68;
L_5f2f50:;
    c->r[1] = 0x4u;
    goto L_5f2f68;
L_5f2f58:;
    c->r[6] = c->r[6] - 0x1u;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[6], 0x64u);
    if (COND_CS) { c->r[1] = 0x0u; }
L_5f2f68:;
    c->r[0] = c->r[1] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5f2f88; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xb7u);
    if (COND_CC) { goto L_5f2f1c; }
    c->r[1] = 0x2u;
L_5f2f88:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5f2fa0(Cpu *restrict c) {
    FN_ENTER(0x5f2fa0u);
L_5f2fa0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1446128u;
    c->r[4] = 0x0u;
    c->r[7] = 0x1u;
    { uint32_t ea = 0x5f2fb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1445c0cu;
    { uint32_t ea = 0x5f2fc4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_5f2fc0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x5f2fccu; f_3971f0(c);
    (void)f_subs(c, c->r[4], 0x75u);
    c->r[1] = 0x4u;
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5f2ff8; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + (c->r[0] >> 3);
    c->r[0] = c->r[0] & 0x7u;
    { uint32_t ea = c->r[1] + 0x500u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[7], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
L_5f2ff8:;
    c->r[0] = c->r[1] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5f3018; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xb7u);
    if (COND_CC) { goto L_5f2fc0; }
    c->r[1] = 0x2u;
L_5f3018:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5f3030(Cpu *restrict c) {
    FN_ENTER(0x5f3030u);
L_5f3030:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1445b70u;
    { uint32_t ea = 0x5f3044u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3048u; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f3188; }
    c->r[0] = 0x1445d2cu;
    { uint32_t ea = 0x5f305cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2bu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f3188; }
    c->r[0] = 0x1445b5cu;
    { uint32_t ea = 0x5f3074u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3078u; f_394c80(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5f3188; }
    c->r[0] = 0x1445b38u;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x5f3098u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_5f3094:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x5f30a0u; f_394cbc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = c->r[5] + 0x1u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_5f3094; }
    (void)f_subs(c, c->r[7], 0x82u);
    if (COND_CC) { goto L_5f3188; }
    c->r[0] = 0x1445cc0u;
    { uint32_t ea = 0x5f30c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f30ec; }
    { uint32_t ea = c->r[0] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc50u; ST32(ea, c->r[2]); }
L_5f30ec:;
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xc28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14477e4u;
    c->r[1] = 0x1bu;
    { uint32_t ea = 0x5f3104u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3108u; f_3630c4(c);
    c->r[0] = 0x1445eacu;
    { uint32_t ea = 0x5f3114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f3150; }
    c->r[0] = 0x1445a88u;
    { uint32_t ea = 0x5f312cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3130u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f3188; }
    c->r[0] = 0x1445a70u;
    { uint32_t ea = 0x5f3144u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3148u; f_5f8610(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f3188; }
L_5f3150:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1du;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x5f3164u; f_85dd68(c);
    c->r[0] = 0x1445a64u;
    c->r[1] = 0xfu;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x5f317cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x5f3188u; f_6e3478(c);
L_5f3188:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5f31b8(Cpu *restrict c) {
    FN_ENTER(0x5f31b8u);
L_5f31b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1445bbcu;
    { uint32_t ea = 0x5f31ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f32a4; }
    c->r[2] = 0x1445ddcu;
    { uint32_t ea = 0x5f31e4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x471u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_CC) { goto L_5f32a4; }
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20000u;
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x14476c8u;
    c->r[1] = 0x31u;
    { uint32_t ea = 0x5f3220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3224u; f_3630c4(c);
    c->r[0] = 0x1445d90u;
    { uint32_t ea = 0x5f3230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f326c; }
    c->r[0] = 0x144596cu;
    { uint32_t ea = 0x5f3248u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f324cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f32a4; }
    c->r[0] = 0x1445954u;
    { uint32_t ea = 0x5f3260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3264u; f_5f8610(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f32a4; }
L_5f326c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1du;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x5f3280u; f_85dd68(c);
    c->r[0] = 0x1445948u;
    c->r[1] = 0xfu;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x5f3298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x5f32a4u; f_6e3478(c);
L_5f32a4:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f32c8(Cpu *restrict c) {
    FN_ENTER(0x5f32c8u);
L_5f32c8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1445aa8u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f32e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f32f8; }
    { uint32_t ea = c->r[0] + 0xd8eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f3300; }
L_5f32f8:;
    c->r[5] = 0x0u;
    goto L_5f3344;
L_5f3300:;
    { uint32_t ea = c->r[0] + 0xc40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10000u;
    { uint32_t ea = c->r[0] + 0xc54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x14475b8u;
    c->r[1] = 0x30u;
    { uint32_t ea = 0x5f3330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3334u; f_3630c4(c);
    c->r[0] = 0x1445a44u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x5f3344u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5f3344:;
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f33a4; }
    { uint32_t ea = c->r[0] + 0xd8eu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f33a4; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x20u;
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144755cu;
    c->r[1] = 0x45u;
    { uint32_t ea = 0x5f338cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3390u; f_3630c4(c);
    c->r[0] = 0x14459e8u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x5f33a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc30u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5f33a4:;
    c->r[2] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f3400; }
    { uint32_t ea = c->r[0] + 0xd8eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f3400; }
    { uint32_t ea = c->r[0] + 0xc44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x100000u;
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x100000u;
    { uint32_t ea = c->r[0] + 0xc58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc30u; ST32(ea, c->r[1]); }
    c->r[0] = 0x14474fcu;
    c->r[1] = 0x54u;
    { uint32_t ea = 0x5f33ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f33f0u; f_3630c4(c);
    c->r[0] = 0x1445988u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x5f3400u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5f3400:;
    { uint32_t ea = c->r[0] + 0xc34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f3418; }
    { uint32_t ea = c->r[0] + 0xd8eu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f342c; }
L_5f3418:;
    c->r[0] = c->r[5] | c->r[4];
    c->r[0] = c->r[0] | c->r[2];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5f3460; }
    goto L_5f34e0;
L_5f342c:;
    { uint32_t ea = c->r[0] + 0xc48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x8u;
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc34u; ST32(ea, c->r[1]); }
    c->r[0] = 0x144748cu;
    c->r[1] = 0x63u;
    { uint32_t ea = 0x5f345cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3460u; f_3630c4(c);
L_5f3460:;
    c->r[0] = 0x1445b54u;
    { uint32_t ea = 0x5f346cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f34a8; }
    c->r[0] = 0x1445730u;
    { uint32_t ea = 0x5f3484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3488u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f34e0; }
    c->r[0] = 0x1445718u;
    { uint32_t ea = 0x5f349cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f34a0u; f_5f8610(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f34e0; }
L_5f34a8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1du;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x5f34bcu; f_85dd68(c);
    c->r[0] = 0x144570cu;
    c->r[1] = 0xfu;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x5f34d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x5f34e0u; f_6e3478(c);
L_5f34e0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5f3518(Cpu *restrict c) {
    FN_ENTER(0x5f3518u);
L_5f3518:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[5] = c->r[0];
    c->r[0] = 0x144744cu;
    c->r[9] = 0x0u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x5f353cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1445694u;
    { uint32_t ea = 0x5f3544u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1445688u;
    { uint32_t ea = 0x5f3550u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1445680u;
    { uint32_t ea = 0x5f3558u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_5f3558:;
    { uint32_t ea = c->r[10] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3560u; f_250bdc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5f35ec; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f357cu; f_75fef8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5f35ec; }
    c->r[4] = 0x0u;
L_5f358c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x5f359cu; f_75ff50(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f35b0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_5f35c0; }
L_5f35b0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_CC) { goto L_5f358c; }
    goto L_5f35ec;
L_5f35c0:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f35d0u; f_760058(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f35ec; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[9]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_5f35f8; }
L_5f35ec:;
    c->r[11] = c->r[11] + 0x1u;
    (void)f_subs(c, c->r[11], 0x57u);
    if (COND_CC) { goto L_5f3558; }
L_5f35f8:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[9]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f3624(Cpu *restrict c) {
    FN_ENTER(0x5f3624u);
L_5f3624:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1447298u;
    c->r[11] = 0x3u;
    c->r[7] = 0x0u;
    c->r[6] = 0x1u;
    c->r[8] = 0x0u;
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = 0x5f3650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + 0xf90u;
    c->r[0] = 0x1447328u;
    { uint32_t ea = 0x5f3660u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1445720u;
    { uint32_t ea = 0x5f3668u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1445564u;
    { uint32_t ea = 0x5f3674u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1445540u;
    { uint32_t ea = 0x5f3680u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_5f3680:;
    { uint32_t ea = c->r[5] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1du;
    (void)f_subs(c, c->r[1], 0x28u);
    if (COND_HI) { goto L_5f3744; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x5f369cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5f3758u: goto L_5f3758; case 0x5f37ecu: goto L_5f37ec; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5f3744:;
    c->r[1] = c->r[0] - 0x74u;
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_HI) { goto L_5f3758; }
    { uint32_t r = c->r[11] & shc_lsl(c, c->r[6], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f37ec; }
L_5f3758:;
    { uint32_t ea = c->r[10] + (c->r[8] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_5f37dc; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0x5f3770u; f_250bdc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5f37d4; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f378cu; f_760058(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f37d4; }
    c->r[0] = 0x72cu;
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0x5f37a8u; f_726f48(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5f37d4; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f37c8u; f_267310(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { c->r[7] = c->r[7] + 0x1u; }
L_5f37d4:;
    c->r[6] = 0x1u;
    goto L_5f37e0;
L_5f37dc:;
    c->r[7] = c->r[7] + 0x1u;
L_5f37e0:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_5f37f8; }
L_5f37ec:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], 0x57u);
    if (COND_CC) { goto L_5f3680; }
L_5f37f8:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f3824(Cpu *restrict c) {
    FN_ENTER(0x5f3824u);
L_5f3824:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1447098u;
    c->r[11] = 0x3u;
    c->r[7] = 0x0u;
    c->r[6] = 0x1u;
    c->r[8] = 0x0u;
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = 0x5f3850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + 0xf90u;
    c->r[0] = 0x1447128u;
    { uint32_t ea = 0x5f3860u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1445520u;
    { uint32_t ea = 0x5f3868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1445364u;
    { uint32_t ea = 0x5f3874u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1445340u;
    { uint32_t ea = 0x5f3880u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_5f3880:;
    { uint32_t ea = c->r[5] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1du;
    (void)f_subs(c, c->r[1], 0x28u);
    if (COND_HI) { goto L_5f3944; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x5f389cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5f3958u: goto L_5f3958; case 0x5f39f8u: goto L_5f39f8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5f3944:;
    c->r[1] = c->r[0] - 0x74u;
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_HI) { goto L_5f3958; }
    { uint32_t r = c->r[11] & shc_lsl(c, c->r[6], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f39f8; }
L_5f3958:;
    c->r[1] = c->r[10] + (c->r[8] << 3);
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x60u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f3970; }
    c->r[7] = c->r[7] + 0x1u;
    goto L_5f39ec;
L_5f3970:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0x5f397cu; f_250bdc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5f39e8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3998u; f_760058(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f39e8; }
    c->r[0] = 0x72cu;
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0x5f39b4u; f_726f48(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5f39e8; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f39d4u; f_267310(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { c->r[7] = c->r[7] + 0x1u; }
L_5f39e8:;
    c->r[6] = 0x1u;
L_5f39ec:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_CS) { goto L_5f3a04; }
L_5f39f8:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], 0x57u);
    if (COND_CC) { goto L_5f3880; }
L_5f3a04:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[7]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_CS) { c->r[0] = 0x1u; }
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f3a30(Cpu *restrict c) {
    FN_ENTER(0x5f3a30u);
L_5f3a30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[1] = 0x1445338u;
    c->r[2] = (c->r[0] >> 5);
    c->r[12] = c->r[0] & 0x1fu;
    c->r[14] = 0x1u;
    { uint32_t ea = 0x5f3a50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + (c->r[2] << 2);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + 0xc28u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[4] = v; }
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f3b20; }
    { uint32_t ea = c->r[3] + 0xc3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = sh_lsl(c->r[14], c->r[12]);
    c->r[2] = c->r[2] | c->r[12];
    { uint32_t ea = c->r[3] + 0xc3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0xc50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | c->r[12];
    { uint32_t ea = c->r[3] + 0xc50u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[4] | c->r[12];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1446e54u;
    { uint32_t ea = 0x5f3a94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[2];
    c->r[14] = 0x5f3aa0u; f_3630c4(c);
    c->r[0] = 0x1445514u;
    { uint32_t ea = 0x5f3aacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f3ae8; }
    c->r[0] = 0x14450f0u;
    { uint32_t ea = 0x5f3ac4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3ac8u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f3b20; }
    c->r[0] = 0x14450d8u;
    { uint32_t ea = 0x5f3adcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3ae0u; f_5f8610(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f3b20; }
L_5f3ae8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1du;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x5f3afcu; f_85dd68(c);
    c->r[0] = 0x14450ccu;
    c->r[1] = 0xfu;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x5f3b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = 0x2u;
    c->r[14] = 0x5f3b20u; f_6e3478(c);
L_5f3b20:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5f3b40(Cpu *restrict c) {
    FN_ENTER(0x5f3b40u);
L_5f3b40:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x5cu;
    c->r[8] = c->r[1];
    c->r[6] = c->r[2];
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[8], 0x4u);
    if (COND_GT) { goto L_5f4064; }
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_HI) { goto L_5f4064; }
    c->r[0] = 0x12373acu;
    c->r[7] = c->r[8] + (c->r[8] << 2);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[5]); }
    c->r[0] = 0x5f3b8cu + c->r[0];
    c->r[1] = c->r[0] + (c->r[7] << 4);
    c->r[0] = c->r[6] + (c->r[6] << 2);
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_5f3bb0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5f3bbc; }
    c->r[9] = 0x0u;
    c->r[1] = 0x0u;
    goto L_5f3bc8;
L_5f3bb0:;
    c->r[5] = 0x1u;
    c->r[9] = 0x0u;
    goto L_5f3bc4;
L_5f3bbc:;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[9] = 0x1u;
L_5f3bc4:;
    c->r[1] = 0x1u;
L_5f3bc8:;
    c->r[2] = 0x1237364u;
    c->r[2] = 0x5f3bd4u + c->r[2];
    c->r[2] = c->r[2] + (c->r[7] << 4);
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5f3c08; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_5f3c04; }
    c->r[3] = c->r[13] + 0x48u;
    c->r[3] = c->r[3] | (c->r[9] << 2);
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    goto L_5f3c08;
L_5f3c04:;
    c->r[5] = c->r[5] + 0x1u;
L_5f3c08:;
    c->r[2] = 0x1237324u;
    c->r[2] = 0x5f3c14u + c->r[2];
    c->r[2] = c->r[2] + (c->r[7] << 4);
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5f3c3c; }
    (void)f_adds(c, c->r[2], 0x1u);
    c->r[1] = c->r[1] + 0x1u;
    if (COND_NE) { c->r[3] = c->r[13] + 0x48u; }
    if (COND_EQ) { c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[3] + (c->r[9] << 2); ST32(ea, c->r[2]); } }
    if (COND_NE) { c->r[9] = c->r[9] + 0x1u; }
L_5f3c3c:;
    c->r[2] = 0x12372f0u;
    c->r[2] = 0x5f3c48u + c->r[2];
    c->r[2] = c->r[2] + (c->r[7] << 4);
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5f3c70; }
    (void)f_adds(c, c->r[2], 0x1u);
    c->r[1] = c->r[1] + 0x1u;
    if (COND_NE) { c->r[3] = c->r[13] + 0x48u; }
    if (COND_EQ) { c->r[5] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[3] + (c->r[9] << 2); ST32(ea, c->r[2]); } }
    if (COND_NE) { c->r[9] = c->r[9] + 0x1u; }
L_5f3c70:;
    c->r[2] = 0x12372bcu;
    c->r[2] = 0x5f3c7cu + c->r[2];
    c->r[2] = c->r[2] + (c->r[7] << 4);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5f3ca4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f3cac; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5f3cb8; }
    c->r[10] = 0x0u;
    goto L_5f4064;
L_5f3ca4:;
    c->r[5] = c->r[5] + 0x1u;
    goto L_5f3cb8;
L_5f3cac:;
    c->r[1] = c->r[13] + 0x48u;
    { uint32_t ea = c->r[1] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    c->r[9] = c->r[9] + 0x1u;
L_5f3cb8:;
    c->r[11] = c->r[13] + 0x8u;
    c->r[1] = 0x3cu;
    c->r[0] = c->r[11];
    c->r[14] = 0x5f3cc8u; f_15efdc4(c);
    c->r[0] = c->r[6] + 0xffu;
    c->r[2] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_5f3db0; }
    c->r[1] = 0x1237244u;
    c->r[3] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = 0x0u;
    c->r[1] = 0x5f3cf4u + c->r[1];
    c->r[1] = c->r[1] + (c->r[7] << 4);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + 0x8u;
L_5f3cfc:;
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_5f3d18; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] + (c->r[6] << 2); ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[6] = c->r[6] + 0x1u; }
    goto L_5f3d1c;
L_5f3d18:;
    c->r[5] = c->r[5] + 0x1u;
L_5f3d1c:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_5f3d38; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] + (c->r[6] << 2); ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[6] = c->r[6] + 0x1u; }
    goto L_5f3d3c;
L_5f3d38:;
    c->r[5] = c->r[5] + 0x1u;
L_5f3d3c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_5f3d58; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] + (c->r[6] << 2); ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[6] = c->r[6] + 0x1u; }
    goto L_5f3d5c;
L_5f3d58:;
    c->r[5] = c->r[5] + 0x1u;
L_5f3d5c:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_5f3d78; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] + (c->r[6] << 2); ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[6] = c->r[6] + 0x1u; }
    goto L_5f3d7c;
L_5f3d78:;
    c->r[5] = c->r[5] + 0x1u;
L_5f3d7c:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_5f3d98; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] + (c->r[6] << 2); ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[6] = c->r[6] + 0x1u; }
    goto L_5f3d9c;
L_5f3d98:;
    c->r[5] = c->r[5] + 0x1u;
L_5f3d9c:;
    c->r[2] = c->r[2] - 0x1u;
    c->r[1] = c->r[1] - 0x14u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GT) { goto L_5f3cfc; }
    goto L_5f3db4;
L_5f3db0:;
    c->r[6] = 0x0u;
L_5f3db4:;
    (void)f_subs(c, c->r[8], 0x4u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_5f3f34; }
    c->r[0] = (c->r[8] << 2);
    c->r[1] = 0x5f3dd0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5f3de8u: goto L_5f3de8; case 0x5f3e00u: goto L_5f3e00; case 0x5f3e18u: goto L_5f3e18; case 0x5f3e40u: goto L_5f3e40; case 0x5f3e68u: goto L_5f3e68; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5f3de8:;
    c->r[0] = 0x1444f28u;
    c->r[1] = c->r[13];
    c->r[2] = c->r[13] + 0x4u;
    c->r[3] = 0x7u;
    { uint32_t ea = 0x5f3e00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5f3e2c;
L_5f3e00:;
    c->r[0] = 0x1444f10u;
    c->r[1] = c->r[13];
    c->r[2] = c->r[13] + 0x4u;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x5f3e18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5f3e2c;
L_5f3e18:;
    c->r[0] = 0x1444ef8u;
    c->r[1] = c->r[13];
    c->r[2] = c->r[13] + 0x4u;
    c->r[3] = 0x9u;
    { uint32_t ea = 0x5f3e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5f3e2c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3e34u; f_5b1964(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_5f3f3c; }
    goto L_5f3fec;
L_5f3e40:;
    c->r[0] = 0x1444ed0u;
    c->r[1] = c->r[13];
    c->r[2] = c->r[13] + 0x4u;
    c->r[3] = 0xcu;
    { uint32_t ea = 0x5f3e58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5f3e5cu; f_5b1d70(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_5f3f3c; }
    goto L_5f3fec;
L_5f3e68:;
    c->r[0] = 0x5u;
    c->r[4] = 0x42cu;
    c->r[1] = 0xa15fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1444f04u;
    { uint32_t ea = 0x5f3e84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5f3e8cu; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x1444edcu;
    c->r[7] = 0x0u;
    c->r[1] = 0xa1c3u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); } }
    { uint32_t ea = 0x5f3eacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5f3eb4u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x1444eb4u;
    c->r[4] = 0x42cu;
    c->r[1] = 0xa227u;
    if (COND_NE) { c->r[7] = c->r[7] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); } }
    { uint32_t ea = 0x5f3ed4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5f3edcu; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x1444e90u;
    c->r[1] = 0xa28bu;
    if (COND_EQ) { c->r[7] = c->r[7] + 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); } }
    { uint32_t ea = 0x5f3ef8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = 0x5f3f00u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x1444e6cu;
    c->r[1] = 0x42cu;
    if (COND_EQ) { c->r[7] = c->r[7] + 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); } }
    { uint32_t ea = 0x5f3f1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0xa2efu;
    c->r[14] = 0x5f3f28u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[7] + 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); } }
L_5f3f34:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5f3fec; }
L_5f3f3c:;
    c->r[10] = c->r[9];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_5f3f94; }
    c->r[0] = 0x1444e28u;
    c->r[8] = c->r[13] + 0x48u;
    c->r[7] = 0x42cu;
    c->r[9] = 0x0u;
    { uint32_t ea = 0x5f3f60u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
L_5f3f60:;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5f3f70u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f404c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[9]);
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_CC) { goto L_5f3f60; }
L_5f3f94:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5f4054; }
    c->r[0] = 0x1444dd0u;
    c->r[10] = 0x0u;
    c->r[8] = 0x42cu;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5f3fb8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5f3fb4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->r[14] = 0x5f3fc4u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f4064; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_CC) { goto L_5f3fb4; }
    goto L_5f4058;
L_5f3fec:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_5f4044; }
    c->r[0] = 0x1444d78u;
    c->r[10] = 0x0u;
    c->r[4] = c->r[13] + 0x48u;
    c->r[6] = 0x42cu;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x5f4010u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
L_5f4010:;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x5f4020u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5f4064; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_CC) { goto L_5f4010; }
L_5f4044:;
    c->r[10] = 0x1u;
    goto L_5f4064;
L_5f404c:;
    c->r[10] = 0x0u;
    goto L_5f4064;
L_5f4054:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5f4058:;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LS) { c->r[10] = 0x1u; }
L_5f4064:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[13] + 0x5cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f40b8(Cpu *restrict c) {
    FN_ENTER(0x5f40b8u);
L_5f40b8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[0] = 0x1444cb4u;
    c->r[4] = 0x0u;
    c->r[7] = 0x42cu;
    { uint32_t ea = 0x5f40d4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1444cacu;
    { uint32_t ea = 0x5f40dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1444ca0u;
    { uint32_t ea = 0x5f40e8u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1444c98u;
    { uint32_t ea = 0x5f40f0u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1444c90u;
    { uint32_t ea = 0x5f40f8u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1444fe0u;
    { uint32_t ea = 0x5f4100u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1444fd8u;
    { uint32_t ea = 0x5f4108u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_5f410c;
L_5f4108:;
    c->r[4] = c->r[4] + 0x1u;
L_5f410c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x5f4118u; f_723984(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f4130; }
L_5f4120:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xeu);
    if (COND_CC) { goto L_5f410c; }
    goto L_5f41e4;
L_5f4130:;
    c->r[0] = c->r[4] - 0x5u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_5f4120; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5f4148u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5f4120u: goto L_5f4120; case 0x5f4170u: goto L_5f4170; case 0x5f4184u: goto L_5f4184; case 0x5f4198u: goto L_5f4198; case 0x5f41a8u: goto L_5f41a8; case 0x5f41b4u: goto L_5f41b4; case 0x5f41c0u: goto L_5f41c0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5f4170:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x583u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f4120; }
    goto L_5f41d8;
L_5f4184:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x598u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xau; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f4120; }
    goto L_5f41d8;
L_5f4198:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5f41c8;
L_5f41a8:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38du;
    goto L_5f41c8;
L_5f41b4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38bu;
    goto L_5f41c8;
L_5f41c0:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38eu;
L_5f41c8:;
    c->r[0] = c->r[0] + c->r[7];
    c->r[14] = 0x5f41d0u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f4108; }
L_5f41d8:;
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5f41e4:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f420c(Cpu *restrict c) {
    FN_ENTER(0x5f420cu);
L_5f420c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[0] = 0x1444b58u;
    c->r[4] = 0x0u;
    c->r[6] = 0x42cu;
    c->r[9] = 0x1u;
    c->r[7] = 0x35e4u;
    { uint32_t ea = 0x5f4230u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1444b50u;
    { uint32_t ea = 0x5f4238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1444b44u;
    { uint32_t ea = 0x5f4244u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1444b3cu;
    { uint32_t ea = 0x5f424cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1444b30u;
    { uint32_t ea = 0x5f4258u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1444b24u;
    { uint32_t ea = 0x5f4264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1444e70u;
    { uint32_t ea = 0x5f4270u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1444e68u;
    { uint32_t ea = 0x5f4278u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    goto L_5f427c;
L_5f4278:;
    c->r[4] = c->r[4] + 0x1u;
L_5f427c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x5f4288u; f_723984(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5f438c; }
    c->r[0] = c->r[4] - 0x5u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_5f438c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5f42a8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5f42d0u: goto L_5f42d0; case 0x5f42e4u: goto L_5f42e4; case 0x5f42f8u: goto L_5f42f8; case 0x5f4304u: goto L_5f4304; case 0x5f4310u: goto L_5f4310; case 0x5f431cu: goto L_5f431c; case 0x5f438cu: goto L_5f438c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5f42d0:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x583u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4338; }
    goto L_5f438c;
L_5f42e4:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x598u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xau; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4338; }
    goto L_5f438c;
L_5f42f8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38du;
    goto L_5f4324;
L_5f4304:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38cu;
    goto L_5f4324;
L_5f4310:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38bu;
    goto L_5f4324;
L_5f431c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38eu;
L_5f4324:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[14] = 0x5f4330u; f_723da4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5f4278; }
L_5f4338:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[4] >> 5);
    c->r[0] = sh_lsl(c->r[9], c->r[4]);
    c->r[3] = c->r[1] + (c->r[2] << 2);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[9], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5f4384; }
    c->r[6] = c->r[3];
    c->r[7] = 0x35e8u;
    { uint32_t ea = c->r[6] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[0];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[7] = 0x35ecu;
    c->r[6] = 0x42cu;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    c->r[7] = c->r[7] | c->r[0];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[7] = 0x35e4u;
L_5f4384:;
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_5f438c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xeu);
    if (COND_NE) { goto L_5f427c; }
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5f43c0(Cpu *restrict c) {
    FN_ENTER(0x5f43c0u);
L_5f43c0:;
    c->r[2] = c->r[0] + 0x20u;
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = 0x4u;
    __attribute__((musttail)) return f_5df378(c);
}
void f_5f43d4(Cpu *restrict c) {
    FN_ENTER(0x5f43d4u);
L_5f43d4:;
    c->r[2] = c->r[0] + 0x20u;
    c->r[0] = c->r[1];
    c->r[1] = c->r[2];
    c->r[2] = 0x4u;
    __attribute__((musttail)) return f_5df2a8(c);
}
void f_5f43e8(Cpu *restrict c) {
    FN_ENTER(0x5f43e8u);
L_5f43e8:;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f4404; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_5f4404:;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f441c; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_5f441c:;
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f4434; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_5f4434:;
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f444c; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x8u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_5f444c:;
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f4464; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x10u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_5f4464:;
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5f447c; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x20u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_5f447c:;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    return;
}
void f_5f4494(Cpu *restrict c) {
    FN_ENTER(0x5f4494u);
L_5f4494:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5f4498(Cpu *restrict c) {
    FN_ENTER(0x5f4498u);
L_5f4498:;
    c->r[0] = 0x14487ecu;
    { uint32_t ea = 0x5f44a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5f44a8(Cpu *restrict c) {
    FN_ENTER(0x5f44a8u);
L_5f44a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14984c4u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x5f44ccu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5f4514u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5f452cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5f4544u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x14449a0u;
    c->r[3] = 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14486e4u;
    { uint32_t ea = 0x5f45a4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x117032bu;
    { uint32_t ea = 0x5f45acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5f45b0u + c->r[1];
    c->r[14] = 0x5f45b0u; f_9aedcc(c);
    c->r[1] = 0x14486e0u;
    { uint32_t ea = 0x5f45bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
