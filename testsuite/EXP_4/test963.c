
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

uint16_t x97 = 1670U;
int8_t x98 = 1;
uint32_t x206 = 1U;
int8_t x430 = 3;
static uint8_t x431 = 13U;
volatile int64_t t3 = -478LL;
volatile int64_t x563 = INT64_MAX;
int32_t x746 = 1;
int64_t x897 = INT64_MAX;
int8_t x899 = 13;
uint64_t x925 = UINT64_MAX;
int64_t x927 = INT64_MAX;


void f0(void) {
    	uint64_t x99 = 71956072LLU;
	int8_t x100 = INT8_MAX;
	volatile int32_t t0 = -32025;

    t0 = (x97>>(x98|(x99%x100)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x205 = 488540196784530032LLU;
	int32_t x207 = -1;
	int8_t x208 = -1;
	volatile uint64_t t1 = 5LLU;

    t1 = (x205>>(x206|(x207%x208)));

    if (t1 != 244270098392265016LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x301 = 1U;
	uint32_t x302 = 9U;
	uint8_t x303 = 1U;
	int64_t x304 = 32442465166306717LL;
	int32_t t2 = 579149098;

    t2 = (x301>>(x302|(x303%x304)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x429 = 809014632653974221LL;
	int32_t x432 = INT32_MIN;

    t3 = (x429>>(x430|(x431%x432)));

    if (t3 != 24689167256285LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x561 = INT64_MAX;
	uint8_t x562 = 2U;
	int8_t x564 = INT8_MAX;
	int64_t t4 = 1LL;

    t4 = (x561>>(x562|(x563%x564)));

    if (t4 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x745 = 155635;
	int32_t x747 = INT32_MAX;
	int32_t x748 = INT32_MAX;
	volatile int32_t t5 = -18433313;

    t5 = (x745>>(x746|(x747%x748)));

    if (t5 != 77817) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x898 = 26U;
	int32_t x900 = INT32_MAX;
	volatile int64_t t6 = -106049LL;

    t6 = (x897>>(x898|(x899%x900)));

    if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x917 = 60U;
	int8_t x918 = 11;
	int64_t x919 = INT64_MIN;
	int8_t x920 = -1;
	static volatile int32_t t7 = -3;

    t7 = (x917>>(x918|(x919%x920)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint32_t x926 = 0U;
	int8_t x928 = 4;
	volatile uint64_t t8 = 239900581760170LLU;

    t8 = (x925>>(x926|(x927%x928)));

    if (t8 != 2305843009213693951LLU) { NG(); } else { ; }
	
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

