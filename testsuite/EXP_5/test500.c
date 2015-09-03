#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	int16_t x145 = 3;
	static int32_t x146 = INT32_MIN;
	uint32_t x147 = 1358U;
	static int8_t x148 = 1;
	volatile int32_t t0 = 12;

	t0 = (x145<<((x146*x147)^x148));

	if (t0 != 6) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

