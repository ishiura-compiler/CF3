#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x382 = 0;


void f0(void) {
	uint32_t x173 = 1367125544U;
	int8_t x174 = 4;
	volatile uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	volatile uint32_t t0 = 127985U;

	t0 = (x173<<(x174<<(x175*x176)));

	if (t0 != 2091788288U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile uint64_t x383 = 0LLU;
	int64_t x384 = INT64_MIN;
	int32_t t1 = -19;

	t1 = (x381<<(x382<<(x383*x384)));

	if (t1 != 255) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

