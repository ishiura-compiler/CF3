#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 19;
uint16_t x39 = 1U;
volatile int32_t x64 = 0;
int64_t x87 = INT64_MAX;
int64_t t4 = 15LL;
static uint16_t x139 = 4U;
static int8_t x304 = 7;
static volatile uint64_t t7 = 19636886404132205LLU;
uint32_t x324 = 0U;
static volatile uint32_t t10 = 58U;


void f0(void) {
	volatile int32_t x1 = 272;
	volatile int32_t x2 = 13;
	uint64_t x3 = UINT64_MAX;
	uint64_t t0 = 30415778861LLU;

	t0 = ((x1|(x2+x3))>>x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x25 = 109U;
	int32_t x26 = 703901949;
	volatile uint32_t x27 = 1784626041U;
	static int8_t x28 = 1;
	uint32_t t1 = 169U;

	t1 = ((x25|(x26+x27))>>x28);

	if (t1 != 1244263999U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x37 = 6U;
	static uint64_t x38 = 2738352LLU;
	static int64_t x40 = 0LL;
	volatile uint64_t t2 = 29799558906253919LLU;

	t2 = ((x37|(x38+x39))>>x40);

	if (t2 != 2738359LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x61 = INT32_MIN;
	uint32_t x62 = UINT32_MAX;
	static int8_t x63 = INT8_MIN;
	uint32_t t3 = 2936U;

	t3 = ((x61|(x62+x63))>>x64);

	if (t3 != 4294967167U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x85 = INT16_MAX;
	static int16_t x86 = INT16_MIN;
	volatile int8_t x88 = 34;

	t4 = ((x85|(x86+x87))>>x88);

	if (t4 != 536870911LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x137 = 902U;
	uint64_t x138 = 2909381LLU;
	uint8_t x140 = 1U;
	uint64_t t5 = 147957301LLU;

	t5 = ((x137|(x138+x139))>>x140);

	if (t5 != 1455079LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = 660740046U;
	int8_t x268 = 3;
	uint32_t t6 = 118252U;

	t6 = ((x265|(x266+x267))>>x268);

	if (t6 != 536870905U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x301 = -3793LL;
	volatile uint64_t x302 = 3329552263923389489LLU;
	static volatile int64_t x303 = -1LL;

	t7 = ((x301|(x302+x303))>>x304);

	if (t7 != 144115188075855850LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x321 = 0;
	uint8_t x322 = 2U;
	int16_t x323 = -1;
	static volatile int32_t t8 = 0;

	t8 = ((x321|(x322+x323))>>x324);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x329 = 0U;
	static volatile int16_t x330 = INT16_MAX;
	uint32_t x331 = 226U;
	static uint8_t x332 = 7U;
	uint32_t t9 = 22603406U;

	t9 = ((x329|(x330+x331))>>x332);

	if (t9 != 257U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x397 = 5U;
	int32_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	uint16_t x400 = 19U;

	t10 = ((x397|(x398+x399))>>x400);

	if (t10 != 8191U) { NG(); } else { ; }
	
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


    return 0;
}

