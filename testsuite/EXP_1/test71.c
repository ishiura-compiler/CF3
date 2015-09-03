#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x61 = INT16_MIN;


void f0(void) {
	uint64_t x62 = 976681866LLU;
	static uint64_t x63 = 6LLU;
	uint16_t x64 = 12U;
	volatile uint64_t t0 = 375LLU;

	t0 = (((x61+x62)<<x63)<<x64);

	if (t0 != 256022701146112LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

