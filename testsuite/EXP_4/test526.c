#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x41 = UINT32_MAX;


void f0(void) {
	int8_t x42 = -1;
	int8_t x43 = INT8_MAX;
	static int8_t x44 = -18;
	static volatile uint32_t t0 = 224016294U;

	t0 = (x41<<(x42-(x43/x44)));

	if (t0 != 4294967232U) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

