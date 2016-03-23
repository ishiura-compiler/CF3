
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

int16_t x1 = INT16_MIN;
int16_t x2 = INT16_MIN;
uint32_t x5 = 1767863453U;
volatile uint64_t x15 = UINT64_MAX;
uint16_t x17 = 4U;
static int32_t x24 = INT32_MIN;
int16_t x26 = -1;
int32_t x28 = 1;
uint8_t x32 = 53U;
int8_t x33 = -1;
static int64_t x47 = INT64_MAX;
static int16_t x54 = INT16_MAX;
static volatile int32_t t13 = -447;
uint8_t x57 = UINT8_MAX;
static int64_t x68 = -1LL;
static int32_t t17 = -6028;
int32_t t18 = 60201;
volatile int32_t t20 = 2266676;
int64_t x92 = -1LL;
uint64_t x95 = 923639919359LLU;
int32_t x105 = -398473388;
static int32_t x106 = 29774372;
int64_t x108 = INT64_MIN;
static volatile int32_t t26 = 45973614;
int64_t x123 = -486065092LL;
int64_t x137 = INT64_MAX;
volatile int32_t t35 = -9578592;
static int8_t x153 = INT8_MAX;
static int16_t x158 = -1;
volatile int32_t x162 = INT32_MIN;
uint8_t x163 = 0U;
uint32_t x164 = UINT32_MAX;
volatile uint64_t x174 = UINT64_MAX;
static int64_t x177 = INT64_MIN;
static volatile uint8_t x180 = 86U;
volatile int32_t t46 = -15925;
int16_t x190 = INT16_MAX;
uint64_t x196 = UINT64_MAX;
volatile int8_t x203 = 1;
volatile int32_t t51 = -11108665;
uint8_t x211 = UINT8_MAX;
int32_t x212 = -23512;
int32_t x219 = INT32_MAX;
volatile int32_t t55 = 16;
volatile uint64_t x227 = 1553368987087646LLU;
uint16_t x231 = 67U;
int32_t t58 = -3583;
volatile int32_t x237 = INT32_MIN;
int16_t x240 = INT16_MIN;
volatile uint8_t x241 = 96U;
int64_t x244 = INT64_MAX;
uint16_t x250 = 14933U;
int64_t x251 = -694976LL;
static int32_t t62 = -10850380;
int64_t x255 = 0LL;
uint32_t x258 = UINT32_MAX;
int64_t x260 = 358060611072138012LL;
uint16_t x264 = 728U;
uint32_t x268 = 1U;
static volatile int8_t x273 = INT8_MIN;
int16_t x279 = INT16_MIN;
static volatile int32_t x288 = INT32_MIN;
int32_t t71 = 229;
int32_t x296 = -1;
static volatile int32_t t73 = 14;
int8_t x307 = -14;
uint64_t x312 = 31244LLU;
int32_t x313 = 688505050;
uint32_t x319 = 459U;
int16_t x321 = INT16_MAX;
int16_t x323 = 31;
int64_t x326 = -1LL;
int64_t x334 = INT64_MIN;
int32_t t83 = 709821130;
int64_t x340 = 144LL;
static int32_t t84 = -495830;
int16_t x347 = INT16_MAX;
int64_t x348 = INT64_MIN;
volatile int32_t t86 = 729;
static int8_t x352 = INT8_MAX;
static volatile int32_t t87 = -10554;
uint64_t x354 = UINT64_MAX;
int64_t x364 = INT64_MIN;
int32_t t90 = -25892;
int8_t x366 = INT8_MIN;
volatile int32_t t92 = -153338309;
uint16_t x376 = UINT16_MAX;
uint32_t x378 = 1237484670U;
static volatile int32_t t94 = 1832526;
int16_t x385 = INT16_MIN;
static uint8_t x387 = 29U;
int32_t t96 = -1061;
int32_t x389 = 14;
int8_t x390 = -62;
int64_t x399 = -4205228LL;
uint32_t x403 = 8072373U;
int32_t t102 = -2771;
uint32_t x413 = 707246858U;
int32_t t103 = 503701074;
uint8_t x426 = UINT8_MAX;
static int64_t x428 = INT64_MAX;
int32_t t107 = 237;
int32_t t108 = 315334578;
uint16_t x439 = 0U;
volatile int16_t x442 = 14095;
volatile int32_t t112 = 1;
int8_t x454 = INT8_MAX;
int64_t x474 = INT64_MIN;
static int32_t x476 = INT32_MIN;
volatile int32_t t118 = 2;
static volatile int16_t x485 = INT16_MIN;
int32_t x490 = -95;
int32_t t123 = 8184;
int32_t x499 = INT32_MIN;
int32_t x500 = -164723394;
int32_t t124 = -1226955;
volatile int32_t x510 = INT32_MIN;
uint16_t x514 = 297U;
static int8_t x520 = INT8_MIN;
int32_t x530 = -26;
volatile int32_t x532 = INT32_MAX;
uint16_t x534 = 1385U;
static int8_t x543 = INT8_MIN;
static uint32_t x564 = 362517U;
volatile int32_t t141 = -21287;
int16_t x569 = INT16_MIN;
int8_t x572 = INT8_MIN;
static int64_t x580 = INT64_MIN;
int32_t t144 = 16120261;
uint8_t x591 = UINT8_MAX;
int32_t x592 = -1;
static volatile int64_t x593 = -1LL;
volatile int32_t t148 = -938913;
int16_t x598 = -1;
uint32_t x604 = 7U;
volatile uint16_t x609 = UINT16_MAX;
int16_t x610 = 365;
int8_t x614 = -1;
volatile int16_t x621 = INT16_MAX;
int32_t x627 = INT32_MIN;
volatile int32_t t157 = 3;
volatile uint64_t x635 = UINT64_MAX;
volatile int32_t t158 = 55241371;
volatile int64_t x640 = INT64_MIN;
uint8_t x644 = 102U;
int64_t x645 = INT64_MIN;
static int8_t x647 = 9;
volatile uint8_t x648 = 43U;
volatile int32_t t161 = 1009974;
volatile int64_t x650 = INT64_MIN;
uint64_t x654 = 8647625260635105LLU;
volatile int32_t t163 = 9209;
uint16_t x660 = UINT16_MAX;
static int32_t t165 = -22;
int32_t t166 = -1;
uint32_t x670 = 438U;
volatile int16_t x675 = -88;
int32_t t168 = 124253366;
int16_t x677 = INT16_MAX;
volatile int32_t t169 = 171;
uint8_t x682 = 57U;
int8_t x683 = 8;
int64_t x686 = -3600316LL;
uint16_t x687 = 11349U;
uint32_t x691 = 25U;
int32_t x692 = 249342;
uint64_t x693 = 0LLU;
volatile int32_t x695 = 4865115;
int64_t x704 = INT64_MIN;
static int64_t x706 = INT64_MIN;
static int32_t t178 = -15;
int16_t x727 = -1;
volatile uint32_t x732 = 846759816U;
static int32_t t182 = -48346;
uint32_t x735 = 5066U;
volatile int32_t t184 = -19799;
int16_t x743 = -1;
static uint16_t x747 = 5U;
volatile uint32_t x751 = 487259U;
static int64_t x752 = -1LL;
int32_t t187 = -4;
static volatile int8_t x758 = INT8_MIN;
volatile int32_t t189 = -332876;
uint64_t x768 = 859661911LLU;
volatile int16_t x771 = -1;
uint16_t x780 = UINT16_MAX;
volatile int32_t t194 = -190;
int64_t x781 = INT64_MIN;
volatile int32_t t197 = 7077;
static int16_t x797 = 0;
uint8_t x798 = 1U;
int32_t t199 = 245;


void f0(void) {
    	volatile uint64_t x3 = UINT64_MAX;
	int64_t x4 = -1LL;
	int32_t t0 = -4012;

    t0 = ((x1==(x2<=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -1;
	static volatile uint64_t x7 = 14689LLU;
	volatile int32_t x8 = -42989242;
	int32_t t1 = 2080;

    t1 = ((x5==(x6<=x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile int32_t x10 = -692;
	static uint64_t x11 = UINT64_MAX;
	uint8_t x12 = 19U;
	int32_t t2 = 3039;

    t2 = ((x9==(x10<=x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int16_t x14 = -9;
	volatile int32_t x16 = -638116;
	volatile int32_t t3 = 157388;

    t3 = ((x13==(x14<=x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x18 = UINT32_MAX;
	uint32_t x19 = 5U;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 7843739;

    t4 = ((x17==(x18<=x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	volatile int32_t x22 = -1;
	int32_t x23 = INT32_MIN;
	int32_t t5 = 1322;

    t5 = ((x21==(x22<=x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 17U;
	static int8_t x27 = 1;
	volatile int32_t t6 = -1344;

    t6 = ((x25==(x26<=x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MAX;
	volatile int8_t x30 = 1;
	int64_t x31 = INT64_MAX;
	int32_t t7 = 51640;

    t7 = ((x29==(x30<=x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x34 = -1;
	uint16_t x35 = 3U;
	int8_t x36 = -34;
	volatile int32_t t8 = -53987;

    t8 = ((x33==(x34<=x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = -1;
	uint8_t x39 = 84U;
	uint16_t x40 = 728U;
	int32_t t9 = -8;

    t9 = ((x37==(x38<=x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint32_t x42 = 2899U;
	static uint16_t x43 = 88U;
	static int8_t x44 = INT8_MAX;
	static volatile int32_t t10 = -586;

    t10 = ((x41==(x42<=x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	volatile int32_t x48 = -4;
	volatile int32_t t11 = -7898;

    t11 = ((x45==(x46<=x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	static int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 3529;

    t12 = ((x49==(x50<=x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = 394U;
	static int16_t x55 = INT16_MAX;
	static uint8_t x56 = UINT8_MAX;

    t13 = ((x53==(x54<=x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x58 = UINT8_MAX;
	uint32_t x59 = UINT32_MAX;
	volatile int64_t x60 = -107554574240668039LL;
	int32_t t14 = -182;

    t14 = ((x57==(x58<=x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	static uint32_t x62 = UINT32_MAX;
	uint64_t x63 = 845824543091214184LLU;
	static uint8_t x64 = 1U;
	volatile int32_t t15 = 0;

    t15 = ((x61==(x62<=x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 19;
	volatile int8_t x66 = INT8_MAX;
	static int8_t x67 = -5;
	int32_t t16 = -64;

    t16 = ((x65==(x66<=x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	uint16_t x70 = 62U;
	int8_t x71 = INT8_MAX;
	uint32_t x72 = UINT32_MAX;

    t17 = ((x69==(x70<=x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	static volatile int64_t x74 = -1LL;
	static volatile uint64_t x75 = 194407519LLU;
	int16_t x76 = INT16_MAX;

    t18 = ((x73==(x74<=x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = -3;
	int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t x80 = INT32_MIN;
	int32_t t19 = 37147622;

    t19 = ((x77==(x78<=x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	volatile uint64_t x82 = 67849693929684419LLU;
	int8_t x83 = INT8_MIN;
	uint32_t x84 = UINT32_MAX;

    t20 = ((x81==(x82<=x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	static uint16_t x86 = 69U;
	uint8_t x87 = UINT8_MAX;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = -66157;

    t21 = ((x85==(x86<=x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -264814;
	int16_t x90 = -1;
	static int64_t x91 = INT64_MIN;
	int32_t t22 = -154585485;

    t22 = ((x89==(x90<=x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x93 = 6933U;
	int8_t x94 = -1;
	int16_t x96 = INT16_MAX;
	int32_t t23 = 512;

    t23 = ((x93==(x94<=x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int8_t x98 = -1;
	int64_t x99 = -1562255099193LL;
	int64_t x100 = INT64_MAX;
	volatile int32_t t24 = 653049815;

    t24 = ((x97==(x98<=x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = -2;
	uint8_t x102 = 59U;
	int16_t x103 = -14;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -6;

    t25 = ((x101==(x102<=x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x107 = 10495U;

    t26 = ((x105==(x106<=x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = 477;
	volatile int64_t x112 = 205571LL;
	int32_t t27 = 6337;

    t27 = ((x109==(x110<=x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = 21180643LL;
	int64_t x114 = -1LL;
	static int64_t x115 = -4LL;
	static volatile int64_t x116 = 1302LL;
	volatile int32_t t28 = -880270954;

    t28 = ((x113==(x114<=x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	int64_t x118 = 342LL;
	int64_t x119 = -22954LL;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -9;

    t29 = ((x117==(x118<=x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -274;

    t30 = ((x121==(x122<=x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1489673603LL;
	volatile uint8_t x126 = 15U;
	int32_t x127 = INT32_MAX;
	volatile uint16_t x128 = 2U;
	static int32_t t31 = 971526083;

    t31 = ((x125==(x126<=x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MIN;
	static int16_t x130 = INT16_MIN;
	volatile uint32_t x131 = UINT32_MAX;
	uint8_t x132 = 31U;
	int32_t t32 = -216671;

    t32 = ((x129==(x130<=x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	volatile uint16_t x134 = UINT16_MAX;
	volatile int16_t x135 = -15;
	int64_t x136 = -1LL;
	volatile int32_t t33 = 153782;

    t33 = ((x133==(x134<=x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x138 = -1LL;
	volatile int8_t x139 = -1;
	static int32_t x140 = -1;
	int32_t t34 = -5101;

    t34 = ((x137==(x138<=x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = 10U;
	int16_t x143 = -2628;
	volatile uint32_t x144 = 456596U;

    t35 = ((x141==(x142<=x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	volatile uint16_t x146 = 3U;
	uint16_t x147 = 545U;
	volatile uint64_t x148 = UINT64_MAX;
	static int32_t t36 = -2;

    t36 = ((x145==(x146<=x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -3;
	static int64_t x150 = INT64_MAX;
	uint64_t x151 = 357774537LLU;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -4315433;

    t37 = ((x149==(x150<=x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = -412;
	uint32_t x155 = 547108U;
	int64_t x156 = -1LL;
	volatile int32_t t38 = 996;

    t38 = ((x153==(x154<=x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	int16_t x159 = -1;
	int64_t x160 = INT64_MAX;
	int32_t t39 = 6697040;

    t39 = ((x157==(x158<=x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	int32_t t40 = -17606;

    t40 = ((x161==(x162<=x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	static uint64_t x166 = 3617412479261412LLU;
	volatile int32_t x167 = 903;
	int64_t x168 = INT64_MIN;
	int32_t t41 = -194349953;

    t41 = ((x165==(x166<=x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x169 = INT64_MAX;
	uint16_t x170 = 5542U;
	volatile int8_t x171 = 0;
	int32_t x172 = 0;
	static volatile int32_t t42 = -53428662;

    t42 = ((x169==(x170<=x171))==x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	volatile int32_t x176 = -7757;
	static volatile int32_t t43 = -125;

    t43 = ((x173==(x174<=x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MIN;
	static volatile int32_t t44 = 4131634;

    t44 = ((x177==(x178<=x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	uint64_t x182 = 221006155LLU;
	int64_t x183 = INT64_MAX;
	uint32_t x184 = 102513900U;
	int32_t t45 = -6;

    t45 = ((x181==(x182<=x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	volatile int32_t x188 = INT32_MIN;

    t46 = ((x185==(x186<=x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = UINT32_MAX;
	uint8_t x191 = 0U;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -445346;

    t47 = ((x189==(x190<=x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	uint8_t x194 = 0U;
	uint8_t x195 = 0U;
	volatile int32_t t48 = -343382616;

    t48 = ((x193==(x194<=x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -5302866923694LL;
	volatile int64_t x198 = INT64_MIN;
	int16_t x199 = -3;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -10482;

    t49 = ((x197==(x198<=x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 539089;

    t50 = ((x201==(x202<=x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 72U;
	uint64_t x206 = 40428384161585600LLU;
	int64_t x207 = 959285130845776LL;
	int16_t x208 = 2726;

    t51 = ((x205==(x206<=x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -5;
	int64_t x210 = -577LL;
	int32_t t52 = -23801;

    t52 = ((x209==(x210<=x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 851U;
	int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MIN;
	volatile uint32_t x216 = UINT32_MAX;
	static volatile int32_t t53 = 65421;

    t53 = ((x213==(x214<=x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	volatile int8_t x218 = INT8_MIN;
	volatile int8_t x220 = INT8_MIN;
	static volatile int32_t t54 = 1;

    t54 = ((x217==(x218<=x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MAX;
	uint64_t x222 = 48291208LLU;
	volatile int8_t x223 = 1;
	int16_t x224 = INT16_MIN;

    t55 = ((x221==(x222<=x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -1;
	uint64_t x226 = 71999916090LLU;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = 50895274;

    t56 = ((x225==(x226<=x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int64_t x230 = 40309LL;
	volatile int32_t x232 = -1;
	int32_t t57 = -30496;

    t57 = ((x229==(x230<=x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -11;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	int64_t x236 = INT64_MIN;

    t58 = ((x233==(x234<=x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MIN;
	volatile int32_t x239 = INT32_MIN;
	int32_t t59 = -4;

    t59 = ((x237==(x238<=x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = INT16_MIN;
	volatile int16_t x243 = INT16_MIN;
	int32_t t60 = -4176685;

    t60 = ((x241==(x242<=x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int8_t x246 = -6;
	static uint32_t x247 = 1675U;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -4897;

    t61 = ((x245==(x246<=x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 56899849348LLU;
	volatile uint64_t x252 = 2452237227LLU;

    t62 = ((x249==(x250<=x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 3LLU;
	uint64_t x254 = 4228733267LLU;
	int64_t x256 = 33443480456004LL;
	int32_t t63 = 184475275;

    t63 = ((x253==(x254<=x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = -1LL;
	static volatile uint8_t x259 = 0U;
	volatile int32_t t64 = 700;

    t64 = ((x257==(x258<=x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MIN;
	uint64_t x262 = UINT64_MAX;
	uint64_t x263 = 356540649757LLU;
	volatile int32_t t65 = 90307;

    t65 = ((x261==(x262<=x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 936LLU;
	static int8_t x266 = INT8_MAX;
	static volatile int8_t x267 = INT8_MAX;
	int32_t t66 = 12;

    t66 = ((x265==(x266<=x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	volatile uint32_t x270 = UINT32_MAX;
	static uint64_t x271 = UINT64_MAX;
	int32_t x272 = 440;
	volatile int32_t t67 = 87;

    t67 = ((x269==(x270<=x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = 99U;
	int64_t x275 = INT64_MIN;
	uint8_t x276 = UINT8_MAX;
	int32_t t68 = 182636;

    t68 = ((x273==(x274<=x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 2U;
	int64_t x278 = INT64_MIN;
	int16_t x280 = -3;
	static int32_t t69 = 0;

    t69 = ((x277==(x278<=x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x281 = 106LLU;
	uint64_t x282 = 831350243877LLU;
	int8_t x283 = INT8_MAX;
	int32_t x284 = INT32_MIN;
	static int32_t t70 = 228861649;

    t70 = ((x281==(x282<=x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint32_t x285 = 1U;
	int8_t x286 = INT8_MIN;
	volatile int32_t x287 = -1;

    t71 = ((x285==(x286<=x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MAX;
	volatile int32_t x291 = 1;
	int32_t x292 = -1532630;
	int32_t t72 = -38164;

    t72 = ((x289==(x290<=x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = 2040057885875792875LL;
	int64_t x294 = -1LL;
	volatile int64_t x295 = 719918LL;

    t73 = ((x293==(x294<=x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 512U;
	uint32_t x298 = 18014U;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t74 = 35986;

    t74 = ((x297==(x298<=x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	static uint32_t x302 = 8U;
	int16_t x303 = 316;
	volatile int64_t x304 = INT64_MIN;
	int32_t t75 = 7734782;

    t75 = ((x301==(x302<=x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;
	volatile uint8_t x308 = UINT8_MAX;
	int32_t t76 = -9;

    t76 = ((x305==(x306<=x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = 4LLU;
	int32_t t77 = -6;

    t77 = ((x309==(x310<=x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = -1214;
	int16_t x315 = INT16_MIN;
	static uint64_t x316 = 93LLU;
	volatile int32_t t78 = 178;

    t78 = ((x313==(x314<=x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x317 = 0U;
	int8_t x318 = 26;
	volatile uint64_t x320 = UINT64_MAX;
	int32_t t79 = 167992474;

    t79 = ((x317==(x318<=x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = 1;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = 213491578;

    t80 = ((x321==(x322<=x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	int8_t x327 = 4;
	static int32_t x328 = INT32_MIN;
	int32_t t81 = -925;

    t81 = ((x325==(x326<=x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -14511904752LL;
	volatile int32_t x330 = INT32_MIN;
	int32_t x331 = 5;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = 0;

    t82 = ((x329==(x330<=x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 0;
	uint16_t x335 = 458U;
	static int64_t x336 = INT64_MIN;

    t83 = ((x333==(x334<=x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = 1;
	int8_t x338 = -10;
	volatile int32_t x339 = INT32_MIN;

    t84 = ((x337==(x338<=x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -2173132231262408LL;
	volatile int64_t x342 = -1LL;
	uint64_t x343 = 471470638LLU;
	int32_t x344 = -1;
	volatile int32_t t85 = -154210;

    t85 = ((x341==(x342<=x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x345 = 826U;
	int8_t x346 = -1;

    t86 = ((x345==(x346<=x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = 5946089279671LL;
	int64_t x350 = INT64_MAX;
	uint32_t x351 = 17200U;

    t87 = ((x349==(x350<=x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 14U;
	uint32_t x355 = 0U;
	int64_t x356 = -1LL;
	volatile int32_t t88 = 3151228;

    t88 = ((x353==(x354<=x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 20;
	int64_t x358 = INT64_MIN;
	int8_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	int32_t t89 = 4;

    t89 = ((x357==(x358<=x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	static volatile int32_t x363 = INT32_MAX;

    t90 = ((x361==(x362<=x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 30511U;
	int16_t x367 = 15327;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = -9267;

    t91 = ((x365==(x366<=x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	int16_t x370 = -1;
	uint32_t x371 = 133029U;
	int8_t x372 = INT8_MAX;

    t92 = ((x369==(x370<=x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = 131U;
	static volatile uint16_t x375 = 242U;
	volatile int32_t t93 = 485541;

    t93 = ((x373==(x374<=x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 13091579474473355LLU;
	int64_t x379 = 1460LL;
	static int16_t x380 = -2197;

    t94 = ((x377==(x378<=x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = UINT16_MAX;
	static int64_t x382 = -34096503LL;
	uint64_t x383 = 3534067608LLU;
	int64_t x384 = -1LL;
	static int32_t t95 = 1012426;

    t95 = ((x381==(x382<=x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = 4581280816679LL;
	int32_t x388 = INT32_MAX;

    t96 = ((x385==(x386<=x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x391 = -5;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -429;

    t97 = ((x389==(x390<=x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = INT32_MIN;
	int16_t x394 = -413;
	volatile int8_t x395 = INT8_MIN;
	static int32_t x396 = -1;
	static volatile int32_t t98 = -4884;

    t98 = ((x393==(x394<=x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = 9798;
	static volatile int8_t x398 = -1;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = 1547;

    t99 = ((x397==(x398<=x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1783;
	int8_t x402 = INT8_MAX;
	static int32_t x404 = -32457;
	int32_t t100 = 802;

    t100 = ((x401==(x402<=x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 15315U;
	uint64_t x406 = UINT64_MAX;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MIN;
	volatile int32_t t101 = 28;

    t101 = ((x405==(x406<=x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	static int64_t x410 = 10630954LL;
	uint64_t x411 = 226263171345978LLU;
	int64_t x412 = INT64_MIN;

    t102 = ((x409==(x410<=x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MIN;
	int8_t x415 = -7;
	uint16_t x416 = UINT16_MAX;

    t103 = ((x413==(x414<=x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	volatile uint16_t x418 = 7137U;
	int16_t x419 = -1;
	uint8_t x420 = 6U;
	int32_t t104 = 18;

    t104 = ((x417==(x418<=x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	volatile int16_t x422 = INT16_MAX;
	uint8_t x423 = UINT8_MAX;
	uint16_t x424 = 1779U;
	int32_t t105 = 491905128;

    t105 = ((x421==(x422<=x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	volatile int32_t t106 = 1;

    t106 = ((x425==(x426<=x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = -1LL;
	uint8_t x430 = 47U;
	int16_t x431 = 1;
	int16_t x432 = INT16_MIN;

    t107 = ((x429==(x430<=x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	static uint32_t x434 = 3U;
	int32_t x435 = INT32_MAX;
	int64_t x436 = INT64_MIN;

    t108 = ((x433==(x434<=x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 109LLU;
	int16_t x438 = INT16_MAX;
	static volatile uint8_t x440 = 97U;
	int32_t t109 = -256;

    t109 = ((x437==(x438<=x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x441 = 3LLU;
	int8_t x443 = INT8_MAX;
	int16_t x444 = INT16_MAX;
	int32_t t110 = -3136;

    t110 = ((x441==(x442<=x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	static int64_t x446 = INT64_MIN;
	int64_t x447 = -1LL;
	volatile uint64_t x448 = 13514786LLU;
	static int32_t t111 = 317830;

    t111 = ((x445==(x446<=x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x449 = INT64_MAX;
	volatile int32_t x450 = -7;
	int8_t x451 = 1;
	static int64_t x452 = INT64_MIN;

    t112 = ((x449==(x450<=x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MAX;
	int16_t x455 = -1;
	int32_t x456 = INT32_MAX;
	int32_t t113 = -14;

    t113 = ((x453==(x454<=x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	uint32_t x458 = 1U;
	volatile int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 6;

    t114 = ((x457==(x458<=x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	uint64_t x462 = UINT64_MAX;
	volatile int32_t x463 = INT32_MIN;
	volatile int32_t x464 = INT32_MIN;
	int32_t t115 = 4;

    t115 = ((x461==(x462<=x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = 3408U;
	int64_t x466 = 61LL;
	volatile int8_t x467 = INT8_MAX;
	int32_t x468 = INT32_MAX;
	volatile int32_t t116 = -23619406;

    t116 = ((x465==(x466<=x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MAX;
	static uint32_t x471 = UINT32_MAX;
	int8_t x472 = INT8_MIN;
	volatile int32_t t117 = 1;

    t117 = ((x469==(x470<=x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int32_t x475 = -1;

    t118 = ((x473==(x474<=x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	volatile int32_t x478 = -1;
	volatile int64_t x479 = INT64_MIN;
	int32_t x480 = INT32_MIN;
	volatile int32_t t119 = 0;

    t119 = ((x477==(x478<=x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	int32_t x482 = INT32_MIN;
	int8_t x483 = INT8_MAX;
	uint64_t x484 = UINT64_MAX;
	int32_t t120 = 2;

    t120 = ((x481==(x482<=x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x486 = INT32_MAX;
	uint8_t x487 = 6U;
	uint64_t x488 = 1381121960271572277LLU;
	volatile int32_t t121 = -5;

    t121 = ((x485==(x486<=x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	int64_t x491 = 2471LL;
	int16_t x492 = INT16_MIN;
	volatile int32_t t122 = -142821;

    t122 = ((x489==(x490<=x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MAX;
	volatile int32_t x494 = INT32_MIN;
	static uint32_t x495 = 0U;
	int8_t x496 = -1;

    t123 = ((x493==(x494<=x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 455474954163453897LLU;
	int32_t x498 = INT32_MIN;

    t124 = ((x497==(x498<=x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	volatile int8_t x502 = -2;
	int32_t x503 = INT32_MAX;
	int64_t x504 = -2LL;
	volatile int32_t t125 = -449100633;

    t125 = ((x501==(x502<=x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	static int16_t x506 = INT16_MAX;
	static volatile uint64_t x507 = 46843129980282657LLU;
	volatile int8_t x508 = -5;
	static volatile int32_t t126 = 405809;

    t126 = ((x505==(x506<=x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	static int32_t x511 = INT32_MIN;
	int16_t x512 = 19;
	static int32_t t127 = 1750111;

    t127 = ((x509==(x510<=x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x513 = -1;
	int64_t x515 = -27904601698LL;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t128 = 12;

    t128 = ((x513==(x514<=x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	uint32_t x518 = UINT32_MAX;
	uint16_t x519 = 11696U;
	int32_t t129 = -762626312;

    t129 = ((x517==(x518<=x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	int32_t x522 = -1;
	uint8_t x523 = UINT8_MAX;
	uint8_t x524 = 3U;
	static int32_t t130 = 0;

    t130 = ((x521==(x522<=x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	static int64_t x526 = -484398LL;
	static int8_t x527 = INT8_MIN;
	uint8_t x528 = 0U;
	int32_t t131 = -47;

    t131 = ((x525==(x526<=x527))==x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 28913016271545220LLU;
	static int16_t x531 = 57;
	volatile int32_t t132 = -829691726;

    t132 = ((x529==(x530<=x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x533 = INT8_MAX;
	uint16_t x535 = 0U;
	int32_t x536 = 392;
	volatile int32_t t133 = -29605791;

    t133 = ((x533==(x534<=x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = -1;
	static uint8_t x539 = 2U;
	int32_t x540 = INT32_MAX;
	volatile int32_t t134 = 172;

    t134 = ((x537==(x538<=x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = INT16_MIN;
	int32_t x542 = INT32_MAX;
	int64_t x544 = 3533585243LL;
	volatile int32_t t135 = -56332114;

    t135 = ((x541==(x542<=x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	static int8_t x546 = -1;
	uint64_t x547 = UINT64_MAX;
	int64_t x548 = INT64_MAX;
	int32_t t136 = 0;

    t136 = ((x545==(x546<=x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 232;
	uint64_t x550 = 79222899664908LLU;
	static volatile uint64_t x551 = 3178292490782LLU;
	static uint32_t x552 = 331U;
	static int32_t t137 = -1;

    t137 = ((x549==(x550<=x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 17663748;
	int16_t x554 = -411;
	int8_t x555 = INT8_MIN;
	int32_t x556 = INT32_MAX;
	static int32_t t138 = -331;

    t138 = ((x553==(x554<=x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -2178038359LL;
	static volatile uint32_t x558 = 20619U;
	int8_t x559 = INT8_MIN;
	static int8_t x560 = INT8_MIN;
	int32_t t139 = -11076;

    t139 = ((x557==(x558<=x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	volatile int32_t x562 = -1;
	int16_t x563 = 1;
	volatile int32_t t140 = -49;

    t140 = ((x561==(x562<=x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x565 = INT64_MIN;
	static int32_t x566 = INT32_MIN;
	uint16_t x567 = 8U;
	int32_t x568 = INT32_MIN;

    t141 = ((x565==(x566<=x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = INT32_MAX;
	volatile int32_t x571 = INT32_MIN;
	int32_t t142 = -1434526;

    t142 = ((x569==(x570<=x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x574 = INT8_MAX;
	int64_t x575 = INT64_MIN;
	int16_t x576 = INT16_MIN;
	static int32_t t143 = 85476162;

    t143 = ((x573==(x574<=x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	int64_t x578 = -1049216891369059809LL;
	int64_t x579 = INT64_MAX;

    t144 = ((x577==(x578<=x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	int8_t x582 = INT8_MAX;
	static int32_t x583 = INT32_MIN;
	uint8_t x584 = 55U;
	static int32_t t145 = -3626285;

    t145 = ((x581==(x582<=x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MAX;
	uint16_t x586 = 12196U;
	uint16_t x587 = UINT16_MAX;
	int32_t x588 = INT32_MAX;
	static volatile int32_t t146 = -8520;

    t146 = ((x585==(x586<=x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	uint64_t x590 = UINT64_MAX;
	static volatile int32_t t147 = -257;

    t147 = ((x589==(x590<=x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x594 = 3LL;
	int64_t x595 = INT64_MIN;
	int32_t x596 = INT32_MIN;

    t148 = ((x593==(x594<=x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -473771455710566113LL;
	volatile int32_t x599 = INT32_MIN;
	int8_t x600 = -1;
	int32_t t149 = -15;

    t149 = ((x597==(x598<=x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = -1;
	static uint16_t x602 = UINT16_MAX;
	volatile int8_t x603 = 21;
	volatile int32_t t150 = -16005468;

    t150 = ((x601==(x602<=x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MIN;
	static int64_t x606 = INT64_MAX;
	int64_t x607 = 2714295274LL;
	int16_t x608 = INT16_MIN;
	static volatile int32_t t151 = -3942;

    t151 = ((x605==(x606<=x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x611 = INT64_MAX;
	uint64_t x612 = UINT64_MAX;
	volatile int32_t t152 = -232;

    t152 = ((x609==(x610<=x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	static int64_t x615 = 14382333083LL;
	uint8_t x616 = UINT8_MAX;
	static volatile int32_t t153 = 0;

    t153 = ((x613==(x614<=x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	int8_t x618 = -6;
	int32_t x619 = INT32_MAX;
	int8_t x620 = INT8_MAX;
	int32_t t154 = 197;

    t154 = ((x617==(x618<=x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x622 = UINT8_MAX;
	int32_t x623 = 2608;
	int64_t x624 = -1LL;
	int32_t t155 = -833;

    t155 = ((x621==(x622<=x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x625 = UINT8_MAX;
	uint64_t x626 = UINT64_MAX;
	uint32_t x628 = UINT32_MAX;
	volatile int32_t t156 = -6;

    t156 = ((x625==(x626<=x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 1;
	int32_t x630 = -1;
	int8_t x631 = INT8_MIN;
	uint8_t x632 = 9U;

    t157 = ((x629==(x630<=x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x633 = 3U;
	int16_t x634 = -39;
	uint64_t x636 = 414200378LLU;

    t158 = ((x633==(x634<=x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x637 = 11022U;
	int8_t x638 = -1;
	int16_t x639 = -1;
	volatile int32_t t159 = -528325;

    t159 = ((x637==(x638<=x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	int16_t x642 = INT16_MAX;
	uint32_t x643 = 217892U;
	int32_t t160 = 168124159;

    t160 = ((x641==(x642<=x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x646 = 4199U;

    t161 = ((x645==(x646<=x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int64_t x651 = -4334765911604LL;
	uint8_t x652 = 15U;
	volatile int32_t t162 = -152935521;

    t162 = ((x649==(x650<=x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 11182422975816LLU;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = UINT32_MAX;

    t163 = ((x653==(x654<=x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 6U;
	int32_t x658 = -1009796;
	int16_t x659 = -1;
	int32_t t164 = 6372311;

    t164 = ((x657==(x658<=x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = 396539801959218LL;
	int8_t x662 = INT8_MIN;
	int16_t x663 = INT16_MIN;
	uint64_t x664 = 76201665LLU;

    t165 = ((x661==(x662<=x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = 9896;
	int8_t x666 = 0;
	int64_t x667 = INT64_MIN;
	uint8_t x668 = 5U;

    t166 = ((x665==(x666<=x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	int8_t x671 = 0;
	uint16_t x672 = 23U;
	volatile int32_t t167 = -4;

    t167 = ((x669==(x670<=x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	volatile uint32_t x674 = 816U;
	static uint8_t x676 = UINT8_MAX;

    t168 = ((x673==(x674<=x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = INT64_MAX;
	static uint64_t x679 = 2067467110440187LLU;
	int16_t x680 = -1;

    t169 = ((x677==(x678<=x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 825271138U;
	static uint16_t x684 = 193U;
	static volatile int32_t t170 = -136421;

    t170 = ((x681==(x682<=x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 104U;
	static uint64_t x688 = UINT64_MAX;
	int32_t t171 = 696237185;

    t171 = ((x685==(x686<=x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = -1LL;
	int64_t x690 = -1LL;
	int32_t t172 = -62;

    t172 = ((x689==(x690<=x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x694 = INT8_MIN;
	int16_t x696 = -1;
	int32_t t173 = 6152097;

    t173 = ((x693==(x694<=x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -1LL;
	volatile uint8_t x698 = 21U;
	volatile int16_t x699 = -1;
	int64_t x700 = INT64_MIN;
	int32_t t174 = 874;

    t174 = ((x697==(x698<=x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	static int16_t x702 = INT16_MIN;
	int64_t x703 = 2762754680726871017LL;
	volatile int32_t t175 = 21;

    t175 = ((x701==(x702<=x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	int64_t x707 = INT64_MIN;
	static uint16_t x708 = 149U;
	int32_t t176 = -6105;

    t176 = ((x705==(x706<=x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 32U;
	static int16_t x710 = -1;
	int32_t x711 = INT32_MIN;
	int16_t x712 = 4091;
	int32_t t177 = -29488;

    t177 = ((x709==(x710<=x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -3;
	static int8_t x714 = INT8_MAX;
	int8_t x715 = INT8_MIN;
	int16_t x716 = INT16_MIN;

    t178 = ((x713==(x714<=x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	volatile uint16_t x718 = 199U;
	int32_t x719 = -1;
	int64_t x720 = INT64_MIN;
	volatile int32_t t179 = 6;

    t179 = ((x717==(x718<=x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = 1957;
	int64_t x722 = -1LL;
	uint32_t x723 = UINT32_MAX;
	int64_t x724 = -578872411LL;
	int32_t t180 = -8;

    t180 = ((x721==(x722<=x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -66890731924412550LL;
	uint8_t x726 = 7U;
	uint32_t x728 = UINT32_MAX;
	volatile int32_t t181 = -4;

    t181 = ((x725==(x726<=x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	int64_t x730 = INT64_MIN;
	int64_t x731 = -1LL;

    t182 = ((x729==(x730<=x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 1;
	static uint16_t x734 = 2U;
	static uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 1724495;

    t183 = ((x733==(x734<=x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 58562756U;
	uint32_t x738 = UINT32_MAX;
	int16_t x739 = INT16_MIN;
	static int32_t x740 = INT32_MIN;

    t184 = ((x737==(x738<=x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x741 = -6359;
	int16_t x742 = -1;
	int8_t x744 = -1;
	volatile int32_t t185 = -129153555;

    t185 = ((x741==(x742<=x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MIN;
	uint64_t x746 = UINT64_MAX;
	uint32_t x748 = 364U;
	int32_t t186 = -2463;

    t186 = ((x745==(x746<=x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = -1743;
	int64_t x750 = INT64_MAX;

    t187 = ((x749==(x750<=x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	static int16_t x754 = INT16_MIN;
	uint8_t x755 = 2U;
	volatile uint64_t x756 = 34737864099LLU;
	volatile int32_t t188 = -3383356;

    t188 = ((x753==(x754<=x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	volatile uint64_t x759 = 68075578LLU;
	static volatile uint16_t x760 = 1U;

    t189 = ((x757==(x758<=x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	int64_t x762 = 91LL;
	int16_t x763 = INT16_MIN;
	int32_t x764 = -42;
	static volatile int32_t t190 = -236861749;

    t190 = ((x761==(x762<=x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int8_t x766 = INT8_MAX;
	static volatile int64_t x767 = -1LL;
	int32_t t191 = -215213;

    t191 = ((x765==(x766<=x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	static volatile uint64_t x770 = 37153239140LLU;
	int32_t x772 = INT32_MAX;
	volatile int32_t t192 = -234308;

    t192 = ((x769==(x770<=x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	int32_t x774 = INT32_MIN;
	static uint16_t x775 = 737U;
	static int16_t x776 = 946;
	volatile int32_t t193 = -29;

    t193 = ((x773==(x774<=x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 24;
	volatile uint32_t x778 = 65627398U;
	uint16_t x779 = 1214U;

    t194 = ((x777==(x778<=x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = 590564652420710LLU;
	volatile int8_t x783 = INT8_MIN;
	volatile uint32_t x784 = 286922U;
	volatile int32_t t195 = -17394;

    t195 = ((x781==(x782<=x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = 2585U;
	int16_t x786 = INT16_MAX;
	uint16_t x787 = UINT16_MAX;
	int16_t x788 = -1;
	volatile int32_t t196 = -78697;

    t196 = ((x785==(x786<=x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	static uint64_t x790 = 26330166762028761LLU;
	int16_t x791 = -1038;
	static uint8_t x792 = 45U;

    t197 = ((x789==(x790<=x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	volatile uint8_t x794 = 49U;
	uint16_t x795 = 28356U;
	static int64_t x796 = INT64_MIN;
	static int32_t t198 = -14689829;

    t198 = ((x793==(x794<=x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x799 = -99;
	int64_t x800 = -1LL;

    t199 = ((x797==(x798<=x799))==x800);

    if (t199 != 0) { NG(); } else { ; }
	
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

