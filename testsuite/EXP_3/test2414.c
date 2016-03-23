
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

int16_t x345 = INT16_MIN;
static uint8_t x347 = 7U;
uint32_t x361 = 526326U;
int8_t x362 = INT8_MAX;
int16_t x364 = 30;


void f0(void) {
    	int32_t x346 = -1;
	int8_t x348 = 13;
	int32_t t0 = -10467368;

    t0 = ((x345%x346)<<(x347|x348));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x363 = 15;
	volatile uint32_t t1 = 6U;

    t1 = ((x361%x362)<<(x363|x364));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x513 = UINT8_MAX;
	volatile int32_t x514 = INT32_MAX;
	volatile int8_t x515 = 2;
	int8_t x516 = 0;
	volatile int32_t t2 = -99974;

    t2 = ((x513%x514)<<(x515|x516));

    if (t2 != 1020) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

