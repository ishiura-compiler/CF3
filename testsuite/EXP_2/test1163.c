#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 50645U;
volatile uint8_t x600 = 19U;


void f0(void) {
	uint32_t x269 = 13U;
	int16_t x270 = 56;
	static uint16_t x271 = 1U;
	int8_t x272 = 3;

	t0 = ((x269|(x270>>x271))<<x272);

	if (t0 != 232U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x597 = -137391650;
	uint32_t x598 = UINT32_MAX;
	volatile uint64_t x599 = 1LLU;
	uint32_t t1 = 0U;

	t1 = ((x597|(x598>>x599))<<x600);

	if (t1 != 4294443008U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

