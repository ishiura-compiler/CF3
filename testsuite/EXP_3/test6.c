
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

static volatile int64_t x107 = 1LL;
static volatile uint8_t x108 = 9U;
uint16_t x249 = 835U;
int8_t x251 = 29;
static int16_t x680 = 5;


void f0(void) {
    	static volatile uint8_t x105 = 0U;
	uint16_t x106 = 1189U;
	int32_t t0 = 0;

    t0 = ((x105+x106)<<(x107+x108));

    if (t0 != 1217536) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x250 = -1LL;
	int8_t x252 = 0;
	volatile int64_t t1 = 853928127718627365LL;

    t1 = ((x249+x250)<<(x251+x252));

    if (t1 != 447750340608LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x429 = 202511127009016LLU;
	uint64_t x430 = 31869914633LLU;
	int32_t x431 = -1;
	uint8_t x432 = 1U;
	volatile uint64_t t2 = 9493LLU;

    t2 = ((x429+x430)<<(x431+x432));

    if (t2 != 202542996923649LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x589 = UINT64_MAX;
	uint32_t x590 = 0U;
	int8_t x591 = -1;
	volatile uint8_t x592 = 17U;
	uint64_t t3 = 16483LLU;

    t3 = ((x589+x590)<<(x591+x592));

    if (t3 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x677 = 5516487LLU;
	static int64_t x678 = INT64_MAX;
	int16_t x679 = -1;
	volatile uint64_t t4 = 705186628LLU;

    t4 = ((x677+x678)<<(x679+x680));

    if (t4 != 88263776LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x845 = 397U;
	static uint64_t x846 = UINT64_MAX;
	static int8_t x847 = 1;
	static uint8_t x848 = 3U;
	volatile uint64_t t5 = 111948295102561844LLU;

    t5 = ((x845+x846)<<(x847+x848));

    if (t5 != 6336LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

