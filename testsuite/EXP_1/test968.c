#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	uint16_t x9 = 2U;
	int8_t x10 = 4;
	volatile int8_t x11 = -1;
	uint8_t x12 = 4U;
	static volatile int32_t t0 = -100093656;

	t0 = (((x9<<x10)<=x11)<<x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

