#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x65 = 165726U;


void f0(void) {
	static int32_t x66 = 1;
	volatile uint8_t x67 = 0U;
	int16_t x68 = -686;
	volatile uint32_t t0 = 181465371U;

	t0 = (x65<<(x66-(x67*x68)));

	if (t0 != 331452U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x81 = 50137892540865039LLU;
	int8_t x82 = 1;
	volatile int16_t x83 = -31;
	uint8_t x84 = 1U;
	volatile uint64_t t1 = 818592512651299033LLU;

	t1 = (x81<<(x82-(x83*x84)));

	if (t1 != 14604991137056817152LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = -1;
	volatile int8_t x187 = 1;
	int32_t x188 = -1;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x185<<(x186-(x187*x188)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

