
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

int32_t x126 = 204;
uint64_t x371 = UINT64_MAX;
volatile uint64_t x466 = 2425573791LLU;
static int8_t x593 = INT8_MAX;
uint8_t x646 = 5U;
static volatile uint16_t x779 = 86U;
int16_t x859 = -1;
static int64_t t6 = -13303648LL;
int8_t x900 = -6;
int32_t x1066 = INT32_MAX;
volatile uint64_t x1069 = 14353958048LLU;
volatile uint64_t t10 = 620997097LLU;


void f0(void) {
    	uint64_t x125 = 1308917LLU;
	uint16_t x127 = 2U;
	volatile uint8_t x128 = 1U;
	volatile uint64_t t0 = 1618401167LLU;

    t0 = (x125+(x126>>(x127^x128)));

    if (t0 != 1308942LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x369 = -1;
	static uint32_t x370 = 518566U;
	int8_t x372 = -1;
	uint32_t t1 = 60U;

    t1 = (x369+(x370>>(x371^x372)));

    if (t1 != 518565U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x465 = -300430916958395626LL;
	int16_t x467 = -1;
	volatile int8_t x468 = -1;
	uint64_t t2 = 310804397LLU;

    t2 = (x465+(x466>>(x467^x468)));

    if (t2 != 18146313159176729781LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x594 = 987;
	int8_t x595 = -8;
	int8_t x596 = -3;
	int32_t t3 = -23659262;

    t3 = (x593+(x594>>(x595^x596)));

    if (t3 != 157) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x645 = INT64_MIN;
	static uint8_t x647 = 1U;
	volatile int32_t x648 = 0;
	volatile int64_t t4 = -14009LL;

    t4 = (x645+(x646>>(x647^x648)));

    if (t4 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x777 = INT32_MIN;
	static uint64_t x778 = 441205234LLU;
	int8_t x780 = INT8_MAX;
	uint64_t t5 = 29LLU;

    t5 = (x777+(x778>>(x779^x780)));

    if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x857 = -22747809504975LL;
	volatile uint32_t x858 = 11893662U;
	volatile uint64_t x860 = UINT64_MAX;

    t6 = (x857+(x858>>(x859^x860)));

    if (t6 != -22747797611313LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x897 = INT64_MIN;
	volatile int64_t x898 = 6318873LL;
	int16_t x899 = -1;
	static volatile int64_t t7 = -97394128LL;

    t7 = (x897+(x898>>(x899^x900)));

    if (t7 != -9223372036854578344LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x977 = -1LL;
	static uint16_t x978 = UINT16_MAX;
	static int8_t x979 = INT8_MIN;
	int8_t x980 = INT8_MIN;
	volatile int64_t t8 = 226500390LL;

    t8 = (x977+(x978>>(x979^x980)));

    if (t8 != 65534LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x1065 = INT32_MIN;
	int16_t x1067 = INT16_MIN;
	int16_t x1068 = INT16_MIN;
	volatile int32_t t9 = 39455814;

    t9 = (x1065+(x1066>>(x1067^x1068)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x1070 = 99228925U;
	int8_t x1071 = -1;
	int8_t x1072 = -1;

    t10 = (x1069+(x1070>>(x1071^x1072)));

    if (t10 != 14453186973LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1133 = INT32_MIN;
	uint8_t x1134 = UINT8_MAX;
	static uint8_t x1135 = 0U;
	uint8_t x1136 = 1U;
	volatile int32_t t11 = -5;

    t11 = (x1133+(x1134>>(x1135^x1136)));

    if (t11 != -2147483521) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x1213 = 12U;
	static uint8_t x1214 = UINT8_MAX;
	uint32_t x1215 = 0U;
	static uint8_t x1216 = 0U;
	volatile int32_t t12 = 4589;

    t12 = (x1213+(x1214>>(x1215^x1216)));

    if (t12 != 267) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x1261 = UINT8_MAX;
	int8_t x1262 = INT8_MAX;
	static int16_t x1263 = INT16_MIN;
	int16_t x1264 = INT16_MIN;
	static int32_t t13 = -397826795;

    t13 = (x1261+(x1262>>(x1263^x1264)));

    if (t13 != 382) { NG(); } else { ; }
	
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


    return 0;
}

