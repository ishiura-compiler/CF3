#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = 1U;
uint32_t x37 = UINT32_MAX;
int64_t t1 = 1193925504LL;
uint8_t x136 = 6U;
uint64_t t2 = 786LLU;
int8_t x402 = -1;
uint64_t x404 = 3LLU;


void f0(void) {
	uint16_t x1 = 1454U;
	int16_t x2 = INT16_MIN;
	int16_t x3 = 4;
	static volatile int32_t t0 = -12;

	t0 = (x1^(x2*(x3<<x4)));

	if (t0 != -260690) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x38 = -1LL;
	uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 1U;

	t1 = (x37^(x38*(x39<<x40)));

	if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x133 = INT64_MAX;
	int8_t x134 = INT8_MAX;
	uint64_t x135 = UINT64_MAX;

	t2 = (x133^(x134*(x135<<x136)));

	if (t2 != 9223372036854783935LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x401 = 123U;
	uint16_t x403 = 30296U;
	volatile int32_t t3 = -2;

	t3 = (x401^(x402*(x403<<x404)));

	if (t3 != -242373) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

