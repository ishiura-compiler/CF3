#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	static int16_t x153 = 47;
	uint8_t x154 = 1U;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = -1;
	volatile int32_t t0 = -1568772;

	t0 = (x153<<(x154|(x155%x156)));

	if (t0 != 94) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

