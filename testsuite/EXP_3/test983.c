
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

volatile int8_t x251 = 6;
static uint64_t x283 = UINT64_MAX;
uint16_t x387 = UINT16_MAX;
uint64_t x661 = UINT64_MAX;
uint64_t x663 = 5668LLU;
volatile uint64_t t5 = 222828715013LLU;
volatile int32_t x718 = INT32_MIN;
static uint8_t x864 = 12U;
static uint8_t x1068 = 0U;
int16_t x1186 = INT16_MAX;
int64_t x1349 = INT64_MIN;
static int8_t x1357 = -1;
uint16_t x1358 = UINT16_MAX;
uint8_t x1360 = 2U;
static int16_t x1920 = 1;
volatile int64_t t15 = 100138577257111LL;
int16_t x1952 = 1;
static int8_t x2074 = 0;
volatile int8_t x2113 = INT8_MIN;
int8_t x2114 = INT8_MAX;


void f0(void) {
    	uint16_t x81 = 13204U;
	int16_t x82 = 1;
	uint16_t x83 = 195U;
	volatile int16_t x84 = 0;
	int32_t t0 = -6;

    t0 = ((x81+x82)*(x83<<x84));

    if (t0 != 2574975) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	uint16_t x252 = 8U;
	volatile int32_t t1 = 268710;

    t1 = ((x249+x250)*(x251<<x252));

    if (t1 != -50528256) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x281 = 11U;
	uint32_t x282 = 1U;
	uint8_t x284 = 17U;
	uint64_t t2 = 1819778939951LLU;

    t2 = ((x281+x282)*(x283<<x284));

    if (t2 != 18446744073707978752LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x385 = 2916;
	static int32_t x386 = 217;
	int64_t x388 = 0LL;
	int32_t t3 = 951171;

    t3 = ((x385+x386)*(x387<<x388));

    if (t3 != 205321155) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x509 = 388138U;
	volatile int8_t x510 = INT8_MIN;
	static int8_t x511 = INT8_MAX;
	static volatile uint8_t x512 = 5U;
	static volatile uint32_t t4 = 12831U;

    t4 = ((x509+x510)*(x511<<x512));

    if (t4 != 1576872640U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x662 = 5717838113599054LLU;
	uint16_t x664 = 4U;

    t5 = ((x661+x662)*(x663<<x664));

    if (t5 != 2030468782203473216LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x717 = -1LL;
	int8_t x719 = INT8_MAX;
	int16_t x720 = 10;
	static int64_t t6 = -556LL;

    t6 = ((x717+x718)*(x719<<x720));

    if (t6 != -279275953585152LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x737 = 796;
	static int8_t x738 = 0;
	uint64_t x739 = 2021LLU;
	uint8_t x740 = 1U;
	static volatile uint64_t t7 = 481626192184953LLU;

    t7 = ((x737+x738)*(x739<<x740));

    if (t7 != 3217432LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint32_t x861 = UINT32_MAX;
	int16_t x862 = -1;
	uint16_t x863 = 1U;
	uint32_t t8 = 0U;

    t8 = ((x861+x862)*(x863<<x864));

    if (t8 != 4294959104U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x1065 = -1;
	uint64_t x1066 = 215LLU;
	int8_t x1067 = 1;
	static volatile uint64_t t9 = 289047LLU;

    t9 = ((x1065+x1066)*(x1067<<x1068));

    if (t9 != 214LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x1093 = INT8_MAX;
	static uint8_t x1094 = 42U;
	uint16_t x1095 = 1U;
	int8_t x1096 = 14;
	int32_t t10 = -380;

    t10 = ((x1093+x1094)*(x1095<<x1096));

    if (t10 != 2768896) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x1185 = INT64_MIN;
	volatile uint64_t x1187 = UINT64_MAX;
	volatile int16_t x1188 = 6;
	volatile uint64_t t11 = 1089976LLU;

    t11 = ((x1185+x1186)*(x1187<<x1188));

    if (t11 != 18446744073707454528LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1350 = UINT16_MAX;
	uint16_t x1351 = 0U;
	volatile uint16_t x1352 = 1U;
	static int64_t t12 = -273206185085LL;

    t12 = ((x1349+x1350)*(x1351<<x1352));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x1359 = 1705LLU;
	uint64_t t13 = 431053338415241739LLU;

    t13 = ((x1357+x1358)*(x1359<<x1360));

    if (t13 != 446941880LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x1541 = 15;
	static int8_t x1542 = -1;
	uint16_t x1543 = UINT16_MAX;
	int8_t x1544 = 0;
	static int32_t t14 = 112377;

    t14 = ((x1541+x1542)*(x1543<<x1544));

    if (t14 != 917490) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1917 = -4;
	volatile int64_t x1918 = -686371LL;
	uint16_t x1919 = UINT16_MAX;

    t15 = ((x1917+x1918)*(x1919<<x1920));

    if (t15 != -89963171250LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x1941 = -1;
	static uint8_t x1942 = 4U;
	int16_t x1943 = INT16_MAX;
	int8_t x1944 = 1;
	volatile int32_t t16 = -7665845;

    t16 = ((x1941+x1942)*(x1943<<x1944));

    if (t16 != 196602) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x1949 = -1;
	static uint64_t x1950 = 57LLU;
	static uint64_t x1951 = 20508085989009301LLU;
	uint64_t t17 = 4755620LLU;

    t17 = ((x1949+x1950)*(x1951<<x1952));

    if (t17 != 2296905630769041712LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1973 = UINT64_MAX;
	int32_t x1974 = -1;
	int8_t x1975 = INT8_MAX;
	volatile int8_t x1976 = 0;
	volatile uint64_t t18 = 48835570788518LLU;

    t18 = ((x1973+x1974)*(x1975<<x1976));

    if (t18 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x2073 = 1U;
	volatile int8_t x2075 = 0;
	int8_t x2076 = 1;
	int32_t t19 = -215551;

    t19 = ((x2073+x2074)*(x2075<<x2076));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x2085 = -9;
	static int16_t x2086 = -1;
	int8_t x2087 = INT8_MAX;
	uint8_t x2088 = 6U;
	volatile int32_t t20 = -1;

    t20 = ((x2085+x2086)*(x2087<<x2088));

    if (t20 != -81280) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x2115 = UINT32_MAX;
	uint8_t x2116 = 1U;
	uint32_t t21 = 10915906U;

    t21 = ((x2113+x2114)*(x2115<<x2116));

    if (t21 != 2U) { NG(); } else { ; }
	
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

