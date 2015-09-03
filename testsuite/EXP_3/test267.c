#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x60 = -5;
uint64_t x127 = UINT64_MAX;
uint32_t x141 = 154U;
int16_t x170 = INT16_MIN;
int8_t x188 = -1;
volatile int32_t t4 = 212468239;
volatile int16_t x362 = -1;
static volatile int16_t x421 = INT16_MIN;
volatile int8_t x434 = INT8_MIN;
uint64_t x435 = UINT64_MAX;
int32_t x572 = -1;
volatile uint32_t x658 = 482U;
int32_t t12 = -25;
volatile int32_t x706 = 13502;
int16_t x771 = 3;
int16_t x780 = -10;
volatile int32_t t16 = -171;
static int16_t x781 = 428;
static volatile int8_t x784 = -1;
volatile int32_t t18 = 48;
static uint8_t x891 = 1U;
int32_t t19 = 40569219;
volatile int8_t x960 = INT8_MIN;
uint16_t x969 = 2U;
static volatile int8_t x970 = 23;
int8_t x1001 = -29;
static volatile int32_t t24 = 367;
volatile int32_t t32 = -115193422;
static int32_t x1582 = INT32_MIN;
int16_t x1583 = INT16_MIN;
int32_t t33 = 10;
int32_t x1603 = INT32_MAX;
int32_t t34 = 1;
uint32_t x1669 = UINT32_MAX;
volatile int64_t x1672 = INT64_MIN;
volatile int32_t t36 = 831;
uint8_t x1691 = 24U;
uint64_t x1779 = UINT64_MAX;
uint64_t x1821 = UINT64_MAX;
volatile int16_t x1954 = 172;
static int8_t x2128 = -1;
uint32_t x2146 = 1592822078U;
static int8_t x2147 = INT8_MIN;
int16_t x2160 = -1;
volatile int8_t x2168 = -1;
static int8_t x2203 = -1;
volatile int8_t x2204 = -2;
volatile int32_t t47 = -11754;
int16_t x2233 = INT16_MAX;
uint32_t x2349 = 6601U;
int64_t x2351 = INT64_MIN;
int8_t x2364 = -12;
volatile int16_t x2463 = INT16_MIN;
int16_t x2464 = INT16_MIN;
static uint64_t x2530 = 73LLU;
int16_t x2532 = INT16_MIN;
static volatile int32_t x2609 = -50;
static int16_t x2610 = INT16_MIN;
volatile int16_t x2611 = -1;
static int32_t t53 = 32839364;
int16_t x2626 = INT16_MAX;
int8_t x2671 = -1;
int64_t x2677 = -1LL;
int32_t x2790 = INT32_MIN;
static int64_t x2841 = INT64_MIN;
int16_t x2876 = 0;
uint64_t x2941 = 35LLU;
static volatile int32_t x2944 = -1;
volatile int8_t x3022 = INT8_MIN;
static volatile int8_t x3023 = -1;
int32_t t63 = 26203;
int16_t x3070 = INT16_MIN;
static int32_t t64 = -40;
int16_t x3084 = -1;
volatile int16_t x3116 = 0;
int32_t t66 = -212294182;
int32_t t69 = -396115;
int32_t t70 = 31051580;
int8_t x3407 = -1;
static int64_t x3446 = INT64_MIN;
volatile int32_t t72 = 2879;
int32_t x3462 = 0;
static int32_t t73 = -1428485;
uint64_t x3467 = UINT64_MAX;
int16_t x3477 = -1;
int32_t t75 = -3;
static volatile uint8_t x3572 = UINT8_MAX;
volatile uint32_t x3579 = 13U;
int32_t t79 = 13646;
int32_t x3689 = 22733839;
int64_t x3690 = INT64_MIN;
int32_t x3691 = -1;
static int64_t x3702 = 13569779426536620LL;
static uint64_t x3721 = 627LLU;
volatile int32_t t84 = -17;
uint32_t x3834 = UINT32_MAX;
int8_t x3836 = -7;
int32_t t89 = -7298;
int64_t x4429 = INT64_MAX;
static int32_t x4544 = INT32_MIN;
uint8_t x4700 = 0U;
volatile uint16_t x4711 = 3U;
int64_t x4843 = -1LL;
uint32_t x4885 = 562685U;
uint8_t x4886 = UINT8_MAX;
static int16_t x4887 = -1;
int8_t x4888 = -1;


void f0(void) {
	static int8_t x57 = INT8_MIN;
	static uint32_t x58 = UINT32_MAX;
	static int32_t x59 = -1;
	volatile int32_t t0 = 97;

	t0 = ((x57==x58)>>(x59-x60));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x125 = -1LL;
	static int8_t x126 = -1;
	static int16_t x128 = -1;
	int32_t t1 = 4370594;

	t1 = ((x125==x126)>>(x127-x128));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x142 = INT16_MAX;
	static int32_t x143 = -1;
	static int16_t x144 = -1;
	static int32_t t2 = 340893;

	t2 = ((x141==x142)>>(x143-x144));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x171 = 2U;
	volatile uint64_t x172 = UINT64_MAX;
	int32_t t3 = -1;

	t3 = ((x169==x170)>>(x171-x172));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;

	t4 = ((x185==x186)>>(x187-x188));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x201 = 19009U;
	static uint64_t x202 = 160468LLU;
	uint8_t x203 = UINT8_MAX;
	static uint8_t x204 = UINT8_MAX;
	volatile int32_t t5 = -255173609;

	t5 = ((x201==x202)>>(x203-x204));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -14;
	uint8_t x331 = 0U;
	uint64_t x332 = UINT64_MAX;
	int32_t t6 = -117050054;

	t6 = ((x329==x330)>>(x331-x332));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x361 = 15117516412LLU;
	static uint16_t x363 = 6U;
	static volatile uint64_t x364 = UINT64_MAX;
	static volatile int32_t t7 = 62755;

	t7 = ((x361==x362)>>(x363-x364));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x422 = 7422U;
	uint8_t x423 = 24U;
	uint64_t x424 = UINT64_MAX;
	int32_t t8 = -323;

	t8 = ((x421==x422)>>(x423-x424));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x433 = 504972835806507LL;
	int8_t x436 = -1;
	int32_t t9 = 0;

	t9 = ((x433==x434)>>(x435-x436));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x569 = -6;
	int32_t x570 = INT32_MIN;
	int8_t x571 = 1;
	int32_t t10 = -925;

	t10 = ((x569==x570)>>(x571-x572));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x589 = INT64_MIN;
	static uint8_t x590 = 1U;
	uint8_t x591 = 25U;
	int8_t x592 = 0;
	static int32_t t11 = 6782618;

	t11 = ((x589==x590)>>(x591-x592));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x657 = INT32_MIN;
	int32_t x659 = INT32_MIN;
	int32_t x660 = INT32_MIN;

	t12 = ((x657==x658)>>(x659-x660));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x697 = UINT32_MAX;
	volatile uint8_t x698 = UINT8_MAX;
	static int16_t x699 = INT16_MIN;
	int16_t x700 = INT16_MIN;
	volatile int32_t t13 = 2346;

	t13 = ((x697==x698)>>(x699-x700));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x705 = UINT16_MAX;
	int32_t x707 = INT32_MAX;
	int32_t x708 = INT32_MAX;
	int32_t t14 = -12310;

	t14 = ((x705==x706)>>(x707-x708));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x769 = 611U;
	int8_t x770 = -1;
	static volatile int8_t x772 = -13;
	int32_t t15 = -131743;

	t15 = ((x769==x770)>>(x771-x772));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x777 = UINT64_MAX;
	volatile int8_t x778 = -1;
	volatile int8_t x779 = -8;

	t16 = ((x777==x778)>>(x779-x780));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x782 = INT16_MIN;
	uint16_t x783 = 5U;
	volatile int32_t t17 = -1;

	t17 = ((x781==x782)>>(x783-x784));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x857 = INT64_MIN;
	static int16_t x858 = -27;
	volatile int32_t x859 = 0;
	static volatile int8_t x860 = -1;

	t18 = ((x857==x858)>>(x859-x860));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x889 = 18326362267LLU;
	int8_t x890 = INT8_MIN;
	static int16_t x892 = -1;

	t19 = ((x889==x890)>>(x891-x892));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x957 = 69455U;
	static int16_t x958 = 31;
	int8_t x959 = INT8_MIN;
	volatile int32_t t20 = 1;

	t20 = ((x957==x958)>>(x959-x960));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x971 = 19;
	volatile int32_t x972 = -1;
	int32_t t21 = 61586;

	t21 = ((x969==x970)>>(x971-x972));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x977 = -1LL;
	uint32_t x978 = 10034520U;
	volatile uint64_t x979 = UINT64_MAX;
	int16_t x980 = -1;
	int32_t t22 = 710297;

	t22 = ((x977==x978)>>(x979-x980));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x993 = INT64_MIN;
	uint16_t x994 = UINT16_MAX;
	static int8_t x995 = -1;
	int64_t x996 = -1LL;
	int32_t t23 = -123383875;

	t23 = ((x993==x994)>>(x995-x996));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1002 = -180;
	static uint16_t x1003 = 10U;
	static volatile int16_t x1004 = -1;

	t24 = ((x1001==x1002)>>(x1003-x1004));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1041 = INT32_MAX;
	static uint64_t x1042 = 327413LLU;
	volatile int16_t x1043 = 7;
	static int32_t x1044 = -1;
	volatile int32_t t25 = 146;

	t25 = ((x1041==x1042)>>(x1043-x1044));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1073 = INT8_MIN;
	int8_t x1074 = INT8_MAX;
	int32_t x1075 = INT32_MIN;
	static int32_t x1076 = INT32_MIN;
	int32_t t26 = 5968651;

	t26 = ((x1073==x1074)>>(x1075-x1076));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x1245 = 10206089LL;
	volatile uint16_t x1246 = UINT16_MAX;
	uint8_t x1247 = 29U;
	volatile uint64_t x1248 = UINT64_MAX;
	int32_t t27 = -179577659;

	t27 = ((x1245==x1246)>>(x1247-x1248));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1261 = 2;
	uint8_t x1262 = 20U;
	static uint32_t x1263 = UINT32_MAX;
	int8_t x1264 = -1;
	volatile int32_t t28 = -137;

	t28 = ((x1261==x1262)>>(x1263-x1264));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x1369 = 7960516;
	uint16_t x1370 = 4574U;
	int16_t x1371 = -1;
	uint64_t x1372 = UINT64_MAX;
	volatile int32_t t29 = -5789253;

	t29 = ((x1369==x1370)>>(x1371-x1372));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1389 = 34535050LL;
	int16_t x1390 = 71;
	int64_t x1391 = -1LL;
	int32_t x1392 = -1;
	static volatile int32_t t30 = 28454233;

	t30 = ((x1389==x1390)>>(x1391-x1392));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1421 = INT16_MAX;
	int8_t x1422 = INT8_MIN;
	int8_t x1423 = INT8_MAX;
	int8_t x1424 = INT8_MAX;
	volatile int32_t t31 = 579698826;

	t31 = ((x1421==x1422)>>(x1423-x1424));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1561 = 340;
	int64_t x1562 = 821647636636748LL;
	uint16_t x1563 = UINT16_MAX;
	uint16_t x1564 = UINT16_MAX;

	t32 = ((x1561==x1562)>>(x1563-x1564));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1581 = 1U;
	int16_t x1584 = INT16_MIN;

	t33 = ((x1581==x1582)>>(x1583-x1584));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1601 = INT8_MIN;
	int32_t x1602 = -8;
	int32_t x1604 = INT32_MAX;

	t34 = ((x1601==x1602)>>(x1603-x1604));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x1633 = 118234LLU;
	volatile int16_t x1634 = INT16_MIN;
	int16_t x1635 = INT16_MIN;
	static volatile int16_t x1636 = INT16_MIN;
	int32_t t35 = 392944983;

	t35 = ((x1633==x1634)>>(x1635-x1636));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1670 = INT16_MIN;
	volatile int64_t x1671 = INT64_MIN;

	t36 = ((x1669==x1670)>>(x1671-x1672));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1689 = 2U;
	uint8_t x1690 = 1U;
	int8_t x1692 = -1;
	static volatile int32_t t37 = -245532;

	t37 = ((x1689==x1690)>>(x1691-x1692));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1733 = UINT32_MAX;
	uint64_t x1734 = UINT64_MAX;
	volatile uint8_t x1735 = 27U;
	static int8_t x1736 = -1;
	volatile int32_t t38 = 2904;

	t38 = ((x1733==x1734)>>(x1735-x1736));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1777 = INT32_MIN;
	static volatile int32_t x1778 = INT32_MIN;
	int64_t x1780 = -1LL;
	static int32_t t39 = 1;

	t39 = ((x1777==x1778)>>(x1779-x1780));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1822 = -1;
	static int64_t x1823 = -1LL;
	static volatile int16_t x1824 = -1;
	volatile int32_t t40 = 0;

	t40 = ((x1821==x1822)>>(x1823-x1824));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1953 = INT16_MIN;
	static int64_t x1955 = INT64_MIN;
	static int64_t x1956 = INT64_MIN;
	int32_t t41 = -828550;

	t41 = ((x1953==x1954)>>(x1955-x1956));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2125 = INT8_MAX;
	volatile uint8_t x2126 = 28U;
	volatile uint8_t x2127 = 4U;
	int32_t t42 = -2064038;

	t42 = ((x2125==x2126)>>(x2127-x2128));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x2145 = 46U;
	volatile int8_t x2148 = INT8_MIN;
	volatile int32_t t43 = 7300146;

	t43 = ((x2145==x2146)>>(x2147-x2148));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x2157 = -1;
	uint64_t x2158 = UINT64_MAX;
	static uint32_t x2159 = 0U;
	volatile int32_t t44 = 117;

	t44 = ((x2157==x2158)>>(x2159-x2160));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2165 = INT64_MIN;
	int32_t x2166 = 7849608;
	uint32_t x2167 = 9U;
	int32_t t45 = 0;

	t45 = ((x2165==x2166)>>(x2167-x2168));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2169 = 229532231646LL;
	uint32_t x2170 = UINT32_MAX;
	uint16_t x2171 = 7U;
	static uint64_t x2172 = UINT64_MAX;
	int32_t t46 = 643;

	t46 = ((x2169==x2170)>>(x2171-x2172));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2201 = 3776U;
	uint8_t x2202 = 0U;

	t47 = ((x2201==x2202)>>(x2203-x2204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2234 = -1;
	volatile int16_t x2235 = -1;
	int32_t x2236 = -1;
	int32_t t48 = -13274287;

	t48 = ((x2233==x2234)>>(x2235-x2236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2350 = INT8_MAX;
	int64_t x2352 = INT64_MIN;
	volatile int32_t t49 = -109;

	t49 = ((x2349==x2350)>>(x2351-x2352));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2361 = 45U;
	int64_t x2362 = -41003161787LL;
	static int8_t x2363 = 1;
	volatile int32_t t50 = 176842594;

	t50 = ((x2361==x2362)>>(x2363-x2364));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2461 = -27;
	int16_t x2462 = INT16_MIN;
	volatile int32_t t51 = -850530376;

	t51 = ((x2461==x2462)>>(x2463-x2464));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2529 = 1040LLU;
	int16_t x2531 = INT16_MIN;
	int32_t t52 = 63930938;

	t52 = ((x2529==x2530)>>(x2531-x2532));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2612 = -1;

	t53 = ((x2609==x2610)>>(x2611-x2612));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2625 = 1LL;
	int64_t x2627 = -1LL;
	int32_t x2628 = -1;
	volatile int32_t t54 = 407682;

	t54 = ((x2625==x2626)>>(x2627-x2628));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2669 = 4587737238248062221LL;
	static int16_t x2670 = 654;
	int64_t x2672 = -1LL;
	volatile int32_t t55 = 0;

	t55 = ((x2669==x2670)>>(x2671-x2672));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2678 = UINT64_MAX;
	int64_t x2679 = -1LL;
	int64_t x2680 = -1LL;
	int32_t t56 = -528705017;

	t56 = ((x2677==x2678)>>(x2679-x2680));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2693 = -1;
	uint16_t x2694 = 15830U;
	static uint8_t x2695 = 7U;
	static volatile int32_t x2696 = -1;
	static int32_t t57 = 49457;

	t57 = ((x2693==x2694)>>(x2695-x2696));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2789 = -1LL;
	int64_t x2791 = INT64_MAX;
	int64_t x2792 = INT64_MAX;
	volatile int32_t t58 = -32393;

	t58 = ((x2789==x2790)>>(x2791-x2792));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x2842 = -1;
	volatile uint8_t x2843 = 0U;
	volatile int64_t x2844 = -1LL;
	volatile int32_t t59 = 415;

	t59 = ((x2841==x2842)>>(x2843-x2844));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2873 = INT64_MIN;
	volatile int32_t x2874 = 23810532;
	int16_t x2875 = 0;
	volatile int32_t t60 = 1;

	t60 = ((x2873==x2874)>>(x2875-x2876));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2942 = -1LL;
	uint64_t x2943 = UINT64_MAX;
	volatile int32_t t61 = -22933;

	t61 = ((x2941==x2942)>>(x2943-x2944));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3021 = INT64_MIN;
	static int32_t x3024 = -1;
	volatile int32_t t62 = -80271;

	t62 = ((x3021==x3022)>>(x3023-x3024));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3057 = 2;
	int8_t x3058 = 1;
	uint8_t x3059 = 3U;
	int64_t x3060 = -1LL;

	t63 = ((x3057==x3058)>>(x3059-x3060));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3069 = INT64_MAX;
	volatile int16_t x3071 = 5;
	volatile uint16_t x3072 = 0U;

	t64 = ((x3069==x3070)>>(x3071-x3072));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3081 = INT64_MAX;
	volatile int16_t x3082 = INT16_MAX;
	volatile uint16_t x3083 = 1U;
	volatile int32_t t65 = 20222318;

	t65 = ((x3081==x3082)>>(x3083-x3084));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3113 = -1;
	int16_t x3114 = -1;
	static volatile int8_t x3115 = 3;

	t66 = ((x3113==x3114)>>(x3115-x3116));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3249 = 13U;
	uint8_t x3250 = UINT8_MAX;
	int32_t x3251 = -1;
	int32_t x3252 = -1;
	volatile int32_t t67 = 2841728;

	t67 = ((x3249==x3250)>>(x3251-x3252));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3253 = 3;
	uint8_t x3254 = UINT8_MAX;
	int32_t x3255 = -1;
	volatile int8_t x3256 = -1;
	volatile int32_t t68 = 5795606;

	t68 = ((x3253==x3254)>>(x3255-x3256));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x3289 = 2425U;
	int16_t x3290 = INT16_MAX;
	int64_t x3291 = INT64_MIN;
	int64_t x3292 = INT64_MIN;

	t69 = ((x3289==x3290)>>(x3291-x3292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x3397 = -1LL;
	int32_t x3398 = INT32_MIN;
	volatile int32_t x3399 = INT32_MIN;
	int32_t x3400 = INT32_MIN;

	t70 = ((x3397==x3398)>>(x3399-x3400));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3405 = UINT16_MAX;
	int8_t x3406 = INT8_MIN;
	uint64_t x3408 = UINT64_MAX;
	int32_t t71 = 3378737;

	t71 = ((x3405==x3406)>>(x3407-x3408));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3445 = 883;
	int8_t x3447 = -1;
	int16_t x3448 = -1;

	t72 = ((x3445==x3446)>>(x3447-x3448));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3461 = 4LLU;
	static int32_t x3463 = INT32_MIN;
	static int32_t x3464 = INT32_MIN;

	t73 = ((x3461==x3462)>>(x3463-x3464));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x3465 = INT16_MIN;
	int32_t x3466 = INT32_MIN;
	static volatile int8_t x3468 = -15;
	int32_t t74 = 26978127;

	t74 = ((x3465==x3466)>>(x3467-x3468));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x3478 = UINT32_MAX;
	static volatile uint8_t x3479 = 36U;
	int8_t x3480 = 25;

	t75 = ((x3477==x3478)>>(x3479-x3480));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x3569 = UINT64_MAX;
	int32_t x3570 = INT32_MIN;
	static uint8_t x3571 = UINT8_MAX;
	volatile int32_t t76 = -3;

	t76 = ((x3569==x3570)>>(x3571-x3572));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x3577 = INT32_MIN;
	volatile int8_t x3578 = -1;
	static uint64_t x3580 = UINT64_MAX;
	static volatile int32_t t77 = -48273048;

	t77 = ((x3577==x3578)>>(x3579-x3580));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x3613 = UINT8_MAX;
	volatile uint32_t x3614 = 46901443U;
	volatile int16_t x3615 = -1;
	uint64_t x3616 = UINT64_MAX;
	volatile int32_t t78 = -23351533;

	t78 = ((x3613==x3614)>>(x3615-x3616));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x3677 = INT64_MIN;
	int8_t x3678 = 0;
	volatile uint8_t x3679 = 4U;
	volatile int16_t x3680 = -1;

	t79 = ((x3677==x3678)>>(x3679-x3680));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3681 = -1LL;
	static volatile int64_t x3682 = INT64_MIN;
	volatile int8_t x3683 = -1;
	static int16_t x3684 = -1;
	volatile int32_t t80 = 10;

	t80 = ((x3681==x3682)>>(x3683-x3684));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3692 = -1;
	static volatile int32_t t81 = 7662;

	t81 = ((x3689==x3690)>>(x3691-x3692));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3701 = -6450;
	uint64_t x3703 = UINT64_MAX;
	int32_t x3704 = -1;
	volatile int32_t t82 = -973109;

	t82 = ((x3701==x3702)>>(x3703-x3704));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3722 = INT16_MAX;
	int32_t x3723 = -1;
	uint32_t x3724 = UINT32_MAX;
	int32_t t83 = -23914988;

	t83 = ((x3721==x3722)>>(x3723-x3724));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3817 = -1;
	volatile int16_t x3818 = INT16_MIN;
	int16_t x3819 = 12;
	uint8_t x3820 = 4U;

	t84 = ((x3817==x3818)>>(x3819-x3820));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3833 = INT32_MIN;
	static int8_t x3835 = -5;
	int32_t t85 = 829;

	t85 = ((x3833==x3834)>>(x3835-x3836));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3897 = INT16_MAX;
	int32_t x3898 = -1;
	volatile int16_t x3899 = -1;
	volatile int32_t x3900 = -1;
	int32_t t86 = 605630;

	t86 = ((x3897==x3898)>>(x3899-x3900));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3933 = INT64_MAX;
	int64_t x3934 = INT64_MAX;
	uint8_t x3935 = 1U;
	volatile int64_t x3936 = -1LL;
	volatile int32_t t87 = 2298296;

	t87 = ((x3933==x3934)>>(x3935-x3936));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3969 = 14429257;
	static int8_t x3970 = INT8_MAX;
	int16_t x3971 = INT16_MIN;
	int16_t x3972 = INT16_MIN;
	int32_t t88 = -58204213;

	t88 = ((x3969==x3970)>>(x3971-x3972));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4033 = INT16_MIN;
	uint16_t x4034 = UINT16_MAX;
	int16_t x4035 = 5;
	int16_t x4036 = 0;

	t89 = ((x4033==x4034)>>(x4035-x4036));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4229 = 90U;
	static int8_t x4230 = 10;
	uint8_t x4231 = 1U;
	int16_t x4232 = 0;
	int32_t t90 = -2034297;

	t90 = ((x4229==x4230)>>(x4231-x4232));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x4430 = -1;
	uint64_t x4431 = UINT64_MAX;
	int32_t x4432 = -1;
	int32_t t91 = 331897;

	t91 = ((x4429==x4430)>>(x4431-x4432));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x4453 = 11;
	volatile int64_t x4454 = -108071285868LL;
	int8_t x4455 = 25;
	int8_t x4456 = 7;
	static int32_t t92 = 173775;

	t92 = ((x4453==x4454)>>(x4455-x4456));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4489 = 2485859LL;
	static uint64_t x4490 = 174532905720022714LLU;
	static int16_t x4491 = INT16_MAX;
	int16_t x4492 = INT16_MAX;
	int32_t t93 = -49464;

	t93 = ((x4489==x4490)>>(x4491-x4492));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4541 = UINT64_MAX;
	int32_t x4542 = INT32_MAX;
	static volatile int32_t x4543 = INT32_MIN;
	volatile int32_t t94 = -1;

	t94 = ((x4541==x4542)>>(x4543-x4544));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4601 = INT8_MIN;
	volatile uint16_t x4602 = UINT16_MAX;
	int16_t x4603 = -1;
	int64_t x4604 = -1LL;
	volatile int32_t t95 = -13890096;

	t95 = ((x4601==x4602)>>(x4603-x4604));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4697 = 0U;
	int8_t x4698 = INT8_MIN;
	static int8_t x4699 = 15;
	volatile int32_t t96 = -235484088;

	t96 = ((x4697==x4698)>>(x4699-x4700));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4709 = 185U;
	int64_t x4710 = INT64_MIN;
	uint64_t x4712 = UINT64_MAX;
	static volatile int32_t t97 = 576780211;

	t97 = ((x4709==x4710)>>(x4711-x4712));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x4841 = UINT8_MAX;
	int8_t x4842 = 1;
	volatile int16_t x4844 = -1;
	volatile int32_t t98 = -10;

	t98 = ((x4841==x4842)>>(x4843-x4844));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t t99 = 144;

	t99 = ((x4885==x4886)>>(x4887-x4888));

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

