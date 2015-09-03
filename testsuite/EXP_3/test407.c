#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x55 = UINT64_MAX;
volatile uint8_t x62 = 10U;
int8_t x173 = INT8_MAX;
int64_t t4 = -823996LL;


void f0(void) {
	int32_t x17 = 93603;
	uint16_t x18 = 13U;
	int64_t x19 = -1711699861086572LL;
	int8_t x20 = INT8_MIN;
	volatile int64_t t0 = -190LL;

	t0 = ((x17<<x18)/(x19*x20));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 7U;
	int8_t x56 = INT8_MAX;
	volatile uint64_t t1 = 2546576LLU;

	t1 = ((x53<<x54)/(x55*x56));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x61 = 25U;
	int16_t x63 = 1;
	static int32_t x64 = -1;
	volatile int32_t t2 = -1;

	t2 = ((x61<<x62)/(x63*x64));

	if (t2 != -25600) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x69 = UINT8_MAX;
	volatile uint8_t x70 = 1U;
	volatile int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t3 = 3;

	t3 = ((x69<<x70)/(x71*x72));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x174 = 12U;
	int64_t x175 = -4387125293362962LL;
	static uint8_t x176 = 1U;

	t4 = ((x173<<x174)/(x175*x176));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

