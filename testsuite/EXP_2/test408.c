#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x281 = UINT16_MAX;
static volatile uint8_t x284 = 61U;
int64_t x357 = INT64_MAX;
volatile int32_t x360 = -122;
volatile int64_t t1 = -4602015112525326737LL;
int8_t x541 = INT8_MAX;
int64_t x542 = 13560103429808996LL;
int8_t x675 = 1;
uint32_t t7 = 13865280U;
int64_t x809 = 158573229170668LL;
volatile int64_t t11 = 503185798787560189LL;
uint16_t x1374 = UINT16_MAX;
uint8_t x1465 = 61U;
static volatile uint8_t x1477 = 0U;
int16_t x1479 = 0;
int64_t x1505 = INT64_MAX;
uint8_t x1538 = UINT8_MAX;
static int32_t x1565 = INT32_MAX;
static int64_t x1567 = -686953287517484298LL;
static uint32_t x1669 = 4702119U;
volatile uint32_t t18 = 230410U;
int32_t x1725 = 328998159;
uint64_t x1769 = 1860003149834LLU;
int8_t x1772 = 5;
uint64_t x2009 = 1LLU;
uint64_t x2051 = UINT64_MAX;
uint8_t x2052 = UINT8_MAX;
volatile uint16_t x2061 = 0U;
volatile int32_t t23 = -125179;
static volatile int32_t t24 = 0;
volatile int64_t t26 = -878879058415LL;
int32_t x2137 = INT32_MAX;
volatile int32_t t28 = -339494;
static volatile int32_t t29 = -484280;
uint32_t x2197 = UINT32_MAX;
int64_t x2200 = INT64_MAX;
volatile int8_t x2383 = -7;
static int16_t x2456 = INT16_MIN;
int32_t t33 = -14591484;
static int8_t x2503 = 0;
volatile int32_t t34 = 3691191;
static int32_t x2671 = INT32_MIN;
volatile uint32_t t35 = 248313597U;
uint8_t x2693 = 24U;
volatile int32_t t36 = 4087635;
int32_t t37 = 2040;
int8_t x2911 = -1;
volatile int32_t t38 = 2132675;
int8_t x3168 = INT8_MIN;
volatile int16_t x3385 = INT16_MAX;
volatile uint16_t x3493 = UINT16_MAX;
int64_t t42 = 3832163693418LL;
int32_t x3563 = -1;
uint32_t x3598 = 67834U;
static volatile int64_t x3706 = INT64_MIN;
uint64_t x3707 = 46LLU;
int32_t t46 = 44665298;
int64_t x3962 = INT64_MIN;
int8_t x3964 = INT8_MIN;
int64_t x4061 = 63331LL;
int8_t x4108 = -1;
static volatile uint32_t t56 = 14312U;
int8_t x4320 = INT8_MIN;
static uint8_t x4710 = 3U;
uint8_t x4712 = UINT8_MAX;
int8_t x4782 = INT8_MIN;
uint8_t x4783 = 0U;
static volatile int32_t x4799 = -6;
int64_t x4800 = -1LL;
volatile uint32_t x5041 = 292838U;
volatile uint32_t t69 = 16017U;
static volatile uint8_t x5078 = 0U;
int64_t x5122 = -107LL;
static uint32_t x5123 = 0U;
volatile int32_t t71 = 4944470;
volatile int32_t t72 = -5;
volatile uint64_t t73 = 5193369127647067589LLU;
int64_t x5215 = -1LL;
uint8_t x5241 = 0U;
int32_t x5243 = INT32_MAX;
uint8_t x5423 = 120U;
int32_t x5447 = 14;
int64_t x5461 = 1803734245837703LL;
int64_t x5555 = -1LL;
int8_t x5669 = INT8_MAX;
int16_t x5816 = -7;
uint32_t x5902 = 83615360U;
uint64_t t86 = 4002754LLU;
static int8_t x5966 = 0;
int64_t x5967 = 1LL;
int32_t t88 = 48267;
int16_t x6181 = 28;
volatile int32_t t89 = 10023825;
int16_t x6217 = INT16_MAX;
int64_t x6220 = -11010501444914934LL;
int16_t x6240 = INT16_MAX;
static int16_t x6334 = -1;
int64_t x6382 = -1LL;
static volatile int32_t t95 = 165;
uint16_t x6611 = UINT16_MAX;
uint64_t x6612 = UINT64_MAX;
static int64_t x6924 = -404953822266397LL;
volatile uint64_t x6953 = 55051066610869888LLU;
int8_t x6955 = -22;
volatile int16_t x6969 = 444;


void f0(void) {
	uint16_t x282 = 0U;
	int16_t x283 = 273;
	int32_t t0 = 323;

	t0 = ((x281<<(x282*x283))%x284);

	if (t0 != 21) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x358 = 0;
	static int8_t x359 = INT8_MIN;

	t1 = ((x357<<(x358*x359))%x360);

	if (t1 != 7LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x537 = 116U;
	int32_t x538 = INT32_MIN;
	static uint8_t x539 = 0U;
	static int64_t x540 = INT64_MIN;
	int64_t t2 = 2177692757LL;

	t2 = ((x537<<(x538*x539))%x540);

	if (t2 != 116LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x543 = 0U;
	int32_t x544 = INT32_MIN;
	volatile int32_t t3 = -13494044;

	t3 = ((x541<<(x542*x543))%x544);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x605 = UINT64_MAX;
	static int8_t x606 = 0;
	int32_t x607 = INT32_MIN;
	static int32_t x608 = INT32_MAX;
	uint64_t t4 = 2595287179524LLU;

	t4 = ((x605<<(x606*x607))%x608);

	if (t4 != 3LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x609 = UINT8_MAX;
	uint32_t x610 = UINT32_MAX;
	uint8_t x611 = 0U;
	uint16_t x612 = 57U;
	volatile int32_t t5 = 13597780;

	t5 = ((x609<<(x610*x611))%x612);

	if (t5 != 27) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x673 = UINT8_MAX;
	uint8_t x674 = 3U;
	int16_t x676 = INT16_MIN;
	int32_t t6 = -29383923;

	t6 = ((x673<<(x674*x675))%x676);

	if (t6 != 2040) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x689 = 198;
	static int8_t x690 = -1;
	int64_t x691 = -1LL;
	uint32_t x692 = 25428U;

	t7 = ((x689<<(x690*x691))%x692);

	if (t7 != 396U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x810 = 12U;
	int8_t x811 = 0;
	int16_t x812 = INT16_MIN;
	volatile int64_t t8 = 45383241403LL;

	t8 = ((x809<<(x810*x811))%x812);

	if (t8 != 24556LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x857 = 73013270304487LLU;
	volatile int8_t x858 = 0;
	int16_t x859 = INT16_MIN;
	int32_t x860 = INT32_MAX;
	volatile uint64_t t9 = 609097LLU;

	t9 = ((x857<<(x858*x859))%x860);

	if (t9 != 973790134LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x985 = UINT32_MAX;
	static volatile int64_t x986 = -1LL;
	int32_t x987 = -1;
	int32_t x988 = INT32_MAX;
	static volatile uint32_t t10 = 499U;

	t10 = ((x985<<(x986*x987))%x988);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x1141 = INT64_MAX;
	int64_t x1142 = 0LL;
	int8_t x1143 = INT8_MIN;
	int32_t x1144 = 266525;

	t11 = ((x1141<<(x1142*x1143))%x1144);

	if (t11 != 227682LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x1373 = 23U;
	uint32_t x1375 = 0U;
	static uint16_t x1376 = 3U;
	int32_t t12 = 633974;

	t12 = ((x1373<<(x1374*x1375))%x1376);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x1466 = -6;
	uint64_t x1467 = UINT64_MAX;
	int16_t x1468 = -6481;
	volatile int32_t t13 = -318;

	t13 = ((x1465<<(x1466*x1467))%x1468);

	if (t13 != 3904) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1478 = INT16_MIN;
	static int64_t x1480 = INT64_MIN;
	volatile int64_t t14 = 322546LL;

	t14 = ((x1477<<(x1478*x1479))%x1480);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1506 = -155;
	int8_t x1507 = 0;
	int32_t x1508 = -1;
	volatile int64_t t15 = -57110129LL;

	t15 = ((x1505<<(x1506*x1507))%x1508);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1537 = INT32_MAX;
	int8_t x1539 = 0;
	static int32_t x1540 = 98;
	volatile int32_t t16 = 3250647;

	t16 = ((x1537<<(x1538*x1539))%x1540);

	if (t16 != 43) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1566 = 0U;
	static uint8_t x1568 = UINT8_MAX;
	volatile int32_t t17 = 949;

	t17 = ((x1565<<(x1566*x1567))%x1568);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1670 = 0U;
	volatile uint16_t x1671 = 4U;
	static int16_t x1672 = 549;

	t18 = ((x1669<<(x1670*x1671))%x1672);

	if (t18 != 483U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1726 = 0U;
	int8_t x1727 = INT8_MIN;
	int16_t x1728 = INT16_MAX;
	static int32_t t19 = -13224265;

	t19 = ((x1725<<(x1726*x1727))%x1728);

	if (t19 != 17479) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1770 = 0U;
	static int8_t x1771 = INT8_MAX;
	static uint64_t t20 = 1LLU;

	t20 = ((x1769<<(x1770*x1771))%x1772);

	if (t20 != 4LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x2010 = 0U;
	int64_t x2011 = INT64_MAX;
	int64_t x2012 = -444652893509965490LL;
	uint64_t t21 = 2069116267390738LLU;

	t21 = ((x2009<<(x2010*x2011))%x2012);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x2049 = 2974829631LL;
	int8_t x2050 = -29;
	volatile int64_t t22 = -5444782872LL;

	t22 = ((x2049<<(x2050*x2051))%x2052);

	if (t22 != 177LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2062 = -1;
	int8_t x2063 = -1;
	volatile int16_t x2064 = 2;

	t23 = ((x2061<<(x2062*x2063))%x2064);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x2073 = INT16_MAX;
	uint8_t x2074 = 1U;
	int8_t x2075 = 0;
	uint16_t x2076 = UINT16_MAX;

	t24 = ((x2073<<(x2074*x2075))%x2076);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x2085 = 2842854LLU;
	volatile uint32_t x2086 = UINT32_MAX;
	int8_t x2087 = -29;
	uint64_t x2088 = UINT64_MAX;
	volatile uint64_t t25 = 460LLU;

	t25 = ((x2085<<(x2086*x2087))%x2088);

	if (t25 != 1526245619662848LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x2105 = UINT8_MAX;
	int16_t x2106 = -1;
	uint64_t x2107 = UINT64_MAX;
	volatile int64_t x2108 = INT64_MAX;

	t26 = ((x2105<<(x2106*x2107))%x2108);

	if (t26 != 510LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2138 = 82548;
	static volatile uint32_t x2139 = 0U;
	static int64_t x2140 = -1LL;
	volatile int64_t t27 = 853246014337288512LL;

	t27 = ((x2137<<(x2138*x2139))%x2140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2177 = 38;
	uint8_t x2178 = 0U;
	int16_t x2179 = -1;
	int8_t x2180 = INT8_MAX;

	t28 = ((x2177<<(x2178*x2179))%x2180);

	if (t28 != 38) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x2181 = 22;
	volatile int8_t x2182 = 0;
	uint32_t x2183 = 115050453U;
	uint16_t x2184 = 2U;

	t29 = ((x2181<<(x2182*x2183))%x2184);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2198 = 4419391LLU;
	static int8_t x2199 = 0;
	static volatile int64_t t30 = -1521179731041113016LL;

	t30 = ((x2197<<(x2198*x2199))%x2200);

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x2305 = 5U;
	static int64_t x2306 = INT64_MAX;
	uint16_t x2307 = 0U;
	static uint8_t x2308 = UINT8_MAX;
	static volatile int32_t t31 = 0;

	t31 = ((x2305<<(x2306*x2307))%x2308);

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x2381 = 1;
	static int16_t x2382 = -1;
	uint32_t x2384 = UINT32_MAX;
	static volatile uint32_t t32 = 702546209U;

	t32 = ((x2381<<(x2382*x2383))%x2384);

	if (t32 != 128U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2453 = 6654U;
	uint8_t x2454 = 0U;
	volatile int64_t x2455 = INT64_MAX;

	t33 = ((x2453<<(x2454*x2455))%x2456);

	if (t33 != 6654) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2501 = 102U;
	int16_t x2502 = INT16_MIN;
	volatile int32_t x2504 = 431454;

	t34 = ((x2501<<(x2502*x2503))%x2504);

	if (t34 != 102) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2669 = 225455U;
	volatile uint16_t x2670 = 0U;
	uint8_t x2672 = 1U;

	t35 = ((x2669<<(x2670*x2671))%x2672);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2694 = INT32_MIN;
	static uint32_t x2695 = 314534894U;
	volatile int16_t x2696 = -1;

	t36 = ((x2693<<(x2694*x2695))%x2696);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2777 = 2460;
	volatile uint64_t x2778 = UINT64_MAX;
	uint64_t x2779 = UINT64_MAX;
	int16_t x2780 = -1;

	t37 = ((x2777<<(x2778*x2779))%x2780);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2909 = 206U;
	int8_t x2910 = -1;
	uint8_t x2912 = UINT8_MAX;

	t38 = ((x2909<<(x2910*x2911))%x2912);

	if (t38 != 157) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3165 = UINT64_MAX;
	uint64_t x3166 = UINT64_MAX;
	int16_t x3167 = -1;
	volatile uint64_t t39 = 231461366LLU;

	t39 = ((x3165<<(x3166*x3167))%x3168);

	if (t39 != 126LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x3386 = -1;
	volatile uint64_t x3387 = UINT64_MAX;
	int64_t x3388 = INT64_MAX;
	volatile int64_t t40 = 119LL;

	t40 = ((x3385<<(x3386*x3387))%x3388);

	if (t40 != 65534LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3413 = INT16_MAX;
	int8_t x3414 = -1;
	int32_t x3415 = -1;
	uint16_t x3416 = 24167U;
	int32_t t41 = -1808;

	t41 = ((x3413<<(x3414*x3415))%x3416);

	if (t41 != 17200) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3494 = -1LL;
	static int16_t x3495 = -1;
	int64_t x3496 = INT64_MAX;

	t42 = ((x3493<<(x3494*x3495))%x3496);

	if (t42 != 131070LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3561 = 201831996U;
	static int16_t x3562 = -1;
	uint8_t x3564 = 1U;
	volatile uint32_t t43 = 319U;

	t43 = ((x3561<<(x3562*x3563))%x3564);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3573 = UINT64_MAX;
	static volatile int32_t x3574 = -1;
	int32_t x3575 = -1;
	static int32_t x3576 = 196102;
	uint64_t t44 = 5LLU;

	t44 = ((x3573<<(x3574*x3575))%x3576);

	if (t44 != 136612LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3597 = 209955948LLU;
	uint8_t x3599 = 0U;
	uint64_t x3600 = 22807768403759LLU;
	uint64_t t45 = 52605694523LLU;

	t45 = ((x3597<<(x3598*x3599))%x3600);

	if (t45 != 209955948LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3705 = 1;
	uint8_t x3708 = 12U;

	t46 = ((x3705<<(x3706*x3707))%x3708);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3761 = 8174;
	volatile int16_t x3762 = 0;
	uint64_t x3763 = 3187600051622736LLU;
	static uint32_t x3764 = 1099U;
	uint32_t t47 = 733213084U;

	t47 = ((x3761<<(x3762*x3763))%x3764);

	if (t47 != 481U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3833 = 90LLU;
	static int16_t x3834 = -1;
	int64_t x3835 = -6LL;
	int8_t x3836 = -1;
	volatile uint64_t t48 = 54LLU;

	t48 = ((x3833<<(x3834*x3835))%x3836);

	if (t48 != 5760LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x3945 = 2696774323374645901LLU;
	uint64_t x3946 = UINT64_MAX;
	static int8_t x3947 = 0;
	uint16_t x3948 = UINT16_MAX;
	uint64_t t49 = 248305917463103996LLU;

	t49 = ((x3945<<(x3946*x3947))%x3948);

	if (t49 != 26131LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3961 = 2U;
	uint16_t x3963 = 0U;
	static uint32_t t50 = 505U;

	t50 = ((x3961<<(x3962*x3963))%x3964);

	if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x4062 = 25U;
	volatile uint8_t x4063 = 0U;
	static int32_t x4064 = 3105;
	volatile int64_t t51 = -146870LL;

	t51 = ((x4061<<(x4062*x4063))%x4064);

	if (t51 != 1231LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x4105 = INT16_MAX;
	int16_t x4106 = -1;
	uint8_t x4107 = 0U;
	int32_t t52 = 216437;

	t52 = ((x4105<<(x4106*x4107))%x4108);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x4221 = 47130U;
	int32_t x4222 = -1;
	int64_t x4223 = -3LL;
	int32_t x4224 = INT32_MIN;
	uint32_t t53 = 6469182U;

	t53 = ((x4221<<(x4222*x4223))%x4224);

	if (t53 != 377040U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4229 = UINT8_MAX;
	int64_t x4230 = INT64_MIN;
	volatile uint64_t x4231 = 8431088457651464800LLU;
	int16_t x4232 = 6529;
	int32_t t54 = 44;

	t54 = ((x4229<<(x4230*x4231))%x4232);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x4253 = INT8_MAX;
	static int32_t x4254 = INT32_MIN;
	volatile uint32_t x4255 = 654074U;
	uint16_t x4256 = 25U;
	volatile int32_t t55 = -324444579;

	t55 = ((x4253<<(x4254*x4255))%x4256);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x4301 = 1472053U;
	volatile uint64_t x4302 = UINT64_MAX;
	volatile int8_t x4303 = 0;
	volatile int8_t x4304 = INT8_MIN;

	t56 = ((x4301<<(x4302*x4303))%x4304);

	if (t56 != 1472053U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x4317 = 58983222U;
	static volatile int32_t x4318 = -7;
	static uint32_t x4319 = 0U;
	volatile uint32_t t57 = 2407U;

	t57 = ((x4317<<(x4318*x4319))%x4320);

	if (t57 != 58983222U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4333 = 1;
	int32_t x4334 = -1;
	static uint64_t x4335 = UINT64_MAX;
	int8_t x4336 = INT8_MIN;
	volatile int32_t t58 = 20851461;

	t58 = ((x4333<<(x4334*x4335))%x4336);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x4349 = 233;
	volatile int8_t x4350 = -1;
	static volatile int8_t x4351 = -1;
	volatile uint8_t x4352 = 7U;
	static int32_t t59 = 28753;

	t59 = ((x4349<<(x4350*x4351))%x4352);

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x4409 = INT32_MAX;
	int32_t x4410 = -1;
	int8_t x4411 = 0;
	static int16_t x4412 = INT16_MAX;
	volatile int32_t t60 = 2;

	t60 = ((x4409<<(x4410*x4411))%x4412);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4493 = 3022793;
	uint8_t x4494 = 0U;
	volatile uint64_t x4495 = 4815LLU;
	int32_t x4496 = INT32_MAX;
	static int32_t t61 = 0;

	t61 = ((x4493<<(x4494*x4495))%x4496);

	if (t61 != 3022793) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x4513 = 0;
	int8_t x4514 = -1;
	static int8_t x4515 = -1;
	int64_t x4516 = INT64_MAX;
	static int64_t t62 = 13573427LL;

	t62 = ((x4513<<(x4514*x4515))%x4516);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4593 = 4U;
	uint64_t x4594 = 1380054LLU;
	uint16_t x4595 = 0U;
	volatile int8_t x4596 = INT8_MIN;
	volatile int32_t t63 = 24292;

	t63 = ((x4593<<(x4594*x4595))%x4596);

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x4709 = UINT64_MAX;
	static uint8_t x4711 = 0U;
	volatile uint64_t t64 = 2036048279LLU;

	t64 = ((x4709<<(x4710*x4711))%x4712);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4781 = UINT16_MAX;
	static int8_t x4784 = INT8_MIN;
	static volatile int32_t t65 = 6;

	t65 = ((x4781<<(x4782*x4783))%x4784);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4797 = UINT64_MAX;
	static uint32_t x4798 = UINT32_MAX;
	uint64_t t66 = 910495862087738LLU;

	t66 = ((x4797<<(x4798*x4799))%x4800);

	if (t66 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4861 = INT8_MAX;
	volatile int64_t x4862 = INT64_MIN;
	int8_t x4863 = 0;
	int8_t x4864 = INT8_MAX;
	static int32_t t67 = -2803;

	t67 = ((x4861<<(x4862*x4863))%x4864);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x4933 = 26U;
	uint8_t x4934 = 0U;
	uint16_t x4935 = 2812U;
	int16_t x4936 = -9;
	volatile int32_t t68 = -787358;

	t68 = ((x4933<<(x4934*x4935))%x4936);

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x5042 = -1LL;
	int8_t x5043 = -1;
	int8_t x5044 = -1;

	t69 = ((x5041<<(x5042*x5043))%x5044);

	if (t69 != 585676U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x5077 = 557162U;
	int16_t x5079 = INT16_MIN;
	volatile uint8_t x5080 = 53U;
	uint32_t t70 = 10429U;

	t70 = ((x5077<<(x5078*x5079))%x5080);

	if (t70 != 26U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5121 = 492U;
	int32_t x5124 = -1;

	t71 = ((x5121<<(x5122*x5123))%x5124);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5137 = INT8_MAX;
	uint32_t x5138 = 2U;
	int8_t x5139 = 5;
	volatile int32_t x5140 = INT32_MIN;

	t72 = ((x5137<<(x5138*x5139))%x5140);

	if (t72 != 130048) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5157 = UINT64_MAX;
	uint8_t x5158 = 3U;
	static volatile uint8_t x5159 = 5U;
	int16_t x5160 = INT16_MAX;

	t73 = ((x5157<<(x5158*x5159))%x5160);

	if (t73 != 15LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x5213 = 1;
	int8_t x5214 = -4;
	static int64_t x5216 = -1LL;
	volatile int64_t t74 = 482238LL;

	t74 = ((x5213<<(x5214*x5215))%x5216);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x5242 = 0;
	volatile int16_t x5244 = INT16_MAX;
	volatile int32_t t75 = -699588674;

	t75 = ((x5241<<(x5242*x5243))%x5244);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x5389 = 6U;
	int16_t x5390 = -1;
	uint64_t x5391 = UINT64_MAX;
	volatile int32_t x5392 = -1;
	volatile int32_t t76 = 429;

	t76 = ((x5389<<(x5390*x5391))%x5392);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x5421 = 3;
	static volatile uint16_t x5422 = 0U;
	uint16_t x5424 = 29284U;
	volatile int32_t t77 = -13416852;

	t77 = ((x5421<<(x5422*x5423))%x5424);

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5445 = 30486405U;
	static uint16_t x5446 = 0U;
	volatile int64_t x5448 = 5479LL;
	volatile int64_t t78 = -8045LL;

	t78 = ((x5445<<(x5446*x5447))%x5448);

	if (t78 != 1249LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5462 = -1;
	uint8_t x5463 = 0U;
	uint16_t x5464 = 14494U;
	int64_t t79 = -112497322LL;

	t79 = ((x5461<<(x5462*x5463))%x5464);

	if (t79 != 2847LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5553 = UINT16_MAX;
	int16_t x5554 = -1;
	static volatile int32_t x5556 = INT32_MIN;
	volatile int32_t t80 = -3208;

	t80 = ((x5553<<(x5554*x5555))%x5556);

	if (t80 != 131070) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5629 = UINT32_MAX;
	static int32_t x5630 = -78099;
	int16_t x5631 = 0;
	uint16_t x5632 = 810U;
	volatile uint32_t t81 = 3U;

	t81 = ((x5629<<(x5630*x5631))%x5632);

	if (t81 != 615U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5670 = 26;
	int64_t x5671 = 0LL;
	int32_t x5672 = -128656520;
	static volatile int32_t t82 = 20;

	t82 = ((x5669<<(x5670*x5671))%x5672);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x5717 = 61072020184695189LLU;
	static int16_t x5718 = 0;
	uint16_t x5719 = 0U;
	int32_t x5720 = INT32_MIN;
	volatile uint64_t t83 = 2445919311664LLU;

	t83 = ((x5717<<(x5718*x5719))%x5720);

	if (t83 != 61072020184695189LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x5813 = 0;
	uint8_t x5814 = 0U;
	int32_t x5815 = -1030816;
	int32_t t84 = -11;

	t84 = ((x5813<<(x5814*x5815))%x5816);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x5865 = UINT32_MAX;
	uint8_t x5866 = 0U;
	int8_t x5867 = INT8_MIN;
	uint64_t x5868 = 188442102LLU;
	volatile uint64_t t85 = 8LLU;

	t85 = ((x5865<<(x5866*x5867))%x5868);

	if (t85 != 149241051LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5901 = 14809110199LLU;
	static int32_t x5903 = INT32_MIN;
	int32_t x5904 = -298;

	t86 = ((x5901<<(x5902*x5903))%x5904);

	if (t86 != 14809110199LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5965 = INT64_MAX;
	volatile int64_t x5968 = -3525296144273LL;
	volatile int64_t t87 = -410200704687647LL;

	t87 = ((x5965<<(x5966*x5967))%x5968);

	if (t87 != 2248043699260LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x6061 = 1;
	static int16_t x6062 = -1;
	static uint64_t x6063 = UINT64_MAX;
	int32_t x6064 = INT32_MIN;

	t88 = ((x6061<<(x6062*x6063))%x6064);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x6182 = UINT32_MAX;
	static volatile uint8_t x6183 = 0U;
	int16_t x6184 = -1;

	t89 = ((x6181<<(x6182*x6183))%x6184);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6218 = -1LL;
	int16_t x6219 = -1;
	volatile int64_t t90 = 211006LL;

	t90 = ((x6217<<(x6218*x6219))%x6220);

	if (t90 != 65534LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x6237 = UINT16_MAX;
	uint16_t x6238 = 0U;
	volatile int32_t x6239 = INT32_MIN;
	int32_t t91 = 1062939;

	t91 = ((x6237<<(x6238*x6239))%x6240);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6333 = 386;
	uint64_t x6335 = UINT64_MAX;
	int16_t x6336 = 27;
	static volatile int32_t t92 = -1933;

	t92 = ((x6333<<(x6334*x6335))%x6336);

	if (t92 != 16) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6381 = UINT64_MAX;
	volatile int16_t x6383 = -1;
	int64_t x6384 = -1LL;
	static uint64_t t93 = 58409958679646324LLU;

	t93 = ((x6381<<(x6382*x6383))%x6384);

	if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x6429 = INT8_MAX;
	uint64_t x6430 = UINT64_MAX;
	int16_t x6431 = 0;
	int16_t x6432 = -1;
	volatile int32_t t94 = 96883548;

	t94 = ((x6429<<(x6430*x6431))%x6432);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6597 = UINT8_MAX;
	uint16_t x6598 = 5U;
	uint16_t x6599 = 1U;
	int8_t x6600 = INT8_MAX;

	t95 = ((x6597<<(x6598*x6599))%x6600);

	if (t95 != 32) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6609 = UINT16_MAX;
	uint8_t x6610 = 0U;
	volatile uint64_t t96 = 4316001587289925LLU;

	t96 = ((x6609<<(x6610*x6611))%x6612);

	if (t96 != 65535LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6921 = 865U;
	int32_t x6922 = 0;
	int16_t x6923 = 1;
	int64_t t97 = 43021155592LL;

	t97 = ((x6921<<(x6922*x6923))%x6924);

	if (t97 != 865LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x6954 = 0U;
	int64_t x6956 = INT64_MIN;
	static volatile uint64_t t98 = 5443827LLU;

	t98 = ((x6953<<(x6954*x6955))%x6956);

	if (t98 != 55051066610869888LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6970 = 0;
	uint32_t x6971 = 1U;
	int8_t x6972 = INT8_MIN;
	static volatile int32_t t99 = -408268;

	t99 = ((x6969<<(x6970*x6971))%x6972);

	if (t99 != 60) { NG(); } else { ; }
	
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

