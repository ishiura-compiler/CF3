
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

uint64_t x257 = UINT64_MAX;
uint16_t x258 = 11U;


void f0(void) {
    	uint64_t x259 = 37LLU;
	static uint8_t x260 = 6U;
	uint64_t t0 = 110696314LLU;

    t0 = ((x257<<(x258|x259))+x260);

    if (t0 != 18446603336221196294LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x517 = 4;
	static uint8_t x518 = 0U;
	uint8_t x519 = 0U;
	int32_t x520 = 2928514;
	volatile int32_t t1 = -30;

    t1 = ((x517<<(x518|x519))+x520);

    if (t1 != 2928518) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	uint8_t x614 = 7U;
	int8_t x615 = 18;
	int32_t x616 = -1;
	int32_t t2 = -1;

    t2 = ((x613<<(x614|x615))+x616);

    if (t2 != 2139095039) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

