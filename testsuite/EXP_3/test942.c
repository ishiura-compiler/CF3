#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x437 = -1;
int32_t x438 = 1;


void f0(void) {
	uint64_t x73 = UINT64_MAX;
	static volatile int64_t x74 = 1LL;
	int8_t x75 = 3;
	uint16_t x76 = 1U;
	int32_t t0 = 1;

	t0 = ((x73==x74)<<(x75<<x76));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x253 = -1;
	int8_t x254 = -1;
	int16_t x255 = 0;
	uint8_t x256 = 6U;
	static int32_t t1 = 11055790;

	t1 = ((x253==x254)<<(x255<<x256));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x439 = 0;
	int8_t x440 = 1;
	volatile int32_t t2 = -3;

	t2 = ((x437==x438)<<(x439<<x440));

	if (t2 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

