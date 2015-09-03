#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"



void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = 0U;
	int16_t x3 = 94;
	uint64_t x4 = 1LLU;
	static int64_t t0 = 6LL;

	t0 = ((x1%(x2<=x3))<<x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

