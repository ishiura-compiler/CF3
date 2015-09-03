#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x322 = -1;
int32_t x432 = 1;
int64_t t4 = -285325LL;
uint64_t x563 = 964LLU;
volatile int64_t t6 = 0LL;
volatile int16_t x659 = -1;
uint64_t t8 = 373LLU;
int16_t x741 = -1;
static int32_t x744 = 0;
int64_t x922 = INT64_MAX;
volatile uint16_t x1027 = 1U;
volatile uint64_t t14 = 62304640517255680LLU;
uint16_t x1300 = 6U;
uint64_t x1331 = UINT64_MAX;
volatile int32_t x1338 = INT32_MIN;
static volatile uint8_t x1364 = 11U;
uint8_t x1406 = UINT8_MAX;
volatile uint64_t t20 = 2LLU;
int8_t x1565 = INT8_MIN;
uint8_t x1566 = UINT8_MAX;
volatile int32_t t22 = -55028;
int8_t x1637 = -1;
uint32_t x1639 = 254U;
int32_t x1825 = 207622314;
int8_t x1912 = 0;
int8_t x1992 = 0;
static int8_t x2005 = -1;
int8_t x2174 = INT8_MAX;
int64_t x2267 = INT64_MIN;
int32_t x2268 = 21;
int8_t x2278 = INT8_MIN;
static int32_t x2279 = 0;
uint64_t x2343 = 1605004047215LLU;
uint64_t t34 = 134049016715LLU;
int16_t x2477 = INT16_MAX;
static uint16_t x2478 = 311U;
static volatile uint16_t x2581 = UINT16_MAX;
int16_t x2582 = INT16_MIN;
int8_t x2583 = INT8_MIN;
int8_t x2652 = 28;
uint64_t x2701 = 7867122LLU;
int8_t x2703 = INT8_MIN;
int32_t x2733 = -13180;
int64_t x2813 = 1LL;
static int64_t x2948 = 2LL;
int64_t x3103 = -16544544LL;
volatile int32_t x3265 = -13121653;
uint8_t x3280 = 7U;
volatile int8_t x3334 = -51;
static uint8_t x3440 = 45U;
volatile int8_t x3475 = 0;
uint8_t x3822 = UINT8_MAX;
uint64_t x3838 = 33163982654LLU;
uint64_t t64 = UINT64_MAX;
int16_t x3911 = -1;
uint32_t x3912 = 2U;
int16_t x3933 = -1;
uint64_t t67 = 2031799LLU;
static volatile int32_t x4089 = INT32_MIN;
int16_t x4091 = 0;
volatile uint32_t t72 = 0U;
int32_t x4189 = 1459;
int8_t x4191 = 5;
uint16_t x4240 = 1U;
int64_t x4315 = 87242165902904LL;
uint16_t x4330 = 3974U;
static volatile uint64_t x4331 = 788681366970276446LLU;
volatile uint64_t t77 = 202126068158LLU;
int32_t x4602 = -1;
int64_t t82 = -1190LL;
volatile int32_t t83 = 6;
uint16_t x4668 = 4U;
volatile int64_t t84 = 3560360207437229158LL;
static volatile uint64_t t85 = 767012LLU;
static uint32_t x4814 = 212U;
static uint64_t x4858 = UINT64_MAX;
static int16_t x4860 = 59;
int64_t t91 = 295421554869LL;
volatile int64_t t92 = -1355449032073327LL;
static int8_t x5111 = -1;
uint32_t x5112 = 11U;
volatile int64_t t93 = -63243008LL;
uint16_t x5201 = 8120U;
uint64_t x5305 = 11950LLU;
static uint64_t t96 = 2475541728LLU;
uint32_t x5316 = 2U;


void f0(void) {
	volatile int32_t x321 = INT32_MIN;
	int8_t x323 = -1;
	int16_t x324 = 0;
	int32_t t0 = -3387157;

	t0 = (((x321|x322)*x323)>>x324);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x429 = -1LL;
	volatile uint64_t x430 = UINT64_MAX;
	static int16_t x431 = -1;
	volatile uint64_t t1 = 8502781321902023857LLU;

	t1 = (((x429|x430)*x431)>>x432);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x437 = INT64_MIN;
	volatile uint64_t x438 = 20694424005450LLU;
	uint32_t x439 = 2925U;
	uint8_t x440 = 45U;
	uint64_t t2 = 2024269753252115582LLU;

	t2 = (((x437|x438)*x439)>>x440);

	if (t2 != 263864LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x469 = 38;
	uint32_t x470 = 439U;
	static volatile int64_t x471 = 6895015317903LL;
	static uint16_t x472 = 22U;
	volatile int64_t t3 = 3LL;

	t3 = (((x469|x470)*x471)>>x472);

	if (t3 != 721671992LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MIN;
	int32_t x487 = INT32_MIN;
	static volatile int8_t x488 = 0;

	t4 = (((x485|x486)*x487)>>x488);

	if (t4 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x561 = UINT32_MAX;
	int16_t x562 = -1;
	uint64_t x564 = 13LLU;
	uint64_t t5 = 1956807959419035771LLU;

	t5 = (((x561|x562)*x563)>>x564);

	if (t5 != 505413631LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x641 = -1;
	volatile int64_t x642 = -1LL;
	int8_t x643 = INT8_MIN;
	volatile uint16_t x644 = 1U;

	t6 = (((x641|x642)*x643)>>x644);

	if (t6 != 64LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x657 = UINT8_MAX;
	static int16_t x658 = -1;
	uint32_t x660 = 2U;
	static int32_t t7 = 82430;

	t7 = (((x657|x658)*x659)>>x660);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x665 = UINT64_MAX;
	int16_t x666 = 3;
	static int8_t x667 = INT8_MIN;
	uint8_t x668 = 1U;

	t8 = (((x665|x666)*x667)>>x668);

	if (t8 != 64LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x742 = INT32_MIN;
	int32_t x743 = -39913410;
	static int32_t t9 = 2942;

	t9 = (((x741|x742)*x743)>>x744);

	if (t9 != 39913410) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x921 = 1289027727LL;
	int16_t x923 = 0;
	volatile uint8_t x924 = 0U;
	static volatile int64_t t10 = -141915LL;

	t10 = (((x921|x922)*x923)>>x924);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x949 = 19U;
	uint8_t x950 = 9U;
	int8_t x951 = 6;
	volatile int8_t x952 = 1;
	static int32_t t11 = 1895;

	t11 = (((x949|x950)*x951)>>x952);

	if (t11 != 81) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1025 = INT32_MAX;
	static int64_t x1026 = INT64_MAX;
	int8_t x1028 = 22;
	int64_t t12 = -8320557599LL;

	t12 = (((x1025|x1026)*x1027)>>x1028);

	if (t12 != 2199023255551LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1061 = UINT64_MAX;
	int8_t x1062 = INT8_MAX;
	int32_t x1063 = -1;
	static uint8_t x1064 = 0U;
	uint64_t t13 = 1062654994LLU;

	t13 = (((x1061|x1062)*x1063)>>x1064);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1137 = -3;
	int16_t x1138 = -1;
	volatile uint64_t x1139 = UINT64_MAX;
	static int32_t x1140 = 0;

	t14 = (((x1137|x1138)*x1139)>>x1140);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x1153 = -1;
	static uint32_t x1154 = UINT32_MAX;
	uint16_t x1155 = UINT16_MAX;
	int8_t x1156 = 3;
	uint32_t t15 = 28833963U;

	t15 = (((x1153|x1154)*x1155)>>x1156);

	if (t15 != 536862720U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1297 = UINT16_MAX;
	static int64_t x1298 = -13LL;
	uint64_t x1299 = 1836686273823240881LLU;
	uint64_t t16 = 15390493LLU;

	t16 = (((x1297|x1298)*x1299)>>x1300);

	if (t16 != 259532153123223605LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1329 = 42853231646593LLU;
	volatile int8_t x1330 = INT8_MIN;
	static uint8_t x1332 = 36U;
	uint64_t t17 = 1503573512439LLU;

	t17 = (((x1329|x1330)*x1331)>>x1332);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1337 = UINT64_MAX;
	int64_t x1339 = -4328974578457LL;
	int8_t x1340 = 0;
	uint64_t t18 = 3775201157290LLU;

	t18 = (((x1337|x1338)*x1339)>>x1340);

	if (t18 != 4328974578457LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1361 = 94068U;
	int64_t x1362 = -9107851595248864LL;
	int8_t x1363 = -1;
	int64_t t19 = 33762365849371671LL;

	t19 = (((x1361|x1362)*x1363)>>x1364);

	if (t19 != 4447193161730LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1405 = INT8_MAX;
	uint64_t x1407 = 63LLU;
	int8_t x1408 = 0;

	t20 = (((x1405|x1406)*x1407)>>x1408);

	if (t20 != 16065LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1567 = 8374946LLU;
	static uint8_t x1568 = 0U;
	static uint64_t t21 = 252534063788784LLU;

	t21 = (((x1565|x1566)*x1567)>>x1568);

	if (t21 != 18446744073701176670LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1577 = 56;
	int8_t x1578 = -1;
	volatile int8_t x1579 = INT8_MIN;
	static int8_t x1580 = 1;

	t22 = (((x1577|x1578)*x1579)>>x1580);

	if (t22 != 64) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1638 = INT32_MAX;
	volatile uint8_t x1640 = 13U;
	uint32_t t23 = 286208418U;

	t23 = (((x1637|x1638)*x1639)>>x1640);

	if (t23 != 524287U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1826 = UINT64_MAX;
	int8_t x1827 = 11;
	uint8_t x1828 = 6U;
	volatile uint64_t t24 = 2822302915LLU;

	t24 = (((x1825|x1826)*x1827)>>x1828);

	if (t24 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1909 = 1056833208LLU;
	volatile int16_t x1910 = INT16_MIN;
	volatile int8_t x1911 = INT8_MAX;
	uint64_t t25 = 10392179LLU;

	t25 = (((x1909|x1910)*x1911)>>x1912);

	if (t25 != 18446744073709509960LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1989 = 6LLU;
	volatile int64_t x1990 = INT64_MIN;
	int16_t x1991 = -18;
	uint64_t t26 = 0LLU;

	t26 = (((x1989|x1990)*x1991)>>x1992);

	if (t26 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2001 = 1624;
	static uint32_t x2002 = 42198960U;
	uint32_t x2003 = 2U;
	uint8_t x2004 = 1U;
	uint32_t t27 = 8808417U;

	t27 = (((x2001|x2002)*x2003)>>x2004);

	if (t27 != 42199032U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2006 = -2;
	uint32_t x2007 = 62591U;
	int8_t x2008 = 4;
	volatile uint32_t t28 = 112937131U;

	t28 = (((x2005|x2006)*x2007)>>x2008);

	if (t28 != 268431544U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2117 = -2729978960426039LL;
	volatile uint64_t x2118 = 27973571926872430LLU;
	int64_t x2119 = INT64_MIN;
	uint8_t x2120 = 3U;
	static volatile uint64_t t29 = 15962783LLU;

	t29 = (((x2117|x2118)*x2119)>>x2120);

	if (t29 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x2173 = 30714LLU;
	int8_t x2175 = -1;
	int8_t x2176 = 3;
	uint64_t t30 = 0LLU;

	t30 = (((x2173|x2174)*x2175)>>x2176);

	if (t30 != 2305843009213690112LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2217 = 1162;
	static int32_t x2218 = -7496324;
	static volatile uint64_t x2219 = 12645233208LLU;
	static int32_t x2220 = 7;
	volatile uint64_t t31 = 16572LLU;

	t31 = (((x2217|x2218)*x2219)>>x2220);

	if (t31 != 143374632440680791LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2265 = UINT64_MAX;
	uint16_t x2266 = UINT16_MAX;
	volatile uint64_t t32 = 268427168965LLU;

	t32 = (((x2265|x2266)*x2267)>>x2268);

	if (t32 != 4398046511104LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2277 = -3300;
	int8_t x2280 = 7;
	int32_t t33 = -63858673;

	t33 = (((x2277|x2278)*x2279)>>x2280);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2341 = -1;
	int16_t x2342 = INT16_MIN;
	volatile uint16_t x2344 = 9U;

	t34 = (((x2341|x2342)*x2343)>>x2344);

	if (t34 != 36028793884190438LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2369 = UINT8_MAX;
	static volatile int64_t x2370 = 8417971263LL;
	int64_t x2371 = 1539369LL;
	uint32_t x2372 = 22U;
	int64_t t35 = -10452534235LL;

	t35 = (((x2369|x2370)*x2371)>>x2372);

	if (t35 != 3089514804LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2381 = 3;
	uint8_t x2382 = 27U;
	uint8_t x2383 = UINT8_MAX;
	uint16_t x2384 = 14U;
	volatile int32_t t36 = -7;

	t36 = (((x2381|x2382)*x2383)>>x2384);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2405 = UINT16_MAX;
	int64_t x2406 = INT64_MIN;
	int64_t x2407 = -1LL;
	static uint64_t x2408 = 1LLU;
	int64_t t37 = 561551310828LL;

	t37 = (((x2405|x2406)*x2407)>>x2408);

	if (t37 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2417 = 0U;
	int64_t x2418 = -1LL;
	int8_t x2419 = INT8_MIN;
	uint32_t x2420 = 16U;
	static volatile int64_t t38 = 76345794LL;

	t38 = (((x2417|x2418)*x2419)>>x2420);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2429 = UINT32_MAX;
	volatile uint8_t x2430 = 3U;
	static volatile int8_t x2431 = INT8_MAX;
	uint8_t x2432 = 3U;
	volatile uint32_t t39 = 2U;

	t39 = (((x2429|x2430)*x2431)>>x2432);

	if (t39 != 536870896U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2479 = 1U;
	volatile int16_t x2480 = 1;
	uint32_t t40 = 92137093U;

	t40 = (((x2477|x2478)*x2479)>>x2480);

	if (t40 != 16383U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2584 = 20U;
	volatile int32_t t41 = -342532;

	t41 = (((x2581|x2582)*x2583)>>x2584);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2649 = -35287;
	static uint64_t x2650 = 3010887097503399537LLU;
	volatile int64_t x2651 = INT64_MIN;
	static volatile uint64_t t42 = 6582087396LLU;

	t42 = (((x2649|x2650)*x2651)>>x2652);

	if (t42 != 34359738368LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2702 = INT8_MAX;
	int32_t x2704 = 0;
	volatile uint64_t t43 = 24461670544560038LLU;

	t43 = (((x2701|x2702)*x2703)>>x2704);

	if (t43 != 18446744072702558336LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2734 = INT64_MAX;
	int32_t x2735 = -1;
	volatile int16_t x2736 = 3;
	volatile int64_t t44 = -1591879LL;

	t44 = (((x2733|x2734)*x2735)>>x2736);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2773 = INT8_MIN;
	int32_t x2774 = INT32_MIN;
	uint64_t x2775 = 4775LLU;
	int16_t x2776 = 1;
	static volatile uint64_t t45 = 123LLU;

	t45 = (((x2773|x2774)*x2775)>>x2776);

	if (t45 != 9223372036854470208LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2814 = INT64_MIN;
	static int16_t x2815 = -1;
	int64_t x2816 = 31LL;
	volatile int64_t t46 = -326137205LL;

	t46 = (((x2813|x2814)*x2815)>>x2816);

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2837 = UINT32_MAX;
	volatile uint32_t x2838 = UINT32_MAX;
	int8_t x2839 = 7;
	static int8_t x2840 = 0;
	uint32_t t47 = 14U;

	t47 = (((x2837|x2838)*x2839)>>x2840);

	if (t47 != 4294967289U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2937 = -1LL;
	int16_t x2938 = INT16_MIN;
	uint64_t x2939 = UINT64_MAX;
	uint16_t x2940 = 47U;
	uint64_t t48 = 54779326LLU;

	t48 = (((x2937|x2938)*x2939)>>x2940);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2945 = 6U;
	uint16_t x2946 = UINT16_MAX;
	uint64_t x2947 = UINT64_MAX;
	uint64_t t49 = 2LLU;

	t49 = (((x2945|x2946)*x2947)>>x2948);

	if (t49 != 4611686018427371520LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3057 = INT64_MAX;
	int16_t x3058 = INT16_MIN;
	uint64_t x3059 = 0LLU;
	volatile uint8_t x3060 = 0U;
	uint64_t t50 = 134LLU;

	t50 = (((x3057|x3058)*x3059)>>x3060);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3101 = -1LL;
	int8_t x3102 = INT8_MIN;
	uint8_t x3104 = 26U;
	static int64_t t51 = 470677036346860570LL;

	t51 = (((x3101|x3102)*x3103)>>x3104);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3149 = INT32_MIN;
	int32_t x3150 = -3209912;
	uint64_t x3151 = 45463570LLU;
	uint32_t x3152 = 0U;
	uint64_t t52 = 77LLU;

	t52 = (((x3149|x3150)*x3151)>>x3152);

	if (t52 != 18446598139650645776LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3266 = 2768779U;
	volatile uint64_t x3267 = UINT64_MAX;
	static int32_t x3268 = 30;
	uint64_t t53 = 4536956185481LLU;

	t53 = (((x3265|x3266)*x3267)>>x3268);

	if (t53 != 17179869180LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x3277 = 1;
	uint32_t x3278 = 379U;
	uint32_t x3279 = UINT32_MAX;
	volatile uint32_t t54 = 10739649U;

	t54 = (((x3277|x3278)*x3279)>>x3280);

	if (t54 != 33554429U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3333 = 22311014950LLU;
	uint16_t x3335 = 1631U;
	uint8_t x3336 = 5U;
	uint64_t t55 = 338LLU;

	t55 = (((x3333|x3334)*x3335)>>x3336);

	if (t55 != 576460752303422621LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3337 = 118;
	uint8_t x3338 = 21U;
	volatile int8_t x3339 = 0;
	uint8_t x3340 = 0U;
	static int32_t t56 = -74351;

	t56 = (((x3337|x3338)*x3339)>>x3340);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3437 = 37337082LLU;
	uint8_t x3438 = UINT8_MAX;
	int64_t x3439 = INT64_MIN;
	uint64_t t57 = 25431441064073036LLU;

	t57 = (((x3437|x3438)*x3439)>>x3440);

	if (t57 != 262144LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3473 = -520454189106LL;
	static volatile uint16_t x3474 = UINT16_MAX;
	int8_t x3476 = 14;
	int64_t t58 = -23098358016LL;

	t58 = (((x3473|x3474)*x3475)>>x3476);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3485 = 590357542U;
	int32_t x3486 = INT32_MIN;
	volatile uint16_t x3487 = 20U;
	volatile int8_t x3488 = 1;
	volatile uint32_t t59 = 111531U;

	t59 = (((x3485|x3486)*x3487)>>x3488);

	if (t59 != 1608608124U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3533 = 85U;
	int64_t x3534 = 1965985LL;
	int16_t x3535 = 4064;
	static int8_t x3536 = 0;
	volatile int64_t t60 = -3LL;

	t60 = (((x3533|x3534)*x3535)>>x3536);

	if (t60 != 7990104416LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3773 = 1508051692778478LLU;
	volatile int32_t x3774 = INT32_MIN;
	volatile int8_t x3775 = 7;
	uint8_t x3776 = 12U;
	uint64_t t61 = 354840142923353670LLU;

	t61 = (((x3773|x3774)*x3775)>>x3776);

	if (t61 != 4503599624774274LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3821 = INT8_MIN;
	int64_t x3823 = -1LL;
	uint16_t x3824 = 41U;
	int64_t t62 = 3558966LL;

	t62 = (((x3821|x3822)*x3823)>>x3824);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x3837 = -451580072;
	int16_t x3839 = INT16_MIN;
	volatile uint8_t x3840 = 3U;
	uint64_t t63 = 15329321431LLU;

	t63 = (((x3837|x3838)*x3839)>>x3840);

	if (t63 != 154753572864LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x3889 = UINT64_MAX;
	int16_t x3890 = INT16_MIN;
	int32_t x3891 = 1;
	uint8_t x3892 = 0U;

	t64 = (((x3889|x3890)*x3891)>>x3892);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x3909 = 55U;
	int16_t x3910 = -400;
	uint32_t t65 = 19U;

	t65 = (((x3909|x3910)*x3911)>>x3912);

	if (t65 != 98U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3934 = -1;
	int8_t x3935 = -4;
	static int8_t x3936 = 1;
	volatile int32_t t66 = -140532;

	t66 = (((x3933|x3934)*x3935)>>x3936);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3949 = UINT64_MAX;
	static uint8_t x3950 = 1U;
	int16_t x3951 = -1;
	uint8_t x3952 = 6U;

	t67 = (((x3949|x3950)*x3951)>>x3952);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4021 = 0U;
	uint16_t x4022 = UINT16_MAX;
	static int32_t x4023 = -1;
	static uint8_t x4024 = 13U;
	volatile uint32_t t68 = 511U;

	t68 = (((x4021|x4022)*x4023)>>x4024);

	if (t68 != 524280U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4037 = 7LLU;
	int64_t x4038 = -1LL;
	int32_t x4039 = 11;
	int32_t x4040 = 1;
	volatile uint64_t t69 = 44709805143786LLU;

	t69 = (((x4037|x4038)*x4039)>>x4040);

	if (t69 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4041 = INT16_MAX;
	static volatile int32_t x4042 = -1;
	int16_t x4043 = -250;
	int8_t x4044 = 1;
	volatile int32_t t70 = 8;

	t70 = (((x4041|x4042)*x4043)>>x4044);

	if (t70 != 125) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4073 = 4U;
	static int16_t x4074 = INT16_MIN;
	uint64_t x4075 = 29173892LLU;
	int8_t x4076 = 12;
	uint64_t t71 = 967LLU;

	t71 = (((x4073|x4074)*x4075)>>x4076);

	if (t71 != 4503599394007850LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4090 = 3U;
	volatile uint32_t x4092 = 8U;

	t72 = (((x4089|x4090)*x4091)>>x4092);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4190 = UINT8_MAX;
	int32_t x4192 = 1;
	int32_t t73 = -1720;

	t73 = (((x4189|x4190)*x4191)>>x4192);

	if (t73 != 3837) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x4237 = 14514588U;
	volatile uint8_t x4238 = 61U;
	uint8_t x4239 = UINT8_MAX;
	volatile uint32_t t74 = 860490296U;

	t74 = (((x4237|x4238)*x4239)>>x4240);

	if (t74 != 1850614177U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4313 = -4;
	volatile uint64_t x4314 = UINT64_MAX;
	volatile uint8_t x4316 = 1U;
	static uint64_t t75 = 13204588LLU;

	t75 = (((x4313|x4314)*x4315)>>x4316);

	if (t75 != 9223328415771824356LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4325 = 30318554LLU;
	uint8_t x4326 = 16U;
	uint16_t x4327 = UINT16_MAX;
	int8_t x4328 = 59;
	static uint64_t t76 = 1LLU;

	t76 = (((x4325|x4326)*x4327)>>x4328);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4329 = -1;
	int8_t x4332 = 1;

	t77 = (((x4329|x4330)*x4331)>>x4332);

	if (t77 != 8829031353369637585LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4385 = -11;
	int16_t x4386 = INT16_MAX;
	uint64_t x4387 = UINT64_MAX;
	volatile uint8_t x4388 = 3U;
	uint64_t t78 = 85692757614573LLU;

	t78 = (((x4385|x4386)*x4387)>>x4388);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4509 = -1;
	volatile int32_t x4510 = INT32_MIN;
	int32_t x4511 = 0;
	static uint8_t x4512 = 0U;
	volatile int32_t t79 = -164038;

	t79 = (((x4509|x4510)*x4511)>>x4512);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4517 = INT64_MAX;
	volatile uint64_t x4518 = UINT64_MAX;
	static int8_t x4519 = -1;
	uint8_t x4520 = 6U;
	uint64_t t80 = 7838LLU;

	t80 = (((x4517|x4518)*x4519)>>x4520);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4537 = 55;
	static int8_t x4538 = INT8_MAX;
	uint8_t x4539 = 7U;
	uint16_t x4540 = 7U;
	static int32_t t81 = 24147200;

	t81 = (((x4537|x4538)*x4539)>>x4540);

	if (t81 != 6) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4601 = INT16_MAX;
	int64_t x4603 = -47585020669106473LL;
	uint8_t x4604 = 12U;

	t82 = (((x4601|x4602)*x4603)>>x4604);

	if (t82 != 11617436686793LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x4613 = UINT16_MAX;
	uint16_t x4614 = 23U;
	uint8_t x4615 = 3U;
	uint8_t x4616 = 0U;

	t83 = (((x4613|x4614)*x4615)>>x4616);

	if (t83 != 196605) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4665 = -1LL;
	int64_t x4666 = 1097065210857620LL;
	volatile int16_t x4667 = -1;

	t84 = (((x4665|x4666)*x4667)>>x4668);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4689 = 15680285645LLU;
	volatile uint8_t x4690 = 3U;
	int8_t x4691 = 1;
	uint16_t x4692 = 6U;

	t85 = (((x4689|x4690)*x4691)>>x4692);

	if (t85 != 245004463LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4713 = INT32_MIN;
	static int16_t x4714 = INT16_MIN;
	int32_t x4715 = -479;
	uint8_t x4716 = 0U;
	volatile int32_t t86 = 9435;

	t86 = (((x4713|x4714)*x4715)>>x4716);

	if (t86 != 15695872) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4813 = 62993210LL;
	int32_t x4815 = INT32_MAX;
	int32_t x4816 = 13;
	int64_t t87 = -1LL;

	t87 = (((x4813|x4814)*x4815)>>x4816);

	if (t87 != 16513343414774LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4833 = -35;
	int32_t x4834 = 245152;
	static volatile uint64_t x4835 = 113193115LLU;
	uint64_t x4836 = 19LLU;
	uint64_t t88 = 36716003505727LLU;

	t88 = (((x4833|x4834)*x4835)>>x4836);

	if (t88 != 35184372088184LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x4857 = 5U;
	volatile uint16_t x4859 = 18U;
	uint64_t t89 = 365108754994997161LLU;

	t89 = (((x4857|x4858)*x4859)>>x4860);

	if (t89 != 31LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4905 = 19149350198297LLU;
	uint16_t x4906 = 28719U;
	static int64_t x4907 = INT64_MAX;
	int8_t x4908 = 0;
	uint64_t t90 = 3180LLU;

	t90 = (((x4905|x4906)*x4907)>>x4908);

	if (t90 != 9223352887504569281LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x4925 = INT32_MIN;
	volatile int16_t x4926 = INT16_MIN;
	int64_t x4927 = -45541504LL;
	uint8_t x4928 = 52U;

	t91 = (((x4925|x4926)*x4927)>>x4928);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x4937 = INT64_MIN;
	int32_t x4938 = -1;
	static int8_t x4939 = INT8_MIN;
	uint64_t x4940 = 4LLU;

	t92 = (((x4937|x4938)*x4939)>>x4940);

	if (t92 != 8LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5109 = INT8_MAX;
	int64_t x5110 = INT64_MIN;

	t93 = (((x5109|x5110)*x5111)>>x5112);

	if (t93 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x5202 = -10673582;
	uint32_t x5203 = UINT32_MAX;
	static volatile int32_t x5204 = 0;
	static volatile uint32_t t94 = 109U;

	t94 = (((x5201|x5202)*x5203)>>x5204);

	if (t94 != 10665990U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5233 = INT64_MAX;
	int16_t x5234 = INT16_MAX;
	uint8_t x5235 = 0U;
	int16_t x5236 = 47;
	volatile int64_t t95 = -26LL;

	t95 = (((x5233|x5234)*x5235)>>x5236);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5306 = -3;
	uint32_t x5307 = UINT32_MAX;
	uint16_t x5308 = 1U;

	t96 = (((x5305|x5306)*x5307)>>x5308);

	if (t96 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5313 = -330404;
	uint64_t x5314 = 6120154957404LLU;
	int32_t x5315 = INT32_MIN;
	uint64_t t97 = 3009LLU;

	t97 = (((x5313|x5314)*x5315)>>x5316);

	if (t97 != 141925046812672LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5441 = 39283540597223859LLU;
	uint32_t x5442 = 8939319U;
	uint32_t x5443 = UINT32_MAX;
	int8_t x5444 = 0;
	volatile uint64_t t98 = 52490918855520874LLU;

	t98 = (((x5441|x5442)*x5443)>>x5444);

	if (t98 != 742504097590446153LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5485 = -1;
	int32_t x5486 = INT32_MIN;
	static int32_t x5487 = -1;
	uint32_t x5488 = 31U;
	int32_t t99 = 98516264;

	t99 = (((x5485|x5486)*x5487)>>x5488);

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

