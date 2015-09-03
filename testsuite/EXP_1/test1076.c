#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x107 = INT32_MIN;
volatile uint16_t x108 = 9U;
int32_t x305 = INT32_MAX;
uint64_t x307 = 6042018117LLU;
int16_t x323 = 58;
int32_t t6 = 21170;
static volatile int16_t x437 = INT16_MAX;
static int16_t x438 = 7;
int8_t x440 = INT8_MIN;
volatile int8_t x538 = 27;
uint16_t x539 = 419U;
static volatile int32_t t8 = -500009;
static uint64_t x589 = 1463386722503409LLU;
int16_t x590 = 0;
uint64_t x591 = UINT64_MAX;
static uint16_t x649 = 116U;
uint32_t x665 = UINT32_MAX;
static volatile uint8_t x668 = UINT8_MAX;
uint8_t x690 = 3U;
int64_t x721 = INT64_MAX;
uint8_t x866 = 0U;
static int16_t x957 = 9;
int16_t x960 = INT16_MIN;
static uint16_t x1158 = 2U;
int8_t x1160 = INT8_MIN;
static int16_t x1178 = 2;
static int32_t t20 = 322604;
uint16_t x1251 = 28466U;
uint8_t x1270 = 1U;
int32_t t22 = -29241011;
volatile int16_t x1451 = INT16_MIN;
int32_t x1467 = 59331413;
volatile int64_t x1483 = INT64_MIN;
volatile uint16_t x1500 = 15438U;
uint32_t x1610 = 1U;
volatile uint64_t x1612 = 442LLU;
uint64_t x1632 = 19LLU;
volatile int64_t x1819 = 89677288LL;
static int32_t t34 = 3047743;
int8_t x1890 = 7;
int8_t x1892 = INT8_MIN;
volatile int32_t t35 = 9126;
static volatile int16_t x1899 = INT16_MAX;
int8_t x1903 = 1;
int8_t x1904 = 33;
volatile int32_t t37 = -307473;
volatile int16_t x2013 = 0;
int8_t x2099 = -1;
int32_t x2100 = -1;
int64_t x2153 = 2767200267915664193LL;
volatile int32_t t40 = -752708911;
static int64_t x2210 = 5LL;
volatile int32_t t41 = -81925118;
static volatile int8_t x2239 = -1;
static int64_t x2240 = INT64_MAX;
volatile int32_t x2261 = INT32_MAX;
int32_t x2263 = INT32_MAX;
static int8_t x2288 = 1;
volatile int32_t t45 = 12;
uint8_t x2554 = 34U;
int32_t x2556 = -1;
volatile uint16_t x2607 = UINT16_MAX;
int64_t x2608 = -1LL;
uint8_t x2778 = 0U;
int16_t x2779 = INT16_MIN;
static uint16_t x2825 = UINT16_MAX;
uint64_t x2995 = 234592474060551LLU;
int32_t x3013 = INT32_MAX;
volatile int16_t x3015 = INT16_MIN;
uint32_t x3016 = 28U;
uint64_t x3023 = 749485639LLU;
volatile int8_t x3042 = 21;
volatile int32_t x3043 = INT32_MAX;
int32_t t57 = 741445948;
volatile int16_t x3143 = INT16_MIN;
int32_t t59 = -1;
int16_t x3259 = -1;
int32_t t64 = -1;
volatile uint32_t x3469 = 0U;
uint16_t x3471 = UINT16_MAX;
volatile uint8_t x3642 = 2U;
int32_t t66 = 521684672;
static volatile int32_t t67 = -15342;
volatile uint64_t x3701 = UINT64_MAX;
uint8_t x3702 = 0U;
static int64_t x3720 = INT64_MAX;
static int32_t t69 = -5;
int16_t x3755 = 103;
static volatile uint8_t x3865 = 4U;
static uint32_t x3868 = 3U;
uint32_t x3913 = 598381U;
int32_t x3915 = 233116760;
static volatile int32_t x3945 = 113892;
static volatile int32_t t77 = 1;
uint64_t x3992 = 18195LLU;
volatile uint8_t x4314 = 15U;
int32_t x4316 = -1;
static volatile int32_t t82 = -13800821;
int32_t x4467 = -48474;
int32_t x4480 = -3923041;
int32_t t85 = 107138;
volatile uint8_t x4559 = UINT8_MAX;
uint8_t x4582 = 2U;
uint8_t x4583 = 25U;
int8_t x4608 = -1;
int32_t t89 = -13547068;
uint16_t x4790 = 14U;
int32_t t90 = 2572491;
static int8_t x4896 = -1;
static uint32_t x4905 = UINT32_MAX;
volatile int64_t x4907 = 116971317038LL;
int8_t x4908 = -1;
volatile int32_t t94 = 0;
static int32_t x4980 = INT32_MAX;
uint8_t x5034 = 25U;
int32_t t96 = -3286;
uint8_t x5042 = 0U;
static volatile uint8_t x5061 = 20U;
static int32_t t99 = -6504642;


void f0(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = 12;
	static uint16_t x91 = UINT16_MAX;
	int64_t x92 = INT64_MAX;
	int32_t t0 = -65061381;

	t0 = (((x89>>x90)%x91)<=x92);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x105 = 11;
	uint64_t x106 = 0LLU;
	int32_t t1 = 89400642;

	t1 = (((x105>>x106)%x107)<=x108);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x249 = 18132821862LLU;
	uint64_t x250 = 5LLU;
	volatile int32_t x251 = INT32_MIN;
	static uint64_t x252 = 170614287070LLU;
	int32_t t2 = 1421;

	t2 = (((x249>>x250)%x251)<=x252);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x306 = 14U;
	uint16_t x308 = UINT16_MAX;
	int32_t t3 = 0;

	t3 = (((x305>>x306)%x307)<=x308);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x309 = 5U;
	uint8_t x310 = 4U;
	static int64_t x311 = -1395892876LL;
	volatile uint64_t x312 = 9089878398917LLU;
	volatile int32_t t4 = 204479;

	t4 = (((x309>>x310)%x311)<=x312);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x321 = INT16_MAX;
	uint32_t x322 = 11U;
	int64_t x324 = INT64_MAX;
	volatile int32_t t5 = -175;

	t5 = (((x321>>x322)%x323)<=x324);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x409 = 2304;
	uint8_t x410 = 4U;
	uint16_t x411 = 268U;
	volatile uint16_t x412 = 65U;

	t6 = (((x409>>x410)%x411)<=x412);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x439 = INT32_MIN;
	volatile int32_t t7 = 11618308;

	t7 = (((x437>>x438)%x439)<=x440);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x537 = 464482321481960LLU;
	static int16_t x540 = -5;

	t8 = (((x537>>x538)%x539)<=x540);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x565 = UINT32_MAX;
	int8_t x566 = 1;
	uint32_t x567 = 31493338U;
	uint8_t x568 = 122U;
	int32_t t9 = 0;

	t9 = (((x565>>x566)%x567)<=x568);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x592 = INT32_MIN;
	static int32_t t10 = -143975022;

	t10 = (((x589>>x590)%x591)<=x592);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x650 = 0U;
	static uint8_t x651 = 88U;
	uint32_t x652 = 2U;
	static int32_t t11 = 10748;

	t11 = (((x649>>x650)%x651)<=x652);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x666 = 1U;
	int64_t x667 = -1LL;
	volatile int32_t t12 = -43585720;

	t12 = (((x665>>x666)%x667)<=x668);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x689 = 54175U;
	int16_t x691 = INT16_MIN;
	int64_t x692 = -69330538991LL;
	static int32_t t13 = 1;

	t13 = (((x689>>x690)%x691)<=x692);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x722 = 0;
	static volatile int32_t x723 = INT32_MIN;
	uint32_t x724 = 3050U;
	int32_t t14 = -233;

	t14 = (((x721>>x722)%x723)<=x724);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x733 = UINT64_MAX;
	uint8_t x734 = 1U;
	uint64_t x735 = 179803LLU;
	static uint32_t x736 = 20827967U;
	int32_t t15 = -7346;

	t15 = (((x733>>x734)%x735)<=x736);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x829 = 85U;
	static volatile uint64_t x830 = 0LLU;
	int64_t x831 = -1LL;
	int32_t x832 = INT32_MIN;
	static volatile int32_t t16 = 2975145;

	t16 = (((x829>>x830)%x831)<=x832);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x865 = 31868369674LL;
	int16_t x867 = -1;
	static volatile int64_t x868 = INT64_MAX;
	volatile int32_t t17 = 124;

	t17 = (((x865>>x866)%x867)<=x868);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x958 = 3U;
	volatile uint64_t x959 = 10822113684555001LLU;
	volatile int32_t t18 = 4241;

	t18 = (((x957>>x958)%x959)<=x960);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1157 = 53794054318238048LLU;
	int16_t x1159 = INT16_MAX;
	volatile int32_t t19 = -1607745;

	t19 = (((x1157>>x1158)%x1159)<=x1160);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1177 = UINT16_MAX;
	int16_t x1179 = -1;
	static int16_t x1180 = INT16_MIN;

	t20 = (((x1177>>x1178)%x1179)<=x1180);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1249 = 39;
	uint16_t x1250 = 1U;
	uint16_t x1252 = UINT16_MAX;
	static int32_t t21 = -15;

	t21 = (((x1249>>x1250)%x1251)<=x1252);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1269 = 69937016LL;
	uint32_t x1271 = 1U;
	static volatile int32_t x1272 = 4336573;

	t22 = (((x1269>>x1270)%x1271)<=x1272);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1277 = UINT64_MAX;
	int8_t x1278 = 0;
	int64_t x1279 = 5895LL;
	int16_t x1280 = INT16_MIN;
	int32_t t23 = 24;

	t23 = (((x1277>>x1278)%x1279)<=x1280);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1385 = UINT64_MAX;
	static uint32_t x1386 = 34U;
	static uint64_t x1387 = 568LLU;
	static int64_t x1388 = INT64_MAX;
	int32_t t24 = 37756198;

	t24 = (((x1385>>x1386)%x1387)<=x1388);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1449 = 0U;
	int32_t x1450 = 0;
	uint16_t x1452 = 3U;
	static volatile int32_t t25 = -3852;

	t25 = (((x1449>>x1450)%x1451)<=x1452);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1465 = 30U;
	uint32_t x1466 = 1U;
	uint8_t x1468 = 5U;
	static int32_t t26 = 557811;

	t26 = (((x1465>>x1466)%x1467)<=x1468);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1481 = 4U;
	uint8_t x1482 = 15U;
	int16_t x1484 = 155;
	static volatile int32_t t27 = -58;

	t27 = (((x1481>>x1482)%x1483)<=x1484);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1497 = 53;
	static int16_t x1498 = 4;
	volatile int64_t x1499 = 36LL;
	volatile int32_t t28 = 44728;

	t28 = (((x1497>>x1498)%x1499)<=x1500);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1569 = UINT64_MAX;
	int8_t x1570 = 52;
	uint16_t x1571 = 37U;
	int16_t x1572 = INT16_MAX;
	static int32_t t29 = -566469565;

	t29 = (((x1569>>x1570)%x1571)<=x1572);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1609 = 26U;
	int32_t x1611 = INT32_MAX;
	int32_t t30 = -32470646;

	t30 = (((x1609>>x1610)%x1611)<=x1612);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1629 = INT64_MAX;
	uint8_t x1630 = 56U;
	volatile int8_t x1631 = 19;
	volatile int32_t t31 = -48868;

	t31 = (((x1629>>x1630)%x1631)<=x1632);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1661 = UINT8_MAX;
	int8_t x1662 = 0;
	static uint64_t x1663 = UINT64_MAX;
	int64_t x1664 = -988229923837469810LL;
	volatile int32_t t32 = 367951057;

	t32 = (((x1661>>x1662)%x1663)<=x1664);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1817 = 183;
	uint8_t x1818 = 5U;
	static volatile int16_t x1820 = 3492;
	static int32_t t33 = -40298829;

	t33 = (((x1817>>x1818)%x1819)<=x1820);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1877 = 1U;
	static int8_t x1878 = 1;
	uint16_t x1879 = UINT16_MAX;
	int16_t x1880 = 458;

	t34 = (((x1877>>x1878)%x1879)<=x1880);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1889 = 828U;
	int8_t x1891 = -1;

	t35 = (((x1889>>x1890)%x1891)<=x1892);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1897 = INT32_MAX;
	uint16_t x1898 = 1U;
	int8_t x1900 = INT8_MAX;
	volatile int32_t t36 = -3;

	t36 = (((x1897>>x1898)%x1899)<=x1900);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1901 = 37U;
	uint16_t x1902 = 29U;

	t37 = (((x1901>>x1902)%x1903)<=x1904);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2014 = 2;
	uint8_t x2015 = UINT8_MAX;
	int32_t x2016 = -15385;
	static int32_t t38 = 3438854;

	t38 = (((x2013>>x2014)%x2015)<=x2016);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2097 = 15011345;
	int8_t x2098 = 3;
	int32_t t39 = 11;

	t39 = (((x2097>>x2098)%x2099)<=x2100);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2154 = 4U;
	int64_t x2155 = INT64_MAX;
	int64_t x2156 = 137586782688746770LL;

	t40 = (((x2153>>x2154)%x2155)<=x2156);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2209 = INT16_MAX;
	static uint32_t x2211 = UINT32_MAX;
	volatile int8_t x2212 = INT8_MIN;

	t41 = (((x2209>>x2210)%x2211)<=x2212);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2237 = UINT64_MAX;
	uint8_t x2238 = 6U;
	volatile int32_t t42 = -919429;

	t42 = (((x2237>>x2238)%x2239)<=x2240);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x2262 = 1U;
	volatile uint16_t x2264 = 12968U;
	static volatile int32_t t43 = -1792;

	t43 = (((x2261>>x2262)%x2263)<=x2264);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2285 = INT64_MAX;
	volatile uint16_t x2286 = 6U;
	uint8_t x2287 = 87U;
	volatile int32_t t44 = 25269;

	t44 = (((x2285>>x2286)%x2287)<=x2288);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2473 = INT8_MAX;
	int16_t x2474 = 15;
	static int64_t x2475 = INT64_MIN;
	volatile uint64_t x2476 = 109554166506LLU;

	t45 = (((x2473>>x2474)%x2475)<=x2476);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2509 = INT16_MAX;
	int8_t x2510 = 8;
	volatile int32_t x2511 = INT32_MAX;
	static volatile int32_t x2512 = INT32_MAX;
	static volatile int32_t t46 = 6;

	t46 = (((x2509>>x2510)%x2511)<=x2512);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2553 = UINT64_MAX;
	uint16_t x2555 = 321U;
	static int32_t t47 = 4935002;

	t47 = (((x2553>>x2554)%x2555)<=x2556);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2605 = 37546U;
	int8_t x2606 = 0;
	int32_t t48 = 454179;

	t48 = (((x2605>>x2606)%x2607)<=x2608);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2741 = 10U;
	uint8_t x2742 = 15U;
	int32_t x2743 = INT32_MIN;
	uint32_t x2744 = UINT32_MAX;
	int32_t t49 = 1676418;

	t49 = (((x2741>>x2742)%x2743)<=x2744);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2777 = UINT32_MAX;
	int8_t x2780 = INT8_MIN;
	int32_t t50 = 1;

	t50 = (((x2777>>x2778)%x2779)<=x2780);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2826 = 3U;
	volatile uint16_t x2827 = UINT16_MAX;
	uint64_t x2828 = 7285LLU;
	int32_t t51 = -7722984;

	t51 = (((x2825>>x2826)%x2827)<=x2828);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2877 = 32303U;
	volatile uint8_t x2878 = 0U;
	uint32_t x2879 = 548U;
	uint16_t x2880 = 0U;
	volatile int32_t t52 = 17;

	t52 = (((x2877>>x2878)%x2879)<=x2880);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2993 = UINT64_MAX;
	uint16_t x2994 = 14U;
	uint32_t x2996 = 5600U;
	int32_t t53 = 311;

	t53 = (((x2993>>x2994)%x2995)<=x2996);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3014 = 0U;
	int32_t t54 = -7063;

	t54 = (((x3013>>x3014)%x3015)<=x3016);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3021 = 48U;
	int16_t x3022 = 25;
	int64_t x3024 = INT64_MAX;
	volatile int32_t t55 = -1;

	t55 = (((x3021>>x3022)%x3023)<=x3024);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3041 = 410819;
	int32_t x3044 = INT32_MIN;
	int32_t t56 = 0;

	t56 = (((x3041>>x3042)%x3043)<=x3044);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3137 = 27815424U;
	volatile uint8_t x3138 = 17U;
	volatile uint64_t x3139 = 92835017565076680LLU;
	uint16_t x3140 = 1617U;

	t57 = (((x3137>>x3138)%x3139)<=x3140);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3141 = INT8_MAX;
	uint8_t x3142 = 13U;
	static int8_t x3144 = -1;
	volatile int32_t t58 = -89418510;

	t58 = (((x3141>>x3142)%x3143)<=x3144);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3177 = UINT8_MAX;
	int32_t x3178 = 3;
	int16_t x3179 = INT16_MIN;
	volatile uint16_t x3180 = UINT16_MAX;

	t59 = (((x3177>>x3178)%x3179)<=x3180);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x3257 = 1U;
	static int8_t x3258 = 4;
	uint16_t x3260 = 1U;
	int32_t t60 = 217308784;

	t60 = (((x3257>>x3258)%x3259)<=x3260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3297 = UINT64_MAX;
	int8_t x3298 = 1;
	static volatile int32_t x3299 = INT32_MIN;
	int32_t x3300 = INT32_MIN;
	volatile int32_t t61 = 92790;

	t61 = (((x3297>>x3298)%x3299)<=x3300);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3305 = 1754U;
	uint16_t x3306 = 23U;
	static uint16_t x3307 = 6346U;
	volatile int32_t x3308 = -50420;
	int32_t t62 = 17;

	t62 = (((x3305>>x3306)%x3307)<=x3308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3425 = 33;
	uint16_t x3426 = 3U;
	static uint64_t x3427 = 36LLU;
	int16_t x3428 = INT16_MAX;
	volatile int32_t t63 = 365193;

	t63 = (((x3425>>x3426)%x3427)<=x3428);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3429 = UINT16_MAX;
	int8_t x3430 = 0;
	static int8_t x3431 = INT8_MIN;
	static int16_t x3432 = -320;

	t64 = (((x3429>>x3430)%x3431)<=x3432);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3470 = 1;
	static int8_t x3472 = 1;
	int32_t t65 = 95;

	t65 = (((x3469>>x3470)%x3471)<=x3472);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3641 = 47247;
	int8_t x3643 = INT8_MAX;
	static int16_t x3644 = -7;

	t66 = (((x3641>>x3642)%x3643)<=x3644);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3649 = INT8_MAX;
	static int8_t x3650 = 1;
	uint8_t x3651 = UINT8_MAX;
	int64_t x3652 = INT64_MIN;

	t67 = (((x3649>>x3650)%x3651)<=x3652);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3703 = 3U;
	int16_t x3704 = 19;
	static int32_t t68 = 2187;

	t68 = (((x3701>>x3702)%x3703)<=x3704);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x3717 = UINT32_MAX;
	uint8_t x3718 = 3U;
	int32_t x3719 = INT32_MIN;

	t69 = (((x3717>>x3718)%x3719)<=x3720);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3725 = 1U;
	static int16_t x3726 = 1;
	uint16_t x3727 = 1U;
	static uint16_t x3728 = 497U;
	volatile int32_t t70 = 66810;

	t70 = (((x3725>>x3726)%x3727)<=x3728);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3753 = INT32_MAX;
	int64_t x3754 = 8LL;
	volatile int32_t x3756 = INT32_MAX;
	static volatile int32_t t71 = -7;

	t71 = (((x3753>>x3754)%x3755)<=x3756);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x3769 = 3677;
	static uint32_t x3770 = 3U;
	int64_t x3771 = 955539953LL;
	int32_t x3772 = INT32_MAX;
	volatile int32_t t72 = -235378711;

	t72 = (((x3769>>x3770)%x3771)<=x3772);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x3861 = UINT16_MAX;
	uint16_t x3862 = 22U;
	int32_t x3863 = -261425626;
	int8_t x3864 = -1;
	volatile int32_t t73 = -545345;

	t73 = (((x3861>>x3862)%x3863)<=x3864);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3866 = 23LLU;
	static int8_t x3867 = -1;
	int32_t t74 = -36688;

	t74 = (((x3865>>x3866)%x3867)<=x3868);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3881 = INT32_MAX;
	static volatile int8_t x3882 = 26;
	int8_t x3883 = INT8_MIN;
	uint8_t x3884 = UINT8_MAX;
	int32_t t75 = -157236;

	t75 = (((x3881>>x3882)%x3883)<=x3884);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3914 = 1;
	volatile int8_t x3916 = -1;
	static volatile int32_t t76 = 25376428;

	t76 = (((x3913>>x3914)%x3915)<=x3916);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3946 = 30U;
	uint8_t x3947 = 5U;
	int16_t x3948 = -13866;

	t77 = (((x3945>>x3946)%x3947)<=x3948);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3965 = 1U;
	int8_t x3966 = 1;
	static uint32_t x3967 = 2293191U;
	uint16_t x3968 = UINT16_MAX;
	int32_t t78 = 174730529;

	t78 = (((x3965>>x3966)%x3967)<=x3968);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3989 = 3123;
	volatile uint8_t x3990 = 1U;
	volatile int64_t x3991 = INT64_MIN;
	volatile int32_t t79 = 295326575;

	t79 = (((x3989>>x3990)%x3991)<=x3992);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4249 = 1U;
	int8_t x4250 = 18;
	volatile uint64_t x4251 = 45559427174629724LLU;
	volatile int16_t x4252 = INT16_MAX;
	volatile int32_t t80 = 0;

	t80 = (((x4249>>x4250)%x4251)<=x4252);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4297 = 36U;
	uint8_t x4298 = 8U;
	int16_t x4299 = -186;
	int8_t x4300 = 7;
	int32_t t81 = 1;

	t81 = (((x4297>>x4298)%x4299)<=x4300);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4313 = UINT32_MAX;
	uint8_t x4315 = UINT8_MAX;

	t82 = (((x4313>>x4314)%x4315)<=x4316);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x4445 = UINT64_MAX;
	int64_t x4446 = 1LL;
	uint64_t x4447 = UINT64_MAX;
	static uint32_t x4448 = 312934255U;
	static volatile int32_t t83 = 378228549;

	t83 = (((x4445>>x4446)%x4447)<=x4448);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4465 = 3;
	volatile uint8_t x4466 = 2U;
	volatile uint64_t x4468 = 3591634LLU;
	int32_t t84 = -5905021;

	t84 = (((x4465>>x4466)%x4467)<=x4468);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x4477 = UINT64_MAX;
	volatile int8_t x4478 = 1;
	int32_t x4479 = -208783194;

	t85 = (((x4477>>x4478)%x4479)<=x4480);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x4557 = INT64_MAX;
	int8_t x4558 = 0;
	int8_t x4560 = INT8_MIN;
	int32_t t86 = 0;

	t86 = (((x4557>>x4558)%x4559)<=x4560);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4581 = 3245784533963LL;
	int32_t x4584 = INT32_MIN;
	int32_t t87 = -2;

	t87 = (((x4581>>x4582)%x4583)<=x4584);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4605 = 7786LL;
	int8_t x4606 = 59;
	int64_t x4607 = 126714651930545LL;
	int32_t t88 = 1835;

	t88 = (((x4605>>x4606)%x4607)<=x4608);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x4629 = 5;
	uint8_t x4630 = 16U;
	static int8_t x4631 = -1;
	int64_t x4632 = 2LL;

	t89 = (((x4629>>x4630)%x4631)<=x4632);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4789 = UINT32_MAX;
	int32_t x4791 = 781;
	int8_t x4792 = INT8_MAX;

	t90 = (((x4789>>x4790)%x4791)<=x4792);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x4857 = 439;
	int8_t x4858 = 0;
	static int32_t x4859 = INT32_MAX;
	volatile uint64_t x4860 = 126551LLU;
	static volatile int32_t t91 = -67316;

	t91 = (((x4857>>x4858)%x4859)<=x4860);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x4893 = INT16_MAX;
	int64_t x4894 = 0LL;
	volatile int32_t x4895 = INT32_MIN;
	int32_t t92 = -15;

	t92 = (((x4893>>x4894)%x4895)<=x4896);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4906 = 25U;
	static volatile int32_t t93 = -661;

	t93 = (((x4905>>x4906)%x4907)<=x4908);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4965 = 836921185U;
	uint8_t x4966 = 13U;
	uint16_t x4967 = 53U;
	uint16_t x4968 = UINT16_MAX;

	t94 = (((x4965>>x4966)%x4967)<=x4968);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x4977 = 10068U;
	uint8_t x4978 = 22U;
	static int32_t x4979 = INT32_MAX;
	int32_t t95 = 6763815;

	t95 = (((x4977>>x4978)%x4979)<=x4980);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5033 = UINT32_MAX;
	int16_t x5035 = -1;
	int16_t x5036 = INT16_MIN;

	t96 = (((x5033>>x5034)%x5035)<=x5036);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5037 = INT64_MAX;
	uint16_t x5038 = 21U;
	volatile uint32_t x5039 = 1067558789U;
	uint16_t x5040 = 36U;
	volatile int32_t t97 = 52;

	t97 = (((x5037>>x5038)%x5039)<=x5040);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5041 = INT16_MAX;
	volatile int16_t x5043 = 2;
	int64_t x5044 = INT64_MIN;
	int32_t t98 = -21441;

	t98 = (((x5041>>x5042)%x5043)<=x5044);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5062 = 6U;
	static volatile uint16_t x5063 = 2U;
	volatile int16_t x5064 = INT16_MIN;

	t99 = (((x5061>>x5062)%x5063)<=x5064);

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

