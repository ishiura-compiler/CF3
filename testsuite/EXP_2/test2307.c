
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

uint16_t x82 = UINT16_MAX;
int32_t t0 = 1021864;
static uint16_t x171 = 985U;
static uint64_t x215 = 25LLU;
volatile uint8_t x216 = 3U;
volatile uint8_t x504 = 2U;


void f0(void) {
    	volatile int32_t x81 = 18;
	uint32_t x83 = 1U;
	int8_t x84 = 0;

    t0 = ((x81>>(x82&x83))>>x84);

    if (t0 != 9) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x169 = UINT8_MAX;
	int64_t x170 = INT64_MIN;
	int16_t x172 = 27;
	volatile int32_t t1 = -29936;

    t1 = ((x169>>(x170&x171))>>x172);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x213 = 249970239428515973LL;
	static int16_t x214 = -55;
	volatile int64_t t2 = 2418560LL;

    t2 = ((x213>>(x214&x215))>>x216);

    if (t2 != 61027890485477LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x485 = UINT16_MAX;
	static uint8_t x486 = 3U;
	volatile int16_t x487 = INT16_MAX;
	uint8_t x488 = 7U;
	int32_t t3 = 2;

    t3 = ((x485>>(x486&x487))>>x488);

    if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x501 = 57U;
	int32_t x502 = -1;
	volatile int8_t x503 = 1;
	static int32_t t4 = 3;

    t4 = ((x501>>(x502&x503))>>x504);

    if (t4 != 7) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

