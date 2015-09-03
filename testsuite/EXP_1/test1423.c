#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
int32_t t0 = -3;
uint8_t x128 = 0U;
int32_t t2 = -7;
int32_t t3 = -7388600;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x3 = 21U;
	static volatile uint32_t x4 = 6U;

	t0 = (((x1<x2)<<x3)<<x4);

	if (t0 != 134217728) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x125 = -1;
	int64_t x126 = -31199419739LL;
	uint16_t x127 = 24U;
	volatile int32_t t1 = -22542;

	t1 = (((x125<x126)<<x127)<<x128);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x141 = 876061U;
	static uint16_t x142 = 1062U;
	static uint8_t x143 = 26U;
	int32_t x144 = 0;

	t2 = (((x141<x142)<<x143)<<x144);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x297 = INT64_MIN;
	static int16_t x298 = 0;
	int16_t x299 = 4;
	uint8_t x300 = 12U;

	t3 = (((x297<x298)<<x299)<<x300);

	if (t3 != 65536) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

