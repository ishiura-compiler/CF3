
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
    	int32_t x1 = INT32_MAX;
	int32_t x2 = -37;
	int8_t x3 = 0;
	volatile uint8_t x4 = 0U;
	volatile int32_t t0 = -10025588;

    t0 = ((x1==x2)>>(x3|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

