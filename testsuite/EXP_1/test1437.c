#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 1860875;
int8_t x17 = 0;


void f0(void) {
	static int16_t x1 = 453;
	int8_t x2 = -1;
	static uint32_t x3 = 6U;
	uint8_t x4 = 2U;

	t0 = (((x1<x2)>>x3)>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x18 = INT32_MIN;
	volatile int16_t x19 = 22;
	uint16_t x20 = 23U;
	static int32_t t1 = 1258;

	t1 = (((x17<x18)>>x19)>>x20);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x170 = 84142174201333718LL;
	uint8_t x171 = 2U;
	static int8_t x172 = 0;
	int32_t t2 = 1131252;

	t2 = (((x169<x170)>>x171)>>x172);

	if (t2 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

