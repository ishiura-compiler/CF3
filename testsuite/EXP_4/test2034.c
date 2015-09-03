#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x738 = -1;


void f0(void) {
	static uint8_t x329 = 1U;
	int32_t x330 = 1;
	int32_t x331 = 1;
	int8_t x332 = 1;
	int32_t t0 = -6514236;

	t0 = (x329<<(x330+(x331^x332)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x725 = 15U;
	int16_t x726 = 1;
	int16_t x727 = -1;
	static int32_t x728 = -1;
	volatile uint32_t t1 = 139382U;

	t1 = (x725<<(x726+(x727^x728)));

	if (t1 != 30U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x737 = 928U;
	int64_t x739 = 2LL;
	static volatile int8_t x740 = 0;
	volatile int32_t t2 = 162;

	t2 = (x737<<(x738+(x739^x740)));

	if (t2 != 1856) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

