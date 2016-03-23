
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

volatile int16_t x247 = -1;
int32_t t1 = 8383406;
static volatile int32_t x301 = -1;
static uint64_t x304 = UINT64_MAX;
int32_t t3 = -2390;
uint64_t x672 = UINT64_MAX;
volatile int32_t t5 = 1004797375;
int8_t x718 = INT8_MIN;
static volatile int32_t t8 = -1;
int8_t x1019 = -1;
static int16_t x1078 = INT16_MIN;
volatile int32_t x1313 = 7217156;
int32_t x1314 = INT32_MAX;
int64_t x1315 = INT64_MIN;


void f0(void) {
    	int64_t x105 = INT64_MAX;
	uint32_t x106 = 573096U;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	static int32_t t0 = -1414853;

    t0 = ((x105==x106)/(x107==x108));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x245 = 1U;
	int8_t x246 = INT8_MIN;
	int64_t x248 = -1LL;

    t1 = ((x245==x246)/(x247==x248));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x273 = 1455U;
	int16_t x274 = -1;
	volatile int8_t x275 = -1;
	volatile int64_t x276 = -1LL;
	static int32_t t2 = 152;

    t2 = ((x273==x274)/(x275==x276));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x302 = INT64_MIN;
	static int16_t x303 = -1;

    t3 = ((x301==x302)/(x303==x304));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x617 = INT32_MAX;
	uint32_t x618 = 134764000U;
	uint32_t x619 = UINT32_MAX;
	int32_t x620 = -1;
	int32_t t4 = 315509177;

    t4 = ((x617==x618)/(x619==x620));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x669 = 1;
	int64_t x670 = INT64_MAX;
	int32_t x671 = -1;

    t5 = ((x669==x670)/(x671==x672));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x719 = -1LL;
	int32_t x720 = -1;
	int32_t t6 = 177889712;

    t6 = ((x717==x718)/(x719==x720));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x753 = 7184148437LL;
	int16_t x754 = INT16_MIN;
	static int8_t x755 = -1;
	static uint64_t x756 = UINT64_MAX;
	volatile int32_t t7 = 0;

    t7 = ((x753==x754)/(x755==x756));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x765 = -1;
	uint64_t x766 = UINT64_MAX;
	int64_t x767 = -1LL;
	static uint64_t x768 = UINT64_MAX;

    t8 = ((x765==x766)/(x767==x768));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x1017 = 49U;
	uint64_t x1018 = 414671327LLU;
	static int32_t x1020 = -1;
	static int32_t t9 = 71;

    t9 = ((x1017==x1018)/(x1019==x1020));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x1077 = INT16_MIN;
	static int16_t x1079 = -1;
	int8_t x1080 = -1;
	static int32_t t10 = -13;

    t10 = ((x1077==x1078)/(x1079==x1080));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x1145 = 53;
	uint32_t x1146 = 5773419U;
	int8_t x1147 = -1;
	uint32_t x1148 = UINT32_MAX;
	volatile int32_t t11 = -252;

    t11 = ((x1145==x1146)/(x1147==x1148));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x1309 = INT64_MAX;
	int8_t x1310 = 0;
	int32_t x1311 = -1;
	int16_t x1312 = -1;
	int32_t t12 = -5376;

    t12 = ((x1309==x1310)/(x1311==x1312));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1316 = INT64_MIN;
	int32_t t13 = 6843439;

    t13 = ((x1313==x1314)/(x1315==x1316));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1361 = UINT32_MAX;
	static volatile int8_t x1362 = -7;
	int16_t x1363 = INT16_MAX;
	int16_t x1364 = INT16_MAX;
	volatile int32_t t14 = 10;

    t14 = ((x1361==x1362)/(x1363==x1364));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x1429 = 114U;
	int32_t x1430 = 1;
	int8_t x1431 = INT8_MAX;
	volatile int8_t x1432 = INT8_MAX;
	int32_t t15 = -270;

    t15 = ((x1429==x1430)/(x1431==x1432));

    if (t15 != 0) { NG(); } else { ; }
	
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

