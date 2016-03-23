
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

uint16_t x289 = UINT16_MAX;
uint16_t x290 = 1U;
int64_t t8 = -90364948263672539LL;
static uint32_t x884 = UINT32_MAX;
static int16_t x990 = INT16_MIN;
int16_t x1035 = -1;
volatile int32_t t14 = 306737;
static uint64_t x1447 = UINT64_MAX;
int16_t x1728 = -1;
volatile int16_t x1814 = INT16_MIN;
int16_t x1816 = INT16_MIN;
int32_t x1861 = INT32_MIN;
volatile int32_t x1918 = -1;
int64_t x1920 = -1LL;
uint64_t x1941 = 13504LLU;
volatile uint64_t t23 = 88LLU;
volatile int64_t x2311 = -1LL;
static uint32_t x2419 = UINT32_MAX;
volatile int8_t x2420 = -1;
static int32_t x2667 = INT32_MIN;
static volatile int32_t x2668 = INT32_MIN;
static int64_t x2840 = -1LL;
int8_t x3041 = 0;
int32_t x3048 = INT32_MIN;
static int32_t t36 = 140;
static volatile int64_t x3070 = 179307877029503237LL;
uint32_t x3205 = 52U;
int32_t x3230 = INT32_MIN;
uint32_t x3231 = UINT32_MAX;
static volatile int64_t t42 = -57922074LL;
volatile int64_t x3557 = INT64_MAX;
int8_t x3558 = -23;
int32_t x3729 = INT32_MIN;
volatile int64_t x3731 = -1LL;
int8_t x3817 = INT8_MIN;
uint16_t x3853 = 1483U;
static int32_t t47 = 148098;
int32_t x4022 = -47;
static uint8_t x4517 = UINT8_MAX;
volatile int32_t x4519 = -1;
int8_t x4677 = -1;
int64_t x4729 = INT64_MAX;
uint8_t x4745 = 1U;
int8_t x4934 = INT8_MIN;
int32_t t56 = 15;
int64_t x4963 = -1LL;
int32_t x5191 = INT32_MIN;
int8_t x5317 = -1;
static int32_t x5319 = -1;
static int8_t x5413 = INT8_MIN;
volatile int64_t x5415 = -1LL;
int64_t x5453 = -8706092319324026LL;
int64_t x5456 = -1LL;
static int64_t x5477 = INT64_MAX;
int64_t x5479 = INT64_MIN;
volatile int64_t t67 = 12474127680LL;
volatile uint8_t x5514 = 1U;
int8_t x5515 = -1;
int8_t x5516 = -1;
int8_t x5605 = 0;
static uint64_t x5606 = 28071480970LLU;
int32_t x5607 = INT32_MIN;
int32_t x6027 = INT32_MIN;
uint64_t x6319 = UINT64_MAX;
int16_t x6517 = -1;
int16_t x6537 = 119;
int32_t x6591 = INT32_MIN;
uint32_t x6613 = UINT32_MAX;
int16_t x6669 = INT16_MIN;
int8_t x6705 = INT8_MAX;
static int32_t t82 = -6120792;
uint8_t x6742 = 4U;
volatile int32_t t84 = 18223811;
volatile int8_t x6797 = 25;
uint32_t x6845 = 2U;
int8_t x6848 = INT8_MIN;
static uint64_t x6906 = 135LLU;
int32_t x6907 = -1;
int64_t x7161 = INT64_MIN;
int32_t x7233 = -4;
volatile int8_t x7574 = INT8_MIN;
uint32_t x7588 = UINT32_MAX;
volatile uint32_t x7891 = UINT32_MAX;
static volatile int16_t x7892 = -1;
int8_t x7903 = -1;
int16_t x7954 = INT16_MIN;
int64_t t101 = -902592472492143294LL;
int8_t x8087 = -1;
volatile int8_t x8088 = -1;
uint8_t x8275 = 0U;
int32_t t105 = -1;


void f0(void) {
    	int16_t x21 = 372;
	int32_t x22 = INT32_MIN;
	static int32_t x23 = -1;
	static int64_t x24 = -1LL;
	int32_t t0 = -177641;

    t0 = ((x21|x22)/(x23==x24));

    if (t0 != -2147483276) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x37 = UINT8_MAX;
	int64_t x38 = -1LL;
	uint64_t x39 = UINT64_MAX;
	int32_t x40 = -1;
	volatile int64_t t1 = -9876LL;

    t1 = ((x37|x38)/(x39==x40));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x133 = INT32_MAX;
	uint16_t x134 = 964U;
	volatile uint32_t x135 = UINT32_MAX;
	int32_t x136 = -1;
	volatile int32_t t2 = INT32_MAX;

    t2 = ((x133|x134)/(x135==x136));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x257 = -1LL;
	int64_t x258 = -1LL;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	static int64_t t3 = -133500249871729LL;

    t3 = ((x257|x258)/(x259==x260));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x291 = INT16_MIN;
	static volatile int16_t x292 = INT16_MIN;
	int32_t t4 = -1320;

    t4 = ((x289|x290)/(x291==x292));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x373 = UINT8_MAX;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	int8_t x376 = -1;
	volatile int32_t t5 = 148;

    t5 = ((x373|x374)/(x375==x376));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x385 = 1;
	int8_t x386 = 27;
	int16_t x387 = -1;
	int64_t x388 = -1LL;
	int32_t t6 = 95;

    t6 = ((x385|x386)/(x387==x388));

    if (t6 != 27) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x753 = INT16_MIN;
	volatile int64_t x754 = -13417LL;
	static volatile int8_t x755 = INT8_MIN;
	int8_t x756 = INT8_MIN;
	int64_t t7 = 27LL;

    t7 = ((x753|x754)/(x755==x756));

    if (t7 != -13417LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x877 = INT64_MIN;
	int8_t x878 = INT8_MIN;
	int16_t x879 = -1;
	int64_t x880 = -1LL;

    t8 = ((x877|x878)/(x879==x880));

    if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x881 = -1;
	int32_t x882 = INT32_MIN;
	static uint32_t x883 = UINT32_MAX;
	volatile int32_t t9 = 1583;

    t9 = ((x881|x882)/(x883==x884));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x909 = -5;
	int8_t x910 = -1;
	int64_t x911 = -1LL;
	int64_t x912 = -1LL;
	int32_t t10 = -5;

    t10 = ((x909|x910)/(x911==x912));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x989 = 25U;
	int64_t x991 = -1LL;
	int64_t x992 = -1LL;
	int32_t t11 = 89182168;

    t11 = ((x989|x990)/(x991==x992));

    if (t11 != -32743) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x1033 = INT64_MIN;
	int16_t x1034 = INT16_MIN;
	int64_t x1036 = -1LL;
	int64_t t12 = 208830727LL;

    t12 = ((x1033|x1034)/(x1035==x1036));

    if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x1053 = UINT32_MAX;
	uint64_t x1054 = 31LLU;
	int64_t x1055 = -1LL;
	static int32_t x1056 = -1;
	volatile uint64_t t13 = 2478519LLU;

    t13 = ((x1053|x1054)/(x1055==x1056));

    if (t13 != 4294967295LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x1141 = 26U;
	static int32_t x1142 = -1;
	int16_t x1143 = -1;
	volatile int64_t x1144 = -1LL;

    t14 = ((x1141|x1142)/(x1143==x1144));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x1445 = INT32_MIN;
	int64_t x1446 = INT64_MIN;
	volatile int16_t x1448 = -1;
	int64_t t15 = -57614410LL;

    t15 = ((x1445|x1446)/(x1447==x1448));

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x1489 = INT32_MIN;
	int32_t x1490 = INT32_MAX;
	volatile int32_t x1491 = -1;
	static volatile int8_t x1492 = -1;
	static volatile int32_t t16 = -1;

    t16 = ((x1489|x1490)/(x1491==x1492));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1713 = INT8_MAX;
	static int16_t x1714 = 15160;
	int8_t x1715 = INT8_MIN;
	static int8_t x1716 = INT8_MIN;
	int32_t t17 = 39839;

    t17 = ((x1713|x1714)/(x1715==x1716));

    if (t17 != 15231) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1725 = 7728455LLU;
	int8_t x1726 = -3;
	volatile int32_t x1727 = -1;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = ((x1725|x1726)/(x1727==x1728));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x1813 = -2;
	int16_t x1815 = INT16_MIN;
	volatile int32_t t19 = 1684;

    t19 = ((x1813|x1814)/(x1815==x1816));

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1862 = 1711;
	uint64_t x1863 = UINT64_MAX;
	int8_t x1864 = -1;
	volatile int32_t t20 = -193923584;

    t20 = ((x1861|x1862)/(x1863==x1864));

    if (t20 != -2147481937) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1865 = INT64_MIN;
	volatile uint16_t x1866 = 0U;
	int32_t x1867 = INT32_MAX;
	int32_t x1868 = INT32_MAX;
	volatile int64_t t21 = INT64_MIN;

    t21 = ((x1865|x1866)/(x1867==x1868));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1917 = 502U;
	static volatile int8_t x1919 = -1;
	volatile int32_t t22 = -334254;

    t22 = ((x1917|x1918)/(x1919==x1920));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1942 = 4;
	int32_t x1943 = -1;
	int64_t x1944 = -1LL;

    t23 = ((x1941|x1942)/(x1943==x1944));

    if (t23 != 13508LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x2053 = 2U;
	static int32_t x2054 = 237;
	int16_t x2055 = INT16_MIN;
	int16_t x2056 = INT16_MIN;
	volatile int32_t t24 = 1778083;

    t24 = ((x2053|x2054)/(x2055==x2056));

    if (t24 != 239) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x2309 = 841957987;
	int32_t x2310 = INT32_MAX;
	int16_t x2312 = -1;
	volatile int32_t t25 = INT32_MAX;

    t25 = ((x2309|x2310)/(x2311==x2312));

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2329 = 6U;
	static volatile int32_t x2330 = INT32_MIN;
	volatile int8_t x2331 = -1;
	volatile int64_t x2332 = -1LL;
	volatile int32_t t26 = 16;

    t26 = ((x2329|x2330)/(x2331==x2332));

    if (t26 != -2147483642) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x2349 = -1LL;
	static int16_t x2350 = INT16_MAX;
	int16_t x2351 = -1;
	volatile uint64_t x2352 = UINT64_MAX;
	volatile int64_t t27 = 479969150268704078LL;

    t27 = ((x2349|x2350)/(x2351==x2352));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x2417 = -58696LL;
	uint32_t x2418 = 1099612216U;
	volatile int64_t t28 = 89392LL;

    t28 = ((x2417|x2418)/(x2419==x2420));

    if (t28 != -9544LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x2425 = 0U;
	uint32_t x2426 = UINT32_MAX;
	int64_t x2427 = INT64_MIN;
	int64_t x2428 = INT64_MIN;
	uint32_t t29 = UINT32_MAX;

    t29 = ((x2425|x2426)/(x2427==x2428));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x2665 = -1LL;
	static uint16_t x2666 = UINT16_MAX;
	volatile int64_t t30 = 8793489987034264LL;

    t30 = ((x2665|x2666)/(x2667==x2668));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2709 = -23;
	uint8_t x2710 = UINT8_MAX;
	static int16_t x2711 = -1;
	int32_t x2712 = -1;
	int32_t t31 = 1;

    t31 = ((x2709|x2710)/(x2711==x2712));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x2837 = INT16_MIN;
	static int8_t x2838 = INT8_MAX;
	int32_t x2839 = -1;
	volatile int32_t t32 = -198794;

    t32 = ((x2837|x2838)/(x2839==x2840));

    if (t32 != -32641) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2941 = 795U;
	int16_t x2942 = INT16_MIN;
	int64_t x2943 = -1LL;
	int64_t x2944 = -1LL;
	int32_t t33 = -7;

    t33 = ((x2941|x2942)/(x2943==x2944));

    if (t33 != -31973) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x3017 = -1LL;
	int16_t x3018 = INT16_MIN;
	int8_t x3019 = -1;
	int8_t x3020 = -1;
	int64_t t34 = 4LL;

    t34 = ((x3017|x3018)/(x3019==x3020));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x3042 = -157;
	int8_t x3043 = INT8_MAX;
	int8_t x3044 = INT8_MAX;
	int32_t t35 = -1487581;

    t35 = ((x3041|x3042)/(x3043==x3044));

    if (t35 != -157) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x3045 = -1;
	int8_t x3046 = 1;
	int32_t x3047 = INT32_MIN;

    t36 = ((x3045|x3046)/(x3047==x3048));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3069 = 9U;
	int32_t x3071 = -1;
	uint64_t x3072 = UINT64_MAX;
	volatile int64_t t37 = 423000323404243775LL;

    t37 = ((x3069|x3070)/(x3071==x3072));

    if (t37 != 179307877029503245LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x3189 = INT8_MIN;
	static uint64_t x3190 = UINT64_MAX;
	static uint32_t x3191 = UINT32_MAX;
	int32_t x3192 = -1;
	uint64_t t38 = UINT64_MAX;

    t38 = ((x3189|x3190)/(x3191==x3192));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x3206 = -1;
	static int8_t x3207 = INT8_MIN;
	int8_t x3208 = INT8_MIN;
	uint32_t t39 = UINT32_MAX;

    t39 = ((x3205|x3206)/(x3207==x3208));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x3229 = INT32_MAX;
	uint32_t x3232 = UINT32_MAX;
	int32_t t40 = -14;

    t40 = ((x3229|x3230)/(x3231==x3232));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x3245 = -1216;
	int64_t x3246 = 3702341LL;
	int64_t x3247 = INT64_MIN;
	int64_t x3248 = INT64_MIN;
	volatile int64_t t41 = -2429623086194LL;

    t41 = ((x3245|x3246)/(x3247==x3248));

    if (t41 != -187LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x3365 = -75111;
	int64_t x3366 = INT64_MIN;
	int8_t x3367 = INT8_MIN;
	volatile int8_t x3368 = INT8_MIN;

    t42 = ((x3365|x3366)/(x3367==x3368));

    if (t42 != -75111LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3481 = 215623LLU;
	int64_t x3482 = INT64_MAX;
	int16_t x3483 = -1;
	volatile uint64_t x3484 = UINT64_MAX;
	volatile uint64_t t43 = 673LLU;

    t43 = ((x3481|x3482)/(x3483==x3484));

    if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x3559 = UINT64_MAX;
	int32_t x3560 = -1;
	volatile int64_t t44 = -410397284505LL;

    t44 = ((x3557|x3558)/(x3559==x3560));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x3730 = 25916066002861441LL;
	int32_t x3732 = -1;
	volatile int64_t t45 = -3908LL;

    t45 = ((x3729|x3730)/(x3731==x3732));

    if (t45 != -736920191LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3818 = 0;
	int16_t x3819 = INT16_MIN;
	int16_t x3820 = INT16_MIN;
	int32_t t46 = 40983952;

    t46 = ((x3817|x3818)/(x3819==x3820));

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x3854 = INT8_MIN;
	int64_t x3855 = -1LL;
	int32_t x3856 = -1;

    t47 = ((x3853|x3854)/(x3855==x3856));

    if (t47 != -53) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x4021 = INT32_MAX;
	int8_t x4023 = -1;
	volatile int16_t x4024 = -1;
	int32_t t48 = -192;

    t48 = ((x4021|x4022)/(x4023==x4024));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x4225 = INT64_MIN;
	uint8_t x4226 = 1U;
	static uint16_t x4227 = UINT16_MAX;
	uint16_t x4228 = UINT16_MAX;
	int64_t t49 = 6295LL;

    t49 = ((x4225|x4226)/(x4227==x4228));

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x4265 = 2;
	int64_t x4266 = INT64_MIN;
	int32_t x4267 = INT32_MIN;
	volatile int32_t x4268 = INT32_MIN;
	volatile int64_t t50 = 52691LL;

    t50 = ((x4265|x4266)/(x4267==x4268));

    if (t50 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint8_t x4518 = 2U;
	int64_t x4520 = -1LL;
	volatile int32_t t51 = -41;

    t51 = ((x4517|x4518)/(x4519==x4520));

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x4678 = -4;
	volatile int32_t x4679 = -1;
	static int16_t x4680 = -1;
	volatile int32_t t52 = 14430;

    t52 = ((x4677|x4678)/(x4679==x4680));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x4693 = 278004455994819194LLU;
	volatile int64_t x4694 = 3548572589625LL;
	int16_t x4695 = -1;
	int32_t x4696 = -1;
	uint64_t t53 = 1655118182324413153LLU;

    t53 = ((x4693|x4694)/(x4695==x4696));

    if (t53 != 278004636691766907LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x4730 = -217;
	volatile int8_t x4731 = -1;
	uint32_t x4732 = UINT32_MAX;
	static int64_t t54 = -1164738329LL;

    t54 = ((x4729|x4730)/(x4731==x4732));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x4746 = 134485U;
	static uint16_t x4747 = UINT16_MAX;
	static uint16_t x4748 = UINT16_MAX;
	uint32_t t55 = 98661U;

    t55 = ((x4745|x4746)/(x4747==x4748));

    if (t55 != 134485U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x4933 = 1;
	static volatile int64_t x4935 = -1LL;
	int32_t x4936 = -1;

    t56 = ((x4933|x4934)/(x4935==x4936));

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x4961 = 92923U;
	volatile int32_t x4962 = INT32_MIN;
	static volatile int16_t x4964 = -1;
	volatile uint32_t t57 = 793209568U;

    t57 = ((x4961|x4962)/(x4963==x4964));

    if (t57 != 2147576571U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x5001 = INT16_MAX;
	int32_t x5002 = -1;
	static volatile int8_t x5003 = INT8_MIN;
	int8_t x5004 = INT8_MIN;
	int32_t t58 = -229;

    t58 = ((x5001|x5002)/(x5003==x5004));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x5013 = UINT8_MAX;
	static volatile int8_t x5014 = INT8_MIN;
	int8_t x5015 = -1;
	volatile int8_t x5016 = -1;
	static volatile int32_t t59 = 1;

    t59 = ((x5013|x5014)/(x5015==x5016));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x5121 = -1;
	static int16_t x5122 = -1;
	int8_t x5123 = -1;
	int32_t x5124 = -1;
	static volatile int32_t t60 = -593;

    t60 = ((x5121|x5122)/(x5123==x5124));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x5189 = 52U;
	volatile int16_t x5190 = 10;
	static int32_t x5192 = INT32_MIN;
	volatile int32_t t61 = -1519;

    t61 = ((x5189|x5190)/(x5191==x5192));

    if (t61 != 62) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x5217 = 359439682905LL;
	static int64_t x5218 = INT64_MAX;
	int16_t x5219 = INT16_MIN;
	volatile int16_t x5220 = INT16_MIN;
	volatile int64_t t62 = INT64_MAX;

    t62 = ((x5217|x5218)/(x5219==x5220));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x5285 = 6LLU;
	uint32_t x5286 = 104U;
	static int16_t x5287 = -1;
	volatile uint32_t x5288 = UINT32_MAX;
	uint64_t t63 = 16395628608438LLU;

    t63 = ((x5285|x5286)/(x5287==x5288));

    if (t63 != 110LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x5318 = UINT64_MAX;
	static uint64_t x5320 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = ((x5317|x5318)/(x5319==x5320));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x5414 = INT8_MIN;
	static uint64_t x5416 = UINT64_MAX;
	int32_t t65 = -643525;

    t65 = ((x5413|x5414)/(x5415==x5416));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x5454 = INT16_MIN;
	int32_t x5455 = -1;
	volatile int64_t t66 = 36LL;

    t66 = ((x5453|x5454)/(x5455==x5456));

    if (t66 != -14202LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x5478 = INT16_MIN;
	int64_t x5480 = INT64_MIN;

    t67 = ((x5477|x5478)/(x5479==x5480));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x5513 = INT16_MIN;
	int32_t t68 = 4;

    t68 = ((x5513|x5514)/(x5515==x5516));

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x5608 = INT32_MIN;
	uint64_t t69 = 22145LLU;

    t69 = ((x5605|x5606)/(x5607==x5608));

    if (t69 != 28071480970LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x5717 = 87745U;
	static int64_t x5718 = INT64_MIN;
	static int32_t x5719 = -1;
	int16_t x5720 = -1;
	int64_t t70 = 899998628312371LL;

    t70 = ((x5717|x5718)/(x5719==x5720));

    if (t70 != -9223372036854688063LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x5813 = INT16_MIN;
	volatile int8_t x5814 = -2;
	int64_t x5815 = -1LL;
	volatile int8_t x5816 = -1;
	volatile int32_t t71 = -22;

    t71 = ((x5813|x5814)/(x5815==x5816));

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x5841 = UINT32_MAX;
	int8_t x5842 = -1;
	int32_t x5843 = INT32_MAX;
	volatile int32_t x5844 = INT32_MAX;
	static uint32_t t72 = UINT32_MAX;

    t72 = ((x5841|x5842)/(x5843==x5844));

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x5957 = 1861;
	volatile int8_t x5958 = 5;
	int64_t x5959 = INT64_MIN;
	int64_t x5960 = INT64_MIN;
	static int32_t t73 = 538699926;

    t73 = ((x5957|x5958)/(x5959==x5960));

    if (t73 != 1861) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x6025 = INT8_MIN;
	static int16_t x6026 = INT16_MIN;
	volatile int32_t x6028 = INT32_MIN;
	volatile int32_t t74 = -49883;

    t74 = ((x6025|x6026)/(x6027==x6028));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x6317 = INT64_MAX;
	int64_t x6318 = INT64_MAX;
	uint64_t x6320 = UINT64_MAX;
	int64_t t75 = INT64_MAX;

    t75 = ((x6317|x6318)/(x6319==x6320));

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x6389 = 197U;
	static uint8_t x6390 = 13U;
	int8_t x6391 = -1;
	int32_t x6392 = -1;
	volatile int32_t t76 = -1;

    t76 = ((x6389|x6390)/(x6391==x6392));

    if (t76 != 205) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x6518 = -1;
	int8_t x6519 = -1;
	int32_t x6520 = -1;
	static int32_t t77 = -3669872;

    t77 = ((x6517|x6518)/(x6519==x6520));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x6538 = 15;
	int32_t x6539 = INT32_MIN;
	static int32_t x6540 = INT32_MIN;
	static int32_t t78 = 11;

    t78 = ((x6537|x6538)/(x6539==x6540));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x6589 = 9;
	int32_t x6590 = INT32_MIN;
	int32_t x6592 = INT32_MIN;
	int32_t t79 = 153240424;

    t79 = ((x6589|x6590)/(x6591==x6592));

    if (t79 != -2147483639) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x6614 = -4;
	volatile uint8_t x6615 = UINT8_MAX;
	static uint8_t x6616 = UINT8_MAX;
	static uint32_t t80 = UINT32_MAX;

    t80 = ((x6613|x6614)/(x6615==x6616));

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x6670 = 6U;
	uint64_t x6671 = UINT64_MAX;
	int16_t x6672 = -1;
	int32_t t81 = -4;

    t81 = ((x6669|x6670)/(x6671==x6672));

    if (t81 != -32762) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x6706 = 9U;
	volatile uint64_t x6707 = UINT64_MAX;
	static int16_t x6708 = -1;

    t82 = ((x6705|x6706)/(x6707==x6708));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x6741 = INT64_MAX;
	static volatile uint64_t x6743 = UINT64_MAX;
	static int32_t x6744 = -1;
	volatile int64_t t83 = INT64_MAX;

    t83 = ((x6741|x6742)/(x6743==x6744));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x6773 = INT32_MIN;
	int8_t x6774 = INT8_MIN;
	int32_t x6775 = INT32_MIN;
	int32_t x6776 = INT32_MIN;

    t84 = ((x6773|x6774)/(x6775==x6776));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x6798 = INT8_MAX;
	static int8_t x6799 = -1;
	static int16_t x6800 = -1;
	volatile int32_t t85 = -4159255;

    t85 = ((x6797|x6798)/(x6799==x6800));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x6833 = -1;
	int64_t x6834 = 39218939567090LL;
	int8_t x6835 = INT8_MIN;
	int8_t x6836 = INT8_MIN;
	static int64_t t86 = -94077946040122998LL;

    t86 = ((x6833|x6834)/(x6835==x6836));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x6846 = 1321LL;
	int8_t x6847 = INT8_MIN;
	volatile int64_t t87 = 242LL;

    t87 = ((x6845|x6846)/(x6847==x6848));

    if (t87 != 1323LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x6905 = -1;
	uint32_t x6908 = UINT32_MAX;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = ((x6905|x6906)/(x6907==x6908));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x6977 = INT64_MIN;
	uint32_t x6978 = 22632436U;
	volatile int32_t x6979 = INT32_MIN;
	int32_t x6980 = INT32_MIN;
	volatile int64_t t89 = -9LL;

    t89 = ((x6977|x6978)/(x6979==x6980));

    if (t89 != -9223372036832143372LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x7162 = INT64_MIN;
	static volatile int16_t x7163 = INT16_MIN;
	volatile int16_t x7164 = INT16_MIN;
	static int64_t t90 = INT64_MIN;

    t90 = ((x7161|x7162)/(x7163==x7164));

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x7234 = 5U;
	uint32_t x7235 = UINT32_MAX;
	static uint32_t x7236 = UINT32_MAX;
	static int32_t t91 = 382175821;

    t91 = ((x7233|x7234)/(x7235==x7236));

    if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x7277 = INT32_MAX;
	int8_t x7278 = -25;
	int64_t x7279 = -1LL;
	int64_t x7280 = -1LL;
	volatile int32_t t92 = 113;

    t92 = ((x7277|x7278)/(x7279==x7280));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x7573 = 787636U;
	int8_t x7575 = -1;
	static uint64_t x7576 = UINT64_MAX;
	volatile uint32_t t93 = 831779590U;

    t93 = ((x7573|x7574)/(x7575==x7576));

    if (t93 != 4294967220U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x7585 = 128155LLU;
	int8_t x7586 = INT8_MIN;
	int16_t x7587 = -1;
	static uint64_t t94 = 2648495989395432LLU;

    t94 = ((x7585|x7586)/(x7587==x7588));

    if (t94 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x7597 = 103U;
	int64_t x7598 = INT64_MIN;
	int64_t x7599 = INT64_MIN;
	int64_t x7600 = INT64_MIN;
	int64_t t95 = -59245000825LL;

    t95 = ((x7597|x7598)/(x7599==x7600));

    if (t95 != -9223372036854775705LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x7825 = INT8_MIN;
	volatile int64_t x7826 = INT64_MIN;
	int8_t x7827 = -1;
	volatile int32_t x7828 = -1;
	volatile int64_t t96 = 769LL;

    t96 = ((x7825|x7826)/(x7827==x7828));

    if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x7889 = -1;
	uint64_t x7890 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

    t97 = ((x7889|x7890)/(x7891==x7892));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x7901 = INT8_MIN;
	static uint16_t x7902 = 1U;
	volatile int32_t x7904 = -1;
	int32_t t98 = -26;

    t98 = ((x7901|x7902)/(x7903==x7904));

    if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x7905 = INT8_MIN;
	int8_t x7906 = 30;
	static uint32_t x7907 = UINT32_MAX;
	static int8_t x7908 = -1;
	static volatile int32_t t99 = -7662;

    t99 = ((x7905|x7906)/(x7907==x7908));

    if (t99 != -98) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x7953 = 3874465802641LL;
	int16_t x7955 = INT16_MIN;
	int16_t x7956 = INT16_MIN;
	volatile int64_t t100 = 20581651193LL;

    t100 = ((x7953|x7954)/(x7955==x7956));

    if (t100 != -5743LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x8065 = INT64_MIN;
	uint8_t x8066 = UINT8_MAX;
	volatile int8_t x8067 = INT8_MIN;
	int8_t x8068 = INT8_MIN;

    t101 = ((x8065|x8066)/(x8067==x8068));

    if (t101 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x8085 = 1;
	volatile int64_t x8086 = 18911LL;
	int64_t t102 = 514LL;

    t102 = ((x8085|x8086)/(x8087==x8088));

    if (t102 != 18911LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x8273 = INT16_MIN;
	int16_t x8274 = -247;
	volatile int8_t x8276 = 0;
	static int32_t t103 = 795857;

    t103 = ((x8273|x8274)/(x8275==x8276));

    if (t103 != -247) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x8293 = INT8_MIN;
	int16_t x8294 = INT16_MIN;
	static uint32_t x8295 = UINT32_MAX;
	int16_t x8296 = -1;
	int32_t t104 = -59644;

    t104 = ((x8293|x8294)/(x8295==x8296));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x8357 = 0;
	int8_t x8358 = -13;
	int64_t x8359 = -1LL;
	int8_t x8360 = -1;

    t105 = ((x8357|x8358)/(x8359==x8360));

    if (t105 != -13) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();


    return 0;
}

