
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

int64_t x1 = -1LL;


void f0(void) {
    	uint16_t x2 = 1716U;
	volatile uint8_t x3 = 13U;
	uint8_t x4 = 0U;
	int64_t t0 = -12637LL;

    t0 = (x1+(x2>>(x3<<x4)));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

