#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x2 = 11;
	int64_t x3 = 3LL;
	uint64_t x4 = 0LLU;
	static volatile int32_t t0 = 63624977;

	t0 = (x1>>(x2|(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

