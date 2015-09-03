#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x11 = INT8_MIN;
uint32_t x189 = 0U;
volatile int8_t x190 = -1;
volatile int64_t x191 = -1LL;
int8_t x192 = 1;
volatile uint32_t t1 = 195U;
volatile int16_t x416 = -1;
int16_t x746 = -1;
uint16_t x748 = 15U;
int32_t x946 = -1;
static int32_t t9 = 1994;


void f0(void) {
	uint16_t x9 = 2U;
	int8_t x10 = INT8_MAX;
	static volatile uint8_t x12 = 30U;
	int32_t t0 = -5872981;

	t0 = (x9<<((x10|x11)+x12));

	if (t0 != 1073741824) { NG(); } else { ; }
	
}

void f1(void) {


	t1 = (x189<<((x190|x191)+x192));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x293 = UINT16_MAX;
	volatile int8_t x294 = -1;
	int64_t x295 = 15322744707574085LL;
	static int16_t x296 = 5;
	int32_t t2 = -13;

	t2 = (x293<<((x294|x295)+x296));

	if (t2 != 1048560) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x413 = UINT64_MAX;
	static uint16_t x414 = 0U;
	int8_t x415 = 31;
	uint64_t t3 = 68451624113163LLU;

	t3 = (x413<<((x414|x415)+x416));

	if (t3 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x745 = 57;
	uint8_t x747 = 12U;
	static volatile int32_t t4 = 49980;

	t4 = (x745<<((x746|x747)+x748));

	if (t4 != 933888) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x945 = INT16_MAX;
	int16_t x947 = 1;
	static int64_t x948 = 1LL;
	int32_t t5 = -254044;

	t5 = (x945<<((x946|x947)+x948));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x1001 = 14902675114193LLU;
	volatile uint64_t x1002 = UINT64_MAX;
	int16_t x1003 = INT16_MIN;
	volatile int16_t x1004 = 1;
	static volatile uint64_t t6 = 6LLU;

	t6 = (x1001<<((x1002|x1003)+x1004));

	if (t6 != 14902675114193LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x1061 = 2753502761466286LLU;
	int8_t x1062 = -1;
	int64_t x1063 = -1LL;
	volatile int16_t x1064 = 2;
	uint64_t t7 = 3936889170817LLU;

	t7 = (x1061<<((x1062|x1063)+x1064));

	if (t7 != 5507005522932572LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x1269 = UINT64_MAX;
	int8_t x1270 = 7;
	uint16_t x1271 = 24U;
	int8_t x1272 = 1;
	volatile uint64_t t8 = 33330447284838601LLU;

	t8 = (x1269<<((x1270|x1271)+x1272));

	if (t8 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x1289 = 1U;
	static int32_t x1290 = -1;
	int32_t x1291 = INT32_MIN;
	int8_t x1292 = 1;

	t9 = (x1289<<((x1290|x1291)+x1292));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x1569 = 4661514LLU;
	uint16_t x1570 = UINT16_MAX;
	int8_t x1571 = -14;
	int8_t x1572 = 1;
	uint64_t t10 = 55844657207662LLU;

	t10 = (x1569<<((x1570|x1571)+x1572));

	if (t10 != 4661514LLU) { NG(); } else { ; }
	
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

