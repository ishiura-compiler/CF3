
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

int32_t x102 = -1;
uint32_t x103 = 260U;
volatile int64_t t0 = 22530068594728918LL;
volatile uint64_t t2 = 23771LLU;
int16_t x637 = 7299;
static uint8_t x640 = 2U;
uint8_t x785 = 1U;
int16_t x787 = 2291;
uint64_t t7 = 15054931LLU;
uint8_t x904 = 30U;
int16_t x1007 = 76;
uint64_t x1008 = 4LLU;
volatile int64_t t10 = 22216447110455LL;
static volatile uint8_t x1024 = 2U;
static uint8_t x1094 = 1U;
uint64_t x1095 = UINT64_MAX;
static volatile uint64_t t12 = 36LLU;
uint64_t x1117 = 2772097378819870LLU;
volatile uint16_t x1120 = 7U;
int32_t x1270 = -1;
volatile uint8_t x1380 = 0U;
int32_t t15 = -6776497;
volatile int8_t x1427 = INT8_MAX;
int64_t x1466 = -1LL;
int8_t x1468 = 1;
int32_t x1653 = INT32_MIN;
uint8_t x1654 = 82U;
static volatile int8_t x1838 = 47;


void f0(void) {
    	static int64_t x101 = INT64_MIN;
	volatile uint8_t x104 = 2U;

    t0 = (x101/(x102&(x103>>x104)));

    if (t0 != -141898031336227320LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MAX;
	volatile uint8_t x252 = 0U;
	volatile int64_t t1 = 1368277617LL;

    t1 = (x249/(x250&(x251>>x252)));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x557 = -10757108311530651LL;
	uint16_t x558 = UINT16_MAX;
	uint64_t x559 = UINT64_MAX;
	uint8_t x560 = 3U;

    t2 = (x557/(x558&(x559>>x560)));

    if (t2 != 281315128792218LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x617 = 75U;
	uint16_t x618 = UINT16_MAX;
	volatile int64_t x619 = INT64_MAX;
	int16_t x620 = 0;
	int64_t t3 = 1LL;

    t3 = (x617/(x618&(x619>>x620)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x625 = -622313;
	static int8_t x626 = INT8_MAX;
	int16_t x627 = INT16_MAX;
	static uint16_t x628 = 0U;
	volatile int32_t t4 = -8355512;

    t4 = (x625/(x626&(x627>>x628)));

    if (t4 != -4900) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x638 = -844636;
	volatile uint32_t x639 = UINT32_MAX;
	uint32_t t5 = 471694U;

    t5 = (x637/(x638&(x639>>x640)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x705 = 15703123U;
	int32_t x706 = -1;
	int64_t x707 = INT64_MAX;
	static volatile int8_t x708 = 0;
	volatile int64_t t6 = -12114725LL;

    t6 = (x705/(x706&(x707>>x708)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x786 = 2161LLU;
	uint8_t x788 = 2U;

    t7 = (x785/(x786&(x787>>x788)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x901 = UINT32_MAX;
	int8_t x902 = INT8_MIN;
	int64_t x903 = INT64_MAX;
	static volatile int64_t t8 = 58079675LL;

    t8 = (x901/(x902&(x903>>x904)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x909 = 3U;
	int64_t x910 = -1LL;
	volatile uint64_t x911 = 554255464LLU;
	static int32_t x912 = 0;
	uint64_t t9 = 275214505677LLU;

    t9 = (x909/(x910&(x911>>x912)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x1005 = -1;
	int64_t x1006 = INT64_MAX;

    t10 = (x1005/(x1006&(x1007>>x1008)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1021 = 990302;
	int64_t x1022 = -598880782494LL;
	volatile uint8_t x1023 = UINT8_MAX;
	int64_t t11 = 22727077837LL;

    t11 = (x1021/(x1022&(x1023>>x1024)));

    if (t11 != 29126LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1093 = 5U;
	volatile uint16_t x1096 = 20U;

    t12 = (x1093/(x1094&(x1095>>x1096)));

    if (t12 != 5LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x1118 = 7U;
	static int64_t x1119 = INT64_MAX;
	volatile uint64_t t13 = 6377197LLU;

    t13 = (x1117/(x1118&(x1119>>x1120)));

    if (t13 != 396013911259981LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1269 = 84U;
	uint8_t x1271 = 17U;
	static int8_t x1272 = 1;
	static volatile int32_t t14 = -184769551;

    t14 = (x1269/(x1270&(x1271>>x1272)));

    if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1377 = INT8_MAX;
	uint16_t x1378 = 18957U;
	uint8_t x1379 = 90U;

    t15 = (x1377/(x1378&(x1379>>x1380)));

    if (t15 != 15) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1425 = UINT8_MAX;
	int64_t x1426 = 784052985679LL;
	volatile uint16_t x1428 = 0U;
	volatile int64_t t16 = -44LL;

    t16 = (x1425/(x1426&(x1427>>x1428)));

    if (t16 != 3LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x1465 = INT16_MAX;
	int8_t x1467 = 7;
	int64_t t17 = -136538687274405LL;

    t17 = (x1465/(x1466&(x1467>>x1468)));

    if (t17 != 10922LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1655 = 12990421468514787LL;
	int8_t x1656 = 1;
	static volatile int64_t t18 = 54888LL;

    t18 = (x1653/(x1654&(x1655>>x1656)));

    if (t18 != -26843545LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x1837 = UINT32_MAX;
	uint32_t x1839 = 1364299515U;
	uint32_t x1840 = 1U;
	uint32_t t19 = 7698483U;

    t19 = (x1837/(x1838&(x1839>>x1840)));

    if (t19 != 95443717U) { NG(); } else { ; }
	
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


    return 0;
}

