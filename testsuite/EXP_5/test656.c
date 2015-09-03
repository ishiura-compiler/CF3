#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x357 = INT8_MAX;
volatile uint8_t x605 = 5U;
int32_t t3 = 293971536;
uint8_t x773 = 7U;
int8_t x776 = 11;
volatile uint16_t x833 = 0U;
uint16_t x836 = 10U;
int16_t x882 = INT16_MIN;
uint32_t t7 = 973144U;
uint32_t x906 = 269927U;
int16_t x907 = INT16_MIN;
static volatile int64_t x922 = 0LL;
uint8_t x980 = 46U;
volatile int32_t t11 = -1139;


void f0(void) {
	int8_t x185 = INT8_MAX;
	volatile uint32_t x186 = 5U;
	int32_t x187 = INT32_MIN;
	volatile uint16_t x188 = 2U;
	int32_t t0 = 1367022;

	t0 = (x185<<((x186/x187)|x188));

	if (t0 != 508) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x358 = 122U;
	int16_t x359 = -13;
	volatile int8_t x360 = 4;
	volatile int32_t t1 = 327561886;

	t1 = (x357<<((x358/x359)|x360));

	if (t1 != 2032) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x429 = INT8_MAX;
	int16_t x430 = INT16_MIN;
	volatile int16_t x431 = INT16_MIN;
	static uint16_t x432 = 3U;
	volatile int32_t t2 = 1556591;

	t2 = (x429<<((x430/x431)|x432));

	if (t2 != 1016) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x606 = -1;
	int8_t x607 = INT8_MAX;
	volatile int16_t x608 = 0;

	t3 = (x605<<((x606/x607)|x608));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x681 = 1944693U;
	int32_t x682 = -39884180;
	int64_t x683 = 61209588778LL;
	int16_t x684 = 10;
	uint32_t t4 = 263923741U;

	t4 = (x681<<((x682/x683)|x684));

	if (t4 != 1991365632U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x774 = -1945;
	int64_t x775 = -9642975LL;
	volatile int32_t t5 = -1;

	t5 = (x773<<((x774/x775)|x776));

	if (t5 != 14336) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x834 = INT16_MAX;
	int16_t x835 = INT16_MIN;
	int32_t t6 = 2550;

	t6 = (x833<<((x834/x835)|x836));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x881 = UINT32_MAX;
	int16_t x883 = -1720;
	uint8_t x884 = 7U;

	t7 = (x881<<((x882/x883)|x884));

	if (t7 != 4286578688U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x905 = UINT64_MAX;
	uint8_t x908 = 4U;
	volatile uint64_t t8 = 11LLU;

	t8 = (x905<<((x906/x907)|x908));

	if (t8 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x921 = 1729134657691614464LLU;
	int32_t x923 = INT32_MIN;
	int16_t x924 = 0;
	volatile uint64_t t9 = 1LLU;

	t9 = (x921<<((x922/x923)|x924));

	if (t9 != 1729134657691614464LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x977 = 59LLU;
	static int32_t x978 = -1;
	int32_t x979 = 2018;
	uint64_t t10 = 14931440LLU;

	t10 = (x977<<((x978/x979)|x980));

	if (t10 != 4151755906482176LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1209 = INT8_MAX;
	static uint32_t x1210 = 909U;
	static int16_t x1211 = INT16_MIN;
	int16_t x1212 = 1;

	t11 = (x1209<<((x1210/x1211)|x1212));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1249 = UINT8_MAX;
	int8_t x1250 = 16;
	int16_t x1251 = -1991;
	volatile uint8_t x1252 = 3U;
	int32_t t12 = -117257;

	t12 = (x1249<<((x1250/x1251)|x1252));

	if (t12 != 2040) { NG(); } else { ; }
	
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


    return 0;
}

