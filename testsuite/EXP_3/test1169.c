#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 44;
uint8_t x22 = 6U;
volatile int32_t t1 = 308057;
static int16_t x26 = INT16_MIN;
int16_t x145 = -5315;
uint64_t t6 = 85013052965154392LLU;
int32_t x300 = 1;
volatile uint32_t t8 = UINT32_MAX;
static int32_t x313 = 3;
int16_t x314 = INT16_MIN;
uint8_t x316 = 0U;
uint64_t t9 = UINT64_MAX;
volatile uint32_t x393 = 70038U;
int64_t x415 = INT64_MAX;
volatile uint8_t x416 = 0U;
volatile int16_t x461 = INT16_MAX;
int64_t x462 = INT64_MIN;
static int16_t x499 = 6210;
volatile int64_t x566 = 271548893633894LL;
static uint16_t x683 = 1158U;
volatile uint64_t t20 = UINT64_MAX;
uint8_t x874 = 25U;
uint16_t x920 = 6U;
int16_t x1506 = -1;
static volatile int32_t t28 = 26;
uint8_t x1752 = 6U;
volatile int8_t x1773 = -47;
uint16_t x1873 = UINT16_MAX;
volatile int32_t t31 = -33;
int64_t x1922 = INT64_MIN;
static volatile uint32_t x2045 = UINT32_MAX;
uint32_t x2046 = 4225177U;
uint64_t t34 = 1100967969376LLU;
uint32_t t35 = 713804U;
int64_t x2142 = INT64_MAX;
uint8_t x2144 = 13U;
int64_t t37 = INT64_MAX;
volatile int16_t x2255 = INT16_MAX;
int64_t x2357 = -1LL;
volatile uint8_t x2359 = UINT8_MAX;
int8_t x2463 = INT8_MAX;
volatile int16_t x2498 = INT16_MAX;
int64_t x2499 = 31479989179LL;
int8_t x2548 = 0;
volatile uint64_t t44 = 269157LLU;
volatile int8_t x2611 = 0;
int8_t x2715 = INT8_MAX;
volatile int64_t t47 = 3264262001606460LL;
int64_t t48 = -1041124166725601LL;
volatile int64_t x2773 = 11LL;
int8_t x2851 = INT8_MAX;
static volatile int8_t x2852 = 1;
volatile uint64_t t52 = 4038299863LLU;
int16_t x3026 = INT16_MAX;
volatile uint64_t x3146 = UINT64_MAX;
volatile uint64_t t58 = UINT64_MAX;
static uint64_t x3155 = UINT64_MAX;
int8_t x3166 = INT8_MAX;
uint8_t x3292 = 19U;
uint8_t x3320 = 3U;
static uint32_t t62 = UINT32_MAX;
int32_t x3322 = -11;
volatile int64_t t63 = 12LL;
static volatile int64_t t64 = INT64_MIN;
uint64_t t66 = 11LLU;
int32_t x3677 = INT32_MIN;
uint16_t x3686 = 3758U;
int8_t x3687 = 0;
int32_t t68 = -1;
volatile uint16_t x3748 = 22U;
volatile uint64_t t70 = UINT64_MAX;
uint32_t x3931 = 347074U;
int64_t x3965 = -97491142LL;
static int32_t x3966 = INT32_MIN;
static int32_t x4037 = 18886;
int64_t x4040 = 0LL;
uint8_t x4043 = 11U;
static volatile int64_t x4057 = 1LL;
uint16_t x4192 = 22U;
uint32_t t79 = 1106580U;
int8_t x4242 = -1;
static int32_t t81 = 378;
volatile uint64_t t82 = UINT64_MAX;
int32_t x4613 = INT32_MIN;
uint16_t x4616 = 2U;
int32_t t85 = 186001975;
int64_t x4637 = -1LL;
static int32_t x4709 = -1144188;
uint32_t t88 = 167263615U;
uint64_t x4831 = UINT64_MAX;
int16_t x4900 = 8;
static int16_t x4910 = INT16_MAX;
uint8_t x4912 = 28U;
uint32_t x5023 = 6207532U;
int32_t x5242 = INT32_MIN;
int16_t x5244 = 3;
int32_t t97 = 55283698;
int64_t t98 = 65476LL;
volatile uint32_t x5349 = 587828833U;
uint64_t t99 = 1058978702471346LLU;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	static uint64_t x3 = UINT64_MAX;
	volatile int32_t x4 = 22;
	static uint64_t t0 = 439259160LLU;

	t0 = ((x1|x2)|(x3>>x4));

	if (t0 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x21 = 0;
	static int32_t x23 = 623206061;
	uint8_t x24 = 10U;

	t1 = ((x21|x22)|(x23>>x24));

	if (t1 != 608599) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x25 = 60;
	static uint16_t x27 = 15792U;
	int16_t x28 = 7;
	static int32_t t2 = 138237790;

	t2 = ((x25|x26)|(x27>>x28));

	if (t2 != -32641) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = INT16_MIN;
	static int32_t x70 = INT32_MAX;
	int16_t x71 = INT16_MAX;
	volatile int32_t x72 = 19;
	volatile int32_t t3 = 48;

	t3 = ((x69|x70)|(x71>>x72));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x109 = -1LL;
	uint16_t x110 = 7241U;
	int8_t x111 = 14;
	volatile uint8_t x112 = 3U;
	int64_t t4 = -59266180LL;

	t4 = ((x109|x110)|(x111>>x112));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x113 = 78815U;
	volatile int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MAX;
	uint16_t x116 = 0U;
	static int64_t t5 = INT64_MAX;

	t5 = ((x113|x114)|(x115>>x116));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x146 = 18;
	static uint64_t x147 = 1682184LLU;
	volatile int8_t x148 = 2;

	t6 = ((x145|x146)|(x147>>x148));

	if (t6 != 18446744073709546495LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x201 = 410U;
	int8_t x202 = -1;
	uint8_t x203 = 2U;
	static uint8_t x204 = 21U;
	static volatile int32_t t7 = 1252113;

	t7 = ((x201|x202)|(x203>>x204));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x297 = INT32_MIN;
	uint32_t x298 = UINT32_MAX;
	volatile int32_t x299 = INT32_MAX;

	t8 = ((x297|x298)|(x299>>x300));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x315 = UINT64_MAX;

	t9 = ((x313|x314)|(x315>>x316));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int64_t x346 = -31LL;
	uint64_t x347 = 4200439808LLU;
	uint8_t x348 = 6U;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x345|x346)|(x347>>x348));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x394 = UINT64_MAX;
	static int16_t x395 = 50;
	uint8_t x396 = 0U;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = ((x393|x394)|(x395>>x396));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x413 = 11U;
	volatile uint16_t x414 = UINT16_MAX;
	volatile int64_t t12 = INT64_MAX;

	t12 = ((x413|x414)|(x415>>x416));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x463 = 74U;
	uint8_t x464 = 29U;
	static int64_t t13 = 263746112701124LL;

	t13 = ((x461|x462)|(x463>>x464));

	if (t13 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x497 = INT8_MIN;
	uint32_t x498 = 1653854638U;
	int8_t x500 = 6;
	static uint32_t t14 = 171U;

	t14 = ((x497|x498)|(x499>>x500));

	if (t14 != 4294967279U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x505 = UINT16_MAX;
	static int8_t x506 = INT8_MIN;
	uint16_t x507 = 175U;
	uint16_t x508 = 23U;
	volatile int32_t t15 = -1;

	t15 = ((x505|x506)|(x507>>x508));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x565 = INT16_MIN;
	volatile int64_t x567 = 49911870100LL;
	uint8_t x568 = 1U;
	int64_t t16 = 601752138902665313LL;

	t16 = ((x565|x566)|(x567>>x568));

	if (t16 != -8850LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x681 = UINT64_MAX;
	int16_t x682 = -1;
	uint8_t x684 = 2U;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x681|x682)|(x683>>x684));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x693 = UINT64_MAX;
	static uint64_t x694 = 463449LLU;
	volatile uint8_t x695 = UINT8_MAX;
	int16_t x696 = 1;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x693|x694)|(x695>>x696));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x745 = UINT8_MAX;
	int64_t x746 = -1LL;
	int16_t x747 = INT16_MAX;
	uint8_t x748 = 23U;
	static volatile int64_t t19 = 78018650280LL;

	t19 = ((x745|x746)|(x747>>x748));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x777 = 120U;
	uint64_t x778 = UINT64_MAX;
	uint8_t x779 = 15U;
	volatile int16_t x780 = 1;

	t20 = ((x777|x778)|(x779>>x780));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x873 = 1146;
	uint32_t x875 = UINT32_MAX;
	static volatile int8_t x876 = 4;
	volatile uint32_t t21 = 3014U;

	t21 = ((x873|x874)|(x875>>x876));

	if (t21 != 268435455U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x917 = INT8_MAX;
	volatile uint16_t x918 = 4U;
	int8_t x919 = 7;
	int32_t t22 = 55;

	t22 = ((x917|x918)|(x919>>x920));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x933 = UINT16_MAX;
	uint32_t x934 = 17233282U;
	volatile uint32_t x935 = UINT32_MAX;
	static int8_t x936 = 0;
	uint32_t t23 = UINT32_MAX;

	t23 = ((x933|x934)|(x935>>x936));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1121 = UINT8_MAX;
	int8_t x1122 = INT8_MAX;
	uint16_t x1123 = 36U;
	uint16_t x1124 = 2U;
	volatile int32_t t24 = 1847884;

	t24 = ((x1121|x1122)|(x1123>>x1124));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1157 = 12U;
	int32_t x1158 = INT32_MIN;
	uint64_t x1159 = UINT64_MAX;
	uint8_t x1160 = 9U;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x1157|x1158)|(x1159>>x1160));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x1393 = UINT16_MAX;
	int8_t x1394 = 54;
	int64_t x1395 = 25952148652LL;
	int16_t x1396 = 39;
	volatile int64_t t26 = -114705893LL;

	t26 = ((x1393|x1394)|(x1395>>x1396));

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1421 = UINT16_MAX;
	static int8_t x1422 = 2;
	uint16_t x1423 = UINT16_MAX;
	static int8_t x1424 = 14;
	volatile int32_t t27 = 16333446;

	t27 = ((x1421|x1422)|(x1423>>x1424));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1505 = INT16_MIN;
	uint16_t x1507 = UINT16_MAX;
	int16_t x1508 = 0;

	t28 = ((x1505|x1506)|(x1507>>x1508));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1749 = -1;
	uint16_t x1750 = UINT16_MAX;
	int32_t x1751 = INT32_MAX;
	int32_t t29 = -9;

	t29 = ((x1749|x1750)|(x1751>>x1752));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1774 = 1;
	int8_t x1775 = 4;
	int8_t x1776 = 9;
	static int32_t t30 = -1047960;

	t30 = ((x1773|x1774)|(x1775>>x1776));

	if (t30 != -47) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1874 = INT8_MIN;
	uint16_t x1875 = 203U;
	volatile uint8_t x1876 = 7U;

	t31 = ((x1873|x1874)|(x1875>>x1876));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1909 = 11012837;
	int16_t x1910 = INT16_MAX;
	int32_t x1911 = INT32_MAX;
	uint32_t x1912 = 28U;
	volatile int32_t t32 = -22;

	t32 = ((x1909|x1910)|(x1911>>x1912));

	if (t32 != 11042815) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1921 = INT64_MIN;
	int16_t x1923 = INT16_MAX;
	volatile int8_t x1924 = 1;
	int64_t t33 = 1674849111808571LL;

	t33 = ((x1921|x1922)|(x1923>>x1924));

	if (t33 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2047 = 32615LLU;
	static uint16_t x2048 = 10U;

	t34 = ((x2045|x2046)|(x2047>>x2048));

	if (t34 != 4294967295LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2057 = INT16_MIN;
	static int8_t x2058 = INT8_MIN;
	static uint32_t x2059 = 116592U;
	static uint16_t x2060 = 3U;

	t35 = ((x2057|x2058)|(x2059>>x2060));

	if (t35 != 4294967278U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2081 = INT8_MAX;
	static int32_t x2082 = INT32_MIN;
	volatile uint16_t x2083 = 6U;
	uint8_t x2084 = 3U;
	volatile int32_t t36 = -1485823;

	t36 = ((x2081|x2082)|(x2083>>x2084));

	if (t36 != -2147483521) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2141 = 6577;
	int16_t x2143 = INT16_MAX;

	t37 = ((x2141|x2142)|(x2143>>x2144));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2253 = UINT8_MAX;
	uint8_t x2254 = 118U;
	uint8_t x2256 = 13U;
	int32_t t38 = 2792418;

	t38 = ((x2253|x2254)|(x2255>>x2256));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2358 = UINT64_MAX;
	volatile uint8_t x2360 = 2U;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x2357|x2358)|(x2359>>x2360));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2461 = -1;
	int32_t x2462 = INT32_MIN;
	static int16_t x2464 = 1;
	int32_t t40 = -693360698;

	t40 = ((x2461|x2462)|(x2463>>x2464));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2497 = 26U;
	volatile uint16_t x2500 = 45U;
	volatile int64_t t41 = 53337870893490LL;

	t41 = ((x2497|x2498)|(x2499>>x2500));

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2521 = INT8_MIN;
	static int64_t x2522 = INT64_MAX;
	volatile int8_t x2523 = 5;
	uint8_t x2524 = 4U;
	static volatile int64_t t42 = -2081174407966LL;

	t42 = ((x2521|x2522)|(x2523>>x2524));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2545 = 29968578457LLU;
	int64_t x2546 = 948636957913755111LL;
	volatile uint8_t x2547 = 4U;
	uint64_t t43 = 4613651LLU;

	t43 = ((x2545|x2546)|(x2547>>x2548));

	if (t43 != 948636985730646015LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x2557 = 111712551084823702LLU;
	uint64_t x2558 = 34972683927065LLU;
	uint32_t x2559 = UINT32_MAX;
	int16_t x2560 = 0;

	t44 = ((x2557|x2558)|(x2559>>x2560));

	if (t44 != 111745565754130431LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2609 = UINT64_MAX;
	uint64_t x2610 = UINT64_MAX;
	int8_t x2612 = 1;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = ((x2609|x2610)|(x2611>>x2612));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2689 = INT16_MIN;
	uint64_t x2690 = 8LLU;
	int16_t x2691 = INT16_MAX;
	volatile int16_t x2692 = 12;
	volatile uint64_t t46 = 835105LLU;

	t46 = ((x2689|x2690)|(x2691>>x2692));

	if (t46 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2713 = -1LL;
	static volatile int32_t x2714 = -2338095;
	uint8_t x2716 = 28U;

	t47 = ((x2713|x2714)|(x2715>>x2716));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2745 = 342U;
	int32_t x2746 = INT32_MIN;
	int64_t x2747 = 26639027812759LL;
	static uint8_t x2748 = 1U;

	t48 = ((x2745|x2746)|(x2747>>x2748));

	if (t48 != 13321661390303LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2774 = UINT8_MAX;
	static uint64_t x2775 = UINT64_MAX;
	int32_t x2776 = 1;
	volatile uint64_t t49 = 0LLU;

	t49 = ((x2773|x2774)|(x2775>>x2776));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2781 = -6487;
	volatile int32_t x2782 = INT32_MAX;
	int8_t x2783 = 1;
	uint16_t x2784 = 3U;
	int32_t t50 = -5275;

	t50 = ((x2781|x2782)|(x2783>>x2784));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2849 = 711;
	int64_t x2850 = -1LL;
	volatile int64_t t51 = 821840723LL;

	t51 = ((x2849|x2850)|(x2851>>x2852));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2865 = INT16_MIN;
	int64_t x2866 = -390401LL;
	uint64_t x2867 = 39696244203685LLU;
	int8_t x2868 = 16;

	t52 = ((x2865|x2866)|(x2867>>x2868));

	if (t52 != 18446744073709521663LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2885 = INT64_MAX;
	volatile int8_t x2886 = -1;
	static volatile uint16_t x2887 = UINT16_MAX;
	uint8_t x2888 = 18U;
	volatile int64_t t53 = 1828442059699LL;

	t53 = ((x2885|x2886)|(x2887>>x2888));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2997 = 23U;
	int32_t x2998 = INT32_MIN;
	int64_t x2999 = 202467303LL;
	volatile uint32_t x3000 = 21U;
	static int64_t t54 = 32273582973LL;

	t54 = ((x2997|x2998)|(x2999>>x3000));

	if (t54 != -2147483529LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x3025 = INT64_MIN;
	uint32_t x3027 = UINT32_MAX;
	volatile uint32_t x3028 = 0U;
	int64_t t55 = -233156906181LL;

	t55 = ((x3025|x3026)|(x3027>>x3028));

	if (t55 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3041 = UINT16_MAX;
	static int64_t x3042 = INT64_MAX;
	static int64_t x3043 = INT64_MAX;
	volatile uint8_t x3044 = 49U;
	int64_t t56 = INT64_MAX;

	t56 = ((x3041|x3042)|(x3043>>x3044));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3069 = -1830899165LL;
	uint32_t x3070 = 139386U;
	static volatile uint8_t x3071 = UINT8_MAX;
	uint16_t x3072 = 13U;
	int64_t t57 = 3367270263310275988LL;

	t57 = ((x3069|x3070)|(x3071>>x3072));

	if (t57 != -1830899077LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3145 = -1LL;
	int8_t x3147 = 47;
	volatile uint16_t x3148 = 21U;

	t58 = ((x3145|x3146)|(x3147>>x3148));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x3153 = -1;
	uint32_t x3154 = 109U;
	volatile uint8_t x3156 = 0U;
	static volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x3153|x3154)|(x3155>>x3156));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x3165 = INT32_MIN;
	uint64_t x3167 = UINT64_MAX;
	int8_t x3168 = 1;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x3165|x3166)|(x3167>>x3168));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3289 = INT32_MIN;
	int8_t x3290 = -12;
	static uint64_t x3291 = 13596643522100072LLU;
	uint64_t t61 = 256197856250LLU;

	t61 = ((x3289|x3290)|(x3291>>x3292));

	if (t61 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3317 = UINT32_MAX;
	int16_t x3318 = -1828;
	uint8_t x3319 = 29U;

	t62 = ((x3317|x3318)|(x3319>>x3320));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3321 = -1LL;
	volatile uint32_t x3323 = 24693163U;
	uint16_t x3324 = 2U;

	t63 = ((x3321|x3322)|(x3323>>x3324));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3505 = INT64_MIN;
	volatile int64_t x3506 = 0LL;
	uint16_t x3507 = 1497U;
	static int16_t x3508 = 26;

	t64 = ((x3505|x3506)|(x3507>>x3508));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3509 = -1LL;
	int64_t x3510 = -1LL;
	static uint16_t x3511 = 42U;
	uint32_t x3512 = 0U;
	volatile int64_t t65 = -4LL;

	t65 = ((x3509|x3510)|(x3511>>x3512));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3561 = 970U;
	int16_t x3562 = INT16_MIN;
	uint64_t x3563 = 17212986LLU;
	uint8_t x3564 = 3U;

	t66 = ((x3561|x3562)|(x3563>>x3564));

	if (t66 != 4294957007LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3678 = UINT64_MAX;
	uint32_t x3679 = 2U;
	int32_t x3680 = 0;
	uint64_t t67 = UINT64_MAX;

	t67 = ((x3677|x3678)|(x3679>>x3680));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3685 = 29;
	volatile int8_t x3688 = 16;

	t68 = ((x3685|x3686)|(x3687>>x3688));

	if (t68 != 3775) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x3705 = UINT64_MAX;
	int64_t x3706 = 2839848131015LL;
	int8_t x3707 = INT8_MAX;
	uint8_t x3708 = 22U;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x3705|x3706)|(x3707>>x3708));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x3745 = -1LL;
	volatile uint16_t x3746 = 249U;
	uint64_t x3747 = 31155500LLU;

	t70 = ((x3745|x3746)|(x3747>>x3748));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3853 = 11U;
	int64_t x3854 = -1LL;
	uint64_t x3855 = 4178142LLU;
	uint8_t x3856 = 11U;
	uint64_t t71 = UINT64_MAX;

	t71 = ((x3853|x3854)|(x3855>>x3856));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3929 = -1;
	int8_t x3930 = 1;
	static int8_t x3932 = 0;
	static uint32_t t72 = UINT32_MAX;

	t72 = ((x3929|x3930)|(x3931>>x3932));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3945 = UINT32_MAX;
	int64_t x3946 = -1LL;
	volatile uint32_t x3947 = UINT32_MAX;
	uint8_t x3948 = 0U;
	volatile int64_t t73 = -41LL;

	t73 = ((x3945|x3946)|(x3947>>x3948));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3967 = UINT8_MAX;
	volatile uint16_t x3968 = 1U;
	static int64_t t74 = -27654197502859LL;

	t74 = ((x3965|x3966)|(x3967>>x3968));

	if (t74 != -97491073LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4017 = -2253702LL;
	int64_t x4018 = -1LL;
	int16_t x4019 = INT16_MAX;
	static uint16_t x4020 = 0U;
	int64_t t75 = 41121975531542159LL;

	t75 = ((x4017|x4018)|(x4019>>x4020));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x4038 = UINT8_MAX;
	volatile uint16_t x4039 = 9U;
	int32_t t76 = 0;

	t76 = ((x4037|x4038)|(x4039>>x4040));

	if (t76 != 18943) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4041 = -517619;
	int8_t x4042 = -1;
	uint16_t x4044 = 8U;
	volatile int32_t t77 = 33470761;

	t77 = ((x4041|x4042)|(x4043>>x4044));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4058 = INT16_MAX;
	int64_t x4059 = 24545630896261LL;
	static int8_t x4060 = 44;
	static volatile int64_t t78 = -64109LL;

	t78 = ((x4057|x4058)|(x4059>>x4060));

	if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4189 = INT8_MIN;
	volatile uint32_t x4190 = 8195568U;
	static volatile uint16_t x4191 = 6367U;

	t79 = ((x4189|x4190)|(x4191>>x4192));

	if (t79 != 4294967280U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4241 = INT8_MAX;
	static int32_t x4243 = INT32_MAX;
	uint16_t x4244 = 2U;
	int32_t t80 = -1;

	t80 = ((x4241|x4242)|(x4243>>x4244));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4269 = -1;
	int16_t x4270 = INT16_MIN;
	uint8_t x4271 = 32U;
	uint16_t x4272 = 12U;

	t81 = ((x4269|x4270)|(x4271>>x4272));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4449 = INT64_MIN;
	static uint64_t x4450 = UINT64_MAX;
	static int8_t x4451 = INT8_MAX;
	static uint8_t x4452 = 6U;

	t82 = ((x4449|x4450)|(x4451>>x4452));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4469 = INT32_MIN;
	static uint16_t x4470 = 8591U;
	static uint8_t x4471 = 2U;
	uint8_t x4472 = 1U;
	int32_t t83 = 1;

	t83 = ((x4469|x4470)|(x4471>>x4472));

	if (t83 != -2147475057) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4517 = 1;
	int8_t x4518 = INT8_MIN;
	uint32_t x4519 = UINT32_MAX;
	int32_t x4520 = 1;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = ((x4517|x4518)|(x4519>>x4520));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4614 = -3;
	int16_t x4615 = 851;

	t85 = ((x4613|x4614)|(x4615>>x4616));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x4638 = -1LL;
	int64_t x4639 = 25503598944LL;
	volatile uint8_t x4640 = 2U;
	int64_t t86 = 95008LL;

	t86 = ((x4637|x4638)|(x4639>>x4640));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4685 = INT8_MAX;
	int32_t x4686 = -1;
	volatile uint8_t x4687 = 52U;
	uint16_t x4688 = 1U;
	volatile int32_t t87 = -68433;

	t87 = ((x4685|x4686)|(x4687>>x4688));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4710 = INT8_MIN;
	uint32_t x4711 = 898398230U;
	static uint8_t x4712 = 25U;

	t88 = ((x4709|x4710)|(x4711>>x4712));

	if (t88 != 4294967198U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4757 = UINT8_MAX;
	uint64_t x4758 = 53668710794055928LLU;
	uint32_t x4759 = UINT32_MAX;
	static uint8_t x4760 = 7U;
	volatile uint64_t t89 = 1061763011LLU;

	t89 = ((x4757|x4758)|(x4759>>x4760));

	if (t89 != 53668710820347903LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4789 = 13303U;
	int64_t x4790 = 78658479LL;
	uint16_t x4791 = 4U;
	int16_t x4792 = 0;
	int64_t t90 = 3211300029761327LL;

	t90 = ((x4789|x4790)|(x4791>>x4792));

	if (t90 != 78658559LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4829 = INT32_MIN;
	static int32_t x4830 = -1;
	volatile uint8_t x4832 = 1U;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x4829|x4830)|(x4831>>x4832));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4873 = INT64_MIN;
	volatile uint64_t x4874 = UINT64_MAX;
	volatile uint32_t x4875 = 602U;
	volatile uint16_t x4876 = 9U;
	uint64_t t92 = UINT64_MAX;

	t92 = ((x4873|x4874)|(x4875>>x4876));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4897 = INT8_MAX;
	static int16_t x4898 = INT16_MIN;
	volatile int32_t x4899 = 238742;
	static int32_t t93 = 21431;

	t93 = ((x4897|x4898)|(x4899>>x4900));

	if (t93 != -31745) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4909 = INT8_MIN;
	volatile uint16_t x4911 = 42U;
	volatile int32_t t94 = 24454534;

	t94 = ((x4909|x4910)|(x4911>>x4912));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4985 = UINT64_MAX;
	volatile int16_t x4986 = -1;
	int8_t x4987 = INT8_MAX;
	uint8_t x4988 = 4U;
	uint64_t t95 = UINT64_MAX;

	t95 = ((x4985|x4986)|(x4987>>x4988));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5021 = 6481U;
	static int8_t x5022 = -57;
	int32_t x5024 = 1;
	uint32_t t96 = 2464166U;

	t96 = ((x5021|x5022)|(x5023>>x5024));

	if (t96 != 4294967255U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5241 = UINT8_MAX;
	uint16_t x5243 = UINT16_MAX;

	t97 = ((x5241|x5242)|(x5243>>x5244));

	if (t97 != -2147475457) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5265 = INT64_MIN;
	uint16_t x5266 = 6U;
	uint8_t x5267 = 12U;
	uint8_t x5268 = 7U;

	t98 = ((x5265|x5266)|(x5267>>x5268));

	if (t98 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5350 = INT8_MAX;
	uint64_t x5351 = 59593589LLU;
	static int8_t x5352 = 6;

	t99 = ((x5349|x5350)|(x5351>>x5352));

	if (t99 != 588234623LLU) { NG(); } else { ; }
	
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

