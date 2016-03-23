
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

int64_t x177 = 31LL;
volatile uint64_t x180 = UINT64_MAX;


void f0(void) {
    	int64_t x101 = INT64_MAX;
	int16_t x102 = 20;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MIN;
	volatile int64_t t0 = 178976228117LL;

    t0 = ((x101>>x102)/(x103==x104));

    if (t0 != 8796093022207LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x178 = 54U;
	int8_t x179 = -1;
	int64_t t1 = 39938168654LL;

    t1 = ((x177>>x178)/(x179==x180));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

