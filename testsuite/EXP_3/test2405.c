
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

int64_t x41 = -362LL;
int8_t x249 = INT8_MIN;


void f0(void) {
    	static uint32_t x42 = UINT32_MAX;
	int8_t x43 = 8;
	static uint8_t x44 = 5U;
	int64_t t0 = -32063873993949LL;

    t0 = ((x41/x42)>>(x43|x44));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x250 = 2393;
	int8_t x251 = 3;
	uint16_t x252 = 29U;
	volatile int32_t t1 = -1001408885;

    t1 = ((x249/x250)>>(x251|x252));

    if (t1 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

