
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

uint64_t x1 = 25000262364862579LLU;
int8_t x44 = -6;
volatile uint32_t x53 = 0U;
uint64_t x59 = UINT64_MAX;
static uint64_t t4 = 1059LLU;
volatile uint32_t x218 = 1U;
uint64_t x357 = 2526633891488LLU;
volatile uint16_t x504 = 118U;
int32_t t8 = -417;
int32_t x918 = 8;
uint8_t x1078 = 3U;
uint8_t x1307 = UINT8_MAX;
uint8_t x1335 = UINT8_MAX;
static uint64_t x1358 = 1LLU;
uint8_t x1592 = 30U;
int64_t x1708 = -54420450LL;
static uint32_t t21 = 1418444U;
static volatile uint16_t x1974 = 8U;
static volatile int64_t t23 = -19505LL;
static int64_t x2041 = 53270760554498653LL;
static volatile uint64_t x2044 = UINT64_MAX;
int32_t x2069 = 251898586;
static uint32_t x2072 = 30964342U;
int8_t x2398 = 5;


void f0(void) {
    	int8_t x2 = 40;
	uint16_t x3 = 23U;
	static uint32_t x4 = 433179367U;
	volatile uint64_t t0 = 6146852102515413494LLU;

    t0 = ((x1<<x2)^(x3%x4));

    if (t0 != 10130973805607125015LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x29 = 1;
	int16_t x30 = 1;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 331576U;
	uint32_t t1 = 459995U;

    t1 = ((x29<<x30)^(x31%x32));

    if (t1 != 30602U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x41 = 70431808705964523LLU;
	uint8_t x42 = 3U;
	volatile int16_t x43 = 3551;
	static uint64_t t2 = 0LLU;

    t2 = ((x41<<x42)^(x43%x44));

    if (t2 != 563454469647716189LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x54 = 4;
	uint32_t x55 = 13787467U;
	uint8_t x56 = 125U;
	uint32_t t3 = 0U;

    t3 = ((x53<<x54)^(x55%x56));

    if (t3 != 92U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x57 = UINT16_MAX;
	int32_t x58 = 1;
	int8_t x60 = -1;

    t4 = ((x57<<x58)^(x59%x60));

    if (t4 != 131070LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x217 = 17111968645431933LLU;
	int8_t x219 = -1;
	static uint8_t x220 = UINT8_MAX;
	static uint64_t t5 = 4LLU;

    t5 = ((x217<<x218)^(x219%x220));

    if (t5 != 18412520136418687749LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x358 = 3U;
	uint16_t x359 = 27374U;
	volatile int64_t x360 = 935520836237031253LL;
	volatile uint64_t t6 = 4831307816LLU;

    t6 = ((x357<<x358)^(x359%x360));

    if (t6 != 20213071142894LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x501 = 66896LL;
	uint32_t x502 = 26U;
	volatile int32_t x503 = INT32_MAX;
	volatile int64_t t7 = -25662726858LL;

    t7 = ((x501<<x502)^(x503%x504));

    if (t7 != 4489314566257LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x729 = 62U;
	uint8_t x730 = 11U;
	int16_t x731 = INT16_MIN;
	int32_t x732 = INT32_MAX;

    t8 = ((x729<<x730)^(x731%x732));

    if (t8 != -102400) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x917 = INT8_MAX;
	static int64_t x919 = INT64_MAX;
	int8_t x920 = -1;
	int64_t t9 = -5LL;

    t9 = ((x917<<x918)^(x919%x920));

    if (t9 != 32512LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x997 = 9U;
	uint16_t x998 = 4U;
	volatile int64_t x999 = 10562306648270005LL;
	uint64_t x1000 = 165066645299018LLU;
	volatile uint64_t t10 = 632LLU;

    t10 = ((x997<<x998)^(x999%x1000));

    if (t10 != 163107994431983LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1033 = UINT64_MAX;
	int8_t x1034 = 30;
	static int32_t x1035 = -1;
	uint64_t x1036 = 3133659072733867LLU;
	uint64_t t11 = 503547094392455LLU;

    t11 = ((x1033<<x1034)^(x1035%x1036));

    if (t11 != 18444717301344495701LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x1041 = 6U;
	static uint8_t x1042 = 0U;
	volatile int64_t x1043 = INT64_MAX;
	static int8_t x1044 = 6;
	volatile int64_t t12 = -35128850LL;

    t12 = ((x1041<<x1042)^(x1043%x1044));

    if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x1077 = 36U;
	uint16_t x1079 = UINT16_MAX;
	int8_t x1080 = -1;
	static volatile int32_t t13 = -3479108;

    t13 = ((x1077<<x1078)^(x1079%x1080));

    if (t13 != 288) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x1305 = 1;
	uint16_t x1306 = 10U;
	int8_t x1308 = INT8_MAX;
	int32_t t14 = -13500365;

    t14 = ((x1305<<x1306)^(x1307%x1308));

    if (t14 != 1025) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1333 = UINT8_MAX;
	int32_t x1334 = 0;
	static int8_t x1336 = INT8_MIN;
	int32_t t15 = 0;

    t15 = ((x1333<<x1334)^(x1335%x1336));

    if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x1357 = UINT16_MAX;
	volatile int16_t x1359 = INT16_MAX;
	int32_t x1360 = INT32_MIN;
	static int32_t t16 = -11374;

    t16 = ((x1357<<x1358)^(x1359%x1360));

    if (t16 != 98305) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x1445 = UINT16_MAX;
	int16_t x1446 = 1;
	uint64_t x1447 = UINT64_MAX;
	uint64_t x1448 = UINT64_MAX;
	volatile uint64_t t17 = 568137846810463LLU;

    t17 = ((x1445<<x1446)^(x1447%x1448));

    if (t17 != 131070LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1553 = 501U;
	uint8_t x1554 = 8U;
	int16_t x1555 = INT16_MIN;
	static uint8_t x1556 = 31U;
	volatile int32_t t18 = -10;

    t18 = ((x1553<<x1554)^(x1555%x1556));

    if (t18 != -128257) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1589 = 0U;
	uint8_t x1590 = 1U;
	static int8_t x1591 = INT8_MIN;
	uint32_t t19 = 10040U;

    t19 = ((x1589<<x1590)^(x1591%x1592));

    if (t19 != 4294967288U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x1705 = UINT32_MAX;
	uint64_t x1706 = 5LLU;
	static int8_t x1707 = -3;
	int64_t t20 = -6795720LL;

    t20 = ((x1705<<x1706)^(x1707%x1708));

    if (t20 != -4294967267LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1761 = UINT32_MAX;
	uint8_t x1762 = 0U;
	int16_t x1763 = -1;
	uint32_t x1764 = 4941U;

    t21 = ((x1761<<x1762)^(x1763%x1764));

    if (t21 != 4294964250U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x1941 = UINT32_MAX;
	volatile uint8_t x1942 = 3U;
	uint8_t x1943 = 0U;
	int16_t x1944 = INT16_MIN;
	volatile uint32_t t22 = 4U;

    t22 = ((x1941<<x1942)^(x1943%x1944));

    if (t22 != 4294967288U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1973 = 4018483U;
	volatile int8_t x1975 = INT8_MAX;
	static volatile int64_t x1976 = INT64_MAX;

    t23 = ((x1973<<x1974)^(x1975%x1976));

    if (t23 != 1028731775LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x2013 = 4248;
	static uint64_t x2014 = 4LLU;
	static int64_t x2015 = -1673639692LL;
	int64_t x2016 = INT64_MIN;
	volatile int64_t t24 = 352042142487LL;

    t24 = ((x2013<<x2014)^(x2015%x2016));

    if (t24 != -1673576076LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x2042 = 0U;
	uint8_t x2043 = 5U;
	volatile uint64_t t25 = 9215319842149268LLU;

    t25 = ((x2041<<x2042)^(x2043%x2044));

    if (t25 != 53270760554498648LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2070 = 1;
	uint16_t x2071 = UINT16_MAX;
	volatile uint32_t t26 = 28958154U;

    t26 = ((x2069<<x2070)^(x2071%x2072));

    if (t26 != 503818827U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x2109 = INT8_MAX;
	volatile int64_t x2110 = 13LL;
	volatile int64_t x2111 = INT64_MIN;
	volatile uint16_t x2112 = 18904U;
	volatile int64_t t27 = -513299LL;

    t27 = ((x2109<<x2110)^(x2111%x2112));

    if (t27 != -1039088LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x2397 = 6U;
	int32_t x2399 = INT32_MIN;
	uint64_t x2400 = 48485288LLU;
	static uint64_t t28 = 1060515943081LLU;

    t28 = ((x2397<<x2398)^(x2399%x2400));

    if (t28 != 9559104LLU) { NG(); } else { ; }
	
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
    f24();
    f25();
    f26();
    f27();
    f28();


    return 0;
}

