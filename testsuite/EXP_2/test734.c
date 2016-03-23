
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

static volatile int32_t t0 = -108520308;
uint16_t x228 = 10U;
volatile int8_t x474 = -1;
int16_t x626 = -1;
uint16_t x628 = 1U;
volatile int64_t x1078 = -1LL;
static int16_t x1387 = INT16_MIN;
volatile uint64_t x1394 = 1025273232LLU;
volatile uint32_t x1420 = 23U;
static int32_t t14 = 599473209;
int8_t x1461 = INT8_MAX;
uint16_t x1462 = 338U;
uint64_t x1662 = UINT64_MAX;
volatile int32_t x1663 = INT32_MIN;
volatile int32_t t18 = -5472654;
static volatile int16_t x1701 = INT16_MAX;
int32_t x1703 = 121152684;


void f0(void) {
    	uint16_t x73 = 5U;
	volatile uint64_t x74 = UINT64_MAX;
	int64_t x75 = INT64_MAX;
	static uint8_t x76 = 24U;

    t0 = ((x73>>(x74/x75))<<x76);

    if (t0 != 16777216) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x125 = 1;
	uint32_t x126 = UINT32_MAX;
	static uint32_t x127 = 1003191461U;
	uint8_t x128 = 3U;
	static volatile int32_t t1 = -560486;

    t1 = ((x125>>(x126/x127))<<x128);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x165 = 29003267U;
	int8_t x166 = INT8_MIN;
	int16_t x167 = 859;
	static int64_t x168 = 3LL;
	uint32_t t2 = 51539U;

    t2 = ((x165>>(x166/x167))<<x168);

    if (t2 != 232026136U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x209 = UINT64_MAX;
	volatile uint16_t x210 = 9U;
	static int8_t x211 = INT8_MIN;
	static uint16_t x212 = 59U;
	uint64_t t3 = 108348378LLU;

    t3 = ((x209>>(x210/x211))<<x212);

    if (t3 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x225 = 93U;
	int8_t x226 = INT8_MIN;
	static int8_t x227 = INT8_MIN;
	int32_t t4 = 44273464;

    t4 = ((x225>>(x226/x227))<<x228);

    if (t4 != 47104) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x473 = 0;
	int16_t x475 = INT16_MIN;
	volatile uint32_t x476 = 26U;
	int32_t t5 = -1478;

    t5 = ((x473>>(x474/x475))<<x476);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x625 = 31780873U;
	static int16_t x627 = -1;
	uint32_t t6 = 45837U;

    t6 = ((x625>>(x626/x627))<<x628);

    if (t6 != 31780872U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x665 = 1;
	volatile int8_t x666 = INT8_MIN;
	int8_t x667 = INT8_MIN;
	static volatile int8_t x668 = 1;
	static volatile int32_t t7 = -70496484;

    t7 = ((x665>>(x666/x667))<<x668);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x753 = 4U;
	int8_t x754 = INT8_MIN;
	static int32_t x755 = 366;
	uint8_t x756 = 14U;
	volatile int32_t t8 = 20;

    t8 = ((x753>>(x754/x755))<<x756);

    if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x905 = 19;
	volatile int16_t x906 = INT16_MAX;
	volatile uint16_t x907 = UINT16_MAX;
	uint8_t x908 = 0U;
	static volatile int32_t t9 = 6363740;

    t9 = ((x905>>(x906/x907))<<x908);

    if (t9 != 19) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x1077 = 1992239196273837432LL;
	uint8_t x1079 = 11U;
	uint8_t x1080 = 1U;
	static volatile int64_t t10 = 1142037005510008178LL;

    t10 = ((x1077>>(x1078/x1079))<<x1080);

    if (t10 != 3984478392547674864LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x1257 = UINT16_MAX;
	volatile int8_t x1258 = -1;
	int32_t x1259 = INT32_MIN;
	uint8_t x1260 = 4U;
	int32_t t11 = 34815650;

    t11 = ((x1257>>(x1258/x1259))<<x1260);

    if (t11 != 1048560) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x1385 = 3U;
	uint8_t x1386 = 5U;
	volatile uint16_t x1388 = 1U;
	static volatile int32_t t12 = -38;

    t12 = ((x1385>>(x1386/x1387))<<x1388);

    if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x1393 = 7U;
	uint32_t x1395 = UINT32_MAX;
	int8_t x1396 = 2;
	volatile int32_t t13 = 2825691;

    t13 = ((x1393>>(x1394/x1395))<<x1396);

    if (t13 != 28) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1417 = 0;
	int64_t x1418 = -1LL;
	static uint64_t x1419 = UINT64_MAX;

    t14 = ((x1417>>(x1418/x1419))<<x1420);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1463 = 2979;
	uint8_t x1464 = 2U;
	int32_t t15 = -1;

    t15 = ((x1461>>(x1462/x1463))<<x1464);

    if (t15 != 508) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x1549 = UINT64_MAX;
	static int64_t x1550 = -1LL;
	uint32_t x1551 = 97U;
	int16_t x1552 = 6;
	volatile uint64_t t16 = 11243576168234LLU;

    t16 = ((x1549>>(x1550/x1551))<<x1552);

    if (t16 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x1629 = UINT64_MAX;
	int8_t x1630 = INT8_MAX;
	int16_t x1631 = -312;
	int8_t x1632 = 5;
	uint64_t t17 = 45LLU;

    t17 = ((x1629>>(x1630/x1631))<<x1632);

    if (t17 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x1661 = 15U;
	uint8_t x1664 = 2U;

    t18 = ((x1661>>(x1662/x1663))<<x1664);

    if (t18 != 28) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x1702 = 8U;
	volatile uint32_t x1704 = 15U;
	int32_t t19 = -361723;

    t19 = ((x1701>>(x1702/x1703))<<x1704);

    if (t19 != 1073709056) { NG(); } else { ; }
	
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


    return 0;
}

