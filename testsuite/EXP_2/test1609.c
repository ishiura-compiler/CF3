#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 17918723U;
uint16_t x3 = 0U;
uint16_t x4 = UINT16_MAX;
int64_t x34 = INT64_MIN;
int32_t x47 = INT32_MIN;
volatile int32_t t4 = -1506;
uint64_t x57 = 67920121478LLU;
static uint32_t x63 = 12819U;
int64_t x75 = INT64_MIN;
volatile int32_t x79 = -47348;
int16_t x83 = INT16_MIN;
uint16_t x100 = 14358U;
volatile uint8_t x105 = UINT8_MAX;
int8_t x110 = -1;
static volatile int32_t t16 = -12;
int16_t x114 = -1;
uint32_t x143 = UINT32_MAX;
int32_t t21 = 3;
int8_t x150 = 0;
static volatile uint16_t x162 = UINT16_MAX;
uint8_t x163 = 5U;
int32_t x175 = INT32_MIN;
volatile int32_t t25 = 178090070;
uint16_t x186 = 504U;
int8_t x188 = INT8_MIN;
static volatile int16_t x197 = INT16_MAX;
int8_t x223 = -1;
static volatile uint8_t x232 = 1U;
int16_t x244 = -1;
uint8_t x245 = 1U;
int64_t x247 = -25061816874423840LL;
int32_t x248 = 555383;
static uint16_t x249 = 15545U;
uint64_t x255 = 323039LLU;
static int16_t x265 = 2;
static int32_t t39 = 63688;
volatile uint16_t x274 = UINT16_MAX;
volatile int32_t t40 = -52324;
static int8_t x283 = 3;
uint64_t x299 = 23247684539LLU;
int8_t x300 = INT8_MAX;
int16_t x305 = 0;
int8_t x318 = -1;
static volatile uint64_t x319 = UINT64_MAX;
int32_t t48 = 4083;
static int8_t x322 = INT8_MAX;
static int64_t x323 = INT64_MIN;
uint64_t x325 = UINT64_MAX;
int32_t x330 = -1;
uint32_t x341 = UINT32_MAX;
int8_t x350 = INT8_MIN;
volatile int32_t t54 = -17686;
static int16_t x359 = INT16_MAX;
uint8_t x360 = 12U;
int16_t x363 = -1;
volatile int64_t x366 = -1LL;
static int32_t x380 = 3;
int32_t t58 = -4;
uint8_t x382 = 12U;
int8_t x383 = INT8_MIN;
uint64_t x388 = 3681680256928644219LLU;
volatile uint8_t x393 = 9U;
static int16_t x407 = INT16_MAX;
int8_t x408 = 42;
int16_t x423 = 11;
int8_t x453 = INT8_MAX;
volatile int32_t t65 = -542211023;
int32_t x469 = 962573395;
static volatile int32_t t67 = -1765;
static int32_t t68 = -103;
uint64_t x484 = 9880LLU;
volatile uint8_t x493 = 9U;
volatile int64_t x497 = 7LL;
int64_t x501 = 1528LL;
int64_t x503 = -1LL;
int16_t x514 = -1;
uint64_t x527 = UINT64_MAX;
static volatile int32_t t76 = -103;
volatile int32_t t77 = 8;
int16_t x534 = -1;
int64_t x572 = -1LL;
volatile int16_t x575 = INT16_MAX;
uint16_t x576 = 0U;
static int64_t x593 = 7803LL;
int64_t x596 = 13105345814830LL;
volatile int32_t t84 = 576750653;
int64_t x598 = -1273767278319756LL;
int32_t x606 = INT32_MIN;
int32_t t88 = 51625;
int8_t x632 = INT8_MIN;
int8_t x641 = 1;
int64_t x642 = -1LL;
int32_t t92 = 15346;
int64_t x645 = 5331588LL;
volatile uint32_t x647 = 88U;
static int16_t x651 = -1;
volatile int16_t x654 = -1;
volatile int32_t t96 = 0;
volatile int32_t x694 = -1;
int32_t x696 = INT32_MIN;


void f0(void) {
	int32_t x2 = 229752865;
	int32_t t0 = -59953043;

	t0 = ((x1>>(x2<=x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 592989932LLU;
	volatile int32_t x6 = INT32_MIN;
	int64_t x7 = 967774786454506LL;
	int64_t x8 = -1LL;
	volatile int32_t t1 = -12002656;

	t1 = ((x5>>(x6<=x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x33 = UINT64_MAX;
	int8_t x35 = 11;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t2 = -674;

	t2 = ((x33>>(x34<=x35))<=x36);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = -847744477821110LL;
	int8_t x39 = -6;
	int64_t x40 = -1LL;
	int32_t t3 = -32378;

	t3 = ((x37>>(x38<=x39))<=x40);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int64_t x46 = INT64_MIN;
	int32_t x48 = INT32_MIN;

	t4 = ((x45>>(x46<=x47))<=x48);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x49 = 198598656;
	uint64_t x50 = 7666124LLU;
	static volatile uint8_t x51 = 28U;
	uint64_t x52 = 6505951677LLU;
	int32_t t5 = -74864;

	t5 = ((x49>>(x50<=x51))<=x52);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	static uint8_t x60 = UINT8_MAX;
	int32_t t6 = -3;

	t6 = ((x57>>(x58<=x59))<=x60);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x61 = INT16_MAX;
	static volatile int32_t x62 = INT32_MIN;
	int32_t x64 = INT32_MAX;
	static int32_t t7 = 36755;

	t7 = ((x61>>(x62<=x63))<=x64);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = 4;
	static volatile int16_t x66 = INT16_MIN;
	int32_t x67 = 2769945;
	uint8_t x68 = UINT8_MAX;
	static int32_t t8 = -1;

	t8 = ((x65>>(x66<=x67))<=x68);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x73 = 80024LL;
	static int64_t x74 = INT64_MIN;
	int16_t x76 = INT16_MAX;
	volatile int32_t t9 = -44;

	t9 = ((x73>>(x74<=x75))<=x76);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = INT32_MAX;
	volatile int8_t x78 = 3;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t10 = -101;

	t10 = ((x77>>(x78<=x79))<=x80);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x81 = 26LL;
	static uint32_t x82 = UINT32_MAX;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t11 = 918;

	t11 = ((x81>>(x82<=x83))<=x84);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x85 = 6224;
	int16_t x86 = -1;
	int64_t x87 = -1LL;
	volatile uint8_t x88 = UINT8_MAX;
	int32_t t12 = -15;

	t12 = ((x85>>(x86<=x87))<=x88);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int16_t x94 = -1;
	uint32_t x95 = 13260U;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t13 = -54463141;

	t13 = ((x93>>(x94<=x95))<=x96);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int8_t x98 = -1;
	int16_t x99 = INT16_MAX;
	volatile int32_t t14 = -20;

	t14 = ((x97>>(x98<=x99))<=x100);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x106 = 452117U;
	volatile uint32_t x107 = 418U;
	volatile int32_t x108 = 16;
	volatile int32_t t15 = -105634;

	t15 = ((x105>>(x106<=x107))<=x108);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x109 = 324438858U;
	int32_t x111 = 1;
	int16_t x112 = -1;

	t16 = ((x109>>(x110<=x111))<=x112);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x113 = 573048770362LL;
	volatile int32_t x115 = 10898234;
	uint64_t x116 = UINT64_MAX;
	int32_t t17 = -564;

	t17 = ((x113>>(x114<=x115))<=x116);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x129 = 1;
	volatile int32_t x130 = 48080;
	static uint64_t x131 = 930530434963876153LLU;
	int16_t x132 = INT16_MIN;
	static int32_t t18 = 111511136;

	t18 = ((x129>>(x130<=x131))<=x132);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = 9LL;
	int32_t x134 = -82;
	static int64_t x135 = 5753871781LL;
	int16_t x136 = INT16_MIN;
	volatile int32_t t19 = 12858274;

	t19 = ((x133>>(x134<=x135))<=x136);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x137 = 16960780822625333LLU;
	static int64_t x138 = INT64_MIN;
	volatile int32_t x139 = INT32_MIN;
	uint32_t x140 = 89040U;
	volatile int32_t t20 = -117033552;

	t20 = ((x137>>(x138<=x139))<=x140);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x141 = INT16_MAX;
	volatile int32_t x142 = 6343451;
	int32_t x144 = INT32_MAX;

	t21 = ((x141>>(x142<=x143))<=x144);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x149 = UINT8_MAX;
	static uint8_t x151 = 122U;
	volatile int8_t x152 = -1;
	int32_t t22 = -91;

	t22 = ((x149>>(x150<=x151))<=x152);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x161 = 52U;
	volatile uint64_t x164 = UINT64_MAX;
	volatile int32_t t23 = 2;

	t23 = ((x161>>(x162<=x163))<=x164);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int8_t x174 = -13;
	static int32_t x176 = INT32_MAX;
	static volatile int32_t t24 = 1041165969;

	t24 = ((x173>>(x174<=x175))<=x176);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x177 = 22U;
	int8_t x178 = -1;
	volatile int32_t x179 = -1;
	volatile int8_t x180 = INT8_MIN;

	t25 = ((x177>>(x178<=x179))<=x180);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x187 = -1715;
	int32_t t26 = 1;

	t26 = ((x185>>(x186<=x187))<=x188);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x193 = INT32_MAX;
	uint32_t x194 = 12564244U;
	static volatile int8_t x195 = -3;
	int16_t x196 = INT16_MIN;
	volatile int32_t t27 = -452356525;

	t27 = ((x193>>(x194<=x195))<=x196);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x198 = -1;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;
	int32_t t28 = -888064499;

	t28 = ((x197>>(x198<=x199))<=x200);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x209 = INT64_MAX;
	volatile int8_t x210 = INT8_MIN;
	uint16_t x211 = 29549U;
	int64_t x212 = INT64_MIN;
	int32_t t29 = -169443562;

	t29 = ((x209>>(x210<=x211))<=x212);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x217 = 3128055255945991221LLU;
	uint64_t x218 = 58946609629825LLU;
	uint16_t x219 = UINT16_MAX;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t30 = -7513;

	t30 = ((x217>>(x218<=x219))<=x220);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x221 = 13;
	volatile int64_t x222 = -11661665098904333LL;
	static uint32_t x224 = 151U;
	volatile int32_t t31 = -25085;

	t31 = ((x221>>(x222<=x223))<=x224);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x225 = 30U;
	uint32_t x226 = UINT32_MAX;
	static int16_t x227 = INT16_MIN;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t32 = -12;

	t32 = ((x225>>(x226<=x227))<=x228);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 1U;
	static int8_t x231 = -1;
	int32_t t33 = -93076202;

	t33 = ((x229>>(x230<=x231))<=x232);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x241 = 26U;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	int32_t t34 = 613169574;

	t34 = ((x241>>(x242<=x243))<=x244);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x246 = 2559335LLU;
	volatile int32_t t35 = -391375;

	t35 = ((x245>>(x246<=x247))<=x248);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x250 = 104549LL;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = 11864;
	volatile int32_t t36 = 6112884;

	t36 = ((x249>>(x250<=x251))<=x252);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x253 = 1541;
	uint16_t x254 = UINT16_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t37 = 85;

	t37 = ((x253>>(x254<=x255))<=x256);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x257 = 395618570;
	volatile int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t38 = -1;

	t38 = ((x257>>(x258<=x259))<=x260);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x266 = -1LL;
	uint8_t x267 = 1U;
	int8_t x268 = -1;

	t39 = ((x265>>(x266<=x267))<=x268);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x273 = INT8_MAX;
	volatile int32_t x275 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;

	t40 = ((x273>>(x274<=x275))<=x276);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x277 = 6532;
	uint32_t x278 = UINT32_MAX;
	static int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	int32_t t41 = 847;

	t41 = ((x277>>(x278<=x279))<=x280);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = -1LL;
	volatile int16_t x284 = INT16_MAX;
	static int32_t t42 = 1596202;

	t42 = ((x281>>(x282<=x283))<=x284);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = INT32_MAX;
	uint16_t x291 = 3U;
	int32_t x292 = INT32_MAX;
	volatile int32_t t43 = 0;

	t43 = ((x289>>(x290<=x291))<=x292);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x293 = 2429377807749653825LLU;
	uint16_t x294 = 41U;
	static volatile uint32_t x295 = 2U;
	int64_t x296 = -39700163308570172LL;
	static volatile int32_t t44 = -1;

	t44 = ((x293>>(x294<=x295))<=x296);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x297 = 1U;
	static int16_t x298 = INT16_MAX;
	volatile int32_t t45 = -7065077;

	t45 = ((x297>>(x298<=x299))<=x300);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x301 = 27319744U;
	int64_t x302 = -1LL;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t46 = -727;

	t46 = ((x301>>(x302<=x303))<=x304);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x306 = 831364024LLU;
	static int64_t x307 = 199LL;
	int64_t x308 = INT64_MIN;
	static int32_t t47 = -31477;

	t47 = ((x305>>(x306<=x307))<=x308);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x317 = 959985980;
	static int32_t x320 = -1;

	t48 = ((x317>>(x318<=x319))<=x320);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x324 = -1;
	static volatile int32_t t49 = -2;

	t49 = ((x321>>(x322<=x323))<=x324);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x326 = 4;
	uint32_t x327 = 1714971U;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t50 = -219978114;

	t50 = ((x325>>(x326<=x327))<=x328);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x329 = 38297U;
	volatile uint64_t x331 = 685305LLU;
	int64_t x332 = INT64_MIN;
	volatile int32_t t51 = -340327902;

	t51 = ((x329>>(x330<=x331))<=x332);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x337 = INT32_MAX;
	static uint16_t x338 = UINT16_MAX;
	uint32_t x339 = UINT32_MAX;
	uint8_t x340 = 14U;
	static int32_t t52 = 377303657;

	t52 = ((x337>>(x338<=x339))<=x340);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x342 = INT16_MAX;
	static int32_t x343 = 3;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t53 = 5386035;

	t53 = ((x341>>(x342<=x343))<=x344);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x349 = 631LL;
	static int64_t x351 = INT64_MIN;
	int64_t x352 = 572472LL;

	t54 = ((x349>>(x350<=x351))<=x352);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x357 = 11U;
	static uint32_t x358 = 683U;
	volatile int32_t t55 = -284;

	t55 = ((x357>>(x358<=x359))<=x360);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x361 = 56637U;
	volatile int8_t x362 = INT8_MIN;
	int16_t x364 = 581;
	int32_t t56 = 48192;

	t56 = ((x361>>(x362<=x363))<=x364);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x365 = INT64_MAX;
	int16_t x367 = 138;
	int16_t x368 = INT16_MAX;
	int32_t t57 = -12303862;

	t57 = ((x365>>(x366<=x367))<=x368);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x377 = UINT8_MAX;
	static int64_t x378 = 54220748489799302LL;
	int64_t x379 = INT64_MIN;

	t58 = ((x377>>(x378<=x379))<=x380);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x381 = 758U;
	volatile int8_t x384 = -33;
	int32_t t59 = -1;

	t59 = ((x381>>(x382<=x383))<=x384);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x385 = INT64_MAX;
	uint64_t x386 = UINT64_MAX;
	static int16_t x387 = 6162;
	int32_t t60 = 0;

	t60 = ((x385>>(x386<=x387))<=x388);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x394 = INT16_MAX;
	int8_t x395 = -1;
	int16_t x396 = -19;
	int32_t t61 = 733208;

	t61 = ((x393>>(x394<=x395))<=x396);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x405 = UINT32_MAX;
	int32_t x406 = INT32_MIN;
	static int32_t t62 = 109;

	t62 = ((x405>>(x406<=x407))<=x408);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x421 = 937666784;
	int8_t x422 = 0;
	volatile uint64_t x424 = 74099561LLU;
	int32_t t63 = 176;

	t63 = ((x421>>(x422<=x423))<=x424);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x449 = 0U;
	int16_t x450 = -1;
	static uint32_t x451 = 2804523U;
	static uint32_t x452 = 19298367U;
	static volatile int32_t t64 = 0;

	t64 = ((x449>>(x450<=x451))<=x452);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x454 = 6984U;
	int16_t x455 = INT16_MIN;
	static int64_t x456 = -24LL;

	t65 = ((x453>>(x454<=x455))<=x456);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x457 = INT16_MAX;
	static uint16_t x458 = 2U;
	int8_t x459 = INT8_MIN;
	static uint16_t x460 = UINT16_MAX;
	volatile int32_t t66 = 904696;

	t66 = ((x457>>(x458<=x459))<=x460);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x470 = 115855;
	static int32_t x471 = -88;
	volatile int64_t x472 = INT64_MAX;

	t67 = ((x469>>(x470<=x471))<=x472);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x477 = 944LL;
	volatile uint8_t x478 = 14U;
	int32_t x479 = INT32_MAX;
	uint64_t x480 = 566944031494624425LLU;

	t68 = ((x477>>(x478<=x479))<=x480);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x481 = INT64_MAX;
	int64_t x482 = INT64_MIN;
	uint8_t x483 = 120U;
	int32_t t69 = -1;

	t69 = ((x481>>(x482<=x483))<=x484);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x494 = INT32_MIN;
	int64_t x495 = -1LL;
	uint64_t x496 = 12885545111146958LLU;
	volatile int32_t t70 = -1;

	t70 = ((x493>>(x494<=x495))<=x496);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x498 = 1357680846811028947LLU;
	static int64_t x499 = INT64_MIN;
	int8_t x500 = -7;
	volatile int32_t t71 = 2599232;

	t71 = ((x497>>(x498<=x499))<=x500);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x502 = 2281;
	int64_t x504 = INT64_MAX;
	volatile int32_t t72 = 0;

	t72 = ((x501>>(x502<=x503))<=x504);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x513 = 1223868;
	volatile uint8_t x515 = 0U;
	volatile uint8_t x516 = UINT8_MAX;
	static volatile int32_t t73 = 391529225;

	t73 = ((x513>>(x514<=x515))<=x516);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x517 = 2U;
	int8_t x518 = INT8_MAX;
	static int8_t x519 = INT8_MIN;
	int8_t x520 = -1;
	static volatile int32_t t74 = 250;

	t74 = ((x517>>(x518<=x519))<=x520);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x521 = 115863;
	int16_t x522 = 68;
	uint16_t x523 = UINT16_MAX;
	volatile int32_t x524 = INT32_MIN;
	int32_t t75 = -742;

	t75 = ((x521>>(x522<=x523))<=x524);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x525 = UINT8_MAX;
	static uint16_t x526 = 187U;
	volatile int64_t x528 = INT64_MIN;

	t76 = ((x525>>(x526<=x527))<=x528);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x529 = 26;
	static int8_t x530 = INT8_MIN;
	uint16_t x531 = 1482U;
	int16_t x532 = INT16_MAX;

	t77 = ((x529>>(x530<=x531))<=x532);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x533 = INT16_MAX;
	static int16_t x535 = -1;
	int32_t x536 = INT32_MIN;
	int32_t t78 = 29677;

	t78 = ((x533>>(x534<=x535))<=x536);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x557 = INT32_MAX;
	int16_t x558 = INT16_MIN;
	static int64_t x559 = -2673842LL;
	static int16_t x560 = INT16_MIN;
	int32_t t79 = -87162;

	t79 = ((x557>>(x558<=x559))<=x560);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x565 = 0;
	static int32_t x566 = -65;
	int64_t x567 = 441178151LL;
	uint16_t x568 = 30967U;
	volatile int32_t t80 = 125;

	t80 = ((x565>>(x566<=x567))<=x568);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x569 = UINT16_MAX;
	int32_t x570 = INT32_MIN;
	uint16_t x571 = 2U;
	volatile int32_t t81 = -207;

	t81 = ((x569>>(x570<=x571))<=x572);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x573 = 157;
	static int32_t x574 = INT32_MAX;
	static volatile int32_t t82 = -292;

	t82 = ((x573>>(x574<=x575))<=x576);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x589 = 575880LL;
	uint8_t x590 = 31U;
	int8_t x591 = INT8_MAX;
	int16_t x592 = 217;
	int32_t t83 = -5321;

	t83 = ((x589>>(x590<=x591))<=x592);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x594 = INT32_MIN;
	int16_t x595 = INT16_MIN;

	t84 = ((x593>>(x594<=x595))<=x596);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x597 = 249;
	static int64_t x599 = -60427LL;
	int32_t x600 = 514384;
	volatile int32_t t85 = -22771549;

	t85 = ((x597>>(x598<=x599))<=x600);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x605 = 4LLU;
	int64_t x607 = INT64_MIN;
	uint32_t x608 = 237861730U;
	volatile int32_t t86 = 10633;

	t86 = ((x605>>(x606<=x607))<=x608);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x609 = 14174U;
	static int32_t x610 = -1;
	uint8_t x611 = 3U;
	int64_t x612 = INT64_MIN;
	int32_t t87 = 23687619;

	t87 = ((x609>>(x610<=x611))<=x612);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x625 = 260480094U;
	int32_t x626 = INT32_MIN;
	int8_t x627 = 0;
	int32_t x628 = INT32_MIN;

	t88 = ((x625>>(x626<=x627))<=x628);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x629 = 220;
	int32_t x630 = 397656;
	static int16_t x631 = INT16_MAX;
	volatile int32_t t89 = -7581;

	t89 = ((x629>>(x630<=x631))<=x632);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x633 = UINT32_MAX;
	uint32_t x634 = UINT32_MAX;
	uint16_t x635 = UINT16_MAX;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t90 = 38237085;

	t90 = ((x633>>(x634<=x635))<=x636);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x637 = UINT16_MAX;
	int8_t x638 = -62;
	static int8_t x639 = INT8_MAX;
	uint64_t x640 = UINT64_MAX;
	volatile int32_t t91 = 16547754;

	t91 = ((x637>>(x638<=x639))<=x640);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x643 = INT64_MIN;
	int64_t x644 = 972LL;

	t92 = ((x641>>(x642<=x643))<=x644);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x646 = 8U;
	int16_t x648 = INT16_MAX;
	static volatile int32_t t93 = 94490573;

	t93 = ((x645>>(x646<=x647))<=x648);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x649 = 6;
	volatile int8_t x650 = -1;
	static int16_t x652 = INT16_MIN;
	int32_t t94 = -3420;

	t94 = ((x649>>(x650<=x651))<=x652);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x653 = 1U;
	uint32_t x655 = UINT32_MAX;
	int64_t x656 = INT64_MAX;
	volatile int32_t t95 = 182988;

	t95 = ((x653>>(x654<=x655))<=x656);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x661 = 206940088LLU;
	int64_t x662 = INT64_MAX;
	static int64_t x663 = INT64_MIN;
	uint8_t x664 = 0U;

	t96 = ((x661>>(x662<=x663))<=x664);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x677 = 1;
	static int8_t x678 = -1;
	uint32_t x679 = UINT32_MAX;
	uint16_t x680 = 274U;
	volatile int32_t t97 = -1787;

	t97 = ((x677>>(x678<=x679))<=x680);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x681 = 1372884317LLU;
	int16_t x682 = INT16_MIN;
	int32_t x683 = 29;
	static int64_t x684 = INT64_MAX;
	volatile int32_t t98 = 5;

	t98 = ((x681>>(x682<=x683))<=x684);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x693 = UINT64_MAX;
	int16_t x695 = INT16_MIN;
	volatile int32_t t99 = 225;

	t99 = ((x693>>(x694<=x695))<=x696);

	if (t99 != 0) { NG(); } else { ; }
	
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

