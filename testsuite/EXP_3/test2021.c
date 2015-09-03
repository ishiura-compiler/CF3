#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x189 = 1577602;
volatile int8_t x378 = INT8_MIN;


void f0(void) {
	volatile uint8_t x29 = 1U;
	int64_t x30 = 21LL;
	uint16_t x31 = 1U;
	uint8_t x32 = 41U;
	volatile int64_t t0 = -4221328599148926LL;

	t0 = ((x29^x30)<<(x31|x32));

	if (t0 != 43980465111040LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x190 = INT16_MAX;
	int8_t x191 = 8;
	static uint8_t x192 = 0U;
	volatile int32_t t1 = -14158;

	t1 = ((x189^x190)<<(x191|x192));

	if (t1 != 409828608) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x377 = -1;
	uint16_t x379 = 1U;
	int16_t x380 = 16;
	static int32_t t2 = -802214;

	t2 = ((x377^x378)<<(x379|x380));

	if (t2 != 16646144) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x729 = UINT64_MAX;
	static uint16_t x730 = 370U;
	volatile uint16_t x731 = 0U;
	int8_t x732 = 1;
	uint64_t t3 = 2599308324LLU;

	t3 = ((x729^x730)<<(x731|x732));

	if (t3 != 18446744073709550874LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

