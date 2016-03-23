
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

volatile int16_t x77 = INT16_MAX;
static volatile uint8_t x78 = 1U;
volatile int8_t x118 = 5;
uint8_t x119 = 56U;
uint8_t x123 = 5U;
int16_t x124 = INT16_MIN;
uint16_t x161 = 1845U;
uint64_t x165 = 54085LLU;
int64_t x211 = -646011725751107LL;
static volatile uint32_t x265 = 147922U;
volatile int32_t t14 = -61325670;
uint32_t x350 = 10U;
static int32_t x359 = -1;
uint16_t x410 = 1U;
static uint32_t x411 = 15866958U;
volatile uint16_t x470 = 26U;
int32_t x523 = 147213;
uint64_t x665 = 53579LLU;
uint64_t t20 = 392604547LLU;
uint8_t x678 = 7U;
uint16_t x701 = UINT16_MAX;
int16_t x820 = INT16_MIN;
volatile uint64_t t24 = 549416LLU;
int64_t x929 = 3LL;
int16_t x931 = 0;
volatile uint32_t x1264 = 869822U;
int8_t x1621 = 0;
static volatile int32_t t29 = -10;
static uint16_t x1677 = 1875U;
int16_t x1679 = -1;
int16_t x1680 = -210;
static int32_t x1804 = INT32_MIN;
volatile uint64_t x1813 = 3839805LLU;
uint32_t x1981 = 1U;
int16_t x1984 = -22;
uint64_t x2022 = 1LLU;
int8_t x2023 = -1;
volatile uint64_t t37 = 1802LLU;
int16_t x2153 = INT16_MAX;
static uint16_t x2154 = 26U;
int8_t x2155 = INT8_MIN;
uint8_t x2156 = 1U;
static int64_t x2347 = INT64_MIN;


void f0(void) {
    	int32_t x41 = INT32_MAX;
	int16_t x42 = 1;
	uint8_t x43 = 14U;
	int16_t x44 = -1;
	static volatile int32_t t0 = INT32_MAX;

    t0 = (x41>>(x42-(x43>x44)));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x69 = 5296LL;
	uint8_t x70 = 1U;
	uint16_t x71 = 3344U;
	int16_t x72 = 950;
	static int64_t t1 = -15158925014266012LL;

    t1 = (x69>>(x70-(x71>x72)));

    if (t1 != 5296LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x79 = -1;
	int32_t x80 = 1083178;
	static int32_t t2 = -47;

    t2 = (x77>>(x78-(x79>x80)));

    if (t2 != 16383) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x93 = 686U;
	static uint16_t x94 = 13U;
	uint16_t x95 = 155U;
	uint64_t x96 = 34616LLU;
	volatile int32_t t3 = -20932;

    t3 = (x93>>(x94-(x95>x96)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x117 = INT8_MAX;
	static uint8_t x120 = 18U;
	volatile int32_t t4 = 3;

    t4 = (x117>>(x118-(x119>x120)));

    if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x121 = 220U;
	static int8_t x122 = 14;
	static int32_t t5 = 1987736;

    t5 = (x121>>(x122-(x123>x124)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x137 = 671483250064LLU;
	uint8_t x138 = 4U;
	int64_t x139 = -1054234758308642551LL;
	uint64_t x140 = 254284448442818079LLU;
	uint64_t t6 = 117LLU;

    t6 = (x137>>(x138-(x139>x140)));

    if (t6 != 83935406258LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x162 = 21U;
	static uint64_t x163 = 44605LLU;
	uint32_t x164 = UINT32_MAX;
	int32_t t7 = 249;

    t7 = (x161>>(x162-(x163>x164)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x166 = 6U;
	uint16_t x167 = 15056U;
	static volatile uint64_t x168 = 379077076153849139LLU;
	volatile uint64_t t8 = 1850770545664484266LLU;

    t8 = (x165>>(x166-(x167>x168)));

    if (t8 != 845LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x209 = 50U;
	volatile uint8_t x210 = 20U;
	uint16_t x212 = 6882U;
	int32_t t9 = 112483;

    t9 = (x209>>(x210-(x211>x212)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x261 = 1;
	volatile int16_t x262 = 22;
	uint8_t x263 = 0U;
	uint32_t x264 = 1616U;
	static volatile int32_t t10 = -8099051;

    t10 = (x261>>(x262-(x263>x264)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x266 = 0;
	static uint8_t x267 = 3U;
	uint16_t x268 = 373U;
	volatile uint32_t t11 = 84U;

    t11 = (x265>>(x266-(x267>x268)));

    if (t11 != 147922U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x297 = 2U;
	uint8_t x298 = 0U;
	int64_t x299 = INT64_MIN;
	int16_t x300 = 207;
	volatile int32_t t12 = 355;

    t12 = (x297>>(x298-(x299>x300)));

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x309 = INT32_MAX;
	static uint16_t x310 = 14U;
	uint32_t x311 = 10506800U;
	volatile int16_t x312 = -12;
	volatile int32_t t13 = -107262;

    t13 = (x309>>(x310-(x311>x312)));

    if (t13 != 131071) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x313 = 192;
	int16_t x314 = 11;
	static volatile int32_t x315 = INT32_MIN;
	int32_t x316 = -1;

    t14 = (x313>>(x314-(x315>x316)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x349 = UINT8_MAX;
	int16_t x351 = INT16_MIN;
	static int64_t x352 = INT64_MIN;
	int32_t t15 = 23164781;

    t15 = (x349>>(x350-(x351>x352)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x357 = 6173U;
	static int16_t x358 = 1;
	uint32_t x360 = 5258U;
	int32_t t16 = 2;

    t16 = (x357>>(x358-(x359>x360)));

    if (t16 != 6173) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x409 = INT32_MAX;
	int8_t x412 = 46;
	int32_t t17 = INT32_MAX;

    t17 = (x409>>(x410-(x411>x412)));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x469 = UINT16_MAX;
	int16_t x471 = 30;
	volatile int8_t x472 = -1;
	volatile int32_t t18 = 1;

    t18 = (x469>>(x470-(x471>x472)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x521 = 1U;
	uint8_t x522 = 3U;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t19 = 1;

    t19 = (x521>>(x522-(x523>x524)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x666 = 14U;
	uint64_t x667 = 529776166686219313LLU;
	int64_t x668 = -1LL;

    t20 = (x665>>(x666-(x667>x668)));

    if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x677 = 1;
	int16_t x679 = -13033;
	int8_t x680 = INT8_MAX;
	volatile int32_t t21 = 37282;

    t21 = (x677>>(x678-(x679>x680)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x689 = 0;
	int8_t x690 = 30;
	volatile int64_t x691 = -1LL;
	volatile uint16_t x692 = 3576U;
	volatile int32_t t22 = -234791;

    t22 = (x689>>(x690-(x691>x692)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x702 = 5U;
	int32_t x703 = -1;
	uint16_t x704 = UINT16_MAX;
	int32_t t23 = -2593;

    t23 = (x701>>(x702-(x703>x704)));

    if (t23 != 2047) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x817 = 98518931LLU;
	uint8_t x818 = 6U;
	int16_t x819 = INT16_MIN;

    t24 = (x817>>(x818-(x819>x820)));

    if (t24 != 1539358LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x930 = 14U;
	volatile uint16_t x932 = 34U;
	volatile int64_t t25 = 7698762660076556LL;

    t25 = (x929>>(x930-(x931>x932)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x1109 = UINT64_MAX;
	int16_t x1110 = 1;
	int16_t x1111 = -7;
	uint32_t x1112 = UINT32_MAX;
	volatile uint64_t t26 = 58LLU;

    t26 = (x1109>>(x1110-(x1111>x1112)));

    if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1261 = UINT8_MAX;
	int64_t x1262 = 6LL;
	static int16_t x1263 = 21;
	volatile int32_t t27 = 1;

    t27 = (x1261>>(x1262-(x1263>x1264)));

    if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x1421 = INT32_MAX;
	uint32_t x1422 = 12U;
	int8_t x1423 = INT8_MIN;
	uint16_t x1424 = UINT16_MAX;
	int32_t t28 = -87;

    t28 = (x1421>>(x1422-(x1423>x1424)));

    if (t28 != 524287) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1622 = 0U;
	int8_t x1623 = INT8_MIN;
	int8_t x1624 = -4;

    t29 = (x1621>>(x1622-(x1623>x1624)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1678 = 1;
	static int32_t t30 = -99;

    t30 = (x1677>>(x1678-(x1679>x1680)));

    if (t30 != 1875) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint32_t x1765 = 0U;
	uint8_t x1766 = 5U;
	uint64_t x1767 = 620471LLU;
	int32_t x1768 = INT32_MIN;
	uint32_t t31 = 17094U;

    t31 = (x1765>>(x1766-(x1767>x1768)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1801 = 40714762LLU;
	volatile uint8_t x1802 = 24U;
	volatile uint8_t x1803 = 51U;
	volatile uint64_t t32 = 1523541LLU;

    t32 = (x1801>>(x1802-(x1803>x1804)));

    if (t32 != 4LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1814 = 9U;
	uint32_t x1815 = UINT32_MAX;
	int8_t x1816 = -1;
	volatile uint64_t t33 = 3888473160LLU;

    t33 = (x1813>>(x1814-(x1815>x1816)));

    if (t33 != 7499LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1921 = 1;
	int16_t x1922 = 13;
	uint32_t x1923 = 7035U;
	volatile uint64_t x1924 = 39596484039409284LLU;
	volatile int32_t t34 = 23;

    t34 = (x1921>>(x1922-(x1923>x1924)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x1982 = 6;
	int16_t x1983 = -6057;
	volatile uint32_t t35 = 514686455U;

    t35 = (x1981>>(x1982-(x1983>x1984)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x2021 = 294084;
	volatile int32_t x2024 = INT32_MAX;
	int32_t t36 = 1037;

    t36 = (x2021>>(x2022-(x2023>x2024)));

    if (t36 != 147042) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x2065 = 889489666325255LLU;
	static int16_t x2066 = 23;
	int64_t x2067 = INT64_MIN;
	int64_t x2068 = 2LL;

    t37 = (x2065>>(x2066-(x2067>x2068)));

    if (t37 != 106035431LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t t38 = -316051145;

    t38 = (x2153>>(x2154-(x2155>x2156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2185 = 2307898LLU;
	int16_t x2186 = 3;
	static uint16_t x2187 = 2338U;
	volatile int32_t x2188 = -4863;
	volatile uint64_t t39 = 694649LLU;

    t39 = (x2185>>(x2186-(x2187>x2188)));

    if (t39 != 576974LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2345 = UINT64_MAX;
	static uint8_t x2346 = 0U;
	static int16_t x2348 = INT16_MIN;
	uint64_t t40 = UINT64_MAX;

    t40 = (x2345>>(x2346-(x2347>x2348)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
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
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();


    return 0;
}

