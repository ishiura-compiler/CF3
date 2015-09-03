#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -131529LL;
uint16_t x18 = UINT16_MAX;
static volatile int64_t t3 = 20071391156LL;
int16_t x51 = -1;
int32_t x57 = -1;
int32_t x60 = -1;
uint8_t x70 = 15U;
int32_t t9 = -46625;
uint64_t t10 = 65656937LLU;
int32_t x88 = 3719;
volatile int64_t t14 = -135136540LL;
int16_t x131 = -1;
int32_t x150 = INT32_MIN;
static uint8_t x151 = 10U;
volatile uint32_t x152 = 82843873U;
uint64_t x159 = 121853782880860542LLU;
volatile int16_t x163 = -7834;
uint8_t x181 = 34U;
int16_t x184 = INT16_MIN;
int64_t x189 = INT64_MIN;
uint32_t x224 = 682U;
volatile uint64_t t27 = 1723558878689471544LLU;
int64_t x270 = -1LL;
int64_t x271 = -1LL;
int8_t x279 = -32;
uint32_t t35 = 118782415U;
static volatile uint32_t x287 = 198434479U;
int32_t x292 = INT32_MAX;
static int64_t t39 = 16500175LL;
volatile int8_t x309 = INT8_MAX;
volatile int64_t t43 = -245LL;
uint8_t x341 = UINT8_MAX;
volatile int32_t x342 = -1;
volatile int8_t x344 = INT8_MIN;
int32_t x345 = -1;
static int32_t x347 = INT32_MAX;
static int64_t t45 = 1LL;
int8_t x351 = INT8_MIN;
volatile int64_t t46 = 220LL;
uint8_t x354 = 60U;
int16_t x355 = -9;
static int16_t x365 = 0;
int32_t x377 = 46;
static uint16_t x389 = UINT16_MAX;
uint16_t x395 = 1U;
volatile int32_t x405 = -93735;
volatile int64_t x406 = -1924337040923LL;
volatile int8_t x407 = INT8_MIN;
volatile int32_t x432 = INT32_MAX;
volatile int16_t x438 = INT16_MAX;
int16_t x439 = INT16_MIN;
int8_t x451 = INT8_MIN;
uint32_t x456 = 30U;
int8_t x458 = INT8_MIN;
int32_t t58 = 1;
static int16_t x465 = 2781;
static uint64_t x467 = 219779LLU;
static volatile uint64_t t59 = 2340756991830LLU;
uint8_t x482 = 10U;
int16_t x485 = 2039;
volatile int16_t x491 = -17;
int64_t x492 = 14569773LL;
int64_t x497 = 128119679LL;
uint64_t t65 = 22507576692032040LLU;
static int16_t x501 = -1;
int8_t x502 = -1;
static uint64_t x506 = UINT64_MAX;
int32_t x508 = INT32_MAX;
int8_t x527 = INT8_MIN;
static int32_t x528 = INT32_MIN;
int8_t x559 = -18;
int8_t x580 = INT8_MAX;
static uint8_t x589 = 96U;
int8_t x600 = 21;
int64_t x607 = -1LL;
volatile int64_t t77 = -7LL;
int16_t x630 = -1;
static int8_t x638 = -26;
int32_t x639 = INT32_MAX;
uint32_t x653 = 79142894U;
int32_t x654 = INT32_MIN;
int16_t x655 = 1;
uint8_t x656 = 5U;
uint32_t t82 = 33U;
int64_t x673 = -79791736641399LL;
static volatile uint16_t x676 = 130U;
static uint8_t x679 = 23U;
static volatile uint32_t x681 = UINT32_MAX;
static volatile int32_t x695 = -9;
volatile int64_t t86 = -3475895338035359LL;
int32_t t87 = -1;
int16_t x721 = INT16_MIN;
uint64_t t90 = 78832482964LLU;
volatile uint64_t t91 = 54113011027104427LLU;
uint64_t x767 = 134LLU;
static int16_t x797 = INT16_MAX;
int8_t x799 = -1;
int8_t x800 = -5;
int16_t x820 = -13;
uint8_t x824 = UINT8_MAX;
volatile uint64_t t96 = 36246409012277LLU;
static int64_t x830 = INT64_MIN;
volatile int16_t x831 = INT16_MAX;
volatile int64_t t98 = 33LL;
uint64_t x833 = 37701063657LLU;


void f0(void) {
	uint8_t x5 = 8U;
	int16_t x6 = 1648;
	volatile uint8_t x7 = 5U;
	int8_t x8 = -1;
	volatile int32_t t0 = 23138531;

	t0 = (x5%(x6/(x7|x8)));

	if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = INT64_MIN;
	int8_t x15 = 1;
	uint16_t x16 = UINT16_MAX;

	t1 = (x13%(x14/(x15|x16)));

	if (t1 != 65535LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	volatile int16_t x19 = INT16_MAX;
	volatile int16_t x20 = INT16_MAX;
	int32_t t2 = -18;

	t2 = (x17%(x18/(x19|x20)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = 4243;
	int64_t x22 = 84928213304LL;
	volatile uint32_t x23 = 364074747U;
	volatile int16_t x24 = 3040;

	t3 = (x21%(x22/(x23|x24)));

	if (t3 != 49LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = INT64_MIN;
	int64_t x26 = 44690082814403LL;
	static int32_t x27 = -522;
	volatile int16_t x28 = 709;
	int64_t t4 = -824LL;

	t4 = (x25%(x26/(x27|x28)));

	if (t4 != -4329641106578LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = UINT16_MAX;
	uint8_t x38 = UINT8_MAX;
	uint8_t x39 = 3U;
	int8_t x40 = -49;
	volatile int32_t t5 = -220;

	t5 = (x37%(x38/(x39|x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = -1;
	static uint8_t x42 = UINT8_MAX;
	int8_t x43 = -1;
	int32_t x44 = INT32_MIN;
	volatile int32_t t6 = 60873585;

	t6 = (x41%(x42/(x43|x44)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 4U;
	static uint16_t x50 = UINT16_MAX;
	volatile int64_t x52 = 540056409981524LL;
	volatile int64_t t7 = 65002545466LL;

	t7 = (x49%(x50/(x51|x52)));

	if (t7 != 4LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x58 = -4881;
	int64_t x59 = 7024LL;
	int64_t t8 = 1376511LL;

	t8 = (x57%(x58/(x59|x60)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = 1;
	int8_t x71 = 0;
	int8_t x72 = 1;

	t9 = (x69%(x70/(x71|x72)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x81 = INT16_MIN;
	volatile uint64_t x82 = UINT64_MAX;
	int16_t x83 = 37;
	int8_t x84 = INT8_MAX;

	t10 = (x81%(x82/(x83|x84)));

	if (t10 != 145249953336262916LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x85 = INT32_MIN;
	static volatile uint32_t x86 = 76308U;
	static uint32_t x87 = 24354U;
	volatile uint32_t t11 = 0U;

	t11 = (x85%(x86/(x87|x88)));

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x97 = 62U;
	static volatile int16_t x98 = INT16_MAX;
	static int32_t x99 = INT32_MAX;
	int32_t x100 = -1;
	volatile int32_t t12 = -244;

	t12 = (x97%(x98/(x99|x100)));

	if (t12 != 62) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x101 = INT32_MIN;
	static volatile int32_t x102 = INT32_MIN;
	int8_t x103 = -15;
	volatile int64_t x104 = INT64_MIN;
	volatile int64_t t13 = -13468398755161LL;

	t13 = (x101%(x102/(x103|x104)));

	if (t13 != -8LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x117 = INT64_MIN;
	static uint16_t x118 = UINT16_MAX;
	static uint16_t x119 = 3U;
	static uint8_t x120 = UINT8_MAX;

	t14 = (x117%(x118/(x119|x120)));

	if (t14 != -129LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x129 = 2U;
	int8_t x130 = -1;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t15 = 0U;

	t15 = (x129%(x130/(x131|x132)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x145 = UINT64_MAX;
	static int16_t x146 = INT16_MIN;
	uint16_t x147 = 5169U;
	int8_t x148 = INT8_MIN;
	uint64_t t16 = 54595135099875000LLU;

	t16 = (x145%(x146/(x147|x148)));

	if (t16 != 51LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x149 = 54033544LLU;
	volatile uint64_t t17 = 2216008108935546739LLU;

	t17 = (x149%(x150/(x151|x152)));

	if (t17 != 19LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x157 = UINT16_MAX;
	static int16_t x158 = -1;
	int16_t x160 = INT16_MAX;
	static uint64_t t18 = 262645LLU;

	t18 = (x157%(x158/(x159|x160)));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x161 = 434308205;
	volatile int8_t x162 = INT8_MIN;
	int8_t x164 = -1;
	int32_t t19 = 57060;

	t19 = (x161%(x162/(x163|x164)));

	if (t19 != 109) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = 207U;
	int16_t x167 = -1;
	int32_t x168 = 10397;
	volatile int32_t t20 = -374423611;

	t20 = (x165%(x166/(x167|x168)));

	if (t20 != -29) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x173 = -1;
	int64_t x174 = -1LL;
	uint32_t x175 = 1301U;
	uint64_t x176 = 344835322903311LLU;
	uint64_t t21 = 1729441402LLU;

	t21 = (x173%(x174/(x175|x176)));

	if (t21 != 47335LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x182 = INT64_MIN;
	uint32_t x183 = 993967U;
	int64_t t22 = 60836118321685947LL;

	t22 = (x181%(x182/(x183|x184)));

	if (t22 != 34LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x190 = -1;
	int16_t x191 = INT16_MIN;
	uint64_t x192 = 793785953LLU;
	uint64_t t23 = 1094285860458420642LLU;

	t23 = (x189%(x190/(x191|x192)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	uint8_t x199 = 28U;
	uint16_t x200 = 101U;
	int64_t t24 = -3861671788933LL;

	t24 = (x197%(x198/(x199|x200)));

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = -13;
	int8_t x204 = INT8_MIN;
	volatile int64_t t25 = -269681543297651962LL;

	t25 = (x201%(x202/(x203|x204)));

	if (t25 != -2561LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x213 = -34296345954976LL;
	int32_t x214 = -194611;
	static int64_t x215 = INT64_MAX;
	volatile int8_t x216 = INT8_MIN;
	int64_t t26 = 11956608295301LL;

	t26 = (x213%(x214/(x215|x216)));

	if (t26 != -188393LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x221 = 132071902368LLU;
	int8_t x222 = -14;
	uint8_t x223 = 105U;

	t27 = (x221%(x222/(x223|x224)));

	if (t27 != 3107998LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x225 = INT32_MIN;
	static int64_t x226 = INT64_MIN;
	static int64_t x227 = INT64_MIN;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t28 = 0LL;

	t28 = (x225%(x226/(x227|x228)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x237 = INT16_MAX;
	uint64_t x238 = 76671LLU;
	uint8_t x239 = 127U;
	static int8_t x240 = 14;
	volatile uint64_t t29 = 87905404970529LLU;

	t29 = (x237%(x238/(x239|x240)));

	if (t29 != 205LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x241 = 604LLU;
	int16_t x242 = INT16_MAX;
	int16_t x243 = INT16_MAX;
	int16_t x244 = 1;
	uint64_t t30 = 4097LLU;

	t30 = (x241%(x242/(x243|x244)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x245 = 1500098;
	int32_t x246 = INT32_MAX;
	uint16_t x247 = 22U;
	int32_t x248 = 0;
	int32_t t31 = 0;

	t31 = (x245%(x246/(x247|x248)));

	if (t31 != 1500098) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x257 = UINT32_MAX;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MAX;
	int32_t x260 = -12369851;
	volatile uint32_t t32 = 12370U;

	t32 = (x257%(x258/(x259|x260)));

	if (t32 != 127U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x269 = UINT8_MAX;
	uint32_t x272 = 452450U;
	static int64_t t33 = 5306797LL;

	t33 = (x269%(x270/(x271|x272)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = -1;
	uint32_t x280 = 6014U;
	volatile uint32_t t34 = 421175U;

	t34 = (x277%(x278/(x279|x280)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x281 = 2U;
	int8_t x282 = INT8_MIN;
	volatile int32_t x283 = -525;
	uint32_t x284 = 14389U;

	t35 = (x281%(x282/(x283|x284)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x285 = -1;
	uint64_t x286 = UINT64_MAX;
	volatile int8_t x288 = -1;
	uint64_t t36 = 113797LLU;

	t36 = (x285%(x286/(x287|x288)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x289 = 22559U;
	static int32_t x290 = INT32_MIN;
	volatile uint16_t x291 = UINT16_MAX;
	int32_t t37 = 16;

	t37 = (x289%(x290/(x291|x292)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x293 = 0U;
	uint16_t x294 = UINT16_MAX;
	volatile int8_t x295 = 2;
	static uint32_t x296 = 24U;
	uint32_t t38 = 4097988U;

	t38 = (x293%(x294/(x295|x296)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = -1;
	static int16_t x299 = INT16_MIN;
	static int64_t x300 = -1LL;

	t39 = (x297%(x298/(x299|x300)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x301 = 3987U;
	int32_t x302 = -1;
	uint64_t x303 = 216147187LLU;
	int32_t x304 = -42296059;
	volatile uint64_t t40 = 99466599544758179LLU;

	t40 = (x301%(x302/(x303|x304)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x305 = 580094145U;
	int32_t x306 = INT32_MIN;
	int16_t x307 = -397;
	int8_t x308 = INT8_MAX;
	volatile uint32_t t41 = 6067471U;

	t41 = (x305%(x306/(x307|x308)));

	if (t41 != 5572608U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x310 = INT64_MIN;
	int8_t x311 = -48;
	uint32_t x312 = 936661684U;
	int64_t t42 = 3LL;

	t42 = (x309%(x310/(x311|x312)));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x313 = UINT32_MAX;
	static volatile int32_t x314 = -1;
	int64_t x315 = -1LL;
	int16_t x316 = INT16_MAX;

	t43 = (x313%(x314/(x315|x316)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x343 = -1;
	volatile int32_t t44 = 90;

	t44 = (x341%(x342/(x343|x344)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x346 = -7204959168009LL;
	volatile int8_t x348 = INT8_MAX;

	t45 = (x345%(x346/(x347|x348)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x349 = INT64_MIN;
	volatile int64_t x350 = 5545209646LL;
	volatile uint16_t x352 = 99U;

	t46 = (x349%(x350/(x351|x352)));

	if (t46 != -4105433LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x353 = 315153976LL;
	int16_t x356 = INT16_MIN;
	volatile int64_t t47 = 369964171219LL;

	t47 = (x353%(x354/(x355|x356)));

	if (t47 != 4LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	static int16_t x368 = INT16_MIN;
	int32_t t48 = 61;

	t48 = (x365%(x366/(x367|x368)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x378 = INT64_MIN;
	uint8_t x379 = 21U;
	int64_t x380 = -394LL;
	volatile int64_t t49 = 88318829584118756LL;

	t49 = (x377%(x378/(x379|x380)));

	if (t49 != 46LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x381 = -12;
	int64_t x382 = -1645LL;
	int16_t x383 = -1;
	static int32_t x384 = 129270;
	volatile int64_t t50 = 0LL;

	t50 = (x381%(x382/(x383|x384)));

	if (t50 != -12LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 537LLU;
	int32_t x392 = INT32_MIN;
	uint64_t t51 = 48933778766LLU;

	t51 = (x389%(x390/(x391|x392)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = 114228713438844LL;
	int8_t x396 = -3;
	volatile int64_t t52 = 15052678999507413LL;

	t52 = (x393%(x394/(x395|x396)));

	if (t52 != -12646473129976LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x408 = UINT16_MAX;
	int64_t t53 = 63251973420913LL;

	t53 = (x405%(x406/(x407|x408)));

	if (t53 != -93735LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x429 = UINT8_MAX;
	static int64_t x430 = -2619682899658109LL;
	volatile uint8_t x431 = 13U;
	int64_t t54 = -40282LL;

	t54 = (x429%(x430/(x431|x432)));

	if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x437 = -1;
	int16_t x440 = 4;
	volatile int32_t t55 = -6808561;

	t55 = (x437%(x438/(x439|x440)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x449 = -715;
	volatile int16_t x450 = INT16_MAX;
	static volatile int16_t x452 = -1;
	volatile int32_t t56 = -1374;

	t56 = (x449%(x450/(x451|x452)));

	if (t56 != -715) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x453 = -991;
	volatile int8_t x454 = -1;
	int16_t x455 = INT16_MIN;
	uint32_t t57 = 709038089U;

	t57 = (x453%(x454/(x455|x456)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x457 = 1;
	int16_t x459 = 39;
	int8_t x460 = -1;

	t58 = (x457%(x458/(x459|x460)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x466 = 1456317LLU;
	static uint8_t x468 = 2U;

	t59 = (x465%(x466/(x467|x468)));

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x473 = INT16_MIN;
	int64_t x474 = INT64_MIN;
	volatile uint32_t x475 = UINT32_MAX;
	int64_t x476 = INT64_MIN;
	volatile int64_t t60 = 10LL;

	t60 = (x473%(x474/(x475|x476)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x481 = 53U;
	static int16_t x483 = -1;
	volatile uint16_t x484 = UINT16_MAX;
	volatile int32_t t61 = 231;

	t61 = (x481%(x482/(x483|x484)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x486 = 492;
	int64_t x487 = -1LL;
	uint16_t x488 = 86U;
	volatile int64_t t62 = -175670137684230688LL;

	t62 = (x485%(x486/(x487|x488)));

	if (t62 != 71LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x489 = INT8_MIN;
	uint64_t x490 = UINT64_MAX;
	uint64_t t63 = 20697971277497204LLU;

	t63 = (x489%(x490/(x491|x492)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x493 = INT16_MAX;
	volatile uint16_t x494 = UINT16_MAX;
	int64_t x495 = -118713LL;
	int32_t x496 = INT32_MAX;
	int64_t t64 = 17620772025945LL;

	t64 = (x493%(x494/(x495|x496)));

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x498 = -39;
	uint64_t x499 = 230LLU;
	int8_t x500 = INT8_MAX;

	t65 = (x497%(x498/(x499|x500)));

	if (t65 != 128119679LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x503 = -1;
	int32_t x504 = INT32_MIN;
	static volatile int32_t t66 = -141494;

	t66 = (x501%(x502/(x503|x504)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x505 = INT32_MIN;
	int8_t x507 = -1;
	volatile uint64_t t67 = 2949272603099LLU;

	t67 = (x505%(x506/(x507|x508)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x521 = -1;
	volatile int64_t x522 = 848240439LL;
	static volatile uint8_t x523 = UINT8_MAX;
	volatile int8_t x524 = INT8_MIN;
	int64_t t68 = -17260348208563LL;

	t68 = (x521%(x522/(x523|x524)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x525 = UINT64_MAX;
	int32_t x526 = INT32_MIN;
	volatile uint64_t t69 = 2110426095127030235LLU;

	t69 = (x525%(x526/(x527|x528)));

	if (t69 != 16777215LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x529 = INT64_MIN;
	uint64_t x530 = UINT64_MAX;
	int8_t x531 = 0;
	int32_t x532 = -1065056;
	volatile uint64_t t70 = 259238552LLU;

	t70 = (x529%(x530/(x531|x532)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x541 = INT64_MIN;
	static int32_t x542 = INT32_MIN;
	int16_t x543 = 21;
	int16_t x544 = INT16_MIN;
	int64_t t71 = -23LL;

	t71 = (x541%(x542/(x543|x544)));

	if (t71 != -47554LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x557 = UINT32_MAX;
	int64_t x558 = -401443825880LL;
	uint16_t x560 = 9002U;
	static volatile int64_t t72 = -1969851993854924LL;

	t72 = (x557%(x558/(x559|x560)));

	if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x577 = -1;
	int32_t x578 = 178603248;
	static uint32_t x579 = 49U;
	volatile uint32_t t73 = 1280U;

	t73 = (x577%(x578/(x579|x580)));

	if (t73 != 53799U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x581 = INT32_MIN;
	int32_t x582 = -1;
	static int16_t x583 = INT16_MIN;
	static volatile uint64_t x584 = UINT64_MAX;
	volatile uint64_t t74 = 4485870154035LLU;

	t74 = (x581%(x582/(x583|x584)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x590 = INT32_MIN;
	uint64_t x591 = 1080496676321LLU;
	volatile uint8_t x592 = 11U;
	uint64_t t75 = 1214LLU;

	t75 = (x589%(x590/(x591|x592)));

	if (t75 != 96LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x597 = 6U;
	int32_t x598 = 1900;
	volatile uint16_t x599 = 29U;
	volatile int32_t t76 = 526458133;

	t76 = (x597%(x598/(x599|x600)));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x605 = INT64_MIN;
	int8_t x606 = -54;
	static uint32_t x608 = UINT32_MAX;

	t77 = (x605%(x606/(x607|x608)));

	if (t77 != -26LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x625 = 48103831135801LLU;
	uint16_t x626 = UINT16_MAX;
	uint16_t x627 = 70U;
	int64_t x628 = -2139LL;
	uint64_t t78 = 23LLU;

	t78 = (x625%(x626/(x627|x628)));

	if (t78 != 48103831135801LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x629 = 279210789U;
	uint32_t x631 = 117U;
	int16_t x632 = 87;
	volatile uint32_t t79 = 233U;

	t79 = (x629%(x630/(x631|x632)));

	if (t79 != 26565655U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x637 = 53U;
	int8_t x640 = -1;
	volatile uint32_t t80 = 7626913U;

	t80 = (x637%(x638/(x639|x640)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x641 = INT64_MIN;
	static int8_t x642 = -1;
	int16_t x643 = INT16_MAX;
	int16_t x644 = -1;
	volatile int64_t t81 = 53257980255127421LL;

	t81 = (x641%(x642/(x643|x644)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {


	t82 = (x653%(x654/(x655|x656)));

	if (t82 != 79142894U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x674 = 967068691428LLU;
	static uint16_t x675 = UINT16_MAX;
	volatile uint64_t t83 = 2949LLU;

	t83 = (x673%(x674/(x675|x676)));

	if (t83 != 9023677LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x677 = 24390971785LLU;
	uint64_t x678 = 64132955690594LLU;
	static uint32_t x680 = 3073U;
	uint64_t t84 = 182821599473686750LLU;

	t84 = (x677%(x678/(x679|x680)));

	if (t84 != 3669499834LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x682 = -344498172;
	int16_t x683 = -1;
	static int16_t x684 = INT16_MAX;
	static uint32_t t85 = 13U;

	t85 = (x681%(x682/(x683|x684)));

	if (t85 != 160989231U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x693 = 1;
	int64_t x694 = -1LL;
	static volatile uint16_t x696 = 4249U;

	t86 = (x693%(x694/(x695|x696)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x705 = -1;
	uint16_t x706 = UINT16_MAX;
	int16_t x707 = INT16_MIN;
	volatile int16_t x708 = INT16_MAX;

	t87 = (x705%(x706/(x707|x708)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x722 = -1;
	volatile int64_t x723 = -1LL;
	uint64_t x724 = UINT64_MAX;
	static volatile uint64_t t88 = 980314616447LLU;

	t88 = (x721%(x722/(x723|x724)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x737 = INT16_MIN;
	int16_t x738 = -1;
	uint32_t x739 = 0U;
	static uint16_t x740 = 54U;
	volatile uint32_t t89 = 1103U;

	t89 = (x737%(x738/(x739|x740)));

	if (t89 != 79503685U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x741 = 174118372530LLU;
	volatile int16_t x742 = INT16_MIN;
	volatile int64_t x743 = INT64_MIN;
	int16_t x744 = INT16_MIN;

	t90 = (x741%(x742/(x743|x744)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x749 = 1U;
	int8_t x750 = INT8_MIN;
	static volatile uint64_t x751 = 52363020836267475LLU;
	volatile int8_t x752 = 0;

	t91 = (x749%(x750/(x751|x752)));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x765 = -1LL;
	int16_t x766 = INT16_MIN;
	static uint32_t x768 = UINT32_MAX;
	volatile uint64_t t92 = 156358217304515340LLU;

	t92 = (x765%(x766/(x767|x768)));

	if (t92 != 4294967295LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x789 = INT8_MAX;
	int64_t x790 = INT64_MIN;
	uint32_t x791 = 29U;
	static int16_t x792 = -1;
	int64_t t93 = 93078951449LL;

	t93 = (x789%(x790/(x791|x792)));

	if (t93 != 127LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x798 = INT16_MIN;
	static int32_t t94 = -40759;

	t94 = (x797%(x798/(x799|x800)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x817 = 57U;
	int8_t x818 = INT8_MAX;
	int32_t x819 = INT32_MAX;
	int32_t t95 = -77;

	t95 = (x817%(x818/(x819|x820)));

	if (t95 != 57) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x821 = -121533510;
	int64_t x822 = -66179258082LL;
	uint64_t x823 = 51351744221519LLU;

	t96 = (x821%(x822/(x823|x824)));

	if (t96 != 243778LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x825 = 0U;
	volatile int16_t x826 = INT16_MIN;
	int16_t x827 = INT16_MIN;
	int64_t x828 = INT64_MIN;
	volatile int64_t t97 = 59011LL;

	t97 = (x825%(x826/(x827|x828)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x829 = INT64_MAX;
	static uint32_t x832 = 61U;

	t98 = (x829%(x830/(x831|x832)));

	if (t98 != 7LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x834 = INT64_MIN;
	int16_t x835 = INT16_MIN;
	uint8_t x836 = 38U;
	uint64_t t99 = 31661LLU;

	t99 = (x833%(x834/(x835|x836)));

	if (t99 != 37701063657LLU) { NG(); } else { ; }
	
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

