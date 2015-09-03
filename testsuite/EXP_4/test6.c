#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x251 = 4LL;


void f0(void) {
	static int64_t x213 = 27LL;
	uint64_t x214 = UINT64_MAX;
	static int16_t x215 = 1;
	static uint16_t x216 = 1U;
	static int64_t t0 = 16228686619148014LL;

	t0 = (x213<<(x214+(x215+x216)));

	if (t0 != 54LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x249 = 13;
	volatile int8_t x250 = 16;
	volatile int8_t x252 = -1;
	int32_t t1 = 1;

	t1 = (x249<<(x250+(x251+x252)));

	if (t1 != 6815744) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

