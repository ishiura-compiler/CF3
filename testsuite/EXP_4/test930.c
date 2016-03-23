
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

volatile uint32_t x54 = 0U;
uint32_t t0 = UINT32_MAX;
static volatile uint8_t x158 = 0U;
uint16_t x194 = 79U;
uint8_t x196 = 53U;
volatile int32_t t2 = -636117;
int64_t x624 = 123239813367LL;
static int64_t t4 = -350410553943LL;
uint32_t x652 = UINT32_MAX;
uint8_t x990 = 5U;
volatile uint8_t x1100 = UINT8_MAX;
static uint8_t x1558 = 0U;
int8_t x1664 = INT8_MIN;
int64_t x1842 = 25688LL;
static volatile int16_t x1843 = 24;
volatile int8_t x1909 = 0;
int64_t x1911 = 1LL;
volatile int32_t t17 = -21;
int16_t x2055 = INT16_MAX;
static int8_t x2056 = INT8_MAX;
int64_t x2249 = INT64_MAX;
uint64_t t21 = 2868595532205743LLU;
int32_t t22 = -2860;
int32_t x2658 = 1;
static volatile uint16_t x2660 = 3U;
volatile uint64_t t23 = 351LLU;
uint8_t x3013 = 44U;
volatile uint32_t x3016 = 23U;
int32_t t25 = 19304;
uint16_t x3074 = 3209U;
static int16_t x3075 = 13;
int32_t t26 = 2;
uint16_t x3223 = UINT16_MAX;
int8_t x3258 = 2;
static uint64_t t29 = UINT64_MAX;
static volatile int8_t x3494 = 1;
static volatile int64_t x3548 = INT64_MAX;
uint32_t t31 = UINT32_MAX;
volatile uint64_t t34 = 26543286574LLU;
int8_t x4709 = 21;
static int8_t x4710 = INT8_MAX;
int32_t x4879 = INT32_MIN;
int32_t t38 = 1;
uint32_t t39 = 4U;
uint16_t x5145 = UINT16_MAX;
volatile int32_t t41 = -2191;
static uint64_t x5446 = 84568LLU;
uint8_t x5586 = 1U;
volatile int32_t t43 = 540490;


void f0(void) {
    	static volatile uint32_t x53 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	int8_t x56 = -1;

    t0 = (x53<<(x54>>(x55%x56)));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x157 = INT8_MAX;
	volatile int8_t x159 = INT8_MAX;
	static int8_t x160 = -30;
	volatile int32_t t1 = 108975;

    t1 = (x157<<(x158>>(x159%x160)));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x193 = 55;
	uint8_t x195 = 60U;

    t2 = (x193<<(x194>>(x195%x196)));

    if (t2 != 55) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x461 = 3495;
	static uint32_t x462 = 1U;
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = 260;
	volatile int32_t t3 = 5;

    t3 = (x461<<(x462>>(x463%x464)));

    if (t3 != 3495) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x621 = 6806723927819343LL;
	static volatile uint8_t x622 = 0U;
	static volatile int16_t x623 = 5;

    t4 = (x621<<(x622>>(x623%x624)));

    if (t4 != 6806723927819343LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x649 = 11601510373974LLU;
	uint32_t x650 = UINT32_MAX;
	static uint32_t x651 = 30U;
	volatile uint64_t t5 = 2843163707915LLU;

    t5 = (x649<<(x650>>(x651%x652)));

    if (t5 != 92812082991792LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x901 = 1572U;
	uint8_t x902 = UINT8_MAX;
	volatile int8_t x903 = INT8_MAX;
	int16_t x904 = 10;
	int32_t t6 = -33441165;

    t6 = (x901<<(x902>>(x903%x904)));

    if (t6 != 3144) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x981 = 7U;
	volatile uint8_t x982 = 13U;
	int64_t x983 = INT64_MAX;
	static uint64_t x984 = 33LLU;
	uint32_t t7 = 17468611U;

    t7 = (x981<<(x982>>(x983%x984)));

    if (t7 != 7U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x989 = UINT8_MAX;
	uint8_t x991 = 15U;
	volatile uint8_t x992 = 7U;
	int32_t t8 = 4561019;

    t8 = (x989<<(x990>>(x991%x992)));

    if (t8 != 1020) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1033 = UINT8_MAX;
	uint32_t x1034 = 1U;
	uint8_t x1035 = 7U;
	int64_t x1036 = -1LL;
	int32_t t9 = 14;

    t9 = (x1033<<(x1034>>(x1035%x1036)));

    if (t9 != 510) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x1097 = 211;
	uint32_t x1098 = 5804317U;
	int16_t x1099 = 27;
	static int32_t t10 = -6673677;

    t10 = (x1097<<(x1098>>(x1099%x1100)));

    if (t10 != 211) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1329 = INT8_MAX;
	volatile int8_t x1330 = 16;
	int16_t x1331 = -30;
	int8_t x1332 = 1;
	volatile int32_t t11 = 6;

    t11 = (x1329<<(x1330>>(x1331%x1332)));

    if (t11 != 8323072) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x1393 = 0;
	int32_t x1394 = 459499054;
	volatile int32_t x1395 = -1;
	uint32_t x1396 = 32U;
	int32_t t12 = -1;

    t12 = (x1393<<(x1394>>(x1395%x1396)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x1557 = INT64_MAX;
	static uint8_t x1559 = 0U;
	uint64_t x1560 = UINT64_MAX;
	volatile int64_t t13 = INT64_MAX;

    t13 = (x1557<<(x1558>>(x1559%x1560)));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1633 = 105LLU;
	int8_t x1634 = 16;
	uint8_t x1635 = 8U;
	volatile uint64_t x1636 = 33390379677905092LLU;
	uint64_t t14 = 117994083839LLU;

    t14 = (x1633<<(x1634>>(x1635%x1636)));

    if (t14 != 105LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1661 = 63150940283009LLU;
	int64_t x1662 = 32074852831451523LL;
	uint8_t x1663 = 59U;
	volatile uint64_t t15 = 143513845571045425LLU;

    t15 = (x1661<<(x1662>>(x1663%x1664)));

    if (t15 != 63150940283009LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1841 = 13963U;
	int16_t x1844 = INT16_MAX;
	volatile int32_t t16 = -508;

    t16 = (x1841<<(x1842>>(x1843%x1844)));

    if (t16 != 13963) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x1910 = 1LLU;
	uint8_t x1912 = UINT8_MAX;

    t17 = (x1909<<(x1910>>(x1911%x1912)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x2025 = UINT32_MAX;
	static int16_t x2026 = 12;
	static volatile int32_t x2027 = INT32_MAX;
	int32_t x2028 = 16;
	uint32_t t18 = UINT32_MAX;

    t18 = (x2025<<(x2026>>(x2027%x2028)));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x2053 = 124U;
	static uint8_t x2054 = 0U;
	uint32_t t19 = 3264U;

    t19 = (x2053<<(x2054>>(x2055%x2056)));

    if (t19 != 124U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x2250 = UINT16_MAX;
	uint16_t x2251 = UINT16_MAX;
	uint8_t x2252 = 53U;
	int64_t t20 = INT64_MAX;

    t20 = (x2249<<(x2250>>(x2251%x2252)));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x2261 = 4012515159756LLU;
	volatile int32_t x2262 = 42;
	int32_t x2263 = 11;
	int8_t x2264 = -2;

    t21 = (x2261<<(x2262>>(x2263%x2264)));

    if (t21 != 8414854192312614912LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x2573 = UINT8_MAX;
	uint16_t x2574 = 9U;
	volatile int16_t x2575 = INT16_MAX;
	int16_t x2576 = -1;

    t22 = (x2573<<(x2574>>(x2575%x2576)));

    if (t22 != 130560) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x2657 = UINT64_MAX;
	uint16_t x2659 = 8034U;

    t23 = (x2657<<(x2658>>(x2659%x2660)));

    if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2921 = 10U;
	uint16_t x2922 = 11U;
	static uint8_t x2923 = UINT8_MAX;
	volatile int8_t x2924 = 1;
	volatile int32_t t24 = -1;

    t24 = (x2921<<(x2922>>(x2923%x2924)));

    if (t24 != 20480) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x3014 = 114U;
	volatile int64_t x3015 = 12LL;

    t25 = (x3013<<(x3014>>(x3015%x3016)));

    if (t25 != 44) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x3073 = 17U;
	uint64_t x3076 = UINT64_MAX;

    t26 = (x3073<<(x3074>>(x3075%x3076)));

    if (t26 != 17) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x3221 = UINT16_MAX;
	uint64_t x3222 = 0LLU;
	static volatile int8_t x3224 = INT8_MAX;
	volatile int32_t t27 = 12;

    t27 = (x3221<<(x3222>>(x3223%x3224)));

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x3257 = 4U;
	int64_t x3259 = 389413LL;
	static int32_t x3260 = -1;
	volatile int32_t t28 = 71080;

    t28 = (x3257<<(x3258>>(x3259%x3260)));

    if (t28 != 16) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x3421 = UINT64_MAX;
	uint16_t x3422 = 1940U;
	uint16_t x3423 = 19U;
	static int32_t x3424 = 16483577;

    t29 = (x3421<<(x3422>>(x3423%x3424)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x3493 = 1U;
	uint8_t x3495 = 72U;
	int8_t x3496 = 48;
	volatile int32_t t30 = 615053457;

    t30 = (x3493<<(x3494>>(x3495%x3496)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x3545 = UINT32_MAX;
	static uint16_t x3546 = UINT16_MAX;
	int16_t x3547 = 31;

    t31 = (x3545<<(x3546>>(x3547%x3548)));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x3789 = INT16_MAX;
	uint8_t x3790 = 5U;
	volatile int8_t x3791 = 2;
	uint64_t x3792 = UINT64_MAX;
	volatile int32_t t32 = -72685;

    t32 = (x3789<<(x3790>>(x3791%x3792)));

    if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x4097 = UINT16_MAX;
	int8_t x4098 = INT8_MAX;
	uint32_t x4099 = 3U;
	static uint16_t x4100 = 44U;
	int32_t t33 = -6681947;

    t33 = (x4097<<(x4098>>(x4099%x4100)));

    if (t33 != 2147450880) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x4129 = UINT64_MAX;
	volatile uint32_t x4130 = UINT32_MAX;
	static uint16_t x4131 = 31U;
	static uint64_t x4132 = 464976061548911LLU;

    t34 = (x4129<<(x4130>>(x4131%x4132)));

    if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x4393 = 1U;
	static int8_t x4394 = 1;
	int32_t x4395 = INT32_MIN;
	int8_t x4396 = INT8_MIN;
	volatile int32_t t35 = 45456337;

    t35 = (x4393<<(x4394>>(x4395%x4396)));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x4601 = 13;
	uint32_t x4602 = 12U;
	int16_t x4603 = 1014;
	int64_t x4604 = -1LL;
	int32_t t36 = 0;

    t36 = (x4601<<(x4602>>(x4603%x4604)));

    if (t36 != 53248) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x4711 = INT32_MIN;
	uint64_t x4712 = 37LLU;
	volatile int32_t t37 = -838445632;

    t37 = (x4709<<(x4710>>(x4711%x4712)));

    if (t37 != 21) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x4877 = 0;
	uint64_t x4878 = 23LLU;
	volatile int16_t x4880 = INT16_MIN;

    t38 = (x4877<<(x4878>>(x4879%x4880)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x4893 = 37305976U;
	uint16_t x4894 = UINT16_MAX;
	volatile uint8_t x4895 = UINT8_MAX;
	int8_t x4896 = -47;

    t39 = (x4893<<(x4894>>(x4895%x4896)));

    if (t39 != 37305976U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x5146 = 22U;
	static uint8_t x5147 = 46U;
	static int8_t x5148 = -14;
	int32_t t40 = -66312234;

    t40 = (x5145<<(x5146>>(x5147%x5148)));

    if (t40 != 131070) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x5317 = 4U;
	int8_t x5318 = 1;
	uint32_t x5319 = 3314U;
	uint8_t x5320 = 1U;

    t41 = (x5317<<(x5318>>(x5319%x5320)));

    if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x5445 = INT8_MAX;
	uint32_t x5447 = 16U;
	int8_t x5448 = INT8_MIN;
	volatile int32_t t42 = -57343;

    t42 = (x5445<<(x5446>>(x5447%x5448)));

    if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x5585 = 258;
	uint16_t x5587 = UINT16_MAX;
	int64_t x5588 = -1LL;

    t43 = (x5585<<(x5586>>(x5587%x5588)));

    if (t43 != 516) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x5673 = 1304590060LLU;
	static uint16_t x5674 = 7U;
	uint16_t x5675 = 23U;
	int64_t x5676 = INT64_MIN;
	uint64_t t44 = 304310LLU;

    t44 = (x5673<<(x5674>>(x5675%x5676)));

    if (t44 != 1304590060LLU) { NG(); } else { ; }
	
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


    return 0;
}

