#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x331 = 11;
static int32_t t0 = 586198;
static int32_t x397 = 1;
int64_t t1 = -7763438458LL;
static int16_t x457 = 228;


void f0(void) {
	uint16_t x329 = 120U;
	int8_t x330 = 50;
	int8_t x332 = 1;

	t0 = ((x329%x330)<<(x331|x332));

	if (t0 != 40960) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x398 = INT64_MIN;
	volatile uint16_t x399 = 15U;
	uint16_t x400 = 10U;

	t1 = ((x397%x398)<<(x399|x400));

	if (t1 != 32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x458 = -1LL;
	int32_t x459 = 1;
	uint16_t x460 = 4U;
	int64_t t2 = -841096LL;

	t2 = ((x457%x458)<<(x459|x460));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x573 = UINT16_MAX;
	int64_t x574 = -36LL;
	uint32_t x575 = 8U;
	uint16_t x576 = 0U;
	volatile int64_t t3 = -1483127LL;

	t3 = ((x573%x574)<<(x575|x576));

	if (t3 != 3840LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

