#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x144 = 8U;
int32_t x161 = INT32_MIN;
uint16_t x162 = 17U;
int32_t x192 = 6;
uint64_t x498 = 1854LLU;
uint8_t x499 = 1U;
volatile uint64_t x815 = 3479945LLU;
static uint8_t x816 = 19U;
volatile int8_t x1434 = INT8_MAX;
int32_t t10 = 24;
static volatile int32_t t11 = 1951466;
int16_t x1685 = INT16_MAX;
uint32_t x1847 = 748331792U;


void f0(void) {
	int64_t x141 = -1LL;
	volatile int32_t x142 = INT32_MIN;
	volatile uint8_t x143 = 1U;
	static int32_t t0 = -12834200;

	t0 = ((x141<x142)<<(x143>>x144));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x163 = 0U;
	static uint8_t x164 = 9U;
	volatile int32_t t1 = 1652;

	t1 = ((x161<x162)<<(x163>>x164));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x189 = 56377509794449LLU;
	volatile uint32_t x190 = 8002137U;
	uint16_t x191 = 4U;
	int32_t t2 = -24;

	t2 = ((x189<x190)<<(x191>>x192));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x393 = 9U;
	uint64_t x394 = UINT64_MAX;
	uint8_t x395 = 0U;
	volatile int8_t x396 = 1;
	int32_t t3 = 1;

	t3 = ((x393<x394)<<(x395>>x396));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x497 = UINT64_MAX;
	volatile uint8_t x500 = 17U;
	int32_t t4 = -12077040;

	t4 = ((x497<x498)<<(x499>>x500));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x681 = INT64_MIN;
	int16_t x682 = INT16_MIN;
	static uint8_t x683 = 6U;
	static volatile uint8_t x684 = 3U;
	static volatile int32_t t5 = 125;

	t5 = ((x681<x682)<<(x683>>x684));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x813 = INT64_MIN;
	int64_t x814 = INT64_MIN;
	volatile int32_t t6 = 19327678;

	t6 = ((x813<x814)<<(x815>>x816));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x997 = -3;
	uint16_t x998 = UINT16_MAX;
	static uint8_t x999 = 1U;
	int16_t x1000 = 20;
	int32_t t7 = 93;

	t7 = ((x997<x998)<<(x999>>x1000));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x1009 = INT8_MIN;
	int16_t x1010 = INT16_MIN;
	static uint64_t x1011 = 2507LLU;
	static uint8_t x1012 = 49U;
	static int32_t t8 = 7087;

	t8 = ((x1009<x1010)<<(x1011>>x1012));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x1065 = INT64_MAX;
	int32_t x1066 = -1;
	int8_t x1067 = 14;
	volatile uint16_t x1068 = 2U;
	static volatile int32_t t9 = 8452;

	t9 = ((x1065<x1066)<<(x1067>>x1068));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x1433 = -99;
	static int8_t x1435 = 5;
	uint8_t x1436 = 5U;

	t10 = ((x1433<x1434)<<(x1435>>x1436));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x1661 = 3673U;
	int16_t x1662 = INT16_MIN;
	volatile int8_t x1663 = INT8_MAX;
	uint8_t x1664 = 30U;

	t11 = ((x1661<x1662)<<(x1663>>x1664));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1686 = -14108698LL;
	uint8_t x1687 = 22U;
	uint8_t x1688 = 2U;
	int32_t t12 = 1;

	t12 = ((x1685<x1686)<<(x1687>>x1688));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x1845 = 13920180LLU;
	int32_t x1846 = INT32_MAX;
	uint8_t x1848 = 29U;
	int32_t t13 = -928081;

	t13 = ((x1845<x1846)<<(x1847>>x1848));

	if (t13 != 2) { NG(); } else { ; }
	
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
    f9();
    f10();
    f11();
    f12();
    f13();


    return 0;
}

