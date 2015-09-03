#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x178 = 4LL;
volatile uint64_t t1 = 212933446603556LLU;
volatile uint16_t x189 = 1234U;
int64_t x190 = 2LL;
int8_t x192 = -17;
static int32_t x248 = INT32_MIN;
uint64_t x352 = 69823805LLU;


void f0(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 4U;
	static uint32_t x103 = 3498084U;
	int8_t x104 = INT8_MAX;
	uint64_t t0 = 31863526665152103LLU;

	t0 = ((x101<<x102)-(x103+x104));

	if (t0 != 18446744073706053389LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x177 = UINT64_MAX;
	volatile int64_t x179 = INT64_MAX;
	int8_t x180 = INT8_MIN;

	t1 = ((x177<<x178)-(x179+x180));

	if (t1 != 9223372036854775921LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x191 = INT32_MAX;
	int32_t t2 = -2388641;

	t2 = ((x189<<x190)-(x191+x192));

	if (t2 != -2147478694) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x245 = 12U;
	static uint8_t x246 = 2U;
	int32_t x247 = INT32_MAX;
	static uint32_t t3 = 87U;

	t3 = ((x245<<x246)-(x247+x248));

	if (t3 != 49U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x257 = 6U;
	static int64_t x258 = 0LL;
	uint16_t x259 = 96U;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t4 = 51325LLU;

	t4 = ((x257<<x258)-(x259+x260));

	if (t4 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x349 = UINT64_MAX;
	uint8_t x350 = 21U;
	static int8_t x351 = INT8_MIN;
	uint64_t t5 = 2005241LLU;

	t5 = ((x349<<x350)-(x351+x352));

	if (t5 != 18446744073637630787LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x465 = 2672599519184LLU;
	static uint16_t x466 = 0U;
	int8_t x467 = 1;
	int64_t x468 = INT64_MIN;
	uint64_t t6 = 745508777864LLU;

	t6 = ((x465<<x466)-(x467+x468));

	if (t6 != 9223374709454294991LLU) { NG(); } else { ; }
	
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

