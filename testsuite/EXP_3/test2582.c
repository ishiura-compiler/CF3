
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

static int8_t x9 = 1;
static volatile uint64_t x261 = UINT64_MAX;
volatile int32_t x333 = 197757;
int32_t x544 = -1;
volatile int16_t x987 = -46;
int8_t x1101 = INT8_MIN;
int8_t x1103 = -1;
uint32_t x1315 = UINT32_MAX;


void f0(void) {
    	int32_t x10 = 58512;
	static int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	static int32_t t0 = 4;

    t0 = ((x9*x10)<<(x11^x12));

    if (t0 != 58512) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x262 = INT16_MAX;
	int8_t x263 = 24;
	int8_t x264 = 14;
	uint64_t t1 = 123599404LLU;

    t1 = ((x261*x262)<<(x263^x264));

    if (t1 != 18446743936274792448LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x334 = 27699907335LLU;
	int8_t x335 = 1;
	uint16_t x336 = 3U;
	volatile uint64_t t2 = 25361613451265568LLU;

    t2 = ((x333*x334)<<(x335^x336));

    if (t2 != 21911402299390380LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x541 = 467;
	uint8_t x542 = 0U;
	static int32_t x543 = -1;
	int32_t t3 = -21711;

    t3 = ((x541*x542)<<(x543^x544));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x545 = UINT8_MAX;
	uint8_t x546 = 27U;
	static int32_t x547 = -1;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t4 = -15302;

    t4 = ((x545*x546)<<(x547^x548));

    if (t4 != 6885) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x865 = INT8_MIN;
	static uint32_t x866 = 26U;
	int64_t x867 = -1LL;
	static int16_t x868 = -1;
	volatile uint32_t t5 = 92793U;

    t5 = ((x865*x866)<<(x867^x868));

    if (t5 != 4294963968U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x985 = -1;
	uint64_t x986 = UINT64_MAX;
	int32_t x988 = -1;
	static uint64_t t6 = 7552LLU;

    t6 = ((x985*x986)<<(x987^x988));

    if (t6 != 35184372088832LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x1102 = 117767U;
	static int8_t x1104 = -1;
	volatile uint32_t t7 = 15671U;

    t7 = ((x1101*x1102)<<(x1103^x1104));

    if (t7 != 4279893120U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x1313 = INT8_MIN;
	volatile int32_t x1314 = -1;
	int16_t x1316 = -4;
	volatile int32_t t8 = -5421;

    t8 = ((x1313*x1314)<<(x1315^x1316));

    if (t8 != 1024) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x1429 = INT64_MAX;
	int8_t x1430 = 1;
	int8_t x1431 = INT8_MIN;
	int8_t x1432 = INT8_MIN;
	int64_t t9 = INT64_MAX;

    t9 = ((x1429*x1430)<<(x1431^x1432));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1449 = 168LLU;
	int16_t x1450 = INT16_MIN;
	static int8_t x1451 = INT8_MIN;
	int8_t x1452 = INT8_MIN;
	volatile uint64_t t10 = 73LLU;

    t10 = ((x1449*x1450)<<(x1451^x1452));

    if (t10 != 18446744073704046592LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x1597 = 45382766154936LLU;
	uint8_t x1598 = 20U;
	uint32_t x1599 = UINT32_MAX;
	uint32_t x1600 = UINT32_MAX;
	volatile uint64_t t11 = 41514LLU;

    t11 = ((x1597*x1598)<<(x1599^x1600));

    if (t11 != 907655323098720LLU) { NG(); } else { ; }
	
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


    return 0;
}

