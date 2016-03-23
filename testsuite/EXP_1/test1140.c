
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

int16_t x68 = 5;


void f0(void) {
    	static uint64_t x65 = 2701LLU;
	volatile uint32_t x66 = 3U;
	int32_t x67 = -5;
	uint64_t t0 = 1823604189378891LLU;

    t0 = (((x65<<x66)&x67)<<x68);

    if (t0 != 691456LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

