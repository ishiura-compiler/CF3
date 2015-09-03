#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x57 = 0U;
int32_t x60 = -7;
volatile int32_t t1 = -1;


void f0(void) {
	static volatile uint16_t x58 = 0U;
	static uint32_t x59 = 192754U;
	volatile int32_t t0 = 128;

	t0 = (x57/(x58==(x59/x60)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x381 = 17882;
	volatile uint8_t x382 = 0U;
	int64_t x383 = 7941363420581LL;
	int64_t x384 = INT64_MIN;

	t1 = (x381/(x382==(x383/x384)));

	if (t1 != 17882) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

