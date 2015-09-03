#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x30 = -1LL;
int16_t x31 = INT16_MIN;
volatile int16_t x33 = INT16_MIN;
uint32_t x34 = UINT32_MAX;
static uint16_t x35 = 472U;
uint32_t t3 = 1373U;
volatile int8_t x44 = -1;
static uint64_t t5 = 2761110LLU;
uint16_t x87 = 93U;
static int8_t x88 = INT8_MAX;
static volatile int32_t t8 = -7;
int8_t x113 = INT8_MIN;
int16_t x116 = 113;
volatile uint32_t x119 = 2678U;
uint64_t x139 = 484257748352763358LLU;
uint8_t x144 = 5U;
static int8_t x154 = INT8_MAX;
volatile int8_t x156 = -1;
static int32_t t15 = 90;
uint16_t x176 = 4U;
uint8_t x179 = 1U;
volatile uint16_t x180 = UINT16_MAX;
int16_t x191 = -1;
uint16_t x192 = UINT16_MAX;
uint64_t t19 = 108529LLU;
static int64_t x193 = -1LL;
int8_t x196 = 29;
int64_t t20 = 14LL;
uint8_t x199 = 2U;
int32_t x202 = INT32_MAX;
volatile int64_t x204 = INT64_MAX;
volatile int32_t t22 = INT32_MAX;
static volatile int8_t x210 = -1;
int32_t x211 = 8;
static volatile int16_t x226 = INT16_MIN;
int16_t x227 = INT16_MIN;
static volatile uint32_t x249 = UINT32_MAX;
int32_t x250 = INT32_MIN;
int16_t x252 = 2530;
int64_t t28 = -540421LL;
volatile int32_t t29 = 157;
int16_t x269 = -15;
uint16_t x272 = UINT16_MAX;
uint32_t t32 = 1034180U;
static int32_t x290 = 1;
volatile int16_t x306 = -247;
static int8_t x313 = -1;
int64_t x316 = 13801656045739LL;
int32_t t38 = 1;
static volatile uint16_t x369 = UINT16_MAX;
static int8_t x377 = INT8_MAX;
int32_t t41 = -1;
static uint16_t x381 = 3458U;
volatile int8_t x382 = 1;
volatile int64_t x383 = 235LL;
int32_t t47 = -23271098;
uint32_t x433 = 38471208U;
uint64_t x434 = 3837563636LLU;
volatile uint64_t t48 = 596271LLU;
static uint8_t x440 = UINT8_MAX;
int64_t x447 = -39429871605960LL;
uint32_t x462 = 1231894313U;
static int16_t x470 = -172;
int32_t t52 = -44915457;
static int32_t x476 = 19876;
int8_t x481 = 1;
int16_t x529 = INT16_MIN;
uint32_t x530 = 121423777U;
volatile int8_t x533 = -1;
uint32_t x538 = 187281337U;
uint32_t x540 = 1524271U;
volatile uint16_t x543 = 3U;
uint16_t x544 = UINT16_MAX;
int32_t x580 = -431773;
static uint32_t x585 = 13098U;
static volatile uint32_t t65 = 14U;
uint8_t x596 = 0U;
uint16_t x598 = UINT16_MAX;
volatile uint64_t t67 = 850851299722483LLU;
int32_t t68 = -1;
int32_t x617 = -155;
int8_t x627 = 0;
int32_t x671 = INT32_MIN;
uint64_t x685 = 2138671146LLU;
static uint16_t x702 = 0U;
volatile int32_t t74 = -13587828;
int16_t x710 = INT16_MIN;
int64_t x713 = -1LL;
uint16_t x715 = 215U;
int16_t x722 = INT16_MIN;
static uint16_t x724 = UINT16_MAX;
volatile int32_t t77 = -31;
static int8_t x726 = INT8_MAX;
volatile int32_t t78 = 1;
static int32_t x729 = -1;
static volatile int8_t x731 = 4;
volatile uint32_t t82 = 1U;
int16_t x775 = INT16_MIN;
int16_t x786 = INT16_MAX;
static uint8_t x787 = UINT8_MAX;
uint16_t x788 = UINT16_MAX;
int8_t x793 = -2;
uint32_t x794 = 11U;
int8_t x795 = INT8_MIN;
uint8_t x802 = UINT8_MAX;
uint8_t x820 = 0U;
static int8_t x826 = INT8_MIN;
volatile int32_t t89 = 1025396;
int8_t x835 = 15;
uint16_t x836 = 68U;
uint8_t x837 = 0U;
uint64_t x838 = 2636217015158LLU;
volatile uint64_t t91 = 68531256604LLU;
int32_t x843 = -1;
static int16_t x889 = -1;


void f0(void) {
	uint8_t x5 = 124U;
	static int64_t x6 = -1LL;
	int8_t x7 = -1;
	volatile int32_t x8 = -1;
	int64_t t0 = -29525539LL;

	t0 = (x5*(x6/(x7<=x8)));

	if (t0 != -124LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 7552U;
	uint8_t x10 = 13U;
	int8_t x11 = INT8_MIN;
	static int64_t x12 = INT64_MAX;
	volatile int32_t t1 = 3;

	t1 = (x9*(x10/(x11<=x12)));

	if (t1 != 98176) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int16_t x32 = -1;
	int64_t t2 = -177404136304LL;

	t2 = (x29*(x30/(x31<=x32)));

	if (t2 != -255LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x36 = UINT64_MAX;

	t3 = (x33*(x34/(x35<=x36)));

	if (t3 != 32768U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x41 = -1;
	uint32_t x42 = 11U;
	volatile uint32_t x43 = 803U;
	uint32_t t4 = 22258445U;

	t4 = (x41*(x42/(x43<=x44)));

	if (t4 != 4294967285U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x49 = UINT64_MAX;
	static int32_t x50 = INT32_MAX;
	volatile int8_t x51 = INT8_MIN;
	int32_t x52 = 0;

	t5 = (x49*(x50/(x51<=x52)));

	if (t5 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int8_t x54 = 11;
	volatile int8_t x55 = -1;
	uint16_t x56 = 167U;
	volatile uint64_t t6 = 215935920LLU;

	t6 = (x53*(x54/(x55<=x56)));

	if (t6 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x85 = 1U;
	static volatile uint32_t x86 = UINT32_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (x85*(x86/(x87<=x88)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = -1;
	int8_t x91 = 0;
	uint8_t x92 = 2U;

	t8 = (x89*(x90/(x91<=x92)));

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x97 = INT16_MIN;
	uint8_t x98 = 46U;
	int64_t x99 = -1LL;
	int8_t x100 = INT8_MAX;
	static volatile int32_t t9 = 3301126;

	t9 = (x97*(x98/(x99<=x100)));

	if (t9 != -1507328) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x114 = 3U;
	int64_t x115 = INT64_MIN;
	int32_t t10 = -728;

	t10 = (x113*(x114/(x115<=x116)));

	if (t10 != -384) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x117 = INT8_MIN;
	uint8_t x118 = 120U;
	int32_t x120 = -2782;
	int32_t t11 = -527;

	t11 = (x117*(x118/(x119<=x120)));

	if (t11 != -15360) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x133 = UINT16_MAX;
	volatile uint8_t x134 = UINT8_MAX;
	int32_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	int32_t t12 = 3486;

	t12 = (x133*(x134/(x135<=x136)));

	if (t12 != 16711425) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = 270244710827LL;
	static int8_t x140 = INT8_MIN;
	int64_t t13 = -6846096386LL;

	t13 = (x137*(x138/(x139<=x140)));

	if (t13 != -34591322985856LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x141 = -1;
	uint16_t x142 = 9U;
	uint8_t x143 = 1U;
	volatile int32_t t14 = -40501824;

	t14 = (x141*(x142/(x143<=x144)));

	if (t14 != -9) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x153 = INT16_MIN;
	int8_t x155 = INT8_MIN;

	t15 = (x153*(x154/(x155<=x156)));

	if (t15 != -4161536) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x157 = -29751263524411856LL;
	static volatile uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MAX;
	volatile uint64_t t16 = 893235691LLU;

	t16 = (x157*(x158/(x159<=x160)));

	if (t16 != 29751263524411856LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x173 = 9U;
	uint64_t x174 = 1960987614404266LLU;
	static int8_t x175 = -3;
	uint64_t t17 = 52849243LLU;

	t17 = (x173*(x174/(x175<=x176)));

	if (t17 != 17648888529638394LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MIN;
	static volatile int32_t t18 = -91350081;

	t18 = (x177*(x178/(x179<=x180)));

	if (t18 != -8355840) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 4401813LLU;

	t19 = (x189*(x190/(x191<=x192)));

	if (t19 != 18446744073705149803LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x194 = -1;
	volatile int8_t x195 = INT8_MIN;

	t20 = (x193*(x194/(x195<=x196)));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x197 = 80426901075141011LLU;
	uint32_t x198 = 1U;
	static volatile int16_t x200 = 328;
	uint64_t t21 = 7046LLU;

	t21 = (x197*(x198/(x199<=x200)));

	if (t21 != 80426901075141011LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x201 = 1;
	int16_t x203 = INT16_MIN;

	t22 = (x201*(x202/(x203<=x204)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x209 = -1166270171864LL;
	uint32_t x212 = 1127223706U;
	static volatile int64_t t23 = -241LL;

	t23 = (x209*(x210/(x211<=x212)));

	if (t23 != 1166270171864LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x225 = INT8_MAX;
	volatile int64_t x228 = 72640919850LL;
	int32_t t24 = 525793024;

	t24 = (x225*(x226/(x227<=x228)));

	if (t24 != -4161536) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x241 = -2;
	int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	int32_t t25 = 837;

	t25 = (x241*(x242/(x243<=x244)));

	if (t25 != 65536) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x245 = UINT64_MAX;
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = -1LL;
	uint32_t x248 = UINT32_MAX;
	static uint64_t t26 = 11597792017LLU;

	t26 = (x245*(x246/(x247<=x248)));

	if (t26 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x251 = 0U;
	static uint32_t t27 = 1890U;

	t27 = (x249*(x250/(x251<=x252)));

	if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x257 = 5U;
	volatile int64_t x258 = 39325039562LL;
	uint64_t x259 = 1043440109455496LLU;
	volatile int16_t x260 = INT16_MIN;

	t28 = (x257*(x258/(x259<=x260)));

	if (t28 != 196625197810LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x261 = -1;
	int32_t x262 = 119;
	uint16_t x263 = 3766U;
	volatile uint32_t x264 = 8382332U;

	t29 = (x261*(x262/(x263<=x264)));

	if (t29 != -119) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x265 = 1LL;
	volatile int64_t x266 = INT64_MIN;
	int16_t x267 = -58;
	uint8_t x268 = 1U;
	static volatile int64_t t30 = INT64_MIN;

	t30 = (x265*(x266/(x267<=x268)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x270 = 2U;
	static int8_t x271 = 0;
	int32_t t31 = -47706182;

	t31 = (x269*(x270/(x271<=x272)));

	if (t31 != -30) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x281 = INT32_MIN;
	uint32_t x282 = UINT32_MAX;
	uint8_t x283 = UINT8_MAX;
	uint64_t x284 = 187627007370502LLU;

	t32 = (x281*(x282/(x283<=x284)));

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x289 = 78;
	int16_t x291 = 3969;
	int32_t x292 = INT32_MAX;
	int32_t t33 = -19373;

	t33 = (x289*(x290/(x291<=x292)));

	if (t33 != 78) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x293 = -1;
	volatile uint8_t x294 = UINT8_MAX;
	int32_t x295 = -1;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t34 = -23639388;

	t34 = (x293*(x294/(x295<=x296)));

	if (t34 != -255) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x305 = UINT64_MAX;
	int64_t x307 = 1LL;
	volatile uint64_t x308 = UINT64_MAX;
	volatile uint64_t t35 = 1604596318LLU;

	t35 = (x305*(x306/(x307<=x308)));

	if (t35 != 247LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x314 = 3199537U;
	volatile int64_t x315 = -1LL;
	volatile uint32_t t36 = 4132575U;

	t36 = (x313*(x314/(x315<=x316)));

	if (t36 != 4291767759U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x321 = -148;
	int64_t x322 = -8195387503595936LL;
	uint32_t x323 = 2512U;
	static int16_t x324 = INT16_MIN;
	volatile int64_t t37 = 1LL;

	t37 = (x321*(x322/(x323<=x324)));

	if (t37 != 1212917350532198528LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x349 = -4;
	int32_t x350 = -1;
	int16_t x351 = -1;
	int16_t x352 = 233;

	t38 = (x349*(x350/(x351<=x352)));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x353 = 1U;
	int16_t x354 = INT16_MIN;
	volatile int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MAX;
	static volatile uint32_t t39 = 6U;

	t39 = (x353*(x354/(x355<=x356)));

	if (t39 != 4294934528U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x370 = -1;
	volatile uint16_t x371 = 3042U;
	uint32_t x372 = UINT32_MAX;
	int32_t t40 = 347;

	t40 = (x369*(x370/(x371<=x372)));

	if (t40 != -65535) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x378 = -1;
	volatile int16_t x379 = 0;
	int8_t x380 = 5;

	t41 = (x377*(x378/(x379<=x380)));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x384 = UINT8_MAX;
	int32_t t42 = 241227931;

	t42 = (x381*(x382/(x383<=x384)));

	if (t42 != 3458) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x385 = INT64_MIN;
	uint8_t x386 = 0U;
	uint16_t x387 = UINT16_MAX;
	static uint32_t x388 = 4135431U;
	int64_t t43 = 1LL;

	t43 = (x385*(x386/(x387<=x388)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x389 = -118725LL;
	int64_t x390 = 3LL;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = UINT64_MAX;
	int64_t t44 = 13151792604215LL;

	t44 = (x389*(x390/(x391<=x392)));

	if (t44 != -356175LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x401 = UINT16_MAX;
	uint8_t x402 = 7U;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t45 = -61480;

	t45 = (x401*(x402/(x403<=x404)));

	if (t45 != 458745) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x409 = 2U;
	int32_t x410 = -9580713;
	volatile int8_t x411 = INT8_MIN;
	uint8_t x412 = 29U;
	volatile int32_t t46 = -2911;

	t46 = (x409*(x410/(x411<=x412)));

	if (t46 != -19161426) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x425 = INT32_MAX;
	volatile int16_t x426 = -1;
	static volatile uint64_t x427 = 7608738196662801590LLU;
	int64_t x428 = INT64_MAX;

	t47 = (x425*(x426/(x427<=x428)));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x435 = INT8_MIN;
	int8_t x436 = 11;

	t48 = (x433*(x434/(x435<=x436)));

	if (t48 != 147635708853792288LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x437 = 14U;
	uint64_t x438 = UINT64_MAX;
	int16_t x439 = -9;
	volatile uint64_t t49 = 1811069000LLU;

	t49 = (x437*(x438/(x439<=x440)));

	if (t49 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x445 = -1LL;
	static uint8_t x446 = 0U;
	volatile int64_t x448 = -1LL;
	int64_t t50 = -1955876024LL;

	t50 = (x445*(x446/(x447<=x448)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x461 = 2;
	int32_t x463 = INT32_MIN;
	volatile int32_t x464 = INT32_MIN;
	static volatile uint32_t t51 = 11U;

	t51 = (x461*(x462/(x463<=x464)));

	if (t51 != 2463788626U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x469 = INT16_MIN;
	int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MIN;

	t52 = (x469*(x470/(x471<=x472)));

	if (t52 != 5636096) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x473 = 52LLU;
	volatile uint64_t x474 = 113171577LLU;
	int64_t x475 = -1LL;
	volatile uint64_t t53 = 50LLU;

	t53 = (x473*(x474/(x475<=x476)));

	if (t53 != 5884922004LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x477 = -112;
	int16_t x478 = -1;
	volatile int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MAX;
	static int32_t t54 = -30;

	t54 = (x477*(x478/(x479<=x480)));

	if (t54 != 112) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x482 = 1470268886LLU;
	volatile int8_t x483 = INT8_MIN;
	uint8_t x484 = UINT8_MAX;
	volatile uint64_t t55 = 26782809LLU;

	t55 = (x481*(x482/(x483<=x484)));

	if (t55 != 1470268886LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x493 = 31U;
	uint32_t x494 = 15633562U;
	uint16_t x495 = 244U;
	int64_t x496 = 8603LL;
	volatile uint32_t t56 = 7444U;

	t56 = (x493*(x494/(x495<=x496)));

	if (t56 != 484640422U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x497 = 9698U;
	int8_t x498 = INT8_MIN;
	int64_t x499 = -1LL;
	volatile uint8_t x500 = 14U;
	static int32_t t57 = 162;

	t57 = (x497*(x498/(x499<=x500)));

	if (t57 != -1241344) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x509 = 80U;
	int8_t x510 = INT8_MIN;
	uint32_t x511 = 3334U;
	int64_t x512 = INT64_MAX;
	volatile int32_t t58 = -59614496;

	t58 = (x509*(x510/(x511<=x512)));

	if (t58 != -10240) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x531 = INT64_MIN;
	uint32_t x532 = 440381056U;
	static uint32_t t59 = 333U;

	t59 = (x529*(x530/(x531<=x532)));

	if (t59 != 2620358656U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x534 = INT16_MAX;
	volatile int16_t x535 = -32;
	int64_t x536 = INT64_MAX;
	static int32_t t60 = -13;

	t60 = (x533*(x534/(x535<=x536)));

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x537 = INT8_MIN;
	uint8_t x539 = UINT8_MAX;
	uint32_t t61 = 290U;

	t61 = (x537*(x538/(x539<=x540)));

	if (t61 != 1797792640U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x541 = -1LL;
	uint32_t x542 = UINT32_MAX;
	int64_t t62 = -607313990314LL;

	t62 = (x541*(x542/(x543<=x544)));

	if (t62 != -4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x561 = -1;
	static volatile uint64_t x562 = 4253538244672619950LLU;
	int8_t x563 = 1;
	volatile int64_t x564 = 776811LL;
	volatile uint64_t t63 = 18546LLU;

	t63 = (x561*(x562/(x563<=x564)));

	if (t63 != 14193205829036931666LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x577 = -6;
	uint32_t x578 = UINT32_MAX;
	static uint32_t x579 = 17266366U;
	volatile uint32_t t64 = 213534U;

	t64 = (x577*(x578/(x579<=x580)));

	if (t64 != 6U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x586 = 110U;
	int16_t x587 = 175;
	static int64_t x588 = INT64_MAX;

	t65 = (x585*(x586/(x587<=x588)));

	if (t65 != 1440780U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x593 = 207466157022511659LLU;
	int16_t x594 = -1;
	int64_t x595 = INT64_MIN;
	volatile uint64_t t66 = 258795933323LLU;

	t66 = (x593*(x594/(x595<=x596)));

	if (t66 != 18239277916687039957LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x597 = 44693914067704840LLU;
	int8_t x599 = INT8_MIN;
	int16_t x600 = INT16_MAX;

	t67 = (x597*(x598/(x599<=x600)));

	if (t67 != 14430094780927534072LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x605 = INT8_MIN;
	int16_t x606 = INT16_MIN;
	int32_t x607 = INT32_MIN;
	static int32_t x608 = -38754216;

	t68 = (x605*(x606/(x607<=x608)));

	if (t68 != 4194304) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x618 = -1;
	uint64_t x619 = 15966104447276LLU;
	int64_t x620 = INT64_MAX;
	volatile int32_t t69 = -27;

	t69 = (x617*(x618/(x619<=x620)));

	if (t69 != 155) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x625 = 117856264;
	int64_t x626 = -1LL;
	uint32_t x628 = 4353U;
	int64_t t70 = 61816936LL;

	t70 = (x625*(x626/(x627<=x628)));

	if (t70 != -117856264LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x669 = 1;
	uint64_t x670 = 1815LLU;
	static int64_t x672 = -1LL;
	uint64_t t71 = 4197222024LLU;

	t71 = (x669*(x670/(x671<=x672)));

	if (t71 != 1815LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x686 = INT16_MIN;
	int64_t x687 = INT64_MIN;
	uint8_t x688 = 67U;
	volatile uint64_t t72 = 255LLU;

	t72 = (x685*(x686/(x687<=x688)));

	if (t72 != 18446673993733439488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x689 = INT16_MAX;
	int8_t x690 = 3;
	int16_t x691 = -16344;
	volatile int32_t x692 = 409662659;
	volatile int32_t t73 = 0;

	t73 = (x689*(x690/(x691<=x692)));

	if (t73 != 98301) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x701 = 0U;
	int32_t x703 = INT32_MIN;
	int32_t x704 = INT32_MAX;

	t74 = (x701*(x702/(x703<=x704)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x709 = 31LLU;
	uint8_t x711 = UINT8_MAX;
	uint32_t x712 = UINT32_MAX;
	uint64_t t75 = 0LLU;

	t75 = (x709*(x710/(x711<=x712)));

	if (t75 != 18446744073708535808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x714 = 14082582678514337LLU;
	uint8_t x716 = UINT8_MAX;
	volatile uint64_t t76 = 211463164LLU;

	t76 = (x713*(x714/(x715<=x716)));

	if (t76 != 18432661491031037279LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x721 = -3721;
	int16_t x723 = INT16_MIN;

	t77 = (x721*(x722/(x723<=x724)));

	if (t77 != 121929728) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x725 = 7U;
	int64_t x727 = INT64_MIN;
	uint32_t x728 = 9868U;

	t78 = (x725*(x726/(x727<=x728)));

	if (t78 != 889) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x730 = -1;
	uint8_t x732 = 25U;
	volatile int32_t t79 = -74;

	t79 = (x729*(x730/(x731<=x732)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x733 = INT16_MAX;
	uint32_t x734 = UINT32_MAX;
	int16_t x735 = -3565;
	int8_t x736 = INT8_MAX;
	uint32_t t80 = 12038U;

	t80 = (x733*(x734/(x735<=x736)));

	if (t80 != 4294934529U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x737 = INT16_MAX;
	int8_t x738 = INT8_MIN;
	int32_t x739 = INT32_MIN;
	volatile int8_t x740 = -1;
	static volatile int32_t t81 = 6129932;

	t81 = (x737*(x738/(x739<=x740)));

	if (t81 != -4194176) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x765 = 54611U;
	static int32_t x766 = INT32_MAX;
	static uint8_t x767 = 11U;
	uint64_t x768 = UINT64_MAX;

	t82 = (x765*(x766/(x767<=x768)));

	if (t82 != 2147429037U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x773 = 5U;
	int16_t x774 = INT16_MIN;
	volatile uint16_t x776 = UINT16_MAX;
	volatile int32_t t83 = 854;

	t83 = (x773*(x774/(x775<=x776)));

	if (t83 != -163840) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x785 = 21337764LL;
	static int64_t t84 = -2000353452215958LL;

	t84 = (x785*(x786/(x787<=x788)));

	if (t84 != 699174512988LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x796 = -1;
	volatile uint32_t t85 = 57314999U;

	t85 = (x793*(x794/(x795<=x796)));

	if (t85 != 4294967274U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x801 = -8;
	int32_t x803 = -19556804;
	static int16_t x804 = 2;
	volatile int32_t t86 = 2;

	t86 = (x801*(x802/(x803<=x804)));

	if (t86 != -2040) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x813 = INT32_MIN;
	static uint32_t x814 = UINT32_MAX;
	uint16_t x815 = 28384U;
	uint64_t x816 = 1197326346LLU;
	volatile uint32_t t87 = 2269U;

	t87 = (x813*(x814/(x815<=x816)));

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x817 = -1;
	static uint32_t x818 = 46361U;
	volatile int8_t x819 = -1;
	static volatile uint32_t t88 = 4940956U;

	t88 = (x817*(x818/(x819<=x820)));

	if (t88 != 4294920935U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x825 = UINT16_MAX;
	volatile int32_t x827 = 310;
	uint16_t x828 = UINT16_MAX;

	t89 = (x825*(x826/(x827<=x828)));

	if (t89 != -8388480) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x833 = 10U;
	uint32_t x834 = UINT32_MAX;
	uint32_t t90 = 2665835U;

	t90 = (x833*(x834/(x835<=x836)));

	if (t90 != 4294967286U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x839 = 13LLU;
	int16_t x840 = -1;

	t91 = (x837*(x838/(x839<=x840)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x841 = 62297136001LLU;
	int32_t x842 = -361224;
	int64_t x844 = 1314LL;
	static volatile uint64_t t92 = 449948LLU;

	t92 = (x841*(x842/(x843<=x844)));

	if (t92 != 18424240853054726392LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x849 = INT16_MAX;
	int16_t x850 = INT16_MIN;
	int32_t x851 = INT32_MIN;
	volatile uint32_t x852 = UINT32_MAX;
	int32_t t93 = 13;

	t93 = (x849*(x850/(x851<=x852)));

	if (t93 != -1073709056) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x853 = -1;
	int16_t x854 = INT16_MIN;
	volatile int32_t x855 = INT32_MIN;
	uint16_t x856 = 63U;
	int32_t t94 = -7878;

	t94 = (x853*(x854/(x855<=x856)));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x877 = INT16_MAX;
	static volatile uint64_t x878 = UINT64_MAX;
	int64_t x879 = -1599004LL;
	uint16_t x880 = 84U;
	volatile uint64_t t95 = 999169140178LLU;

	t95 = (x877*(x878/(x879<=x880)));

	if (t95 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x885 = -362;
	static volatile int16_t x886 = INT16_MAX;
	static volatile uint32_t x887 = 31U;
	static int64_t x888 = 797LL;
	volatile int32_t t96 = 2238585;

	t96 = (x885*(x886/(x887<=x888)));

	if (t96 != -11861654) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x890 = -62399681LL;
	uint16_t x891 = 3108U;
	uint16_t x892 = UINT16_MAX;
	volatile int64_t t97 = 30503182189748LL;

	t97 = (x889*(x890/(x891<=x892)));

	if (t97 != 62399681LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x897 = -1;
	int64_t x898 = -1LL;
	int32_t x899 = INT32_MIN;
	static uint8_t x900 = UINT8_MAX;
	int64_t t98 = 6545754LL;

	t98 = (x897*(x898/(x899<=x900)));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x901 = UINT64_MAX;
	int8_t x902 = INT8_MIN;
	int16_t x903 = INT16_MIN;
	static int16_t x904 = INT16_MIN;
	volatile uint64_t t99 = 83186165112893219LLU;

	t99 = (x901*(x902/(x903<=x904)));

	if (t99 != 128LLU) { NG(); } else { ; }
	
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

