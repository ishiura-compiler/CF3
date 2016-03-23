
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

uint64_t x282 = 1112059285885LLU;


void f0(void) {
    	static uint64_t x249 = 1331129246088968LLU;
	volatile uint32_t x250 = UINT32_MAX;
	uint8_t x251 = 8U;
	uint64_t x252 = 23LLU;
	uint64_t t0 = 31117445306LLU;

    t0 = ((x249-(x250>>x251))>>x252);

    if (t0 != 158682969LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x281 = INT8_MIN;
	uint8_t x283 = 28U;
	uint8_t x284 = 13U;
	static volatile uint64_t t1 = 122LLU;

    t1 = ((x281-(x282>>x283))>>x284);

    if (t1 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x673 = 24U;
	int8_t x674 = INT8_MAX;
	uint16_t x675 = 12U;
	int16_t x676 = 1;
	volatile int32_t t2 = -1;

    t2 = ((x673-(x674>>x675))>>x676);

    if (t2 != 12) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

