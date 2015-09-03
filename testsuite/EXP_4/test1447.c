#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 2;


void f0(void) {
	int8_t x61 = INT8_MAX;
	static uint16_t x62 = 1U;
	uint16_t x63 = 129U;
	volatile int64_t x64 = INT64_MAX;
	static int32_t t0 = 26421;

	t0 = (x61/(x62==(x63<x64)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x121 = INT8_MAX;
	uint8_t x122 = 1U;
	static volatile int64_t x123 = INT64_MIN;
	int64_t x124 = -1LL;

	t1 = (x121/(x122==(x123<x124)));

	if (t1 != 127) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

