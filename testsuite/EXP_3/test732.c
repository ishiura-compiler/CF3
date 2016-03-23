
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

uint64_t x165 = 473063LLU;
uint64_t t1 = 375378LLU;
int64_t x765 = INT64_MAX;
int32_t x783 = INT32_MIN;
int16_t x831 = -776;


void f0(void) {
    	static volatile uint16_t x166 = 2U;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	uint64_t t0 = 355789LLU;

    t0 = ((x165>>x166)/(x167/x168));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x489 = UINT64_MAX;
	static int8_t x490 = 1;
	int16_t x491 = INT16_MIN;
	uint8_t x492 = 2U;

    t1 = ((x489>>x490)/(x491/x492));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x733 = 15;
	uint8_t x734 = 2U;
	int16_t x735 = INT16_MIN;
	static uint8_t x736 = UINT8_MAX;
	int32_t t2 = -44326;

    t2 = ((x733>>x734)/(x735/x736));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x766 = 20U;
	int32_t x767 = 168434;
	int8_t x768 = INT8_MIN;
	volatile int64_t t3 = 518619867LL;

    t3 = ((x765>>x766)/(x767/x768));

    if (t3 != -6689044123LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x773 = 8750LL;
	volatile int32_t x774 = 0;
	uint16_t x775 = 12199U;
	uint8_t x776 = 3U;
	static volatile int64_t t4 = 905914875200602421LL;

    t4 = ((x773>>x774)/(x775/x776));

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x781 = UINT16_MAX;
	uint32_t x782 = 0U;
	int64_t x784 = 338853LL;
	volatile int64_t t5 = 319513200459LL;

    t5 = ((x781>>x782)/(x783/x784));

    if (t5 != -10LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x829 = INT16_MAX;
	volatile uint16_t x830 = 1U;
	int64_t x832 = -1LL;
	int64_t t6 = 10476LL;

    t6 = ((x829>>x830)/(x831/x832));

    if (t6 != 21LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x941 = 454U;
	static int8_t x942 = 7;
	static int32_t x943 = INT32_MIN;
	static volatile uint32_t x944 = 33509057U;
	uint32_t t7 = 412U;

    t7 = ((x941>>x942)/(x943/x944));

    if (t7 != 0U) { NG(); } else { ; }
	
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


    return 0;
}

