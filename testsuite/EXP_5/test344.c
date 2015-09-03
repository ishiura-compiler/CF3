#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	uint64_t x121 = 3589LLU;
	uint8_t x122 = 4U;
	static volatile uint64_t x123 = 2LLU;
	uint8_t x124 = 9U;
	volatile uint64_t t0 = 113314896734493LLU;

	t0 = (x121<<((x122*x123)+x124));

	if (t0 != 470417408LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x253 = 37;
	static volatile uint8_t x254 = 1U;
	int64_t x255 = -1LL;
	static int32_t x256 = 4;
	volatile int32_t t1 = -462;

	t1 = (x253<<((x254*x255)+x256));

	if (t1 != 296) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

