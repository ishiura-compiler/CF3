#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 25842;


void f0(void) {
	int16_t x101 = 1;
	uint8_t x102 = 0U;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 0U;

	t0 = (x101<<(x102+(x103*x104)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = 1;
	uint8_t x131 = 0U;
	volatile int16_t x132 = INT16_MAX;
	static uint32_t t1 = 11209946U;

	t1 = (x129<<(x130+(x131*x132)));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x157 = 86189352573351559LLU;
	static int8_t x158 = 7;
	static volatile int8_t x159 = 0;
	int64_t x160 = INT64_MIN;
	static volatile uint64_t t2 = 312LLU;

	t2 = (x157<<(x158+(x159*x160)));

	if (t2 != 11032237129388999552LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x185 = 19U;
	int32_t x186 = -1;
	volatile int64_t x187 = -1LL;
	int16_t x188 = -1;
	volatile int32_t t3 = 1;

	t3 = (x185<<(x186+(x187*x188)));

	if (t3 != 19) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

