
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

volatile uint32_t t0 = 188U;
volatile uint32_t t2 = 105968165U;
volatile uint32_t x654 = 3127152U;
uint8_t x655 = 26U;
volatile uint8_t x656 = 1U;
uint8_t x836 = 17U;
uint16_t x1205 = 3279U;
static int8_t x1208 = 7;
uint8_t x1608 = 4U;
volatile uint32_t t6 = 1483786U;


void f0(void) {
    	static int8_t x81 = -5;
	uint32_t x82 = 352U;
	uint8_t x83 = 26U;
	volatile uint8_t x84 = 11U;

    t0 = ((x81-(x82<<x83))>>x84);

    if (t0 != 1048575U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x297 = INT32_MAX;
	uint32_t x298 = UINT32_MAX;
	static volatile uint8_t x299 = 0U;
	uint8_t x300 = 1U;
	volatile uint32_t t1 = 317892977U;

    t1 = ((x297-(x298<<x299))>>x300);

    if (t1 != 1073741824U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x537 = 74U;
	uint32_t x538 = 22168129U;
	int8_t x539 = 19;
	int8_t x540 = 0;

    t2 = ((x537-(x538<<x539))>>x540);

    if (t2 != 3992453194U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x653 = -32688709;
	static volatile uint32_t t3 = 50835122U;

    t3 = ((x653-(x654<<x655))>>x656);

    if (t3 != 520526557U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x833 = 1U;
	static uint32_t x834 = 3U;
	volatile int16_t x835 = 29;
	uint32_t t4 = 835602970U;

    t4 = ((x833-(x834<<x835))>>x836);

    if (t4 != 20480U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x1206 = 4U;
	static volatile uint8_t x1207 = 2U;
	int32_t t5 = 0;

    t5 = ((x1205-(x1206<<x1207))>>x1208);

    if (t5 != 25) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x1605 = 4U;
	uint32_t x1606 = 3288975U;
	uint16_t x1607 = 31U;

    t6 = ((x1605-(x1606<<x1607))>>x1608);

    if (t6 != 134217728U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

