#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x70 = INT8_MIN;
uint16_t x152 = 3U;
int64_t t1 = -738352661393961251LL;


void f0(void) {
	static uint16_t x69 = 1568U;
	static volatile int16_t x71 = -52;
	uint32_t x72 = 0U;
	int32_t t0 = -1;

	t0 = ((x69%(x70/x71))<<x72);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x149 = -297603281348LL;
	static int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;

	t1 = ((x149%(x150/x151))<<x152);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();


    return 0;
}

