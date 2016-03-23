
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

static uint8_t x74 = 1U;
static volatile uint8_t x189 = 1U;
int32_t t2 = -54993138;
static uint8_t x380 = 6U;
int64_t x431 = INT64_MAX;
int16_t x531 = -1;
volatile uint32_t x609 = UINT32_MAX;
uint8_t x610 = 5U;
int8_t x611 = INT8_MIN;
uint16_t x762 = 10U;
int32_t t8 = 485536;
uint8_t x818 = 1U;
int32_t x819 = -1;
volatile int32_t t11 = 9999;
uint64_t x901 = 1272LLU;
static volatile int16_t x936 = INT16_MIN;
int32_t t15 = 512938;


void f0(void) {
    	static volatile uint16_t x25 = 8U;
	int32_t x26 = -1;
	uint16_t x27 = 27U;
	int32_t x28 = INT32_MIN;
	int32_t t0 = 80;

    t0 = (x25<<(x26+(x27%x28)));

    if (t0 != 536870912) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x73 = 0U;
	static int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	uint32_t t1 = 5U;

    t1 = (x73<<(x74+(x75%x76)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x190 = -1;
	int8_t x191 = 5;
	volatile int32_t x192 = 2045850;

    t2 = (x189<<(x190+(x191%x192)));

    if (t2 != 16) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x373 = 3594568U;
	uint32_t x374 = 2U;
	uint16_t x375 = 0U;
	volatile uint16_t x376 = 498U;
	volatile uint32_t t3 = 3816U;

    t3 = (x373<<(x374+(x375%x376)));

    if (t3 != 14378272U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x377 = INT16_MAX;
	int32_t x378 = -1;
	static volatile int16_t x379 = 3;
	volatile int32_t t4 = 149490162;

    t4 = (x377<<(x378+(x379%x380)));

    if (t4 != 131068) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x429 = 321551LL;
	int32_t x430 = -1;
	static volatile uint8_t x432 = 4U;
	int64_t t5 = -261299003875LL;

    t5 = (x429<<(x430+(x431%x432)));

    if (t5 != 1286204LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x529 = 27U;
	static volatile uint8_t x530 = 14U;
	volatile uint16_t x532 = UINT16_MAX;
	volatile uint32_t t6 = 56U;

    t6 = (x529<<(x530+(x531%x532)));

    if (t6 != 221184U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x612 = -1LL;
	uint32_t t7 = 125411U;

    t7 = (x609<<(x610+(x611%x612)));

    if (t7 != 4294967264U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x761 = UINT16_MAX;
	volatile int8_t x763 = 1;
	int8_t x764 = -1;

    t8 = (x761<<(x762+(x763%x764)));

    if (t8 != 67107840) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x817 = 6U;
	static int32_t x820 = INT32_MAX;
	volatile uint32_t t9 = 195790U;

    t9 = (x817<<(x818+(x819%x820)));

    if (t9 != 6U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x829 = 4658U;
	static uint64_t x830 = UINT64_MAX;
	uint32_t x831 = 159U;
	volatile uint16_t x832 = 2U;
	int32_t t10 = 39543333;

    t10 = (x829<<(x830+(x831%x832)));

    if (t10 != 4658) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x865 = 64343;
	uint16_t x866 = 1U;
	static int64_t x867 = 5LL;
	volatile int16_t x868 = INT16_MAX;

    t11 = (x865<<(x866+(x867%x868)));

    if (t11 != 4117952) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x902 = 14U;
	static volatile int64_t x903 = 41LL;
	int64_t x904 = -652731303578959936LL;
	uint64_t t12 = 46340LLU;

    t12 = (x901<<(x902+(x903%x904)));

    if (t12 != 8935141660703064064LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x933 = 4572U;
	static int16_t x934 = -1;
	int8_t x935 = 1;
	volatile int32_t t13 = -125;

    t13 = (x933<<(x934+(x935%x936)));

    if (t13 != 4572) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x953 = INT16_MAX;
	static volatile uint8_t x954 = 0U;
	volatile int32_t x955 = 193;
	static int16_t x956 = -1;
	volatile int32_t t14 = 19661;

    t14 = (x953<<(x954+(x955%x956)));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1053 = 3137;
	uint64_t x1054 = UINT64_MAX;
	uint32_t x1055 = 1815284U;
	uint32_t x1056 = 17U;

    t15 = (x1053<<(x1054+(x1055%x1056)));

    if (t15 != 200768) { NG(); } else { ; }
	
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


    return 0;
}

