
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

int32_t x79 = INT32_MIN;
uint64_t x213 = 31426LLU;
uint64_t x215 = UINT64_MAX;
volatile int32_t t3 = -40136;
int64_t x268 = INT64_MIN;
uint8_t x275 = 9U;
int16_t x532 = INT16_MAX;
static uint64_t x605 = 43661026LLU;
uint64_t t7 = 27938LLU;
int16_t x716 = INT16_MIN;
volatile int32_t t8 = -2473161;
int8_t x720 = -1;
int32_t t9 = 737422;
int64_t x738 = -1LL;
int32_t x740 = -55181;
uint32_t x824 = UINT32_MAX;
static uint16_t x829 = 2U;
int32_t x840 = INT32_MIN;
int8_t x1170 = 3;
int32_t t14 = -90;
int8_t x1336 = INT8_MIN;
volatile int64_t t17 = -1878171LL;
uint8_t x1410 = 37U;
int8_t x1421 = INT8_MAX;
int32_t x1461 = 109;
uint8_t x1462 = 8U;
volatile int32_t t21 = -462335772;
int64_t x1518 = -1LL;
int64_t x1557 = 759316421LL;
volatile uint8_t x1558 = 50U;
static volatile int64_t t23 = -635028657LL;
volatile int8_t x1589 = INT8_MAX;


void f0(void) {
    	uint8_t x77 = 1U;
	int8_t x78 = 1;
	uint64_t x80 = 7723218011039798157LLU;
	int32_t t0 = -137080416;

    t0 = (x77>>(x78+(x79/x80)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x105 = UINT64_MAX;
	uint16_t x106 = 10U;
	int32_t x107 = INT32_MIN;
	static int32_t x108 = INT32_MAX;
	volatile uint64_t t1 = 21501200LLU;

    t1 = (x105>>(x106+(x107/x108)));

    if (t1 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x214 = -1;
	static int64_t x216 = INT64_MIN;
	volatile uint64_t t2 = 55114LLU;

    t2 = (x213>>(x214+(x215/x216)));

    if (t2 != 31426LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x261 = INT16_MAX;
	static volatile int8_t x262 = 22;
	int16_t x263 = INT16_MIN;
	static uint16_t x264 = 7596U;

    t3 = (x261>>(x262+(x263/x264)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x265 = 315U;
	static int16_t x266 = 1;
	int64_t x267 = -212471LL;
	uint32_t t4 = 9U;

    t4 = (x265>>(x266+(x267/x268)));

    if (t4 != 157U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x273 = 1;
	static int64_t x274 = -1LL;
	static int8_t x276 = 2;
	int32_t t5 = -15195;

    t5 = (x273>>(x274+(x275/x276)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x529 = INT32_MAX;
	int64_t x530 = -1LL;
	int16_t x531 = INT16_MAX;
	volatile int32_t t6 = INT32_MAX;

    t6 = (x529>>(x530+(x531/x532)));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x606 = -1;
	static volatile int8_t x607 = INT8_MIN;
	int32_t x608 = -15;

    t7 = (x605>>(x606+(x607/x608)));

    if (t7 != 341101LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x713 = 249U;
	static int8_t x714 = -1;
	int16_t x715 = INT16_MIN;

    t8 = (x713>>(x714+(x715/x716)));

    if (t8 != 249) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x717 = INT8_MAX;
	volatile int8_t x718 = 0;
	uint32_t x719 = 109U;

    t9 = (x717>>(x718+(x719/x720)));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x737 = INT32_MAX;
	uint32_t x739 = UINT32_MAX;
	static volatile int32_t t10 = INT32_MAX;

    t10 = (x737>>(x738+(x739/x740)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x821 = 4U;
	int64_t x822 = 2LL;
	uint32_t x823 = 3U;
	volatile int32_t t11 = 700;

    t11 = (x821>>(x822+(x823/x824)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x830 = 1U;
	uint8_t x831 = UINT8_MAX;
	uint64_t x832 = UINT64_MAX;
	int32_t t12 = -107;

    t12 = (x829>>(x830+(x831/x832)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x837 = INT32_MAX;
	uint16_t x838 = 1U;
	uint32_t x839 = 1035568U;
	static int32_t t13 = 16255258;

    t13 = (x837>>(x838+(x839/x840)));

    if (t13 != 1073741823) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1169 = INT32_MAX;
	int8_t x1171 = INT8_MIN;
	int64_t x1172 = INT64_MIN;

    t14 = (x1169>>(x1170+(x1171/x1172)));

    if (t14 != 268435455) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x1281 = UINT8_MAX;
	static uint32_t x1282 = 22U;
	static uint8_t x1283 = 1U;
	volatile int16_t x1284 = -1;
	int32_t t15 = -4529128;

    t15 = (x1281>>(x1282+(x1283/x1284)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1309 = 4U;
	int8_t x1310 = 1;
	int32_t x1311 = 4728;
	uint64_t x1312 = 455LLU;
	volatile int32_t t16 = 11339;

    t16 = (x1309>>(x1310+(x1311/x1312)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1333 = 560977001255LL;
	volatile int64_t x1334 = -1LL;
	int8_t x1335 = INT8_MIN;

    t17 = (x1333>>(x1334+(x1335/x1336)));

    if (t17 != 560977001255LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x1397 = UINT16_MAX;
	volatile uint8_t x1398 = 2U;
	static uint64_t x1399 = 93LLU;
	int32_t x1400 = INT32_MAX;
	int32_t t18 = -506347;

    t18 = (x1397>>(x1398+(x1399/x1400)));

    if (t18 != 16383) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1409 = 8941983012150383LL;
	static uint8_t x1411 = UINT8_MAX;
	uint64_t x1412 = 337637402355562676LLU;
	int64_t t19 = -50120614LL;

    t19 = (x1409>>(x1410+(x1411/x1412)));

    if (t19 != 65061LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1422 = 20U;
	int32_t x1423 = -1242921;
	int64_t x1424 = INT64_MIN;
	int32_t t20 = -9330667;

    t20 = (x1421>>(x1422+(x1423/x1424)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1463 = 7312U;
	volatile int64_t x1464 = -26098921683LL;

    t21 = (x1461>>(x1462+(x1463/x1464)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1517 = 14832LLU;
	uint8_t x1519 = 5U;
	uint64_t x1520 = 3LLU;
	uint64_t t22 = 1007996235219461096LLU;

    t22 = (x1517>>(x1518+(x1519/x1520)));

    if (t22 != 14832LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1559 = INT8_MIN;
	int8_t x1560 = 37;

    t23 = (x1557>>(x1558+(x1559/x1560)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x1590 = 1;
	volatile uint8_t x1591 = UINT8_MAX;
	uint32_t x1592 = 18516U;
	int32_t t24 = -1227289;

    t24 = (x1589>>(x1590+(x1591/x1592)));

    if (t24 != 63) { NG(); } else { ; }
	
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

