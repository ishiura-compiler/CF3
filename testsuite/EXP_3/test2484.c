
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

int32_t x282 = INT32_MIN;
int32_t x669 = -1;


void f0(void) {
    	uint8_t x281 = 13U;
	volatile uint8_t x283 = 29U;
	static uint8_t x284 = 6U;
	static int32_t t0 = -326622897;

    t0 = ((x281<=x282)<<(x283|x284));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x670 = 50U;
	uint8_t x671 = 6U;
	volatile uint8_t x672 = 10U;
	static int32_t t1 = -162524;

    t1 = ((x669<=x670)<<(x671|x672));

    if (t1 != 16384) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

