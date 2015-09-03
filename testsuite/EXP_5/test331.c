#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x226 = 0U;


void f0(void) {
	uint32_t x225 = 3187U;
	static uint32_t x227 = UINT32_MAX;
	volatile int16_t x228 = 10;
	uint32_t t0 = 2U;

	t0 = (x225<<((x226-x227)^x228));

	if (t0 != 6526976U) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

