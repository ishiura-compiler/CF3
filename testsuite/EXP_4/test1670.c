
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

int32_t t0 = 44;
volatile int16_t x287 = INT16_MAX;
static volatile int16_t x288 = -8618;
volatile int32_t t3 = -200965286;
uint64_t x676 = UINT64_MAX;
int32_t x987 = 1;
int64_t x988 = 1483LL;
static int8_t x1061 = INT8_MAX;
int32_t x1129 = INT32_MIN;
int32_t x1130 = 0;


void f0(void) {
    	int32_t x185 = -72386;
	uint8_t x186 = 0U;
	uint8_t x187 = 6U;
	uint8_t x188 = 87U;

    t0 = (x185/(x186==(x187>x188)));

    if (t0 != -72386) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x285 = INT8_MAX;
	int8_t x286 = 1;
	volatile int32_t t1 = 0;

    t1 = (x285/(x286==(x287>x288)));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x409 = 504632227LLU;
	static uint8_t x410 = 0U;
	int64_t x411 = INT64_MIN;
	int32_t x412 = -14888;
	volatile uint64_t t2 = 70404661378237542LLU;

    t2 = (x409/(x410==(x411>x412)));

    if (t2 != 504632227LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x525 = 36737;
	static volatile uint8_t x526 = 1U;
	int16_t x527 = 99;
	int64_t x528 = -1LL;

    t3 = (x525/(x526==(x527>x528)));

    if (t3 != 36737) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x673 = UINT64_MAX;
	int8_t x674 = 0;
	static uint8_t x675 = UINT8_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = (x673/(x674==(x675>x676)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x985 = 8429;
	int32_t x986 = 0;
	int32_t t5 = -487616269;

    t5 = (x985/(x986==(x987>x988)));

    if (t5 != 8429) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x1062 = 1;
	int8_t x1063 = INT8_MIN;
	int64_t x1064 = INT64_MIN;
	int32_t t6 = 211909157;

    t6 = (x1061/(x1062==(x1063>x1064)));

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1131 = -11992973;
	int8_t x1132 = -8;
	volatile int32_t t7 = INT32_MIN;

    t7 = (x1129/(x1130==(x1131>x1132)));

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x1137 = INT16_MIN;
	uint16_t x1138 = 1U;
	uint8_t x1139 = 38U;
	static int64_t x1140 = -1LL;
	volatile int32_t t8 = -91;

    t8 = (x1137/(x1138==(x1139>x1140)));

    if (t8 != -32768) { NG(); } else { ; }
	
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


    return 0;
}

