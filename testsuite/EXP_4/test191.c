
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

uint32_t x10 = UINT32_MAX;
int32_t x13 = 3;
uint16_t x19 = 4898U;
static int32_t t3 = 15734;
uint32_t x32 = 0U;
volatile int32_t t6 = 26;
uint32_t x37 = 169U;
volatile uint8_t x43 = UINT8_MAX;
static volatile int32_t t9 = 936308;
int8_t x51 = INT8_MIN;
uint16_t x54 = UINT16_MAX;
int8_t x65 = INT8_MAX;
int16_t x66 = INT16_MIN;
volatile int32_t x77 = INT32_MIN;
volatile uint16_t x82 = 63U;
static int16_t x86 = INT16_MIN;
static int8_t x92 = INT8_MAX;
int32_t x94 = -1;
int16_t x95 = INT16_MIN;
int32_t x101 = INT32_MIN;
uint16_t x104 = UINT16_MAX;
uint32_t x105 = 31U;
int8_t x108 = INT8_MAX;
int64_t x109 = -1LL;
volatile int16_t x124 = 1;
volatile int32_t x136 = -9182;
static volatile int32_t t30 = 1238367;
uint32_t x142 = 1441689135U;
static int8_t x147 = 3;
uint32_t x153 = UINT32_MAX;
uint64_t x154 = UINT64_MAX;
int16_t x155 = INT16_MIN;
static int64_t x161 = INT64_MAX;
uint16_t x164 = 54U;
volatile int32_t t34 = -330;
int64_t x167 = INT64_MIN;
int8_t x169 = -10;
uint64_t x171 = 4953748096LLU;
int32_t x172 = -1;
uint64_t x177 = 451077363283112LLU;
int8_t x191 = 17;
volatile uint64_t x192 = 15947809294LLU;
int8_t x193 = -6;
static int16_t x194 = 113;
uint64_t x196 = 226498159LLU;
int8_t x198 = INT8_MAX;
volatile int8_t x201 = INT8_MIN;
int64_t x204 = -213822052100233LL;
static uint16_t x205 = 48U;
int32_t t44 = 514086;
volatile uint8_t x224 = UINT8_MAX;
volatile int64_t x225 = 432615490LL;
volatile int32_t t47 = -263;
int8_t x231 = -1;
int32_t x237 = -154;
uint8_t x238 = UINT8_MAX;
volatile int32_t t51 = 14;
volatile int32_t t52 = -142;
int16_t x265 = -1;
uint8_t x266 = 0U;
volatile int32_t t56 = -1;
volatile int32_t t57 = 10;
uint32_t x282 = 9080U;
int64_t x284 = -1LL;
static int32_t x291 = INT32_MIN;
volatile uint8_t x299 = UINT8_MAX;
int32_t x302 = INT32_MIN;
uint64_t x306 = 57140198242506396LLU;
int32_t x308 = 85;
uint16_t x314 = 318U;
static int32_t t66 = 2;
int64_t x323 = INT64_MIN;
static uint8_t x332 = 0U;
static int16_t x333 = -1;
int32_t x340 = 106457;
volatile uint8_t x347 = UINT8_MAX;
int32_t t73 = 0;
volatile int32_t t74 = 73219390;
volatile int64_t x355 = 272407712708853357LL;
static int32_t x361 = INT32_MIN;
static int16_t x362 = 0;
volatile int32_t x363 = INT32_MIN;
uint64_t x364 = 302388267205LLU;
static uint8_t x365 = 3U;
volatile int64_t x368 = INT64_MIN;
int32_t t77 = 3;
int16_t x371 = INT16_MIN;
volatile uint32_t x372 = 4U;
int32_t x375 = INT32_MIN;
int64_t x385 = INT64_MIN;
int16_t x388 = -1;
int64_t x391 = -4190110205873266577LL;
int32_t x409 = INT32_MIN;
volatile int64_t x418 = -1LL;
volatile int32_t t86 = 378801936;
uint64_t x422 = 14201124625LLU;
int32_t x423 = INT32_MAX;
int16_t x426 = -1;
static volatile int64_t x430 = INT64_MIN;
static int64_t x432 = INT64_MAX;
volatile int32_t t93 = 54513968;
static uint8_t x455 = UINT8_MAX;
int32_t t94 = -18100;
uint32_t x460 = 37U;
static int32_t t95 = 520202;
uint16_t x464 = 0U;
int32_t x480 = INT32_MAX;
volatile int32_t t102 = -5483;
int64_t x498 = INT64_MIN;
int8_t x501 = 0;
int16_t x502 = INT16_MIN;
int8_t x505 = -1;
int32_t x506 = INT32_MIN;
static int8_t x507 = -7;
volatile int32_t t106 = -1431449;
static int8_t x514 = INT8_MAX;
int64_t x515 = INT64_MIN;
volatile uint16_t x516 = UINT16_MAX;
uint16_t x521 = 1924U;
int32_t x524 = INT32_MIN;
static int16_t x527 = -4;
uint64_t x532 = UINT64_MAX;
int32_t t111 = 7323100;
int8_t x538 = 1;
int8_t x546 = INT8_MIN;
int16_t x550 = 1;
volatile int32_t t115 = -298;
int32_t x555 = INT32_MIN;
int32_t x562 = -15;
int64_t x570 = -6811151222175172LL;
int8_t x573 = -1;
volatile int32_t t121 = 1704;
int32_t t122 = 829163696;
int8_t x583 = INT8_MIN;
volatile int32_t t124 = 3157303;
volatile int32_t x590 = INT32_MAX;
int16_t x597 = INT16_MIN;
int64_t x603 = -1LL;
static int8_t x610 = INT8_MAX;
static int32_t x611 = -1;
uint8_t x613 = 2U;
static int8_t x616 = -1;
volatile int64_t x620 = -1LL;
volatile int32_t t134 = -15;
int16_t x640 = INT16_MIN;
int16_t x647 = INT16_MAX;
volatile int32_t t136 = 66;
volatile int8_t x649 = 27;
uint32_t x650 = 427U;
volatile int32_t t137 = -1325;
static int16_t x653 = INT16_MAX;
int16_t x654 = -128;
int8_t x659 = INT8_MIN;
volatile int32_t t139 = -2748450;
volatile int32_t t140 = 2000965;
int32_t x671 = 0;
int16_t x672 = INT16_MAX;
int16_t x673 = INT16_MIN;
uint32_t x675 = 0U;
int32_t x677 = 4368;
uint64_t x682 = 10642142894LLU;
int64_t x684 = -1LL;
volatile int32_t t144 = 92290102;
int16_t x699 = INT16_MIN;
int32_t t147 = -89;
int64_t x716 = 366628960158353LL;
int32_t t149 = 661611448;
int16_t x722 = INT16_MIN;
int16_t x726 = -1;
static volatile int8_t x728 = INT8_MIN;
static int32_t x731 = -1;
volatile int32_t t152 = 3;
volatile uint64_t x736 = UINT64_MAX;
uint64_t x740 = 5269LLU;
int32_t t155 = -550513591;
volatile int32_t x753 = 91966;
int32_t x755 = INT32_MAX;
int32_t t157 = 34010562;
volatile int16_t x760 = 725;
uint8_t x761 = 0U;
uint64_t x762 = 2489065586346062LLU;
static int8_t x763 = 2;
int64_t x765 = -1LL;
volatile int8_t x766 = -1;
int32_t t160 = -57277104;
static volatile int32_t x771 = 5;
static uint16_t x772 = 1072U;
int8_t x776 = 0;
volatile int32_t t162 = 259332;
int8_t x777 = 57;
int32_t x797 = INT32_MAX;
static volatile int32_t t169 = 243255938;
int8_t x806 = INT8_MIN;
static int32_t x808 = INT32_MAX;
volatile int32_t t170 = 105233;
uint64_t x814 = UINT64_MAX;
int8_t x818 = INT8_MAX;
static volatile uint16_t x823 = UINT16_MAX;
int8_t x824 = INT8_MIN;
static int32_t x828 = -5234020;
int32_t t176 = -11;
volatile uint32_t x833 = UINT32_MAX;
static volatile int32_t t177 = -39;
volatile int32_t x839 = -1;
volatile int32_t x840 = 976;
static volatile uint64_t x846 = UINT64_MAX;
volatile int32_t t181 = -1;
int8_t x863 = -6;
volatile int32_t t183 = 4145422;
volatile uint16_t x869 = 626U;
uint32_t x870 = UINT32_MAX;
uint16_t x875 = UINT16_MAX;
int8_t x882 = -1;
int8_t x886 = INT8_MIN;
static int64_t x895 = -1LL;
int32_t x908 = -1;
static uint64_t x915 = UINT64_MAX;
volatile int32_t t196 = 6;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	uint16_t x2 = UINT16_MAX;
	static uint8_t x3 = 38U;
	static volatile int16_t x4 = 67;
	static int32_t t0 = -5;

    t0 = (x1>(x2^(x3+x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 3U;
	static int8_t x11 = 0;
	int8_t x12 = INT8_MIN;
	int32_t t1 = 1046600629;

    t1 = (x9>(x10^(x11+x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x14 = 1;
	static uint16_t x15 = UINT16_MAX;
	int16_t x16 = -1;
	int32_t t2 = 18;

    t2 = (x13>(x14^(x15+x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = -1;
	uint8_t x20 = UINT8_MAX;

    t3 = (x17>(x18^(x19+x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 51LLU;
	static volatile uint8_t x22 = UINT8_MAX;
	uint8_t x23 = 11U;
	uint64_t x24 = 2449LLU;
	int32_t t4 = -54055;

    t4 = (x21>(x22^(x23+x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	volatile int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t5 = 373914167;

    t5 = (x25>(x26^(x27+x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x29 = INT32_MAX;
	int64_t x30 = 9912097076598LL;
	int32_t x31 = INT32_MAX;

    t6 = (x29>(x30^(x31+x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	volatile int32_t x34 = INT32_MAX;
	int64_t x35 = 0LL;
	int32_t x36 = INT32_MAX;
	int32_t t7 = 29;

    t7 = (x33>(x34^(x35+x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x38 = UINT64_MAX;
	int16_t x39 = 1;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = 25145;

    t8 = (x37>(x38^(x39+x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = 17;
	volatile uint32_t x42 = 13425798U;
	static volatile uint8_t x44 = 0U;

    t9 = (x41>(x42^(x43+x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x45 = -1;
	static uint64_t x46 = 3413912183368LLU;
	volatile uint16_t x47 = 0U;
	static volatile uint16_t x48 = 6U;
	volatile int32_t t10 = -471865074;

    t10 = (x45>(x46^(x47+x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x49 = 1U;
	int16_t x50 = INT16_MAX;
	volatile int64_t x52 = INT64_MAX;
	volatile int32_t t11 = -75461287;

    t11 = (x49>(x50^(x51+x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x53 = 4U;
	int8_t x55 = 0;
	static uint32_t x56 = 154U;
	static int32_t t12 = 2017301;

    t12 = (x53>(x54^(x55+x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	int64_t x58 = 255677068484988LL;
	static int8_t x59 = 0;
	volatile int64_t x60 = 0LL;
	static volatile int32_t t13 = -51194;

    t13 = (x57>(x58^(x59+x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 1U;
	int16_t x62 = -1;
	int8_t x63 = -1;
	int16_t x64 = -1;
	int32_t t14 = 111;

    t14 = (x61>(x62^(x63+x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x67 = INT8_MAX;
	int8_t x68 = -25;
	volatile int32_t t15 = -36133;

    t15 = (x65>(x66^(x67+x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = -1621;
	int8_t x70 = INT8_MIN;
	int8_t x71 = -1;
	static int16_t x72 = -1;
	int32_t t16 = 406;

    t16 = (x69>(x70^(x71+x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x78 = -1;
	int16_t x79 = -91;
	int8_t x80 = INT8_MAX;
	static volatile int32_t t17 = 1;

    t17 = (x77>(x78^(x79+x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	static int8_t x83 = INT8_MAX;
	static uint16_t x84 = 218U;
	volatile int32_t t18 = -2773;

    t18 = (x81>(x82^(x83+x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	static uint8_t x87 = 1U;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t19 = -21370649;

    t19 = (x85>(x86^(x87+x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x89 = 992769U;
	int64_t x90 = INT64_MIN;
	uint8_t x91 = UINT8_MAX;
	int32_t t20 = 486796;

    t20 = (x89>(x90^(x91+x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = INT8_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t21 = 9795;

    t21 = (x93>(x94^(x95+x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MAX;
	uint64_t x98 = 49097539915LLU;
	static int32_t x99 = -1;
	int64_t x100 = -1LL;
	static int32_t t22 = -83880111;

    t22 = (x97>(x98^(x99+x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x102 = 417661347187563LLU;
	volatile int8_t x103 = -20;
	int32_t t23 = -4740229;

    t23 = (x101>(x102^(x103+x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x106 = UINT16_MAX;
	volatile uint16_t x107 = UINT16_MAX;
	volatile int32_t t24 = 779;

    t24 = (x105>(x106^(x107+x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x110 = 0;
	int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t25 = 1346833;

    t25 = (x109>(x110^(x111+x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = -1;
	int16_t x118 = 7618;
	int16_t x119 = -1;
	uint16_t x120 = 9U;
	int32_t t26 = -1866;

    t26 = (x117>(x118^(x119+x120)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = UINT32_MAX;
	volatile uint32_t x122 = 2U;
	uint32_t x123 = 6U;
	static int32_t t27 = -1;

    t27 = (x121>(x122^(x123+x124)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MAX;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t28 = -139806385;

    t28 = (x125>(x126^(x127+x128)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 1U;
	uint16_t x134 = 10U;
	int16_t x135 = -7038;
	volatile int32_t t29 = -1;

    t29 = (x133>(x134^(x135+x136)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = 31538468U;
	int64_t x138 = -1LL;
	static uint32_t x139 = 5U;
	static volatile int8_t x140 = 2;

    t30 = (x137>(x138^(x139+x140)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MIN;
	int16_t x143 = -1;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t31 = -17;

    t31 = (x141>(x142^(x143+x144)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = INT32_MIN;
	uint64_t x146 = 4779882741LLU;
	uint64_t x148 = 1578158765085LLU;
	int32_t t32 = -474;

    t32 = (x145>(x146^(x147+x148)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x156 = 296LLU;
	int32_t t33 = -12;

    t33 = (x153>(x154^(x155+x156)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x162 = -1;
	static uint64_t x163 = UINT64_MAX;

    t34 = (x161>(x162^(x163+x164)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = INT32_MAX;
	int16_t x166 = INT16_MIN;
	int64_t x168 = 274LL;
	volatile int32_t t35 = -39;

    t35 = (x165>(x166^(x167+x168)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x170 = INT32_MIN;
	volatile int32_t t36 = 468275993;

    t36 = (x169>(x170^(x171+x172)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x178 = INT32_MIN;
	uint32_t x179 = 18U;
	volatile int32_t x180 = -274;
	int32_t t37 = 100897967;

    t37 = (x177>(x178^(x179+x180)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x181 = -14506980962LL;
	volatile int8_t x182 = 2;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;
	int32_t t38 = 2;

    t38 = (x181>(x182^(x183+x184)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x189 = -1;
	int64_t x190 = 48994223489LL;
	volatile int32_t t39 = -3110052;

    t39 = (x189>(x190^(x191+x192)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x195 = 108U;
	int32_t t40 = -200;

    t40 = (x193>(x194^(x195+x196)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = INT32_MIN;
	volatile int8_t x199 = -14;
	volatile uint8_t x200 = 22U;
	volatile int32_t t41 = 274279171;

    t41 = (x197>(x198^(x199+x200)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x202 = -1;
	int8_t x203 = -1;
	volatile int32_t t42 = -430568260;

    t42 = (x201>(x202^(x203+x204)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x206 = INT16_MIN;
	uint16_t x207 = 1U;
	uint64_t x208 = 10139310348LLU;
	volatile int32_t t43 = 0;

    t43 = (x205>(x206^(x207+x208)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x209 = -1;
	uint32_t x210 = 317U;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MIN;

    t44 = (x209>(x210^(x211+x212)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x217 = INT8_MIN;
	int64_t x218 = 16481921109393558LL;
	uint64_t x219 = UINT64_MAX;
	uint64_t x220 = UINT64_MAX;
	int32_t t45 = -20676;

    t45 = (x217>(x218^(x219+x220)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x221 = 0;
	static volatile int32_t x222 = INT32_MIN;
	int64_t x223 = -53023594393106558LL;
	static volatile int32_t t46 = 11601367;

    t46 = (x221>(x222^(x223+x224)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x226 = -117;
	int16_t x227 = INT16_MIN;
	static uint64_t x228 = UINT64_MAX;

    t47 = (x225>(x226^(x227+x228)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x229 = INT64_MIN;
	int64_t x230 = -1LL;
	int32_t x232 = 14;
	int32_t t48 = -985768899;

    t48 = (x229>(x230^(x231+x232)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x239 = 27980005LLU;
	int8_t x240 = -1;
	volatile int32_t t49 = 20;

    t49 = (x237>(x238^(x239+x240)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x241 = 62;
	int8_t x242 = 1;
	static volatile int8_t x243 = INT8_MAX;
	static volatile int16_t x244 = -1;
	int32_t t50 = -322182;

    t50 = (x241>(x242^(x243+x244)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x245 = INT64_MAX;
	uint16_t x246 = 865U;
	int8_t x247 = INT8_MIN;
	volatile int8_t x248 = -1;

    t51 = (x245>(x246^(x247+x248)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x249 = 3LLU;
	volatile uint8_t x250 = 55U;
	volatile uint16_t x251 = 138U;
	int8_t x252 = INT8_MIN;

    t52 = (x249>(x250^(x251+x252)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x257 = 60;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = INT64_MAX;
	uint64_t x260 = 65790125939LLU;
	int32_t t53 = -60852755;

    t53 = (x257>(x258^(x259+x260)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	int64_t x264 = -1LL;
	static int32_t t54 = 1;

    t54 = (x261>(x262^(x263+x264)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x267 = -1;
	volatile int64_t x268 = 365LL;
	int32_t t55 = 303304873;

    t55 = (x265>(x266^(x267+x268)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x269 = -1;
	int8_t x270 = 1;
	volatile int8_t x271 = -6;
	volatile uint16_t x272 = UINT16_MAX;

    t56 = (x269>(x270^(x271+x272)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x273 = 3;
	volatile uint64_t x274 = UINT64_MAX;
	uint32_t x275 = UINT32_MAX;
	volatile uint16_t x276 = 168U;

    t57 = (x273>(x274^(x275+x276)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x277 = UINT64_MAX;
	int8_t x278 = -1;
	int8_t x279 = -1;
	int16_t x280 = -102;
	int32_t t58 = -1;

    t58 = (x277>(x278^(x279+x280)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x281 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	volatile int32_t t59 = 45;

    t59 = (x281>(x282^(x283+x284)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	volatile int8_t x290 = 38;
	static int64_t x292 = INT64_MAX;
	int32_t t60 = -882866332;

    t60 = (x289>(x290^(x291+x292)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x293 = INT8_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	static int8_t x295 = -1;
	static uint8_t x296 = UINT8_MAX;
	volatile int32_t t61 = 1239;

    t61 = (x293>(x294^(x295+x296)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x297 = 28U;
	uint16_t x298 = UINT16_MAX;
	uint32_t x300 = UINT32_MAX;
	int32_t t62 = 122;

    t62 = (x297>(x298^(x299+x300)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x301 = 8U;
	uint16_t x303 = 2646U;
	int16_t x304 = 0;
	volatile int32_t t63 = -101768;

    t63 = (x301>(x302^(x303+x304)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x305 = INT16_MIN;
	volatile int64_t x307 = -1LL;
	int32_t t64 = -834041251;

    t64 = (x305>(x306^(x307+x308)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x313 = 2144157949285LLU;
	int16_t x315 = -2;
	uint32_t x316 = UINT32_MAX;
	int32_t t65 = 35;

    t65 = (x313>(x314^(x315+x316)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x317 = INT8_MAX;
	int32_t x318 = -74860837;
	volatile int32_t x319 = -1;
	volatile int32_t x320 = 2670;

    t66 = (x317>(x318^(x319+x320)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x321 = 112746749506750157LLU;
	int64_t x322 = INT64_MIN;
	uint32_t x324 = 50119112U;
	int32_t t67 = 415612942;

    t67 = (x321>(x322^(x323+x324)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x325 = 125176091940053712LL;
	int64_t x326 = 1533473416469258LL;
	static volatile uint16_t x327 = 60U;
	uint64_t x328 = 1LLU;
	int32_t t68 = 2001;

    t68 = (x325>(x326^(x327+x328)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MIN;
	int64_t x331 = 21525580833663837LL;
	static int32_t t69 = -2880;

    t69 = (x329>(x330^(x331+x332)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x334 = INT8_MIN;
	uint64_t x335 = 20020389939480LLU;
	int32_t x336 = -1;
	int32_t t70 = 22662940;

    t70 = (x333>(x334^(x335+x336)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x337 = 12;
	uint16_t x338 = 1U;
	volatile uint16_t x339 = 7916U;
	int32_t t71 = -6939;

    t71 = (x337>(x338^(x339+x340)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x341 = UINT32_MAX;
	int8_t x342 = INT8_MAX;
	int64_t x343 = 829LL;
	volatile uint8_t x344 = 72U;
	static volatile int32_t t72 = -56;

    t72 = (x341>(x342^(x343+x344)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x345 = 10;
	int64_t x346 = 1LL;
	volatile int16_t x348 = INT16_MIN;

    t73 = (x345>(x346^(x347+x348)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = INT8_MIN;
	volatile int8_t x350 = -4;
	int16_t x351 = -3;
	int32_t x352 = -1;

    t74 = (x349>(x350^(x351+x352)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x353 = 2135U;
	int16_t x354 = INT16_MAX;
	volatile int16_t x356 = INT16_MAX;
	int32_t t75 = -4;

    t75 = (x353>(x354^(x355+x356)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t t76 = 0;

    t76 = (x361>(x362^(x363+x364)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x366 = INT64_MAX;
	int16_t x367 = 0;

    t77 = (x365>(x366^(x367+x368)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x369 = -2;
	int8_t x370 = INT8_MIN;
	volatile int32_t t78 = -237682;

    t78 = (x369>(x370^(x371+x372)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x373 = 31237U;
	static volatile uint64_t x374 = 1736608311993632LLU;
	static uint32_t x376 = 13868U;
	volatile int32_t t79 = -31786;

    t79 = (x373>(x374^(x375+x376)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	static volatile int16_t x379 = -165;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t80 = 3468733;

    t80 = (x377>(x378^(x379+x380)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x386 = 15480U;
	static int16_t x387 = INT16_MAX;
	volatile int32_t t81 = 1626;

    t81 = (x385>(x386^(x387+x388)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x389 = -1;
	int64_t x390 = -1LL;
	volatile int64_t x392 = 180LL;
	volatile int32_t t82 = -403;

    t82 = (x389>(x390^(x391+x392)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x393 = INT32_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	static int16_t x395 = 7;
	static int32_t x396 = -100110;
	int32_t t83 = 693;

    t83 = (x393>(x394^(x395+x396)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile int32_t x406 = 13841;
	static uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 5836153362LLU;
	static int32_t t84 = -913;

    t84 = (x405>(x406^(x407+x408)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x410 = INT8_MIN;
	uint16_t x411 = 95U;
	volatile uint32_t x412 = 1825211U;
	volatile int32_t t85 = 167634;

    t85 = (x409>(x410^(x411+x412)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x417 = INT32_MAX;
	static volatile int32_t x419 = 1;
	int16_t x420 = INT16_MIN;

    t86 = (x417>(x418^(x419+x420)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x421 = 0U;
	static int32_t x424 = -494563022;
	int32_t t87 = 99;

    t87 = (x421>(x422^(x423+x424)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x425 = INT64_MIN;
	int16_t x427 = 442;
	static uint16_t x428 = UINT16_MAX;
	int32_t t88 = 209;

    t88 = (x425>(x426^(x427+x428)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x429 = INT8_MAX;
	volatile int64_t x431 = -6609724LL;
	volatile int32_t t89 = -6250378;

    t89 = (x429>(x430^(x431+x432)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x437 = -1LL;
	int32_t x438 = INT32_MIN;
	uint8_t x439 = UINT8_MAX;
	int8_t x440 = -11;
	volatile int32_t t90 = 237967391;

    t90 = (x437>(x438^(x439+x440)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MAX;
	int64_t x443 = 1735LL;
	static int64_t x444 = -1LL;
	static int32_t t91 = -112;

    t91 = (x441>(x442^(x443+x444)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x445 = -8283;
	static int32_t x446 = INT32_MIN;
	volatile int32_t x447 = -1;
	int8_t x448 = INT8_MIN;
	static volatile int32_t t92 = -38324;

    t92 = (x445>(x446^(x447+x448)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x449 = UINT16_MAX;
	static uint32_t x450 = UINT32_MAX;
	volatile int32_t x451 = -2;
	volatile int64_t x452 = -2103731797LL;

    t93 = (x449>(x450^(x451+x452)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x453 = INT32_MAX;
	static int32_t x454 = INT32_MIN;
	int64_t x456 = INT64_MIN;

    t94 = (x453>(x454^(x455+x456)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x457 = 7135U;
	static int16_t x458 = -9;
	volatile uint16_t x459 = 1170U;

    t95 = (x457>(x458^(x459+x460)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x461 = -1;
	uint8_t x462 = 65U;
	int16_t x463 = INT16_MIN;
	volatile int32_t t96 = 135;

    t96 = (x461>(x462^(x463+x464)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x465 = 33644988558LL;
	int8_t x466 = -1;
	volatile int16_t x467 = INT16_MIN;
	uint8_t x468 = 11U;
	volatile int32_t t97 = 294;

    t97 = (x465>(x466^(x467+x468)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x473 = INT8_MAX;
	static uint8_t x474 = UINT8_MAX;
	static int16_t x475 = INT16_MIN;
	uint64_t x476 = 12396204228023726LLU;
	int32_t t98 = 5835621;

    t98 = (x473>(x474^(x475+x476)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x477 = INT16_MAX;
	int32_t x478 = -1;
	static int64_t x479 = INT64_MIN;
	volatile int32_t t99 = -4;

    t99 = (x477>(x478^(x479+x480)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MIN;
	int32_t x483 = -1010016340;
	uint8_t x484 = 83U;
	int32_t t100 = -189;

    t100 = (x481>(x482^(x483+x484)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x485 = -1LL;
	static int32_t x486 = INT32_MIN;
	static volatile int32_t x487 = 413;
	uint8_t x488 = 6U;
	int32_t t101 = -2;

    t101 = (x485>(x486^(x487+x488)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x489 = -395;
	int16_t x490 = -7700;
	uint16_t x491 = 164U;
	volatile int8_t x492 = 19;

    t102 = (x489>(x490^(x491+x492)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x493 = 4588U;
	int16_t x494 = -509;
	static int64_t x495 = INT64_MIN;
	uint16_t x496 = 29U;
	volatile int32_t t103 = 124783768;

    t103 = (x493>(x494^(x495+x496)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x497 = UINT8_MAX;
	uint16_t x499 = 860U;
	uint64_t x500 = UINT64_MAX;
	int32_t t104 = 18;

    t104 = (x497>(x498^(x499+x500)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x503 = -1;
	int8_t x504 = INT8_MIN;
	int32_t t105 = -337324;

    t105 = (x501>(x502^(x503+x504)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x508 = UINT32_MAX;

    t106 = (x505>(x506^(x507+x508)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x513 = 618;
	static int32_t t107 = -586559391;

    t107 = (x513>(x514^(x515+x516)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x522 = INT8_MAX;
	int16_t x523 = 0;
	int32_t t108 = 10;

    t108 = (x521>(x522^(x523+x524)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x525 = 1010U;
	int8_t x526 = -31;
	static uint64_t x528 = UINT64_MAX;
	int32_t t109 = 64533;

    t109 = (x525>(x526^(x527+x528)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x529 = 10447664U;
	int32_t x530 = INT32_MIN;
	uint64_t x531 = UINT64_MAX;
	volatile int32_t t110 = -23;

    t110 = (x529>(x530^(x531+x532)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	int64_t x535 = 1LL;
	int16_t x536 = INT16_MAX;

    t111 = (x533>(x534^(x535+x536)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x537 = INT32_MAX;
	int8_t x539 = INT8_MIN;
	static uint32_t x540 = 1673171981U;
	static volatile int32_t t112 = 1591767;

    t112 = (x537>(x538^(x539+x540)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x541 = INT16_MIN;
	int64_t x542 = INT64_MIN;
	uint64_t x543 = 217636LLU;
	uint32_t x544 = 157718U;
	static volatile int32_t t113 = -255923;

    t113 = (x541>(x542^(x543+x544)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x545 = INT64_MIN;
	uint8_t x547 = UINT8_MAX;
	int64_t x548 = -3430LL;
	volatile int32_t t114 = 114;

    t114 = (x545>(x546^(x547+x548)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x549 = 7921U;
	static int16_t x551 = -1;
	static volatile int32_t x552 = 3478;

    t115 = (x549>(x550^(x551+x552)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x553 = -1;
	volatile int16_t x554 = INT16_MAX;
	uint64_t x556 = 111053LLU;
	volatile int32_t t116 = 0;

    t116 = (x553>(x554^(x555+x556)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x557 = INT16_MIN;
	uint8_t x558 = 11U;
	uint8_t x559 = 14U;
	uint64_t x560 = UINT64_MAX;
	static int32_t t117 = -3;

    t117 = (x557>(x558^(x559+x560)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x561 = 2665U;
	static uint64_t x563 = 63469LLU;
	static uint64_t x564 = 222LLU;
	int32_t t118 = -17459;

    t118 = (x561>(x562^(x563+x564)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x565 = INT8_MIN;
	uint8_t x566 = 14U;
	int8_t x567 = -24;
	int8_t x568 = -1;
	volatile int32_t t119 = -34593;

    t119 = (x565>(x566^(x567+x568)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x569 = 3LLU;
	uint64_t x571 = UINT64_MAX;
	int8_t x572 = INT8_MAX;
	volatile int32_t t120 = 731;

    t120 = (x569>(x570^(x571+x572)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x574 = -2;
	int64_t x575 = INT64_MIN;
	uint16_t x576 = 757U;

    t121 = (x573>(x574^(x575+x576)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x577 = -23;
	uint64_t x578 = 10200792LLU;
	int8_t x579 = INT8_MAX;
	int8_t x580 = INT8_MAX;

    t122 = (x577>(x578^(x579+x580)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x581 = UINT8_MAX;
	static int8_t x582 = INT8_MAX;
	uint16_t x584 = UINT16_MAX;
	static volatile int32_t t123 = 287;

    t123 = (x581>(x582^(x583+x584)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x585 = INT64_MAX;
	volatile uint16_t x586 = 13U;
	int8_t x587 = 10;
	int16_t x588 = INT16_MIN;

    t124 = (x585>(x586^(x587+x588)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x589 = 6142;
	int8_t x591 = 3;
	static int64_t x592 = -4560006LL;
	int32_t t125 = -423695;

    t125 = (x589>(x590^(x591+x592)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x593 = INT32_MIN;
	volatile uint8_t x594 = UINT8_MAX;
	int8_t x595 = INT8_MAX;
	volatile uint64_t x596 = UINT64_MAX;
	volatile int32_t t126 = -650;

    t126 = (x593>(x594^(x595+x596)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x598 = -1;
	uint64_t x599 = 7722186703209210630LLU;
	int32_t x600 = INT32_MIN;
	volatile int32_t t127 = 1294018;

    t127 = (x597>(x598^(x599+x600)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x601 = UINT8_MAX;
	volatile int8_t x602 = 0;
	int64_t x604 = -203LL;
	static int32_t t128 = 292;

    t128 = (x601>(x602^(x603+x604)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile uint8_t x606 = UINT8_MAX;
	int64_t x607 = INT64_MAX;
	static volatile int8_t x608 = INT8_MIN;
	int32_t t129 = -3;

    t129 = (x605>(x606^(x607+x608)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x609 = 1;
	int16_t x612 = INT16_MAX;
	int32_t t130 = -4275624;

    t130 = (x609>(x610^(x611+x612)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x614 = 1141724LLU;
	static volatile int16_t x615 = INT16_MIN;
	int32_t t131 = -80;

    t131 = (x613>(x614^(x615+x616)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x617 = UINT16_MAX;
	volatile uint16_t x618 = 841U;
	static uint8_t x619 = UINT8_MAX;
	volatile int32_t t132 = -126667621;

    t132 = (x617>(x618^(x619+x620)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x625 = -2;
	int64_t x626 = INT64_MAX;
	uint16_t x627 = 101U;
	int8_t x628 = INT8_MIN;
	volatile int32_t t133 = 8167849;

    t133 = (x625>(x626^(x627+x628)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x633 = -1;
	static int16_t x634 = -1;
	static uint64_t x635 = UINT64_MAX;
	uint32_t x636 = UINT32_MAX;

    t134 = (x633>(x634^(x635+x636)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x637 = INT64_MIN;
	volatile int8_t x638 = -21;
	volatile uint16_t x639 = UINT16_MAX;
	static volatile int32_t t135 = -44;

    t135 = (x637>(x638^(x639+x640)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x645 = INT8_MAX;
	static uint32_t x646 = 116228561U;
	static volatile uint32_t x648 = UINT32_MAX;

    t136 = (x645>(x646^(x647+x648)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x651 = -5;
	static int16_t x652 = -1;

    t137 = (x649>(x650^(x651+x652)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x655 = -89167686;
	int64_t x656 = -1700177597LL;
	int32_t t138 = -4121461;

    t138 = (x653>(x654^(x655+x656)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x657 = INT16_MIN;
	static int64_t x658 = -973LL;
	int8_t x660 = 1;

    t139 = (x657>(x658^(x659+x660)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x661 = -1LL;
	volatile int8_t x662 = -1;
	uint8_t x663 = 22U;
	int64_t x664 = 44342LL;

    t140 = (x661>(x662^(x663+x664)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x669 = 12075U;
	volatile int32_t x670 = -9959398;
	int32_t t141 = -2273204;

    t141 = (x669>(x670^(x671+x672)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x674 = 30U;
	int16_t x676 = INT16_MIN;
	volatile int32_t t142 = -17559393;

    t142 = (x673>(x674^(x675+x676)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x678 = INT8_MAX;
	int16_t x679 = -1;
	volatile int16_t x680 = INT16_MAX;
	int32_t t143 = -181084;

    t143 = (x677>(x678^(x679+x680)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x681 = UINT32_MAX;
	static uint64_t x683 = UINT64_MAX;

    t144 = (x681>(x682^(x683+x684)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x685 = 606LLU;
	static int32_t x686 = INT32_MIN;
	volatile uint64_t x687 = 15886LLU;
	volatile int16_t x688 = INT16_MAX;
	static volatile int32_t t145 = -127;

    t145 = (x685>(x686^(x687+x688)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x693 = -3194;
	uint16_t x694 = 11994U;
	volatile int64_t x695 = -662611996285082LL;
	int32_t x696 = 83;
	static int32_t t146 = -21;

    t146 = (x693>(x694^(x695+x696)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x697 = UINT32_MAX;
	volatile uint64_t x698 = UINT64_MAX;
	static int32_t x700 = -560860;

    t147 = (x697>(x698^(x699+x700)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x713 = 109787773;
	uint8_t x714 = 36U;
	uint8_t x715 = UINT8_MAX;
	int32_t t148 = -19;

    t148 = (x713>(x714^(x715+x716)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x718 = 1;
	int64_t x719 = -1LL;
	volatile uint32_t x720 = 7863U;

    t149 = (x717>(x718^(x719+x720)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x721 = 29200LL;
	int64_t x723 = -1LL;
	volatile int16_t x724 = -15274;
	int32_t t150 = -16;

    t150 = (x721>(x722^(x723+x724)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x725 = 45;
	uint32_t x727 = UINT32_MAX;
	int32_t t151 = -48541;

    t151 = (x725>(x726^(x727+x728)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	static int16_t x730 = INT16_MIN;
	volatile int8_t x732 = INT8_MAX;

    t152 = (x729>(x730^(x731+x732)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x733 = INT8_MIN;
	uint64_t x734 = 2212660427200543314LLU;
	volatile int32_t x735 = 11;
	int32_t t153 = -10;

    t153 = (x733>(x734^(x735+x736)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x737 = -184869;
	int16_t x738 = -1;
	static int32_t x739 = INT32_MAX;
	int32_t t154 = 469021;

    t154 = (x737>(x738^(x739+x740)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x741 = 3U;
	volatile int32_t x742 = INT32_MIN;
	int8_t x743 = 30;
	uint32_t x744 = UINT32_MAX;

    t155 = (x741>(x742^(x743+x744)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x749 = -1;
	int64_t x750 = -1574012563540707LL;
	int16_t x751 = INT16_MAX;
	static int64_t x752 = -29926505145LL;
	volatile int32_t t156 = -40;

    t156 = (x749>(x750^(x751+x752)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x754 = -59;
	int64_t x756 = INT64_MIN;

    t157 = (x753>(x754^(x755+x756)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x757 = INT32_MAX;
	uint16_t x758 = UINT16_MAX;
	static int8_t x759 = INT8_MAX;
	int32_t t158 = 108468276;

    t158 = (x757>(x758^(x759+x760)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x764 = 207U;
	int32_t t159 = -854077;

    t159 = (x761>(x762^(x763+x764)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x767 = INT32_MAX;
	int16_t x768 = -47;

    t160 = (x765>(x766^(x767+x768)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x769 = -7694LL;
	int8_t x770 = -1;
	volatile int32_t t161 = -47276034;

    t161 = (x769>(x770^(x771+x772)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x773 = INT16_MIN;
	uint8_t x774 = 89U;
	uint8_t x775 = UINT8_MAX;

    t162 = (x773>(x774^(x775+x776)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x778 = 0U;
	volatile int64_t x779 = -38056109219417809LL;
	static int32_t x780 = INT32_MAX;
	volatile int32_t t163 = 56944;

    t163 = (x777>(x778^(x779+x780)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x781 = UINT64_MAX;
	volatile uint8_t x782 = UINT8_MAX;
	int64_t x783 = 3452476LL;
	int32_t x784 = -92898810;
	static volatile int32_t t164 = -96484;

    t164 = (x781>(x782^(x783+x784)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x785 = 0;
	static int16_t x786 = -1;
	volatile uint32_t x787 = 10U;
	volatile uint16_t x788 = 5U;
	int32_t t165 = -1144;

    t165 = (x785>(x786^(x787+x788)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x789 = 3560459LLU;
	uint16_t x790 = UINT16_MAX;
	uint32_t x791 = 1886393051U;
	volatile uint16_t x792 = 354U;
	volatile int32_t t166 = 14;

    t166 = (x789>(x790^(x791+x792)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x793 = INT64_MAX;
	int16_t x794 = 1;
	volatile uint16_t x795 = 0U;
	volatile int32_t x796 = INT32_MAX;
	volatile int32_t t167 = -59632;

    t167 = (x793>(x794^(x795+x796)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x798 = INT16_MAX;
	int8_t x799 = 0;
	static volatile int64_t x800 = INT64_MIN;
	volatile int32_t t168 = 44;

    t168 = (x797>(x798^(x799+x800)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x801 = 6261176315823476947LLU;
	int64_t x802 = INT64_MAX;
	static int8_t x803 = -7;
	int16_t x804 = INT16_MAX;

    t169 = (x801>(x802^(x803+x804)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x805 = INT8_MIN;
	volatile uint64_t x807 = 1558842505685834684LLU;

    t170 = (x805>(x806^(x807+x808)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x809 = 991529411202568606LLU;
	uint16_t x810 = 1U;
	int32_t x811 = INT32_MIN;
	volatile uint32_t x812 = UINT32_MAX;
	int32_t t171 = -1648;

    t171 = (x809>(x810^(x811+x812)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x813 = INT16_MIN;
	volatile int8_t x815 = INT8_MIN;
	int64_t x816 = INT64_MAX;
	int32_t t172 = 550;

    t172 = (x813>(x814^(x815+x816)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x817 = 58643047LLU;
	volatile uint16_t x819 = 7934U;
	uint64_t x820 = UINT64_MAX;
	static volatile int32_t t173 = 1189;

    t173 = (x817>(x818^(x819+x820)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x821 = INT32_MIN;
	static int64_t x822 = 36799912942LL;
	int32_t t174 = 9123;

    t174 = (x821>(x822^(x823+x824)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x825 = INT64_MAX;
	volatile int8_t x826 = INT8_MIN;
	static int8_t x827 = INT8_MIN;
	int32_t t175 = 242776554;

    t175 = (x825>(x826^(x827+x828)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x829 = INT8_MAX;
	uint32_t x830 = 98U;
	int64_t x831 = INT64_MIN;
	volatile uint16_t x832 = 3U;

    t176 = (x829>(x830^(x831+x832)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x834 = 1761749U;
	uint32_t x835 = 84233U;
	int32_t x836 = -17;

    t177 = (x833>(x834^(x835+x836)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x837 = -1LL;
	static int64_t x838 = -625415931728LL;
	volatile int32_t t178 = -13;

    t178 = (x837>(x838^(x839+x840)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x841 = 36873;
	static uint8_t x842 = UINT8_MAX;
	static uint64_t x843 = 171913370714581478LLU;
	uint16_t x844 = UINT16_MAX;
	int32_t t179 = 246691;

    t179 = (x841>(x842^(x843+x844)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x845 = INT32_MIN;
	uint8_t x847 = UINT8_MAX;
	int64_t x848 = -503543375971LL;
	int32_t t180 = -20823247;

    t180 = (x845>(x846^(x847+x848)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x849 = -1;
	uint32_t x850 = 6499302U;
	volatile int32_t x851 = INT32_MIN;
	static int64_t x852 = -1963838782467733997LL;

    t181 = (x849>(x850^(x851+x852)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x853 = -1;
	int32_t x854 = 783372;
	int8_t x855 = INT8_MIN;
	int16_t x856 = -1;
	int32_t t182 = -219;

    t182 = (x853>(x854^(x855+x856)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x861 = UINT64_MAX;
	volatile int8_t x862 = 0;
	int64_t x864 = -5142826LL;

    t183 = (x861>(x862^(x863+x864)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x865 = 0U;
	uint64_t x866 = 5409LLU;
	static uint16_t x867 = UINT16_MAX;
	uint32_t x868 = 3U;
	int32_t t184 = 72918;

    t184 = (x865>(x866^(x867+x868)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x871 = UINT16_MAX;
	uint64_t x872 = 452108425040525026LLU;
	int32_t t185 = -4;

    t185 = (x869>(x870^(x871+x872)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x873 = -1LL;
	int64_t x874 = INT64_MIN;
	uint8_t x876 = 7U;
	int32_t t186 = -528030;

    t186 = (x873>(x874^(x875+x876)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x881 = INT32_MAX;
	int64_t x883 = INT64_MAX;
	int16_t x884 = -1;
	volatile int32_t t187 = 2092307;

    t187 = (x881>(x882^(x883+x884)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x885 = INT16_MIN;
	int32_t x887 = 20;
	static int64_t x888 = -19200316LL;
	static volatile int32_t t188 = -435365;

    t188 = (x885>(x886^(x887+x888)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x889 = UINT64_MAX;
	int16_t x890 = 0;
	static int8_t x891 = -1;
	int64_t x892 = 99635870902617LL;
	int32_t t189 = -13;

    t189 = (x889>(x890^(x891+x892)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x893 = 3322U;
	volatile int16_t x894 = INT16_MAX;
	uint16_t x896 = UINT16_MAX;
	volatile int32_t t190 = -864607;

    t190 = (x893>(x894^(x895+x896)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x897 = 40488729926079LLU;
	int64_t x898 = 22531LL;
	uint16_t x899 = 171U;
	int16_t x900 = INT16_MIN;
	volatile int32_t t191 = 1;

    t191 = (x897>(x898^(x899+x900)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x901 = UINT16_MAX;
	static int16_t x902 = -6395;
	uint64_t x903 = 48663688665419LLU;
	int16_t x904 = -1;
	int32_t t192 = -1024608178;

    t192 = (x901>(x902^(x903+x904)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x905 = 1;
	static int8_t x906 = -1;
	int8_t x907 = INT8_MAX;
	int32_t t193 = 46746;

    t193 = (x905>(x906^(x907+x908)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x909 = 51U;
	uint16_t x910 = 78U;
	volatile int8_t x911 = 57;
	uint32_t x912 = 46426U;
	int32_t t194 = 21358;

    t194 = (x909>(x910^(x911+x912)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x913 = UINT8_MAX;
	static uint64_t x914 = 4372302321419763LLU;
	static int16_t x916 = -1;
	static volatile int32_t t195 = 757;

    t195 = (x913>(x914^(x915+x916)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x917 = UINT32_MAX;
	uint64_t x918 = 1582818LLU;
	static int16_t x919 = INT16_MIN;
	uint16_t x920 = 0U;

    t196 = (x917>(x918^(x919+x920)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x921 = 4U;
	uint16_t x922 = 1654U;
	static uint8_t x923 = 1U;
	static uint64_t x924 = UINT64_MAX;
	static volatile int32_t t197 = 41039;

    t197 = (x921>(x922^(x923+x924)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x925 = 43206027U;
	volatile uint16_t x926 = 4071U;
	uint64_t x927 = 65550533436202LLU;
	static int8_t x928 = INT8_MIN;
	int32_t t198 = 0;

    t198 = (x925>(x926^(x927+x928)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x929 = INT8_MAX;
	int16_t x930 = -1;
	static int64_t x931 = -1LL;
	int16_t x932 = 6445;
	volatile int32_t t199 = 596753;

    t199 = (x929>(x930^(x931+x932)));

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

