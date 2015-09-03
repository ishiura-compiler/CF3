#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x95 = -1;
static int64_t x96 = -1LL;
int8_t x481 = -1;


void f0(void) {
	uint16_t x29 = 3U;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -1;
	static volatile uint32_t x32 = UINT32_MAX;
	int32_t t0 = 0;

	t0 = ((x29<x30)%(x31==x32));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	volatile int32_t t1 = -1421941;

	t1 = ((x93<x94)%(x95==x96));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x285 = -1;
	volatile uint16_t x286 = 754U;
	int8_t x287 = -1;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t2 = 1;

	t2 = ((x285<x286)%(x287==x288));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x482 = INT8_MIN;
	uint32_t x483 = UINT32_MAX;
	int32_t x484 = -1;
	volatile int32_t t3 = 214005;

	t3 = ((x481<x482)%(x483==x484));

	if (t3 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

