#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x69 = 23U;
static uint8_t x70 = 1U;
uint8_t x79 = 3U;
static uint32_t t1 = 2U;
int8_t x225 = 3;
uint8_t x226 = 21U;
int16_t x228 = INT16_MIN;
int16_t x403 = INT16_MIN;
int32_t t4 = -101678806;
uint64_t x445 = UINT64_MAX;
int32_t x446 = 31;
int32_t x447 = 522927;
int8_t x448 = 0;
volatile int16_t x486 = 0;
static volatile uint64_t t8 = 67338440633LLU;
uint64_t x541 = 110LLU;
volatile uint16_t x570 = 12U;
static volatile uint16_t x571 = 54U;
uint8_t x572 = 6U;
int8_t x790 = 0;
int32_t t14 = 13;


void f0(void) {
	int32_t x71 = INT32_MIN;
	static int64_t x72 = INT64_MIN;
	volatile int32_t t0 = 1;

	t0 = (x69<<(x70^(x71<=x72)));

	if (t0 != 46) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x77 = 4U;
	volatile uint16_t x78 = 1U;
	int32_t x80 = INT32_MAX;

	t1 = (x77<<(x78^(x79<=x80)));

	if (t1 != 4U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x217 = 19712354U;
	static volatile int8_t x218 = 0;
	volatile int32_t x219 = INT32_MIN;
	volatile uint16_t x220 = 767U;
	uint32_t t2 = 692015272U;

	t2 = (x217<<(x218^(x219<=x220)));

	if (t2 != 39424708U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x227 = 25289U;
	volatile int32_t t3 = 252963308;

	t3 = (x225<<(x226^(x227<=x228)));

	if (t3 != 6291456) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x401 = INT16_MAX;
	volatile uint8_t x402 = 1U;
	int32_t x404 = -1;

	t4 = (x401<<(x402^(x403<=x404)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x409 = UINT8_MAX;
	uint8_t x410 = 0U;
	uint32_t x411 = 1U;
	uint8_t x412 = 1U;
	volatile int32_t t5 = -1778;

	t5 = (x409<<(x410^(x411<=x412)));

	if (t5 != 510) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x441 = 5U;
	int16_t x442 = 8;
	static int16_t x443 = -1;
	int8_t x444 = -1;
	static volatile int32_t t6 = 2048;

	t6 = (x441<<(x442^(x443<=x444)));

	if (t6 != 2560) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t t7 = 7770LLU;

	t7 = (x445<<(x446^(x447<=x448)));

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x485 = 28237742930LLU;
	uint64_t x487 = 3586505442801470824LLU;
	volatile uint64_t x488 = UINT64_MAX;

	t8 = (x485<<(x486^(x487<=x488)));

	if (t8 != 56475485860LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x542 = 0;
	volatile int8_t x543 = INT8_MIN;
	volatile uint16_t x544 = 4U;
	uint64_t t9 = 3LLU;

	t9 = (x541<<(x542^(x543<=x544)));

	if (t9 != 220LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x569 = INT8_MAX;
	int32_t t10 = 12;

	t10 = (x569<<(x570^(x571<=x572)));

	if (t10 != 520192) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x665 = 2U;
	int8_t x666 = 0;
	int64_t x667 = 11426LL;
	int32_t x668 = INT32_MIN;
	int32_t t11 = -391548519;

	t11 = (x665<<(x666^(x667<=x668)));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x789 = INT32_MAX;
	uint16_t x791 = 990U;
	static int32_t x792 = 0;
	int32_t t12 = INT32_MAX;

	t12 = (x789<<(x790^(x791<=x792)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x857 = UINT16_MAX;
	uint8_t x858 = 7U;
	volatile int64_t x859 = INT64_MIN;
	int8_t x860 = INT8_MAX;
	volatile int32_t t13 = -137404;

	t13 = (x857<<(x858^(x859<=x860)));

	if (t13 != 4194240) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x901 = 0U;
	int16_t x902 = 12;
	static int64_t x903 = 31395839664LL;
	uint16_t x904 = 708U;

	t14 = (x901<<(x902^(x903<=x904)));

	if (t14 != 0) { NG(); } else { ; }
	
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

