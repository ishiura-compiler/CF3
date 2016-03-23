
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

volatile int32_t t0 = -1;
volatile int16_t x10 = INT16_MAX;
static int64_t x23 = -1LL;
int16_t x38 = -1;
uint8_t x39 = 28U;
int16_t x42 = -456;
int64_t x45 = INT64_MAX;
volatile int32_t t10 = INT32_MIN;
int8_t x50 = INT8_MIN;
int64_t t11 = -23446LL;
uint32_t x55 = 352100379U;
uint8_t x56 = UINT8_MAX;
int32_t x60 = INT32_MAX;
static volatile int32_t t13 = INT32_MAX;
volatile int32_t t14 = -18146;
volatile int32_t x68 = -1;
int32_t x72 = INT32_MAX;
uint64_t x73 = UINT64_MAX;
uint16_t x77 = 91U;
static int32_t x79 = -8532;
volatile uint16_t x84 = 6U;
volatile int64_t x85 = INT64_MIN;
int64_t x88 = INT64_MAX;
int16_t x93 = INT16_MIN;
int64_t x98 = INT64_MAX;
int16_t x102 = INT16_MIN;
volatile int8_t x103 = INT8_MIN;
static int32_t x105 = INT32_MIN;
volatile int64_t x108 = -2023832721505LL;
int64_t x112 = INT64_MIN;
int64_t x123 = -1LL;
int32_t x124 = -6;
int8_t x128 = INT8_MIN;
volatile int8_t x129 = -1;
int32_t x130 = -88971;
int16_t x132 = -26;
int16_t x135 = INT16_MIN;
uint32_t x137 = 840106U;
uint64_t x146 = 702841826505LLU;
uint16_t x148 = 10261U;
volatile int8_t x160 = -1;
static volatile int32_t t40 = -4412;
int16_t x174 = INT16_MIN;
int16_t x178 = INT16_MAX;
int32_t x180 = -7014844;
int32_t x183 = INT32_MIN;
volatile int8_t x185 = INT8_MIN;
uint8_t x189 = 16U;
int16_t x190 = INT16_MIN;
uint32_t t45 = 1950547U;
static int64_t x195 = -1LL;
uint16_t x197 = 647U;
int16_t x198 = INT16_MAX;
uint64_t t47 = 8842LLU;
static volatile int32_t t48 = -243;
uint64_t x205 = 218706020LLU;
int16_t x207 = -309;
int32_t t50 = -22797;
volatile int8_t x213 = INT8_MAX;
volatile int32_t t51 = 11387;
static volatile int32_t t53 = -17242864;
int16_t x233 = -27;
volatile int16_t x235 = -294;
int64_t t56 = 1714065LL;
int32_t t57 = -53360;
static int32_t x244 = -1;
int32_t x250 = INT32_MAX;
int16_t x251 = 1;
static volatile int64_t x255 = INT64_MIN;
int16_t x257 = -1;
uint16_t x258 = UINT16_MAX;
uint32_t x273 = 46274U;
uint64_t x274 = 148879LLU;
volatile int8_t x281 = INT8_MIN;
int32_t t67 = -5;
static uint8_t x292 = 0U;
volatile uint16_t x296 = 239U;
volatile int32_t t70 = 24748239;
int8_t x309 = INT8_MIN;
static volatile int32_t t74 = 4019;
int32_t x321 = INT32_MAX;
uint64_t x326 = 741398522776LLU;
uint32_t x327 = 7422199U;
volatile int64_t x332 = 111803089435LL;
uint8_t x335 = 64U;
uint64_t x346 = UINT64_MAX;
int8_t x348 = -1;
uint8_t x351 = 49U;
uint32_t x355 = 50535U;
int8_t x356 = INT8_MIN;
int16_t x358 = -6;
int32_t x366 = -2260768;
uint64_t t89 = 700485299076968469LLU;
static uint32_t t91 = 694U;
int8_t x383 = INT8_MIN;
int8_t x385 = INT8_MAX;
static uint64_t x388 = 10201657129563700LLU;
volatile uint64_t x395 = 198419288LLU;
uint8_t x396 = 114U;
int32_t t95 = -29008034;
int64_t x398 = 15510LL;
uint64_t t96 = 2154LLU;
static volatile int64_t x405 = INT64_MIN;
static volatile int32_t t100 = 203981089;
static uint32_t t102 = 8U;
int8_t x433 = INT8_MIN;
int64_t x434 = -29045LL;
volatile uint8_t x435 = UINT8_MAX;
int64_t t106 = INT64_MAX;
uint16_t x441 = 484U;
static uint32_t x451 = 213U;
int32_t x452 = INT32_MIN;
volatile int32_t x453 = -10582277;
uint8_t x458 = 3U;
static int8_t x459 = INT8_MIN;
uint64_t x467 = 2426628786744414LLU;
volatile int8_t x474 = INT8_MIN;
int64_t x483 = INT64_MIN;
int32_t x488 = INT32_MIN;
int64_t x489 = INT64_MIN;
static uint64_t x491 = UINT64_MAX;
volatile uint16_t x496 = UINT16_MAX;
uint32_t x502 = UINT32_MAX;
int32_t x506 = INT32_MIN;
static int8_t x508 = -1;
uint32_t x509 = 17899U;
static int32_t x515 = INT32_MAX;
int64_t x519 = INT64_MAX;
volatile int64_t x520 = INT64_MAX;
int8_t x522 = INT8_MIN;
int32_t x523 = INT32_MIN;
volatile int64_t x535 = -151148353813603730LL;
int32_t t130 = -69992;
int8_t x537 = INT8_MAX;
int32_t x539 = INT32_MIN;
volatile int8_t x547 = INT8_MAX;
int16_t x551 = INT16_MIN;
uint64_t x553 = 12356191LLU;
static int8_t x554 = INT8_MIN;
uint8_t x574 = 26U;
int8_t x583 = INT8_MAX;
int32_t t142 = -16884101;
int64_t x589 = 14464383042926LL;
int8_t x593 = INT8_MIN;
int32_t t148 = -64799598;
static int8_t x613 = -59;
static volatile int32_t t150 = INT32_MIN;
static uint16_t x617 = UINT16_MAX;
uint32_t x622 = 178U;
int32_t t152 = 461;
int8_t x629 = 13;
int32_t t155 = -20;
uint64_t x640 = 1008563046LLU;
uint16_t x641 = 5099U;
volatile int8_t x646 = 8;
int32_t x650 = -171;
int32_t x652 = -1;
static int16_t x655 = 11;
int64_t x660 = INT64_MIN;
static int32_t x663 = 62305602;
int32_t x669 = -32108;
int64_t x677 = INT64_MAX;
int64_t x679 = INT64_MAX;
volatile int16_t x681 = -8460;
int64_t x682 = INT64_MAX;
static int16_t x686 = INT16_MIN;
static int32_t x687 = -1;
int16_t x688 = -267;
int8_t x689 = INT8_MIN;
static int16_t x690 = 1;
int64_t t168 = INT64_MIN;
int8_t x694 = INT8_MAX;
int8_t x695 = -1;
int8_t x696 = 1;
int16_t x711 = 27;
int16_t x712 = -46;
int64_t x732 = INT64_MIN;
int8_t x733 = INT8_MIN;
uint32_t x742 = 281640868U;
volatile int32_t t180 = 13;
uint64_t x747 = 1LLU;
volatile int32_t t182 = -7297752;
volatile uint64_t t183 = 23772063666112LLU;
static volatile int32_t t184 = 108072159;
uint64_t x761 = UINT64_MAX;
int16_t x764 = INT16_MAX;
int8_t x777 = INT8_MAX;
int16_t x779 = 1;
volatile int8_t x784 = INT8_MIN;
int16_t x785 = INT16_MAX;
volatile uint32_t t192 = 3798779U;
static int16_t x796 = 14;
uint32_t x806 = 308293U;
uint8_t x813 = 25U;
volatile uint32_t t199 = 118U;


void f0(void) {
    	int8_t x1 = 7;
	int32_t x2 = 128964;
	volatile int32_t x3 = INT32_MIN;
	int16_t x4 = -197;

    t0 = (((x1%x2)!=x3)*x4);

    if (t0 != -197) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 8195934U;
	static volatile int8_t x6 = -2;
	int32_t x7 = 1831657;
	static int64_t x8 = -1LL;
	volatile int64_t t1 = 1664LL;

    t1 = (((x5%x6)!=x7)*x8);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -5;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -1LL;
	int64_t t2 = -198246189762891255LL;

    t2 = (((x9%x10)!=x11)*x12);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 2U;
	int64_t x14 = INT64_MAX;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 1632766U;
	volatile uint32_t t3 = 609440315U;

    t3 = (((x13%x14)!=x15)*x16);

    if (t3 != 1632766U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile uint16_t x18 = 4U;
	int32_t x19 = INT32_MIN;
	static int32_t x20 = INT32_MAX;
	volatile int32_t t4 = INT32_MAX;

    t4 = (((x17%x18)!=x19)*x20);

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	static int32_t x22 = INT32_MIN;
	volatile uint16_t x24 = 111U;
	int32_t t5 = 122356;

    t5 = (((x21%x22)!=x23)*x24);

    if (t5 != 111) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = 25408758016722010LLU;
	uint64_t t6 = 67LLU;

    t6 = (((x25%x26)!=x27)*x28);

    if (t6 != 25408758016722010LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x33 = -1;
	int64_t x34 = -5943LL;
	int64_t x35 = INT64_MIN;
	volatile int32_t x36 = INT32_MAX;
	int32_t t7 = INT32_MAX;

    t7 = (((x33%x34)!=x35)*x36);

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 13190U;
	uint32_t x40 = UINT32_MAX;
	uint32_t t8 = UINT32_MAX;

    t8 = (((x37%x38)!=x39)*x40);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x41 = 0;
	int64_t x43 = INT64_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t9 = 1863510;

    t9 = (((x41%x42)!=x43)*x44);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x46 = UINT64_MAX;
	volatile int8_t x47 = 0;
	static int32_t x48 = INT32_MIN;

    t10 = (((x45%x46)!=x47)*x48);

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x49 = 0;
	volatile uint16_t x51 = 26902U;
	volatile int64_t x52 = 0LL;

    t11 = (((x49%x50)!=x51)*x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	int16_t x54 = INT16_MAX;
	static int32_t t12 = 6;

    t12 = (((x53%x54)!=x55)*x56);

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MAX;
	static uint8_t x58 = UINT8_MAX;
	int16_t x59 = 1;

    t13 = (((x57%x58)!=x59)*x60);

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x61 = 2U;
	static int32_t x62 = INT32_MAX;
	volatile int16_t x63 = INT16_MIN;
	static int16_t x64 = -1;

    t14 = (((x61%x62)!=x63)*x64);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MAX;
	volatile int8_t x66 = INT8_MIN;
	volatile int32_t x67 = -74437764;
	int32_t t15 = 0;

    t15 = (((x65%x66)!=x67)*x68);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	static int32_t x70 = -2243000;
	int16_t x71 = INT16_MIN;
	int32_t t16 = INT32_MAX;

    t16 = (((x69%x70)!=x71)*x72);

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = INT16_MAX;
	static uint32_t x75 = UINT32_MAX;
	volatile int16_t x76 = -11;
	volatile int32_t t17 = -10117422;

    t17 = (((x73%x74)!=x75)*x76);

    if (t17 != -11) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = INT32_MIN;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t18 = 35;

    t18 = (((x77%x78)!=x79)*x80);

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = -1LL;
	uint64_t x82 = 652318924651352LLU;
	int32_t x83 = INT32_MIN;
	static int32_t t19 = 515021975;

    t19 = (((x81%x82)!=x83)*x84);

    if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x86 = -1LL;
	uint32_t x87 = 250874U;
	int64_t t20 = INT64_MAX;

    t20 = (((x85%x86)!=x87)*x88);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MIN;
	volatile int64_t x90 = 1111960LL;
	int8_t x91 = INT8_MIN;
	static uint8_t x92 = 10U;
	static volatile int32_t t21 = 388427;

    t21 = (((x89%x90)!=x91)*x92);

    if (t21 != 10) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x94 = 4U;
	volatile int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t22 = -49;

    t22 = (((x93%x94)!=x95)*x96);

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x97 = 14823107LL;
	uint8_t x99 = 83U;
	uint32_t x100 = 89238942U;
	volatile uint32_t t23 = 893U;

    t23 = (((x97%x98)!=x99)*x100);

    if (t23 != 89238942U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -8519;
	static int16_t x104 = -1;
	volatile int32_t t24 = -346511712;

    t24 = (((x101%x102)!=x103)*x104);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = INT8_MAX;
	uint16_t x107 = 1U;
	volatile int64_t t25 = -500LL;

    t25 = (((x105%x106)!=x107)*x108);

    if (t25 != -2023832721505LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x109 = -13;
	int16_t x110 = INT16_MIN;
	uint8_t x111 = 0U;
	volatile int64_t t26 = INT64_MIN;

    t26 = (((x109%x110)!=x111)*x112);

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = 0;
	static volatile uint64_t x114 = 203766965LLU;
	uint8_t x115 = UINT8_MAX;
	uint8_t x116 = 0U;
	int32_t t27 = -8075;

    t27 = (((x113%x114)!=x115)*x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MIN;
	int32_t x119 = -1;
	static int64_t x120 = 55235788557LL;
	int64_t t28 = 250032946090683LL;

    t28 = (((x117%x118)!=x119)*x120);

    if (t28 != 55235788557LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x121 = 21;
	uint32_t x122 = UINT32_MAX;
	int32_t t29 = 1076605;

    t29 = (((x121%x122)!=x123)*x124);

    if (t29 != -6) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = INT64_MIN;
	int32_t x126 = 6;
	int16_t x127 = INT16_MIN;
	static int32_t t30 = 2;

    t30 = (((x125%x126)!=x127)*x128);

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x131 = UINT32_MAX;
	int32_t t31 = 3;

    t31 = (((x129%x130)!=x131)*x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x133 = INT16_MAX;
	int64_t x134 = INT64_MIN;
	volatile int8_t x136 = INT8_MAX;
	int32_t t32 = -265019695;

    t32 = (((x133%x134)!=x135)*x136);

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x138 = INT8_MAX;
	uint8_t x139 = UINT8_MAX;
	volatile int64_t x140 = -12871271641LL;
	volatile int64_t t33 = 571414072919766LL;

    t33 = (((x137%x138)!=x139)*x140);

    if (t33 != -12871271641LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = 4945223U;
	static int16_t x142 = INT16_MAX;
	int16_t x143 = -15;
	volatile int8_t x144 = INT8_MIN;
	static int32_t t34 = 674;

    t34 = (((x141%x142)!=x143)*x144);

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = 548;
	int64_t x147 = INT64_MIN;
	int32_t t35 = -116034816;

    t35 = (((x145%x146)!=x147)*x148);

    if (t35 != 10261) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	static volatile int16_t x150 = -315;
	volatile int8_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	static volatile int32_t t36 = -2;

    t36 = (((x149%x150)!=x151)*x152);

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x153 = INT16_MIN;
	static uint64_t x154 = 3471796LLU;
	static int16_t x155 = INT16_MIN;
	static int32_t x156 = -279498;
	static int32_t t37 = -701198023;

    t37 = (((x153%x154)!=x155)*x156);

    if (t37 != -279498) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = UINT32_MAX;
	static int64_t x158 = -1LL;
	volatile int32_t x159 = INT32_MAX;
	volatile int32_t t38 = -122999;

    t38 = (((x157%x158)!=x159)*x160);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	volatile uint64_t x162 = 1466LLU;
	static int64_t x163 = -1LL;
	static uint8_t x164 = 69U;
	volatile int32_t t39 = 1;

    t39 = (((x161%x162)!=x163)*x164);

    if (t39 != 69) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = 3;
	volatile int8_t x171 = -7;
	volatile uint16_t x172 = UINT16_MAX;

    t40 = (((x169%x170)!=x171)*x172);

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x173 = 1168881U;
	volatile int16_t x175 = -1;
	volatile int32_t x176 = INT32_MAX;
	static volatile int32_t t41 = INT32_MAX;

    t41 = (((x173%x174)!=x175)*x176);

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = 9;
	volatile int8_t x179 = INT8_MIN;
	volatile int32_t t42 = -461;

    t42 = (((x177%x178)!=x179)*x180);

    if (t42 != -7014844) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = 1;
	uint8_t x182 = 12U;
	int64_t x184 = INT64_MIN;
	static int64_t t43 = INT64_MIN;

    t43 = (((x181%x182)!=x183)*x184);

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x186 = UINT8_MAX;
	volatile int32_t x187 = INT32_MAX;
	volatile int32_t x188 = -1;
	static int32_t t44 = 124;

    t44 = (((x185%x186)!=x187)*x188);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x191 = INT64_MIN;
	uint32_t x192 = 153912U;

    t45 = (((x189%x190)!=x191)*x192);

    if (t45 != 153912U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x193 = 73;
	int64_t x194 = INT64_MIN;
	static int16_t x196 = -1;
	volatile int32_t t46 = 28;

    t46 = (((x193%x194)!=x195)*x196);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x199 = 50U;
	static uint64_t x200 = 1076LLU;

    t47 = (((x197%x198)!=x199)*x200);

    if (t47 != 1076LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = -115LL;
	volatile uint8_t x202 = 39U;
	static int32_t x203 = 1165;
	int32_t x204 = -11722;

    t48 = (((x201%x202)!=x203)*x204);

    if (t48 != -11722) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x206 = -1;
	int16_t x208 = -135;
	static volatile int32_t t49 = 26;

    t49 = (((x205%x206)!=x207)*x208);

    if (t49 != -135) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = INT16_MIN;
	static int64_t x210 = -1LL;
	volatile int16_t x211 = INT16_MIN;
	uint8_t x212 = UINT8_MAX;

    t50 = (((x209%x210)!=x211)*x212);

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x214 = INT32_MAX;
	int64_t x215 = -1LL;
	int16_t x216 = -1;

    t51 = (((x213%x214)!=x215)*x216);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x217 = INT8_MIN;
	uint32_t x218 = UINT32_MAX;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -1;
	int32_t t52 = 23531256;

    t52 = (((x217%x218)!=x219)*x220);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x221 = UINT8_MAX;
	int16_t x222 = 101;
	int32_t x223 = 0;
	int8_t x224 = -1;

    t53 = (((x221%x222)!=x223)*x224);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x225 = 12016198945LL;
	int32_t x226 = -2029244;
	int8_t x227 = INT8_MAX;
	int8_t x228 = 57;
	volatile int32_t t54 = 36593;

    t54 = (((x225%x226)!=x227)*x228);

    if (t54 != 57) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x229 = INT8_MAX;
	volatile uint32_t x230 = 1U;
	int16_t x231 = -1340;
	int16_t x232 = INT16_MIN;
	volatile int32_t t55 = -44827443;

    t55 = (((x229%x230)!=x231)*x232);

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x234 = INT64_MAX;
	static int64_t x236 = -1LL;

    t56 = (((x233%x234)!=x235)*x236);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x237 = INT8_MIN;
	uint16_t x238 = 189U;
	uint8_t x239 = 5U;
	int8_t x240 = INT8_MAX;

    t57 = (((x237%x238)!=x239)*x240);

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x241 = INT8_MIN;
	int64_t x242 = -1761340332104519LL;
	int32_t x243 = INT32_MIN;
	int32_t t58 = 66;

    t58 = (((x241%x242)!=x243)*x244);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x249 = INT16_MAX;
	volatile int64_t x252 = -1LL;
	int64_t t59 = 27939646074LL;

    t59 = (((x249%x250)!=x251)*x252);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x253 = UINT8_MAX;
	static int64_t x254 = INT64_MIN;
	uint8_t x256 = 1U;
	static volatile int32_t t60 = 477;

    t60 = (((x253%x254)!=x255)*x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x259 = 64U;
	int32_t x260 = -1;
	static int32_t t61 = -163547791;

    t61 = (((x257%x258)!=x259)*x260);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = -1LL;
	int16_t x262 = INT16_MAX;
	static uint64_t x263 = 2035184477LLU;
	static int8_t x264 = INT8_MAX;
	int32_t t62 = 48868;

    t62 = (((x261%x262)!=x263)*x264);

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x265 = INT8_MIN;
	int8_t x266 = -1;
	static volatile int16_t x267 = INT16_MAX;
	volatile int64_t x268 = INT64_MAX;
	static int64_t t63 = INT64_MAX;

    t63 = (((x265%x266)!=x267)*x268);

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = 1367969;
	volatile int64_t x270 = -92802155328615602LL;
	int8_t x271 = INT8_MIN;
	static volatile uint16_t x272 = 3405U;
	int32_t t64 = 2887631;

    t64 = (((x269%x270)!=x271)*x272);

    if (t64 != 3405) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x275 = INT8_MIN;
	int16_t x276 = -1;
	volatile int32_t t65 = -500986399;

    t65 = (((x273%x274)!=x275)*x276);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = -1;
	static volatile int8_t x278 = 5;
	static int32_t x279 = 2;
	int16_t x280 = INT16_MAX;
	volatile int32_t t66 = -154994;

    t66 = (((x277%x278)!=x279)*x280);

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x282 = 3657299U;
	static uint32_t x283 = 886U;
	static volatile int8_t x284 = -1;

    t67 = (((x281%x282)!=x283)*x284);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x285 = INT64_MIN;
	int64_t x286 = -1LL;
	int16_t x287 = -2;
	int32_t x288 = 14844;
	volatile int32_t t68 = 712;

    t68 = (((x285%x286)!=x287)*x288);

    if (t68 != 14844) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x289 = 1U;
	int32_t x290 = -1;
	static uint32_t x291 = 24U;
	volatile int32_t t69 = 201401760;

    t69 = (((x289%x290)!=x291)*x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x293 = 2U;
	static int64_t x294 = 2LL;
	uint64_t x295 = UINT64_MAX;

    t70 = (((x293%x294)!=x295)*x296);

    if (t70 != 239) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = 30;
	uint8_t x298 = UINT8_MAX;
	uint32_t x299 = UINT32_MAX;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t71 = 48054392;

    t71 = (((x297%x298)!=x299)*x300);

    if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = INT64_MAX;
	volatile uint32_t x302 = UINT32_MAX;
	uint64_t x303 = UINT64_MAX;
	int64_t x304 = INT64_MAX;
	volatile int64_t t72 = INT64_MAX;

    t72 = (((x301%x302)!=x303)*x304);

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x305 = INT32_MIN;
	volatile int32_t x306 = -656;
	uint64_t x307 = 6798510602613942078LLU;
	static int32_t x308 = INT32_MAX;
	static volatile int32_t t73 = INT32_MAX;

    t73 = (((x305%x306)!=x307)*x308);

    if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x310 = 510U;
	int32_t x311 = INT32_MIN;
	static int8_t x312 = INT8_MIN;

    t74 = (((x309%x310)!=x311)*x312);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x313 = INT16_MIN;
	static int16_t x314 = INT16_MAX;
	uint32_t x315 = 53713U;
	int32_t x316 = INT32_MAX;
	int32_t t75 = INT32_MAX;

    t75 = (((x313%x314)!=x315)*x316);

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = INT16_MAX;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MIN;
	int8_t x320 = INT8_MIN;
	int32_t t76 = 3345552;

    t76 = (((x317%x318)!=x319)*x320);

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x322 = INT16_MAX;
	int16_t x323 = -1;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t77 = 368180059;

    t77 = (((x321%x322)!=x323)*x324);

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x325 = -20351;
	int64_t x328 = -321292LL;
	volatile int64_t t78 = 11743514797LL;

    t78 = (((x325%x326)!=x327)*x328);

    if (t78 != -321292LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = 5235;
	int16_t x330 = -42;
	int32_t x331 = -1;
	int64_t t79 = 28LL;

    t79 = (((x329%x330)!=x331)*x332);

    if (t79 != 111803089435LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x333 = UINT64_MAX;
	static uint64_t x334 = 39020LLU;
	uint32_t x336 = 10580184U;
	volatile uint32_t t80 = 83954266U;

    t80 = (((x333%x334)!=x335)*x336);

    if (t80 != 10580184U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x337 = 8697575752LLU;
	uint32_t x338 = 473350U;
	volatile int8_t x339 = INT8_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t81 = INT32_MIN;

    t81 = (((x337%x338)!=x339)*x340);

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x341 = UINT8_MAX;
	static volatile int16_t x342 = INT16_MAX;
	int64_t x343 = 8224376316051LL;
	uint8_t x344 = 110U;
	volatile int32_t t82 = 2826934;

    t82 = (((x341%x342)!=x343)*x344);

    if (t82 != 110) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = 148690368;
	int16_t x347 = 4939;
	int32_t t83 = -2;

    t83 = (((x345%x346)!=x347)*x348);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = INT8_MAX;
	volatile uint32_t x350 = 6552U;
	static int8_t x352 = -1;
	volatile int32_t t84 = 1;

    t84 = (((x349%x350)!=x351)*x352);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = INT8_MAX;
	volatile int32_t x354 = INT32_MIN;
	volatile int32_t t85 = 323178;

    t85 = (((x353%x354)!=x355)*x356);

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x357 = INT32_MIN;
	volatile uint16_t x359 = 15U;
	volatile uint32_t x360 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

    t86 = (((x357%x358)!=x359)*x360);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = 31780129940LL;
	uint32_t x362 = UINT32_MAX;
	uint32_t x363 = UINT32_MAX;
	uint64_t x364 = UINT64_MAX;
	uint64_t t87 = UINT64_MAX;

    t87 = (((x361%x362)!=x363)*x364);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x365 = UINT8_MAX;
	static uint64_t x367 = 122612844544488LLU;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t88 = -172;

    t88 = (((x365%x366)!=x367)*x368);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = INT8_MIN;
	uint8_t x370 = 2U;
	int8_t x371 = -1;
	volatile uint64_t x372 = 994501367756692769LLU;

    t89 = (((x369%x370)!=x371)*x372);

    if (t89 != 994501367756692769LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = -88130165;
	uint16_t x374 = UINT16_MAX;
	static volatile int32_t x375 = 168363142;
	volatile int8_t x376 = -3;
	volatile int32_t t90 = 18839053;

    t90 = (((x373%x374)!=x375)*x376);

    if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x377 = 45U;
	uint16_t x378 = UINT16_MAX;
	uint64_t x379 = 8LLU;
	uint32_t x380 = 215692783U;

    t91 = (((x377%x378)!=x379)*x380);

    if (t91 != 215692783U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x381 = INT32_MIN;
	volatile int64_t x382 = -11719570417336947LL;
	static uint32_t x384 = 1996871492U;
	volatile uint32_t t92 = 5535U;

    t92 = (((x381%x382)!=x383)*x384);

    if (t92 != 1996871492U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x386 = 1U;
	int8_t x387 = -53;
	uint64_t t93 = 2LLU;

    t93 = (((x385%x386)!=x387)*x388);

    if (t93 != 10201657129563700LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x389 = 8593749909804LL;
	int64_t x390 = -1LL;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	static int32_t t94 = 871;

    t94 = (((x389%x390)!=x391)*x392);

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x393 = INT16_MIN;
	volatile uint64_t x394 = UINT64_MAX;

    t95 = (((x393%x394)!=x395)*x396);

    if (t95 != 114) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x397 = 436U;
	static int8_t x399 = INT8_MAX;
	uint64_t x400 = 236420945162LLU;

    t96 = (((x397%x398)!=x399)*x400);

    if (t96 != 236420945162LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	static uint16_t x403 = 12912U;
	static int32_t x404 = 662629;
	static int32_t t97 = -22726118;

    t97 = (((x401%x402)!=x403)*x404);

    if (t97 != 662629) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x406 = 1859U;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 13;
	volatile int32_t t98 = 32722;

    t98 = (((x405%x406)!=x407)*x408);

    if (t98 != 13) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = -1;
	int32_t x410 = -1;
	int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MIN;
	int64_t t99 = INT64_MIN;

    t99 = (((x409%x410)!=x411)*x412);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x413 = 3695U;
	static int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	static int16_t x416 = 1;

    t100 = (((x413%x414)!=x415)*x416);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	uint8_t x419 = 1U;
	int64_t x420 = INT64_MIN;
	volatile int64_t t101 = INT64_MIN;

    t101 = (((x417%x418)!=x419)*x420);

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = 12682LL;
	static volatile int16_t x422 = INT16_MAX;
	static int8_t x423 = INT8_MIN;
	uint32_t x424 = 0U;

    t102 = (((x421%x422)!=x423)*x424);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x425 = 31U;
	int16_t x426 = -1;
	int64_t x427 = 16011817300LL;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = (((x425%x426)!=x427)*x428);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x429 = -23;
	uint64_t x430 = 22994523LLU;
	volatile int16_t x431 = 1;
	int16_t x432 = -60;
	volatile int32_t t104 = 2864186;

    t104 = (((x429%x430)!=x431)*x432);

    if (t104 != -60) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x436 = INT8_MAX;
	volatile int32_t t105 = -27887928;

    t105 = (((x433%x434)!=x435)*x436);

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x437 = 16189U;
	static int8_t x438 = 7;
	int64_t x439 = -1LL;
	int64_t x440 = INT64_MAX;

    t106 = (((x437%x438)!=x439)*x440);

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x442 = 3U;
	int32_t x443 = INT32_MIN;
	int64_t x444 = -1LL;
	int64_t t107 = 835608LL;

    t107 = (((x441%x442)!=x443)*x444);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x445 = 14U;
	int64_t x446 = INT64_MIN;
	int32_t x447 = INT32_MIN;
	int8_t x448 = -9;
	static int32_t t108 = 38;

    t108 = (((x445%x446)!=x447)*x448);

    if (t108 != -9) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x449 = INT32_MAX;
	uint8_t x450 = 5U;
	volatile int32_t t109 = INT32_MIN;

    t109 = (((x449%x450)!=x451)*x452);

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x454 = -1LL;
	int16_t x455 = INT16_MIN;
	static volatile int8_t x456 = -1;
	int32_t t110 = 30404325;

    t110 = (((x453%x454)!=x455)*x456);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = INT64_MAX;
	uint16_t x460 = 243U;
	int32_t t111 = -222261894;

    t111 = (((x457%x458)!=x459)*x460);

    if (t111 != 243) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = -1;
	int64_t x462 = -66683402LL;
	int8_t x463 = -1;
	static uint16_t x464 = UINT16_MAX;
	volatile int32_t t112 = 0;

    t112 = (((x461%x462)!=x463)*x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x465 = 1U;
	uint64_t x466 = 632LLU;
	static volatile uint64_t x468 = UINT64_MAX;
	volatile uint64_t t113 = UINT64_MAX;

    t113 = (((x465%x466)!=x467)*x468);

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x469 = 15456U;
	uint8_t x470 = 4U;
	int32_t x471 = INT32_MIN;
	volatile int64_t x472 = -6136442LL;
	int64_t t114 = 392000566734LL;

    t114 = (((x469%x470)!=x471)*x472);

    if (t114 != -6136442LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x473 = 103863848020LLU;
	static int8_t x475 = -1;
	volatile int64_t x476 = 300756284LL;
	volatile int64_t t115 = -15LL;

    t115 = (((x473%x474)!=x475)*x476);

    if (t115 != 300756284LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x477 = INT64_MIN;
	uint32_t x478 = 749U;
	int64_t x479 = -1LL;
	int64_t x480 = INT64_MIN;
	int64_t t116 = INT64_MIN;

    t116 = (((x477%x478)!=x479)*x480);

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x481 = INT64_MIN;
	static int32_t x482 = INT32_MIN;
	int64_t x484 = -1LL;
	int64_t t117 = 25LL;

    t117 = (((x481%x482)!=x483)*x484);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = -1;
	uint32_t x486 = UINT32_MAX;
	int64_t x487 = 1622919087665688687LL;
	volatile int32_t t118 = INT32_MIN;

    t118 = (((x485%x486)!=x487)*x488);

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x490 = INT16_MIN;
	int16_t x492 = -4;
	volatile int32_t t119 = -405966;

    t119 = (((x489%x490)!=x491)*x492);

    if (t119 != -4) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x493 = INT16_MAX;
	uint8_t x494 = 24U;
	static uint32_t x495 = 53U;
	volatile int32_t t120 = 19;

    t120 = (((x493%x494)!=x495)*x496);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x497 = UINT16_MAX;
	int64_t x498 = -493002249496LL;
	int8_t x499 = -6;
	uint32_t x500 = 4U;
	static volatile uint32_t t121 = 1U;

    t121 = (((x497%x498)!=x499)*x500);

    if (t121 != 4U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x501 = INT64_MIN;
	int16_t x503 = INT16_MAX;
	volatile int32_t x504 = -263953806;
	volatile int32_t t122 = -14397;

    t122 = (((x501%x502)!=x503)*x504);

    if (t122 != -263953806) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = 10758973761LL;
	uint64_t x507 = 76317854326167739LLU;
	static volatile int32_t t123 = -6267298;

    t123 = (((x505%x506)!=x507)*x508);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x510 = -1;
	uint16_t x511 = 398U;
	int32_t x512 = -1;
	volatile int32_t t124 = 776;

    t124 = (((x509%x510)!=x511)*x512);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x513 = -403615559246LL;
	int32_t x514 = -1;
	static int32_t x516 = -450686627;
	static int32_t t125 = -24523913;

    t125 = (((x513%x514)!=x515)*x516);

    if (t125 != -450686627) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x517 = UINT8_MAX;
	static volatile int64_t x518 = INT64_MIN;
	int64_t t126 = INT64_MAX;

    t126 = (((x517%x518)!=x519)*x520);

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x521 = INT32_MIN;
	static int32_t x524 = INT32_MIN;
	volatile int32_t t127 = INT32_MIN;

    t127 = (((x521%x522)!=x523)*x524);

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x525 = INT32_MAX;
	int16_t x526 = INT16_MAX;
	int64_t x527 = -2LL;
	volatile int8_t x528 = -1;
	volatile int32_t t128 = -58121363;

    t128 = (((x525%x526)!=x527)*x528);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x529 = -457;
	int32_t x530 = INT32_MIN;
	int32_t x531 = -1;
	int32_t x532 = INT32_MAX;
	volatile int32_t t129 = INT32_MAX;

    t129 = (((x529%x530)!=x531)*x532);

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x533 = 1;
	volatile uint32_t x534 = UINT32_MAX;
	volatile uint16_t x536 = 15U;

    t130 = (((x533%x534)!=x535)*x536);

    if (t130 != 15) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x538 = INT16_MIN;
	volatile int8_t x540 = INT8_MIN;
	volatile int32_t t131 = -21856;

    t131 = (((x537%x538)!=x539)*x540);

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = INT32_MAX;
	static int64_t x543 = INT64_MIN;
	static uint64_t x544 = 1LLU;
	static uint64_t t132 = 256444468878LLU;

    t132 = (((x541%x542)!=x543)*x544);

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = -1;
	uint8_t x546 = UINT8_MAX;
	volatile int8_t x548 = -3;
	volatile int32_t t133 = -116;

    t133 = (((x545%x546)!=x547)*x548);

    if (t133 != -3) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x549 = 41772U;
	int16_t x550 = -31;
	static uint8_t x552 = 24U;
	volatile int32_t t134 = 1928491;

    t134 = (((x549%x550)!=x551)*x552);

    if (t134 != 24) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x555 = INT16_MIN;
	volatile int32_t x556 = INT32_MAX;
	int32_t t135 = INT32_MAX;

    t135 = (((x553%x554)!=x555)*x556);

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x557 = UINT32_MAX;
	int64_t x558 = INT64_MIN;
	static volatile uint64_t x559 = 11562LLU;
	int16_t x560 = INT16_MAX;
	int32_t t136 = -1;

    t136 = (((x557%x558)!=x559)*x560);

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x561 = 30U;
	static int16_t x562 = -1108;
	volatile uint64_t x563 = 1430919LLU;
	int64_t x564 = INT64_MAX;
	static int64_t t137 = INT64_MAX;

    t137 = (((x561%x562)!=x563)*x564);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x565 = -1;
	int8_t x566 = INT8_MIN;
	static int32_t x567 = INT32_MIN;
	volatile int8_t x568 = 0;
	volatile int32_t t138 = -23;

    t138 = (((x565%x566)!=x567)*x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = -1;
	static uint16_t x570 = 6U;
	int64_t x571 = -1LL;
	static int64_t x572 = -1LL;
	volatile int64_t t139 = -6831LL;

    t139 = (((x569%x570)!=x571)*x572);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = UINT64_MAX;
	int16_t x575 = 62;
	int32_t x576 = INT32_MIN;
	static int32_t t140 = INT32_MIN;

    t140 = (((x573%x574)!=x575)*x576);

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x577 = UINT32_MAX;
	int32_t x578 = -1;
	volatile int8_t x579 = -5;
	int32_t x580 = -13937087;
	int32_t t141 = -11;

    t141 = (((x577%x578)!=x579)*x580);

    if (t141 != -13937087) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x581 = UINT64_MAX;
	uint8_t x582 = 4U;
	int32_t x584 = -1;

    t142 = (((x581%x582)!=x583)*x584);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x585 = INT32_MAX;
	int16_t x586 = -1;
	static volatile uint32_t x587 = 9U;
	uint64_t x588 = 22858793619106218LLU;
	volatile uint64_t t143 = 624068LLU;

    t143 = (((x585%x586)!=x587)*x588);

    if (t143 != 22858793619106218LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MIN;
	int32_t x592 = 2296996;
	volatile int32_t t144 = -8165;

    t144 = (((x589%x590)!=x591)*x592);

    if (t144 != 2296996) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x594 = INT64_MIN;
	volatile int8_t x595 = INT8_MIN;
	static uint16_t x596 = 1U;
	int32_t t145 = 40409705;

    t145 = (((x593%x594)!=x595)*x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x597 = -1;
	static int8_t x598 = INT8_MAX;
	uint32_t x599 = 73281102U;
	volatile int8_t x600 = INT8_MIN;
	static int32_t t146 = -1833;

    t146 = (((x597%x598)!=x599)*x600);

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x601 = -1;
	uint8_t x602 = 2U;
	uint8_t x603 = 0U;
	int8_t x604 = -62;
	static volatile int32_t t147 = -9;

    t147 = (((x601%x602)!=x603)*x604);

    if (t147 != -62) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = -1;
	int32_t x606 = INT32_MAX;
	int16_t x607 = INT16_MIN;
	uint8_t x608 = 1U;

    t148 = (((x605%x606)!=x607)*x608);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x609 = -1;
	int16_t x610 = INT16_MIN;
	int16_t x611 = INT16_MAX;
	static volatile uint32_t x612 = 80U;
	volatile uint32_t t149 = 11897207U;

    t149 = (((x609%x610)!=x611)*x612);

    if (t149 != 80U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x614 = 55;
	int32_t x615 = INT32_MAX;
	volatile int32_t x616 = INT32_MIN;

    t150 = (((x613%x614)!=x615)*x616);

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x618 = 23U;
	volatile int8_t x619 = INT8_MIN;
	volatile int16_t x620 = -2973;
	volatile int32_t t151 = -938163;

    t151 = (((x617%x618)!=x619)*x620);

    if (t151 != -2973) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x621 = INT32_MAX;
	uint32_t x623 = UINT32_MAX;
	int8_t x624 = -1;

    t152 = (((x621%x622)!=x623)*x624);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x625 = UINT8_MAX;
	int8_t x626 = INT8_MAX;
	volatile int16_t x627 = 0;
	int32_t x628 = INT32_MIN;
	volatile int32_t t153 = INT32_MIN;

    t153 = (((x625%x626)!=x627)*x628);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x630 = -36;
	int32_t x631 = -1;
	volatile int8_t x632 = -22;
	volatile int32_t t154 = 8042;

    t154 = (((x629%x630)!=x631)*x632);

    if (t154 != -22) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x633 = -1;
	int32_t x634 = INT32_MIN;
	int32_t x635 = INT32_MAX;
	static int16_t x636 = -1;

    t155 = (((x633%x634)!=x635)*x636);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x637 = UINT8_MAX;
	int16_t x638 = INT16_MIN;
	int16_t x639 = -1;
	volatile uint64_t t156 = 34972510LLU;

    t156 = (((x637%x638)!=x639)*x640);

    if (t156 != 1008563046LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x642 = INT32_MIN;
	volatile int64_t x643 = -269621984LL;
	static uint32_t x644 = 24U;
	volatile uint32_t t157 = 224727387U;

    t157 = (((x641%x642)!=x643)*x644);

    if (t157 != 24U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x645 = -2807;
	volatile int32_t x647 = INT32_MIN;
	static int16_t x648 = INT16_MIN;
	volatile int32_t t158 = 429904495;

    t158 = (((x645%x646)!=x647)*x648);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x651 = INT8_MAX;
	int32_t t159 = -426166925;

    t159 = (((x649%x650)!=x651)*x652);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x653 = 109;
	int8_t x654 = -1;
	static int32_t x656 = INT32_MAX;
	static volatile int32_t t160 = INT32_MAX;

    t160 = (((x653%x654)!=x655)*x656);

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x657 = -1;
	static int8_t x658 = INT8_MIN;
	int64_t x659 = 1086789634898909188LL;
	volatile int64_t t161 = INT64_MIN;

    t161 = (((x657%x658)!=x659)*x660);

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x661 = INT8_MAX;
	volatile int16_t x662 = INT16_MIN;
	static uint16_t x664 = 13U;
	volatile int32_t t162 = -1145899;

    t162 = (((x661%x662)!=x663)*x664);

    if (t162 != 13) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x670 = 21U;
	int8_t x671 = INT8_MAX;
	uint64_t x672 = 7103084508114282LLU;
	static uint64_t t163 = 7512361103326LLU;

    t163 = (((x669%x670)!=x671)*x672);

    if (t163 != 7103084508114282LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x673 = -1;
	static volatile int16_t x674 = INT16_MAX;
	uint64_t x675 = 966964743899LLU;
	int64_t x676 = INT64_MIN;
	int64_t t164 = INT64_MIN;

    t164 = (((x673%x674)!=x675)*x676);

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x678 = INT64_MIN;
	int8_t x680 = -1;
	volatile int32_t t165 = 681992878;

    t165 = (((x677%x678)!=x679)*x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x683 = 1134367386638247860LLU;
	int64_t x684 = -1LL;
	static int64_t t166 = 1720LL;

    t166 = (((x681%x682)!=x683)*x684);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x685 = INT32_MAX;
	volatile int32_t t167 = -115798;

    t167 = (((x685%x686)!=x687)*x688);

    if (t167 != -267) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x691 = -27997809714126100LL;
	int64_t x692 = INT64_MIN;

    t168 = (((x689%x690)!=x691)*x692);

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x693 = INT32_MAX;
	static int32_t t169 = -2061887;

    t169 = (((x693%x694)!=x695)*x696);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x697 = -1LL;
	int64_t x698 = INT64_MIN;
	int64_t x699 = INT64_MAX;
	static volatile int16_t x700 = INT16_MIN;
	int32_t t170 = -293;

    t170 = (((x697%x698)!=x699)*x700);

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x701 = -1;
	uint8_t x702 = 26U;
	int32_t x703 = INT32_MAX;
	volatile int32_t x704 = INT32_MAX;
	int32_t t171 = INT32_MAX;

    t171 = (((x701%x702)!=x703)*x704);

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x709 = INT8_MIN;
	int64_t x710 = -1LL;
	int32_t t172 = 721328;

    t172 = (((x709%x710)!=x711)*x712);

    if (t172 != -46) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x713 = INT8_MIN;
	int8_t x714 = INT8_MAX;
	volatile int8_t x715 = INT8_MIN;
	volatile int8_t x716 = -1;
	int32_t t173 = -1;

    t173 = (((x713%x714)!=x715)*x716);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x717 = INT8_MIN;
	static int64_t x718 = INT64_MIN;
	uint32_t x719 = UINT32_MAX;
	uint64_t x720 = 3948LLU;
	uint64_t t174 = 3LLU;

    t174 = (((x717%x718)!=x719)*x720);

    if (t174 != 3948LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x721 = 3535719U;
	int64_t x722 = INT64_MIN;
	int16_t x723 = 8774;
	int64_t x724 = INT64_MIN;
	volatile int64_t t175 = INT64_MIN;

    t175 = (((x721%x722)!=x723)*x724);

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x725 = UINT64_MAX;
	int64_t x726 = INT64_MIN;
	int64_t x727 = -1LL;
	static int32_t x728 = INT32_MIN;
	volatile int32_t t176 = INT32_MIN;

    t176 = (((x725%x726)!=x727)*x728);

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x729 = 0;
	static volatile int8_t x730 = -1;
	int64_t x731 = INT64_MAX;
	int64_t t177 = INT64_MIN;

    t177 = (((x729%x730)!=x731)*x732);

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x734 = 24U;
	volatile uint64_t x735 = 3975066LLU;
	int32_t x736 = -1;
	static int32_t t178 = 161293970;

    t178 = (((x733%x734)!=x735)*x736);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = 99630;
	static volatile int8_t x738 = -8;
	volatile uint32_t x739 = 3067036U;
	uint64_t x740 = UINT64_MAX;
	uint64_t t179 = UINT64_MAX;

    t179 = (((x737%x738)!=x739)*x740);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x741 = INT32_MIN;
	uint16_t x743 = 276U;
	uint16_t x744 = UINT16_MAX;

    t180 = (((x741%x742)!=x743)*x744);

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x745 = -1LL;
	volatile int8_t x746 = INT8_MAX;
	volatile int64_t x748 = INT64_MIN;
	int64_t t181 = INT64_MIN;

    t181 = (((x745%x746)!=x747)*x748);

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x749 = -1;
	int16_t x750 = INT16_MIN;
	uint64_t x751 = 7701LLU;
	volatile int8_t x752 = INT8_MAX;

    t182 = (((x749%x750)!=x751)*x752);

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x753 = INT8_MIN;
	static uint8_t x754 = UINT8_MAX;
	int16_t x755 = 133;
	uint64_t x756 = 2LLU;

    t183 = (((x753%x754)!=x755)*x756);

    if (t183 != 2LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x757 = -1;
	int32_t x758 = INT32_MIN;
	volatile uint64_t x759 = 258440612LLU;
	uint16_t x760 = UINT16_MAX;

    t184 = (((x757%x758)!=x759)*x760);

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x762 = 1U;
	uint32_t x763 = UINT32_MAX;
	volatile int32_t t185 = 5894;

    t185 = (((x761%x762)!=x763)*x764);

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x765 = INT16_MAX;
	static volatile int16_t x766 = INT16_MIN;
	int32_t x767 = 1660;
	int64_t x768 = 115781913960399131LL;
	static int64_t t186 = -60541993189088455LL;

    t186 = (((x765%x766)!=x767)*x768);

    if (t186 != 115781913960399131LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x769 = 36;
	uint64_t x770 = UINT64_MAX;
	int16_t x771 = INT16_MIN;
	int64_t x772 = -407946LL;
	volatile int64_t t187 = -1LL;

    t187 = (((x769%x770)!=x771)*x772);

    if (t187 != -407946LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x773 = -3LL;
	uint64_t x774 = 19292882LLU;
	int16_t x775 = 1;
	static volatile int16_t x776 = INT16_MIN;
	int32_t t188 = 27870;

    t188 = (((x773%x774)!=x775)*x776);

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x778 = 111741142006LLU;
	static uint8_t x780 = 44U;
	int32_t t189 = -985194;

    t189 = (((x777%x778)!=x779)*x780);

    if (t189 != 44) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x781 = 7U;
	uint16_t x782 = UINT16_MAX;
	volatile int64_t x783 = INT64_MIN;
	int32_t t190 = -643;

    t190 = (((x781%x782)!=x783)*x784);

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x786 = UINT8_MAX;
	int64_t x787 = INT64_MIN;
	int16_t x788 = 0;
	int32_t t191 = -199444843;

    t191 = (((x785%x786)!=x787)*x788);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x789 = 173U;
	int8_t x790 = -1;
	int64_t x791 = 112LL;
	static uint32_t x792 = 35270152U;

    t192 = (((x789%x790)!=x791)*x792);

    if (t192 != 35270152U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x793 = 587628804821LLU;
	int16_t x794 = -1;
	int16_t x795 = -1;
	int32_t t193 = 13073;

    t193 = (((x793%x794)!=x795)*x796);

    if (t193 != 14) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x797 = -13037;
	int32_t x798 = 975302932;
	volatile int8_t x799 = INT8_MAX;
	volatile int16_t x800 = INT16_MIN;
	static volatile int32_t t194 = -6985;

    t194 = (((x797%x798)!=x799)*x800);

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x801 = 3U;
	volatile uint16_t x802 = 72U;
	int32_t x803 = INT32_MIN;
	int64_t x804 = INT64_MIN;
	int64_t t195 = INT64_MIN;

    t195 = (((x801%x802)!=x803)*x804);

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x805 = -1066158212116246LL;
	static uint64_t x807 = 30747LLU;
	uint16_t x808 = 11U;
	volatile int32_t t196 = -22;

    t196 = (((x805%x806)!=x807)*x808);

    if (t196 != 11) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x809 = 13168359LL;
	uint8_t x810 = 6U;
	int32_t x811 = INT32_MAX;
	int16_t x812 = -1618;
	volatile int32_t t197 = 443990223;

    t197 = (((x809%x810)!=x811)*x812);

    if (t197 != -1618) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x814 = 4023;
	static volatile uint16_t x815 = UINT16_MAX;
	int32_t x816 = 6758533;
	int32_t t198 = 1430952;

    t198 = (((x813%x814)!=x815)*x816);

    if (t198 != 6758533) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x817 = INT8_MAX;
	uint16_t x818 = UINT16_MAX;
	int64_t x819 = 2171361596LL;
	static uint32_t x820 = 19917U;

    t199 = (((x817%x818)!=x819)*x820);

    if (t199 != 19917U) { NG(); } else { ; }
	
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

