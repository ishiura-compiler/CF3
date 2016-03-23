
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

volatile int16_t x341 = 228;


void f0(void) {
    	uint64_t x342 = 1630847354110979LLU;
	static volatile int64_t x343 = 10165056727LL;
	int16_t x344 = 60;
	volatile uint64_t t0 = 1861093797927529278LLU;

    t0 = ((x341|x342)>>(x343>>x344));

    if (t0 != 1630847354111207LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x705 = -1;
	uint32_t x706 = 26U;
	uint32_t x707 = 5211U;
	uint8_t x708 = 10U;
	uint32_t t1 = 2007U;

    t1 = ((x705|x706)>>(x707>>x708));

    if (t1 != 134217727U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

