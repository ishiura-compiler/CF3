#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x395 = 0;
volatile int32_t x396 = 0;
uint32_t x415 = 7U;


void f0(void) {
	volatile int64_t x329 = -776LL;
	static int32_t x330 = INT32_MIN;
	volatile int8_t x331 = 7;
	static volatile int8_t x332 = 0;
	volatile int64_t t0 = 329217674664LL;

	t0 = (((x329*x330)<<x331)<<x332);

	if (t0 != 213305255788544LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x393 = -11;
	int32_t x394 = -20498838;
	volatile int32_t t1 = -771807021;

	t1 = (((x393*x394)<<x395)<<x396);

	if (t1 != 225487218) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x413 = UINT16_MAX;
	volatile int8_t x414 = 2;
	uint8_t x416 = 5U;
	int32_t t2 = -155238816;

	t2 = (((x413*x414)<<x415)<<x416);

	if (t2 != 536862720) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

