
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

uint16_t x3 = UINT16_MAX;
uint16_t x4 = 19U;
uint64_t x218 = UINT64_MAX;
int8_t x220 = 29;
uint16_t x251 = 51U;
volatile uint64_t x252 = 1LLU;
int8_t x434 = -1;
static uint16_t x442 = UINT16_MAX;
uint64_t t4 = 45LLU;
uint64_t x455 = UINT64_MAX;
uint16_t x555 = UINT16_MAX;
uint32_t x743 = 1U;
uint32_t t7 = 283172U;
static volatile uint64_t x758 = UINT64_MAX;
uint64_t x824 = 1LLU;
volatile int64_t t9 = -214973LL;
int16_t x1087 = 31;
volatile uint32_t t12 = 23U;


void f0(void) {
    	int32_t x1 = -1;
	int32_t x2 = -4004409;
	int32_t t0 = -605925;

    t0 = ((x1*x2)+(x3>>x4));

    if (t0 != 4004409) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x217 = UINT16_MAX;
	uint64_t x219 = 59372684051541867LLU;
	volatile uint64_t t1 = 172397339286LLU;

    t1 = ((x217*x218)+(x219>>x220));

    if (t1 != 110524706LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x249 = 0U;
	static uint8_t x250 = 37U;
	int32_t t2 = -38;

    t2 = ((x249*x250)+(x251>>x252));

    if (t2 != 25) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x433 = -998246LL;
	uint16_t x435 = UINT16_MAX;
	static uint8_t x436 = 4U;
	volatile int64_t t3 = 1860LL;

    t3 = ((x433*x434)+(x435>>x436));

    if (t3 != 1002341LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x441 = INT16_MIN;
	static volatile uint64_t x443 = 58367350308LLU;
	static uint32_t x444 = 1U;

    t4 = ((x441*x442)+(x443>>x444));

    if (t4 != 27036224274LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x453 = INT16_MIN;
	int16_t x454 = 32;
	static int16_t x456 = 9;
	volatile uint64_t t5 = 3725552566635414LLU;

    t5 = ((x453*x454)+(x455>>x456));

    if (t5 != 36028797017915391LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x553 = INT8_MIN;
	int64_t x554 = 1230526962LL;
	uint16_t x556 = 17U;
	int64_t t6 = 27426198115109LL;

    t6 = ((x553*x554)+(x555>>x556));

    if (t6 != -157507451136LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x741 = INT32_MIN;
	uint8_t x742 = 0U;
	uint32_t x744 = 31U;

    t7 = ((x741*x742)+(x743>>x744));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x757 = INT64_MIN;
	uint8_t x759 = UINT8_MAX;
	int32_t x760 = 0;
	uint64_t t8 = 116566233247LLU;

    t8 = ((x757*x758)+(x759>>x760));

    if (t8 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x821 = 2;
	int64_t x822 = -1LL;
	int64_t x823 = INT64_MAX;

    t9 = ((x821*x822)+(x823>>x824));

    if (t9 != 4611686018427387901LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x1021 = INT16_MIN;
	static uint8_t x1022 = UINT8_MAX;
	static uint8_t x1023 = 60U;
	uint8_t x1024 = 1U;
	int32_t t10 = -2502220;

    t10 = ((x1021*x1022)+(x1023>>x1024));

    if (t10 != -8355810) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1085 = INT32_MIN;
	static int64_t x1086 = 14LL;
	uint16_t x1088 = 2U;
	volatile int64_t t11 = 43676982118816LL;

    t11 = ((x1085*x1086)+(x1087>>x1088));

    if (t11 != -30064771065LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x1129 = INT16_MAX;
	uint8_t x1130 = UINT8_MAX;
	uint32_t x1131 = 6U;
	uint8_t x1132 = 1U;

    t12 = ((x1129*x1130)+(x1131>>x1132));

    if (t12 != 8355588U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x1161 = -1LL;
	uint16_t x1162 = 6397U;
	uint8_t x1163 = UINT8_MAX;
	static uint8_t x1164 = 0U;
	volatile int64_t t13 = -1099845871721LL;

    t13 = ((x1161*x1162)+(x1163>>x1164));

    if (t13 != -6142LL) { NG(); } else { ; }
	
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


    return 0;
}

