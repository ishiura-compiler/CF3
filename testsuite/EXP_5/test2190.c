#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x270 = INT16_MIN;
uint16_t x421 = 6U;
uint8_t x493 = 22U;
int32_t t2 = -238952;
volatile uint64_t x889 = UINT64_MAX;


void f0(void) {
	uint32_t x269 = 0U;
	static volatile int16_t x271 = INT16_MAX;
	uint32_t x272 = UINT32_MAX;
	uint32_t t0 = 41U;

	t0 = (x269<<((x270^x271)^x272));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x422 = INT64_MAX;
	volatile int64_t x423 = INT64_MAX;
	uint8_t x424 = 14U;
	int32_t t1 = -68190385;

	t1 = (x421<<((x422^x423)^x424));

	if (t1 != 98304) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x494 = -1;
	int32_t x495 = INT32_MAX;
	int32_t x496 = INT32_MIN;

	t2 = (x493<<((x494^x495)^x496));

	if (t2 != 22) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x890 = -1LL;
	static int64_t x891 = INT64_MAX;
	int64_t x892 = INT64_MIN;
	static volatile uint64_t t3 = UINT64_MAX;

	t3 = (x889<<((x890^x891)^x892));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

