#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	uint64_t x205 = 119125031LLU;
	static volatile int16_t x206 = -1;
	int64_t x207 = -1LL;
	static uint32_t x208 = 3U;
	uint64_t t0 = 44174111662451012LLU;

	t0 = (x205<<((x206+x207)+x208));

	if (t0 != 238250062LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x609 = UINT8_MAX;
	int32_t x610 = 7;
	int16_t x611 = 4;
	uint64_t x612 = UINT64_MAX;
	int32_t t1 = -1602693;

	t1 = (x609<<((x610+x611)+x612));

	if (t1 != 261120) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

