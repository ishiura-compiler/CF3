
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

volatile int8_t x173 = 0;
uint32_t x174 = UINT32_MAX;
uint32_t x226 = 26U;
int16_t x279 = INT16_MAX;
int32_t t2 = -2498032;
static int32_t x281 = INT32_MIN;
int64_t x283 = -1LL;
int16_t x290 = 7;
volatile int8_t x398 = INT8_MIN;
uint16_t x720 = UINT16_MAX;
int32_t x741 = INT32_MIN;
int32_t t8 = 92;
uint32_t x1130 = 28U;
volatile int8_t x1132 = INT8_MIN;
int32_t t14 = 3;
uint8_t x1584 = 31U;
int32_t x1876 = -1;
volatile int32_t t19 = 40;
int32_t x2026 = 20231;
int16_t x2508 = INT16_MIN;
uint32_t x2629 = 712710223U;
static int64_t x2668 = -1LL;
int16_t x2687 = INT16_MIN;
static int16_t x2688 = INT16_MIN;
int8_t x2826 = INT8_MAX;
int16_t x2827 = -1;
static uint32_t t30 = 782255960U;
static volatile int64_t x2963 = -1LL;
int32_t t31 = 223;
int8_t x2968 = INT8_MIN;
volatile uint64_t x3009 = 1152696022678LLU;
static int8_t x3011 = -1;
int16_t x3012 = -1;
uint64_t x3019 = UINT64_MAX;
volatile int8_t x3309 = -1;
static uint64_t x3480 = UINT64_MAX;
int64_t x3545 = 12526792684LL;
int16_t x3546 = -12;
static int8_t x3547 = -1;
int8_t x3597 = INT8_MAX;
int8_t x3599 = INT8_MIN;
static int32_t x3942 = INT32_MIN;
int16_t x3953 = 40;
uint64_t t43 = 4LLU;
uint8_t x4227 = UINT8_MAX;
uint8_t x4228 = UINT8_MAX;
int8_t x4298 = INT8_MIN;
int8_t x4300 = -1;
uint16_t x4422 = UINT16_MAX;
uint8_t x4549 = 0U;
uint32_t x4554 = 206U;
static volatile int32_t x4556 = INT32_MIN;
static volatile uint32_t t49 = 1U;
uint8_t x4571 = 2U;
int16_t x4627 = -1;
volatile uint64_t t52 = 62885LLU;
int32_t x4850 = 123363648;
static int32_t t54 = 16642;
int8_t x4878 = -2;
static uint16_t x5085 = 385U;
volatile int32_t t57 = -200608479;
static int64_t x5275 = -1LL;
int16_t x5302 = 1;
int32_t x5493 = INT32_MIN;
int32_t x5722 = INT32_MIN;
uint32_t x5841 = 179U;
int8_t x5848 = 2;
int32_t t66 = 7253978;
static volatile uint8_t x6090 = UINT8_MAX;
int32_t x6092 = -1;


void f0(void) {
    	int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MIN;
	static volatile uint32_t t0 = 52072U;

    t0 = ((x173/x174)/(x175==x176));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x225 = 0;
	static uint64_t x227 = UINT64_MAX;
	volatile uint64_t x228 = UINT64_MAX;
	uint32_t t1 = 53967335U;

    t1 = ((x225/x226)/(x227==x228));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x277 = INT32_MIN;
	volatile uint8_t x278 = 2U;
	static int16_t x280 = INT16_MAX;

    t2 = ((x277/x278)/(x279==x280));

    if (t2 != -1073741824) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x282 = UINT64_MAX;
	static int64_t x284 = -1LL;
	uint64_t t3 = 481055990754392403LLU;

    t3 = ((x281/x282)/(x283==x284));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x289 = 586305962708112735LLU;
	volatile int16_t x291 = -1;
	volatile int8_t x292 = -1;
	uint64_t t4 = 655093LLU;

    t4 = ((x289/x290)/(x291==x292));

    if (t4 != 83757994672587533LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x397 = -1LL;
	int8_t x399 = -1;
	int8_t x400 = -1;
	volatile int64_t t5 = -2LL;

    t5 = ((x397/x398)/(x399==x400));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x533 = 1;
	int64_t x534 = INT64_MIN;
	int32_t x535 = -1;
	volatile int16_t x536 = -1;
	int64_t t6 = 556LL;

    t6 = ((x533/x534)/(x535==x536));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x717 = INT8_MIN;
	static volatile uint64_t x718 = UINT64_MAX;
	uint16_t x719 = UINT16_MAX;
	volatile uint64_t t7 = 842679491469LLU;

    t7 = ((x717/x718)/(x719==x720));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x742 = -764;
	int32_t x743 = INT32_MIN;
	int32_t x744 = INT32_MIN;

    t8 = ((x741/x742)/(x743==x744));

    if (t8 != 2810842) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x821 = INT16_MAX;
	int8_t x822 = INT8_MIN;
	int64_t x823 = -1LL;
	static int16_t x824 = -1;
	int32_t t9 = -111158691;

    t9 = ((x821/x822)/(x823==x824));

    if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x865 = INT64_MAX;
	static volatile uint16_t x866 = 2799U;
	static int64_t x867 = -1LL;
	int8_t x868 = -1;
	int64_t t10 = -10812LL;

    t10 = ((x865/x866)/(x867==x868));

    if (t10 != 3295238312559762LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x1129 = 6U;
	int8_t x1131 = INT8_MIN;
	volatile uint32_t t11 = 1610252265U;

    t11 = ((x1129/x1130)/(x1131==x1132));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x1389 = INT16_MIN;
	static volatile int32_t x1390 = INT32_MIN;
	volatile uint16_t x1391 = UINT16_MAX;
	uint16_t x1392 = UINT16_MAX;
	int32_t t12 = 1244;

    t12 = ((x1389/x1390)/(x1391==x1392));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x1397 = 26U;
	uint32_t x1398 = UINT32_MAX;
	uint32_t x1399 = UINT32_MAX;
	volatile uint32_t x1400 = UINT32_MAX;
	volatile uint32_t t13 = 313002641U;

    t13 = ((x1397/x1398)/(x1399==x1400));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1429 = 1U;
	static int8_t x1430 = -1;
	int32_t x1431 = -1;
	static int16_t x1432 = -1;

    t14 = ((x1429/x1430)/(x1431==x1432));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1581 = INT16_MIN;
	uint16_t x1582 = 36U;
	volatile uint8_t x1583 = 31U;
	int32_t t15 = 149;

    t15 = ((x1581/x1582)/(x1583==x1584));

    if (t15 != -910) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1593 = -12177864447817643LL;
	int8_t x1594 = -1;
	int16_t x1595 = -1;
	int64_t x1596 = -1LL;
	volatile int64_t t16 = 49071581936158LL;

    t16 = ((x1593/x1594)/(x1595==x1596));

    if (t16 != 12177864447817643LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x1725 = 871U;
	volatile int64_t x1726 = INT64_MAX;
	uint16_t x1727 = UINT16_MAX;
	static volatile uint16_t x1728 = UINT16_MAX;
	int64_t t17 = -1LL;

    t17 = ((x1725/x1726)/(x1727==x1728));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1873 = 2529U;
	int64_t x1874 = INT64_MIN;
	int32_t x1875 = -1;
	static volatile int64_t t18 = -292691694394325973LL;

    t18 = ((x1873/x1874)/(x1875==x1876));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1937 = 1570U;
	int16_t x1938 = -3711;
	int64_t x1939 = INT64_MAX;
	int64_t x1940 = INT64_MAX;

    t19 = ((x1937/x1938)/(x1939==x1940));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x2025 = UINT16_MAX;
	uint64_t x2027 = UINT64_MAX;
	static int16_t x2028 = -1;
	int32_t t20 = -141714;

    t20 = ((x2025/x2026)/(x2027==x2028));

    if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x2029 = -1;
	int64_t x2030 = INT64_MIN;
	uint64_t x2031 = UINT64_MAX;
	int16_t x2032 = -1;
	volatile int64_t t21 = 766816670617077301LL;

    t21 = ((x2029/x2030)/(x2031==x2032));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2317 = INT8_MIN;
	volatile uint16_t x2318 = 2744U;
	static uint64_t x2319 = UINT64_MAX;
	static volatile int64_t x2320 = -1LL;
	volatile int32_t t22 = 16;

    t22 = ((x2317/x2318)/(x2319==x2320));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x2505 = INT16_MIN;
	uint32_t x2506 = UINT32_MAX;
	int16_t x2507 = INT16_MIN;
	static uint32_t t23 = 24557037U;

    t23 = ((x2505/x2506)/(x2507==x2508));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x2630 = 15714012U;
	static int16_t x2631 = INT16_MIN;
	int16_t x2632 = INT16_MIN;
	volatile uint32_t t24 = 24026U;

    t24 = ((x2629/x2630)/(x2631==x2632));

    if (t24 != 45U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x2665 = 52875094U;
	int32_t x2666 = INT32_MAX;
	uint64_t x2667 = UINT64_MAX;
	volatile uint32_t t25 = 3306672U;

    t25 = ((x2665/x2666)/(x2667==x2668));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x2685 = 947U;
	uint8_t x2686 = 60U;
	uint32_t t26 = 24U;

    t26 = ((x2685/x2686)/(x2687==x2688));

    if (t26 != 15U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x2693 = -1;
	static volatile int8_t x2694 = -1;
	int8_t x2695 = -1;
	uint32_t x2696 = UINT32_MAX;
	int32_t t27 = -3540;

    t27 = ((x2693/x2694)/(x2695==x2696));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2817 = UINT16_MAX;
	int32_t x2818 = INT32_MIN;
	int16_t x2819 = INT16_MIN;
	int16_t x2820 = INT16_MIN;
	static volatile int32_t t28 = -14616390;

    t28 = ((x2817/x2818)/(x2819==x2820));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2825 = -51;
	int16_t x2828 = -1;
	int32_t t29 = 17;

    t29 = ((x2825/x2826)/(x2827==x2828));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x2941 = INT16_MIN;
	volatile uint32_t x2942 = 7U;
	int64_t x2943 = 1LL;
	int16_t x2944 = 1;

    t30 = ((x2941/x2942)/(x2943==x2944));

    if (t30 != 613562075U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x2961 = -11;
	int32_t x2962 = INT32_MIN;
	int32_t x2964 = -1;

    t31 = ((x2961/x2962)/(x2963==x2964));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x2965 = -1;
	int8_t x2966 = INT8_MIN;
	int8_t x2967 = INT8_MIN;
	static int32_t t32 = -8023894;

    t32 = ((x2965/x2966)/(x2967==x2968));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x3010 = 56U;
	static volatile uint64_t t33 = 3934191850760804476LLU;

    t33 = ((x3009/x3010)/(x3011==x3012));

    if (t33 != 20583857547LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x3017 = INT64_MIN;
	volatile int64_t x3018 = -87LL;
	int32_t x3020 = -1;
	int64_t t34 = -21772454LL;

    t34 = ((x3017/x3018)/(x3019==x3020));

    if (t34 != 106015770538560641LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x3310 = INT64_MAX;
	int8_t x3311 = -1;
	int64_t x3312 = -1LL;
	int64_t t35 = 166395LL;

    t35 = ((x3309/x3310)/(x3311==x3312));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x3405 = 9050764;
	int16_t x3406 = 1855;
	static int32_t x3407 = INT32_MIN;
	static int32_t x3408 = INT32_MIN;
	int32_t t36 = 83490;

    t36 = ((x3405/x3406)/(x3407==x3408));

    if (t36 != 4879) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3477 = 405U;
	static volatile int64_t x3478 = 53215447LL;
	int64_t x3479 = -1LL;
	volatile int64_t t37 = -130146697LL;

    t37 = ((x3477/x3478)/(x3479==x3480));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x3548 = UINT64_MAX;
	static volatile int64_t t38 = -4316794LL;

    t38 = ((x3545/x3546)/(x3547==x3548));

    if (t38 != -1043899390LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x3598 = 224;
	int8_t x3600 = INT8_MIN;
	static int32_t t39 = -7202;

    t39 = ((x3597/x3598)/(x3599==x3600));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x3941 = UINT32_MAX;
	static int64_t x3943 = -1LL;
	int8_t x3944 = -1;
	volatile uint32_t t40 = 61410U;

    t40 = ((x3941/x3942)/(x3943==x3944));

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x3954 = 35996181375571806LLU;
	volatile uint8_t x3955 = 0U;
	static volatile uint64_t x3956 = 0LLU;
	volatile uint64_t t41 = 42003000657LLU;

    t41 = ((x3953/x3954)/(x3955==x3956));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x3965 = 1U;
	volatile int8_t x3966 = -1;
	int8_t x3967 = -1;
	static int16_t x3968 = -1;
	static volatile int32_t t42 = 4757;

    t42 = ((x3965/x3966)/(x3967==x3968));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x4077 = 1U;
	volatile uint64_t x4078 = 3325774372LLU;
	int16_t x4079 = INT16_MIN;
	int16_t x4080 = INT16_MIN;

    t43 = ((x4077/x4078)/(x4079==x4080));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x4225 = 245010863U;
	int64_t x4226 = -3491867LL;
	int64_t t44 = -20818918491LL;

    t44 = ((x4225/x4226)/(x4227==x4228));

    if (t44 != -70LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x4297 = INT8_MIN;
	volatile int32_t x4299 = -1;
	int32_t t45 = 0;

    t45 = ((x4297/x4298)/(x4299==x4300));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x4421 = UINT64_MAX;
	static int64_t x4423 = -1LL;
	int64_t x4424 = -1LL;
	static uint64_t t46 = 18162LLU;

    t46 = ((x4421/x4422)/(x4423==x4424));

    if (t46 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x4449 = 501;
	volatile uint8_t x4450 = 47U;
	static int64_t x4451 = -1LL;
	int64_t x4452 = -1LL;
	volatile int32_t t47 = -16113;

    t47 = ((x4449/x4450)/(x4451==x4452));

    if (t47 != 10) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x4550 = INT8_MIN;
	int8_t x4551 = -1;
	uint32_t x4552 = UINT32_MAX;
	int32_t t48 = 3;

    t48 = ((x4549/x4550)/(x4551==x4552));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x4553 = 58013827;
	int32_t x4555 = INT32_MIN;

    t49 = ((x4553/x4554)/(x4555==x4556));

    if (t49 != 281620U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x4569 = INT16_MIN;
	int16_t x4570 = 989;
	static uint8_t x4572 = 2U;
	static volatile int32_t t50 = -1790;

    t50 = ((x4569/x4570)/(x4571==x4572));

    if (t50 != -33) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x4625 = INT8_MIN;
	volatile int16_t x4626 = INT16_MAX;
	static volatile int8_t x4628 = -1;
	int32_t t51 = 958;

    t51 = ((x4625/x4626)/(x4627==x4628));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x4733 = 24074LLU;
	uint16_t x4734 = 13819U;
	static int32_t x4735 = -1;
	int8_t x4736 = -1;

    t52 = ((x4733/x4734)/(x4735==x4736));

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x4797 = 23U;
	volatile int16_t x4798 = INT16_MIN;
	int32_t x4799 = INT32_MIN;
	int32_t x4800 = INT32_MIN;
	volatile int32_t t53 = -129;

    t53 = ((x4797/x4798)/(x4799==x4800));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x4849 = -1;
	int16_t x4851 = INT16_MIN;
	int16_t x4852 = INT16_MIN;

    t54 = ((x4849/x4850)/(x4851==x4852));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x4857 = INT16_MAX;
	static int16_t x4858 = 7;
	int8_t x4859 = -1;
	volatile int32_t x4860 = -1;
	int32_t t55 = 5354;

    t55 = ((x4857/x4858)/(x4859==x4860));

    if (t55 != 4681) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x4877 = INT8_MIN;
	static volatile int64_t x4879 = -1LL;
	int8_t x4880 = -1;
	static int32_t t56 = 81449898;

    t56 = ((x4877/x4878)/(x4879==x4880));

    if (t56 != 64) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x5086 = -1;
	static int16_t x5087 = INT16_MIN;
	int16_t x5088 = INT16_MIN;

    t57 = ((x5085/x5086)/(x5087==x5088));

    if (t57 != -385) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x5273 = -1LL;
	int8_t x5274 = INT8_MAX;
	uint64_t x5276 = UINT64_MAX;
	int64_t t58 = -1419904187314430955LL;

    t58 = ((x5273/x5274)/(x5275==x5276));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x5301 = -4;
	uint64_t x5303 = UINT64_MAX;
	volatile int64_t x5304 = -1LL;
	volatile int32_t t59 = 2395408;

    t59 = ((x5301/x5302)/(x5303==x5304));

    if (t59 != -4) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x5337 = UINT64_MAX;
	static int32_t x5338 = INT32_MAX;
	int8_t x5339 = -1;
	int32_t x5340 = -1;
	volatile uint64_t t60 = 867943303162LLU;

    t60 = ((x5337/x5338)/(x5339==x5340));

    if (t60 != 8589934596LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x5494 = 36U;
	int32_t x5495 = -1;
	static volatile int32_t x5496 = -1;
	volatile int32_t t61 = 999910;

    t61 = ((x5493/x5494)/(x5495==x5496));

    if (t61 != -59652323) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x5625 = INT16_MIN;
	uint64_t x5626 = 1071528728949534LLU;
	int16_t x5627 = -1;
	int64_t x5628 = -1LL;
	static volatile uint64_t t62 = 12558677803815LLU;

    t62 = ((x5625/x5626)/(x5627==x5628));

    if (t62 != 17215LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x5633 = -61;
	int16_t x5634 = 1;
	volatile int16_t x5635 = -1;
	int64_t x5636 = -1LL;
	volatile int32_t t63 = -14;

    t63 = ((x5633/x5634)/(x5635==x5636));

    if (t63 != -61) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x5721 = INT32_MIN;
	volatile int64_t x5723 = -1LL;
	int16_t x5724 = -1;
	volatile int32_t t64 = -22240;

    t64 = ((x5721/x5722)/(x5723==x5724));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x5842 = INT8_MIN;
	volatile int32_t x5843 = -1;
	static volatile uint32_t x5844 = UINT32_MAX;
	static uint32_t t65 = 1U;

    t65 = ((x5841/x5842)/(x5843==x5844));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x5845 = 60;
	volatile int32_t x5846 = INT32_MIN;
	volatile uint32_t x5847 = 2U;

    t66 = ((x5845/x5846)/(x5847==x5848));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x6089 = -843;
	int16_t x6091 = -1;
	int32_t t67 = -2022;

    t67 = ((x6089/x6090)/(x6091==x6092));

    if (t67 != -3) { NG(); } else { ; }
	
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


    return 0;
}

