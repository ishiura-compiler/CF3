
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

static uint8_t x507 = 9U;
uint32_t x621 = 7280U;
static uint64_t x622 = 26314069551183465LLU;
volatile int16_t x624 = 1;


void f0(void) {
    	volatile int32_t x9 = INT32_MIN;
	volatile int64_t x10 = INT64_MIN;
	int64_t x11 = 1LL;
	static uint8_t x12 = 1U;
	volatile int64_t t0 = 300588731999168LL;

    t0 = (((x9/x10)>>x11)<<x12);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x401 = 2765876782138611069LLU;
	uint8_t x402 = 15U;
	volatile int8_t x403 = 0;
	int16_t x404 = 23;
	uint64_t t1 = 68456LLU;

    t1 = (((x401/x402)>>x403)<<x404);

    if (t1 != 12469452861043900416LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x505 = UINT64_MAX;
	int16_t x506 = INT16_MIN;
	int16_t x508 = 1;
	uint64_t t2 = 478399955861145LLU;

    t2 = (((x505/x506)>>x507)<<x508);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x623 = 1;
	static volatile uint64_t t3 = 2836412471195751LLU;

    t3 = (((x621/x622)>>x623)<<x624);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

