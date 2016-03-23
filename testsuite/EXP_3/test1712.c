
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

volatile uint64_t x57 = 13078193593LLU;
volatile uint16_t x387 = UINT16_MAX;
int32_t x388 = -939058;
volatile int32_t t6 = 36;
uint8_t x962 = 6U;
static int32_t t7 = -32;
static volatile uint16_t x1093 = 1958U;
static uint8_t x1118 = 14U;
volatile int32_t t9 = -85;
volatile int32_t t11 = 969670880;
volatile int16_t x1489 = 121;
int32_t x1491 = 0;
volatile int16_t x1932 = -1;
volatile int32_t t14 = 1;
static int64_t x2060 = -794765855760LL;
int32_t x2187 = INT32_MAX;
volatile int8_t x2475 = INT8_MAX;
int64_t x2829 = INT64_MAX;
volatile int64_t t21 = -49795503104669549LL;
int32_t x2923 = INT32_MAX;


void f0(void) {
    	int8_t x17 = INT8_MAX;
	uint8_t x18 = 12U;
	volatile uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t0 = 11;

    t0 = ((x17>>x18)/(x19>x20));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x21 = 7485LL;
	int16_t x22 = 58;
	volatile uint16_t x23 = 254U;
	int8_t x24 = INT8_MIN;
	int64_t t1 = -872770161LL;

    t1 = ((x21>>x22)/(x23>x24));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x58 = 7U;
	int16_t x59 = -1;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t2 = 5649002033LLU;

    t2 = ((x57>>x58)/(x59>x60));

    if (t2 != 102173387LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x133 = 1946U;
	static int8_t x134 = 0;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t3 = -49;

    t3 = ((x133>>x134)/(x135>x136));

    if (t3 != 1946) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x385 = 0LL;
	uint8_t x386 = 39U;
	static int64_t t4 = 3081203LL;

    t4 = ((x385>>x386)/(x387>x388));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x545 = INT64_MAX;
	uint8_t x546 = 0U;
	int64_t x547 = 45118913076317LL;
	static int64_t x548 = INT64_MIN;
	int64_t t5 = INT64_MAX;

    t5 = ((x545>>x546)/(x547>x548));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x557 = 3U;
	volatile uint8_t x558 = 7U;
	volatile int64_t x559 = 428735415428095LL;
	int8_t x560 = 46;

    t6 = ((x557>>x558)/(x559>x560));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x961 = 60;
	int64_t x963 = INT64_MAX;
	int16_t x964 = -121;

    t7 = ((x961>>x962)/(x963>x964));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x1094 = 0;
	uint16_t x1095 = 1594U;
	int16_t x1096 = -1;
	volatile int32_t t8 = -139675556;

    t8 = ((x1093>>x1094)/(x1095>x1096));

    if (t8 != 1958) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x1117 = 14U;
	int32_t x1119 = -1576196;
	volatile uint32_t x1120 = 234U;

    t9 = ((x1117>>x1118)/(x1119>x1120));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x1205 = 126U;
	volatile uint16_t x1206 = 2U;
	uint16_t x1207 = 175U;
	volatile int64_t x1208 = -1LL;
	uint32_t t10 = 5027244U;

    t10 = ((x1205>>x1206)/(x1207>x1208));

    if (t10 != 31U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1437 = UINT8_MAX;
	int8_t x1438 = 0;
	static uint32_t x1439 = UINT32_MAX;
	int64_t x1440 = INT64_MIN;

    t11 = ((x1437>>x1438)/(x1439>x1440));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x1490 = 0U;
	int64_t x1492 = -1LL;
	volatile int32_t t12 = -3216172;

    t12 = ((x1489>>x1490)/(x1491>x1492));

    if (t12 != 121) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x1689 = UINT64_MAX;
	uint64_t x1690 = 8LLU;
	uint8_t x1691 = 101U;
	int8_t x1692 = -9;
	uint64_t t13 = 273917LLU;

    t13 = ((x1689>>x1690)/(x1691>x1692));

    if (t13 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1929 = 103U;
	int32_t x1930 = 8;
	uint16_t x1931 = 6394U;

    t14 = ((x1929>>x1930)/(x1931>x1932));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1933 = INT16_MAX;
	static int8_t x1934 = 3;
	int32_t x1935 = -1;
	static uint64_t x1936 = 161701295320998LLU;
	static volatile int32_t t15 = 25137918;

    t15 = ((x1933>>x1934)/(x1935>x1936));

    if (t15 != 4095) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x2057 = 126429736411807LL;
	volatile uint16_t x2058 = 57U;
	int8_t x2059 = INT8_MIN;
	int64_t t16 = -1719940921450707778LL;

    t16 = ((x2057>>x2058)/(x2059>x2060));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x2165 = 105U;
	static uint8_t x2166 = 1U;
	int64_t x2167 = 70477315080LL;
	volatile int64_t x2168 = INT64_MIN;
	int32_t t17 = -1745;

    t17 = ((x2165>>x2166)/(x2167>x2168));

    if (t17 != 52) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x2185 = 4878LLU;
	int8_t x2186 = 7;
	uint16_t x2188 = 94U;
	uint64_t t18 = 3967699777LLU;

    t18 = ((x2185>>x2186)/(x2187>x2188));

    if (t18 != 38LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x2265 = UINT8_MAX;
	uint8_t x2266 = 15U;
	static uint8_t x2267 = 49U;
	static int16_t x2268 = INT16_MIN;
	int32_t t19 = 3528;

    t19 = ((x2265>>x2266)/(x2267>x2268));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x2473 = 2;
	int32_t x2474 = 0;
	volatile uint8_t x2476 = 4U;
	int32_t t20 = 15;

    t20 = ((x2473>>x2474)/(x2475>x2476));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x2830 = 3;
	static int16_t x2831 = INT16_MIN;
	uint64_t x2832 = 474450439LLU;

    t21 = ((x2829>>x2830)/(x2831>x2832));

    if (t21 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x2921 = INT64_MAX;
	static uint16_t x2922 = 23U;
	int16_t x2924 = 7;
	volatile int64_t t22 = -987843361767194881LL;

    t22 = ((x2921>>x2922)/(x2923>x2924));

    if (t22 != 1099511627775LL) { NG(); } else { ; }
	
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


    return 0;
}

