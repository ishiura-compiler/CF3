
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

int8_t x141 = 49;
int8_t x142 = 38;
volatile uint64_t x144 = UINT64_MAX;
uint8_t x265 = 36U;
int16_t x268 = -1;
int8_t x314 = 0;
uint64_t x325 = UINT64_MAX;
static int32_t x402 = INT32_MIN;
static int8_t x520 = -1;
int8_t x586 = -1;
uint16_t x615 = 0U;
volatile int64_t t12 = 139071LL;
uint64_t t13 = 4163576732852708704LLU;
int16_t x1071 = 6;
static int64_t x1336 = -3364LL;
uint32_t x1438 = 50U;
int8_t x1455 = 19;


void f0(void) {
    	uint16_t x143 = 5U;
	uint64_t t0 = 293789011202LLU;

    t0 = (((x141-x142)<<x143)-x144);

    if (t0 != 353LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x257 = 7U;
	static uint8_t x258 = 3U;
	uint64_t x259 = 5LLU;
	volatile int8_t x260 = -1;
	static volatile uint32_t t1 = 399089287U;

    t1 = (((x257-x258)<<x259)-x260);

    if (t1 != 129U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 0U;
	uint64_t t2 = 31026746LLU;

    t2 = (((x265-x266)<<x267)-x268);

    if (t2 != 38LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x313 = 558423968899867010LLU;
	volatile uint16_t x315 = 0U;
	uint8_t x316 = 2U;
	volatile uint64_t t3 = 4057133756208837938LLU;

    t3 = (((x313-x314)<<x315)-x316);

    if (t3 != 558423968899867008LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x326 = 6U;
	uint32_t x327 = 13U;
	int64_t x328 = 0LL;
	uint64_t t4 = 33539071608912350LLU;

    t4 = (((x325-x326)<<x327)-x328);

    if (t4 != 18446744073709494272LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile uint8_t x403 = 0U;
	int16_t x404 = -14678;
	uint64_t t5 = 1803841LLU;

    t5 = (((x401-x402)<<x403)-x404);

    if (t5 != 2147498325LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x517 = INT64_MIN;
	static int64_t x518 = INT64_MIN;
	uint8_t x519 = 6U;
	int64_t t6 = -90852LL;

    t6 = (((x517-x518)<<x519)-x520);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x585 = UINT64_MAX;
	int8_t x587 = 38;
	int16_t x588 = -509;
	uint64_t t7 = 2837009843LLU;

    t7 = (((x585-x586)<<x587)-x588);

    if (t7 != 509LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x613 = -1;
	volatile int16_t x614 = -1;
	int64_t x616 = -4007124883566LL;
	int64_t t8 = -39282381877LL;

    t8 = (((x613-x614)<<x615)-x616);

    if (t8 != 4007124883566LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x693 = 31;
	static int16_t x694 = -1;
	uint64_t x695 = 17LLU;
	static volatile uint16_t x696 = UINT16_MAX;
	volatile int32_t t9 = 6690540;

    t9 = (((x693-x694)<<x695)-x696);

    if (t9 != 4128769) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x757 = 19083535U;
	uint64_t x758 = UINT64_MAX;
	uint16_t x759 = 21U;
	volatile int8_t x760 = INT8_MIN;
	static uint64_t t10 = 909LLU;

    t10 = (((x757-x758)<<x759)-x760);

    if (t10 != 40021075689600LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x801 = 9U;
	int16_t x802 = INT16_MIN;
	int16_t x803 = 12;
	uint64_t x804 = 384974703237627066LLU;
	uint64_t t11 = 76029LLU;

    t11 = (((x801-x802)<<x803)-x804);

    if (t11 != 18061769370606179142LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x829 = INT64_MIN;
	int64_t x830 = INT64_MIN;
	volatile uint8_t x831 = 43U;
	int32_t x832 = -1;

    t12 = (((x829-x830)<<x831)-x832);

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x877 = 1347230LLU;
	uint32_t x878 = 699226U;
	uint16_t x879 = 0U;
	int16_t x880 = 86;

    t13 = (((x877-x878)<<x879)-x880);

    if (t13 != 647918LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x941 = -1;
	int8_t x942 = INT8_MIN;
	int16_t x943 = 0;
	int16_t x944 = INT16_MAX;
	int32_t t14 = -6754095;

    t14 = (((x941-x942)<<x943)-x944);

    if (t14 != -32640) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x1069 = UINT32_MAX;
	int16_t x1070 = -6;
	uint16_t x1072 = UINT16_MAX;
	uint32_t t15 = 1312986U;

    t15 = (((x1069-x1070)<<x1071)-x1072);

    if (t15 != 4294902081U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1141 = 24U;
	volatile uint64_t x1142 = UINT64_MAX;
	volatile int16_t x1143 = 55;
	static uint32_t x1144 = 86781777U;
	uint64_t t16 = 1LLU;

    t16 = (((x1141-x1142)<<x1143)-x1144);

    if (t16 != 900719925387317423LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1181 = -1;
	int8_t x1182 = INT8_MIN;
	volatile uint8_t x1183 = 7U;
	static volatile int64_t x1184 = 11510525796668306LL;
	volatile int64_t t17 = 3013625LL;

    t17 = (((x1181-x1182)<<x1183)-x1184);

    if (t17 != -11510525796652050LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x1209 = INT8_MAX;
	volatile uint32_t x1210 = 87995096U;
	int8_t x1211 = 2;
	volatile int16_t x1212 = INT16_MAX;
	uint32_t t18 = 29201286U;

    t18 = (((x1209-x1210)<<x1211)-x1212);

    if (t18 != 3942954653U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x1333 = 2823LL;
	volatile int8_t x1334 = INT8_MAX;
	static int64_t x1335 = 2LL;
	volatile int64_t t19 = -9LL;

    t19 = (((x1333-x1334)<<x1335)-x1336);

    if (t19 != 14148LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x1437 = INT16_MAX;
	uint8_t x1439 = 20U;
	volatile uint32_t x1440 = 511904957U;
	uint32_t t20 = 0U;

    t20 = (((x1437-x1438)<<x1439)-x1440);

    if (t20 != 3729584963U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x1453 = 6698909828LL;
	volatile uint64_t x1454 = 2930LLU;
	int64_t x1456 = -1LL;
	uint64_t t21 = 3165LLU;

    t21 = (((x1453-x1454)<<x1455)-x1456);

    if (t21 != 3512156499738625LLU) { NG(); } else { ; }
	
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


    return 0;
}

