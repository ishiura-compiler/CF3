#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
uint64_t x6 = UINT64_MAX;
volatile uint64_t t1 = 17305233806LLU;
int64_t x11 = INT64_MIN;
static volatile uint64_t x15 = 269229783404891LLU;
static volatile int64_t x21 = INT64_MAX;
static uint8_t x23 = UINT8_MAX;
int32_t x25 = INT32_MIN;
volatile int64_t x27 = -1LL;
uint16_t x37 = 3857U;
volatile int8_t x39 = -1;
uint64_t x40 = 13406166833LLU;
uint32_t x43 = 3979143U;
volatile int32_t t9 = -3287;
volatile int32_t x46 = -38996;
uint32_t t17 = 115709650U;
uint8_t x115 = 6U;
volatile int8_t x130 = INT8_MIN;
uint16_t x131 = 43U;
uint8_t x135 = UINT8_MAX;
volatile int64_t t22 = -535177295656LL;
int8_t x139 = INT8_MIN;
int32_t x140 = INT32_MIN;
uint16_t x155 = 1224U;
int16_t x156 = INT16_MIN;
int8_t x164 = INT8_MIN;
int8_t x167 = -32;
int8_t x172 = INT8_MIN;
static int32_t x173 = -1;
volatile int32_t t29 = 442811;
uint16_t x192 = UINT16_MAX;
uint16_t x204 = 767U;
volatile uint64_t t32 = 1215LLU;
int32_t x208 = 225494;
static volatile int32_t t33 = 86173941;
uint8_t x213 = UINT8_MAX;
volatile int32_t x229 = INT32_MIN;
static int32_t x230 = 4;
volatile int32_t t36 = 702101;
volatile int32_t t37 = -1;
static uint64_t x240 = 145715752LLU;
int32_t t39 = 886798;
volatile uint8_t x248 = UINT8_MAX;
int16_t x259 = 0;
uint16_t x267 = 7628U;
static uint64_t t44 = 530582466769852724LLU;
int32_t x279 = INT32_MAX;
volatile int32_t t46 = -8;
static uint16_t x286 = 680U;
volatile int16_t x287 = 1;
static int8_t x288 = -1;
uint16_t x292 = 16069U;
uint32_t x309 = UINT32_MAX;
int16_t x320 = INT16_MIN;
int64_t x324 = -1LL;
int8_t x333 = -1;
int16_t x338 = INT16_MIN;
static uint8_t x343 = UINT8_MAX;
static int32_t x344 = INT32_MIN;
volatile uint32_t x366 = 91882306U;
uint32_t t59 = 250788U;
int64_t x369 = 3550613273967LL;
int64_t t60 = 80557500483559351LL;
uint16_t x373 = 305U;
uint16_t x381 = UINT16_MAX;
static int16_t x382 = INT16_MIN;
uint64_t x383 = 124144806152767134LLU;
int16_t x384 = INT16_MIN;
static int16_t x388 = INT16_MIN;
int16_t x389 = INT16_MIN;
static uint32_t x390 = UINT32_MAX;
volatile int8_t x391 = 1;
uint32_t t64 = 205U;
int16_t x412 = -1;
volatile int8_t x424 = -31;
int8_t x431 = INT8_MIN;
static uint16_t x432 = 0U;
static int32_t x437 = INT32_MIN;
volatile int8_t x439 = 1;
int16_t x458 = INT16_MIN;
volatile uint32_t t74 = 1U;
static int64_t x463 = INT64_MAX;
int16_t x468 = INT16_MIN;
uint64_t x470 = 5393023624LLU;
volatile int64_t t78 = -24555LL;
int32_t x478 = INT32_MIN;
int16_t x480 = INT16_MIN;
volatile int8_t x491 = 37;
int16_t x503 = INT16_MAX;
int32_t x509 = INT32_MAX;
uint8_t x529 = UINT8_MAX;
int16_t x532 = INT16_MIN;
uint32_t x534 = UINT32_MAX;
static int16_t x537 = 0;
volatile int32_t x539 = -1;
int16_t x555 = INT16_MAX;
int64_t x562 = 12771633510LL;
int16_t x564 = 24;
uint8_t x573 = UINT8_MAX;
uint16_t x576 = 694U;
static volatile uint32_t x578 = 2U;
uint32_t x590 = 33498592U;
int16_t x591 = -1;
static int8_t x595 = -1;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	volatile int8_t x2 = -5;
	uint16_t x3 = UINT16_MAX;
	uint16_t x4 = 0U;
	volatile uint32_t t0 = 1756662U;

	t0 = ((x1%x2)<<(x3==x4));

	if (t0 != 4U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = -1;
	volatile int16_t x8 = INT16_MAX;

	t1 = ((x5%x6)<<(x7==x8));

	if (t1 != 255LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int64_t x10 = 19861204777LL;
	int16_t x12 = 20;
	int64_t t2 = 6590603LL;

	t2 = ((x9%x10)<<(x11==x12));

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 262009322;

	t3 = ((x13%x14)<<(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x22 = INT32_MIN;
	int8_t x24 = INT8_MAX;
	volatile int64_t t4 = 1598998533708865883LL;

	t4 = ((x21%x22)<<(x23==x24));

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	uint32_t x28 = 15391410U;
	int32_t t5 = 2;

	t5 = ((x25%x26)<<(x27==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MAX;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MIN;
	static int64_t t6 = -795142069LL;

	t6 = ((x29%x30)<<(x31==x32));

	if (t6 != 65534LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 66U;
	int32_t x34 = -1;
	uint32_t x35 = 52582821U;
	int32_t x36 = -1;
	int32_t t7 = 424517090;

	t7 = ((x33%x34)<<(x35==x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = UINT64_MAX;
	uint64_t t8 = 116839535589018081LLU;

	t8 = ((x37%x38)<<(x39==x40));

	if (t8 != 3857LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 50U;
	volatile int16_t x42 = INT16_MIN;
	volatile int8_t x44 = -12;

	t9 = ((x41%x42)<<(x43==x44));

	if (t9 != 50) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 1;
	uint64_t x47 = 490257769546973LLU;
	uint64_t x48 = UINT64_MAX;
	int32_t t10 = -178512;

	t10 = ((x45%x46)<<(x47==x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 150U;
	int32_t x50 = INT32_MIN;
	volatile uint8_t x51 = 1U;
	uint8_t x52 = 9U;
	int32_t t11 = 1753;

	t11 = ((x49%x50)<<(x51==x52));

	if (t11 != 150) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = 667;
	int64_t x54 = -62282266858959LL;
	int16_t x55 = -757;
	static uint64_t x56 = UINT64_MAX;
	volatile int64_t t12 = 575746634988783LL;

	t12 = ((x53%x54)<<(x55==x56));

	if (t12 != 667LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 15735990071153LLU;
	int8_t x58 = -1;
	int32_t x59 = INT32_MIN;
	uint64_t x60 = 33600LLU;
	uint64_t t13 = 6075437780303054LLU;

	t13 = ((x57%x58)<<(x59==x60));

	if (t13 != 15735990071153LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	static volatile int32_t x62 = INT32_MIN;
	int32_t x63 = -688481387;
	static uint32_t x64 = 1783185166U;
	volatile uint64_t t14 = 3155642LLU;

	t14 = ((x61%x62)<<(x63==x64));

	if (t14 != 2147483647LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = -8;
	int16_t x71 = -1;
	volatile uint64_t x72 = UINT64_MAX;
	volatile int32_t t15 = -52;

	t15 = ((x69%x70)<<(x71==x72));

	if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x81 = 1686LL;
	int8_t x82 = INT8_MAX;
	uint8_t x83 = 2U;
	static int8_t x84 = INT8_MAX;
	volatile int64_t t16 = -436839LL;

	t16 = ((x81%x82)<<(x83==x84));

	if (t16 != 35LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x93 = 1U;
	uint32_t x94 = UINT32_MAX;
	uint16_t x95 = 1193U;
	static uint32_t x96 = UINT32_MAX;

	t17 = ((x93%x94)<<(x95==x96));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	int32_t x104 = 26;
	int32_t t18 = 197885422;

	t18 = ((x101%x102)<<(x103==x104));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x113 = 14U;
	volatile int8_t x114 = -21;
	uint32_t x116 = 10U;
	volatile int32_t t19 = -206;

	t19 = ((x113%x114)<<(x115==x116));

	if (t19 != 14) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = 1332368857483LLU;
	volatile uint64_t x118 = 110420536985392305LLU;
	uint32_t x119 = UINT32_MAX;
	uint8_t x120 = UINT8_MAX;
	static volatile uint64_t t20 = 66LLU;

	t20 = ((x117%x118)<<(x119==x120));

	if (t20 != 1332368857483LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x129 = UINT16_MAX;
	uint64_t x132 = 25087LLU;
	static volatile int32_t t21 = 3;

	t21 = ((x129%x130)<<(x131==x132));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x133 = INT64_MIN;
	volatile int8_t x134 = INT8_MIN;
	int8_t x136 = INT8_MIN;

	t22 = ((x133%x134)<<(x135==x136));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MAX;
	int32_t t23 = -851;

	t23 = ((x137%x138)<<(x139==x140));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MIN;
	volatile uint32_t t24 = 1917705321U;

	t24 = ((x153%x154)<<(x155==x156));

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x161 = 10035U;
	int16_t x162 = INT16_MAX;
	static volatile int32_t x163 = 3558405;
	volatile int32_t t25 = -458571662;

	t25 = ((x161%x162)<<(x163==x164));

	if (t25 != 10035) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = 2480067LL;
	uint16_t x166 = UINT16_MAX;
	static uint32_t x168 = 14580091U;
	static volatile int64_t t26 = 1032526127191222LL;

	t26 = ((x165%x166)<<(x167==x168));

	if (t26 != 55272LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x169 = INT16_MIN;
	static int16_t x170 = INT16_MIN;
	static int8_t x171 = -6;
	volatile int32_t t27 = 259922019;

	t27 = ((x169%x170)<<(x171==x172));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x174 = 2195512880050148LLU;
	volatile int16_t x175 = -3;
	static int8_t x176 = -1;
	volatile uint64_t t28 = 4793071762673291LLU;

	t28 = ((x173%x174)<<(x175==x176));

	if (t28 != 44855528208119LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	static int16_t x187 = -1;
	uint16_t x188 = 3523U;

	t29 = ((x185%x186)<<(x187==x188));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MAX;
	volatile uint16_t x191 = 857U;
	volatile int32_t t30 = -2495;

	t30 = ((x189%x190)<<(x191==x192));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x193 = 7LL;
	int8_t x194 = 12;
	int32_t x195 = INT32_MIN;
	int64_t x196 = -110993216LL;
	volatile int64_t t31 = -758958557892LL;

	t31 = ((x193%x194)<<(x195==x196));

	if (t31 != 7LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x201 = 12701245066LLU;
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;

	t32 = ((x201%x202)<<(x203==x204));

	if (t32 != 12701245066LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x205 = UINT8_MAX;
	uint16_t x206 = 43U;
	static uint64_t x207 = 22773990LLU;

	t33 = ((x205%x206)<<(x207==x208));

	if (t33 != 40) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x209 = -15;
	int64_t x210 = -1LL;
	uint8_t x211 = 103U;
	int64_t x212 = -31226292LL;
	int64_t t34 = -68039082282LL;

	t34 = ((x209%x210)<<(x211==x212));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x214 = -14;
	uint8_t x215 = 15U;
	int32_t x216 = -758417;
	int32_t t35 = 6;

	t35 = ((x213%x214)<<(x215==x216));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x231 = INT16_MAX;
	static volatile int64_t x232 = INT64_MAX;

	t36 = ((x229%x230)<<(x231==x232));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = -1;
	static volatile uint32_t x235 = UINT32_MAX;
	int8_t x236 = -1;

	t37 = ((x233%x234)<<(x235==x236));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x237 = 21LLU;
	static int64_t x238 = -115502747LL;
	volatile int16_t x239 = -1;
	uint64_t t38 = 4283061576275150511LLU;

	t38 = ((x237%x238)<<(x239==x240));

	if (t38 != 21LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x241 = INT16_MIN;
	static int8_t x242 = -1;
	int64_t x243 = 1951LL;
	volatile int32_t x244 = -211734757;

	t39 = ((x241%x242)<<(x243==x244));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x245 = INT32_MAX;
	static volatile uint8_t x246 = UINT8_MAX;
	volatile int16_t x247 = 4820;
	volatile int32_t t40 = 7651;

	t40 = ((x245%x246)<<(x247==x248));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x253 = 6;
	int16_t x254 = -115;
	int8_t x255 = -3;
	static int16_t x256 = 0;
	volatile int32_t t41 = -1;

	t41 = ((x253%x254)<<(x255==x256));

	if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x257 = -1;
	int64_t x258 = -1LL;
	int64_t x260 = -4409LL;
	volatile int64_t t42 = -567493LL;

	t42 = ((x257%x258)<<(x259==x260));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 117U;
	int32_t x263 = INT32_MAX;
	static volatile uint8_t x264 = 52U;
	static int32_t t43 = 3;

	t43 = ((x261%x262)<<(x263==x264));

	if (t43 != 21) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x265 = 11465LLU;
	static volatile int16_t x266 = 7256;
	static int64_t x268 = -1LL;

	t44 = ((x265%x266)<<(x267==x268));

	if (t44 != 4209LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x273 = INT16_MAX;
	static uint32_t x274 = 4368227U;
	int16_t x275 = 7912;
	uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t45 = 527874U;

	t45 = ((x273%x274)<<(x275==x276));

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x277 = INT8_MAX;
	int8_t x278 = 1;
	int32_t x280 = 496;

	t46 = ((x277%x278)<<(x279==x280));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x281 = INT32_MAX;
	uint8_t x282 = 1U;
	static int8_t x283 = INT8_MIN;
	uint64_t x284 = 3651126958698918840LLU;
	int32_t t47 = 185;

	t47 = ((x281%x282)<<(x283==x284));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x285 = INT8_MAX;
	static int32_t t48 = -6;

	t48 = ((x285%x286)<<(x287==x288));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = 4153902;
	uint64_t x291 = 1462297735185LLU;
	int32_t t49 = -6;

	t49 = ((x289%x290)<<(x291==x292));

	if (t49 != 4070215) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x301 = 12818856993011951LL;
	volatile int16_t x302 = INT16_MAX;
	static volatile int8_t x303 = -1;
	int64_t x304 = -1LL;
	static volatile int64_t t50 = -14705370LL;

	t50 = ((x301%x302)<<(x303==x304));

	if (t50 != 45094LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x305 = INT8_MIN;
	static uint64_t x306 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	static volatile int8_t x308 = INT8_MIN;
	volatile uint64_t t51 = 431947715396812254LLU;

	t51 = ((x305%x306)<<(x307==x308));

	if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x310 = INT8_MIN;
	uint32_t x311 = 2041488794U;
	volatile int16_t x312 = -7;
	static uint32_t t52 = 1U;

	t52 = ((x309%x310)<<(x311==x312));

	if (t52 != 127U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x318 = -1;
	int8_t x319 = -12;
	static int32_t t53 = -95171;

	t53 = ((x317%x318)<<(x319==x320));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x321 = INT64_MAX;
	int64_t x322 = INT64_MIN;
	static uint64_t x323 = 1025LLU;
	int64_t t54 = INT64_MAX;

	t54 = ((x321%x322)<<(x323==x324));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x329 = 10247U;
	static int8_t x330 = INT8_MIN;
	static int16_t x331 = INT16_MAX;
	volatile int16_t x332 = -1;
	volatile uint32_t t55 = 81U;

	t55 = ((x329%x330)<<(x331==x332));

	if (t55 != 10247U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x334 = UINT64_MAX;
	int32_t x335 = -532;
	static volatile uint32_t x336 = 8U;
	volatile uint64_t t56 = 5LLU;

	t56 = ((x333%x334)<<(x335==x336));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x337 = 369550;
	uint64_t x339 = 12180952LLU;
	static int8_t x340 = INT8_MIN;
	int32_t t57 = 490;

	t57 = ((x337%x338)<<(x339==x340));

	if (t57 != 9102) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = 1LL;
	static volatile int64_t t58 = 0LL;

	t58 = ((x341%x342)<<(x343==x344));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x365 = 40U;
	int16_t x367 = -5;
	uint8_t x368 = UINT8_MAX;

	t59 = ((x365%x366)<<(x367==x368));

	if (t59 != 40U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x370 = INT8_MAX;
	int64_t x371 = INT64_MAX;
	volatile int8_t x372 = -3;

	t60 = ((x369%x370)<<(x371==x372));

	if (t60 != 49LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = -308264987;
	int32_t x376 = -23094355;
	int32_t t61 = 1;

	t61 = ((x373%x374)<<(x375==x376));

	if (t61 != 49) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t t62 = -200845201;

	t62 = ((x381%x382)<<(x383==x384));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x385 = -1;
	static int32_t x386 = -1;
	static int32_t x387 = INT32_MAX;
	volatile int32_t t63 = 3;

	t63 = ((x385%x386)<<(x387==x388));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x392 = INT32_MIN;

	t64 = ((x389%x390)<<(x391==x392));

	if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x409 = INT64_MAX;
	static int8_t x410 = INT8_MIN;
	uint8_t x411 = 3U;
	volatile int64_t t65 = -1125814LL;

	t65 = ((x409%x410)<<(x411==x412));

	if (t65 != 127LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x413 = 38352787870278475LLU;
	int8_t x414 = INT8_MAX;
	int16_t x415 = INT16_MIN;
	volatile int16_t x416 = 445;
	volatile uint64_t t66 = 9LLU;

	t66 = ((x413%x414)<<(x415==x416));

	if (t66 != 7LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x421 = INT32_MAX;
	uint64_t x422 = 71466197050235743LLU;
	static uint64_t x423 = 38815655540505LLU;
	volatile uint64_t t67 = 9LLU;

	t67 = ((x421%x422)<<(x423==x424));

	if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x429 = INT8_MAX;
	uint32_t x430 = 5497729U;
	uint32_t t68 = 15U;

	t68 = ((x429%x430)<<(x431==x432));

	if (t68 != 127U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x433 = INT16_MIN;
	static uint64_t x434 = 410265LLU;
	volatile int32_t x435 = 484;
	volatile int32_t x436 = INT32_MIN;
	volatile uint64_t t69 = 888395732618LLU;

	t69 = ((x433%x434)<<(x435==x436));

	if (t69 != 277433LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x438 = UINT32_MAX;
	volatile int8_t x440 = -1;
	volatile uint32_t t70 = 808360U;

	t70 = ((x437%x438)<<(x439==x440));

	if (t70 != 2147483648U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x441 = 10U;
	int32_t x442 = -171213220;
	volatile int64_t x443 = INT64_MAX;
	int8_t x444 = INT8_MIN;
	int32_t t71 = 675534;

	t71 = ((x441%x442)<<(x443==x444));

	if (t71 != 10) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x445 = 50U;
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 37U;
	int64_t x448 = INT64_MIN;
	int32_t t72 = 0;

	t72 = ((x445%x446)<<(x447==x448));

	if (t72 != 50) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x449 = 175U;
	int8_t x450 = 25;
	int8_t x451 = INT8_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t73 = 0;

	t73 = ((x449%x450)<<(x451==x452));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x457 = 6U;
	int32_t x459 = 53262656;
	int64_t x460 = -8290016988LL;

	t74 = ((x457%x458)<<(x459==x460));

	if (t74 != 6U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x461 = 0U;
	static int16_t x462 = INT16_MIN;
	int32_t x464 = -1;
	volatile int32_t t75 = -223277452;

	t75 = ((x461%x462)<<(x463==x464));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x465 = -1;
	static int16_t x466 = -1;
	volatile uint8_t x467 = 2U;
	volatile int32_t t76 = 315070090;

	t76 = ((x465%x466)<<(x467==x468));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x469 = 25;
	uint8_t x471 = UINT8_MAX;
	volatile int32_t x472 = INT32_MIN;
	static volatile uint64_t t77 = 953709834432LLU;

	t77 = ((x469%x470)<<(x471==x472));

	if (t77 != 25LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x473 = 7U;
	static int64_t x474 = 83387641LL;
	static int64_t x475 = INT64_MIN;
	int16_t x476 = INT16_MIN;

	t78 = ((x473%x474)<<(x475==x476));

	if (t78 != 7LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x477 = UINT32_MAX;
	uint32_t x479 = UINT32_MAX;
	volatile uint32_t t79 = 39366670U;

	t79 = ((x477%x478)<<(x479==x480));

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x489 = 1832468360319310213LLU;
	volatile int64_t x490 = 2LL;
	volatile uint16_t x492 = UINT16_MAX;
	volatile uint64_t t80 = 50943417664068017LLU;

	t80 = ((x489%x490)<<(x491==x492));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x497 = 17788;
	volatile int32_t x498 = -4082629;
	int32_t x499 = INT32_MIN;
	int32_t x500 = 7857;
	int32_t t81 = 127;

	t81 = ((x497%x498)<<(x499==x500));

	if (t81 != 17788) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x501 = -1;
	uint64_t x502 = 647475900073796478LLU;
	volatile uint32_t x504 = 92377174U;
	volatile uint64_t t82 = 4248LLU;

	t82 = ((x501%x502)<<(x503==x504));

	if (t82 != 317418871643250231LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x505 = 101U;
	static int16_t x506 = INT16_MIN;
	int32_t x507 = -1;
	int64_t x508 = 58619832628LL;
	int32_t t83 = 56017817;

	t83 = ((x505%x506)<<(x507==x508));

	if (t83 != 101) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x510 = UINT16_MAX;
	volatile int8_t x511 = -1;
	int8_t x512 = INT8_MIN;
	int32_t t84 = 9306635;

	t84 = ((x509%x510)<<(x511==x512));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x517 = -21;
	volatile int16_t x518 = -1;
	int32_t x519 = 7845295;
	uint64_t x520 = UINT64_MAX;
	int32_t t85 = -131769;

	t85 = ((x517%x518)<<(x519==x520));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x521 = -1;
	uint32_t x522 = 2U;
	volatile int16_t x523 = INT16_MIN;
	volatile int64_t x524 = 15LL;
	volatile uint32_t t86 = 1377U;

	t86 = ((x521%x522)<<(x523==x524));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x530 = INT64_MIN;
	int16_t x531 = -1;
	volatile int64_t t87 = 24012445000101LL;

	t87 = ((x529%x530)<<(x531==x532));

	if (t87 != 255LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x533 = 6172;
	volatile int16_t x535 = INT16_MIN;
	int16_t x536 = INT16_MIN;
	volatile uint32_t t88 = 13594091U;

	t88 = ((x533%x534)<<(x535==x536));

	if (t88 != 12344U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x538 = 40885156196LLU;
	volatile int32_t x540 = -3103353;
	uint64_t t89 = 48LLU;

	t89 = ((x537%x538)<<(x539==x540));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x541 = 2LLU;
	volatile int16_t x542 = -71;
	int64_t x543 = INT64_MAX;
	uint8_t x544 = 7U;
	static uint64_t t90 = 170904629549069422LLU;

	t90 = ((x541%x542)<<(x543==x544));

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x553 = INT16_MAX;
	int32_t x554 = -1;
	int16_t x556 = -23;
	static volatile int32_t t91 = -175512525;

	t91 = ((x553%x554)<<(x555==x556));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x561 = INT16_MAX;
	volatile uint8_t x563 = 1U;
	int64_t t92 = 1LL;

	t92 = ((x561%x562)<<(x563==x564));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x565 = INT16_MAX;
	uint8_t x566 = UINT8_MAX;
	int32_t x567 = INT32_MIN;
	static uint16_t x568 = UINT16_MAX;
	int32_t t93 = 9;

	t93 = ((x565%x566)<<(x567==x568));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x569 = 44508U;
	int8_t x570 = -10;
	static volatile uint64_t x571 = UINT64_MAX;
	static int16_t x572 = 9;
	static uint32_t t94 = 233U;

	t94 = ((x569%x570)<<(x571==x572));

	if (t94 != 44508U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x574 = INT64_MAX;
	int16_t x575 = -309;
	int64_t t95 = -5637724651LL;

	t95 = ((x573%x574)<<(x575==x576));

	if (t95 != 255LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x577 = INT8_MAX;
	uint16_t x579 = UINT16_MAX;
	uint64_t x580 = 2969244LLU;
	static volatile uint32_t t96 = 6882U;

	t96 = ((x577%x578)<<(x579==x580));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x585 = INT8_MAX;
	int32_t x586 = 946767723;
	int64_t x587 = INT64_MAX;
	volatile uint64_t x588 = 2606151LLU;
	volatile int32_t t97 = 189148;

	t97 = ((x585%x586)<<(x587==x588));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x589 = 935215041703204314LLU;
	static int8_t x592 = INT8_MIN;
	volatile uint64_t t98 = 25087214244602573LLU;

	t98 = ((x589%x590)<<(x591==x592));

	if (t98 != 19456570LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x593 = UINT64_MAX;
	int32_t x594 = 1262;
	int8_t x596 = INT8_MIN;
	volatile uint64_t t99 = 691513643239LLU;

	t99 = ((x593%x594)<<(x595==x596));

	if (t99 != 557LLU) { NG(); } else { ; }
	
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

