#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x330 = 101LLU;
volatile uint64_t x331 = 9LLU;
uint8_t x332 = 21U;
int16_t x466 = 63;
volatile int16_t x467 = 0;


void f0(void) {
	int8_t x153 = 3;
	static volatile int8_t x154 = 1;
	uint32_t x155 = 22U;
	int8_t x156 = 13;
	static int32_t t0 = -220;

	t0 = ((x153-(x154>>x155))<<x156);

	if (t0 != 24576) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x329 = -231;
	volatile uint64_t t1 = 5075373LLU;

	t1 = ((x329-(x330>>x331))<<x332);

	if (t1 != 18446744073225109504LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x465 = UINT64_MAX;
	int32_t x468 = 1;
	static volatile uint64_t t2 = 2115LLU;

	t2 = ((x465-(x466>>x467))<<x468);

	if (t2 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

