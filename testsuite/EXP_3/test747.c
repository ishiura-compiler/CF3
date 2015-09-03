#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x359 = 1653400;
int64_t x508 = -662738048459LL;
volatile int32_t t6 = 6880;
int32_t x887 = -1;
static int32_t t8 = 3;
static int32_t x978 = 1;
volatile uint64_t t9 = 41671LLU;
static volatile int8_t x1132 = INT8_MAX;
int8_t x1175 = INT8_MIN;
int32_t t11 = -6073;
uint16_t x1194 = 1U;
uint16_t x1213 = UINT16_MAX;
int32_t x1214 = 5;
int64_t x1215 = 355836720938LL;
static volatile uint8_t x1323 = 0U;
uint16_t x1446 = 12U;
int8_t x1582 = 7;


void f0(void) {
	int8_t x97 = INT8_MAX;
	uint32_t x98 = 10U;
	volatile int32_t x99 = 120660;
	static int8_t x100 = -2;
	int32_t t0 = -49091375;

	t0 = ((x97<<x98)<<(x99%x100));

	if (t0 != 130048) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x129 = 45LLU;
	static uint8_t x130 = 7U;
	uint16_t x131 = 43U;
	volatile int64_t x132 = -12410407867573LL;
	volatile uint64_t t1 = 15924058114391361LLU;

	t1 = ((x129<<x130)<<(x131%x132));

	if (t1 != 50665495807918080LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x349 = 413923369939199LLU;
	uint16_t x350 = 5U;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	uint64_t t2 = 795646631531737018LLU;

	t2 = ((x349<<x350)<<(x351%x352));

	if (t2 != 13245547838054368LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x357 = 72U;
	int16_t x358 = 0;
	int16_t x360 = 43;
	volatile int32_t t3 = 459693938;

	t3 = ((x357<<x358)<<(x359%x360));

	if (t3 != 9216) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x505 = UINT64_MAX;
	uint16_t x506 = 5U;
	uint64_t x507 = 5LLU;
	volatile uint64_t t4 = 1LLU;

	t4 = ((x505<<x506)<<(x507%x508));

	if (t4 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x605 = UINT64_MAX;
	static int8_t x606 = 0;
	static uint8_t x607 = 44U;
	int16_t x608 = -1;
	static volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x605<<x606)<<(x607%x608));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x609 = 14U;
	uint8_t x610 = 26U;
	uint16_t x611 = 0U;
	int64_t x612 = -50293672LL;

	t6 = ((x609<<x610)<<(x611%x612));

	if (t6 != 939524096) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x857 = UINT8_MAX;
	uint8_t x858 = 2U;
	int16_t x859 = -1;
	static int8_t x860 = -1;
	int32_t t7 = 51569;

	t7 = ((x857<<x858)<<(x859%x860));

	if (t7 != 1020) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x885 = 0;
	int8_t x886 = 0;
	uint32_t x888 = 63U;

	t8 = ((x885<<x886)<<(x887%x888));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x977 = UINT64_MAX;
	int64_t x979 = INT64_MAX;
	int16_t x980 = -105;

	t9 = ((x977<<x978)<<(x979%x980));

	if (t9 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1129 = UINT16_MAX;
	uint16_t x1130 = 3U;
	uint64_t x1131 = UINT64_MAX;
	int32_t t10 = -338;

	t10 = ((x1129<<x1130)<<(x1131%x1132));

	if (t10 != 1048560) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1173 = 0U;
	static int8_t x1174 = 0;
	uint8_t x1176 = 2U;

	t11 = ((x1173<<x1174)<<(x1175%x1176));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1193 = 0;
	int64_t x1195 = INT64_MIN;
	int32_t x1196 = INT32_MIN;
	static volatile int32_t t12 = 56836;

	t12 = ((x1193<<x1194)<<(x1195%x1196));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1216 = 1U;
	int32_t t13 = 4483;

	t13 = ((x1213<<x1214)<<(x1215%x1216));

	if (t13 != 2097120) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x1321 = 21;
	volatile int16_t x1322 = 0;
	int16_t x1324 = -1;
	volatile int32_t t14 = -108;

	t14 = ((x1321<<x1322)<<(x1323%x1324));

	if (t14 != 21) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1445 = INT8_MAX;
	static uint16_t x1447 = 1928U;
	volatile int16_t x1448 = -1;
	volatile int32_t t15 = 80041518;

	t15 = ((x1445<<x1446)<<(x1447%x1448));

	if (t15 != 520192) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1581 = 1U;
	int16_t x1583 = INT16_MIN;
	int8_t x1584 = 1;
	int32_t t16 = -363;

	t16 = ((x1581<<x1582)<<(x1583%x1584));

	if (t16 != 128) { NG(); } else { ; }
	
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


    return 0;
}

