#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x453 = INT64_MIN;
uint16_t x454 = UINT16_MAX;
volatile int32_t x455 = 3;


void f0(void) {
	int8_t x229 = -1;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 7LLU;
	uint32_t x232 = 0U;
	static int32_t t0 = 246212494;

	t0 = (((x229&x230)>>x231)<<x232);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x245 = 286612018683707LLU;
	int64_t x246 = INT64_MAX;
	uint16_t x247 = 14U;
	int8_t x248 = 2;
	volatile uint64_t t1 = 519125079079419531LLU;

	t1 = (((x245&x246)>>x247)<<x248);

	if (t1 != 69973637372LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x456 = 1;
	volatile int64_t t2 = 11536623534LL;

	t2 = (((x453&x454)>>x455)<<x456);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

