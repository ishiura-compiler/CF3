#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x18 = 0;
static volatile int32_t x43 = INT32_MIN;
static uint8_t x49 = UINT8_MAX;
uint32_t x50 = 21754U;
int32_t t4 = INT32_MAX;
static int32_t t6 = 697;
static volatile uint64_t x309 = 1159007LLU;
uint16_t x338 = 8U;
static int32_t t8 = 34;
int64_t x551 = INT64_MIN;
uint16_t x582 = 28U;
static volatile int16_t x583 = -1;
int64_t x611 = -1LL;
uint8_t x617 = 9U;
volatile int64_t x823 = -1LL;
static uint16_t x901 = UINT16_MAX;
static uint16_t x903 = UINT16_MAX;
volatile int16_t x904 = 151;
volatile int32_t t18 = -9;
int16_t x935 = INT16_MIN;
uint16_t x1037 = 3120U;
int16_t x1234 = -1;
int64_t x1445 = 1357895481127532251LL;
static uint32_t t26 = 3484U;
int16_t x1513 = INT16_MAX;


void f0(void) {
	volatile int16_t x17 = 1669;
	int64_t x19 = 1071897031122LL;
	int64_t x20 = 8986324426449978LL;
	int32_t t0 = 3;

	t0 = (x17<<(x18*(x19^x20)));

	if (t0 != 1669) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x41 = 1;
	int32_t x42 = 0;
	static volatile uint64_t x44 = 1758907350771682LLU;
	int32_t t1 = -881;

	t1 = (x41<<(x42*(x43^x44)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x51 = UINT16_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	int32_t t2 = -1064;

	t2 = (x49<<(x50*(x51^x52)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x81 = UINT8_MAX;
	uint8_t x82 = 0U;
	int8_t x83 = INT8_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t3 = -490435870;

	t3 = (x81<<(x82*(x83^x84)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x137 = INT32_MAX;
	volatile int32_t x138 = -14418046;
	uint32_t x139 = UINT32_MAX;
	static volatile uint32_t x140 = UINT32_MAX;

	t4 = (x137<<(x138*(x139^x140)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x201 = 12;
	int16_t x202 = INT16_MAX;
	int64_t x203 = INT64_MIN;
	volatile int64_t x204 = INT64_MIN;
	volatile int32_t t5 = 29;

	t5 = (x201<<(x202*(x203^x204)));

	if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x269 = 22527U;
	int64_t x270 = 198762675337245LL;
	int32_t x271 = -1;
	int8_t x272 = -1;

	t6 = (x269<<(x270*(x271^x272)));

	if (t6 != 22527) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x310 = 0LL;
	uint64_t x311 = 0LLU;
	int8_t x312 = -3;
	volatile uint64_t t7 = 833086538800577368LLU;

	t7 = (x309<<(x310*(x311^x312)));

	if (t7 != 1159007LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x337 = INT8_MAX;
	int32_t x339 = -1;
	int8_t x340 = -1;

	t8 = (x337<<(x338*(x339^x340)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x517 = UINT64_MAX;
	int64_t x518 = -47586554974LL;
	static int16_t x519 = INT16_MIN;
	static int16_t x520 = INT16_MIN;
	uint64_t t9 = UINT64_MAX;

	t9 = (x517<<(x518*(x519^x520)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x549 = UINT32_MAX;
	int8_t x550 = 0;
	int32_t x552 = 0;
	uint32_t t10 = UINT32_MAX;

	t10 = (x549<<(x550*(x551^x552)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x581 = 0LLU;
	int16_t x584 = -1;
	volatile uint64_t t11 = 680170817940758LLU;

	t11 = (x581<<(x582*(x583^x584)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x609 = 40U;
	int8_t x610 = 31;
	int16_t x612 = -1;
	static volatile int32_t t12 = -13578641;

	t12 = (x609<<(x610*(x611^x612)));

	if (t12 != 40) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x618 = -17;
	volatile int16_t x619 = INT16_MIN;
	int16_t x620 = INT16_MIN;
	volatile int32_t t13 = -253190902;

	t13 = (x617<<(x618*(x619^x620)));

	if (t13 != 9) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x709 = 26484U;
	volatile uint16_t x710 = UINT16_MAX;
	volatile int64_t x711 = -1LL;
	static volatile int32_t x712 = -1;
	uint32_t t14 = 34548078U;

	t14 = (x709<<(x710*(x711^x712)));

	if (t14 != 26484U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x757 = 25;
	uint8_t x758 = 0U;
	int64_t x759 = 0LL;
	uint8_t x760 = 66U;
	int32_t t15 = 4256;

	t15 = (x757<<(x758*(x759^x760)));

	if (t15 != 25) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x805 = INT64_MAX;
	static uint8_t x806 = 0U;
	static int8_t x807 = -46;
	uint64_t x808 = 1009194076737930LLU;
	static volatile int64_t t16 = INT64_MAX;

	t16 = (x805<<(x806*(x807^x808)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x821 = INT8_MAX;
	static uint8_t x822 = 0U;
	volatile int8_t x824 = -1;
	int32_t t17 = -1345573;

	t17 = (x821<<(x822*(x823^x824)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x902 = 0U;

	t18 = (x901<<(x902*(x903^x904)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x933 = 21492815281481LLU;
	static int8_t x934 = 0;
	volatile int16_t x936 = -8;
	volatile uint64_t t19 = 0LLU;

	t19 = (x933<<(x934*(x935^x936)));

	if (t19 != 21492815281481LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x1038 = UINT8_MAX;
	int16_t x1039 = -1;
	int64_t x1040 = -1LL;
	int32_t t20 = 22803;

	t20 = (x1037<<(x1038*(x1039^x1040)));

	if (t20 != 3120) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1073 = 9U;
	uint8_t x1074 = 0U;
	uint64_t x1075 = 16651251722LLU;
	static volatile uint8_t x1076 = 2U;
	static volatile int32_t t21 = 1;

	t21 = (x1073<<(x1074*(x1075^x1076)));

	if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1233 = INT8_MAX;
	volatile int16_t x1235 = -5;
	volatile uint32_t x1236 = 9U;
	static volatile int32_t t22 = 405525204;

	t22 = (x1233<<(x1234*(x1235^x1236)));

	if (t22 != 2080768) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1417 = 255444U;
	int64_t x1418 = -1LL;
	uint8_t x1419 = 1U;
	int8_t x1420 = -1;
	static volatile uint32_t t23 = 1367U;

	t23 = (x1417<<(x1418*(x1419^x1420)));

	if (t23 != 1021776U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1446 = 68U;
	int32_t x1447 = -1;
	uint64_t x1448 = UINT64_MAX;
	static int64_t t24 = -49920766784004LL;

	t24 = (x1445<<(x1446*(x1447^x1448)));

	if (t24 != 1357895481127532251LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1485 = 3U;
	int64_t x1486 = INT64_MIN;
	static uint64_t x1487 = UINT64_MAX;
	uint8_t x1488 = UINT8_MAX;
	volatile int32_t t25 = 0;

	t25 = (x1485<<(x1486*(x1487^x1488)));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1493 = 1282U;
	int16_t x1494 = -1;
	int32_t x1495 = -1;
	volatile int8_t x1496 = -1;

	t26 = (x1493<<(x1494*(x1495^x1496)));

	if (t26 != 1282U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1514 = INT64_MIN;
	static uint64_t x1515 = 122948153300LLU;
	volatile uint64_t x1516 = 0LLU;
	static volatile int32_t t27 = 2750;

	t27 = (x1513<<(x1514*(x1515^x1516)));

	if (t27 != 32767) { NG(); } else { ; }
	
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
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();


    return 0;
}

