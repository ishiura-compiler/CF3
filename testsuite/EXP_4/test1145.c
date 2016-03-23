
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

static uint64_t x77 = UINT64_MAX;
uint8_t x241 = 2U;
volatile uint8_t x243 = 1U;
static volatile int16_t x515 = 1;
int64_t x786 = INT64_MIN;
uint16_t x813 = UINT16_MAX;
int32_t t5 = 0;
uint8_t x978 = 27U;
volatile int32_t t6 = -13306;
static volatile int64_t x1314 = INT64_MIN;
uint16_t x2017 = 8U;
int8_t x2262 = INT8_MIN;
volatile int32_t t12 = -30638;
uint8_t x2747 = 0U;
int16_t x2795 = 2866;
volatile uint32_t x3051 = UINT32_MAX;


void f0(void) {
    	uint16_t x78 = 6959U;
	volatile int8_t x79 = INT8_MAX;
	static uint8_t x80 = 14U;
	uint64_t t0 = UINT64_MAX;

    t0 = (x77>>(x78&(x79<<x80)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x242 = 0;
	int8_t x244 = 24;
	int32_t t1 = -44869569;

    t1 = (x241>>(x242&(x243<<x244)));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x489 = 6U;
	static int64_t x490 = INT64_MIN;
	int64_t x491 = 50044808774315LL;
	uint32_t x492 = 5U;
	int32_t t2 = -5347137;

    t2 = (x489>>(x490&(x491<<x492)));

    if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x513 = 7;
	int32_t x514 = 3620;
	static uint8_t x516 = 1U;
	volatile int32_t t3 = 0;

    t3 = (x513>>(x514&(x515<<x516)));

    if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x785 = 58768U;
	uint8_t x787 = UINT8_MAX;
	uint8_t x788 = 8U;
	static volatile uint32_t t4 = 867U;

    t4 = (x785>>(x786&(x787<<x788)));

    if (t4 != 58768U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x814 = 3U;
	uint16_t x815 = 12572U;
	volatile uint8_t x816 = 16U;

    t5 = (x813>>(x814&(x815<<x816)));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x977 = 1;
	uint64_t x979 = UINT64_MAX;
	static uint8_t x980 = 1U;

    t6 = (x977>>(x978&(x979<<x980)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x1313 = UINT8_MAX;
	static int64_t x1315 = 952740450821254LL;
	static uint8_t x1316 = 5U;
	static int32_t t7 = -838672776;

    t7 = (x1313>>(x1314&(x1315<<x1316)));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x1657 = 27U;
	int8_t x1658 = 1;
	static int64_t x1659 = 237LL;
	int32_t x1660 = 1;
	int32_t t8 = 457264103;

    t8 = (x1657>>(x1658&(x1659<<x1660)));

    if (t8 != 27) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x2018 = 4808;
	static volatile uint8_t x2019 = 62U;
	volatile int16_t x2020 = 20;
	static int32_t t9 = 457205297;

    t9 = (x2017>>(x2018&(x2019<<x2020)));

    if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x2261 = 4724299802493LL;
	int8_t x2263 = 1;
	static uint8_t x2264 = 0U;
	volatile int64_t t10 = 3269355LL;

    t10 = (x2261>>(x2262&(x2263<<x2264)));

    if (t10 != 4724299802493LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x2553 = 8428U;
	int64_t x2554 = INT64_MIN;
	uint64_t x2555 = 337LLU;
	int8_t x2556 = 0;
	uint32_t t11 = 32900065U;

    t11 = (x2553>>(x2554&(x2555<<x2556)));

    if (t11 != 8428U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x2701 = UINT16_MAX;
	int8_t x2702 = 20;
	uint64_t x2703 = 939203931312187861LLU;
	volatile uint8_t x2704 = 21U;

    t12 = (x2701>>(x2702&(x2703<<x2704)));

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x2745 = INT64_MAX;
	int64_t x2746 = INT64_MIN;
	uint16_t x2748 = 7U;
	static int64_t t13 = INT64_MAX;

    t13 = (x2745>>(x2746&(x2747<<x2748)));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x2793 = 63U;
	int32_t x2794 = INT32_MIN;
	uint16_t x2796 = 11U;
	int32_t t14 = 0;

    t14 = (x2793>>(x2794&(x2795<<x2796)));

    if (t14 != 63) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x3049 = UINT16_MAX;
	uint16_t x3050 = UINT16_MAX;
	uint8_t x3052 = 23U;
	int32_t t15 = -24025072;

    t15 = (x3049>>(x3050&(x3051<<x3052)));

    if (t15 != 65535) { NG(); } else { ; }
	
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

