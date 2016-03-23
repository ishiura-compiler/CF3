
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

uint64_t x86 = 168LLU;


void f0(void) {
    	int16_t x85 = 12;
	uint32_t x87 = UINT32_MAX;
	int8_t x88 = 1;
	uint64_t t0 = 11932374180LLU;

    t0 = ((x85|(x86-x87))<<x88);

    if (t0 != 18446744065119617370LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x185 = 682832;
	volatile int32_t x186 = 91235;
	uint64_t x187 = 3491241LLU;
	uint16_t x188 = 21U;
	uint64_t t1 = 1542360131592LLU;

    t1 = ((x185|(x186-x187))<<x188);

    if (t1 != 18446737270468771840LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

