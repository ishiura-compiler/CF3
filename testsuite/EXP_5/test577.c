#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x260 = 0;
int64_t x265 = INT64_MIN;
uint16_t x266 = UINT16_MAX;
uint64_t t4 = 36350889334697925LLU;
int16_t x905 = INT16_MIN;
int64_t x997 = -22126525LL;
int8_t x999 = INT8_MIN;
static uint16_t x1000 = 22U;
static int64_t t8 = 194549915197LL;
volatile uint64_t x1334 = 1406213LLU;
volatile int64_t t10 = -67LL;
int8_t x1809 = -1;
int8_t x1810 = INT8_MIN;
static uint64_t x1919 = UINT64_MAX;
uint16_t x1925 = 12430U;
int32_t x1927 = INT32_MAX;


void f0(void) {
	static uint8_t x257 = 5U;
	static volatile int16_t x258 = INT16_MAX;
	volatile int8_t x259 = INT8_MAX;
	int32_t t0 = -274873731;

	t0 = (x257%((x258/x259)<<x260));

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x267 = 6U;
	int8_t x268 = 4;
	volatile int64_t t1 = 106483819LL;

	t1 = (x265%((x266/x267)<<x268));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x445 = INT32_MAX;
	static uint16_t x446 = 28533U;
	uint8_t x447 = UINT8_MAX;
	uint8_t x448 = 7U;
	volatile int32_t t2 = 733;

	t2 = (x445%((x446/x447)<<x448));

	if (t2 != 1279) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x653 = UINT8_MAX;
	uint64_t x654 = UINT64_MAX;
	int32_t x655 = INT32_MIN;
	static uint8_t x656 = 4U;
	uint64_t t3 = 1770233LLU;

	t3 = (x653%((x654/x655)<<x656));

	if (t3 != 15LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x809 = 132412465986128LLU;
	uint64_t x810 = 19431476830150577LLU;
	int32_t x811 = 1403;
	static int16_t x812 = 3;

	t4 = (x809%((x810/x811)<<x812));

	if (t4 != 21612883205512LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x906 = INT16_MIN;
	int8_t x907 = INT8_MIN;
	int64_t x908 = 0LL;
	int32_t t5 = -28872;

	t5 = (x905%((x906/x907)<<x908));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x998 = INT8_MIN;
	int64_t t6 = -6287990269677244LL;

	t6 = (x997%((x998/x999)<<x1000));

	if (t6 != -1155005LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x1181 = -1;
	static int16_t x1182 = -34;
	static int64_t x1183 = -1LL;
	int8_t x1184 = 9;
	static volatile int64_t t7 = 1094862197LL;

	t7 = (x1181%((x1182/x1183)<<x1184));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x1317 = INT16_MIN;
	static int64_t x1318 = INT64_MAX;
	volatile uint16_t x1319 = 17857U;
	static volatile uint8_t x1320 = 12U;

	t8 = (x1317%((x1318/x1319)<<x1320));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x1333 = UINT64_MAX;
	volatile int64_t x1335 = 1770LL;
	static int64_t x1336 = 12LL;
	uint64_t t9 = 7724LLU;

	t9 = (x1333%((x1334/x1335)<<x1336));

	if (t9 != 1048575LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x1365 = 53935;
	int64_t x1366 = -133917095424270LL;
	volatile int16_t x1367 = INT16_MIN;
	uint8_t x1368 = 2U;

	t10 = (x1365%((x1366/x1367)<<x1368));

	if (t10 != 53935LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1713 = -59;
	int16_t x1714 = 8723;
	uint8_t x1715 = UINT8_MAX;
	uint8_t x1716 = 7U;
	static volatile int32_t t11 = 7277;

	t11 = (x1713%((x1714/x1715)<<x1716));

	if (t11 != -59) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1741 = UINT16_MAX;
	volatile int64_t x1742 = INT64_MAX;
	static int32_t x1743 = INT32_MAX;
	int16_t x1744 = 2;
	volatile int64_t t12 = 3LL;

	t12 = (x1741%((x1742/x1743)<<x1744));

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1811 = 646607LLU;
	volatile uint8_t x1812 = 8U;
	uint64_t t13 = 155274LLU;

	t13 = (x1809%((x1810/x1811)<<x1812));

	if (t13 != 5905404710351615LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1901 = INT64_MIN;
	static int32_t x1902 = -1038331;
	volatile int16_t x1903 = INT16_MIN;
	uint8_t x1904 = 13U;
	static volatile int64_t t14 = -3630024710LL;

	t14 = (x1901%((x1902/x1903)<<x1904));

	if (t14 != -8192LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1917 = 0U;
	int32_t x1918 = -1;
	int32_t x1920 = 1;
	volatile uint64_t t15 = 294801714315378984LLU;

	t15 = (x1917%((x1918/x1919)<<x1920));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1926 = UINT64_MAX;
	static volatile uint32_t x1928 = 19U;
	volatile uint64_t t16 = 140457648201144314LLU;

	t16 = (x1925%((x1926/x1927)<<x1928));

	if (t16 != 12430LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x2157 = -5;
	int32_t x2158 = INT32_MIN;
	int32_t x2159 = INT32_MIN;
	uint8_t x2160 = 9U;
	volatile int32_t t17 = -14726008;

	t17 = (x2157%((x2158/x2159)<<x2160));

	if (t17 != -5) { NG(); } else { ; }
	
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


    return 0;
}

