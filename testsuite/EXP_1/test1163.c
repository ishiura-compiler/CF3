#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x354 = 0;


void f0(void) {
	uint64_t x353 = UINT64_MAX;
	uint64_t x355 = 48LLU;
	volatile int8_t x356 = 7;
	uint64_t t0 = 836930424133023404LLU;

	t0 = (((x353>>x354)|x355)<<x356);

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

