#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x42 = -1;
volatile uint16_t x44 = 4U;


void f0(void) {
	int32_t x41 = 1297;
	int8_t x43 = 2;
	int32_t t0 = -4121501;

	t0 = ((x41+x42)<<(x43|x44));

	if (t0 != 82944) { NG(); } else { ; }
	
}

int main(void) {
    f0();


    return 0;
}

