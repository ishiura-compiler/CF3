
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

int16_t x116 = -1;
uint16_t x525 = 6264U;
static int8_t x528 = -2;
volatile int32_t t2 = -3142987;
volatile uint8_t x777 = 2U;
uint8_t x1350 = 0U;
uint32_t t6 = 810U;
int32_t t7 = 496767;
int8_t x1778 = 0;
int8_t x1780 = INT8_MIN;
uint16_t x2001 = UINT16_MAX;
volatile int64_t x2002 = -1LL;


void f0(void) {
    	uint16_t x113 = UINT16_MAX;
	int8_t x114 = 1;
	int32_t x115 = -1;
	int32_t t0 = 38;

    t0 = (x113>>(x114-(x115*x116)));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x365 = INT16_MAX;
	int8_t x366 = 26;
	uint8_t x367 = 3U;
	static uint64_t x368 = UINT64_MAX;
	int32_t t1 = 1;

    t1 = (x365>>(x366-(x367*x368)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x526 = 13U;
	static volatile uint32_t x527 = UINT32_MAX;

    t2 = (x525>>(x526-(x527*x528)));

    if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x778 = 5;
	static uint64_t x779 = UINT64_MAX;
	int32_t x780 = -1;
	volatile int32_t t3 = 233148956;

    t3 = (x777>>(x778-(x779*x780)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x789 = 11U;
	static uint64_t x790 = UINT64_MAX;
	int8_t x791 = -1;
	uint8_t x792 = 1U;
	volatile int32_t t4 = -962991939;

    t4 = (x789>>(x790-(x791*x792)));

    if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x949 = 3;
	static volatile uint64_t x950 = 1LLU;
	int64_t x951 = 2043325680475LL;
	int8_t x952 = 0;
	static int32_t t5 = -7;

    t5 = (x949>>(x950-(x951*x952)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x1349 = 1U;
	static volatile int32_t x1351 = -1;
	uint8_t x1352 = 14U;

    t6 = (x1349>>(x1350-(x1351*x1352)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x1565 = 32U;
	volatile int64_t x1566 = INT64_MIN;
	static uint64_t x1567 = 13LLU;
	int64_t x1568 = INT64_MIN;

    t7 = (x1565>>(x1566-(x1567*x1568)));

    if (t7 != 32) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x1661 = 1455599784749034697LLU;
	uint16_t x1662 = 158U;
	uint64_t x1663 = UINT64_MAX;
	volatile int8_t x1664 = INT8_MIN;
	volatile uint64_t t8 = 6LLU;

    t8 = (x1661>>(x1662-(x1663*x1664)));

    if (t8 != 1355632939LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x1777 = 759263996;
	int8_t x1779 = 0;
	int32_t t9 = 54;

    t9 = (x1777>>(x1778-(x1779*x1780)));

    if (t9 != 759263996) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x2003 = 2LLU;
	int16_t x2004 = -1;
	volatile int32_t t10 = -14085;

    t10 = (x2001>>(x2002-(x2003*x2004)));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x2229 = INT32_MAX;
	int8_t x2230 = -1;
	uint16_t x2231 = 7U;
	int8_t x2232 = -1;
	int32_t t11 = 26686;

    t11 = (x2229>>(x2230-(x2231*x2232)));

    if (t11 != 33554431) { NG(); } else { ; }
	
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

