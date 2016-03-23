
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

int32_t x339 = -1;
static int32_t x340 = -1;
static int32_t t2 = 37;
int32_t t3 = -12;
int8_t x701 = 0;
int32_t t4 = 14580739;
uint8_t x1005 = 3U;
uint8_t x1006 = 0U;
int8_t x1467 = 54;
static int32_t t8 = -1981232;
volatile uint64_t x1923 = UINT64_MAX;
int64_t x1970 = -1LL;


void f0(void) {
    	uint64_t x13 = 15893621963LLU;
	static uint8_t x14 = 27U;
	volatile int64_t x15 = -1LL;
	volatile int64_t x16 = -1LL;
	static volatile uint64_t t0 = 763293LLU;

    t0 = (x13<<(x14-(x15^x16)));

    if (t0 != 2133205829564760064LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x305 = 26U;
	int16_t x306 = -2;
	uint16_t x307 = 27U;
	static uint32_t x308 = UINT32_MAX;
	int32_t t1 = -23;

    t1 = (x305<<(x306-(x307^x308)));

    if (t1 != 1744830464) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x337 = 15251;
	uint16_t x338 = 8U;

    t2 = (x337<<(x338-(x339^x340)));

    if (t2 != 3904256) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x529 = 489;
	static int32_t x530 = 1;
	static int16_t x531 = -1;
	static int16_t x532 = -1;

    t3 = (x529<<(x530-(x531^x532)));

    if (t3 != 978) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x702 = -1;
	uint16_t x703 = 0U;
	volatile int16_t x704 = -1;

    t4 = (x701<<(x702-(x703^x704)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x1007 = 6U;
	static int8_t x1008 = -1;
	volatile int32_t t5 = -33;

    t5 = (x1005<<(x1006-(x1007^x1008)));

    if (t5 != 384) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x1261 = 15307U;
	int16_t x1262 = -1;
	volatile int32_t x1263 = -1;
	uint8_t x1264 = 4U;
	static int32_t t6 = -87350217;

    t6 = (x1261<<(x1262-(x1263^x1264)));

    if (t6 != 244912) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x1465 = 5LLU;
	volatile uint64_t x1466 = UINT64_MAX;
	int32_t x1468 = -1;
	uint64_t t7 = 572LLU;

    t7 = (x1465<<(x1466-(x1467^x1468)));

    if (t7 != 90071992547409920LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x1693 = 29876U;
	uint32_t x1694 = UINT32_MAX;
	int16_t x1695 = 2;
	static int8_t x1696 = -1;

    t8 = (x1693<<(x1694-(x1695^x1696)));

    if (t8 != 119504) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1789 = 120U;
	volatile int8_t x1790 = 1;
	int8_t x1791 = -4;
	uint16_t x1792 = 0U;
	volatile int32_t t9 = 79;

    t9 = (x1789<<(x1790-(x1791^x1792)));

    if (t9 != 3840) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x1921 = UINT8_MAX;
	int32_t x1922 = INT32_MAX;
	volatile int32_t x1924 = INT32_MIN;
	int32_t t10 = -1;

    t10 = (x1921<<(x1922-(x1923^x1924)));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x1969 = INT8_MAX;
	int64_t x1971 = INT64_MAX;
	static int64_t x1972 = INT64_MIN;
	int32_t t11 = -1;

    t11 = (x1969<<(x1970-(x1971^x1972)));

    if (t11 != 127) { NG(); } else { ; }
	
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


    return 0;
}

