
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

static uint32_t x83 = 26U;
volatile int32_t t0 = -11122322;
static uint64_t x148 = UINT64_MAX;
static uint64_t x156 = 222618969565LLU;
int8_t x172 = -1;
int16_t x197 = 12;
volatile int32_t t4 = -85708950;
uint16_t x253 = 157U;
int8_t x301 = INT8_MAX;
int64_t x392 = INT64_MIN;
uint16_t x437 = 1857U;
int32_t x516 = -303000660;
uint16_t x694 = 11U;
int32_t x723 = -1;
uint32_t t12 = 275U;
uint16_t x781 = 4U;
int32_t t13 = 131470038;
int8_t x1202 = 0;
uint32_t x1365 = 179536U;
uint64_t x1517 = 76LLU;
uint32_t x1519 = UINT32_MAX;
uint64_t t19 = 3899805705566912LLU;
int16_t x1633 = 1;
int8_t x1634 = 1;
uint64_t x1636 = UINT64_MAX;
volatile int64_t x1743 = -1LL;
static int8_t x1915 = INT8_MAX;
volatile int32_t t24 = 0;


void f0(void) {
    	int8_t x81 = INT8_MAX;
	uint8_t x82 = 13U;
	uint64_t x84 = 298593486791030LLU;

    t0 = (x81<<(x82<<(x83/x84)));

    if (t0 != 1040384) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x145 = 5872U;
	int32_t x146 = 0;
	volatile uint16_t x147 = 11234U;
	int32_t t1 = -2244005;

    t1 = (x145<<(x146<<(x147/x148)));

    if (t1 != 5872) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x153 = UINT64_MAX;
	uint8_t x154 = 61U;
	int32_t x155 = 2587956;
	uint64_t t2 = 4005726LLU;

    t2 = (x153<<(x154<<(x155/x156)));

    if (t2 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x169 = 3;
	static uint8_t x170 = 9U;
	uint32_t x171 = 7U;
	volatile int32_t t3 = -4917253;

    t3 = (x169<<(x170<<(x171/x172)));

    if (t3 != 1536) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x198 = 13U;
	int64_t x199 = -1152613LL;
	volatile int64_t x200 = INT64_MIN;

    t4 = (x197<<(x198<<(x199/x200)));

    if (t4 != 98304) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 17U;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t5 = -9010;

    t5 = (x209<<(x210<<(x211/x212)));

    if (t5 != 33423360) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x254 = 0U;
	int32_t x255 = -1;
	uint8_t x256 = 71U;
	volatile int32_t t6 = -3;

    t6 = (x253<<(x254<<(x255/x256)));

    if (t6 != 157) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x302 = 19U;
	uint8_t x303 = 2U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t7 = -3653;

    t7 = (x301<<(x302<<(x303/x304)));

    if (t7 != 66584576) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x389 = 124766390U;
	int32_t x390 = 1;
	uint8_t x391 = UINT8_MAX;
	volatile uint32_t t8 = 187043216U;

    t8 = (x389<<(x390<<(x391/x392)));

    if (t8 != 249532780U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x438 = 3U;
	uint8_t x439 = 124U;
	volatile uint16_t x440 = UINT16_MAX;
	volatile int32_t t9 = 94;

    t9 = (x437<<(x438<<(x439/x440)));

    if (t9 != 14856) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x513 = 3U;
	static uint8_t x514 = 1U;
	volatile int16_t x515 = -170;
	int32_t t10 = -126559;

    t10 = (x513<<(x514<<(x515/x516)));

    if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x693 = 31U;
	int8_t x695 = -21;
	uint8_t x696 = 75U;
	int32_t t11 = 3;

    t11 = (x693<<(x694<<(x695/x696)));

    if (t11 != 63488) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x721 = 7U;
	uint8_t x722 = 1U;
	volatile int16_t x724 = INT16_MAX;

    t12 = (x721<<(x722<<(x723/x724)));

    if (t12 != 14U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x782 = 20U;
	static volatile uint8_t x783 = 1U;
	volatile int8_t x784 = 63;

    t13 = (x781<<(x782<<(x783/x784)));

    if (t13 != 4194304) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x981 = UINT64_MAX;
	uint8_t x982 = 0U;
	int8_t x983 = INT8_MIN;
	volatile int32_t x984 = INT32_MIN;
	uint64_t t14 = UINT64_MAX;

    t14 = (x981<<(x982<<(x983/x984)));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x1157 = 55U;
	int64_t x1158 = 2LL;
	int16_t x1159 = -1;
	uint16_t x1160 = 3U;
	int32_t t15 = -13249497;

    t15 = (x1157<<(x1158<<(x1159/x1160)));

    if (t15 != 220) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1189 = 1;
	volatile uint8_t x1190 = 7U;
	int8_t x1191 = INT8_MAX;
	static int32_t x1192 = 425;
	int32_t t16 = 468;

    t16 = (x1189<<(x1190<<(x1191/x1192)));

    if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1201 = 14;
	int16_t x1203 = 16328;
	uint64_t x1204 = 784233758691LLU;
	static int32_t t17 = 4760;

    t17 = (x1201<<(x1202<<(x1203/x1204)));

    if (t17 != 14) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1366 = 0;
	int8_t x1367 = -1;
	uint16_t x1368 = 968U;
	uint32_t t18 = 686U;

    t18 = (x1365<<(x1366<<(x1367/x1368)));

    if (t18 != 179536U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x1518 = 3U;
	volatile int32_t x1520 = INT32_MAX;

    t19 = (x1517<<(x1518<<(x1519/x1520)));

    if (t19 != 311296LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1557 = 0LLU;
	uint16_t x1558 = 1U;
	int32_t x1559 = INT32_MIN;
	int32_t x1560 = INT32_MIN;
	volatile uint64_t t20 = 2087822144166222834LLU;

    t20 = (x1557<<(x1558<<(x1559/x1560)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x1635 = 378LL;
	int32_t t21 = -1;

    t21 = (x1633<<(x1634<<(x1635/x1636)));

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1741 = 59384LLU;
	uint8_t x1742 = 10U;
	int8_t x1744 = 16;
	volatile uint64_t t22 = 107819LLU;

    t22 = (x1741<<(x1742<<(x1743/x1744)));

    if (t22 != 60809216LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1833 = 1172008468608153678LLU;
	static int64_t x1834 = 3LL;
	volatile int32_t x1835 = 3;
	int8_t x1836 = 4;
	static volatile uint64_t t23 = 15762181592635517LLU;

    t23 = (x1833<<(x1834<<(x1835/x1836)));

    if (t23 != 9376067748865229424LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x1913 = 235872;
	volatile int64_t x1914 = 0LL;
	static uint8_t x1916 = 7U;

    t24 = (x1913<<(x1914<<(x1915/x1916)));

    if (t24 != 235872) { NG(); } else { ; }
	
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


    return 0;
}

