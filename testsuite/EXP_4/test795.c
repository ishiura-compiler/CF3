
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

uint8_t x296 = 25U;
int16_t x299 = -1;
int32_t t3 = 4908;
uint32_t x438 = 39U;
int16_t x440 = INT16_MAX;
uint8_t x716 = UINT8_MAX;
volatile int64_t t7 = -1676266215608580242LL;
int16_t x839 = 1;
volatile int32_t t9 = 4;
int32_t x841 = 68616252;
static int16_t x844 = -1;
volatile int8_t x1031 = 2;
uint8_t x1074 = 11U;
int16_t x1076 = INT16_MIN;
int8_t x1236 = -1;
int8_t x1238 = -2;
volatile int16_t x1239 = 3;
int64_t x1240 = INT64_MIN;
uint8_t x1270 = 30U;
static int16_t x1450 = 1;
static int64_t x1591 = -1LL;
volatile uint64_t x1758 = UINT64_MAX;
int32_t t24 = 3416;
uint16_t x1849 = 1U;
volatile uint32_t x1850 = 9U;
static volatile int64_t x1851 = INT64_MIN;
int16_t x2070 = 1;
int8_t x2071 = INT8_MIN;
uint8_t x2087 = 2U;
volatile int64_t t29 = 62LL;
volatile int8_t x2327 = -1;
volatile int16_t x2328 = 5;
int32_t t30 = 2483;
int64_t x2458 = 20LL;
volatile uint32_t x2460 = UINT32_MAX;
volatile int8_t x2596 = 12;
uint32_t x2886 = 1U;
int32_t t37 = 6;
int64_t t38 = 272290574489LL;
uint8_t x2931 = 20U;
uint64_t x2952 = 27LLU;
uint32_t x3026 = 18U;
uint8_t x3030 = 20U;
static int16_t x3031 = -109;
static int32_t t45 = 5376179;
int64_t x3324 = INT64_MIN;
volatile uint64_t x3512 = UINT64_MAX;
static int16_t x3583 = -81;
int16_t x3750 = 9;
int32_t x3752 = INT32_MIN;
static volatile uint64_t t54 = 7628282685296633886LLU;
int16_t x4245 = 5396;
static int64_t x4268 = INT64_MIN;
static uint8_t x4269 = 6U;


void f0(void) {
    	int8_t x81 = INT8_MAX;
	static uint16_t x82 = 3U;
	static int32_t x83 = -1;
	int64_t x84 = -19865LL;
	volatile int32_t t0 = -1812;

    t0 = (x81>>(x82+(x83%x84)));

    if (t0 != 31) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x233 = 28U;
	static int8_t x234 = 2;
	volatile int8_t x235 = 1;
	int16_t x236 = -1;
	volatile int32_t t1 = 1;

    t1 = (x233>>(x234+(x235%x236)));

    if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x293 = 5U;
	int32_t x294 = -1;
	uint64_t x295 = 53809807030LLU;
	volatile uint32_t t2 = 29881U;

    t2 = (x293>>(x294+(x295%x296)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x297 = 1021U;
	volatile uint8_t x298 = 1U;
	uint8_t x300 = 2U;

    t3 = (x297>>(x298+(x299%x300)));

    if (t3 != 1021) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x309 = INT8_MAX;
	static uint16_t x310 = 3U;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	volatile int32_t t4 = 3197056;

    t4 = (x309>>(x310+(x311%x312)));

    if (t4 != 15) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x429 = INT64_MAX;
	volatile uint64_t x430 = 4LLU;
	volatile int64_t x431 = 159988034LL;
	uint8_t x432 = 21U;
	int64_t t5 = 1388737LL;

    t5 = (x429>>(x430+(x431%x432)));

    if (t5 != 4398046511103LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x437 = INT64_MAX;
	int64_t x439 = INT64_MIN;
	volatile int64_t t6 = 35768693802919190LL;

    t6 = (x437>>(x438+(x439%x440)));

    if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x713 = 1006799576763LL;
	int32_t x714 = 180;
	static int64_t x715 = INT64_MIN;

    t7 = (x713>>(x714+(x715%x716)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x753 = 12U;
	static volatile int8_t x754 = 0;
	static volatile uint16_t x755 = 2U;
	int16_t x756 = 33;
	static int32_t t8 = 0;

    t8 = (x753>>(x754+(x755%x756)));

    if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x837 = 38;
	static volatile int32_t x838 = -1;
	int8_t x840 = INT8_MIN;

    t9 = (x837>>(x838+(x839%x840)));

    if (t9 != 38) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x842 = -1;
	static uint32_t x843 = 14U;
	int32_t t10 = -226299;

    t10 = (x841>>(x842+(x843%x844)));

    if (t10 != 8376) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x1029 = 18325U;
	int8_t x1030 = 0;
	int16_t x1032 = -10801;
	static uint32_t t11 = 323121596U;

    t11 = (x1029>>(x1030+(x1031%x1032)));

    if (t11 != 4581U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1073 = 2U;
	volatile uint8_t x1075 = 0U;
	int32_t t12 = -11629;

    t12 = (x1073>>(x1074+(x1075%x1076)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x1077 = 3885U;
	int32_t x1078 = -1;
	volatile int16_t x1079 = 15;
	uint16_t x1080 = 24369U;
	static volatile int32_t t13 = -45;

    t13 = (x1077>>(x1078+(x1079%x1080)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1177 = INT64_MAX;
	int32_t x1178 = 2;
	int16_t x1179 = 0;
	uint32_t x1180 = 49U;
	int64_t t14 = 6462468479563737LL;

    t14 = (x1177>>(x1178+(x1179%x1180)));

    if (t14 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1233 = UINT16_MAX;
	static uint8_t x1234 = 1U;
	int32_t x1235 = -10775605;
	int32_t t15 = 896;

    t15 = (x1233>>(x1234+(x1235%x1236)));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x1237 = 1993304152U;
	static volatile uint32_t t16 = 7391U;

    t16 = (x1237>>(x1238+(x1239%x1240)));

    if (t16 != 996652076U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1269 = UINT8_MAX;
	int32_t x1271 = INT32_MIN;
	int32_t x1272 = INT32_MIN;
	int32_t t17 = 4;

    t17 = (x1269>>(x1270+(x1271%x1272)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1277 = INT32_MAX;
	uint16_t x1278 = 1U;
	uint16_t x1279 = 12U;
	int32_t x1280 = -1589;
	volatile int32_t t18 = 230;

    t18 = (x1277>>(x1278+(x1279%x1280)));

    if (t18 != 262143) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1321 = INT32_MAX;
	int8_t x1322 = 1;
	int8_t x1323 = INT8_MAX;
	int8_t x1324 = -1;
	volatile int32_t t19 = -30;

    t19 = (x1321>>(x1322+(x1323%x1324)));

    if (t19 != 1073741823) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1449 = 218LLU;
	int8_t x1451 = -1;
	volatile int64_t x1452 = -199LL;
	volatile uint64_t t20 = 36843679826539LLU;

    t20 = (x1449>>(x1450+(x1451%x1452)));

    if (t20 != 218LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1553 = 6U;
	uint64_t x1554 = UINT64_MAX;
	uint8_t x1555 = UINT8_MAX;
	static int64_t x1556 = -47LL;
	uint32_t t21 = 51070023U;

    t21 = (x1553>>(x1554+(x1555%x1556)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1565 = 32U;
	uint64_t x1566 = UINT64_MAX;
	volatile uint32_t x1567 = 2U;
	int64_t x1568 = INT64_MIN;
	volatile int32_t t22 = -1;

    t22 = (x1565>>(x1566+(x1567%x1568)));

    if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1589 = INT16_MAX;
	int16_t x1590 = 2;
	static uint8_t x1592 = 13U;
	volatile int32_t t23 = 690351316;

    t23 = (x1589>>(x1590+(x1591%x1592)));

    if (t23 != 16383) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1757 = 0U;
	uint64_t x1759 = UINT64_MAX;
	int64_t x1760 = INT64_MAX;

    t24 = (x1757>>(x1758+(x1759%x1760)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1852 = INT32_MIN;
	int32_t t25 = -12957774;

    t25 = (x1849>>(x1850+(x1851%x1852)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2005 = 122LL;
	int16_t x2006 = -3;
	static uint64_t x2007 = 36LLU;
	volatile int8_t x2008 = INT8_MAX;
	int64_t t26 = 8992276552636LL;

    t26 = (x2005>>(x2006+(x2007%x2008)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x2069 = 142U;
	volatile int32_t x2072 = -1;
	uint32_t t27 = 257358049U;

    t27 = (x2069>>(x2070+(x2071%x2072)));

    if (t27 != 71U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x2085 = INT64_MAX;
	int8_t x2086 = -1;
	volatile uint64_t x2088 = UINT64_MAX;
	volatile int64_t t28 = 265022744482740LL;

    t28 = (x2085>>(x2086+(x2087%x2088)));

    if (t28 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x2137 = 14655141000948013LL;
	int8_t x2138 = -1;
	static uint16_t x2139 = 6697U;
	int32_t x2140 = -4;

    t29 = (x2137>>(x2138+(x2139%x2140)));

    if (t29 != 14655141000948013LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x2325 = INT8_MAX;
	volatile uint32_t x2326 = 15U;

    t30 = (x2325>>(x2326+(x2327%x2328)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2457 = 20;
	uint32_t x2459 = 9U;
	volatile int32_t t31 = -3047;

    t31 = (x2457>>(x2458+(x2459%x2460)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2593 = UINT32_MAX;
	volatile uint64_t x2594 = UINT64_MAX;
	volatile uint8_t x2595 = 3U;
	static volatile uint32_t t32 = 69891137U;

    t32 = (x2593>>(x2594+(x2595%x2596)));

    if (t32 != 1073741823U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2701 = 3560;
	int8_t x2702 = 1;
	int8_t x2703 = INT8_MIN;
	static int64_t x2704 = -1LL;
	volatile int32_t t33 = 2255305;

    t33 = (x2701>>(x2702+(x2703%x2704)));

    if (t33 != 1780) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x2821 = 1LLU;
	volatile uint16_t x2822 = 1U;
	int16_t x2823 = -1;
	uint16_t x2824 = 6U;
	uint64_t t34 = 72LLU;

    t34 = (x2821>>(x2822+(x2823%x2824)));

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x2845 = UINT64_MAX;
	uint16_t x2846 = 3U;
	volatile int64_t x2847 = INT64_MIN;
	int8_t x2848 = -1;
	volatile uint64_t t35 = 420LLU;

    t35 = (x2845>>(x2846+(x2847%x2848)));

    if (t35 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2885 = 3658479855LLU;
	int32_t x2887 = INT32_MAX;
	static volatile uint8_t x2888 = 20U;
	uint64_t t36 = 41315504224LLU;

    t36 = (x2885>>(x2886+(x2887%x2888)));

    if (t36 != 14290936LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x2901 = UINT8_MAX;
	int8_t x2902 = 12;
	uint32_t x2903 = 1187925113U;
	int64_t x2904 = -1LL;

    t37 = (x2901>>(x2902+(x2903%x2904)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x2925 = INT64_MAX;
	static uint8_t x2926 = 20U;
	int64_t x2927 = -1LL;
	int8_t x2928 = INT8_MIN;

    t38 = (x2925>>(x2926+(x2927%x2928)));

    if (t38 != 17592186044415LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2929 = 6U;
	int32_t x2930 = -1;
	uint16_t x2932 = UINT16_MAX;
	int32_t t39 = -73;

    t39 = (x2929>>(x2930+(x2931%x2932)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2949 = INT16_MAX;
	int16_t x2950 = -1;
	int64_t x2951 = -103LL;
	int32_t t40 = -12;

    t40 = (x2949>>(x2950+(x2951%x2952)));

    if (t40 != 8191) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x3025 = 2U;
	int16_t x3027 = -1;
	int32_t x3028 = INT32_MAX;
	volatile int32_t t41 = 1;

    t41 = (x3025>>(x3026+(x3027%x3028)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x3029 = 24U;
	uint16_t x3032 = 3U;
	uint32_t t42 = 105410394U;

    t42 = (x3029>>(x3030+(x3031%x3032)));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3033 = 11749895599373LLU;
	int8_t x3034 = 15;
	static int32_t x3035 = -1;
	static int32_t x3036 = -54;
	volatile uint64_t t43 = 24872LLU;

    t43 = (x3033>>(x3034+(x3035%x3036)));

    if (t43 != 717156713LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x3117 = 3095339U;
	static int64_t x3118 = -1LL;
	int16_t x3119 = 9;
	volatile uint32_t x3120 = UINT32_MAX;
	volatile uint32_t t44 = 3474U;

    t44 = (x3117>>(x3118+(x3119%x3120)));

    if (t44 != 12091U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x3249 = 61U;
	int8_t x3250 = 0;
	uint16_t x3251 = UINT16_MAX;
	int8_t x3252 = INT8_MAX;

    t45 = (x3249>>(x3250+(x3251%x3252)));

    if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x3297 = 1442428904U;
	uint8_t x3298 = 6U;
	uint16_t x3299 = UINT16_MAX;
	uint8_t x3300 = UINT8_MAX;
	volatile uint32_t t46 = 172U;

    t46 = (x3297>>(x3298+(x3299%x3300)));

    if (t46 != 22537951U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x3321 = UINT8_MAX;
	static int8_t x3322 = 22;
	int8_t x3323 = -15;
	volatile int32_t t47 = -8;

    t47 = (x3321>>(x3322+(x3323%x3324)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x3509 = 2739383852LLU;
	volatile int8_t x3510 = -1;
	static uint8_t x3511 = 2U;
	volatile uint64_t t48 = 29630197558214196LLU;

    t48 = (x3509>>(x3510+(x3511%x3512)));

    if (t48 != 1369691926LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3581 = 117226LLU;
	uint32_t x3582 = 4U;
	int32_t x3584 = -1;
	static volatile uint64_t t49 = 14498873836LLU;

    t49 = (x3581>>(x3582+(x3583%x3584)));

    if (t49 != 7326LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x3609 = 1U;
	uint8_t x3610 = 0U;
	static int16_t x3611 = INT16_MAX;
	volatile int64_t x3612 = -1LL;
	static volatile int32_t t50 = 113714176;

    t50 = (x3609>>(x3610+(x3611%x3612)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x3749 = 869010U;
	volatile int8_t x3751 = -1;
	uint32_t t51 = 17298U;

    t51 = (x3749>>(x3750+(x3751%x3752)));

    if (t51 != 3394U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x3909 = 0LLU;
	int16_t x3910 = -1;
	volatile uint8_t x3911 = 1U;
	uint32_t x3912 = 52U;
	volatile uint64_t t52 = 3406LLU;

    t52 = (x3909>>(x3910+(x3911%x3912)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x3957 = 15U;
	int8_t x3958 = 19;
	int8_t x3959 = 1;
	uint32_t x3960 = 8U;
	static int32_t t53 = -9773;

    t53 = (x3957>>(x3958+(x3959%x3960)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x4093 = UINT64_MAX;
	int16_t x4094 = -99;
	int64_t x4095 = -1LL;
	uint64_t x4096 = 219LLU;

    t54 = (x4093>>(x4094+(x4095%x4096)));

    if (t54 != 65535LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x4225 = 332U;
	uint32_t x4226 = 26U;
	volatile int8_t x4227 = -1;
	int8_t x4228 = -5;
	int32_t t55 = -4;

    t55 = (x4225>>(x4226+(x4227%x4228)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x4246 = -1;
	uint32_t x4247 = 1775477U;
	static volatile int8_t x4248 = INT8_MAX;
	int32_t t56 = -2994;

    t56 = (x4245>>(x4246+(x4247%x4248)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x4265 = 7239U;
	uint8_t x4266 = 3U;
	int16_t x4267 = 2;
	volatile int32_t t57 = 5444972;

    t57 = (x4265>>(x4266+(x4267%x4268)));

    if (t57 != 226) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x4270 = 1;
	int8_t x4271 = 8;
	uint16_t x4272 = 3U;
	volatile int32_t t58 = -9;

    t58 = (x4269>>(x4270+(x4271%x4272)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x4305 = 1690374LLU;
	uint16_t x4306 = 15U;
	int64_t x4307 = 39LL;
	int8_t x4308 = 1;
	uint64_t t59 = 5312275487LLU;

    t59 = (x4305>>(x4306+(x4307%x4308)));

    if (t59 != 51LLU) { NG(); } else { ; }
	
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

