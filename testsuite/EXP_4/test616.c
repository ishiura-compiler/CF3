#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x2 = 1011U;
int16_t x10 = -30;
int16_t x11 = INT16_MIN;
static int32_t x12 = INT32_MIN;
int32_t x33 = INT32_MIN;
static volatile int8_t x52 = INT8_MAX;
static uint16_t x65 = UINT16_MAX;
int32_t t6 = -35;
uint8_t x78 = UINT8_MAX;
int32_t t7 = 3834;
volatile int32_t x98 = INT32_MIN;
uint8_t x125 = 53U;
volatile int32_t t12 = 32889;
volatile uint32_t t15 = 160251407U;
static int32_t x179 = -1;
volatile int32_t t17 = 394126975;
int8_t x231 = INT8_MAX;
uint16_t x238 = 1U;
uint32_t x257 = 4434563U;
static volatile uint32_t t23 = 4300758U;
int8_t x262 = -1;
uint32_t t24 = 1858091U;
uint16_t x268 = UINT16_MAX;
volatile int64_t x270 = INT64_MIN;
int32_t x278 = -435;
uint16_t x287 = UINT16_MAX;
static int16_t x289 = 197;
int32_t x305 = 1;
int16_t x308 = 2466;
int64_t t33 = 37625410110LL;
int16_t x329 = INT16_MAX;
uint8_t x332 = 28U;
int16_t x345 = -1;
volatile uint8_t x349 = 94U;
volatile uint64_t x350 = 473283LLU;
int8_t x351 = -1;
volatile int32_t t38 = -657029731;
int32_t x370 = -672509328;
uint8_t x372 = UINT8_MAX;
volatile int32_t t41 = -64563822;
volatile int32_t t42 = -315709619;
static uint32_t x381 = 2U;
int32_t x383 = -1;
int32_t x412 = -69;
int32_t t45 = 3846675;
int64_t x442 = -147746599178652LL;
volatile int64_t t47 = -11971LL;
int32_t t50 = -57065;
uint8_t x478 = UINT8_MAX;
int8_t x484 = -15;
static uint64_t x496 = 13LLU;
static volatile uint64_t x501 = UINT64_MAX;
int8_t x504 = -1;
int16_t x516 = INT16_MIN;
int64_t x524 = -5761127827600LL;
static uint32_t t57 = 129U;
volatile int32_t x537 = INT32_MIN;
int16_t x540 = 1555;
int64_t x548 = INT64_MAX;
volatile int32_t t62 = -383304;
static int32_t x569 = 450;
int8_t x571 = -14;
uint8_t x606 = 0U;
int64_t x614 = INT64_MIN;
static int8_t x615 = INT8_MIN;
int16_t x637 = -1;
volatile int32_t x663 = INT32_MAX;
uint16_t x664 = UINT16_MAX;
int8_t x682 = INT8_MIN;
uint8_t x684 = 8U;
static uint16_t x696 = 1U;
int8_t x701 = 4;
static volatile int64_t x703 = 418967353LL;
volatile uint32_t x726 = 1106919U;
uint32_t x729 = 26188U;
volatile uint32_t t75 = 64346U;
static int8_t x735 = 1;
volatile int32_t x748 = -1;
volatile uint32_t x794 = 11343874U;
volatile int32_t t79 = -25552;
static volatile int8_t x804 = INT8_MAX;
volatile int32_t t80 = -953932;
int64_t x820 = INT64_MIN;
uint16_t x825 = 19U;
int32_t t82 = 14912935;
int64_t x842 = -1LL;
static volatile int16_t x861 = INT16_MAX;
static int32_t x862 = INT32_MIN;
int16_t x865 = -1;
volatile uint8_t x866 = 38U;
volatile uint32_t x868 = 54U;
volatile int64_t x878 = -1LL;
int32_t x881 = -1;
int32_t t87 = 18399235;
volatile int16_t x934 = -42;
uint8_t x936 = UINT8_MAX;
static int16_t x946 = INT16_MIN;
int32_t x948 = INT32_MIN;
static int32_t t91 = -22777182;
int64_t x982 = INT64_MIN;
int16_t x1011 = -1;
int16_t x1012 = INT16_MIN;
static int64_t x1018 = -2775044LL;
static uint16_t x1020 = 1U;
volatile int32_t t97 = -3757;
int32_t t98 = -80789480;
static int64_t x1045 = 3943981926LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x3 = 2092041329LLU;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -104775405;

	t0 = (x1%(x2<(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 13426056;
	volatile int32_t t1 = 99;

	t1 = (x9%(x10<(x11/x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x34 = INT64_MIN;
	int16_t x35 = 9;
	int64_t x36 = INT64_MAX;
	volatile int32_t t2 = -14694737;

	t2 = (x33%(x34<(x35/x36)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x37 = 116901747;
	volatile int8_t x38 = -14;
	int64_t x39 = -3009426LL;
	static int64_t x40 = -70520711790848LL;
	int32_t t3 = 3092;

	t3 = (x37%(x38<(x39/x40)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x49 = INT64_MIN;
	uint16_t x50 = 2637U;
	int64_t x51 = 893362231236768587LL;
	int64_t t4 = 20670929383LL;

	t4 = (x49%(x50<(x51/x52)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x61 = UINT32_MAX;
	static int64_t x62 = INT64_MIN;
	uint16_t x63 = 240U;
	volatile int64_t x64 = -12365LL;
	uint32_t t5 = 3U;

	t5 = (x61%(x62<(x63/x64)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x66 = -1;
	int64_t x67 = INT64_MAX;
	uint8_t x68 = 1U;

	t6 = (x65%(x66<(x67/x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x77 = -1;
	int16_t x79 = -3302;
	uint64_t x80 = 32277800368LLU;

	t7 = (x77%(x78<(x79/x80)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x97 = INT16_MAX;
	volatile int16_t x99 = -1;
	int64_t x100 = INT64_MIN;
	volatile int32_t t8 = -2822618;

	t8 = (x97%(x98<(x99/x100)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MIN;
	int16_t x103 = 192;
	int16_t x104 = INT16_MIN;
	int32_t t9 = -2;

	t9 = (x101%(x102<(x103/x104)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x105 = 89U;
	static volatile int8_t x106 = -6;
	int8_t x107 = INT8_MIN;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t10 = 4;

	t10 = (x105%(x106<(x107/x108)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x117 = 8792459U;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -6;
	volatile int32_t x120 = INT32_MAX;
	volatile uint32_t t11 = 1961635U;

	t11 = (x117%(x118<(x119/x120)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x126 = -1;
	uint8_t x127 = 109U;
	int64_t x128 = -836562628643228LL;

	t12 = (x125%(x126<(x127/x128)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x129 = 75697175321LLU;
	volatile int8_t x130 = -1;
	volatile uint8_t x131 = 65U;
	uint8_t x132 = 3U;
	uint64_t t13 = 15999LLU;

	t13 = (x129%(x130<(x131/x132)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x133 = INT64_MIN;
	volatile uint64_t x134 = 245897966LLU;
	int64_t x135 = INT64_MIN;
	volatile int8_t x136 = INT8_MIN;
	int64_t t14 = 804876128669244LL;

	t14 = (x133%(x134<(x135/x136)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x141 = 100U;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -1;

	t15 = (x141%(x142<(x143/x144)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MIN;
	int8_t x180 = -1;
	volatile int64_t t16 = 52565891290LL;

	t16 = (x177%(x178<(x179/x180)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x201 = INT32_MIN;
	int32_t x202 = -4274;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;

	t17 = (x201%(x202<(x203/x204)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x221 = -7912;
	static int8_t x222 = INT8_MIN;
	static int64_t x223 = -1LL;
	int8_t x224 = INT8_MIN;
	volatile int32_t t18 = 20199;

	t18 = (x221%(x222<(x223/x224)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x229 = INT32_MAX;
	int16_t x230 = INT16_MIN;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t19 = -1164397;

	t19 = (x229%(x230<(x231/x232)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x234 = INT32_MIN;
	int32_t x235 = 150631;
	int64_t x236 = -1LL;
	static volatile int32_t t20 = 428625;

	t20 = (x233%(x234<(x235/x236)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x239 = -204132862728LL;
	static int32_t x240 = INT32_MIN;
	static volatile uint64_t t21 = 514194774LLU;

	t21 = (x237%(x238<(x239/x240)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x253 = 43U;
	volatile int16_t x254 = INT16_MIN;
	uint16_t x255 = 27926U;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t22 = 1;

	t22 = (x253%(x254<(x255/x256)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = 2;
	int8_t x260 = -6;

	t23 = (x257%(x258<(x259/x260)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x261 = UINT32_MAX;
	uint16_t x263 = UINT16_MAX;
	int16_t x264 = INT16_MAX;

	t24 = (x261%(x262<(x263/x264)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x265 = INT64_MIN;
	static int8_t x266 = INT8_MIN;
	uint8_t x267 = 14U;
	int64_t t25 = 59255LL;

	t25 = (x265%(x266<(x267/x268)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x269 = -1;
	static int64_t x271 = INT64_MIN;
	uint8_t x272 = 41U;
	volatile int32_t t26 = 66523;

	t26 = (x269%(x270<(x271/x272)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x277 = INT64_MAX;
	uint32_t x279 = 397143U;
	static int64_t x280 = -808557LL;
	int64_t t27 = 4247570309LL;

	t27 = (x277%(x278<(x279/x280)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x285 = -1LL;
	uint64_t x286 = 65868974393LLU;
	volatile int16_t x288 = -4;
	int64_t t28 = -3006929962118959747LL;

	t28 = (x285%(x286<(x287/x288)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x290 = -1LL;
	int8_t x291 = -1;
	volatile uint8_t x292 = 4U;
	int32_t t29 = -43486;

	t29 = (x289%(x290<(x291/x292)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x306 = -1;
	int64_t x307 = -1LL;
	volatile int32_t t30 = -60515101;

	t30 = (x305%(x306<(x307/x308)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MIN;
	volatile int8_t x311 = -52;
	int32_t x312 = -1;
	int32_t t31 = -838200663;

	t31 = (x309%(x310<(x311/x312)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x313 = 6492320079LL;
	int64_t x314 = -1LL;
	static uint32_t x315 = UINT32_MAX;
	static volatile int16_t x316 = -52;
	static volatile int64_t t32 = 6LL;

	t32 = (x313%(x314<(x315/x316)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x317 = 140456189055LL;
	volatile int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MAX;
	static uint8_t x320 = UINT8_MAX;

	t33 = (x317%(x318<(x319/x320)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x325 = 0U;
	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t34 = 15746;

	t34 = (x325%(x326<(x327/x328)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x330 = -1;
	volatile int16_t x331 = INT16_MAX;
	int32_t t35 = -749811;

	t35 = (x329%(x330<(x331/x332)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x333 = INT8_MAX;
	int64_t x334 = INT64_MIN;
	uint16_t x335 = 5U;
	int8_t x336 = 23;
	int32_t t36 = 25;

	t36 = (x333%(x334<(x335/x336)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	static int8_t x348 = INT8_MAX;
	int32_t t37 = 0;

	t37 = (x345%(x346<(x347/x348)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x352 = 1;

	t38 = (x349%(x350<(x351/x352)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x357 = INT8_MIN;
	int8_t x358 = -1;
	static volatile int64_t x359 = 760905395375724175LL;
	uint16_t x360 = 6593U;
	int32_t t39 = 473317665;

	t39 = (x357%(x358<(x359/x360)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint8_t x362 = UINT8_MAX;
	volatile uint32_t x363 = 655811229U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t40 = -25;

	t40 = (x361%(x362<(x363/x364)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x369 = 198U;
	static uint16_t x371 = 280U;

	t41 = (x369%(x370<(x371/x372)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	int16_t x379 = -12;
	volatile int64_t x380 = 9769459148LL;

	t42 = (x377%(x378<(x379/x380)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x382 = -976;
	volatile int64_t x384 = INT64_MAX;
	static uint32_t t43 = 10U;

	t43 = (x381%(x382<(x383/x384)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x405 = INT8_MAX;
	int16_t x406 = INT16_MIN;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = 2;
	volatile int32_t t44 = 26;

	t44 = (x405%(x406<(x407/x408)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x409 = UINT8_MAX;
	uint16_t x410 = 25784U;
	int32_t x411 = INT32_MIN;

	t45 = (x409%(x410<(x411/x412)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x441 = -1;
	int64_t x443 = 45057LL;
	uint8_t x444 = 34U;
	int32_t t46 = -9282381;

	t46 = (x441%(x442<(x443/x444)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x457 = 113270LL;
	int32_t x458 = INT32_MIN;
	int8_t x459 = 1;
	static int8_t x460 = -1;

	t47 = (x457%(x458<(x459/x460)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x461 = 6U;
	int16_t x462 = INT16_MIN;
	int16_t x463 = -1;
	uint16_t x464 = 47U;
	volatile int32_t t48 = -18482494;

	t48 = (x461%(x462<(x463/x464)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x469 = 91298LL;
	volatile int64_t x470 = -1LL;
	int32_t x471 = 0;
	int64_t x472 = INT64_MIN;
	static volatile int64_t t49 = 8486715276957342LL;

	t49 = (x469%(x470<(x471/x472)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x473 = INT32_MAX;
	int16_t x474 = -1;
	int64_t x475 = -1LL;
	uint16_t x476 = 11U;

	t50 = (x473%(x474<(x475/x476)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x477 = UINT32_MAX;
	volatile int32_t x479 = INT32_MIN;
	static volatile int8_t x480 = INT8_MIN;
	static uint32_t t51 = 243417U;

	t51 = (x477%(x478<(x479/x480)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x481 = INT16_MIN;
	uint32_t x482 = 14079107U;
	static int64_t x483 = INT64_MIN;
	int32_t t52 = -324;

	t52 = (x481%(x482<(x483/x484)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x493 = UINT16_MAX;
	int32_t x494 = INT32_MAX;
	int8_t x495 = INT8_MIN;
	volatile int32_t t53 = 14408916;

	t53 = (x493%(x494<(x495/x496)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x502 = INT32_MIN;
	int32_t x503 = 120799744;
	static uint64_t t54 = 89LLU;

	t54 = (x501%(x502<(x503/x504)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x513 = INT32_MIN;
	volatile int8_t x514 = INT8_MIN;
	int8_t x515 = -1;
	int32_t t55 = 274139;

	t55 = (x513%(x514<(x515/x516)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x517 = -1;
	static uint64_t x518 = 8869467065160LLU;
	int64_t x519 = INT64_MIN;
	uint8_t x520 = 50U;
	volatile int32_t t56 = 5;

	t56 = (x517%(x518<(x519/x520)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x521 = 0U;
	int16_t x522 = -1;
	volatile int8_t x523 = INT8_MIN;

	t57 = (x521%(x522<(x523/x524)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x525 = 3655U;
	static int64_t x526 = INT64_MIN;
	uint16_t x527 = 186U;
	int16_t x528 = INT16_MIN;
	int32_t t58 = -5301477;

	t58 = (x525%(x526<(x527/x528)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x538 = INT32_MIN;
	static int16_t x539 = 1;
	static int32_t t59 = -10;

	t59 = (x537%(x538<(x539/x540)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x545 = -1;
	volatile int32_t x546 = -1;
	int32_t x547 = -1;
	int32_t t60 = -92373;

	t60 = (x545%(x546<(x547/x548)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x549 = INT32_MAX;
	int16_t x550 = INT16_MIN;
	int8_t x551 = INT8_MIN;
	int8_t x552 = 1;
	volatile int32_t t61 = 11491;

	t61 = (x549%(x550<(x551/x552)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x557 = 2;
	int16_t x558 = 23;
	volatile int32_t x559 = INT32_MIN;
	volatile int64_t x560 = -1LL;

	t62 = (x557%(x558<(x559/x560)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x570 = 0U;
	uint32_t x572 = 6U;
	volatile int32_t t63 = -5;

	t63 = (x569%(x570<(x571/x572)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x593 = UINT64_MAX;
	int16_t x594 = INT16_MIN;
	int64_t x595 = -1LL;
	int16_t x596 = -1;
	static volatile uint64_t t64 = 871048144759LLU;

	t64 = (x593%(x594<(x595/x596)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x605 = INT8_MAX;
	int64_t x607 = INT64_MIN;
	int8_t x608 = INT8_MIN;
	int32_t t65 = -1845767;

	t65 = (x605%(x606<(x607/x608)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x613 = UINT8_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t66 = -14310357;

	t66 = (x613%(x614<(x615/x616)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x621 = INT32_MIN;
	uint16_t x622 = 3849U;
	uint64_t x623 = UINT64_MAX;
	uint8_t x624 = 56U;
	static int32_t t67 = -104661;

	t67 = (x621%(x622<(x623/x624)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x638 = INT32_MIN;
	volatile uint8_t x639 = UINT8_MAX;
	int32_t x640 = 55;
	static int32_t t68 = 1193;

	t68 = (x637%(x638<(x639/x640)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x661 = -1;
	int32_t x662 = 154;
	int32_t t69 = -1321;

	t69 = (x661%(x662<(x663/x664)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x669 = UINT8_MAX;
	static volatile int32_t x670 = -1;
	volatile int32_t x671 = INT32_MIN;
	int64_t x672 = INT64_MIN;
	int32_t t70 = 529;

	t70 = (x669%(x670<(x671/x672)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x681 = 53;
	static volatile int32_t x683 = 1717;
	static volatile int32_t t71 = 127513536;

	t71 = (x681%(x682<(x683/x684)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x693 = INT8_MAX;
	int32_t x694 = -19450338;
	int8_t x695 = INT8_MIN;
	volatile int32_t t72 = -1;

	t72 = (x693%(x694<(x695/x696)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x702 = INT64_MIN;
	int64_t x704 = 20812666LL;
	int32_t t73 = 256869216;

	t73 = (x701%(x702<(x703/x704)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x725 = INT64_MAX;
	uint64_t x727 = UINT64_MAX;
	static uint16_t x728 = UINT16_MAX;
	static int64_t t74 = -8816374601467224LL;

	t74 = (x725%(x726<(x727/x728)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x730 = 370U;
	volatile uint64_t x731 = UINT64_MAX;
	static uint64_t x732 = 11845711LLU;

	t75 = (x729%(x730<(x731/x732)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x733 = 30304;
	int64_t x734 = INT64_MIN;
	uint16_t x736 = 3U;
	int32_t t76 = 19427;

	t76 = (x733%(x734<(x735/x736)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x745 = INT8_MIN;
	volatile int8_t x746 = -51;
	volatile int16_t x747 = INT16_MIN;
	static volatile int32_t t77 = -21681;

	t77 = (x745%(x746<(x747/x748)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x773 = INT16_MAX;
	int32_t x774 = -1;
	static volatile uint16_t x775 = 8U;
	int32_t x776 = INT32_MIN;
	int32_t t78 = -798998899;

	t78 = (x773%(x774<(x775/x776)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x793 = INT32_MIN;
	int8_t x795 = INT8_MIN;
	uint8_t x796 = 3U;

	t79 = (x793%(x794<(x795/x796)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x801 = 95637647;
	int8_t x802 = 1;
	int32_t x803 = 992;

	t80 = (x801%(x802<(x803/x804)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x817 = UINT8_MAX;
	static int8_t x818 = -1;
	uint16_t x819 = UINT16_MAX;
	volatile int32_t t81 = -766;

	t81 = (x817%(x818<(x819/x820)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x826 = 142LLU;
	int32_t x827 = 25827475;
	int16_t x828 = -14774;

	t82 = (x825%(x826<(x827/x828)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x841 = INT64_MIN;
	int32_t x843 = -1;
	int8_t x844 = INT8_MIN;
	int64_t t83 = -319LL;

	t83 = (x841%(x842<(x843/x844)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x863 = 0;
	int16_t x864 = INT16_MIN;
	static volatile int32_t t84 = -1;

	t84 = (x861%(x862<(x863/x864)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x867 = UINT32_MAX;
	volatile int32_t t85 = -622150464;

	t85 = (x865%(x866<(x867/x868)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x877 = 8U;
	int16_t x879 = 106;
	uint16_t x880 = 2597U;
	int32_t t86 = 62910260;

	t86 = (x877%(x878<(x879/x880)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x882 = -439LL;
	uint16_t x883 = UINT16_MAX;
	int16_t x884 = INT16_MIN;

	t87 = (x881%(x882<(x883/x884)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x901 = 320633U;
	int32_t x902 = -4;
	int16_t x903 = INT16_MAX;
	uint16_t x904 = 30U;
	uint32_t t88 = 1330699977U;

	t88 = (x901%(x902<(x903/x904)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x929 = -1;
	static volatile uint16_t x930 = 12U;
	static int32_t x931 = 985416;
	int16_t x932 = INT16_MAX;
	int32_t t89 = -5338;

	t89 = (x929%(x930<(x931/x932)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x933 = 5053042368LLU;
	uint8_t x935 = UINT8_MAX;
	static volatile uint64_t t90 = 694530777199979LLU;

	t90 = (x933%(x934<(x935/x936)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x945 = 1496U;
	int8_t x947 = -1;

	t91 = (x945%(x946<(x947/x948)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x957 = 0U;
	static int64_t x958 = INT64_MIN;
	static int16_t x959 = -1;
	uint8_t x960 = 34U;
	static int32_t t92 = -4;

	t92 = (x957%(x958<(x959/x960)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x965 = 2653U;
	int16_t x966 = -1;
	static uint16_t x967 = 16258U;
	static volatile int32_t x968 = INT32_MIN;
	uint32_t t93 = 1U;

	t93 = (x965%(x966<(x967/x968)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x981 = INT32_MAX;
	int8_t x983 = INT8_MIN;
	static uint32_t x984 = UINT32_MAX;
	volatile int32_t t94 = 9889717;

	t94 = (x981%(x982<(x983/x984)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1009 = 0;
	int16_t x1010 = INT16_MIN;
	volatile int32_t t95 = 46;

	t95 = (x1009%(x1010<(x1011/x1012)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1017 = INT64_MIN;
	volatile int64_t x1019 = 2559528972091LL;
	volatile int64_t t96 = -158211293404741LL;

	t96 = (x1017%(x1018<(x1019/x1020)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1025 = INT16_MAX;
	uint8_t x1026 = 2U;
	volatile int32_t x1027 = INT32_MAX;
	uint16_t x1028 = 950U;

	t97 = (x1025%(x1026<(x1027/x1028)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x1041 = -27;
	static int16_t x1042 = INT16_MIN;
	uint8_t x1043 = UINT8_MAX;
	int64_t x1044 = -5456170033LL;

	t98 = (x1041%(x1042<(x1043/x1044)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1046 = -1LL;
	int16_t x1047 = INT16_MAX;
	static int64_t x1048 = INT64_MAX;
	volatile int64_t t99 = 1839208305193778298LL;

	t99 = (x1045%(x1046<(x1047/x1048)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

