
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

uint64_t x493 = UINT64_MAX;
uint8_t x495 = 0U;


void f0(void) {
    	volatile int64_t x217 = INT64_MAX;
	volatile uint64_t x218 = 4288686853528320167LLU;
	int16_t x219 = 44;
	static uint8_t x220 = 5U;
	static uint64_t t0 = 16LLU;

    t0 = ((x217%x218)>>(x219|x220));

    if (t0 != 18360LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x385 = UINT32_MAX;
	volatile uint32_t x386 = 17557U;
	volatile int8_t x387 = 0;
	uint32_t x388 = 7U;
	static volatile uint32_t t1 = 17396U;

    t1 = ((x385%x386)>>(x387|x388));

    if (t1 != 124U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x494 = -1;
	uint16_t x496 = 1U;
	uint64_t t2 = 1171180LLU;

    t2 = ((x493%x494)>>(x495|x496));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

