#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x89 = 20U;
int8_t x392 = 0;
int8_t x853 = 4;
uint8_t x854 = 0U;
uint64_t x1003 = 1880316LLU;


void f0(void) {
	uint8_t x90 = 1U;
	static uint8_t x91 = 2U;
	int16_t x92 = 23;
	int32_t t0 = -18;

	t0 = (((x89>>x90)&x91)<<x92);

	if (t0 != 16777216) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x389 = INT16_MAX;
	uint16_t x390 = 0U;
	volatile int64_t x391 = 21034520752152LL;
	int64_t t1 = 62277586760LL;

	t1 = (((x389>>x390)&x391)<<x392);

	if (t1 != 12312LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x793 = 0U;
	int32_t x794 = 16;
	uint64_t x795 = UINT64_MAX;
	uint8_t x796 = 0U;
	uint64_t t2 = 189619016024086411LLU;

	t2 = (((x793>>x794)&x795)<<x796);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x855 = INT8_MIN;
	int64_t x856 = 1LL;
	int32_t t3 = 843012;

	t3 = (((x853>>x854)&x855)<<x856);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x889 = 72U;
	static uint16_t x890 = 1U;
	int32_t x891 = INT32_MAX;
	uint8_t x892 = 1U;
	static volatile int32_t t4 = -17901567;

	t4 = (((x889>>x890)&x891)<<x892);

	if (t4 != 72) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x1001 = 12258885;
	uint16_t x1002 = 15U;
	uint8_t x1004 = 5U;
	uint64_t t5 = 119489293090LLU;

	t5 = (((x1001>>x1002)&x1003)<<x1004);

	if (t5 != 3712LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x1149 = 540U;
	volatile uint16_t x1150 = 6U;
	volatile uint32_t x1151 = UINT32_MAX;
	static uint8_t x1152 = 1U;
	uint32_t t6 = 0U;

	t6 = (((x1149>>x1150)&x1151)<<x1152);

	if (t6 != 16U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

