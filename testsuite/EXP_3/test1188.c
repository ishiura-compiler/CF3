#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x83 = UINT64_MAX;
static uint8_t x206 = 93U;
int16_t x213 = INT16_MAX;
int16_t x214 = INT16_MIN;
int64_t t4 = 17128305128811474LL;
uint16_t x582 = 101U;
static int64_t x584 = INT64_MIN;


void f0(void) {
	int16_t x81 = -1;
	volatile int32_t x82 = -1;
	volatile uint64_t x84 = UINT64_MAX;
	volatile int32_t t0 = 2;

	t0 = ((x81+x82)%(x83==x84));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x181 = 170190965518LL;
	int32_t x182 = INT32_MIN;
	volatile int8_t x183 = -1;
	volatile int16_t x184 = -1;
	int64_t t1 = 930954LL;

	t1 = ((x181+x182)%(x183==x184));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x205 = INT8_MAX;
	volatile int16_t x207 = -1;
	uint32_t x208 = UINT32_MAX;
	int32_t t2 = 1930;

	t2 = ((x205+x206)%(x207==x208));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t3 = 611;

	t3 = ((x213+x214)%(x215==x216));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x489 = 261;
	static volatile int64_t x490 = 267704088355324LL;
	volatile int32_t x491 = -1;
	uint32_t x492 = UINT32_MAX;

	t4 = ((x489+x490)%(x491==x492));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x581 = INT32_MIN;
	int64_t x583 = INT64_MIN;
	int32_t t5 = 104089258;

	t5 = ((x581+x582)%(x583==x584));

	if (t5 != 0) { NG(); } else { ; }
	
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

