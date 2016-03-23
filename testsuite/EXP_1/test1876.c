
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

int32_t x7 = INT32_MIN;
int32_t t2 = INT32_MIN;
volatile int32_t t3 = 1012;
int16_t x17 = -3;
int64_t x19 = 0LL;
static uint64_t x21 = UINT64_MAX;
volatile uint8_t x22 = UINT8_MAX;
static volatile int64_t x26 = -51864675739719925LL;
int16_t x32 = INT16_MIN;
static int8_t x46 = 44;
volatile uint32_t x52 = UINT32_MAX;
uint32_t t12 = UINT32_MAX;
int32_t x53 = INT32_MAX;
volatile uint64_t x64 = 4215915336868LLU;
volatile uint64_t t15 = 6362LLU;
int16_t x66 = INT16_MIN;
volatile uint64_t t16 = 3708107385465234306LLU;
static volatile uint64_t x82 = 270874062959LLU;
static int8_t x97 = INT8_MIN;
static int64_t x105 = -1LL;
int64_t x106 = 2868424109601702427LL;
int16_t x109 = INT16_MAX;
int32_t x113 = -3449075;
int16_t x114 = INT16_MIN;
uint32_t x115 = 65392U;
uint64_t t30 = UINT64_MAX;
uint8_t x125 = 0U;
uint32_t x127 = 0U;
int16_t x130 = -1;
int64_t x139 = 2769988597627LL;
static uint64_t x140 = UINT64_MAX;
volatile int32_t t35 = INT32_MIN;
static int64_t x145 = INT64_MIN;
int8_t x150 = INT8_MIN;
volatile int32_t t38 = -13;
static int8_t x158 = -44;
volatile uint16_t x159 = 3U;
static volatile uint8_t x162 = UINT8_MAX;
int32_t t40 = -160821557;
int8_t x167 = -1;
int8_t x168 = -1;
uint16_t x170 = 1726U;
int8_t x172 = -39;
volatile uint8_t x173 = 98U;
uint8_t x178 = 1U;
static int32_t t44 = -3;
uint32_t x181 = 249U;
uint16_t x184 = 2419U;
volatile int8_t x186 = INT8_MAX;
volatile int64_t x187 = 2862133241098001LL;
static volatile uint16_t x191 = 14U;
uint8_t x192 = 0U;
static int32_t x195 = INT32_MIN;
volatile int32_t t48 = -53962;
volatile int32_t x208 = -837468;
uint16_t x215 = UINT16_MAX;
int64_t x220 = INT64_MIN;
int32_t x227 = 1;
int64_t x231 = INT64_MAX;
volatile int32_t t60 = INT32_MIN;
volatile int32_t t61 = -18480;
int32_t x250 = 491694;
int32_t t62 = -130686;
volatile uint32_t x254 = UINT32_MAX;
uint8_t x255 = UINT8_MAX;
static int32_t x260 = -891406532;
int32_t x262 = -1;
volatile int32_t t66 = INT32_MAX;
static int64_t x272 = -1045443916407187779LL;
int16_t x276 = INT16_MIN;
static int64_t x282 = INT64_MIN;
static volatile uint8_t x291 = 2U;
int64_t t72 = INT64_MAX;
volatile uint16_t x294 = 10413U;
uint64_t x295 = 5782418613LLU;
int8_t x298 = -26;
uint64_t t74 = 236639773358506659LLU;
uint32_t x303 = UINT32_MAX;
uint8_t x305 = 62U;
uint64_t x307 = 14176366411143LLU;
int64_t x314 = INT64_MAX;
int8_t x317 = INT8_MIN;
static int64_t x318 = -1LL;
int32_t t79 = INT32_MAX;
int16_t x324 = -1;
int16_t x326 = 525;
int8_t x329 = -49;
static int16_t x333 = INT16_MIN;
volatile int64_t t85 = INT64_MIN;
int16_t x347 = 23;
int32_t x350 = INT32_MAX;
int64_t x351 = INT64_MIN;
int32_t x352 = 3734329;
volatile int64_t x357 = INT64_MIN;
static uint64_t t89 = 16023341919171983LLU;
int8_t x361 = INT8_MIN;
static volatile uint64_t t92 = 31017259LLU;
int16_t x373 = INT16_MIN;
int32_t t93 = 11500;
int16_t x377 = -1;
int8_t x379 = INT8_MIN;
uint8_t x391 = 3U;
int8_t x392 = INT8_MIN;
volatile uint16_t x396 = 4U;
uint32_t x397 = UINT32_MAX;
int64_t x402 = INT64_MIN;
volatile int16_t x403 = -1;
int32_t t101 = -7;
volatile uint16_t x409 = 274U;
int32_t t102 = INT32_MIN;
volatile uint64_t x422 = 556559122475LLU;
volatile int64_t x423 = -1LL;
int16_t x436 = -2;
volatile int32_t t108 = 165631330;
int8_t x440 = -50;
int32_t x447 = INT32_MIN;
int32_t t111 = 61;
int64_t x452 = -1LL;
volatile uint8_t x453 = UINT8_MAX;
int64_t x459 = -3LL;
volatile int32_t t114 = -28;
int16_t x461 = 9593;
uint32_t x466 = 0U;
volatile uint64_t x468 = UINT64_MAX;
int8_t x476 = INT8_MAX;
int8_t x488 = INT8_MIN;
volatile uint64_t x491 = UINT64_MAX;
volatile uint16_t x492 = 18503U;
volatile int32_t t122 = 5490876;
volatile uint64_t t123 = UINT64_MAX;
uint32_t t125 = UINT32_MAX;
int32_t x511 = -1;
int64_t x512 = -1LL;
static uint8_t x516 = UINT8_MAX;
static int32_t t128 = -3429;
int64_t x521 = 936795LL;
uint32_t x525 = UINT32_MAX;
uint32_t t131 = 876824U;
int64_t x530 = -1764993LL;
int16_t x536 = 0;
uint32_t x540 = 24147273U;
volatile uint32_t t136 = 26817648U;
int16_t x552 = 4661;
volatile int32_t t137 = -30552360;
int32_t t138 = -3552931;
int64_t x558 = 98274152076225659LL;
uint8_t x560 = 47U;
int16_t x561 = INT16_MAX;
int32_t x562 = 9883;
uint8_t x565 = UINT8_MAX;
volatile int8_t x567 = INT8_MIN;
static int16_t x584 = -1;
volatile int32_t t145 = -8577;
int64_t t147 = 21235803620LL;
int64_t x593 = -1808530LL;
int8_t x598 = 1;
static volatile int64_t t149 = INT64_MAX;
uint64_t x605 = UINT64_MAX;
int64_t x609 = -431352LL;
int16_t x618 = -45;
volatile int32_t x628 = 3713;
int64_t x632 = INT64_MIN;
volatile uint8_t x633 = 2U;
volatile int64_t t158 = -579246LL;
int8_t x642 = INT8_MAX;
int32_t t161 = 16486347;
volatile int16_t x650 = INT16_MIN;
static int8_t x652 = INT8_MAX;
static int32_t t162 = 432560;
static int16_t x657 = INT16_MIN;
int32_t t164 = 72536;
int32_t x663 = INT32_MAX;
static int32_t t165 = -92849;
int64_t x667 = INT64_MIN;
int8_t x669 = -2;
volatile int32_t x671 = INT32_MIN;
volatile int8_t x672 = 4;
uint16_t x676 = UINT16_MAX;
int32_t t168 = 14;
int32_t t171 = -9;
volatile int32_t t173 = 1;
int16_t x697 = INT16_MAX;
int8_t x699 = -14;
uint8_t x704 = 4U;
volatile int32_t t175 = 415735976;
int16_t x706 = INT16_MIN;
uint8_t x707 = 50U;
volatile int8_t x710 = INT8_MIN;
int64_t x716 = 52408948689402671LL;
uint32_t x722 = 6U;
uint64_t x735 = 194967LLU;
int64_t x736 = INT64_MAX;
static int64_t t183 = INT64_MAX;
static int64_t x738 = INT64_MAX;
static uint64_t x744 = 186670LLU;
int32_t x746 = -1;
uint32_t x747 = UINT32_MAX;
volatile uint8_t x753 = 58U;
int16_t x755 = 55;
static int16_t x757 = -1;
volatile int32_t x763 = -1;
static int32_t x773 = -1;
int16_t x774 = 0;
uint16_t x778 = 13535U;
int64_t x780 = -1LL;
int64_t t194 = -82658792265426LL;
volatile int16_t x781 = INT16_MIN;
int32_t x782 = 680249;
int32_t x786 = -1;
uint32_t x787 = 601834034U;
volatile uint64_t x791 = 1LLU;
volatile uint8_t x792 = 23U;
int8_t x795 = INT8_MAX;
volatile int8_t x796 = -1;
volatile int32_t t198 = -48;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	uint8_t x2 = 8U;
	static int16_t x3 = INT16_MIN;
	volatile int16_t x4 = INT16_MAX;
	static int32_t t0 = 646301;

    t0 = (((x1<=x2)==x3)^x4);

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	volatile int64_t x6 = INT64_MAX;
	int32_t x8 = -1;
	volatile int32_t t1 = 449092;

    t1 = (((x5<=x6)==x7)^x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -1;
	volatile uint32_t x10 = 106594U;
	int64_t x11 = -1LL;
	static int32_t x12 = INT32_MIN;

    t2 = (((x9<=x10)==x11)^x12);

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int64_t x14 = -1LL;
	int8_t x15 = INT8_MAX;
	int32_t x16 = -1;

    t3 = (((x13<=x14)==x15)^x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x18 = INT8_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = INT32_MIN;

    t4 = (((x17<=x18)==x19)^x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x23 = 2551441164269LLU;
	int8_t x24 = -1;
	int32_t t5 = 26;

    t5 = (((x21<=x22)==x23)^x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	static int8_t x27 = -1;
	int16_t x28 = 49;
	volatile int32_t t6 = 15;

    t6 = (((x25<=x26)==x27)^x28);

    if (t6 != 49) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 6U;
	int64_t x30 = INT64_MAX;
	int16_t x31 = INT16_MAX;
	static int32_t t7 = 17899;

    t7 = (((x29<=x30)==x31)^x32);

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 1U;
	int64_t x34 = INT64_MAX;
	uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 19U;
	volatile int32_t t8 = -294751996;

    t8 = (((x33<=x34)==x35)^x36);

    if (t8 != 19) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 0U;
	static int32_t x38 = INT32_MIN;
	static uint8_t x39 = 2U;
	int64_t x40 = 17403845692038838LL;
	volatile int64_t t9 = -330218093731852LL;

    t9 = (((x37<=x38)==x39)^x40);

    if (t9 != 17403845692038838LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	static int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	static uint64_t t10 = UINT64_MAX;

    t10 = (((x41<=x42)==x43)^x44);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int8_t x47 = 17;
	uint32_t x48 = UINT32_MAX;
	uint32_t t11 = UINT32_MAX;

    t11 = (((x45<=x46)==x47)^x48);

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;

    t12 = (((x49<=x50)==x51)^x52);

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = -1041;
	static volatile int8_t x55 = -1;
	uint64_t x56 = 13LLU;
	uint64_t t13 = 212LLU;

    t13 = (((x53<=x54)==x55)^x56);

    if (t13 != 13LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 1069630513198LLU;
	uint32_t x58 = 3222470U;
	volatile int16_t x59 = INT16_MIN;
	uint64_t x60 = 8LLU;
	volatile uint64_t t14 = 1626237201843LLU;

    t14 = (((x57<=x58)==x59)^x60);

    if (t14 != 8LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	static uint16_t x62 = 343U;
	static uint8_t x63 = 55U;

    t15 = (((x61<=x62)==x63)^x64);

    if (t15 != 4215915336868LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 78U;
	uint16_t x67 = 1U;
	uint64_t x68 = 1827602908450LLU;

    t16 = (((x65<=x66)==x67)^x68);

    if (t16 != 1827602908450LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	uint8_t x70 = 1U;
	int8_t x71 = -1;
	volatile int32_t x72 = INT32_MAX;
	int32_t t17 = INT32_MAX;

    t17 = (((x69<=x70)==x71)^x72);

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 1;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MAX;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 2790;

    t18 = (((x73<=x74)==x75)^x76);

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = 76LL;
	volatile uint32_t x78 = 315U;
	int8_t x79 = 1;
	volatile uint16_t x80 = 7U;
	static int32_t t19 = 158082;

    t19 = (((x77<=x78)==x79)^x80);

    if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int16_t x83 = -1;
	int16_t x84 = 388;
	static volatile int32_t t20 = 1071308;

    t20 = (((x81<=x82)==x83)^x84);

    if (t20 != 388) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	volatile uint32_t x86 = 452000238U;
	static int64_t x87 = INT64_MIN;
	int64_t x88 = -1LL;
	int64_t t21 = -40LL;

    t21 = (((x85<=x86)==x87)^x88);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x89 = -1LL;
	volatile int32_t x90 = INT32_MAX;
	static volatile int8_t x91 = INT8_MIN;
	int8_t x92 = 0;
	static volatile int32_t t22 = -521;

    t22 = (((x89<=x90)==x91)^x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	uint8_t x94 = 2U;
	int64_t x95 = INT64_MAX;
	uint8_t x96 = 6U;
	volatile int32_t t23 = 403;

    t23 = (((x93<=x94)==x95)^x96);

    if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MAX;
	static int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t24 = INT32_MIN;

    t24 = (((x97<=x98)==x99)^x100);

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	uint64_t x102 = 16372414LLU;
	int32_t x103 = -1;
	volatile int64_t x104 = -1LL;
	volatile int64_t t25 = 10LL;

    t25 = (((x101<=x102)==x103)^x104);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 200U;
	volatile int32_t t26 = 21;

    t26 = (((x105<=x106)==x107)^x108);

    if (t26 != 200) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MIN;
	volatile uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = 325965;

    t27 = (((x109<=x110)==x111)^x112);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x116 = INT64_MIN;
	static int64_t t28 = INT64_MIN;

    t28 = (((x113<=x114)==x115)^x116);

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	volatile uint16_t x118 = UINT16_MAX;
	volatile int32_t x119 = INT32_MAX;
	static uint32_t x120 = 271695U;
	volatile uint32_t t29 = 105297259U;

    t29 = (((x117<=x118)==x119)^x120);

    if (t29 != 271695U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = -461837255LL;
	uint32_t x122 = 156U;
	volatile int16_t x123 = INT16_MIN;
	static uint64_t x124 = UINT64_MAX;

    t30 = (((x121<=x122)==x123)^x124);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x126 = UINT64_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t31 = -2;

    t31 = (((x125<=x126)==x127)^x128);

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 1136U;
	volatile uint32_t x131 = UINT32_MAX;
	uint16_t x132 = 332U;
	volatile int32_t t32 = 375858;

    t32 = (((x129<=x130)==x131)^x132);

    if (t32 != 332) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	uint8_t x134 = 38U;
	static int8_t x135 = 3;
	static int16_t x136 = INT16_MIN;
	static int32_t t33 = -1731;

    t33 = (((x133<=x134)==x135)^x136);

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 105902142U;
	uint16_t x138 = 73U;
	static volatile uint64_t t34 = UINT64_MAX;

    t34 = (((x137<=x138)==x139)^x140);

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 2U;
	uint16_t x142 = 7404U;
	uint64_t x143 = 93LLU;
	int32_t x144 = INT32_MIN;

    t35 = (((x141<=x142)==x143)^x144);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x146 = 8423069U;
	volatile int8_t x147 = 3;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

    t36 = (((x145<=x146)==x147)^x148);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = 14356520312LLU;
	int16_t x151 = 10;
	static volatile int64_t x152 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

    t37 = (((x149<=x150)==x151)^x152);

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = -1;
	static uint16_t x154 = 5858U;
	int16_t x155 = -116;
	int8_t x156 = 2;

    t38 = (((x153<=x154)==x155)^x156);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static uint16_t x160 = 1686U;
	volatile int32_t t39 = 7;

    t39 = (((x157<=x158)==x159)^x160);

    if (t39 != 1686) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 1770U;
	int16_t x163 = -1;
	int32_t x164 = -1;

    t40 = (((x161<=x162)==x163)^x164);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x165 = 270405647LLU;
	int8_t x166 = -22;
	volatile int32_t t41 = -259855070;

    t41 = (((x165<=x166)==x167)^x168);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = -16;
	static uint64_t x171 = UINT64_MAX;
	int32_t t42 = -29417791;

    t42 = (((x169<=x170)==x171)^x172);

    if (t42 != -39) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x174 = 80U;
	uint16_t x175 = UINT16_MAX;
	volatile uint16_t x176 = UINT16_MAX;
	int32_t t43 = -431145;

    t43 = (((x173<=x174)==x175)^x176);

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	volatile uint16_t x179 = 58U;
	int16_t x180 = -1;

    t44 = (((x177<=x178)==x179)^x180);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x182 = -38;
	uint16_t x183 = 15U;
	int32_t t45 = -660;

    t45 = (((x181<=x182)==x183)^x184);

    if (t45 != 2419) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	static int32_t x188 = -1;
	int32_t t46 = 0;

    t46 = (((x185<=x186)==x187)^x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 11433;
	static uint64_t x190 = 334722LLU;
	volatile int32_t t47 = -1;

    t47 = (((x189<=x190)==x191)^x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = -56;
	uint64_t x194 = 198146LLU;
	static int16_t x196 = 243;

    t48 = (((x193<=x194)==x195)^x196);

    if (t48 != 243) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	uint16_t x200 = 31305U;
	static volatile int32_t t49 = 6;

    t49 = (((x197<=x198)==x199)^x200);

    if (t49 != 31305) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MIN;
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = 148295;

    t50 = (((x201<=x202)==x203)^x204);

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int8_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int32_t t51 = -64436700;

    t51 = (((x205<=x206)==x207)^x208);

    if (t51 != -837468) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -34237011655084970LL;
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = -21;
	uint32_t x212 = 28U;
	uint32_t t52 = 431436463U;

    t52 = (((x209<=x210)==x211)^x212);

    if (t52 != 28U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	uint16_t x214 = 9U;
	static int16_t x216 = INT16_MAX;
	int32_t t53 = -1550;

    t53 = (((x213<=x214)==x215)^x216);

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 4850U;
	int64_t t54 = INT64_MIN;

    t54 = (((x217<=x218)==x219)^x220);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = INT16_MIN;
	volatile int8_t x222 = 22;
	volatile int16_t x223 = INT16_MIN;
	static volatile uint64_t x224 = 12107756187388LLU;
	uint64_t t55 = 141286417765180055LLU;

    t55 = (((x221<=x222)==x223)^x224);

    if (t55 != 12107756187388LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	uint16_t x226 = 32316U;
	int32_t x228 = INT32_MIN;
	int32_t t56 = INT32_MIN;

    t56 = (((x225<=x226)==x227)^x228);

    if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	uint16_t x230 = 348U;
	int32_t x232 = INT32_MAX;
	int32_t t57 = INT32_MAX;

    t57 = (((x229<=x230)==x231)^x232);

    if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 248U;
	uint16_t x234 = UINT16_MAX;
	volatile uint32_t x235 = UINT32_MAX;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t58 = -18744793;

    t58 = (((x233<=x234)==x235)^x236);

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	int64_t x238 = 58382573494600LL;
	volatile int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = INT32_MIN;

    t59 = (((x237<=x238)==x239)^x240);

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	uint8_t x242 = 120U;
	int16_t x243 = 66;
	int32_t x244 = INT32_MIN;

    t60 = (((x241<=x242)==x243)^x244);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = INT32_MIN;
	uint16_t x246 = 93U;
	uint64_t x247 = 299621398333024LLU;
	int16_t x248 = INT16_MAX;

    t61 = (((x245<=x246)==x247)^x248);

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = INT64_MAX;
	int16_t x251 = -1;
	int8_t x252 = -29;

    t62 = (((x249<=x250)==x251)^x252);

    if (t62 != -29) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 10049U;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t63 = -7;

    t63 = (((x253<=x254)==x255)^x256);

    if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 338;
	uint16_t x258 = 19512U;
	int8_t x259 = INT8_MIN;
	int32_t t64 = -9;

    t64 = (((x257<=x258)==x259)^x260);

    if (t64 != -891406532) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 45197350;
	int8_t x263 = 58;
	static uint16_t x264 = 1U;
	volatile int32_t t65 = 7110379;

    t65 = (((x261<=x262)==x263)^x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MAX;
	static int16_t x267 = INT16_MIN;
	int32_t x268 = INT32_MAX;

    t66 = (((x265<=x266)==x267)^x268);

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	static volatile int32_t x270 = -7;
	volatile int32_t x271 = 1434615;
	static int64_t t67 = -67226548646395937LL;

    t67 = (((x269<=x270)==x271)^x272);

    if (t67 != -1045443916407187779LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = INT32_MAX;
	int8_t x274 = INT8_MIN;
	static int32_t x275 = INT32_MIN;
	static volatile int32_t t68 = 39;

    t68 = (((x273<=x274)==x275)^x276);

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = -3889042330040458LL;
	static int16_t x278 = INT16_MIN;
	volatile int16_t x279 = 6;
	int32_t x280 = 283;
	int32_t t69 = 6;

    t69 = (((x277<=x278)==x279)^x280);

    if (t69 != 283) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	uint8_t x283 = 1U;
	uint8_t x284 = 3U;
	volatile int32_t t70 = -48897336;

    t70 = (((x281<=x282)==x283)^x284);

    if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x285 = INT8_MAX;
	int16_t x286 = 101;
	static int32_t x287 = INT32_MIN;
	int8_t x288 = 1;
	volatile int32_t t71 = 504;

    t71 = (((x285<=x286)==x287)^x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	int16_t x290 = INT16_MAX;
	volatile int64_t x292 = INT64_MAX;

    t72 = (((x289<=x290)==x291)^x292);

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	volatile uint16_t x296 = 3U;
	static volatile int32_t t73 = 75443;

    t73 = (((x293<=x294)==x295)^x296);

    if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -3;
	static uint8_t x299 = 36U;
	uint64_t x300 = 850327081057249LLU;

    t74 = (((x297<=x298)==x299)^x300);

    if (t74 != 850327081057249LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	int16_t x302 = -128;
	int64_t x304 = -6824719075387LL;
	static int64_t t75 = -1243706517383LL;

    t75 = (((x301<=x302)==x303)^x304);

    if (t75 != -6824719075387LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = -132231550597095LL;
	volatile int64_t x308 = INT64_MIN;
	static volatile int64_t t76 = INT64_MIN;

    t76 = (((x305<=x306)==x307)^x308);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	static volatile int32_t x310 = -3430;
	int64_t x311 = INT64_MIN;
	int8_t x312 = -3;
	int32_t t77 = -27602567;

    t77 = (((x309<=x310)==x311)^x312);

    if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = 0U;
	static int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MAX;
	volatile int32_t t78 = INT32_MAX;

    t78 = (((x313<=x314)==x315)^x316);

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x319 = 6620U;
	int32_t x320 = INT32_MAX;

    t79 = (((x317<=x318)==x319)^x320);

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = -1;
	static volatile uint8_t x322 = 23U;
	static int32_t x323 = INT32_MIN;
	int32_t t80 = 323690;

    t80 = (((x321<=x322)==x323)^x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	static int32_t x327 = INT32_MIN;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t81 = INT64_MIN;

    t81 = (((x325<=x326)==x327)^x328);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x330 = INT64_MIN;
	int32_t x331 = -687955120;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = 41635;

    t82 = (((x329<=x330)==x331)^x332);

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x334 = 0;
	int8_t x335 = INT8_MIN;
	int8_t x336 = 0;
	volatile int32_t t83 = -1;

    t83 = (((x333<=x334)==x335)^x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 31U;
	static int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MAX;
	int32_t x340 = 42152541;
	volatile int32_t t84 = -3733814;

    t84 = (((x337<=x338)==x339)^x340);

    if (t84 != 42152541) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MAX;
	static int64_t x344 = INT64_MIN;

    t85 = (((x341<=x342)==x343)^x344);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = INT64_MAX;
	uint32_t x346 = 2027U;
	int16_t x348 = -1;
	static volatile int32_t t86 = 0;

    t86 = (((x345<=x346)==x347)^x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = -17008356170948248LL;
	int32_t t87 = -12;

    t87 = (((x349<=x350)==x351)^x352);

    if (t87 != 3734329) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x353 = -1;
	static uint8_t x354 = 49U;
	uint8_t x355 = UINT8_MAX;
	volatile uint64_t x356 = 1774328218947305LLU;
	uint64_t t88 = 8799LLU;

    t88 = (((x353<=x354)==x355)^x356);

    if (t88 != 1774328218947305LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x358 = INT16_MIN;
	int64_t x359 = 22LL;
	uint64_t x360 = 4841769LLU;

    t89 = (((x357<=x358)==x359)^x360);

    if (t89 != 4841769LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x362 = UINT8_MAX;
	int32_t x363 = -100;
	volatile int16_t x364 = 1;
	int32_t t90 = -1091665;

    t90 = (((x361<=x362)==x363)^x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x365 = 9048U;
	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MAX;
	static int32_t x368 = -1;
	volatile int32_t t91 = 55804975;

    t91 = (((x365<=x366)==x367)^x368);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x369 = 700U;
	volatile int64_t x370 = INT64_MIN;
	uint32_t x371 = 0U;
	uint64_t x372 = UINT64_MAX;

    t92 = (((x369<=x370)==x371)^x372);

    if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x374 = 54LLU;
	int32_t x375 = INT32_MAX;
	uint8_t x376 = 62U;

    t93 = (((x373<=x374)==x375)^x376);

    if (t93 != 62) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x378 = INT32_MAX;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 3541;

    t94 = (((x377<=x378)==x379)^x380);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	static uint16_t x382 = 96U;
	int8_t x383 = -5;
	volatile int64_t x384 = -137690463LL;
	volatile int64_t t95 = 265377LL;

    t95 = (((x381<=x382)==x383)^x384);

    if (t95 != -137690463LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	uint64_t x386 = 405498367820502668LLU;
	volatile int32_t x387 = -1;
	uint16_t x388 = UINT16_MAX;
	int32_t t96 = 909074525;

    t96 = (((x385<=x386)==x387)^x388);

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	static int32_t x390 = 3;
	int32_t t97 = -50239325;

    t97 = (((x389<=x390)==x391)^x392);

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -827967LL;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t t98 = -6787;

    t98 = (((x393<=x394)==x395)^x396);

    if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -350638;

    t99 = (((x397<=x398)==x399)^x400);

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = -1;
	uint32_t x404 = 56U;
	volatile uint32_t t100 = 19475U;

    t100 = (((x401<=x402)==x403)^x404);

    if (t100 != 56U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	int32_t x406 = -1612;
	int8_t x407 = -6;
	uint8_t x408 = 13U;

    t101 = (((x405<=x406)==x407)^x408);

    if (t101 != 13) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x410 = 40U;
	int8_t x411 = -1;
	int32_t x412 = INT32_MIN;

    t102 = (((x409<=x410)==x411)^x412);

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x413 = 534224859U;
	int16_t x414 = INT16_MAX;
	int32_t x415 = -1;
	uint16_t x416 = 8927U;
	static int32_t t103 = -1;

    t103 = (((x413<=x414)==x415)^x416);

    if (t103 != 8927) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = INT32_MIN;
	static uint8_t x418 = 55U;
	int8_t x419 = INT8_MAX;
	volatile int32_t x420 = 237072;
	int32_t t104 = 127902;

    t104 = (((x417<=x418)==x419)^x420);

    if (t104 != 237072) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MAX;
	int16_t x424 = INT16_MAX;
	int32_t t105 = 51042;

    t105 = (((x421<=x422)==x423)^x424);

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	static volatile int32_t x426 = -1275752;
	volatile int64_t x427 = 196844533153048125LL;
	int8_t x428 = INT8_MAX;
	int32_t t106 = 23210;

    t106 = (((x425<=x426)==x427)^x428);

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 2U;
	int8_t x430 = -1;
	volatile int32_t x431 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;
	uint64_t t107 = UINT64_MAX;

    t107 = (((x429<=x430)==x431)^x432);

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 4409779586817LLU;
	volatile int16_t x434 = -1;
	uint32_t x435 = 3U;

    t108 = (((x433<=x434)==x435)^x436);

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int64_t x438 = -253832182481560051LL;
	static uint32_t x439 = 9U;
	int32_t t109 = 111056294;

    t109 = (((x437<=x438)==x439)^x440);

    if (t109 != -50) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int64_t x442 = -1LL;
	uint64_t x443 = UINT64_MAX;
	int64_t x444 = INT64_MIN;
	volatile int64_t t110 = INT64_MIN;

    t110 = (((x441<=x442)==x443)^x444);

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = UINT16_MAX;
	int64_t x446 = INT64_MAX;
	volatile int32_t x448 = -1;

    t111 = (((x445<=x446)==x447)^x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	volatile int16_t x450 = INT16_MAX;
	volatile int8_t x451 = INT8_MAX;
	int64_t t112 = 3861045LL;

    t112 = (((x449<=x450)==x451)^x452);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x454 = 486088031331342487LLU;
	int16_t x455 = INT16_MIN;
	int8_t x456 = -1;
	volatile int32_t t113 = 16879237;

    t113 = (((x453<=x454)==x455)^x456);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -205;
	volatile int16_t x458 = 127;
	uint16_t x460 = 0U;

    t114 = (((x457<=x458)==x459)^x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = -1LL;
	int8_t x463 = 52;
	int16_t x464 = INT16_MAX;
	volatile int32_t t115 = -26062;

    t115 = (((x461<=x462)==x463)^x464);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = INT32_MIN;
	static int64_t x467 = INT64_MAX;
	uint64_t t116 = UINT64_MAX;

    t116 = (((x465<=x466)==x467)^x468);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = INT8_MIN;
	uint8_t x470 = 0U;
	uint64_t x471 = 125822LLU;
	int32_t x472 = INT32_MAX;
	volatile int32_t t117 = INT32_MAX;

    t117 = (((x469<=x470)==x471)^x472);

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	uint64_t x474 = UINT64_MAX;
	int8_t x475 = INT8_MIN;
	static volatile int32_t t118 = 1;

    t118 = (((x473<=x474)==x475)^x476);

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x477 = 474LLU;
	int8_t x478 = 31;
	volatile int32_t x479 = -1;
	static volatile int8_t x480 = INT8_MIN;
	volatile int32_t t119 = -12373688;

    t119 = (((x477<=x478)==x479)^x480);

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -676;
	volatile int8_t x482 = -1;
	static int16_t x483 = 6160;
	uint8_t x484 = UINT8_MAX;
	static int32_t t120 = -388;

    t120 = (((x481<=x482)==x483)^x484);

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	int16_t x486 = -1;
	static uint8_t x487 = 83U;
	volatile int32_t t121 = -381;

    t121 = (((x485<=x486)==x487)^x488);

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MAX;
	int8_t x490 = -1;

    t122 = (((x489<=x490)==x491)^x492);

    if (t122 != 18503) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MIN;
	int8_t x495 = -1;
	uint64_t x496 = UINT64_MAX;

    t123 = (((x493<=x494)==x495)^x496);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = -1;
	static uint32_t x498 = 98U;
	volatile int32_t x499 = -1382944;
	int8_t x500 = -1;
	volatile int32_t t124 = -1789242;

    t124 = (((x497<=x498)==x499)^x500);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	static uint64_t x502 = 7950425235627687LLU;
	uint64_t x503 = 231618777341LLU;
	static uint32_t x504 = UINT32_MAX;

    t125 = (((x501<=x502)==x503)^x504);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	volatile int16_t x506 = 2376;
	int16_t x507 = -10642;
	int16_t x508 = -1;
	int32_t t126 = 26;

    t126 = (((x505<=x506)==x507)^x508);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MAX;
	uint64_t x510 = 3733603LLU;
	volatile int64_t t127 = -169549665LL;

    t127 = (((x509<=x510)==x511)^x512);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -11245;
	int32_t x514 = 62901;
	uint16_t x515 = 436U;

    t128 = (((x513<=x514)==x515)^x516);

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = -1;
	static uint16_t x518 = UINT16_MAX;
	static int16_t x519 = -1;
	int16_t x520 = INT16_MAX;
	volatile int32_t t129 = 11735;

    t129 = (((x517<=x518)==x519)^x520);

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x522 = UINT64_MAX;
	int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MAX;
	volatile int32_t t130 = -160338588;

    t130 = (((x521<=x522)==x523)^x524);

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x526 = -1;
	volatile int8_t x527 = INT8_MIN;
	uint32_t x528 = 1822U;

    t131 = (((x525<=x526)==x527)^x528);

    if (t131 != 1822U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = UINT32_MAX;
	uint8_t x531 = 24U;
	int64_t x532 = 31079519827LL;
	volatile int64_t t132 = -2010276359261194LL;

    t132 = (((x529<=x530)==x531)^x532);

    if (t132 != 31079519827LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 287U;
	int32_t x534 = INT32_MAX;
	uint64_t x535 = 50984481LLU;
	volatile int32_t t133 = 3;

    t133 = (((x533<=x534)==x535)^x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = INT8_MAX;
	int32_t x538 = INT32_MIN;
	static int32_t x539 = INT32_MAX;
	volatile uint32_t t134 = 474848566U;

    t134 = (((x537<=x538)==x539)^x540);

    if (t134 != 24147273U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = UINT32_MAX;
	volatile int16_t x542 = -2;
	uint32_t x543 = UINT32_MAX;
	static uint8_t x544 = 7U;
	int32_t t135 = -9;

    t135 = (((x541<=x542)==x543)^x544);

    if (t135 != 7) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 345277U;
	int16_t x546 = INT16_MIN;
	volatile int8_t x547 = 1;
	volatile uint32_t x548 = 6541U;

    t136 = (((x545<=x546)==x547)^x548);

    if (t136 != 6540U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 4047346LLU;
	int8_t x550 = -1;
	int32_t x551 = INT32_MIN;

    t137 = (((x549<=x550)==x551)^x552);

    if (t137 != 4661) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -1;
	uint8_t x554 = 27U;
	static int32_t x555 = INT32_MAX;
	uint8_t x556 = 3U;

    t138 = (((x553<=x554)==x555)^x556);

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -27;
	int8_t x559 = -21;
	volatile int32_t t139 = 9453320;

    t139 = (((x557<=x558)==x559)^x560);

    if (t139 != 47) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x563 = INT8_MIN;
	uint64_t x564 = 24551LLU;
	uint64_t t140 = 19868724791005LLU;

    t140 = (((x561<=x562)==x563)^x564);

    if (t140 != 24551LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = INT16_MIN;
	volatile int8_t x568 = -8;
	int32_t t141 = -28531;

    t141 = (((x565<=x566)==x567)^x568);

    if (t141 != -8) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	int16_t x570 = INT16_MIN;
	int8_t x571 = 0;
	int32_t x572 = -907;
	static volatile int32_t t142 = -13100;

    t142 = (((x569<=x570)==x571)^x572);

    if (t142 != -908) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	int8_t x574 = INT8_MIN;
	static int32_t x575 = -1;
	int64_t x576 = -1LL;
	static volatile int64_t t143 = 1LL;

    t143 = (((x573<=x574)==x575)^x576);

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 6022255LLU;
	int64_t x578 = -1LL;
	volatile int16_t x579 = INT16_MIN;
	volatile uint32_t x580 = 2307008U;
	uint32_t t144 = 62672U;

    t144 = (((x577<=x578)==x579)^x580);

    if (t144 != 2307008U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = 5641;
	static uint64_t x582 = UINT64_MAX;
	int64_t x583 = 39030613872LL;

    t145 = (((x581<=x582)==x583)^x584);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = INT16_MIN;
	volatile uint16_t x586 = UINT16_MAX;
	uint16_t x587 = 204U;
	int8_t x588 = -21;
	volatile int32_t t146 = 51225643;

    t146 = (((x585<=x586)==x587)^x588);

    if (t146 != -21) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 2U;
	uint8_t x590 = UINT8_MAX;
	uint16_t x591 = UINT16_MAX;
	int64_t x592 = -1LL;

    t147 = (((x589<=x590)==x591)^x592);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = INT64_MIN;
	uint64_t x595 = UINT64_MAX;
	int32_t x596 = INT32_MAX;
	volatile int32_t t148 = INT32_MAX;

    t148 = (((x593<=x594)==x595)^x596);

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x597 = 9452883594685536LLU;
	int8_t x599 = -1;
	volatile int64_t x600 = INT64_MAX;

    t149 = (((x597<=x598)==x599)^x600);

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 11395913;
	static int64_t x602 = 54LL;
	static int32_t x603 = -80034742;
	int16_t x604 = -1;
	volatile int32_t t150 = -300988875;

    t150 = (((x601<=x602)==x603)^x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x606 = INT8_MIN;
	uint16_t x607 = 53U;
	uint16_t x608 = 132U;
	int32_t t151 = 3196;

    t151 = (((x605<=x606)==x607)^x608);

    if (t151 != 132) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MAX;
	uint64_t x611 = 12869547LLU;
	int16_t x612 = 28;
	volatile int32_t t152 = -123873;

    t152 = (((x609<=x610)==x611)^x612);

    if (t152 != 28) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = -1;
	int64_t x615 = -924LL;
	int8_t x616 = 45;
	int32_t t153 = -54212;

    t153 = (((x613<=x614)==x615)^x616);

    if (t153 != 45) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 212241U;
	static uint64_t x619 = UINT64_MAX;
	int32_t x620 = INT32_MIN;
	static volatile int32_t t154 = INT32_MIN;

    t154 = (((x617<=x618)==x619)^x620);

    if (t154 != INT32_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 852LL;
	static int16_t x622 = INT16_MIN;
	static int16_t x623 = 1;
	static volatile int64_t x624 = -1LL;
	volatile int64_t t155 = -4274105LL;

    t155 = (((x621<=x622)==x623)^x624);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	static int16_t x626 = INT16_MIN;
	uint8_t x627 = 31U;
	volatile int32_t t156 = -115641627;

    t156 = (((x625<=x626)==x627)^x628);

    if (t156 != 3713) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = 4169U;
	int64_t x630 = -19LL;
	static int8_t x631 = 3;
	volatile int64_t t157 = INT64_MIN;

    t157 = (((x629<=x630)==x631)^x632);

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x634 = UINT64_MAX;
	uint64_t x635 = 438996157722LLU;
	static int64_t x636 = 415355916422888569LL;

    t158 = (((x633<=x634)==x635)^x636);

    if (t158 != 415355916422888569LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	int16_t x638 = 5810;
	volatile int16_t x639 = INT16_MIN;
	uint32_t x640 = 6U;
	volatile uint32_t t159 = 20U;

    t159 = (((x637<=x638)==x639)^x640);

    if (t159 != 6U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	int64_t x643 = INT64_MAX;
	int8_t x644 = 22;
	int32_t t160 = 584;

    t160 = (((x641<=x642)==x643)^x644);

    if (t160 != 22) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	uint8_t x646 = UINT8_MAX;
	static int8_t x647 = INT8_MAX;
	int8_t x648 = -1;

    t161 = (((x645<=x646)==x647)^x648);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int64_t x651 = INT64_MIN;

    t162 = (((x649<=x650)==x651)^x652);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -61;
	int64_t x654 = INT64_MIN;
	int32_t x655 = INT32_MAX;
	int16_t x656 = -1;
	int32_t t163 = -6718;

    t163 = (((x653<=x654)==x655)^x656);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x658 = INT8_MAX;
	uint32_t x659 = UINT32_MAX;
	volatile int32_t x660 = 113016627;

    t164 = (((x657<=x658)==x659)^x660);

    if (t164 != 113016627) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	uint32_t x662 = UINT32_MAX;
	uint8_t x664 = UINT8_MAX;

    t165 = (((x661<=x662)==x663)^x664);

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int32_t x666 = -1460986;
	uint8_t x668 = UINT8_MAX;
	int32_t t166 = -1;

    t166 = (((x665<=x666)==x667)^x668);

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x670 = INT16_MIN;
	int32_t t167 = 2;

    t167 = (((x669<=x670)==x671)^x672);

    if (t167 != 4) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -457;
	int64_t x674 = -1LL;
	int8_t x675 = 56;

    t168 = (((x673<=x674)==x675)^x676);

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	int32_t x678 = INT32_MIN;
	volatile int8_t x679 = -1;
	uint16_t x680 = 412U;
	static int32_t t169 = 7461;

    t169 = (((x677<=x678)==x679)^x680);

    if (t169 != 412) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = -4;
	uint32_t x682 = 5U;
	static uint16_t x683 = UINT16_MAX;
	volatile int16_t x684 = INT16_MIN;
	int32_t t170 = 81365;

    t170 = (((x681<=x682)==x683)^x684);

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = 0;
	int32_t x686 = INT32_MIN;
	int32_t x687 = -286291;
	int32_t x688 = 1;

    t171 = (((x685<=x686)==x687)^x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 4935446164LL;
	int64_t x690 = -1LL;
	int8_t x691 = INT8_MIN;
	int8_t x692 = INT8_MIN;
	int32_t t172 = 501;

    t172 = (((x689<=x690)==x691)^x692);

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	int32_t x694 = INT32_MIN;
	uint16_t x695 = 53U;
	int8_t x696 = -1;

    t173 = (((x693<=x694)==x695)^x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x698 = UINT16_MAX;
	volatile int32_t x700 = INT32_MAX;
	static int32_t t174 = INT32_MAX;

    t174 = (((x697<=x698)==x699)^x700);

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -119;
	int16_t x702 = INT16_MIN;
	int8_t x703 = -2;

    t175 = (((x701<=x702)==x703)^x704);

    if (t175 != 4) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int8_t x708 = 39;
	volatile int32_t t176 = -544380128;

    t176 = (((x705<=x706)==x707)^x708);

    if (t176 != 39) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 0U;
	int32_t x711 = -1;
	int8_t x712 = -1;
	volatile int32_t t177 = 228289903;

    t177 = (((x709<=x710)==x711)^x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = INT16_MIN;
	static uint8_t x715 = UINT8_MAX;
	int64_t t178 = 25LL;

    t178 = (((x713<=x714)==x715)^x716);

    if (t178 != 52408948689402671LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 1;
	volatile int64_t x718 = INT64_MAX;
	uint16_t x719 = UINT16_MAX;
	int8_t x720 = 33;
	static volatile int32_t t179 = 584794617;

    t179 = (((x717<=x718)==x719)^x720);

    if (t179 != 33) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MIN;
	int16_t x723 = INT16_MIN;
	static volatile int16_t x724 = -7;
	volatile int32_t t180 = -1;

    t180 = (((x721<=x722)==x723)^x724);

    if (t180 != -7) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 6LL;
	uint64_t x726 = 376621LLU;
	volatile uint64_t x727 = UINT64_MAX;
	int64_t x728 = INT64_MIN;
	static volatile int64_t t181 = INT64_MIN;

    t181 = (((x725<=x726)==x727)^x728);

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = -1;
	static uint32_t x730 = 535059U;
	int32_t x731 = INT32_MAX;
	volatile uint32_t x732 = 1625U;
	uint32_t t182 = 19410694U;

    t182 = (((x729<=x730)==x731)^x732);

    if (t182 != 1625U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MAX;
	volatile int8_t x734 = INT8_MIN;

    t183 = (((x733<=x734)==x735)^x736);

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MIN;
	int8_t x739 = -56;
	int16_t x740 = 14;
	volatile int32_t t184 = 27345;

    t184 = (((x737<=x738)==x739)^x740);

    if (t184 != 14) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	static int64_t x742 = INT64_MIN;
	uint8_t x743 = UINT8_MAX;
	uint64_t t185 = 2293172089627824919LLU;

    t185 = (((x741<=x742)==x743)^x744);

    if (t185 != 186670LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 1U;
	int8_t x748 = INT8_MIN;
	volatile int32_t t186 = 53597;

    t186 = (((x745<=x746)==x747)^x748);

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = INT32_MIN;
	volatile int8_t x750 = INT8_MIN;
	static int64_t x751 = INT64_MAX;
	int64_t x752 = -5072LL;
	int64_t t187 = -7LL;

    t187 = (((x749<=x750)==x751)^x752);

    if (t187 != -5072LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = -15;
	int16_t x756 = INT16_MAX;
	int32_t t188 = -136600;

    t188 = (((x753<=x754)==x755)^x756);

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x758 = 6U;
	int8_t x759 = INT8_MIN;
	int8_t x760 = -13;
	volatile int32_t t189 = -821705742;

    t189 = (((x757<=x758)==x759)^x760);

    if (t189 != -13) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 259846303U;
	uint64_t x762 = 12637156428214LLU;
	int16_t x764 = -1;
	volatile int32_t t190 = 44;

    t190 = (((x761<=x762)==x763)^x764);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x765 = INT8_MIN;
	uint32_t x766 = 15188U;
	static uint16_t x767 = UINT16_MAX;
	int16_t x768 = 518;
	int32_t t191 = -59757168;

    t191 = (((x765<=x766)==x767)^x768);

    if (t191 != 518) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 2U;
	int8_t x770 = -1;
	static int16_t x771 = INT16_MAX;
	static int64_t x772 = INT64_MAX;
	volatile int64_t t192 = INT64_MAX;

    t192 = (((x769<=x770)==x771)^x772);

    if (t192 != INT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x775 = INT64_MIN;
	int32_t x776 = -1;
	volatile int32_t t193 = -640037385;

    t193 = (((x773<=x774)==x775)^x776);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -2;
	volatile uint64_t x779 = UINT64_MAX;

    t194 = (((x777<=x778)==x779)^x780);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x783 = -96542228318LL;
	int8_t x784 = 51;
	volatile int32_t t195 = -5447;

    t195 = (((x781<=x782)==x783)^x784);

    if (t195 != 51) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = INT32_MIN;
	volatile int16_t x788 = INT16_MAX;
	int32_t t196 = -250281276;

    t196 = (((x785<=x786)==x787)^x788);

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	int32_t x790 = INT32_MIN;
	volatile int32_t t197 = 274;

    t197 = (((x789<=x790)==x791)^x792);

    if (t197 != 23) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MAX;
	uint32_t x794 = 215U;

    t198 = (((x793<=x794)==x795)^x796);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 6655U;
	volatile int8_t x798 = -11;
	int8_t x799 = 0;
	static uint32_t x800 = 16U;
	static volatile uint32_t t199 = 918876142U;

    t199 = (((x797<=x798)==x799)^x800);

    if (t199 != 17U) { NG(); } else { ; }
	
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

