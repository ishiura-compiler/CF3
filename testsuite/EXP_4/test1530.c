
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

int16_t x54 = -13;
static int64_t x56 = -1LL;
static int32_t x331 = -1;
uint8_t x814 = 13U;


void f0(void) {
    	int16_t x5 = INT16_MAX;
	int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	int32_t x8 = -1;
	volatile int32_t t0 = 189063045;

    t0 = (x5/(x6&(x7==x8)));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x53 = -1;
	int8_t x55 = -1;
	volatile int32_t t1 = -18237;

    t1 = (x53/(x54&(x55==x56)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x105 = -1;
	int8_t x106 = INT8_MAX;
	uint64_t x107 = UINT64_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t2 = 21172480;

    t2 = (x105/(x106&(x107==x108)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x329 = 12097LLU;
	static uint32_t x330 = 208538323U;
	int8_t x332 = -1;
	uint64_t t3 = 3936462924LLU;

    t3 = (x329/(x330&(x331==x332)));

    if (t3 != 12097LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x497 = -1;
	static uint16_t x498 = UINT16_MAX;
	static int32_t x499 = -1;
	volatile int64_t x500 = -1LL;
	volatile int32_t t4 = -1225;

    t4 = (x497/(x498&(x499==x500)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x605 = -334891;
	int64_t x606 = INT64_MAX;
	uint64_t x607 = UINT64_MAX;
	static int32_t x608 = -1;
	volatile int64_t t5 = -7556517124LL;

    t5 = (x605/(x606&(x607==x608)));

    if (t5 != -334891LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x733 = -63730;
	int32_t x734 = 285444495;
	uint64_t x735 = UINT64_MAX;
	static int8_t x736 = -1;
	volatile int32_t t6 = -49;

    t6 = (x733/(x734&(x735==x736)));

    if (t6 != -63730) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x813 = -1;
	uint32_t x815 = UINT32_MAX;
	static int8_t x816 = -1;
	volatile int32_t t7 = -1244;

    t7 = (x813/(x814&(x815==x816)));

    if (t7 != -1) { NG(); } else { ; }
	
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


    return 0;
}

