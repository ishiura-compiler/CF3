#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = -1;
uint16_t x4 = 40U;
uint16_t x222 = 1U;
int64_t x223 = INT64_MIN;
int32_t t2 = 2531529;
int32_t t4 = 13380723;
int16_t x295 = INT16_MIN;
static int16_t x657 = 1;
int32_t x660 = -58469115;
volatile int32_t t9 = 1076;
int32_t x676 = INT32_MAX;
static volatile uint16_t x701 = UINT16_MAX;
volatile int8_t x767 = INT8_MIN;
int16_t x768 = INT16_MIN;
int32_t x816 = 52;
int64_t x840 = INT64_MIN;
uint32_t t15 = 541U;
uint16_t x1006 = 1U;
volatile int64_t t16 = 38615747394LL;
volatile int64_t x1128 = 43614628543453243LL;
uint8_t x1167 = UINT8_MAX;
uint32_t x1412 = 1483199992U;
int16_t x1486 = 2;
static int64_t x1504 = -12460950562602307LL;
int32_t t22 = -4896;
uint8_t x1621 = UINT8_MAX;
uint16_t x1671 = UINT16_MAX;
volatile int32_t t25 = -69843;
uint16_t x1733 = 1297U;
int8_t x1756 = INT8_MAX;
int8_t x1829 = 54;
static int8_t x1832 = 7;
int8_t x1862 = 1;
uint16_t x1865 = 0U;
static int64_t x1932 = 48306059785LL;
volatile int64_t t32 = -259492LL;
static volatile uint64_t t33 = UINT64_MAX;
int32_t x2095 = INT32_MAX;
int64_t x2184 = 236LL;
int64_t x2283 = -1LL;
volatile int32_t t36 = 91;
volatile uint64_t x2297 = UINT64_MAX;
static volatile int32_t t38 = -3127;
static int16_t x2337 = INT16_MAX;
static uint16_t x2340 = UINT16_MAX;
volatile int32_t t40 = -22;
volatile int8_t x2346 = 0;
int16_t x2413 = INT16_MAX;
volatile int16_t x2416 = -1;
uint32_t x2551 = 1576760729U;
static int32_t t45 = -208;
static uint32_t t46 = 7U;
int8_t x2750 = 12;
volatile int32_t t48 = -1179890;
volatile uint64_t x2808 = 182111241982840001LLU;
static volatile int32_t x2892 = -1;
uint8_t x3017 = 2U;
uint32_t x3095 = 77U;
uint32_t x3293 = 111715U;
uint32_t x3409 = UINT32_MAX;
uint32_t t57 = 321727U;
uint8_t x3450 = 0U;
uint8_t x3482 = 0U;
volatile int64_t t60 = 75485780328910645LL;
int8_t x3501 = 1;
static volatile uint8_t x3612 = UINT8_MAX;
volatile uint64_t t62 = 3103837878372453865LLU;
int8_t x3720 = 31;
static int8_t x3755 = -1;
int16_t x3792 = 10;
int16_t x3864 = -1031;
uint8_t x3930 = 6U;
volatile uint64_t t70 = 181918008275421945LLU;
int32_t x4320 = INT32_MIN;
int32_t t73 = 2948;
volatile uint32_t x4389 = 1U;
static int32_t t76 = 20526307;
uint8_t x4490 = 1U;
volatile uint8_t x4491 = 0U;
int64_t x4635 = -1LL;
uint64_t t83 = 1792LLU;
uint16_t x4875 = 0U;
int16_t x4876 = -14851;
volatile int8_t x4952 = INT8_MAX;
int16_t x5072 = INT16_MIN;
static int16_t x5128 = INT16_MAX;
int32_t x5164 = INT32_MAX;
int8_t x5298 = 1;
uint64_t x5386 = 7LLU;
static volatile int64_t x5388 = 786LL;
static uint32_t x5389 = 413U;
uint64_t x5505 = UINT64_MAX;
static int8_t x5506 = 36;
int64_t x5507 = -18485628020027358LL;
int32_t x5508 = -1103;
static volatile int64_t x5558 = 2LL;
int32_t t98 = 247531;
uint8_t x5613 = UINT8_MAX;
int32_t x5615 = 9025;


void f0(void) {
	uint32_t x1 = 328498303U;
	static uint8_t x2 = 13U;
	volatile uint32_t t0 = 21136U;

	t0 = ((x1<<x2)<<(x3<x4));

	if (t0 != 522174464U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x93 = 1U;
	uint16_t x94 = 0U;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = -1;
	volatile int32_t t1 = 141;

	t1 = ((x93<<x94)<<(x95<x96));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x221 = 65752;
	int64_t x224 = INT64_MIN;

	t2 = ((x221<<x222)<<(x223<x224));

	if (t2 != 131504) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x225 = UINT8_MAX;
	uint8_t x226 = 1U;
	uint8_t x227 = 2U;
	int8_t x228 = 1;
	int32_t t3 = -106;

	t3 = ((x225<<x226)<<(x227<x228));

	if (t3 != 510) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x257 = 1438U;
	int16_t x258 = 0;
	volatile uint8_t x259 = 6U;
	uint32_t x260 = 8062556U;

	t4 = ((x257<<x258)<<(x259<x260));

	if (t4 != 2876) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 36U;
	volatile int64_t x275 = INT64_MAX;
	uint32_t x276 = UINT32_MAX;
	uint64_t t5 = 1249LLU;

	t5 = ((x273<<x274)<<(x275<x276));

	if (t5 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x289 = 933U;
	int64_t x290 = 9LL;
	volatile uint8_t x291 = 0U;
	int8_t x292 = 24;
	int32_t t6 = 91842441;

	t6 = ((x289<<x290)<<(x291<x292));

	if (t6 != 955392) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x293 = 4642954957048LLU;
	static volatile int8_t x294 = 42;
	int8_t x296 = INT8_MAX;
	static volatile uint64_t t7 = 19LLU;

	t7 = ((x293<<x294)<<(x295<x296));

	if (t7 != 8252775948412256256LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x641 = INT8_MAX;
	int8_t x642 = 3;
	uint32_t x643 = 152821063U;
	uint32_t x644 = 11267423U;
	volatile int32_t t8 = -72269;

	t8 = ((x641<<x642)<<(x643<x644));

	if (t8 != 1016) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x658 = 8U;
	uint8_t x659 = UINT8_MAX;

	t9 = ((x657<<x658)<<(x659<x660));

	if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x673 = INT8_MAX;
	volatile int32_t x674 = 1;
	int64_t x675 = INT64_MIN;
	volatile int32_t t10 = 177439;

	t10 = ((x673<<x674)<<(x675<x676));

	if (t10 != 508) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x693 = UINT64_MAX;
	int8_t x694 = 31;
	volatile int16_t x695 = 2;
	static int16_t x696 = 0;
	volatile uint64_t t11 = 1094850548441LLU;

	t11 = ((x693<<x694)<<(x695<x696));

	if (t11 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x702 = 3;
	volatile int16_t x703 = INT16_MAX;
	int64_t x704 = -87015147393669LL;
	int32_t t12 = -51361;

	t12 = ((x701<<x702)<<(x703<x704));

	if (t12 != 524280) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x765 = 3;
	uint8_t x766 = 4U;
	int32_t t13 = 761452297;

	t13 = ((x765<<x766)<<(x767<x768));

	if (t13 != 48) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x813 = 2581645LLU;
	int8_t x814 = 54;
	uint8_t x815 = 78U;
	volatile uint64_t t14 = 487072642LLU;

	t14 = ((x813<<x814)<<(x815<x816));

	if (t14 != 2540030189836959744LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x837 = 225U;
	static int16_t x838 = 3;
	volatile uint8_t x839 = UINT8_MAX;

	t15 = ((x837<<x838)<<(x839<x840));

	if (t15 != 1800U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1005 = 2809189708120LL;
	static int16_t x1007 = INT16_MAX;
	static int16_t x1008 = INT16_MIN;

	t16 = ((x1005<<x1006)<<(x1007<x1008));

	if (t16 != 5618379416240LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1125 = 109U;
	static uint32_t x1126 = 17U;
	int16_t x1127 = INT16_MAX;
	int32_t t17 = -6345;

	t17 = ((x1125<<x1126)<<(x1127<x1128));

	if (t17 != 28573696) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x1165 = 113U;
	volatile uint8_t x1166 = 19U;
	int64_t x1168 = INT64_MIN;
	static volatile int32_t t18 = -289632;

	t18 = ((x1165<<x1166)<<(x1167<x1168));

	if (t18 != 59244544) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1409 = UINT16_MAX;
	int8_t x1410 = 1;
	int16_t x1411 = INT16_MAX;
	int32_t t19 = -408;

	t19 = ((x1409<<x1410)<<(x1411<x1412));

	if (t19 != 262140) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1441 = 1490U;
	int8_t x1442 = 2;
	uint64_t x1443 = 39686926981LLU;
	static int8_t x1444 = INT8_MAX;
	int32_t t20 = 1;

	t20 = ((x1441<<x1442)<<(x1443<x1444));

	if (t20 != 5960) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1485 = UINT32_MAX;
	int32_t x1487 = 108820;
	static volatile uint32_t x1488 = 252U;
	volatile uint32_t t21 = 358244U;

	t21 = ((x1485<<x1486)<<(x1487<x1488));

	if (t21 != 4294967292U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1501 = 2U;
	int64_t x1502 = 17LL;
	int64_t x1503 = INT64_MIN;

	t22 = ((x1501<<x1502)<<(x1503<x1504));

	if (t22 != 524288) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1573 = 236;
	int8_t x1574 = 0;
	int64_t x1575 = INT64_MIN;
	uint32_t x1576 = 34709U;
	int32_t t23 = 666;

	t23 = ((x1573<<x1574)<<(x1575<x1576));

	if (t23 != 472) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1622 = 4U;
	static int8_t x1623 = INT8_MIN;
	int16_t x1624 = INT16_MIN;
	volatile int32_t t24 = 250188190;

	t24 = ((x1621<<x1622)<<(x1623<x1624));

	if (t24 != 4080) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1669 = 10U;
	uint8_t x1670 = 4U;
	static int16_t x1672 = INT16_MIN;

	t25 = ((x1669<<x1670)<<(x1671<x1672));

	if (t25 != 160) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1734 = 1;
	static volatile int16_t x1735 = -1;
	static volatile int16_t x1736 = INT16_MIN;
	int32_t t26 = -629;

	t26 = ((x1733<<x1734)<<(x1735<x1736));

	if (t26 != 2594) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1741 = 811;
	static uint8_t x1742 = 20U;
	int8_t x1743 = INT8_MIN;
	uint32_t x1744 = 20719U;
	static int32_t t27 = -239538;

	t27 = ((x1741<<x1742)<<(x1743<x1744));

	if (t27 != 850395136) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1753 = INT64_MAX;
	uint16_t x1754 = 0U;
	volatile int64_t x1755 = INT64_MAX;
	int64_t t28 = INT64_MAX;

	t28 = ((x1753<<x1754)<<(x1755<x1756));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1830 = 2U;
	int16_t x1831 = -1;
	int32_t t29 = 507;

	t29 = ((x1829<<x1830)<<(x1831<x1832));

	if (t29 != 432) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1861 = 1676619550LLU;
	int64_t x1863 = -1LL;
	int32_t x1864 = -1;
	volatile uint64_t t30 = 326LLU;

	t30 = ((x1861<<x1862)<<(x1863<x1864));

	if (t30 != 3353239100LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1866 = 2U;
	int32_t x1867 = -7;
	uint32_t x1868 = 878U;
	int32_t t31 = 25574799;

	t31 = ((x1865<<x1866)<<(x1867<x1868));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1929 = 432461386LL;
	volatile uint8_t x1930 = 0U;
	int16_t x1931 = -124;

	t32 = ((x1929<<x1930)<<(x1931<x1932));

	if (t32 != 864922772LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2045 = UINT64_MAX;
	uint8_t x2046 = 0U;
	volatile uint64_t x2047 = UINT64_MAX;
	int16_t x2048 = INT16_MAX;

	t33 = ((x2045<<x2046)<<(x2047<x2048));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2093 = 690U;
	static int8_t x2094 = 1;
	int64_t x2096 = INT64_MAX;
	volatile uint32_t t34 = 0U;

	t34 = ((x2093<<x2094)<<(x2095<x2096));

	if (t34 != 2760U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x2181 = 18U;
	uint8_t x2182 = 6U;
	volatile int64_t x2183 = INT64_MIN;
	int32_t t35 = -866918;

	t35 = ((x2181<<x2182)<<(x2183<x2184));

	if (t35 != 2304) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2281 = 4U;
	int16_t x2282 = 2;
	int32_t x2284 = INT32_MIN;

	t36 = ((x2281<<x2282)<<(x2283<x2284));

	if (t36 != 16) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2298 = 4LL;
	int16_t x2299 = -1;
	static int16_t x2300 = 6621;
	volatile uint64_t t37 = 115705643080742LLU;

	t37 = ((x2297<<x2298)<<(x2299<x2300));

	if (t37 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x2309 = UINT8_MAX;
	uint16_t x2310 = 0U;
	int16_t x2311 = INT16_MAX;
	int16_t x2312 = 35;

	t38 = ((x2309<<x2310)<<(x2311<x2312));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2329 = UINT16_MAX;
	uint16_t x2330 = 1U;
	int64_t x2331 = 13597746LL;
	int8_t x2332 = 15;
	int32_t t39 = 750273;

	t39 = ((x2329<<x2330)<<(x2331<x2332));

	if (t39 != 131070) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2338 = 9U;
	int8_t x2339 = INT8_MIN;

	t40 = ((x2337<<x2338)<<(x2339<x2340));

	if (t40 != 33553408) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2345 = 8876372594034589613LLU;
	int64_t x2347 = -47LL;
	volatile int32_t x2348 = INT32_MIN;
	uint64_t t41 = 33LLU;

	t41 = ((x2345<<x2346)<<(x2347<x2348));

	if (t41 != 8876372594034589613LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2414 = 1;
	volatile int32_t x2415 = INT32_MIN;
	volatile int32_t t42 = -344389;

	t42 = ((x2413<<x2414)<<(x2415<x2416));

	if (t42 != 131068) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x2549 = 2U;
	int16_t x2550 = 23;
	int32_t x2552 = INT32_MIN;
	uint32_t t43 = 5U;

	t43 = ((x2549<<x2550)<<(x2551<x2552));

	if (t43 != 33554432U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2649 = 3U;
	int8_t x2650 = 14;
	uint64_t x2651 = 8727316757LLU;
	uint32_t x2652 = 745595691U;
	volatile uint32_t t44 = 729873U;

	t44 = ((x2649<<x2650)<<(x2651<x2652));

	if (t44 != 49152U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2657 = UINT8_MAX;
	uint16_t x2658 = 1U;
	int64_t x2659 = -1LL;
	int8_t x2660 = INT8_MIN;

	t45 = ((x2657<<x2658)<<(x2659<x2660));

	if (t45 != 510) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2693 = 56299461U;
	int32_t x2694 = 1;
	int64_t x2695 = INT64_MIN;
	uint64_t x2696 = 6420483754231839LLU;

	t46 = ((x2693<<x2694)<<(x2695<x2696));

	if (t46 != 112598922U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2749 = UINT32_MAX;
	int8_t x2751 = INT8_MIN;
	int32_t x2752 = -1;
	uint32_t t47 = 175175U;

	t47 = ((x2749<<x2750)<<(x2751<x2752));

	if (t47 != 4294959104U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2801 = 1U;
	volatile uint16_t x2802 = 6U;
	int64_t x2803 = INT64_MAX;
	static int16_t x2804 = INT16_MAX;

	t48 = ((x2801<<x2802)<<(x2803<x2804));

	if (t48 != 64) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2805 = 3277472LLU;
	static uint16_t x2806 = 6U;
	int16_t x2807 = 11864;
	volatile uint64_t t49 = 15193846026511762LLU;

	t49 = ((x2805<<x2806)<<(x2807<x2808));

	if (t49 != 419516416LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2889 = UINT8_MAX;
	uint16_t x2890 = 5U;
	uint16_t x2891 = 0U;
	volatile int32_t t50 = -6943;

	t50 = ((x2889<<x2890)<<(x2891<x2892));

	if (t50 != 8160) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2897 = 4;
	int8_t x2898 = 0;
	volatile int32_t x2899 = INT32_MIN;
	int16_t x2900 = INT16_MAX;
	static int32_t t51 = 50645659;

	t51 = ((x2897<<x2898)<<(x2899<x2900));

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2941 = UINT8_MAX;
	static uint8_t x2942 = 13U;
	int32_t x2943 = 825;
	volatile int32_t x2944 = -1;
	int32_t t52 = -159176;

	t52 = ((x2941<<x2942)<<(x2943<x2944));

	if (t52 != 2088960) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3018 = 3;
	int8_t x3019 = -1;
	uint32_t x3020 = 189699U;
	volatile int32_t t53 = 107084157;

	t53 = ((x3017<<x3018)<<(x3019<x3020));

	if (t53 != 16) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3093 = 479;
	int8_t x3094 = 1;
	int64_t x3096 = 8LL;
	int32_t t54 = 212;

	t54 = ((x3093<<x3094)<<(x3095<x3096));

	if (t54 != 958) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x3117 = 38U;
	uint32_t x3118 = 0U;
	int16_t x3119 = INT16_MAX;
	int64_t x3120 = INT64_MAX;
	int32_t t55 = -903212874;

	t55 = ((x3117<<x3118)<<(x3119<x3120));

	if (t55 != 76) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3294 = 0;
	int64_t x3295 = INT64_MIN;
	static int32_t x3296 = -285268912;
	volatile uint32_t t56 = 943021U;

	t56 = ((x3293<<x3294)<<(x3295<x3296));

	if (t56 != 223430U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3410 = 5;
	uint32_t x3411 = 2133278U;
	volatile int32_t x3412 = -1;

	t57 = ((x3409<<x3410)<<(x3411<x3412));

	if (t57 != 4294967232U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3445 = 0U;
	uint8_t x3446 = 5U;
	static int16_t x3447 = INT16_MIN;
	volatile uint8_t x3448 = UINT8_MAX;
	volatile int32_t t58 = -78838163;

	t58 = ((x3445<<x3446)<<(x3447<x3448));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3449 = 4U;
	volatile int16_t x3451 = INT16_MIN;
	int8_t x3452 = -1;
	int32_t t59 = 6840324;

	t59 = ((x3449<<x3450)<<(x3451<x3452));

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x3481 = 150312383LL;
	uint64_t x3483 = UINT64_MAX;
	int64_t x3484 = 8559259964LL;

	t60 = ((x3481<<x3482)<<(x3483<x3484));

	if (t60 != 150312383LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3502 = 2U;
	int16_t x3503 = -349;
	int8_t x3504 = INT8_MIN;
	volatile int32_t t61 = -50885684;

	t61 = ((x3501<<x3502)<<(x3503<x3504));

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3609 = 5LLU;
	uint32_t x3610 = 2U;
	uint64_t x3611 = 2132642LLU;

	t62 = ((x3609<<x3610)<<(x3611<x3612));

	if (t62 != 20LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3717 = 9U;
	int16_t x3718 = 0;
	int16_t x3719 = -1;
	static volatile int32_t t63 = 358205;

	t63 = ((x3717<<x3718)<<(x3719<x3720));

	if (t63 != 18) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3753 = 45U;
	uint8_t x3754 = 1U;
	int32_t x3756 = -1;
	volatile uint32_t t64 = 10412942U;

	t64 = ((x3753<<x3754)<<(x3755<x3756));

	if (t64 != 90U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3789 = UINT16_MAX;
	uint8_t x3790 = 1U;
	volatile int64_t x3791 = INT64_MAX;
	volatile int32_t t65 = 841556929;

	t65 = ((x3789<<x3790)<<(x3791<x3792));

	if (t65 != 131070) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x3793 = INT8_MAX;
	uint8_t x3794 = 1U;
	int16_t x3795 = INT16_MAX;
	int64_t x3796 = -887950374LL;
	volatile int32_t t66 = -6061275;

	t66 = ((x3793<<x3794)<<(x3795<x3796));

	if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3861 = 0U;
	int16_t x3862 = 3;
	static uint8_t x3863 = 21U;
	int32_t t67 = -3713;

	t67 = ((x3861<<x3862)<<(x3863<x3864));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3929 = UINT32_MAX;
	int8_t x3931 = INT8_MIN;
	volatile int32_t x3932 = INT32_MIN;
	uint32_t t68 = 472630U;

	t68 = ((x3929<<x3930)<<(x3931<x3932));

	if (t68 != 4294967232U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4009 = 1723762356LLU;
	int8_t x4010 = 7;
	uint64_t x4011 = UINT64_MAX;
	uint8_t x4012 = 80U;
	static uint64_t t69 = 640LLU;

	t69 = ((x4009<<x4010)<<(x4011<x4012));

	if (t69 != 220641581568LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4149 = 557925291840782LLU;
	uint16_t x4150 = 4U;
	uint16_t x4151 = UINT16_MAX;
	uint32_t x4152 = UINT32_MAX;

	t70 = ((x4149<<x4150)<<(x4151<x4152));

	if (t70 != 17853609338905024LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4317 = 2109526180U;
	uint8_t x4318 = 1U;
	int16_t x4319 = INT16_MIN;
	volatile uint32_t t71 = 83U;

	t71 = ((x4317<<x4318)<<(x4319<x4320));

	if (t71 != 4219052360U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4329 = INT16_MAX;
	uint8_t x4330 = 0U;
	uint64_t x4331 = UINT64_MAX;
	int16_t x4332 = 14;
	volatile int32_t t72 = -455;

	t72 = ((x4329<<x4330)<<(x4331<x4332));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4353 = UINT16_MAX;
	int16_t x4354 = 13;
	int64_t x4355 = -1LL;
	static volatile int32_t x4356 = INT32_MIN;

	t73 = ((x4353<<x4354)<<(x4355<x4356));

	if (t73 != 536862720) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x4377 = INT8_MAX;
	uint16_t x4378 = 3U;
	int8_t x4379 = INT8_MAX;
	int16_t x4380 = -1;
	int32_t t74 = 176124711;

	t74 = ((x4377<<x4378)<<(x4379<x4380));

	if (t74 != 1016) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x4390 = 3U;
	volatile int16_t x4391 = 0;
	static uint32_t x4392 = UINT32_MAX;
	volatile uint32_t t75 = 461940519U;

	t75 = ((x4389<<x4390)<<(x4391<x4392));

	if (t75 != 16U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4401 = 8504U;
	uint16_t x4402 = 2U;
	int64_t x4403 = 12080LL;
	volatile uint32_t x4404 = 1725523967U;

	t76 = ((x4401<<x4402)<<(x4403<x4404));

	if (t76 != 68032) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4469 = 2838480759LLU;
	static int64_t x4470 = 0LL;
	volatile int32_t x4471 = INT32_MIN;
	int32_t x4472 = -1;
	volatile uint64_t t77 = 7422671137708346826LLU;

	t77 = ((x4469<<x4470)<<(x4471<x4472));

	if (t77 != 5676961518LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x4489 = 3U;
	volatile uint64_t x4492 = 4035682042065296748LLU;
	int32_t t78 = 93193;

	t78 = ((x4489<<x4490)<<(x4491<x4492));

	if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x4497 = 27305;
	int16_t x4498 = 0;
	uint8_t x4499 = UINT8_MAX;
	int16_t x4500 = INT16_MIN;
	volatile int32_t t79 = 539786;

	t79 = ((x4497<<x4498)<<(x4499<x4500));

	if (t79 != 27305) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4633 = 124LLU;
	int8_t x4634 = 15;
	uint64_t x4636 = UINT64_MAX;
	uint64_t t80 = 10245906541982LLU;

	t80 = ((x4633<<x4634)<<(x4635<x4636));

	if (t80 != 4063232LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4657 = 155332LLU;
	volatile int8_t x4658 = 0;
	static int8_t x4659 = INT8_MIN;
	int32_t x4660 = INT32_MAX;
	uint64_t t81 = 253215827472345310LLU;

	t81 = ((x4657<<x4658)<<(x4659<x4660));

	if (t81 != 310664LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4681 = INT16_MAX;
	static int8_t x4682 = 1;
	int64_t x4683 = -1LL;
	uint8_t x4684 = 61U;
	volatile int32_t t82 = 155;

	t82 = ((x4681<<x4682)<<(x4683<x4684));

	if (t82 != 131068) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4749 = 16602711283347LLU;
	int32_t x4750 = 0;
	static int64_t x4751 = INT64_MIN;
	int64_t x4752 = INT64_MAX;

	t83 = ((x4749<<x4750)<<(x4751<x4752));

	if (t83 != 33205422566694LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4773 = 12U;
	uint16_t x4774 = 1U;
	int8_t x4775 = INT8_MIN;
	int8_t x4776 = 42;
	volatile int32_t t84 = 160303;

	t84 = ((x4773<<x4774)<<(x4775<x4776));

	if (t84 != 48) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4873 = UINT8_MAX;
	static uint32_t x4874 = 1U;
	int32_t t85 = 3;

	t85 = ((x4873<<x4874)<<(x4875<x4876));

	if (t85 != 510) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4893 = 289303708882752LL;
	uint16_t x4894 = 2U;
	int8_t x4895 = -1;
	int32_t x4896 = INT32_MIN;
	int64_t t86 = 433532062LL;

	t86 = ((x4893<<x4894)<<(x4895<x4896));

	if (t86 != 1157214835531008LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4909 = 762620063U;
	int32_t x4910 = 0;
	uint16_t x4911 = 50U;
	int8_t x4912 = -1;
	uint32_t t87 = 13966734U;

	t87 = ((x4909<<x4910)<<(x4911<x4912));

	if (t87 != 762620063U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x4949 = 0;
	uint8_t x4950 = 5U;
	int8_t x4951 = INT8_MIN;
	volatile int32_t t88 = 747451475;

	t88 = ((x4949<<x4950)<<(x4951<x4952));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5069 = UINT8_MAX;
	volatile uint64_t x5070 = 1LLU;
	volatile uint64_t x5071 = 25768075727854LLU;
	static volatile int32_t t89 = -7;

	t89 = ((x5069<<x5070)<<(x5071<x5072));

	if (t89 != 1020) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x5125 = 0;
	volatile int8_t x5126 = 1;
	uint64_t x5127 = UINT64_MAX;
	int32_t t90 = 37;

	t90 = ((x5125<<x5126)<<(x5127<x5128));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x5161 = UINT32_MAX;
	volatile uint8_t x5162 = 1U;
	int16_t x5163 = INT16_MIN;
	uint32_t t91 = 14U;

	t91 = ((x5161<<x5162)<<(x5163<x5164));

	if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x5249 = 1LL;
	int64_t x5250 = 39LL;
	uint64_t x5251 = 6365055LLU;
	uint16_t x5252 = UINT16_MAX;
	int64_t t92 = 895893LL;

	t92 = ((x5249<<x5250)<<(x5251<x5252));

	if (t92 != 549755813888LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5289 = 0;
	uint8_t x5290 = 2U;
	static int32_t x5291 = INT32_MIN;
	int16_t x5292 = INT16_MAX;
	volatile int32_t t93 = -7815;

	t93 = ((x5289<<x5290)<<(x5291<x5292));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x5297 = 1;
	int16_t x5299 = INT16_MIN;
	int64_t x5300 = 2399969107627151LL;
	volatile int32_t t94 = -258169321;

	t94 = ((x5297<<x5298)<<(x5299<x5300));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x5385 = 2U;
	uint8_t x5387 = UINT8_MAX;
	uint32_t t95 = 1990435U;

	t95 = ((x5385<<x5386)<<(x5387<x5388));

	if (t95 != 512U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5390 = 0U;
	volatile uint8_t x5391 = 69U;
	uint16_t x5392 = UINT16_MAX;
	volatile uint32_t t96 = 1095561587U;

	t96 = ((x5389<<x5390)<<(x5391<x5392));

	if (t96 != 826U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t t97 = 82437483107110508LLU;

	t97 = ((x5505<<x5506)<<(x5507<x5508));

	if (t97 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5557 = 1;
	volatile int8_t x5559 = 23;
	volatile int64_t x5560 = 74247831772490934LL;

	t98 = ((x5557<<x5558)<<(x5559<x5560));

	if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5614 = 4U;
	int16_t x5616 = INT16_MAX;
	int32_t t99 = -13;

	t99 = ((x5613<<x5614)<<(x5615<x5616));

	if (t99 != 8160) { NG(); } else { ; }
	
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

