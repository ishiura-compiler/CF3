
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

volatile uint32_t x115 = 63U;
volatile uint16_t x143 = 1U;
uint64_t x199 = UINT64_MAX;
volatile int16_t x429 = -782;
volatile uint64_t t6 = 3022307347125326191LLU;
int32_t x609 = INT32_MIN;
static int64_t x610 = -1LL;
static uint64_t x763 = UINT64_MAX;
int16_t x1019 = 0;
volatile uint8_t x1020 = 13U;
static int16_t x1097 = INT16_MAX;
int64_t t11 = -134995679300LL;
uint64_t x1334 = 534153104LLU;
int64_t x1335 = 1LL;


void f0(void) {
    	static int32_t x113 = -1;
	int64_t x114 = -1LL;
	static int8_t x116 = -1;
	volatile int64_t t0 = -64LL;

    t0 = ((x113*x114)>>(x115+x116));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x141 = 0LLU;
	uint64_t x142 = UINT64_MAX;
	int32_t x144 = -1;
	uint64_t t1 = 40659LLU;

    t1 = ((x141*x142)>>(x143+x144));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x145 = UINT8_MAX;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = -1;
	uint64_t x148 = 4LLU;
	volatile int32_t t2 = 28433305;

    t2 = ((x145*x146)>>(x147+x148));

    if (t2 != 8128) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x197 = 62U;
	static int16_t x198 = 2085;
	uint8_t x200 = 6U;
	uint32_t t3 = 1725U;

    t3 = ((x197*x198)>>(x199+x200));

    if (t3 != 4039U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x293 = 0;
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = 46LL;
	volatile int16_t x296 = -1;
	volatile uint64_t t4 = 1493110LLU;

    t4 = ((x293*x294)>>(x295+x296));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x430 = 468526376905LLU;
	uint64_t x431 = UINT64_MAX;
	int8_t x432 = 22;
	volatile uint64_t t5 = 8241313716820510LLU;

    t5 = ((x429*x430)>>(x431+x432));

    if (t5 != 8795918314973LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x553 = UINT64_MAX;
	int64_t x554 = 1117LL;
	int64_t x555 = 0LL;
	int64_t x556 = 0LL;

    t6 = ((x553*x554)>>(x555+x556));

    if (t6 != 18446744073709550499LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x611 = 43U;
	static volatile int8_t x612 = -1;
	int64_t t7 = 33769091975984179LL;

    t7 = ((x609*x610)>>(x611+x612));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x709 = 0;
	volatile int64_t x710 = -4340016121692106498LL;
	uint8_t x711 = 13U;
	int16_t x712 = -1;
	int64_t t8 = 928708203LL;

    t8 = ((x709*x710)>>(x711+x712));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x761 = INT64_MIN;
	uint64_t x762 = 2673554995839354253LLU;
	uint16_t x764 = 1U;
	volatile uint64_t t9 = 6LLU;

    t9 = ((x761*x762)>>(x763+x764));

    if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x1017 = -1;
	int8_t x1018 = INT8_MIN;
	volatile int32_t t10 = 26559;

    t10 = ((x1017*x1018)>>(x1019+x1020));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x1098 = 73119818LL;
	uint8_t x1099 = 59U;
	int64_t x1100 = -1LL;

    t11 = ((x1097*x1098)>>(x1099+x1100));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1333 = UINT8_MAX;
	volatile int8_t x1336 = 1;
	uint64_t t12 = 27640931LLU;

    t12 = ((x1333*x1334)>>(x1335+x1336));

    if (t12 != 34052260380LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();


    return 0;
}

