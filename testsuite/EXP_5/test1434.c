#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x238 = -38259556719846LL;
uint32_t t0 = 1938321921U;
int16_t x262 = INT16_MIN;
uint8_t x269 = 0U;


void f0(void) {
	uint32_t x237 = 33U;
	static volatile uint16_t x239 = UINT16_MAX;
	int8_t x240 = 0;

	t0 = (x237/((x238<x239)>>x240));

	if (t0 != 33U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x261 = INT64_MAX;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = 0;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x261/((x262<x263)>>x264));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x270 = 26671433675801LLU;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = 0U;
	static volatile int32_t t2 = -2287;

	t2 = (x269/((x270<x271)>>x272));

	if (t2 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

