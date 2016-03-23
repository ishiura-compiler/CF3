
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

static uint64_t x63 = 20LLU;


void f0(void) {
    	uint64_t x61 = UINT64_MAX;
	int64_t x62 = -146156783607LL;
	uint8_t x64 = 1U;
	volatile uint64_t t0 = 1905945023400477LLU;

    t0 = ((x61*x62)>>(x63|x64));

    if (t0 != 69692LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

