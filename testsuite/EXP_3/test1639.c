
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

uint64_t x171 = 168850178009LLU;
uint16_t x501 = 13205U;
static volatile int32_t t4 = -17883379;
int32_t t5 = 868825769;
int8_t x693 = INT8_MAX;
volatile int32_t t9 = 7066910;
static volatile int8_t x977 = INT8_MAX;
uint8_t x978 = 1U;
int64_t x979 = 9166LL;
uint64_t x997 = 1499700193326LLU;
uint32_t x1085 = UINT32_MAX;
uint64_t x1086 = 26LLU;
uint32_t t14 = 69U;
int8_t x1097 = INT8_MAX;
int32_t t15 = 158879597;
static uint64_t x1132 = UINT64_MAX;
volatile int8_t x1251 = 1;
static int64_t x1269 = INT64_MAX;
uint16_t x1338 = 58U;
uint64_t t19 = 30696LLU;
volatile int32_t t20 = -2614;
uint16_t x1418 = 1U;
int64_t x1420 = 673603123426445LL;
int64_t x1496 = INT64_MAX;
uint8_t x1611 = UINT8_MAX;
int64_t x1612 = INT64_MIN;
uint16_t x1682 = 0U;
int32_t t25 = 225591069;
uint32_t x1691 = 1191474272U;
int8_t x1692 = 3;
int32_t x1709 = 188552;
static uint16_t x1712 = 23590U;
volatile int32_t t27 = 1;
volatile int32_t t29 = -90568;


void f0(void) {
    	uint16_t x101 = 482U;
	volatile int16_t x102 = 0;
	int8_t x103 = -1;
	uint16_t x104 = UINT16_MAX;
	int32_t t0 = -1965865;

    t0 = ((x101<<x102)+(x103>x104));

    if (t0 != 482) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x169 = UINT16_MAX;
	static volatile int8_t x170 = 1;
	uint32_t x172 = UINT32_MAX;
	int32_t t1 = -1;

    t1 = ((x169<<x170)+(x171>x172));

    if (t1 != 131071) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x321 = UINT32_MAX;
	int8_t x322 = 1;
	int32_t x323 = -1661026;
	int8_t x324 = -1;
	volatile uint32_t t2 = 107430465U;

    t2 = ((x321<<x322)+(x323>x324));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x329 = UINT16_MAX;
	volatile uint16_t x330 = 4U;
	uint8_t x331 = 8U;
	int8_t x332 = INT8_MAX;
	static volatile int32_t t3 = -331904462;

    t3 = ((x329<<x330)+(x331>x332));

    if (t3 != 1048560) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x502 = 3U;
	int16_t x503 = INT16_MIN;
	int16_t x504 = INT16_MAX;

    t4 = ((x501<<x502)+(x503>x504));

    if (t4 != 105640) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x533 = 11U;
	int8_t x534 = 1;
	static uint8_t x535 = 55U;
	uint32_t x536 = 50U;

    t5 = ((x533<<x534)+(x535>x536));

    if (t5 != 23) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x573 = 97U;
	uint8_t x574 = 0U;
	uint16_t x575 = 16U;
	volatile int32_t x576 = INT32_MIN;
	static volatile int32_t t6 = 2101055;

    t6 = ((x573<<x574)+(x575>x576));

    if (t6 != 98) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x694 = 1;
	uint16_t x695 = 494U;
	int8_t x696 = INT8_MIN;
	volatile int32_t t7 = 5699;

    t7 = ((x693<<x694)+(x695>x696));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x765 = UINT16_MAX;
	uint8_t x766 = 15U;
	int8_t x767 = INT8_MIN;
	uint32_t x768 = 124868298U;
	static int32_t t8 = 5831;

    t8 = ((x765<<x766)+(x767>x768));

    if (t8 != 2147450881) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x841 = 1;
	volatile uint8_t x842 = 1U;
	uint32_t x843 = 16292815U;
	volatile int64_t x844 = 10LL;

    t9 = ((x841<<x842)+(x843>x844));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x945 = 278607LL;
	uint8_t x946 = 6U;
	uint64_t x947 = UINT64_MAX;
	uint8_t x948 = UINT8_MAX;
	volatile int64_t t10 = -1205325702006821266LL;

    t10 = ((x945<<x946)+(x947>x948));

    if (t10 != 17830849LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x980 = 7823438653328LLU;
	int32_t t11 = 189894830;

    t11 = ((x977<<x978)+(x979>x980));

    if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x998 = 44LLU;
	int64_t x999 = -1LL;
	int32_t x1000 = INT32_MIN;
	uint64_t t12 = 696374089747932044LLU;

    t12 = ((x997<<x998)+(x999>x1000));

    if (t12 != 10269016390962774017LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1045 = UINT32_MAX;
	volatile uint32_t x1046 = 22U;
	int32_t x1047 = -1;
	uint16_t x1048 = UINT16_MAX;
	static volatile uint32_t t13 = 54U;

    t13 = ((x1045<<x1046)+(x1047>x1048));

    if (t13 != 4290772992U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1087 = UINT32_MAX;
	uint8_t x1088 = UINT8_MAX;

    t14 = ((x1085<<x1086)+(x1087>x1088));

    if (t14 != 4227858433U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1098 = 10LL;
	int64_t x1099 = INT64_MAX;
	int32_t x1100 = INT32_MAX;

    t15 = ((x1097<<x1098)+(x1099>x1100));

    if (t15 != 130049) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1129 = UINT32_MAX;
	int16_t x1130 = 1;
	int64_t x1131 = INT64_MAX;
	volatile uint32_t t16 = 7U;

    t16 = ((x1129<<x1130)+(x1131>x1132));

    if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x1249 = INT32_MAX;
	volatile int32_t x1250 = 0;
	static int32_t x1252 = INT32_MAX;
	volatile int32_t t17 = INT32_MAX;

    t17 = ((x1249<<x1250)+(x1251>x1252));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1270 = 0;
	int64_t x1271 = INT64_MIN;
	static uint32_t x1272 = 27913983U;
	volatile int64_t t18 = INT64_MAX;

    t18 = ((x1269<<x1270)+(x1271>x1272));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1337 = UINT64_MAX;
	static uint8_t x1339 = UINT8_MAX;
	uint64_t x1340 = UINT64_MAX;

    t19 = ((x1337<<x1338)+(x1339>x1340));

    if (t19 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x1341 = 1;
	uint8_t x1342 = 21U;
	uint16_t x1343 = UINT16_MAX;
	uint8_t x1344 = 125U;

    t20 = ((x1341<<x1342)+(x1343>x1344));

    if (t20 != 2097153) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x1417 = 783U;
	uint32_t x1419 = 90644628U;
	int32_t t21 = -1;

    t21 = ((x1417<<x1418)+(x1419>x1420));

    if (t21 != 1566) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x1493 = 46;
	uint16_t x1494 = 2U;
	volatile int32_t x1495 = -76;
	volatile int32_t t22 = -5580190;

    t22 = ((x1493<<x1494)+(x1495>x1496));

    if (t22 != 184) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1517 = UINT64_MAX;
	int16_t x1518 = 1;
	volatile int16_t x1519 = 2023;
	int64_t x1520 = 280378098609LL;
	static uint64_t t23 = 3545204394LLU;

    t23 = ((x1517<<x1518)+(x1519>x1520));

    if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x1609 = 1U;
	static uint32_t x1610 = 2U;
	static volatile int32_t t24 = -109759;

    t24 = ((x1609<<x1610)+(x1611>x1612));

    if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1681 = 106U;
	int8_t x1683 = INT8_MIN;
	static int32_t x1684 = 25351;

    t25 = ((x1681<<x1682)+(x1683>x1684));

    if (t25 != 106) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1689 = 224LL;
	static volatile uint8_t x1690 = 2U;
	volatile int64_t t26 = 4081505527497557LL;

    t26 = ((x1689<<x1690)+(x1691>x1692));

    if (t26 != 897LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1710 = 1U;
	int64_t x1711 = INT64_MIN;

    t27 = ((x1709<<x1710)+(x1711>x1712));

    if (t27 != 377104) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x1805 = 3;
	int8_t x1806 = 24;
	static int8_t x1807 = INT8_MIN;
	volatile uint32_t x1808 = 3U;
	volatile int32_t t28 = 9179;

    t28 = ((x1805<<x1806)+(x1807>x1808));

    if (t28 != 50331649) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x1825 = 2U;
	volatile uint32_t x1826 = 11U;
	static int32_t x1827 = INT32_MAX;
	int8_t x1828 = -34;

    t29 = ((x1825<<x1826)+(x1827>x1828));

    if (t29 != 4097) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1849 = 259397904LL;
	uint32_t x1850 = 22U;
	int16_t x1851 = INT16_MIN;
	volatile int8_t x1852 = -28;
	static volatile int64_t t30 = -1144450LL;

    t30 = ((x1849<<x1850)+(x1851>x1852));

    if (t30 != 1087993666338816LL) { NG(); } else { ; }
	
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


    return 0;
}

