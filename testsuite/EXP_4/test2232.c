
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

int32_t t1 = -221914542;
static int8_t x854 = 3;
int32_t x856 = 705635325;


void f0(void) {
    	static uint8_t x397 = UINT8_MAX;
	int8_t x398 = 3;
	int32_t x399 = INT32_MAX;
	static uint32_t x400 = 0U;
	volatile int32_t t0 = 847;

    t0 = (x397<<(x398<<(x399&x400)));

    if (t0 != 2040) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x481 = 1688;
	int8_t x482 = 0;
	int16_t x483 = 1;
	uint64_t x484 = 173380LLU;

    t1 = (x481<<(x482<<(x483&x484)));

    if (t1 != 1688) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x853 = 5;
	int64_t x855 = INT64_MIN;
	int32_t t2 = -90;

    t2 = (x853<<(x854<<(x855&x856)));

    if (t2 != 40) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

