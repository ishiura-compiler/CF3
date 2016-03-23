
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

int8_t x81 = INT8_MIN;
uint8_t x84 = 2U;
int64_t x301 = -1LL;
uint16_t x372 = 8U;
uint32_t t2 = 3U;
uint16_t x413 = 322U;
uint16_t x416 = 8U;
uint64_t t4 = 147881LLU;


void f0(void) {
    	static int32_t x82 = INT32_MAX;
	uint8_t x83 = 3U;
	volatile int32_t t0 = 3632;

    t0 = ((x81+(x82>>x83))<<x84);

    if (t0 != 1073741308) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x302 = 972954U;
	static uint8_t x303 = 4U;
	int8_t x304 = 0;
	volatile int64_t t1 = -13689810590119LL;

    t1 = ((x301+(x302>>x303))<<x304);

    if (t1 != 60808LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x369 = 22611U;
	static uint32_t x370 = 1060321U;
	uint8_t x371 = 3U;

    t2 = ((x369+(x370>>x371))<<x372);

    if (t2 != 39718656U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x414 = 22624;
	uint8_t x415 = 4U;
	static int32_t t3 = 1;

    t3 = ((x413+(x414>>x415))<<x416);

    if (t3 != 444416) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x677 = 7586LLU;
	volatile uint32_t x678 = 21572U;
	static uint32_t x679 = 21U;
	int32_t x680 = 0;

    t4 = ((x677+(x678>>x679))<<x680);

    if (t4 != 7586LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

