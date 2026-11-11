#include "cpu.h"
#include "neon_rt.h"
void f_15c5418(Cpu *c);
void f_15c741c(Cpu *c);
void f_15c748c(Cpu *c);
void f_15c769c(Cpu *c);
void f_15c8420(Cpu *c);
void f_15ca678(Cpu *c);
void f_15ca688(Cpu *c);
void f_15ca698(Cpu *c);
void f_15ca71c(Cpu *c);
void f_15ca8f4(Cpu *c);
void f_15cbb28(Cpu *c);
void f_15cbb34(Cpu *c);
void f_15cbe80(Cpu *c);
void f_15cc428(Cpu *c);
void f_15cc9f8(Cpu *c);
void f_15ccc4c(Cpu *c);
void f_15cd13c(Cpu *c);
void f_15cd3d0(Cpu *c);
void f_15cde8c(Cpu *c);
void f_15ce3f0(Cpu *c);
void f_15ce544(Cpu *c);
void f_15ce558(Cpu *c);
void f_15d33b4(Cpu *c);
void f_15d34f4(Cpu *c);
void f_15d67a8(Cpu *c);
void f_15d6a34(Cpu *c);
void f_15d6bc4(Cpu *c);
void f_15d6d10(Cpu *c);
void f_15d6e40(Cpu *c);
void f_15d6f54(Cpu *c);
void f_15d732c(Cpu *c);
void f_15d7470(Cpu *c);
void f_15d7484(Cpu *c);
void f_15d74ac(Cpu *c);
void f_15d74c0(Cpu *c);
void f_15d76c8(Cpu *c);
void f_15d8e20(Cpu *c);
void f_15d8e68(Cpu *c);
void f_15d905c(Cpu *c);
void f_15d9144(Cpu *c);
void f_15d9238(Cpu *c);
void f_15dcb40(Cpu *c);
void f_15dcdb4(Cpu *c);
void f_15dd050(Cpu *c);
void f_15e3f68(Cpu *c);
void f_15e40fc(Cpu *c);
void f_15e5168(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15efe3c(Cpu *c);
void f_15efef0(Cpu *c);
void f_15eff38(Cpu *c);
void f_15eff44(Cpu *c);
void f_15eff50(Cpu *c);
void f_15effa4(Cpu *c);
void f_15f007c(Cpu *c);
void f_15f00a0(Cpu *c);
void f_15f0eec(Cpu *c);
void f_15f1738(Cpu *c);
void f_15f1a74(Cpu *c);
void f_15f1ac8(Cpu *c);
void f_15f1ad4(Cpu *c);
void f_15d3d10(Cpu *restrict c) {
    FN_ENTER(0x15d3d10u);
L_15d3d10:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x26cu;
    c->r[4] = 0x0u;
    c->r[10] = c->r[0];
    c->r[9] = c->r[2];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d3d3cu; f_15ca678(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d3d48u; f_15ca688(c);
    { uint32_t ea = c->r[9]; ST8(ea, c->r[4]); }
    c->r[5] = c->r[0];
    c->r[6] = 0x3u;
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4080; }
    c->r[0] = 0x1u;
    c->r[1] = 0x658u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    c->r[7] = 0x1u;
    c->r[14] = 0x15d3d74u; f_15d74c0(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_15d407c; }
    c->r[0] = 0x463b0cu;
    c->r[0] = 0x15d3d8cu + c->r[0];
    { uint32_t ea = c->r[6] + 0x418u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[6] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x120u;
    { uint32_t ea = c->r[6] + 0x3ecu; ST8(ea, c->r[7]); }
    c->r[14] = 0x15d3db8u; f_15ce544(c);
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[10] + 0x294u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x34cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d3e08; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[6] + 0x3eeu; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_15d3e14; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d3e1c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    goto L_15d3e20;
L_15d3e08:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x3eeu; ST8(ea, c->r[0]); }
    goto L_15d3e20;
L_15d3e14:;
    c->r[0] = 0x0u;
    goto L_15d3e20;
L_15d3e1c:;
    c->r[0] = 0x1u;
L_15d3e20:;
    { uint32_t ea = c->r[6] + 0x3efu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x38cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[6] + 0x3f1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2cau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3f9u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x380u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[6] + 0x3f0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2e4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3fcu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2e5u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3fdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x250u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x638u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x251u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x639u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x420u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d3e7cu; f_15c8420(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x460u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_15d4028; }
L_15d3e8c:;
    c->r[0] = 0x2de8u;
    c->r[7] = 0x15d3e98u + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x15d3e9cu; f_15e3f68(c);
    { uint32_t ea = c->r[6] + 0x458u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d3ea8u; f_15e3f68(c);
    { uint32_t ea = c->r[6] + 0x45cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_15d4040; }
    { uint32_t ea = c->r[10] + 0x324u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d3ed8; }
    c->r[14] = 0x15d3eccu; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x63cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d4040; }
L_15d3ed8:;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[5]); }
    c->r[1] = 0x640u;
    { uint32_t ea = c->r[10] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x644u; ST32(ea, c->r[0]); }
    c->r[0] = 0x168u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d3f14u; f_15efd88(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x8638u;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[14] = 0x15d3f28u; f_15d7484(c);
    (void)f_subs(c, c->r[7], 0x100u);
    c->r[1] = 0x0u;
    c->r[0] = 0x863cu;
    c->r[4] = c->r[10];
    if (COND_LS) { c->r[7] = 0x100u; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); c->r[4] = ea; }
    c->r[7] = c->r[7] + 0x2u;
    c->r[0] = c->r[7];
    c->r[14] = 0x15d3f50u; f_15d7470(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d40ac; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d3f68u; f_15d7470(c);
    c->r[5] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[5] + 0x90u; ST32(ea, c->r[0]); c->r[5] = ea; }
    if (COND_EQ) { goto L_15d40b8; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x17cddeu;
    c->r[4] = 0x15d3f98u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x15d3f9cu; f_15d74ac(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x15d3fa8u; f_15d74ac(c);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x15d3fb4u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d61b4; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_15d61b4; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = 0x199107u;
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x15d4004u + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x15d4008u; f_15f1ac8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d40d8; }
    c->r[0] = 0x1be907u;
    c->r[1] = 0x15d401cu + c->r[0];
L_15d4018:;
    c->r[0] = c->r[10];
    c->r[14] = 0x15d4020u; f_15cd3d0(c);
    c->r[6] = 0x3u;
    goto L_15d61b8;
L_15d4028:;
    c->r[0] = 0x4000u;
    c->r[1] = 0x1u;
    c->r[14] = 0x15d4034u; f_15d74c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x460u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_15d3e8c; }
L_15d4040:;
    { uint32_t ea = c->r[6] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x15d4050u; f_15e40fc(c);
    { uint32_t ea = c->r[6] + 0x45cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x15d405cu; f_15e40fc(c);
    { uint32_t ea = c->r[6] + 0x458u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x45cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x460u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d406cu; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x63cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4074u; f_15d7484(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x15d407cu; f_15d7484(c);
L_15d407c:;
    c->r[6] = 0x1bu;
L_15d4080:;
    c->r[0] = c->r[4];
    c->r[14] = 0x15d4088u; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4090u; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4098u; f_15d7484(c);
    c->r[0] = 0x0u;
    c->r[14] = 0x15d40a0u; f_15d7484(c);
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_15d40ac:;
    c->r[6] = 0x1bu;
    c->r[4] = 0x0u;
    goto L_15d4080;
L_15d40b8:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d40c0u; f_15d7484(c);
    c->r[0] = 0x0u;
    c->r[4] = 0x0u;
    c->r[6] = 0x1bu;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    goto L_15d4080;
L_15d40d8:;
    c->r[0] = 0x1be853u;
    c->r[2] = c->r[11] - 0x120u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[4]); }
    c->r[1] = 0x15d40f0u + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x15d40f4u; f_15efef0(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_15d416c; }
    c->r[0] = 0x1be849u;
    c->r[1] = 0x15d4108u + c->r[0];
    c->r[0] = c->r[11] - 0x120u;
    c->r[14] = 0x15d410cu; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d416c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_NE) { goto L_15d4200; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_NE) { goto L_15d4288; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[0] = c->r[7];
    c->r[14] = 0x15d4144u; f_15efd88(c);
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x15d4154u; f_15eff38(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_NE) { goto L_15d4200; }
    c->r[0] = 0x1be7e5u;
    c->r[0] = 0x15d416cu + c->r[0];
    goto L_15d429c;
L_15d416c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = c->r[11] - 0x120u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1be7b6u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    c->r[1] = 0x15d41a0u + c->r[1];
    c->r[14] = 0x15d41a0u; f_15efef0(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GT) { goto L_15d42a4; }
    c->r[1] = 0x1be7aau;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x15d41c4u + c->r[1];
    c->r[14] = 0x15d41c4u; f_15efef0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_15d4250; }
    c->r[0] = 0x1be7abu;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    c->r[0] = 0x15d41e0u + c->r[0];
    c->r[14] = 0x15d41e0u; f_15cc428(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_15d425c; }
    c->r[0] = 0x1be794u;
    c->r[0] = 0x15d41fcu + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_15d42a4;
L_15d4200:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2fu;
    c->r[14] = 0x15d420cu; f_15eff44(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_15d4294; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2fu);
    if (COND_NE) { c->r[7] = c->r[0]; }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d4234u; f_15efd88(c);
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x15d4244u; f_15eff38(c);
    c->r[0] = 0x1be701u;
    c->r[0] = 0x15d4250u + c->r[0];
    goto L_15d429c;
L_15d4250:;
    c->r[0] = 0x1be71fu;
    c->r[1] = 0x15d425cu + c->r[0];
    goto L_15d4018;
L_15d425c:;
    c->r[0] = 0x1be724u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x5u;
    c->r[0] = 0x15d4270u + c->r[0];
    c->r[14] = 0x15d4270u; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4958; }
    c->r[0] = 0x1be716u;
    c->r[0] = 0x15d4284u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_15d42a4;
L_15d4288:;
    c->r[0] = 0x1be6bdu;
    c->r[0] = 0x15d4294u + c->r[0];
    goto L_15d429c;
L_15d4294:;
    c->r[0] = 0x1be6b1u;
    c->r[0] = 0x15d42a0u + c->r[0];
L_15d429c:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_15d42a0:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
L_15d42a4:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d42b8u; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x3fu;
    if (COND_NE) { c->r[7] = c->r[0] + 0x1u; }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d42ccu; f_15eff44(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d4344; }
    c->r[0] = c->r[5];
    c->r[14] = 0x15d42e0u; f_15efd88(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[0];
    c->r[0] = c->r[9] + c->r[7];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x15d42f8u; f_15efd88(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[1];
    c->r[1] = c->r[9];
    c->r[14] = 0x15d4310u; f_15eff38(c);
    c->r[0] = c->r[9] + 0x1u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x15d4320u; f_15efe30(c);
    c->r[0] = 0x2fu;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_EQ) { goto L_15d4360; }
    goto L_15d439c;
L_15d4344:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4388; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_NE) { goto L_15d439c; }
L_15d4360:;
    c->r[0] = c->r[9];
    c->r[14] = 0x15d4368u; f_15efd88(c);
    c->r[1] = c->r[9] + 0x1u;
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[1];
    c->r[1] = c->r[9];
    c->r[14] = 0x15d437cu; f_15eff38(c);
    c->r[0] = 0x2fu;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    goto L_15d4404;
L_15d4388:;
    c->r[0] = 0x0u;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[9] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2fu;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
L_15d439c:;
    { uint32_t ea = c->r[10] + 0x3feu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d43b4; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_15d4404; }
    goto L_15d44bc;
L_15d43b4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x15d43bcu; f_15dcb40(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d61b4; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[14] = 0x15d43d4u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d43f4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d43e4u; f_15d7484(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[9] = c->r[5];
    goto L_15d4404;
L_15d43f4:;
    c->r[0] = c->r[5];
    c->r[14] = 0x15d43fcu; f_15d7484(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d44bc; }
L_15d4404:;
    c->r[0] = c->r[9];
    c->r[14] = 0x15d440cu; f_15efd88(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4418u; f_15efd88(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4424u; f_15efd88(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d4444; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d443cu; f_15efd88(c);
    c->r[0] = c->r[7] + c->r[0];
    c->r[7] = c->r[0] + 0x3u;
L_15d4444:;
    c->r[0] = c->r[5] + 0x2u;
    c->r[14] = 0x15d444cu; f_15d7470(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d407c; }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[7];
    c->r[14] = 0x15d446cu; f_15efe30(c);
    c->r[0] = c->r[5] + c->r[7];
    c->r[2] = c->r[8] + 0x1u;
    c->r[1] = c->r[9];
    c->r[14] = 0x15d447cu; f_15efe30(c);
    { uint32_t ea = c->r[10] + 0x40cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d449c; }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4490u; f_15d7484(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x408u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x40cu; ST8(ea, c->r[0]); }
L_15d449c:;
    c->r[0] = 0x1be51fu;
    c->r[2] = c->r[5];
    c->r[1] = 0x15d44acu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d44b0u; f_15cd13c(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x408u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x40cu; ST8(ea, c->r[0]); }
L_15d44bc:;
    c->r[8] = 0x0u;
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d44dcu; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4524; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_15d4524; }
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = c->r[13] + 0x68u;
    c->r[3] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = ~c->r[7];
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x15d4518u; f_15d67a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d45ec; }
    c->r[8] = c->r[0];
L_15d4524:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d452cu; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4534u; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d453cu; f_15d7484(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_15d454c; }
    c->r[6] = c->r[8];
    goto L_15d61b8;
L_15d454c:;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5bu);
    if (COND_NE) { goto L_15d46ac; }
    c->r[1] = 0x25u;
    c->r[14] = 0x15d4568u; f_15eff44(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d46ac; }
    c->r[0] = 0x1be453u;
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[7] = 0x3u;
    c->r[0] = 0x15d458cu + c->r[0];
    c->r[14] = 0x15d458cu; f_15f00a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d45a8; }
    c->r[0] = 0x1be443u;
    c->r[1] = 0x15d45a0u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d45a4u; f_15cd13c(c);
    c->r[7] = 0x1u;
L_15d45a8:;
    c->r[0] = c->r[5] + c->r[7];
    c->r[1] = c->r[13] + 0x68u;
    c->r[2] = 0xau;
    c->r[14] = 0x15d45b8u; f_15f1738(c);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5du);
    if (COND_NE) { goto L_15d469c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d45d4u; f_15efd88(c);
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x15d45e4u; f_15eff38(c);
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[8]); }
    goto L_15d46ac;
L_15d45ec:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d462c; }
    c->r[0] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[6] + 0x3ffu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3f0u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x15d4614u; f_15dcdb4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d4984; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4628u; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
L_15d462c:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d4660; }
    c->r[0] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d4648u; f_15dcdb4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d4a2c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d465cu; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[7]); }
L_15d4660:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d4524; }
    c->r[0] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    c->r[14] = 0x15d4680u; f_15dcdb4(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d4b90; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4694u; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    goto L_15d4524;
L_15d469c:;
    c->r[0] = 0x1be368u;
    c->r[1] = 0x15d46a8u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d46acu; f_15cd13c(c);
L_15d46ac:;
    { uint32_t ea = c->r[10] + 0x3b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x23u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[9];
    c->r[14] = 0x15d46c4u; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d46e8; }
    c->r[7] = 0x0u;
    c->r[1] = 0x23u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d46e0u; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); } }
L_15d46e8:;
    c->r[0] = 0x474110u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x15d46f8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x15d4700u; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d4728; }
    c->r[0] = 0x4740f4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x15d4718u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x15d4720u; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d493c; }
L_15d4728:;
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x3bcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d493c; }
    c->r[1] = 0x8560u;
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD8(ea); c->r[9] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d4758; }
    { uint32_t ea = c->r[10] + 0x3c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d493c; }
L_15d4758:;
    { uint32_t ea = c->r[6] + 0x418u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x41cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d47bc; }
    c->r[0] = 0x1be05bu;
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->r[0] = 0x15d4780u + c->r[0];
    c->r[14] = 0x15d4780u; f_15c748c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d407c; }
    { uint32_t ea = c->r[10] + 0x40cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d47ac; }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d47a0u; f_15d7484(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x408u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x40cu; ST8(ea, c->r[0]); }
L_15d47ac:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x408u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x40cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x41cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_15d47bc:;
    { uint32_t ea = c->r[7] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d47e8; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x863cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3fu;
    c->r[14] = 0x15d47dcu; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); } }
L_15d47e8:;
    { uint32_t ea = c->r[10] + 0x3acu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4804; }
    c->r[14] = 0x15d47f8u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x12cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d407c; }
L_15d4804:;
    { uint32_t ea = c->r[10] + 0x144u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4868; }
    c->r[5] = c->r[11] - 0x120u;
    c->r[1] = 0xb4u;
    c->r[0] = c->r[5];
    c->r[14] = 0x15d4820u; f_15efdc4(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x15d4828u; f_15d76c8(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[10] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4860; }
    c->r[0] = 0x473fb8u;
    c->r[1] = 0x1bdf97u;
    { uint32_t ea = 0x15d4848u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x15d484cu + c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4850u; f_15c769c(c);
    { uint32_t ea = c->r[10] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4858u; f_15d7484(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x34cu; ST32(ea, c->r[0]); }
L_15d4860:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d498c; }
L_15d4868:;
    { uint32_t ea = c->r[6] + 0x3f1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d490c; }
    c->r[0] = c->r[11] - 0x120u;
    c->r[1] = 0x100u;
    c->r[14] = 0x15d4880u; f_15efdc4(c);
    c->r[0] = c->r[13] + 0x68u;
    c->r[1] = 0x100u;
    c->r[14] = 0x15d488cu; f_15efdc4(c);
    { uint32_t ea = c->r[10] + 0x38cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d48ac; }
    c->r[0] = c->r[11] - 0x120u;
    c->r[2] = 0x100u;
    c->r[14] = 0x15d48a4u; f_15efe3c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x21u; ST8(ea, c->r[0]); }
L_15d48ac:;
    { uint32_t ea = c->r[10] + 0x390u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d48cc; }
    c->r[0] = c->r[13] + 0x68u;
    c->r[2] = 0x100u;
    c->r[14] = 0x15d48c4u; f_15efe3c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x167u; ST8(ea, c->r[0]); }
L_15d48cc:;
    c->r[1] = c->r[11] - 0x120u;
    c->r[0] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d48e0u; f_15dcdb4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d407c; }
    c->r[1] = c->r[13] + 0x68u;
    c->r[0] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d4900u; f_15dcdb4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d407c; }
L_15d490c:;
    { uint32_t ea = c->r[10] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4a60; }
    c->r[14] = 0x15d491cu; f_15d74ac(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_15d4a64; }
    c->r[0] = 0x1bdf10u;
    c->r[1] = 0x15d4934u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d4938u; f_15cd3d0(c);
    goto L_15d407c;
L_15d493c:;
    c->r[0] = 0x1be0e1u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x15d494cu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d4950u; f_15cd3d0(c);
    c->r[6] = 0x1u;
    goto L_15d4080;
L_15d4958:;
    c->r[0] = 0x1be033u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x5u;
    c->r[0] = 0x15d496cu + c->r[0];
    c->r[14] = 0x15d496cu; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4a34; }
    c->r[0] = 0x1be025u;
    c->r[0] = 0x15d4980u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_15d42a4;
L_15d4984:;
    c->r[8] = 0x1bu;
    goto L_15d4524;
L_15d498c:;
    { uint32_t ea = c->r[11] - 0x11cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4868; }
    c->r[0] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x15d49a4u; f_15d7484(c);
    c->r[0] = c->r[5] + 0x8u;
    { uint32_t ea = c->r[10] + 0x34cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x15d49b0u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d407c; }
    { uint32_t ea = c->r[10] + 0x34cu; ST32(ea, c->r[0]); }
    c->r[14] = c->r[11] - 0x100u;
    { uint32_t ea = c->r[14] - 0x1au; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + 0x3eeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4868; }
    { uint32_t ea = c->r[10] + 0x38cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d49e4u; f_15d7484(c);
    c->r[7] = 0x0u;
    c->r[0] = c->r[5] + 0x71u;
    { uint32_t ea = c->r[10] + 0x38cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x15d49f4u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d407c; }
    { uint32_t ea = c->r[10] + 0x38cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4a08u; f_15d7484(c);
    c->r[0] = c->r[5] + 0x91u;
    { uint32_t ea = c->r[10] + 0x390u; ST32(ea, c->r[7]); }
    c->r[14] = 0x15d4a14u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d407c; }
    { uint32_t ea = c->r[10] + 0x390u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + 0x3f1u; ST8(ea, c->r[0]); }
    goto L_15d4868;
L_15d4a2c:;
    c->r[8] = 0x1bu;
    goto L_15d4524;
L_15d4a34:;
    c->r[0] = 0x1bdf62u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x5u;
    c->r[0] = 0x15d4a48u + c->r[0];
    c->r[14] = 0x15d4a48u; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4b98; }
    c->r[0] = 0x1bdf54u;
    c->r[0] = 0x15d4a5cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    goto L_15d42a4;
L_15d4a60:;
    c->r[5] = 0x0u;
L_15d4a64:;
    { uint32_t ea = c->r[10] + 0x394u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d4a80; }
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4a78u; f_15d6a34(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_15d4c98; }
L_15d4a80:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_15d4c28; }
    c->r[0] = 0x1bdfccu;
    c->r[0] = 0x15d4a94u + c->r[0];
    c->r[14] = 0x15d4a94u; f_15dd050(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_15d4ab0; }
    c->r[0] = 0x1bdfbdu;
    c->r[0] = 0x15d4aacu + c->r[0];
    c->r[14] = 0x15d4aacu; f_15dd050(c);
    c->r[4] = c->r[0];
L_15d4ab0:;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x15d4abcu; f_15d6a34(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d4c18; }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[11] - 0x120u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4b00; }
    c->r[7] = c->r[1] + 0x1u;
    c->r[8] = c->r[11] - 0x120u;
L_15d4ae8:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[14] = 0x15d4af0u; f_15f0eec(c);
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); c->r[8] = c->r[8] + 0x1u; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[7] = c->r[7] + 0x1u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d4ae8; }
L_15d4b00:;
    c->r[0] = 0x79u;
    { uint32_t ea = c->r[8] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x78u;
    { uint32_t ea = c->r[8] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x6fu;
    { uint32_t ea = c->r[8] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x72u;
    { uint32_t ea = c->r[8] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x70u;
    { uint32_t ea = c->r[8] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x5fu;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x120u;
    c->r[14] = 0x15d4b40u; f_15dd050(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_15d4c18; }
    c->r[0] = 0x1bdf1du;
    c->r[1] = c->r[11] - 0x120u;
    c->r[0] = 0x15d4b5cu + c->r[0];
    c->r[14] = 0x15d4b5cu; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4bf0; }
L_15d4b64:;
    c->r[0] = 0x1bdf14u;
    c->r[0] = 0x15d4b70u + c->r[0];
    c->r[14] = 0x15d4b70u; f_15dd050(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_15d4c18; }
    c->r[0] = 0x1bdf06u;
    c->r[0] = 0x15d4b88u + c->r[0];
    c->r[14] = 0x15d4b88u; f_15dd050(c);
    c->r[5] = c->r[0];
    goto L_15d4c18;
L_15d4b90:;
    c->r[8] = 0x1bu;
    goto L_15d4524;
L_15d4b98:;
    c->r[0] = 0x1bde09u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x5u;
    c->r[0] = 0x15d4bacu + c->r[0];
    c->r[14] = 0x15d4bacu; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4bc0; }
    c->r[0] = 0x1bddfbu;
    c->r[0] = 0x15d4bc0u + c->r[0];
    goto L_15d429c;
L_15d4bc0:;
    c->r[0] = 0x1bddecu;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x5u;
    c->r[0] = 0x15d4bd4u + c->r[0];
    c->r[14] = 0x15d4bd4u; f_15cc428(c);
    c->r[2] = 0x1bdddeu;
    c->r[1] = 0x1b42c3u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x15d4be8u + c->r[2];
    if (COND_EQ) { c->r[2] = 0x15d4becu + c->r[1]; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    goto L_15d42a0;
L_15d4bf0:;
    c->r[7] = c->r[11] - 0x120u;
    c->r[2] = 0x80u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[7];
    c->r[14] = 0x15d4c04u; f_15cc9f8(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x15d4c0cu; f_15dd050(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d4b64; }
L_15d4c18:;
    c->r[0] = c->r[4];
    c->r[14] = 0x15d4c20u; f_15d7484(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d4ca0; }
L_15d4c28:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4c98; }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_15d4c98; }
    c->r[0] = 0x1b426eu;
    c->r[1] = 0x15d4c50u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x15d4c54u; f_15f007c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d5a10; }
    c->r[0] = 0x1bde18u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x7u;
    c->r[8] = 0x7u;
    c->r[0] = 0x15d4c80u + c->r[0];
    c->r[14] = 0x15d4c80u; f_15cc428(c);
    c->r[1] = c->r[7] + 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_15d50d0; }
    { uint32_t ea = c->r[6] + 0x138u; ST32(ea, c->r[8]); }
    goto L_15d5a10;
L_15d4c98:;
    c->r[0] = c->r[5];
    c->r[14] = 0x15d4ca0u; f_15d7484(c);
L_15d4ca0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x3eeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3efu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3f1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3f9u; ST8(ea, c->r[0]); }
L_15d4cb4:;
    { uint32_t ea = c->r[6] + 0x41cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d4cd0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x3f9u; ST8(ea, c->r[0]); } }
L_15d4cd0:;
    c->r[1] = 0x1bddd8u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x68u;
    c->r[1] = 0x15d4ce4u + c->r[1];
    c->r[14] = 0x15d4ce4u; f_15efef0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x5du); }
    if (COND_NE) { goto L_15d4d34; }
    c->r[0] = 0x1u;
    c->r[1] = 0x5du;
    { uint32_t ea = c->r[6] + 0x3f2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x98u; ST32(ea, c->r[0]); }
    c->r[14] = 0x15d4d10u; f_15eff44(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_15d4d4c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3au);
    if (COND_NE) { c->r[4] = c->r[0]; }
    goto L_15d4d50;
L_15d4d34:;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3au;
    c->r[14] = 0x15d4d40u; f_15eff50(c);
    c->r[4] = c->r[0];
    goto L_15d4d50;
L_15d4d4c:;
    c->r[4] = 0x0u;
L_15d4d50:;
    { uint32_t ea = c->r[10] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x8588u; }
    if (COND_NE) { { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_15d4e90; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[6] + 0xb4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[6] + 0x3efu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4ee0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x404u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4dd8; }
    { uint32_t ea = c->r[10] + 0x2cbu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[3] = 0x41u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d4dc4; }
    { uint32_t ea = c->r[10] + 0x2cdu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[3] = 0x49u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[3] = 0x44u; }
L_15d4dc4:;
    c->r[0] = 0x1bdd0au;
    c->r[1] = 0xcu;
    c->r[2] = 0x15d4dd4u + c->r[0];
    c->r[0] = c->r[11] - 0x120u;
    c->r[14] = 0x15d4dd8u; f_15c741c(c);
L_15d4dd8:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x41cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x8640u;
    c->r[5] = c->r[11] - 0x120u;
    { uint32_t ea = c->r[6] + 0x3f2u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x1b40afu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x17bf5au;
    c->r[2] = 0x15d4e1cu + c->r[2];
    c->r[0] = c->r[2];
    if (COND_NE) { c->r[0] = 0x15d4e24u + c->r[14]; }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bdcc3u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[2];
    if (COND_NE) { c->r[7] = 0x15d4e3cu + c->r[0]; }
    c->r[0] = 0x1bdcb5u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    if (COND_NE) { c->r[2] = 0x15d4e48u + c->r[0]; }
    c->r[0] = 0x1bdc97u;
    c->r[0] = 0x15d4e50u + c->r[0];
    c->r[14] = 0x15d4e50u; f_15c748c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d61b4; }
    { uint32_t ea = c->r[10] + 0x40cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4e7c; }
    { uint32_t ea = c->r[10] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4e70u; f_15d7484(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x408u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x40cu; ST8(ea, c->r[0]); }
L_15d4e7c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x408u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x40cu; ST8(ea, c->r[0]); }
    goto L_15d4ee0;
L_15d4e90:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_15d4ee0; }
    c->r[7] = c->r[4] + 0x1u;
    c->r[1] = c->r[11] - 0x120u;
    c->r[2] = 0xau;
    c->r[0] = c->r[7];
    c->r[14] = 0x15d4eacu; f_15f1a74(c);
    (void)f_subs(c, c->r[0], 0x10000u);
    if (COND_CC) { goto L_15d4ec4; }
    c->r[0] = 0x1bdc41u;
    c->r[1] = 0x15d4ec0u + c->r[0];
    goto L_15d4018;
L_15d4ec4:;
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_15d4ee0; }
    c->r[14] = 0x15d4edcu; f_15d732c(c);
    { uint32_t ea = c->r[6] + 0xb4u; ST32(ea, c->r[0]); }
L_15d4ee0:;
    { uint32_t ea = c->r[10] + 0x380u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4f08; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4ef4u; f_15d7484(c);
    { uint32_t ea = c->r[10] + 0x380u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4efcu; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d61b4; }
L_15d4f08:;
    { uint32_t ea = c->r[10] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4f30; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4f1cu; f_15d7484(c);
    { uint32_t ea = c->r[10] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4f24u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d61b4; }
L_15d4f30:;
    { uint32_t ea = c->r[10] + 0x388u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4f58; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4f44u; f_15d7484(c);
    { uint32_t ea = c->r[10] + 0x388u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d4f4cu; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d4fa0; }
L_15d4f58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x3feu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d4fc4; }
    { uint32_t ea = c->r[10] + 0x348u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x5cu;
    c->r[2] = c->r[13] + 0x58u;
    c->r[14] = 0x15d4f80u; f_15e5168(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_15d4fb0; }
    c->r[0] = 0x1bdb82u;
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x15d4f98u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d4f9cu; f_15cd13c(c);
    goto L_15d4fc4;
L_15d4fa0:;
    c->r[4] = 0x0u;
    goto L_15d407c;
L_15d4fb0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_15d61b4; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + 0x3feu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3f0u; ST8(ea, c->r[0]); }
L_15d4fc4:;
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d4fe8; }
    { uint32_t ea = c->r[6] + 0x3f0u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d509c; }
L_15d4fe8:;
    c->r[14] = 0x15d4fecu; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x120u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d50c0; }
L_15d4ff8:;
    c->r[0] = c->r[7];
    c->r[14] = 0x15d5000u; f_15d74ac(c);
    { uint32_t ea = c->r[6] + 0x124u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_15d61b4; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5038; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d502cu; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x128u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d61b4; }
L_15d5038:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5044u; f_15d7484(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5054u; f_15d7484(c);
    c->r[0] = c->r[7] + 0x50u;
    c->r[1] = 0xc8u;
    c->r[14] = 0x15d5060u; f_15efdc4(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[7] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d5128; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x15d508cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5124; }
    c->r[6] = c->r[0];
    goto L_15d61b8;
L_15d509c:;
    c->r[0] = 0x1bdaacu;
    c->r[0] = 0x15d50a8u + c->r[0];
    c->r[14] = 0x15d50a8u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x120u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d50c0; }
    c->r[0] = 0x1bda9eu;
    c->r[7] = 0x15d50c0u + c->r[0];
    goto L_15d4ff8;
L_15d50c0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x124u; ST32(ea, c->r[0]); }
    goto L_15d61b4;
L_15d50d0:;
    c->r[0] = 0x1bd9bcu;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x6u;
    c->r[0] = 0x15d50e4u + c->r[0];
    c->r[14] = 0x15d50e4u; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d582c; }
    c->r[0] = 0x5u;
    goto L_15d5a0c;
L_15d5124:;
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
L_15d5128:;
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_15d513c; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[0]); }
L_15d513c:;
    { uint32_t ea = c->r[6] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_15d5154; }
    { uint32_t ea = c->r[6] + 0x41cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb4u; ST32(ea, c->r[0]); }
L_15d5154:;
    c->r[0] = 0x4736acu;
    c->r[1] = 0x4736acu;
    { uint32_t ea = 0x15d5164u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x15d5168u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x174u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + 0x3a0u;
    { uint32_t ea = c->r[10] + 0x35cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x268u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x360u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x26cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x378u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x270u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x37cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x274u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x370u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x36cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x27cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x368u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x280u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x248u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[14] = 0x15d51bcu; f_15d6e40(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_15d61b4; }
    c->r[0] = c->r[11] - 0x120u;
    c->r[14] = 0x15d51ccu; f_15ce544(c);
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d51e4u; f_15ce558(c);
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_LT) { goto L_15d5214; }
    c->r[1] = 0x1a88u;
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x15d51fcu + c->r[1];
    c->r[1] = c->r[10];
    c->r[14] = 0x15d5200u; f_15d905c(c);
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
L_15d5214:;
    { uint32_t ea = c->r[10] + 0x2e3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d522c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5908; }
L_15d522c:;
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d527c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5248u; f_15c8420(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_15d527c; }
    { uint32_t ea = c->r[10] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_15d527c; }
    { uint32_t ea = c->r[10] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_15d527c; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0x15d5278u; f_15ca8f4(c);
    c->r[7] = c->r[0] ^ 0x1u;
L_15d527c:;
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x15d5288u; f_15d8e20(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_15d5908; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d529cu; f_15ca698(c);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bd8dcu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x15d52b4u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d52b8u; f_15cd13c(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_15d52f4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d52f4; }
    c->r[0] = 0x1bd8c6u;
    c->r[1] = 0x15d52e8u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d52ecu; f_15cd13c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_15d52f4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5908; }
    c->r[0] = c->r[6] + 0x640u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bd83eu;
    c->r[0] = 0x15d5330u + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bd895u;
    c->r[0] = 0x15d533cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bd8bfu;
    c->r[0] = 0x15d5348u + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
L_15d5350:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x458u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x45cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_adds(c, c->r[3], c->r[2]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD8(ea); c->r[7] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_15d5438; }
L_15d5378:;
    c->r[7] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_15d53f8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; } }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d54a8; }
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d5724; }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d53d0u; f_15c8420(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[5] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[5] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_15d5724; }
    goto L_15d54f4;
L_15d53f8:;
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5714; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_15d542c; }
    { uint32_t ea = c->r[4] + 0x3ecu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d54f4; }
L_15d542c:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_15d571c;
L_15d5438:;
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_15d5464; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d545cu; f_15ccc4c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d574c; }
L_15d5464:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x15d5478u; f_15cd13c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x15d5484u; f_15d33b4(c);
L_15d5484:;
    c->r[0] = 0x2u;
L_15d5488:;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    goto L_15d5724;
L_15d54a8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_15d54f4; }
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d5724; }
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d54d0u; f_15c8420(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[8] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[8] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_15d5724; }
L_15d54f4:;
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ c->r[5];
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d5520; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d5484; }
L_15d5520:;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d5550; }
    { uint32_t ea = c->r[4] + 0x638u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x250u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[4] + 0x639u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x251u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_15d5724; }
L_15d5550:;
    { uint32_t ea = c->r[4] + 0x3eeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3eeu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5580; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5724; }
L_15d5580:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x63cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_15d55d4; }
    c->r[2] = 0x640u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[6] + 0x644u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x644u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_15d5724; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x63cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_15d5724; }
    c->r[14] = 0x15d55ccu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5724; }
L_15d55d4:;
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_15d5604; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d55e8u; f_15ce3f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5724; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d55fcu; f_15ce3f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5724; }
L_15d5604:;
    { uint32_t ea = c->r[6] + 0x3efu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5664; }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_15d5664; }
    { uint32_t ea = c->r[4] + 0x3efu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5764; }
    { uint32_t ea = c->r[6] + 0x3f9u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x3f9u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_15d5764; }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d564cu; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5764; }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_15d5764; }
L_15d5664:;
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5678u; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5698; }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d57b4; }
L_15d5698:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d56a4u; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d57b4; }
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_15d57b4; }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_15d57bc; }
L_15d56cc:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_15d5868; }
L_15d56e4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_15d5724; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[4];
    c->r[14] = 0x15d56fcu; f_15ca71c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_15d572c; }
    goto L_15d57b4;
L_15d5714:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
L_15d571c:;
    c->r[0] = c->r[10];
    c->r[14] = 0x15d5724u; f_15cd13c(c);
L_15d5724:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
L_15d572c:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_15d5860; }
L_15d5734:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_15d5350; }
    goto L_15d5860;
L_15d574c:;
    { uint32_t ea = c->r[4] + 0x458u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x45cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_15d5378;
L_15d5764:;
    { uint32_t ea = c->r[4] + 0x3eeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d57b4; }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_15d57b4; }
    { uint32_t ea = c->r[4] + 0x3f9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3f9u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_15d57b4; }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d579cu; f_15cbe80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d57b4; }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_15d56cc; }
L_15d57b4:;
    c->r[0] = 0x0u;
    goto L_15d5488;
L_15d57bc:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + 0x3a0u;
    c->r[14] = 0x15d57c8u; f_15d6d10(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_15d5724; }
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[4];
    if (COND_NE) { c->r[0] = c->r[1]; }
    c->r[1] = 0x3u;
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { c->r[1] = 0x2u; }
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_15d5818; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_15d5734; }
    goto L_15d5860;
L_15d5818:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_15d56e4; }
    goto L_15d5868;
L_15d582c:;
    c->r[0] = 0x1bd267u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x7u;
    c->r[0] = 0x15d5840u + c->r[0];
    c->r[14] = 0x15d5840u; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d59d0; }
    c->r[0] = 0x6u;
    goto L_15d5a0c;
L_15d5860:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_15d5908; }
L_15d5868:;
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_15d5d7c; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5880u; f_15c8420(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_15d5d7c; }
    { uint32_t ea = c->r[10] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_15d5d7c; }
    { uint32_t ea = c->r[10] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_15d5d7c; }
    { uint32_t ea = c->r[4] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x45cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = f_adds(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_15d5d7c; }
    c->r[0] = 0x1bcf88u;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x15d58ccu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d58d0u; f_15cd13c(c);
    { uint32_t ea = c->r[4] + 0x650u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_15d5d7c; }
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_15d5d7c; }
    c->r[0] = 0x1bcf87u;
    c->r[1] = 0x15d5904u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d5908u; f_15cd13c(c);
L_15d5908:;
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x15d5914u; f_15d8e20(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_15d5f78; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_15d5f78; }
    c->r[0] = c->r[11] - 0x120u;
    c->r[14] = 0x15d5944u; f_15ce544(c);
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d5f74; }
    { uint32_t ea = c->r[11] - 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = ~0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
L_15d5968:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5998; }
    { uint32_t ea = c->r[5] + 0x144u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x15d598cu; f_15ce558(c);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GT) { c->r[4] = c->r[5]; }
    if (COND_GT) { c->r[8] = c->r[0]; }
L_15d5998:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_15d5968; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_15d5f74; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[10]); }
    c->r[8] = 0x0u;
    c->r[14] = 0x15d59c0u; f_15d33b4(c);
    goto L_15d5f78;
L_15d59d0:;
    c->r[0] = 0x1bd0cbu;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x6u;
    c->r[0] = 0x15d59e4u + c->r[0];
    c->r[14] = 0x15d59e4u; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5a08; }
    c->r[0] = 0x1bd0b6u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x5u;
    c->r[0] = 0x15d5a00u + c->r[0];
    c->r[14] = 0x15d5a00u; f_15cc428(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5a10; }
L_15d5a08:;
    c->r[0] = 0x4u;
L_15d5a0c:;
    { uint32_t ea = c->r[6] + 0x138u; ST32(ea, c->r[0]); }
L_15d5a10:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    c->r[14] = 0x15d5a1cu; f_15eff44(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d5b4c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[2] = c->r[11] - 0x120u;
    c->r[3] = c->r[13] + 0x68u;
    { uint32_t ea = c->r[11] - 0x120u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[1] = c->r[5] - c->r[0];
    c->r[14] = 0x15d5a4cu; f_15d67a8(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_15d5b34; }
    { uint32_t ea = c->r[6] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5a60u; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d5a9c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d5a78u; f_15efd88(c);
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_15d5a9c; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d5a94u; f_15dcdb4(c);
    goto L_15d5aa8;
L_15d5a9c:;
    c->r[0] = 0x17b2ceu;
    c->r[0] = 0x15d5aa8u + c->r[0];
    c->r[14] = 0x15d5aa8u; f_15d74ac(c);
L_15d5aa8:;
    c->r[4] = 0x1bu;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d5b34; }
    { uint32_t ea = c->r[6] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5ac0u; f_15d7484(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_15d5b0c; }
    c->r[0] = c->r[7];
    c->r[14] = 0x15d5adcu; f_15efd88(c);
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_HI) { goto L_15d5b0c; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d5af8u; f_15dcdb4(c);
    goto L_15d5b18;
L_15d5b0c:;
    c->r[0] = 0x17b25eu;
    c->r[0] = 0x15d5b18u + c->r[0];
    c->r[14] = 0x15d5b18u; f_15d74ac(c);
L_15d5b18:;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { c->r[4] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x3f1u; ST8(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = c->r[5] + 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); } }
L_15d5b34:;
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5b3cu; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5b44u; f_15d7484(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_15d5cac; }
L_15d5b4c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5bu);
    if (COND_NE) { goto L_15d5bc8; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d5ba4; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
L_15d5b74:;
    c->r[7] = (uint32_t)(uint8_t)(c->r[5]);
    c->r[0] = c->r[7];
    c->r[14] = 0x15d5b80u; f_15f1ad4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5b94; }
    (void)f_subs(c, c->r[7], 0x2eu);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x3au); }
    if (COND_NE) { goto L_15d5cc0; }
L_15d5b94:;
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[4] = ea; c->r[5] = v; }
    c->r[7] = c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_15d5b74; }
L_15d5ba4:;
    c->r[0] = 0x1bce60u;
    c->r[1] = 0x15d5bb0u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d5bb4u; f_15cd13c(c);
    goto L_15d5bcc;
L_15d5bc8:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
L_15d5bcc:;
    c->r[0] = c->r[7];
    c->r[1] = 0x3au;
    c->r[14] = 0x15d5bd8u; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5c04; }
    c->r[1] = 0x0u;
    c->r[2] = 0xau;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); c->r[0] = c->r[0] + 0x1u; }
    c->r[1] = 0x0u;
    c->r[14] = 0x15d5bf4u; f_15f1a74(c);
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[0]); }
    goto L_15d5c3c;
L_15d5c04:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x5u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_EQ) { goto L_15d5cac; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2fu;
    c->r[14] = 0x15d5c24u; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[0]); } }
L_15d5c3c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5c44u; f_15d74ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xa8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d5ca8; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5c5cu; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_15d5c98; }
    { uint32_t ea = c->r[6] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t r = c->r[1] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_15d5c98; }
    { uint32_t ea = c->r[6] + 0x3f9u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_15d5c98; }
    c->r[1] = 0x472b70u;
    { uint32_t ea = 0x15d5c98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x418u; ST32(ea, c->r[1]); }
L_15d5c98:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6] + 0x3efu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3eeu; ST8(ea, c->r[1]); }
    goto L_15d4cb4;
L_15d5ca8:;
    c->r[4] = 0x1bu;
L_15d5cac:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5cb4u; f_15d7484(c);
    c->r[6] = c->r[4];
    goto L_15d61b8;
L_15d5cc0:;
    (void)f_subs(c, c->r[7], 0x25u);
    if (COND_NE) { goto L_15d6338; }
    c->r[0] = 0x1bcd03u;
    c->r[1] = c->r[4];
    c->r[2] = 0x3u;
    c->r[0] = 0x15d5cdcu + c->r[0];
    c->r[14] = 0x15d5cdcu; f_15f00a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5cf4; }
    c->r[0] = 0x1bccf3u;
    c->r[1] = 0x15d5cf0u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d5cf4u; f_15cd13c(c);
L_15d5cf4:;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_15d5ba4; }
    c->r[7] = c->r[4] + 0x2u;
    c->r[8] = ~0x2cu;
L_15d5d0c:;
    c->r[0] = c->r[5] | 0x20u;
    c->r[0] = c->r[0] - 0x61u;
    (void)f_subs(c, c->r[0], 0x19u);
    if (COND_LS) { goto L_15d5d48; }
    c->r[0] = c->r[5];
    c->r[14] = 0x15d5d24u; f_15f1ad4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5d48; }
    c->r[0] = c->r[8] + (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_15d5d48; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x7eu); }
    if (COND_NE) { goto L_15d6334; }
L_15d5d48:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[7] = c->r[7] + 0x1u; c->r[0] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d5d0c; }
    c->r[7] = c->r[7] - 0x1u;
    goto L_15d5ba4;
L_15d5d7c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x40u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5d8cu; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5d94u; f_15d6f54(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3f0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x3f0u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d5de0; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5db4u; f_15d7484(c);
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5dc4u; f_15d7484(c);
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x120u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x124u; ST32(ea, c->r[7]); }
L_15d5de0:;
    { uint32_t ea = c->r[6] + 0x3f1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x3f1u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d5e24; }
    { uint32_t ea = c->r[4] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5df8u; f_15d7484(c);
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5e08u; f_15d7484(c);
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[7]); }
L_15d5e24:;
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8] + 0x90u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[14] = 0x15d5e30u; f_15d7484(c);
    c->r[7] = 0x0u;
    c->r[12] = c->r[4] + 0x94u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x15d5e54u; f_15d9238(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x3edu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5e64u; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x120u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5e70u; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x124u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5e7cu; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x130u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5e88u; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x134u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x63cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5e94u; f_15d7484(c);
    { uint32_t ea = c->r[6] + 0x63cu; ST32(ea, c->r[7]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5ea4u; f_15e40fc(c);
    { uint32_t ea = c->r[6] + 0x45cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x15d5eb0u; f_15e40fc(c);
    { uint32_t ea = c->r[6] + 0x458u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x45cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x460u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d5ec0u; f_15d7484(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x460u; ST32(ea, c->r[7]); }
    c->r[14] = 0x15d5eccu; f_15d7484(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x15d5ee4u; f_15efd88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5f08; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_NE) { goto L_15d5f08; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
L_15d5f08:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5f2c; }
    c->r[6] = c->r[6] + 0x1u;
    if (COND_GE) { goto L_15d5f08; }
    c->r[0] = 0x1bcd0fu;
    c->r[1] = 0x15d5f28u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d5f2cu; f_15cd13c(c);
L_15d5f2c:;
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1bc9adu;
    { uint32_t ea = c->r[4] + 0x3eeu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = 0x15d5f48u + c->r[3];
    if (COND_NE) { c->r[8] = c->r[4] + 0xa0u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bc98fu;
    if (COND_NE) { c->r[3] = 0x15d5f60u + c->r[0]; }
    c->r[0] = 0x1bc956u;
    c->r[1] = 0x15d5f68u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d5f6cu; f_15cd13c(c);
    goto L_15d5ff4;
L_15d5f74:;
    c->r[8] = 0x1u;
L_15d5f78:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5fb0; }
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_15d5fb0; }
    c->r[14] = 0x15d5f9cu; f_15d6bc4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d5fb8; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    c->r[14] = 0x15d5fb0u; f_15d33b4(c);
L_15d5fb0:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_15d5fe4; }
L_15d5fb8:;
    c->r[0] = 0x1bc936u;
    c->r[1] = 0x15d5fc4u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d5fc8u; f_15cd13c(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x15d5fd0u; f_15d34f4(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[6] = 0x59u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_15d61b8;
L_15d5fe4:;
    { uint32_t ea = c->r[10] + 0x538u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x15d5ff0u; f_15d8e68(c);
    c->r[4] = c->r[6];
L_15d5ff4:;
    c->r[0] = 0x1u;
    c->r[1] = 0x862cu;
    { uint32_t ea = c->r[4] + 0x40u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x400u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3f4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[6] + 0x2d7u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d6038; }
    { uint32_t ea = c->r[6] + 0x240u; ST32(ea, c->r[0]); }
    goto L_15d6048;
L_15d6038:;
    { uint32_t ea = c->r[6] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    c->r[0] = 0x1u;
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x240u; ST32(ea, c->r[0]); } }
L_15d6048:;
    c->r[0] = c->r[11] - 0x120u;
    c->r[14] = 0x15d6050u; f_15ce544(c);
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[1] = 0x4555u;
    { uint32_t ea = c->r[6] + 0x98u; ST8(ea, c->r[0]); }
    c->r[0] = 0x554u;
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[6] + 0xe8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x54cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0xf9u; ST8(ea, c->r[7]); }
    c->r[14] = 0x15d60a4u; f_15cde8c(c);
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d60b4u; f_15cbb34(c);
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x15d60c4u; f_15cbb28(c);
    { uint32_t ea = c->r[10] + 0x200u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x204u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x864cu;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = 0x8648u;
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_15d60f0; }
    { uint32_t ea = c->r[10] + 0x350u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d615c; }
L_15d60f0:;
    c->r[1] = 0x8642u;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d6118; }
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0x8644u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d6114u; f_15d7484(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
L_15d6118:;
    { uint32_t r = c->r[2] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_15d6138; }
    c->r[0] = 0x1bcb41u;
    c->r[0] = 0x15d612cu + c->r[0];
    c->r[14] = 0x15d612cu; f_15c748c(c);
    goto L_15d6140;
L_15d6138:;
    { uint32_t ea = c->r[10] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x15d6140u; f_15d74ac(c);
L_15d6140:;
    c->r[1] = 0x8644u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_15d61b4; }
L_15d615c:;
    c->r[0] = 0x8641u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x474u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x478u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x46cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x470u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x15d6194u; f_15d9144(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3edu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d61c4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[6]); }
    goto L_15d61b8;
L_15d61b4:;
    c->r[6] = 0x1bu;
L_15d61b8:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_15d4080;
L_15d61c4:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x15d61d4u; f_15efd88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d61f8; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_NE) { goto L_15d61f8; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
L_15d61f8:;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d621c; }
    c->r[7] = c->r[7] + 0x1u;
    if (COND_GE) { goto L_15d61f8; }
    c->r[0] = 0x1bca1fu;
    c->r[1] = 0x15d6218u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d621cu; f_15cd13c(c);
L_15d621c:;
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_15d6290; }
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[11] - 0x120u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x15d624cu; f_15c5418(c);
    (void)f_adds(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_15d635c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_15d6314; }
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d6360; }
    c->r[0] = 0x1bc9f7u;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x15d627cu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d6280u; f_15cd3d0(c);
    c->r[6] = 0x6u;
    goto L_15d6360;
L_15d6290:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[7]); }
    c->r[14] = 0x15d629cu; f_15efd88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_15d62c0; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_NE) { goto L_15d62c0; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
L_15d62c0:;
    c->r[0] = c->r[7];
L_15d62c4:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_15d62ec; }
    c->r[0] = c->r[0] + 0x1u;
    if (COND_GE) { goto L_15d62c4; }
    c->r[0] = 0x1bc953u;
    c->r[1] = 0x15d62e4u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d62e8u; f_15cd13c(c);
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
L_15d62ec:;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[11] - 0x120u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x15d6304u; f_15c5418(c);
    (void)f_adds(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_15d635c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_15d636c; }
L_15d6314:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_15d6360;
L_15d6334:;
    c->r[4] = c->r[7] - 0x1u;
L_15d6338:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[0], 0x5du);
    if (COND_NE) { goto L_15d6354; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); c->r[4] = c->r[4] + 0x1u; }
    c->r[7] = c->r[4];
    goto L_15d5bcc;
L_15d6354:;
    c->r[7] = c->r[4];
    goto L_15d5ba4;
L_15d635c:;
    c->r[6] = 0x1cu;
L_15d6360:;
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    goto L_15d61b8;
L_15d636c:;
    { uint32_t ea = c->r[11] - 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_15d6360; }
    c->r[0] = 0x1bc902u;
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x15d638cu + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x15d6390u; f_15cd3d0(c);
    c->r[6] = 0x5u;
    goto L_15d6360;
}
