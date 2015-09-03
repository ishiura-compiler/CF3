#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x35 = 1;


void f0(void) {
	volatile int32_t x33 = INT32_MAX;
	int32_t x34 = 0;
	static uint8_t x36 = 23U;
	int32_t t0 = INT32_MAX;

	t0 = (x33<<((x34*x35)<<x36));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

