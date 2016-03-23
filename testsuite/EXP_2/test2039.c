
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

int64_t x2 = 21251747LL;


void f0(void) {
    	uint64_t x1 = 1043877523702671LLU;
	uint8_t x3 = 28U;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -223824894;

    t0 = ((x1<<(x2>>x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x281 = UINT8_MAX;
	int32_t x282 = 2314323;
	int8_t x283 = 29;
	static int16_t x284 = -170;
	int32_t t1 = 962;

    t1 = ((x281<<(x282>>x283))>x284);

    if (t1 != 1) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

