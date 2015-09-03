#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = 1;
static uint8_t x8 = 5U;
volatile uint64_t t0 = 82390131926313976LLU;
volatile int8_t x133 = INT8_MAX;
uint8_t x135 = 53U;
int16_t x161 = INT16_MAX;
int8_t x162 = -1;
int16_t x163 = 1;
int32_t t2 = -1;
int16_t x294 = 8177;
uint16_t x441 = 12936U;
static uint8_t x467 = 17U;
uint8_t x852 = 0U;


void f0(void) {
	static uint64_t x5 = 2419259767837438LLU;
	uint64_t x7 = 121074678012LLU;

	t0 = ((x5<<(x6&x7))<<x8);

	if (t0 != 77416312570798016LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x134 = INT32_MIN;
	static volatile uint8_t x136 = 2U;
	volatile int32_t t1 = 673147965;

	t1 = ((x133<<(x134&x135))<<x136);

	if (t1 != 508) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x164 = 3U;

	t2 = ((x161<<(x162&x163))<<x164);

	if (t2 != 524272) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int8_t x270 = 0;
	volatile uint16_t x271 = UINT16_MAX;
	volatile int8_t x272 = 2;
	volatile int32_t t3 = -2605966;

	t3 = ((x269<<(x270&x271))<<x272);

	if (t3 != 262140) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x295 = 5;
	uint8_t x296 = 7U;
	static uint32_t t4 = 156448431U;

	t4 = ((x293<<(x294&x295))<<x296);

	if (t4 != 4294967040U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x442 = 3349975LL;
	int32_t x443 = INT32_MIN;
	volatile uint32_t x444 = 8U;
	int32_t t5 = 9;

	t5 = ((x441<<(x442&x443))<<x444);

	if (t5 != 3311616) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x465 = 4085LLU;
	volatile int32_t x466 = -1;
	uint8_t x468 = 15U;
	uint64_t t6 = 461031LLU;

	t6 = ((x465<<(x466&x467))<<x468);

	if (t6 != 17544941404160LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x849 = 6754U;
	uint8_t x850 = UINT8_MAX;
	int32_t x851 = INT32_MIN;
	volatile uint32_t t7 = 3040U;

	t7 = ((x849<<(x850&x851))<<x852);

	if (t7 != 6754U) { NG(); } else { ; }
	
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


    return 0;
}

