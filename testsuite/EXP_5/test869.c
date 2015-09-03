#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x23 = 2;
uint8_t x315 = 0U;
uint8_t x355 = 7U;
uint32_t x356 = 3U;
static uint16_t x377 = 352U;
uint32_t x380 = 319923U;
uint32_t x394 = 1228383680U;
uint8_t x395 = 8U;
static int32_t x561 = INT32_MIN;
static int32_t t8 = -318444;
int64_t x765 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 17U;
	uint32_t x4 = 57110606U;
	static volatile uint32_t t0 = 1U;

	t0 = (x1&((x2<<x3)-x4));

	if (t0 != 4237721600U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = -1LL;
	int8_t x22 = INT8_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t1 = 1351569626368LLU;

	t1 = (x21&((x22<<x23)-x24));

	if (t1 != 509LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x314 = UINT8_MAX;
	int8_t x316 = INT8_MAX;
	volatile int32_t t2 = -892135630;

	t2 = (x313&((x314<<x315)-x316));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x353 = -460913810713385LL;
	uint16_t x354 = UINT16_MAX;
	int64_t t3 = -129211490426678130LL;

	t3 = (x353&((x354<<x355)-x356));

	if (t3 != 676949LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x378 = 7985646U;
	volatile uint32_t x379 = 7U;
	uint32_t t4 = 767707475U;

	t4 = (x377&((x378<<x379)-x380));

	if (t4 != 320U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x393 = INT16_MAX;
	volatile uint16_t x396 = UINT16_MAX;
	volatile uint32_t t5 = 3164U;

	t5 = (x393&((x394<<x395)-x396));

	if (t5 != 16385U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x437 = 446;
	static volatile uint16_t x438 = 2021U;
	volatile uint8_t x439 = 4U;
	static int8_t x440 = -1;
	volatile int32_t t6 = 744409;

	t6 = (x437&((x438<<x439)-x440));

	if (t6 != 16) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x549 = INT64_MAX;
	uint8_t x550 = 90U;
	uint32_t x551 = 2U;
	int32_t x552 = INT32_MAX;
	int64_t t7 = -729167971724LL;

	t7 = (x549&((x550<<x551)-x552));

	if (t7 != 9223372034707292521LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x562 = INT8_MAX;
	static uint8_t x563 = 7U;
	volatile uint16_t x564 = 11670U;

	t8 = (x561&((x562<<x563)-x564));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x653 = 1057231574LLU;
	volatile int16_t x654 = INT16_MAX;
	volatile uint16_t x655 = 0U;
	int8_t x656 = 2;
	uint64_t t9 = 1115942139030LLU;

	t9 = (x653&((x654<<x655)-x656));

	if (t9 != 4820LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x757 = 74;
	static int8_t x758 = 1;
	volatile uint8_t x759 = 1U;
	uint32_t x760 = 243992U;
	static volatile uint32_t t10 = 14100594U;

	t10 = (x757&((x758<<x759)-x760));

	if (t10 != 74U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x766 = 23U;
	uint8_t x767 = 9U;
	static int16_t x768 = -1;
	static int64_t t11 = -44LL;

	t11 = (x765&((x766<<x767)-x768));

	if (t11 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

