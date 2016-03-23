
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

uint32_t x44 = UINT32_MAX;
uint32_t x370 = 1U;


void f0(void) {
    	int8_t x41 = 1;
	int64_t x42 = -1LL;
	int8_t x43 = -2;
	int32_t t0 = -402;

    t0 = (x41<<(x42+(x43^x44)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x369 = 192417689964LLU;
	int16_t x371 = -1;
	int64_t x372 = -1LL;
	static volatile uint64_t t1 = 9010974950795874LLU;

    t1 = (x369<<(x370+(x371^x372)));

    if (t1 != 384835379928LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

