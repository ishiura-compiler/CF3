
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

volatile int64_t x149 = 360806487352LL;
int8_t x437 = -1;
uint64_t x450 = UINT64_MAX;
uint64_t t4 = 228021LLU;
uint64_t x529 = 125826414LLU;
static volatile int32_t t6 = 51;
int16_t x578 = INT16_MAX;
static uint8_t x580 = 0U;


void f0(void) {
    	uint64_t x121 = 54490377833LLU;
	int64_t x122 = 7640517LL;
	volatile uint32_t x123 = UINT32_MAX;
	static uint8_t x124 = 59U;
	volatile uint64_t t0 = 76LLU;

    t0 = ((x121%x122)<<(x123+x124));

    if (t0 != 9799832789158199296LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x150 = INT8_MAX;
	uint8_t x151 = 3U;
	uint16_t x152 = 3U;
	int64_t t1 = -716434941112476LL;

    t1 = ((x149%x150)<<(x151+x152));

    if (t1 != 3264LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x438 = 1;
	int64_t x439 = -1LL;
	uint64_t x440 = 1LLU;
	volatile int32_t t2 = 9;

    t2 = ((x437%x438)<<(x439+x440));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x449 = 25;
	int64_t x451 = -1LL;
	static volatile int16_t x452 = 1;
	volatile uint64_t t3 = 401348LLU;

    t3 = ((x449%x450)<<(x451+x452));

    if (t3 != 25LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x525 = UINT64_MAX;
	volatile int8_t x526 = INT8_MAX;
	uint32_t x527 = 1U;
	uint32_t x528 = 11U;

    t4 = ((x525%x526)<<(x527+x528));

    if (t4 != 4096LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x530 = 3752676670491LL;
	volatile uint8_t x531 = 47U;
	int16_t x532 = -1;
	uint64_t t5 = 3352017777933826708LLU;

    t5 = ((x529%x530)<<(x531+x532));

    if (t5 != 18256326251964792832LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	int8_t x543 = 0;
	uint8_t x544 = 1U;

    t6 = ((x541%x542)<<(x543+x544));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x577 = INT32_MAX;
	volatile uint32_t x579 = 3U;
	int32_t t7 = 162847;

    t7 = ((x577%x578)<<(x579+x580));

    if (t7 != 8) { NG(); } else { ; }
	
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

