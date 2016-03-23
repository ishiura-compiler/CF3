
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

uint16_t x42 = 5U;
static int32_t t2 = 0;
int8_t x631 = 6;
int32_t t4 = -144265;
int8_t x908 = -1;
static int16_t x1104 = -5043;
uint8_t x1312 = UINT8_MAX;
int64_t x1564 = 29361855514LL;


void f0(void) {
    	uint32_t x41 = 296716U;
	uint32_t x43 = UINT32_MAX;
	volatile int8_t x44 = -1;
	volatile uint32_t t0 = 9115920U;

    t0 = (x41<<(x42-(x43&x44)));

    if (t0 != 18989824U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x145 = 518357558LLU;
	uint16_t x146 = 37U;
	int64_t x147 = -2LL;
	static int64_t x148 = 9LL;
	static uint64_t t1 = 499700LLU;

    t1 = (x145<<(x146-(x147&x148)));

    if (t1 != 278291094905552896LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x361 = 30;
	uint8_t x362 = 1U;
	volatile uint16_t x363 = 4U;
	volatile int16_t x364 = INT16_MIN;

    t2 = (x361<<(x362-(x363&x364)));

    if (t2 != 60) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x621 = 5933598LLU;
	uint64_t x622 = 14LLU;
	int8_t x623 = INT8_MAX;
	static uint32_t x624 = 4959237U;
	volatile uint64_t t3 = 3684834862LLU;

    t3 = (x621<<(x622-(x623&x624)));

    if (t3 != 3038002176LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x629 = UINT16_MAX;
	int8_t x630 = 0;
	static uint16_t x632 = 25U;

    t4 = (x629<<(x630-(x631&x632)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x669 = 29;
	volatile int32_t x670 = 67;
	int64_t x671 = 768297162648271541LL;
	volatile int8_t x672 = INT8_MAX;
	volatile int32_t t5 = 16269374;

    t5 = (x669<<(x670-(x671&x672)));

    if (t5 != 475136) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x905 = 1U;
	int8_t x906 = 1;
	volatile int64_t x907 = -1LL;
	volatile int32_t t6 = 12890;

    t6 = (x905<<(x906-(x907&x908)));

    if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x1101 = UINT16_MAX;
	int16_t x1102 = INT16_MIN;
	volatile int16_t x1103 = INT16_MIN;
	int32_t t7 = 18487987;

    t7 = (x1101<<(x1102-(x1103&x1104)));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x1309 = UINT16_MAX;
	int8_t x1310 = INT8_MAX;
	uint8_t x1311 = 119U;
	volatile int32_t t8 = 2;

    t8 = (x1309<<(x1310-(x1311&x1312)));

    if (t8 != 16776960) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1561 = INT8_MAX;
	volatile int32_t x1562 = 1;
	uint64_t x1563 = 1LLU;
	int32_t t9 = -262793057;

    t9 = (x1561<<(x1562-(x1563&x1564)));

    if (t9 != 254) { NG(); } else { ; }
	
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


    return 0;
}

