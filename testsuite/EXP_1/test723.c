
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

static volatile uint8_t x8 = 1U;
int16_t x13 = -1;
int16_t x16 = 70;
int32_t t2 = -704;
int32_t x18 = -85672;
int32_t x22 = -241;
volatile uint8_t x23 = 3U;
static volatile uint8_t x28 = UINT8_MAX;
int32_t t5 = 1;
static int32_t t6 = -145225807;
int32_t t10 = -1309;
int32_t t11 = -448214419;
uint8_t x63 = UINT8_MAX;
int64_t x65 = INT64_MIN;
volatile int32_t t14 = 0;
uint16_t x69 = 104U;
static volatile uint8_t x71 = 3U;
int16_t x79 = -1;
int64_t x82 = -1LL;
volatile int64_t x84 = -81794802072529LL;
uint32_t x86 = 7655553U;
volatile int32_t t19 = -5;
volatile uint16_t x93 = 30U;
uint64_t x94 = 294596870966572LLU;
volatile int8_t x96 = INT8_MIN;
int16_t x97 = INT16_MIN;
volatile int32_t t22 = 1054676615;
int32_t x107 = -1;
static volatile int16_t x112 = INT16_MAX;
volatile int16_t x124 = 0;
int32_t x130 = INT32_MIN;
int64_t x134 = 985601187900635891LL;
volatile int32_t t29 = -1;
int32_t x137 = INT32_MIN;
static int16_t x141 = INT16_MIN;
int32_t x144 = -1;
static int8_t x149 = INT8_MAX;
volatile int8_t x159 = INT8_MIN;
uint8_t x162 = UINT8_MAX;
int64_t x166 = 2965LL;
uint8_t x167 = UINT8_MAX;
uint64_t x170 = UINT64_MAX;
uint8_t x184 = UINT8_MAX;
int32_t x195 = 1;
int32_t t44 = -5;
int32_t t45 = -22;
int16_t x202 = 20;
volatile uint8_t x204 = UINT8_MAX;
int64_t x214 = 331153LL;
uint8_t x220 = UINT8_MAX;
int16_t x222 = INT16_MAX;
uint8_t x223 = 15U;
static int8_t x229 = INT8_MAX;
int64_t x232 = 124449880749LL;
static int8_t x234 = INT8_MAX;
int32_t t54 = -16295;
int32_t x238 = -1;
volatile uint32_t x240 = 6901U;
static int32_t x241 = INT32_MIN;
int32_t t57 = 8449;
uint8_t x252 = 18U;
int64_t x262 = -1LL;
int64_t x268 = INT64_MIN;
int32_t x278 = -30884;
int64_t x287 = -1LL;
volatile uint32_t x288 = 187U;
int32_t t68 = -388548788;
uint32_t x310 = UINT32_MAX;
volatile int32_t t73 = -1056;
uint16_t x322 = 15582U;
uint8_t x328 = 14U;
int16_t x333 = -14191;
volatile uint8_t x334 = UINT8_MAX;
static volatile int64_t x338 = -1LL;
uint8_t x346 = UINT8_MAX;
volatile uint8_t x352 = UINT8_MAX;
int8_t x356 = INT8_MIN;
uint16_t x358 = UINT16_MAX;
int64_t x362 = -55103LL;
int32_t x364 = -1;
int32_t x365 = 254;
uint8_t x373 = 16U;
static int8_t x374 = 20;
int8_t x376 = INT8_MIN;
volatile int32_t t91 = -308764820;
volatile int16_t x392 = INT16_MIN;
volatile int32_t t92 = -760436;
volatile int64_t x395 = 179775722LL;
uint8_t x397 = 12U;
uint64_t x403 = 60570551LLU;
uint64_t x409 = UINT64_MAX;
int32_t x410 = INT32_MAX;
uint16_t x414 = UINT16_MAX;
int64_t x419 = -553427LL;
volatile int32_t t99 = 0;
volatile int32_t t101 = -6535;
uint16_t x442 = 3U;
int8_t x446 = INT8_MIN;
volatile int64_t x451 = 3LL;
volatile int32_t t105 = 110802683;
int32_t x462 = INT32_MAX;
volatile int32_t x463 = INT32_MIN;
volatile int16_t x467 = -218;
volatile int16_t x471 = INT16_MIN;
uint32_t x475 = UINT32_MAX;
static int64_t x483 = -1LL;
static int8_t x484 = -1;
int16_t x485 = -1;
uint8_t x486 = 23U;
int8_t x487 = INT8_MAX;
int64_t x490 = INT64_MAX;
static int64_t x505 = -1LL;
volatile int16_t x519 = INT16_MAX;
int32_t x525 = 445405;
int8_t x529 = INT8_MAX;
int32_t x530 = INT32_MIN;
volatile uint16_t x544 = 23U;
volatile int32_t x550 = INT32_MAX;
uint16_t x552 = UINT16_MAX;
int32_t t128 = -1268369;
int8_t x559 = INT8_MIN;
volatile uint16_t x564 = 1996U;
volatile int8_t x565 = INT8_MIN;
int64_t x566 = INT64_MAX;
volatile int32_t x567 = 99337878;
int64_t x572 = INT64_MIN;
int64_t x573 = INT64_MAX;
int8_t x581 = INT8_MIN;
static int32_t t135 = 47984;
int32_t x590 = INT32_MAX;
uint64_t x591 = 57253068377LLU;
volatile int32_t t137 = 18;
int32_t x595 = -2154;
static volatile int32_t t138 = -35;
int64_t x599 = -3LL;
static uint8_t x601 = 42U;
uint8_t x607 = 9U;
int32_t x609 = 345;
int8_t x616 = -3;
volatile int64_t x618 = INT64_MAX;
int32_t t144 = 149988;
int8_t x626 = INT8_MIN;
static volatile int16_t x628 = INT16_MIN;
int32_t t146 = 18805;
uint16_t x632 = 26515U;
int8_t x636 = 1;
uint64_t x639 = 351LLU;
int32_t x641 = 44;
int64_t x649 = -11214938LL;
static int32_t t152 = -1;
volatile int8_t x662 = INT8_MAX;
volatile int64_t x665 = 4234138934685210LL;
volatile int32_t x670 = INT32_MIN;
static uint32_t x673 = 3914U;
int16_t x676 = INT16_MIN;
int8_t x679 = -53;
volatile int32_t x684 = INT32_MAX;
volatile uint8_t x688 = 1U;
static int32_t t161 = 0;
uint16_t x689 = 1U;
volatile int16_t x690 = -4;
volatile uint32_t x691 = UINT32_MAX;
int16_t x693 = -1;
int16_t x694 = -15976;
int16_t x696 = -1;
int16_t x697 = -1;
int64_t x699 = 22191LL;
uint8_t x711 = UINT8_MAX;
static int64_t x733 = INT64_MIN;
static int64_t x735 = INT64_MIN;
int32_t x739 = INT32_MIN;
static int64_t x743 = INT64_MAX;
volatile int8_t x745 = INT8_MIN;
volatile int64_t x746 = -1223237434LL;
static int64_t x747 = INT64_MIN;
int32_t t176 = 5833402;
int32_t t178 = 0;
static int8_t x757 = 1;
int32_t x767 = INT32_MAX;
int32_t t181 = -9;
int16_t x769 = -1;
int16_t x772 = -5;
static int32_t t182 = 2280573;
uint8_t x778 = UINT8_MAX;
int16_t x785 = -10;
int32_t x786 = INT32_MIN;
int32_t t187 = 10;
int8_t x796 = INT8_MAX;
volatile int32_t t189 = -34;
volatile int32_t t190 = 2910887;
volatile int16_t x807 = 130;
int8_t x808 = -1;
int64_t x810 = INT64_MIN;
int32_t t192 = 0;
int32_t x814 = INT32_MAX;
volatile int64_t x819 = INT64_MIN;
static int32_t x822 = 2462;
int8_t x823 = -1;
static uint8_t x837 = UINT8_MAX;
volatile int16_t x842 = INT16_MIN;
static uint8_t x844 = 81U;


void f0(void) {
    	int32_t x1 = -1;
	uint64_t x2 = UINT64_MAX;
	static uint8_t x3 = 102U;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -594843;

    t0 = (((x1/x2)<=x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	uint64_t x6 = UINT64_MAX;
	volatile int8_t x7 = INT8_MIN;
	int32_t t1 = 86988001;

    t1 = (((x5/x6)<=x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = 77315152125LL;
	volatile int64_t x15 = INT64_MIN;

    t2 = (((x13/x14)<=x15)>x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = 196LL;
	volatile int8_t x19 = -9;
	int64_t x20 = INT64_MAX;
	int32_t t3 = -30693;

    t3 = (((x17/x18)<=x19)>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = UINT8_MAX;
	static volatile int16_t x24 = -198;
	volatile int32_t t4 = -574660;

    t4 = (((x21/x22)<=x23)>x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -19009;
	int16_t x26 = 62;
	static volatile int8_t x27 = 6;

    t5 = (((x25/x26)<=x27)>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	static int8_t x32 = -1;

    t6 = (((x29/x30)<=x31)>x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 5032096733469500044LLU;
	int64_t x34 = -1LL;
	int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MAX;
	volatile int32_t t7 = -195156791;

    t7 = (((x33/x34)<=x35)>x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 13931431U;
	volatile int32_t x38 = INT32_MIN;
	volatile uint32_t x39 = 356U;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t8 = 27;

    t8 = (((x37/x38)<=x39)>x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x45 = 2629470293401LL;
	volatile uint16_t x46 = 79U;
	int64_t x47 = 59122540LL;
	int32_t x48 = -1;
	volatile int32_t t9 = 1776;

    t9 = (((x45/x46)<=x47)>x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MIN;
	volatile int16_t x50 = INT16_MAX;
	static int64_t x51 = INT64_MIN;
	int64_t x52 = 255446361LL;

    t10 = (((x49/x50)<=x51)>x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 6U;
	static uint8_t x54 = UINT8_MAX;
	uint32_t x55 = UINT32_MAX;
	volatile int16_t x56 = INT16_MIN;

    t11 = (((x53/x54)<=x55)>x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	volatile int8_t x59 = 3;
	static uint32_t x60 = UINT32_MAX;
	static volatile int32_t t12 = 1358;

    t12 = (((x57/x58)<=x59)>x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x61 = 34;
	static uint64_t x62 = 1013LLU;
	int32_t x64 = -22298179;
	volatile int32_t t13 = -8015515;

    t13 = (((x61/x62)<=x63)>x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x66 = INT64_MAX;
	int8_t x67 = 11;
	uint8_t x68 = 14U;

    t14 = (((x65/x66)<=x67)>x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x70 = 101U;
	static uint16_t x72 = 30043U;
	volatile int32_t t15 = 13134;

    t15 = (((x69/x70)<=x71)>x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = 823484474925917LL;
	int64_t x74 = INT64_MIN;
	int8_t x75 = -55;
	int16_t x76 = 0;
	static int32_t t16 = -498995681;

    t16 = (((x73/x74)<=x75)>x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	static volatile uint32_t x80 = 458736U;
	volatile int32_t t17 = -4;

    t17 = (((x77/x78)<=x79)>x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -1LL;
	int16_t x83 = -14714;
	volatile int32_t t18 = -28715;

    t18 = (((x81/x82)<=x83)>x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MIN;
	int8_t x87 = -1;
	int64_t x88 = 129130317385800539LL;

    t19 = (((x85/x86)<=x87)>x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x89 = 942203933;
	int64_t x90 = -416183850LL;
	volatile int64_t x91 = 83LL;
	int16_t x92 = 5024;
	volatile int32_t t20 = 15797808;

    t20 = (((x89/x90)<=x91)>x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x95 = INT64_MIN;
	volatile int32_t t21 = 4082613;

    t21 = (((x93/x94)<=x95)>x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x98 = 9U;
	int32_t x99 = INT32_MAX;
	volatile int8_t x100 = -1;

    t22 = (((x97/x98)<=x99)>x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MAX;
	int16_t x102 = -1;
	int32_t x103 = INT32_MIN;
	volatile uint64_t x104 = 1476428960789230830LLU;
	volatile int32_t t23 = -637;

    t23 = (((x101/x102)<=x103)>x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x105 = INT16_MAX;
	uint16_t x106 = 7U;
	uint16_t x108 = UINT16_MAX;
	int32_t t24 = -30;

    t24 = (((x105/x106)<=x107)>x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = 0;
	int16_t x110 = INT16_MIN;
	static volatile int64_t x111 = INT64_MAX;
	int32_t t25 = -14;

    t25 = (((x109/x110)<=x111)>x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = 0U;
	static uint16_t x122 = 12369U;
	int8_t x123 = INT8_MIN;
	volatile int32_t t26 = -7883;

    t26 = (((x121/x122)<=x123)>x124);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = -1;
	int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MIN;
	uint8_t x128 = 3U;
	static int32_t t27 = -380681;

    t27 = (((x125/x126)<=x127)>x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x129 = INT32_MIN;
	int16_t x131 = -1;
	uint8_t x132 = 13U;
	volatile int32_t t28 = 14953401;

    t28 = (((x129/x130)<=x131)>x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = 1;
	int32_t x135 = -1;
	uint8_t x136 = 10U;

    t29 = (((x133/x134)<=x135)>x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x138 = 2U;
	int16_t x139 = INT16_MAX;
	int32_t x140 = -1;
	int32_t t30 = -50821388;

    t30 = (((x137/x138)<=x139)>x140);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x142 = 75U;
	int8_t x143 = 1;
	static volatile int32_t t31 = -123953;

    t31 = (((x141/x142)<=x143)>x144);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x145 = -15;
	uint64_t x146 = 5732111LLU;
	int32_t x147 = INT32_MAX;
	int16_t x148 = 15542;
	static int32_t t32 = -48935570;

    t32 = (((x145/x146)<=x147)>x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x150 = UINT8_MAX;
	volatile int32_t x151 = INT32_MIN;
	static int64_t x152 = -1LL;
	volatile int32_t t33 = 0;

    t33 = (((x149/x150)<=x151)>x152);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x153 = UINT16_MAX;
	static int8_t x154 = INT8_MIN;
	static int16_t x155 = -1;
	static volatile uint32_t x156 = 104153U;
	static int32_t t34 = -52275225;

    t34 = (((x153/x154)<=x155)>x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MIN;
	int64_t x160 = -7291673953LL;
	volatile int32_t t35 = 53517100;

    t35 = (((x157/x158)<=x159)>x160);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x161 = 39U;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -1;
	int32_t t36 = -4;

    t36 = (((x161/x162)<=x163)>x164);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x165 = INT64_MIN;
	int32_t x168 = -1;
	volatile int32_t t37 = -526446611;

    t37 = (((x165/x166)<=x167)>x168);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x169 = UINT64_MAX;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t38 = 44004718;

    t38 = (((x169/x170)<=x171)>x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x173 = -1LL;
	int64_t x174 = -14656950096765LL;
	int16_t x175 = 5;
	static volatile int32_t x176 = 39035117;
	int32_t t39 = -90;

    t39 = (((x173/x174)<=x175)>x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = INT16_MIN;
	int32_t x178 = -1;
	static uint16_t x179 = 6274U;
	int8_t x180 = 2;
	volatile int32_t t40 = -303;

    t40 = (((x177/x178)<=x179)>x180);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MAX;
	int64_t x183 = -1LL;
	int32_t t41 = -161606172;

    t41 = (((x181/x182)<=x183)>x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x185 = 14U;
	int16_t x186 = 13432;
	static int16_t x187 = INT16_MAX;
	uint64_t x188 = UINT64_MAX;
	static int32_t t42 = 1567;

    t42 = (((x185/x186)<=x187)>x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MAX;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = 98147;
	volatile int32_t t43 = -608;

    t43 = (((x189/x190)<=x191)>x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x193 = 131001U;
	int16_t x194 = INT16_MIN;
	static volatile uint32_t x196 = UINT32_MAX;

    t44 = (((x193/x194)<=x195)>x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x197 = 261218015327324LLU;
	int16_t x198 = -2210;
	int16_t x199 = 12372;
	volatile int16_t x200 = -367;

    t45 = (((x197/x198)<=x199)>x200);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x201 = INT8_MAX;
	int64_t x203 = -1LL;
	static volatile int32_t t46 = 3;

    t46 = (((x201/x202)<=x203)>x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x205 = INT8_MIN;
	volatile uint8_t x206 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	int8_t x208 = -1;
	volatile int32_t t47 = -11088494;

    t47 = (((x205/x206)<=x207)>x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = -2;
	int32_t x210 = -13;
	int64_t x211 = INT64_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t48 = 3;

    t48 = (((x209/x210)<=x211)>x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x213 = 20U;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MAX;
	int32_t t49 = 3280;

    t49 = (((x213/x214)<=x215)>x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x217 = 36U;
	int64_t x218 = INT64_MIN;
	int32_t x219 = -1;
	int32_t t50 = 1018943426;

    t50 = (((x217/x218)<=x219)>x220);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = INT8_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t51 = -984142;

    t51 = (((x221/x222)<=x223)>x224);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x225 = -1;
	volatile uint64_t x226 = 86671057315768LLU;
	int64_t x227 = -385074468314844LL;
	uint64_t x228 = 972LLU;
	static volatile int32_t t52 = -2486;

    t52 = (((x225/x226)<=x227)>x228);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MAX;
	int32_t t53 = -2;

    t53 = (((x229/x230)<=x231)>x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x233 = 491765508386101310LLU;
	uint16_t x235 = 2U;
	static volatile uint64_t x236 = 298309391LLU;

    t54 = (((x233/x234)<=x235)>x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x237 = 9909113405LL;
	uint64_t x239 = UINT64_MAX;
	volatile int32_t t55 = -186255;

    t55 = (((x237/x238)<=x239)>x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x242 = INT16_MIN;
	volatile int16_t x243 = 1;
	uint64_t x244 = UINT64_MAX;
	int32_t t56 = -2026;

    t56 = (((x241/x242)<=x243)>x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x245 = INT16_MIN;
	static int8_t x246 = -19;
	int8_t x247 = -7;
	int64_t x248 = INT64_MIN;

    t57 = (((x245/x246)<=x247)>x248);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x249 = 19276U;
	static volatile int16_t x250 = 15509;
	volatile uint64_t x251 = 112LLU;
	int32_t t58 = -1;

    t58 = (((x249/x250)<=x251)>x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x253 = 2U;
	static int16_t x254 = -1;
	int64_t x255 = -1LL;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t59 = 21300249;

    t59 = (((x253/x254)<=x255)>x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x257 = -5;
	uint64_t x258 = 16LLU;
	uint32_t x259 = 1076144U;
	int16_t x260 = INT16_MIN;
	int32_t t60 = 4;

    t60 = (((x257/x258)<=x259)>x260);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = INT32_MIN;
	static uint32_t x263 = 1496U;
	static volatile int16_t x264 = 30;
	volatile int32_t t61 = -254;

    t61 = (((x261/x262)<=x263)>x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x265 = 805821U;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	volatile int32_t t62 = -5393229;

    t62 = (((x265/x266)<=x267)>x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x269 = -351629208007860689LL;
	int8_t x270 = -1;
	uint32_t x271 = 129053U;
	uint32_t x272 = 228982U;
	volatile int32_t t63 = -71;

    t63 = (((x269/x270)<=x271)>x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x273 = 0;
	int8_t x274 = INT8_MAX;
	static uint32_t x275 = UINT32_MAX;
	uint16_t x276 = 105U;
	volatile int32_t t64 = -1;

    t64 = (((x273/x274)<=x275)>x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x277 = INT32_MIN;
	uint32_t x279 = 62160914U;
	int32_t x280 = 1;
	int32_t t65 = -2069041;

    t65 = (((x277/x278)<=x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MIN;
	uint16_t x283 = 882U;
	uint16_t x284 = 31U;
	int32_t t66 = -3;

    t66 = (((x281/x282)<=x283)>x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x285 = INT8_MIN;
	static uint64_t x286 = UINT64_MAX;
	static int32_t t67 = 0;

    t67 = (((x285/x286)<=x287)>x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -8325113717940LL;
	int32_t x290 = INT32_MIN;
	static uint32_t x291 = UINT32_MAX;
	uint32_t x292 = 32470U;

    t68 = (((x289/x290)<=x291)>x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x293 = 3430701979256LLU;
	static uint16_t x294 = UINT16_MAX;
	uint64_t x295 = 1677009724200912266LLU;
	volatile uint32_t x296 = UINT32_MAX;
	int32_t t69 = 243758646;

    t69 = (((x293/x294)<=x295)>x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x297 = 0U;
	static int8_t x298 = -48;
	int32_t x299 = INT32_MIN;
	static int64_t x300 = -2567824758321LL;
	volatile int32_t t70 = -29109;

    t70 = (((x297/x298)<=x299)>x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = INT32_MIN;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = -1;
	int32_t x304 = INT32_MIN;
	volatile int32_t t71 = -14;

    t71 = (((x301/x302)<=x303)>x304);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x305 = 21U;
	static int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	int32_t t72 = -825475643;

    t72 = (((x305/x306)<=x307)>x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x309 = -1LL;
	static int8_t x311 = INT8_MAX;
	uint32_t x312 = 15995858U;

    t73 = (((x309/x310)<=x311)>x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x313 = INT16_MAX;
	volatile uint64_t x314 = 1LLU;
	int64_t x315 = INT64_MAX;
	uint64_t x316 = UINT64_MAX;
	static volatile int32_t t74 = 148356;

    t74 = (((x313/x314)<=x315)>x316);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MIN;
	static int64_t x319 = -1LL;
	uint8_t x320 = 10U;
	volatile int32_t t75 = -29827;

    t75 = (((x317/x318)<=x319)>x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x321 = INT32_MAX;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = -2;
	volatile int32_t t76 = -98;

    t76 = (((x321/x322)<=x323)>x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x325 = 2853U;
	static int64_t x326 = 59243283LL;
	volatile int8_t x327 = INT8_MIN;
	int32_t t77 = 166238;

    t77 = (((x325/x326)<=x327)>x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x329 = INT64_MIN;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -1LL;
	int8_t x332 = -1;
	static volatile int32_t t78 = 6746;

    t78 = (((x329/x330)<=x331)>x332);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x335 = UINT8_MAX;
	int8_t x336 = 13;
	int32_t t79 = -4703;

    t79 = (((x333/x334)<=x335)>x336);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x337 = INT16_MIN;
	volatile int8_t x339 = 0;
	int32_t x340 = INT32_MIN;
	volatile int32_t t80 = 42596362;

    t80 = (((x337/x338)<=x339)>x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x341 = 10009U;
	static uint64_t x342 = 15334933805LLU;
	int8_t x343 = 2;
	uint16_t x344 = 9764U;
	static int32_t t81 = -89;

    t81 = (((x341/x342)<=x343)>x344);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x345 = 96U;
	int16_t x347 = INT16_MIN;
	static uint16_t x348 = 1U;
	volatile int32_t t82 = -2;

    t82 = (((x345/x346)<=x347)>x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x349 = UINT32_MAX;
	static uint64_t x350 = 526LLU;
	int16_t x351 = INT16_MIN;
	int32_t t83 = 2772;

    t83 = (((x349/x350)<=x351)>x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = -1LL;
	static volatile uint16_t x354 = UINT16_MAX;
	static volatile uint32_t x355 = 1779931382U;
	int32_t t84 = -115591089;

    t84 = (((x353/x354)<=x355)>x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x357 = -1LL;
	int32_t x359 = INT32_MIN;
	volatile int8_t x360 = 5;
	int32_t t85 = 354090;

    t85 = (((x357/x358)<=x359)>x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = -1312097;
	volatile uint8_t x363 = 73U;
	volatile int32_t t86 = 2638;

    t86 = (((x361/x362)<=x363)>x364);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x366 = 8153444815674LLU;
	int16_t x367 = INT16_MAX;
	uint64_t x368 = 54708LLU;
	volatile int32_t t87 = -40;

    t87 = (((x365/x366)<=x367)>x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x369 = 27348919556LLU;
	volatile int64_t x370 = -174726114777LL;
	volatile int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t88 = 1;

    t88 = (((x369/x370)<=x371)>x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x375 = -6839;
	static volatile int32_t t89 = -7584201;

    t89 = (((x373/x374)<=x375)>x376);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x377 = 62501935010LL;
	volatile int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MAX;
	volatile int64_t x380 = -854795297014LL;
	volatile int32_t t90 = -19458;

    t90 = (((x377/x378)<=x379)>x380);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = -1;
	int16_t x382 = -1;
	static volatile int8_t x383 = -1;
	static uint16_t x384 = 10U;

    t91 = (((x381/x382)<=x383)>x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = 36U;

    t92 = (((x389/x390)<=x391)>x392);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MAX;
	volatile uint16_t x396 = 138U;
	int32_t t93 = 317;

    t93 = (((x393/x394)<=x395)>x396);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x398 = UINT8_MAX;
	uint32_t x399 = 211U;
	int8_t x400 = -2;
	volatile int32_t t94 = 185791990;

    t94 = (((x397/x398)<=x399)>x400);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x401 = 20;
	int8_t x402 = INT8_MAX;
	int16_t x404 = INT16_MIN;
	volatile int32_t t95 = 5;

    t95 = (((x401/x402)<=x403)>x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MIN;
	volatile int32_t t96 = -247;

    t96 = (((x409/x410)<=x411)>x412);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	int64_t x415 = INT64_MAX;
	static uint16_t x416 = 5064U;
	volatile int32_t t97 = -13318;

    t97 = (((x413/x414)<=x415)>x416);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x417 = -1;
	static uint64_t x418 = 71LLU;
	uint16_t x420 = 14698U;
	int32_t t98 = -12;

    t98 = (((x417/x418)<=x419)>x420);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	static uint16_t x427 = UINT16_MAX;
	volatile uint8_t x428 = 29U;

    t99 = (((x425/x426)<=x427)>x428);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = INT64_MIN;
	int16_t x430 = -5442;
	volatile int16_t x431 = INT16_MIN;
	uint8_t x432 = 102U;
	int32_t t100 = -17;

    t100 = (((x429/x430)<=x431)>x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x433 = INT32_MAX;
	uint32_t x434 = 20323U;
	int16_t x435 = -1;
	static int8_t x436 = INT8_MAX;

    t101 = (((x433/x434)<=x435)>x436);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x437 = INT16_MIN;
	int8_t x438 = -1;
	uint64_t x439 = 185194372891105312LLU;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int32_t t102 = 682932;

    t102 = (((x437/x438)<=x439)>x440);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x441 = INT16_MAX;
	uint32_t x443 = UINT32_MAX;
	int32_t x444 = INT32_MAX;
	volatile int32_t t103 = 96;

    t103 = (((x441/x442)<=x443)>x444);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x445 = -1858;
	int64_t x447 = 2633227LL;
	int32_t x448 = INT32_MIN;
	volatile int32_t t104 = -1394;

    t104 = (((x445/x446)<=x447)>x448);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	volatile int32_t x450 = 7164;
	int16_t x452 = INT16_MAX;

    t105 = (((x449/x450)<=x451)>x452);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x453 = -1LL;
	int32_t x454 = INT32_MIN;
	int8_t x455 = INT8_MIN;
	static int16_t x456 = -2;
	volatile int32_t t106 = 0;

    t106 = (((x453/x454)<=x455)>x456);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x457 = 88U;
	uint8_t x458 = UINT8_MAX;
	static volatile int32_t x459 = INT32_MIN;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t107 = -910;

    t107 = (((x457/x458)<=x459)>x460);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x461 = INT8_MIN;
	static volatile int32_t x464 = INT32_MIN;
	static volatile int32_t t108 = 1;

    t108 = (((x461/x462)<=x463)>x464);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = -1;
	uint16_t x468 = 4U;
	volatile int32_t t109 = 1058271;

    t109 = (((x465/x466)<=x467)>x468);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x469 = UINT32_MAX;
	volatile int16_t x470 = INT16_MIN;
	int32_t x472 = INT32_MIN;
	volatile int32_t t110 = 781455881;

    t110 = (((x469/x470)<=x471)>x472);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x473 = INT64_MAX;
	uint8_t x474 = 5U;
	static volatile uint16_t x476 = UINT16_MAX;
	static int32_t t111 = -1;

    t111 = (((x473/x474)<=x475)>x476);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x481 = UINT16_MAX;
	uint64_t x482 = 39389764617128LLU;
	int32_t t112 = -214;

    t112 = (((x481/x482)<=x483)>x484);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x488 = 7U;
	static volatile int32_t t113 = -1391;

    t113 = (((x485/x486)<=x487)>x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x489 = INT8_MIN;
	static volatile int8_t x491 = -1;
	uint32_t x492 = UINT32_MAX;
	static volatile int32_t t114 = 0;

    t114 = (((x489/x490)<=x491)>x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x493 = INT64_MIN;
	int64_t x494 = INT64_MIN;
	int16_t x495 = INT16_MAX;
	static int8_t x496 = INT8_MIN;
	int32_t t115 = -7055565;

    t115 = (((x493/x494)<=x495)>x496);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x501 = -36;
	uint64_t x502 = 63693591LLU;
	volatile uint32_t x503 = 6U;
	volatile uint32_t x504 = 211013U;
	volatile int32_t t116 = 2399;

    t116 = (((x501/x502)<=x503)>x504);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MIN;
	int32_t x508 = -1;
	int32_t t117 = 0;

    t117 = (((x505/x506)<=x507)>x508);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x509 = UINT16_MAX;
	int32_t x510 = INT32_MAX;
	volatile uint64_t x511 = UINT64_MAX;
	volatile int64_t x512 = INT64_MIN;
	static volatile int32_t t118 = 40571;

    t118 = (((x509/x510)<=x511)>x512);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x517 = -247905159;
	volatile uint16_t x518 = 6U;
	volatile uint16_t x520 = 2597U;
	volatile int32_t t119 = 3543;

    t119 = (((x517/x518)<=x519)>x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x521 = 25268688U;
	volatile int8_t x522 = -1;
	static volatile int32_t x523 = -1;
	uint64_t x524 = UINT64_MAX;
	int32_t t120 = -258560;

    t120 = (((x521/x522)<=x523)>x524);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x526 = INT8_MIN;
	int16_t x527 = INT16_MIN;
	uint8_t x528 = 11U;
	static volatile int32_t t121 = 248704928;

    t121 = (((x525/x526)<=x527)>x528);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x531 = INT8_MIN;
	int64_t x532 = 86701010167082LL;
	volatile int32_t t122 = 18697148;

    t122 = (((x529/x530)<=x531)>x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x533 = -1;
	int32_t x534 = -7762945;
	int32_t x535 = -1;
	int32_t x536 = INT32_MIN;
	static volatile int32_t t123 = -1;

    t123 = (((x533/x534)<=x535)>x536);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x537 = 0U;
	int8_t x538 = INT8_MIN;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = 191LLU;
	int32_t t124 = -253006604;

    t124 = (((x537/x538)<=x539)>x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x541 = INT8_MIN;
	static int8_t x542 = INT8_MIN;
	int16_t x543 = INT16_MAX;
	volatile int32_t t125 = 9135;

    t125 = (((x541/x542)<=x543)>x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x545 = 8428410173778LL;
	int8_t x546 = 20;
	int16_t x547 = -1;
	uint32_t x548 = 3U;
	volatile int32_t t126 = -585000640;

    t126 = (((x545/x546)<=x547)>x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x549 = -2;
	int8_t x551 = INT8_MAX;
	int32_t t127 = 1;

    t127 = (((x549/x550)<=x551)>x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x553 = INT32_MAX;
	volatile uint16_t x554 = 24U;
	uint32_t x555 = 203U;
	volatile int64_t x556 = INT64_MAX;

    t128 = (((x553/x554)<=x555)>x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x557 = INT8_MIN;
	uint64_t x558 = 11LLU;
	int64_t x560 = 10LL;
	static volatile int32_t t129 = 59632;

    t129 = (((x557/x558)<=x559)>x560);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x561 = INT32_MAX;
	uint32_t x562 = UINT32_MAX;
	static uint64_t x563 = 54352298409LLU;
	int32_t t130 = -1;

    t130 = (((x561/x562)<=x563)>x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x568 = -14;
	int32_t t131 = -101;

    t131 = (((x565/x566)<=x567)>x568);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x569 = INT16_MIN;
	int16_t x570 = -1;
	int64_t x571 = INT64_MIN;
	volatile int32_t t132 = 2320876;

    t132 = (((x569/x570)<=x571)>x572);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x574 = INT64_MIN;
	uint32_t x575 = 175U;
	static int8_t x576 = INT8_MIN;
	static volatile int32_t t133 = -261;

    t133 = (((x573/x574)<=x575)>x576);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x578 = INT32_MAX;
	volatile int8_t x579 = INT8_MIN;
	int16_t x580 = 1;
	volatile int32_t t134 = 20670823;

    t134 = (((x577/x578)<=x579)>x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x582 = 19U;
	int16_t x583 = 41;
	static volatile int8_t x584 = 0;

    t135 = (((x581/x582)<=x583)>x584);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x585 = 1U;
	uint32_t x586 = UINT32_MAX;
	uint64_t x587 = 2078181570312291632LLU;
	static int8_t x588 = 1;
	volatile int32_t t136 = 863;

    t136 = (((x585/x586)<=x587)>x588);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x589 = INT64_MIN;
	static int16_t x592 = -1;

    t137 = (((x589/x590)<=x591)>x592);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x593 = -1;
	int8_t x594 = INT8_MAX;
	uint32_t x596 = 1317804U;

    t138 = (((x593/x594)<=x595)>x596);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x597 = -1LL;
	static int64_t x598 = -7LL;
	int16_t x600 = -1;
	int32_t t139 = 28798749;

    t139 = (((x597/x598)<=x599)>x600);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x602 = INT32_MIN;
	int8_t x603 = -1;
	int8_t x604 = INT8_MIN;
	volatile int32_t t140 = 29;

    t140 = (((x601/x602)<=x603)>x604);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x605 = INT8_MIN;
	int64_t x606 = INT64_MIN;
	uint64_t x608 = 11447601189LLU;
	volatile int32_t t141 = -416311;

    t141 = (((x605/x606)<=x607)>x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x610 = INT8_MAX;
	int8_t x611 = -4;
	int8_t x612 = INT8_MAX;
	volatile int32_t t142 = 635562213;

    t142 = (((x609/x610)<=x611)>x612);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x613 = 298715U;
	int32_t x614 = -87744595;
	int16_t x615 = INT16_MAX;
	int32_t t143 = -405637;

    t143 = (((x613/x614)<=x615)>x616);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x617 = -30;
	int32_t x619 = 48814;
	int64_t x620 = INT64_MIN;

    t144 = (((x617/x618)<=x619)>x620);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x621 = 10760322;
	volatile int16_t x622 = INT16_MAX;
	int64_t x623 = INT64_MIN;
	volatile int16_t x624 = INT16_MIN;
	volatile int32_t t145 = 3349;

    t145 = (((x621/x622)<=x623)>x624);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x625 = INT32_MIN;
	uint64_t x627 = 2984654907LLU;

    t146 = (((x625/x626)<=x627)>x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x629 = -361523003;
	int32_t x630 = INT32_MIN;
	int16_t x631 = -1;
	static volatile int32_t t147 = -572;

    t147 = (((x629/x630)<=x631)>x632);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x633 = -1;
	uint32_t x634 = 3747328U;
	static int16_t x635 = INT16_MIN;
	static int32_t t148 = 38027;

    t148 = (((x633/x634)<=x635)>x636);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x637 = UINT32_MAX;
	static volatile int8_t x638 = INT8_MAX;
	int32_t x640 = -1;
	volatile int32_t t149 = -808267;

    t149 = (((x637/x638)<=x639)>x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x642 = INT64_MIN;
	uint16_t x643 = UINT16_MAX;
	static uint8_t x644 = 3U;
	static volatile int32_t t150 = 236170;

    t150 = (((x641/x642)<=x643)>x644);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x645 = UINT16_MAX;
	uint64_t x646 = UINT64_MAX;
	static uint64_t x647 = 46LLU;
	static int32_t x648 = INT32_MAX;
	volatile int32_t t151 = -73202;

    t151 = (((x645/x646)<=x647)>x648);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x650 = -1;
	static int16_t x651 = 420;
	uint64_t x652 = 215LLU;

    t152 = (((x649/x650)<=x651)>x652);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x653 = -1LL;
	int16_t x654 = INT16_MAX;
	int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MIN;
	int32_t t153 = -178758219;

    t153 = (((x653/x654)<=x655)>x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x657 = 5640U;
	int8_t x658 = INT8_MIN;
	int16_t x659 = INT16_MIN;
	static int64_t x660 = -24178162015617LL;
	int32_t t154 = 7;

    t154 = (((x657/x658)<=x659)>x660);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x661 = UINT32_MAX;
	uint16_t x663 = UINT16_MAX;
	int16_t x664 = -4;
	int32_t t155 = -5;

    t155 = (((x661/x662)<=x663)>x664);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x666 = UINT64_MAX;
	uint32_t x667 = 0U;
	int8_t x668 = -1;
	volatile int32_t t156 = -9772;

    t156 = (((x665/x666)<=x667)>x668);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x669 = 3U;
	int16_t x671 = INT16_MAX;
	int32_t x672 = INT32_MAX;
	int32_t t157 = -2;

    t157 = (((x669/x670)<=x671)>x672);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x674 = -23;
	int16_t x675 = -1;
	static int32_t t158 = 86608617;

    t158 = (((x673/x674)<=x675)>x676);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	int8_t x680 = -34;
	int32_t t159 = 421190562;

    t159 = (((x677/x678)<=x679)>x680);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile int32_t x682 = INT32_MAX;
	int16_t x683 = INT16_MIN;
	volatile int32_t t160 = -231867;

    t160 = (((x681/x682)<=x683)>x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x685 = 10U;
	volatile uint8_t x686 = UINT8_MAX;
	static volatile int32_t x687 = INT32_MIN;

    t161 = (((x685/x686)<=x687)>x688);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x692 = 1145U;
	int32_t t162 = -3414014;

    t162 = (((x689/x690)<=x691)>x692);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x695 = -1;
	volatile int32_t t163 = -158882;

    t163 = (((x693/x694)<=x695)>x696);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x698 = INT64_MAX;
	uint64_t x700 = 68251680679786877LLU;
	volatile int32_t t164 = -4;

    t164 = (((x697/x698)<=x699)>x700);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x701 = INT32_MIN;
	static int8_t x702 = -6;
	uint16_t x703 = 99U;
	int16_t x704 = 12216;
	volatile int32_t t165 = 184;

    t165 = (((x701/x702)<=x703)>x704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x705 = INT8_MAX;
	static uint32_t x706 = 19U;
	uint64_t x707 = UINT64_MAX;
	static uint32_t x708 = 465U;
	volatile int32_t t166 = -2010;

    t166 = (((x705/x706)<=x707)>x708);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x709 = -86329051040LL;
	int16_t x710 = -74;
	volatile int32_t x712 = INT32_MAX;
	volatile int32_t t167 = -6190517;

    t167 = (((x709/x710)<=x711)>x712);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x713 = 52381;
	static int16_t x714 = INT16_MIN;
	static volatile int8_t x715 = INT8_MIN;
	int16_t x716 = INT16_MIN;
	volatile int32_t t168 = 600595984;

    t168 = (((x713/x714)<=x715)>x716);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x717 = -60089181288523LL;
	int32_t x718 = 15;
	uint32_t x719 = 996U;
	int64_t x720 = -1LL;
	int32_t t169 = -85;

    t169 = (((x717/x718)<=x719)>x720);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x721 = -242;
	int16_t x722 = 1199;
	static uint32_t x723 = 1490270800U;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t170 = 321905774;

    t170 = (((x721/x722)<=x723)>x724);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x725 = 1672;
	volatile int16_t x726 = -1;
	int64_t x727 = -201595101677938101LL;
	volatile int32_t x728 = INT32_MIN;
	static int32_t t171 = -3;

    t171 = (((x725/x726)<=x727)>x728);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x729 = INT64_MIN;
	static uint16_t x730 = 14830U;
	uint8_t x731 = UINT8_MAX;
	static uint16_t x732 = UINT16_MAX;
	int32_t t172 = 317;

    t172 = (((x729/x730)<=x731)>x732);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x734 = INT64_MAX;
	volatile int64_t x736 = 7LL;
	volatile int32_t t173 = -3708969;

    t173 = (((x733/x734)<=x735)>x736);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x737 = -1;
	int8_t x738 = INT8_MIN;
	int8_t x740 = 1;
	static int32_t t174 = -1914121;

    t174 = (((x737/x738)<=x739)>x740);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	uint32_t x742 = UINT32_MAX;
	static int16_t x744 = INT16_MIN;
	int32_t t175 = -238102;

    t175 = (((x741/x742)<=x743)>x744);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x748 = -23;

    t176 = (((x745/x746)<=x747)>x748);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x749 = 60U;
	static uint32_t x750 = 102955U;
	static int16_t x751 = INT16_MIN;
	int32_t x752 = -61780011;
	static volatile int32_t t177 = -145825403;

    t177 = (((x749/x750)<=x751)>x752);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x753 = UINT16_MAX;
	static int32_t x754 = INT32_MIN;
	uint16_t x755 = UINT16_MAX;
	uint32_t x756 = 490607177U;

    t178 = (((x753/x754)<=x755)>x756);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x758 = 3U;
	volatile uint32_t x759 = 29654866U;
	int32_t x760 = INT32_MIN;
	static int32_t t179 = -213;

    t179 = (((x757/x758)<=x759)>x760);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x761 = -1;
	volatile int8_t x762 = 2;
	uint64_t x763 = 2006708883LLU;
	uint32_t x764 = 11615U;
	int32_t t180 = -109699;

    t180 = (((x761/x762)<=x763)>x764);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x765 = 64U;
	int32_t x766 = INT32_MAX;
	uint32_t x768 = 293U;

    t181 = (((x765/x766)<=x767)>x768);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x770 = 7209120400009254LL;
	int32_t x771 = -1;

    t182 = (((x769/x770)<=x771)>x772);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x773 = 88155691979LLU;
	int16_t x774 = INT16_MIN;
	uint8_t x775 = 2U;
	int32_t x776 = -1;
	static volatile int32_t t183 = 5061828;

    t183 = (((x773/x774)<=x775)>x776);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x777 = 1U;
	static int16_t x779 = 338;
	uint8_t x780 = 48U;
	int32_t t184 = 7293;

    t184 = (((x777/x778)<=x779)>x780);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x781 = INT64_MIN;
	static int16_t x782 = INT16_MIN;
	int16_t x783 = INT16_MAX;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t185 = -24570;

    t185 = (((x781/x782)<=x783)>x784);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x787 = INT64_MAX;
	volatile int8_t x788 = -53;
	volatile int32_t t186 = -187;

    t186 = (((x785/x786)<=x787)>x788);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x789 = INT8_MAX;
	int16_t x790 = -1;
	volatile int8_t x791 = -1;
	int16_t x792 = 7;

    t187 = (((x789/x790)<=x791)>x792);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x793 = -1;
	int8_t x794 = INT8_MAX;
	volatile int8_t x795 = -1;
	int32_t t188 = 166;

    t188 = (((x793/x794)<=x795)>x796);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x797 = INT8_MIN;
	static uint32_t x798 = 895205U;
	static uint32_t x799 = 7U;
	int32_t x800 = INT32_MAX;

    t189 = (((x797/x798)<=x799)>x800);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x801 = 1U;
	int8_t x802 = -9;
	uint64_t x803 = 566816095107LLU;
	int16_t x804 = INT16_MIN;

    t190 = (((x801/x802)<=x803)>x804);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x805 = -2000696414LL;
	static uint16_t x806 = 1382U;
	int32_t t191 = -25;

    t191 = (((x805/x806)<=x807)>x808);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x809 = -30;
	uint32_t x811 = UINT32_MAX;
	volatile int8_t x812 = -1;

    t192 = (((x809/x810)<=x811)>x812);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x813 = 1895153;
	int32_t x815 = -1;
	static int8_t x816 = INT8_MAX;
	volatile int32_t t193 = -9646;

    t193 = (((x813/x814)<=x815)>x816);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x817 = INT64_MIN;
	int16_t x818 = 1;
	int64_t x820 = -14LL;
	static volatile int32_t t194 = 761;

    t194 = (((x817/x818)<=x819)>x820);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x821 = 169977LL;
	int16_t x824 = INT16_MIN;
	int32_t t195 = 229083;

    t195 = (((x821/x822)<=x823)>x824);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x825 = 23461241U;
	int64_t x826 = 57029167LL;
	uint64_t x827 = 1967812LLU;
	int8_t x828 = INT8_MAX;
	volatile int32_t t196 = -17411;

    t196 = (((x825/x826)<=x827)>x828);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x833 = INT16_MAX;
	int64_t x834 = 1489518878LL;
	int32_t x835 = INT32_MAX;
	int64_t x836 = INT64_MIN;
	int32_t t197 = 2400483;

    t197 = (((x833/x834)<=x835)>x836);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x838 = 579U;
	int8_t x839 = INT8_MIN;
	int32_t x840 = INT32_MAX;
	static volatile int32_t t198 = 3652;

    t198 = (((x837/x838)<=x839)>x840);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x841 = -1;
	uint8_t x843 = 12U;
	static int32_t t199 = 211;

    t199 = (((x841/x842)<=x843)>x844);

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

