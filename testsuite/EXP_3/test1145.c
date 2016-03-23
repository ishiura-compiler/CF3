
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
    	uint64_t x1 = 19502652547924690LLU;
	static int8_t x2 = -1;
	int16_t x3 = 0;
	int64_t x4 = 0LL;
	uint64_t t0 = 24532LLU;

    t0 = ((x1&x2)>>(x3<<x4));

    if (t0 != 19502652547924690LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

