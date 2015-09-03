#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 20;
int16_t x242 = -1;
uint64_t x244 = 5LLU;
volatile int16_t x538 = INT16_MIN;


void f0(void) {
	int8_t x229 = 3;
	uint16_t x230 = UINT16_MAX;
	static volatile uint16_t x231 = UINT16_MAX;
	static uint16_t x232 = 9U;

	t0 = (x229<<((x230%x231)<<x232));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x241 = 1U;
	int16_t x243 = -1;
	static volatile int32_t t1 = -592672263;

	t1 = (x241<<((x242%x243)<<x244));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x489 = 2U;
	volatile int16_t x490 = -1;
	static uint64_t x491 = UINT64_MAX;
	uint16_t x492 = 1U;
	volatile int32_t t2 = 110297158;

	t2 = (x489<<((x490%x491)<<x492));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x537 = 64U;
	int8_t x539 = INT8_MIN;
	uint32_t x540 = 0U;
	volatile uint32_t t3 = 6064U;

	t3 = (x537<<((x538%x539)<<x540));

	if (t3 != 64U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

