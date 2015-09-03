#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x268 = 3;


void f0(void) {
	int64_t x265 = -127655907256846846LL;
	uint64_t x266 = 553618783074312576LLU;
	int8_t x267 = 18;
	static volatile uint64_t t0 = 4463686586633633LLU;

	t0 = ((x265-x266)<<(x267|x268));

	if (t0 != 160654895136899072LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x389 = INT16_MAX;
	int8_t x390 = INT8_MAX;
	volatile int16_t x391 = 7;
	static int16_t x392 = 10;
	volatile int32_t t1 = 15002957;

	t1 = ((x389-x390)<<(x391|x392));

	if (t1 != 1069547520) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x577 = 6;
	int64_t x578 = -455LL;
	uint8_t x579 = 0U;
	static uint64_t x580 = 3LLU;
	volatile int64_t t2 = -937399865LL;

	t2 = ((x577-x578)<<(x579|x580));

	if (t2 != 3688LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

