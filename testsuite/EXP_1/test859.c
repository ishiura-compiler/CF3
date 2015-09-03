#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x18 = 7U;
uint16_t x26 = 1U;
int64_t x28 = INT64_MAX;


void f0(void) {
	uint64_t x17 = 309635367LLU;
	uint64_t x19 = 7959095938562LLU;
	int16_t x20 = -1;
	static uint64_t t0 = 4LLU;

	t0 = (((x17<<x18)-x19)+x20);

	if (t0 != 18446736154246940029LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x25 = 60U;
	static uint64_t x27 = UINT64_MAX;
	volatile uint64_t t1 = 584LLU;

	t1 = (((x25<<x26)-x27)+x28);

	if (t1 != 9223372036854775928LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

