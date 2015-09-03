#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x41 = UINT32_MAX;
int32_t t1 = -9906723;


void f0(void) {
	uint8_t x42 = 1U;
	int64_t x43 = 8362821LL;
	uint16_t x44 = 31U;
	uint32_t t0 = 905207740U;

	t0 = ((x41^x42)<<(x43>>x44));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x193 = 1406U;
	volatile uint16_t x194 = 26U;
	uint8_t x195 = 23U;
	static volatile int8_t x196 = 14;

	t1 = ((x193^x194)<<(x195>>x196));

	if (t1 != 1380) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

