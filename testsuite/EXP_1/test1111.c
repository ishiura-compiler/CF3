#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x587 = 12U;


void f0(void) {
	static uint64_t x293 = 27LLU;
	int64_t x294 = 7LL;
	int32_t x295 = INT32_MIN;
	static uint32_t x296 = 4U;
	static int32_t t0 = 392311;

	t0 = (((x293>>x294)==x295)<<x296);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x389 = 235U;
	uint8_t x390 = 9U;
	int8_t x391 = 0;
	uint8_t x392 = 1U;
	int32_t t1 = 2223622;

	t1 = (((x389>>x390)==x391)<<x392);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x585 = 64468888LLU;
	int32_t x586 = 3;
	static uint16_t x588 = 0U;
	volatile int32_t t2 = 977239;

	t2 = (((x585>>x586)==x587)<<x588);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x733 = UINT8_MAX;
	volatile uint16_t x734 = 2U;
	static int16_t x735 = -289;
	int8_t x736 = 1;
	int32_t t3 = -513869537;

	t3 = (((x733>>x734)==x735)<<x736);

	if (t3 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

