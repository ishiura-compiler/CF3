
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

volatile int16_t x149 = 107;
static uint8_t x152 = 0U;
int8_t x575 = -1;
static volatile uint8_t x576 = 20U;
uint64_t x642 = 259054347226LLU;
uint64_t x670 = 106199643LLU;
uint64_t t5 = 6800669LLU;
int16_t x841 = 487;
int16_t x935 = 9;
int64_t x1047 = -1LL;
volatile int16_t x1169 = INT16_MIN;
int32_t x1215 = -1;
volatile uint32_t x1488 = 7U;
uint8_t x1684 = 47U;
volatile uint64_t t15 = 431496419384841594LLU;
int32_t x1839 = -1;


void f0(void) {
    	int8_t x150 = -1;
	static volatile uint16_t x151 = 0U;
	int32_t t0 = 1;

    t0 = ((x149-x150)<<(x151+x152));

    if (t0 != 108) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x377 = -26;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = -1;
	uint8_t x380 = 11U;
	uint64_t t1 = 236634LLU;

    t1 = ((x377-x378)<<(x379+x380));

    if (t1 != 18446744073709526016LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x573 = 66164507LLU;
	static volatile int32_t x574 = INT32_MAX;
	static uint64_t t2 = 13438017400154651LLU;

    t2 = ((x573-x574)<<(x575+x576));

    if (t2 != 18445652863060279296LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x577 = INT16_MAX;
	static uint64_t x578 = UINT64_MAX;
	volatile int64_t x579 = -1LL;
	uint8_t x580 = 37U;
	uint64_t t3 = 13LLU;

    t3 = ((x577-x578)<<(x579+x580));

    if (t3 != 2251799813685248LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x641 = 2897472U;
	static uint8_t x643 = 6U;
	uint32_t x644 = UINT32_MAX;
	static volatile uint64_t t4 = 37376118129789LLU;

    t4 = ((x641-x642)<<(x643+x644));

    if (t4 != 18446735784063159488LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x669 = 346178;
	volatile uint64_t x671 = UINT64_MAX;
	static volatile int16_t x672 = 21;

    t5 = ((x669-x670)<<(x671+x672));

    if (t5 != 18446633078306635776LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x745 = -1LL;
	int32_t x746 = INT32_MIN;
	static uint64_t x747 = 23LLU;
	uint8_t x748 = 0U;
	int64_t t6 = -29615560745LL;

    t6 = ((x745-x746)<<(x747+x748));

    if (t6 != 18014398501093376LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x793 = 7691;
	int32_t x794 = -286816;
	int8_t x795 = -1;
	uint8_t x796 = 9U;
	int32_t t7 = 1;

    t7 = ((x793-x794)<<(x795+x796));

    if (t7 != 75393792) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x842 = -1;
	static uint16_t x843 = 0U;
	int8_t x844 = 8;
	int32_t t8 = -90002842;

    t8 = ((x841-x842)<<(x843+x844));

    if (t8 != 124928) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x889 = INT8_MAX;
	static volatile int64_t x890 = -1448511LL;
	int8_t x891 = -1;
	uint8_t x892 = 30U;
	volatile int64_t t9 = -792757078350423262LL;

    t9 = ((x889-x890)<<(x891+x892));

    if (t9 != 777731604217856LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x933 = -3;
	int16_t x934 = INT16_MIN;
	static int16_t x936 = -1;
	volatile int32_t t10 = 226729;

    t10 = ((x933-x934)<<(x935+x936));

    if (t10 != 8387840) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1045 = UINT64_MAX;
	uint64_t x1046 = 92378LLU;
	static int8_t x1048 = 1;
	uint64_t t11 = 15916040LLU;

    t11 = ((x1045-x1046)<<(x1047+x1048));

    if (t11 != 18446744073709459237LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x1170 = UINT32_MAX;
	static int8_t x1171 = 0;
	int8_t x1172 = 7;
	uint32_t t12 = 2947663U;

    t12 = ((x1169-x1170)<<(x1171+x1172));

    if (t12 != 4290773120U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x1213 = 464U;
	uint8_t x1214 = UINT8_MAX;
	volatile int16_t x1216 = 4;
	int32_t t13 = -1;

    t13 = ((x1213-x1214)<<(x1215+x1216));

    if (t13 != 1672) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1485 = UINT8_MAX;
	uint64_t x1486 = UINT64_MAX;
	volatile uint32_t x1487 = UINT32_MAX;
	uint64_t t14 = 10814518784LLU;

    t14 = ((x1485-x1486)<<(x1487+x1488));

    if (t14 != 16384LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x1681 = INT32_MIN;
	static uint64_t x1682 = 0LLU;
	static int32_t x1683 = 0;

    t15 = ((x1681-x1682)<<(x1683+x1684));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x1837 = -2;
	volatile int32_t x1838 = INT32_MIN;
	int16_t x1840 = 1;
	int32_t t16 = 1;

    t16 = ((x1837-x1838)<<(x1839+x1840));

    if (t16 != 2147483646) { NG(); } else { ; }
	
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


    return 0;
}

