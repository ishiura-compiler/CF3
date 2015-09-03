#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
volatile int8_t x22 = -2;
volatile uint16_t x30 = 15164U;
uint8_t x50 = 19U;
uint32_t x51 = UINT32_MAX;
int32_t t6 = -4865;
volatile int64_t x55 = 3271044981688LL;
volatile uint32_t t7 = 106144774U;
uint32_t x77 = UINT32_MAX;
volatile uint32_t x79 = 721031624U;
static int64_t t12 = -14533LL;
int64_t x122 = INT64_MIN;
int64_t x135 = INT64_MIN;
uint8_t x151 = 22U;
uint16_t x155 = UINT16_MAX;
static uint32_t x164 = UINT32_MAX;
int32_t t19 = 20;
volatile int32_t x175 = INT32_MIN;
volatile int16_t x176 = INT16_MIN;
volatile int32_t x191 = INT32_MAX;
static int16_t x198 = INT16_MIN;
uint16_t x224 = 29649U;
static volatile int64_t x252 = 259544759293365395LL;
int32_t t29 = 154;
int16_t x270 = INT16_MAX;
uint16_t x275 = UINT16_MAX;
volatile int32_t x290 = -239101;
volatile int64_t x291 = INT64_MAX;
uint16_t x323 = UINT16_MAX;
int16_t x339 = INT16_MIN;
int64_t x342 = -1LL;
int32_t t40 = 947663;
int32_t t42 = -6142;
int16_t x365 = 2452;
uint32_t x366 = 7U;
int64_t x367 = INT64_MIN;
static int8_t x378 = 0;
uint32_t x381 = UINT32_MAX;
int64_t x384 = INT64_MIN;
int16_t x389 = INT16_MAX;
static int16_t x392 = 1;
uint16_t x429 = 1617U;
uint16_t x436 = 6462U;
int16_t x468 = -1;
static int8_t x474 = 13;
int64_t x476 = INT64_MAX;
uint64_t t55 = 198421486LLU;
static volatile int32_t t56 = -20811;
int8_t x481 = INT8_MAX;
int8_t x482 = INT8_MIN;
static volatile int32_t t57 = 0;
static uint32_t x515 = UINT32_MAX;
int32_t x516 = 474;
static int32_t x519 = -1;
int32_t t60 = 7380;
uint8_t x533 = 24U;
int16_t x536 = -1;
uint32_t x540 = 74U;
uint32_t x550 = 97U;
int32_t x552 = 3829574;
uint32_t t64 = 3U;
uint16_t x600 = 699U;
int8_t x611 = INT8_MAX;
int8_t x625 = 0;
volatile int32_t x657 = INT32_MAX;
volatile int64_t x668 = INT64_MIN;
volatile uint32_t x680 = UINT32_MAX;
static int32_t x682 = -1;
uint32_t t76 = UINT32_MAX;
int8_t x698 = INT8_MIN;
int16_t x700 = 15;
int16_t x704 = INT16_MAX;
uint16_t x736 = 1U;
volatile uint64_t x742 = UINT64_MAX;
int8_t x744 = -5;
uint64_t x745 = 1602345076950LLU;
int16_t x750 = INT16_MAX;
volatile int32_t x755 = -1;
volatile int8_t x762 = -1;
static int32_t t87 = -59;
static uint64_t x783 = 85118460521084166LLU;
int32_t t88 = -95;
volatile int32_t x790 = 712490;
static uint32_t t89 = 665818779U;
int8_t x798 = 14;
static volatile uint64_t t91 = 14893312082879324LLU;
static int8_t x853 = INT8_MAX;
int16_t x856 = INT16_MIN;
int8_t x876 = INT8_MIN;
volatile int32_t t94 = -1;
uint64_t x882 = UINT64_MAX;
volatile int8_t x883 = INT8_MIN;
static uint16_t x884 = 84U;
uint8_t x902 = UINT8_MAX;
volatile int8_t x904 = 1;
int16_t x941 = 2;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int16_t x2 = -6045;
	uint8_t x4 = 37U;
	static int32_t t0 = -5373243;

	t0 = (x1>>((x2/x3)/x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 1484562U;
	int16_t x10 = INT16_MAX;
	int8_t x11 = INT8_MAX;
	int64_t x12 = INT64_MAX;
	uint32_t t1 = 29683U;

	t1 = (x9>>((x10/x11)/x12));

	if (t1 != 1484562U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = INT32_MAX;
	uint32_t x14 = 1U;
	static volatile int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MAX;
	int32_t t2 = INT32_MAX;

	t2 = (x13>>((x14/x15)/x16));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x23 = -1LL;
	int16_t x24 = INT16_MAX;
	uint32_t t3 = UINT32_MAX;

	t3 = (x21>>((x22/x23)/x24));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x29 = 169U;
	int32_t x31 = INT32_MIN;
	int64_t x32 = 2LL;
	volatile int32_t t4 = 886569724;

	t4 = (x29>>((x30/x31)/x32));

	if (t4 != 169) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x37 = UINT32_MAX;
	int16_t x38 = -1;
	int16_t x39 = -1;
	static uint32_t x40 = 24582303U;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (x37>>((x38/x39)/x40));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = UINT8_MAX;
	static int16_t x52 = -19;

	t6 = (x49>>((x50/x51)/x52));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x53 = 141388U;
	uint16_t x54 = 1870U;
	uint64_t x56 = 70078LLU;

	t7 = (x53>>((x54/x55)/x56));

	if (t7 != 141388U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = 0;
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	int8_t x68 = -1;
	static int32_t t8 = 45897848;

	t8 = (x65>>((x66/x67)/x68));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x78 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x77>>((x78/x79)/x80));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x81 = UINT8_MAX;
	volatile int16_t x82 = INT16_MIN;
	static int8_t x83 = -1;
	static int64_t x84 = INT64_MAX;
	volatile int32_t t10 = -1714;

	t10 = (x81>>((x82/x83)/x84));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x97 = 19U;
	volatile int8_t x98 = INT8_MIN;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = 69907086183415LL;
	static volatile int32_t t11 = 694927103;

	t11 = (x97>>((x98/x99)/x100));

	if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x117 = 116667067LL;
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = 338;
	static int8_t x120 = -1;

	t12 = (x117>>((x118/x119)/x120));

	if (t12 != 116667067LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x121 = INT32_MAX;
	int64_t x123 = INT64_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t13 = INT32_MAX;

	t13 = (x121>>((x122/x123)/x124));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int32_t x130 = -1;
	static int64_t x131 = -1LL;
	int8_t x132 = -11;
	uint64_t t14 = UINT64_MAX;

	t14 = (x129>>((x130/x131)/x132));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x133 = 1;
	uint32_t x134 = 15U;
	int32_t x136 = INT32_MAX;
	int32_t t15 = 10046060;

	t15 = (x133>>((x134/x135)/x136));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x149 = INT64_MAX;
	int64_t x150 = 314023678LL;
	int64_t x152 = -1412448450LL;
	static int64_t t16 = INT64_MAX;

	t16 = (x149>>((x150/x151)/x152));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x153 = 322166249;
	uint16_t x154 = UINT16_MAX;
	volatile int16_t x156 = INT16_MIN;
	int32_t t17 = -28589;

	t17 = (x153>>((x154/x155)/x156));

	if (t17 != 322166249) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x161 = 1131;
	volatile int32_t x162 = 2;
	uint32_t x163 = 417929867U;
	volatile int32_t t18 = -14;

	t18 = (x161>>((x162/x163)/x164));

	if (t18 != 1131) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x165 = 18548;
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	static int8_t x168 = INT8_MIN;

	t19 = (x165>>((x166/x167)/x168));

	if (t19 != 18548) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x173 = 1058;
	int16_t x174 = 0;
	volatile int32_t t20 = -195;

	t20 = (x173>>((x174/x175)/x176));

	if (t20 != 1058) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x185 = UINT64_MAX;
	static uint32_t x186 = UINT32_MAX;
	volatile uint64_t x187 = UINT64_MAX;
	volatile int32_t x188 = INT32_MIN;
	static uint64_t t21 = UINT64_MAX;

	t21 = (x185>>((x186/x187)/x188));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x189 = 1868U;
	volatile uint32_t x190 = 27034952U;
	uint16_t x192 = 3U;
	static volatile int32_t t22 = 0;

	t22 = (x189>>((x190/x191)/x192));

	if (t22 != 1868) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x197 = UINT16_MAX;
	static int64_t x199 = -1LL;
	volatile uint32_t x200 = 3526588U;
	volatile int32_t t23 = 170565042;

	t23 = (x197>>((x198/x199)/x200));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x201 = INT64_MAX;
	uint16_t x202 = UINT16_MAX;
	volatile uint64_t x203 = 1879275126878972798LLU;
	uint16_t x204 = 1U;
	int64_t t24 = INT64_MAX;

	t24 = (x201>>((x202/x203)/x204));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x217 = 88U;
	volatile uint64_t x218 = 14124383092LLU;
	static int8_t x219 = 4;
	volatile int32_t x220 = -1;
	volatile int32_t t25 = -176746542;

	t25 = (x217>>((x218/x219)/x220));

	if (t25 != 88) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x221 = 11;
	int32_t x222 = 20494;
	uint8_t x223 = UINT8_MAX;
	volatile int32_t t26 = 449;

	t26 = (x221>>((x222/x223)/x224));

	if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x245 = INT32_MAX;
	int32_t x246 = -1;
	static int8_t x247 = 18;
	static int8_t x248 = INT8_MIN;
	static volatile int32_t t27 = INT32_MAX;

	t27 = (x245>>((x246/x247)/x248));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x249 = UINT8_MAX;
	static volatile uint16_t x250 = UINT16_MAX;
	static volatile int16_t x251 = INT16_MIN;
	int32_t t28 = -844760;

	t28 = (x249>>((x250/x251)/x252));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x261 = 6U;
	static int32_t x262 = -1;
	int32_t x263 = INT32_MAX;
	int32_t x264 = -1;

	t29 = (x261>>((x262/x263)/x264));

	if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x269 = INT8_MAX;
	static int16_t x271 = INT16_MAX;
	static uint16_t x272 = UINT16_MAX;
	volatile int32_t t30 = 3683055;

	t30 = (x269>>((x270/x271)/x272));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x273 = UINT64_MAX;
	static int8_t x274 = -1;
	int64_t x276 = INT64_MAX;
	uint64_t t31 = UINT64_MAX;

	t31 = (x273>>((x274/x275)/x276));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x277 = 921407U;
	uint64_t x278 = 1LLU;
	static volatile int8_t x279 = -1;
	int64_t x280 = INT64_MIN;
	uint32_t t32 = 507U;

	t32 = (x277>>((x278/x279)/x280));

	if (t32 != 921407U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x289 = 122;
	int8_t x292 = -8;
	int32_t t33 = -26259269;

	t33 = (x289>>((x290/x291)/x292));

	if (t33 != 122) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x293 = 1151;
	static uint8_t x294 = 10U;
	uint32_t x295 = UINT32_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t34 = 64546744;

	t34 = (x293>>((x294/x295)/x296));

	if (t34 != 1151) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x309 = 18;
	int64_t x310 = -7LL;
	static volatile int64_t x311 = -55939672LL;
	volatile int64_t x312 = INT64_MAX;
	volatile int32_t t35 = -27927948;

	t35 = (x309>>((x310/x311)/x312));

	if (t35 != 18) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x321 = 26946144;
	static volatile int8_t x322 = INT8_MAX;
	int64_t x324 = -1LL;
	static int32_t t36 = -543573343;

	t36 = (x321>>((x322/x323)/x324));

	if (t36 != 26946144) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x333 = INT8_MAX;
	static int8_t x334 = INT8_MAX;
	int16_t x335 = INT16_MAX;
	static uint64_t x336 = 4LLU;
	static volatile int32_t t37 = 3647;

	t37 = (x333>>((x334/x335)/x336));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x337 = INT8_MAX;
	static int32_t x338 = 29806;
	uint8_t x340 = UINT8_MAX;
	int32_t t38 = -3;

	t38 = (x337>>((x338/x339)/x340));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x341 = 695U;
	uint64_t x343 = 4450799900546406593LLU;
	uint8_t x344 = UINT8_MAX;
	static uint32_t t39 = 740392752U;

	t39 = (x341>>((x342/x343)/x344));

	if (t39 != 695U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x349 = UINT16_MAX;
	static uint8_t x350 = 0U;
	volatile uint8_t x351 = 100U;
	int64_t x352 = 1LL;

	t40 = (x349>>((x350/x351)/x352));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x353 = INT32_MAX;
	volatile int16_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	volatile int32_t x356 = -2075475;
	int32_t t41 = INT32_MAX;

	t41 = (x353>>((x354/x355)/x356));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x357 = UINT16_MAX;
	static volatile int16_t x358 = INT16_MIN;
	uint8_t x359 = 28U;
	uint64_t x360 = UINT64_MAX;

	t42 = (x357>>((x358/x359)/x360));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x361 = UINT32_MAX;
	int16_t x362 = -1;
	int8_t x363 = -1;
	int8_t x364 = INT8_MIN;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x361>>((x362/x363)/x364));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x368 = INT16_MIN;
	static int32_t t44 = 361;

	t44 = (x365>>((x366/x367)/x368));

	if (t44 != 2452) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x377 = UINT64_MAX;
	int8_t x379 = INT8_MAX;
	volatile int32_t x380 = -373554;
	uint64_t t45 = UINT64_MAX;

	t45 = (x377>>((x378/x379)/x380));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x382 = -2282673LL;
	uint64_t x383 = 1LLU;
	volatile uint32_t t46 = 0U;

	t46 = (x381>>((x382/x383)/x384));

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x390 = -1;
	int32_t x391 = INT32_MIN;
	int32_t t47 = 7;

	t47 = (x389>>((x390/x391)/x392));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x405 = 6914098695061LL;
	int8_t x406 = -56;
	volatile uint8_t x407 = UINT8_MAX;
	uint16_t x408 = 389U;
	volatile int64_t t48 = 4211464710917061456LL;

	t48 = (x405>>((x406/x407)/x408));

	if (t48 != 6914098695061LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x430 = INT16_MIN;
	static volatile uint16_t x431 = 212U;
	uint32_t x432 = 2083894130U;
	int32_t t49 = -4081;

	t49 = (x429>>((x430/x431)/x432));

	if (t49 != 404) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x433 = 28156LLU;
	int16_t x434 = INT16_MAX;
	static int64_t x435 = INT64_MAX;
	static volatile uint64_t t50 = 48220187450LLU;

	t50 = (x433>>((x434/x435)/x436));

	if (t50 != 28156LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x449 = INT64_MAX;
	static int8_t x450 = INT8_MIN;
	uint8_t x451 = UINT8_MAX;
	int64_t x452 = INT64_MIN;
	int64_t t51 = INT64_MAX;

	t51 = (x449>>((x450/x451)/x452));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x453 = 232800969LLU;
	int32_t x454 = 1073;
	int64_t x455 = -931164LL;
	int64_t x456 = 527456732155582LL;
	uint64_t t52 = 7414283165LLU;

	t52 = (x453>>((x454/x455)/x456));

	if (t52 != 232800969LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x465 = INT16_MAX;
	uint32_t x466 = UINT32_MAX;
	uint64_t x467 = 11026731024731LLU;
	int32_t t53 = -327355;

	t53 = (x465>>((x466/x467)/x468));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x469 = 1U;
	int64_t x470 = -1LL;
	static uint16_t x471 = 7081U;
	int32_t x472 = -1413877;
	volatile uint32_t t54 = 394856U;

	t54 = (x469>>((x470/x471)/x472));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x473 = 3759584907550LLU;
	int64_t x475 = INT64_MIN;

	t55 = (x473>>((x474/x475)/x476));

	if (t55 != 3759584907550LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x477 = INT8_MAX;
	int32_t x478 = 73;
	static uint8_t x479 = 6U;
	int64_t x480 = 7094LL;

	t56 = (x477>>((x478/x479)/x480));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x483 = 5U;
	int64_t x484 = INT64_MAX;

	t57 = (x481>>((x482/x483)/x484));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x509 = 54;
	int8_t x510 = -1;
	volatile int16_t x511 = 2394;
	uint64_t x512 = 8095690LLU;
	int32_t t58 = -3399427;

	t58 = (x509>>((x510/x511)/x512));

	if (t58 != 54) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x513 = 504;
	volatile int8_t x514 = INT8_MAX;
	int32_t t59 = 15;

	t59 = (x513>>((x514/x515)/x516));

	if (t59 != 504) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x517 = INT8_MAX;
	static int16_t x518 = -1;
	static int8_t x520 = 31;

	t60 = (x517>>((x518/x519)/x520));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x525 = 430961U;
	uint32_t x526 = 2192U;
	uint32_t x527 = 79U;
	uint32_t x528 = 2U;
	volatile uint32_t t61 = 165313U;

	t61 = (x525>>((x526/x527)/x528));

	if (t61 != 52U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x534 = 60;
	uint64_t x535 = 161874081671104036LLU;
	int32_t t62 = 0;

	t62 = (x533>>((x534/x535)/x536));

	if (t62 != 24) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x537 = 37;
	static uint32_t x538 = 1139U;
	int32_t x539 = INT32_MAX;
	volatile int32_t t63 = 52021413;

	t63 = (x537>>((x538/x539)/x540));

	if (t63 != 37) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x549 = 6503U;
	int16_t x551 = INT16_MIN;

	t64 = (x549>>((x550/x551)/x552));

	if (t64 != 6503U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x553 = INT32_MAX;
	uint64_t x554 = UINT64_MAX;
	uint8_t x555 = 20U;
	int64_t x556 = INT64_MAX;
	static int32_t t65 = INT32_MAX;

	t65 = (x553>>((x554/x555)/x556));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x561 = 1518U;
	int32_t x562 = 847;
	static volatile int64_t x563 = -1LL;
	volatile uint16_t x564 = 2490U;
	int32_t t66 = 159;

	t66 = (x561>>((x562/x563)/x564));

	if (t66 != 1518) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x577 = 22462353460621LLU;
	int8_t x578 = -13;
	static int64_t x579 = 522323639496574LL;
	int16_t x580 = INT16_MIN;
	static uint64_t t67 = 12533983678LLU;

	t67 = (x577>>((x578/x579)/x580));

	if (t67 != 22462353460621LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x597 = 1;
	int8_t x598 = INT8_MAX;
	volatile int16_t x599 = INT16_MIN;
	int32_t t68 = 2573;

	t68 = (x597>>((x598/x599)/x600));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x609 = INT8_MAX;
	int8_t x610 = INT8_MAX;
	uint32_t x612 = UINT32_MAX;
	static volatile int32_t t69 = -1121;

	t69 = (x609>>((x610/x611)/x612));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x626 = INT16_MIN;
	static int32_t x627 = INT32_MIN;
	int32_t x628 = INT32_MAX;
	static volatile int32_t t70 = 830298;

	t70 = (x625>>((x626/x627)/x628));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x641 = INT8_MAX;
	uint32_t x642 = 117241U;
	int32_t x643 = INT32_MAX;
	int32_t x644 = INT32_MAX;
	volatile int32_t t71 = -623379509;

	t71 = (x641>>((x642/x643)/x644));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x645 = UINT8_MAX;
	int16_t x646 = 1;
	uint32_t x647 = UINT32_MAX;
	uint8_t x648 = 2U;
	int32_t t72 = 160327775;

	t72 = (x645>>((x646/x647)/x648));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x658 = 1;
	int16_t x659 = INT16_MAX;
	int32_t x660 = 4;
	static volatile int32_t t73 = INT32_MAX;

	t73 = (x657>>((x658/x659)/x660));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x665 = 48U;
	volatile int32_t x666 = -1;
	static int32_t x667 = INT32_MIN;
	int32_t t74 = -65018606;

	t74 = (x665>>((x666/x667)/x668));

	if (t74 != 48) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x677 = INT16_MAX;
	int32_t x678 = 7;
	static int8_t x679 = -2;
	static int32_t t75 = -3742;

	t75 = (x677>>((x678/x679)/x680));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x681 = UINT32_MAX;
	int16_t x683 = -989;
	volatile int32_t x684 = 33341947;

	t76 = (x681>>((x682/x683)/x684));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x689 = 27949;
	static uint16_t x690 = UINT16_MAX;
	int32_t x691 = INT32_MIN;
	uint64_t x692 = UINT64_MAX;
	int32_t t77 = -1;

	t77 = (x689>>((x690/x691)/x692));

	if (t77 != 27949) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x697 = INT8_MAX;
	int8_t x699 = -4;
	volatile int32_t t78 = -59616711;

	t78 = (x697>>((x698/x699)/x700));

	if (t78 != 31) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x701 = 6352U;
	static uint32_t x702 = UINT32_MAX;
	int32_t x703 = -1;
	volatile uint32_t t79 = 1050U;

	t79 = (x701>>((x702/x703)/x704));

	if (t79 != 6352U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x705 = 60;
	static int32_t x706 = -64640;
	int32_t x707 = INT32_MIN;
	uint32_t x708 = 13U;
	volatile int32_t t80 = 45766195;

	t80 = (x705>>((x706/x707)/x708));

	if (t80 != 60) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x729 = UINT64_MAX;
	static uint16_t x730 = UINT16_MAX;
	int32_t x731 = INT32_MIN;
	volatile uint32_t x732 = 2810643U;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x729>>((x730/x731)/x732));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x733 = UINT16_MAX;
	uint32_t x734 = 322725049U;
	uint64_t x735 = UINT64_MAX;
	int32_t t82 = 158;

	t82 = (x733>>((x734/x735)/x736));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x741 = 14288U;
	int32_t x743 = 117900397;
	uint32_t t83 = 71942169U;

	t83 = (x741>>((x742/x743)/x744));

	if (t83 != 14288U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x746 = UINT16_MAX;
	int32_t x747 = 189897427;
	static int64_t x748 = -1LL;
	volatile uint64_t t84 = 552186LLU;

	t84 = (x745>>((x746/x747)/x748));

	if (t84 != 1602345076950LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x749 = 6304410LL;
	static int16_t x751 = -118;
	int8_t x752 = -5;
	static int64_t t85 = 1LL;

	t85 = (x749>>((x750/x751)/x752));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x753 = UINT16_MAX;
	int8_t x754 = -1;
	uint32_t x756 = UINT32_MAX;
	int32_t t86 = 737529;

	t86 = (x753>>((x754/x755)/x756));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x761 = UINT16_MAX;
	uint8_t x763 = 17U;
	uint16_t x764 = 3U;

	t87 = (x761>>((x762/x763)/x764));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x781 = UINT8_MAX;
	volatile uint8_t x782 = UINT8_MAX;
	uint32_t x784 = 4U;

	t88 = (x781>>((x782/x783)/x784));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x789 = 0U;
	static uint64_t x791 = 2LLU;
	uint16_t x792 = UINT16_MAX;

	t89 = (x789>>((x790/x791)/x792));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x797 = UINT32_MAX;
	int32_t x799 = INT32_MIN;
	uint32_t x800 = UINT32_MAX;
	static uint32_t t90 = UINT32_MAX;

	t90 = (x797>>((x798/x799)/x800));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x845 = 3164LLU;
	int8_t x846 = 47;
	int16_t x847 = INT16_MIN;
	int64_t x848 = -86LL;

	t91 = (x845>>((x846/x847)/x848));

	if (t91 != 3164LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x854 = 12638U;
	int32_t x855 = -1;
	int32_t t92 = 2;

	t92 = (x853>>((x854/x855)/x856));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x857 = 16833U;
	int8_t x858 = INT8_MAX;
	uint16_t x859 = 168U;
	int32_t x860 = INT32_MIN;
	int32_t t93 = -5;

	t93 = (x857>>((x858/x859)/x860));

	if (t93 != 16833) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x873 = 2U;
	int8_t x874 = -3;
	int8_t x875 = INT8_MIN;

	t94 = (x873>>((x874/x875)/x876));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x881 = 1U;
	volatile int32_t t95 = 2843700;

	t95 = (x881>>((x882/x883)/x884));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x901 = UINT8_MAX;
	uint8_t x903 = UINT8_MAX;
	int32_t t96 = -203927;

	t96 = (x901>>((x902/x903)/x904));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x913 = 25U;
	int8_t x914 = INT8_MIN;
	int16_t x915 = -239;
	volatile int32_t x916 = INT32_MIN;
	static volatile int32_t t97 = 1;

	t97 = (x913>>((x914/x915)/x916));

	if (t97 != 25) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x925 = INT32_MAX;
	int16_t x926 = 28;
	static int32_t x927 = INT32_MAX;
	int32_t x928 = INT32_MIN;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x925>>((x926/x927)/x928));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x942 = INT8_MAX;
	int16_t x943 = 15447;
	static int8_t x944 = -2;
	int32_t t99 = -1105;

	t99 = (x941>>((x942/x943)/x944));

	if (t99 != 2) { NG(); } else { ; }
	
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

