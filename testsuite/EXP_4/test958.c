
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 0;
int16_t x3 = INT16_MIN;
volatile int32_t x52 = -1;
uint64_t x121 = UINT64_MAX;
int32_t x123 = INT32_MIN;
volatile uint8_t x393 = 109U;
int32_t t5 = -739;
uint64_t x697 = UINT64_MAX;
static uint16_t x698 = 57U;
uint16_t x993 = UINT16_MAX;
volatile uint16_t x1054 = 3U;
uint32_t x1056 = UINT32_MAX;
uint8_t x1079 = UINT8_MAX;
int32_t t9 = 2;
uint8_t x1350 = 2U;
int32_t t11 = 760;
volatile uint8_t x1531 = 55U;
uint64_t t12 = 16875762724322LLU;
int32_t x1595 = INT32_MIN;
static int32_t t13 = 3261964;
volatile int16_t x1881 = 1;
static uint16_t x1964 = 19982U;
int32_t t20 = -201401144;
volatile uint64_t t22 = 203633776LLU;
volatile uint8_t x2616 = 49U;
volatile uint64_t t23 = 338609LLU;


void f0(void) {
    	int8_t x1 = 1;
	int8_t x4 = 1;
	volatile int32_t t0 = -106268;

    t0 = (x1<<(x2|(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x49 = 49842058549LLU;
	volatile uint32_t x50 = 1U;
	int64_t x51 = 3456907263440886LL;
	volatile uint64_t t1 = 19489303953LLU;

    t1 = (x49<<(x50|(x51%x52)));

    if (t1 != 99684117098LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x122 = 5U;
	int16_t x124 = -1;
	uint64_t t2 = 1120723305952LLU;

    t2 = (x121<<(x122|(x123%x124)));

    if (t2 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x381 = 6788472LLU;
	static volatile int32_t x382 = 22;
	int8_t x383 = -3;
	int8_t x384 = 1;
	static volatile uint64_t t3 = 3678285278742LLU;

    t3 = (x381<<(x382|(x383%x384)));

    if (t3 != 28472915263488LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x394 = 0;
	uint16_t x395 = UINT16_MAX;
	static uint16_t x396 = 14U;
	volatile int32_t t4 = 251162;

    t4 = (x393<<(x394|(x395%x396)));

    if (t4 != 218) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x549 = 2U;
	int16_t x550 = 5;
	static uint32_t x551 = 3U;
	volatile int16_t x552 = INT16_MIN;

    t5 = (x549<<(x550|(x551%x552)));

    if (t5 != 256) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x699 = 0;
	static int32_t x700 = INT32_MIN;
	uint64_t t6 = 89438443LLU;

    t6 = (x697<<(x698|(x699%x700)));

    if (t6 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x994 = 7;
	uint8_t x995 = 67U;
	static uint16_t x996 = 10U;
	volatile int32_t t7 = -10;

    t7 = (x993<<(x994|(x995%x996)));

    if (t7 != 8388480) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x1053 = UINT64_MAX;
	int16_t x1055 = -1;
	volatile uint64_t t8 = 778926379230LLU;

    t8 = (x1053<<(x1054|(x1055%x1056)));

    if (t8 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x1077 = 4U;
	static uint8_t x1078 = 6U;
	uint32_t x1080 = 116U;

    t9 = (x1077<<(x1078|(x1079%x1080)));

    if (t9 != 33554432) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x1321 = 3;
	int16_t x1322 = 26;
	static int32_t x1323 = INT32_MIN;
	int16_t x1324 = INT16_MIN;
	static int32_t t10 = -1;

    t10 = (x1321<<(x1322|(x1323%x1324)));

    if (t10 != 201326592) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1349 = INT8_MAX;
	int32_t x1351 = 0;
	int32_t x1352 = 4;

    t11 = (x1349<<(x1350|(x1351%x1352)));

    if (t11 != 508) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x1529 = 78170299837564201LLU;
	uint16_t x1530 = 1U;
	int32_t x1532 = INT32_MIN;

    t12 = (x1529<<(x1530|(x1531%x1532)));

    if (t12 != 10700552714632298496LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x1593 = 22103;
	static int64_t x1594 = 2LL;
	int8_t x1596 = INT8_MIN;

    t13 = (x1593<<(x1594|(x1595%x1596)));

    if (t13 != 88412) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x1709 = UINT32_MAX;
	volatile uint8_t x1710 = 1U;
	uint32_t x1711 = UINT32_MAX;
	int32_t x1712 = -1;
	volatile uint32_t t14 = 3802U;

    t14 = (x1709<<(x1710|(x1711%x1712)));

    if (t14 != 4294967294U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1821 = 1LL;
	int8_t x1822 = 40;
	volatile uint64_t x1823 = UINT64_MAX;
	int32_t x1824 = -1;
	volatile int64_t t15 = -11895LL;

    t15 = (x1821<<(x1822|(x1823%x1824)));

    if (t15 != 1099511627776LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1882 = 1LL;
	uint16_t x1883 = 2667U;
	int16_t x1884 = -1;
	volatile int32_t t16 = 8864011;

    t16 = (x1881<<(x1882|(x1883%x1884)));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x1961 = 61;
	uint8_t x1962 = 0U;
	uint16_t x1963 = 2U;
	int32_t t17 = -985642387;

    t17 = (x1961<<(x1962|(x1963%x1964)));

    if (t17 != 244) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x2281 = 1083U;
	int32_t x2282 = 20;
	int8_t x2283 = -1;
	uint64_t x2284 = UINT64_MAX;
	int32_t t18 = -6490506;

    t18 = (x2281<<(x2282|(x2283%x2284)));

    if (t18 != 1135607808) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x2301 = INT16_MAX;
	int8_t x2302 = 0;
	int64_t x2303 = 641LL;
	int8_t x2304 = INT8_MIN;
	volatile int32_t t19 = 42;

    t19 = (x2301<<(x2302|(x2303%x2304)));

    if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x2305 = 0;
	static uint8_t x2306 = 1U;
	static int8_t x2307 = 21;
	static uint16_t x2308 = UINT16_MAX;

    t20 = (x2305<<(x2306|(x2307%x2308)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x2473 = INT16_MAX;
	static uint32_t x2474 = 14U;
	volatile uint16_t x2475 = 1U;
	volatile int64_t x2476 = INT64_MAX;
	static volatile int32_t t21 = 423;

    t21 = (x2473<<(x2474|(x2475%x2476)));

    if (t21 != 1073709056) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x2509 = 472769566385627519LLU;
	uint8_t x2510 = 7U;
	volatile int8_t x2511 = 1;
	uint64_t x2512 = 1279281240436212LLU;

    t22 = (x2509<<(x2510|(x2511%x2512)));

    if (t22 != 5174272276231667584LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x2613 = UINT64_MAX;
	static uint16_t x2614 = 11U;
	uint8_t x2615 = 5U;

    t23 = (x2613<<(x2614|(x2615%x2616)));

    if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
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
    f21();
    f22();
    f23();


    return 0;
}

