
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

uint64_t x1 = UINT64_MAX;
int64_t x3 = -1LL;
volatile uint8_t x8 = 6U;
static int8_t x11 = 1;
static int8_t x13 = -7;
volatile int8_t x17 = INT8_MIN;
int32_t x20 = -4;
volatile uint16_t x21 = UINT16_MAX;
uint32_t x29 = 1004U;
int32_t x30 = INT32_MIN;
static int32_t t8 = -4;
static int8_t x43 = 9;
uint64_t x46 = 17420835720LLU;
uint32_t x48 = UINT32_MAX;
static int32_t t12 = -15;
volatile int32_t t14 = -23;
static uint64_t x63 = 172769LLU;
volatile int64_t x67 = INT64_MAX;
static volatile int16_t x71 = -1;
static uint64_t x74 = UINT64_MAX;
uint64_t x84 = 888930613968LLU;
uint8_t x85 = UINT8_MAX;
uint8_t x86 = 42U;
uint8_t x88 = UINT8_MAX;
volatile int16_t x94 = INT16_MIN;
uint64_t x96 = UINT64_MAX;
uint16_t x98 = 27136U;
static int8_t x100 = INT8_MIN;
int16_t x120 = 0;
static volatile int32_t t28 = -317340;
int8_t x124 = INT8_MAX;
int32_t t30 = 4;
int64_t x130 = INT64_MIN;
uint32_t x132 = 1U;
int32_t t31 = -40307589;
uint32_t x149 = UINT32_MAX;
int32_t t35 = 856;
int32_t t36 = -376243188;
int16_t x161 = INT16_MIN;
static int32_t x164 = -1;
volatile uint64_t x167 = 8041LLU;
volatile int16_t x168 = -108;
int32_t t40 = 39;
int32_t x179 = -7731;
volatile int32_t t41 = 46709;
volatile int32_t t42 = -1;
int64_t x190 = INT64_MIN;
volatile int32_t t45 = 723502844;
int32_t t47 = 12218;
int32_t x209 = -1;
int16_t x214 = INT16_MIN;
uint64_t x215 = UINT64_MAX;
volatile int32_t t50 = 10722151;
int8_t x225 = -31;
uint16_t x230 = 115U;
int32_t x237 = INT32_MAX;
int32_t t55 = 13891;
static uint64_t x241 = 21304464807983867LLU;
uint16_t x261 = 88U;
int16_t x271 = 598;
uint8_t x279 = 82U;
int32_t t67 = -16234627;
int16_t x293 = INT16_MAX;
int64_t x299 = -1LL;
volatile int32_t t70 = -337;
uint64_t x309 = UINT64_MAX;
static uint32_t x315 = 470U;
int32_t x317 = 1;
static uint8_t x319 = 40U;
int8_t x320 = -1;
int16_t x323 = 44;
int16_t x324 = INT16_MAX;
volatile int32_t t74 = 40;
static uint8_t x326 = 85U;
volatile int32_t t76 = -464636;
int32_t x333 = 5261;
int8_t x334 = INT8_MAX;
int32_t x335 = -1;
int32_t t77 = -1;
static int64_t x342 = -210514963LL;
uint64_t x343 = 194364013262LLU;
int64_t x350 = -1LL;
static int64_t x353 = INT64_MAX;
uint16_t x355 = 29U;
static volatile int32_t t82 = 92232;
static int16_t x358 = INT16_MIN;
int16_t x363 = 248;
int64_t x368 = 0LL;
int8_t x373 = INT8_MAX;
volatile uint8_t x376 = UINT8_MAX;
int8_t x383 = -1;
int16_t x389 = -248;
int16_t x390 = INT16_MIN;
volatile int32_t t90 = -8507103;
static int32_t x396 = INT32_MIN;
uint64_t x398 = 2848LLU;
int64_t x404 = INT64_MIN;
uint16_t x416 = 95U;
int32_t t97 = -9835;
int8_t x430 = INT8_MIN;
int16_t x442 = INT16_MAX;
volatile int32_t x444 = INT32_MIN;
int16_t x448 = INT16_MIN;
int8_t x455 = -1;
static uint16_t x458 = UINT16_MAX;
int64_t x472 = INT64_MIN;
int8_t x474 = -16;
uint32_t x476 = 11034U;
int32_t x481 = -1;
int16_t x490 = -46;
int64_t x493 = 387040571659935290LL;
static uint64_t x496 = 781324395042015970LLU;
volatile int8_t x497 = INT8_MIN;
uint32_t x506 = 1081882U;
int32_t x508 = INT32_MIN;
int8_t x513 = -2;
uint32_t x514 = 1212005149U;
int32_t x515 = -5133659;
static volatile int32_t t120 = -9;
volatile int32_t t121 = -10677901;
int32_t t123 = 10254;
volatile int16_t x538 = 977;
volatile int32_t t125 = 472;
int16_t x541 = -1;
volatile int32_t x543 = 17666;
volatile uint32_t x553 = 5U;
volatile uint32_t x558 = 1U;
uint8_t x560 = 2U;
int16_t x564 = INT16_MAX;
int32_t x566 = 5584166;
int8_t x570 = -13;
uint32_t x574 = 19U;
int32_t t133 = -5;
int8_t x577 = -3;
volatile uint32_t x583 = 56U;
static int32_t x586 = 121;
int8_t x589 = -1;
static int32_t x594 = INT32_MIN;
volatile int16_t x602 = -8;
uint32_t x604 = 365U;
uint32_t x605 = 51415U;
volatile uint32_t x608 = 8066U;
int32_t x613 = -5028825;
int8_t x615 = INT8_MIN;
int32_t x620 = INT32_MIN;
int32_t x626 = INT32_MIN;
uint16_t x629 = 4U;
int64_t x632 = 260515438LL;
uint64_t x633 = 15LLU;
static int64_t x634 = -1LL;
uint64_t x643 = UINT64_MAX;
int32_t x644 = 2848607;
volatile int8_t x646 = -1;
int64_t x656 = INT64_MIN;
int32_t t153 = 458;
volatile int32_t t154 = -341329;
int8_t x668 = 1;
int32_t t156 = -154829;
int64_t x674 = -243594829773641LL;
static uint64_t x676 = 30551952338LLU;
uint8_t x684 = 119U;
uint16_t x689 = 206U;
int8_t x692 = INT8_MAX;
uint32_t x693 = 408696087U;
uint64_t x694 = 2LLU;
volatile int32_t t164 = 1;
uint32_t x703 = UINT32_MAX;
uint8_t x706 = 4U;
uint8_t x707 = UINT8_MAX;
int32_t x709 = -1;
static int8_t x712 = INT8_MIN;
static int16_t x718 = -2;
int8_t x719 = -1;
int64_t x722 = 127006318LL;
static int32_t x733 = INT32_MIN;
volatile int32_t t175 = 44849;
static int32_t x746 = -1;
uint16_t x751 = UINT16_MAX;
volatile int8_t x755 = -1;
int64_t x767 = 1970188750LL;
uint16_t x771 = 25913U;
volatile int16_t x777 = -1;
volatile uint32_t x782 = 917283534U;
int8_t x784 = 1;
int32_t t186 = 8;
uint8_t x803 = 1U;
volatile int16_t x804 = INT16_MIN;
int32_t t190 = -172517;
int16_t x805 = INT16_MAX;
int64_t x814 = INT64_MIN;
static int32_t x820 = INT32_MAX;
int32_t x823 = INT32_MIN;
int64_t x827 = INT64_MIN;
int32_t t198 = 330605;
int16_t x837 = -1127;
volatile int8_t x840 = -1;
int32_t t199 = 590;


void f0(void) {
    	volatile int32_t x2 = 9284;
	static uint16_t x4 = 16323U;
	int32_t t0 = 3;

    t0 = (((x1/x2)/x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint64_t x6 = 136LLU;
	int32_t x7 = -1;
	static volatile int32_t t1 = -49;

    t1 = (((x5/x6)/x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	static uint64_t x10 = 11315167894LLU;
	static volatile uint64_t x12 = 2064LLU;
	int32_t t2 = 92;

    t2 = (((x9/x10)/x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = 1;
	volatile int8_t x15 = INT8_MIN;
	uint16_t x16 = 479U;
	volatile int32_t t3 = 3402145;

    t3 = (((x13/x14)/x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x18 = INT8_MIN;
	volatile int64_t x19 = -77132421527LL;
	static int32_t t4 = 1;

    t4 = (((x17/x18)/x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x22 = -11;
	static uint32_t x23 = 335794U;
	uint8_t x24 = 0U;
	volatile int32_t t5 = -355286;

    t5 = (((x21/x22)/x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	uint32_t x26 = 629U;
	uint32_t x27 = 298619335U;
	uint8_t x28 = 5U;
	int32_t t6 = 5008122;

    t6 = (((x25/x26)/x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -138;

    t7 = (((x29/x30)/x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = 3;
	int64_t x35 = 76467561087279346LL;
	static int16_t x36 = 124;

    t8 = (((x33/x34)/x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	int32_t x38 = -7592;
	int8_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -1;

    t9 = (((x37/x38)/x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -3956;
	int64_t x42 = -1LL;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 669753589;

    t10 = (((x41/x42)/x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = -24786;

    t11 = (((x45/x46)/x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 95U;
	int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MAX;
	uint8_t x52 = 9U;

    t12 = (((x49/x50)/x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -12139;
	int64_t x54 = INT64_MIN;
	volatile int16_t x55 = 1;
	int64_t x56 = -1LL;
	static volatile int32_t t13 = -15799;

    t13 = (((x53/x54)/x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 181697;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	int32_t x60 = INT32_MIN;

    t14 = (((x57/x58)/x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = INT8_MAX;
	int32_t x62 = INT32_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t15 = 554;

    t15 = (((x61/x62)/x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -62;
	volatile uint64_t x66 = 471263705LLU;
	volatile uint32_t x68 = UINT32_MAX;
	int32_t t16 = 30;

    t16 = (((x65/x66)/x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	uint8_t x70 = 114U;
	uint64_t x72 = 197LLU;
	volatile int32_t t17 = -3;

    t17 = (((x69/x70)/x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MIN;
	uint64_t x75 = 13824394LLU;
	int8_t x76 = -19;
	volatile int32_t t18 = 542992;

    t18 = (((x73/x74)/x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x77 = 10U;
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = 31665LLU;
	int32_t t19 = -6393621;

    t19 = (((x77/x78)/x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 493U;
	static uint8_t x82 = 5U;
	int16_t x83 = 31;
	volatile int32_t t20 = 349816708;

    t20 = (((x81/x82)/x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x87 = INT32_MIN;
	static int32_t t21 = -1580744;

    t21 = (((x85/x86)/x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	int16_t x90 = -1;
	uint8_t x91 = 110U;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t22 = -1;

    t22 = (((x89/x90)/x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -27;
	int32_t x95 = 24;
	volatile int32_t t23 = 3;

    t23 = (((x93/x94)/x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 2U;
	volatile int16_t x99 = -1;
	static volatile int32_t t24 = -6020;

    t24 = (((x97/x98)/x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = -7;
	volatile int32_t t25 = 85;

    t25 = (((x101/x102)/x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	uint8_t x106 = UINT8_MAX;
	volatile uint16_t x107 = UINT16_MAX;
	uint8_t x108 = 0U;
	int32_t t26 = -2449221;

    t26 = (((x105/x106)/x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x113 = 6919976844609228LLU;
	volatile uint16_t x114 = 10186U;
	uint32_t x115 = 510U;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t27 = 1033380;

    t27 = (((x113/x114)/x115)!=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = 29643857;
	static uint32_t x118 = 2894786U;
	static uint16_t x119 = 1U;

    t28 = (((x117/x118)/x119)!=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x121 = 673LLU;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = UINT32_MAX;
	static int32_t t29 = -9;

    t29 = (((x121/x122)/x123)!=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = -1;
	int32_t x126 = 13646;
	int32_t x127 = -1;
	int32_t x128 = -90;

    t30 = (((x125/x126)/x127)!=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = INT32_MIN;
	uint16_t x131 = UINT16_MAX;

    t31 = (((x129/x130)/x131)!=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = INT8_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MAX;
	int32_t x136 = INT32_MAX;
	volatile int32_t t32 = 648742156;

    t32 = (((x133/x134)/x135)!=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = 82869U;
	int16_t x146 = INT16_MIN;
	int16_t x147 = 46;
	int32_t x148 = -60;
	volatile int32_t t33 = -1;

    t33 = (((x145/x146)/x147)!=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x150 = 40U;
	volatile int8_t x151 = -1;
	static uint32_t x152 = UINT32_MAX;
	volatile int32_t t34 = -942;

    t34 = (((x149/x150)/x151)!=x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MAX;
	uint16_t x155 = 2030U;
	static int32_t x156 = -1;

    t35 = (((x153/x154)/x155)!=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = INT16_MIN;
	uint32_t x158 = 25036U;
	uint16_t x159 = 134U;
	uint8_t x160 = 41U;

    t36 = (((x157/x158)/x159)!=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x162 = UINT32_MAX;
	static volatile int64_t x163 = INT64_MIN;
	int32_t t37 = -615888488;

    t37 = (((x161/x162)/x163)!=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = 2909;
	int64_t x166 = INT64_MIN;
	volatile int32_t t38 = 26;

    t38 = (((x165/x166)/x167)!=x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x169 = 144;
	static volatile int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = 1;
	int32_t t39 = -117698553;

    t39 = (((x169/x170)/x171)!=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = 4002LL;
	volatile uint8_t x174 = UINT8_MAX;
	uint16_t x175 = 257U;
	static uint16_t x176 = UINT16_MAX;

    t40 = (((x173/x174)/x175)!=x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x177 = UINT64_MAX;
	uint8_t x178 = UINT8_MAX;
	int8_t x180 = INT8_MIN;

    t41 = (((x177/x178)/x179)!=x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = INT32_MIN;
	int32_t x182 = -45720494;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = 610;

    t42 = (((x181/x182)/x183)!=x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x185 = UINT8_MAX;
	uint16_t x186 = 6461U;
	volatile uint64_t x187 = 285804517611331424LLU;
	int64_t x188 = INT64_MAX;
	volatile int32_t t43 = -1;

    t43 = (((x185/x186)/x187)!=x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x189 = 453620747557459919LLU;
	static int64_t x191 = -572869728LL;
	int64_t x192 = 91955828558317383LL;
	static volatile int32_t t44 = -127471;

    t44 = (((x189/x190)/x191)!=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x193 = 707595U;
	int32_t x194 = INT32_MAX;
	static int32_t x195 = -586;
	static int32_t x196 = INT32_MIN;

    t45 = (((x193/x194)/x195)!=x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x198 = 17;
	volatile int16_t x199 = -1;
	uint8_t x200 = UINT8_MAX;
	static int32_t t46 = 8192456;

    t46 = (((x197/x198)/x199)!=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = INT64_MIN;
	uint16_t x202 = 1260U;
	int16_t x203 = INT16_MAX;
	int8_t x204 = -6;

    t47 = (((x201/x202)/x203)!=x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	static int16_t x207 = -1;
	int16_t x208 = 471;
	volatile int32_t t48 = -22931486;

    t48 = (((x205/x206)/x207)!=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x210 = 79121841389718913LL;
	int32_t x211 = INT32_MAX;
	static int64_t x212 = -1LL;
	int32_t t49 = -664974;

    t49 = (((x209/x210)/x211)!=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x213 = 0U;
	int32_t x216 = -247244;

    t50 = (((x213/x214)/x215)!=x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MAX;
	int32_t x219 = INT32_MIN;
	uint8_t x220 = 3U;
	static volatile int32_t t51 = -203;

    t51 = (((x217/x218)/x219)!=x220);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = INT8_MIN;
	static int16_t x222 = 9912;
	volatile int16_t x223 = INT16_MAX;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t52 = -87800523;

    t52 = (((x221/x222)/x223)!=x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x226 = INT8_MIN;
	volatile int8_t x227 = INT8_MAX;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t53 = -264656;

    t53 = (((x225/x226)/x227)!=x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x229 = 1426804U;
	uint32_t x231 = 119054U;
	static int8_t x232 = INT8_MAX;
	volatile int32_t t54 = -1999;

    t54 = (((x229/x230)/x231)!=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x238 = -850;
	int32_t x239 = 27444393;
	uint16_t x240 = 322U;

    t55 = (((x237/x238)/x239)!=x240);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x242 = -203;
	volatile int64_t x243 = INT64_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t56 = 2;

    t56 = (((x241/x242)/x243)!=x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	static int32_t x248 = 58203510;
	int32_t t57 = 36816;

    t57 = (((x245/x246)/x247)!=x248);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x249 = INT8_MIN;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = -1;
	volatile uint32_t x252 = 1345047U;
	static volatile int32_t t58 = -16382;

    t58 = (((x249/x250)/x251)!=x252);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = -1LL;
	static volatile int16_t x254 = -1;
	volatile int32_t x255 = -1;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t59 = 89;

    t59 = (((x253/x254)/x255)!=x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = INT8_MAX;
	volatile int8_t x258 = -1;
	uint32_t x259 = 6U;
	int32_t x260 = INT32_MIN;
	volatile int32_t t60 = -1053399;

    t60 = (((x257/x258)/x259)!=x260);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x262 = UINT32_MAX;
	int16_t x263 = INT16_MAX;
	int8_t x264 = -29;
	volatile int32_t t61 = -503;

    t61 = (((x261/x262)/x263)!=x264);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x265 = 927789181177LL;
	volatile uint16_t x266 = 244U;
	static int64_t x267 = 61583LL;
	int16_t x268 = -1;
	volatile int32_t t62 = 2747298;

    t62 = (((x265/x266)/x267)!=x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = UINT32_MAX;
	static uint16_t x270 = 21U;
	int64_t x272 = INT64_MIN;
	volatile int32_t t63 = -21811;

    t63 = (((x269/x270)/x271)!=x272);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x273 = INT8_MAX;
	int8_t x274 = 7;
	static uint64_t x275 = 284396269091LLU;
	int32_t x276 = INT32_MAX;
	static int32_t t64 = -49083123;

    t64 = (((x273/x274)/x275)!=x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = INT16_MAX;
	int32_t x278 = 1;
	int64_t x280 = 178889365147134590LL;
	static int32_t t65 = 45383;

    t65 = (((x277/x278)/x279)!=x280);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = INT16_MAX;
	static int32_t x282 = -1;
	static volatile uint16_t x283 = 3U;
	static int64_t x284 = INT64_MAX;
	volatile int32_t t66 = -18069;

    t66 = (((x281/x282)/x283)!=x284);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x285 = 1U;
	volatile uint64_t x286 = 10905498086444429LLU;
	int16_t x287 = 7;
	int32_t x288 = INT32_MIN;

    t67 = (((x285/x286)/x287)!=x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = UINT8_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t68 = -28375;

    t68 = (((x289/x290)/x291)!=x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x294 = 41U;
	int8_t x295 = -37;
	int16_t x296 = INT16_MIN;
	int32_t t69 = 0;

    t69 = (((x293/x294)/x295)!=x296);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x297 = 27U;
	int8_t x298 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;

    t70 = (((x297/x298)/x299)!=x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x310 = -1;
	static volatile int64_t x311 = INT64_MIN;
	int8_t x312 = INT8_MIN;
	int32_t t71 = 10891476;

    t71 = (((x309/x310)/x311)!=x312);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x313 = INT16_MAX;
	uint64_t x314 = UINT64_MAX;
	static uint32_t x316 = 0U;
	volatile int32_t t72 = -40163;

    t72 = (((x313/x314)/x315)!=x316);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x318 = 9105U;
	int32_t t73 = -16787043;

    t73 = (((x317/x318)/x319)!=x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x321 = INT16_MIN;
	int32_t x322 = -61;

    t74 = (((x321/x322)/x323)!=x324);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x325 = 1069812743;
	uint64_t x327 = 93755LLU;
	static int64_t x328 = 59048LL;
	int32_t t75 = 10;

    t75 = (((x325/x326)/x327)!=x328);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	static int64_t x332 = INT64_MAX;

    t76 = (((x329/x330)/x331)!=x332);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x336 = INT64_MAX;

    t77 = (((x333/x334)/x335)!=x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x337 = 1641U;
	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	int32_t x340 = 1;
	volatile int32_t t78 = -26;

    t78 = (((x337/x338)/x339)!=x340);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = INT64_MAX;
	int64_t x344 = 484LL;
	int32_t t79 = 0;

    t79 = (((x341/x342)/x343)!=x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x345 = 14726;
	int16_t x346 = INT16_MAX;
	int32_t x347 = -1;
	static int64_t x348 = INT64_MAX;
	int32_t t80 = 1;

    t80 = (((x345/x346)/x347)!=x348);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x349 = UINT8_MAX;
	static int32_t x351 = -1;
	int16_t x352 = INT16_MAX;
	int32_t t81 = 33541878;

    t81 = (((x349/x350)/x351)!=x352);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x354 = INT8_MIN;
	static int32_t x356 = -7396057;

    t82 = (((x353/x354)/x355)!=x356);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x357 = -1;
	int16_t x359 = INT16_MIN;
	uint8_t x360 = 20U;
	int32_t t83 = -210;

    t83 = (((x357/x358)/x359)!=x360);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = INT32_MIN;
	volatile int32_t x362 = INT32_MIN;
	uint16_t x364 = 53U;
	static volatile int32_t t84 = -264387373;

    t84 = (((x361/x362)/x363)!=x364);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = -1;
	uint16_t x366 = 5U;
	int32_t x367 = INT32_MIN;
	static int32_t t85 = 0;

    t85 = (((x365/x366)/x367)!=x368);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x374 = INT32_MIN;
	volatile uint16_t x375 = UINT16_MAX;
	static volatile int32_t t86 = -7152;

    t86 = (((x373/x374)/x375)!=x376);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	int16_t x379 = -486;
	uint16_t x380 = 2U;
	int32_t t87 = -21777;

    t87 = (((x377/x378)/x379)!=x380);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x381 = -1;
	int32_t x382 = -31568;
	int16_t x384 = INT16_MIN;
	volatile int32_t t88 = 11611;

    t88 = (((x381/x382)/x383)!=x384);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x385 = 57U;
	int64_t x386 = INT64_MIN;
	static uint16_t x387 = UINT16_MAX;
	static volatile uint16_t x388 = 1U;
	volatile int32_t t89 = 129;

    t89 = (((x385/x386)/x387)!=x388);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x391 = INT16_MIN;
	static int64_t x392 = -1LL;

    t90 = (((x389/x390)/x391)!=x392);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x393 = INT64_MIN;
	int16_t x394 = 1887;
	static uint32_t x395 = UINT32_MAX;
	int32_t t91 = -13;

    t91 = (((x393/x394)/x395)!=x396);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x397 = 5559;
	int8_t x399 = INT8_MIN;
	static volatile int32_t x400 = INT32_MIN;
	volatile int32_t t92 = -1155;

    t92 = (((x397/x398)/x399)!=x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x401 = 79163711439452778LLU;
	static int16_t x402 = -162;
	int16_t x403 = 1271;
	int32_t t93 = 7;

    t93 = (((x401/x402)/x403)!=x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x405 = INT8_MAX;
	volatile int8_t x406 = -1;
	static int8_t x407 = INT8_MIN;
	volatile int8_t x408 = INT8_MIN;
	volatile int32_t t94 = -28470845;

    t94 = (((x405/x406)/x407)!=x408);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x409 = INT64_MAX;
	int8_t x410 = INT8_MAX;
	volatile uint64_t x411 = 215652769LLU;
	uint32_t x412 = 134U;
	int32_t t95 = -6;

    t95 = (((x409/x410)/x411)!=x412);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x413 = 0U;
	uint8_t x414 = 80U;
	static int32_t x415 = INT32_MAX;
	int32_t t96 = -8544235;

    t96 = (((x413/x414)/x415)!=x416);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = -1;
	int32_t x426 = -1;
	static int64_t x427 = INT64_MIN;
	static int64_t x428 = INT64_MIN;

    t97 = (((x425/x426)/x427)!=x428);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x429 = INT64_MAX;
	uint64_t x431 = 5812LLU;
	int32_t x432 = INT32_MAX;
	volatile int32_t t98 = 967977;

    t98 = (((x429/x430)/x431)!=x432);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x433 = 20U;
	uint8_t x434 = UINT8_MAX;
	static uint32_t x435 = 3U;
	int64_t x436 = INT64_MIN;
	volatile int32_t t99 = 128115;

    t99 = (((x433/x434)/x435)!=x436);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x437 = -16889686;
	int32_t x438 = -1;
	uint16_t x439 = UINT16_MAX;
	static uint8_t x440 = 6U;
	int32_t t100 = 1530622;

    t100 = (((x437/x438)/x439)!=x440);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x441 = INT16_MIN;
	static uint32_t x443 = 918910197U;
	volatile int32_t t101 = -655;

    t101 = (((x441/x442)/x443)!=x444);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x445 = UINT8_MAX;
	uint16_t x446 = 30275U;
	int32_t x447 = INT32_MIN;
	volatile int32_t t102 = 2008;

    t102 = (((x445/x446)/x447)!=x448);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x449 = -1;
	int64_t x450 = -1LL;
	int32_t x451 = INT32_MIN;
	static int16_t x452 = -1;
	int32_t t103 = 203364728;

    t103 = (((x449/x450)/x451)!=x452);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x453 = 102560272U;
	volatile int64_t x454 = INT64_MIN;
	volatile int8_t x456 = INT8_MIN;
	volatile int32_t t104 = -45654080;

    t104 = (((x453/x454)/x455)!=x456);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x457 = INT32_MIN;
	volatile uint8_t x459 = UINT8_MAX;
	volatile uint64_t x460 = 107693080493LLU;
	int32_t t105 = 77197;

    t105 = (((x457/x458)/x459)!=x460);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x461 = -1;
	int8_t x462 = -1;
	int64_t x463 = INT64_MIN;
	int8_t x464 = -1;
	volatile int32_t t106 = 54;

    t106 = (((x461/x462)/x463)!=x464);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x465 = UINT8_MAX;
	int16_t x466 = INT16_MIN;
	int16_t x467 = INT16_MIN;
	int8_t x468 = -1;
	volatile int32_t t107 = 0;

    t107 = (((x465/x466)/x467)!=x468);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x469 = 15;
	int16_t x470 = 1126;
	volatile uint16_t x471 = 4532U;
	int32_t t108 = 1;

    t108 = (((x469/x470)/x471)!=x472);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x473 = INT8_MAX;
	int16_t x475 = 11;
	volatile int32_t t109 = -33144636;

    t109 = (((x473/x474)/x475)!=x476);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = -1;
	uint32_t x478 = UINT32_MAX;
	volatile int16_t x479 = INT16_MIN;
	int64_t x480 = 824LL;
	volatile int32_t t110 = -3515;

    t110 = (((x477/x478)/x479)!=x480);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x482 = INT32_MIN;
	int64_t x483 = INT64_MAX;
	int64_t x484 = INT64_MIN;
	static int32_t t111 = 955460;

    t111 = (((x481/x482)/x483)!=x484);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x485 = 13310523;
	uint32_t x486 = UINT32_MAX;
	static int16_t x487 = -1;
	int32_t x488 = 43;
	volatile int32_t t112 = 0;

    t112 = (((x485/x486)/x487)!=x488);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x489 = -1;
	uint8_t x491 = 13U;
	int32_t x492 = -1;
	int32_t t113 = 19597;

    t113 = (((x489/x490)/x491)!=x492);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x494 = INT64_MAX;
	static uint64_t x495 = UINT64_MAX;
	volatile int32_t t114 = 2084;

    t114 = (((x493/x494)/x495)!=x496);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x498 = INT16_MIN;
	uint64_t x499 = 1971102825LLU;
	int16_t x500 = INT16_MAX;
	int32_t t115 = 43;

    t115 = (((x497/x498)/x499)!=x500);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x501 = INT32_MIN;
	volatile uint16_t x502 = UINT16_MAX;
	volatile int16_t x503 = INT16_MAX;
	int16_t x504 = -1;
	volatile int32_t t116 = 12;

    t116 = (((x501/x502)/x503)!=x504);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x505 = -54;
	int16_t x507 = 120;
	static int32_t t117 = 111;

    t117 = (((x505/x506)/x507)!=x508);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x509 = 2;
	uint8_t x510 = 4U;
	static uint64_t x511 = UINT64_MAX;
	volatile uint8_t x512 = UINT8_MAX;
	volatile int32_t t118 = 6975158;

    t118 = (((x509/x510)/x511)!=x512);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x516 = -1;
	volatile int32_t t119 = -38697;

    t119 = (((x513/x514)/x515)!=x516);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = -1;
	uint64_t x518 = 679525912419LLU;
	int16_t x519 = INT16_MIN;
	int16_t x520 = INT16_MAX;

    t120 = (((x517/x518)/x519)!=x520);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x521 = UINT64_MAX;
	volatile int16_t x522 = INT16_MAX;
	int8_t x523 = -1;
	int8_t x524 = INT8_MIN;

    t121 = (((x521/x522)/x523)!=x524);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x525 = INT8_MIN;
	int16_t x526 = INT16_MIN;
	uint64_t x527 = 12248898127LLU;
	static volatile int8_t x528 = -1;
	int32_t t122 = 620784942;

    t122 = (((x525/x526)/x527)!=x528);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x529 = 28;
	uint32_t x530 = UINT32_MAX;
	static int8_t x531 = INT8_MIN;
	int32_t x532 = -55;

    t123 = (((x529/x530)/x531)!=x532);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x533 = INT8_MIN;
	static uint16_t x534 = 4830U;
	uint64_t x535 = UINT64_MAX;
	int64_t x536 = INT64_MAX;
	volatile int32_t t124 = 407765;

    t124 = (((x533/x534)/x535)!=x536);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x537 = 3771798178LLU;
	int32_t x539 = 2363046;
	volatile int8_t x540 = -52;

    t125 = (((x537/x538)/x539)!=x540);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x542 = 154087;
	int8_t x544 = -1;
	int32_t t126 = -4084;

    t126 = (((x541/x542)/x543)!=x544);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x545 = INT16_MIN;
	static int64_t x546 = INT64_MIN;
	volatile int16_t x547 = -1;
	int64_t x548 = INT64_MAX;
	volatile int32_t t127 = -22;

    t127 = (((x545/x546)/x547)!=x548);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x554 = 33;
	static int64_t x555 = -1LL;
	volatile int32_t x556 = INT32_MIN;
	int32_t t128 = -265290;

    t128 = (((x553/x554)/x555)!=x556);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x557 = INT8_MIN;
	int32_t x559 = -1;
	int32_t t129 = 6;

    t129 = (((x557/x558)/x559)!=x560);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x561 = 4U;
	int64_t x562 = 169265LL;
	volatile uint64_t x563 = UINT64_MAX;
	static volatile int32_t t130 = 32737475;

    t130 = (((x561/x562)/x563)!=x564);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x565 = 170LLU;
	volatile int64_t x567 = INT64_MAX;
	int8_t x568 = INT8_MIN;
	volatile int32_t t131 = 14;

    t131 = (((x565/x566)/x567)!=x568);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x569 = -1;
	int16_t x571 = -1;
	int16_t x572 = 20;
	int32_t t132 = -50354284;

    t132 = (((x569/x570)/x571)!=x572);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x573 = INT8_MAX;
	uint32_t x575 = 2844U;
	uint32_t x576 = UINT32_MAX;

    t133 = (((x573/x574)/x575)!=x576);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x578 = -1;
	static int8_t x579 = -53;
	volatile int16_t x580 = 89;
	int32_t t134 = -220212225;

    t134 = (((x577/x578)/x579)!=x580);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x581 = INT64_MIN;
	int64_t x582 = 11614124171LL;
	uint64_t x584 = 15LLU;
	volatile int32_t t135 = -120;

    t135 = (((x581/x582)/x583)!=x584);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x585 = INT32_MAX;
	int64_t x587 = INT64_MAX;
	int64_t x588 = INT64_MIN;
	volatile int32_t t136 = -1468;

    t136 = (((x585/x586)/x587)!=x588);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x590 = INT64_MIN;
	uint32_t x591 = UINT32_MAX;
	int16_t x592 = INT16_MIN;
	static volatile int32_t t137 = -3762514;

    t137 = (((x589/x590)/x591)!=x592);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x593 = 12U;
	volatile int32_t x595 = -1;
	uint64_t x596 = 347LLU;
	volatile int32_t t138 = 654;

    t138 = (((x593/x594)/x595)!=x596);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x597 = 387LL;
	uint16_t x598 = 92U;
	int32_t x599 = 1504521;
	volatile int64_t x600 = INT64_MIN;
	int32_t t139 = -3881521;

    t139 = (((x597/x598)/x599)!=x600);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x601 = 6;
	volatile uint8_t x603 = 2U;
	int32_t t140 = 0;

    t140 = (((x601/x602)/x603)!=x604);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x606 = INT8_MIN;
	static uint64_t x607 = 524664942190442LLU;
	volatile int32_t t141 = 844;

    t141 = (((x605/x606)/x607)!=x608);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x609 = -1;
	int64_t x610 = -1LL;
	volatile uint8_t x611 = UINT8_MAX;
	int16_t x612 = INT16_MAX;
	volatile int32_t t142 = 6425;

    t142 = (((x609/x610)/x611)!=x612);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x614 = UINT8_MAX;
	volatile uint32_t x616 = 12986U;
	int32_t t143 = 4922;

    t143 = (((x613/x614)/x615)!=x616);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x617 = 24249U;
	int8_t x618 = INT8_MIN;
	uint8_t x619 = UINT8_MAX;
	volatile int32_t t144 = -3393;

    t144 = (((x617/x618)/x619)!=x620);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x621 = 14U;
	static int64_t x622 = 3863926555792LL;
	static uint64_t x623 = 21644539151208LLU;
	int32_t x624 = -23470;
	int32_t t145 = 37;

    t145 = (((x621/x622)/x623)!=x624);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x625 = INT64_MAX;
	int8_t x627 = INT8_MIN;
	int32_t x628 = 15501457;
	volatile int32_t t146 = -17150956;

    t146 = (((x625/x626)/x627)!=x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x630 = 2;
	int8_t x631 = INT8_MIN;
	int32_t t147 = -149993;

    t147 = (((x629/x630)/x631)!=x632);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x635 = INT8_MIN;
	uint64_t x636 = UINT64_MAX;
	volatile int32_t t148 = -177544912;

    t148 = (((x633/x634)/x635)!=x636);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x637 = 106U;
	uint16_t x638 = 12U;
	int64_t x639 = -50026317137966048LL;
	int32_t x640 = -1;
	static volatile int32_t t149 = 4946;

    t149 = (((x637/x638)/x639)!=x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x641 = INT64_MIN;
	int32_t x642 = 524;
	int32_t t150 = -2;

    t150 = (((x641/x642)/x643)!=x644);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x647 = INT8_MIN;
	uint32_t x648 = 30836U;
	int32_t t151 = 0;

    t151 = (((x645/x646)/x647)!=x648);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x649 = -7799070273LL;
	static uint32_t x650 = 9768U;
	int16_t x651 = -7423;
	int8_t x652 = INT8_MIN;
	int32_t t152 = -879;

    t152 = (((x649/x650)/x651)!=x652);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x653 = -1LL;
	int16_t x654 = INT16_MIN;
	uint64_t x655 = UINT64_MAX;

    t153 = (((x653/x654)/x655)!=x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x657 = UINT16_MAX;
	int32_t x658 = -21173287;
	static volatile int16_t x659 = -7;
	int32_t x660 = INT32_MIN;

    t154 = (((x657/x658)/x659)!=x660);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x661 = UINT64_MAX;
	int32_t x662 = 5;
	uint64_t x663 = 2441424681086605LLU;
	int32_t x664 = -1;
	int32_t t155 = 12;

    t155 = (((x661/x662)/x663)!=x664);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x665 = -7;
	int8_t x666 = INT8_MIN;
	uint32_t x667 = UINT32_MAX;

    t156 = (((x665/x666)/x667)!=x668);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x669 = -1;
	uint32_t x670 = 3722U;
	static uint8_t x671 = 1U;
	volatile int64_t x672 = INT64_MIN;
	volatile int32_t t157 = -20;

    t157 = (((x669/x670)/x671)!=x672);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x673 = -1;
	static int32_t x675 = -11192;
	int32_t t158 = 6626893;

    t158 = (((x673/x674)/x675)!=x676);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x677 = -4;
	static int16_t x678 = -3;
	volatile int8_t x679 = INT8_MIN;
	uint8_t x680 = 19U;
	volatile int32_t t159 = -982143148;

    t159 = (((x677/x678)/x679)!=x680);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x681 = 1;
	volatile int64_t x682 = -1LL;
	static int16_t x683 = -1;
	int32_t t160 = -407;

    t160 = (((x681/x682)/x683)!=x684);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x685 = -1;
	int32_t x686 = INT32_MAX;
	volatile int64_t x687 = INT64_MIN;
	int16_t x688 = -1;
	volatile int32_t t161 = -126593910;

    t161 = (((x685/x686)/x687)!=x688);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x690 = 7905;
	static uint16_t x691 = UINT16_MAX;
	int32_t t162 = -3;

    t162 = (((x689/x690)/x691)!=x692);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x695 = 54183595123LLU;
	uint16_t x696 = UINT16_MAX;
	int32_t t163 = 51284718;

    t163 = (((x693/x694)/x695)!=x696);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x697 = INT32_MIN;
	int8_t x698 = INT8_MAX;
	uint16_t x699 = 1485U;
	static int64_t x700 = 4011274562589LL;

    t164 = (((x697/x698)/x699)!=x700);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x701 = INT8_MIN;
	volatile uint64_t x702 = 68593608328483340LLU;
	uint32_t x704 = 132892418U;
	int32_t t165 = -371;

    t165 = (((x701/x702)/x703)!=x704);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x705 = INT64_MAX;
	int64_t x708 = INT64_MAX;
	volatile int32_t t166 = 130918107;

    t166 = (((x705/x706)/x707)!=x708);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x710 = UINT8_MAX;
	uint32_t x711 = UINT32_MAX;
	volatile int32_t t167 = 48;

    t167 = (((x709/x710)/x711)!=x712);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x713 = 69370U;
	int8_t x714 = INT8_MIN;
	static volatile int16_t x715 = INT16_MIN;
	volatile uint16_t x716 = UINT16_MAX;
	int32_t t168 = -24;

    t168 = (((x713/x714)/x715)!=x716);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x717 = INT64_MIN;
	static int32_t x720 = INT32_MIN;
	volatile int32_t t169 = 1050701189;

    t169 = (((x717/x718)/x719)!=x720);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x721 = 3;
	int32_t x723 = INT32_MIN;
	volatile int8_t x724 = -1;
	int32_t t170 = -743725245;

    t170 = (((x721/x722)/x723)!=x724);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x725 = 41U;
	int32_t x726 = INT32_MIN;
	int32_t x727 = -108;
	uint32_t x728 = UINT32_MAX;
	int32_t t171 = 919;

    t171 = (((x725/x726)/x727)!=x728);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x729 = INT64_MIN;
	static int64_t x730 = INT64_MIN;
	int64_t x731 = INT64_MIN;
	uint16_t x732 = UINT16_MAX;
	int32_t t172 = -2489;

    t172 = (((x729/x730)/x731)!=x732);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x734 = 8U;
	int64_t x735 = INT64_MIN;
	volatile int8_t x736 = -29;
	int32_t t173 = -56998;

    t173 = (((x733/x734)/x735)!=x736);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x737 = 2U;
	static int8_t x738 = INT8_MIN;
	uint64_t x739 = 15502261285326988LLU;
	static volatile int64_t x740 = INT64_MAX;
	int32_t t174 = 83489560;

    t174 = (((x737/x738)/x739)!=x740);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x741 = INT8_MAX;
	volatile int32_t x742 = INT32_MAX;
	int64_t x743 = INT64_MIN;
	int32_t x744 = INT32_MAX;

    t175 = (((x741/x742)/x743)!=x744);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x745 = -6;
	int16_t x747 = -192;
	static uint32_t x748 = UINT32_MAX;
	volatile int32_t t176 = 0;

    t176 = (((x745/x746)/x747)!=x748);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x749 = -1LL;
	volatile int64_t x750 = INT64_MIN;
	int8_t x752 = INT8_MIN;
	int32_t t177 = 764832;

    t177 = (((x749/x750)/x751)!=x752);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x753 = 9U;
	static int64_t x754 = INT64_MIN;
	static uint32_t x756 = UINT32_MAX;
	int32_t t178 = -8399;

    t178 = (((x753/x754)/x755)!=x756);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x757 = UINT64_MAX;
	int16_t x758 = -1;
	int8_t x759 = INT8_MAX;
	volatile int16_t x760 = INT16_MIN;
	volatile int32_t t179 = -30939;

    t179 = (((x757/x758)/x759)!=x760);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x761 = UINT32_MAX;
	static int16_t x762 = INT16_MIN;
	int16_t x763 = INT16_MIN;
	uint32_t x764 = 11992U;
	volatile int32_t t180 = 565458;

    t180 = (((x761/x762)/x763)!=x764);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x765 = 7LLU;
	volatile uint64_t x766 = 648097171LLU;
	static int32_t x768 = INT32_MAX;
	int32_t t181 = 617;

    t181 = (((x765/x766)/x767)!=x768);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x769 = UINT32_MAX;
	int8_t x770 = -1;
	static int64_t x772 = -1LL;
	volatile int32_t t182 = 13770;

    t182 = (((x769/x770)/x771)!=x772);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x773 = INT8_MIN;
	static int32_t x774 = INT32_MIN;
	uint16_t x775 = UINT16_MAX;
	static int8_t x776 = -17;
	int32_t t183 = -191073;

    t183 = (((x773/x774)/x775)!=x776);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x778 = -1;
	int16_t x779 = INT16_MIN;
	int16_t x780 = INT16_MIN;
	volatile int32_t t184 = -66733350;

    t184 = (((x777/x778)/x779)!=x780);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x781 = 782125LLU;
	int32_t x783 = INT32_MAX;
	volatile int32_t t185 = 0;

    t185 = (((x781/x782)/x783)!=x784);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x785 = -47;
	static uint8_t x786 = UINT8_MAX;
	int32_t x787 = INT32_MIN;
	static uint8_t x788 = 2U;

    t186 = (((x785/x786)/x787)!=x788);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	volatile int8_t x790 = -48;
	static volatile uint16_t x791 = 22369U;
	int8_t x792 = -1;
	int32_t t187 = 51649802;

    t187 = (((x789/x790)/x791)!=x792);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x793 = INT16_MAX;
	int32_t x794 = -1;
	int32_t x795 = INT32_MIN;
	uint8_t x796 = 19U;
	volatile int32_t t188 = -2246201;

    t188 = (((x793/x794)/x795)!=x796);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x797 = -2;
	static volatile int16_t x798 = -145;
	volatile uint8_t x799 = UINT8_MAX;
	uint32_t x800 = 292104U;
	static int32_t t189 = -549137;

    t189 = (((x797/x798)/x799)!=x800);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x801 = INT16_MIN;
	static int32_t x802 = 6572;

    t190 = (((x801/x802)/x803)!=x804);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x806 = INT64_MIN;
	static uint64_t x807 = 24670734LLU;
	int16_t x808 = 1315;
	volatile int32_t t191 = 47094;

    t191 = (((x805/x806)/x807)!=x808);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x809 = INT8_MIN;
	uint16_t x810 = 32310U;
	uint64_t x811 = UINT64_MAX;
	int32_t x812 = INT32_MIN;
	int32_t t192 = -14680;

    t192 = (((x809/x810)/x811)!=x812);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x813 = 0;
	int8_t x815 = INT8_MIN;
	static int32_t x816 = INT32_MIN;
	volatile int32_t t193 = -447990;

    t193 = (((x813/x814)/x815)!=x816);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x817 = -10437720599756LL;
	int16_t x818 = -1;
	int32_t x819 = INT32_MIN;
	volatile int32_t t194 = -23612;

    t194 = (((x817/x818)/x819)!=x820);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x821 = INT64_MIN;
	static int64_t x822 = 5LL;
	volatile int32_t x824 = INT32_MAX;
	volatile int32_t t195 = 106;

    t195 = (((x821/x822)/x823)!=x824);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x825 = 2501U;
	uint8_t x826 = 24U;
	static uint8_t x828 = 9U;
	volatile int32_t t196 = -1004650337;

    t196 = (((x825/x826)/x827)!=x828);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x829 = INT8_MIN;
	int64_t x830 = INT64_MIN;
	uint64_t x831 = UINT64_MAX;
	static volatile int32_t x832 = 28530632;
	int32_t t197 = 577847871;

    t197 = (((x829/x830)/x831)!=x832);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x833 = -1;
	static volatile int16_t x834 = -226;
	int32_t x835 = -11;
	volatile int64_t x836 = -1LL;

    t198 = (((x833/x834)/x835)!=x836);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x838 = INT64_MAX;
	static uint64_t x839 = UINT64_MAX;

    t199 = (((x837/x838)/x839)!=x840);

    if (t199 != 1) { NG(); } else { ; }
	
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

