
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

uint32_t x305 = 748637U;
volatile uint32_t t1 = 18120546U;
volatile int32_t t2 = 0;


void f0(void) {
    	uint32_t x249 = 2762476U;
	volatile uint8_t x250 = 30U;
	int32_t x251 = -1;
	int64_t x252 = INT64_MIN;
	int64_t t0 = 36490031LL;

    t0 = ((x249<<(x250+x251))+x252);

    if (t0 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x306 = 11U;
	uint32_t x307 = UINT32_MAX;
	uint16_t x308 = 492U;

    t1 = ((x305<<(x306+x307))+x308);

    if (t1 != 766604780U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x705 = 3U;
	uint64_t x706 = UINT64_MAX;
	uint32_t x707 = 18U;
	int16_t x708 = 723;

    t2 = ((x705<<(x706+x707))+x708);

    if (t2 != 393939) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

