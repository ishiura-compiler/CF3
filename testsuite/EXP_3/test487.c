#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x12 = -1LL;
int16_t x137 = 309;
static uint16_t x138 = UINT16_MAX;
volatile int32_t t2 = 2;
uint64_t x413 = UINT64_MAX;
uint32_t x414 = UINT32_MAX;
volatile int32_t x416 = 0;


void f0(void) {
	int64_t x9 = -31LL;
	static uint64_t x10 = 760909LLU;
	int16_t x11 = -1;
	uint64_t t0 = 6LLU;

	t0 = ((x9|x10)<<(x11*x12));

	if (t0 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x139 = 11127U;
	static int8_t x140 = 0;
	volatile int32_t t1 = -339929064;

	t1 = ((x137|x138)<<(x139*x140));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x253 = INT16_MAX;
	volatile uint8_t x254 = 1U;
	static uint32_t x255 = 0U;
	uint16_t x256 = 0U;

	t2 = ((x253|x254)<<(x255*x256));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x405 = UINT16_MAX;
	uint32_t x406 = 105131202U;
	static int8_t x407 = -1;
	volatile int32_t x408 = -1;
	static volatile uint32_t t3 = 9737431U;

	t3 = ((x405|x406)<<(x407*x408));

	if (t3 != 210370558U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x415 = INT32_MAX;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = ((x413|x414)<<(x415*x416));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

