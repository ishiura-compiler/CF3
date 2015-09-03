#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
uint8_t x11 = 0U;


void f0(void) {
	volatile uint16_t x9 = 12U;
	volatile uint8_t x12 = 1U;
	volatile int32_t t0 = -7;

	t0 = ((x9<x10)<<(x11|x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

