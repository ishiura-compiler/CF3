#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x130 = 0U;
int32_t t0 = -492878019;
static uint32_t x732 = 2873400U;
static volatile int64_t x872 = INT64_MAX;
uint8_t x1266 = 5U;
uint64_t x1326 = 239334LLU;
int64_t x1328 = INT64_MIN;
static volatile int8_t x1606 = 7;


void f0(void) {
	static uint8_t x129 = 33U;
	volatile int8_t x131 = 0;
	volatile int16_t x132 = -2720;

	t0 = (x129<<((x130>>x131)&x132));

	if (t0 != 33) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x289 = 1;
	volatile int8_t x290 = 0;
	uint8_t x291 = 17U;
	uint8_t x292 = 16U;
	int32_t t1 = 12711;

	t1 = (x289<<((x290>>x291)&x292));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x653 = INT64_MAX;
	volatile int64_t x654 = INT64_MAX;
	uint16_t x655 = 6U;
	int64_t x656 = INT64_MIN;
	static int64_t t2 = INT64_MAX;

	t2 = (x653<<((x654>>x655)&x656));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x729 = 3U;
	static volatile int8_t x730 = 1;
	int16_t x731 = 3;
	int32_t t3 = -442287214;

	t3 = (x729<<((x730>>x731)&x732));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x869 = 4;
	int16_t x870 = 0;
	uint64_t x871 = 15LLU;
	static int32_t t4 = 303707058;

	t4 = (x869<<((x870>>x871)&x872));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x997 = 17403521052561LLU;
	uint16_t x998 = UINT16_MAX;
	int16_t x999 = 1;
	uint16_t x1000 = 45U;
	static volatile uint64_t t5 = 59903389095569874LLU;

	t5 = (x997<<((x998>>x999)&x1000));

	if (t5 != 1581361603532554240LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x1265 = INT32_MAX;
	uint16_t x1267 = 12U;
	int64_t x1268 = -1613399754175978LL;
	volatile int32_t t6 = INT32_MAX;

	t6 = (x1265<<((x1266>>x1267)&x1268));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x1325 = INT64_MAX;
	uint16_t x1327 = 1U;
	int64_t t7 = INT64_MAX;

	t7 = (x1325<<((x1326>>x1327)&x1328));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x1605 = 59253915535491028LL;
	uint16_t x1607 = 5U;
	int16_t x1608 = -20;
	static int64_t t8 = -57253090167721506LL;

	t8 = (x1605<<((x1606>>x1607)&x1608));

	if (t8 != 59253915535491028LL) { NG(); } else { ; }
	
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


    return 0;
}

