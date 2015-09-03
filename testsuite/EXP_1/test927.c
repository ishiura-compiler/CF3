#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	volatile uint32_t x2 = 7U;
	uint8_t x3 = 2U;
	static uint16_t x4 = 6969U;
	volatile int32_t t0 = -218;

	t0 = (((x1<<x2)>>x3)/x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

