
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

volatile int64_t x186 = INT64_MAX;
static int8_t x233 = INT8_MIN;
volatile int16_t x234 = -1;
int32_t t1 = 387964;
uint64_t x457 = 49796876747LLU;
int8_t x460 = -1;
uint8_t x507 = 30U;
uint64_t x547 = UINT64_MAX;
uint64_t x745 = 1033274502707LLU;
volatile int32_t x746 = INT32_MIN;
uint64_t x1054 = 15094549635582789LLU;
int32_t x1179 = 3;
uint8_t x1562 = 3U;
uint64_t x1564 = 5LLU;
volatile int32_t t11 = -1539;
volatile int8_t x1652 = INT8_MAX;
static int8_t x1704 = -1;
uint64_t x1803 = UINT64_MAX;


void f0(void) {
    	uint32_t x185 = 105296U;
	int16_t x187 = 26;
	int8_t x188 = -11;
	int64_t t0 = 7LL;

    t0 = ((x185^x186)>>(x187+x188));

    if (t0 != 281474976710652LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x235 = 1LL;
	uint8_t x236 = 1U;

    t1 = ((x233^x234)>>(x235+x236));

    if (t1 != 31) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x458 = INT8_MIN;
	uint8_t x459 = 5U;
	uint64_t t2 = 1714LLU;

    t2 = ((x457^x458)>>(x459+x460));

    if (t2 != 1152921501494542180LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x505 = -1;
	uint32_t x506 = 0U;
	volatile int64_t x508 = 1LL;
	uint32_t t3 = 1179267315U;

    t3 = ((x505^x506)>>(x507+x508));

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x545 = -1;
	static volatile uint64_t x546 = 1212553450386816LLU;
	uint16_t x548 = 34U;
	static volatile uint64_t t4 = 3949396125340310LLU;

    t4 = ((x545^x546)>>(x547+x548));

    if (t4 != 2147342488LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x747 = 8U;
	static volatile uint32_t x748 = UINT32_MAX;
	volatile uint64_t t5 = 26686330873424206LLU;

    t5 = ((x745^x746)>>(x747+x748));

    if (t5 != 144115179991853916LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x933 = 242U;
	int8_t x934 = INT8_MAX;
	int16_t x935 = -1;
	int32_t x936 = 1;
	volatile int32_t t6 = 752583356;

    t6 = ((x933^x934)>>(x935+x936));

    if (t6 != 141) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x1053 = 8121924035865LLU;
	uint8_t x1055 = 24U;
	int8_t x1056 = -1;
	static uint64_t t7 = 1002233407881649849LLU;

    t7 = ((x1053^x1054)>>(x1055+x1056));

    if (t7 != 1800279418LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x1177 = UINT8_MAX;
	int8_t x1178 = INT8_MAX;
	static int32_t x1180 = -1;
	volatile int32_t t8 = -861205;

    t8 = ((x1177^x1178)>>(x1179+x1180));

    if (t8 != 32) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x1481 = INT32_MIN;
	int32_t x1482 = -200373062;
	static volatile int8_t x1483 = 1;
	int16_t x1484 = 0;
	static volatile int32_t t9 = 470180;

    t9 = ((x1481^x1482)>>(x1483+x1484));

    if (t9 != 973555293) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x1561 = 6;
	volatile int64_t x1563 = -1LL;
	int32_t t10 = -1;

    t10 = ((x1561^x1562)>>(x1563+x1564));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x1565 = 88;
	static volatile int8_t x1566 = 14;
	uint64_t x1567 = UINT64_MAX;
	uint8_t x1568 = 21U;

    t11 = ((x1565^x1566)>>(x1567+x1568));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x1649 = INT64_MIN;
	volatile int16_t x1650 = -8672;
	static volatile int16_t x1651 = -64;
	volatile int64_t t12 = -52513523507188LL;

    t12 = ((x1649^x1650)>>(x1651+x1652));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1701 = 22;
	volatile int64_t x1702 = INT64_MAX;
	int8_t x1703 = 26;
	int64_t t13 = -39723289136863151LL;

    t13 = ((x1701^x1702)>>(x1703+x1704));

    if (t13 != 274877906943LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x1777 = UINT16_MAX;
	int8_t x1778 = INT8_MAX;
	static int8_t x1779 = 1;
	static int64_t x1780 = -1LL;
	volatile int32_t t14 = -1;

    t14 = ((x1777^x1778)>>(x1779+x1780));

    if (t14 != 65408) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x1801 = 13816;
	static uint8_t x1802 = 68U;
	volatile uint16_t x1804 = 2U;
	static int32_t t15 = -47;

    t15 = ((x1801^x1802)>>(x1803+x1804));

    if (t15 != 6878) { NG(); } else { ; }
	
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

