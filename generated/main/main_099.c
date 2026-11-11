#include "cpu.h"
#include "neon_rt.h"
void f_267310(Cpu *c);
void f_394228(Cpu *c);
void f_74fa40(Cpu *c);
void f_75bc4c(Cpu *c);
void f_75bc7c(Cpu *c);
void f_75bda4(Cpu *c);
void f_75bdbc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3a0(Cpu *c);
void f_9ca404(Cpu *c);
void f_d84114(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efe30(Cpu *c);
void f_7a19c8(Cpu *restrict c) {
    FN_ENTER(0x7a19c8u);
L_7a19c8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x230u;
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x278u;
    c->r[1] = 0x70u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[14] = 0x7a19ecu; f_15efdac(c);
    c->r[0] = 0x32u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x36u;
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f99b4u;
    c->r[0] = 0x7a1a0cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108fa28u;
    c->r[0] = 0x7a1a18u + c->r[0];
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12971b0u;
    { uint32_t ea = 0x7a1a24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108fa38u;
    c->r[0] = 0x7a1a30u + c->r[0];
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297198u;
    { uint32_t ea = 0x7a1a3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xff5b04u;
    c->r[0] = 0x7a1a48u + c->r[0];
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297180u;
    { uint32_t ea = 0x7a1a54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297174u;
    { uint32_t ea = 0x7a1a60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f944u;
    c->r[0] = 0x7a1a6cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108fa0cu;
    c->r[0] = 0x7a1a78u + c->r[0];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297150u;
    { uint32_t ea = 0x7a1a84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f920u;
    c->r[0] = 0x7a1a90u + c->r[0];
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297138u;
    { uint32_t ea = 0x7a1a9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f908u;
    c->r[0] = 0x7a1aa8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297120u;
    { uint32_t ea = 0x7a1ab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297114u;
    { uint32_t ea = 0x7a1ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f8e4u;
    c->r[0] = 0x7a1accu + c->r[0];
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12970f8u;
    { uint32_t ea = 0x7a1ad8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1299148u;
    { uint32_t ea = 0x7a1ae4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f8c0u;
    c->r[0] = 0x7a1af0u + c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x12970d8u;
    { uint32_t ea = 0x7a1afcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f8a8u;
    c->r[0] = 0x7a1b08u + c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12970c0u;
    { uint32_t ea = 0x7a1b14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f890u;
    c->r[0] = 0x7a1b20u + c->r[0];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12970a8u;
    { uint32_t ea = 0x7a1b2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f960u;
    c->r[0] = 0x7a1b38u + c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297090u;
    { uint32_t ea = 0x7a1b44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297084u;
    { uint32_t ea = 0x7a1b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297064u;
    { uint32_t ea = 0x7a1b5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f848u;
    c->r[0] = 0x7a1b68u + c->r[0];
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f83cu;
    c->r[0] = 0x7a1b74u + c->r[0];
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297054u;
    { uint32_t ea = 0x7a1b80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f710u;
    c->r[0] = 0x7a1b8cu + c->r[0];
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x129703cu;
    { uint32_t ea = 0x7a1b98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f981cu;
    c->r[0] = 0x7a1ba4u + c->r[0];
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297024u;
    { uint32_t ea = 0x7a1bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f77cu;
    c->r[0] = 0x7a1bbcu + c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f97f8u;
    c->r[0] = 0x7a1bc8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1297000u;
    { uint32_t ea = 0x7a1bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f794u;
    c->r[0] = 0x7a1be0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f97d4u;
    c->r[0] = 0x7a1becu + c->r[0];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296fdcu;
    { uint32_t ea = 0x7a1bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f734u;
    c->r[0] = 0x7a1c04u + c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f97b0u;
    c->r[0] = 0x7a1c10u + c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296fb8u;
    { uint32_t ea = 0x7a1c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f710u;
    c->r[0] = 0x7a1c28u + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f978cu;
    c->r[0] = 0x7a1c34u + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296f94u;
    { uint32_t ea = 0x7a1c40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f6ecu;
    c->r[0] = 0x7a1c4cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f9768u;
    c->r[0] = 0x7a1c58u + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296f70u;
    { uint32_t ea = 0x7a1c64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f704u;
    c->r[0] = 0x7a1c70u + c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f9744u;
    c->r[0] = 0x7a1c7cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296f4cu;
    { uint32_t ea = 0x7a1c88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f6a4u;
    c->r[0] = 0x7a1c94u + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f9720u;
    c->r[0] = 0x7a1ca0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f6c8u;
    c->r[0] = 0x7a1cacu + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296f1cu;
    { uint32_t ea = 0x7a1cb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f6b0u;
    c->r[0] = 0x7a1cc4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f96f0u;
    c->r[0] = 0x7a1cd0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f65cu;
    c->r[0] = 0x7a1cdcu + c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296eecu;
    { uint32_t ea = 0x7a1ce8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f644u;
    c->r[0] = 0x7a1cf4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f96c0u;
    c->r[0] = 0x7a1d00u + c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296ec8u;
    { uint32_t ea = 0x7a1d0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f5b0u;
    c->r[0] = 0x7a1d18u + c->r[0];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296eb0u;
    { uint32_t ea = 0x7a1d24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x108f5d0u;
    c->r[0] = 0x7a1d30u + c->r[0];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296e98u;
    { uint32_t ea = 0x7a1d3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296e8cu;
    { uint32_t ea = 0x7a1d48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1296e80u;
    { uint32_t ea = 0x7a1d54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12f9660u;
    c->r[0] = 0x7a1d60u + c->r[0];
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    goto L_7a203c;
L_7a1d74:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a1d7cu; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[0];
    c->r[0] = 0x95cu;
    c->r[4] = c->r[13] + 0x160u;
    c->r[11] = 0x0u;
    c->r[3] = 0x20u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[8] + 0x3u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x2u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[8] + 0x1u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a1ddcu; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a1df0u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a1e00u; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a1e18u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[4];
    c->r[14] = 0x7a1e2cu; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a1e34u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[3] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x2e6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a1e84u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = 0x972u;
    c->r[2] = c->r[4];
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[11]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a1ed8u; f_9ca404(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x7a1ee4u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a1ef4u; f_15efe30(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a1f0cu; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[4];
    c->r[14] = 0x7a1f20u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a1f28u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x2e6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a1f78u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0];
    c->r[0] = 0x988u;
    c->r[6] = c->r[13] + 0x160u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[11]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a1fd0u; f_9ca404(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x7a1fdcu; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a1fecu; f_15efe30(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = 0x7a2004u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[6];
    c->r[14] = 0x7a2018u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2020u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    goto L_7a3488;
L_7a203c:;
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[1] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[8] + (c->r[10] << 5);
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x918u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[6]); }
    if (COND_EQ) { goto L_7a210c; }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2070u; f_9af3a0(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x19u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a209cu; f_75bc7c(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[14] = 0x7a20c0u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a20c8u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + (c->r[10] << 3);
    { uint32_t ea = c->r[1] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[10] << 1);
    { uint32_t ea = c->r[2] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[0] + 0x278u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] + 0x2e6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[6]); }
L_7a210c:;
    c->r[9] = c->r[4];
    c->r[0] = 0x91cu;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[9] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_7a34b0; }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2130u; f_9af3a0(c);
    c->r[5] = c->r[0];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_7a2194; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x7a2160u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x7a2180u: goto L_7a2180; case 0x7a2194u: goto L_7a2194; case 0x7a21ecu: goto L_7a21ec; case 0x7a2200u: goto L_7a2200; case 0x7a2234u: goto L_7a2234; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_7a2180:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0x10bu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a2218;
L_7a2194:;
    c->r[7] = c->r[13] + 0x160u;
    c->r[1] = 0x40u;
    c->r[0] = c->r[7];
    c->r[14] = 0x7a21a4u; f_15efdc4(c);
    c->r[0] = c->r[4] + 0x920u;
    c->r[1] = 0xfu;
    c->r[2] = c->r[7];
    c->r[3] = 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x7a21bcu; f_9ca404(c);
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a21d8u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[7];
    goto L_7a2278;
L_7a21ec:;
    { uint32_t ea = c->r[4] + 0x9b4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a2210;
L_7a2200:;
    { uint32_t ea = c->r[4] + 0x9b4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_7a2210:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
L_7a2218:;
    c->r[14] = 0x7a221cu; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x91eu;
    c->r[1] = 0x1a0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    goto L_7a2278;
L_7a2234:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0x3au;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a2248u; f_75bc7c(c);
    c->r[11] = c->r[8];
    c->r[8] = c->r[0];
    c->r[0] = 0x91eu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a2264u; f_75bc4c(c);
    c->r[3] = c->r[0];
    c->r[2] = c->r[8];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[8] = c->r[11];
L_7a2278:;
    c->r[14] = 0x7a227cu; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2284u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[1] = c->r[1] | (c->r[10] << 1);
    c->r[2] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[2] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[0] + 0x278u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x2e6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x7u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_7a34b0; }
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x9b4u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_7a34b0; }
    { uint32_t ea = c->r[4] + 0x9b5u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_7a230c; }
    { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_NE) { goto L_7a230c; }
    { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_7a2a2c; }
L_7a230c:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a2330; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_NE) { goto L_7a2330; }
    { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_7a2658; }
L_7a2330:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a34b0; }
    { uint32_t ea = c->r[4] + 0x9b5u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { goto L_7a2358; }
    { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a2788; }
L_7a2358:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a34b0; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x9b5u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a238c; }
    { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_7a238c; }
    { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_7a2db0; }
L_7a238c:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a34b0; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x9b5u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a23bc; }
    { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a2f98; }
L_7a23bc:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a34b0; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x9b5u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a2be8; }
    { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_7a2be8; }
    { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { goto L_7a2be8; }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a23f8u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[0];
    c->r[0] = 0x95cu;
    c->r[11] = c->r[13] + 0x160u;
    c->r[5] = 0x0u;
    c->r[3] = 0x20u;
    c->r[2] = c->r[11];
    { uint32_t ea = c->r[8] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a2458u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[1];
    c->r[1] = c->r[11];
    c->r[14] = 0x7a246cu; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[11];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a247cu; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a2494u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[11];
    c->r[4] = c->r[11];
    c->r[14] = 0x7a24acu; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a24b4u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = c->r[1] + (c->r[10] << 1);
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] + 0x2e6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2500u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = 0x972u;
    c->r[2] = c->r[4];
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a2554u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a2564u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a2574u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x99eu;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[13] + 0x210u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[10];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a25bcu; f_9ca404(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a25c8u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a25d8u; f_15efe30(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a25f0u; f_75bc7c(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[13] + 0x160u;
    c->r[14] = 0x7a2610u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2618u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = c->r[1] + (c->r[10] << 1);
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] + 0x2e6u; ST8(ea, c->r[0]); }
    goto L_7a34b0;
L_7a2658:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2660u; f_9af3a0(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x95cu;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[13] + 0x160u;
    c->r[7] = 0x0u;
    c->r[1] = 0xau;
    c->r[3] = 0x20u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x7a26bcu; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a26ccu; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a26dcu; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x972u;
    c->r[11] = c->r[10];
    c->r[10] = c->r[13] + 0x210u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = c->r[10];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a2724u; f_9ca404(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a2730u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a2740u; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a2758u; f_75bc7c(c);
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[10] = c->r[11];
    c->r[14] = 0x7a2778u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2780u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_7a2aec;
L_7a2788:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2790u; f_9af3a0(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x95cu;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[13] + 0x160u;
    c->r[7] = 0x0u;
    c->r[1] = 0xau;
    c->r[3] = 0x20u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x7a27ecu; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a27fcu; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a280cu; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x972u;
    c->r[4] = c->r[13] + 0x210u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[10]); }
    c->r[2] = c->r[4];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a2854u; f_9ca404(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x7a2860u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a2870u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x988u;
    c->r[4] = c->r[13] + 0x1f0u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[2] = c->r[4];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a28b4u; f_9ca404(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x7a28c0u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a28d0u; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a28e8u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[8];
    c->r[14] = 0x7a28fcu; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2904u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[8] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x2e6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2950u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0x120u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    c->r[14] = 0x7a2974u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x1f0u;
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[13] + 0x210u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x7a2990u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2998u; f_9af37c(c);
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = c->r[1] + (c->r[10] << 1);
    { uint32_t ea = c->r[8] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; ST8(ea, c->r[1]); }
    goto L_7a34a4;
L_7a2a2c:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2a34u; f_9af3a0(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x95cu;
    c->r[11] = c->r[8];
    c->r[8] = c->r[13] + 0x160u;
    c->r[7] = 0x0u;
    c->r[1] = 0xau;
    c->r[3] = 0x20u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x7a2a90u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a2aa0u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a2ab0u; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a2ac8u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[3] = c->r[8];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[8] = c->r[11];
    c->r[14] = 0x7a2ae0u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2ae8u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_7a2aec:;
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = c->r[1] + (c->r[10] << 1);
    c->r[2] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[2] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[0] + 0x278u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x2e6u; ST8(ea, c->r[0]); }
    goto L_7a34b0;
L_7a2be8:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a34b0; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x9b5u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a2c18; }
    { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0xfu); }
    if (COND_EQ) { goto L_7a31f0; }
L_7a2c18:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a34b0; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x9b5u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a2c54; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x9b6u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[1], 0xffu); }
    if (COND_EQ) { goto L_7a2c54; }
    { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_7a1d74; }
L_7a2c54:;
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_EQ) { goto L_7a34b0; }
    { uint32_t ea = c->r[4] + 0x9b5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_7a34b0; }
    { uint32_t ea = c->r[4] + 0x9b6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_7a34b0; }
    { uint32_t ea = c->r[4] + 0x9b7u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_7a34b0; }
    c->r[0] = 0x9b4u;
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x95cu;
    c->r[11] = c->r[4] + c->r[0];
L_7a2cac:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2cb4u; f_9af3a0(c);
    c->r[8] = 0x0u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[11];
    c->r[1] = 0xau;
    c->r[2] = c->r[13] + 0x160u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[14] = 0x7a2d04u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[13] + 0x160u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a2d14u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = 0x20u;
    c->r[14] = 0x7a2d24u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a2d40u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[13] + 0x160u;
    c->r[14] = 0x7a2d54u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2d5cu; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[6] = c->r[6] + 0x1u;
    c->r[11] = c->r[11] + 0x16u;
    (void)f_subs(c, c->r[6], 0x4u);
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    c->r[1] = c->r[7] - 0x30u;
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[2] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[0] + 0x278u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] + 0x2e6u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_7a2cac; }
    goto L_7a34b0;
L_7a2db0:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2db8u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[0];
    c->r[0] = 0x95cu;
    c->r[11] = c->r[13] + 0x160u;
    c->r[5] = 0x0u;
    c->r[3] = 0x20u;
    c->r[2] = c->r[11];
    { uint32_t ea = c->r[8] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a2e18u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a2e2cu; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[11];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a2e3cu; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a2e54u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[11];
    c->r[14] = 0x7a2e68u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2e70u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x2e6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2ec0u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = 0x972u;
    c->r[2] = c->r[11];
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a2f14u; f_9ca404(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11];
    c->r[14] = 0x7a2f20u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[11];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a2f30u; f_15efe30(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a2f4cu; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[11];
    c->r[14] = 0x7a2f60u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a2f68u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = c->r[1] + (c->r[10] << 1);
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    goto L_7a34a0;
L_7a2f98:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a2fa0u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[0];
    c->r[0] = 0x95cu;
    c->r[4] = c->r[13] + 0x160u;
    c->r[5] = 0x0u;
    c->r[3] = 0x20u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[8] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a3000u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3010u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a3020u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x988u;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[13] + 0x210u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[10];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a3068u; f_9ca404(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a3074u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a3084u; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a309cu; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x7a30b4u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a30bcu; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x2e6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a310cu; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = 0x972u;
    c->r[8] = c->r[13] + 0x160u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a3164u; f_9ca404(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[14] = 0x7a3170u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a3180u; f_15efe30(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a3198u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[8];
    c->r[14] = 0x7a31acu; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a31b4u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_7a34a4;
L_7a31f0:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a31f8u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[8]); }
    c->r[8] = c->r[0];
    c->r[0] = 0x95cu;
    c->r[4] = c->r[13] + 0x160u;
    c->r[5] = 0x0u;
    c->r[3] = 0x20u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[8] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a3258u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3268u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a3278u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x988u;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[13] + 0x210u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[10];
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a32c0u; f_9ca404(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a32ccu; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a32dcu; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a32f4u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x7a330cu; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a3314u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[4] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x2e6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3364u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[0] = 0x972u;
    c->r[8] = c->r[13] + 0x160u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a33bcu; f_9ca404(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[14] = 0x7a33c8u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a33d8u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x99eu;
    c->r[2] = c->r[10];
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xau;
    c->r[14] = 0x7a3418u; f_9ca404(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a3424u; f_75bdbc(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[10];
    c->r[2] = 0x20u;
    c->r[14] = 0x7a3434u; f_15efe30(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a344cu; f_75bc7c(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[8];
    c->r[14] = 0x7a3468u; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a3470u; f_9af37c(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
L_7a3488:;
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[10] << 1);
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[1]); }
L_7a34a0:;
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[8] = v; }
L_7a34a4:;
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x2e6u; ST8(ea, c->r[0]); }
L_7a34b0:;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[0] = c->r[0] - 0x7u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_7a3c78; }
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[11] = 0x0u;
    c->r[4] = c->r[8] + c->r[0];
    c->r[0] = 0x944u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6u;
    c->r[0] = c->r[0] + (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    c->r[0] = 0x95cu;
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    goto L_7a35e8;
L_7a3508:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3510u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[13] + 0x210u;
    c->r[1] = 0xau;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    c->r[14] = 0x7a3560u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3578u; f_75bc7c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a358cu; f_75bdbc(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a39c8;
L_7a359c:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a35a4u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a35d8u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[4] + (c->r[11] << 2);
    { uint32_t ea = c->r[0] + 0x950u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_7a386c;
L_7a35e8:;
    c->r[0] = c->r[4] + c->r[11];
    { uint32_t ea = c->r[0] + 0x940u; uint32_t v = LD8(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x24u);
    if (COND_EQ) { goto L_7a3c78; }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[8], 0x23u);
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_7a3ad0; }
    c->r[0] = (c->r[8] << 2);
    c->r[1] = 0x7a36acu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x7a3508u: goto L_7a3508; case 0x7a359cu: goto L_7a359c; case 0x7a3740u: goto L_7a3740; case 0x7a37e4u: goto L_7a37e4; case 0x7a382cu: goto L_7a382c; case 0x7a3878u: goto L_7a3878; case 0x7a3920u: goto L_7a3920; case 0x7a39dcu: goto L_7a39dc; case 0x7a3a34u: goto L_7a3a34; case 0x7a3ad8u: goto L_7a3ad8; case 0x7a3b0cu: goto L_7a3b0c; case 0x7a3b40u: goto L_7a3b40; case 0x7a3b74u: goto L_7a3b74; case 0x7a3ba8u: goto L_7a3ba8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_7a3740:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3748u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x16u;
    c->r[10] = c->r[13] + 0x210u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[0] = r; }
    c->r[1] = 0x95cu;
    c->r[2] = c->r[10];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0xau;
    c->r[14] = 0x7a37b0u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a37c8u; f_75bc7c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a37dcu; f_75bdbc(c);
    c->r[3] = c->r[0];
    goto L_7a39cc;
L_7a37e4:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a37ecu; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
L_7a380c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[14] = 0x7a3818u; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[14] = 0x7a3828u; f_74fa40(c);
    goto L_7a3c20;
L_7a382c:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3834u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3860u; f_75bc7c(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
L_7a386c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    goto L_7a3c1c;
L_7a3878:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3880u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    c->r[0] = c->r[0] + (c->r[11] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a38acu; f_75bda4(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[14] = 0x7a38bcu; f_75bc4c(c);
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x7a38dcu; f_75bc7c(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[4] + (c->r[11] << 2);
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[0] + 0x950u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x7a38fcu; f_74fa40(c);
    c->r[0] = 0xcu;
    c->r[14] = 0x7a3904u; f_9af37c(c);
    c->r[1] = c->r[13] + 0x160u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    goto L_7a3c44;
L_7a3920:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3928u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x16u;
    c->r[10] = c->r[13] + 0x210u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[0] = r; }
    c->r[1] = 0x95cu;
    c->r[2] = c->r[10];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0xau;
    c->r[14] = 0x7a3990u; f_9ca404(c);
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a39a8u; f_75bc7c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0x7a39bcu; f_75bdbc(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4] + (c->r[11] << 2);
    { uint32_t ea = c->r[0] + 0x950u; uint32_t v = LD32(ea); c->r[0] = v; }
L_7a39c8:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_7a39cc:;
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[2] = c->r[7];
    goto L_7a3c1c;
L_7a39dc:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a39e4u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    c->r[0] = c->r[0] + (c->r[11] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3a10u; f_75bda4(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[14] = 0x7a3a20u; f_75bc4c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a3c04;
L_7a3a34:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3a3cu; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    c->r[10] = c->r[0] + (c->r[11] << 2);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x7a3a68u; f_75bda4(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[14] = 0x7a3a78u; f_75bc4c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x950u;
    c->r[3] = c->r[13] + 0x210u;
    c->r[6] = 0x0u;
    c->r[0] = c->r[0] + (c->r[11] << 2);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3aa4u; f_267310(c);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = LD32(c->r[13] + 532u);
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x7a3ac0u; f_75bc7c(c);
    c->v.df[16] = (double)c->v.f[16];
    c->r[2] = c->r[0];
    ST64(c->r[13], c->v.d[16]);
    goto L_7a3c10;
L_7a3ad0:;
    c->r[0] = c->r[9] - 0x30u;
    goto L_7a3c4c;
L_7a3ad8:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3ae0u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a380c;
L_7a3b0c:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3b14u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a380c;
L_7a3b40:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3b48u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a380c;
L_7a3b74:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3b7cu; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a380c;
L_7a3ba8:;
    c->r[0] = 0x1a0u;
    c->r[14] = 0x7a3bb0u; f_9af3a0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    c->r[0] = c->r[0] + (c->r[11] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3bdcu; f_394228(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a3bf0u; f_d84114(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_7a3c04:;
    c->r[1] = 0x6u;
    c->r[14] = 0x7a3c0cu; f_75bc7c(c);
    c->r[2] = c->r[0];
L_7a3c10:;
    c->r[0] = c->r[5];
    c->r[1] = 0x1a0u;
    c->r[3] = c->r[7];
L_7a3c1c:;
    c->r[14] = 0x7a3c20u; f_74fa40(c);
L_7a3c20:;
    c->r[0] = 0xcu;
    c->r[14] = 0x7a3c28u; f_9af37c(c);
    c->r[1] = c->r[13] + 0x160u;
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); ST32(ea, c->r[0]); }
L_7a3c44:;
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[11];
L_7a3c4c:;
    { uint32_t ea = c->r[13] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[11] = c->r[11] + 0x1u;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[11], 0x3u);
    { uint32_t ea = c->r[2] + 0x2e6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[1] + 0x278u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] + 0x2e6u; ST8(ea, c->r[0]); }
    if (COND_CC) { goto L_7a35e8; }
L_7a3c78:;
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0xa0u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0xau);
    c->r[0] = c->r[0] + 0xau;
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xau;
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_7a203c; }
    c->r[13] = c->r[13] + 0x230u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
