#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x206 = -1;
int32_t x208 = -1;
int32_t x377 = INT32_MIN;
uint16_t x380 = UINT16_MAX;
volatile int32_t t2 = -151748;
int32_t t4 = -2744444;
int32_t x636 = -1;
volatile uint64_t t5 = 81468LLU;
uint64_t x641 = 678880571693708592LLU;
int16_t x644 = -1;


void f0(void) {
	static int32_t x149 = -1;
	static int64_t x150 = INT64_MIN;
	static volatile int64_t x151 = -1LL;
	int8_t x152 = -1;
	volatile int64_t t0 = INT64_MAX;

	t0 = ((x149^x150)/(x151==x152));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x205 = INT64_MIN;
	volatile int16_t x207 = -1;
	static volatile int64_t t1 = INT64_MAX;

	t1 = ((x205^x206)/(x207==x208));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x378 = 1U;
	uint16_t x379 = UINT16_MAX;

	t2 = ((x377^x378)/(x379==x380));

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x569 = INT8_MIN;
	static int8_t x570 = -45;
	int32_t x571 = -1;
	static volatile int16_t x572 = -1;
	int32_t t3 = -466428;

	t3 = ((x569^x570)/(x571==x572));

	if (t3 != 83) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x629 = INT8_MIN;
	volatile int32_t x630 = INT32_MIN;
	int8_t x631 = -1;
	static int8_t x632 = -1;

	t4 = ((x629^x630)/(x631==x632));

	if (t4 != 2147483520) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x633 = INT16_MAX;
	volatile uint64_t x634 = UINT64_MAX;
	static int8_t x635 = -1;

	t5 = ((x633^x634)/(x635==x636));

	if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x642 = UINT8_MAX;
	int16_t x643 = -1;
	volatile uint64_t t6 = 4994633LLU;

	t6 = ((x641^x642)/(x643==x644));

	if (t6 != 678880571693708751LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

