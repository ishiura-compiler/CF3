
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

volatile int32_t t0 = -4;
uint32_t x594 = 0U;
uint8_t x856 = 2U;
volatile int32_t t4 = 6246;
volatile int32_t x1643 = INT32_MAX;
volatile int16_t x1644 = INT16_MAX;
volatile int32_t t7 = 29936;
static int64_t t9 = 1598439LL;
volatile int16_t x1741 = INT16_MIN;
volatile int32_t t10 = -360895;


void f0(void) {
    	uint16_t x89 = 3982U;
	volatile uint8_t x90 = 0U;
	int64_t x91 = -1LL;
	int32_t x92 = -8;

    t0 = (x89/(x90==(x91==x92)));

    if (t0 != 3982) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x265 = INT8_MIN;
	static int8_t x266 = 0;
	volatile int64_t x267 = INT64_MAX;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t1 = 1021024280;

    t1 = (x265/(x266==(x267==x268)));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x593 = INT16_MIN;
	int8_t x595 = -1;
	int8_t x596 = INT8_MIN;
	volatile int32_t t2 = -5;

    t2 = (x593/(x594==(x595==x596)));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x853 = INT8_MIN;
	static int8_t x854 = 0;
	volatile int16_t x855 = -1687;
	int32_t t3 = 67100389;

    t3 = (x853/(x854==(x855==x856)));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x1241 = -2045;
	uint8_t x1242 = 0U;
	int16_t x1243 = -1;
	int32_t x1244 = INT32_MIN;

    t4 = (x1241/(x1242==(x1243==x1244)));

    if (t4 != -2045) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x1445 = INT8_MIN;
	uint16_t x1446 = 0U;
	uint32_t x1447 = 152U;
	uint32_t x1448 = UINT32_MAX;
	volatile int32_t t5 = -1;

    t5 = (x1445/(x1446==(x1447==x1448)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x1553 = 246690081859LLU;
	uint8_t x1554 = 0U;
	int64_t x1555 = 3675207LL;
	static int8_t x1556 = 3;
	uint64_t t6 = 1263LLU;

    t6 = (x1553/(x1554==(x1555==x1556)));

    if (t6 != 246690081859LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x1641 = UINT8_MAX;
	uint16_t x1642 = 0U;

    t7 = (x1641/(x1642==(x1643==x1644)));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x1665 = INT32_MAX;
	static int8_t x1666 = 0;
	uint16_t x1667 = 1657U;
	uint16_t x1668 = UINT16_MAX;
	volatile int32_t t8 = INT32_MAX;

    t8 = (x1665/(x1666==(x1667==x1668)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x1701 = -564865028816743165LL;
	uint16_t x1702 = 0U;
	volatile uint32_t x1703 = 8U;
	int32_t x1704 = -1;

    t9 = (x1701/(x1702==(x1703==x1704)));

    if (t9 != -564865028816743165LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x1742 = 0;
	volatile int64_t x1743 = INT64_MIN;
	volatile int64_t x1744 = 11355LL;

    t10 = (x1741/(x1742==(x1743==x1744)));

    if (t10 != -32768) { NG(); } else { ; }
	
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


    return 0;
}

