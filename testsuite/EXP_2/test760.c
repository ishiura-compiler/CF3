#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x23 = UINT32_MAX;
uint16_t x68 = 1U;
int8_t x93 = 0;
static int8_t x95 = -9;
uint64_t x325 = 3LLU;
int32_t x328 = 1;


void f0(void) {
	static uint32_t x21 = UINT32_MAX;
	static int8_t x22 = 1;
	uint32_t x24 = 0U;
	volatile uint32_t t0 = 3629614U;

	t0 = ((x21>>(x22%x23))<<x24);

	if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x65 = 1U;
	int8_t x66 = 0;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t t1 = 17051;

	t1 = ((x65>>(x66%x67))<<x68);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x94 = 7;
	volatile int64_t x96 = 6LL;
	static int32_t t2 = 161732;

	t2 = ((x93>>(x94%x95))<<x96);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = 7;
	uint32_t x135 = 3174U;
	static uint16_t x136 = 5U;
	static volatile int32_t t3 = -11099312;

	t3 = ((x133>>(x134%x135))<<x136);

	if (t3 != 536870880) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x326 = 0;
	int32_t x327 = INT32_MIN;
	static uint64_t t4 = 6545285696988226LLU;

	t4 = ((x325>>(x326%x327))<<x328);

	if (t4 != 6LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x585 = UINT32_MAX;
	uint64_t x586 = UINT64_MAX;
	static int8_t x587 = 12;
	uint8_t x588 = 22U;
	volatile uint32_t t5 = 43U;

	t5 = ((x585>>(x586%x587))<<x588);

	if (t5 != 4290772992U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x889 = UINT8_MAX;
	int64_t x890 = INT64_MIN;
	int16_t x891 = INT16_MIN;
	static int8_t x892 = 1;
	int32_t t6 = 54;

	t6 = ((x889>>(x890%x891))<<x892);

	if (t6 != 510) { NG(); } else { ; }
	
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

