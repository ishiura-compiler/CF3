#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x126 = 6U;
uint32_t x237 = 8U;
uint16_t x466 = 2U;
volatile uint8_t x685 = UINT8_MAX;
int32_t x686 = 1;
uint8_t x970 = 13U;
uint8_t x971 = 10U;
uint8_t x972 = 5U;
int8_t x1100 = INT8_MIN;
volatile uint16_t x1493 = 25916U;
uint16_t x1777 = 0U;


void f0(void) {
	uint16_t x125 = 24U;
	static uint8_t x127 = 18U;
	int64_t x128 = INT64_MIN;
	int32_t t0 = 1;

	t0 = ((x125<<x126)<<(x127&x128));

	if (t0 != 1536) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x238 = 0U;
	static uint32_t x239 = 0U;
	static int64_t x240 = INT64_MIN;
	volatile uint32_t t1 = 17U;

	t1 = ((x237<<x238)<<(x239&x240));

	if (t1 != 8U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x465 = 0;
	int8_t x467 = 1;
	int64_t x468 = 8916899082470298LL;
	volatile int32_t t2 = 522433;

	t2 = ((x465<<x466)<<(x467&x468));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x687 = INT64_MIN;
	int64_t x688 = INT64_MAX;
	int32_t t3 = -2961;

	t3 = ((x685<<x686)<<(x687&x688));

	if (t3 != 510) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x969 = 3U;
	static volatile int32_t t4 = -8597804;

	t4 = ((x969<<x970)<<(x971&x972));

	if (t4 != 24576) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x1097 = UINT32_MAX;
	static int32_t x1098 = 2;
	volatile uint8_t x1099 = 99U;
	uint32_t t5 = 20046U;

	t5 = ((x1097<<x1098)<<(x1099&x1100));

	if (t5 != 4294967292U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x1389 = 1300900444631292LLU;
	int16_t x1390 = 7;
	uint16_t x1391 = 5U;
	static uint16_t x1392 = UINT16_MAX;
	static volatile uint64_t t6 = 141183357LLU;

	t6 = ((x1389<<x1390)<<(x1391&x1392));

	if (t6 != 5328488221209772032LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x1494 = 7U;
	int64_t x1495 = INT64_MIN;
	uint16_t x1496 = UINT16_MAX;
	volatile int32_t t7 = -615793062;

	t7 = ((x1493<<x1494)<<(x1495&x1496));

	if (t7 != 3317248) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x1778 = 1;
	int8_t x1779 = 10;
	volatile int8_t x1780 = -13;
	int32_t t8 = 0;

	t8 = ((x1777<<x1778)<<(x1779&x1780));

	if (t8 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();


    return 0;
}

