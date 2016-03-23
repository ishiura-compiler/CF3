
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

static volatile int8_t x9 = -1;
int64_t x10 = 53LL;
int32_t x11 = INT32_MAX;
volatile int64_t x15 = -1LL;
volatile int8_t x17 = INT8_MIN;
int32_t t5 = 38;
int32_t t6 = 6599;
volatile int32_t x29 = -1;
volatile uint16_t x35 = 81U;
volatile int64_t x41 = 511085290925872LL;
static volatile int16_t x42 = INT16_MAX;
uint16_t x50 = UINT16_MAX;
uint8_t x51 = 1U;
static int64_t x52 = -425595420637072LL;
volatile int64_t t12 = -49220LL;
volatile int16_t x54 = 734;
int16_t x55 = INT16_MIN;
volatile int32_t t13 = 813130327;
volatile int64_t t14 = INT64_MAX;
int32_t t15 = 744380593;
int64_t x73 = -1LL;
int32_t x76 = -1;
static volatile int64_t x78 = INT64_MIN;
int32_t t19 = 978183615;
int8_t x81 = 7;
volatile int32_t x85 = 738231488;
int16_t x90 = INT16_MIN;
uint8_t x104 = 6U;
int32_t t25 = -10;
int8_t x106 = INT8_MIN;
int64_t x107 = INT64_MIN;
volatile int32_t t26 = 4;
uint64_t x114 = 117837LLU;
int32_t t28 = -544790687;
volatile int32_t t31 = 123;
uint16_t x130 = UINT16_MAX;
int16_t x132 = INT16_MIN;
static int32_t x134 = INT32_MIN;
static uint8_t x137 = 28U;
int64_t x139 = INT64_MIN;
int32_t t35 = -6055242;
static uint8_t x146 = 9U;
int32_t t36 = 1;
uint64_t x155 = 20856985221731051LLU;
uint64_t x157 = 351852614LLU;
int32_t x158 = -1;
int32_t x166 = -4;
volatile int64_t x167 = INT64_MIN;
static uint16_t x173 = 4641U;
int16_t x178 = 291;
int16_t x183 = INT16_MAX;
int64_t x185 = INT64_MIN;
uint8_t x188 = 126U;
int32_t x194 = -1;
int64_t x197 = INT64_MAX;
int16_t x199 = INT16_MAX;
volatile int64_t x200 = -1LL;
static uint64_t x207 = UINT64_MAX;
int16_t x210 = INT16_MAX;
volatile int64_t x219 = INT64_MAX;
volatile uint32_t t54 = 1784779U;
int8_t x224 = INT8_MIN;
uint8_t x226 = 5U;
uint32_t x229 = 1227978U;
volatile int64_t x236 = INT64_MIN;
uint64_t x238 = UINT64_MAX;
uint64_t x241 = UINT64_MAX;
int32_t x247 = -1;
int8_t x255 = 2;
int16_t x257 = -1;
int32_t x262 = -22369;
int32_t x264 = -1;
int16_t x267 = -301;
uint64_t x268 = 15599384LLU;
int8_t x276 = -3;
int64_t x278 = -1LL;
uint8_t x282 = 6U;
int16_t x287 = INT16_MIN;
int32_t x288 = INT32_MIN;
static int64_t x291 = -53LL;
uint64_t x292 = 18LLU;
int64_t x293 = INT64_MAX;
uint8_t x295 = 32U;
int32_t x296 = 14;
volatile int32_t x303 = 0;
int8_t x306 = INT8_MIN;
int64_t t76 = INT64_MIN;
int8_t x309 = INT8_MIN;
volatile uint32_t t81 = 82590982U;
volatile int64_t x330 = INT64_MIN;
static int16_t x331 = INT16_MIN;
int16_t x338 = 6;
static int64_t x343 = -10970LL;
volatile int32_t x346 = 12313970;
static uint16_t x349 = UINT16_MAX;
uint32_t x354 = UINT32_MAX;
uint16_t x356 = 11121U;
volatile int32_t x360 = INT32_MIN;
volatile int32_t x363 = INT32_MAX;
uint32_t t90 = 64706U;
static uint64_t x366 = UINT64_MAX;
volatile uint64_t x372 = UINT64_MAX;
static int16_t x385 = 61;
uint8_t x386 = 2U;
volatile int32_t t96 = 0;
int32_t x389 = INT32_MIN;
int8_t x398 = -1;
int32_t x400 = -246;
uint8_t x403 = 0U;
volatile int32_t t100 = -1;
uint16_t x415 = 10034U;
volatile uint8_t x417 = 5U;
uint16_t x421 = 45U;
int16_t x425 = -1;
int8_t x427 = INT8_MAX;
int16_t x431 = -8;
static volatile int64_t t107 = INT64_MIN;
uint8_t x436 = 7U;
uint64_t x443 = 125703LLU;
static int64_t x445 = INT64_MIN;
uint16_t x446 = 15U;
volatile int8_t x460 = INT8_MAX;
int16_t x463 = -1;
int8_t x465 = INT8_MIN;
uint64_t x466 = 6LLU;
volatile uint64_t x469 = UINT64_MAX;
int64_t x471 = INT64_MAX;
int32_t x473 = -1;
static int8_t x477 = INT8_MAX;
static volatile int32_t x483 = -5441959;
volatile int32_t t120 = -310921;
static volatile int32_t x485 = INT32_MAX;
uint64_t x487 = 135789LLU;
static volatile uint16_t x495 = UINT16_MAX;
uint8_t x502 = 44U;
int32_t t131 = -354433;
int64_t x529 = -711467LL;
static int64_t x532 = INT64_MAX;
int64_t t132 = INT64_MAX;
uint8_t x533 = 2U;
uint8_t x534 = UINT8_MAX;
int8_t x535 = -37;
volatile uint64_t x537 = 1294303LLU;
uint32_t t135 = 18U;
int32_t t136 = 6;
volatile int8_t x552 = INT8_MIN;
int64_t x553 = INT64_MIN;
int8_t x562 = -8;
int32_t x564 = INT32_MAX;
static volatile int16_t x573 = -39;
int32_t x575 = -1;
static volatile uint8_t x578 = 43U;
uint64_t t144 = 2085749101LLU;
static volatile int32_t t145 = -4618;
uint64_t x585 = 49300142989208LLU;
uint8_t x588 = 56U;
static int32_t x590 = -175789566;
volatile int32_t t147 = -3;
uint32_t x593 = UINT32_MAX;
uint16_t x595 = UINT16_MAX;
int32_t x596 = 2483;
int32_t x598 = -15;
volatile int32_t t151 = -50;
static volatile int32_t x615 = INT32_MAX;
static volatile int32_t t153 = INT32_MIN;
uint16_t x618 = UINT16_MAX;
uint8_t x628 = UINT8_MAX;
uint8_t x635 = 26U;
int8_t x640 = INT8_MIN;
int32_t t159 = -332575;
int32_t x645 = -529974;
volatile uint32_t t161 = 11678U;
int64_t x657 = INT64_MAX;
volatile int8_t x672 = -1;
int64_t x673 = -1LL;
static int8_t x681 = -3;
int32_t x682 = INT32_MAX;
static volatile int32_t t171 = 186411;
volatile int32_t t173 = 11;
volatile int64_t x703 = -1820746963256570LL;
int8_t x707 = -62;
int8_t x709 = -27;
int16_t x711 = -7;
uint32_t x713 = 373938318U;
static volatile int16_t x715 = INT16_MIN;
int64_t x724 = INT64_MIN;
static volatile int8_t x742 = INT8_MIN;
uint64_t x744 = 53380143490LLU;
static int16_t x748 = INT16_MAX;
int32_t t186 = 6364;
uint64_t x749 = 2931360269LLU;
int16_t x755 = -1;
int8_t x758 = INT8_MIN;
uint32_t x761 = 42U;
int16_t x770 = 10926;
static uint64_t t192 = 130491435288981091LLU;
static int32_t t193 = 6;
static volatile int32_t x777 = 365;
int32_t x782 = -108;
int32_t x794 = INT32_MIN;
static int32_t t198 = -1106591;
static int32_t t199 = 1341;


void f0(void) {
    	int16_t x1 = 15;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 5;

    t0 = (((x1>x2)!=x3)*x4);

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -77878LL;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = -1;
	volatile int8_t x8 = INT8_MAX;
	static int32_t t1 = -760;

    t1 = (((x5>x6)!=x7)*x8);

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

    t2 = (((x9>x10)!=x11)*x12);

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -847479714602459LL;
	uint32_t x14 = 551U;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 0;

    t3 = (((x13>x14)!=x15)*x16);

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = UINT8_MAX;
	int16_t x19 = INT16_MIN;
	volatile int32_t x20 = 64091;
	int32_t t4 = 66;

    t4 = (((x17>x18)!=x19)*x20);

    if (t4 != 64091) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	int16_t x23 = INT16_MIN;
	static int8_t x24 = INT8_MIN;

    t5 = (((x21>x22)!=x23)*x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = 4U;
	static int32_t x26 = -1182765;
	static volatile int16_t x27 = -618;
	volatile uint16_t x28 = UINT16_MAX;

    t6 = (((x25>x26)!=x27)*x28);

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = 50;
	int32_t x31 = INT32_MAX;
	static uint16_t x32 = 27U;
	volatile int32_t t7 = 1019413;

    t7 = (((x29>x30)!=x31)*x32);

    if (t7 != 27) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	static volatile int64_t x34 = INT64_MAX;
	int16_t x36 = -9;
	int32_t t8 = -31322049;

    t8 = (((x33>x34)!=x35)*x36);

    if (t8 != -9) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	static volatile int8_t x38 = 1;
	uint16_t x39 = 134U;
	int64_t x40 = INT64_MIN;
	static volatile int64_t t9 = INT64_MIN;

    t9 = (((x37>x38)!=x39)*x40);

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x43 = UINT16_MAX;
	volatile uint64_t x44 = 1901LLU;
	uint64_t t10 = 6569390481LLU;

    t10 = (((x41>x42)!=x43)*x44);

    if (t10 != 1901LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	volatile int16_t x46 = -391;
	volatile int64_t x47 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = UINT32_MAX;

    t11 = (((x45>x46)!=x47)*x48);

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 1U;

    t12 = (((x49>x50)!=x51)*x52);

    if (t12 != -425595420637072LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	volatile int16_t x56 = INT16_MAX;

    t13 = (((x53>x54)!=x55)*x56);

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 0U;
	int16_t x58 = 426;
	int32_t x59 = -1;
	static int64_t x60 = INT64_MAX;

    t14 = (((x57>x58)!=x59)*x60);

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	int64_t x62 = 5LL;
	uint8_t x63 = 1U;
	static int16_t x64 = -1;

    t15 = (((x61>x62)!=x63)*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	static volatile uint8_t x66 = UINT8_MAX;
	volatile int16_t x67 = 0;
	int64_t x68 = INT64_MIN;
	static volatile int64_t t16 = INT64_MIN;

    t16 = (((x65>x66)!=x67)*x68);

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -1;
	volatile int16_t x70 = 9104;
	int32_t x71 = INT32_MIN;
	static volatile uint64_t x72 = 5236112LLU;
	volatile uint64_t t17 = 3501875220152512LLU;

    t17 = (((x69>x70)!=x71)*x72);

    if (t17 != 5236112LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x74 = -1;
	int8_t x75 = INT8_MIN;
	int32_t t18 = -6645;

    t18 = (((x73>x74)!=x75)*x76);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = -1;
	static int64_t x79 = INT64_MIN;
	int8_t x80 = -1;

    t19 = (((x77>x78)!=x79)*x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t20 = INT64_MIN;

    t20 = (((x81>x82)!=x83)*x84);

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x86 = -606;
	int64_t x87 = 14620557450338581LL;
	static int16_t x88 = INT16_MAX;
	int32_t t21 = 1;

    t21 = (((x85>x86)!=x87)*x88);

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	static int16_t x91 = -4649;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t22 = 3697;

    t22 = (((x89>x90)!=x91)*x92);

    if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 15202;
	volatile int16_t x94 = INT16_MIN;
	volatile uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 782;

    t23 = (((x93>x94)!=x95)*x96);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -56381163404802LL;
	static volatile uint16_t x98 = 4736U;
	int16_t x99 = INT16_MAX;
	volatile uint32_t x100 = UINT32_MAX;
	volatile uint32_t t24 = UINT32_MAX;

    t24 = (((x97>x98)!=x99)*x100);

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	static int32_t x102 = INT32_MIN;
	static int32_t x103 = INT32_MIN;

    t25 = (((x101>x102)!=x103)*x104);

    if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 6121U;
	int8_t x108 = -1;

    t26 = (((x105>x106)!=x107)*x108);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = -1LL;
	uint16_t x110 = 6821U;
	uint16_t x111 = 0U;
	static volatile uint16_t x112 = 21177U;
	int32_t t27 = 1749228;

    t27 = (((x109>x110)!=x111)*x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	int64_t x115 = INT64_MIN;
	int16_t x116 = -1;

    t28 = (((x113>x114)!=x115)*x116);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1633019130645LL;
	static int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	volatile int16_t x120 = 259;
	int32_t t29 = 7837877;

    t29 = (((x117>x118)!=x119)*x120);

    if (t29 != 259) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 4U;
	int16_t x122 = -1;
	int64_t x123 = -1LL;
	int32_t x124 = -1;
	static int32_t t30 = -280;

    t30 = (((x121>x122)!=x123)*x124);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = 117U;
	volatile int32_t x126 = 109;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 0U;

    t31 = (((x125>x126)!=x127)*x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -3684;
	volatile int64_t x131 = -1LL;
	int32_t t32 = -18;

    t32 = (((x129>x130)!=x131)*x132);

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 329787653833LLU;
	volatile int16_t x135 = -57;
	uint32_t x136 = 5393U;
	uint32_t t33 = 1803114709U;

    t33 = (((x133>x134)!=x135)*x136);

    if (t33 != 5393U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x138 = INT32_MIN;
	int8_t x140 = 15;
	int32_t t34 = 13314231;

    t34 = (((x137>x138)!=x139)*x140);

    if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 1226008814166LLU;
	int8_t x142 = 1;
	volatile int32_t x143 = -1;
	int16_t x144 = INT16_MIN;

    t35 = (((x141>x142)!=x143)*x144);

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	uint16_t x147 = 1898U;
	int8_t x148 = -1;

    t36 = (((x145>x146)!=x147)*x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	static volatile uint64_t x150 = 832590LLU;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	int64_t t37 = -7231279744LL;

    t37 = (((x149>x150)!=x151)*x152);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = INT64_MIN;
	uint32_t x154 = 1995399978U;
	int16_t x156 = 1;
	int32_t t38 = 5;

    t38 = (((x153>x154)!=x155)*x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x159 = INT16_MIN;
	volatile int8_t x160 = -1;
	volatile int32_t t39 = -463439514;

    t39 = (((x157>x158)!=x159)*x160);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MAX;
	uint16_t x163 = 10986U;
	int8_t x164 = -10;
	int32_t t40 = -509;

    t40 = (((x161>x162)!=x163)*x164);

    if (t40 != -10) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = -291361528381139733LL;
	uint16_t x168 = 17195U;
	int32_t t41 = -63023662;

    t41 = (((x165>x166)!=x167)*x168);

    if (t41 != 17195) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 199570U;
	uint8_t x170 = 7U;
	int16_t x171 = INT16_MAX;
	uint32_t x172 = 923U;
	uint32_t t42 = 20815U;

    t42 = (((x169>x170)!=x171)*x172);

    if (t42 != 923U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = INT64_MAX;
	static volatile uint8_t x175 = UINT8_MAX;
	uint8_t x176 = 102U;
	volatile int32_t t43 = -570744159;

    t43 = (((x173>x174)!=x175)*x176);

    if (t43 != 102) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	int16_t x180 = INT16_MAX;
	int32_t t44 = -94215636;

    t44 = (((x177>x178)!=x179)*x180);

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 1U;
	uint64_t x182 = UINT64_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	int32_t t45 = -162561127;

    t45 = (((x181>x182)!=x183)*x184);

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x186 = INT32_MIN;
	uint16_t x187 = UINT16_MAX;
	static volatile int32_t t46 = -10791;

    t46 = (((x185>x186)!=x187)*x188);

    if (t46 != 126) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 1;
	volatile int16_t x190 = INT16_MIN;
	int32_t x191 = 844772167;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

    t47 = (((x189>x190)!=x191)*x192);

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	volatile uint64_t x195 = 45040739958504677LLU;
	uint32_t x196 = 13043070U;
	volatile uint32_t t48 = 506U;

    t48 = (((x193>x194)!=x195)*x196);

    if (t48 != 13043070U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x198 = -4838;
	static int64_t t49 = 3718481523582LL;

    t49 = (((x197>x198)!=x199)*x200);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -38853;
	volatile int64_t x202 = INT64_MIN;
	uint8_t x203 = 25U;
	volatile int16_t x204 = -3;
	int32_t t50 = 504;

    t50 = (((x201>x202)!=x203)*x204);

    if (t50 != -3) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -442608;

    t51 = (((x205>x206)!=x207)*x208);

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int32_t x211 = -6756;
	volatile int16_t x212 = 1381;
	static int32_t t52 = -8571;

    t52 = (((x209>x210)!=x211)*x212);

    if (t52 != 1381) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x213 = -949354180;
	int16_t x214 = -1;
	uint64_t x215 = 15031915518681849LLU;
	uint64_t x216 = UINT64_MAX;
	uint64_t t53 = UINT64_MAX;

    t53 = (((x213>x214)!=x215)*x216);

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 1;
	static int8_t x218 = -1;
	static uint32_t x220 = 0U;

    t54 = (((x217>x218)!=x219)*x220);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 985U;
	volatile int64_t x222 = 1120878257298196822LL;
	static int16_t x223 = INT16_MIN;
	int32_t t55 = 122;

    t55 = (((x221>x222)!=x223)*x224);

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	int16_t x227 = INT16_MIN;
	static uint64_t x228 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

    t56 = (((x225>x226)!=x227)*x228);

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x230 = 60567431351826983LLU;
	int64_t x231 = -1LL;
	volatile int16_t x232 = -3902;
	int32_t t57 = -24685468;

    t57 = (((x229>x230)!=x231)*x232);

    if (t57 != -3902) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 15U;
	volatile int8_t x234 = 45;
	static int8_t x235 = -1;
	volatile int64_t t58 = INT64_MIN;

    t58 = (((x233>x234)!=x235)*x236);

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	static int8_t x239 = -1;
	volatile int32_t x240 = INT32_MAX;
	static int32_t t59 = INT32_MAX;

    t59 = (((x237>x238)!=x239)*x240);

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x242 = -1;
	int64_t x243 = -8LL;
	volatile int8_t x244 = INT8_MIN;
	int32_t t60 = 973036258;

    t60 = (((x241>x242)!=x243)*x244);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 139U;
	int16_t x246 = -2;
	uint64_t x248 = UINT64_MAX;
	uint64_t t61 = UINT64_MAX;

    t61 = (((x245>x246)!=x247)*x248);

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 71LLU;
	uint8_t x250 = 18U;
	int16_t x251 = INT16_MIN;
	volatile uint32_t x252 = 3U;
	volatile uint32_t t62 = 4991329U;

    t62 = (((x249>x250)!=x251)*x252);

    if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	volatile int32_t x254 = INT32_MAX;
	uint32_t x256 = 17U;
	static volatile uint32_t t63 = 1087500588U;

    t63 = (((x253>x254)!=x255)*x256);

    if (t63 != 17U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x258 = 737U;
	volatile int32_t x259 = 4682;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = UINT32_MAX;

    t64 = (((x257>x258)!=x259)*x260);

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 1423647305LLU;
	static int32_t x263 = 118014525;
	int32_t t65 = -1105281;

    t65 = (((x261>x262)!=x263)*x264);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 17587291U;
	int32_t x266 = 3655;
	volatile uint64_t t66 = 4785822LLU;

    t66 = (((x265>x266)!=x267)*x268);

    if (t66 != 15599384LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = 28;
	int32_t x270 = 161;
	uint16_t x271 = 4U;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t67 = UINT32_MAX;

    t67 = (((x269>x270)!=x271)*x272);

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = 9U;
	static volatile int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	volatile int32_t t68 = 766302142;

    t68 = (((x273>x274)!=x275)*x276);

    if (t68 != -3) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = 146U;
	volatile int64_t x279 = INT64_MIN;
	static int16_t x280 = -1;
	int32_t t69 = -16850870;

    t69 = (((x277>x278)!=x279)*x280);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 1;
	int16_t x283 = 73;
	static uint64_t x284 = 3LLU;
	uint64_t t70 = 38041LLU;

    t70 = (((x281>x282)!=x283)*x284);

    if (t70 != 3LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	static int16_t x286 = -1;
	int32_t t71 = INT32_MIN;

    t71 = (((x285>x286)!=x287)*x288);

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	volatile uint64_t t72 = 87676618939079530LLU;

    t72 = (((x289>x290)!=x291)*x292);

    if (t72 != 18LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x294 = UINT8_MAX;
	volatile int32_t t73 = -4130324;

    t73 = (((x293>x294)!=x295)*x296);

    if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	int16_t x300 = 1;
	int32_t t74 = -197434;

    t74 = (((x297>x298)!=x299)*x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 46;
	static int64_t x302 = -1LL;
	int32_t x304 = INT32_MIN;
	int32_t t75 = INT32_MIN;

    t75 = (((x301>x302)!=x303)*x304);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = -1;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;

    t76 = (((x305>x306)!=x307)*x308);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = INT8_MIN;
	volatile int32_t x311 = -1;
	static uint64_t x312 = 294747003165LLU;
	volatile uint64_t t77 = 2876223212638580LLU;

    t77 = (((x309>x310)!=x311)*x312);

    if (t77 != 294747003165LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = UINT8_MAX;
	static volatile int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	int16_t x316 = -1;
	volatile int32_t t78 = -1;

    t78 = (((x313>x314)!=x315)*x316);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x317 = INT32_MIN;
	volatile uint16_t x318 = UINT16_MAX;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t79 = INT64_MIN;

    t79 = (((x317>x318)!=x319)*x320);

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 12U;
	int16_t x322 = -3870;
	uint8_t x323 = UINT8_MAX;
	static volatile uint8_t x324 = UINT8_MAX;
	int32_t t80 = 1;

    t80 = (((x321>x322)!=x323)*x324);

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	int8_t x326 = 31;
	volatile int64_t x327 = INT64_MAX;
	uint32_t x328 = 4U;

    t81 = (((x325>x326)!=x327)*x328);

    if (t81 != 4U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 13833LLU;
	static uint32_t x332 = 1U;
	static uint32_t t82 = 18U;

    t82 = (((x329>x330)!=x331)*x332);

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = 2;
	int64_t x335 = -211254800318LL;
	uint32_t x336 = 1U;
	uint32_t t83 = 28524U;

    t83 = (((x333>x334)!=x335)*x336);

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = -3;
	volatile uint16_t x339 = 0U;
	int32_t x340 = -1;
	int32_t t84 = -1;

    t84 = (((x337>x338)!=x339)*x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	volatile uint8_t x342 = 114U;
	static int16_t x344 = INT16_MAX;
	static int32_t t85 = 1;

    t85 = (((x341>x342)!=x343)*x344);

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	int16_t x347 = -1;
	volatile uint16_t x348 = 570U;
	static volatile int32_t t86 = -1;

    t86 = (((x345>x346)!=x347)*x348);

    if (t86 != 570) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x350 = INT64_MIN;
	uint8_t x351 = 0U;
	uint8_t x352 = UINT8_MAX;
	static int32_t t87 = -9056690;

    t87 = (((x349>x350)!=x351)*x352);

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MAX;
	int64_t x355 = -1LL;
	int32_t t88 = 1713215;

    t88 = (((x353>x354)!=x355)*x356);

    if (t88 != 11121) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 292U;
	int32_t x358 = INT32_MAX;
	volatile int64_t x359 = INT64_MAX;
	volatile int32_t t89 = INT32_MIN;

    t89 = (((x357>x358)!=x359)*x360);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = UINT8_MAX;
	int8_t x362 = -1;
	uint32_t x364 = 8403U;

    t90 = (((x361>x362)!=x363)*x364);

    if (t90 != 8403U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x365 = -130;
	int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t91 = -356;

    t91 = (((x365>x366)!=x367)*x368);

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = 142;
	int64_t x370 = INT64_MAX;
	uint16_t x371 = 134U;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = (((x369>x370)!=x371)*x372);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int32_t x374 = -15976018;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t93 = -30;

    t93 = (((x373>x374)!=x375)*x376);

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	uint32_t x378 = UINT32_MAX;
	static int16_t x379 = INT16_MAX;
	static uint16_t x380 = 1279U;
	static volatile int32_t t94 = -134040435;

    t94 = (((x377>x378)!=x379)*x380);

    if (t94 != 1279) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	int64_t x382 = INT64_MIN;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = -76337;
	volatile int32_t t95 = -19579572;

    t95 = (((x381>x382)!=x383)*x384);

    if (t95 != -76337) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x387 = -1;
	static int32_t x388 = -4044;

    t96 = (((x385>x386)!=x387)*x388);

    if (t96 != -4044) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MIN;
	volatile int64_t x391 = INT64_MAX;
	uint8_t x392 = 0U;
	int32_t t97 = -163296960;

    t97 = (((x389>x390)!=x391)*x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = INT32_MIN;
	int32_t x394 = -22366620;
	static int8_t x395 = INT8_MIN;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = 3605;

    t98 = (((x393>x394)!=x395)*x396);

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	int16_t x399 = 1;
	int32_t t99 = -10;

    t99 = (((x397>x398)!=x399)*x400);

    if (t99 != -246) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 1U;
	static int32_t x402 = -92077;
	static int16_t x404 = INT16_MIN;

    t100 = (((x401>x402)!=x403)*x404);

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MAX;
	volatile int64_t x406 = INT64_MIN;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = 1638425092U;
	static volatile uint32_t t101 = 0U;

    t101 = (((x405>x406)!=x407)*x408);

    if (t101 != 1638425092U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MAX;
	volatile int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MAX;
	volatile int32_t t102 = 10;

    t102 = (((x409>x410)!=x411)*x412);

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = INT32_MIN;
	uint32_t x416 = UINT32_MAX;
	uint32_t t103 = UINT32_MAX;

    t103 = (((x413>x414)!=x415)*x416);

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x418 = 3352849;
	volatile int8_t x419 = 59;
	static volatile uint8_t x420 = UINT8_MAX;
	static volatile int32_t t104 = 465332;

    t104 = (((x417>x418)!=x419)*x420);

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x422 = UINT64_MAX;
	uint64_t x423 = 23106365118181LLU;
	uint64_t x424 = 12898872668LLU;
	uint64_t t105 = 3065875866237706LLU;

    t105 = (((x421>x422)!=x423)*x424);

    if (t105 != 12898872668LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x426 = INT32_MAX;
	uint32_t x428 = 21249113U;
	volatile uint32_t t106 = 861U;

    t106 = (((x425>x426)!=x427)*x428);

    if (t106 != 21249113U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x429 = INT8_MIN;
	uint8_t x430 = 7U;
	int64_t x432 = INT64_MIN;

    t107 = (((x429>x430)!=x431)*x432);

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = 7;
	volatile int64_t x434 = -1LL;
	uint16_t x435 = 0U;
	volatile int32_t t108 = -24380147;

    t108 = (((x433>x434)!=x435)*x436);

    if (t108 != 7) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	volatile int8_t x438 = INT8_MAX;
	int16_t x439 = 356;
	int64_t x440 = -126302783031LL;
	static int64_t t109 = -84696512919770054LL;

    t109 = (((x437>x438)!=x439)*x440);

    if (t109 != -126302783031LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 7375169802LLU;
	int64_t x442 = INT64_MIN;
	static int8_t x444 = INT8_MIN;
	int32_t t110 = 27731171;

    t110 = (((x441>x442)!=x443)*x444);

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x447 = INT64_MIN;
	uint8_t x448 = 0U;
	volatile int32_t t111 = -26932;

    t111 = (((x445>x446)!=x447)*x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x449 = 12U;
	uint16_t x450 = UINT16_MAX;
	uint16_t x451 = 4524U;
	int32_t x452 = -1;
	int32_t t112 = -1346411;

    t112 = (((x449>x450)!=x451)*x452);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	int32_t x454 = -2;
	volatile int16_t x455 = -1;
	int16_t x456 = -1;
	int32_t t113 = 12128034;

    t113 = (((x453>x454)!=x455)*x456);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = -1;
	uint32_t x458 = UINT32_MAX;
	volatile int32_t x459 = INT32_MAX;
	static volatile int32_t t114 = 37618;

    t114 = (((x457>x458)!=x459)*x460);

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MAX;
	int16_t x462 = INT16_MIN;
	int32_t x464 = INT32_MAX;
	int32_t t115 = INT32_MAX;

    t115 = (((x461>x462)!=x463)*x464);

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x467 = INT64_MAX;
	uint8_t x468 = 1U;
	int32_t t116 = 239754;

    t116 = (((x465>x466)!=x467)*x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x470 = INT32_MIN;
	int8_t x472 = -1;
	int32_t t117 = -47300660;

    t117 = (((x469>x470)!=x471)*x472);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x474 = INT16_MIN;
	uint8_t x475 = 36U;
	int8_t x476 = -1;
	static int32_t t118 = -1763;

    t118 = (((x473>x474)!=x475)*x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x478 = UINT8_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = -1;
	int32_t t119 = -1;

    t119 = (((x477>x478)!=x479)*x480);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MIN;
	uint64_t x482 = UINT64_MAX;
	uint16_t x484 = UINT16_MAX;

    t120 = (((x481>x482)!=x483)*x484);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x486 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;
	volatile uint32_t t121 = UINT32_MAX;

    t121 = (((x485>x486)!=x487)*x488);

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	volatile int16_t x490 = INT16_MIN;
	uint32_t x491 = 2748U;
	static int8_t x492 = 0;
	volatile int32_t t122 = 4745;

    t122 = (((x489>x490)!=x491)*x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 33910194;
	uint16_t x494 = 1U;
	int16_t x496 = INT16_MIN;
	volatile int32_t t123 = 2;

    t123 = (((x493>x494)!=x495)*x496);

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x497 = INT64_MIN;
	static int16_t x498 = 3;
	volatile int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MIN;
	int32_t t124 = INT32_MIN;

    t124 = (((x497>x498)!=x499)*x500);

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	int16_t x503 = 6806;
	int32_t x504 = 429351020;
	volatile int32_t t125 = 505335;

    t125 = (((x501>x502)!=x503)*x504);

    if (t125 != 429351020) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x505 = INT64_MIN;
	int8_t x506 = INT8_MAX;
	uint8_t x507 = UINT8_MAX;
	int32_t x508 = 0;
	int32_t t126 = -5339;

    t126 = (((x505>x506)!=x507)*x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = 57U;
	volatile uint64_t x510 = 563989601908628564LLU;
	int8_t x511 = -1;
	volatile uint8_t x512 = 3U;
	static int32_t t127 = 823;

    t127 = (((x509>x510)!=x511)*x512);

    if (t127 != 3) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MAX;
	uint32_t x514 = UINT32_MAX;
	uint8_t x515 = 54U;
	static uint16_t x516 = 45U;
	static volatile int32_t t128 = -127;

    t128 = (((x513>x514)!=x515)*x516);

    if (t128 != 45) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = -6;
	int32_t x518 = INT32_MIN;
	volatile int8_t x519 = 4;
	uint64_t x520 = 8LLU;
	static volatile uint64_t t129 = 31LLU;

    t129 = (((x517>x518)!=x519)*x520);

    if (t129 != 8LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	uint16_t x522 = 1U;
	uint64_t x523 = 415810830492992LLU;
	int32_t x524 = INT32_MAX;
	volatile int32_t t130 = INT32_MAX;

    t130 = (((x521>x522)!=x523)*x524);

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	int8_t x526 = -1;
	static volatile int16_t x527 = -1097;
	volatile int8_t x528 = -15;

    t131 = (((x525>x526)!=x527)*x528);

    if (t131 != -15) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x530 = INT16_MAX;
	volatile uint32_t x531 = UINT32_MAX;

    t132 = (((x529>x530)!=x531)*x532);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 29930;

    t133 = (((x533>x534)!=x535)*x536);

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x538 = 1929U;
	uint16_t x539 = 1024U;
	volatile int32_t x540 = INT32_MIN;
	static int32_t t134 = INT32_MIN;

    t134 = (((x537>x538)!=x539)*x540);

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x541 = -113585964103188LL;
	static int16_t x542 = -1;
	int16_t x543 = -10431;
	uint32_t x544 = 77U;

    t135 = (((x541>x542)!=x543)*x544);

    if (t135 != 77U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x545 = 30U;
	int32_t x546 = -4;
	int64_t x547 = -5LL;
	uint16_t x548 = 1U;

    t136 = (((x545>x546)!=x547)*x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x549 = 7446U;
	static uint16_t x550 = UINT16_MAX;
	static uint64_t x551 = UINT64_MAX;
	int32_t t137 = -839495;

    t137 = (((x549>x550)!=x551)*x552);

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x554 = UINT32_MAX;
	uint8_t x555 = UINT8_MAX;
	static int64_t x556 = INT64_MIN;
	int64_t t138 = INT64_MIN;

    t138 = (((x553>x554)!=x555)*x556);

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	int16_t x558 = -257;
	int8_t x559 = INT8_MIN;
	uint32_t x560 = 7020431U;
	volatile uint32_t t139 = 23U;

    t139 = (((x557>x558)!=x559)*x560);

    if (t139 != 7020431U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MAX;
	int16_t x563 = -1;
	volatile int32_t t140 = INT32_MAX;

    t140 = (((x561>x562)!=x563)*x564);

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	int8_t x566 = -1;
	int64_t x567 = INT64_MIN;
	static volatile uint16_t x568 = 1920U;
	static int32_t t141 = -21112;

    t141 = (((x565>x566)!=x567)*x568);

    if (t141 != 1920) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	volatile uint64_t x570 = UINT64_MAX;
	uint8_t x571 = 3U;
	static int8_t x572 = -1;
	volatile int32_t t142 = -128;

    t142 = (((x569>x570)!=x571)*x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = -1856005618181231288LL;
	int16_t x576 = INT16_MAX;
	volatile int32_t t143 = -177099;

    t143 = (((x573>x574)!=x575)*x576);

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 5U;
	volatile int8_t x579 = INT8_MIN;
	uint64_t x580 = 13643LLU;

    t144 = (((x577>x578)!=x579)*x580);

    if (t144 != 13643LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	static int8_t x582 = INT8_MIN;
	volatile uint16_t x583 = 15489U;
	static int8_t x584 = -1;

    t145 = (((x581>x582)!=x583)*x584);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = -896010LL;
	int64_t x587 = 834022LL;
	volatile int32_t t146 = -14270;

    t146 = (((x585>x586)!=x587)*x588);

    if (t146 != 56) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = -1;
	static volatile int32_t x591 = INT32_MIN;
	int8_t x592 = INT8_MIN;

    t147 = (((x589>x590)!=x591)*x592);

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x594 = UINT8_MAX;
	volatile int32_t t148 = 1;

    t148 = (((x593>x594)!=x595)*x596);

    if (t148 != 2483) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -2973013817410LL;
	int8_t x599 = INT8_MAX;
	uint16_t x600 = 2861U;
	static int32_t t149 = -12833;

    t149 = (((x597>x598)!=x599)*x600);

    if (t149 != 2861) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MAX;
	static int8_t x602 = -1;
	volatile int64_t x603 = 166982938113784432LL;
	volatile uint16_t x604 = UINT16_MAX;
	int32_t t150 = -959266;

    t150 = (((x601>x602)!=x603)*x604);

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int8_t x606 = -1;
	volatile uint16_t x607 = 2U;
	volatile int8_t x608 = INT8_MAX;

    t151 = (((x605>x606)!=x607)*x608);

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = -1;
	uint32_t x610 = 373439724U;
	int8_t x611 = INT8_MIN;
	volatile uint32_t x612 = 0U;
	uint32_t t152 = 1824U;

    t152 = (((x609>x610)!=x611)*x612);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	static int32_t x614 = -1;
	volatile int32_t x616 = INT32_MIN;

    t153 = (((x613>x614)!=x615)*x616);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = INT32_MAX;
	static int16_t x619 = -3247;
	uint8_t x620 = 1U;
	int32_t t154 = -1016410613;

    t154 = (((x617>x618)!=x619)*x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	uint32_t x622 = 698251U;
	static int32_t x623 = -2;
	static uint16_t x624 = 3U;
	static int32_t t155 = -1;

    t155 = (((x621>x622)!=x623)*x624);

    if (t155 != 3) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	static volatile uint16_t x626 = 55U;
	int16_t x627 = INT16_MAX;
	int32_t t156 = -78673914;

    t156 = (((x625>x626)!=x627)*x628);

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x629 = INT16_MIN;
	static uint64_t x630 = 1176329266818LLU;
	int64_t x631 = INT64_MIN;
	volatile uint64_t x632 = 35853497484039LLU;
	uint64_t t157 = 37641681204LLU;

    t157 = (((x629>x630)!=x631)*x632);

    if (t157 != 35853497484039LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 1;
	int8_t x634 = INT8_MIN;
	int16_t x636 = 4;
	int32_t t158 = -14050765;

    t158 = (((x633>x634)!=x635)*x636);

    if (t158 != 4) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = 523005715;
	uint32_t x638 = UINT32_MAX;
	uint32_t x639 = UINT32_MAX;

    t159 = (((x637>x638)!=x639)*x640);

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	int16_t x642 = -30;
	volatile int8_t x643 = INT8_MIN;
	volatile uint16_t x644 = 1332U;
	int32_t t160 = -58422935;

    t160 = (((x641>x642)!=x643)*x644);

    if (t160 != 1332) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x646 = -124520LL;
	int32_t x647 = 990159492;
	static uint32_t x648 = 55903436U;

    t161 = (((x645>x646)!=x647)*x648);

    if (t161 != 55903436U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 726139025112804LLU;
	int64_t x650 = INT64_MAX;
	static uint8_t x651 = UINT8_MAX;
	uint32_t x652 = 1750U;
	uint32_t t162 = 2286U;

    t162 = (((x649>x650)!=x651)*x652);

    if (t162 != 1750U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	static uint16_t x654 = UINT16_MAX;
	static int8_t x655 = -1;
	volatile int32_t x656 = -438353;
	volatile int32_t t163 = 7;

    t163 = (((x653>x654)!=x655)*x656);

    if (t163 != -438353) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x658 = UINT16_MAX;
	uint8_t x659 = UINT8_MAX;
	uint16_t x660 = 28U;
	volatile int32_t t164 = -19087160;

    t164 = (((x657>x658)!=x659)*x660);

    if (t164 != 28) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MIN;
	int32_t x662 = -688846;
	volatile int64_t x663 = INT64_MIN;
	int16_t x664 = INT16_MAX;
	volatile int32_t t165 = -208731008;

    t165 = (((x661>x662)!=x663)*x664);

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = -19;
	static uint16_t x666 = 20000U;
	volatile int32_t x667 = INT32_MAX;
	uint32_t x668 = 1832U;
	volatile uint32_t t166 = 6691581U;

    t166 = (((x665>x666)!=x667)*x668);

    if (t166 != 1832U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 8;
	volatile int16_t x670 = -1;
	uint8_t x671 = 1U;
	int32_t t167 = -5;

    t167 = (((x669>x670)!=x671)*x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x674 = 11956U;
	static volatile int32_t x675 = 1768002;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t168 = 518811;

    t168 = (((x673>x674)!=x675)*x676);

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x677 = 2310238U;
	static int32_t x678 = INT32_MAX;
	uint8_t x679 = 1U;
	int16_t x680 = -1;
	int32_t t169 = 0;

    t169 = (((x677>x678)!=x679)*x680);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x683 = -1;
	int8_t x684 = 29;
	static volatile int32_t t170 = 81944;

    t170 = (((x681>x682)!=x683)*x684);

    if (t170 != 29) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x685 = INT64_MIN;
	static uint32_t x686 = 254248669U;
	int64_t x687 = INT64_MIN;
	static volatile uint16_t x688 = UINT16_MAX;

    t171 = (((x685>x686)!=x687)*x688);

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 4U;
	int8_t x690 = INT8_MIN;
	int16_t x691 = INT16_MIN;
	int16_t x692 = -1;
	static volatile int32_t t172 = -1350297;

    t172 = (((x689>x690)!=x691)*x692);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MIN;
	static int64_t x694 = INT64_MIN;
	uint64_t x695 = 23835LLU;
	int8_t x696 = -1;

    t173 = (((x693>x694)!=x695)*x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	uint16_t x698 = 91U;
	uint64_t x699 = 2094013037848028879LLU;
	static volatile int8_t x700 = INT8_MAX;
	int32_t t174 = 1;

    t174 = (((x697>x698)!=x699)*x700);

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = 925200079869LL;
	uint16_t x702 = 780U;
	uint16_t x704 = UINT16_MAX;
	int32_t t175 = 6972763;

    t175 = (((x701>x702)!=x703)*x704);

    if (t175 != 65535) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 0;
	volatile int32_t x706 = INT32_MIN;
	static volatile uint64_t x708 = UINT64_MAX;
	uint64_t t176 = UINT64_MAX;

    t176 = (((x705>x706)!=x707)*x708);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x710 = INT16_MAX;
	uint32_t x712 = UINT32_MAX;
	volatile uint32_t t177 = UINT32_MAX;

    t177 = (((x709>x710)!=x711)*x712);

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x714 = 22U;
	volatile int64_t x716 = 54LL;
	volatile int64_t t178 = 289065550694972LL;

    t178 = (((x713>x714)!=x715)*x716);

    if (t178 != 54LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 11;
	int16_t x718 = INT16_MAX;
	uint64_t x719 = 4118308121LLU;
	int16_t x720 = -13169;
	static volatile int32_t t179 = -329572;

    t179 = (((x717>x718)!=x719)*x720);

    if (t179 != -13169) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = 1;
	int8_t x722 = INT8_MIN;
	volatile uint8_t x723 = UINT8_MAX;
	volatile int64_t t180 = INT64_MIN;

    t180 = (((x721>x722)!=x723)*x724);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x725 = 3U;
	int64_t x726 = INT64_MIN;
	static uint8_t x727 = 31U;
	uint64_t x728 = UINT64_MAX;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = (((x725>x726)!=x727)*x728);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	static int32_t x730 = 54;
	static volatile int64_t x731 = -1LL;
	int8_t x732 = INT8_MIN;
	int32_t t182 = 19;

    t182 = (((x729>x730)!=x731)*x732);

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -45;
	uint16_t x734 = 83U;
	static int32_t x735 = 6917;
	volatile uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 446041;

    t183 = (((x733>x734)!=x735)*x736);

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 21U;
	volatile uint16_t x738 = UINT16_MAX;
	uint64_t x739 = 3132743535891690LLU;
	uint8_t x740 = UINT8_MAX;
	int32_t t184 = -211;

    t184 = (((x737>x738)!=x739)*x740);

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -52;
	uint8_t x743 = 0U;
	volatile uint64_t t185 = 676299021560422LLU;

    t185 = (((x741>x742)!=x743)*x744);

    if (t185 != 53380143490LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1352632836LL;
	int32_t x746 = INT32_MIN;
	static uint16_t x747 = 293U;

    t186 = (((x745>x746)!=x747)*x748);

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x750 = INT16_MIN;
	int16_t x751 = -1;
	int64_t x752 = -15036360337018LL;
	static volatile int64_t t187 = -726374112LL;

    t187 = (((x749>x750)!=x751)*x752);

    if (t187 != -15036360337018LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 6;
	int16_t x754 = INT16_MIN;
	int32_t x756 = INT32_MIN;
	int32_t t188 = INT32_MIN;

    t188 = (((x753>x754)!=x755)*x756);

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = INT16_MIN;
	volatile int64_t x759 = 21538086206LL;
	uint32_t x760 = 508U;
	static volatile uint32_t t189 = 1030520U;

    t189 = (((x757>x758)!=x759)*x760);

    if (t189 != 508U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x762 = 5612U;
	int64_t x763 = -1LL;
	volatile uint32_t x764 = 12714U;
	uint32_t t190 = 984486U;

    t190 = (((x761>x762)!=x763)*x764);

    if (t190 != 12714U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -1;
	static int32_t x766 = -1;
	static int8_t x767 = INT8_MAX;
	int16_t x768 = -7223;
	int32_t t191 = 482;

    t191 = (((x765>x766)!=x767)*x768);

    if (t191 != -7223) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = 1LL;
	int8_t x771 = INT8_MIN;
	uint64_t x772 = 130675436029LLU;

    t192 = (((x769>x770)!=x771)*x772);

    if (t192 != 130675436029LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	static volatile int16_t x774 = INT16_MIN;
	volatile int32_t x775 = INT32_MAX;
	uint16_t x776 = 3746U;

    t193 = (((x773>x774)!=x775)*x776);

    if (t193 != 3746) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x778 = INT16_MAX;
	uint64_t x779 = 102867680337LLU;
	int8_t x780 = 2;
	static int32_t t194 = 5806894;

    t194 = (((x777>x778)!=x779)*x780);

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MAX;
	static int8_t x783 = INT8_MAX;
	uint32_t x784 = UINT32_MAX;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (((x781>x782)!=x783)*x784);

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -63;
	int8_t x786 = 1;
	uint8_t x787 = 2U;
	static int32_t x788 = INT32_MIN;
	volatile int32_t t196 = INT32_MIN;

    t196 = (((x785>x786)!=x787)*x788);

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = 3556314663LLU;
	volatile uint32_t x790 = UINT32_MAX;
	static int8_t x791 = 0;
	int16_t x792 = -1;
	int32_t t197 = 0;

    t197 = (((x789>x790)!=x791)*x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MIN;
	int32_t x795 = -1;
	int16_t x796 = INT16_MIN;

    t198 = (((x793>x794)!=x795)*x796);

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = 4;
	uint8_t x798 = 21U;
	int8_t x799 = -7;
	int16_t x800 = 48;

    t199 = (((x797>x798)!=x799)*x800);

    if (t199 != 48) { NG(); } else { ; }
	
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

