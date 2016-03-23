
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

static uint16_t x221 = UINT16_MAX;
static volatile int32_t x222 = 7;
uint8_t x294 = 19U;
static int16_t x394 = 1;
uint64_t x768 = 87LLU;
int16_t x982 = 0;
int8_t x1117 = INT8_MAX;
volatile int32_t t7 = 4417636;
volatile uint8_t x1333 = 31U;
int64_t x1336 = INT64_MIN;
static uint64_t t9 = 122585312LLU;
volatile int8_t x1927 = 27;
volatile uint8_t x2163 = 2U;
volatile uint16_t x2237 = 1U;
uint8_t x2285 = 0U;
volatile int8_t x2497 = INT8_MAX;
volatile uint16_t x2569 = UINT16_MAX;
volatile uint8_t x2570 = 14U;
static uint8_t x2572 = 0U;
uint8_t x2880 = 1U;
volatile int32_t t19 = -9651696;
volatile int32_t t20 = -4150876;
static int32_t x3023 = INT32_MIN;
uint16_t x3150 = 0U;
int8_t x3151 = INT8_MIN;
uint8_t x3152 = 4U;
volatile uint8_t x3384 = 7U;
static uint64_t t23 = 10077233LLU;
static uint8_t x3569 = 10U;
volatile int8_t x3734 = 2;
volatile uint32_t x3797 = UINT32_MAX;
static volatile uint64_t x3799 = 20899LLU;
volatile uint32_t t29 = 282823U;


void f0(void) {
    	volatile int64_t x223 = INT64_MIN;
	static uint16_t x224 = 35U;
	int32_t t0 = 592478;

    t0 = (x221<<(x222|(x223&x224)));

    if (t0 != 8388480) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x293 = UINT8_MAX;
	int64_t x295 = INT64_MIN;
	uint32_t x296 = 1U;
	int32_t t1 = -3;

    t1 = (x293<<(x294|(x295&x296)));

    if (t1 != 133693440) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x393 = 16668LLU;
	uint16_t x395 = 22U;
	volatile int16_t x396 = 0;
	uint64_t t2 = 683224LLU;

    t2 = (x393<<(x394|(x395&x396)));

    if (t2 != 33336LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x765 = UINT8_MAX;
	uint8_t x766 = 2U;
	int32_t x767 = INT32_MIN;
	int32_t t3 = -2;

    t3 = (x765<<(x766|(x767&x768)));

    if (t3 != 1020) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x773 = 1;
	int32_t x774 = 0;
	uint8_t x775 = 54U;
	int8_t x776 = INT8_MIN;
	int32_t t4 = -30019;

    t4 = (x773<<(x774|(x775&x776)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x981 = UINT8_MAX;
	int64_t x983 = INT64_MIN;
	volatile uint32_t x984 = UINT32_MAX;
	volatile int32_t t5 = -12209;

    t5 = (x981<<(x982|(x983&x984)));

    if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x1118 = 0LL;
	uint16_t x1119 = 2U;
	int64_t x1120 = 0LL;
	int32_t t6 = 193389229;

    t6 = (x1117<<(x1118|(x1119&x1120)));

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x1189 = INT16_MAX;
	uint8_t x1190 = 1U;
	int32_t x1191 = INT32_MIN;
	uint16_t x1192 = 4U;

    t7 = (x1189<<(x1190|(x1191&x1192)));

    if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x1334 = 6LL;
	volatile uint64_t x1335 = 2LLU;
	volatile int32_t t8 = -516889211;

    t8 = (x1333<<(x1334|(x1335&x1336)));

    if (t8 != 1984) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1485 = UINT64_MAX;
	uint16_t x1486 = 47U;
	int64_t x1487 = INT64_MIN;
	static int16_t x1488 = INT16_MAX;

    t9 = (x1485<<(x1486|(x1487&x1488)));

    if (t9 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x1665 = 1U;
	uint8_t x1666 = 3U;
	int64_t x1667 = INT64_MIN;
	volatile int16_t x1668 = 0;
	int32_t t10 = -100476;

    t10 = (x1665<<(x1666|(x1667&x1668)));

    if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x1741 = 468U;
	volatile int8_t x1742 = 11;
	static int64_t x1743 = 492820609LL;
	volatile int64_t x1744 = INT64_MIN;
	volatile int32_t t11 = -1;

    t11 = (x1741<<(x1742|(x1743&x1744)));

    if (t11 != 958464) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1925 = 4U;
	uint16_t x1926 = 7U;
	int8_t x1928 = 1;
	volatile int32_t t12 = -2;

    t12 = (x1925<<(x1926|(x1927&x1928)));

    if (t12 != 512) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x2161 = INT16_MAX;
	uint16_t x2162 = 1U;
	int64_t x2164 = INT64_MIN;
	int32_t t13 = 437;

    t13 = (x2161<<(x2162|(x2163&x2164)));

    if (t13 != 65534) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x2238 = 16U;
	int32_t x2239 = INT32_MAX;
	int64_t x2240 = INT64_MIN;
	int32_t t14 = 60326334;

    t14 = (x2237<<(x2238|(x2239&x2240)));

    if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x2286 = 0;
	uint8_t x2287 = UINT8_MAX;
	int16_t x2288 = INT16_MIN;
	int32_t t15 = -951;

    t15 = (x2285<<(x2286|(x2287&x2288)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x2498 = 0U;
	static volatile int16_t x2499 = 520;
	volatile int16_t x2500 = INT16_MIN;
	volatile int32_t t16 = -3;

    t16 = (x2497<<(x2498|(x2499&x2500)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x2571 = 74U;
	int32_t t17 = -12;

    t17 = (x2569<<(x2570|(x2571&x2572)));

    if (t17 != 1073725440) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x2753 = 1022;
	uint32_t x2754 = 1U;
	int64_t x2755 = 15194LL;
	int64_t x2756 = INT64_MIN;
	static int32_t t18 = 753996;

    t18 = (x2753<<(x2754|(x2755&x2756)));

    if (t18 != 2044) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x2877 = 1U;
	uint16_t x2878 = 1U;
	int16_t x2879 = 261;

    t19 = (x2877<<(x2878|(x2879&x2880)));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x2921 = UINT8_MAX;
	static uint8_t x2922 = 6U;
	uint32_t x2923 = 5U;
	static int16_t x2924 = INT16_MIN;

    t20 = (x2921<<(x2922|(x2923&x2924)));

    if (t20 != 16320) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x3021 = UINT32_MAX;
	static uint8_t x3022 = 11U;
	uint8_t x3024 = 112U;
	volatile uint32_t t21 = 24501U;

    t21 = (x3021<<(x3022|(x3023&x3024)));

    if (t21 != 4294965248U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x3149 = UINT64_MAX;
	uint64_t t22 = UINT64_MAX;

    t22 = (x3149<<(x3150|(x3151&x3152)));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x3381 = 1915428135LLU;
	uint8_t x3382 = 0U;
	int16_t x3383 = INT16_MAX;

    t23 = (x3381<<(x3382|(x3383&x3384)));

    if (t23 != 245174801280LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x3553 = INT16_MAX;
	int16_t x3554 = 1;
	int8_t x3555 = 11;
	volatile int16_t x3556 = -252;
	volatile int32_t t24 = 3204189;

    t24 = (x3553<<(x3554|(x3555&x3556)));

    if (t24 != 65534) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x3570 = 0LL;
	uint16_t x3571 = 2U;
	int32_t x3572 = INT32_MIN;
	int32_t t25 = -2;

    t25 = (x3569<<(x3570|(x3571&x3572)));

    if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x3637 = 20U;
	static uint32_t x3638 = 3U;
	volatile int8_t x3639 = INT8_MAX;
	int32_t x3640 = INT32_MIN;
	static volatile int32_t t26 = -15872218;

    t26 = (x3637<<(x3638|(x3639&x3640)));

    if (t26 != 160) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x3733 = 2U;
	int16_t x3735 = -178;
	uint8_t x3736 = 2U;
	volatile int32_t t27 = -365382647;

    t27 = (x3733<<(x3734|(x3735&x3736)));

    if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x3765 = 392U;
	uint16_t x3766 = 0U;
	uint16_t x3767 = 20U;
	static volatile int8_t x3768 = INT8_MIN;
	int32_t t28 = 25611;

    t28 = (x3765<<(x3766|(x3767&x3768)));

    if (t28 != 392) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x3798 = 1;
	int64_t x3800 = INT64_MIN;

    t29 = (x3797<<(x3798|(x3799&x3800)));

    if (t29 != 4294967294U) { NG(); } else { ; }
	
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
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();


    return 0;
}

