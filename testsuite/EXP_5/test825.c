#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x25 = 8LLU;
static int16_t x28 = 1;
uint64_t t0 = 211LLU;
uint64_t x144 = 3LLU;
int32_t x270 = INT32_MIN;
int8_t x271 = -1;
uint8_t x417 = UINT8_MAX;
static int64_t x419 = 35LL;
volatile int32_t x448 = 1;
volatile uint8_t x513 = UINT8_MAX;
int16_t x514 = -1;
int32_t x516 = 0;
uint8_t x645 = 40U;
int64_t x646 = INT64_MAX;
static int64_t x648 = 1LL;
static volatile uint32_t x685 = 3567U;
int8_t x686 = INT8_MIN;
uint32_t x932 = 0U;
uint32_t x1049 = 277U;
int32_t x1112 = 5;
volatile int32_t t13 = 116516869;


void f0(void) {
	static volatile int16_t x26 = INT16_MIN;
	volatile int32_t x27 = -1;

	t0 = (x25<<((x26%x27)|x28));

	if (t0 != 16LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x141 = 11094090LLU;
	uint16_t x142 = 1U;
	static int8_t x143 = INT8_MIN;
	uint64_t t1 = 16023LLU;

	t1 = (x141<<((x142%x143)|x144));

	if (t1 != 88752720LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x269 = 7U;
	uint8_t x272 = 7U;
	int32_t t2 = 7913;

	t2 = (x269<<((x270%x271)|x272));

	if (t2 != 896) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x281 = UINT16_MAX;
	int8_t x282 = -1;
	uint8_t x283 = 1U;
	uint8_t x284 = 1U;
	static volatile int32_t t3 = -303096;

	t3 = (x281<<((x282%x283)|x284));

	if (t3 != 131070) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x297 = INT16_MAX;
	int8_t x298 = 13;
	static int32_t x299 = INT32_MIN;
	static uint8_t x300 = 0U;
	int32_t t4 = 18639;

	t4 = (x297<<((x298%x299)|x300));

	if (t4 != 268427264) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x418 = 2;
	int8_t x420 = 5;
	int32_t t5 = -1;

	t5 = (x417<<((x418%x419)|x420));

	if (t5 != 32640) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x445 = 295U;
	static volatile uint8_t x446 = 2U;
	static uint64_t x447 = 12715628178LLU;
	volatile int32_t t6 = 1782353;

	t6 = (x445<<((x446%x447)|x448));

	if (t6 != 2360) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x515 = -1;
	int32_t t7 = -28247147;

	t7 = (x513<<((x514%x515)|x516));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x647 = -4;
	int32_t t8 = 3;

	t8 = (x645<<((x646%x647)|x648));

	if (t8 != 320) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x687 = -1;
	int8_t x688 = 1;
	uint32_t t9 = 37494569U;

	t9 = (x685<<((x686%x687)|x688));

	if (t9 != 7134U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x929 = UINT64_MAX;
	static int16_t x930 = 0;
	static uint16_t x931 = UINT16_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x929<<((x930%x931)|x932));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x965 = 280U;
	uint64_t x966 = UINT64_MAX;
	static int16_t x967 = -6;
	int8_t x968 = 31;
	static uint32_t t11 = 4825066U;

	t11 = (x965<<((x966%x967)|x968));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1050 = -1LL;
	int8_t x1051 = -1;
	static volatile uint16_t x1052 = 21U;
	uint32_t t12 = 2018698604U;

	t12 = (x1049<<((x1050%x1051)|x1052));

	if (t12 != 580911104U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x1109 = 1U;
	uint16_t x1110 = 15754U;
	int8_t x1111 = -1;

	t13 = (x1109<<((x1110%x1111)|x1112));

	if (t13 != 32) { NG(); } else { ; }
	
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

