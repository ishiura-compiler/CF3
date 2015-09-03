#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x54 = 1;
uint8_t x242 = 2U;
static uint32_t x244 = UINT32_MAX;


void f0(void) {
	uint8_t x53 = 50U;
	int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MAX;
	volatile int32_t t0 = -35520589;

	t0 = (x53<<(x54+(x55-x56)));

	if (t0 != 100) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = 0;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	static volatile int32_t t1 = -244232;

	t1 = (x173<<(x174+(x175-x176)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x241 = 13;
	uint32_t x243 = 7U;
	volatile int32_t t2 = -1807;

	t2 = (x241<<(x242+(x243-x244)));

	if (t2 != 13312) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

