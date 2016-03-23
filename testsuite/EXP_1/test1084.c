
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

int16_t x398 = 1;


void f0(void) {
    	volatile int16_t x397 = 1098;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = 14U;
	volatile int32_t t0 = -19;

    t0 = (((x397<<x398)==x399)<<x400);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x445 = 1;
	volatile uint8_t x446 = 5U;
	uint8_t x447 = 7U;
	uint8_t x448 = 30U;
	static volatile int32_t t1 = -1184;

    t1 = (((x445<<x446)==x447)<<x448);

    if (t1 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

