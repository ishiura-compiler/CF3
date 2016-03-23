
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

int32_t x358 = -1;
int32_t x359 = 30;
static int64_t x674 = INT64_MAX;
volatile int64_t t1 = 12LL;


void f0(void) {
    	int32_t x357 = 39256015;
	int16_t x360 = 1;
	volatile int32_t t0 = 15;

    t0 = (((x357%x358)<<x359)<<x360);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x673 = 1;
	volatile int16_t x675 = 0;
	uint8_t x676 = 3U;

    t1 = (((x673%x674)<<x675)<<x676);

    if (t1 != 8LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

