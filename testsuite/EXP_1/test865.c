
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

static int32_t t0 = -1;
volatile int16_t x493 = INT16_MAX;
uint32_t t1 = 1921757U;


void f0(void) {
    	int8_t x377 = INT8_MAX;
	uint8_t x378 = 3U;
	volatile int16_t x379 = 2;
	volatile uint16_t x380 = 2U;

    t0 = (((x377%x378)<<x379)>>x380);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x494 = UINT32_MAX;
	int8_t x495 = 6;
	uint8_t x496 = 0U;

    t1 = (((x493%x494)<<x495)>>x496);

    if (t1 != 2097088U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x529 = 21U;
	int8_t x530 = -1;
	uint8_t x531 = 1U;
	uint16_t x532 = 21U;
	volatile int32_t t2 = -2808694;

    t2 = (((x529%x530)<<x531)>>x532);

    if (t2 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

