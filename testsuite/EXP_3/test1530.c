
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

uint8_t x258 = 10U;
static int8_t x267 = 0;
int32_t x535 = 1;
volatile int32_t x536 = 1;
int32_t x800 = -1;
int8_t x900 = 1;
volatile int32_t t6 = 7;
static int16_t x927 = INT16_MIN;
int8_t x1044 = INT8_MAX;
int32_t t10 = 1125;
int32_t t11 = INT32_MIN;
static int32_t x1156 = INT32_MIN;
static int32_t x1284 = -1;
uint64_t t13 = 261860838834LLU;
volatile int16_t x1410 = INT16_MAX;
volatile int64_t t17 = -5777974415025LL;
volatile int64_t t18 = 57057194812LL;
static int32_t x1557 = INT32_MIN;
int64_t x2027 = INT64_MAX;
static int64_t x2028 = INT64_MAX;
static volatile int8_t x2038 = INT8_MIN;
int64_t x2039 = INT64_MIN;
int32_t t28 = -1;


void f0(void) {
    	int32_t x257 = -1;
	static volatile int64_t x259 = -1LL;
	static int16_t x260 = -1;
	volatile int32_t t0 = -113078047;

    t0 = ((x257&x258)/(x259==x260));

    if (t0 != 10) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x265 = UINT32_MAX;
	int64_t x266 = INT64_MIN;
	uint8_t x268 = 0U;
	int64_t t1 = 1689426240628LL;

    t1 = ((x265&x266)/(x267==x268));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x533 = 1;
	volatile uint8_t x534 = 0U;
	int32_t t2 = 1785051;

    t2 = ((x533&x534)/(x535==x536));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x609 = -32;
	int32_t x610 = INT32_MIN;
	uint64_t x611 = UINT64_MAX;
	volatile uint64_t x612 = UINT64_MAX;
	volatile int32_t t3 = INT32_MIN;

    t3 = ((x609&x610)/(x611==x612));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x741 = -57;
	int64_t x742 = -15652LL;
	static volatile int64_t x743 = -1LL;
	int16_t x744 = -1;
	int64_t t4 = 1LL;

    t4 = ((x741&x742)/(x743==x744));

    if (t4 != -15676LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x797 = INT32_MAX;
	int8_t x798 = 0;
	static volatile int8_t x799 = -1;
	int32_t t5 = -31;

    t5 = ((x797&x798)/(x799==x800));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x897 = -1;
	static int32_t x898 = -1;
	uint16_t x899 = 1U;

    t6 = ((x897&x898)/(x899==x900));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x925 = INT8_MIN;
	int32_t x926 = 1;
	int16_t x928 = INT16_MIN;
	static volatile int32_t t7 = 53;

    t7 = ((x925&x926)/(x927==x928));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x977 = 29567717U;
	uint64_t x978 = 14LLU;
	int64_t x979 = -1LL;
	static volatile int32_t x980 = -1;
	uint64_t t8 = 126301666446121LLU;

    t8 = ((x977&x978)/(x979==x980));

    if (t8 != 4LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x1041 = INT32_MAX;
	uint16_t x1042 = 67U;
	int8_t x1043 = INT8_MAX;
	volatile int32_t t9 = 5837189;

    t9 = ((x1041&x1042)/(x1043==x1044));

    if (t9 != 67) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x1069 = INT8_MAX;
	int8_t x1070 = INT8_MAX;
	uint64_t x1071 = UINT64_MAX;
	int8_t x1072 = -1;

    t10 = ((x1069&x1070)/(x1071==x1072));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x1089 = INT32_MIN;
	int32_t x1090 = INT32_MIN;
	static volatile int8_t x1091 = INT8_MIN;
	volatile int8_t x1092 = INT8_MIN;

    t11 = ((x1089&x1090)/(x1091==x1092));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x1153 = INT8_MAX;
	volatile uint32_t x1154 = 94604578U;
	static int32_t x1155 = INT32_MIN;
	uint32_t t12 = 45618U;

    t12 = ((x1153&x1154)/(x1155==x1156));

    if (t12 != 34U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x1281 = 521012LLU;
	int8_t x1282 = INT8_MIN;
	int64_t x1283 = -1LL;

    t13 = ((x1281&x1282)/(x1283==x1284));

    if (t13 != 520960LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1317 = 4041238LLU;
	int32_t x1318 = INT32_MIN;
	uint64_t x1319 = UINT64_MAX;
	int16_t x1320 = -1;
	static uint64_t t14 = 495LLU;

    t14 = ((x1317&x1318)/(x1319==x1320));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1369 = INT8_MIN;
	int16_t x1370 = INT16_MIN;
	int8_t x1371 = -1;
	int8_t x1372 = -1;
	volatile int32_t t15 = -896804;

    t15 = ((x1369&x1370)/(x1371==x1372));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x1409 = INT64_MIN;
	volatile int64_t x1411 = INT64_MIN;
	static int64_t x1412 = INT64_MIN;
	volatile int64_t t16 = 3366195289729LL;

    t16 = ((x1409&x1410)/(x1411==x1412));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1453 = INT64_MAX;
	uint8_t x1454 = 12U;
	static volatile int8_t x1455 = -1;
	volatile uint64_t x1456 = UINT64_MAX;

    t17 = ((x1453&x1454)/(x1455==x1456));

    if (t17 != 12LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x1489 = -1LL;
	volatile uint8_t x1490 = 0U;
	uint64_t x1491 = UINT64_MAX;
	int32_t x1492 = -1;

    t18 = ((x1489&x1490)/(x1491==x1492));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1553 = 12U;
	volatile int32_t x1554 = INT32_MIN;
	int16_t x1555 = INT16_MIN;
	static int16_t x1556 = INT16_MIN;
	volatile int32_t t19 = 8379194;

    t19 = ((x1553&x1554)/(x1555==x1556));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1558 = INT32_MIN;
	int8_t x1559 = -1;
	int16_t x1560 = -1;
	int32_t t20 = INT32_MIN;

    t20 = ((x1557&x1558)/(x1559==x1560));

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1665 = INT32_MIN;
	volatile uint64_t x1666 = 64837LLU;
	static uint32_t x1667 = UINT32_MAX;
	uint32_t x1668 = UINT32_MAX;
	static volatile uint64_t t21 = 4051LLU;

    t21 = ((x1665&x1666)/(x1667==x1668));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x1685 = INT8_MIN;
	int32_t x1686 = -423801;
	volatile int32_t x1687 = -1;
	int16_t x1688 = -1;
	static int32_t t22 = -4;

    t22 = ((x1685&x1686)/(x1687==x1688));

    if (t22 != -423808) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x1693 = -1;
	static int64_t x1694 = INT64_MAX;
	uint64_t x1695 = UINT64_MAX;
	int64_t x1696 = -1LL;
	static int64_t t23 = INT64_MAX;

    t23 = ((x1693&x1694)/(x1695==x1696));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x1701 = INT16_MAX;
	uint16_t x1702 = 216U;
	int16_t x1703 = -1;
	static uint64_t x1704 = UINT64_MAX;
	int32_t t24 = 280001761;

    t24 = ((x1701&x1702)/(x1703==x1704));

    if (t24 != 216) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x1705 = 3901439LL;
	int64_t x1706 = -980290087542503LL;
	uint64_t x1707 = UINT64_MAX;
	volatile int32_t x1708 = -1;
	volatile int64_t t25 = 138645475543386LL;

    t25 = ((x1705&x1706)/(x1707==x1708));

    if (t25 != 655641LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1989 = INT32_MIN;
	int8_t x1990 = INT8_MIN;
	int16_t x1991 = INT16_MIN;
	int16_t x1992 = INT16_MIN;
	int32_t t26 = INT32_MIN;

    t26 = ((x1989&x1990)/(x1991==x1992));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x2025 = 2LL;
	uint64_t x2026 = 48618994LLU;
	uint64_t t27 = 2803LLU;

    t27 = ((x2025&x2026)/(x2027==x2028));

    if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2037 = 6U;
	volatile int64_t x2040 = INT64_MIN;

    t28 = ((x2037&x2038)/(x2039==x2040));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x2125 = 28;
	static int8_t x2126 = -1;
	int8_t x2127 = INT8_MIN;
	volatile int8_t x2128 = INT8_MIN;
	volatile int32_t t29 = -1;

    t29 = ((x2125&x2126)/(x2127==x2128));

    if (t29 != 28) { NG(); } else { ; }
	
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


    return 0;
}

