
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

static volatile int32_t t2 = 127;
uint32_t x913 = 263605666U;
uint8_t x948 = 3U;
int8_t x1106 = -1;
static int32_t t7 = 31981;
volatile int32_t x1306 = INT32_MIN;
int8_t x1652 = 1;
static volatile int32_t t10 = 20;
uint8_t x1927 = 15U;
volatile int8_t x2129 = -1;
int16_t x2130 = -10;
uint8_t x2487 = 1U;


void f0(void) {
    	static int64_t x73 = INT64_MIN;
	static int8_t x74 = INT8_MAX;
	volatile uint8_t x75 = 10U;
	volatile uint8_t x76 = 0U;
	volatile int32_t t0 = 1;

    t0 = (((x73!=x74)>>x75)<<x76);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x301 = UINT8_MAX;
	uint16_t x302 = UINT16_MAX;
	volatile int8_t x303 = 30;
	static uint8_t x304 = 2U;
	static int32_t t1 = 81449;

    t1 = (((x301!=x302)>>x303)<<x304);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x541 = 42311063098893LLU;
	static int64_t x542 = INT64_MIN;
	uint64_t x543 = 4LLU;
	uint8_t x544 = 10U;

    t2 = (((x541!=x542)>>x543)<<x544);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x914 = INT8_MIN;
	static uint8_t x915 = 3U;
	static int8_t x916 = 12;
	int32_t t3 = 1280;

    t3 = (((x913!=x914)>>x915)<<x916);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x945 = INT32_MAX;
	uint64_t x946 = 11408721LLU;
	volatile uint32_t x947 = 27U;
	int32_t t4 = -176;

    t4 = (((x945!=x946)>>x947)<<x948);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x969 = INT64_MIN;
	int8_t x970 = -1;
	uint32_t x971 = 21U;
	int8_t x972 = 0;
	int32_t t5 = -47;

    t5 = (((x969!=x970)>>x971)<<x972);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x1105 = INT16_MAX;
	static uint16_t x1107 = 20U;
	uint8_t x1108 = 19U;
	volatile int32_t t6 = 34124;

    t6 = (((x1105!=x1106)>>x1107)<<x1108);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x1297 = -30414;
	volatile uint8_t x1298 = 1U;
	volatile uint8_t x1299 = 1U;
	uint8_t x1300 = 8U;

    t7 = (((x1297!=x1298)>>x1299)<<x1300);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x1305 = 1666U;
	int32_t x1307 = 1;
	uint8_t x1308 = 4U;
	int32_t t8 = -94915;

    t8 = (((x1305!=x1306)>>x1307)<<x1308);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1637 = INT8_MIN;
	int64_t x1638 = -373762403485456LL;
	static uint8_t x1639 = 29U;
	int8_t x1640 = 2;
	volatile int32_t t9 = -31579;

    t9 = (((x1637!=x1638)>>x1639)<<x1640);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x1649 = 93456885401141LL;
	int64_t x1650 = INT64_MIN;
	volatile int8_t x1651 = 9;

    t10 = (((x1649!=x1650)>>x1651)<<x1652);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1925 = -29;
	volatile int32_t x1926 = INT32_MAX;
	static int8_t x1928 = 7;
	int32_t t11 = -26273829;

    t11 = (((x1925!=x1926)>>x1927)<<x1928);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x2013 = INT8_MAX;
	uint16_t x2014 = 12602U;
	static uint8_t x2015 = 31U;
	static uint16_t x2016 = 14U;
	volatile int32_t t12 = -2737806;

    t12 = (((x2013!=x2014)>>x2015)<<x2016);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x2131 = 26U;
	int8_t x2132 = 0;
	static int32_t t13 = -3499289;

    t13 = (((x2129!=x2130)>>x2131)<<x2132);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x2485 = UINT32_MAX;
	int32_t x2486 = 622970829;
	int8_t x2488 = 3;
	volatile int32_t t14 = 21948587;

    t14 = (((x2485!=x2486)>>x2487)<<x2488);

    if (t14 != 0) { NG(); } else { ; }
	
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


    return 0;
}

