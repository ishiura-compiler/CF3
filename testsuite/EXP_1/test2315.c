
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

volatile uint8_t x3 = 2U;
volatile int32_t x7 = -1;
int8_t x20 = -12;
int8_t x25 = INT8_MAX;
uint32_t x26 = 6U;
volatile uint32_t x28 = 6U;
uint16_t x33 = UINT16_MAX;
int32_t t10 = -973807;
int16_t x48 = -1;
int8_t x49 = INT8_MIN;
static int16_t x57 = INT16_MAX;
static int32_t x58 = INT32_MAX;
static int32_t t14 = -431200;
int16_t x63 = INT16_MIN;
uint16_t x71 = 1875U;
volatile int32_t x75 = INT32_MIN;
int16_t x79 = -2025;
int8_t x96 = -9;
static int32_t x97 = -1;
uint8_t x101 = 15U;
uint32_t t26 = 195685263U;
static volatile int8_t x115 = INT8_MIN;
int8_t x119 = 11;
static int16_t x123 = INT16_MAX;
int64_t x125 = INT64_MAX;
int64_t t31 = -219701LL;
volatile uint64_t t35 = 28LLU;
uint64_t x146 = 165356237LLU;
uint32_t x153 = 163U;
static volatile uint64_t t38 = 1LLU;
uint32_t x159 = 2125683631U;
uint64_t x177 = 4263938489002LLU;
int8_t x180 = 1;
int8_t x192 = INT8_MAX;
int16_t x199 = -246;
static int64_t x202 = -1LL;
int16_t x204 = 1;
int8_t x208 = 5;
volatile int32_t x214 = INT32_MAX;
int16_t x215 = -151;
int16_t x217 = -1;
int64_t x219 = -1LL;
uint8_t x220 = 1U;
int32_t x224 = INT32_MIN;
uint64_t x225 = 882861LLU;
uint32_t x229 = 1352351U;
static int32_t x231 = 5785;
static volatile int64_t x234 = -1LL;
int16_t x235 = INT16_MIN;
int16_t x237 = INT16_MIN;
uint8_t x238 = 2U;
volatile int64_t x240 = INT64_MAX;
int16_t x241 = INT16_MAX;
uint8_t x246 = 3U;
int32_t x252 = INT32_MIN;
uint64_t x253 = UINT64_MAX;
uint16_t x254 = 12U;
int16_t x256 = INT16_MIN;
uint8_t x260 = 66U;
volatile int32_t t63 = 699;
static volatile int64_t t65 = -1275LL;
uint8_t x270 = 8U;
int32_t x271 = -1;
volatile uint8_t x277 = 0U;
int64_t x279 = -1LL;
uint8_t x280 = 14U;
int32_t x286 = INT32_MIN;
volatile uint64_t t71 = 313585400436196LLU;
int32_t x293 = INT32_MAX;
int64_t x301 = -22410595256748LL;
static int64_t t74 = 954518853298LL;
int32_t x311 = INT32_MIN;
uint64_t x314 = UINT64_MAX;
uint16_t x316 = 499U;
uint64_t x317 = UINT64_MAX;
volatile uint32_t x321 = 161962U;
static volatile int64_t x324 = INT64_MIN;
volatile int16_t x326 = -1;
static uint32_t x327 = 9536851U;
int8_t x331 = INT8_MIN;
volatile int64_t t81 = -181536160736054LL;
int32_t x335 = INT32_MAX;
uint32_t t83 = 17262U;
static int8_t x342 = -1;
uint64_t t84 = 1305210647LLU;
static volatile uint64_t t86 = 7403312848LLU;
volatile int64_t t87 = 60189LL;
uint64_t x361 = UINT64_MAX;
int16_t x373 = 96;
int64_t x380 = INT64_MAX;
int64_t t93 = 59287LL;
static int16_t x381 = -1;
volatile uint8_t x384 = 1U;
uint32_t x385 = UINT32_MAX;
volatile uint16_t x388 = UINT16_MAX;
static int16_t x391 = -31;
int32_t x392 = 425793156;
int32_t t97 = -1;
volatile int8_t x399 = 7;
static uint16_t x403 = 335U;
int32_t x404 = INT32_MIN;
int64_t x406 = INT64_MIN;
int16_t x408 = INT16_MIN;
volatile uint32_t x410 = UINT32_MAX;
uint32_t t101 = 39023U;
static uint8_t x413 = 0U;
static uint16_t x414 = 17688U;
int64_t t102 = -1649726528851422LL;
int32_t x421 = INT32_MAX;
static volatile uint64_t x425 = 1932393819LLU;
uint32_t x429 = 121236400U;
static int64_t x432 = -1LL;
int64_t x435 = INT64_MIN;
int64_t x445 = INT64_MIN;
volatile int64_t t110 = -69540459LL;
uint16_t x452 = 9U;
int64_t x463 = 1747111LL;
static volatile int64_t t114 = -67407390LL;
int32_t x472 = INT32_MIN;
static int16_t x473 = INT16_MAX;
static volatile int32_t t117 = 4;
int32_t x479 = INT32_MAX;
int8_t x480 = INT8_MAX;
static int64_t x481 = 690426169405LL;
int64_t x483 = -1LL;
static int16_t x487 = INT16_MIN;
uint64_t x489 = UINT64_MAX;
uint8_t x490 = UINT8_MAX;
int64_t x499 = INT64_MAX;
static volatile int64_t x500 = -1LL;
static uint32_t x505 = 912U;
int64_t x508 = 1LL;
uint16_t x509 = 35U;
uint16_t x526 = 120U;
uint64_t x528 = UINT64_MAX;
uint8_t x537 = 7U;
volatile uint64_t t133 = 10856167966058LLU;
static int8_t x552 = -1;
int64_t x554 = 2880639910557LL;
uint8_t x555 = UINT8_MAX;
uint64_t x556 = 3705716LLU;
uint64_t t135 = 9063426156461LLU;
uint64_t x559 = UINT64_MAX;
volatile int32_t x560 = INT32_MIN;
int8_t x562 = INT8_MIN;
volatile uint64_t t137 = 33LLU;
uint64_t x575 = 6296500893LLU;
int32_t x576 = INT32_MAX;
static uint64_t x590 = 101708105301254LLU;
int16_t x598 = INT16_MIN;
int32_t x603 = -1;
int32_t x620 = 19;
int16_t x627 = INT16_MIN;
int64_t x631 = INT64_MIN;
volatile int32_t x641 = INT32_MIN;
volatile int32_t x646 = -39438;
uint8_t x649 = UINT8_MAX;
int32_t x658 = -263845317;
uint16_t x660 = UINT16_MAX;
static uint64_t t161 = 1569139664LLU;
uint64_t x666 = 62479LLU;
volatile int64_t x667 = -1LL;
uint64_t x670 = UINT64_MAX;
int64_t x671 = 660454035767488LL;
int8_t x672 = INT8_MIN;
int64_t x680 = INT64_MIN;
uint32_t x683 = 18929438U;
static int32_t x687 = 146;
int16_t x688 = -2;
int64_t x692 = -1873765303340LL;
int16_t x694 = INT16_MIN;
int32_t x696 = -7951147;
volatile int32_t t171 = 643;
int32_t x703 = 1984859;
int64_t x709 = INT64_MIN;
uint16_t x713 = UINT16_MAX;
volatile int16_t x716 = INT16_MAX;
uint64_t x717 = 55938452813962015LLU;
static uint32_t x723 = UINT32_MAX;
int8_t x726 = INT8_MIN;
static int32_t x729 = -622735;
int32_t x730 = INT32_MIN;
int16_t x732 = INT16_MAX;
volatile uint64_t x733 = UINT64_MAX;
static volatile int64_t t181 = -9367748106LL;
uint32_t x748 = UINT32_MAX;
static int64_t x749 = -1LL;
volatile int64_t x757 = INT64_MIN;
int64_t x758 = INT64_MAX;
int64_t t187 = 15529LL;
volatile uint8_t x772 = 4U;
uint64_t x781 = UINT64_MAX;
volatile uint64_t x785 = 14242LLU;
int8_t x787 = INT8_MIN;
int64_t x801 = INT64_MAX;
volatile uint64_t t196 = 14201334525494LLU;
static int16_t x807 = -1;
static int16_t x810 = INT16_MIN;
uint8_t x816 = 86U;


void f0(void) {
    	static uint16_t x1 = 9697U;
	int64_t x2 = -1LL;
	static volatile int64_t x4 = 44685LL;
	volatile int64_t t0 = 1450752LL;

    t0 = (((x1&x2)&x3)%x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int16_t x6 = 64;
	int64_t x8 = -1LL;
	int64_t t1 = 497535773062LL;

    t1 = (((x5&x6)&x7)%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 2U;
	static int32_t x10 = 17;
	volatile int8_t x11 = -11;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -111416019;

    t2 = (((x9&x10)&x11)%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 5U;
	int32_t x14 = -15806;
	uint16_t x15 = 11735U;
	int64_t x16 = -50738LL;
	int64_t t3 = -76571684711190725LL;

    t3 = (((x13&x14)&x15)%x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 2380225215LLU;
	volatile int8_t x18 = 2;
	uint8_t x19 = UINT8_MAX;
	static volatile uint64_t t4 = 227347817705527LLU;

    t4 = (((x17&x18)&x19)%x20);

    if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	uint8_t x22 = UINT8_MAX;
	int32_t x23 = -1;
	static volatile int64_t x24 = INT64_MIN;
	static int64_t t5 = 185143581933810LL;

    t5 = (((x21&x22)&x23)%x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = INT8_MIN;
	volatile uint32_t t6 = 19U;

    t6 = (((x25&x26)&x27)%x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MAX;
	uint32_t x31 = 287605U;
	uint16_t x32 = 7509U;
	volatile uint64_t t7 = 360675415383LLU;

    t7 = (((x29&x30)&x31)%x32);

    if (t7 != 117LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = UINT64_MAX;
	uint8_t x35 = 4U;
	int16_t x36 = 1;
	uint64_t t8 = 5712501966421LLU;

    t8 = (((x33&x34)&x35)%x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	static volatile int32_t x39 = INT32_MIN;
	static int8_t x40 = INT8_MIN;
	uint32_t t9 = 20U;

    t9 = (((x37&x38)&x39)%x40);

    if (t9 != 2147483648U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -31;
	int16_t x42 = -1;
	static int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MAX;

    t10 = (((x41&x42)&x43)%x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	volatile int32_t x46 = INT32_MIN;
	static int8_t x47 = INT8_MIN;
	volatile int64_t t11 = -1064030892526902LL;

    t11 = (((x45&x46)&x47)%x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = 155792742LL;
	int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MAX;
	int64_t t12 = -202135LL;

    t12 = (((x49&x50)&x51)%x52);

    if (t12 != 18322LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = INT8_MIN;
	volatile int8_t x56 = -1;
	uint32_t t13 = 2925197U;

    t13 = (((x53&x54)&x55)%x56);

    if (t13 != 2147483520U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;

    t14 = (((x57&x58)&x59)%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 4680668991LLU;
	uint8_t x62 = 7U;
	static int64_t x64 = -1LL;
	uint64_t t15 = 489491304LLU;

    t15 = (((x61&x62)&x63)%x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = -1;
	int8_t x68 = INT8_MAX;
	int32_t t16 = -1;

    t16 = (((x65&x66)&x67)%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	int32_t x70 = INT32_MIN;
	uint8_t x72 = 73U;
	volatile int32_t t17 = -7319967;

    t17 = (((x69&x70)&x71)%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	static uint8_t x74 = 1U;
	static int32_t x76 = 66;
	uint32_t t18 = 1471778901U;

    t18 = (((x73&x74)&x75)%x76);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	int32_t x80 = 3;
	static volatile int32_t t19 = -233784800;

    t19 = (((x77&x78)&x79)%x80);

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MAX;
	int8_t x82 = -1;
	int16_t x83 = -1;
	volatile int8_t x84 = -1;
	volatile int32_t t20 = -1;

    t20 = (((x81&x82)&x83)%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	int32_t x86 = -1;
	uint32_t x87 = 1023535266U;
	int32_t x88 = INT32_MIN;
	volatile uint32_t t21 = 328U;

    t21 = (((x85&x86)&x87)%x88);

    if (t21 != 1023535266U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 1635638LL;
	int16_t x90 = INT16_MIN;
	int16_t x91 = -1;
	uint16_t x92 = 112U;
	int64_t t22 = -2909972LL;

    t22 = (((x89&x90)&x91)%x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 5U;
	int32_t x94 = -1;
	static uint64_t x95 = UINT64_MAX;
	static volatile uint64_t t23 = 107016270404280218LLU;

    t23 = (((x93&x94)&x95)%x96);

    if (t23 != 5LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = -3079631;
	volatile int8_t x99 = INT8_MIN;
	volatile uint64_t x100 = 25887207290912LLU;
	uint64_t t24 = 115418715477LLU;

    t24 = (((x97&x98)&x99)%x100);

    if (t24 != 12015141108064LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = INT16_MAX;
	int64_t x103 = 117907856453440LL;
	volatile int64_t x104 = INT64_MIN;
	int64_t t25 = 31440093782LL;

    t25 = (((x101&x102)&x103)%x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 9040605U;
	volatile int8_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	volatile uint16_t x108 = UINT16_MAX;

    t26 = (((x105&x106)&x107)%x108);

    if (t26 != 221U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	static volatile int64_t x110 = INT64_MAX;
	static int8_t x111 = -24;
	static uint8_t x112 = 1U;
	volatile int64_t t27 = -611384396944626LL;

    t27 = (((x109&x110)&x111)%x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MAX;
	uint16_t x116 = UINT16_MAX;
	volatile uint32_t t28 = 5055U;

    t28 = (((x113&x114)&x115)%x116);

    if (t28 != 32640U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = 984U;
	volatile uint16_t x118 = UINT16_MAX;
	static uint8_t x120 = 8U;
	uint32_t t29 = 2U;

    t29 = (((x117&x118)&x119)%x120);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int64_t x122 = -6280294LL;
	uint16_t x124 = 1U;
	int64_t t30 = 1LL;

    t30 = (((x121&x122)&x123)%x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MIN;
	volatile int16_t x127 = 41;
	int64_t x128 = INT64_MAX;

    t31 = (((x125&x126)&x127)%x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = -1;
	int64_t x130 = -1LL;
	uint64_t x131 = 4530225384272299LLU;
	volatile int8_t x132 = -1;
	volatile uint64_t t32 = 1743477500744141LLU;

    t32 = (((x129&x130)&x131)%x132);

    if (t32 != 4530225384272299LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = INT32_MIN;
	static int32_t x134 = -371555685;
	int32_t x135 = INT32_MAX;
	uint16_t x136 = 3853U;
	int32_t t33 = -1;

    t33 = (((x133&x134)&x135)%x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 2;
	int16_t x138 = 2708;
	int64_t x139 = -7215865LL;
	int8_t x140 = INT8_MIN;
	int64_t t34 = -3LL;

    t34 = (((x137&x138)&x139)%x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 3407U;
	volatile int64_t x142 = -1LL;
	uint64_t x143 = 2773496974108638LLU;
	uint64_t x144 = 24LLU;

    t35 = (((x141&x142)&x143)%x144);

    if (t35 != 14LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = INT8_MIN;
	int32_t x147 = INT32_MAX;
	int32_t x148 = INT32_MIN;
	uint64_t t36 = 812452041469585LLU;

    t36 = (((x145&x146)&x147)%x148);

    if (t36 != 165356160LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = 8466031885439LL;
	static int64_t x150 = -3049LL;
	uint8_t x151 = 11U;
	int32_t x152 = INT32_MIN;
	volatile int64_t t37 = -334711641LL;

    t37 = (((x149&x150)&x151)%x152);

    if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x154 = 35051904195054766LLU;
	int16_t x155 = 26;
	int32_t x156 = -1;

    t38 = (((x153&x154)&x155)%x156);

    if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = INT16_MIN;
	static int32_t x158 = 7;
	int32_t x160 = INT32_MIN;
	uint32_t t39 = 295020U;

    t39 = (((x157&x158)&x159)%x160);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MAX;
	int32_t x163 = 14669;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = -751;

    t40 = (((x161&x162)&x163)%x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	volatile int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t41 = 643016688607LL;

    t41 = (((x169&x170)&x171)%x172);

    if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = 223845895387560LL;
	uint64_t x174 = 61LLU;
	static volatile uint64_t x175 = 1600783782035LLU;
	volatile uint16_t x176 = 176U;
	uint64_t t42 = 1759832235720570LLU;

    t42 = (((x173&x174)&x175)%x176);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x178 = -3;
	static int8_t x179 = -1;
	volatile uint64_t t43 = 2455934052355089715LLU;

    t43 = (((x177&x178)&x179)%x180);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = 35LL;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = UINT32_MAX;
	uint64_t x184 = 43455813471207856LLU;
	volatile uint64_t t44 = 40964284245LLU;

    t44 = (((x181&x182)&x183)%x184);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x185 = 540400311U;
	static int8_t x186 = INT8_MIN;
	uint16_t x187 = 4481U;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t45 = 127487U;

    t45 = (((x185&x186)&x187)%x188);

    if (t45 != 4224U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -76;
	volatile uint64_t x190 = 169961523102738697LLU;
	static volatile uint32_t x191 = 15543687U;
	volatile uint64_t t46 = 264965362LLU;

    t46 = (((x189&x190)&x191)%x192);

    if (t46 != 102LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = INT16_MIN;
	uint8_t x194 = 38U;
	int16_t x195 = 129;
	uint8_t x196 = UINT8_MAX;
	int32_t t47 = 1;

    t47 = (((x193&x194)&x195)%x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = INT64_MAX;
	int64_t x198 = -1LL;
	int64_t x200 = 39200098382LL;
	int64_t t48 = -17LL;

    t48 = (((x197&x198)&x199)%x200);

    if (t48 != 18202005978LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = 0U;
	uint8_t x203 = UINT8_MAX;
	static volatile int64_t t49 = -6646602190572719LL;

    t49 = (((x201&x202)&x203)%x204);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = INT16_MAX;
	int16_t x206 = INT16_MIN;
	volatile int32_t x207 = INT32_MAX;
	volatile int32_t t50 = -437622;

    t50 = (((x205&x206)&x207)%x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x209 = -198;
	int16_t x210 = INT16_MIN;
	int16_t x211 = -210;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t51 = -46220;

    t51 = (((x209&x210)&x211)%x212);

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x213 = 75621U;
	uint8_t x216 = UINT8_MAX;
	volatile uint32_t t52 = 4241U;

    t52 = (((x213&x214)&x215)%x216);

    if (t52 != 137U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x218 = INT16_MIN;
	int64_t t53 = -1264708213404069LL;

    t53 = (((x217&x218)&x219)%x220);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MIN;
	uint64_t x222 = 52LLU;
	uint32_t x223 = 17125650U;
	uint64_t t54 = 173475LLU;

    t54 = (((x221&x222)&x223)%x224);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x226 = UINT64_MAX;
	int16_t x227 = -1;
	int16_t x228 = -432;
	uint64_t t55 = 26LLU;

    t55 = (((x225&x226)&x227)%x228);

    if (t55 != 882861LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x230 = INT64_MIN;
	uint16_t x232 = UINT16_MAX;
	static int64_t t56 = -914324102LL;

    t56 = (((x229&x230)&x231)%x232);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = UINT64_MAX;
	int8_t x236 = INT8_MIN;
	uint64_t t57 = 4590742LLU;

    t57 = (((x233&x234)&x235)%x236);

    if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x239 = 7426LL;
	int64_t t58 = 400060LL;

    t58 = (((x237&x238)&x239)%x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x242 = INT16_MIN;
	static volatile uint8_t x243 = UINT8_MAX;
	volatile int64_t x244 = INT64_MAX;
	volatile int64_t t59 = -850503937756917LL;

    t59 = (((x241&x242)&x243)%x244);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MAX;
	int8_t x247 = INT8_MIN;
	int64_t x248 = 24896964961LL;
	int64_t t60 = 2269566LL;

    t60 = (((x245&x246)&x247)%x248);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x249 = 706112U;
	int8_t x250 = 1;
	volatile uint64_t x251 = 424983193715LLU;
	volatile uint64_t t61 = 85LLU;

    t61 = (((x249&x250)&x251)%x252);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x255 = 2152523LLU;
	volatile uint64_t t62 = 187978472778538260LLU;

    t62 = (((x253&x254)&x255)%x256);

    if (t62 != 8LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x257 = 29;
	int16_t x258 = -7;
	static int32_t x259 = -6715;

    t63 = (((x257&x258)&x259)%x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = INT32_MIN;
	static int16_t x262 = INT16_MAX;
	int64_t x263 = -398840998720LL;
	volatile uint64_t x264 = 431LLU;
	volatile uint64_t t64 = 7480843027742LLU;

    t64 = (((x261&x262)&x263)%x264);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;
	volatile int64_t x267 = INT64_MIN;
	static volatile int8_t x268 = -4;

    t65 = (((x265&x266)&x267)%x268);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x269 = INT32_MIN;
	volatile uint16_t x272 = 3191U;
	static volatile int32_t t66 = 10446;

    t66 = (((x269&x270)&x271)%x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x273 = INT16_MIN;
	uint16_t x274 = 27U;
	uint32_t x275 = UINT32_MAX;
	uint32_t x276 = 693567815U;
	uint32_t t67 = 4952333U;

    t67 = (((x273&x274)&x275)%x276);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x278 = -538835643288152LL;
	volatile int64_t t68 = -41LL;

    t68 = (((x277&x278)&x279)%x280);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = UINT16_MAX;
	uint8_t x282 = 3U;
	uint8_t x283 = 6U;
	int8_t x284 = INT8_MAX;
	int32_t t69 = -1853;

    t69 = (((x281&x282)&x283)%x284);

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x285 = INT16_MAX;
	static volatile uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MAX;
	volatile uint64_t t70 = 759923238454LLU;

    t70 = (((x285&x286)&x287)%x288);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x289 = 3966U;
	static int64_t x290 = INT64_MIN;
	uint64_t x291 = UINT64_MAX;
	int8_t x292 = 1;

    t71 = (((x289&x290)&x291)%x292);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x294 = INT8_MIN;
	uint64_t x295 = 117896LLU;
	int32_t x296 = -12459;
	volatile uint64_t t72 = 1637043114LLU;

    t72 = (((x293&x294)&x295)%x296);

    if (t72 != 117888LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = INT32_MIN;
	static int32_t x298 = -1327160;
	volatile int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t73 = -59272;

    t73 = (((x297&x298)&x299)%x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x302 = INT8_MAX;
	static int64_t x303 = -1LL;
	int16_t x304 = 27;

    t74 = (((x301&x302)&x303)%x304);

    if (t74 != 3LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x305 = -1;
	static int32_t x306 = -1;
	static uint8_t x307 = UINT8_MAX;
	int64_t x308 = -424338415617LL;
	volatile int64_t t75 = 196428391LL;

    t75 = (((x305&x306)&x307)%x308);

    if (t75 != 255LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = 6;
	int32_t x310 = 30233;
	volatile uint64_t x312 = 1603962899LLU;
	uint64_t t76 = 14LLU;

    t76 = (((x309&x310)&x311)%x312);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x313 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	volatile uint64_t t77 = 4287245068409455LLU;

    t77 = (((x313&x314)&x315)%x316);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x318 = -3021;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = UINT32_MAX;
	uint64_t t78 = 6LLU;

    t78 = (((x317&x318)&x319)%x320);

    if (t78 != 4294934528LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x322 = 5;
	int8_t x323 = -1;
	volatile int64_t t79 = 3144631LL;

    t79 = (((x321&x322)&x323)%x324);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x325 = 16328U;
	int16_t x328 = INT16_MIN;
	volatile uint32_t t80 = 30218696U;

    t80 = (((x325&x326)&x327)%x328);

    if (t80 != 1344U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = 14;
	static int64_t x330 = INT64_MAX;
	static volatile uint16_t x332 = UINT16_MAX;

    t81 = (((x329&x330)&x331)%x332);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x333 = 13314836246LLU;
	uint64_t x334 = UINT64_MAX;
	uint32_t x336 = 8U;
	uint64_t t82 = 155127236573679LLU;

    t82 = (((x333&x334)&x335)%x336);

    if (t82 != 6LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = INT8_MIN;
	static int16_t x338 = INT16_MAX;
	uint8_t x339 = 2U;
	static uint32_t x340 = 7346296U;

    t83 = (((x337&x338)&x339)%x340);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x341 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 1619041631570894LLU;

    t84 = (((x341&x342)&x343)%x344);

    if (t84 != 4294967168LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 14U;
	volatile uint64_t t85 = 551968884451499102LLU;

    t85 = (((x345&x346)&x347)%x348);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x349 = INT32_MAX;
	static int8_t x350 = INT8_MIN;
	static uint8_t x351 = UINT8_MAX;
	uint64_t x352 = 71947407326938LLU;

    t86 = (((x349&x350)&x351)%x352);

    if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MAX;

    t87 = (((x353&x354)&x355)%x356);

    if (t87 != -8LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = -1;
	int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	int16_t x360 = -1;
	volatile int64_t t88 = -206948683702LL;

    t88 = (((x357&x358)&x359)%x360);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x362 = -1;
	int64_t x363 = -1LL;
	int64_t x364 = -116235139LL;
	volatile uint64_t t89 = 493LLU;

    t89 = (((x361&x362)&x363)%x364);

    if (t89 != 116235138LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x365 = -1LL;
	uint32_t x366 = UINT32_MAX;
	static uint8_t x367 = 47U;
	static uint16_t x368 = 6612U;
	volatile int64_t t90 = 24556LL;

    t90 = (((x365&x366)&x367)%x368);

    if (t90 != 47LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x369 = -5991735162085873LL;
	int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MIN;
	int8_t x372 = 53;
	static volatile int64_t t91 = -706396259769LL;

    t91 = (((x369&x370)&x371)%x372);

    if (t91 != -13LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x374 = 38913776542LL;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	int64_t t92 = 3412564355949715LL;

    t92 = (((x373&x374)&x375)%x376);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x377 = UINT8_MAX;
	uint32_t x378 = 2068U;
	static volatile int8_t x379 = INT8_MIN;

    t93 = (((x377&x378)&x379)%x380);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x382 = INT16_MAX;
	uint64_t x383 = 2LLU;
	uint64_t t94 = 13934LLU;

    t94 = (((x381&x382)&x383)%x384);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x386 = -1799845576LL;
	uint32_t x387 = 0U;
	int64_t t95 = -8LL;

    t95 = (((x385&x386)&x387)%x388);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x389 = INT64_MAX;
	int8_t x390 = INT8_MIN;
	static volatile int64_t t96 = -70198402708LL;

    t96 = (((x389&x390)&x391)%x392);

    if (t96 != 388920456LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = INT8_MIN;
	static int8_t x394 = -1;
	int32_t x395 = 76;
	int32_t x396 = INT32_MIN;

    t97 = (((x393&x394)&x395)%x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x397 = 3;
	int64_t x398 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int64_t t98 = 1806625LL;

    t98 = (((x397&x398)&x399)%x400);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x401 = 53864384U;
	static int64_t x402 = -1LL;
	static volatile int64_t t99 = 3160223507LL;

    t99 = (((x401&x402)&x403)%x404);

    if (t99 != 320LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x405 = 137U;
	int32_t x407 = -1798;
	volatile int64_t t100 = -473508395149628388LL;

    t100 = (((x405&x406)&x407)%x408);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x409 = -1;
	static int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MIN;

    t101 = (((x409&x410)&x411)%x412);

    if (t101 != 127U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x415 = INT8_MIN;
	static volatile int64_t x416 = INT64_MAX;

    t102 = (((x413&x414)&x415)%x416);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x417 = 0U;
	static int8_t x418 = -1;
	static int64_t x419 = INT64_MIN;
	static int32_t x420 = -10351353;
	static volatile int64_t t103 = 1054783060LL;

    t103 = (((x417&x418)&x419)%x420);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x422 = -4;
	uint8_t x423 = UINT8_MAX;
	static int32_t x424 = -1;
	int32_t t104 = -599584933;

    t104 = (((x421&x422)&x423)%x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x426 = UINT64_MAX;
	uint64_t x427 = 17051989233LLU;
	uint16_t x428 = 1643U;
	uint64_t t105 = 8LLU;

    t105 = (((x425&x426)&x427)%x428);

    if (t105 != 866LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x430 = -1;
	static int8_t x431 = -1;
	volatile int64_t t106 = -2336LL;

    t106 = (((x429&x430)&x431)%x432);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = 0;
	int32_t x434 = -2922507;
	volatile uint8_t x436 = UINT8_MAX;
	int64_t t107 = -820142340LL;

    t107 = (((x433&x434)&x435)%x436);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x437 = INT8_MAX;
	uint8_t x438 = 7U;
	int64_t x439 = INT64_MIN;
	int64_t x440 = -2LL;
	volatile int64_t t108 = 71669493557009150LL;

    t108 = (((x437&x438)&x439)%x440);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x441 = INT16_MAX;
	uint64_t x442 = 49203981611586966LLU;
	static uint64_t x443 = 932450597092737LLU;
	uint32_t x444 = UINT32_MAX;
	uint64_t t109 = 17450685239144154LLU;

    t109 = (((x441&x442)&x443)%x444);

    if (t109 != 5504LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x446 = 80860U;
	int32_t x447 = INT32_MAX;
	int8_t x448 = INT8_MIN;

    t110 = (((x445&x446)&x447)%x448);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x449 = 2U;
	uint64_t x450 = 3611LLU;
	int8_t x451 = -24;
	uint64_t t111 = 485LLU;

    t111 = (((x449&x450)&x451)%x452);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x453 = 463279995U;
	volatile int16_t x454 = INT16_MIN;
	static uint64_t x455 = UINT64_MAX;
	int8_t x456 = INT8_MIN;
	uint64_t t112 = 42173091LLU;

    t112 = (((x453&x454)&x455)%x456);

    if (t112 != 463273984LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x457 = UINT64_MAX;
	int32_t x458 = INT32_MAX;
	int16_t x459 = INT16_MIN;
	int16_t x460 = 3;
	volatile uint64_t t113 = 445583870244384LLU;

    t113 = (((x457&x458)&x459)%x460);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x462 = -1;
	int64_t x464 = -1668769542170450117LL;

    t114 = (((x461&x462)&x463)%x464);

    if (t114 != 1747072LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x465 = UINT32_MAX;
	int32_t x466 = INT32_MIN;
	uint64_t x467 = UINT64_MAX;
	int32_t x468 = INT32_MIN;
	uint64_t t115 = 118265248LLU;

    t115 = (((x465&x466)&x467)%x468);

    if (t115 != 2147483648LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x469 = 3U;
	int32_t x470 = INT32_MIN;
	int8_t x471 = -1;
	static volatile int32_t t116 = 3324;

    t116 = (((x469&x470)&x471)%x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x474 = 1450U;
	int8_t x475 = INT8_MAX;
	uint8_t x476 = 3U;

    t117 = (((x473&x474)&x475)%x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x477 = INT32_MAX;
	int64_t x478 = -1LL;
	int64_t t118 = -2008007711658088LL;

    t118 = (((x477&x478)&x479)%x480);

    if (t118 != 7LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x482 = -26;
	uint64_t x484 = UINT64_MAX;
	uint64_t t119 = 3172LLU;

    t119 = (((x481&x482)&x483)%x484);

    if (t119 != 690426169380LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x485 = UINT8_MAX;
	static uint32_t x486 = 57U;
	int32_t x488 = 8714511;
	volatile uint32_t t120 = 23383122U;

    t120 = (((x485&x486)&x487)%x488);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x491 = 114636657LL;
	int32_t x492 = 321825645;
	static uint64_t t121 = 36816270232LLU;

    t121 = (((x489&x490)&x491)%x492);

    if (t121 != 113LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x493 = -31548048;
	static volatile int32_t x494 = 3;
	static int8_t x495 = INT8_MIN;
	volatile int64_t x496 = -2582910159056247LL;
	volatile int64_t t122 = 14122301896624LL;

    t122 = (((x493&x494)&x495)%x496);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x497 = -1;
	static int64_t x498 = INT64_MIN;
	static volatile int64_t t123 = -16420362077402LL;

    t123 = (((x497&x498)&x499)%x500);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MIN;
	volatile int64_t t124 = 88837521LL;

    t124 = (((x505&x506)&x507)%x508);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x510 = INT8_MAX;
	int8_t x511 = 46;
	static int32_t x512 = INT32_MAX;
	volatile int32_t t125 = 96172;

    t125 = (((x509&x510)&x511)%x512);

    if (t125 != 34) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x513 = INT8_MAX;
	volatile int32_t x514 = -1;
	static int16_t x515 = 19;
	static int8_t x516 = INT8_MIN;
	int32_t t126 = -599521;

    t126 = (((x513&x514)&x515)%x516);

    if (t126 != 19) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x517 = 14702U;
	int16_t x518 = 190;
	int8_t x519 = INT8_MAX;
	int8_t x520 = -17;
	int32_t t127 = 7;

    t127 = (((x517&x518)&x519)%x520);

    if (t127 != 12) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x521 = INT8_MIN;
	static int32_t x522 = INT32_MIN;
	uint8_t x523 = UINT8_MAX;
	int8_t x524 = INT8_MIN;
	int32_t t128 = -8824230;

    t128 = (((x521&x522)&x523)%x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x525 = 13538U;
	volatile int16_t x527 = -1;
	uint64_t t129 = 30894443LLU;

    t129 = (((x525&x526)&x527)%x528);

    if (t129 != 96LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x529 = 4801LLU;
	int16_t x530 = INT16_MIN;
	static uint64_t x531 = UINT64_MAX;
	int64_t x532 = -97735628248619LL;
	static volatile uint64_t t130 = 518062039641211347LLU;

    t130 = (((x529&x530)&x531)%x532);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x533 = INT32_MIN;
	static int32_t x534 = 4089;
	uint16_t x535 = UINT16_MAX;
	static int32_t x536 = INT32_MAX;
	static volatile int32_t t131 = -7461;

    t131 = (((x533&x534)&x535)%x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x538 = -3;
	int16_t x539 = INT16_MIN;
	volatile uint32_t x540 = 20U;
	static volatile uint32_t t132 = 206U;

    t132 = (((x537&x538)&x539)%x540);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x545 = 0;
	static volatile int8_t x546 = INT8_MIN;
	static volatile uint16_t x547 = 40U;
	uint64_t x548 = 64LLU;

    t133 = (((x545&x546)&x547)%x548);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = INT8_MAX;
	static int32_t x550 = INT32_MAX;
	uint8_t x551 = UINT8_MAX;
	int32_t t134 = 22622166;

    t134 = (((x549&x550)&x551)%x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = INT8_MIN;

    t135 = (((x553&x554)&x555)%x556);

    if (t135 != 128LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x557 = 236854450LL;
	volatile int16_t x558 = -17;
	volatile uint64_t t136 = 1806804LLU;

    t136 = (((x557&x558)&x559)%x560);

    if (t136 != 236854434LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x561 = INT32_MAX;
	static int8_t x563 = INT8_MIN;
	static uint64_t x564 = 832947251743624LLU;

    t137 = (((x561&x562)&x563)%x564);

    if (t137 != 2147483520LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x565 = -1LL;
	volatile int32_t x566 = -388486711;
	uint8_t x567 = 16U;
	uint8_t x568 = 72U;
	static volatile int64_t t138 = -900403790118278667LL;

    t138 = (((x565&x566)&x567)%x568);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x569 = -1056;
	int16_t x570 = -1;
	uint8_t x571 = 42U;
	int16_t x572 = INT16_MIN;
	volatile int32_t t139 = 46112019;

    t139 = (((x569&x570)&x571)%x572);

    if (t139 != 32) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = 0LLU;
	static int32_t x574 = INT32_MIN;
	uint64_t t140 = 1414589LLU;

    t140 = (((x573&x574)&x575)%x576);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x577 = INT16_MAX;
	int64_t x578 = INT64_MAX;
	int16_t x579 = INT16_MIN;
	static int16_t x580 = -1;
	int64_t t141 = 95LL;

    t141 = (((x577&x578)&x579)%x580);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x581 = -1LL;
	volatile uint64_t x582 = UINT64_MAX;
	uint16_t x583 = 288U;
	static volatile int8_t x584 = INT8_MAX;
	volatile uint64_t t142 = 9586175759874LLU;

    t142 = (((x581&x582)&x583)%x584);

    if (t142 != 34LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = INT64_MIN;
	volatile int8_t x586 = INT8_MIN;
	uint64_t x587 = 468095LLU;
	static uint8_t x588 = 1U;
	uint64_t t143 = 50175LLU;

    t143 = (((x585&x586)&x587)%x588);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x589 = INT16_MIN;
	uint8_t x591 = UINT8_MAX;
	static volatile uint16_t x592 = 2382U;
	static uint64_t t144 = 940130503601132LLU;

    t144 = (((x589&x590)&x591)%x592);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x593 = -1;
	int16_t x594 = -1;
	static volatile uint64_t x595 = 222788898547157289LLU;
	static int8_t x596 = INT8_MIN;
	volatile uint64_t t145 = 136392154578169LLU;

    t145 = (((x593&x594)&x595)%x596);

    if (t145 != 222788898547157289LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x597 = 526625359001339525LLU;
	int16_t x599 = 154;
	int16_t x600 = 399;
	uint64_t t146 = 433LLU;

    t146 = (((x597&x598)&x599)%x600);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x601 = 12189537U;
	static int16_t x602 = INT16_MAX;
	uint32_t x604 = 27U;
	uint32_t t147 = 162281U;

    t147 = (((x601&x602)&x603)%x604);

    if (t147 != 20U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x605 = 275371398U;
	int8_t x606 = -1;
	int32_t x607 = INT32_MIN;
	uint32_t x608 = 1629U;
	volatile uint32_t t148 = 4U;

    t148 = (((x605&x606)&x607)%x608);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x609 = 12584672586296324LL;
	uint32_t x610 = UINT32_MAX;
	static uint32_t x611 = 97863U;
	uint8_t x612 = 103U;
	volatile int64_t t149 = -1719205912LL;

    t149 = (((x609&x610)&x611)%x612);

    if (t149 != 48LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x613 = 466;
	uint64_t x614 = 10525270171479LLU;
	int64_t x615 = -1LL;
	int64_t x616 = INT64_MIN;
	uint64_t t150 = 22LLU;

    t150 = (((x613&x614)&x615)%x616);

    if (t150 != 338LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x617 = UINT32_MAX;
	int64_t x618 = -1LL;
	int8_t x619 = INT8_MIN;
	int64_t t151 = -917522012672330551LL;

    t151 = (((x617&x618)&x619)%x620);

    if (t151 != 11LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x621 = -1;
	volatile int16_t x622 = -2876;
	int32_t x623 = INT32_MAX;
	int32_t x624 = -13;
	int32_t t152 = -11595;

    t152 = (((x621&x622)&x623)%x624);

    if (t152 != 8) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x625 = 5588059LL;
	int16_t x626 = 3915;
	uint8_t x628 = 47U;
	volatile int64_t t153 = -1559390LL;

    t153 = (((x625&x626)&x627)%x628);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = INT64_MAX;
	uint64_t x630 = 338940613256751LLU;
	uint8_t x632 = UINT8_MAX;
	uint64_t t154 = 453LLU;

    t154 = (((x629&x630)&x631)%x632);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x633 = UINT16_MAX;
	int16_t x634 = INT16_MIN;
	int16_t x635 = -72;
	int64_t x636 = INT64_MIN;
	int64_t t155 = 13440627530LL;

    t155 = (((x633&x634)&x635)%x636);

    if (t155 != 32768LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x637 = INT64_MIN;
	uint16_t x638 = 233U;
	volatile int8_t x639 = INT8_MAX;
	int8_t x640 = -1;
	int64_t t156 = 18LL;

    t156 = (((x637&x638)&x639)%x640);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x642 = INT8_MAX;
	uint64_t x643 = 1937901520LLU;
	uint8_t x644 = UINT8_MAX;
	volatile uint64_t t157 = 3618805164855406LLU;

    t157 = (((x641&x642)&x643)%x644);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x645 = 1813610U;
	uint32_t x647 = UINT32_MAX;
	int16_t x648 = 3792;
	uint32_t t158 = 1U;

    t158 = (((x645&x646)&x647)%x648);

    if (t158 != 338U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x650 = INT64_MIN;
	static int8_t x651 = INT8_MIN;
	int64_t x652 = INT64_MIN;
	static int64_t t159 = 13446LL;

    t159 = (((x649&x650)&x651)%x652);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x654 = -1;
	int32_t x655 = INT32_MIN;
	uint8_t x656 = 38U;
	volatile int32_t t160 = -71;

    t160 = (((x653&x654)&x655)%x656);

    if (t160 != -22) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = INT32_MIN;
	volatile uint64_t x659 = 220LLU;

    t161 = (((x657&x658)&x659)%x660);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x661 = -1;
	uint8_t x662 = 1U;
	volatile uint8_t x663 = 52U;
	int32_t x664 = -58709252;
	static volatile int32_t t162 = -15580504;

    t162 = (((x661&x662)&x663)%x664);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x665 = INT16_MAX;
	static int32_t x668 = 33415;
	volatile uint64_t t163 = 551619131549393962LLU;

    t163 = (((x665&x666)&x667)%x668);

    if (t163 != 29711LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x669 = UINT64_MAX;
	uint64_t t164 = 3990651307471188115LLU;

    t164 = (((x669&x670)&x671)%x672);

    if (t164 != 660454035767488LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x673 = INT32_MAX;
	int16_t x674 = -1;
	uint32_t x675 = 7U;
	volatile int32_t x676 = INT32_MAX;
	uint32_t t165 = 333081U;

    t165 = (((x673&x674)&x675)%x676);

    if (t165 != 7U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x677 = -1;
	int64_t x678 = 3993LL;
	volatile uint16_t x679 = 464U;
	int64_t t166 = 4628387032326LL;

    t166 = (((x677&x678)&x679)%x680);

    if (t166 != 400LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x681 = -1;
	volatile int32_t x682 = -1;
	int8_t x684 = -1;
	uint32_t t167 = 1770U;

    t167 = (((x681&x682)&x683)%x684);

    if (t167 != 18929438U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x685 = UINT16_MAX;
	volatile int8_t x686 = INT8_MIN;
	int32_t t168 = -27;

    t168 = (((x685&x686)&x687)%x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x689 = UINT64_MAX;
	int64_t x690 = INT64_MIN;
	static uint16_t x691 = UINT16_MAX;
	uint64_t t169 = 15229LLU;

    t169 = (((x689&x690)&x691)%x692);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x693 = 1137245LLU;
	uint16_t x695 = 1233U;
	static volatile uint64_t t170 = 2LLU;

    t170 = (((x693&x694)&x695)%x696);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x697 = INT32_MIN;
	static int32_t x698 = -1;
	static int8_t x699 = -1;
	static volatile int16_t x700 = -1068;

    t171 = (((x697&x698)&x699)%x700);

    if (t171 != -512) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	uint8_t x702 = UINT8_MAX;
	static uint64_t x704 = 27009LLU;
	uint64_t t172 = 32897260LLU;

    t172 = (((x701&x702)&x703)%x704);

    if (t172 != 91LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = -26;
	volatile int8_t x706 = -1;
	int8_t x707 = INT8_MIN;
	int8_t x708 = INT8_MIN;
	volatile int32_t t173 = 1099619;

    t173 = (((x705&x706)&x707)%x708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x710 = 2479272;
	uint8_t x711 = 17U;
	static uint16_t x712 = 8U;
	volatile int64_t t174 = -12420640573852121LL;

    t174 = (((x709&x710)&x711)%x712);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x714 = -352;
	static int64_t x715 = 4272122LL;
	volatile int64_t t175 = -1095874611574708591LL;

    t175 = (((x713&x714)&x715)%x716);

    if (t175 != 11936LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x718 = INT32_MIN;
	uint8_t x719 = UINT8_MAX;
	static uint32_t x720 = 7159U;
	volatile uint64_t t176 = 12667792392LLU;

    t176 = (((x717&x718)&x719)%x720);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x721 = INT16_MIN;
	int8_t x722 = INT8_MAX;
	int64_t x724 = INT64_MAX;
	volatile int64_t t177 = -94LL;

    t177 = (((x721&x722)&x723)%x724);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x725 = -38559311LL;
	int64_t x727 = INT64_MAX;
	uint64_t x728 = 942686792125537502LLU;
	volatile uint64_t t178 = 364271902LLU;

    t178 = (((x725&x726)&x727)%x728);

    if (t178 != 739190907686378930LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x731 = INT64_MAX;
	volatile int64_t t179 = -1504859LL;

    t179 = (((x729&x730)&x731)%x732);

    if (t179 != 6LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x734 = -1;
	volatile int32_t x735 = INT32_MIN;
	volatile uint8_t x736 = 12U;
	uint64_t t180 = 8105LLU;

    t180 = (((x733&x734)&x735)%x736);

    if (t180 != 8LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x737 = 5U;
	int16_t x738 = INT16_MIN;
	int64_t x739 = 59088592241209LL;
	volatile int16_t x740 = -1262;

    t181 = (((x737&x738)&x739)%x740);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x741 = 30541U;
	volatile uint64_t x742 = 2179154039909305LLU;
	int16_t x743 = INT16_MIN;
	uint16_t x744 = 5U;
	volatile uint64_t t182 = 796535989820049LLU;

    t182 = (((x741&x742)&x743)%x744);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x745 = UINT16_MAX;
	int64_t x746 = -39238152866441LL;
	int16_t x747 = -9349;
	static volatile int64_t t183 = 319LL;

    t183 = (((x745&x746)&x747)%x748);

    if (t183 != 4467LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x750 = INT64_MIN;
	int64_t x751 = INT64_MIN;
	int32_t x752 = 946;
	volatile int64_t t184 = 610LL;

    t184 = (((x749&x750)&x751)%x752);

    if (t184 != -558LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x753 = -4774979LL;
	int8_t x754 = INT8_MIN;
	static volatile uint32_t x755 = 97794858U;
	int8_t x756 = INT8_MIN;
	volatile int64_t t185 = 3636598381LL;

    t185 = (((x753&x754)&x755)%x756);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x759 = 3;
	static int16_t x760 = -1;
	static int64_t t186 = 2193118145036268103LL;

    t186 = (((x757&x758)&x759)%x760);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x761 = 1;
	static int8_t x762 = INT8_MAX;
	int16_t x763 = INT16_MIN;
	static int64_t x764 = INT64_MAX;

    t187 = (((x761&x762)&x763)%x764);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x765 = 18U;
	uint8_t x766 = UINT8_MAX;
	static volatile int8_t x767 = INT8_MAX;
	volatile int16_t x768 = 2;
	volatile int32_t t188 = -303;

    t188 = (((x765&x766)&x767)%x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x769 = INT64_MIN;
	volatile int16_t x770 = -3;
	int64_t x771 = INT64_MIN;
	static volatile int64_t t189 = 1598424761583LL;

    t189 = (((x769&x770)&x771)%x772);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x773 = -1LL;
	uint64_t x774 = 18LLU;
	volatile int8_t x775 = -1;
	volatile int32_t x776 = 1;
	volatile uint64_t t190 = 447LLU;

    t190 = (((x773&x774)&x775)%x776);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x777 = INT64_MAX;
	int32_t x778 = 15168;
	volatile uint8_t x779 = UINT8_MAX;
	uint16_t x780 = UINT16_MAX;
	volatile int64_t t191 = -111189226679LL;

    t191 = (((x777&x778)&x779)%x780);

    if (t191 != 64LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x782 = -561646002643487LL;
	int8_t x783 = -1;
	int32_t x784 = INT32_MIN;
	volatile uint64_t t192 = 419075154384LLU;

    t192 = (((x781&x782)&x783)%x784);

    if (t192 != 18446182427706908129LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x786 = INT16_MAX;
	int8_t x788 = INT8_MIN;
	volatile uint64_t t193 = 39780290467LLU;

    t193 = (((x785&x786)&x787)%x788);

    if (t193 != 14208LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x789 = INT64_MIN;
	int8_t x790 = -1;
	int8_t x791 = -1;
	uint64_t x792 = 2488719704452438518LLU;
	uint64_t t194 = 3790029858122825LLU;

    t194 = (((x789&x790)&x791)%x792);

    if (t194 != 1757212923497460254LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x793 = -1;
	int32_t x794 = -1;
	static uint32_t x795 = 20U;
	static volatile int16_t x796 = 55;
	volatile uint32_t t195 = 9339816U;

    t195 = (((x793&x794)&x795)%x796);

    if (t195 != 20U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x802 = -6170LL;
	volatile uint8_t x803 = 2U;
	static uint64_t x804 = 149809LLU;

    t196 = (((x801&x802)&x803)%x804);

    if (t196 != 2LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x805 = INT16_MIN;
	int16_t x806 = -1;
	int64_t x808 = INT64_MAX;
	volatile int64_t t197 = -38332LL;

    t197 = (((x805&x806)&x807)%x808);

    if (t197 != -32768LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x809 = 0U;
	uint64_t x811 = UINT64_MAX;
	int32_t x812 = INT32_MIN;
	uint64_t t198 = 651584857LLU;

    t198 = (((x809&x810)&x811)%x812);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x813 = INT16_MIN;
	volatile int64_t x814 = INT64_MIN;
	int32_t x815 = INT32_MAX;
	static volatile int64_t t199 = 82LL;

    t199 = (((x813&x814)&x815)%x816);

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

