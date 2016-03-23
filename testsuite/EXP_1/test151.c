
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

uint8_t x558 = 3U;
volatile int64_t t1 = 16812LL;
uint8_t x690 = 3U;
volatile int64_t t2 = -63LL;
static int32_t x801 = -6699422;
uint8_t x978 = UINT8_MAX;
int32_t t4 = 1;


void f0(void) {
    	int8_t x205 = -1;
	int8_t x206 = INT8_MAX;
	volatile uint8_t x207 = 1U;
	uint64_t x208 = 4LLU;
	int32_t t0 = -120269;

    t0 = (((x205+x206)>>x207)>>x208);

    if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x557 = -1LL;
	uint32_t x559 = 0U;
	int8_t x560 = 1;

    t1 = (((x557+x558)>>x559)>>x560);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x689 = 0LL;
	uint32_t x691 = 35U;
	uint32_t x692 = 3U;

    t2 = (((x689+x690)>>x691)>>x692);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x802 = 23786516168162LLU;
	int32_t x803 = 14;
	int8_t x804 = 10;
	uint64_t t3 = 828015LLU;

    t3 = (((x801+x802)>>x803)>>x804);

    if (t3 != 1417786LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x977 = UINT16_MAX;
	volatile int32_t x979 = 1;
	uint64_t x980 = 1LLU;

    t4 = (((x977+x978)>>x979)>>x980);

    if (t4 != 16447) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x1113 = INT8_MIN;
	static uint64_t x1114 = UINT64_MAX;
	static int16_t x1115 = 14;
	int8_t x1116 = 9;
	uint64_t t5 = 26410797003335891LLU;

    t5 = (((x1113+x1114)>>x1115)>>x1116);

    if (t5 != 2199023255551LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

