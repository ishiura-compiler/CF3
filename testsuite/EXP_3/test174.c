
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

static int64_t x271 = -1LL;
volatile uint64_t t2 = 45948731LLU;
uint64_t t3 = 5466456056444696LLU;
volatile uint64_t x553 = UINT64_MAX;
int16_t x554 = 8;
volatile uint8_t x556 = 48U;
uint64_t x697 = 69264398715356LLU;
uint64_t t7 = 1136375579767898409LLU;
uint32_t x818 = 944U;
uint32_t t8 = 83318U;
uint64_t t10 = 8672834LLU;
static volatile int32_t x1112 = 1;
volatile uint64_t x1252 = UINT64_MAX;
uint64_t x1317 = 1550LLU;
uint32_t x1374 = 61525877U;
volatile uint64_t x2013 = UINT64_MAX;
volatile int8_t x2014 = INT8_MIN;
volatile uint64_t t17 = 7925783LLU;
int64_t x2295 = -1LL;


void f0(void) {
    	uint64_t x145 = UINT64_MAX;
	int64_t x146 = INT64_MAX;
	uint8_t x147 = 31U;
	int8_t x148 = 16;
	volatile uint64_t t0 = 23LLU;

    t0 = ((x145|x146)<<(x147+x148));

    if (t0 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x269 = INT64_MIN;
	uint64_t x270 = 960937322388LLU;
	uint8_t x272 = 20U;
	uint64_t t1 = 2760140563645LLU;

    t1 = ((x269|x270)<<(x271+x272));

    if (t1 != 503807906880159744LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x281 = INT16_MIN;
	static uint64_t x282 = 143232411111LLU;
	uint32_t x283 = 35U;
	volatile int8_t x284 = -34;

    t2 = ((x281|x282)<<(x283+x284));

    if (t2 != 18446744073709505486LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x389 = UINT64_MAX;
	uint64_t x390 = UINT64_MAX;
	static uint16_t x391 = 25U;
	static uint32_t x392 = 0U;

    t3 = ((x389|x390)<<(x391+x392));

    if (t3 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x397 = 0U;
	static uint16_t x398 = 5U;
	int8_t x399 = 1;
	int8_t x400 = -1;
	volatile int32_t t4 = -139852;

    t4 = ((x397|x398)<<(x399+x400));

    if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x555 = -1;
	volatile uint64_t t5 = 32668199441LLU;

    t5 = ((x553|x554)<<(x555+x556));

    if (t5 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x637 = UINT64_MAX;
	uint8_t x638 = 3U;
	uint16_t x639 = 2U;
	uint16_t x640 = 0U;
	volatile uint64_t t6 = 4298768396008515LLU;

    t6 = ((x637|x638)<<(x639+x640));

    if (t6 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x698 = -1LL;
	static volatile uint8_t x699 = 3U;
	int64_t x700 = -1LL;

    t7 = ((x697|x698)<<(x699+x700));

    if (t7 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x817 = 13;
	uint8_t x819 = 13U;
	int8_t x820 = -1;

    t8 = ((x817|x818)<<(x819+x820));

    if (t8 != 3919872U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x933 = INT8_MAX;
	volatile uint16_t x934 = 16515U;
	int8_t x935 = 5;
	static int32_t x936 = 1;
	volatile int32_t t9 = 8;

    t9 = ((x933|x934)<<(x935+x936));

    if (t9 != 1064896) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x961 = 4;
	uint64_t x962 = UINT64_MAX;
	uint8_t x963 = 12U;
	int32_t x964 = 1;

    t10 = ((x961|x962)<<(x963+x964));

    if (t10 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x1109 = 20425630U;
	int16_t x1110 = INT16_MIN;
	volatile int32_t x1111 = -1;
	uint32_t t11 = 5305U;

    t11 = ((x1109|x1110)<<(x1111+x1112));

    if (t11 != 4294945694U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x1249 = INT32_MAX;
	uint32_t x1250 = 1403694U;
	static int16_t x1251 = 1;
	uint32_t t12 = 23327775U;

    t12 = ((x1249|x1250)<<(x1251+x1252));

    if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1318 = INT8_MIN;
	volatile int16_t x1319 = 2;
	uint32_t x1320 = UINT32_MAX;
	volatile uint64_t t13 = 7LLU;

    t13 = ((x1317|x1318)<<(x1319+x1320));

    if (t13 != 18446744073709551388LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1373 = INT32_MIN;
	static uint8_t x1375 = 0U;
	static uint8_t x1376 = 31U;
	volatile uint32_t t14 = 14873U;

    t14 = ((x1373|x1374)<<(x1375+x1376));

    if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x1581 = INT32_MAX;
	static uint8_t x1582 = 21U;
	static int8_t x1583 = 1;
	volatile int8_t x1584 = -1;
	volatile int32_t t15 = INT32_MAX;

    t15 = ((x1581|x1582)<<(x1583+x1584));

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x1809 = 22348908706558659LL;
	int8_t x1810 = INT8_MAX;
	int16_t x1811 = 0;
	static int8_t x1812 = 4;
	int64_t t16 = 6457LL;

    t16 = ((x1809|x1810)<<(x1811+x1812));

    if (t16 != 357582539304939504LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x2015 = 9U;
	uint8_t x2016 = 1U;

    t17 = ((x2013|x2014)<<(x2015+x2016));

    if (t17 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x2093 = 351U;
	volatile uint64_t x2094 = UINT64_MAX;
	uint64_t x2095 = UINT64_MAX;
	uint16_t x2096 = 24U;
	volatile uint64_t t18 = 6LLU;

    t18 = ((x2093|x2094)<<(x2095+x2096));

    if (t18 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x2293 = INT64_MAX;
	int32_t x2294 = 0;
	volatile int16_t x2296 = 1;
	volatile int64_t t19 = INT64_MAX;

    t19 = ((x2293|x2294)<<(x2295+x2296));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
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

