
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

static int32_t t0 = 55;
static uint64_t x185 = UINT64_MAX;
static int8_t x186 = -1;
uint8_t x369 = 0U;
uint64_t x370 = UINT64_MAX;
int64_t x933 = -27588LL;
static int8_t x935 = 3;
uint16_t x1137 = 16877U;
volatile int64_t x1217 = 14LL;
uint16_t x1219 = 0U;
volatile int16_t x1220 = 1;


void f0(void) {
    	int32_t x21 = 10;
	int8_t x22 = 46;
	int32_t x23 = 6;
	uint16_t x24 = 18U;

    t0 = (((x21%x22)>>x23)>>x24);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x187 = 6U;
	int8_t x188 = 0;
	volatile uint64_t t1 = 6274630448998LLU;

    t1 = (((x185%x186)>>x187)>>x188);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x371 = 4U;
	static int8_t x372 = 4;
	static uint64_t t2 = 236LLU;

    t2 = (((x369%x370)>>x371)>>x372);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x745 = 124673736977LLU;
	static volatile uint64_t x746 = 1338LLU;
	volatile uint32_t x747 = 10U;
	int32_t x748 = 24;
	uint64_t t3 = 22LLU;

    t3 = (((x745%x746)>>x747)>>x748);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x934 = 3U;
	static uint32_t x936 = 3U;
	volatile int64_t t4 = -7764986LL;

    t4 = (((x933%x934)>>x935)>>x936);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x937 = INT64_MAX;
	int16_t x938 = INT16_MAX;
	uint16_t x939 = 19U;
	uint8_t x940 = 53U;
	int64_t t5 = 11268209LL;

    t5 = (((x937%x938)>>x939)>>x940);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x1138 = -1;
	int8_t x1139 = 2;
	static int16_t x1140 = 2;
	volatile int32_t t6 = -46330;

    t6 = (((x1137%x1138)>>x1139)>>x1140);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1218 = 2756;
	static volatile int64_t t7 = -44596LL;

    t7 = (((x1217%x1218)>>x1219)>>x1220);

    if (t7 != 7LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x1497 = INT8_MAX;
	volatile int64_t x1498 = INT64_MIN;
	static volatile uint8_t x1499 = 58U;
	static uint8_t x1500 = 28U;
	int64_t t8 = 578875910191LL;

    t8 = (((x1497%x1498)>>x1499)>>x1500);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1697 = 1U;
	static uint32_t x1698 = 27299U;
	static volatile uint64_t x1699 = 1LLU;
	int8_t x1700 = 1;
	uint32_t t9 = 33393267U;

    t9 = (((x1697%x1698)>>x1699)>>x1700);

    if (t9 != 0U) { NG(); } else { ; }
	
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


    return 0;
}

