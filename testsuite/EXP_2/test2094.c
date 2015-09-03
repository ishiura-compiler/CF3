#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x18 = -1;
int8_t x19 = -1;
int32_t x60 = 4;
uint32_t x116 = UINT32_MAX;
int8_t x127 = 45;
volatile uint64_t t3 = 22630224041770LLU;
static uint32_t x644 = UINT32_MAX;
volatile int16_t x965 = INT16_MAX;
int16_t x967 = -6;
uint16_t x968 = 532U;
volatile uint16_t x973 = 3684U;
static int32_t x974 = INT32_MIN;
volatile int32_t x975 = INT32_MIN;
uint64_t x1181 = UINT64_MAX;
int16_t x1182 = -67;
int16_t x1186 = -1;
uint32_t t12 = 291U;
static int32_t x1541 = 3;
int32_t x1601 = 78;
uint32_t x1603 = UINT32_MAX;


void f0(void) {
	uint64_t x17 = UINT64_MAX;
	volatile uint16_t x20 = 24U;
	uint64_t t0 = 2441LLU;

	t0 = ((x17<<(x18^x19))+x20);

	if (t0 != 23LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x57 = INT8_MAX;
	int64_t x58 = -1LL;
	static int16_t x59 = -1;
	volatile int32_t t1 = 15056477;

	t1 = ((x57<<(x58^x59))+x60);

	if (t1 != 131) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x113 = 123U;
	static uint64_t x114 = UINT64_MAX;
	int8_t x115 = -1;
	volatile uint32_t t2 = 59232792U;

	t2 = ((x113<<(x114^x115))+x116);

	if (t2 != 122U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x125 = 367LLU;
	int8_t x126 = 0;
	uint16_t x128 = UINT16_MAX;

	t3 = ((x125<<(x126^x127))+x128);

	if (t3 != 12912664556666879LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x293 = 11483;
	volatile uint64_t x294 = UINT64_MAX;
	int16_t x295 = -1;
	int32_t x296 = -1;
	static volatile int32_t t4 = 28;

	t4 = ((x293<<(x294^x295))+x296);

	if (t4 != 11482) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x641 = 3561U;
	static int32_t x642 = -1;
	int16_t x643 = -1;
	uint32_t t5 = 426169873U;

	t5 = ((x641<<(x642^x643))+x644);

	if (t5 != 3560U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x966 = -1LL;
	volatile int32_t t6 = 25333;

	t6 = ((x965<<(x966^x967))+x968);

	if (t6 != 1049076) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x976 = -1LL;
	volatile int64_t t7 = -10LL;

	t7 = ((x973<<(x974^x975))+x976);

	if (t7 != 3683LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x1025 = INT32_MAX;
	static volatile int64_t x1026 = -1LL;
	int64_t x1027 = -1LL;
	int64_t x1028 = 56304589849797LL;
	int64_t t8 = -862354400776965LL;

	t8 = ((x1025<<(x1026^x1027))+x1028);

	if (t8 != 56306737333444LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x1077 = 8U;
	int32_t x1078 = INT32_MIN;
	int32_t x1079 = INT32_MIN;
	volatile int16_t x1080 = 536;
	volatile int32_t t9 = -1;

	t9 = ((x1077<<(x1078^x1079))+x1080);

	if (t9 != 544) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x1183 = INT8_MIN;
	static int64_t x1184 = 161127LL;
	volatile uint64_t t10 = 92LLU;

	t10 = ((x1181<<(x1182^x1183))+x1184);

	if (t10 != 16140901064496018791LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1185 = INT16_MAX;
	uint32_t x1187 = UINT32_MAX;
	uint8_t x1188 = UINT8_MAX;
	volatile int32_t t11 = -10806;

	t11 = ((x1185<<(x1186^x1187))+x1188);

	if (t11 != 33022) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x1269 = 10170U;
	volatile int16_t x1270 = -1;
	static int64_t x1271 = -1LL;
	uint8_t x1272 = UINT8_MAX;

	t12 = ((x1269<<(x1270^x1271))+x1272);

	if (t12 != 10425U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1542 = UINT32_MAX;
	static int8_t x1543 = -10;
	volatile uint32_t x1544 = UINT32_MAX;
	volatile uint32_t t13 = 346U;

	t13 = ((x1541<<(x1542^x1543))+x1544);

	if (t13 != 1535U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1602 = -11;
	int8_t x1604 = 1;
	volatile int32_t t14 = -783;

	t14 = ((x1601<<(x1602^x1603))+x1604);

	if (t14 != 79873) { NG(); } else { ; }
	
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
    f14();


    return 0;
}

