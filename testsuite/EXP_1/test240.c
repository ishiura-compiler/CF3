#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x331 = 0LL;


void f0(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 25627LLU;
	static int8_t x332 = 2;
	uint64_t t0 = 12935033LLU;

	t0 = (((x329-x330)<<x331)<<x332);

	if (t0 != 18446744065119514516LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

