#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	uint8_t x233 = 1U;
	static int64_t x234 = -1LL;
	uint8_t x235 = 3U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t0 = 6777;

	t0 = ((x233<<(x234+x235))+x236);

	if (t0 != -32764) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

