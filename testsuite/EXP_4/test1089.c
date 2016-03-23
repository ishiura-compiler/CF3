
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

static volatile uint8_t x306 = 56U;
int32_t t1 = 1432;
uint64_t t2 = 202517398553336LLU;
volatile uint64_t t3 = 305385742590519LLU;
static int16_t x750 = 6;
int64_t x1210 = INT64_MIN;
uint16_t x1305 = 26956U;
uint8_t x1497 = 92U;
int64_t x1540 = 2LL;


void f0(void) {
    	int32_t x305 = 1962;
	uint32_t x307 = 221294U;
	volatile uint16_t x308 = 2U;
	int32_t t0 = 242257;

    t0 = (x305>>(x306==(x307<<x308)));

    if (t0 != 1962) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x429 = 12699;
	int8_t x430 = 30;
	volatile uint16_t x431 = 1U;
	uint16_t x432 = 3U;

    t1 = (x429>>(x430==(x431<<x432)));

    if (t1 != 12699) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x469 = 52289056LLU;
	int64_t x470 = INT64_MAX;
	static int8_t x471 = INT8_MAX;
	volatile uint16_t x472 = 0U;

    t2 = (x469>>(x470==(x471<<x472)));

    if (t2 != 52289056LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x533 = 9111LLU;
	volatile uint64_t x534 = UINT64_MAX;
	int32_t x535 = 2980630;
	volatile int32_t x536 = 2;

    t3 = (x533>>(x534==(x535<<x536)));

    if (t3 != 9111LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x641 = UINT8_MAX;
	static int8_t x642 = -1;
	uint64_t x643 = 1123202LLU;
	int16_t x644 = 4;
	static int32_t t4 = -1369152;

    t4 = (x641>>(x642==(x643<<x644)));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x669 = UINT64_MAX;
	int8_t x670 = 1;
	int8_t x671 = INT8_MAX;
	uint8_t x672 = 23U;
	static volatile uint64_t t5 = UINT64_MAX;

    t5 = (x669>>(x670==(x671<<x672)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x749 = UINT64_MAX;
	uint8_t x751 = 1U;
	volatile uint8_t x752 = 0U;
	uint64_t t6 = UINT64_MAX;

    t6 = (x749>>(x750==(x751<<x752)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x853 = 7U;
	volatile int64_t x854 = -30703693LL;
	int32_t x855 = 15849;
	static int8_t x856 = 15;
	static volatile int32_t t7 = -13784460;

    t7 = (x853>>(x854==(x855<<x856)));

    if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x965 = 732;
	int16_t x966 = INT16_MIN;
	static int64_t x967 = 2019764616443188185LL;
	int8_t x968 = 2;
	int32_t t8 = -233139;

    t8 = (x965>>(x966==(x967<<x968)));

    if (t8 != 732) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x1121 = 71;
	uint8_t x1122 = 3U;
	uint32_t x1123 = 15U;
	volatile int8_t x1124 = 10;
	static int32_t t9 = 520790956;

    t9 = (x1121>>(x1122==(x1123<<x1124)));

    if (t9 != 71) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x1189 = 383U;
	volatile int64_t x1190 = INT64_MAX;
	uint8_t x1191 = 59U;
	static volatile uint8_t x1192 = 3U;
	volatile int32_t t10 = -4500409;

    t10 = (x1189>>(x1190==(x1191<<x1192)));

    if (t10 != 383) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1209 = INT64_MAX;
	uint16_t x1211 = 2485U;
	volatile int8_t x1212 = 0;
	int64_t t11 = INT64_MAX;

    t11 = (x1209>>(x1210==(x1211<<x1212)));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1306 = INT32_MIN;
	volatile int16_t x1307 = INT16_MAX;
	int8_t x1308 = 1;
	int32_t t12 = 5846879;

    t12 = (x1305>>(x1306==(x1307<<x1308)));

    if (t12 != 26956) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x1333 = 1030;
	int32_t x1334 = 96272;
	volatile int64_t x1335 = 2153664LL;
	volatile int32_t x1336 = 0;
	int32_t t13 = -28120;

    t13 = (x1333>>(x1334==(x1335<<x1336)));

    if (t13 != 1030) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x1357 = 6;
	int16_t x1358 = INT16_MIN;
	uint64_t x1359 = 5518239202LLU;
	uint16_t x1360 = 2U;
	volatile int32_t t14 = 565818;

    t14 = (x1357>>(x1358==(x1359<<x1360)));

    if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x1498 = UINT32_MAX;
	uint16_t x1499 = UINT16_MAX;
	uint8_t x1500 = 9U;
	static int32_t t15 = 2513;

    t15 = (x1497>>(x1498==(x1499<<x1500)));

    if (t15 != 92) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1537 = 1U;
	volatile int64_t x1538 = INT64_MIN;
	uint8_t x1539 = 52U;
	volatile uint32_t t16 = 22336092U;

    t16 = (x1537>>(x1538==(x1539<<x1540)));

    if (t16 != 1U) { NG(); } else { ; }
	
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


    return 0;
}

