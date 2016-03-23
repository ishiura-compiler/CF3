
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

static int64_t t0 = -7151LL;
volatile int64_t t1 = 110878424487LL;
uint64_t x403 = UINT64_MAX;
static int32_t t3 = 7618238;
static uint32_t x434 = 4U;
int64_t x436 = 2LL;
uint32_t t4 = 378U;
static uint64_t x717 = 1184973444252656LLU;
int32_t x810 = -1;
int8_t x880 = -1;
int8_t x1096 = -1;
uint32_t x1122 = 6U;
volatile uint32_t t10 = 204U;
int16_t x1313 = INT16_MIN;
uint64_t t15 = 884573847837LLU;
int64_t x1786 = INT64_MIN;
int8_t x1937 = -16;
int64_t x2229 = INT64_MIN;
volatile int32_t x2354 = INT32_MIN;
static volatile uint8_t x2355 = UINT8_MAX;
uint64_t x2865 = UINT64_MAX;
int16_t x2866 = -437;
int8_t x2883 = 1;
uint8_t x2884 = 6U;
uint32_t x2954 = 20022669U;
uint32_t x3001 = UINT32_MAX;
int32_t x3087 = -6;
int32_t t30 = -38855;
int8_t x3128 = -28;
static int16_t x3133 = -1;
static uint64_t x3135 = UINT64_MAX;
uint8_t x3284 = 43U;
uint64_t t33 = 179429219319071595LLU;
int8_t x3325 = INT8_MIN;
int8_t x3328 = INT8_MIN;
volatile uint32_t x3413 = 7171857U;
int16_t x3422 = 214;
volatile int32_t t38 = -1118814;
int64_t x3685 = -1LL;
static int16_t x3687 = 0;
static int8_t x3688 = 0;
static int16_t x3755 = -1;
int8_t x3756 = -39;
uint64_t x3770 = 23618LLU;
static int64_t x3771 = -1LL;
volatile int64_t t42 = 5376LL;
uint64_t x3973 = 884014586461LLU;
int16_t x3975 = INT16_MIN;
int64_t x3997 = INT64_MAX;
uint16_t x3998 = UINT16_MAX;
volatile int64_t x4000 = INT64_MIN;
static volatile int16_t x4041 = INT16_MIN;
uint32_t x4044 = UINT32_MAX;
static uint8_t x4050 = UINT8_MAX;
int32_t x4162 = -394558;
int64_t x4270 = INT64_MAX;
int64_t t50 = -201317805025416LL;
int8_t x4705 = INT8_MAX;
static volatile uint64_t x4708 = UINT64_MAX;
int32_t x4934 = INT32_MIN;
int32_t t57 = 20334647;
static uint32_t x5327 = UINT32_MAX;
uint64_t x5425 = 63094LLU;
int16_t x5426 = -1;
volatile uint64_t x5677 = UINT64_MAX;
int64_t t67 = 83953029662936083LL;
int16_t x5953 = INT16_MIN;
volatile int16_t x6225 = -2;
int16_t x6227 = INT16_MIN;
int32_t x6299 = 24;
static uint64_t t71 = 3152LLU;
int16_t x6311 = -1;
uint16_t x6409 = UINT16_MAX;
static volatile uint16_t x6412 = 5U;
uint8_t x6438 = UINT8_MAX;
uint64_t x6481 = 40738485443LLU;
int32_t x6772 = -1;
volatile int32_t t78 = 847;
volatile int64_t x6865 = INT64_MIN;
static int32_t x6956 = -1;


void f0(void) {
    	static volatile int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	int8_t x15 = -1;
	int16_t x16 = -1;

    t0 = ((x13^x14)>>(x15^x16));

    if (t0 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x101 = INT32_MIN;
	static int64_t x102 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	static uint64_t x104 = UINT64_MAX;

    t1 = ((x101^x102)>>(x103^x104));

    if (t1 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x173 = -1LL;
	static volatile int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MAX;
	volatile int64_t t2 = -606LL;

    t2 = ((x173^x174)>>(x175^x176));

    if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x401 = -1;
	int16_t x402 = -1;
	int32_t x404 = -1;

    t3 = ((x401^x402)>>(x403^x404));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x433 = UINT32_MAX;
	static volatile uint8_t x435 = 30U;

    t4 = ((x433^x434)>>(x435^x436));

    if (t4 != 15U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x525 = 1481207;
	static volatile int8_t x526 = INT8_MAX;
	static int32_t x527 = -1;
	uint64_t x528 = UINT64_MAX;
	int32_t t5 = -1399020;

    t5 = ((x525^x526)>>(x527^x528));

    if (t5 != 1481096) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x718 = 687U;
	uint32_t x719 = UINT32_MAX;
	static int16_t x720 = -1;
	uint64_t t6 = 54592LLU;

    t6 = ((x717^x718)>>(x719^x720));

    if (t6 != 1184973444251999LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x809 = INT32_MIN;
	uint8_t x811 = UINT8_MAX;
	uint8_t x812 = UINT8_MAX;
	volatile int32_t t7 = INT32_MAX;

    t7 = ((x809^x810)>>(x811^x812));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x877 = 13LLU;
	static int64_t x878 = INT64_MIN;
	int32_t x879 = -1;
	uint64_t t8 = 647LLU;

    t8 = ((x877^x878)>>(x879^x880));

    if (t8 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x1093 = INT64_MIN;
	int64_t x1094 = -1LL;
	int8_t x1095 = -1;
	volatile int64_t t9 = INT64_MAX;

    t9 = ((x1093^x1094)>>(x1095^x1096));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x1121 = INT32_MAX;
	volatile int64_t x1123 = INT64_MAX;
	volatile int64_t x1124 = INT64_MAX;

    t10 = ((x1121^x1122)>>(x1123^x1124));

    if (t10 != 2147483641U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1305 = UINT8_MAX;
	static uint32_t x1306 = 2690376U;
	int64_t x1307 = INT64_MIN;
	int64_t x1308 = INT64_MIN;
	volatile uint32_t t11 = 79U;

    t11 = ((x1305^x1306)>>(x1307^x1308));

    if (t11 != 2690487U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x1314 = 0U;
	int8_t x1315 = 4;
	int8_t x1316 = 0;
	volatile uint32_t t12 = 245U;

    t12 = ((x1313^x1314)>>(x1315^x1316));

    if (t12 != 268433408U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x1597 = -1;
	int32_t x1598 = -1;
	volatile int8_t x1599 = INT8_MAX;
	int8_t x1600 = INT8_MAX;
	int32_t t13 = -734214;

    t13 = ((x1597^x1598)>>(x1599^x1600));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x1613 = INT8_MIN;
	int16_t x1614 = -1;
	static uint64_t x1615 = 0LLU;
	uint8_t x1616 = 1U;
	volatile int32_t t14 = 15106927;

    t14 = ((x1613^x1614)>>(x1615^x1616));

    if (t14 != 63) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x1757 = 356835680905846249LLU;
	uint8_t x1758 = UINT8_MAX;
	uint32_t x1759 = UINT32_MAX;
	int32_t x1760 = -1;

    t15 = ((x1757^x1758)>>(x1759^x1760));

    if (t15 != 356835680905846038LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x1785 = INT8_MIN;
	static uint8_t x1787 = 3U;
	volatile int8_t x1788 = 28;
	static int64_t t16 = -181303345581LL;

    t16 = ((x1785^x1786)>>(x1787^x1788));

    if (t16 != 4294967295LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1821 = -1;
	int64_t x1822 = INT64_MIN;
	static uint32_t x1823 = UINT32_MAX;
	int16_t x1824 = -1;
	static int64_t t17 = INT64_MAX;

    t17 = ((x1821^x1822)>>(x1823^x1824));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x1938 = INT32_MIN;
	int8_t x1939 = 0;
	volatile uint32_t x1940 = 1U;
	volatile int32_t t18 = 380;

    t18 = ((x1937^x1938)>>(x1939^x1940));

    if (t18 != 1073741816) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x2145 = INT32_MIN;
	uint64_t x2146 = UINT64_MAX;
	static int16_t x2147 = -6;
	int16_t x2148 = -1;
	volatile uint64_t t19 = 144528542911743466LLU;

    t19 = ((x2145^x2146)>>(x2147^x2148));

    if (t19 != 67108863LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x2230 = -2001539621752LL;
	static int64_t x2231 = -1LL;
	int8_t x2232 = -1;
	volatile int64_t t20 = -150612776340LL;

    t20 = ((x2229^x2230)>>(x2231^x2232));

    if (t20 != 9223370035315154056LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x2261 = UINT64_MAX;
	int8_t x2262 = INT8_MIN;
	int8_t x2263 = INT8_MIN;
	int8_t x2264 = INT8_MIN;
	volatile uint64_t t21 = 1404078500129LLU;

    t21 = ((x2261^x2262)>>(x2263^x2264));

    if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x2353 = INT16_MIN;
	uint64_t x2356 = 246LLU;
	int32_t t22 = -612166749;

    t22 = ((x2353^x2354)>>(x2355^x2356));

    if (t22 != 4194240) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x2489 = 0;
	uint32_t x2490 = 2463670U;
	uint8_t x2491 = 1U;
	static uint16_t x2492 = 4U;
	static uint32_t t23 = 12945853U;

    t23 = ((x2489^x2490)>>(x2491^x2492));

    if (t23 != 76989U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x2765 = -2;
	int32_t x2766 = INT32_MIN;
	static volatile uint8_t x2767 = UINT8_MAX;
	uint8_t x2768 = UINT8_MAX;
	int32_t t24 = -121681440;

    t24 = ((x2765^x2766)>>(x2767^x2768));

    if (t24 != 2147483646) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2867 = UINT64_MAX;
	static int8_t x2868 = -60;
	static volatile uint64_t t25 = 139606775LLU;

    t25 = ((x2865^x2866)>>(x2867^x2868));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x2881 = 68356602060563232LLU;
	static volatile int32_t x2882 = 2;
	volatile uint64_t t26 = 21476942967834900LLU;

    t26 = ((x2881^x2882)>>(x2883^x2884));

    if (t26 != 534035953598150LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x2953 = UINT32_MAX;
	int64_t x2955 = -1LL;
	static uint64_t x2956 = UINT64_MAX;
	volatile uint32_t t27 = 3681U;

    t27 = ((x2953^x2954)>>(x2955^x2956));

    if (t27 != 4274944626U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x3002 = INT32_MIN;
	static int64_t x3003 = -1LL;
	int8_t x3004 = -1;
	volatile uint32_t t28 = 54955U;

    t28 = ((x3001^x3002)>>(x3003^x3004));

    if (t28 != 2147483647U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x3013 = UINT32_MAX;
	int8_t x3014 = -1;
	static int32_t x3015 = -7;
	int32_t x3016 = -1;
	volatile uint32_t t29 = 164U;

    t29 = ((x3013^x3014)>>(x3015^x3016));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x3085 = INT16_MIN;
	int16_t x3086 = -1;
	volatile int16_t x3088 = -15;

    t30 = ((x3085^x3086)>>(x3087^x3088));

    if (t30 != 15) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x3125 = 1U;
	uint64_t x3126 = 71LLU;
	volatile uint64_t x3127 = UINT64_MAX;
	static uint64_t t31 = 258434LLU;

    t31 = ((x3125^x3126)>>(x3127^x3128));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x3134 = -63LL;
	int8_t x3136 = -1;
	static int64_t t32 = 3LL;

    t32 = ((x3133^x3134)>>(x3135^x3136));

    if (t32 != 62LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x3281 = INT16_MAX;
	static uint64_t x3282 = 6LLU;
	int8_t x3283 = 0;

    t33 = ((x3281^x3282)>>(x3283^x3284));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x3326 = INT32_MIN;
	volatile int8_t x3327 = INT8_MIN;
	int32_t t34 = -57746;

    t34 = ((x3325^x3326)>>(x3327^x3328));

    if (t34 != 2147483520) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x3414 = INT32_MAX;
	static volatile int8_t x3415 = -31;
	static volatile int32_t x3416 = -1;
	uint32_t t35 = 237942U;

    t35 = ((x3413^x3414)>>(x3415^x3416));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x3421 = INT32_MAX;
	static uint8_t x3423 = 39U;
	int8_t x3424 = 37;
	int32_t t36 = 501;

    t36 = ((x3421^x3422)>>(x3423^x3424));

    if (t36 != 536870858) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x3473 = 7949U;
	static int8_t x3474 = -1;
	uint8_t x3475 = 1U;
	static int8_t x3476 = 0;
	uint32_t t37 = 849691104U;

    t37 = ((x3473^x3474)>>(x3475^x3476));

    if (t37 != 2147479673U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x3565 = INT32_MAX;
	int8_t x3566 = INT8_MAX;
	int16_t x3567 = -1;
	uint64_t x3568 = UINT64_MAX;

    t38 = ((x3565^x3566)>>(x3567^x3568));

    if (t38 != 2147483520) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x3686 = 385053118385464950LLU;
	uint64_t t39 = 23953LLU;

    t39 = ((x3685^x3686)>>(x3687^x3688));

    if (t39 != 18061690955324086665LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x3753 = -3;
	int64_t x3754 = -1LL;
	volatile int64_t t40 = 37795280644LL;

    t40 = ((x3753^x3754)>>(x3755^x3756));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x3769 = 7574373342917346469LLU;
	int32_t x3772 = -1;
	static volatile uint64_t t41 = 1898146230LLU;

    t41 = ((x3769^x3770)>>(x3771^x3772));

    if (t41 != 7574373342917335271LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x3933 = INT64_MAX;
	uint8_t x3934 = UINT8_MAX;
	static int8_t x3935 = INT8_MIN;
	volatile int8_t x3936 = INT8_MIN;

    t42 = ((x3933^x3934)>>(x3935^x3936));

    if (t42 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x3974 = INT64_MIN;
	static volatile int16_t x3976 = INT16_MIN;
	volatile uint64_t t43 = 608598729706865LLU;

    t43 = ((x3973^x3974)>>(x3975^x3976));

    if (t43 != 9223372920869362269LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x3999 = INT64_MIN;
	volatile int64_t t44 = -8214402252LL;

    t44 = ((x3997^x3998)>>(x3999^x4000));

    if (t44 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x4042 = -1;
	static volatile int32_t x4043 = -1;
	int32_t t45 = 102530;

    t45 = ((x4041^x4042)>>(x4043^x4044));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x4049 = INT32_MAX;
	int16_t x4051 = INT16_MAX;
	int16_t x4052 = INT16_MAX;
	static volatile int32_t t46 = 38746;

    t46 = ((x4049^x4050)>>(x4051^x4052));

    if (t46 != 2147483392) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x4073 = INT8_MIN;
	int64_t x4074 = -1LL;
	int32_t x4075 = -1;
	int32_t x4076 = -1;
	int64_t t47 = -124572780LL;

    t47 = ((x4073^x4074)>>(x4075^x4076));

    if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x4161 = INT64_MIN;
	static volatile uint8_t x4163 = 1U;
	int8_t x4164 = 59;
	int64_t t48 = 169893415714444901LL;

    t48 = ((x4161^x4162)>>(x4163^x4164));

    if (t48 != 31LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x4269 = INT32_MAX;
	uint16_t x4271 = UINT16_MAX;
	static uint16_t x4272 = UINT16_MAX;
	int64_t t49 = -2245785677108474341LL;

    t49 = ((x4269^x4270)>>(x4271^x4272));

    if (t49 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x4517 = 1;
	static int64_t x4518 = 4LL;
	uint64_t x4519 = UINT64_MAX;
	static volatile int64_t x4520 = -1LL;

    t50 = ((x4517^x4518)>>(x4519^x4520));

    if (t50 != 5LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x4706 = INT16_MAX;
	static uint64_t x4707 = UINT64_MAX;
	int32_t t51 = 120;

    t51 = ((x4705^x4706)>>(x4707^x4708));

    if (t51 != 32640) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x4769 = INT16_MAX;
	uint64_t x4770 = 12716LLU;
	int32_t x4771 = -1;
	static volatile int16_t x4772 = -1;
	volatile uint64_t t52 = 4172578896655611LLU;

    t52 = ((x4769^x4770)>>(x4771^x4772));

    if (t52 != 20051LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x4861 = INT8_MIN;
	volatile int16_t x4862 = INT16_MIN;
	int32_t x4863 = -1;
	volatile int32_t x4864 = -1;
	volatile int32_t t53 = 0;

    t53 = ((x4861^x4862)>>(x4863^x4864));

    if (t53 != 32640) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x4933 = INT16_MIN;
	int8_t x4935 = -12;
	int8_t x4936 = -3;
	int32_t t54 = -231017256;

    t54 = ((x4933^x4934)>>(x4935^x4936));

    if (t54 != 4194240) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x5057 = INT32_MAX;
	static volatile int16_t x5058 = INT16_MAX;
	int32_t x5059 = -1;
	int16_t x5060 = -1;
	static volatile int32_t t55 = 59340010;

    t55 = ((x5057^x5058)>>(x5059^x5060));

    if (t55 != 2147450880) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x5129 = INT64_MIN;
	int32_t x5130 = -1250179;
	int16_t x5131 = INT16_MIN;
	int16_t x5132 = INT16_MIN;
	volatile int64_t t56 = 7184977359059911LL;

    t56 = ((x5129^x5130)>>(x5131^x5132));

    if (t56 != 9223372036853525629LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x5173 = 1U;
	uint16_t x5174 = 4U;
	int8_t x5175 = 12;
	uint16_t x5176 = 7U;

    t57 = ((x5173^x5174)>>(x5175^x5176));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x5305 = INT64_MIN;
	uint64_t x5306 = UINT64_MAX;
	int64_t x5307 = -1LL;
	uint64_t x5308 = UINT64_MAX;
	uint64_t t58 = 85917101LLU;

    t58 = ((x5305^x5306)>>(x5307^x5308));

    if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x5321 = 1556558146881676LL;
	uint16_t x5322 = 4358U;
	int8_t x5323 = -1;
	static uint32_t x5324 = UINT32_MAX;
	volatile int64_t t59 = -30820305562900104LL;

    t59 = ((x5321^x5322)>>(x5323^x5324));

    if (t59 != 1556558146886026LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x5325 = 5U;
	uint32_t x5326 = 21007493U;
	int32_t x5328 = -1;
	volatile uint32_t t60 = 508U;

    t60 = ((x5325^x5326)>>(x5327^x5328));

    if (t60 != 21007488U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x5427 = -24;
	int64_t x5428 = -4LL;
	uint64_t t61 = 230850588LLU;

    t61 = ((x5425^x5426)>>(x5427^x5428));

    if (t61 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x5429 = INT64_MIN;
	int16_t x5430 = -1;
	int32_t x5431 = -1;
	int64_t x5432 = -1LL;
	volatile int64_t t62 = INT64_MAX;

    t62 = ((x5429^x5430)>>(x5431^x5432));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x5485 = INT64_MIN;
	int16_t x5486 = INT16_MIN;
	int8_t x5487 = 36;
	int16_t x5488 = 1;
	int64_t t63 = -14754482162LL;

    t63 = ((x5485^x5486)>>(x5487^x5488));

    if (t63 != 67108863LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x5517 = -533945692;
	volatile int64_t x5518 = -51LL;
	volatile uint64_t x5519 = UINT64_MAX;
	int32_t x5520 = -1;
	volatile int64_t t64 = 8388275254701368LL;

    t64 = ((x5517^x5518)>>(x5519^x5520));

    if (t64 != 533945705LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x5678 = INT8_MAX;
	static int32_t x5679 = -1;
	int8_t x5680 = -6;
	uint64_t t65 = 26620201LLU;

    t65 = ((x5677^x5678)>>(x5679^x5680));

    if (t65 != 576460752303423484LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x5685 = 0U;
	static int32_t x5686 = INT32_MAX;
	static int64_t x5687 = -1LL;
	volatile int32_t x5688 = -1;
	volatile int32_t t66 = INT32_MAX;

    t66 = ((x5685^x5686)>>(x5687^x5688));

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x5809 = INT64_MIN;
	int32_t x5810 = -1003;
	uint8_t x5811 = 0U;
	volatile int16_t x5812 = 1;

    t67 = ((x5809^x5810)>>(x5811^x5812));

    if (t67 != 4611686018427387402LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x5954 = -1;
	int32_t x5955 = INT32_MIN;
	int32_t x5956 = INT32_MIN;
	static volatile int32_t t68 = 23077;

    t68 = ((x5953^x5954)>>(x5955^x5956));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x5977 = UINT64_MAX;
	int64_t x5978 = -1LL;
	int32_t x5979 = INT32_MIN;
	volatile int32_t x5980 = INT32_MIN;
	static volatile uint64_t t69 = 1640LLU;

    t69 = ((x5977^x5978)>>(x5979^x5980));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x6226 = -1;
	int16_t x6228 = INT16_MIN;
	volatile int32_t t70 = -3959;

    t70 = ((x6225^x6226)>>(x6227^x6228));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x6297 = 15150U;
	uint64_t x6298 = UINT64_MAX;
	int8_t x6300 = 4;

    t71 = ((x6297^x6298)>>(x6299^x6300));

    if (t71 != 68719476735LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x6309 = 4524311U;
	int8_t x6310 = INT8_MIN;
	uint64_t x6312 = UINT64_MAX;
	uint32_t t72 = 870026U;

    t72 = ((x6309^x6310)>>(x6311^x6312));

    if (t72 != 4290442903U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x6410 = UINT16_MAX;
	uint16_t x6411 = 1U;
	volatile int32_t t73 = -1658;

    t73 = ((x6409^x6410)>>(x6411^x6412));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x6437 = UINT16_MAX;
	static volatile uint64_t x6439 = UINT64_MAX;
	volatile int16_t x6440 = -1;
	int32_t t74 = 24580818;

    t74 = ((x6437^x6438)>>(x6439^x6440));

    if (t74 != 65280) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x6445 = UINT16_MAX;
	uint64_t x6446 = UINT64_MAX;
	int8_t x6447 = -1;
	static volatile uint32_t x6448 = UINT32_MAX;
	volatile uint64_t t75 = 58248LLU;

    t75 = ((x6445^x6446)>>(x6447^x6448));

    if (t75 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x6482 = INT64_MAX;
	int32_t x6483 = INT32_MIN;
	int32_t x6484 = INT32_MIN;
	uint64_t t76 = 1579024150873798475LLU;

    t76 = ((x6481^x6482)>>(x6483^x6484));

    if (t76 != 9223371996116290364LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x6577 = INT16_MAX;
	uint64_t x6578 = 1046503096093LLU;
	uint8_t x6579 = 39U;
	uint32_t x6580 = 60U;
	volatile uint64_t t77 = 1157149LLU;

    t77 = ((x6577^x6578)>>(x6579^x6580));

    if (t77 != 7797LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x6769 = INT8_MIN;
	int16_t x6770 = INT16_MIN;
	int16_t x6771 = -3;

    t78 = ((x6769^x6770)>>(x6771^x6772));

    if (t78 != 8160) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x6866 = INT64_MIN;
	uint16_t x6867 = 28U;
	int8_t x6868 = 1;
	volatile int64_t t79 = 85659023637175LL;

    t79 = ((x6865^x6866)>>(x6867^x6868));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x6953 = -1LL;
	int64_t x6954 = -15453288709936LL;
	int8_t x6955 = -1;
	volatile int64_t t80 = 1750653573LL;

    t80 = ((x6953^x6954)>>(x6955^x6956));

    if (t80 != 15453288709935LL) { NG(); } else { ; }
	
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


    return 0;
}

