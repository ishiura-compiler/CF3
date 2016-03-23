
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

int32_t x2 = INT32_MIN;
uint32_t x3 = 16U;
volatile int32_t t1 = -15;
volatile int32_t t2 = -477608791;
static int32_t x13 = INT32_MAX;
uint8_t x15 = UINT8_MAX;
volatile int16_t x16 = 2018;
int64_t x23 = INT64_MAX;
int8_t x34 = INT8_MIN;
int16_t x37 = -14;
volatile int32_t t11 = 2;
uint32_t x56 = UINT32_MAX;
int32_t x58 = INT32_MIN;
int32_t x60 = INT32_MIN;
int8_t x63 = 1;
uint32_t x74 = 329317631U;
uint16_t x75 = 64U;
int8_t x81 = -1;
uint16_t x97 = UINT16_MAX;
uint32_t x101 = 96722U;
int16_t x103 = -1;
volatile int32_t x104 = -1;
int32_t t25 = -33571;
uint32_t x111 = 3U;
static int16_t x116 = INT16_MIN;
int32_t t27 = 84165154;
uint64_t x118 = 19576960065226LLU;
static int8_t x120 = 6;
volatile int8_t x135 = -51;
int32_t t31 = 1;
static int32_t x142 = INT32_MIN;
volatile int32_t t33 = 384488;
static int16_t x157 = INT16_MIN;
volatile int32_t t36 = 4056;
static int64_t x171 = -10718LL;
static uint64_t x172 = 135110LLU;
int64_t x174 = INT64_MIN;
int32_t x175 = 18;
uint8_t x181 = UINT8_MAX;
uint16_t x213 = UINT16_MAX;
volatile int64_t x215 = -812224966791832LL;
int32_t t50 = -406100565;
int16_t x222 = 1;
volatile int32_t x226 = INT32_MIN;
int8_t x227 = 7;
int64_t x235 = 476473012540169LL;
volatile int32_t t54 = -3;
volatile int32_t t55 = -13828;
static volatile int32_t t56 = 748281687;
uint16_t x246 = 728U;
static uint32_t x248 = 630845U;
volatile uint64_t x257 = UINT64_MAX;
int16_t x265 = INT16_MAX;
int64_t x268 = -72LL;
static uint8_t x272 = 7U;
volatile uint64_t x273 = 48882LLU;
int8_t x279 = -1;
volatile int16_t x286 = -3;
uint32_t x287 = 7U;
uint64_t x288 = UINT64_MAX;
volatile int64_t x289 = INT64_MIN;
static int16_t x296 = INT16_MAX;
static uint8_t x299 = 2U;
volatile int64_t x300 = -237270773410LL;
int32_t x301 = 1666;
uint8_t x316 = 124U;
int8_t x317 = INT8_MIN;
uint32_t x341 = 926816U;
int32_t x346 = 1;
int32_t t80 = -3158510;
int32_t x350 = -173181;
int16_t x354 = 15390;
int32_t x358 = -94;
volatile int32_t t83 = -1;
int16_t x370 = 4661;
static volatile int32_t t86 = 102218;
int64_t x378 = -1LL;
int64_t x380 = INT64_MIN;
static int16_t x381 = -1;
uint8_t x394 = UINT8_MAX;
volatile int32_t x397 = INT32_MIN;
int32_t x398 = INT32_MIN;
uint64_t x420 = 48204712054422LLU;
int32_t x421 = -1;
int64_t x429 = INT64_MIN;
uint64_t x434 = 23173200480056LLU;
volatile int8_t x435 = INT8_MIN;
int64_t x439 = INT64_MIN;
volatile int64_t x440 = INT64_MAX;
uint64_t x446 = 54681664912656669LLU;
int64_t x451 = -3358LL;
int32_t x467 = -2675;
int32_t t108 = -451;
int64_t x483 = -1LL;
int32_t x484 = INT32_MIN;
uint64_t x488 = UINT64_MAX;
int32_t x489 = INT32_MIN;
uint64_t x494 = UINT64_MAX;
int16_t x500 = INT16_MAX;
uint8_t x504 = 3U;
int32_t t118 = -3646;
int64_t x520 = INT64_MAX;
int64_t x529 = 12077403085LL;
int16_t x530 = INT16_MIN;
volatile uint64_t x531 = 53850LLU;
static int32_t x534 = INT32_MIN;
int32_t x535 = 488603616;
int32_t t121 = 14063127;
uint16_t x545 = 1661U;
int8_t x554 = INT8_MIN;
int32_t t126 = 1;
static int32_t x557 = INT32_MIN;
int32_t x558 = -1;
uint16_t x560 = 6778U;
int32_t x561 = -2359;
static volatile int16_t x565 = 0;
int16_t x568 = -1;
int8_t x569 = INT8_MAX;
int32_t t132 = 1;
int16_t x581 = INT16_MIN;
static int8_t x584 = INT8_MAX;
volatile int32_t t137 = -93072058;
int16_t x606 = INT16_MAX;
int32_t x613 = -1;
int64_t x618 = -1LL;
volatile int32_t t141 = -41260990;
int16_t x621 = INT16_MIN;
int16_t x622 = -1;
static uint64_t x634 = UINT64_MAX;
int16_t x639 = INT16_MIN;
int16_t x645 = INT16_MIN;
uint16_t x650 = 1U;
int16_t x656 = INT16_MIN;
int64_t x657 = 3628LL;
int32_t x668 = INT32_MIN;
uint32_t x669 = UINT32_MAX;
int8_t x671 = INT8_MIN;
volatile int32_t t153 = 0;
int8_t x676 = -1;
static int16_t x678 = 1;
int16_t x679 = INT16_MIN;
int64_t x686 = -1LL;
uint8_t x687 = 16U;
int64_t x699 = -1LL;
int32_t t159 = 31198012;
int32_t x712 = -264992666;
uint32_t x718 = UINT32_MAX;
static volatile uint64_t x719 = 62777LLU;
int64_t x720 = 136636747896434LL;
int8_t x727 = INT8_MAX;
int32_t t167 = -150865863;
static int16_t x733 = INT16_MAX;
volatile uint8_t x734 = UINT8_MAX;
int8_t x735 = INT8_MIN;
volatile int8_t x739 = INT8_MAX;
volatile uint32_t x741 = 800U;
int8_t x742 = INT8_MAX;
volatile int32_t x744 = INT32_MAX;
volatile int32_t t170 = 0;
volatile int32_t x746 = 1985;
int16_t x749 = INT16_MIN;
uint32_t x750 = 0U;
static int32_t t172 = 27077;
static volatile int64_t x761 = INT64_MIN;
volatile uint8_t x765 = UINT8_MAX;
int32_t x771 = -1;
volatile uint8_t x776 = UINT8_MAX;
volatile int64_t x786 = INT64_MAX;
volatile int32_t x787 = -1;
int32_t x788 = INT32_MIN;
volatile int64_t x790 = INT64_MIN;
uint16_t x793 = 1483U;
int32_t x795 = -102;
static volatile int8_t x802 = -2;
int8_t x805 = -1;
volatile int8_t x808 = INT8_MIN;
uint16_t x814 = UINT16_MAX;
static volatile int64_t x815 = -1LL;
volatile int32_t t186 = -76262040;
int32_t x818 = -7619;
volatile int32_t t187 = 4;
static int8_t x821 = 6;
volatile int32_t t190 = 56597;
static volatile int8_t x833 = INT8_MIN;
uint16_t x834 = UINT16_MAX;
volatile int32_t t191 = -17873305;
int8_t x838 = INT8_MAX;
int64_t x862 = -1LL;
static volatile int32_t x868 = 88;
static volatile int32_t t196 = 1;
uint64_t x877 = 6665987LLU;


void f0(void) {
    	int32_t x1 = -948749;
	volatile int8_t x4 = INT8_MAX;
	static int32_t t0 = -226465;

    t0 = (((x1^x2)+x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 97U;
	static int32_t x6 = 43;
	volatile int64_t x7 = -8361LL;
	uint16_t x8 = 211U;

    t1 = (((x5^x6)+x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int64_t x10 = 1710426453367LL;
	static uint64_t x11 = 4657LLU;
	static volatile int8_t x12 = -1;

    t2 = (((x9^x10)+x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x14 = INT16_MIN;
	static int32_t t3 = -243;

    t3 = (((x13^x14)+x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 11U;
	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -15193662;

    t4 = (((x17^x18)+x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MAX;
	int8_t x24 = -1;
	static int32_t t5 = 608106;

    t5 = (((x21^x22)+x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	static volatile int8_t x28 = -3;
	int32_t t6 = 0;

    t6 = (((x25^x26)+x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int8_t x30 = -4;
	volatile int8_t x31 = INT8_MIN;
	static volatile int64_t x32 = -1LL;
	volatile int32_t t7 = 400;

    t7 = (((x29^x30)+x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	volatile int32_t x35 = -1;
	static uint64_t x36 = 1223LLU;
	int32_t t8 = 1;

    t8 = (((x33^x34)+x35)<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x38 = 0;
	uint16_t x39 = 871U;
	uint8_t x40 = 73U;
	int32_t t9 = 36;

    t9 = (((x37^x38)+x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int8_t x42 = -9;
	uint8_t x43 = 50U;
	volatile int64_t x44 = 1107476207212LL;
	int32_t t10 = -738;

    t10 = (((x41^x42)+x43)<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MIN;
	static int32_t x48 = INT32_MAX;

    t11 = (((x45^x46)+x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 0U;
	int64_t x54 = -45LL;
	uint64_t x55 = 0LLU;
	volatile int32_t t12 = -30473544;

    t12 = (((x53^x54)+x55)<=x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MAX;
	int64_t x59 = -7787995LL;
	volatile int32_t t13 = -5638;

    t13 = (((x57^x58)+x59)<=x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 23U;
	int32_t x62 = -227999;
	int64_t x64 = 1709LL;
	volatile int32_t t14 = 123;

    t14 = (((x61^x62)+x63)<=x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 1;
	static uint32_t x66 = UINT32_MAX;
	static int64_t x67 = -1LL;
	static int64_t x68 = INT64_MIN;
	int32_t t15 = 1704;

    t15 = (((x65^x66)+x67)<=x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t16 = 5909704;

    t16 = (((x69^x70)+x71)<=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	int8_t x76 = INT8_MAX;
	static int32_t t17 = 6443664;

    t17 = (((x73^x74)+x75)<=x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = 1U;
	int16_t x78 = INT16_MAX;
	int64_t x79 = INT64_MIN;
	volatile int8_t x80 = INT8_MIN;
	static volatile int32_t t18 = -9;

    t18 = (((x77^x78)+x79)<=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x82 = 5;
	uint8_t x83 = 22U;
	static uint32_t x84 = 1287374U;
	int32_t t19 = 0;

    t19 = (((x81^x82)+x83)<=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = UINT64_MAX;
	int32_t x86 = -962598;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = 22U;
	volatile int32_t t20 = -5;

    t20 = (((x85^x86)+x87)<=x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	int32_t t21 = 19135;

    t21 = (((x89^x90)+x91)<=x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 108177997857LLU;
	static int64_t x94 = INT64_MIN;
	uint32_t x95 = 337346U;
	static int32_t x96 = INT32_MIN;
	int32_t t22 = 5003;

    t22 = (((x93^x94)+x95)<=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x98 = -20LL;
	static int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	static volatile int32_t t23 = -2;

    t23 = (((x97^x98)+x99)<=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x102 = 3504803LLU;
	volatile int32_t t24 = -2;

    t24 = (((x101^x102)+x103)<=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x105 = INT32_MAX;
	int64_t x106 = INT64_MIN;
	int16_t x107 = 27;
	static int64_t x108 = INT64_MIN;

    t25 = (((x105^x106)+x107)<=x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x109 = 104U;
	uint16_t x110 = UINT16_MAX;
	int32_t x112 = INT32_MAX;
	int32_t t26 = -41352513;

    t26 = (((x109^x110)+x111)<=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MAX;
	int64_t x114 = -17082260519LL;
	uint8_t x115 = UINT8_MAX;

    t27 = (((x113^x114)+x115)<=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -20;
	static int64_t x119 = -7LL;
	static int32_t t28 = 4094662;

    t28 = (((x117^x118)+x119)<=x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x121 = 28143U;
	int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MAX;
	volatile uint8_t x124 = 1U;
	static volatile int32_t t29 = 4;

    t29 = (((x121^x122)+x123)<=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 12294U;
	static int64_t x130 = -62804475LL;
	int8_t x131 = INT8_MAX;
	int64_t x132 = 185118627LL;
	volatile int32_t t30 = -1294706;

    t30 = (((x129^x130)+x131)<=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x133 = 2239;
	uint8_t x134 = UINT8_MAX;
	static int32_t x136 = INT32_MAX;

    t31 = (((x133^x134)+x135)<=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = INT8_MAX;
	int8_t x143 = INT8_MAX;
	uint8_t x144 = 6U;
	volatile int32_t t32 = 788015376;

    t32 = (((x141^x142)+x143)<=x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x145 = 0U;
	int8_t x146 = INT8_MAX;
	volatile int16_t x147 = INT16_MIN;
	int32_t x148 = -1;

    t33 = (((x145^x146)+x147)<=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = -1;
	uint16_t x150 = 3050U;
	int16_t x151 = -116;
	int64_t x152 = INT64_MIN;
	volatile int32_t t34 = 478;

    t34 = (((x149^x150)+x151)<=x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	int16_t x155 = -1;
	uint16_t x156 = 0U;
	int32_t t35 = -56534;

    t35 = (((x153^x154)+x155)<=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x158 = -1;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 119U;

    t36 = (((x157^x158)+x159)<=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x161 = 6U;
	static int8_t x162 = INT8_MIN;
	static volatile int8_t x163 = INT8_MAX;
	uint8_t x164 = UINT8_MAX;
	int32_t t37 = -27;

    t37 = (((x161^x162)+x163)<=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -55;
	static int32_t x166 = INT32_MIN;
	volatile int16_t x167 = 1;
	uint32_t x168 = 967877U;
	int32_t t38 = -853571;

    t38 = (((x165^x166)+x167)<=x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MAX;
	volatile int32_t t39 = 92604235;

    t39 = (((x169^x170)+x171)<=x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = 295271LL;
	uint8_t x176 = 0U;
	volatile int32_t t40 = -1;

    t40 = (((x173^x174)+x175)<=x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x177 = -410272653462LL;
	int16_t x178 = INT16_MIN;
	volatile int8_t x179 = 3;
	uint8_t x180 = UINT8_MAX;
	static volatile int32_t t41 = 520790715;

    t41 = (((x177^x178)+x179)<=x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MAX;
	uint32_t x184 = 167587U;
	volatile int32_t t42 = 24;

    t42 = (((x181^x182)+x183)<=x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x189 = INT32_MAX;
	uint8_t x190 = UINT8_MAX;
	int8_t x191 = INT8_MAX;
	int32_t x192 = 58;
	static volatile int32_t t43 = -36327;

    t43 = (((x189^x190)+x191)<=x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = 9552212LL;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = 75870U;
	static int32_t x196 = -1;
	int32_t t44 = -10066;

    t44 = (((x193^x194)+x195)<=x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x197 = UINT64_MAX;
	static int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	static uint8_t x200 = 6U;
	volatile int32_t t45 = 2;

    t45 = (((x197^x198)+x199)<=x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x201 = INT32_MAX;
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = -1;
	uint32_t x204 = UINT32_MAX;
	int32_t t46 = 7;

    t46 = (((x201^x202)+x203)<=x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x205 = INT16_MIN;
	volatile int64_t x206 = INT64_MAX;
	volatile int8_t x207 = INT8_MAX;
	int8_t x208 = -1;
	volatile int32_t t47 = -217154408;

    t47 = (((x205^x206)+x207)<=x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = -1;
	int16_t x210 = INT16_MIN;
	static int16_t x211 = -126;
	int16_t x212 = INT16_MIN;
	volatile int32_t t48 = -42568;

    t48 = (((x209^x210)+x211)<=x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x214 = UINT32_MAX;
	int16_t x216 = -3168;
	int32_t t49 = 536877430;

    t49 = (((x213^x214)+x215)<=x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x217 = UINT32_MAX;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = 31;
	int64_t x220 = INT64_MAX;

    t50 = (((x217^x218)+x219)<=x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x221 = 2347579U;
	volatile int16_t x223 = INT16_MIN;
	uint32_t x224 = UINT32_MAX;
	static int32_t t51 = 262897;

    t51 = (((x221^x222)+x223)<=x224);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	int16_t x228 = -1;
	volatile int32_t t52 = -820;

    t52 = (((x225^x226)+x227)<=x228);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x229 = 91U;
	int32_t x230 = -73;
	int64_t x231 = INT64_MAX;
	volatile int16_t x232 = INT16_MAX;
	static volatile int32_t t53 = -1;

    t53 = (((x229^x230)+x231)<=x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = 0;
	static int64_t x234 = -79571LL;
	int16_t x236 = INT16_MAX;

    t54 = (((x233^x234)+x235)<=x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x237 = 1043U;
	int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MIN;

    t55 = (((x237^x238)+x239)<=x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x241 = -1;
	static uint8_t x242 = 79U;
	static volatile uint8_t x243 = UINT8_MAX;
	uint8_t x244 = UINT8_MAX;

    t56 = (((x241^x242)+x243)<=x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x245 = -369450589327961889LL;
	int8_t x247 = -1;
	volatile int32_t t57 = -12309;

    t57 = (((x245^x246)+x247)<=x248);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x249 = INT8_MAX;
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 15705U;
	int32_t x252 = INT32_MIN;
	volatile int32_t t58 = -2;

    t58 = (((x249^x250)+x251)<=x252);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x253 = -1;
	uint16_t x254 = 28U;
	uint32_t x255 = 10073U;
	uint64_t x256 = 89686613549047788LLU;
	int32_t t59 = -25927357;

    t59 = (((x253^x254)+x255)<=x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x258 = 2;
	int8_t x259 = -10;
	uint16_t x260 = 6U;
	int32_t t60 = -28958847;

    t60 = (((x257^x258)+x259)<=x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x261 = 13U;
	static int64_t x262 = 256621840575LL;
	uint32_t x263 = 120U;
	volatile int16_t x264 = -1;
	volatile int32_t t61 = -94168096;

    t61 = (((x261^x262)+x263)<=x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x266 = 23717U;
	volatile int64_t x267 = -1LL;
	static int32_t t62 = 26;

    t62 = (((x265^x266)+x267)<=x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x269 = UINT8_MAX;
	static int32_t x270 = -73705055;
	int16_t x271 = INT16_MAX;
	int32_t t63 = 19968;

    t63 = (((x269^x270)+x271)<=x272);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x274 = 49591LL;
	int32_t x275 = -583;
	static uint16_t x276 = 1939U;
	volatile int32_t t64 = 99802;

    t64 = (((x273^x274)+x275)<=x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = 481LLU;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t65 = -1;

    t65 = (((x277^x278)+x279)<=x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = INT16_MIN;
	volatile int32_t t66 = 78956820;

    t66 = (((x285^x286)+x287)<=x288);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x290 = 13879731LLU;
	int8_t x291 = -1;
	uint16_t x292 = 770U;
	volatile int32_t t67 = 38105593;

    t67 = (((x289^x290)+x291)<=x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x293 = INT16_MAX;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = -1;
	int32_t t68 = 73500012;

    t68 = (((x293^x294)+x295)<=x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x297 = UINT8_MAX;
	volatile int64_t x298 = INT64_MIN;
	static int32_t t69 = -33654557;

    t69 = (((x297^x298)+x299)<=x300);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x302 = -1;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -1;
	volatile int32_t t70 = 111;

    t70 = (((x301^x302)+x303)<=x304);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x305 = 1388500LLU;
	volatile uint8_t x306 = 31U;
	volatile int64_t x307 = -5025662774225982LL;
	static volatile int8_t x308 = INT8_MAX;
	int32_t t71 = -2270549;

    t71 = (((x305^x306)+x307)<=x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MIN;
	uint64_t x311 = 2021955066LLU;
	static int16_t x312 = INT16_MIN;
	int32_t t72 = -5;

    t72 = (((x309^x310)+x311)<=x312);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x313 = INT8_MIN;
	volatile int16_t x314 = INT16_MIN;
	volatile int16_t x315 = -1;
	volatile int32_t t73 = -14877190;

    t73 = (((x313^x314)+x315)<=x316);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	volatile uint64_t x320 = 13686910929699LLU;
	static int32_t t74 = 666706477;

    t74 = (((x317^x318)+x319)<=x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x321 = 0;
	static int16_t x322 = 3;
	uint32_t x323 = UINT32_MAX;
	static uint8_t x324 = UINT8_MAX;
	static int32_t t75 = -29345494;

    t75 = (((x321^x322)+x323)<=x324);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x325 = INT8_MAX;
	static uint16_t x326 = UINT16_MAX;
	uint8_t x327 = 120U;
	int16_t x328 = 36;
	int32_t t76 = -1443367;

    t76 = (((x325^x326)+x327)<=x328);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x329 = 475U;
	int16_t x330 = INT16_MIN;
	volatile int64_t x331 = 0LL;
	uint64_t x332 = 25LLU;
	int32_t t77 = 47455;

    t77 = (((x329^x330)+x331)<=x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	static int32_t x334 = 208471;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = 69391733LL;
	int32_t t78 = -1874;

    t78 = (((x333^x334)+x335)<=x336);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x342 = INT8_MAX;
	static int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	static int32_t t79 = 95;

    t79 = (((x341^x342)+x343)<=x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x345 = 0;
	static int64_t x347 = -1LL;
	volatile int64_t x348 = INT64_MAX;

    t80 = (((x345^x346)+x347)<=x348);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x349 = UINT64_MAX;
	int64_t x351 = INT64_MIN;
	int8_t x352 = 0;
	int32_t t81 = -115;

    t81 = (((x349^x350)+x351)<=x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x353 = -1;
	static uint8_t x355 = 18U;
	int16_t x356 = 14537;
	static volatile int32_t t82 = 343928;

    t82 = (((x353^x354)+x355)<=x356);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = -1;
	int16_t x359 = INT16_MIN;
	int8_t x360 = -20;

    t83 = (((x357^x358)+x359)<=x360);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	static uint16_t x362 = UINT16_MAX;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = 1;
	int32_t t84 = -15217;

    t84 = (((x361^x362)+x363)<=x364);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x365 = -1;
	uint16_t x366 = 4712U;
	int8_t x367 = 1;
	uint8_t x368 = UINT8_MAX;
	int32_t t85 = 57175765;

    t85 = (((x365^x366)+x367)<=x368);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = -11015LL;
	static uint32_t x371 = 697590755U;
	volatile uint8_t x372 = 2U;

    t86 = (((x369^x370)+x371)<=x372);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x373 = 0;
	uint64_t x374 = 5931006971665LLU;
	uint64_t x375 = 20040LLU;
	int8_t x376 = INT8_MIN;
	static int32_t t87 = 0;

    t87 = (((x373^x374)+x375)<=x376);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x377 = 497236U;
	static int32_t x379 = -1;
	static volatile int32_t t88 = -1071280793;

    t88 = (((x377^x378)+x379)<=x380);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x382 = -87910344LL;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 522752U;
	int32_t t89 = -158000;

    t89 = (((x381^x382)+x383)<=x384);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x385 = 1U;
	static int32_t x386 = INT32_MIN;
	volatile int64_t x387 = -131869315372725LL;
	uint64_t x388 = 157856345010990697LLU;
	volatile int32_t t90 = 0;

    t90 = (((x385^x386)+x387)<=x388);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x393 = 2020470781041007LLU;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = 7820292728LLU;
	int32_t t91 = -95;

    t91 = (((x393^x394)+x395)<=x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x399 = 88U;
	uint32_t x400 = UINT32_MAX;
	int32_t t92 = -106;

    t92 = (((x397^x398)+x399)<=x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x401 = INT8_MAX;
	uint8_t x402 = UINT8_MAX;
	static uint32_t x403 = 1043244U;
	int16_t x404 = -1;
	volatile int32_t t93 = 15943702;

    t93 = (((x401^x402)+x403)<=x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x405 = INT8_MAX;
	int8_t x406 = 0;
	uint8_t x407 = 33U;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t94 = -7742012;

    t94 = (((x405^x406)+x407)<=x408);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = 0;
	static uint8_t x410 = 12U;
	static volatile int16_t x411 = -1153;
	volatile int16_t x412 = -1;
	int32_t t95 = 1;

    t95 = (((x409^x410)+x411)<=x412);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x413 = UINT16_MAX;
	static int32_t x414 = INT32_MAX;
	int32_t x415 = 31;
	volatile int64_t x416 = INT64_MIN;
	int32_t t96 = -125651;

    t96 = (((x413^x414)+x415)<=x416);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x417 = INT8_MAX;
	uint32_t x418 = UINT32_MAX;
	static uint32_t x419 = UINT32_MAX;
	int32_t t97 = 2441;

    t97 = (((x417^x418)+x419)<=x420);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x422 = UINT32_MAX;
	int64_t x423 = -4187750933232117563LL;
	int32_t x424 = -1;
	static int32_t t98 = 103;

    t98 = (((x421^x422)+x423)<=x424);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x425 = 0U;
	int8_t x426 = -1;
	int16_t x427 = -1432;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t99 = -210;

    t99 = (((x425^x426)+x427)<=x428);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x430 = 0U;
	static uint32_t x431 = 276U;
	static uint64_t x432 = 541725473539902LLU;
	volatile int32_t t100 = -7;

    t100 = (((x429^x430)+x431)<=x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x433 = -1LL;
	static volatile int32_t x436 = INT32_MIN;
	volatile int32_t t101 = -213677;

    t101 = (((x433^x434)+x435)<=x436);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x437 = UINT64_MAX;
	int16_t x438 = -2513;
	int32_t t102 = -189909;

    t102 = (((x437^x438)+x439)<=x440);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x441 = INT8_MIN;
	volatile int64_t x442 = -1LL;
	uint16_t x443 = 3215U;
	int16_t x444 = INT16_MIN;
	int32_t t103 = 0;

    t103 = (((x441^x442)+x443)<=x444);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x445 = 1601U;
	int32_t x447 = -1;
	volatile int8_t x448 = INT8_MAX;
	int32_t t104 = 1;

    t104 = (((x445^x446)+x447)<=x448);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = -1;
	int16_t x450 = INT16_MAX;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t105 = -79237632;

    t105 = (((x449^x450)+x451)<=x452);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x453 = 1;
	int32_t x454 = INT32_MAX;
	int8_t x455 = INT8_MIN;
	volatile int32_t x456 = INT32_MIN;
	int32_t t106 = -3255;

    t106 = (((x453^x454)+x455)<=x456);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x461 = INT16_MIN;
	int8_t x462 = -1;
	int64_t x463 = -1LL;
	static uint16_t x464 = 32281U;
	int32_t t107 = 241;

    t107 = (((x461^x462)+x463)<=x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x465 = -1;
	int16_t x466 = INT16_MAX;
	int64_t x468 = INT64_MIN;

    t108 = (((x465^x466)+x467)<=x468);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x473 = 12971;
	int16_t x474 = -1;
	int8_t x475 = -62;
	uint16_t x476 = 399U;
	int32_t t109 = -453;

    t109 = (((x473^x474)+x475)<=x476);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x481 = INT32_MIN;
	static int64_t x482 = -1LL;
	volatile int32_t t110 = -9;

    t110 = (((x481^x482)+x483)<=x484);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x485 = 499024LL;
	int32_t x486 = 1;
	int64_t x487 = 12021705661870189LL;
	int32_t t111 = -4;

    t111 = (((x485^x486)+x487)<=x488);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x490 = 0;
	uint64_t x491 = UINT64_MAX;
	uint32_t x492 = 5654457U;
	volatile int32_t t112 = -5;

    t112 = (((x489^x490)+x491)<=x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x493 = UINT64_MAX;
	int16_t x495 = -43;
	volatile int64_t x496 = INT64_MAX;
	volatile int32_t t113 = -114702;

    t113 = (((x493^x494)+x495)<=x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x497 = 0U;
	int8_t x498 = 0;
	static uint8_t x499 = 1U;
	volatile int32_t t114 = 169;

    t114 = (((x497^x498)+x499)<=x500);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x501 = INT8_MIN;
	static int16_t x502 = -896;
	int8_t x503 = INT8_MAX;
	int32_t t115 = 56;

    t115 = (((x501^x502)+x503)<=x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x505 = INT64_MIN;
	static int64_t x506 = INT64_MIN;
	static int8_t x507 = -1;
	uint16_t x508 = 27207U;
	volatile int32_t t116 = 99062;

    t116 = (((x505^x506)+x507)<=x508);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x509 = 114U;
	int64_t x510 = -5978LL;
	int16_t x511 = -15755;
	static uint64_t x512 = 944241674LLU;
	int32_t t117 = 373864;

    t117 = (((x509^x510)+x511)<=x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x513 = 7;
	int32_t x514 = INT32_MAX;
	int8_t x515 = -22;
	uint8_t x516 = 17U;

    t118 = (((x513^x514)+x515)<=x516);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x517 = UINT64_MAX;
	int16_t x518 = INT16_MIN;
	uint64_t x519 = UINT64_MAX;
	int32_t t119 = 109;

    t119 = (((x517^x518)+x519)<=x520);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x532 = 3657204573LLU;
	volatile int32_t t120 = 53383008;

    t120 = (((x529^x530)+x531)<=x532);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x533 = 0;
	uint32_t x536 = 5U;

    t121 = (((x533^x534)+x535)<=x536);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x537 = -1;
	static uint32_t x538 = 1382U;
	int8_t x539 = -8;
	uint16_t x540 = 57U;
	static int32_t t122 = 7668;

    t122 = (((x537^x538)+x539)<=x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = INT32_MIN;
	uint64_t x543 = 1973LLU;
	int32_t x544 = INT32_MIN;
	int32_t t123 = 1939400;

    t123 = (((x541^x542)+x543)<=x544);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MAX;
	volatile uint8_t x548 = 2U;
	static int32_t t124 = -4689;

    t124 = (((x545^x546)+x547)<=x548);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x549 = 1395313515U;
	int32_t x550 = INT32_MAX;
	int64_t x551 = 14170571LL;
	int8_t x552 = -1;
	static int32_t t125 = 1408;

    t125 = (((x549^x550)+x551)<=x552);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x553 = -1;
	int16_t x555 = 7;
	static uint8_t x556 = UINT8_MAX;

    t126 = (((x553^x554)+x555)<=x556);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x559 = INT16_MIN;
	int32_t t127 = 86496327;

    t127 = (((x557^x558)+x559)<=x560);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x562 = UINT8_MAX;
	uint64_t x563 = 1458062992845768LLU;
	int32_t x564 = 976;
	int32_t t128 = 13190078;

    t128 = (((x561^x562)+x563)<=x564);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x566 = 385695626;
	int32_t x567 = -792942;
	int32_t t129 = 14397692;

    t129 = (((x565^x566)+x567)<=x568);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x570 = -1;
	static int16_t x571 = -1;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t130 = -47560;

    t130 = (((x569^x570)+x571)<=x572);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x573 = 2033810894126939536LL;
	static int32_t x574 = -1;
	int8_t x575 = 14;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t131 = 15603346;

    t131 = (((x573^x574)+x575)<=x576);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x577 = 5101598U;
	volatile int64_t x578 = -1LL;
	static uint8_t x579 = UINT8_MAX;
	int16_t x580 = -452;

    t132 = (((x577^x578)+x579)<=x580);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x582 = 7U;
	uint8_t x583 = 17U;
	static volatile int32_t t133 = 7;

    t133 = (((x581^x582)+x583)<=x584);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x585 = -1LL;
	int32_t x586 = 118;
	static int8_t x587 = -5;
	static int16_t x588 = -1;
	int32_t t134 = 514720;

    t134 = (((x585^x586)+x587)<=x588);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x589 = INT16_MIN;
	volatile uint32_t x590 = 8149U;
	static int8_t x591 = INT8_MIN;
	int64_t x592 = -1LL;
	int32_t t135 = 417;

    t135 = (((x589^x590)+x591)<=x592);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x593 = -16;
	volatile int16_t x594 = -1;
	int64_t x595 = -2893423425417376LL;
	int64_t x596 = 3876LL;
	int32_t t136 = -692;

    t136 = (((x593^x594)+x595)<=x596);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x597 = -1;
	volatile uint16_t x598 = 0U;
	volatile uint8_t x599 = 0U;
	int8_t x600 = INT8_MIN;

    t137 = (((x597^x598)+x599)<=x600);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x605 = -633627780758LL;
	volatile int16_t x607 = 124;
	uint16_t x608 = 0U;
	volatile int32_t t138 = 6915;

    t138 = (((x605^x606)+x607)<=x608);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x609 = INT8_MIN;
	volatile int8_t x610 = -3;
	int16_t x611 = -1;
	int64_t x612 = 5LL;
	int32_t t139 = -25573138;

    t139 = (((x609^x610)+x611)<=x612);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x614 = 11369948U;
	static volatile uint8_t x615 = 0U;
	uint64_t x616 = UINT64_MAX;
	static int32_t t140 = -448567756;

    t140 = (((x613^x614)+x615)<=x616);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x617 = INT8_MIN;
	volatile uint32_t x619 = UINT32_MAX;
	uint8_t x620 = UINT8_MAX;

    t141 = (((x617^x618)+x619)<=x620);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x623 = 50377720;
	int16_t x624 = INT16_MAX;
	static int32_t t142 = 872086380;

    t142 = (((x621^x622)+x623)<=x624);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x625 = 2001;
	int8_t x626 = 0;
	static uint8_t x627 = UINT8_MAX;
	uint16_t x628 = 55U;
	int32_t t143 = -1464042;

    t143 = (((x625^x626)+x627)<=x628);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x629 = 1;
	int32_t x630 = 108852;
	int16_t x631 = -15;
	static volatile int16_t x632 = -1;
	static volatile int32_t t144 = 0;

    t144 = (((x629^x630)+x631)<=x632);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x633 = 3503023657937663LLU;
	uint16_t x635 = 7212U;
	int16_t x636 = -1;
	int32_t t145 = 9263419;

    t145 = (((x633^x634)+x635)<=x636);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x637 = 563525282435880016LL;
	uint16_t x638 = 2173U;
	int16_t x640 = -1;
	int32_t t146 = 415928840;

    t146 = (((x637^x638)+x639)<=x640);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x641 = -2;
	int32_t x642 = 1813;
	int32_t x643 = 234154;
	volatile int8_t x644 = -1;
	int32_t t147 = 3656;

    t147 = (((x641^x642)+x643)<=x644);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x646 = 8565614846620716953LLU;
	int64_t x647 = -1LL;
	int8_t x648 = -26;
	int32_t t148 = -184;

    t148 = (((x645^x646)+x647)<=x648);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x649 = -1;
	uint16_t x651 = 0U;
	uint8_t x652 = 6U;
	volatile int32_t t149 = 58;

    t149 = (((x649^x650)+x651)<=x652);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x653 = 117515781LLU;
	static int32_t x654 = -88730;
	volatile int16_t x655 = 1;
	static int32_t t150 = -230952;

    t150 = (((x653^x654)+x655)<=x656);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MIN;
	static uint8_t x660 = 0U;
	volatile int32_t t151 = -92488;

    t151 = (((x657^x658)+x659)<=x660);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x666 = -1338;
	int64_t x667 = 1LL;
	int32_t t152 = 27721683;

    t152 = (((x665^x666)+x667)<=x668);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x670 = INT64_MIN;
	static int64_t x672 = INT64_MIN;

    t153 = (((x669^x670)+x671)<=x672);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x673 = UINT64_MAX;
	uint8_t x674 = 1U;
	uint8_t x675 = 117U;
	int32_t t154 = 1;

    t154 = (((x673^x674)+x675)<=x676);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x677 = INT16_MAX;
	int64_t x680 = 0LL;
	volatile int32_t t155 = 2;

    t155 = (((x677^x678)+x679)<=x680);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x681 = 0U;
	int16_t x682 = INT16_MIN;
	volatile int16_t x683 = 4720;
	int8_t x684 = -3;
	int32_t t156 = -3528201;

    t156 = (((x681^x682)+x683)<=x684);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x685 = 121;
	volatile int32_t x688 = -19418548;
	volatile int32_t t157 = 29201431;

    t157 = (((x685^x686)+x687)<=x688);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x689 = 409261316U;
	int32_t x690 = 28058218;
	int32_t x691 = INT32_MAX;
	int16_t x692 = -227;
	int32_t t158 = 118191;

    t158 = (((x689^x690)+x691)<=x692);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x697 = 2835;
	static volatile uint16_t x698 = 5U;
	int8_t x700 = INT8_MIN;

    t159 = (((x697^x698)+x699)<=x700);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MIN;
	int64_t x703 = INT64_MIN;
	uint16_t x704 = 60U;
	int32_t t160 = -7535;

    t160 = (((x701^x702)+x703)<=x704);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = -12;
	int16_t x706 = 0;
	int64_t x707 = -1LL;
	int16_t x708 = -1;
	int32_t t161 = 3;

    t161 = (((x705^x706)+x707)<=x708);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x709 = -2;
	int16_t x710 = INT16_MAX;
	static uint64_t x711 = 5297160636LLU;
	volatile int32_t t162 = -126001;

    t162 = (((x709^x710)+x711)<=x712);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x713 = 15;
	int8_t x714 = -1;
	uint16_t x715 = UINT16_MAX;
	int64_t x716 = INT64_MAX;
	int32_t t163 = 213687312;

    t163 = (((x713^x714)+x715)<=x716);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x717 = 1U;
	int32_t t164 = 547615097;

    t164 = (((x717^x718)+x719)<=x720);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x721 = 36;
	uint32_t x722 = UINT32_MAX;
	int64_t x723 = INT64_MIN;
	static int16_t x724 = INT16_MAX;
	int32_t t165 = 127049943;

    t165 = (((x721^x722)+x723)<=x724);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x725 = INT64_MAX;
	static int16_t x726 = INT16_MAX;
	int16_t x728 = -25;
	volatile int32_t t166 = -9;

    t166 = (((x725^x726)+x727)<=x728);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x729 = INT16_MIN;
	static int8_t x730 = 40;
	static int8_t x731 = -1;
	int16_t x732 = INT16_MIN;

    t167 = (((x729^x730)+x731)<=x732);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x736 = -29613021474977209LL;
	volatile int32_t t168 = 20905338;

    t168 = (((x733^x734)+x735)<=x736);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x737 = INT32_MAX;
	int32_t x738 = INT32_MIN;
	int64_t x740 = INT64_MAX;
	int32_t t169 = -17337;

    t169 = (((x737^x738)+x739)<=x740);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x743 = 195U;

    t170 = (((x741^x742)+x743)<=x744);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x745 = UINT64_MAX;
	int64_t x747 = INT64_MIN;
	static int32_t x748 = INT32_MAX;
	int32_t t171 = 144973463;

    t171 = (((x745^x746)+x747)<=x748);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x751 = INT32_MAX;
	volatile int64_t x752 = 241222805854LL;

    t172 = (((x749^x750)+x751)<=x752);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x753 = INT8_MIN;
	volatile int16_t x754 = INT16_MIN;
	uint32_t x755 = 130899U;
	int32_t x756 = 45;
	volatile int32_t t173 = -9127;

    t173 = (((x753^x754)+x755)<=x756);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x757 = UINT16_MAX;
	uint8_t x758 = 105U;
	int64_t x759 = 2461207531231LL;
	uint64_t x760 = UINT64_MAX;
	volatile int32_t t174 = 358472318;

    t174 = (((x757^x758)+x759)<=x760);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x762 = INT16_MIN;
	volatile int16_t x763 = -376;
	static int8_t x764 = -1;
	int32_t t175 = -11;

    t175 = (((x761^x762)+x763)<=x764);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x766 = INT16_MAX;
	int64_t x767 = -128381110764647LL;
	volatile int32_t x768 = 0;
	int32_t t176 = 77048691;

    t176 = (((x765^x766)+x767)<=x768);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x769 = 118U;
	uint32_t x770 = 203726U;
	int64_t x772 = 289240741640378LL;
	volatile int32_t t177 = 158106;

    t177 = (((x769^x770)+x771)<=x772);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x773 = 5066056LLU;
	static uint8_t x774 = 18U;
	uint64_t x775 = UINT64_MAX;
	volatile int32_t t178 = -161743088;

    t178 = (((x773^x774)+x775)<=x776);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x781 = 2U;
	int8_t x782 = INT8_MAX;
	int8_t x783 = -1;
	volatile int16_t x784 = -1;
	int32_t t179 = 0;

    t179 = (((x781^x782)+x783)<=x784);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x785 = 1U;
	volatile int32_t t180 = -123477;

    t180 = (((x785^x786)+x787)<=x788);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x789 = UINT16_MAX;
	static int8_t x791 = 4;
	volatile uint16_t x792 = 10U;
	static int32_t t181 = 4;

    t181 = (((x789^x790)+x791)<=x792);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x794 = 50U;
	int64_t x796 = 6002481145275LL;
	int32_t t182 = 644959433;

    t182 = (((x793^x794)+x795)<=x796);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x797 = INT32_MIN;
	int32_t x798 = INT32_MIN;
	static int64_t x799 = 1LL;
	uint32_t x800 = 3U;
	volatile int32_t t183 = -5275;

    t183 = (((x797^x798)+x799)<=x800);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x801 = -54;
	int32_t x803 = 89407632;
	int8_t x804 = INT8_MIN;
	volatile int32_t t184 = -17347;

    t184 = (((x801^x802)+x803)<=x804);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x806 = 411758LLU;
	volatile int8_t x807 = INT8_MIN;
	static int32_t t185 = -522303;

    t185 = (((x805^x806)+x807)<=x808);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x813 = 0U;
	uint64_t x816 = UINT64_MAX;

    t186 = (((x813^x814)+x815)<=x816);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x817 = -8LL;
	int64_t x819 = -1LL;
	int64_t x820 = INT64_MIN;

    t187 = (((x817^x818)+x819)<=x820);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x822 = -172233405;
	int8_t x823 = -1;
	int32_t x824 = 17594;
	volatile int32_t t188 = -60;

    t188 = (((x821^x822)+x823)<=x824);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x825 = 254339;
	uint16_t x826 = 1994U;
	static int8_t x827 = -1;
	uint64_t x828 = UINT64_MAX;
	volatile int32_t t189 = -497;

    t189 = (((x825^x826)+x827)<=x828);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x830 = -1;
	static int8_t x831 = 1;
	int8_t x832 = -1;

    t190 = (((x829^x830)+x831)<=x832);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x835 = INT16_MAX;
	uint32_t x836 = 30771U;

    t191 = (((x833^x834)+x835)<=x836);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x837 = INT8_MIN;
	int16_t x839 = INT16_MIN;
	static int8_t x840 = INT8_MIN;
	volatile int32_t t192 = 7;

    t192 = (((x837^x838)+x839)<=x840);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x841 = INT16_MIN;
	int32_t x842 = -58;
	static int16_t x843 = 0;
	volatile int64_t x844 = 18060695LL;
	volatile int32_t t193 = -120;

    t193 = (((x841^x842)+x843)<=x844);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x857 = -1LL;
	static volatile uint16_t x858 = 436U;
	int16_t x859 = -1;
	uint64_t x860 = 1LLU;
	volatile int32_t t194 = -16793;

    t194 = (((x857^x858)+x859)<=x860);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x861 = UINT16_MAX;
	volatile uint16_t x863 = 11622U;
	int64_t x864 = INT64_MAX;
	static int32_t t195 = 219497;

    t195 = (((x861^x862)+x863)<=x864);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x865 = INT8_MAX;
	volatile int64_t x866 = INT64_MIN;
	int32_t x867 = INT32_MAX;

    t196 = (((x865^x866)+x867)<=x868);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x869 = INT64_MAX;
	uint16_t x870 = 14374U;
	int8_t x871 = -23;
	static int64_t x872 = -13LL;
	int32_t t197 = 2;

    t197 = (((x869^x870)+x871)<=x872);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x873 = INT64_MIN;
	int16_t x874 = INT16_MIN;
	static int64_t x875 = -831630974899LL;
	int32_t x876 = -1000857;
	static int32_t t198 = -1;

    t198 = (((x873^x874)+x875)<=x876);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x878 = INT32_MIN;
	int8_t x879 = INT8_MAX;
	static uint16_t x880 = UINT16_MAX;
	static volatile int32_t t199 = 16042500;

    t199 = (((x877^x878)+x879)<=x880);

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

