#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x178 = 157790U;
static volatile int64_t t2 = 96911125285347909LL;
static volatile int16_t x306 = INT16_MIN;
volatile uint64_t t3 = 37394747LLU;
static volatile uint64_t x646 = UINT64_MAX;


void f0(void) {
	static int64_t x177 = -1LL;
	int8_t x179 = 2;
	int16_t x180 = -1;
	int64_t t0 = -1758529747656LL;

	t0 = ((x177+x178)<<(x179+x180));

	if (t0 != 315578LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = 1190;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = 5U;
	int32_t t1 = -608168;

	t1 = ((x221+x222)<<(x223+x224));

	if (t1 != 16992) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x241 = 58;
	int64_t x242 = -1LL;
	static int16_t x243 = -1;
	uint32_t x244 = 2U;

	t2 = ((x241+x242)<<(x243+x244));

	if (t2 != 114LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x305 = 51509275LLU;
	volatile uint64_t x307 = UINT64_MAX;
	int8_t x308 = 2;

	t3 = ((x305+x306)<<(x307+x308));

	if (t3 != 102953014LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x645 = INT32_MIN;
	uint8_t x647 = 7U;
	int64_t x648 = -1LL;
	uint64_t t4 = 858022LLU;

	t4 = ((x645+x646)<<(x647+x648));

	if (t4 != 18446743936270598080LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x741 = -1;
	uint64_t x742 = UINT64_MAX;
	static uint8_t x743 = 22U;
	int8_t x744 = 5;
	volatile uint64_t t5 = 3581LLU;

	t5 = ((x741+x742)<<(x743+x744));

	if (t5 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

