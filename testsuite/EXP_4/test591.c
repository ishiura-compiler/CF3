#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x229 = 731648017U;


void f0(void) {
	uint64_t x45 = 1400396650878463656LLU;
	static volatile int16_t x46 = 1;
	static uint32_t x47 = UINT32_MAX;
	uint64_t x48 = UINT64_MAX;
	uint64_t t0 = 1448072729889LLU;

	t0 = (x45<<(x46>>(x47/x48)));

	if (t0 != 2800793301756927312LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x57 = 1;
	int8_t x58 = 0;
	volatile int16_t x59 = -1;
	static int32_t x60 = -2805416;
	int32_t t1 = -18818541;

	t1 = (x57<<(x58>>(x59/x60)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x230 = 0U;
	static volatile int8_t x231 = -1;
	int64_t x232 = -1676895LL;
	uint32_t t2 = 214U;

	t2 = (x229<<(x230>>(x231/x232)));

	if (t2 != 731648017U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x257 = 28066U;
	uint8_t x258 = 31U;
	volatile int8_t x259 = INT8_MAX;
	int16_t x260 = INT16_MIN;
	static volatile uint32_t t3 = 434U;

	t3 = (x257<<(x258>>(x259/x260)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x261 = 2061838U;
	static int8_t x262 = 13;
	int32_t x263 = 1;
	uint16_t x264 = 3442U;
	volatile uint32_t t4 = 1166U;

	t4 = (x261<<(x262>>(x263/x264)));

	if (t4 != 4005675008U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

