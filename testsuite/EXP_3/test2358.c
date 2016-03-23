
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

int64_t x258 = 468127677299104LL;
uint8_t x260 = 3U;
static volatile int64_t t0 = -254136LL;
static uint8_t x603 = 0U;
volatile uint64_t t1 = 2392757002LLU;
volatile int32_t x901 = INT32_MIN;
uint32_t x1013 = UINT32_MAX;
static int16_t x1016 = 5;
volatile uint32_t t3 = 1733274813U;
uint64_t x1358 = 41300120406LLU;


void f0(void) {
    	int8_t x257 = -1;
	static int16_t x259 = 3;

    t0 = ((x257+x258)<<(x259|x260));

    if (t0 != 3745021418392824LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x601 = 506478375U;
	uint64_t x602 = 1419317963540395932LLU;
	uint16_t x604 = 5U;

    t1 = ((x601+x602)<<(x603|x604));

    if (t1 != 8524686702080874592LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x902 = 1030249LLU;
	static int8_t x903 = 0;
	uint8_t x904 = 4U;
	uint64_t t2 = 100344231106LLU;

    t2 = ((x901+x902)<<(x903|x904));

    if (t2 != 18446744039366297232LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x1014 = 1072315U;
	static volatile uint8_t x1015 = 7U;

    t3 = ((x1013+x1014)<<(x1015|x1016));

    if (t3 != 137256192U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x1357 = UINT16_MAX;
	uint8_t x1359 = 38U;
	volatile uint8_t x1360 = 2U;
	volatile uint64_t t4 = 421223445601719063LLU;

    t4 = ((x1357+x1358)<<(x1359|x1360));

    if (t4 != 7761062528720830464LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

