#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x269 = 4979287U;
uint32_t t0 = 218U;
int16_t x363 = -1;
uint8_t x364 = 16U;


void f0(void) {
	volatile uint64_t x270 = 1LLU;
	uint8_t x271 = 2U;
	uint8_t x272 = 2U;

	t0 = ((x269<<(x270*x271))<<x272);

	if (t0 != 79668592U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x361 = 5081U;
	int16_t x362 = -1;
	uint32_t t1 = 4421U;

	t1 = ((x361<<(x362*x363))<<x364);

	if (t1 != 665976832U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

