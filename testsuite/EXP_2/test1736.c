#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x29 = -1;
int8_t x30 = -38;
static int8_t x101 = INT8_MIN;
static uint32_t x102 = 123439700U;
uint8_t x197 = UINT8_MAX;
static uint32_t x213 = UINT32_MAX;
volatile int32_t x232 = 5;
int16_t x282 = -1;
int64_t x322 = 1960172483LL;
static int64_t x405 = INT64_MAX;
int64_t t9 = 5847478744148730LL;
int16_t x414 = INT16_MIN;
static int16_t x416 = 56;
volatile uint64_t t10 = 7517LLU;
int16_t x507 = -1325;
int8_t x651 = -1;
uint8_t x660 = 0U;
uint8_t x773 = UINT8_MAX;
volatile uint32_t x775 = 96854U;
int8_t x918 = -22;
static uint16_t x981 = 0U;
uint16_t x983 = 2815U;
uint32_t t21 = 11U;
int32_t x1046 = -1;
uint32_t x1047 = 56U;
volatile int8_t x1355 = INT8_MIN;
int64_t x1433 = -1LL;
uint32_t x1434 = 7432U;
uint16_t x1435 = 12022U;
volatile int64_t t25 = 467244147794LL;
int16_t x1452 = 0;
int64_t t26 = 138LL;
int32_t x1530 = -1;
volatile int32_t t27 = 163;
int32_t x1629 = -1;
uint32_t x1630 = UINT32_MAX;
int8_t x1631 = INT8_MIN;
uint8_t x1632 = 2U;
volatile uint32_t t30 = 332223U;
int32_t x1650 = INT32_MIN;
volatile int16_t x1733 = INT16_MAX;
int64_t x1786 = INT64_MAX;
uint8_t x1788 = 16U;
uint64_t t37 = 1043462LLU;
int16_t x2034 = -1;
static int8_t x2053 = -1;
int64_t t39 = -7LL;
uint64_t x2183 = UINT64_MAX;
uint32_t x2189 = UINT32_MAX;
volatile uint16_t x2192 = 3U;
int8_t x2290 = INT8_MIN;
uint8_t x2292 = 3U;
int32_t t43 = -21003702;
volatile int16_t x2305 = -1;
volatile int32_t t44 = 246;
int64_t x2549 = 31037912124LL;
volatile int64_t x2651 = -1LL;
int64_t x2663 = INT64_MIN;
int8_t x2762 = -1;
int64_t x2873 = -1LL;
uint32_t x2876 = 3U;
static int32_t x3033 = -121610898;
int8_t x3064 = 1;
volatile int64_t t55 = 492397329660931LL;
volatile int8_t x3161 = INT8_MIN;
int8_t x3250 = -1;
static int32_t t59 = -33;
volatile int64_t t60 = 5702LL;
uint32_t x3416 = 5U;
uint64_t t64 = 12327638304233LLU;
static uint8_t x3464 = 3U;
int32_t x3540 = 1;
int64_t t68 = -100180922287631LL;
volatile uint64_t x3581 = 104089654125436LLU;
static uint8_t x3584 = 17U;
int32_t x3618 = -1;
static int32_t x3649 = INT32_MAX;
static uint16_t x3692 = 11U;
volatile uint32_t x3705 = UINT32_MAX;
int32_t x3850 = INT32_MIN;
volatile int64_t x4063 = -8LL;
uint64_t t80 = 945651021LLU;
int32_t x4125 = INT32_MIN;
static volatile uint8_t x4128 = 8U;
volatile uint64_t t81 = 254392018LLU;
int8_t x4247 = 5;
static uint32_t t84 = 3U;
int8_t x4350 = INT8_MIN;
int8_t x4384 = 8;
uint32_t t86 = 24640196U;
static volatile uint16_t x4432 = 30U;
int64_t x4435 = -3651LL;
static uint16_t x4436 = 1U;
uint32_t x4463 = 2577465U;
volatile uint64_t x4468 = 13LLU;
static uint8_t x4493 = 82U;
int64_t x4533 = -1LL;
static int32_t x4685 = 15;
static uint8_t x4688 = 6U;
volatile int32_t t94 = -928208407;
uint16_t x4692 = 14U;
int32_t x4809 = INT32_MAX;
volatile int64_t t96 = -708982373482502LL;
uint16_t x4942 = 452U;
static uint64_t x5108 = 4LLU;


void f0(void) {
	static int16_t x31 = -1;
	uint8_t x32 = 2U;
	int32_t t0 = -182520979;

	t0 = ((x29/(x30&x31))>>x32);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x103 = UINT8_MAX;
	uint32_t x104 = 21U;
	uint32_t t1 = 61U;

	t1 = ((x101/(x102&x103))>>x104);

	if (t1 != 24U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x198 = -3490866646177LL;
	int16_t x199 = INT16_MIN;
	volatile uint32_t x200 = 5U;
	int64_t t2 = -158453064028070380LL;

	t2 = ((x197/(x198&x199))>>x200);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x214 = -1;
	static uint8_t x215 = 1U;
	static volatile int8_t x216 = 10;
	static volatile uint32_t t3 = 53030U;

	t3 = ((x213/(x214&x215))>>x216);

	if (t3 != 4194303U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x229 = 8583941349624148LLU;
	int16_t x230 = INT16_MIN;
	volatile int16_t x231 = INT16_MIN;
	uint64_t t4 = 1440579407762LLU;

	t4 = ((x229/(x230&x231))>>x232);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x281 = 3939;
	uint32_t x283 = 122611U;
	volatile uint8_t x284 = 0U;
	volatile uint32_t t5 = 3862373U;

	t5 = ((x281/(x282&x283))>>x284);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x321 = -1;
	int32_t x323 = INT32_MAX;
	static uint8_t x324 = 4U;
	int64_t t6 = 113LL;

	t6 = ((x321/(x322&x323))>>x324);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x377 = INT8_MIN;
	uint64_t x378 = 5784472859788446LLU;
	int32_t x379 = 26;
	volatile uint16_t x380 = 39U;
	volatile uint64_t t7 = 16965477071831480LLU;

	t7 = ((x377/(x378&x379))>>x380);

	if (t7 != 1290555LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MAX;
	volatile int8_t x395 = -1;
	int16_t x396 = 0;
	volatile int32_t t8 = -2254091;

	t8 = ((x393/(x394&x395))>>x396);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x406 = INT64_MIN;
	static int64_t x407 = -1LL;
	uint32_t x408 = 46U;

	t9 = ((x405/(x406&x407))>>x408);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x413 = 202273319LLU;
	volatile uint64_t x415 = 150309493LLU;

	t10 = ((x413/(x414&x415))>>x416);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x505 = INT8_MIN;
	int8_t x506 = INT8_MIN;
	uint8_t x508 = 3U;
	volatile int32_t t11 = 3630945;

	t11 = ((x505/(x506&x507))>>x508);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x569 = 7;
	volatile int8_t x570 = INT8_MAX;
	uint64_t x571 = 112LLU;
	uint16_t x572 = 3U;
	uint64_t t12 = 2091676775LLU;

	t12 = ((x569/(x570&x571))>>x572);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x649 = 1437U;
	uint64_t x650 = 318388363LLU;
	volatile uint8_t x652 = 18U;
	uint64_t t13 = 2LLU;

	t13 = ((x649/(x650&x651))>>x652);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x657 = 0;
	uint16_t x658 = 110U;
	uint32_t x659 = 922283343U;
	volatile uint32_t t14 = 679862U;

	t14 = ((x657/(x658&x659))>>x660);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x685 = 1U;
	int16_t x686 = INT16_MAX;
	uint64_t x687 = 347LLU;
	int8_t x688 = 0;
	uint64_t t15 = 210669370138326673LLU;

	t15 = ((x685/(x686&x687))>>x688);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x774 = 1794243177U;
	int64_t x776 = 1LL;
	static uint32_t t16 = 505U;

	t16 = ((x773/(x774&x775))>>x776);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x861 = -11498;
	static uint16_t x862 = UINT16_MAX;
	int64_t x863 = -1LL;
	uint16_t x864 = 31U;
	volatile int64_t t17 = -33493982LL;

	t17 = ((x861/(x862&x863))>>x864);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x881 = INT32_MAX;
	int64_t x882 = -2093321950638034LL;
	int16_t x883 = INT16_MIN;
	static uint8_t x884 = 10U;
	static volatile int64_t t18 = -17LL;

	t18 = ((x881/(x882&x883))>>x884);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x917 = 1;
	static volatile int16_t x919 = INT16_MAX;
	volatile int32_t x920 = 23;
	volatile int32_t t19 = -189;

	t19 = ((x917/(x918&x919))>>x920);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x982 = INT8_MIN;
	volatile uint8_t x984 = 5U;
	int32_t t20 = -15;

	t20 = ((x981/(x982&x983))>>x984);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1025 = UINT16_MAX;
	uint32_t x1026 = 3584050U;
	static int16_t x1027 = INT16_MIN;
	int8_t x1028 = 11;

	t21 = ((x1025/(x1026&x1027))>>x1028);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1045 = -3;
	uint8_t x1048 = 1U;
	static volatile uint32_t t22 = 145U;

	t22 = ((x1045/(x1046&x1047))>>x1048);

	if (t22 != 38347922U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1189 = 1;
	uint8_t x1190 = UINT8_MAX;
	uint32_t x1191 = 58U;
	uint8_t x1192 = 0U;
	uint32_t t23 = 33U;

	t23 = ((x1189/(x1190&x1191))>>x1192);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1353 = -1;
	uint64_t x1354 = UINT64_MAX;
	uint8_t x1356 = 17U;
	static uint64_t t24 = 786647519213014LLU;

	t24 = ((x1353/(x1354&x1355))>>x1356);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1436 = 2U;

	t25 = ((x1433/(x1434&x1435))>>x1436);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1449 = 26;
	int64_t x1450 = -479LL;
	int16_t x1451 = INT16_MIN;

	t26 = ((x1449/(x1450&x1451))>>x1452);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1529 = 0U;
	int32_t x1531 = INT32_MIN;
	uint8_t x1532 = 10U;

	t27 = ((x1529/(x1530&x1531))>>x1532);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1581 = 28U;
	int32_t x1582 = INT32_MIN;
	static volatile int16_t x1583 = -3954;
	int16_t x1584 = 0;
	int32_t t28 = -6229029;

	t28 = ((x1581/(x1582&x1583))>>x1584);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1605 = 2036U;
	int64_t x1606 = -1708LL;
	int32_t x1607 = INT32_MAX;
	uint32_t x1608 = 14U;
	volatile int64_t t29 = 7LL;

	t29 = ((x1605/(x1606&x1607))>>x1608);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {


	t30 = ((x1629/(x1630&x1631))>>x1632);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1649 = 341990;
	static int8_t x1651 = -10;
	int8_t x1652 = 0;
	int32_t t31 = 1346217;

	t31 = ((x1649/(x1650&x1651))>>x1652);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1689 = 0;
	volatile uint32_t x1690 = 611076U;
	volatile int64_t x1691 = 25241730103980598LL;
	int8_t x1692 = 1;
	volatile int64_t t32 = 11575673795LL;

	t32 = ((x1689/(x1690&x1691))>>x1692);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1734 = INT16_MIN;
	uint16_t x1735 = UINT16_MAX;
	int8_t x1736 = 22;
	static volatile int32_t t33 = 10890059;

	t33 = ((x1733/(x1734&x1735))>>x1736);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1749 = -1;
	static int16_t x1750 = -1;
	static int8_t x1751 = INT8_MIN;
	static uint8_t x1752 = 2U;
	volatile int32_t t34 = 4645;

	t34 = ((x1749/(x1750&x1751))>>x1752);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1785 = INT16_MAX;
	int32_t x1787 = INT32_MIN;
	static volatile int64_t t35 = 6680207463LL;

	t35 = ((x1785/(x1786&x1787))>>x1788);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1997 = 1667558U;
	int32_t x1998 = -392846421;
	uint8_t x1999 = 3U;
	int8_t x2000 = 0;
	volatile uint32_t t36 = 647U;

	t36 = ((x1997/(x1998&x1999))>>x2000);

	if (t36 != 555852U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2025 = UINT64_MAX;
	uint32_t x2026 = 1860295U;
	int16_t x2027 = INT16_MAX;
	static uint8_t x2028 = 3U;

	t37 = ((x2025/(x2026&x2027))>>x2028);

	if (t37 != 91186894816059LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2033 = -1LL;
	uint32_t x2035 = 87U;
	uint32_t x2036 = 2U;
	volatile int64_t t38 = -8383043913520284LL;

	t38 = ((x2033/(x2034&x2035))>>x2036);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2054 = INT16_MIN;
	int64_t x2055 = -243LL;
	static int8_t x2056 = 1;

	t39 = ((x2053/(x2054&x2055))>>x2056);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2065 = -101;
	volatile uint8_t x2066 = UINT8_MAX;
	int32_t x2067 = INT32_MAX;
	uint8_t x2068 = 1U;
	volatile int32_t t40 = 1240901;

	t40 = ((x2065/(x2066&x2067))>>x2068);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x2181 = 14;
	volatile uint32_t x2182 = 4U;
	uint8_t x2184 = 46U;
	uint64_t t41 = 233732706544LLU;

	t41 = ((x2181/(x2182&x2183))>>x2184);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x2190 = 1;
	int16_t x2191 = INT16_MAX;
	static volatile uint32_t t42 = 3651U;

	t42 = ((x2189/(x2190&x2191))>>x2192);

	if (t42 != 536870911U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2289 = 32U;
	int8_t x2291 = INT8_MIN;

	t43 = ((x2289/(x2290&x2291))>>x2292);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2306 = -1;
	static int8_t x2307 = 53;
	volatile int64_t x2308 = 2LL;

	t44 = ((x2305/(x2306&x2307))>>x2308);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2550 = UINT8_MAX;
	uint32_t x2551 = 5510134U;
	uint32_t x2552 = 4U;
	int64_t t45 = 23LL;

	t45 = ((x2549/(x2550&x2551))>>x2552);

	if (t45 != 7885648LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2629 = -1;
	int8_t x2630 = 56;
	int32_t x2631 = INT32_MAX;
	int8_t x2632 = 1;
	int32_t t46 = -12;

	t46 = ((x2629/(x2630&x2631))>>x2632);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x2649 = -1;
	volatile int16_t x2650 = INT16_MIN;
	volatile uint32_t x2652 = 27U;
	static int64_t t47 = -967492581329975LL;

	t47 = ((x2649/(x2650&x2651))>>x2652);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2661 = 108U;
	static volatile int16_t x2662 = INT16_MIN;
	int32_t x2664 = 2;
	int64_t t48 = 250LL;

	t48 = ((x2661/(x2662&x2663))>>x2664);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2761 = INT32_MIN;
	int64_t x2763 = -1LL;
	int8_t x2764 = 2;
	int64_t t49 = 21917LL;

	t49 = ((x2761/(x2762&x2763))>>x2764);

	if (t49 != 536870912LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2793 = UINT8_MAX;
	int64_t x2794 = -3174832LL;
	uint8_t x2795 = 59U;
	uint64_t x2796 = 0LLU;
	static int64_t t50 = 5663LL;

	t50 = ((x2793/(x2794&x2795))>>x2796);

	if (t50 != 15LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2874 = 2803U;
	uint16_t x2875 = 902U;
	int64_t t51 = 65845052LL;

	t51 = ((x2873/(x2874&x2875))>>x2876);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2937 = INT16_MIN;
	uint16_t x2938 = UINT16_MAX;
	int32_t x2939 = -771359499;
	volatile uint8_t x2940 = 4U;
	volatile int32_t t52 = -6589;

	t52 = ((x2937/(x2938&x2939))>>x2940);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3021 = -3;
	volatile uint16_t x3022 = UINT16_MAX;
	static int16_t x3023 = INT16_MIN;
	int32_t x3024 = 12;
	static volatile int32_t t53 = 110006;

	t53 = ((x3021/(x3022&x3023))>>x3024);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3034 = -1;
	uint32_t x3035 = 5100U;
	int16_t x3036 = 0;
	uint32_t t54 = 16U;

	t54 = ((x3033/(x3034&x3035))>>x3036);

	if (t54 != 818305U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3061 = -1344434938233042383LL;
	int8_t x3062 = -9;
	int64_t x3063 = INT64_MIN;

	t55 = ((x3061/(x3062&x3063))>>x3064);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x3162 = 124;
	uint64_t x3163 = 487402LLU;
	static uint32_t x3164 = 1U;
	volatile uint64_t t56 = 181639308LLU;

	t56 = ((x3161/(x3162&x3163))>>x3164);

	if (t56 != 88686269585142074LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x3181 = INT8_MIN;
	uint64_t x3182 = 4548494200332422LLU;
	int32_t x3183 = -1;
	int16_t x3184 = 1;
	uint64_t t57 = 3110957847409LLU;

	t57 = ((x3181/(x3182&x3183))>>x3184);

	if (t57 != 2027LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3249 = 10847U;
	volatile int8_t x3251 = 1;
	int8_t x3252 = 0;
	volatile int32_t t58 = 17;

	t58 = ((x3249/(x3250&x3251))>>x3252);

	if (t58 != 10847) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3293 = 6U;
	uint8_t x3294 = 17U;
	volatile int32_t x3295 = 54841;
	int32_t x3296 = 0;

	t59 = ((x3293/(x3294&x3295))>>x3296);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3313 = -1LL;
	int16_t x3314 = -7;
	static int64_t x3315 = INT64_MAX;
	uint8_t x3316 = 8U;

	t60 = ((x3313/(x3314&x3315))>>x3316);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3345 = INT64_MIN;
	int32_t x3346 = INT32_MIN;
	uint64_t x3347 = UINT64_MAX;
	int8_t x3348 = 1;
	static volatile uint64_t t61 = 877760754175504894LLU;

	t61 = ((x3345/(x3346&x3347))>>x3348);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3381 = 42U;
	int32_t x3382 = INT32_MIN;
	int32_t x3383 = INT32_MIN;
	static int8_t x3384 = 1;
	volatile int32_t t62 = -11567;

	t62 = ((x3381/(x3382&x3383))>>x3384);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3405 = 479;
	int16_t x3406 = -1;
	int32_t x3407 = 225353;
	static int16_t x3408 = 2;
	static int32_t t63 = 2443;

	t63 = ((x3405/(x3406&x3407))>>x3408);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3413 = 81U;
	uint64_t x3414 = 2738959811730154LLU;
	int16_t x3415 = INT16_MAX;

	t64 = ((x3413/(x3414&x3415))>>x3416);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3441 = 3U;
	int16_t x3442 = INT16_MIN;
	uint32_t x3443 = 26649711U;
	int16_t x3444 = 0;
	static volatile uint32_t t65 = 0U;

	t65 = ((x3441/(x3442&x3443))>>x3444);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3461 = -1LL;
	volatile int8_t x3462 = INT8_MIN;
	int16_t x3463 = INT16_MAX;
	int64_t t66 = 4384LL;

	t66 = ((x3461/(x3462&x3463))>>x3464);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3537 = -1;
	volatile uint8_t x3538 = UINT8_MAX;
	static uint16_t x3539 = 112U;
	volatile int32_t t67 = 249095194;

	t67 = ((x3537/(x3538&x3539))>>x3540);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3561 = 1;
	volatile int64_t x3562 = 2469453269187840LL;
	int16_t x3563 = -1;
	uint16_t x3564 = 3U;

	t68 = ((x3561/(x3562&x3563))>>x3564);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3582 = INT64_MAX;
	static uint64_t x3583 = UINT64_MAX;
	uint64_t t69 = 11375LLU;

	t69 = ((x3581/(x3582&x3583))>>x3584);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x3617 = UINT16_MAX;
	volatile int16_t x3619 = 1;
	uint16_t x3620 = 1U;
	int32_t t70 = -50255;

	t70 = ((x3617/(x3618&x3619))>>x3620);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3650 = INT16_MAX;
	static volatile int32_t x3651 = -11745;
	int32_t x3652 = 1;
	volatile int32_t t71 = 343406634;

	t71 = ((x3649/(x3650&x3651))>>x3652);

	if (t71 != 51074) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3657 = -523479;
	uint32_t x3658 = 7U;
	static uint8_t x3659 = 89U;
	volatile int16_t x3660 = 8;
	static volatile uint32_t t72 = 109687U;

	t72 = ((x3657/(x3658&x3659))>>x3660);

	if (t72 != 16775171U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x3689 = UINT32_MAX;
	int8_t x3690 = 14;
	static int32_t x3691 = -1;
	volatile uint32_t t73 = 91U;

	t73 = ((x3689/(x3690&x3691))>>x3692);

	if (t73 != 149796U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3706 = INT8_MIN;
	static int64_t x3707 = INT64_MIN;
	static volatile int16_t x3708 = 0;
	int64_t t74 = 15395640822298242LL;

	t74 = ((x3705/(x3706&x3707))>>x3708);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3749 = INT8_MIN;
	int16_t x3750 = -1;
	volatile int64_t x3751 = 256187650LL;
	int32_t x3752 = 0;
	int64_t t75 = -59538280LL;

	t75 = ((x3749/(x3750&x3751))>>x3752);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3801 = INT16_MIN;
	static volatile uint64_t x3802 = 11LLU;
	static uint64_t x3803 = UINT64_MAX;
	static volatile uint8_t x3804 = 5U;
	static uint64_t t76 = 211588336LLU;

	t76 = ((x3801/(x3802&x3803))>>x3804);

	if (t76 != 52405522936674769LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x3849 = 0;
	int64_t x3851 = INT64_MIN;
	uint32_t x3852 = 31U;
	volatile int64_t t77 = 39456LL;

	t77 = ((x3849/(x3850&x3851))>>x3852);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3885 = INT32_MIN;
	static uint64_t x3886 = 1470LLU;
	static uint64_t x3887 = UINT64_MAX;
	volatile uint16_t x3888 = 31U;
	uint64_t t78 = 213590755081280LLU;

	t78 = ((x3885/(x3886&x3887))>>x3888);

	if (t78 != 5843492LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4017 = 306865998582319077LLU;
	int8_t x4018 = -15;
	int16_t x4019 = INT16_MIN;
	uint16_t x4020 = 12U;
	uint64_t t79 = 7765146LLU;

	t79 = ((x4017/(x4018&x4019))>>x4020);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4061 = 2866188LL;
	uint64_t x4062 = 3116508012430LLU;
	static volatile uint16_t x4064 = 3U;

	t80 = ((x4061/(x4062&x4063))>>x4064);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4126 = -1;
	uint64_t x4127 = UINT64_MAX;

	t81 = ((x4125/(x4126&x4127))>>x4128);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4205 = -1;
	int64_t x4206 = -8235477775525879LL;
	static int32_t x4207 = INT32_MAX;
	int16_t x4208 = 1;
	static volatile int64_t t82 = -1003204818578LL;

	t82 = ((x4205/(x4206&x4207))>>x4208);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4245 = 1;
	int16_t x4246 = -28;
	uint8_t x4248 = 4U;
	volatile int32_t t83 = 68241;

	t83 = ((x4245/(x4246&x4247))>>x4248);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4273 = INT8_MAX;
	static volatile int16_t x4274 = -1;
	static volatile uint32_t x4275 = 517300U;
	uint64_t x4276 = 1LLU;

	t84 = ((x4273/(x4274&x4275))>>x4276);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4349 = UINT64_MAX;
	static int16_t x4351 = -385;
	uint16_t x4352 = 33U;
	static uint64_t t85 = 16321045020666LLU;

	t85 = ((x4349/(x4350&x4351))>>x4352);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4381 = UINT32_MAX;
	uint8_t x4382 = 1U;
	static int32_t x4383 = -104821;

	t86 = ((x4381/(x4382&x4383))>>x4384);

	if (t86 != 16777215U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x4429 = INT8_MIN;
	static volatile uint8_t x4430 = 1U;
	uint32_t x4431 = UINT32_MAX;
	uint32_t t87 = 66192979U;

	t87 = ((x4429/(x4430&x4431))>>x4432);

	if (t87 != 3U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4433 = INT64_MAX;
	static int16_t x4434 = INT16_MAX;
	volatile int64_t t88 = -26042450LL;

	t88 = ((x4433/(x4434&x4435))>>x4436);

	if (t88 != 158384655645409LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4461 = -1;
	static int64_t x4462 = -4298921LL;
	static uint8_t x4464 = 7U;
	static int64_t t89 = 3021823LL;

	t89 = ((x4461/(x4462&x4463))>>x4464);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4465 = -2;
	uint64_t x4466 = 939562172603LLU;
	volatile int16_t x4467 = INT16_MAX;
	uint64_t t90 = 752LLU;

	t90 = ((x4465/(x4466&x4467))>>x4468);

	if (t90 != 12041710233610LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4494 = UINT8_MAX;
	int32_t x4495 = 6824;
	volatile int32_t x4496 = 1;
	int32_t t91 = -51870;

	t91 = ((x4493/(x4494&x4495))>>x4496);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4534 = INT8_MIN;
	static int8_t x4535 = -1;
	uint16_t x4536 = 1U;
	int64_t t92 = 56941512785LL;

	t92 = ((x4533/(x4534&x4535))>>x4536);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4569 = 0;
	int32_t x4570 = -436;
	static volatile int64_t x4571 = 2559127520704621074LL;
	uint16_t x4572 = 28U;
	volatile int64_t t93 = 356LL;

	t93 = ((x4569/(x4570&x4571))>>x4572);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4686 = 470U;
	static volatile uint16_t x4687 = 48U;

	t94 = ((x4685/(x4686&x4687))>>x4688);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x4689 = INT16_MAX;
	int64_t x4690 = -1LL;
	int8_t x4691 = 28;
	int64_t t95 = 733994545LL;

	t95 = ((x4689/(x4690&x4691))>>x4692);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4810 = INT32_MIN;
	int64_t x4811 = INT64_MIN;
	int8_t x4812 = 6;

	t96 = ((x4809/(x4810&x4811))>>x4812);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4941 = INT8_MAX;
	int8_t x4943 = -24;
	uint8_t x4944 = 2U;
	int32_t t97 = -389;

	t97 = ((x4941/(x4942&x4943))>>x4944);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5097 = -1;
	uint32_t x5098 = 27692383U;
	static uint8_t x5099 = 54U;
	uint16_t x5100 = 1U;
	uint32_t t98 = 12879U;

	t98 = ((x5097/(x5098&x5099))>>x5100);

	if (t98 != 97612893U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x5105 = 23U;
	int32_t x5106 = -484113;
	static int8_t x5107 = INT8_MIN;
	int32_t t99 = 302921179;

	t99 = ((x5105/(x5106&x5107))>>x5108);

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

