#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 21U;
volatile int64_t x13 = -1623258LL;
uint64_t x18 = 258466252256LLU;
int32_t x23 = 1;
static uint32_t x24 = UINT32_MAX;
static volatile uint64_t t3 = 123460502250LLU;
static uint64_t x27 = 33LLU;
int64_t x28 = INT64_MIN;
uint64_t x37 = 534686087045LLU;
uint8_t x38 = UINT8_MAX;
int64_t x44 = -1LL;
static int64_t x53 = INT64_MIN;
int8_t x55 = INT8_MAX;
volatile int64_t t12 = 48744LL;
volatile uint16_t x74 = UINT16_MAX;
int64_t x78 = -263373LL;
int8_t x85 = INT8_MAX;
int16_t x93 = INT16_MIN;
static int64_t x95 = INT64_MIN;
int32_t x100 = INT32_MIN;
int16_t x102 = 1;
volatile int64_t t22 = -566542155LL;
int64_t t24 = 27939092733LL;
volatile int32_t x118 = -21996053;
static uint32_t x124 = 6U;
int16_t x125 = 12272;
volatile int8_t x131 = 19;
int32_t t29 = -292233404;
uint8_t x133 = UINT8_MAX;
static int32_t t30 = 1;
int64_t x142 = INT64_MIN;
uint32_t x145 = 4U;
int32_t x146 = 8494346;
volatile uint32_t t32 = 771840U;
uint64_t x158 = UINT64_MAX;
uint8_t x159 = 1U;
uint64_t x160 = UINT64_MAX;
uint64_t x164 = 1LLU;
int64_t x172 = INT64_MIN;
int16_t x182 = -5178;
static int64_t t43 = -1LL;
uint16_t x206 = UINT16_MAX;
uint8_t x210 = 55U;
int32_t x216 = -1;
volatile uint64_t t47 = 620242381787131LLU;
volatile int32_t x233 = -92264271;
static int8_t x243 = INT8_MAX;
uint64_t x245 = 2179420425726236LLU;
uint16_t x246 = 1582U;
int64_t x249 = 31074LL;
uint32_t x257 = UINT32_MAX;
int16_t x274 = 4;
uint32_t x280 = 8911059U;
uint8_t x281 = 1U;
volatile uint8_t x283 = UINT8_MAX;
uint8_t x284 = 77U;
volatile uint16_t x285 = 91U;
int32_t x286 = -3462;
uint64_t x291 = 247845023766157LLU;
volatile uint64_t t63 = 694304664040139LLU;
static int16_t x293 = INT16_MAX;
uint8_t x295 = 100U;
static uint8_t x296 = 3U;
int8_t x302 = -11;
int16_t x309 = INT16_MIN;
uint64_t t68 = 7829265104207163LLU;
int8_t x313 = -1;
volatile int64_t t70 = -584LL;
int16_t x324 = INT16_MAX;
static volatile uint64_t t72 = UINT64_MAX;
static volatile int64_t t73 = -3011LL;
int64_t x344 = -55196762837278633LL;
volatile uint64_t t77 = 3154689LLU;
int8_t x367 = -19;
int16_t x368 = -2;
static uint8_t x378 = UINT8_MAX;
int32_t t83 = 1;
static uint32_t x381 = 7531U;
int16_t x384 = -7;
uint64_t x390 = UINT64_MAX;
static volatile uint64_t t85 = 108838LLU;
static int32_t t87 = 3535242;
volatile uint16_t x401 = UINT16_MAX;
int8_t x402 = INT8_MAX;
volatile int32_t x413 = INT32_MIN;
int8_t x415 = -2;
int8_t x429 = 1;
int32_t x435 = INT32_MAX;
int64_t x436 = -1LL;
int8_t x439 = -1;
uint64_t x444 = UINT64_MAX;
static uint64_t x446 = UINT64_MAX;
int16_t x448 = -1;


void f0(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint16_t x6 = 27U;
	int8_t x7 = -3;
	static volatile int32_t t0 = -1652414;

	t0 = (((x5+x6)%x7)|x8);

	if (t0 != 21) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x14 = -1;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = 1183035926407LLU;
	static uint64_t t1 = 29061022483056LLU;

	t1 = (((x13+x14)%x15)|x16);

	if (t1 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 18U;
	static volatile int32_t x19 = INT32_MAX;
	static int32_t x20 = INT32_MIN;
	uint64_t t2 = 2351514554136LLU;

	t2 = (((x17+x18)%x19)|x20);

	if (t2 != 18446744072330282602LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 1U;
	volatile uint64_t x22 = UINT64_MAX;

	t3 = (((x21+x22)%x23)|x24);

	if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x25 = UINT16_MAX;
	int16_t x26 = 0;
	uint64_t t4 = 100742549LLU;

	t4 = (((x25+x26)%x27)|x28);

	if (t4 != 9223372036854775838LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 245999408U;
	uint64_t x30 = 272472801461046621LLU;
	int16_t x31 = INT16_MIN;
	int8_t x32 = -1;
	static uint64_t t5 = UINT64_MAX;

	t5 = (((x29+x30)%x31)|x32);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = -1;
	uint16_t x34 = 101U;
	uint8_t x35 = 4U;
	int16_t x36 = INT16_MAX;
	volatile int32_t t6 = 179982;

	t6 = (((x33+x34)%x35)|x36);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 217366596611LLU;
	uint64_t t7 = 6LLU;

	t7 = (((x37+x38)%x39)|x40);

	if (t7 != 545424096391LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 5;
	int32_t x42 = 23117420;
	int8_t x43 = INT8_MIN;
	int64_t t8 = -29298947986606252LL;

	t8 = (((x41+x42)%x43)|x44);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 521LLU;
	int32_t x46 = -1;
	int32_t x47 = -1;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t9 = 753456668655283073LLU;

	t9 = (((x45+x46)%x47)|x48);

	if (t9 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 473U;
	int16_t x50 = -1;
	volatile int32_t x51 = 53;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t10 = 108;

	t10 = (((x49+x50)%x51)|x52);

	if (t10 != -2147483600) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = UINT32_MAX;
	int32_t x56 = -17419;
	int64_t t11 = 61882111527028339LL;

	t11 = (((x53+x54)%x55)|x56);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	static int64_t x59 = INT64_MAX;
	int16_t x60 = INT16_MAX;

	t12 = (((x57+x58)%x59)|x60);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = 83455260503LL;
	static int32_t x63 = 674617;
	int8_t x64 = INT8_MIN;
	int64_t t13 = -1LL;

	t13 = (((x61+x62)%x63)|x64);

	if (t13 != -76LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = 5483423U;
	volatile int8_t x66 = INT8_MIN;
	uint16_t x67 = 6U;
	volatile uint16_t x68 = 2428U;
	uint32_t t14 = 3012U;

	t14 = (((x65+x66)%x67)|x68);

	if (t14 != 2431U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	int8_t x76 = 13;
	int32_t t15 = 347651798;

	t15 = (((x73+x74)%x75)|x76);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -317;
	int32_t x79 = -1;
	volatile int16_t x80 = -401;
	volatile int64_t t16 = -188603LL;

	t16 = (((x77+x78)%x79)|x80);

	if (t16 != -401LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -1;
	volatile uint64_t x82 = 1370230424LLU;
	volatile int8_t x83 = -7;
	int8_t x84 = -1;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (((x81+x82)%x83)|x84);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x86 = UINT64_MAX;
	int64_t x87 = -133675751LL;
	volatile int64_t x88 = INT64_MIN;
	volatile uint64_t t18 = 24764427443LLU;

	t18 = (((x85+x86)%x87)|x88);

	if (t18 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = 2U;
	uint64_t t19 = 20528362LLU;

	t19 = (((x89+x90)%x91)|x92);

	if (t19 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x94 = 10;
	int64_t x96 = -1LL;
	volatile int64_t t20 = 129331258256LL;

	t20 = (((x93+x94)%x95)|x96);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	volatile int64_t t21 = 563335027334698463LL;

	t21 = (((x97+x98)%x99)|x100);

	if (t21 != -2147450881LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = INT64_MIN;

	t22 = (((x101+x102)%x103)|x104);

	if (t22 != -127LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MAX;
	int16_t x106 = -1;
	int8_t x107 = INT8_MIN;
	static volatile int8_t x108 = INT8_MIN;
	static int32_t t23 = 4872333;

	t23 = (((x105+x106)%x107)|x108);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MAX;
	static int64_t x110 = INT64_MIN;
	static uint16_t x111 = 223U;
	uint32_t x112 = UINT32_MAX;

	t24 = (((x109+x110)%x111)|x112);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x113 = 739050LLU;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = -1;
	int8_t x116 = 0;
	static uint64_t t25 = 84839454LLU;

	t25 = (((x113+x114)%x115)|x116);

	if (t25 != 804585LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = -1231958;
	volatile int64_t x119 = -1LL;
	int64_t x120 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (((x117+x118)%x119)|x120);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MAX;
	uint64_t x122 = 14LLU;
	static uint64_t x123 = 330514375194261LLU;
	static uint64_t t27 = 35208574859046822LLU;

	t27 = (((x121+x122)%x123)|x124);

	if (t27 != 32783LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = 8;
	uint32_t x127 = 896269U;
	uint16_t x128 = 11U;
	volatile uint32_t t28 = 0U;

	t28 = (((x125+x126)%x127)|x128);

	if (t28 != 12283U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x129 = 1;
	int8_t x130 = INT8_MIN;
	static int32_t x132 = INT32_MIN;

	t29 = (((x129+x130)%x131)|x132);

	if (t29 != -13) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x134 = INT8_MAX;
	static int32_t x135 = 24061;
	volatile int16_t x136 = INT16_MAX;

	t30 = (((x133+x134)%x135)|x136);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x141 = 0U;
	int32_t x143 = -1;
	static uint16_t x144 = 40U;
	volatile int64_t t31 = -186122820LL;

	t31 = (((x141+x142)%x143)|x144);

	if (t31 != 40LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x147 = -1;
	static uint16_t x148 = UINT16_MAX;

	t32 = (((x145+x146)%x147)|x148);

	if (t32 != 8519679U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int64_t x150 = -1LL;
	uint32_t x151 = 885U;
	int8_t x152 = INT8_MAX;
	int64_t t33 = -266228808LL;

	t33 = (((x149+x150)%x151)|x152);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -4;
	int8_t x154 = INT8_MAX;
	volatile int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	volatile int64_t t34 = -38311LL;

	t34 = (((x153+x154)%x155)|x156);

	if (t34 != -9223372036854775685LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -40;
	uint64_t t35 = UINT64_MAX;

	t35 = (((x157+x158)%x159)|x160);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x161 = -62710;
	int32_t x162 = 1203719;
	int16_t x163 = INT16_MIN;
	static uint64_t t36 = 744174623522073140LLU;

	t36 = (((x161+x162)%x163)|x164);

	if (t36 != 26897LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	int64_t x166 = -1LL;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = 1U;
	volatile int64_t t37 = -2505308449570LL;

	t37 = (((x165+x166)%x167)|x168);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 41072879U;
	uint8_t x170 = 7U;
	int64_t x171 = INT64_MIN;
	static volatile int64_t t38 = 3193001355237832LL;

	t38 = (((x169+x170)%x171)|x172);

	if (t38 != -9223372036813702922LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x173 = 31U;
	uint32_t x174 = 3159U;
	volatile int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MAX;
	uint32_t t39 = 458102365U;

	t39 = (((x173+x174)%x175)|x176);

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1;
	static int64_t x178 = -1LL;
	volatile int16_t x179 = INT16_MIN;
	static uint32_t x180 = 12522141U;
	int64_t t40 = -24738339LL;

	t40 = (((x177+x178)%x179)|x180);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -11734LL;
	int16_t x183 = 5;
	volatile int64_t x184 = -1LL;
	int64_t t41 = -1746945801408LL;

	t41 = (((x181+x182)%x183)|x184);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 2063801446239592LLU;
	uint16_t x190 = UINT16_MAX;
	static uint8_t x191 = 1U;
	uint8_t x192 = 3U;
	uint64_t t42 = 335348682LLU;

	t42 = (((x189+x190)%x191)|x192);

	if (t42 != 3LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x193 = 569;
	int64_t x194 = 28473LL;
	volatile int64_t x195 = 636494967066LL;
	int16_t x196 = 19;

	t43 = (((x193+x194)%x195)|x196);

	if (t43 != 29043LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -1;
	volatile int64_t x207 = -1LL;
	int16_t x208 = -1;
	volatile int64_t t44 = -101142LL;

	t44 = (((x205+x206)%x207)|x208);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = -7684LL;
	volatile int16_t x211 = 1678;
	volatile int64_t x212 = 259894391LL;
	volatile int64_t t45 = -22803348024LL;

	t45 = (((x209+x210)%x211)|x212);

	if (t45 != -897LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = -1;
	int32_t x214 = INT32_MAX;
	uint32_t x215 = 1014U;
	uint32_t t46 = UINT32_MAX;

	t46 = (((x213+x214)%x215)|x216);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = 157412LL;
	static uint64_t x218 = 34880570162998LLU;
	int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MAX;

	t47 = (((x217+x218)%x219)|x220);

	if (t47 != 34881576894463LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x221 = INT16_MIN;
	static int16_t x222 = INT16_MIN;
	static volatile int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t48 = 1472;

	t48 = (((x221+x222)%x223)|x224);

	if (t48 != -4) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 5U;
	static volatile uint8_t x226 = UINT8_MAX;
	volatile int32_t x227 = -1283;
	static uint8_t x228 = UINT8_MAX;
	int32_t t49 = -16525729;

	t49 = (((x225+x226)%x227)|x228);

	if (t49 != 511) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x234 = -18;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t50 = -1;

	t50 = (((x233+x234)%x235)|x236);

	if (t50 != -97) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = -1;
	int32_t x242 = 7435;
	int16_t x244 = -1;
	int32_t t51 = -1;

	t51 = (((x241+x242)%x243)|x244);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x247 = INT32_MIN;
	int32_t x248 = -1;
	uint64_t t52 = UINT64_MAX;

	t52 = (((x245+x246)%x247)|x248);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x250 = 0U;
	static int8_t x251 = INT8_MAX;
	volatile uint8_t x252 = 8U;
	static int64_t t53 = 2672784143144LL;

	t53 = (((x249+x250)%x251)|x252);

	if (t53 != 94LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = -1;
	int64_t x254 = INT64_MAX;
	static uint32_t x255 = 8225505U;
	int64_t x256 = -1LL;
	volatile int64_t t54 = -332524LL;

	t54 = (((x253+x254)%x255)|x256);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x258 = INT16_MAX;
	static uint8_t x259 = UINT8_MAX;
	int64_t x260 = -186967657675496LL;
	int64_t t55 = 3260LL;

	t55 = (((x257+x258)%x259)|x260);

	if (t55 != -186967657675394LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x261 = 97;
	volatile uint16_t x262 = 6046U;
	int32_t x263 = INT32_MAX;
	volatile int16_t x264 = INT16_MAX;
	int32_t t56 = -633;

	t56 = (((x261+x262)%x263)|x264);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = -1;
	uint8_t x266 = UINT8_MAX;
	static uint64_t x267 = 15714LLU;
	int16_t x268 = -1926;
	volatile uint64_t t57 = 63682413733LLU;

	t57 = (((x265+x266)%x267)|x268);

	if (t57 != 18446744073709549822LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MIN;
	volatile uint32_t x270 = 634245U;
	static int32_t x271 = -1;
	uint8_t x272 = 3U;
	volatile int64_t t58 = 773542783LL;

	t58 = (((x269+x270)%x271)|x272);

	if (t58 != 3LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x273 = -1;
	int32_t x275 = INT32_MIN;
	static uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t59 = UINT32_MAX;

	t59 = (((x273+x274)%x275)|x276);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = -1;
	volatile int32_t x278 = INT32_MAX;
	static int32_t x279 = -1399161;
	volatile uint32_t t60 = 1947880U;

	t60 = (((x277+x278)%x279)|x280);

	if (t60 != 9960691U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x282 = UINT8_MAX;
	volatile int32_t t61 = -3020530;

	t61 = (((x281+x282)%x283)|x284);

	if (t61 != 77) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x287 = 66;
	uint32_t x288 = 45U;
	uint32_t t62 = UINT32_MAX;

	t62 = (((x285+x286)%x287)|x288);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = 11638;
	static int16_t x290 = INT16_MIN;
	int64_t x292 = INT64_MIN;

	t63 = (((x289+x290)%x291)|x292);

	if (t63 != 9223506681696773098LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x294 = INT16_MIN;
	volatile int32_t t64 = 6650;

	t64 = (((x293+x294)%x295)|x296);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MIN;
	int16_t x299 = 1;
	volatile uint16_t x300 = 38U;
	volatile int32_t t65 = -2445639;

	t65 = (((x297+x298)%x299)|x300);

	if (t65 != 38) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x301 = 75U;
	volatile int32_t x303 = 394395;
	uint32_t x304 = UINT32_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = (((x301+x302)%x303)|x304);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MAX;
	volatile int64_t x306 = INT64_MIN;
	volatile int64_t x307 = 172487784198LL;
	static int8_t x308 = -1;
	volatile int64_t t67 = 332LL;

	t67 = (((x305+x306)%x307)|x308);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x310 = UINT64_MAX;
	int16_t x311 = -1;
	uint8_t x312 = 2U;

	t68 = (((x309+x310)%x311)|x312);

	if (t68 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x314 = INT32_MAX;
	volatile uint64_t x315 = 2546039734106231754LLU;
	int64_t x316 = 383431LL;
	volatile uint64_t t69 = 145147565781723682LLU;

	t69 = (((x313+x314)%x315)|x316);

	if (t69 != 2147483647LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x317 = INT8_MIN;
	int64_t x318 = -2441236LL;
	uint8_t x319 = UINT8_MAX;
	uint32_t x320 = UINT32_MAX;

	t70 = (((x317+x318)%x319)|x320);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x321 = UINT32_MAX;
	volatile int8_t x322 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	static int64_t t71 = 2LL;

	t71 = (((x321+x322)%x323)|x324);

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = INT64_MAX;
	uint8_t x327 = 5U;
	int32_t x328 = -1;

	t72 = (((x325+x326)%x327)|x328);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x329 = 3U;
	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = INT64_MIN;
	uint8_t x332 = UINT8_MAX;

	t73 = (((x329+x330)%x331)|x332);

	if (t73 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = INT16_MAX;
	int8_t x335 = -1;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t74 = INT32_MAX;

	t74 = (((x333+x334)%x335)|x336);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = 55;
	int8_t x338 = INT8_MAX;
	volatile int16_t x339 = INT16_MIN;
	volatile int16_t x340 = 1305;
	volatile int32_t t75 = -1;

	t75 = (((x337+x338)%x339)|x340);

	if (t75 != 1471) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = UINT8_MAX;
	static int64_t x342 = INT64_MIN;
	volatile uint16_t x343 = 7486U;
	volatile int64_t t76 = -3139175562621157431LL;

	t76 = (((x341+x342)%x343)|x344);

	if (t76 != -6305LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MAX;
	uint8_t x355 = 2U;
	uint16_t x356 = 1U;

	t77 = (((x353+x354)%x355)|x356);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = 6;
	int16_t x358 = -29;
	static volatile uint64_t x359 = 766150359474548LLU;
	uint16_t x360 = 476U;
	static volatile uint64_t t78 = 1LLU;

	t78 = (((x357+x358)%x359)|x360);

	if (t78 != 141868640859613LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = -1LL;
	static int32_t x362 = 191811272;
	int16_t x363 = -1;
	uint32_t x364 = UINT32_MAX;
	int64_t t79 = -126633LL;

	t79 = (((x361+x362)%x363)|x364);

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MAX;
	uint8_t x366 = 15U;
	static int32_t t80 = -10;

	t80 = (((x365+x366)%x367)|x368);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = -118;
	static int16_t x370 = INT16_MIN;
	uint16_t x371 = 203U;
	static uint8_t x372 = 0U;
	static int32_t t81 = -73347;

	t81 = (((x369+x370)%x371)|x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x373 = 48770266;
	int16_t x374 = -1;
	int64_t x375 = INT64_MIN;
	volatile uint8_t x376 = 0U;
	int64_t t82 = -72915LL;

	t82 = (((x373+x374)%x375)|x376);

	if (t82 != 48770265LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x377 = 10U;
	int16_t x379 = 62;
	int8_t x380 = INT8_MIN;

	t83 = (((x377+x378)%x379)|x380);

	if (t83 != -111) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x382 = -17;
	uint16_t x383 = 75U;
	uint32_t t84 = UINT32_MAX;

	t84 = (((x381+x382)%x383)|x384);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = 376475078311430789LL;
	int16_t x391 = -1;
	int16_t x392 = INT16_MIN;

	t85 = (((x389+x390)%x391)|x392);

	if (t85 != 18446744073709537924LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = -1;
	int8_t x394 = -13;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = 93U;
	int32_t t86 = 2;

	t86 = (((x393+x394)%x395)|x396);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = 111133;
	int8_t x399 = INT8_MAX;
	int16_t x400 = -1;

	t87 = (((x397+x398)%x399)|x400);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x403 = -1;
	int32_t x404 = INT32_MIN;
	static int32_t t88 = INT32_MIN;

	t88 = (((x401+x402)%x403)|x404);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = -30;
	int16_t x406 = INT16_MIN;
	int16_t x407 = -1;
	int8_t x408 = INT8_MAX;
	static int32_t t89 = 0;

	t89 = (((x405+x406)%x407)|x408);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x409 = -1;
	volatile uint16_t x410 = UINT16_MAX;
	int8_t x411 = -1;
	int16_t x412 = INT16_MIN;
	int32_t t90 = -2;

	t90 = (((x409+x410)%x411)|x412);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x414 = 23U;
	volatile int16_t x416 = -2;
	volatile int32_t t91 = -70694;

	t91 = (((x413+x414)%x415)|x416);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x417 = INT16_MIN;
	volatile int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MIN;
	static int64_t x420 = INT64_MIN;
	static int64_t t92 = INT64_MIN;

	t92 = (((x417+x418)%x419)|x420);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = -1LL;
	int32_t x422 = INT32_MIN;
	int32_t x423 = INT32_MIN;
	int64_t x424 = 1588818LL;
	int64_t t93 = 20339546LL;

	t93 = (((x421+x422)%x423)|x424);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -1;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = 141065017449502408LLU;
	int32_t x428 = -1;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x425+x426)%x427)|x428);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x430 = -1;
	static volatile uint32_t x431 = 143125U;
	static volatile int16_t x432 = INT16_MIN;
	volatile uint32_t t95 = 1U;

	t95 = (((x429+x430)%x431)|x432);

	if (t95 != 4294934528U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x433 = INT64_MAX;
	int16_t x434 = -6;
	int64_t t96 = 124LL;

	t96 = (((x433+x434)%x435)|x436);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = 1;
	volatile int64_t x438 = INT64_MIN;
	int64_t x440 = INT64_MAX;
	volatile int64_t t97 = INT64_MAX;

	t97 = (((x437+x438)%x439)|x440);

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = 448822199019LLU;
	uint32_t x442 = UINT32_MAX;
	uint8_t x443 = 18U;
	uint64_t t98 = UINT64_MAX;

	t98 = (((x441+x442)%x443)|x444);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = -53686108585620LL;
	static int32_t x447 = -7480;
	static volatile uint64_t t99 = UINT64_MAX;

	t99 = (((x445+x446)%x447)|x448);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

