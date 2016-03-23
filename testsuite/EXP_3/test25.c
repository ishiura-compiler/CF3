
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x222 = INT16_MIN;
int32_t t0 = -62231;
static volatile int32_t x415 = 3;
int32_t x591 = -1;
uint64_t x649 = 9652409182176LLU;
uint64_t t5 = 1600586LLU;
static volatile int32_t t8 = 188730;
uint16_t x1135 = 1U;
volatile int64_t x1229 = INT64_MIN;
volatile uint64_t t12 = 14602976769LLU;
static uint8_t x1323 = 25U;
uint64_t x1336 = UINT64_MAX;
uint64_t x2122 = 34680920LLU;
uint64_t t19 = 2693213LLU;
static volatile uint32_t t20 = 256016183U;
int64_t x2598 = INT64_MIN;
uint8_t x2599 = 50U;
uint32_t x2657 = 7904U;
int32_t x2673 = INT32_MAX;
int8_t x2674 = INT8_MAX;
volatile uint64_t x2676 = UINT64_MAX;
volatile uint64_t x2747 = UINT64_MAX;
static int64_t x2909 = INT64_MAX;
volatile uint64_t x2910 = UINT64_MAX;
volatile uint64_t t26 = 14LLU;
int16_t x2924 = -1;
int32_t x3029 = 6;
int16_t x3030 = 6;
int64_t x3062 = 39249088477726018LL;
static volatile int8_t x3219 = -1;
uint64_t x3242 = 2214938221497232LLU;
static volatile int64_t x3495 = 3LL;
int32_t x3570 = 1;
volatile int64_t x3737 = -4386LL;
static volatile uint64_t x3738 = 1290991LLU;
static volatile uint16_t x3740 = 2U;
uint16_t x3843 = 37U;
volatile uint64_t t36 = 30491090135484064LLU;
int32_t x4063 = -1;
uint8_t x4064 = 14U;
uint64_t t37 = 0LLU;
volatile uint32_t x4081 = 9952357U;
uint8_t x4135 = 0U;
static volatile uint32_t t41 = 29981329U;
static uint64_t x5146 = UINT64_MAX;
uint64_t t46 = 8738335222595344LLU;
static volatile int16_t x5169 = -1;
uint64_t t47 = 262519236533134031LLU;
int16_t x5223 = -1;
static int32_t x5349 = -7339941;
volatile uint32_t x5352 = UINT32_MAX;
static volatile uint64_t t50 = 327260LLU;
uint64_t t51 = 6135LLU;
int16_t x5784 = 5;
int32_t t52 = 130;
int64_t x5881 = INT64_MAX;
uint32_t x5884 = 20U;
int8_t x5926 = -1;
static uint64_t x5946 = 960691589LLU;
volatile uint64_t x6076 = 1LLU;
int32_t x6336 = 12;
static volatile uint64_t x6502 = 25LLU;
uint64_t t64 = 2833LLU;
uint16_t x7190 = 0U;
static uint32_t x7437 = UINT32_MAX;
uint32_t t69 = 126586U;
uint8_t x7732 = 27U;
int16_t x7763 = -1;
static uint32_t t73 = 453993U;


void f0(void) {
    	uint8_t x221 = 1U;
	int16_t x223 = -3;
	static uint8_t x224 = 9U;

    t0 = ((x221-x222)>>(x223+x224));

    if (t0 != 512) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x229 = UINT32_MAX;
	int32_t x230 = 7;
	uint64_t x231 = UINT64_MAX;
	static uint8_t x232 = 12U;
	uint32_t t1 = 1U;

    t1 = ((x229-x230)>>(x231+x232));

    if (t1 != 2097151U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x413 = 30193433857326909LLU;
	int64_t x414 = -3499LL;
	uint32_t x416 = UINT32_MAX;
	uint64_t t2 = 23850546LLU;

    t2 = ((x413-x414)>>(x415+x416));

    if (t2 != 7548358464332602LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x589 = INT16_MAX;
	int8_t x590 = INT8_MIN;
	uint16_t x592 = 3U;
	static volatile int32_t t3 = 119105;

    t3 = ((x589-x590)>>(x591+x592));

    if (t3 != 8223) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x650 = 53U;
	uint8_t x651 = 51U;
	volatile uint8_t x652 = 9U;
	volatile uint64_t t4 = 119477769174LLU;

    t4 = ((x649-x650)>>(x651+x652));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x657 = 83513LLU;
	int32_t x658 = INT32_MIN;
	int8_t x659 = 0;
	uint8_t x660 = 9U;

    t5 = ((x657-x658)>>(x659+x660));

    if (t5 != 4194467LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x689 = INT64_MAX;
	uint64_t x690 = UINT64_MAX;
	int8_t x691 = 12;
	static int64_t x692 = -1LL;
	volatile uint64_t t6 = 2017235023747916LLU;

    t6 = ((x689-x690)>>(x691+x692));

    if (t6 != 4503599627370496LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x757 = UINT64_MAX;
	int16_t x758 = 6724;
	int16_t x759 = -1;
	int8_t x760 = 1;
	volatile uint64_t t7 = 219738LLU;

    t7 = ((x757-x758)>>(x759+x760));

    if (t7 != 18446744073709544891LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x989 = 13;
	int32_t x990 = -450;
	int8_t x991 = 1;
	int64_t x992 = -1LL;

    t8 = ((x989-x990)>>(x991+x992));

    if (t8 != 463) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1121 = 79U;
	static int32_t x1122 = -1;
	int16_t x1123 = -1;
	int8_t x1124 = 2;
	static volatile int32_t t9 = 59270;

    t9 = ((x1121-x1122)>>(x1123+x1124));

    if (t9 != 40) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x1133 = -1LL;
	int32_t x1134 = -1;
	uint8_t x1136 = 3U;
	volatile int64_t t10 = -4LL;

    t10 = ((x1133-x1134)>>(x1135+x1136));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x1193 = -1;
	static int64_t x1194 = INT64_MIN;
	static uint16_t x1195 = 3U;
	uint32_t x1196 = 14U;
	int64_t t11 = -1LL;

    t11 = ((x1193-x1194)>>(x1195+x1196));

    if (t11 != 70368744177663LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x1230 = 1LLU;
	int8_t x1231 = 2;
	uint16_t x1232 = 14U;

    t12 = ((x1229-x1230)>>(x1231+x1232));

    if (t12 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x1321 = -10;
	int16_t x1322 = INT16_MIN;
	uint16_t x1324 = 3U;
	int32_t t13 = -138662534;

    t13 = ((x1321-x1322)>>(x1323+x1324));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1333 = INT32_MAX;
	static uint8_t x1334 = UINT8_MAX;
	int8_t x1335 = 7;
	int32_t t14 = 0;

    t14 = ((x1333-x1334)>>(x1335+x1336));

    if (t14 != 33554428) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1697 = -1LL;
	static uint64_t x1698 = 210LLU;
	volatile uint32_t x1699 = UINT32_MAX;
	uint32_t x1700 = 2U;
	uint64_t t15 = 6347734064766378410LLU;

    t15 = ((x1697-x1698)>>(x1699+x1700));

    if (t15 != 9223372036854775702LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x1741 = 4;
	int16_t x1742 = -6772;
	volatile uint16_t x1743 = 22U;
	uint16_t x1744 = 3U;
	int32_t t16 = 812;

    t16 = ((x1741-x1742)>>(x1743+x1744));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x2005 = UINT16_MAX;
	int32_t x2006 = -2786;
	volatile int64_t x2007 = 2LL;
	int16_t x2008 = -1;
	int32_t t17 = 480703134;

    t17 = ((x2005-x2006)>>(x2007+x2008));

    if (t17 != 34160) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x2121 = -1;
	volatile int32_t x2123 = -1;
	uint64_t x2124 = 3LLU;
	volatile uint64_t t18 = 0LLU;

    t18 = ((x2121-x2122)>>(x2123+x2124));

    if (t18 != 4611686018418717673LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x2337 = 2U;
	static volatile uint64_t x2338 = 33501543773LLU;
	static uint32_t x2339 = 2U;
	int16_t x2340 = -1;

    t19 = ((x2337-x2338)>>(x2339+x2340));

    if (t19 != 9223372020104003922LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x2445 = INT8_MIN;
	uint32_t x2446 = 37453U;
	uint8_t x2447 = 10U;
	int16_t x2448 = -1;

    t20 = ((x2445-x2446)>>(x2447+x2448));

    if (t20 != 8388534U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x2513 = INT16_MIN;
	int32_t x2514 = INT32_MIN;
	uint8_t x2515 = 6U;
	uint64_t x2516 = UINT64_MAX;
	int32_t t21 = -58028;

    t21 = ((x2513-x2514)>>(x2515+x2516));

    if (t21 != 67107840) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x2597 = 132578369738LLU;
	static int32_t x2600 = -1;
	static volatile uint64_t t22 = 858063LLU;

    t22 = ((x2597-x2598)>>(x2599+x2600));

    if (t22 != 16384LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x2658 = INT8_MIN;
	uint32_t x2659 = 3U;
	int32_t x2660 = -1;
	uint32_t t23 = 3U;

    t23 = ((x2657-x2658)>>(x2659+x2660));

    if (t23 != 2008U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2675 = 3U;
	volatile int32_t t24 = 241;

    t24 = ((x2673-x2674)>>(x2675+x2676));

    if (t24 != 536870880) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2745 = UINT64_MAX;
	int32_t x2746 = INT32_MAX;
	uint32_t x2748 = 6U;
	volatile uint64_t t25 = 2576130317LLU;

    t25 = ((x2745-x2746)>>(x2747+x2748));

    if (t25 != 576460752236314624LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x2911 = UINT32_MAX;
	int8_t x2912 = 1;

    t26 = ((x2909-x2910)>>(x2911+x2912));

    if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2921 = 20;
	static int32_t x2922 = -1;
	static volatile uint16_t x2923 = 5U;
	int32_t t27 = 777522;

    t27 = ((x2921-x2922)>>(x2923+x2924));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x3031 = UINT32_MAX;
	static uint32_t x3032 = 14U;
	int32_t t28 = 35396;

    t28 = ((x3029-x3030)>>(x3031+x3032));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x3061 = INT64_MAX;
	uint8_t x3063 = 10U;
	uint64_t x3064 = 0LLU;
	volatile int64_t t29 = 3514966025045LL;

    t29 = ((x3061-x3062)>>(x3063+x3064));

    if (t29 != 8968870066774462LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x3217 = 3969U;
	int32_t x3218 = 536;
	int8_t x3220 = 1;
	static uint32_t t30 = 283953883U;

    t30 = ((x3217-x3218)>>(x3219+x3220));

    if (t30 != 3433U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x3241 = INT8_MIN;
	static volatile uint8_t x3243 = 1U;
	int8_t x3244 = -1;
	volatile uint64_t t31 = 57004575499239LLU;

    t31 = ((x3241-x3242)>>(x3243+x3244));

    if (t31 != 18444529135488054256LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x3493 = 0U;
	int16_t x3494 = -1;
	volatile int32_t x3496 = -1;
	volatile int32_t t32 = -8167;

    t32 = ((x3493-x3494)>>(x3495+x3496));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x3569 = 1;
	static int32_t x3571 = -1;
	uint8_t x3572 = 2U;
	static int32_t t33 = -883014391;

    t33 = ((x3569-x3570)>>(x3571+x3572));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x3739 = 4U;
	volatile uint64_t t34 = 11366693624170879LLU;

    t34 = ((x3737-x3738)>>(x3739+x3740));

    if (t34 != 288230376151691503LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x3817 = -1;
	static volatile int16_t x3818 = -1;
	uint16_t x3819 = 2U;
	int8_t x3820 = -1;
	int32_t t35 = 0;

    t35 = ((x3817-x3818)>>(x3819+x3820));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x3841 = 7970081335189532LLU;
	int8_t x3842 = INT8_MIN;
	volatile int8_t x3844 = -1;

    t36 = ((x3841-x3842)>>(x3843+x3844));

    if (t36 != 115979LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x4061 = UINT8_MAX;
	uint64_t x4062 = 21942066623LLU;

    t37 = ((x4061-x4062)>>(x4063+x4064));

    if (t37 != 2251799811006773LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x4082 = INT16_MAX;
	uint8_t x4083 = 5U;
	int8_t x4084 = -1;
	static volatile uint32_t t38 = 54065U;

    t38 = ((x4081-x4082)>>(x4083+x4084));

    if (t38 != 619974U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x4113 = 8202197730LLU;
	uint8_t x4114 = 1U;
	uint8_t x4115 = 33U;
	int16_t x4116 = -1;
	uint64_t t39 = 5182LLU;

    t39 = ((x4113-x4114)>>(x4115+x4116));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x4133 = UINT16_MAX;
	uint64_t x4134 = UINT64_MAX;
	uint16_t x4136 = 32U;
	static volatile uint64_t t40 = 46893269LLU;

    t40 = ((x4133-x4134)>>(x4135+x4136));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x4289 = -6;
	uint32_t x4290 = 1460598573U;
	int8_t x4291 = 4;
	volatile int32_t x4292 = -1;

    t41 = ((x4289-x4290)>>(x4291+x4292));

    if (t41 != 354296089U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x4685 = 1871797LLU;
	volatile uint8_t x4686 = UINT8_MAX;
	int32_t x4687 = -1;
	int8_t x4688 = 1;
	uint64_t t42 = 3205LLU;

    t42 = ((x4685-x4686)>>(x4687+x4688));

    if (t42 != 1871542LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x4729 = -1;
	volatile int64_t x4730 = INT64_MIN;
	static uint8_t x4731 = 28U;
	volatile uint32_t x4732 = UINT32_MAX;
	int64_t t43 = -133666LL;

    t43 = ((x4729-x4730)>>(x4731+x4732));

    if (t43 != 68719476735LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x4953 = -2;
	int16_t x4954 = INT16_MIN;
	uint8_t x4955 = 3U;
	int16_t x4956 = -1;
	volatile int32_t t44 = -6222583;

    t44 = ((x4953-x4954)>>(x4955+x4956));

    if (t44 != 8191) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x5117 = 1;
	static int8_t x5118 = -30;
	static uint8_t x5119 = 2U;
	uint16_t x5120 = 13U;
	volatile int32_t t45 = 14;

    t45 = ((x5117-x5118)>>(x5119+x5120));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x5145 = INT32_MIN;
	static int64_t x5147 = 6LL;
	static int64_t x5148 = -1LL;

    t46 = ((x5145-x5146)>>(x5147+x5148));

    if (t46 != 576460752236314624LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x5170 = 1666546LLU;
	uint16_t x5171 = 15U;
	volatile int64_t x5172 = -1LL;

    t47 = ((x5169-x5170)>>(x5171+x5172));

    if (t47 != 1125899906842522LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x5221 = UINT8_MAX;
	int64_t x5222 = 0LL;
	uint8_t x5224 = 9U;
	volatile int64_t t48 = -755653177448115LL;

    t48 = ((x5221-x5222)>>(x5223+x5224));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x5321 = 8371096U;
	int8_t x5322 = -15;
	static uint16_t x5323 = 4U;
	int32_t x5324 = -1;
	uint32_t t49 = 380445U;

    t49 = ((x5321-x5322)>>(x5323+x5324));

    if (t49 != 1046388U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x5350 = 25708308LLU;
	uint16_t x5351 = 39U;

    t50 = ((x5349-x5350)>>(x5351+x5352));

    if (t50 != 67108863LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x5717 = -1;
	uint64_t x5718 = 166314LLU;
	static uint16_t x5719 = 9U;
	uint16_t x5720 = 47U;

    t51 = ((x5717-x5718)>>(x5719+x5720));

    if (t51 != 255LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x5781 = 6384;
	uint8_t x5782 = UINT8_MAX;
	int16_t x5783 = 19;

    t52 = ((x5781-x5782)>>(x5783+x5784));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x5882 = 102U;
	uint16_t x5883 = 1U;
	int64_t t53 = 786503LL;

    t53 = ((x5881-x5882)>>(x5883+x5884));

    if (t53 != 4398046511103LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x5925 = UINT8_MAX;
	volatile int32_t x5927 = -1;
	uint8_t x5928 = 1U;
	volatile int32_t t54 = -375839;

    t54 = ((x5925-x5926)>>(x5927+x5928));

    if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x5945 = INT8_MIN;
	static uint8_t x5947 = 1U;
	uint32_t x5948 = 0U;
	volatile uint64_t t55 = 2966402LLU;

    t55 = ((x5945-x5946)>>(x5947+x5948));

    if (t55 != 9223372036374429949LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x6025 = 177;
	static uint64_t x6026 = 25750058417LLU;
	int16_t x6027 = -1;
	int16_t x6028 = 1;
	static volatile uint64_t t56 = 0LLU;

    t56 = ((x6025-x6026)>>(x6027+x6028));

    if (t56 != 18446744047959493376LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x6037 = UINT64_MAX;
	volatile int32_t x6038 = INT32_MAX;
	int8_t x6039 = -1;
	static volatile uint64_t x6040 = 53LLU;
	uint64_t t57 = 16046744LLU;

    t57 = ((x6037-x6038)>>(x6039+x6040));

    if (t57 != 4095LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x6073 = 85395652226LL;
	uint8_t x6074 = UINT8_MAX;
	int16_t x6075 = -1;
	int64_t t58 = 1LL;

    t58 = ((x6073-x6074)>>(x6075+x6076));

    if (t58 != 85395651971LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x6333 = INT32_MAX;
	volatile int16_t x6334 = INT16_MAX;
	volatile uint32_t x6335 = UINT32_MAX;
	volatile int32_t t59 = -4068499;

    t59 = ((x6333-x6334)>>(x6335+x6336));

    if (t59 != 1048560) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x6361 = UINT64_MAX;
	uint8_t x6362 = 12U;
	int16_t x6363 = 1;
	static int16_t x6364 = 0;
	volatile uint64_t t60 = 355455559715LLU;

    t60 = ((x6361-x6362)>>(x6363+x6364));

    if (t60 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x6501 = INT8_MIN;
	uint8_t x6503 = 5U;
	uint32_t x6504 = UINT32_MAX;
	static uint64_t t61 = 6503050949661057LLU;

    t61 = ((x6501-x6502)>>(x6503+x6504));

    if (t61 != 1152921504606846966LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x6517 = UINT16_MAX;
	int8_t x6518 = -1;
	volatile uint32_t x6519 = UINT32_MAX;
	uint32_t x6520 = 6U;
	volatile int32_t t62 = 261867168;

    t62 = ((x6517-x6518)>>(x6519+x6520));

    if (t62 != 2048) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x6553 = 14;
	int16_t x6554 = INT16_MIN;
	volatile int64_t x6555 = -1LL;
	uint32_t x6556 = 2U;
	volatile int32_t t63 = 415175;

    t63 = ((x6553-x6554)>>(x6555+x6556));

    if (t63 != 16391) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x6565 = INT16_MIN;
	uint64_t x6566 = 3995840LLU;
	int32_t x6567 = 1;
	static uint64_t x6568 = 0LLU;

    t64 = ((x6565-x6566)>>(x6567+x6568));

    if (t64 != 9223372036852761504LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x6825 = 5458U;
	volatile uint32_t x6826 = 6064219U;
	uint8_t x6827 = 7U;
	int16_t x6828 = -1;
	volatile uint32_t t65 = 121296712U;

    t65 = ((x6825-x6826)>>(x6827+x6828));

    if (t65 != 67014195U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x7189 = 481889U;
	volatile uint16_t x7191 = 6U;
	int16_t x7192 = -1;
	uint32_t t66 = 1696632811U;

    t66 = ((x7189-x7190)>>(x7191+x7192));

    if (t66 != 15059U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x7361 = INT16_MAX;
	int64_t x7362 = -1LL;
	static uint8_t x7363 = 4U;
	static uint16_t x7364 = 2U;
	volatile int64_t t67 = 393873534LL;

    t67 = ((x7361-x7362)>>(x7363+x7364));

    if (t67 != 512LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x7438 = -1LL;
	uint8_t x7439 = 3U;
	static uint8_t x7440 = 4U;
	volatile int64_t t68 = -431329350944800704LL;

    t68 = ((x7437-x7438)>>(x7439+x7440));

    if (t68 != 33554432LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x7449 = 127368;
	uint32_t x7450 = UINT32_MAX;
	uint64_t x7451 = UINT64_MAX;
	uint8_t x7452 = 10U;

    t69 = ((x7449-x7450)>>(x7451+x7452));

    if (t69 != 248U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x7473 = INT8_MIN;
	uint64_t x7474 = 484315223654557861LLU;
	int64_t x7475 = -1LL;
	volatile int8_t x7476 = 1;
	volatile uint64_t t70 = 3244337231517LLU;

    t70 = ((x7473-x7474)>>(x7475+x7476));

    if (t70 != 17962428850054993627LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x7617 = 17662026340783522LLU;
	volatile uint16_t x7618 = 30255U;
	int8_t x7619 = 2;
	int16_t x7620 = 48;
	volatile uint64_t t71 = 10001860349465LLU;

    t71 = ((x7617-x7618)>>(x7619+x7620));

    if (t71 != 15LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x7729 = -1;
	volatile int32_t x7730 = -1;
	int32_t x7731 = -1;
	int32_t t72 = 373269;

    t72 = ((x7729-x7730)>>(x7731+x7732));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x7761 = INT16_MIN;
	volatile uint32_t x7762 = UINT32_MAX;
	uint8_t x7764 = 14U;

    t73 = ((x7761-x7762)>>(x7763+x7764));

    if (t73 != 524284U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x7769 = 1951897LLU;
	static int8_t x7770 = INT8_MIN;
	volatile int8_t x7771 = 0;
	int16_t x7772 = 2;
	volatile uint64_t t74 = 14061311523LLU;

    t74 = ((x7769-x7770)>>(x7771+x7772));

    if (t74 != 488006LLU) { NG(); } else { ; }
	
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


    return 0;
}

