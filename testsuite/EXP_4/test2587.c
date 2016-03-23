
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

int64_t x12 = INT64_MAX;
uint32_t x40 = UINT32_MAX;
uint32_t t2 = 3U;
int16_t x150 = INT16_MIN;
int64_t x267 = -1LL;
uint32_t x351 = 15U;
int8_t x672 = -1;
uint16_t x721 = 17U;
static volatile int8_t x824 = -1;
static int32_t x911 = INT32_MIN;
volatile int32_t x1005 = 240781;
uint32_t x1010 = UINT32_MAX;
static int32_t x1012 = INT32_MIN;
volatile int32_t t14 = INT32_MAX;
int8_t x1064 = INT8_MIN;
int8_t x1086 = -1;
volatile uint32_t t17 = 28U;
int16_t x1235 = -1;
uint64_t t19 = 0LLU;
static int64_t x1251 = INT64_MIN;
uint32_t x1869 = 1533868126U;
static uint32_t x1938 = 1U;
uint64_t x1939 = 5LLU;
volatile int32_t t25 = -1473643;
int32_t x1946 = INT32_MIN;
uint64_t t26 = UINT64_MAX;
static int64_t x1965 = 240175090109LL;
static uint64_t x2077 = 8LLU;
static int32_t x2078 = 0;
static uint64_t t32 = 1LLU;
volatile int32_t t33 = 1;
volatile int32_t t39 = 6469;
uint16_t x2853 = 250U;
volatile int32_t t42 = -93;
uint32_t x2876 = UINT32_MAX;
int32_t t44 = -7631;
int16_t x3008 = -1;
int16_t x3028 = -104;
int8_t x3112 = INT8_MAX;
int32_t x3209 = 1;
uint32_t x3212 = 63U;
uint8_t x3257 = 11U;
static volatile uint16_t x3298 = UINT16_MAX;
int8_t x3300 = INT8_MIN;
uint32_t x3330 = 0U;
volatile int32_t x3375 = -1;
volatile int64_t x3499 = -1LL;
static uint32_t x3531 = 4199263U;
volatile uint8_t x3668 = UINT8_MAX;
static int32_t t55 = -50;
uint64_t x3677 = 282894129349729368LLU;
uint32_t x3743 = 362096525U;
static volatile uint64_t t57 = 513971LLU;
volatile int32_t t61 = 19743270;
uint64_t x3970 = 0LLU;
uint64_t t62 = UINT64_MAX;
volatile int32_t t64 = 235;
static uint32_t x4237 = UINT32_MAX;
uint16_t x4238 = 0U;
static uint32_t x4343 = UINT32_MAX;
static uint8_t x4344 = UINT8_MAX;
static int8_t x4393 = INT8_MAX;
int16_t x4396 = INT16_MAX;
volatile int32_t t68 = 14640306;
int16_t x4533 = INT16_MAX;
uint16_t x4538 = 0U;
uint8_t x4577 = 0U;
static uint64_t x4578 = 40415647599778LLU;
volatile int64_t x4833 = 44921007174589374LL;
int32_t x4834 = INT32_MIN;
int8_t x4836 = -1;
volatile int64_t t74 = 1531988683LL;
static int64_t x4877 = 1LL;
int32_t x5271 = -1;
uint64_t t79 = 10475893034595912LLU;
volatile int32_t t81 = 303318;
uint8_t x5354 = 0U;
volatile uint64_t x5356 = 10279097LLU;
volatile uint64_t t82 = UINT64_MAX;
int32_t x5399 = INT32_MIN;
uint32_t x5633 = 3292463U;
int32_t x5775 = -1;
volatile int32_t t85 = -30839;
static int64_t x5837 = INT64_MAX;
int64_t x5924 = -1LL;
int32_t t89 = 9;
int64_t x6187 = -1LL;
volatile int32_t x6248 = -618;
static int64_t x6350 = INT64_MIN;
uint64_t x6351 = 3260650002983LLU;
uint32_t x6429 = 0U;
static uint64_t x6822 = 5LLU;
int16_t x6842 = 0;
uint8_t x6875 = 6U;
static int8_t x6915 = INT8_MAX;
volatile int32_t t106 = -160326;
uint64_t t107 = 492LLU;
volatile int32_t x7106 = INT32_MIN;
volatile uint64_t x7107 = UINT64_MAX;
uint64_t t109 = 1LLU;
int64_t x7177 = INT64_MAX;
int8_t x7191 = INT8_MIN;
static uint32_t x7197 = 560U;
int16_t x7200 = -1;
uint32_t t112 = 345120U;
int16_t x7349 = 1;
static uint32_t x7351 = 5U;
uint32_t x7365 = 215U;
int64_t x7770 = INT64_MIN;
int8_t x7801 = 62;
int16_t x8151 = -1;
volatile uint64_t t123 = 3LLU;
volatile uint64_t x8553 = 1LLU;
int8_t x8555 = INT8_MIN;
int16_t x8574 = 14;
static uint64_t t125 = UINT64_MAX;
uint8_t x8788 = 0U;
volatile int32_t t128 = 16101336;
int32_t t129 = 3;
int32_t t130 = -2;
static volatile uint16_t x9265 = 7580U;
uint16_t x9288 = UINT16_MAX;
int32_t t133 = -438258;
int16_t x9415 = INT16_MAX;
uint32_t t134 = 637U;
uint16_t x9421 = 28975U;
volatile int32_t t137 = -1;
uint32_t x9749 = 743914U;
static uint32_t x9752 = 1848116996U;
int32_t t140 = -129;
volatile int32_t x9837 = 5;
volatile uint8_t x9942 = 3U;
uint8_t x9967 = 1U;
uint64_t x9968 = UINT64_MAX;
uint8_t x10129 = 5U;
uint8_t x10289 = UINT8_MAX;
static volatile uint32_t t146 = 28888749U;
volatile int32_t x10374 = 0;
volatile uint16_t x10397 = 16501U;
volatile int32_t x10398 = INT32_MIN;
uint32_t x10399 = UINT32_MAX;
int32_t x10430 = INT32_MIN;
uint8_t x10446 = 0U;
uint64_t x10454 = 0LLU;
static uint8_t x10541 = 20U;
volatile int32_t t153 = -178;
uint64_t x10603 = UINT64_MAX;
static uint8_t x10653 = 7U;
int32_t x10655 = INT32_MIN;
volatile int32_t t156 = 1;
volatile uint16_t x10889 = UINT16_MAX;
uint8_t x10890 = 0U;
static int64_t x10937 = INT64_MAX;
static volatile int8_t x10939 = -1;
int32_t x11042 = INT32_MIN;
uint32_t x11043 = 14U;
static uint8_t x11381 = 62U;
uint8_t x11526 = 0U;
uint8_t x11528 = UINT8_MAX;
uint32_t x11605 = 313U;
uint16_t x11606 = 0U;
volatile int32_t x11665 = 8;
uint32_t x11668 = 3U;
int64_t x11725 = 0LL;
int16_t x11726 = 0;
volatile uint8_t x11749 = 20U;
volatile uint64_t x11970 = 43337758LLU;
int64_t x11972 = INT64_MIN;
uint64_t x12114 = UINT64_MAX;
uint16_t x12121 = UINT16_MAX;
static int8_t x12124 = 23;
int32_t t172 = -1047;
static int64_t x12193 = 27204LL;
volatile int64_t t176 = 3LL;
uint64_t x12353 = 32441841LLU;
uint32_t x12356 = UINT32_MAX;
uint64_t x12441 = UINT64_MAX;
volatile uint16_t x12501 = 30U;
int8_t x12502 = 0;
int8_t x12504 = -3;
int32_t t182 = 1932591;
uint16_t x12593 = 32U;
static volatile uint8_t x12988 = 98U;
int32_t x13310 = -1;
uint32_t x13438 = 0U;
int64_t x13485 = INT64_MAX;
static uint8_t x13604 = UINT8_MAX;
int8_t x13619 = INT8_MIN;
int32_t x13671 = 6;
volatile int16_t x13947 = INT16_MIN;
volatile int32_t t197 = 18231858;
static volatile int16_t x14000 = -1;


void f0(void) {
    	static volatile uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 20U;
	static int64_t x11 = INT64_MAX;
	int32_t t0 = -3585;

    t0 = (x9>>(x10*(x11^x12)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x25 = 71U;
	int16_t x26 = 30;
	int32_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	static volatile int32_t t1 = 734100;

    t1 = (x25>>(x26*(x27^x28)));

    if (t1 != 71) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MAX;
	static int32_t x39 = INT32_MIN;

    t2 = (x37>>(x38*(x39^x40)));

    if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x49 = 15U;
	int16_t x50 = -1;
	int8_t x51 = INT8_MAX;
	volatile int8_t x52 = INT8_MIN;
	int32_t t3 = -706364947;

    t3 = (x49>>(x50*(x51^x52)));

    if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x149 = UINT16_MAX;
	int32_t x151 = -1;
	volatile int64_t x152 = -1LL;
	int32_t t4 = 86863104;

    t4 = (x149>>(x150*(x151^x152)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x265 = 3443U;
	int64_t x266 = -1LL;
	int64_t x268 = -1LL;
	int32_t t5 = 63;

    t5 = (x265>>(x266*(x267^x268)));

    if (t5 != 3443) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x341 = 1;
	static volatile int8_t x342 = 0;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t6 = 46139042;

    t6 = (x341>>(x342*(x343^x344)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x349 = 4357;
	int32_t x350 = -1;
	int8_t x352 = -1;
	int32_t t7 = 28168;

    t7 = (x349>>(x350*(x351^x352)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x669 = 69297646U;
	static int64_t x670 = INT64_MIN;
	int8_t x671 = -1;
	uint32_t t8 = 6443U;

    t8 = (x669>>(x670*(x671^x672)));

    if (t8 != 69297646U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x722 = INT64_MAX;
	volatile uint64_t x723 = UINT64_MAX;
	int64_t x724 = -1LL;
	volatile int32_t t9 = -10630;

    t9 = (x721>>(x722*(x723^x724)));

    if (t9 != 17) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x729 = UINT8_MAX;
	volatile int64_t x730 = 450511532948565LL;
	int16_t x731 = -1;
	int8_t x732 = -1;
	int32_t t10 = 2334251;

    t10 = (x729>>(x730*(x731^x732)));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x821 = 4U;
	int16_t x822 = -1;
	static int16_t x823 = -1;
	volatile uint32_t t11 = 7U;

    t11 = (x821>>(x822*(x823^x824)));

    if (t11 != 4U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x909 = 1;
	int8_t x910 = -1;
	volatile int32_t x912 = INT32_MAX;
	volatile int32_t t12 = -4;

    t12 = (x909>>(x910*(x911^x912)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1006 = 2LLU;
	int64_t x1007 = INT64_MIN;
	int8_t x1008 = 1;
	int32_t t13 = 1;

    t13 = (x1005>>(x1006*(x1007^x1008)));

    if (t13 != 60195) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1009 = INT32_MAX;
	int32_t x1011 = INT32_MIN;

    t14 = (x1009>>(x1010*(x1011^x1012)));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x1061 = 25175990U;
	int32_t x1062 = INT32_MIN;
	int8_t x1063 = INT8_MIN;
	volatile uint32_t t15 = 7971193U;

    t15 = (x1061>>(x1062*(x1063^x1064)));

    if (t15 != 25175990U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1085 = 3375U;
	static int8_t x1087 = INT8_MIN;
	uint8_t x1088 = 114U;
	uint32_t t16 = 1090699U;

    t16 = (x1085>>(x1086*(x1087^x1088)));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1113 = 1608206488U;
	int64_t x1114 = INT64_MIN;
	uint16_t x1115 = UINT16_MAX;
	uint16_t x1116 = UINT16_MAX;

    t17 = (x1113>>(x1114*(x1115^x1116)));

    if (t17 != 1608206488U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x1233 = INT8_MAX;
	int8_t x1234 = 1;
	volatile int16_t x1236 = -1;
	static int32_t t18 = 7;

    t18 = (x1233>>(x1234*(x1235^x1236)));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x1245 = UINT64_MAX;
	int16_t x1246 = -1;
	int32_t x1247 = INT32_MIN;
	int32_t x1248 = INT32_MAX;

    t19 = (x1245>>(x1246*(x1247^x1248)));

    if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1249 = 9966;
	static uint8_t x1250 = 18U;
	int64_t x1252 = INT64_MIN;
	volatile int32_t t20 = 307359;

    t20 = (x1249>>(x1250*(x1251^x1252)));

    if (t20 != 9966) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x1445 = 21094857867425606LL;
	uint8_t x1446 = 0U;
	static volatile int64_t x1447 = INT64_MIN;
	int64_t x1448 = INT64_MIN;
	volatile int64_t t21 = 5647LL;

    t21 = (x1445>>(x1446*(x1447^x1448)));

    if (t21 != 21094857867425606LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x1565 = 0U;
	int8_t x1566 = INT8_MIN;
	volatile int8_t x1567 = -1;
	uint32_t x1568 = UINT32_MAX;
	volatile int32_t t22 = -20390;

    t22 = (x1565>>(x1566*(x1567^x1568)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1645 = 13U;
	int32_t x1646 = INT32_MIN;
	uint16_t x1647 = UINT16_MAX;
	volatile uint16_t x1648 = UINT16_MAX;
	static volatile int32_t t23 = -1345197;

    t23 = (x1645>>(x1646*(x1647^x1648)));

    if (t23 != 13) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x1870 = -1;
	volatile uint16_t x1871 = UINT16_MAX;
	uint16_t x1872 = UINT16_MAX;
	volatile uint32_t t24 = 20433U;

    t24 = (x1869>>(x1870*(x1871^x1872)));

    if (t24 != 1533868126U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x1937 = INT32_MAX;
	static int8_t x1940 = 1;

    t25 = (x1937>>(x1938*(x1939^x1940)));

    if (t25 != 134217727) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x1945 = UINT64_MAX;
	int8_t x1947 = INT8_MIN;
	uint32_t x1948 = 0U;

    t26 = (x1945>>(x1946*(x1947^x1948)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1966 = 0U;
	int64_t x1967 = INT64_MAX;
	int32_t x1968 = -1875780;
	int64_t t27 = -19113LL;

    t27 = (x1965>>(x1966*(x1967^x1968)));

    if (t27 != 240175090109LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x2025 = UINT16_MAX;
	uint64_t x2026 = 7824876LLU;
	volatile int32_t x2027 = -1;
	int16_t x2028 = -1;
	int32_t t28 = 7;

    t28 = (x2025>>(x2026*(x2027^x2028)));

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x2079 = INT32_MAX;
	int8_t x2080 = 0;
	volatile uint64_t t29 = 29240871LLU;

    t29 = (x2077>>(x2078*(x2079^x2080)));

    if (t29 != 8LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x2093 = 22LL;
	int16_t x2094 = -1;
	int16_t x2095 = INT16_MAX;
	int16_t x2096 = INT16_MAX;
	volatile int64_t t30 = -1164591949518367686LL;

    t30 = (x2093>>(x2094*(x2095^x2096)));

    if (t30 != 22LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x2157 = 6;
	int64_t x2158 = 5LL;
	int8_t x2159 = -1;
	static volatile int8_t x2160 = -1;
	volatile int32_t t31 = -153;

    t31 = (x2157>>(x2158*(x2159^x2160)));

    if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x2169 = 12371278381677713LLU;
	int8_t x2170 = -1;
	int8_t x2171 = INT8_MIN;
	int8_t x2172 = INT8_MIN;

    t32 = (x2169>>(x2170*(x2171^x2172)));

    if (t32 != 12371278381677713LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x2305 = INT32_MAX;
	int32_t x2306 = -1;
	static uint16_t x2307 = 2U;
	static volatile int16_t x2308 = -1;

    t33 = (x2305>>(x2306*(x2307^x2308)));

    if (t33 != 268435455) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x2361 = UINT8_MAX;
	uint64_t x2362 = 0LLU;
	volatile int16_t x2363 = 250;
	volatile uint64_t x2364 = 1086606LLU;
	static int32_t t34 = -95;

    t34 = (x2361>>(x2362*(x2363^x2364)));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x2369 = INT64_MAX;
	volatile int8_t x2370 = -1;
	static int64_t x2371 = INT64_MIN;
	int64_t x2372 = INT64_MAX;
	int64_t t35 = -22111LL;

    t35 = (x2369>>(x2370*(x2371^x2372)));

    if (t35 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x2429 = UINT16_MAX;
	int8_t x2430 = -1;
	int16_t x2431 = 23;
	uint64_t x2432 = UINT64_MAX;
	volatile int32_t t36 = -648;

    t36 = (x2429>>(x2430*(x2431^x2432)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x2549 = INT64_MAX;
	static int8_t x2550 = -1;
	int16_t x2551 = -1;
	int8_t x2552 = 2;
	int64_t t37 = -4526584809999333499LL;

    t37 = (x2549>>(x2550*(x2551^x2552)));

    if (t37 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x2569 = 237;
	uint16_t x2570 = 0U;
	static uint16_t x2571 = UINT16_MAX;
	int16_t x2572 = INT16_MIN;
	static int32_t t38 = 372589;

    t38 = (x2569>>(x2570*(x2571^x2572)));

    if (t38 != 237) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x2661 = UINT16_MAX;
	int8_t x2662 = INT8_MIN;
	static int16_t x2663 = -1;
	uint64_t x2664 = UINT64_MAX;

    t39 = (x2661>>(x2662*(x2663^x2664)));

    if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x2677 = 47U;
	int64_t x2678 = INT64_MIN;
	uint64_t x2679 = 9660889012LLU;
	volatile int32_t x2680 = INT32_MIN;
	int32_t t40 = -50;

    t40 = (x2677>>(x2678*(x2679^x2680)));

    if (t40 != 47) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2785 = 1;
	int16_t x2786 = INT16_MIN;
	static int64_t x2787 = -1LL;
	volatile int32_t x2788 = -1;
	int32_t t41 = 3584;

    t41 = (x2785>>(x2786*(x2787^x2788)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2854 = INT8_MAX;
	int64_t x2855 = INT64_MIN;
	static volatile int64_t x2856 = INT64_MIN;

    t42 = (x2853>>(x2854*(x2855^x2856)));

    if (t42 != 250) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2873 = UINT32_MAX;
	uint16_t x2874 = UINT16_MAX;
	int8_t x2875 = -1;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = (x2873>>(x2874*(x2875^x2876)));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x2957 = 6U;
	int32_t x2958 = INT32_MAX;
	volatile uint64_t x2959 = UINT64_MAX;
	uint64_t x2960 = UINT64_MAX;

    t44 = (x2957>>(x2958*(x2959^x2960)));

    if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x3005 = 30223002;
	int16_t x3006 = INT16_MIN;
	volatile int64_t x3007 = -1LL;
	static volatile int32_t t45 = 27588806;

    t45 = (x3005>>(x3006*(x3007^x3008)));

    if (t45 != 30223002) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x3025 = UINT16_MAX;
	static int8_t x3026 = 0;
	uint64_t x3027 = 22209LLU;
	static volatile int32_t t46 = 317458771;

    t46 = (x3025>>(x3026*(x3027^x3028)));

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x3109 = 99U;
	static uint32_t x3110 = UINT32_MAX;
	int8_t x3111 = INT8_MIN;
	int32_t t47 = 4;

    t47 = (x3109>>(x3110*(x3111^x3112)));

    if (t47 != 49) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3210 = 0;
	int64_t x3211 = INT64_MAX;
	int32_t t48 = 9812;

    t48 = (x3209>>(x3210*(x3211^x3212)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x3258 = 0;
	int32_t x3259 = -10946;
	static int32_t x3260 = -1;
	volatile int32_t t49 = 30956;

    t49 = (x3257>>(x3258*(x3259^x3260)));

    if (t49 != 11) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x3297 = 11717;
	int8_t x3299 = INT8_MIN;
	volatile int32_t t50 = -22394242;

    t50 = (x3297>>(x3298*(x3299^x3300)));

    if (t50 != 11717) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3329 = INT32_MAX;
	static volatile int16_t x3331 = -1;
	int32_t x3332 = INT32_MIN;
	volatile int32_t t51 = INT32_MAX;

    t51 = (x3329>>(x3330*(x3331^x3332)));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x3373 = UINT64_MAX;
	int32_t x3374 = INT32_MAX;
	int8_t x3376 = -1;
	volatile uint64_t t52 = UINT64_MAX;

    t52 = (x3373>>(x3374*(x3375^x3376)));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x3497 = UINT32_MAX;
	uint8_t x3498 = 1U;
	int32_t x3500 = -1;
	static uint32_t t53 = UINT32_MAX;

    t53 = (x3497>>(x3498*(x3499^x3500)));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x3529 = 2993284U;
	int32_t x3530 = INT32_MIN;
	uint32_t x3532 = 427U;
	uint32_t t54 = 158818U;

    t54 = (x3529>>(x3530*(x3531^x3532)));

    if (t54 != 2993284U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x3665 = 3;
	volatile uint16_t x3666 = 0U;
	int32_t x3667 = INT32_MIN;

    t55 = (x3665>>(x3666*(x3667^x3668)));

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x3678 = INT64_MIN;
	uint64_t x3679 = 2809059650589628586LLU;
	int16_t x3680 = -4;
	static volatile uint64_t t56 = 210878LLU;

    t56 = (x3677>>(x3678*(x3679^x3680)));

    if (t56 != 282894129349729368LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3741 = 37045117LLU;
	int32_t x3742 = INT32_MIN;
	volatile int16_t x3744 = INT16_MAX;

    t57 = (x3741>>(x3742*(x3743^x3744)));

    if (t57 != 37045117LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x3789 = UINT64_MAX;
	int32_t x3790 = INT32_MIN;
	int32_t x3791 = INT32_MAX;
	static uint32_t x3792 = 23U;
	static uint64_t t58 = UINT64_MAX;

    t58 = (x3789>>(x3790*(x3791^x3792)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3809 = INT8_MAX;
	int8_t x3810 = 0;
	static volatile int32_t x3811 = -1;
	uint8_t x3812 = 57U;
	int32_t t59 = -2972;

    t59 = (x3809>>(x3810*(x3811^x3812)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x3913 = 75475888294144151LL;
	uint32_t x3914 = UINT32_MAX;
	static int16_t x3915 = INT16_MIN;
	int16_t x3916 = INT16_MIN;
	static int64_t t60 = 1229857895582745122LL;

    t60 = (x3913>>(x3914*(x3915^x3916)));

    if (t60 != 75475888294144151LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x3933 = 2819;
	static int32_t x3934 = -1;
	int8_t x3935 = INT8_MIN;
	int16_t x3936 = 104;

    t61 = (x3933>>(x3934*(x3935^x3936)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x3969 = UINT64_MAX;
	static volatile int64_t x3971 = -270636135207LL;
	int8_t x3972 = INT8_MAX;

    t62 = (x3969>>(x3970*(x3971^x3972)));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x4001 = 846571U;
	static volatile int64_t x4002 = INT64_MAX;
	static int16_t x4003 = 3;
	uint16_t x4004 = 3U;
	static volatile uint32_t t63 = 5531U;

    t63 = (x4001>>(x4002*(x4003^x4004)));

    if (t63 != 846571U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x4077 = 6U;
	int16_t x4078 = INT16_MAX;
	volatile int32_t x4079 = -1;
	volatile int16_t x4080 = -1;

    t64 = (x4077>>(x4078*(x4079^x4080)));

    if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x4239 = INT64_MAX;
	static volatile uint8_t x4240 = 54U;
	static uint32_t t65 = UINT32_MAX;

    t65 = (x4237>>(x4238*(x4239^x4240)));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x4341 = INT16_MAX;
	uint8_t x4342 = 0U;
	int32_t t66 = -74602;

    t66 = (x4341>>(x4342*(x4343^x4344)));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x4357 = 34U;
	static int16_t x4358 = -1;
	int16_t x4359 = -1;
	static int8_t x4360 = -1;
	static volatile int32_t t67 = 434;

    t67 = (x4357>>(x4358*(x4359^x4360)));

    if (t67 != 34) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x4394 = 0LL;
	uint16_t x4395 = UINT16_MAX;

    t68 = (x4393>>(x4394*(x4395^x4396)));

    if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x4497 = 498748876U;
	int32_t x4498 = INT32_MIN;
	int64_t x4499 = -1LL;
	int8_t x4500 = -1;
	static uint32_t t69 = 11775620U;

    t69 = (x4497>>(x4498*(x4499^x4500)));

    if (t69 != 498748876U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x4534 = 0;
	int16_t x4535 = 2392;
	static int16_t x4536 = INT16_MIN;
	int32_t t70 = -39581;

    t70 = (x4533>>(x4534*(x4535^x4536)));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x4537 = 776901289;
	static uint32_t x4539 = 909322U;
	volatile int32_t x4540 = INT32_MAX;
	volatile int32_t t71 = -384707918;

    t71 = (x4537>>(x4538*(x4539^x4540)));

    if (t71 != 776901289) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x4579 = INT64_MAX;
	static int16_t x4580 = -1;
	volatile int32_t t72 = -1;

    t72 = (x4577>>(x4578*(x4579^x4580)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x4581 = 3;
	uint64_t x4582 = UINT64_MAX;
	static int32_t x4583 = -1;
	uint64_t x4584 = UINT64_MAX;
	static int32_t t73 = 8182;

    t73 = (x4581>>(x4582*(x4583^x4584)));

    if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x4835 = -1;

    t74 = (x4833>>(x4834*(x4835^x4836)));

    if (t74 != 44921007174589374LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x4837 = 4570341549037370252LL;
	int8_t x4838 = 1;
	int32_t x4839 = -1;
	int8_t x4840 = -1;
	volatile int64_t t75 = -30LL;

    t75 = (x4837>>(x4838*(x4839^x4840)));

    if (t75 != 4570341549037370252LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4878 = 0U;
	volatile uint64_t x4879 = UINT64_MAX;
	int32_t x4880 = 21;
	int64_t t76 = 4594147619003896748LL;

    t76 = (x4877>>(x4878*(x4879^x4880)));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x5053 = INT64_MAX;
	int8_t x5054 = 2;
	uint16_t x5055 = UINT16_MAX;
	uint16_t x5056 = UINT16_MAX;
	volatile int64_t t77 = INT64_MAX;

    t77 = (x5053>>(x5054*(x5055^x5056)));

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x5249 = 88566LLU;
	uint32_t x5250 = 234056U;
	uint64_t x5251 = UINT64_MAX;
	static uint64_t x5252 = UINT64_MAX;
	static uint64_t t78 = 90406LLU;

    t78 = (x5249>>(x5250*(x5251^x5252)));

    if (t78 != 88566LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5269 = 4527464538018481383LLU;
	int32_t x5270 = INT32_MIN;
	uint32_t x5272 = 1U;

    t79 = (x5269>>(x5270*(x5271^x5272)));

    if (t79 != 4527464538018481383LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x5329 = UINT32_MAX;
	static uint8_t x5330 = 0U;
	int16_t x5331 = INT16_MIN;
	int8_t x5332 = 7;
	static volatile uint32_t t80 = UINT32_MAX;

    t80 = (x5329>>(x5330*(x5331^x5332)));

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x5337 = 3;
	uint16_t x5338 = 688U;
	volatile int8_t x5339 = INT8_MIN;
	static volatile int8_t x5340 = INT8_MIN;

    t81 = (x5337>>(x5338*(x5339^x5340)));

    if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x5353 = UINT64_MAX;
	uint64_t x5355 = UINT64_MAX;

    t82 = (x5353>>(x5354*(x5355^x5356)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x5397 = 25;
	volatile uint8_t x5398 = 0U;
	uint64_t x5400 = UINT64_MAX;
	int32_t t83 = -92;

    t83 = (x5397>>(x5398*(x5399^x5400)));

    if (t83 != 25) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x5634 = 12806281688745LLU;
	int32_t x5635 = -1;
	int64_t x5636 = -1LL;
	uint32_t t84 = 115055U;

    t84 = (x5633>>(x5634*(x5635^x5636)));

    if (t84 != 3292463U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x5773 = 704;
	static volatile uint8_t x5774 = 1U;
	int64_t x5776 = -1LL;

    t85 = (x5773>>(x5774*(x5775^x5776)));

    if (t85 != 704) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x5817 = INT64_MAX;
	volatile int32_t x5818 = 0;
	volatile uint8_t x5819 = 44U;
	uint64_t x5820 = 257822257920761LLU;
	static volatile int64_t t86 = INT64_MAX;

    t86 = (x5817>>(x5818*(x5819^x5820)));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x5838 = -1;
	volatile uint16_t x5839 = 1U;
	volatile int32_t x5840 = -31;
	volatile int64_t t87 = 3578LL;

    t87 = (x5837>>(x5838*(x5839^x5840)));

    if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x5921 = 29523163LL;
	int16_t x5922 = 50;
	volatile int32_t x5923 = -1;
	volatile int64_t t88 = 3359918LL;

    t88 = (x5921>>(x5922*(x5923^x5924)));

    if (t88 != 29523163LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x6089 = UINT16_MAX;
	int8_t x6090 = 0;
	int16_t x6091 = INT16_MIN;
	uint64_t x6092 = 613086987LLU;

    t89 = (x6089>>(x6090*(x6091^x6092)));

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x6137 = 15774;
	uint64_t x6138 = 79LLU;
	int32_t x6139 = -1;
	uint32_t x6140 = UINT32_MAX;
	int32_t t90 = -686;

    t90 = (x6137>>(x6138*(x6139^x6140)));

    if (t90 != 15774) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x6181 = 957824429LL;
	uint16_t x6182 = 5U;
	int16_t x6183 = -1;
	volatile int32_t x6184 = -1;
	int64_t t91 = 8992LL;

    t91 = (x6181>>(x6182*(x6183^x6184)));

    if (t91 != 957824429LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x6185 = 21057450415LLU;
	int64_t x6186 = -217917LL;
	int8_t x6188 = -1;
	volatile uint64_t t92 = 67955241308163LLU;

    t92 = (x6185>>(x6186*(x6187^x6188)));

    if (t92 != 21057450415LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x6237 = 1;
	int16_t x6238 = -1;
	uint16_t x6239 = 1U;
	int8_t x6240 = -1;
	volatile int32_t t93 = -10856;

    t93 = (x6237>>(x6238*(x6239^x6240)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x6245 = INT16_MAX;
	uint16_t x6246 = 0U;
	int8_t x6247 = -1;
	int32_t t94 = 36793917;

    t94 = (x6245>>(x6246*(x6247^x6248)));

    if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x6349 = 13417767960071887LL;
	int16_t x6352 = -1;
	volatile int64_t t95 = -595LL;

    t95 = (x6349>>(x6350*(x6351^x6352)));

    if (t95 != 13417767960071887LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x6430 = 0;
	static volatile int16_t x6431 = -1;
	uint16_t x6432 = UINT16_MAX;
	uint32_t t96 = 44U;

    t96 = (x6429>>(x6430*(x6431^x6432)));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x6445 = 281539U;
	static int16_t x6446 = -1;
	int32_t x6447 = -1;
	volatile int8_t x6448 = -1;
	uint32_t t97 = 523530118U;

    t97 = (x6445>>(x6446*(x6447^x6448)));

    if (t97 != 281539U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x6497 = 274045723;
	uint8_t x6498 = 0U;
	static uint16_t x6499 = UINT16_MAX;
	volatile int8_t x6500 = INT8_MIN;
	volatile int32_t t98 = 14534;

    t98 = (x6497>>(x6498*(x6499^x6500)));

    if (t98 != 274045723) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x6657 = UINT32_MAX;
	int8_t x6658 = 0;
	int16_t x6659 = 3;
	volatile int64_t x6660 = -1LL;
	uint32_t t99 = UINT32_MAX;

    t99 = (x6657>>(x6658*(x6659^x6660)));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x6821 = INT8_MAX;
	static volatile int64_t x6823 = INT64_MIN;
	volatile int64_t x6824 = INT64_MIN;
	volatile int32_t t100 = 0;

    t100 = (x6821>>(x6822*(x6823^x6824)));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x6829 = 2U;
	int16_t x6830 = 1;
	int8_t x6831 = INT8_MIN;
	static int8_t x6832 = INT8_MIN;
	int32_t t101 = 0;

    t101 = (x6829>>(x6830*(x6831^x6832)));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x6833 = 2336121237LL;
	int16_t x6834 = INT16_MIN;
	volatile int32_t x6835 = -1;
	uint32_t x6836 = UINT32_MAX;
	int64_t t102 = 62396195509LL;

    t102 = (x6833>>(x6834*(x6835^x6836)));

    if (t102 != 2336121237LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x6841 = 2;
	static int64_t x6843 = 1334576003972954LL;
	uint16_t x6844 = UINT16_MAX;
	int32_t t103 = 0;

    t103 = (x6841>>(x6842*(x6843^x6844)));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x6873 = INT16_MAX;
	volatile int8_t x6874 = 0;
	static int64_t x6876 = INT64_MAX;
	volatile int32_t t104 = 0;

    t104 = (x6873>>(x6874*(x6875^x6876)));

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x6913 = 1;
	uint32_t x6914 = 1580461U;
	int8_t x6916 = INT8_MAX;
	volatile int32_t t105 = 0;

    t105 = (x6913>>(x6914*(x6915^x6916)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x6993 = 58;
	volatile int8_t x6994 = 0;
	volatile int64_t x6995 = INT64_MIN;
	uint32_t x6996 = 11U;

    t106 = (x6993>>(x6994*(x6995^x6996)));

    if (t106 != 58) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x7001 = UINT64_MAX;
	uint64_t x7002 = UINT64_MAX;
	volatile int64_t x7003 = INT64_MAX;
	int64_t x7004 = INT64_MIN;

    t107 = (x7001>>(x7002*(x7003^x7004)));

    if (t107 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x7105 = UINT64_MAX;
	int8_t x7108 = -1;
	uint64_t t108 = UINT64_MAX;

    t108 = (x7105>>(x7106*(x7107^x7108)));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x7141 = 1981692944810477969LLU;
	int8_t x7142 = -1;
	int64_t x7143 = INT64_MIN;
	static int64_t x7144 = INT64_MIN;

    t109 = (x7141>>(x7142*(x7143^x7144)));

    if (t109 != 1981692944810477969LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x7178 = 0U;
	volatile int32_t x7179 = INT32_MIN;
	uint32_t x7180 = UINT32_MAX;
	int64_t t110 = INT64_MAX;

    t110 = (x7177>>(x7178*(x7179^x7180)));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x7189 = INT64_MAX;
	uint8_t x7190 = 0U;
	static int8_t x7192 = INT8_MIN;
	int64_t t111 = INT64_MAX;

    t111 = (x7189>>(x7190*(x7191^x7192)));

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x7198 = INT8_MAX;
	uint64_t x7199 = UINT64_MAX;

    t112 = (x7197>>(x7198*(x7199^x7200)));

    if (t112 != 560U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x7350 = INT32_MIN;
	int32_t x7352 = INT32_MAX;
	int32_t t113 = -71758;

    t113 = (x7349>>(x7350*(x7351^x7352)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x7366 = INT32_MIN;
	static int8_t x7367 = 0;
	int8_t x7368 = 0;
	uint32_t t114 = 161695285U;

    t114 = (x7365>>(x7366*(x7367^x7368)));

    if (t114 != 215U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x7453 = 1228833521U;
	volatile int64_t x7454 = -1LL;
	int8_t x7455 = -1;
	int16_t x7456 = -1;
	uint32_t t115 = 746U;

    t115 = (x7453>>(x7454*(x7455^x7456)));

    if (t115 != 1228833521U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x7677 = 26327U;
	uint8_t x7678 = 45U;
	static int8_t x7679 = INT8_MIN;
	volatile int8_t x7680 = INT8_MIN;
	volatile int32_t t116 = 51;

    t116 = (x7677>>(x7678*(x7679^x7680)));

    if (t116 != 26327) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x7769 = 0;
	volatile int64_t x7771 = -2LL;
	static uint64_t x7772 = 212483841681379120LLU;
	int32_t t117 = 4766911;

    t117 = (x7769>>(x7770*(x7771^x7772)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x7802 = -1;
	volatile int16_t x7803 = -1;
	volatile int32_t x7804 = -1;
	static int32_t t118 = -1064698;

    t118 = (x7801>>(x7802*(x7803^x7804)));

    if (t118 != 62) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x7885 = 22U;
	int8_t x7886 = -12;
	uint64_t x7887 = UINT64_MAX;
	static int8_t x7888 = -1;
	int32_t t119 = 0;

    t119 = (x7885>>(x7886*(x7887^x7888)));

    if (t119 != 22) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x8149 = UINT8_MAX;
	volatile int64_t x8150 = -251976972947LL;
	int64_t x8152 = -1LL;
	volatile int32_t t120 = 693814084;

    t120 = (x8149>>(x8150*(x8151^x8152)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x8329 = 634756578U;
	int16_t x8330 = -2936;
	uint32_t x8331 = UINT32_MAX;
	int32_t x8332 = -1;
	uint32_t t121 = 33U;

    t121 = (x8329>>(x8330*(x8331^x8332)));

    if (t121 != 634756578U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x8337 = UINT8_MAX;
	int8_t x8338 = -1;
	uint8_t x8339 = 3U;
	int8_t x8340 = -1;
	int32_t t122 = 13078312;

    t122 = (x8337>>(x8338*(x8339^x8340)));

    if (t122 != 15) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x8413 = 841410976768867LLU;
	uint8_t x8414 = UINT8_MAX;
	int32_t x8415 = INT32_MIN;
	volatile int32_t x8416 = INT32_MIN;

    t123 = (x8413>>(x8414*(x8415^x8416)));

    if (t123 != 841410976768867LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x8554 = 0;
	int32_t x8556 = 3396657;
	uint64_t t124 = 433LLU;

    t124 = (x8553>>(x8554*(x8555^x8556)));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x8573 = UINT64_MAX;
	static volatile int8_t x8575 = 0;
	int8_t x8576 = 0;

    t125 = (x8573>>(x8574*(x8575^x8576)));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x8785 = 1U;
	volatile int8_t x8786 = -19;
	int8_t x8787 = -1;
	volatile uint32_t t126 = 356438U;

    t126 = (x8785>>(x8786*(x8787^x8788)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x8937 = INT16_MAX;
	uint8_t x8938 = 0U;
	volatile uint32_t x8939 = UINT32_MAX;
	int32_t x8940 = -1;
	volatile int32_t t127 = 16430022;

    t127 = (x8937>>(x8938*(x8939^x8940)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x8989 = 522;
	int8_t x8990 = 0;
	volatile uint8_t x8991 = 3U;
	volatile int64_t x8992 = -1LL;

    t128 = (x8989>>(x8990*(x8991^x8992)));

    if (t128 != 522) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x9069 = 0;
	static uint32_t x9070 = UINT32_MAX;
	uint32_t x9071 = UINT32_MAX;
	uint16_t x9072 = 5U;

    t129 = (x9069>>(x9070*(x9071^x9072)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x9101 = UINT16_MAX;
	int32_t x9102 = -18;
	volatile int16_t x9103 = -1;
	int8_t x9104 = -1;

    t130 = (x9101>>(x9102*(x9103^x9104)));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x9266 = -1;
	uint32_t x9267 = UINT32_MAX;
	static int8_t x9268 = 0;
	static int32_t t131 = 16;

    t131 = (x9265>>(x9266*(x9267^x9268)));

    if (t131 != 3790) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x9273 = 2;
	uint32_t x9274 = 0U;
	static int32_t x9275 = INT32_MIN;
	volatile int64_t x9276 = -1LL;
	int32_t t132 = 1;

    t132 = (x9273>>(x9274*(x9275^x9276)));

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x9285 = 166U;
	uint8_t x9286 = 0U;
	uint64_t x9287 = 5631LLU;

    t133 = (x9285>>(x9286*(x9287^x9288)));

    if (t133 != 166) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x9413 = 13651U;
	int64_t x9414 = -1LL;
	int16_t x9416 = INT16_MAX;

    t134 = (x9413>>(x9414*(x9415^x9416)));

    if (t134 != 13651U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x9422 = 306127796774LLU;
	volatile uint64_t x9423 = UINT64_MAX;
	volatile int64_t x9424 = -1LL;
	volatile int32_t t135 = -437975;

    t135 = (x9421>>(x9422*(x9423^x9424)));

    if (t135 != 28975) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x9553 = INT64_MAX;
	static uint32_t x9554 = UINT32_MAX;
	static int8_t x9555 = 0;
	volatile int32_t x9556 = -3;
	volatile int64_t t136 = -366642LL;

    t136 = (x9553>>(x9554*(x9555^x9556)));

    if (t136 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x9689 = 21;
	int32_t x9690 = INT32_MIN;
	static uint32_t x9691 = 11397U;
	uint16_t x9692 = 37U;

    t137 = (x9689>>(x9690*(x9691^x9692)));

    if (t137 != 21) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x9750 = 0U;
	volatile uint32_t x9751 = UINT32_MAX;
	uint32_t t138 = 362306U;

    t138 = (x9749>>(x9750*(x9751^x9752)));

    if (t138 != 743914U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x9821 = INT32_MAX;
	uint32_t x9822 = UINT32_MAX;
	int32_t x9823 = -1;
	uint32_t x9824 = UINT32_MAX;
	int32_t t139 = INT32_MAX;

    t139 = (x9821>>(x9822*(x9823^x9824)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x9829 = 15U;
	int32_t x9830 = -1;
	int8_t x9831 = -1;
	uint8_t x9832 = 14U;

    t140 = (x9829>>(x9830*(x9831^x9832)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x9838 = -794390904;
	static int32_t x9839 = INT32_MIN;
	int32_t x9840 = INT32_MIN;
	int32_t t141 = 5;

    t141 = (x9837>>(x9838*(x9839^x9840)));

    if (t141 != 5) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x9941 = 1U;
	int32_t x9943 = -3;
	static uint64_t x9944 = UINT64_MAX;
	volatile int32_t t142 = 6665;

    t142 = (x9941>>(x9942*(x9943^x9944)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x9965 = 11U;
	int64_t x9966 = INT64_MIN;
	int32_t t143 = 1770;

    t143 = (x9965>>(x9966*(x9967^x9968)));

    if (t143 != 11) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x10130 = UINT32_MAX;
	int64_t x10131 = -1LL;
	int32_t x10132 = -1;
	volatile int32_t t144 = 768981570;

    t144 = (x10129>>(x10130*(x10131^x10132)));

    if (t144 != 5) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x10290 = INT64_MIN;
	int8_t x10291 = INT8_MIN;
	volatile uint64_t x10292 = 600888634018035730LLU;
	volatile int32_t t145 = 0;

    t145 = (x10289>>(x10290*(x10291^x10292)));

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x10313 = 104U;
	int8_t x10314 = 0;
	volatile uint8_t x10315 = 0U;
	int64_t x10316 = INT64_MIN;

    t146 = (x10313>>(x10314*(x10315^x10316)));

    if (t146 != 104U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x10373 = INT64_MAX;
	volatile int16_t x10375 = INT16_MAX;
	static volatile int64_t x10376 = 1112LL;
	volatile int64_t t147 = INT64_MAX;

    t147 = (x10373>>(x10374*(x10375^x10376)));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x10400 = INT8_MAX;
	volatile int32_t t148 = 182757;

    t148 = (x10397>>(x10398*(x10399^x10400)));

    if (t148 != 16501) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x10429 = UINT64_MAX;
	int64_t x10431 = -1LL;
	int16_t x10432 = -1;
	uint64_t t149 = UINT64_MAX;

    t149 = (x10429>>(x10430*(x10431^x10432)));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x10445 = INT32_MAX;
	int8_t x10447 = INT8_MAX;
	static volatile int8_t x10448 = 14;
	volatile int32_t t150 = INT32_MAX;

    t150 = (x10445>>(x10446*(x10447^x10448)));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x10453 = 990749268307159540LLU;
	int64_t x10455 = INT64_MAX;
	static int16_t x10456 = -134;
	static uint64_t t151 = 38586728504LLU;

    t151 = (x10453>>(x10454*(x10455^x10456)));

    if (t151 != 990749268307159540LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x10461 = UINT32_MAX;
	static uint64_t x10462 = UINT64_MAX;
	int32_t x10463 = -1;
	uint16_t x10464 = 0U;
	volatile uint32_t t152 = 31U;

    t152 = (x10461>>(x10462*(x10463^x10464)));

    if (t152 != 2147483647U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x10542 = INT64_MIN;
	int32_t x10543 = INT32_MAX;
	int32_t x10544 = INT32_MAX;

    t153 = (x10541>>(x10542*(x10543^x10544)));

    if (t153 != 20) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x10601 = UINT64_MAX;
	int64_t x10602 = INT64_MIN;
	uint8_t x10604 = UINT8_MAX;
	volatile uint64_t t154 = UINT64_MAX;

    t154 = (x10601>>(x10602*(x10603^x10604)));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x10609 = UINT16_MAX;
	uint32_t x10610 = UINT32_MAX;
	int8_t x10611 = 0;
	int32_t x10612 = -1;
	int32_t t155 = -857357564;

    t155 = (x10609>>(x10610*(x10611^x10612)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x10654 = INT64_MAX;
	int32_t x10656 = INT32_MIN;

    t156 = (x10653>>(x10654*(x10655^x10656)));

    if (t156 != 7) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x10657 = INT8_MAX;
	int64_t x10658 = INT64_MIN;
	uint32_t x10659 = 99578603U;
	uint64_t x10660 = UINT64_MAX;
	static int32_t t157 = 300593;

    t157 = (x10657>>(x10658*(x10659^x10660)));

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x10891 = -1;
	int32_t x10892 = 713809235;
	volatile int32_t t158 = -77117;

    t158 = (x10889>>(x10890*(x10891^x10892)));

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x10938 = -1;
	uint16_t x10940 = 29U;
	int64_t t159 = -35745LL;

    t159 = (x10937>>(x10938*(x10939^x10940)));

    if (t159 != 8589934591LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x11041 = 10328U;
	int16_t x11044 = -264;
	int32_t t160 = -123;

    t160 = (x11041>>(x11042*(x11043^x11044)));

    if (t160 != 10328) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x11185 = UINT16_MAX;
	int16_t x11186 = INT16_MIN;
	int32_t x11187 = INT32_MAX;
	int32_t x11188 = INT32_MAX;
	int32_t t161 = -7743;

    t161 = (x11185>>(x11186*(x11187^x11188)));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x11382 = 0U;
	int64_t x11383 = -2930761263LL;
	volatile int32_t x11384 = -1;
	int32_t t162 = -1970613;

    t162 = (x11381>>(x11382*(x11383^x11384)));

    if (t162 != 62) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x11525 = 3941U;
	int64_t x11527 = 607681494374LL;
	volatile int32_t t163 = -3705;

    t163 = (x11525>>(x11526*(x11527^x11528)));

    if (t163 != 3941) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x11589 = UINT32_MAX;
	int8_t x11590 = INT8_MAX;
	volatile uint8_t x11591 = UINT8_MAX;
	uint8_t x11592 = UINT8_MAX;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = (x11589>>(x11590*(x11591^x11592)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x11607 = 26;
	volatile uint32_t x11608 = 1033576U;
	volatile uint32_t t165 = 44743513U;

    t165 = (x11605>>(x11606*(x11607^x11608)));

    if (t165 != 313U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x11666 = 0U;
	uint8_t x11667 = UINT8_MAX;
	static volatile int32_t t166 = -454490396;

    t166 = (x11665>>(x11666*(x11667^x11668)));

    if (t166 != 8) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x11689 = INT32_MAX;
	uint64_t x11690 = 2847091LLU;
	int8_t x11691 = -1;
	uint64_t x11692 = UINT64_MAX;
	int32_t t167 = INT32_MAX;

    t167 = (x11689>>(x11690*(x11691^x11692)));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x11727 = -1;
	uint16_t x11728 = UINT16_MAX;
	int64_t t168 = -40086058971539478LL;

    t168 = (x11725>>(x11726*(x11727^x11728)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x11750 = 4;
	int32_t x11751 = INT32_MIN;
	int32_t x11752 = INT32_MIN;
	static int32_t t169 = 40597642;

    t169 = (x11749>>(x11750*(x11751^x11752)));

    if (t169 != 20) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x11969 = 73U;
	int64_t x11971 = INT64_MIN;
	int32_t t170 = -5;

    t170 = (x11969>>(x11970*(x11971^x11972)));

    if (t170 != 73) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x12113 = 2U;
	volatile int64_t x12115 = INT64_MIN;
	int64_t x12116 = INT64_MIN;
	static int32_t t171 = 805082954;

    t171 = (x12113>>(x12114*(x12115^x12116)));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x12122 = 0;
	int8_t x12123 = INT8_MAX;

    t172 = (x12121>>(x12122*(x12123^x12124)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x12145 = 27U;
	uint8_t x12146 = 2U;
	uint8_t x12147 = 0U;
	uint32_t x12148 = 6U;
	volatile int32_t t173 = 411390;

    t173 = (x12145>>(x12146*(x12147^x12148)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x12169 = 1;
	uint32_t x12170 = UINT32_MAX;
	uint32_t x12171 = UINT32_MAX;
	volatile uint8_t x12172 = 0U;
	volatile int32_t t174 = -48940123;

    t174 = (x12169>>(x12170*(x12171^x12172)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x12173 = INT8_MAX;
	static uint64_t x12174 = UINT64_MAX;
	int32_t x12175 = INT32_MAX;
	int32_t x12176 = INT32_MIN;
	volatile int32_t t175 = 32782778;

    t175 = (x12173>>(x12174*(x12175^x12176)));

    if (t175 != 63) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x12194 = INT8_MIN;
	static int8_t x12195 = INT8_MIN;
	volatile int8_t x12196 = INT8_MIN;

    t176 = (x12193>>(x12194*(x12195^x12196)));

    if (t176 != 27204LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x12229 = 1155;
	uint8_t x12230 = 0U;
	static uint8_t x12231 = 11U;
	int16_t x12232 = 1;
	int32_t t177 = 29415;

    t177 = (x12229>>(x12230*(x12231^x12232)));

    if (t177 != 1155) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x12269 = UINT16_MAX;
	static volatile int16_t x12270 = -1;
	int64_t x12271 = INT64_MIN;
	static int64_t x12272 = INT64_MAX;
	volatile int32_t t178 = -17702820;

    t178 = (x12269>>(x12270*(x12271^x12272)));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x12337 = 10U;
	static volatile int64_t x12338 = 0LL;
	int16_t x12339 = -1;
	static int8_t x12340 = -1;
	volatile int32_t t179 = -1923;

    t179 = (x12337>>(x12338*(x12339^x12340)));

    if (t179 != 10) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x12354 = 4U;
	int32_t x12355 = -1;
	uint64_t t180 = 10247245816LLU;

    t180 = (x12353>>(x12354*(x12355^x12356)));

    if (t180 != 32441841LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x12442 = 0;
	volatile int32_t x12443 = -903;
	int32_t x12444 = -100564;
	uint64_t t181 = UINT64_MAX;

    t181 = (x12441>>(x12442*(x12443^x12444)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x12503 = INT32_MAX;

    t182 = (x12501>>(x12502*(x12503^x12504)));

    if (t182 != 30) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x12557 = INT32_MAX;
	int32_t x12558 = INT32_MIN;
	static int32_t x12559 = INT32_MAX;
	static int32_t x12560 = INT32_MAX;
	int32_t t183 = INT32_MAX;

    t183 = (x12557>>(x12558*(x12559^x12560)));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x12594 = INT32_MIN;
	int16_t x12595 = INT16_MIN;
	volatile uint32_t x12596 = 2U;
	static volatile int32_t t184 = 12;

    t184 = (x12593>>(x12594*(x12595^x12596)));

    if (t184 != 32) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x12825 = 3;
	static int16_t x12826 = 0;
	uint16_t x12827 = 15761U;
	int8_t x12828 = INT8_MIN;
	int32_t t185 = -77436974;

    t185 = (x12825>>(x12826*(x12827^x12828)));

    if (t185 != 3) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x12985 = 50LLU;
	int32_t x12986 = -1;
	int8_t x12987 = INT8_MIN;
	uint64_t t186 = 310LLU;

    t186 = (x12985>>(x12986*(x12987^x12988)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x13253 = 330905526LL;
	int64_t x13254 = INT64_MAX;
	int32_t x13255 = INT32_MAX;
	int32_t x13256 = INT32_MAX;
	volatile int64_t t187 = 915381135375LL;

    t187 = (x13253>>(x13254*(x13255^x13256)));

    if (t187 != 330905526LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x13309 = UINT8_MAX;
	static volatile uint16_t x13311 = 30U;
	int64_t x13312 = -1LL;
	int32_t t188 = -29665;

    t188 = (x13309>>(x13310*(x13311^x13312)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x13437 = INT32_MAX;
	int8_t x13439 = -1;
	uint32_t x13440 = UINT32_MAX;
	int32_t t189 = INT32_MAX;

    t189 = (x13437>>(x13438*(x13439^x13440)));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x13486 = 0;
	int64_t x13487 = INT64_MIN;
	static int8_t x13488 = INT8_MAX;
	volatile int64_t t190 = INT64_MAX;

    t190 = (x13485>>(x13486*(x13487^x13488)));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x13561 = 764920161787545LLU;
	uint8_t x13562 = 0U;
	int8_t x13563 = -1;
	uint16_t x13564 = 1169U;
	static volatile uint64_t t191 = 5940LLU;

    t191 = (x13561>>(x13562*(x13563^x13564)));

    if (t191 != 764920161787545LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x13585 = 7;
	uint16_t x13586 = UINT16_MAX;
	int32_t x13587 = -1;
	uint32_t x13588 = UINT32_MAX;
	int32_t t192 = 1062462041;

    t192 = (x13585>>(x13586*(x13587^x13588)));

    if (t192 != 7) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x13601 = UINT16_MAX;
	int8_t x13602 = -1;
	uint8_t x13603 = UINT8_MAX;
	int32_t t193 = 782190497;

    t193 = (x13601>>(x13602*(x13603^x13604)));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x13617 = INT32_MAX;
	uint16_t x13618 = 36U;
	volatile int8_t x13620 = INT8_MIN;
	int32_t t194 = INT32_MAX;

    t194 = (x13617>>(x13618*(x13619^x13620)));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x13669 = 2022U;
	uint8_t x13670 = 0U;
	static int64_t x13672 = INT64_MIN;
	int32_t t195 = 0;

    t195 = (x13669>>(x13670*(x13671^x13672)));

    if (t195 != 2022) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x13841 = 94161;
	int64_t x13842 = INT64_MIN;
	uint16_t x13843 = 7266U;
	volatile uint64_t x13844 = 25501913595034LLU;
	volatile int32_t t196 = 28837365;

    t196 = (x13841>>(x13842*(x13843^x13844)));

    if (t196 != 94161) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x13945 = 19;
	static volatile int64_t x13946 = 12236621LL;
	int16_t x13948 = INT16_MIN;

    t197 = (x13945>>(x13946*(x13947^x13948)));

    if (t197 != 19) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x13985 = 30524077;
	uint32_t x13986 = UINT32_MAX;
	uint64_t x13987 = UINT64_MAX;
	int32_t x13988 = -1;
	volatile int32_t t198 = -854;

    t198 = (x13985>>(x13986*(x13987^x13988)));

    if (t198 != 30524077) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x13997 = 126027U;
	volatile int16_t x13998 = -327;
	static int32_t x13999 = -1;
	uint32_t t199 = 13984U;

    t199 = (x13997>>(x13998*(x13999^x14000)));

    if (t199 != 126027U) { NG(); } else { ; }
	
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
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

