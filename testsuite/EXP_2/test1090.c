#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 2U;


void f0(void) {
	uint64_t x1 = 174173848551192LLU;
	uint8_t x3 = 1U;
	static int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 112406LLU;

	t0 = ((x1<<(x2>>x3))&x4);

	if (t0 != 348347617509376LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

