#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x153 = -31065828;
uint8_t x154 = 61U;
static volatile int16_t x174 = -1;
volatile int32_t t2 = 0;
uint64_t x193 = 9910LLU;
volatile int8_t x425 = INT8_MAX;
volatile int32_t t4 = -99519333;
uint16_t x459 = UINT16_MAX;
static uint8_t x460 = 1U;
int32_t x462 = 23388751;
volatile uint32_t x568 = 3U;
int8_t x614 = INT8_MIN;
int8_t x616 = 1;
int8_t x624 = 1;
volatile uint8_t x632 = 1U;
int64_t x698 = INT64_MIN;
uint32_t x700 = 14U;
uint8_t x703 = 0U;
static int8_t x704 = 0;
int16_t x907 = 222;
uint64_t x908 = 3LLU;
volatile uint64_t x1096 = 1LLU;
volatile int32_t t14 = 22;
uint8_t x1312 = 2U;
static uint32_t x1657 = 419U;
static volatile int32_t t24 = 451487027;
int32_t x2169 = -1;
int32_t x2170 = -2;
volatile int32_t x2210 = -10;
uint8_t x2288 = 30U;
static uint8_t x2358 = 0U;
volatile uint64_t t32 = 1LLU;
static int16_t x2570 = -859;
uint64_t x2675 = 10791585216110LLU;
int16_t x2730 = -48;
int64_t x2942 = -111024929LL;
uint8_t x2969 = 9U;
int8_t x2972 = 1;
volatile int8_t x3012 = 1;
static int32_t t44 = 943327898;
int16_t x3153 = INT16_MIN;
int32_t t45 = 39;
uint64_t x3167 = 14523240461LLU;
int32_t t47 = 41808369;
uint32_t x3345 = UINT32_MAX;
int16_t x3350 = -1;
static int64_t t53 = INT64_MAX;
int8_t x3527 = 1;
uint64_t x3667 = 8446846785811988LLU;
int8_t x3691 = 8;
int64_t x3692 = 12LL;
int16_t x3705 = INT16_MIN;
uint16_t x3706 = UINT16_MAX;
int32_t t60 = -7800259;
volatile int32_t t62 = 488073909;
uint8_t x3886 = 0U;
int8_t x3887 = 0;
int64_t x3888 = 16LL;
static volatile uint32_t t65 = 1551206047U;
int16_t x4047 = INT16_MAX;
uint16_t x4048 = 2U;
volatile int32_t t66 = -70197;
static volatile int16_t x4133 = 660;
int8_t x4247 = 0;
static volatile uint64_t x4306 = UINT64_MAX;
static uint64_t x4355 = 7831828979345499068LLU;
uint64_t t71 = 482554004560LLU;
volatile int8_t x4875 = INT8_MAX;
volatile int32_t x4885 = -16058941;
int8_t x4901 = 1;
int8_t x4937 = INT8_MAX;
int8_t x5173 = INT8_MIN;
int16_t x5175 = 934;
int8_t x5428 = 1;
uint8_t x5544 = 5U;


void f0(void) {
	static int16_t x69 = 562;
	static volatile uint32_t x70 = 0U;
	static uint32_t x71 = 1731167630U;
	uint16_t x72 = 3U;
	uint32_t t0 = 0U;

	t0 = (((x69==x70)^x71)<<x72);

	if (t0 != 964439152U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x155 = 117U;
	int8_t x156 = 0;
	volatile int32_t t1 = 230616;

	t1 = (((x153==x154)^x155)<<x156);

	if (t1 != 117) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x173 = 288189728900651425LLU;
	volatile int16_t x175 = 12196;
	uint8_t x176 = 3U;

	t2 = (((x173==x174)^x175)<<x176);

	if (t2 != 97568) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x194 = UINT8_MAX;
	uint64_t x195 = 297147161LLU;
	static int8_t x196 = 11;
	static volatile uint64_t t3 = 504493839607190561LLU;

	t3 = (((x193==x194)^x195)<<x196);

	if (t3 != 608557385728LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x426 = 1U;
	uint8_t x427 = 0U;
	int8_t x428 = 3;

	t4 = (((x425==x426)^x427)<<x428);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x457 = UINT32_MAX;
	volatile int8_t x458 = -1;
	int32_t t5 = 27292044;

	t5 = (((x457==x458)^x459)<<x460);

	if (t5 != 131068) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x461 = 3856;
	static uint32_t x463 = 122158U;
	uint8_t x464 = 1U;
	static volatile uint32_t t6 = 2357697U;

	t6 = (((x461==x462)^x463)<<x464);

	if (t6 != 244316U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x565 = -85122057135477LL;
	int32_t x566 = INT32_MIN;
	volatile uint16_t x567 = 980U;
	static int32_t t7 = -50821695;

	t7 = (((x565==x566)^x567)<<x568);

	if (t7 != 7840) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x613 = INT32_MIN;
	volatile uint8_t x615 = 1U;
	int32_t t8 = -1016664014;

	t8 = (((x613==x614)^x615)<<x616);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x621 = UINT16_MAX;
	int32_t x622 = -1;
	uint32_t x623 = UINT32_MAX;
	volatile uint32_t t9 = 9471U;

	t9 = (((x621==x622)^x623)<<x624);

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x629 = 208828621U;
	int64_t x630 = INT64_MIN;
	uint64_t x631 = UINT64_MAX;
	volatile uint64_t t10 = 151046250839352028LLU;

	t10 = (((x629==x630)^x631)<<x632);

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x697 = INT8_MAX;
	uint64_t x699 = 19435LLU;
	uint64_t t11 = 7993196933LLU;

	t11 = (((x697==x698)^x699)<<x700);

	if (t11 != 318423040LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x701 = -4388851349236LL;
	volatile int64_t x702 = INT64_MIN;
	volatile int32_t t12 = 554023611;

	t12 = (((x701==x702)^x703)<<x704);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x905 = INT64_MIN;
	uint64_t x906 = UINT64_MAX;
	volatile int32_t t13 = 2519798;

	t13 = (((x905==x906)^x907)<<x908);

	if (t13 != 1776) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1093 = -7;
	int32_t x1094 = INT32_MIN;
	volatile uint16_t x1095 = UINT16_MAX;

	t14 = (((x1093==x1094)^x1095)<<x1096);

	if (t14 != 131070) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1113 = -1LL;
	volatile int64_t x1114 = INT64_MIN;
	volatile int8_t x1115 = 6;
	uint16_t x1116 = 2U;
	int32_t t15 = -1;

	t15 = (((x1113==x1114)^x1115)<<x1116);

	if (t15 != 24) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1133 = INT16_MAX;
	uint16_t x1134 = 35U;
	int16_t x1135 = 125;
	uint8_t x1136 = 1U;
	static volatile int32_t t16 = 2952;

	t16 = (((x1133==x1134)^x1135)<<x1136);

	if (t16 != 250) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1245 = INT64_MAX;
	uint8_t x1246 = UINT8_MAX;
	uint16_t x1247 = UINT16_MAX;
	uint16_t x1248 = 3U;
	volatile int32_t t17 = 645018;

	t17 = (((x1245==x1246)^x1247)<<x1248);

	if (t17 != 524280) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x1309 = UINT16_MAX;
	uint64_t x1310 = 493286927LLU;
	int16_t x1311 = INT16_MAX;
	volatile int32_t t18 = -8751093;

	t18 = (((x1309==x1310)^x1311)<<x1312);

	if (t18 != 131068) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1658 = INT16_MIN;
	uint8_t x1659 = UINT8_MAX;
	static int8_t x1660 = 3;
	volatile int32_t t19 = 2140883;

	t19 = (((x1657==x1658)^x1659)<<x1660);

	if (t19 != 2040) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1765 = INT16_MAX;
	static volatile int64_t x1766 = INT64_MAX;
	int8_t x1767 = INT8_MAX;
	uint8_t x1768 = 3U;
	int32_t t20 = -49900;

	t20 = (((x1765==x1766)^x1767)<<x1768);

	if (t20 != 1016) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1861 = 16U;
	static int32_t x1862 = -1369426;
	static uint64_t x1863 = 29321513075963LLU;
	int64_t x1864 = 0LL;
	volatile uint64_t t21 = 64920907LLU;

	t21 = (((x1861==x1862)^x1863)<<x1864);

	if (t21 != 29321513075963LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1949 = INT64_MIN;
	volatile int8_t x1950 = -2;
	uint64_t x1951 = UINT64_MAX;
	uint8_t x1952 = 37U;
	uint64_t t22 = 8667749152421785362LLU;

	t22 = (((x1949==x1950)^x1951)<<x1952);

	if (t22 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1993 = INT8_MAX;
	uint16_t x1994 = UINT16_MAX;
	static uint64_t x1995 = 1076642526LLU;
	static int16_t x1996 = 21;
	static volatile uint64_t t23 = 50768LLU;

	t23 = (((x1993==x1994)^x1995)<<x1996);

	if (t23 != 2257883026685952LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x2049 = 674664843;
	int8_t x2050 = INT8_MAX;
	static uint16_t x2051 = 0U;
	int8_t x2052 = 0;

	t24 = (((x2049==x2050)^x2051)<<x2052);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x2161 = UINT8_MAX;
	int32_t x2162 = 0;
	int32_t x2163 = 3840;
	uint8_t x2164 = 1U;
	volatile int32_t t25 = -515438008;

	t25 = (((x2161==x2162)^x2163)<<x2164);

	if (t25 != 7680) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2171 = 7;
	volatile uint16_t x2172 = 13U;
	static int32_t t26 = -128;

	t26 = (((x2169==x2170)^x2171)<<x2172);

	if (t26 != 57344) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2201 = 2024870598072448198LL;
	uint32_t x2202 = 23294129U;
	uint32_t x2203 = UINT32_MAX;
	uint8_t x2204 = 25U;
	static volatile uint32_t t27 = 10685760U;

	t27 = (((x2201==x2202)^x2203)<<x2204);

	if (t27 != 4261412864U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2209 = INT16_MAX;
	volatile int8_t x2211 = INT8_MAX;
	uint8_t x2212 = 2U;
	volatile int32_t t28 = 11883;

	t28 = (((x2209==x2210)^x2211)<<x2212);

	if (t28 != 508) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2229 = INT16_MIN;
	int16_t x2230 = INT16_MIN;
	volatile int8_t x2231 = 13;
	volatile int8_t x2232 = 5;
	int32_t t29 = 29;

	t29 = (((x2229==x2230)^x2231)<<x2232);

	if (t29 != 384) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x2285 = 58392827U;
	int64_t x2286 = INT64_MIN;
	static int8_t x2287 = 0;
	int32_t t30 = 0;

	t30 = (((x2285==x2286)^x2287)<<x2288);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x2357 = -1;
	static int16_t x2359 = INT16_MAX;
	int32_t x2360 = 1;
	volatile int32_t t31 = 855;

	t31 = (((x2357==x2358)^x2359)<<x2360);

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x2445 = INT16_MAX;
	static int16_t x2446 = INT16_MAX;
	uint64_t x2447 = UINT64_MAX;
	uint32_t x2448 = 3U;

	t32 = (((x2445==x2446)^x2447)<<x2448);

	if (t32 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2569 = 1U;
	uint64_t x2571 = UINT64_MAX;
	uint32_t x2572 = 1U;
	static volatile uint64_t t33 = 3827610686383462269LLU;

	t33 = (((x2569==x2570)^x2571)<<x2572);

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2673 = -3364;
	uint64_t x2674 = UINT64_MAX;
	static volatile uint8_t x2676 = 11U;
	uint64_t t34 = 12470945913LLU;

	t34 = (((x2673==x2674)^x2675)<<x2676);

	if (t34 != 22101166522593280LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2729 = INT32_MIN;
	uint32_t x2731 = 220797430U;
	uint8_t x2732 = 1U;
	uint32_t t35 = 228912658U;

	t35 = (((x2729==x2730)^x2731)<<x2732);

	if (t35 != 441594860U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2793 = INT8_MIN;
	uint8_t x2794 = UINT8_MAX;
	uint64_t x2795 = 7LLU;
	int8_t x2796 = 0;
	uint64_t t36 = 348784616300386LLU;

	t36 = (((x2793==x2794)^x2795)<<x2796);

	if (t36 != 7LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2849 = 366889LL;
	volatile int8_t x2850 = INT8_MIN;
	uint8_t x2851 = 1U;
	static uint8_t x2852 = 1U;
	volatile int32_t t37 = -4;

	t37 = (((x2849==x2850)^x2851)<<x2852);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2861 = 2U;
	static uint8_t x2862 = 7U;
	static int16_t x2863 = INT16_MAX;
	uint8_t x2864 = 16U;
	static volatile int32_t t38 = 608050102;

	t38 = (((x2861==x2862)^x2863)<<x2864);

	if (t38 != 2147418112) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2933 = -1LL;
	int32_t x2934 = -1;
	volatile uint64_t x2935 = UINT64_MAX;
	static volatile uint16_t x2936 = 0U;
	volatile uint64_t t39 = 1141LLU;

	t39 = (((x2933==x2934)^x2935)<<x2936);

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2941 = -1;
	volatile uint64_t x2943 = 937260408891702398LLU;
	volatile int64_t x2944 = 25LL;
	volatile uint64_t t40 = 7806263181LLU;

	t40 = (((x2941==x2942)^x2943)<<x2944);

	if (t40 != 13874479915052564480LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2970 = -593;
	static uint64_t x2971 = UINT64_MAX;
	volatile uint64_t t41 = 243LLU;

	t41 = (((x2969==x2970)^x2971)<<x2972);

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2993 = INT16_MIN;
	int64_t x2994 = INT64_MIN;
	int64_t x2995 = INT64_MAX;
	int8_t x2996 = 0;
	volatile int64_t t42 = INT64_MAX;

	t42 = (((x2993==x2994)^x2995)<<x2996);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x3009 = INT64_MAX;
	volatile int32_t x3010 = INT32_MAX;
	uint16_t x3011 = 254U;
	volatile int32_t t43 = -10882048;

	t43 = (((x3009==x3010)^x3011)<<x3012);

	if (t43 != 508) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x3065 = -1LL;
	int64_t x3066 = INT64_MIN;
	int16_t x3067 = 12;
	volatile uint32_t x3068 = 7U;

	t44 = (((x3065==x3066)^x3067)<<x3068);

	if (t44 != 1536) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x3154 = INT8_MIN;
	static uint8_t x3155 = UINT8_MAX;
	volatile int8_t x3156 = 0;

	t45 = (((x3153==x3154)^x3155)<<x3156);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3165 = INT8_MAX;
	int16_t x3166 = 0;
	int16_t x3168 = 1;
	volatile uint64_t t46 = 529LLU;

	t46 = (((x3165==x3166)^x3167)<<x3168);

	if (t46 != 29046480922LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3169 = -192597;
	int32_t x3170 = -1;
	volatile int16_t x3171 = INT16_MAX;
	int8_t x3172 = 13;

	t47 = (((x3169==x3170)^x3171)<<x3172);

	if (t47 != 268427264) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3346 = INT16_MIN;
	static uint64_t x3347 = UINT64_MAX;
	uint8_t x3348 = 16U;
	uint64_t t48 = 194950492LLU;

	t48 = (((x3345==x3346)^x3347)<<x3348);

	if (t48 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3349 = INT64_MIN;
	volatile uint16_t x3351 = 782U;
	uint16_t x3352 = 0U;
	int32_t t49 = -941657;

	t49 = (((x3349==x3350)^x3351)<<x3352);

	if (t49 != 782) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3353 = -1;
	int64_t x3354 = 50LL;
	uint8_t x3355 = 4U;
	uint8_t x3356 = 3U;
	volatile int32_t t50 = -507470;

	t50 = (((x3353==x3354)^x3355)<<x3356);

	if (t50 != 32) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3421 = 3U;
	volatile uint16_t x3422 = UINT16_MAX;
	int32_t x3423 = 1;
	static uint8_t x3424 = 19U;
	volatile int32_t t51 = -56497;

	t51 = (((x3421==x3422)^x3423)<<x3424);

	if (t51 != 524288) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3433 = -29;
	static volatile uint32_t x3434 = 2152859U;
	uint64_t x3435 = 411LLU;
	int64_t x3436 = 62LL;
	static uint64_t t52 = 1901LLU;

	t52 = (((x3433==x3434)^x3435)<<x3436);

	if (t52 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3457 = UINT32_MAX;
	static uint64_t x3458 = UINT64_MAX;
	int64_t x3459 = INT64_MAX;
	static int16_t x3460 = 0;

	t53 = (((x3457==x3458)^x3459)<<x3460);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x3525 = 42U;
	uint64_t x3526 = 8080843972936LLU;
	static int16_t x3528 = 3;
	volatile int32_t t54 = -9636580;

	t54 = (((x3525==x3526)^x3527)<<x3528);

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3553 = 24;
	int16_t x3554 = INT16_MIN;
	uint64_t x3555 = UINT64_MAX;
	volatile int8_t x3556 = 0;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x3553==x3554)^x3555)<<x3556);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3609 = 51;
	int8_t x3610 = INT8_MAX;
	uint16_t x3611 = 2018U;
	uint32_t x3612 = 5U;
	int32_t t56 = -222820;

	t56 = (((x3609==x3610)^x3611)<<x3612);

	if (t56 != 64576) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3613 = INT16_MAX;
	int64_t x3614 = -1226166953240LL;
	volatile int64_t x3615 = 8687443133053787LL;
	int8_t x3616 = 1;
	int64_t t57 = 400093943LL;

	t57 = (((x3613==x3614)^x3615)<<x3616);

	if (t57 != 17374886266107574LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3665 = 0U;
	static volatile int16_t x3666 = INT16_MIN;
	int8_t x3668 = 1;
	uint64_t t58 = 28LLU;

	t58 = (((x3665==x3666)^x3667)<<x3668);

	if (t58 != 16893693571623976LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3689 = INT32_MIN;
	int8_t x3690 = INT8_MIN;
	volatile int32_t t59 = 2;

	t59 = (((x3689==x3690)^x3691)<<x3692);

	if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3707 = UINT8_MAX;
	int16_t x3708 = 3;

	t60 = (((x3705==x3706)^x3707)<<x3708);

	if (t60 != 2040) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3789 = INT64_MIN;
	int16_t x3790 = INT16_MAX;
	static volatile uint64_t x3791 = UINT64_MAX;
	uint16_t x3792 = 28U;
	volatile uint64_t t61 = 3991786LLU;

	t61 = (((x3789==x3790)^x3791)<<x3792);

	if (t61 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3877 = -828558308;
	static uint8_t x3878 = 0U;
	volatile int8_t x3879 = 29;
	volatile int8_t x3880 = 18;

	t62 = (((x3877==x3878)^x3879)<<x3880);

	if (t62 != 7602176) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3885 = -2;
	int32_t t63 = -1064008153;

	t63 = (((x3885==x3886)^x3887)<<x3888);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4021 = -1LL;
	int8_t x4022 = 23;
	static int8_t x4023 = INT8_MAX;
	volatile uint16_t x4024 = 20U;
	int32_t t64 = 1;

	t64 = (((x4021==x4022)^x4023)<<x4024);

	if (t64 != 133169152) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x4037 = INT32_MAX;
	volatile int32_t x4038 = -121;
	volatile uint32_t x4039 = 10567U;
	uint8_t x4040 = 9U;

	t65 = (((x4037==x4038)^x4039)<<x4040);

	if (t65 != 5410304U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x4045 = UINT32_MAX;
	int32_t x4046 = 6;

	t66 = (((x4045==x4046)^x4047)<<x4048);

	if (t66 != 131068) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4134 = UINT32_MAX;
	int8_t x4135 = 55;
	uint32_t x4136 = 22U;
	static volatile int32_t t67 = -1045816813;

	t67 = (((x4133==x4134)^x4135)<<x4136);

	if (t67 != 230686720) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x4213 = -1LL;
	volatile uint64_t x4214 = 101LLU;
	uint64_t x4215 = 82748862LLU;
	int16_t x4216 = 0;
	uint64_t t68 = 189209050248213LLU;

	t68 = (((x4213==x4214)^x4215)<<x4216);

	if (t68 != 82748862LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4245 = INT16_MIN;
	static int8_t x4246 = -1;
	uint8_t x4248 = 8U;
	volatile int32_t t69 = -254;

	t69 = (((x4245==x4246)^x4247)<<x4248);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4305 = 1046294588908298LLU;
	uint32_t x4307 = 0U;
	volatile int8_t x4308 = 0;
	uint32_t t70 = 82310U;

	t70 = (((x4305==x4306)^x4307)<<x4308);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4353 = UINT8_MAX;
	static uint16_t x4354 = 20619U;
	volatile uint32_t x4356 = 14U;

	t71 = (((x4353==x4354)^x4355)<<x4356);

	if (t71 != 1134220873015689216LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x4505 = -1;
	uint16_t x4506 = 1U;
	uint16_t x4507 = 2U;
	uint32_t x4508 = 18U;
	int32_t t72 = -1390626;

	t72 = (((x4505==x4506)^x4507)<<x4508);

	if (t72 != 524288) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4521 = 481U;
	static int8_t x4522 = INT8_MIN;
	uint16_t x4523 = UINT16_MAX;
	int16_t x4524 = 0;
	int32_t t73 = 271639;

	t73 = (((x4521==x4522)^x4523)<<x4524);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4873 = INT8_MAX;
	volatile uint32_t x4874 = 99U;
	uint8_t x4876 = 1U;
	int32_t t74 = 127769727;

	t74 = (((x4873==x4874)^x4875)<<x4876);

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4886 = -1333;
	static uint64_t x4887 = 25886383543855LLU;
	int8_t x4888 = 11;
	uint64_t t75 = 1080111825420523LLU;

	t75 = (((x4885==x4886)^x4887)<<x4888);

	if (t75 != 53015313497815040LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4902 = INT64_MIN;
	uint8_t x4903 = 1U;
	static uint32_t x4904 = 1U;
	static int32_t t76 = 7806242;

	t76 = (((x4901==x4902)^x4903)<<x4904);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4938 = -1;
	uint8_t x4939 = 0U;
	uint8_t x4940 = 6U;
	static int32_t t77 = 7860541;

	t77 = (((x4937==x4938)^x4939)<<x4940);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5174 = UINT64_MAX;
	static int8_t x5176 = 0;
	int32_t t78 = -37704;

	t78 = (((x5173==x5174)^x5175)<<x5176);

	if (t78 != 934) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5393 = UINT8_MAX;
	int8_t x5394 = 57;
	uint16_t x5395 = 254U;
	static int64_t x5396 = 1LL;
	int32_t t79 = 65745;

	t79 = (((x5393==x5394)^x5395)<<x5396);

	if (t79 != 508) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x5425 = INT64_MIN;
	volatile int8_t x5426 = INT8_MIN;
	uint8_t x5427 = UINT8_MAX;
	static int32_t t80 = -117276;

	t80 = (((x5425==x5426)^x5427)<<x5428);

	if (t80 != 510) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5449 = -3037839LL;
	uint64_t x5450 = 20820862608LLU;
	static int8_t x5451 = 12;
	uint32_t x5452 = 10U;
	static volatile int32_t t81 = 353946;

	t81 = (((x5449==x5450)^x5451)<<x5452);

	if (t81 != 12288) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x5541 = 23848238;
	volatile int8_t x5542 = INT8_MIN;
	uint16_t x5543 = UINT16_MAX;
	int32_t t82 = 149;

	t82 = (((x5541==x5542)^x5543)<<x5544);

	if (t82 != 2097120) { NG(); } else { ; }
	
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


    return 0;
}

