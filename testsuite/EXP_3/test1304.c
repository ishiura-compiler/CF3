#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x98 = UINT16_MAX;
int16_t x99 = -1;
volatile int32_t t0 = -25444;
volatile int32_t x142 = -1;
volatile int32_t t1 = 56;
static int16_t x197 = -1;
int64_t x198 = INT64_MAX;
volatile int32_t x390 = INT32_MIN;
volatile int32_t t5 = -4642;
int32_t x617 = -1;
uint64_t x743 = UINT64_MAX;
uint16_t x969 = 7U;
static volatile uint32_t x1130 = UINT32_MAX;
uint64_t x1131 = UINT64_MAX;
volatile int16_t x1727 = -1;
int8_t x1734 = -1;
int64_t x1736 = -1LL;
int16_t x1751 = -1;
static uint32_t x1752 = UINT32_MAX;
uint16_t x1782 = UINT16_MAX;
int8_t x1783 = 1;
int32_t x2009 = 25;
static int64_t x2128 = INT64_MAX;
volatile int32_t t25 = -11857682;
uint16_t x2290 = 957U;
volatile int32_t x2453 = INT32_MAX;
volatile uint32_t x2454 = 2U;
int8_t x2456 = -1;
uint16_t x2642 = 11U;
volatile int16_t x2712 = -1;
int32_t x3000 = INT32_MIN;
int64_t x3143 = -1LL;
static int8_t x3164 = INT8_MAX;
static volatile int32_t x3299 = -1;
int16_t x3300 = -1;
int32_t x3447 = -1;
static volatile int16_t x3469 = 4740;
uint64_t x3605 = 49LLU;
volatile int64_t x3606 = INT64_MAX;
int32_t x3616 = -1;
volatile int32_t t46 = -5826533;
int16_t x4061 = -1;
int16_t x4064 = -9;
uint64_t x4081 = UINT64_MAX;
volatile int32_t t53 = -33350;
volatile int32_t t54 = 58627459;
static int32_t t55 = -1603;
uint16_t x4389 = UINT16_MAX;
int32_t x4439 = INT32_MIN;
static volatile int32_t t57 = 1;
int64_t x4549 = -299028LL;
volatile uint8_t x4552 = UINT8_MAX;
volatile int32_t t58 = 715;
volatile int8_t x4625 = -3;
volatile int8_t x4627 = 0;


void f0(void) {
	uint64_t x97 = 188286557271LLU;
	int8_t x100 = -1;

	t0 = ((x97<=x98)/(x99==x100));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x141 = -1112;
	int16_t x143 = -1;
	int16_t x144 = -1;

	t1 = ((x141<=x142)/(x143==x144));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x199 = -1;
	static uint32_t x200 = UINT32_MAX;
	int32_t t2 = -18538791;

	t2 = ((x197<=x198)/(x199==x200));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x281 = -30179894;
	int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	int32_t t3 = 4503577;

	t3 = ((x281<=x282)/(x283==x284));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x377 = UINT16_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	int32_t x379 = INT32_MIN;
	static volatile int32_t x380 = INT32_MIN;
	volatile int32_t t4 = 83320330;

	t4 = ((x377<=x378)/(x379==x380));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x389 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;

	t5 = ((x389<=x390)/(x391==x392));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x393 = 46942329750296LLU;
	int8_t x394 = -6;
	volatile int64_t x395 = INT64_MIN;
	static int64_t x396 = INT64_MIN;
	static int32_t t6 = -13;

	t6 = ((x393<=x394)/(x395==x396));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MIN;
	volatile int16_t x620 = INT16_MIN;
	int32_t t7 = 1036;

	t7 = ((x617<=x618)/(x619==x620));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x713 = INT64_MIN;
	static int8_t x714 = INT8_MAX;
	static volatile int16_t x715 = INT16_MIN;
	static int16_t x716 = INT16_MIN;
	int32_t t8 = 616696;

	t8 = ((x713<=x714)/(x715==x716));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x741 = INT64_MAX;
	volatile int16_t x742 = INT16_MAX;
	volatile int8_t x744 = -1;
	static int32_t t9 = 210;

	t9 = ((x741<=x742)/(x743==x744));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x861 = -43;
	int16_t x862 = -4;
	static int32_t x863 = -1;
	volatile int32_t x864 = -1;
	static volatile int32_t t10 = -132118188;

	t10 = ((x861<=x862)/(x863==x864));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x970 = -102927558LL;
	int8_t x971 = INT8_MAX;
	int8_t x972 = INT8_MAX;
	int32_t t11 = -7969346;

	t11 = ((x969<=x970)/(x971==x972));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1001 = UINT16_MAX;
	uint8_t x1002 = 14U;
	int8_t x1003 = -1;
	static uint32_t x1004 = UINT32_MAX;
	volatile int32_t t12 = 216556729;

	t12 = ((x1001<=x1002)/(x1003==x1004));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x1101 = 30U;
	int64_t x1102 = INT64_MIN;
	uint64_t x1103 = UINT64_MAX;
	int32_t x1104 = -1;
	volatile int32_t t13 = -29763252;

	t13 = ((x1101<=x1102)/(x1103==x1104));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x1129 = 126233LLU;
	int8_t x1132 = -1;
	static volatile int32_t t14 = 4;

	t14 = ((x1129<=x1130)/(x1131==x1132));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1365 = 1U;
	uint32_t x1366 = 1U;
	volatile int64_t x1367 = -1LL;
	static int32_t x1368 = -1;
	volatile int32_t t15 = -494674;

	t15 = ((x1365<=x1366)/(x1367==x1368));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1673 = UINT32_MAX;
	uint8_t x1674 = UINT8_MAX;
	static int32_t x1675 = INT32_MAX;
	int32_t x1676 = INT32_MAX;
	volatile int32_t t16 = -18620;

	t16 = ((x1673<=x1674)/(x1675==x1676));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1725 = 1724;
	static int32_t x1726 = INT32_MIN;
	static int64_t x1728 = -1LL;
	volatile int32_t t17 = 7;

	t17 = ((x1725<=x1726)/(x1727==x1728));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x1733 = 2005402728U;
	int64_t x1735 = -1LL;
	static int32_t t18 = 2515;

	t18 = ((x1733<=x1734)/(x1735==x1736));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x1749 = 5U;
	int8_t x1750 = -1;
	int32_t t19 = 41309;

	t19 = ((x1749<=x1750)/(x1751==x1752));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x1781 = INT8_MIN;
	uint16_t x1784 = 1U;
	int32_t t20 = -1;

	t20 = ((x1781<=x1782)/(x1783==x1784));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1869 = 34;
	static uint8_t x1870 = 1U;
	int32_t x1871 = -1;
	int32_t x1872 = -1;
	volatile int32_t t21 = -1;

	t21 = ((x1869<=x1870)/(x1871==x1872));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x2010 = INT64_MAX;
	int32_t x2011 = INT32_MAX;
	int32_t x2012 = INT32_MAX;
	volatile int32_t t22 = -3074;

	t22 = ((x2009<=x2010)/(x2011==x2012));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x2053 = UINT8_MAX;
	int8_t x2054 = INT8_MIN;
	int16_t x2055 = -1;
	int64_t x2056 = -1LL;
	int32_t t23 = 13124;

	t23 = ((x2053<=x2054)/(x2055==x2056));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2125 = INT64_MIN;
	volatile int32_t x2126 = 23;
	volatile int64_t x2127 = INT64_MAX;
	volatile int32_t t24 = -201;

	t24 = ((x2125<=x2126)/(x2127==x2128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2181 = 0;
	volatile int8_t x2182 = INT8_MAX;
	volatile int64_t x2183 = INT64_MIN;
	static volatile int64_t x2184 = INT64_MIN;

	t25 = ((x2181<=x2182)/(x2183==x2184));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x2249 = INT8_MAX;
	volatile uint8_t x2250 = 1U;
	uint32_t x2251 = UINT32_MAX;
	int32_t x2252 = -1;
	int32_t t26 = 14589977;

	t26 = ((x2249<=x2250)/(x2251==x2252));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2289 = UINT32_MAX;
	int8_t x2291 = INT8_MAX;
	int8_t x2292 = INT8_MAX;
	volatile int32_t t27 = 28884;

	t27 = ((x2289<=x2290)/(x2291==x2292));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x2357 = 0;
	uint16_t x2358 = 4673U;
	int64_t x2359 = INT64_MIN;
	int64_t x2360 = INT64_MIN;
	static int32_t t28 = 1770377;

	t28 = ((x2357<=x2358)/(x2359==x2360));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2393 = -7;
	int8_t x2394 = INT8_MIN;
	static uint64_t x2395 = UINT64_MAX;
	int16_t x2396 = -1;
	static int32_t t29 = 654;

	t29 = ((x2393<=x2394)/(x2395==x2396));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2455 = -1LL;
	int32_t t30 = -39998918;

	t30 = ((x2453<=x2454)/(x2455==x2456));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x2641 = 2U;
	int32_t x2643 = -1;
	int16_t x2644 = -1;
	int32_t t31 = 59297;

	t31 = ((x2641<=x2642)/(x2643==x2644));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x2709 = INT64_MIN;
	volatile int32_t x2710 = INT32_MIN;
	int32_t x2711 = -1;
	volatile int32_t t32 = -86;

	t32 = ((x2709<=x2710)/(x2711==x2712));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2997 = -1LL;
	int32_t x2998 = -13224769;
	int32_t x2999 = INT32_MIN;
	int32_t t33 = 0;

	t33 = ((x2997<=x2998)/(x2999==x3000));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x3005 = 1U;
	int16_t x3006 = INT16_MIN;
	int32_t x3007 = INT32_MIN;
	int32_t x3008 = INT32_MIN;
	int32_t t34 = 127702334;

	t34 = ((x3005<=x3006)/(x3007==x3008));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x3037 = 21U;
	uint8_t x3038 = 105U;
	int32_t x3039 = -1;
	int64_t x3040 = -1LL;
	volatile int32_t t35 = -11715243;

	t35 = ((x3037<=x3038)/(x3039==x3040));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x3061 = 233598408LLU;
	int32_t x3062 = INT32_MIN;
	int32_t x3063 = -1;
	volatile int16_t x3064 = -1;
	volatile int32_t t36 = -1;

	t36 = ((x3061<=x3062)/(x3063==x3064));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x3141 = UINT16_MAX;
	uint16_t x3142 = UINT16_MAX;
	volatile int32_t x3144 = -1;
	volatile int32_t t37 = 28856088;

	t37 = ((x3141<=x3142)/(x3143==x3144));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3161 = 6909715712817LLU;
	volatile uint16_t x3162 = 92U;
	int8_t x3163 = INT8_MAX;
	volatile int32_t t38 = 0;

	t38 = ((x3161<=x3162)/(x3163==x3164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x3165 = INT64_MIN;
	int16_t x3166 = 1;
	int8_t x3167 = -1;
	int16_t x3168 = -1;
	int32_t t39 = 14014;

	t39 = ((x3165<=x3166)/(x3167==x3168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x3297 = -619;
	uint64_t x3298 = 4563153235494134902LLU;
	static volatile int32_t t40 = 61076636;

	t40 = ((x3297<=x3298)/(x3299==x3300));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3441 = INT64_MAX;
	static volatile uint16_t x3442 = 55U;
	int64_t x3443 = -1LL;
	static int64_t x3444 = -1LL;
	volatile int32_t t41 = 7;

	t41 = ((x3441<=x3442)/(x3443==x3444));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x3445 = 15355210333LLU;
	volatile int16_t x3446 = -20;
	volatile int64_t x3448 = -1LL;
	int32_t t42 = -4055;

	t42 = ((x3445<=x3446)/(x3447==x3448));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3470 = -961;
	int32_t x3471 = INT32_MIN;
	static volatile int32_t x3472 = INT32_MIN;
	volatile int32_t t43 = 286321;

	t43 = ((x3469<=x3470)/(x3471==x3472));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3607 = -1LL;
	static int8_t x3608 = -1;
	int32_t t44 = 870877063;

	t44 = ((x3605<=x3606)/(x3607==x3608));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x3613 = -3195;
	int16_t x3614 = INT16_MIN;
	static uint64_t x3615 = UINT64_MAX;
	volatile int32_t t45 = 429712681;

	t45 = ((x3613<=x3614)/(x3615==x3616));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3757 = INT16_MAX;
	volatile int32_t x3758 = INT32_MIN;
	int16_t x3759 = -1;
	static int16_t x3760 = -1;

	t46 = ((x3757<=x3758)/(x3759==x3760));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3765 = 25932U;
	int8_t x3766 = INT8_MIN;
	int8_t x3767 = INT8_MIN;
	volatile int8_t x3768 = INT8_MIN;
	volatile int32_t t47 = 1;

	t47 = ((x3765<=x3766)/(x3767==x3768));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3809 = -6;
	uint8_t x3810 = UINT8_MAX;
	int16_t x3811 = -1;
	volatile int16_t x3812 = -1;
	volatile int32_t t48 = 257083257;

	t48 = ((x3809<=x3810)/(x3811==x3812));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3813 = INT16_MAX;
	static int64_t x3814 = INT64_MIN;
	static int8_t x3815 = -1;
	volatile uint64_t x3816 = UINT64_MAX;
	volatile int32_t t49 = -2675;

	t49 = ((x3813<=x3814)/(x3815==x3816));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3893 = UINT64_MAX;
	static volatile int16_t x3894 = INT16_MIN;
	static int8_t x3895 = -1;
	uint32_t x3896 = UINT32_MAX;
	int32_t t50 = -52483;

	t50 = ((x3893<=x3894)/(x3895==x3896));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x4025 = -6;
	volatile int16_t x4026 = INT16_MAX;
	int32_t x4027 = -1;
	int16_t x4028 = -1;
	int32_t t51 = 10;

	t51 = ((x4025<=x4026)/(x4027==x4028));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4062 = INT8_MIN;
	static int32_t x4063 = -9;
	int32_t t52 = -1424;

	t52 = ((x4061<=x4062)/(x4063==x4064));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x4082 = -20805750514LL;
	static int32_t x4083 = -1;
	int32_t x4084 = -1;

	t53 = ((x4081<=x4082)/(x4083==x4084));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x4125 = INT8_MIN;
	uint16_t x4126 = UINT16_MAX;
	int32_t x4127 = INT32_MIN;
	static int32_t x4128 = INT32_MIN;

	t54 = ((x4125<=x4126)/(x4127==x4128));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x4161 = INT32_MIN;
	volatile uint32_t x4162 = 30414952U;
	int8_t x4163 = -1;
	int64_t x4164 = -1LL;

	t55 = ((x4161<=x4162)/(x4163==x4164));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4390 = 42;
	int32_t x4391 = -1;
	static volatile int64_t x4392 = -1LL;
	static volatile int32_t t56 = 62097789;

	t56 = ((x4389<=x4390)/(x4391==x4392));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x4437 = -1;
	int32_t x4438 = INT32_MIN;
	int32_t x4440 = INT32_MIN;

	t57 = ((x4437<=x4438)/(x4439==x4440));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x4550 = 854U;
	static uint8_t x4551 = UINT8_MAX;

	t58 = ((x4549<=x4550)/(x4551==x4552));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4626 = 127U;
	uint8_t x4628 = 0U;
	volatile int32_t t59 = -7291;

	t59 = ((x4625<=x4626)/(x4627==x4628));

	if (t59 != 1) { NG(); } else { ; }
	
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


    return 0;
}

