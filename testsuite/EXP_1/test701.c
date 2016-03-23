
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

static int8_t x2 = -1;
static volatile int64_t x5 = -1492124190934433064LL;
int8_t x9 = -2;
static int32_t t2 = 77821;
int32_t x15 = -1;
uint32_t x18 = 2U;
int64_t x25 = INT64_MAX;
volatile int32_t t6 = -1;
uint8_t x32 = UINT8_MAX;
static uint8_t x33 = 19U;
volatile uint8_t x40 = UINT8_MAX;
static volatile int32_t t9 = -3542;
static int8_t x47 = INT8_MIN;
static uint8_t x48 = UINT8_MAX;
uint8_t x51 = 70U;
int64_t x52 = -708225641575LL;
volatile int64_t t11 = -30047622430678LL;
volatile int64_t x59 = INT64_MAX;
volatile int64_t x63 = -1LL;
uint16_t x69 = UINT16_MAX;
volatile int32_t x70 = INT32_MIN;
volatile int8_t x72 = -1;
uint16_t x75 = UINT16_MAX;
volatile int64_t x79 = INT64_MAX;
volatile int32_t t18 = 180;
int64_t x83 = INT64_MAX;
int64_t x84 = INT64_MIN;
volatile uint8_t x91 = 91U;
int64_t x94 = INT64_MIN;
volatile int8_t x95 = INT8_MIN;
int32_t x96 = INT32_MIN;
volatile int32_t t22 = 22;
int8_t x103 = INT8_MAX;
int32_t t24 = 1;
volatile int32_t t25 = -1221;
int8_t x109 = 4;
uint64_t x111 = 112LLU;
int8_t x121 = INT8_MIN;
static int8_t x127 = -1;
static int64_t x141 = INT64_MIN;
static int64_t x142 = 348126124432LL;
volatile int64_t t34 = INT64_MIN;
static int8_t x151 = -1;
int8_t x156 = -1;
int64_t x168 = INT64_MIN;
volatile int32_t t40 = INT32_MAX;
volatile uint64_t x173 = 8283658279045038LLU;
int32_t t41 = 139493251;
uint32_t x178 = 601618847U;
uint64_t x183 = 6144900607615482567LLU;
static int8_t x189 = -4;
int32_t t45 = -18701575;
uint8_t x194 = UINT8_MAX;
static int16_t x196 = 1;
int16_t x199 = 0;
uint8_t x206 = 15U;
int16_t x212 = INT16_MAX;
volatile int32_t t50 = -1;
int32_t x218 = INT32_MIN;
volatile uint32_t x236 = UINT32_MAX;
int8_t x241 = INT8_MIN;
int64_t x242 = -1LL;
volatile int8_t x248 = INT8_MIN;
int32_t t57 = 0;
uint8_t x250 = 30U;
static volatile int64_t x255 = -7363816793838LL;
int32_t x266 = INT32_MIN;
uint32_t x274 = UINT32_MAX;
uint16_t x275 = 1U;
uint64_t x288 = 8976645LLU;
volatile int8_t x289 = 0;
int16_t x293 = 672;
uint64_t t69 = UINT64_MAX;
static int16_t x299 = -22;
static int32_t t70 = -482;
volatile uint16_t x303 = 0U;
int32_t x308 = -5047;
int16_t x312 = INT16_MIN;
static volatile int32_t x320 = -1;
int8_t x333 = -11;
volatile int8_t x335 = INT8_MAX;
int16_t x352 = INT16_MIN;
volatile int64_t x354 = INT64_MAX;
int64_t x356 = INT64_MIN;
int32_t x363 = INT32_MIN;
int64_t x366 = -1LL;
int32_t x371 = INT32_MAX;
volatile int8_t x372 = -1;
static int16_t x380 = -1;
volatile int64_t x384 = INT64_MIN;
int32_t x385 = INT32_MAX;
int8_t x390 = INT8_MAX;
int8_t x402 = -1;
volatile int64_t x414 = 34985LL;
int64_t x418 = -252713449502LL;
int32_t x424 = -1;
int32_t t98 = -45055;
uint64_t x427 = 4827LLU;
uint8_t x428 = 2U;
static int16_t x432 = INT16_MIN;
uint16_t x433 = UINT16_MAX;
int16_t x435 = -1;
volatile uint32_t x437 = 2620U;
int16_t x440 = INT16_MAX;
uint16_t x443 = 3770U;
int64_t x446 = INT64_MIN;
int8_t x462 = 49;
static int64_t x464 = INT64_MAX;
uint64_t x465 = 7304LLU;
uint8_t x466 = 1U;
int32_t t111 = 26861359;
static uint32_t x484 = 2U;
int64_t x488 = -868028406481220674LL;
uint64_t x489 = 2597LLU;
uint16_t x491 = 30U;
volatile uint64_t x503 = 135127087412716LLU;
int8_t x508 = INT8_MIN;
volatile int32_t t117 = -47;
int8_t x515 = -1;
static uint32_t x524 = 4423235U;
uint64_t x532 = 120946153LLU;
volatile int8_t x536 = -1;
int16_t x541 = INT16_MIN;
volatile int32_t t127 = 0;
int32_t t128 = 7990824;
int64_t x561 = -1LL;
int32_t x567 = INT32_MIN;
volatile int32_t t130 = -29;
int16_t x569 = 25;
uint8_t x570 = UINT8_MAX;
static uint32_t x573 = UINT32_MAX;
static int8_t x580 = -1;
volatile int32_t t133 = -229608;
int32_t x585 = -1;
int32_t t135 = -1;
volatile uint64_t x592 = UINT64_MAX;
int32_t t139 = -5;
int16_t x610 = INT16_MAX;
int32_t t140 = -28405;
int32_t x618 = -1;
static int16_t x623 = INT16_MIN;
volatile int32_t t143 = -212553;
int64_t t145 = 14059904244LL;
volatile int16_t x636 = INT16_MAX;
static int32_t t147 = 1;
volatile int64_t x646 = -1LL;
int32_t x647 = 16416;
volatile int32_t t149 = 140655;
static int8_t x652 = INT8_MAX;
int64_t x656 = INT64_MIN;
static volatile int8_t x668 = -17;
int8_t x672 = INT8_MAX;
static volatile int32_t t155 = -112369;
int8_t x680 = INT8_MAX;
uint64_t x689 = 12201187917LLU;
volatile uint8_t x696 = UINT8_MAX;
int16_t x701 = INT16_MAX;
int8_t x705 = INT8_MAX;
int16_t x707 = -15567;
static int64_t x709 = 1099548LL;
static int8_t x710 = INT8_MIN;
volatile int32_t t164 = -48;
uint8_t x718 = 6U;
static volatile int32_t t166 = -36;
int64_t x721 = 5470LL;
int32_t t167 = 897;
int32_t t168 = -15242040;
int64_t x730 = 18856024538LL;
int64_t x732 = -1LL;
int64_t x735 = INT64_MAX;
int64_t x740 = INT64_MIN;
volatile uint32_t x745 = UINT32_MAX;
int16_t x754 = INT16_MAX;
int64_t x755 = -5626442987LL;
uint64_t x769 = 222715LLU;
volatile int16_t x770 = -1;
int64_t t177 = 1264940LL;
int64_t x787 = 16109569548186LL;
static volatile int8_t x790 = INT8_MIN;
volatile uint8_t x791 = 19U;
int32_t x792 = INT32_MIN;
static volatile int32_t t181 = INT32_MIN;
int64_t x800 = -1LL;
uint8_t x803 = 8U;
uint8_t x807 = 10U;
static uint8_t x809 = UINT8_MAX;
uint32_t t185 = 20938U;
int16_t x813 = -1;
int32_t x818 = INT32_MIN;
int16_t x820 = INT16_MIN;
int64_t x821 = 2172486694186LL;
volatile int32_t x822 = INT32_MIN;
int32_t x824 = -6554;
int8_t x826 = INT8_MIN;
int64_t x827 = INT64_MIN;
static uint32_t x831 = 53U;
int32_t x838 = -44110971;
int32_t t192 = -444582;
volatile int32_t x848 = INT32_MAX;
uint64_t x849 = 60760647LLU;
uint32_t x859 = 13900096U;
int64_t x870 = -1LL;
static int32_t t199 = 12;


void f0(void) {
    	static int16_t x1 = -1;
	int8_t x3 = -6;
	static int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = 1;

    t0 = (((x1/x2)>x3)+x4);

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 266406969U;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -778;

    t1 = (((x5/x6)>x7)+x8);

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x10 = 1U;
	int16_t x11 = INT16_MAX;
	static uint8_t x12 = UINT8_MAX;

    t2 = (((x9/x10)>x11)+x12);

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	volatile uint8_t x14 = UINT8_MAX;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 1;

    t3 = (((x13/x14)>x15)+x16);

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	volatile uint64_t x19 = UINT64_MAX;
	volatile int64_t x20 = INT64_MAX;
	volatile int64_t t4 = INT64_MAX;

    t4 = (((x17/x18)>x19)+x20);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	static int32_t x22 = INT32_MIN;
	int32_t x23 = -13999471;
	int64_t x24 = INT64_MIN;
	int64_t t5 = -2403773467LL;

    t5 = (((x21/x22)>x23)+x24);

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MIN;
	volatile int32_t x28 = -758853002;

    t6 = (((x25/x26)>x27)+x28);

    if (t6 != -758853001) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	int32_t x30 = 6894901;
	int16_t x31 = 3;
	int32_t t7 = -29;

    t7 = (((x29/x30)>x31)+x32);

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MAX;
	static int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -34473;

    t8 = (((x33/x34)>x35)+x36);

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 8233U;
	uint64_t x38 = UINT64_MAX;
	static int8_t x39 = INT8_MIN;

    t9 = (((x37/x38)>x39)+x40);

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	volatile int16_t x46 = INT16_MAX;
	volatile int32_t t10 = 0;

    t10 = (((x45/x46)>x47)+x48);

    if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x49 = 1251912071850LL;
	int32_t x50 = INT32_MIN;

    t11 = (((x49/x50)>x51)+x52);

    if (t11 != -708225641575LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = -26LL;
	volatile uint32_t x54 = 6U;
	uint64_t x55 = 1958097457523598LLU;
	volatile uint64_t x56 = 112436849156347890LLU;
	volatile uint64_t t12 = 262755601289LLU;

    t12 = (((x53/x54)>x55)+x56);

    if (t12 != 112436849156347891LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = UINT16_MAX;
	int64_t x58 = INT64_MIN;
	static uint8_t x60 = 9U;
	int32_t t13 = -1;

    t13 = (((x57/x58)>x59)+x60);

    if (t13 != 9) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x61 = 7089345;
	static int64_t x62 = 35690084434657257LL;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = -14565809;

    t14 = (((x61/x62)>x63)+x64);

    if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 26;
	static uint64_t x66 = 853962518770836LLU;
	int8_t x67 = -1;
	int16_t x68 = 1;
	static volatile int32_t t15 = 215243;

    t15 = (((x65/x66)>x67)+x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x71 = 99LLU;
	int32_t t16 = 0;

    t16 = (((x69/x70)>x71)+x72);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x73 = -1;
	volatile int64_t x74 = -14298876LL;
	int64_t x76 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

    t17 = (((x73/x74)>x75)+x76);

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	int8_t x80 = INT8_MIN;

    t18 = (((x77/x78)>x79)+x80);

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x81 = 46U;
	uint8_t x82 = UINT8_MAX;
	static volatile int64_t t19 = INT64_MIN;

    t19 = (((x81/x82)>x83)+x84);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	volatile uint8_t x87 = UINT8_MAX;
	int8_t x88 = -1;
	int32_t t20 = -169568;

    t20 = (((x85/x86)>x87)+x88);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = 5;
	int16_t x92 = 20;
	volatile int32_t t21 = -285;

    t21 = (((x89/x90)>x91)+x92);

    if (t21 != 20) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = UINT8_MAX;

    t22 = (((x93/x94)>x95)+x96);

    if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -2086369;
	static int32_t x98 = 106;
	int8_t x99 = -1;
	uint32_t x100 = 348431031U;
	uint32_t t23 = 143085U;

    t23 = (((x97/x98)>x99)+x100);

    if (t23 != 348431031U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 2090675LLU;
	int32_t x104 = -7223;

    t24 = (((x101/x102)>x103)+x104);

    if (t24 != -7222) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 0U;
	int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MIN;
	static volatile uint8_t x108 = 2U;

    t25 = (((x105/x106)>x107)+x108);

    if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x110 = 26433246044LLU;
	int16_t x112 = -1;
	int32_t t26 = 1;

    t26 = (((x109/x110)>x111)+x112);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	static volatile uint32_t x114 = 58305768U;
	uint32_t x115 = UINT32_MAX;
	static volatile int8_t x116 = INT8_MAX;
	int32_t t27 = -23;

    t27 = (((x113/x114)>x115)+x116);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x122 = 17792LLU;
	static int16_t x123 = INT16_MIN;
	static uint32_t x124 = 86U;
	uint32_t t28 = 14889265U;

    t28 = (((x121/x122)>x123)+x124);

    if (t28 != 86U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -1LL;
	int8_t x126 = 3;
	static uint8_t x128 = UINT8_MAX;
	volatile int32_t t29 = 1;

    t29 = (((x125/x126)>x127)+x128);

    if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x129 = 61U;
	int16_t x130 = 5;
	int32_t x131 = 44200899;
	int16_t x132 = INT16_MIN;
	int32_t t30 = -48210603;

    t30 = (((x129/x130)>x131)+x132);

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x133 = UINT64_MAX;
	int16_t x134 = 104;
	uint64_t x135 = 251199613LLU;
	int64_t x136 = INT64_MIN;
	int64_t t31 = 10079809322834LL;

    t31 = (((x133/x134)>x135)+x136);

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	volatile int16_t x139 = INT16_MIN;
	uint64_t x140 = 5492842LLU;
	uint64_t t32 = 1501942124436017801LLU;

    t32 = (((x137/x138)>x139)+x140);

    if (t32 != 5492843LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x143 = UINT8_MAX;
	uint64_t x144 = 166361928017LLU;
	uint64_t t33 = 53041826519LLU;

    t33 = (((x141/x142)>x143)+x144);

    if (t33 != 166361928017LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = INT32_MIN;
	static int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MIN;
	volatile int64_t x148 = INT64_MIN;

    t34 = (((x145/x146)>x147)+x148);

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	volatile int8_t x152 = -1;
	int32_t t35 = 6030576;

    t35 = (((x149/x150)>x151)+x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = -1;
	static int8_t x154 = -1;
	uint16_t x155 = UINT16_MAX;
	static volatile int32_t t36 = 392;

    t36 = (((x153/x154)>x155)+x156);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = 1;
	static int32_t x158 = 234;
	int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MAX;
	static int32_t t37 = 7;

    t37 = (((x157/x158)>x159)+x160);

    if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = 2617U;
	int16_t x162 = INT16_MAX;
	uint64_t x163 = 352856390LLU;
	static uint8_t x164 = 105U;
	volatile int32_t t38 = 206;

    t38 = (((x161/x162)>x163)+x164);

    if (t38 != 105) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = -1LL;
	uint32_t x166 = UINT32_MAX;
	uint32_t x167 = 23957U;
	int64_t t39 = INT64_MIN;

    t39 = (((x165/x166)>x167)+x168);

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = UINT16_MAX;
	static volatile int32_t x170 = INT32_MAX;
	uint8_t x171 = UINT8_MAX;
	int32_t x172 = INT32_MAX;

    t40 = (((x169/x170)>x171)+x172);

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x174 = 249;
	int16_t x175 = INT16_MIN;
	static volatile uint8_t x176 = 7U;

    t41 = (((x173/x174)>x175)+x176);

    if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 275998723972LLU;
	int32_t x179 = -53672;
	uint16_t x180 = 8U;
	int32_t t42 = -49;

    t42 = (((x177/x178)>x179)+x180);

    if (t42 != 8) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = 8472;
	int16_t x182 = -1;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t43 = -2503935;

    t43 = (((x181/x182)>x183)+x184);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x185 = 1401096916U;
	int8_t x186 = -9;
	int64_t x187 = 3LL;
	uint64_t x188 = 3422961129LLU;
	volatile uint64_t t44 = 138512862011085325LLU;

    t44 = (((x185/x186)>x187)+x188);

    if (t44 != 3422961129LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x190 = INT16_MIN;
	int32_t x191 = 171;
	int16_t x192 = -1;

    t45 = (((x189/x190)>x191)+x192);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = UINT64_MAX;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t t46 = 186;

    t46 = (((x193/x194)>x195)+x196);

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x197 = 14;
	static int64_t x198 = 1189873379371844LL;
	static int64_t x200 = -118119LL;
	int64_t t47 = 2604776620946LL;

    t47 = (((x197/x198)>x199)+x200);

    if (t47 != -118119LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	volatile int8_t x203 = -1;
	volatile int16_t x204 = -27;
	int32_t t48 = -14;

    t48 = (((x201/x202)>x203)+x204);

    if (t48 != -26) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x205 = 1;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;
	volatile int32_t t49 = 1;

    t49 = (((x205/x206)>x207)+x208);

    if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x209 = INT8_MAX;
	uint64_t x210 = 1876035125441666LLU;
	int64_t x211 = INT64_MIN;

    t50 = (((x209/x210)>x211)+x212);

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x213 = INT64_MIN;
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = -8;
	int8_t x216 = -46;
	static int32_t t51 = 1043;

    t51 = (((x213/x214)>x215)+x216);

    if (t51 != -45) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x217 = 5U;
	static int32_t x219 = 53716;
	volatile uint16_t x220 = UINT16_MAX;
	static int32_t t52 = 741030426;

    t52 = (((x217/x218)>x219)+x220);

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	volatile int32_t x222 = INT32_MIN;
	uint16_t x223 = 9U;
	int32_t x224 = -1;
	volatile int32_t t53 = 1150;

    t53 = (((x221/x222)>x223)+x224);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x233 = 50U;
	volatile int32_t x234 = -137132316;
	int8_t x235 = -1;
	static uint32_t t54 = 2551U;

    t54 = (((x233/x234)>x235)+x236);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x237 = INT64_MAX;
	volatile int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	static volatile uint8_t x240 = 0U;
	volatile int32_t t55 = 198870984;

    t55 = (((x237/x238)>x239)+x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	static int32_t t56 = -551212;

    t56 = (((x241/x242)>x243)+x244);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x245 = -1;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = -320780510368949LL;

    t57 = (((x245/x246)>x247)+x248);

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x249 = INT64_MIN;
	volatile uint64_t x251 = 323489106722562LLU;
	volatile uint32_t x252 = 26792U;
	volatile uint32_t t58 = 423214U;

    t58 = (((x249/x250)>x251)+x252);

    if (t58 != 26793U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x253 = -1;
	uint32_t x254 = 12U;
	uint16_t x256 = UINT16_MAX;
	int32_t t59 = 2118;

    t59 = (((x253/x254)>x255)+x256);

    if (t59 != 65536) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x257 = 0U;
	uint64_t x258 = 576LLU;
	uint32_t x259 = 2800U;
	uint64_t x260 = 272881596046693971LLU;
	volatile uint64_t t60 = 138596LLU;

    t60 = (((x257/x258)>x259)+x260);

    if (t60 != 272881596046693971LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x261 = 4226915572983936LLU;
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	int64_t x264 = -45949353830842806LL;
	int64_t t61 = 2630104747718LL;

    t61 = (((x261/x262)>x263)+x264);

    if (t61 != -45949353830842806LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x265 = 15U;
	int16_t x267 = -1;
	static volatile int8_t x268 = 2;
	volatile int32_t t62 = -27;

    t62 = (((x265/x266)>x267)+x268);

    if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x269 = INT32_MIN;
	uint64_t x270 = 44558395543LLU;
	uint64_t x271 = 830544LLU;
	int8_t x272 = INT8_MIN;
	volatile int32_t t63 = 3631;

    t63 = (((x269/x270)>x271)+x272);

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x273 = 9U;
	int16_t x276 = 14824;
	volatile int32_t t64 = -1;

    t64 = (((x273/x274)>x275)+x276);

    if (t64 != 14824) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x277 = INT64_MIN;
	int8_t x278 = -7;
	int16_t x279 = INT16_MIN;
	volatile uint32_t x280 = UINT32_MAX;
	uint32_t t65 = 1045642942U;

    t65 = (((x277/x278)>x279)+x280);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x281 = -1;
	int32_t x282 = 20;
	static uint16_t x283 = UINT16_MAX;
	int32_t x284 = -291445;
	volatile int32_t t66 = -1760175;

    t66 = (((x281/x282)>x283)+x284);

    if (t66 != -291445) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x285 = -853;
	int64_t x286 = 7775508723744LL;
	uint8_t x287 = 13U;
	volatile uint64_t t67 = 39900LLU;

    t67 = (((x285/x286)>x287)+x288);

    if (t67 != 8976645LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x290 = INT32_MIN;
	int8_t x291 = -1;
	uint64_t x292 = 63391343388810454LLU;
	static uint64_t t68 = 2022LLU;

    t68 = (((x289/x290)>x291)+x292);

    if (t68 != 63391343388810455LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x294 = UINT16_MAX;
	uint8_t x295 = UINT8_MAX;
	uint64_t x296 = UINT64_MAX;

    t69 = (((x293/x294)>x295)+x296);

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x297 = 29U;
	volatile int32_t x298 = -3;
	static int8_t x300 = -6;

    t70 = (((x297/x298)>x299)+x300);

    if (t70 != -5) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = -1;
	uint16_t x302 = 1U;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t71 = -242591;

    t71 = (((x301/x302)>x303)+x304);

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x305 = INT8_MIN;
	uint64_t x306 = UINT64_MAX;
	static volatile uint64_t x307 = 523024878656LLU;
	static volatile int32_t t72 = 14319;

    t72 = (((x305/x306)>x307)+x308);

    if (t72 != -5047) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = INT16_MIN;
	static int32_t x310 = INT32_MIN;
	volatile int16_t x311 = 30;
	volatile int32_t t73 = 99;

    t73 = (((x309/x310)>x311)+x312);

    if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x317 = UINT8_MAX;
	static int64_t x318 = INT64_MIN;
	uint32_t x319 = UINT32_MAX;
	int32_t t74 = -173554210;

    t74 = (((x317/x318)>x319)+x320);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = INT32_MAX;
	int64_t x322 = -1LL;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t75 = -2808402679081126LL;

    t75 = (((x321/x322)>x323)+x324);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MIN;
	volatile int8_t x327 = -1;
	int8_t x328 = -1;
	volatile int32_t t76 = 2476;

    t76 = (((x325/x326)>x327)+x328);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x329 = UINT64_MAX;
	int16_t x330 = -1;
	int16_t x331 = -5176;
	uint32_t x332 = 31563U;
	static volatile uint32_t t77 = 99U;

    t77 = (((x329/x330)>x331)+x332);

    if (t77 != 31563U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x334 = -1;
	uint64_t x336 = 744071095610962033LLU;
	uint64_t t78 = 421217729303989490LLU;

    t78 = (((x333/x334)>x335)+x336);

    if (t78 != 744071095610962033LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x337 = INT32_MIN;
	static int16_t x338 = 1;
	uint8_t x339 = UINT8_MAX;
	static uint8_t x340 = 85U;
	int32_t t79 = 1;

    t79 = (((x337/x338)>x339)+x340);

    if (t79 != 85) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x341 = 3054600LLU;
	uint16_t x342 = UINT16_MAX;
	volatile int64_t x343 = -1012LL;
	static uint16_t x344 = 9196U;
	static int32_t t80 = -548997;

    t80 = (((x341/x342)>x343)+x344);

    if (t80 != 9196) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x345 = -1;
	int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 0U;
	volatile int32_t t81 = -1004491192;

    t81 = (((x345/x346)>x347)+x348);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = 8;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	int32_t t82 = -59;

    t82 = (((x349/x350)>x351)+x352);

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x353 = 88235238U;
	uint16_t x355 = UINT16_MAX;
	int64_t t83 = INT64_MIN;

    t83 = (((x353/x354)>x355)+x356);

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x357 = 7371244647LLU;
	uint8_t x358 = 6U;
	volatile uint64_t x359 = 15143LLU;
	volatile int16_t x360 = -1;
	int32_t t84 = 54;

    t84 = (((x357/x358)>x359)+x360);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x361 = -13;
	int32_t x362 = -589;
	volatile int32_t x364 = -1;
	volatile int32_t t85 = 55;

    t85 = (((x361/x362)>x363)+x364);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x365 = 32572U;
	volatile int16_t x367 = INT16_MAX;
	volatile int32_t x368 = INT32_MAX;
	static volatile int32_t t86 = INT32_MAX;

    t86 = (((x365/x366)>x367)+x368);

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x369 = 16U;
	int8_t x370 = INT8_MIN;
	int32_t t87 = 74;

    t87 = (((x369/x370)>x371)+x372);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x377 = -1;
	volatile int8_t x378 = INT8_MAX;
	static uint16_t x379 = 116U;
	static volatile int32_t t88 = 16;

    t88 = (((x377/x378)>x379)+x380);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x381 = INT8_MAX;
	volatile int8_t x382 = -1;
	int8_t x383 = -8;
	volatile int64_t t89 = INT64_MIN;

    t89 = (((x381/x382)>x383)+x384);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x386 = INT8_MIN;
	int16_t x387 = -1;
	int32_t x388 = INT32_MAX;
	volatile int32_t t90 = INT32_MAX;

    t90 = (((x385/x386)>x387)+x388);

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x389 = 0U;
	volatile int8_t x391 = -1;
	static int32_t x392 = -1;
	int32_t t91 = 452;

    t91 = (((x389/x390)>x391)+x392);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x397 = 16LL;
	volatile uint64_t x398 = 16756LLU;
	int16_t x399 = 5;
	int32_t x400 = -16272414;
	volatile int32_t t92 = 1128898;

    t92 = (((x397/x398)>x399)+x400);

    if (t92 != -16272414) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x401 = 889531049291546685LLU;
	int32_t x403 = -1;
	int8_t x404 = -1;
	volatile int32_t t93 = -3557545;

    t93 = (((x401/x402)>x403)+x404);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x405 = UINT8_MAX;
	uint8_t x406 = 13U;
	volatile uint32_t x407 = 3U;
	static uint64_t x408 = UINT64_MAX;
	volatile uint64_t t94 = 8853816610523186100LLU;

    t94 = (((x405/x406)>x407)+x408);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x409 = UINT64_MAX;
	uint8_t x410 = UINT8_MAX;
	volatile int32_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	uint32_t t95 = UINT32_MAX;

    t95 = (((x409/x410)>x411)+x412);

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x413 = INT32_MIN;
	int64_t x415 = -1791649286054031848LL;
	static uint16_t x416 = UINT16_MAX;
	int32_t t96 = -1;

    t96 = (((x413/x414)>x415)+x416);

    if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x417 = 1795U;
	static volatile int16_t x419 = 1100;
	int16_t x420 = INT16_MIN;
	volatile int32_t t97 = 78880;

    t97 = (((x417/x418)>x419)+x420);

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x421 = 2;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MIN;

    t98 = (((x421/x422)>x423)+x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x425 = 2;
	int32_t x426 = -1;
	static volatile int32_t t99 = -6701;

    t99 = (((x425/x426)>x427)+x428);

    if (t99 != 3) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x429 = INT8_MAX;
	static volatile int64_t x430 = INT64_MAX;
	volatile int16_t x431 = -103;
	int32_t t100 = 872937;

    t100 = (((x429/x430)>x431)+x432);

    if (t100 != -32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x434 = INT8_MAX;
	volatile int64_t x436 = INT64_MIN;
	volatile int64_t t101 = 6LL;

    t101 = (((x433/x434)>x435)+x436);

    if (t101 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x438 = INT32_MAX;
	uint8_t x439 = UINT8_MAX;
	static int32_t t102 = -1029;

    t102 = (((x437/x438)>x439)+x440);

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x441 = INT16_MIN;
	int64_t x442 = INT64_MIN;
	static int64_t x444 = INT64_MIN;
	volatile int64_t t103 = INT64_MIN;

    t103 = (((x441/x442)>x443)+x444);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x445 = -1;
	int16_t x447 = -3;
	int64_t x448 = -7073871LL;
	static int64_t t104 = 22069774LL;

    t104 = (((x445/x446)>x447)+x448);

    if (t104 != -7073870LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x449 = -2;
	volatile int8_t x450 = INT8_MIN;
	uint32_t x451 = 590641U;
	int8_t x452 = -1;
	int32_t t105 = 8251;

    t105 = (((x449/x450)>x451)+x452);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x453 = INT8_MIN;
	int32_t x454 = INT32_MIN;
	int32_t x455 = INT32_MAX;
	static uint8_t x456 = UINT8_MAX;
	static volatile int32_t t106 = -153953;

    t106 = (((x453/x454)>x455)+x456);

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x461 = -578879008946207LL;
	uint8_t x463 = 1U;
	volatile int64_t t107 = INT64_MAX;

    t107 = (((x461/x462)>x463)+x464);

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x467 = INT16_MAX;
	volatile int32_t x468 = INT32_MIN;
	volatile int32_t t108 = INT32_MIN;

    t108 = (((x465/x466)>x467)+x468);

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x469 = 21488957;
	volatile int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MAX;
	int8_t x472 = INT8_MAX;
	volatile int32_t t109 = 3431;

    t109 = (((x469/x470)>x471)+x472);

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x473 = INT8_MIN;
	int16_t x474 = 26;
	int64_t x475 = 665LL;
	uint32_t x476 = 10970846U;
	uint32_t t110 = 687596U;

    t110 = (((x473/x474)>x475)+x476);

    if (t110 != 10970846U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x477 = -1;
	volatile uint16_t x478 = 7U;
	int32_t x479 = 461536;
	uint16_t x480 = 1U;

    t111 = (((x477/x478)>x479)+x480);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x481 = 3330;
	uint32_t x482 = 1U;
	uint64_t x483 = 15LLU;
	volatile uint32_t t112 = 9U;

    t112 = (((x481/x482)>x483)+x484);

    if (t112 != 3U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x485 = 1050460U;
	int16_t x486 = -3761;
	uint8_t x487 = UINT8_MAX;
	static volatile int64_t t113 = -8377996170044LL;

    t113 = (((x485/x486)>x487)+x488);

    if (t113 != -868028406481220674LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x490 = -48;
	int32_t x492 = INT32_MAX;
	volatile int32_t t114 = INT32_MAX;

    t114 = (((x489/x490)>x491)+x492);

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x497 = 7884U;
	int8_t x498 = INT8_MIN;
	uint64_t x499 = UINT64_MAX;
	int16_t x500 = -1;
	volatile int32_t t115 = -1262;

    t115 = (((x497/x498)>x499)+x500);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x501 = 964;
	uint16_t x502 = UINT16_MAX;
	static int16_t x504 = INT16_MIN;
	volatile int32_t t116 = -525147;

    t116 = (((x501/x502)>x503)+x504);

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x505 = 37U;
	static uint64_t x506 = 1823LLU;
	volatile uint32_t x507 = 53074U;

    t117 = (((x505/x506)>x507)+x508);

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x509 = 6993U;
	static uint32_t x510 = UINT32_MAX;
	static int16_t x511 = 0;
	int64_t x512 = 485921888LL;
	volatile int64_t t118 = 4731082LL;

    t118 = (((x509/x510)>x511)+x512);

    if (t118 != 485921888LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x513 = 6U;
	int8_t x514 = -14;
	int64_t x516 = -1LL;
	int64_t t119 = -131720877032LL;

    t119 = (((x513/x514)>x515)+x516);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x521 = 0U;
	int32_t x522 = INT32_MIN;
	int32_t x523 = INT32_MIN;
	uint32_t t120 = 4297U;

    t120 = (((x521/x522)>x523)+x524);

    if (t120 != 4423236U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x525 = INT64_MAX;
	volatile uint32_t x526 = 1U;
	volatile uint16_t x527 = 23322U;
	int64_t x528 = INT64_MIN;
	volatile int64_t t121 = 124990LL;

    t121 = (((x525/x526)>x527)+x528);

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x529 = 977118860U;
	uint64_t x530 = 62614536781LLU;
	int64_t x531 = INT64_MIN;
	volatile uint64_t t122 = 273064863883918871LLU;

    t122 = (((x529/x530)>x531)+x532);

    if (t122 != 120946153LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x533 = UINT16_MAX;
	int32_t x534 = 461324;
	int16_t x535 = -1;
	volatile int32_t t123 = -590919369;

    t123 = (((x533/x534)>x535)+x536);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x537 = UINT16_MAX;
	static int32_t x538 = INT32_MAX;
	int64_t x539 = INT64_MIN;
	int32_t x540 = INT32_MIN;
	static volatile int32_t t124 = -291805156;

    t124 = (((x537/x538)>x539)+x540);

    if (t124 != -2147483647) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x542 = -1;
	uint16_t x543 = 121U;
	int16_t x544 = INT16_MIN;
	volatile int32_t t125 = -6543634;

    t125 = (((x541/x542)>x543)+x544);

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x545 = 48;
	uint16_t x546 = 1089U;
	static uint8_t x547 = 120U;
	volatile int32_t x548 = INT32_MIN;
	static volatile int32_t t126 = INT32_MIN;

    t126 = (((x545/x546)>x547)+x548);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x553 = -1LL;
	uint64_t x554 = 1880268769LLU;
	int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MIN;

    t127 = (((x553/x554)>x555)+x556);

    if (t127 != -2147483647) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x557 = -99105005;
	int32_t x558 = -1;
	int16_t x559 = -1;
	volatile int32_t x560 = -1361;

    t128 = (((x557/x558)>x559)+x560);

    if (t128 != -1360) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x562 = 1U;
	static int8_t x563 = -1;
	int16_t x564 = INT16_MIN;
	int32_t t129 = 66568104;

    t129 = (((x561/x562)>x563)+x564);

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x565 = 58;
	static int8_t x566 = INT8_MAX;
	int16_t x568 = INT16_MIN;

    t130 = (((x565/x566)>x567)+x568);

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x571 = -129637528;
	static int64_t x572 = -1LL;
	int64_t t131 = -136777882LL;

    t131 = (((x569/x570)>x571)+x572);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x574 = INT8_MAX;
	int8_t x575 = INT8_MIN;
	uint64_t x576 = 689LLU;
	uint64_t t132 = 1LLU;

    t132 = (((x573/x574)>x575)+x576);

    if (t132 != 689LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x577 = 1U;
	int64_t x578 = INT64_MIN;
	uint8_t x579 = 1U;

    t133 = (((x577/x578)>x579)+x580);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x581 = 3435;
	int64_t x582 = 28819114978LL;
	uint8_t x583 = 14U;
	int8_t x584 = -1;
	static volatile int32_t t134 = -34087;

    t134 = (((x581/x582)>x583)+x584);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x586 = INT16_MIN;
	int32_t x587 = -24096713;
	static int8_t x588 = -1;

    t135 = (((x585/x586)>x587)+x588);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x589 = INT32_MIN;
	int64_t x590 = INT64_MIN;
	uint8_t x591 = 1U;
	static volatile uint64_t t136 = UINT64_MAX;

    t136 = (((x589/x590)>x591)+x592);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x597 = 93507LL;
	static volatile uint32_t x598 = 407U;
	int32_t x599 = INT32_MIN;
	int64_t x600 = 27602103280621LL;
	volatile int64_t t137 = -864853302140064712LL;

    t137 = (((x597/x598)>x599)+x600);

    if (t137 != 27602103280622LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x601 = INT16_MIN;
	static uint64_t x602 = 46LLU;
	int8_t x603 = -1;
	volatile int32_t x604 = 1;
	static volatile int32_t t138 = 21975390;

    t138 = (((x601/x602)>x603)+x604);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x605 = INT32_MIN;
	int32_t x606 = INT32_MIN;
	uint8_t x607 = 115U;
	int8_t x608 = INT8_MAX;

    t139 = (((x605/x606)>x607)+x608);

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x609 = INT16_MAX;
	int32_t x611 = INT32_MIN;
	int8_t x612 = -1;

    t140 = (((x609/x610)>x611)+x612);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x613 = 153866284U;
	int8_t x614 = -1;
	uint32_t x615 = 6383473U;
	int32_t x616 = -1;
	int32_t t141 = 2318;

    t141 = (((x613/x614)>x615)+x616);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x617 = 2;
	int64_t x619 = -109440LL;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t142 = -308589462;

    t142 = (((x617/x618)>x619)+x620);

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x621 = INT8_MAX;
	int8_t x622 = -1;
	int16_t x624 = 1285;

    t143 = (((x621/x622)>x623)+x624);

    if (t143 != 1286) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x625 = UINT16_MAX;
	int32_t x626 = -2564911;
	int32_t x627 = INT32_MIN;
	static int16_t x628 = INT16_MIN;
	volatile int32_t t144 = -860;

    t144 = (((x625/x626)>x627)+x628);

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x629 = 24U;
	volatile uint16_t x630 = 2437U;
	int32_t x631 = -3884028;
	int64_t x632 = INT64_MIN;

    t145 = (((x629/x630)>x631)+x632);

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x633 = INT32_MIN;
	int64_t x634 = -90LL;
	int8_t x635 = INT8_MIN;
	volatile int32_t t146 = 55612;

    t146 = (((x633/x634)>x635)+x636);

    if (t146 != 32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x637 = -1LL;
	static int16_t x638 = -10;
	int64_t x639 = INT64_MAX;
	int8_t x640 = INT8_MIN;

    t147 = (((x637/x638)>x639)+x640);

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x641 = 115382574U;
	int8_t x642 = -44;
	static uint64_t x643 = 1LLU;
	volatile int32_t x644 = 45;
	volatile int32_t t148 = 2;

    t148 = (((x641/x642)>x643)+x644);

    if (t148 != 45) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x645 = INT16_MIN;
	int32_t x648 = -249334763;

    t149 = (((x645/x646)>x647)+x648);

    if (t149 != -249334762) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x649 = 1;
	static volatile int32_t x650 = 352505;
	uint8_t x651 = UINT8_MAX;
	int32_t t150 = -1;

    t150 = (((x649/x650)>x651)+x652);

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x654 = INT64_MIN;
	int16_t x655 = INT16_MIN;
	int64_t t151 = -250044LL;

    t151 = (((x653/x654)>x655)+x656);

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x657 = INT32_MAX;
	uint32_t x658 = 14487813U;
	volatile int32_t x659 = -1;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t152 = -635293;

    t152 = (((x657/x658)>x659)+x660);

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x661 = INT64_MAX;
	int8_t x662 = -1;
	int64_t x663 = INT64_MAX;
	int8_t x664 = INT8_MIN;
	int32_t t153 = 7;

    t153 = (((x661/x662)>x663)+x664);

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x665 = INT64_MIN;
	uint32_t x666 = 31U;
	int32_t x667 = INT32_MIN;
	static volatile int32_t t154 = -114914167;

    t154 = (((x665/x666)>x667)+x668);

    if (t154 != -17) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x669 = INT8_MIN;
	static uint64_t x670 = UINT64_MAX;
	int8_t x671 = 4;

    t155 = (((x669/x670)>x671)+x672);

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x673 = INT32_MIN;
	uint8_t x674 = 4U;
	static volatile int16_t x675 = INT16_MAX;
	static int64_t x676 = INT64_MIN;
	static int64_t t156 = INT64_MIN;

    t156 = (((x673/x674)>x675)+x676);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x677 = UINT16_MAX;
	int8_t x678 = INT8_MIN;
	static volatile int64_t x679 = -1LL;
	static int32_t t157 = 2911122;

    t157 = (((x677/x678)>x679)+x680);

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x681 = -1559868470291717367LL;
	volatile int64_t x682 = INT64_MIN;
	int8_t x683 = -1;
	static uint8_t x684 = 114U;
	int32_t t158 = -8;

    t158 = (((x681/x682)>x683)+x684);

    if (t158 != 115) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x685 = UINT64_MAX;
	uint16_t x686 = UINT16_MAX;
	int64_t x687 = 0LL;
	volatile uint32_t x688 = UINT32_MAX;
	volatile uint32_t t159 = 96914725U;

    t159 = (((x685/x686)>x687)+x688);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x690 = 246446755LLU;
	volatile uint32_t x691 = 14346U;
	int32_t x692 = INT32_MIN;
	volatile int32_t t160 = INT32_MIN;

    t160 = (((x689/x690)>x691)+x692);

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x693 = -217134LL;
	volatile uint16_t x694 = 398U;
	int8_t x695 = INT8_MIN;
	volatile int32_t t161 = 5706157;

    t161 = (((x693/x694)>x695)+x696);

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x702 = INT16_MIN;
	volatile uint16_t x703 = 10U;
	int64_t x704 = 1980LL;
	volatile int64_t t162 = -474LL;

    t162 = (((x701/x702)>x703)+x704);

    if (t162 != 1980LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x706 = UINT32_MAX;
	int8_t x708 = INT8_MIN;
	int32_t t163 = -1996569;

    t163 = (((x705/x706)>x707)+x708);

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x711 = INT16_MAX;
	int16_t x712 = -60;

    t164 = (((x709/x710)>x711)+x712);

    if (t164 != -60) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x713 = INT8_MIN;
	static volatile int32_t x714 = 490817;
	int64_t x715 = INT64_MIN;
	int32_t x716 = INT32_MIN;
	static int32_t t165 = -399904;

    t165 = (((x713/x714)>x715)+x716);

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x717 = INT64_MIN;
	volatile int16_t x719 = INT16_MAX;
	int8_t x720 = -1;

    t166 = (((x717/x718)>x719)+x720);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x722 = -27;
	int64_t x723 = INT64_MIN;
	int16_t x724 = INT16_MIN;

    t167 = (((x721/x722)>x723)+x724);

    if (t167 != -32767) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x725 = 6390699892LLU;
	volatile int16_t x726 = -1;
	int32_t x727 = -1;
	int32_t x728 = -1;

    t168 = (((x725/x726)>x727)+x728);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x729 = UINT32_MAX;
	int32_t x731 = -448117;
	volatile int64_t t169 = -464LL;

    t169 = (((x729/x730)>x731)+x732);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x733 = UINT64_MAX;
	int64_t x734 = -1LL;
	uint64_t x736 = UINT64_MAX;
	static uint64_t t170 = UINT64_MAX;

    t170 = (((x733/x734)>x735)+x736);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x737 = -1;
	uint8_t x738 = 39U;
	uint64_t x739 = 25817832191LLU;
	int64_t t171 = INT64_MIN;

    t171 = (((x737/x738)>x739)+x740);

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x746 = 9982LL;
	int64_t x747 = INT64_MAX;
	int64_t x748 = -1LL;
	volatile int64_t t172 = -172LL;

    t172 = (((x745/x746)>x747)+x748);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x749 = 6U;
	int32_t x750 = -1763083;
	int16_t x751 = INT16_MIN;
	int16_t x752 = INT16_MAX;
	static int32_t t173 = 193104;

    t173 = (((x749/x750)>x751)+x752);

    if (t173 != 32768) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x753 = INT32_MAX;
	volatile uint8_t x756 = 6U;
	int32_t t174 = 0;

    t174 = (((x753/x754)>x755)+x756);

    if (t174 != 7) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x757 = 1U;
	uint16_t x758 = 33U;
	int64_t x759 = INT64_MAX;
	static uint64_t x760 = UINT64_MAX;
	uint64_t t175 = UINT64_MAX;

    t175 = (((x757/x758)>x759)+x760);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x761 = -9263;
	uint32_t x762 = 262182577U;
	static int8_t x763 = -1;
	uint64_t x764 = 17757118282753LLU;
	volatile uint64_t t176 = 286882488280LLU;

    t176 = (((x761/x762)>x763)+x764);

    if (t176 != 17757118282753LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x771 = INT16_MAX;
	int64_t x772 = -933042533289850LL;

    t177 = (((x769/x770)>x771)+x772);

    if (t177 != -933042533289850LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x773 = -1667996;
	int64_t x774 = INT64_MAX;
	volatile int32_t x775 = INT32_MAX;
	int8_t x776 = -50;
	int32_t t178 = -31659;

    t178 = (((x773/x774)>x775)+x776);

    if (t178 != -50) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x781 = UINT64_MAX;
	static int64_t x782 = -3015476590LL;
	int16_t x783 = INT16_MIN;
	int8_t x784 = INT8_MIN;
	static volatile int32_t t179 = -28558929;

    t179 = (((x781/x782)>x783)+x784);

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x785 = INT16_MIN;
	int32_t x786 = -1;
	uint8_t x788 = UINT8_MAX;
	volatile int32_t t180 = -13012;

    t180 = (((x785/x786)>x787)+x788);

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x789 = -1;

    t181 = (((x789/x790)>x791)+x792);

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x797 = UINT8_MAX;
	volatile uint64_t x798 = 9836922583LLU;
	int16_t x799 = 947;
	static volatile int64_t t182 = 498526284525486709LL;

    t182 = (((x797/x798)>x799)+x800);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x801 = 6U;
	int16_t x802 = INT16_MIN;
	int16_t x804 = INT16_MAX;
	int32_t t183 = -14;

    t183 = (((x801/x802)>x803)+x804);

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x805 = -47;
	uint32_t x806 = 326U;
	int8_t x808 = 3;
	int32_t t184 = -1;

    t184 = (((x805/x806)>x807)+x808);

    if (t184 != 4) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x810 = INT32_MIN;
	uint64_t x811 = 833867844LLU;
	uint32_t x812 = 7U;

    t185 = (((x809/x810)>x811)+x812);

    if (t185 != 7U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x814 = INT8_MAX;
	uint32_t x815 = 37U;
	volatile uint8_t x816 = 15U;
	volatile int32_t t186 = 31838;

    t186 = (((x813/x814)>x815)+x816);

    if (t186 != 15) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x817 = 47839528LLU;
	volatile int32_t x819 = INT32_MIN;
	volatile int32_t t187 = -1;

    t187 = (((x817/x818)>x819)+x820);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x823 = INT16_MIN;
	volatile int32_t t188 = 95;

    t188 = (((x821/x822)>x823)+x824);

    if (t188 != -6553) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x825 = -5;
	int8_t x828 = -1;
	volatile int32_t t189 = -1;

    t189 = (((x825/x826)>x827)+x828);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x829 = 30887U;
	int16_t x830 = INT16_MIN;
	static volatile uint32_t x832 = 653525U;
	static uint32_t t190 = 29496U;

    t190 = (((x829/x830)>x831)+x832);

    if (t190 != 653525U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x833 = 407934078908962LLU;
	int64_t x834 = -29547672LL;
	static volatile uint8_t x835 = UINT8_MAX;
	int32_t x836 = INT32_MIN;
	int32_t t191 = INT32_MIN;

    t191 = (((x833/x834)>x835)+x836);

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x837 = -1;
	static uint64_t x839 = 2284LLU;
	static int16_t x840 = -6802;

    t192 = (((x837/x838)>x839)+x840);

    if (t192 != -6802) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x841 = -1;
	static uint8_t x842 = 2U;
	int32_t x843 = -1;
	int64_t x844 = INT64_MIN;
	int64_t t193 = -3LL;

    t193 = (((x841/x842)>x843)+x844);

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x845 = INT64_MAX;
	int32_t x846 = INT32_MIN;
	int32_t x847 = 38;
	int32_t t194 = INT32_MAX;

    t194 = (((x845/x846)>x847)+x848);

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x850 = -25LL;
	int8_t x851 = INT8_MIN;
	int64_t x852 = INT64_MIN;
	static int64_t t195 = INT64_MIN;

    t195 = (((x849/x850)>x851)+x852);

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x853 = INT8_MAX;
	volatile int16_t x854 = INT16_MAX;
	uint16_t x855 = 1U;
	int64_t x856 = 19326490816LL;
	int64_t t196 = -92LL;

    t196 = (((x853/x854)>x855)+x856);

    if (t196 != 19326490816LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x857 = -599139494900194LL;
	uint64_t x858 = 2650496LLU;
	static int16_t x860 = INT16_MIN;
	volatile int32_t t197 = 183;

    t197 = (((x857/x858)>x859)+x860);

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x865 = INT16_MIN;
	uint64_t x866 = 1913540616987LLU;
	uint32_t x867 = 424886U;
	static uint32_t x868 = 3840881U;
	volatile uint32_t t198 = 14165U;

    t198 = (((x865/x866)>x867)+x868);

    if (t198 != 3840882U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x869 = -1;
	uint8_t x871 = UINT8_MAX;
	uint16_t x872 = UINT16_MAX;

    t199 = (((x869/x870)>x871)+x872);

    if (t199 != 65535) { NG(); } else { ; }
	
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

