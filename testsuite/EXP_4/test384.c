
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

static uint32_t x408 = UINT32_MAX;
int8_t x435 = -19;


void f0(void) {
    	uint16_t x325 = 28U;
	static int16_t x326 = INT16_MIN;
	int32_t x327 = -1;
	int16_t x328 = INT16_MAX;
	volatile int32_t t0 = 132628218;

    t0 = (x325<<(x326^(x327-x328)));

    if (t0 != 28) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x405 = 5065U;
	static uint32_t x406 = UINT32_MAX;
	int16_t x407 = -32;
	uint32_t t1 = 18863465U;

    t1 = (x405<<(x406^(x407-x408)));

    if (t1 != 1073741824U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x433 = 446U;
	volatile uint64_t x434 = UINT64_MAX;
	int64_t x436 = -1LL;
	volatile uint32_t t2 = 11289U;

    t2 = (x433<<(x434^(x435-x436)));

    if (t2 != 58458112U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

