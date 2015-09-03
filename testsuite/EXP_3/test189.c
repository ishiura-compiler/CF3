#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x715 = 10LL;
uint32_t x842 = 297U;
int8_t x939 = 11;
uint64_t t7 = 2772LLU;
uint32_t x1116 = UINT32_MAX;
uint8_t x1155 = 12U;
int64_t x1270 = -1LL;
uint64_t x1519 = UINT64_MAX;
static volatile uint64_t t16 = 11234565281LLU;
uint64_t x1684 = UINT64_MAX;
volatile int32_t t19 = -128109810;
uint64_t x1726 = 1672784358545165412LLU;
static uint64_t t20 = 34400887405682889LLU;


void f0(void) {
	static int16_t x101 = INT16_MAX;
	int16_t x102 = -1;
	int64_t x103 = 1LL;
	uint64_t x104 = UINT64_MAX;
	int32_t t0 = -1;

	t0 = ((x101-x102)>>(x103-x104));

	if (t0 != 8192) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x329 = -1;
	int8_t x330 = INT8_MIN;
	int8_t x331 = 17;
	static int8_t x332 = 1;
	int32_t t1 = -60323;

	t1 = ((x329-x330)>>(x331-x332));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x357 = 22;
	static int32_t x358 = 2;
	int8_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t2 = 1390559;

	t2 = ((x357-x358)>>(x359-x360));

	if (t2 != 20) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x641 = 167U;
	int16_t x642 = INT16_MAX;
	static uint8_t x643 = 2U;
	static uint8_t x644 = 1U;
	volatile uint32_t t3 = 58622401U;

	t3 = ((x641-x642)>>(x643-x644));

	if (t3 != 2147467348U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x713 = 33U;
	uint16_t x714 = 18U;
	uint64_t x716 = UINT64_MAX;
	uint32_t t4 = 54U;

	t4 = ((x713-x714)>>(x715-x716));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x841 = 120U;
	int16_t x843 = INT16_MIN;
	static int16_t x844 = INT16_MIN;
	volatile uint32_t t5 = 8U;

	t5 = ((x841-x842)>>(x843-x844));

	if (t5 != 4294967119U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x937 = INT16_MIN;
	static int64_t x938 = INT64_MIN;
	uint8_t x940 = 1U;
	volatile int64_t t6 = 1LL;

	t6 = ((x937-x938)>>(x939-x940));

	if (t6 != 9007199254740960LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x941 = 1LLU;
	uint16_t x942 = UINT16_MAX;
	uint16_t x943 = 60U;
	static uint32_t x944 = 13U;

	t7 = ((x941-x942)>>(x943-x944));

	if (t7 != 131071LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x1113 = -1;
	uint32_t x1114 = 2295255U;
	uint32_t x1115 = UINT32_MAX;
	uint32_t t8 = 1116088U;

	t8 = ((x1113-x1114)>>(x1115-x1116));

	if (t8 != 4292672040U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x1153 = -1;
	volatile uint64_t x1154 = UINT64_MAX;
	uint64_t x1156 = UINT64_MAX;
	volatile uint64_t t9 = 25122079LLU;

	t9 = ((x1153-x1154)>>(x1155-x1156));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1181 = UINT8_MAX;
	int8_t x1182 = INT8_MAX;
	volatile int16_t x1183 = -1;
	static int32_t x1184 = -1;
	int32_t t10 = 7829;

	t10 = ((x1181-x1182)>>(x1183-x1184));

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1233 = 62;
	int16_t x1234 = -183;
	int16_t x1235 = -1;
	static volatile int64_t x1236 = -1LL;
	volatile int32_t t11 = 195411162;

	t11 = ((x1233-x1234)>>(x1235-x1236));

	if (t11 != 245) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1269 = UINT8_MAX;
	int32_t x1271 = -1;
	int64_t x1272 = -1LL;
	int64_t t12 = 97129799880113LL;

	t12 = ((x1269-x1270)>>(x1271-x1272));

	if (t12 != 256LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1369 = 7506U;
	static int8_t x1370 = INT8_MIN;
	static volatile int8_t x1371 = -1;
	static volatile uint64_t x1372 = UINT64_MAX;
	volatile int32_t t13 = 2;

	t13 = ((x1369-x1370)>>(x1371-x1372));

	if (t13 != 7634) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x1405 = INT64_MAX;
	int32_t x1406 = INT32_MAX;
	uint32_t x1407 = 43U;
	uint64_t x1408 = UINT64_MAX;
	volatile int64_t t14 = -4109436253964345LL;

	t14 = ((x1405-x1406)>>(x1407-x1408));

	if (t14 != 524287LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1409 = 53U;
	volatile uint64_t x1410 = 56267LLU;
	int32_t x1411 = -1;
	int32_t x1412 = -6;
	static uint64_t t15 = 87909948LLU;

	t15 = ((x1409-x1410)>>(x1411-x1412));

	if (t15 != 576460752303421731LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1517 = 39LLU;
	int32_t x1518 = INT32_MIN;
	int32_t x1520 = -1;

	t16 = ((x1517-x1518)>>(x1519-x1520));

	if (t16 != 2147483687LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1637 = INT32_MIN;
	volatile uint64_t x1638 = UINT64_MAX;
	volatile uint64_t x1639 = 0LLU;
	int8_t x1640 = -1;
	volatile uint64_t t17 = 2888813405860LLU;

	t17 = ((x1637-x1638)>>(x1639-x1640));

	if (t17 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1681 = -1;
	int8_t x1682 = -1;
	uint64_t x1683 = UINT64_MAX;
	int32_t t18 = -8915866;

	t18 = ((x1681-x1682)>>(x1683-x1684));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1685 = -1;
	int32_t x1686 = -1;
	uint32_t x1687 = 121U;
	static uint8_t x1688 = 103U;

	t19 = ((x1685-x1686)>>(x1687-x1688));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1725 = INT32_MAX;
	uint64_t x1727 = 10LLU;
	static uint8_t x1728 = 4U;

	t20 = ((x1725-x1726)>>(x1727-x1728));

	if (t20 != 262093120582997966LLU) { NG(); } else { ; }
	
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
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();


    return 0;
}

