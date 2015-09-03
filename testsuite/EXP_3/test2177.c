#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint32_t x515 = UINT32_MAX;
uint64_t t3 = UINT64_MAX;
static volatile uint8_t x669 = 31U;
uint64_t x670 = 693551LLU;
int64_t x740 = -1LL;
int16_t x830 = 2789;
int16_t x831 = INT16_MIN;
static int64_t x1236 = -1LL;
int8_t x1294 = -24;
static uint8_t x1318 = UINT8_MAX;
int32_t x1319 = -1;
int32_t t11 = -3284395;
volatile uint32_t t12 = UINT32_MAX;


void f0(void) {
	int64_t x1 = 30247480LL;
	uint8_t x2 = 4U;
	int32_t x4 = INT32_MIN;
	int64_t t0 = 1LL;

	t0 = ((x1|x2)<<(x3^x4));

	if (t0 != 30247484LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x305 = 920647932964376510LLU;
	int8_t x306 = -1;
	volatile int16_t x307 = -1;
	volatile int16_t x308 = -1;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x305|x306)<<(x307^x308));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x489 = 1875738024U;
	int8_t x490 = INT8_MIN;
	uint32_t x491 = UINT32_MAX;
	volatile int16_t x492 = -1;
	volatile uint32_t t2 = 791652840U;

	t2 = ((x489|x490)<<(x491^x492));

	if (t2 != 4294967208U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x513 = UINT64_MAX;
	volatile int16_t x514 = INT16_MAX;
	uint32_t x516 = UINT32_MAX;

	t3 = ((x513|x514)<<(x515^x516));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x545 = 1793;
	volatile uint8_t x546 = 109U;
	int32_t x547 = -1;
	int8_t x548 = -1;
	volatile int32_t t4 = -135;

	t4 = ((x545|x546)<<(x547^x548));

	if (t4 != 1901) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x645 = 15995091725312LLU;
	uint64_t x646 = 2540293594809251LLU;
	static int32_t x647 = -1;
	int64_t x648 = -1LL;
	uint64_t t5 = 21637LLU;

	t5 = ((x645|x646)<<(x647^x648));

	if (t5 != 2549691058925475LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x671 = -6;
	int16_t x672 = -1;
	volatile uint64_t t6 = 50925145041LLU;

	t6 = ((x669|x670)<<(x671^x672));

	if (t6 != 22194144LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x737 = 405810LLU;
	int16_t x738 = INT16_MIN;
	volatile int16_t x739 = -27;
	static volatile uint64_t t7 = 140674LLU;

	t7 = ((x737|x738)<<(x739^x740));

	if (t7 != 18446742719855329280LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x829 = 1U;
	int16_t x832 = INT16_MIN;
	volatile int32_t t8 = 60;

	t8 = ((x829|x830)<<(x831^x832));

	if (t8 != 2789) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x1233 = INT8_MIN;
	volatile uint64_t x1234 = 673107384LLU;
	static volatile uint64_t x1235 = UINT64_MAX;
	volatile uint64_t t9 = 1932LLU;

	t9 = ((x1233|x1234)<<(x1235^x1236));

	if (t9 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x1293 = UINT64_MAX;
	static int8_t x1295 = INT8_MIN;
	volatile int8_t x1296 = INT8_MIN;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x1293|x1294)<<(x1295^x1296));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x1317 = 189;
	static int8_t x1320 = -1;

	t11 = ((x1317|x1318)<<(x1319^x1320));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1361 = UINT8_MAX;
	volatile uint32_t x1362 = UINT32_MAX;
	int64_t x1363 = -1LL;
	volatile uint64_t x1364 = UINT64_MAX;

	t12 = ((x1361|x1362)<<(x1363^x1364));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1397 = INT64_MIN;
	uint64_t x1398 = 1219444225LLU;
	int64_t x1399 = -111LL;
	volatile int8_t x1400 = INT8_MIN;
	static uint64_t t13 = 409355237LLU;

	t13 = ((x1397|x1398)<<(x1399^x1400));

	if (t13 != 159834993459200LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x1477 = 1154LLU;
	int16_t x1478 = INT16_MIN;
	static int8_t x1479 = -4;
	int32_t x1480 = -1;
	uint64_t t14 = 20872LLU;

	t14 = ((x1477|x1478)<<(x1479^x1480));

	if (t14 != 18446744073709298704LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x1537 = 103LLU;
	static int8_t x1538 = INT8_MIN;
	static int16_t x1539 = -1;
	int32_t x1540 = -1;
	volatile uint64_t t15 = 551486235241302493LLU;

	t15 = ((x1537|x1538)<<(x1539^x1540));

	if (t15 != 18446744073709551591LLU) { NG(); } else { ; }
	
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


    return 0;
}

