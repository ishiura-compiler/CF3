#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x70 = INT16_MIN;


void f0(void) {
	uint32_t x69 = 10U;
	int16_t x71 = 0;
	volatile uint8_t x72 = 0U;
	volatile uint32_t t0 = 40976U;

	t0 = ((x69|x70)<<(x71|x72));

	if (t0 != 4294934538U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x293 = -1;
	static uint32_t x294 = UINT32_MAX;
	volatile int8_t x295 = 1;
	volatile uint8_t x296 = 4U;
	volatile uint32_t t1 = 2053750U;

	t1 = ((x293|x294)<<(x295|x296));

	if (t1 != 4294967264U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

