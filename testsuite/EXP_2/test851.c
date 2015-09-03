#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x461 = 6LLU;
uint64_t t1 = 365019550LLU;


void f0(void) {
	int16_t x373 = -13;
	uint64_t x374 = 17894375704995699LLU;
	volatile uint16_t x375 = 2U;
	uint16_t x376 = 0U;
	uint64_t t0 = 1672148687822360359LLU;

	t0 = ((x373+(x374<<x375))<<x376);

	if (t0 != 71577502819982783LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x462 = 378109450U;
	int8_t x463 = 2;
	int16_t x464 = 0;

	t1 = ((x461+(x462<<x463))<<x464);

	if (t1 != 1512437806LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

