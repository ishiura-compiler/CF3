#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x53 = INT64_MIN;
volatile int32_t x55 = INT32_MAX;
static int32_t t0 = 928693;
uint64_t x76 = 23LLU;
int16_t x310 = -1;
int32_t x312 = 29;
volatile int32_t t4 = 100;
volatile int8_t x639 = INT8_MAX;
volatile uint8_t x640 = 3U;
static int32_t x677 = INT32_MIN;
int8_t x678 = INT8_MAX;
volatile int32_t t6 = 0;
int64_t x1104 = 5LL;
int8_t x1585 = -1;
volatile int64_t x1586 = 453769977358LL;
volatile uint8_t x1587 = 1U;


void f0(void) {
	int8_t x54 = -1;
	volatile uint8_t x56 = 27U;

	t0 = ((x53<=x54)<<(x55>>x56));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x73 = -12;
	int16_t x74 = -432;
	uint64_t x75 = 71LLU;
	int32_t t1 = 2477;

	t1 = ((x73<=x74)<<(x75>>x76));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x261 = UINT8_MAX;
	volatile uint16_t x262 = 22U;
	volatile uint16_t x263 = 2605U;
	int64_t x264 = 26LL;
	volatile int32_t t2 = -90962;

	t2 = ((x261<=x262)<<(x263>>x264));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x309 = UINT64_MAX;
	uint16_t x311 = 22706U;
	volatile int32_t t3 = 1;

	t3 = ((x309<=x310)<<(x311>>x312));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x481 = INT16_MIN;
	uint8_t x482 = 21U;
	int8_t x483 = 0;
	uint8_t x484 = 0U;

	t4 = ((x481<=x482)<<(x483>>x484));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x637 = INT16_MIN;
	int16_t x638 = INT16_MIN;
	int32_t t5 = -1499;

	t5 = ((x637<=x638)<<(x639>>x640));

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x679 = 0U;
	static uint8_t x680 = 15U;

	t6 = ((x677<=x678)<<(x679>>x680));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x897 = 17;
	uint32_t x898 = 431236108U;
	uint8_t x899 = UINT8_MAX;
	int16_t x900 = 5;
	static volatile int32_t t7 = 440549;

	t7 = ((x897<=x898)<<(x899>>x900));

	if (t7 != 128) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x933 = 1;
	static int32_t x934 = 116102;
	static volatile int32_t x935 = 7;
	static int8_t x936 = 5;
	int32_t t8 = 361;

	t8 = ((x933<=x934)<<(x935>>x936));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x1101 = 0;
	int32_t x1102 = INT32_MIN;
	uint16_t x1103 = 4U;
	int32_t t9 = -187935;

	t9 = ((x1101<=x1102)<<(x1103>>x1104));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x1445 = INT32_MIN;
	int32_t x1446 = -1;
	static uint16_t x1447 = 36U;
	static uint8_t x1448 = 1U;
	static int32_t t10 = 64011;

	t10 = ((x1445<=x1446)<<(x1447>>x1448));

	if (t10 != 262144) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1509 = UINT64_MAX;
	uint32_t x1510 = 373U;
	uint8_t x1511 = 10U;
	int8_t x1512 = 0;
	int32_t t11 = 164431;

	t11 = ((x1509<=x1510)<<(x1511>>x1512));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1588 = 11U;
	int32_t t12 = -38901;

	t12 = ((x1585<=x1586)<<(x1587>>x1588));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1601 = 109;
	static volatile int8_t x1602 = 3;
	static volatile uint16_t x1603 = 2U;
	volatile int8_t x1604 = 0;
	static volatile int32_t t13 = -114456971;

	t13 = ((x1601<=x1602)<<(x1603>>x1604));

	if (t13 != 0) { NG(); } else { ; }
	
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

