
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



void f0(void) {
    	int64_t x117 = 718829948919LL;
	volatile int64_t x118 = INT64_MAX;
	static volatile uint64_t x119 = 8LLU;
	int32_t x120 = 1;
	static volatile int32_t t0 = 3;

    t0 = (((x117>x118)>>x119)<<x120);

    if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

