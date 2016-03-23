
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

int32_t x21 = 4;
static volatile int16_t x24 = 1;
int8_t x80 = 1;
static uint16_t x308 = 1U;
uint64_t x369 = 1LLU;
int8_t x643 = -1;
uint64_t t6 = 1LLU;


void f0(void) {
    	uint64_t x22 = UINT64_MAX;
	volatile uint16_t x23 = 14U;
	volatile int32_t t0 = 12295;

    t0 = ((x21<<(x22%x23))>>x24);

    if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x77 = INT16_MAX;
	static int32_t x78 = -249;
	volatile int8_t x79 = 1;
	volatile int32_t t1 = -471;

    t1 = ((x77<<(x78%x79))>>x80);

    if (t1 != 16383) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x305 = 0;
	volatile int64_t x306 = INT64_MAX;
	int16_t x307 = -4;
	volatile int32_t t2 = -19943392;

    t2 = ((x305<<(x306%x307))>>x308);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x370 = 17U;
	int16_t x371 = 101;
	static volatile uint16_t x372 = 0U;
	uint64_t t3 = 469188LLU;

    t3 = ((x369<<(x370%x371))>>x372);

    if (t3 != 131072LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x569 = 9182827812212LLU;
	int64_t x570 = INT64_MIN;
	static int8_t x571 = -1;
	int8_t x572 = 30;
	static volatile uint64_t t4 = 7620006615152823LLU;

    t4 = ((x569<<(x570%x571))>>x572);

    if (t4 != 8552LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x641 = 1;
	uint16_t x642 = UINT16_MAX;
	static volatile uint8_t x644 = 11U;
	volatile int32_t t5 = 480906235;

    t5 = ((x641<<(x642%x643))>>x644);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x845 = 0LLU;
	static uint8_t x846 = UINT8_MAX;
	int64_t x847 = -1LL;
	uint16_t x848 = 3U;

    t6 = ((x845<<(x846%x847))>>x848);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

