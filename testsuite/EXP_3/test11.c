
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

volatile uint32_t t0 = 6622550U;
int8_t x97 = INT8_MIN;
volatile int32_t t3 = INT32_MAX;
int16_t x800 = -1;
int64_t x1097 = -54223LL;
uint64_t t8 = 683426877167734LLU;
int16_t x1272 = 10;
uint64_t t9 = 665646406834751LLU;
uint16_t x1440 = 6U;
volatile int8_t x1550 = 54;
int16_t x1552 = -9;
int32_t t12 = -784157;
static int32_t x1649 = INT32_MAX;
uint8_t x1652 = 1U;
volatile uint64_t x1717 = 17808499670017802LLU;
volatile uint64_t t16 = 3LLU;
uint32_t x1926 = 99906U;
int16_t x1932 = 2;
uint64_t x2182 = 2LLU;


void f0(void) {
    	uint32_t x41 = 12521U;
	uint16_t x42 = 249U;
	uint8_t x43 = 20U;
	uint64_t x44 = UINT64_MAX;

    t0 = ((x41+x42)>>(x43+x44));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x98 = 11341U;
	uint8_t x99 = 4U;
	static int64_t x100 = -1LL;
	int32_t t1 = 1602466;

    t1 = ((x97+x98)>>(x99+x100));

    if (t1 != 1401) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x129 = 43975307LLU;
	volatile int8_t x130 = INT8_MAX;
	volatile int8_t x131 = -1;
	int32_t x132 = 2;
	volatile uint64_t t2 = 548782985LLU;

    t2 = ((x129+x130)>>(x131+x132));

    if (t2 != 21987717LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x233 = 0;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = 1U;
	int8_t x236 = -1;

    t3 = ((x233+x234)>>(x235+x236));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MAX;
	uint64_t x431 = UINT64_MAX;
	volatile uint8_t x432 = 19U;
	volatile int64_t t4 = -414134653832LL;

    t4 = ((x429+x430)>>(x431+x432));

    if (t4 != 35184372088831LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x673 = INT8_MIN;
	static uint64_t x674 = 43470933509646LLU;
	int64_t x675 = -1LL;
	uint8_t x676 = 5U;
	uint64_t t5 = 927057160713797LLU;

    t5 = ((x673+x674)>>(x675+x676));

    if (t5 != 2716933344344LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x797 = INT8_MIN;
	uint16_t x798 = 197U;
	volatile int16_t x799 = 11;
	volatile int32_t t6 = 52;

    t6 = ((x797+x798)>>(x799+x800));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x1001 = UINT16_MAX;
	uint16_t x1002 = UINT16_MAX;
	static int16_t x1003 = 1;
	volatile uint32_t x1004 = 26U;
	volatile int32_t t7 = 55768;

    t7 = ((x1001+x1002)>>(x1003+x1004));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x1098 = UINT64_MAX;
	int8_t x1099 = 2;
	volatile uint8_t x1100 = 9U;

    t8 = ((x1097+x1098)>>(x1099+x1100));

    if (t8 != 9007199254740965LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x1269 = UINT64_MAX;
	uint32_t x1270 = 0U;
	int16_t x1271 = -5;

    t9 = ((x1269+x1270)>>(x1271+x1272));

    if (t9 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x1437 = -1;
	static int8_t x1438 = 18;
	volatile int8_t x1439 = -1;
	volatile int32_t t10 = -571623;

    t10 = ((x1437+x1438)>>(x1439+x1440));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x1549 = 2083246738U;
	uint16_t x1551 = 16U;
	uint32_t t11 = 1U;

    t11 = ((x1549+x1550)>>(x1551+x1552));

    if (t11 != 16275365U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1573 = 470U;
	static volatile int16_t x1574 = -1;
	volatile uint16_t x1575 = 9U;
	volatile int16_t x1576 = -1;

    t12 = ((x1573+x1574)>>(x1575+x1576));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1650 = 0;
	int16_t x1651 = -1;
	int32_t t13 = INT32_MAX;

    t13 = ((x1649+x1650)>>(x1651+x1652));

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1718 = UINT16_MAX;
	uint8_t x1719 = 6U;
	uint64_t x1720 = UINT64_MAX;
	uint64_t t14 = 135679249887LLU;

    t14 = ((x1717+x1718)>>(x1719+x1720));

    if (t14 != 556515614690104LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x1733 = -5;
	static int16_t x1734 = 6;
	uint32_t x1735 = 12U;
	int64_t x1736 = -1LL;
	int32_t t15 = 386843442;

    t15 = ((x1733+x1734)>>(x1735+x1736));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1777 = UINT8_MAX;
	uint64_t x1778 = UINT64_MAX;
	int16_t x1779 = 2;
	static uint32_t x1780 = 3U;

    t16 = ((x1777+x1778)>>(x1779+x1780));

    if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1925 = UINT64_MAX;
	volatile int8_t x1927 = 24;
	uint16_t x1928 = 2U;
	uint64_t t17 = 8622320LLU;

    t17 = ((x1925+x1926)>>(x1927+x1928));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1929 = -1;
	int64_t x1930 = 1LL;
	uint32_t x1931 = 31U;
	int64_t t18 = 24962LL;

    t18 = ((x1929+x1930)>>(x1931+x1932));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x2181 = 8U;
	static int8_t x2183 = 30;
	int8_t x2184 = -1;
	uint64_t t19 = 262848695465544LLU;

    t19 = ((x2181+x2182)>>(x2183+x2184));

    if (t19 != 0LLU) { NG(); } else { ; }
	
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

