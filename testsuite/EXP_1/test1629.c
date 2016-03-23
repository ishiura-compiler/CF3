
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

static volatile int8_t x1 = 1;
static uint64_t x4 = UINT64_MAX;
uint8_t x5 = 3U;
int64_t x13 = INT64_MAX;
uint64_t x18 = 1519455792LLU;
int32_t t4 = 37986;
volatile int64_t x21 = 0LL;
uint16_t x23 = 3U;
uint16_t x26 = 0U;
static uint16_t x28 = 1U;
uint64_t x36 = 767LLU;
int32_t t10 = 0;
static uint64_t x56 = 133991475178LLU;
static int64_t x60 = -19684492LL;
int64_t t14 = -6923LL;
static volatile uint64_t t15 = 7897326864879LLU;
uint64_t x66 = 1846229529208977819LLU;
int8_t x75 = INT8_MIN;
volatile int64_t t18 = -946261667644787285LL;
volatile int32_t x81 = INT32_MIN;
static int64_t x86 = INT64_MAX;
int16_t x90 = INT16_MAX;
uint64_t x91 = UINT64_MAX;
int64_t x94 = INT64_MAX;
uint32_t t22 = 1233027U;
int8_t x103 = INT8_MIN;
int8_t x109 = INT8_MIN;
volatile int8_t x110 = INT8_MAX;
int8_t x112 = INT8_MAX;
volatile int32_t t26 = -25;
int16_t x113 = INT16_MIN;
uint32_t t29 = 1U;
uint8_t x126 = 98U;
volatile int8_t x137 = INT8_MIN;
volatile uint64_t t35 = 123949843LLU;
static volatile int32_t t40 = -12;
int16_t x177 = -1;
uint64_t x179 = UINT64_MAX;
volatile uint64_t t42 = 310258426LLU;
uint64_t x181 = 5505991LLU;
volatile int32_t x182 = -1;
volatile uint64_t t43 = 1644806785LLU;
int16_t x193 = 51;
int16_t x196 = 1;
volatile uint64_t x199 = UINT64_MAX;
int64_t x203 = -1LL;
uint8_t x204 = 61U;
uint32_t x211 = 49348U;
int32_t x212 = -1;
int16_t x214 = INT16_MIN;
int32_t t51 = 5;
volatile uint64_t x217 = 1747455475LLU;
volatile int8_t x218 = -1;
int8_t x221 = INT8_MAX;
int16_t x223 = INT16_MIN;
volatile int32_t x226 = INT32_MAX;
uint16_t x231 = 6067U;
int16_t x239 = -1;
int16_t x241 = INT16_MAX;
int64_t x251 = INT64_MIN;
int16_t x257 = INT16_MAX;
static int64_t x260 = 2LL;
volatile int16_t x267 = INT16_MIN;
int16_t x269 = -27;
int8_t x275 = INT8_MIN;
volatile int16_t x278 = -1;
static volatile int64_t t68 = 8327291399LL;
volatile uint32_t x285 = UINT32_MAX;
static int16_t x288 = INT16_MIN;
uint16_t x289 = 61U;
uint32_t x291 = 405226786U;
int32_t t71 = -1220676;
static volatile int32_t t72 = -573510;
static volatile int8_t x303 = INT8_MAX;
uint32_t x304 = UINT32_MAX;
static int32_t t75 = 930046;
int8_t x314 = -1;
int32_t t76 = 3155439;
uint16_t x323 = 35U;
uint16_t x324 = UINT16_MAX;
int32_t x331 = -340011940;
uint64_t t80 = 1695391LLU;
uint32_t x343 = 882U;
uint32_t x346 = 45073729U;
int8_t x357 = 3;
int16_t x363 = INT16_MAX;
static int8_t x373 = -42;
static volatile int64_t t91 = 62LL;
int16_t x383 = INT16_MIN;
int32_t x386 = INT32_MAX;
int16_t x388 = INT16_MIN;
uint32_t x391 = 1472528U;
int64_t x392 = INT64_MAX;
uint32_t x396 = 7747U;
static volatile uint8_t x399 = 20U;
static volatile int32_t t100 = 468776;
int64_t x423 = INT64_MIN;
static volatile int8_t x425 = 2;
static int16_t x427 = 1;
volatile int16_t x428 = INT16_MIN;
static int32_t t103 = 14533;
uint8_t x434 = UINT8_MAX;
uint16_t x436 = UINT16_MAX;
static int8_t x437 = INT8_MAX;
int64_t x438 = INT64_MIN;
int64_t t105 = 638743871238870431LL;
uint16_t x447 = 3U;
int8_t x448 = INT8_MAX;
volatile int64_t x449 = INT64_MAX;
uint16_t x461 = UINT16_MAX;
int64_t t112 = 270778780500LL;
int64_t x473 = -659358450583612LL;
uint32_t x477 = 15724U;
int32_t x480 = -1;
volatile int32_t t115 = -112;
int16_t x482 = INT16_MAX;
uint16_t x490 = 96U;
volatile int32_t x492 = -1;
uint16_t x494 = UINT16_MAX;
int64_t x495 = 620140212130338489LL;
static volatile uint16_t x502 = 1U;
uint16_t x507 = UINT16_MAX;
int16_t x508 = -1;
volatile int32_t t122 = -1;
uint8_t x511 = 48U;
static uint8_t x514 = UINT8_MAX;
uint32_t x518 = 62689U;
static int64_t x519 = INT64_MIN;
volatile int64_t t125 = 338457395102545435LL;
static int64_t x522 = -476027906781LL;
static uint64_t x523 = 466796LLU;
static int32_t x528 = -94862240;
volatile uint64_t t128 = 14392094877LLU;
volatile int8_t x535 = INT8_MIN;
int16_t x538 = INT16_MIN;
int64_t t130 = 6856168137557913LL;
uint32_t x542 = 749327U;
static uint8_t x543 = 17U;
uint8_t x554 = 4U;
static int32_t t133 = -8783844;
static int64_t x561 = INT64_MIN;
int64_t x563 = -2509358610186471068LL;
uint64_t x569 = UINT64_MAX;
static volatile uint32_t t137 = 8U;
int16_t x575 = INT16_MIN;
static int32_t x583 = INT32_MAX;
int32_t t139 = 67556;
int32_t x590 = INT32_MAX;
static int16_t x594 = -3;
volatile uint16_t x600 = 36U;
volatile int64_t t143 = 8LL;
int16_t x609 = 1;
static volatile int32_t x614 = -1597090;
int32_t x615 = -1;
int8_t x616 = INT8_MIN;
static int8_t x617 = 6;
int32_t x619 = INT32_MIN;
uint16_t x623 = 3785U;
int32_t t148 = -2732552;
uint32_t t150 = 2567U;
int32_t x644 = 550080;
int16_t x647 = INT16_MAX;
volatile int16_t x648 = INT16_MIN;
int8_t x651 = INT8_MIN;
volatile int16_t x652 = -1;
uint64_t x655 = 1LLU;
int64_t x664 = 6702LL;
volatile int64_t t158 = 5719877109153LL;
uint64_t x667 = 806LLU;
int64_t x668 = INT64_MIN;
int8_t x683 = 1;
int32_t t162 = -47429891;
uint32_t x695 = 732256U;
int32_t x700 = INT32_MIN;
static int64_t t169 = -1LL;
static volatile uint8_t x713 = 1U;
volatile uint64_t t170 = 199490298405322LLU;
int64_t x717 = -1LL;
uint64_t t171 = 362LLU;
uint32_t x728 = 5040U;
int32_t t175 = -8534;
uint64_t x745 = 129594553378021LLU;
int64_t x747 = INT64_MAX;
int16_t x749 = -1;
int64_t t179 = 43814LL;
int64_t x753 = 799780060122195LL;
int8_t x758 = INT8_MIN;
int8_t x759 = 7;
uint64_t x760 = 28280LLU;
volatile uint64_t t181 = 13LLU;
uint32_t x761 = 265132977U;
uint16_t x762 = 91U;
int16_t x765 = INT16_MIN;
uint16_t x771 = 6U;
uint32_t t186 = 6344121U;
int8_t x782 = 1;
int64_t x783 = 1679379955703954932LL;
int8_t x784 = -1;
int16_t x786 = INT16_MIN;
uint64_t x790 = 11LLU;
volatile int32_t t189 = -196;
uint8_t x799 = 126U;
static int16_t x806 = -7949;
int64_t x807 = INT64_MAX;
static volatile int64_t x808 = INT64_MIN;
volatile int64_t t193 = -797LL;
static int32_t x811 = 123211564;
static uint8_t x812 = 30U;
volatile int32_t t194 = -6;
uint64_t x813 = UINT64_MAX;
int8_t x820 = -1;
volatile int32_t x831 = -4701362;


void f0(void) {
    	uint8_t x2 = 18U;
	int32_t x3 = INT32_MAX;
	uint64_t t0 = 27420LLU;

    t0 = (((x1>x2)%x3)%x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MIN;
	static int8_t x8 = -1;
	int32_t t1 = 1877158;

    t1 = (((x5>x6)%x7)%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 6U;
	uint8_t x10 = 7U;
	static int16_t x11 = -51;
	volatile uint8_t x12 = 25U;
	static volatile int32_t t2 = -409869046;

    t2 = (((x9>x10)%x11)%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	int8_t x15 = -1;
	volatile int8_t x16 = -28;
	volatile int32_t t3 = 1657893;

    t3 = (((x13>x14)%x15)%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int16_t x19 = INT16_MAX;
	uint8_t x20 = UINT8_MAX;

    t4 = (((x17>x18)%x19)%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x22 = UINT64_MAX;
	int8_t x24 = -1;
	volatile int32_t t5 = 130194106;

    t5 = (((x21>x22)%x23)%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	static uint32_t x27 = 57808U;
	uint32_t t6 = 2052084U;

    t6 = (((x25>x26)%x27)%x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 53086848818230LLU;
	int64_t x30 = INT64_MAX;
	int16_t x31 = INT16_MAX;
	static int16_t x32 = INT16_MIN;
	int32_t t7 = 89919;

    t7 = (((x29>x30)%x31)%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1U;
	int64_t x34 = INT64_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	static volatile uint64_t t8 = 3580396104558127597LLU;

    t8 = (((x33>x34)%x35)%x36);

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	volatile int8_t x38 = INT8_MIN;
	int32_t x39 = -505;
	int32_t x40 = -2;
	volatile int32_t t9 = 6;

    t9 = (((x37>x38)%x39)%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MAX;
	static volatile int8_t x42 = 13;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = INT8_MAX;

    t10 = (((x41>x42)%x43)%x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	int64_t x46 = -13034LL;
	uint16_t x47 = 8U;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 3035371;

    t11 = (((x45>x46)%x47)%x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 61047LLU;
	uint64_t x50 = UINT64_MAX;
	static int16_t x51 = -1;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = 2529001956166LL;

    t12 = (((x49>x50)%x51)%x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	uint64_t x54 = 6892486294206658LLU;
	int32_t x55 = INT32_MIN;
	volatile uint64_t t13 = 806LLU;

    t13 = (((x53>x54)%x55)%x56);

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MIN;
	static int32_t x58 = INT32_MIN;
	uint8_t x59 = 2U;

    t14 = (((x57>x58)%x59)%x60);

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int64_t x62 = 323290553900305LL;
	uint64_t x63 = UINT64_MAX;
	static int64_t x64 = -1LL;

    t15 = (((x61>x62)%x63)%x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 1304401U;
	volatile uint32_t x67 = 701478U;
	int64_t x68 = -35644142073746LL;
	int64_t t16 = 281LL;

    t16 = (((x65>x66)%x67)%x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = 38LLU;
	uint32_t x74 = 2U;
	int64_t x76 = 1069059904532LL;
	volatile int64_t t17 = 2170036590428LL;

    t17 = (((x73>x74)%x75)%x76);

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	static int16_t x78 = INT16_MIN;
	int32_t x79 = -1;
	static volatile int64_t x80 = INT64_MAX;

    t18 = (((x77>x78)%x79)%x80);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = -1LL;
	volatile uint32_t x83 = UINT32_MAX;
	volatile uint16_t x84 = 3U;
	volatile uint32_t t19 = 516888316U;

    t19 = (((x81>x82)%x83)%x84);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = -1;
	uint32_t x87 = 36704366U;
	uint32_t x88 = 163830408U;
	uint32_t t20 = 109576U;

    t20 = (((x85>x86)%x87)%x88);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 3926U;
	int64_t x92 = -1LL;
	static volatile uint64_t t21 = 4LLU;

    t21 = (((x89>x90)%x91)%x92);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x93 = 3U;
	volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;

    t22 = (((x93>x94)%x95)%x96);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -1;
	volatile int8_t x98 = INT8_MAX;
	volatile uint64_t x99 = UINT64_MAX;
	uint16_t x100 = 3U;
	volatile uint64_t t23 = 1LLU;

    t23 = (((x97>x98)%x99)%x100);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x101 = INT16_MIN;
	uint64_t x102 = 172915LLU;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t24 = -53;

    t24 = (((x101>x102)%x103)%x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x105 = 14U;
	static int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int8_t x108 = -3;
	volatile int64_t t25 = -14455918886LL;

    t25 = (((x105>x106)%x107)%x108);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x111 = INT16_MIN;

    t26 = (((x109>x110)%x111)%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x114 = 1LLU;
	uint64_t x115 = 429532953543992LLU;
	static uint32_t x116 = 863809U;
	uint64_t t27 = 578939623290751LLU;

    t27 = (((x113>x114)%x115)%x116);

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -1;
	int64_t x118 = 12903230940730618LL;
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t28 = 1286;

    t28 = (((x117>x118)%x119)%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x121 = -1;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = 1U;
	static uint32_t x124 = UINT32_MAX;

    t29 = (((x121>x122)%x123)%x124);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x125 = 4413U;
	static uint16_t x127 = UINT16_MAX;
	static int16_t x128 = 130;
	int32_t t30 = 192771008;

    t30 = (((x125>x126)%x127)%x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x129 = INT64_MAX;
	static int16_t x130 = -4705;
	uint64_t x131 = 2089LLU;
	static int64_t x132 = INT64_MAX;
	volatile uint64_t t31 = 7361957166298410280LLU;

    t31 = (((x129>x130)%x131)%x132);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = 1;
	int64_t x134 = 922502050498387LL;
	volatile int16_t x135 = -21;
	uint64_t x136 = 1292LLU;
	uint64_t t32 = 29LLU;

    t32 = (((x133>x134)%x135)%x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x138 = 600254787740608857LLU;
	int32_t x139 = -1;
	volatile int8_t x140 = -1;
	static volatile int32_t t33 = -161668034;

    t33 = (((x137>x138)%x139)%x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = -54606495713LL;
	uint16_t x142 = 11750U;
	static int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	int32_t t34 = -1179;

    t34 = (((x141>x142)%x143)%x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 38348228819780928LLU;
	uint8_t x146 = 7U;
	int16_t x147 = -1;
	static uint64_t x148 = 488741677817LLU;

    t35 = (((x145>x146)%x147)%x148);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -1LL;
	volatile int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	volatile int64_t t36 = -64373680LL;

    t36 = (((x149>x150)%x151)%x152);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x153 = 2LLU;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 5441U;
	uint64_t x156 = 100522150458946674LLU;
	volatile uint64_t t37 = 33235011268256LLU;

    t37 = (((x153>x154)%x155)%x156);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x157 = INT32_MIN;
	volatile uint32_t x158 = UINT32_MAX;
	int16_t x159 = 920;
	uint64_t x160 = 17293314728749LLU;
	uint64_t t38 = 7LLU;

    t38 = (((x157>x158)%x159)%x160);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 39696U;
	static int32_t x162 = -1;
	static volatile int64_t x163 = -1LL;
	int32_t x164 = INT32_MIN;
	int64_t t39 = -97390176762LL;

    t39 = (((x161>x162)%x163)%x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x169 = -1;
	int64_t x170 = -54016LL;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = UINT16_MAX;

    t40 = (((x169>x170)%x171)%x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -1;
	int16_t x174 = INT16_MIN;
	static int8_t x175 = 48;
	static int16_t x176 = INT16_MIN;
	int32_t t41 = -10;

    t41 = (((x173>x174)%x175)%x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x178 = INT64_MIN;
	int8_t x180 = INT8_MIN;

    t42 = (((x177>x178)%x179)%x180);

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x183 = -93;
	volatile uint64_t x184 = UINT64_MAX;

    t43 = (((x181>x182)%x183)%x184);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x185 = UINT64_MAX;
	int8_t x186 = -25;
	uint32_t x187 = 14U;
	int64_t x188 = INT64_MIN;
	static int64_t t44 = -15LL;

    t44 = (((x185>x186)%x187)%x188);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MIN;
	int32_t x190 = -839498714;
	uint16_t x191 = 1636U;
	int64_t x192 = -1LL;
	int64_t t45 = -3LL;

    t45 = (((x189>x190)%x191)%x192);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x194 = 0;
	uint8_t x195 = UINT8_MAX;
	int32_t t46 = -744803;

    t46 = (((x193>x194)%x195)%x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -1;
	volatile uint16_t x198 = 78U;
	uint32_t x200 = UINT32_MAX;
	volatile uint64_t t47 = 7509540186583LLU;

    t47 = (((x197>x198)%x199)%x200);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x201 = -1;
	int8_t x202 = -1;
	volatile int64_t t48 = 2345514812142LL;

    t48 = (((x201>x202)%x203)%x204);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x205 = -493LL;
	uint32_t x206 = UINT32_MAX;
	static int8_t x207 = INT8_MAX;
	uint32_t x208 = 22U;
	uint32_t t49 = 459386U;

    t49 = (((x205>x206)%x207)%x208);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	volatile uint32_t t50 = 2231452U;

    t50 = (((x209>x210)%x211)%x212);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x213 = INT64_MIN;
	static int16_t x215 = INT16_MIN;
	uint16_t x216 = UINT16_MAX;

    t51 = (((x213>x214)%x215)%x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x219 = 486127771007287LLU;
	volatile uint8_t x220 = UINT8_MAX;
	volatile uint64_t t52 = 3769096541765LLU;

    t52 = (((x217>x218)%x219)%x220);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x222 = 7;
	static volatile int32_t x224 = INT32_MIN;
	volatile int32_t t53 = 217391;

    t53 = (((x221>x222)%x223)%x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = 1U;
	int64_t x227 = INT64_MAX;
	int32_t x228 = 2532;
	static volatile int64_t t54 = 74393978864654LL;

    t54 = (((x225>x226)%x227)%x228);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	int64_t x232 = INT64_MAX;
	int64_t t55 = 5106449252200LL;

    t55 = (((x229>x230)%x231)%x232);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = -12188768;
	volatile int64_t x234 = -73LL;
	static uint8_t x235 = 88U;
	static int32_t x236 = -1;
	volatile int32_t t56 = 54645584;

    t56 = (((x233>x234)%x235)%x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = 35;
	volatile int32_t x238 = -1;
	uint16_t x240 = 95U;
	int32_t t57 = -1677;

    t57 = (((x237>x238)%x239)%x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x242 = 3474U;
	volatile uint8_t x243 = UINT8_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t58 = 13;

    t58 = (((x241>x242)%x243)%x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	int32_t x246 = 1;
	uint16_t x247 = 205U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t59 = -11;

    t59 = (((x245>x246)%x247)%x248);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = -1;
	volatile int32_t x250 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	int64_t t60 = -96LL;

    t60 = (((x249>x250)%x251)%x252);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x253 = -473;
	int32_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	static int64_t x256 = INT64_MAX;
	uint64_t t61 = 51694354133643LLU;

    t61 = (((x253>x254)%x255)%x256);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x258 = -1LL;
	static volatile int64_t x259 = 11682700725LL;
	volatile int64_t t62 = -5816815838LL;

    t62 = (((x257>x258)%x259)%x260);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint16_t x261 = 9U;
	uint32_t x262 = 299694U;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = -334;
	volatile uint32_t t63 = 69U;

    t63 = (((x261>x262)%x263)%x264);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x265 = 12U;
	int16_t x266 = INT16_MAX;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t64 = -658502694;

    t64 = (((x265>x266)%x267)%x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MIN;
	static uint32_t x272 = 1029850836U;
	volatile uint32_t t65 = 76340324U;

    t65 = (((x269>x270)%x271)%x272);

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x273 = 75U;
	uint64_t x274 = 40496467LLU;
	int8_t x276 = 3;
	int32_t t66 = -29;

    t66 = (((x273>x274)%x275)%x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x277 = 62U;
	static int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t67 = 926;

    t67 = (((x277>x278)%x279)%x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = -1;
	static volatile int32_t x282 = -25;
	int64_t x283 = INT64_MIN;
	volatile int16_t x284 = -1;

    t68 = (((x281>x282)%x283)%x284);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int32_t t69 = -198512948;

    t69 = (((x285>x286)%x287)%x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x290 = INT16_MAX;
	uint64_t x292 = 60178LLU;
	uint64_t t70 = 382453015516201LLU;

    t70 = (((x289>x290)%x291)%x292);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = -3246798938494917LL;
	uint64_t x294 = 52269559904LLU;
	volatile int16_t x295 = -6;
	int32_t x296 = -3602713;

    t71 = (((x293>x294)%x295)%x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 79748829U;
	int32_t x299 = INT32_MIN;
	int16_t x300 = -1;

    t72 = (((x297>x298)%x299)%x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = INT64_MAX;
	volatile int16_t x302 = -42;
	uint32_t t73 = 244559U;

    t73 = (((x301>x302)%x303)%x304);

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = INT16_MAX;
	static uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t74 = 9039109072LLU;

    t74 = (((x305>x306)%x307)%x308);

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = INT64_MAX;
	static int64_t x310 = -1LL;
	static uint16_t x311 = UINT16_MAX;
	static int8_t x312 = INT8_MAX;

    t75 = (((x309>x310)%x311)%x312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x313 = INT16_MAX;
	int16_t x315 = 1;
	uint16_t x316 = 23U;

    t76 = (((x313>x314)%x315)%x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x317 = -1;
	int16_t x318 = 2795;
	uint8_t x319 = UINT8_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t77 = -309610382;

    t77 = (((x317>x318)%x319)%x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x321 = 57588550847LL;
	uint8_t x322 = 8U;
	volatile int32_t t78 = 4175458;

    t78 = (((x321>x322)%x323)%x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = 28145U;
	int8_t x326 = INT8_MIN;
	volatile int8_t x327 = -1;
	int32_t x328 = 8276;
	static int32_t t79 = 8889;

    t79 = (((x325>x326)%x327)%x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x329 = UINT16_MAX;
	int8_t x330 = -38;
	volatile uint64_t x332 = 175437219LLU;

    t80 = (((x329>x330)%x331)%x332);

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x333 = INT8_MIN;
	uint32_t x334 = 40471886U;
	static uint32_t x335 = 225021U;
	int8_t x336 = INT8_MAX;
	uint32_t t81 = 692090U;

    t81 = (((x333>x334)%x335)%x336);

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x337 = 65U;
	volatile int64_t x338 = INT64_MIN;
	static uint16_t x339 = 3U;
	int8_t x340 = 3;
	volatile int32_t t82 = -168;

    t82 = (((x337>x338)%x339)%x340);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x341 = 62U;
	int16_t x342 = INT16_MIN;
	volatile int16_t x344 = INT16_MIN;
	volatile uint32_t t83 = 8516114U;

    t83 = (((x341>x342)%x343)%x344);

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = -1;
	volatile int64_t x347 = 9LL;
	int32_t x348 = -20692;
	static int64_t t84 = -263743112LL;

    t84 = (((x345>x346)%x347)%x348);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x349 = 7970U;
	int32_t x350 = INT32_MIN;
	volatile uint32_t x351 = UINT32_MAX;
	int8_t x352 = INT8_MAX;
	volatile uint32_t t85 = 94U;

    t85 = (((x349>x350)%x351)%x352);

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MAX;
	int16_t x355 = -1;
	uint16_t x356 = 4U;
	int32_t t86 = 0;

    t86 = (((x353>x354)%x355)%x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x358 = 1991036189U;
	int16_t x359 = 4729;
	uint32_t x360 = 18799729U;
	uint32_t t87 = 1U;

    t87 = (((x357>x358)%x359)%x360);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x361 = 442160627;
	uint16_t x362 = 509U;
	int64_t x364 = INT64_MIN;
	static int64_t t88 = 526364114LL;

    t88 = (((x361>x362)%x363)%x364);

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x369 = UINT8_MAX;
	uint32_t x370 = UINT32_MAX;
	volatile int8_t x371 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t89 = -75219;

    t89 = (((x369>x370)%x371)%x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x374 = UINT64_MAX;
	uint32_t x375 = 11502U;
	int8_t x376 = INT8_MIN;
	volatile uint32_t t90 = 4902U;

    t90 = (((x373>x374)%x375)%x376);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x377 = 21357542371791LLU;
	volatile uint64_t x378 = 247LLU;
	volatile int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MAX;

    t91 = (((x377>x378)%x379)%x380);

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x381 = 274730014U;
	int32_t x382 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	int64_t t92 = -18882LL;

    t92 = (((x381>x382)%x383)%x384);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x385 = -29;
	int32_t x387 = INT32_MIN;
	int32_t t93 = -7;

    t93 = (((x385>x386)%x387)%x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x389 = 2003012LLU;
	static int64_t x390 = INT64_MIN;
	volatile int64_t t94 = -885774LL;

    t94 = (((x389>x390)%x391)%x392);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x393 = UINT8_MAX;
	static volatile int8_t x394 = 15;
	int16_t x395 = INT16_MIN;
	volatile uint32_t t95 = 25701235U;

    t95 = (((x393>x394)%x395)%x396);

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = INT64_MIN;
	uint64_t x398 = 33293641302707LLU;
	uint32_t x400 = 28630139U;
	uint32_t t96 = 1124646U;

    t96 = (((x397>x398)%x399)%x400);

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = INT16_MIN;
	static volatile int8_t x402 = 8;
	static uint32_t x403 = 223U;
	int8_t x404 = INT8_MIN;
	static uint32_t t97 = 8063U;

    t97 = (((x401>x402)%x403)%x404);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x405 = INT16_MIN;
	volatile int16_t x406 = -13728;
	int64_t x407 = 254400707035LL;
	static int64_t x408 = -192593684029349566LL;
	int64_t t98 = 289812860583LL;

    t98 = (((x405>x406)%x407)%x408);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x409 = INT32_MIN;
	uint8_t x410 = UINT8_MAX;
	int32_t x411 = INT32_MIN;
	static int16_t x412 = INT16_MIN;
	volatile int32_t t99 = -338489682;

    t99 = (((x409>x410)%x411)%x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x413 = 18U;
	int8_t x414 = INT8_MAX;
	volatile int16_t x415 = INT16_MIN;
	static volatile uint16_t x416 = 2263U;

    t100 = (((x413>x414)%x415)%x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MAX;
	static int32_t x424 = INT32_MIN;
	static volatile int64_t t101 = 33994558637329265LL;

    t101 = (((x421>x422)%x423)%x424);

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x426 = -96391549166LL;
	volatile int32_t t102 = 14922844;

    t102 = (((x425>x426)%x427)%x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x429 = 1453U;
	int32_t x430 = -105329370;
	int32_t x431 = INT32_MIN;
	volatile uint8_t x432 = 35U;

    t103 = (((x429>x430)%x431)%x432);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x433 = UINT8_MAX;
	int64_t x435 = INT64_MAX;
	int64_t t104 = -23093428140652799LL;

    t104 = (((x433>x434)%x435)%x436);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x439 = -18405LL;
	int16_t x440 = INT16_MIN;

    t105 = (((x437>x438)%x439)%x440);

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x441 = INT32_MIN;
	int8_t x442 = -1;
	int8_t x443 = 4;
	int32_t x444 = -27697464;
	static int32_t t106 = -112457406;

    t106 = (((x441>x442)%x443)%x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x445 = -1;
	uint16_t x446 = 3U;
	volatile int32_t t107 = -91026645;

    t107 = (((x445>x446)%x447)%x448);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x450 = UINT16_MAX;
	volatile int16_t x451 = INT16_MAX;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t108 = -7;

    t108 = (((x449>x450)%x451)%x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x453 = UINT64_MAX;
	static volatile int8_t x454 = INT8_MIN;
	int16_t x455 = INT16_MIN;
	int8_t x456 = 11;
	int32_t t109 = 717;

    t109 = (((x453>x454)%x455)%x456);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x457 = INT8_MAX;
	int64_t x458 = INT64_MAX;
	static int32_t x459 = -2;
	int32_t x460 = 1;
	static int32_t t110 = -204;

    t110 = (((x457>x458)%x459)%x460);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x462 = UINT64_MAX;
	int32_t x463 = INT32_MAX;
	volatile int16_t x464 = INT16_MIN;
	int32_t t111 = -85;

    t111 = (((x461>x462)%x463)%x464);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x465 = INT32_MIN;
	volatile int64_t x466 = -1LL;
	static int32_t x467 = INT32_MIN;
	volatile int64_t x468 = -1LL;

    t112 = (((x465>x466)%x467)%x468);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MAX;
	int8_t x471 = INT8_MIN;
	static int64_t x472 = INT64_MAX;
	volatile int64_t t113 = 193LL;

    t113 = (((x469>x470)%x471)%x472);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x474 = UINT16_MAX;
	int64_t x475 = -1LL;
	int32_t x476 = -277746087;
	volatile int64_t t114 = 15398449876833LL;

    t114 = (((x473>x474)%x475)%x476);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x478 = 438256U;
	static int8_t x479 = INT8_MAX;

    t115 = (((x477>x478)%x479)%x480);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x481 = INT32_MAX;
	uint32_t x483 = 73661U;
	uint64_t x484 = 1923LLU;
	uint64_t t116 = 502821656558LLU;

    t116 = (((x481>x482)%x483)%x484);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x485 = 27U;
	uint16_t x486 = 196U;
	int64_t x487 = -1LL;
	uint16_t x488 = 18U;
	volatile int64_t t117 = 269100945373218LL;

    t117 = (((x485>x486)%x487)%x488);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x489 = INT8_MAX;
	int64_t x491 = INT64_MAX;
	int64_t t118 = 35241554LL;

    t118 = (((x489>x490)%x491)%x492);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x493 = 16666U;
	uint16_t x496 = 2817U;
	int64_t t119 = -61306121LL;

    t119 = (((x493>x494)%x495)%x496);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x498 = INT64_MAX;
	uint16_t x499 = 11U;
	volatile int32_t x500 = INT32_MIN;
	volatile int32_t t120 = -14;

    t120 = (((x497>x498)%x499)%x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = INT16_MAX;
	int64_t x503 = INT64_MIN;
	uint32_t x504 = UINT32_MAX;
	int64_t t121 = 9935811433872215LL;

    t121 = (((x501>x502)%x503)%x504);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x505 = 2;
	static int64_t x506 = INT64_MIN;

    t122 = (((x505>x506)%x507)%x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x509 = INT16_MAX;
	static volatile int16_t x510 = INT16_MIN;
	uint64_t x512 = 79238267LLU;
	volatile uint64_t t123 = 715603786LLU;

    t123 = (((x509>x510)%x511)%x512);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x513 = -1;
	uint32_t x515 = UINT32_MAX;
	volatile int64_t x516 = -1LL;
	volatile int64_t t124 = 609710696LL;

    t124 = (((x513>x514)%x515)%x516);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x517 = 42843568U;
	int8_t x520 = INT8_MIN;

    t125 = (((x517>x518)%x519)%x520);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x521 = INT8_MIN;
	int64_t x524 = -2098838507566496LL;
	volatile uint64_t t126 = 56344503631222363LLU;

    t126 = (((x521>x522)%x523)%x524);

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = -1;
	static int8_t x526 = INT8_MIN;
	uint16_t x527 = UINT16_MAX;
	int32_t t127 = 1367235;

    t127 = (((x525>x526)%x527)%x528);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x529 = 465950;
	int16_t x530 = -1;
	int16_t x531 = -115;
	static uint64_t x532 = UINT64_MAX;

    t128 = (((x529>x530)%x531)%x532);

    if (t128 != 1LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x533 = INT16_MIN;
	int16_t x534 = -1426;
	int64_t x536 = INT64_MAX;
	int64_t t129 = -26349361827735LL;

    t129 = (((x533>x534)%x535)%x536);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = INT8_MAX;
	int32_t x539 = -1728;
	int64_t x540 = 1137800570248033543LL;

    t130 = (((x537>x538)%x539)%x540);

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x541 = 35004945310879LLU;
	volatile int64_t x544 = INT64_MIN;
	int64_t t131 = -18053LL;

    t131 = (((x541>x542)%x543)%x544);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x545 = 2814LL;
	volatile uint16_t x546 = 29106U;
	int16_t x547 = -11;
	volatile uint64_t x548 = 1LLU;
	uint64_t t132 = 37458225770LLU;

    t132 = (((x545>x546)%x547)%x548);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x553 = INT32_MAX;
	uint8_t x555 = 92U;
	volatile uint8_t x556 = 50U;

    t133 = (((x553>x554)%x555)%x556);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x557 = INT32_MIN;
	volatile int8_t x558 = 1;
	int32_t x559 = -4599697;
	int8_t x560 = INT8_MIN;
	int32_t t134 = -347;

    t134 = (((x557>x558)%x559)%x560);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x562 = -1;
	static int8_t x564 = INT8_MAX;
	volatile int64_t t135 = 3440609LL;

    t135 = (((x561>x562)%x563)%x564);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x565 = -1;
	uint8_t x566 = 2U;
	volatile int64_t x567 = INT64_MIN;
	static int8_t x568 = 1;
	int64_t t136 = -10LL;

    t136 = (((x565>x566)%x567)%x568);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x570 = -1;
	static volatile int32_t x571 = -1;
	static volatile uint32_t x572 = 91496299U;

    t137 = (((x569>x570)%x571)%x572);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	uint64_t x574 = UINT64_MAX;
	uint8_t x576 = 80U;
	volatile int32_t t138 = -1;

    t138 = (((x573>x574)%x575)%x576);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x581 = -81770694;
	int32_t x582 = INT32_MAX;
	int16_t x584 = 57;

    t139 = (((x581>x582)%x583)%x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x585 = 30;
	volatile int32_t x586 = INT32_MIN;
	int64_t x587 = -1LL;
	static int32_t x588 = -14;
	int64_t t140 = -31LL;

    t140 = (((x585>x586)%x587)%x588);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x589 = 0U;
	int32_t x591 = -1;
	static volatile uint8_t x592 = 2U;
	int32_t t141 = 177;

    t141 = (((x589>x590)%x591)%x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x593 = INT64_MAX;
	volatile int8_t x595 = 29;
	int8_t x596 = INT8_MIN;
	int32_t t142 = 1;

    t142 = (((x593>x594)%x595)%x596);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x597 = -7285933LL;
	int16_t x598 = INT16_MIN;
	int64_t x599 = 422945063LL;

    t143 = (((x597>x598)%x599)%x600);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x605 = 0U;
	int64_t x606 = INT64_MAX;
	int16_t x607 = -1;
	static uint32_t x608 = 3919101U;
	volatile uint32_t t144 = 4971U;

    t144 = (((x605>x606)%x607)%x608);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x610 = 2U;
	uint16_t x611 = 20098U;
	int16_t x612 = -1;
	volatile int32_t t145 = 51;

    t145 = (((x609>x610)%x611)%x612);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x613 = -1LL;
	static int32_t t146 = -52;

    t146 = (((x613>x614)%x615)%x616);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x618 = 127U;
	volatile int8_t x620 = INT8_MIN;
	volatile int32_t t147 = 288;

    t147 = (((x617>x618)%x619)%x620);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x621 = -1;
	int16_t x622 = INT16_MIN;
	static volatile int16_t x624 = -328;

    t148 = (((x621>x622)%x623)%x624);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x625 = -1693401;
	int16_t x626 = INT16_MAX;
	int64_t x627 = INT64_MIN;
	volatile int16_t x628 = INT16_MIN;
	static volatile int64_t t149 = 124473253449363LL;

    t149 = (((x625>x626)%x627)%x628);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x629 = 12776;
	int16_t x630 = INT16_MIN;
	uint32_t x631 = UINT32_MAX;
	int8_t x632 = -3;

    t150 = (((x629>x630)%x631)%x632);

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x633 = -1LL;
	int16_t x634 = -1;
	int8_t x635 = -1;
	uint32_t x636 = 1197068336U;
	volatile uint32_t t151 = 5679U;

    t151 = (((x633>x634)%x635)%x636);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x637 = -1;
	int16_t x638 = INT16_MIN;
	int64_t x639 = -1LL;
	int8_t x640 = INT8_MIN;
	int64_t t152 = -251LL;

    t152 = (((x637>x638)%x639)%x640);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x641 = 3891U;
	uint8_t x642 = UINT8_MAX;
	uint8_t x643 = 6U;
	static volatile int32_t t153 = -2;

    t153 = (((x641>x642)%x643)%x644);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x645 = INT16_MIN;
	int32_t x646 = INT32_MIN;
	volatile int32_t t154 = 3876855;

    t154 = (((x645>x646)%x647)%x648);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x649 = INT64_MIN;
	static int16_t x650 = INT16_MIN;
	volatile int32_t t155 = 3;

    t155 = (((x649>x650)%x651)%x652);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x653 = 1160647LLU;
	static volatile int16_t x654 = INT16_MIN;
	int16_t x656 = INT16_MIN;
	uint64_t t156 = 80LLU;

    t156 = (((x653>x654)%x655)%x656);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x657 = 108356546426LL;
	uint8_t x658 = 1U;
	static int16_t x659 = -5;
	static int64_t x660 = INT64_MAX;
	volatile int64_t t157 = 704771467482LL;

    t157 = (((x657>x658)%x659)%x660);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x661 = 14U;
	volatile uint16_t x662 = 8939U;
	int16_t x663 = INT16_MIN;

    t158 = (((x661>x662)%x663)%x664);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x665 = 81U;
	static int8_t x666 = 14;
	uint64_t t159 = 1786474415636LLU;

    t159 = (((x665>x666)%x667)%x668);

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x673 = INT32_MIN;
	uint64_t x674 = 155615LLU;
	volatile int64_t x675 = 231371143916289780LL;
	uint64_t x676 = 25440568902LLU;
	uint64_t t160 = 5LLU;

    t160 = (((x673>x674)%x675)%x676);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x677 = 1LL;
	int64_t x678 = -1LL;
	uint32_t x679 = 1274157930U;
	int8_t x680 = INT8_MIN;
	static uint32_t t161 = 17052400U;

    t161 = (((x677>x678)%x679)%x680);

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x681 = INT32_MAX;
	static int16_t x682 = -1584;
	static int8_t x684 = INT8_MIN;

    t162 = (((x681>x682)%x683)%x684);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x685 = INT16_MAX;
	static int32_t x686 = -24336;
	int16_t x687 = -1;
	uint64_t x688 = UINT64_MAX;
	uint64_t t163 = 11073826248LLU;

    t163 = (((x685>x686)%x687)%x688);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint8_t x689 = 5U;
	int8_t x690 = -1;
	int64_t x691 = INT64_MIN;
	int16_t x692 = -1;
	int64_t t164 = -13604440046087592LL;

    t164 = (((x689>x690)%x691)%x692);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x693 = -99329093;
	uint16_t x694 = 878U;
	int16_t x696 = INT16_MAX;
	uint32_t t165 = 78627U;

    t165 = (((x693>x694)%x695)%x696);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x697 = 8179839489435LLU;
	volatile int64_t x698 = INT64_MAX;
	int16_t x699 = -1;
	static int32_t t166 = 95955;

    t166 = (((x697>x698)%x699)%x700);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x701 = INT32_MAX;
	int8_t x702 = -1;
	int32_t x703 = INT32_MIN;
	int8_t x704 = INT8_MIN;
	volatile int32_t t167 = 913;

    t167 = (((x701>x702)%x703)%x704);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x705 = INT64_MAX;
	volatile int32_t x706 = 42613;
	int32_t x707 = -660886687;
	int16_t x708 = INT16_MIN;
	int32_t t168 = -29544;

    t168 = (((x705>x706)%x707)%x708);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x709 = -15;
	static int8_t x710 = 1;
	int64_t x711 = -1LL;
	int32_t x712 = INT32_MAX;

    t169 = (((x709>x710)%x711)%x712);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x714 = 57260801026LL;
	static uint64_t x715 = 7585584281LLU;
	static uint32_t x716 = 1027790U;

    t170 = (((x713>x714)%x715)%x716);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x718 = INT32_MAX;
	static uint16_t x719 = 360U;
	uint64_t x720 = 2908599199569LLU;

    t171 = (((x717>x718)%x719)%x720);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x721 = -1;
	int32_t x722 = 173701;
	uint8_t x723 = 1U;
	static int64_t x724 = -974417545039LL;
	int64_t t172 = -50740111082549LL;

    t172 = (((x721>x722)%x723)%x724);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x725 = 27760U;
	int16_t x726 = -182;
	int16_t x727 = INT16_MIN;
	static uint32_t t173 = 1767U;

    t173 = (((x725>x726)%x727)%x728);

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x729 = -1LL;
	volatile int16_t x730 = -1;
	int32_t x731 = 72832;
	int8_t x732 = INT8_MIN;
	int32_t t174 = -20;

    t174 = (((x729>x730)%x731)%x732);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x733 = -1;
	int8_t x734 = INT8_MAX;
	int8_t x735 = 1;
	static volatile int16_t x736 = 5;

    t175 = (((x733>x734)%x735)%x736);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x737 = -1LL;
	uint8_t x738 = 51U;
	volatile int64_t x739 = 12172508LL;
	int64_t x740 = 5025202912LL;
	volatile int64_t t176 = 8508732333393166LL;

    t176 = (((x737>x738)%x739)%x740);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x741 = INT8_MIN;
	int32_t x742 = INT32_MIN;
	uint64_t x743 = UINT64_MAX;
	static int32_t x744 = -1;
	volatile uint64_t t177 = 0LLU;

    t177 = (((x741>x742)%x743)%x744);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x746 = 7;
	uint8_t x748 = 59U;
	int64_t t178 = 592280587116934LL;

    t178 = (((x745>x746)%x747)%x748);

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x750 = INT32_MIN;
	volatile int64_t x751 = INT64_MAX;
	int32_t x752 = 86322923;

    t179 = (((x749>x750)%x751)%x752);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x754 = INT8_MIN;
	static uint32_t x755 = 382U;
	uint32_t x756 = UINT32_MAX;
	uint32_t t180 = 188725413U;

    t180 = (((x753>x754)%x755)%x756);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x757 = UINT16_MAX;

    t181 = (((x757>x758)%x759)%x760);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x763 = 37U;
	static volatile uint16_t x764 = UINT16_MAX;
	static int32_t t182 = -509197;

    t182 = (((x761>x762)%x763)%x764);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x766 = INT8_MIN;
	int32_t x767 = INT32_MIN;
	int64_t x768 = INT64_MIN;
	volatile int64_t t183 = 2640248517309149LL;

    t183 = (((x765>x766)%x767)%x768);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x769 = -1;
	int8_t x770 = -31;
	volatile uint8_t x772 = UINT8_MAX;
	int32_t t184 = -1;

    t184 = (((x769>x770)%x771)%x772);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x773 = -6923;
	int8_t x774 = 7;
	uint32_t x775 = UINT32_MAX;
	static uint32_t x776 = 114U;
	volatile uint32_t t185 = 4990U;

    t185 = (((x773>x774)%x775)%x776);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x777 = UINT32_MAX;
	static int32_t x778 = 16013;
	int32_t x779 = INT32_MAX;
	uint32_t x780 = 110480169U;

    t186 = (((x777>x778)%x779)%x780);

    if (t186 != 1U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x781 = -14;
	volatile int64_t t187 = 1249685LL;

    t187 = (((x781>x782)%x783)%x784);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x785 = 1U;
	int32_t x787 = -1;
	volatile int64_t x788 = -232LL;
	int64_t t188 = -10308120845LL;

    t188 = (((x785>x786)%x787)%x788);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	uint16_t x791 = UINT16_MAX;
	static int8_t x792 = 3;

    t189 = (((x789>x790)%x791)%x792);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x793 = -1LL;
	volatile int64_t x794 = 17077623803681LL;
	uint8_t x795 = 29U;
	static volatile int64_t x796 = 254923LL;
	static int64_t t190 = 2LL;

    t190 = (((x793>x794)%x795)%x796);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x797 = UINT16_MAX;
	int32_t x798 = -203;
	int32_t x800 = -333329;
	volatile int32_t t191 = -6;

    t191 = (((x797>x798)%x799)%x800);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x801 = 10640U;
	int64_t x802 = INT64_MAX;
	volatile uint32_t x803 = UINT32_MAX;
	uint8_t x804 = UINT8_MAX;
	volatile uint32_t t192 = 28405U;

    t192 = (((x801>x802)%x803)%x804);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x805 = 41U;

    t193 = (((x805>x806)%x807)%x808);

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x809 = -1;
	uint32_t x810 = 8U;

    t194 = (((x809>x810)%x811)%x812);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x814 = INT32_MAX;
	uint16_t x815 = UINT16_MAX;
	static uint16_t x816 = 222U;
	static volatile int32_t t195 = -25594;

    t195 = (((x813>x814)%x815)%x816);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x817 = INT64_MIN;
	uint16_t x818 = 4527U;
	volatile int8_t x819 = INT8_MIN;
	int32_t t196 = 103;

    t196 = (((x817>x818)%x819)%x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x821 = -1;
	int8_t x822 = 10;
	static int8_t x823 = INT8_MIN;
	static volatile int16_t x824 = INT16_MAX;
	int32_t t197 = -2002391;

    t197 = (((x821>x822)%x823)%x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x829 = 0U;
	static int8_t x830 = INT8_MIN;
	int32_t x832 = -1;
	volatile int32_t t198 = 43177441;

    t198 = (((x829>x830)%x831)%x832);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x833 = INT64_MIN;
	static uint8_t x834 = 13U;
	int64_t x835 = INT64_MIN;
	uint32_t x836 = UINT32_MAX;
	int64_t t199 = -98757922328527LL;

    t199 = (((x833>x834)%x835)%x836);

    if (t199 != 0LL) { NG(); } else { ; }
	
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
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

