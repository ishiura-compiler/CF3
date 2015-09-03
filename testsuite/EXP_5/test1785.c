#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x113 = INT64_MAX;
uint8_t x114 = 9U;
static volatile int8_t x115 = INT8_MIN;


void f0(void) {
	int8_t x116 = 0;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x113/((x114&x115)==x116));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = -6863;
	static int16_t x123 = INT16_MIN;
	static int16_t x124 = INT16_MIN;
	int64_t t1 = INT64_MIN;

	t1 = (x121/((x122&x123)==x124));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x285 = -1LL;
	uint64_t x286 = 141174081LLU;
	uint16_t x287 = 9U;
	uint16_t x288 = 1U;
	int64_t t2 = 3445LL;

	t2 = (x285/((x286&x287)==x288));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

