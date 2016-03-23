
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

static volatile uint64_t t0 = 34124LLU;
uint32_t x35 = 1047742U;
int8_t x136 = 1;
volatile int16_t x248 = 2;
int16_t x307 = INT16_MAX;
int32_t t4 = -1;
int8_t x379 = 55;
static volatile uint16_t x458 = 6361U;
int8_t x585 = INT8_MIN;
uint16_t x670 = 23796U;
static int8_t x672 = 1;
volatile int16_t x754 = INT16_MIN;
uint8_t x755 = 3U;
int16_t x781 = INT16_MIN;
volatile int64_t x782 = INT64_MIN;
int16_t x926 = INT16_MIN;
int8_t x943 = 1;
volatile uint8_t x947 = 42U;
int32_t t17 = -222814005;
int8_t x973 = 1;
static volatile int32_t t18 = -3089;
static int64_t x978 = -867290179100601740LL;
int64_t t19 = 11LL;
int64_t x1209 = INT64_MIN;
volatile int16_t x1210 = 0;
static volatile int32_t t21 = -107706574;
int32_t t24 = -17970265;
int32_t x1528 = 6;
volatile int32_t t25 = -318783;
volatile uint64_t x1643 = UINT64_MAX;
static uint16_t x1813 = 30573U;
volatile uint32_t t29 = 490U;
int8_t x2022 = INT8_MIN;
uint64_t x2090 = 678502779LLU;
volatile int32_t t34 = -14015575;
volatile uint16_t x2116 = 0U;
uint64_t t38 = 802588264211967LLU;
int8_t x2166 = -27;
static uint8_t x2168 = 1U;
int8_t x2185 = 34;
volatile int64_t x2470 = 2LL;
volatile int8_t x2561 = INT8_MAX;
uint16_t x2745 = 1834U;
static uint8_t x2747 = 23U;
uint64_t x2798 = UINT64_MAX;
uint8_t x2799 = 3U;
int32_t x3029 = -1;
static uint16_t x3036 = 29U;
volatile uint32_t t48 = 125009798U;
int64_t x3081 = 5134832LL;
static uint8_t x3082 = 4U;
uint16_t x3119 = 121U;
static uint16_t x3162 = UINT16_MAX;
static uint8_t x3254 = 6U;
int64_t x3305 = INT64_MAX;
static int16_t x3309 = -1;
volatile int32_t x3310 = 47643;
uint32_t t55 = 26400U;
int32_t t57 = 2540988;
int8_t x3396 = 2;
volatile int32_t x3399 = 99;
static int8_t x3400 = 6;
static volatile int32_t t59 = 199920580;
volatile int16_t x3501 = -1;
uint16_t x3503 = 20302U;
volatile int32_t t61 = -7330703;
uint8_t x3614 = 32U;
volatile uint32_t x3627 = UINT32_MAX;
volatile int16_t x3650 = -1;
uint8_t x3651 = 99U;
int64_t x3801 = INT64_MAX;
int32_t t69 = -3833;
int8_t x3913 = 1;
int32_t x3914 = -1;
volatile uint64_t x3915 = 34874392207213490LLU;
int8_t x4110 = -1;
static uint8_t x4111 = 88U;
int64_t x4313 = -1LL;
uint8_t x4316 = 2U;
static int16_t x4409 = INT16_MIN;
volatile int32_t t78 = 131968894;
uint8_t x4521 = UINT8_MAX;
int32_t x4522 = 2902658;
uint8_t x4524 = 0U;


void f0(void) {
    	int16_t x21 = -1;
	volatile uint64_t x22 = 295781189LLU;
	uint64_t x23 = UINT64_MAX;
	volatile uint8_t x24 = 32U;

    t0 = (((x21!=x22)^x23)<<x24);

    if (t0 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x33 = INT8_MIN;
	volatile uint64_t x34 = UINT64_MAX;
	uint8_t x36 = 21U;
	uint32_t t1 = 239072U;

    t1 = (((x33!=x34)^x35)<<x36);

    if (t1 != 2548039680U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x133 = -1LL;
	volatile int32_t x134 = -244128;
	uint64_t x135 = 16463772LLU;
	uint64_t t2 = 5627521803LLU;

    t2 = (((x133!=x134)^x135)<<x136);

    if (t2 != 32927546LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x245 = 68254LLU;
	int32_t x246 = INT32_MAX;
	uint16_t x247 = 17U;
	static volatile int32_t t3 = -7494592;

    t3 = (((x245!=x246)^x247)<<x248);

    if (t3 != 64) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x305 = 16U;
	static uint32_t x306 = 212000U;
	volatile uint8_t x308 = 0U;

    t4 = (((x305!=x306)^x307)<<x308);

    if (t4 != 32766) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x377 = INT32_MIN;
	volatile uint8_t x378 = 72U;
	static volatile uint8_t x380 = 19U;
	int32_t t5 = -130560471;

    t5 = (((x377!=x378)^x379)<<x380);

    if (t5 != 28311552) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	uint8_t x459 = UINT8_MAX;
	uint16_t x460 = 22U;
	static int32_t t6 = -19920144;

    t6 = (((x457!=x458)^x459)<<x460);

    if (t6 != 1065353216) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x481 = INT8_MIN;
	volatile uint8_t x482 = UINT8_MAX;
	uint8_t x483 = 0U;
	static volatile int64_t x484 = 4LL;
	static int32_t t7 = 285620;

    t7 = (((x481!=x482)^x483)<<x484);

    if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x586 = 37U;
	static uint32_t x587 = 4063855U;
	uint16_t x588 = 9U;
	static uint32_t t8 = 998U;

    t8 = (((x585!=x586)^x587)<<x588);

    if (t8 != 2080693248U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x669 = INT8_MIN;
	uint32_t x671 = UINT32_MAX;
	volatile uint32_t t9 = 25090939U;

    t9 = (((x669!=x670)^x671)<<x672);

    if (t9 != 4294967292U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x677 = -1;
	static volatile int16_t x678 = -1;
	static uint8_t x679 = 5U;
	volatile uint16_t x680 = 0U;
	int32_t t10 = -121203;

    t10 = (((x677!=x678)^x679)<<x680);

    if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x753 = INT16_MIN;
	uint8_t x756 = 3U;
	static int32_t t11 = -121726;

    t11 = (((x753!=x754)^x755)<<x756);

    if (t11 != 24) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x783 = 11170392430LL;
	int16_t x784 = 1;
	volatile int64_t t12 = -1434056238LL;

    t12 = (((x781!=x782)^x783)<<x784);

    if (t12 != 22340784862LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x853 = INT32_MIN;
	uint8_t x854 = UINT8_MAX;
	volatile uint16_t x855 = 17135U;
	int8_t x856 = 1;
	int32_t t13 = -10390738;

    t13 = (((x853!=x854)^x855)<<x856);

    if (t13 != 34268) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x909 = 64263131;
	int8_t x910 = INT8_MIN;
	static int64_t x911 = 33210841792LL;
	int8_t x912 = 2;
	static int64_t t14 = -32133780259420LL;

    t14 = (((x909!=x910)^x911)<<x912);

    if (t14 != 132843367172LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x925 = 1U;
	static uint64_t x927 = 35200872LLU;
	int64_t x928 = 15LL;
	uint64_t t15 = 1510255LLU;

    t15 = (((x925!=x926)^x927)<<x928);

    if (t15 != 1153462206464LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x941 = INT8_MAX;
	uint8_t x942 = UINT8_MAX;
	volatile int16_t x944 = 2;
	int32_t t16 = -4753896;

    t16 = (((x941!=x942)^x943)<<x944);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x945 = UINT16_MAX;
	uint16_t x946 = 222U;
	uint8_t x948 = 13U;

    t17 = (((x945!=x946)^x947)<<x948);

    if (t17 != 352256) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x974 = INT32_MIN;
	static uint16_t x975 = 1686U;
	static int8_t x976 = 3;

    t18 = (((x973!=x974)^x975)<<x976);

    if (t18 != 13496) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x977 = INT64_MIN;
	int64_t x979 = 113375626231009LL;
	uint8_t x980 = 14U;

    t19 = (((x977!=x978)^x979)<<x980);

    if (t19 != 1857546260168835072LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1211 = INT32_MAX;
	static int8_t x1212 = 0;
	int32_t t20 = 272249030;

    t20 = (((x1209!=x1210)^x1211)<<x1212);

    if (t20 != 2147483646) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1269 = INT8_MIN;
	int16_t x1270 = INT16_MIN;
	uint8_t x1271 = UINT8_MAX;
	uint64_t x1272 = 6LLU;

    t21 = (((x1269!=x1270)^x1271)<<x1272);

    if (t21 != 16256) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1429 = UINT8_MAX;
	int8_t x1430 = INT8_MIN;
	uint8_t x1431 = 7U;
	static volatile int8_t x1432 = 15;
	int32_t t22 = 1737384;

    t22 = (((x1429!=x1430)^x1431)<<x1432);

    if (t22 != 196608) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1497 = 23183690U;
	uint16_t x1498 = UINT16_MAX;
	static int16_t x1499 = INT16_MAX;
	static volatile uint16_t x1500 = 14U;
	int32_t t23 = 0;

    t23 = (((x1497!=x1498)^x1499)<<x1500);

    if (t23 != 536838144) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x1505 = -1;
	volatile int16_t x1506 = INT16_MIN;
	uint8_t x1507 = UINT8_MAX;
	uint8_t x1508 = 0U;

    t24 = (((x1505!=x1506)^x1507)<<x1508);

    if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x1525 = 1768U;
	volatile int64_t x1526 = -37LL;
	uint16_t x1527 = UINT16_MAX;

    t25 = (((x1525!=x1526)^x1527)<<x1528);

    if (t25 != 4194176) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x1589 = 4U;
	volatile uint8_t x1590 = 100U;
	volatile uint32_t x1591 = 112U;
	uint16_t x1592 = 0U;
	volatile uint32_t t26 = 173U;

    t26 = (((x1589!=x1590)^x1591)<<x1592);

    if (t26 != 113U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1625 = -1;
	volatile int16_t x1626 = INT16_MIN;
	static uint32_t x1627 = UINT32_MAX;
	static int8_t x1628 = 0;
	volatile uint32_t t27 = 5233U;

    t27 = (((x1625!=x1626)^x1627)<<x1628);

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1641 = -1;
	uint8_t x1642 = 29U;
	static volatile uint16_t x1644 = 5U;
	volatile uint64_t t28 = 33445277014LLU;

    t28 = (((x1641!=x1642)^x1643)<<x1644);

    if (t28 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1814 = INT32_MIN;
	static uint32_t x1815 = UINT32_MAX;
	uint8_t x1816 = 1U;

    t29 = (((x1813!=x1814)^x1815)<<x1816);

    if (t29 != 4294967292U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x1877 = 6887;
	int32_t x1878 = INT32_MAX;
	volatile uint64_t x1879 = 19584339125376LLU;
	int8_t x1880 = 5;
	volatile uint64_t t30 = 21298LLU;

    t30 = (((x1877!=x1878)^x1879)<<x1880);

    if (t30 != 626698852012064LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x1965 = INT64_MAX;
	int64_t x1966 = -697583970LL;
	static int16_t x1967 = 118;
	uint8_t x1968 = 0U;
	int32_t t31 = -157;

    t31 = (((x1965!=x1966)^x1967)<<x1968);

    if (t31 != 119) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2021 = 3312191LLU;
	static int16_t x2023 = 3625;
	uint8_t x2024 = 11U;
	volatile int32_t t32 = 6;

    t32 = (((x2021!=x2022)^x2023)<<x2024);

    if (t32 != 7421952) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2045 = INT64_MAX;
	int64_t x2046 = -2LL;
	volatile int16_t x2047 = 1890;
	static int8_t x2048 = 0;
	volatile int32_t t33 = -2;

    t33 = (((x2045!=x2046)^x2047)<<x2048);

    if (t33 != 1891) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2089 = 0U;
	volatile uint8_t x2091 = 3U;
	int8_t x2092 = 1;

    t34 = (((x2089!=x2090)^x2091)<<x2092);

    if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x2097 = UINT8_MAX;
	volatile uint64_t x2098 = UINT64_MAX;
	volatile uint8_t x2099 = UINT8_MAX;
	uint8_t x2100 = 14U;
	static volatile int32_t t35 = -95;

    t35 = (((x2097!=x2098)^x2099)<<x2100);

    if (t35 != 4161536) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2113 = INT16_MIN;
	int32_t x2114 = INT32_MAX;
	static volatile uint64_t x2115 = 112363LLU;
	volatile uint64_t t36 = 8518021212LLU;

    t36 = (((x2113!=x2114)^x2115)<<x2116);

    if (t36 != 112362LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x2137 = INT32_MIN;
	uint64_t x2138 = 447451971266425LLU;
	volatile uint16_t x2139 = 14U;
	uint8_t x2140 = 19U;
	volatile int32_t t37 = 32331;

    t37 = (((x2137!=x2138)^x2139)<<x2140);

    if (t37 != 7864320) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x2157 = INT8_MAX;
	volatile int16_t x2158 = INT16_MIN;
	uint64_t x2159 = 1LLU;
	volatile uint16_t x2160 = 0U;

    t38 = (((x2157!=x2158)^x2159)<<x2160);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2165 = 40389U;
	volatile int32_t x2167 = 6564;
	volatile int32_t t39 = -27607835;

    t39 = (((x2165!=x2166)^x2167)<<x2168);

    if (t39 != 13130) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x2186 = INT16_MAX;
	uint64_t x2187 = 4990001729118202LLU;
	static uint16_t x2188 = 2U;
	volatile uint64_t t40 = 6052063211723953938LLU;

    t40 = (((x2185!=x2186)^x2187)<<x2188);

    if (t40 != 19960006916472812LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x2469 = 1U;
	volatile uint32_t x2471 = 31U;
	static int32_t x2472 = 14;
	uint32_t t41 = 1764302075U;

    t41 = (((x2469!=x2470)^x2471)<<x2472);

    if (t41 != 491520U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x2489 = 4686;
	uint8_t x2490 = 13U;
	static uint32_t x2491 = 219U;
	uint8_t x2492 = 7U;
	uint32_t t42 = 10450U;

    t42 = (((x2489!=x2490)^x2491)<<x2492);

    if (t42 != 27904U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2562 = 1699U;
	uint8_t x2563 = 105U;
	uint16_t x2564 = 0U;
	volatile int32_t t43 = -21155478;

    t43 = (((x2561!=x2562)^x2563)<<x2564);

    if (t43 != 104) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x2746 = -257830968200LL;
	int8_t x2748 = 0;
	volatile int32_t t44 = 446;

    t44 = (((x2745!=x2746)^x2747)<<x2748);

    if (t44 != 22) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x2797 = INT8_MIN;
	volatile int16_t x2800 = 6;
	volatile int32_t t45 = 26550817;

    t45 = (((x2797!=x2798)^x2799)<<x2800);

    if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x2845 = INT16_MIN;
	volatile int8_t x2846 = INT8_MAX;
	static int16_t x2847 = 2;
	static uint8_t x2848 = 1U;
	volatile int32_t t46 = 949;

    t46 = (((x2845!=x2846)^x2847)<<x2848);

    if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x3030 = -42166204814579905LL;
	static uint64_t x3031 = 215910LLU;
	int8_t x3032 = 4;
	volatile uint64_t t47 = 2518997LLU;

    t47 = (((x3029!=x3030)^x3031)<<x3032);

    if (t47 != 3454576LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x3033 = -1;
	static int64_t x3034 = INT64_MIN;
	volatile uint32_t x3035 = 10607U;

    t48 = (((x3033!=x3034)^x3035)<<x3036);

    if (t48 != 3221225472U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x3077 = 5U;
	volatile int8_t x3078 = -52;
	uint64_t x3079 = 62LLU;
	uint8_t x3080 = 6U;
	static uint64_t t49 = 262565927449639800LLU;

    t49 = (((x3077!=x3078)^x3079)<<x3080);

    if (t49 != 4032LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x3083 = 7;
	int8_t x3084 = 5;
	static int32_t t50 = 15140;

    t50 = (((x3081!=x3082)^x3083)<<x3084);

    if (t50 != 192) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x3117 = UINT64_MAX;
	int8_t x3118 = INT8_MIN;
	volatile uint8_t x3120 = 5U;
	int32_t t51 = 27;

    t51 = (((x3117!=x3118)^x3119)<<x3120);

    if (t51 != 3840) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x3161 = INT64_MAX;
	uint16_t x3163 = UINT16_MAX;
	uint8_t x3164 = 2U;
	int32_t t52 = 3440;

    t52 = (((x3161!=x3162)^x3163)<<x3164);

    if (t52 != 262136) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x3253 = INT16_MAX;
	uint16_t x3255 = 295U;
	int8_t x3256 = 5;
	int32_t t53 = -1;

    t53 = (((x3253!=x3254)^x3255)<<x3256);

    if (t53 != 9408) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x3306 = 703757U;
	uint16_t x3307 = UINT16_MAX;
	volatile uint8_t x3308 = 1U;
	volatile int32_t t54 = 1;

    t54 = (((x3305!=x3306)^x3307)<<x3308);

    if (t54 != 131068) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x3311 = 901376457U;
	static int8_t x3312 = 1;

    t55 = (((x3309!=x3310)^x3311)<<x3312);

    if (t55 != 1802752912U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x3365 = UINT32_MAX;
	uint64_t x3366 = 6162228LLU;
	uint32_t x3367 = 4U;
	uint8_t x3368 = 0U;
	uint32_t t56 = 304U;

    t56 = (((x3365!=x3366)^x3367)<<x3368);

    if (t56 != 5U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x3369 = INT16_MIN;
	volatile int8_t x3370 = INT8_MIN;
	uint8_t x3371 = UINT8_MAX;
	uint8_t x3372 = 8U;

    t57 = (((x3369!=x3370)^x3371)<<x3372);

    if (t57 != 65024) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x3393 = INT64_MIN;
	int32_t x3394 = -1;
	uint16_t x3395 = UINT16_MAX;
	volatile int32_t t58 = 695536049;

    t58 = (((x3393!=x3394)^x3395)<<x3396);

    if (t58 != 262136) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x3397 = 15326U;
	int64_t x3398 = -1LL;

    t59 = (((x3397!=x3398)^x3399)<<x3400);

    if (t59 != 6272) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x3401 = INT64_MAX;
	int32_t x3402 = INT32_MIN;
	static uint8_t x3403 = 1U;
	uint16_t x3404 = 1U;
	volatile int32_t t60 = 1;

    t60 = (((x3401!=x3402)^x3403)<<x3404);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x3502 = 108226U;
	int16_t x3504 = 0;

    t61 = (((x3501!=x3502)^x3503)<<x3504);

    if (t61 != 20303) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x3585 = INT32_MIN;
	int16_t x3586 = INT16_MIN;
	volatile int8_t x3587 = 17;
	volatile uint16_t x3588 = 1U;
	volatile int32_t t62 = -6159;

    t62 = (((x3585!=x3586)^x3587)<<x3588);

    if (t62 != 32) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3613 = 17U;
	volatile uint32_t x3615 = UINT32_MAX;
	static uint16_t x3616 = 3U;
	uint32_t t63 = 1524865151U;

    t63 = (((x3613!=x3614)^x3615)<<x3616);

    if (t63 != 4294967280U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3625 = UINT16_MAX;
	uint16_t x3626 = UINT16_MAX;
	volatile int8_t x3628 = 0;
	uint32_t t64 = UINT32_MAX;

    t64 = (((x3625!=x3626)^x3627)<<x3628);

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3649 = -1;
	uint16_t x3652 = 12U;
	static volatile int32_t t65 = -1;

    t65 = (((x3649!=x3650)^x3651)<<x3652);

    if (t65 != 405504) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3729 = -1469578710998204699LL;
	int32_t x3730 = INT32_MIN;
	static uint32_t x3731 = 957692695U;
	uint16_t x3732 = 2U;
	volatile uint32_t t66 = 19U;

    t66 = (((x3729!=x3730)^x3731)<<x3732);

    if (t66 != 3830770776U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3733 = -1;
	int64_t x3734 = INT64_MAX;
	uint16_t x3735 = UINT16_MAX;
	int16_t x3736 = 1;
	static volatile int32_t t67 = -452873;

    t67 = (((x3733!=x3734)^x3735)<<x3736);

    if (t67 != 131068) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x3802 = 360;
	uint8_t x3803 = 3U;
	static volatile int8_t x3804 = 4;
	int32_t t68 = -6495;

    t68 = (((x3801!=x3802)^x3803)<<x3804);

    if (t68 != 32) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3853 = INT16_MAX;
	static int32_t x3854 = INT32_MIN;
	volatile uint8_t x3855 = 1U;
	volatile uint8_t x3856 = 26U;

    t69 = (((x3853!=x3854)^x3855)<<x3856);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x3889 = UINT16_MAX;
	int16_t x3890 = INT16_MIN;
	static volatile int8_t x3891 = 0;
	int8_t x3892 = 2;
	volatile int32_t t70 = -15874694;

    t70 = (((x3889!=x3890)^x3891)<<x3892);

    if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint32_t x3916 = 12U;
	volatile uint64_t t71 = 522692574493599205LLU;

    t71 = (((x3913!=x3914)^x3915)<<x3916);

    if (t71 != 13718301964779597824LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x4069 = 64U;
	int32_t x4070 = INT32_MIN;
	static int8_t x4071 = 9;
	int8_t x4072 = 0;
	volatile int32_t t72 = 86271;

    t72 = (((x4069!=x4070)^x4071)<<x4072);

    if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x4109 = 0U;
	static uint8_t x4112 = 0U;
	int32_t t73 = -24236056;

    t73 = (((x4109!=x4110)^x4111)<<x4112);

    if (t73 != 89) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x4314 = INT32_MAX;
	int8_t x4315 = 9;
	int32_t t74 = 179224744;

    t74 = (((x4313!=x4314)^x4315)<<x4316);

    if (t74 != 32) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x4325 = INT8_MIN;
	volatile int8_t x4326 = -9;
	static uint64_t x4327 = 241LLU;
	uint16_t x4328 = 1U;
	volatile uint64_t t75 = 3624529LLU;

    t75 = (((x4325!=x4326)^x4327)<<x4328);

    if (t75 != 480LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4410 = 2U;
	int16_t x4411 = 710;
	int8_t x4412 = 10;
	int32_t t76 = -2966;

    t76 = (((x4409!=x4410)^x4411)<<x4412);

    if (t76 != 728064) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x4437 = INT32_MIN;
	int16_t x4438 = 9;
	uint32_t x4439 = UINT32_MAX;
	volatile uint32_t x4440 = 2U;
	volatile uint32_t t77 = 3112037U;

    t77 = (((x4437!=x4438)^x4439)<<x4440);

    if (t77 != 4294967288U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x4477 = -768LL;
	static volatile int16_t x4478 = INT16_MIN;
	static uint8_t x4479 = 112U;
	int8_t x4480 = 0;

    t78 = (((x4477!=x4478)^x4479)<<x4480);

    if (t78 != 113) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x4481 = INT64_MIN;
	int16_t x4482 = INT16_MIN;
	uint8_t x4483 = UINT8_MAX;
	int8_t x4484 = 12;
	int32_t t79 = 3833;

    t79 = (((x4481!=x4482)^x4483)<<x4484);

    if (t79 != 1040384) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x4523 = 2458U;
	volatile int32_t t80 = -686;

    t80 = (((x4521!=x4522)^x4523)<<x4524);

    if (t80 != 2459) { NG(); } else { ; }
	
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

