#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	uint64_t x65 = 198385LLU;
	uint8_t x66 = 1U;
	volatile int16_t x67 = -4;
	volatile int64_t x68 = -1LL;
	volatile uint64_t t0 = 907LLU;

	t0 = (x65<<((x66-x67)+x68));

	if (t0 != 3174160LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x325 = 6774;
	static volatile uint64_t x326 = 2LLU;
	uint64_t x327 = UINT64_MAX;
	int64_t x328 = -1LL;
	int32_t t1 = 4432575;

	t1 = (x325<<((x326-x327)+x328));

	if (t1 != 27096) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

