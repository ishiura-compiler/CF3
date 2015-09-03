#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 3805044550014LLU;
uint64_t x344 = 0LLU;
uint64_t t5 = 4683823669805021952LLU;


void f0(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MAX;
	static int8_t x75 = 48;
	int16_t x76 = 12;

	t0 = ((x73*x74)<<(x75|x76));

	if (t0 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x305 = INT64_MAX;
	uint8_t x306 = 0U;
	uint8_t x307 = 0U;
	volatile uint8_t x308 = 54U;
	int64_t t1 = -180629829LL;

	t1 = ((x305*x306)<<(x307|x308));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x341 = -1;
	int16_t x342 = INT16_MIN;
	static uint8_t x343 = 0U;
	volatile int32_t t2 = 3530;

	t2 = ((x341*x342)<<(x343|x344));

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x377 = 25;
	volatile uint16_t x378 = 35U;
	int16_t x379 = 1;
	uint32_t x380 = 0U;
	volatile int32_t t3 = 10949170;

	t3 = ((x377*x378)<<(x379|x380));

	if (t3 != 1750) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x533 = INT32_MIN;
	volatile uint64_t x534 = UINT64_MAX;
	static uint16_t x535 = 15U;
	uint8_t x536 = 6U;
	volatile uint64_t t4 = 395196058LLU;

	t4 = ((x533*x534)<<(x535|x536));

	if (t4 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x921 = -1;
	static uint64_t x922 = 113575198LLU;
	static int8_t x923 = 1;
	int16_t x924 = 11;

	t5 = ((x921*x922)<<(x923|x924));

	if (t5 != 18446743841107546112LLU) { NG(); } else { ; }
	
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

