#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x274 = 28649280U;


void f0(void) {
	static int32_t x273 = INT32_MIN;
	int8_t x275 = 1;
	int8_t x276 = 2;
	volatile int32_t t0 = -1;

	t0 = ((x273<=x274)<<(x275|x276));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x509 = INT8_MAX;
	uint8_t x510 = UINT8_MAX;
	int16_t x511 = 0;
	static uint8_t x512 = 8U;
	int32_t t1 = 297081;

	t1 = ((x509<=x510)<<(x511|x512));

	if (t1 != 256) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

