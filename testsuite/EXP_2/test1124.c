#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 10;
uint64_t x269 = 1257529777258LLU;
volatile int8_t x272 = 28;
static volatile int16_t x609 = 20;
uint64_t x612 = 15LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint8_t x3 = 8U;
	uint64_t x4 = 4LLU;
	int32_t t0 = -1;

	t0 = ((x1<(x2>>x3))<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x270 = 1329411LL;
	volatile uint8_t x271 = 24U;
	volatile int32_t t1 = 12486;

	t1 = ((x269<(x270>>x271))<<x272);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x610 = 1U;
	uint16_t x611 = 4U;
	volatile int32_t t2 = 1792053;

	t2 = ((x609<(x610>>x611))<<x612);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x653 = 12U;
	uint8_t x654 = 15U;
	static volatile uint8_t x655 = 5U;
	static int8_t x656 = 6;
	volatile int32_t t3 = -221571;

	t3 = ((x653<(x654>>x655))<<x656);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x865 = 197778074426LL;
	volatile uint64_t x866 = 2072714710933155LLU;
	volatile uint8_t x867 = 6U;
	static int16_t x868 = 0;
	static volatile int32_t t4 = -16054;

	t4 = ((x865<(x866>>x867))<<x868);

	if (t4 != 1) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

