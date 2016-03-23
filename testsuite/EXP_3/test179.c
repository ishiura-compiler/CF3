
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

uint32_t x253 = UINT32_MAX;
uint32_t t1 = 9755278U;
uint64_t x271 = 5LLU;
uint64_t x272 = UINT64_MAX;
uint64_t x334 = 7687LLU;
int8_t x336 = -1;


void f0(void) {
    	volatile int32_t x161 = INT32_MAX;
	uint64_t x162 = 111LLU;
	volatile int8_t x163 = -3;
	volatile uint8_t x164 = 54U;
	volatile uint64_t t0 = 35717933LLU;

    t0 = ((x161|x162)>>(x163+x164));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x254 = INT32_MIN;
	volatile uint8_t x255 = 3U;
	int8_t x256 = -1;

    t1 = ((x253|x254)>>(x255+x256));

    if (t1 != 1073741823U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x269 = 14171376666LLU;
	static uint64_t x270 = 14939117LLU;
	uint64_t t2 = 44433384345341LLU;

    t2 = ((x269|x270)>>(x271+x272));

    if (t2 != 885981183LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x333 = INT8_MAX;
	uint8_t x335 = 1U;
	volatile uint64_t t3 = 856506030539LLU;

    t3 = ((x333|x334)>>(x335+x336));

    if (t3 != 7807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x337 = 22454077LLU;
	int32_t x338 = -8248995;
	int64_t x339 = -1LL;
	volatile int16_t x340 = 51;
	static volatile uint64_t t4 = 38849831107765893LLU;

    t4 = ((x337|x338)>>(x339+x340));

    if (t4 != 16383LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

