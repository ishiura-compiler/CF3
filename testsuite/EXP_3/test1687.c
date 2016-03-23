
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

int8_t x10 = 1;
uint8_t x15 = 9U;
uint64_t x17 = 3554210LLU;
int32_t x20 = INT32_MAX;
volatile int64_t x23 = 472097289650560LL;
int64_t x26 = INT64_MAX;
int8_t x34 = 3;
uint8_t x35 = 0U;
volatile uint32_t x37 = UINT32_MAX;
int64_t x38 = INT64_MAX;
int64_t x39 = 0LL;
int32_t t9 = 47689;
int8_t x48 = INT8_MAX;
static int32_t t13 = -6;
int16_t x65 = INT16_MIN;
int64_t x67 = 570122976LL;
int16_t x68 = INT16_MAX;
volatile int64_t x71 = -79880221986742LL;
uint16_t x72 = 35U;
volatile int32_t t17 = -7;
volatile uint16_t x74 = 18U;
volatile int16_t x79 = INT16_MIN;
int32_t t19 = 3083807;
int8_t x81 = 33;
int8_t x86 = 18;
static volatile int32_t x87 = -478;
int32_t t21 = -113875122;
volatile uint8_t x97 = 6U;
volatile uint64_t x98 = 3LLU;
int32_t x102 = -446799767;
uint64_t x107 = UINT64_MAX;
uint16_t x108 = UINT16_MAX;
uint8_t x113 = 6U;
static uint64_t x114 = UINT64_MAX;
static uint8_t x118 = 1U;
static int16_t x121 = INT16_MAX;
uint16_t x123 = 259U;
int32_t t30 = 1;
volatile uint32_t x130 = 6U;
uint16_t x132 = 11393U;
int32_t t32 = 1015590876;
int32_t x139 = INT32_MIN;
int8_t x140 = 0;
int16_t x141 = INT16_MAX;
int64_t x142 = 93562076709764116LL;
int8_t x143 = 0;
static int8_t x148 = INT8_MIN;
int64_t x153 = -1LL;
int32_t x154 = -6360550;
volatile int64_t x158 = INT64_MIN;
static int8_t x159 = -1;
int32_t x160 = 29;
volatile int8_t x162 = INT8_MIN;
int32_t t41 = 17818;
uint16_t x176 = 1U;
volatile int16_t x182 = -3830;
int64_t x183 = INT64_MAX;
uint16_t x191 = UINT16_MAX;
int32_t t48 = 2049;
int64_t x206 = -1LL;
uint64_t x207 = UINT64_MAX;
int8_t x220 = INT8_MIN;
static volatile int32_t x222 = INT32_MIN;
int16_t x223 = INT16_MAX;
int32_t t57 = 49366;
volatile int16_t x240 = INT16_MIN;
volatile int32_t t59 = 12721024;
int32_t x243 = 26;
uint16_t x244 = 30659U;
volatile int32_t t61 = 1;
int8_t x253 = 4;
int16_t x257 = INT16_MIN;
uint8_t x262 = UINT8_MAX;
static volatile int16_t x267 = INT16_MAX;
uint8_t x268 = UINT8_MAX;
int16_t x271 = INT16_MIN;
static volatile int32_t t67 = -1911808;
int32_t x276 = INT32_MAX;
int8_t x277 = 0;
uint16_t x278 = 1U;
static uint16_t x280 = UINT16_MAX;
int32_t t69 = -467;
int16_t x284 = -1;
uint8_t x285 = 14U;
int16_t x288 = -5;
int64_t x289 = INT64_MIN;
int32_t t72 = -1;
static volatile int32_t x293 = -1;
static uint16_t x295 = 0U;
volatile int32_t x296 = -1;
uint16_t x297 = 23402U;
int8_t x307 = INT8_MIN;
int64_t x310 = INT64_MIN;
int32_t x317 = INT32_MAX;
int32_t t79 = -42647;
int8_t x323 = -2;
int16_t x329 = INT16_MAX;
uint32_t x330 = 62492U;
uint8_t x334 = 22U;
uint64_t x336 = UINT64_MAX;
int8_t x343 = -45;
int16_t x344 = 0;
volatile int32_t t85 = 5339;
volatile int32_t x345 = -297681084;
int32_t x348 = INT32_MIN;
uint8_t x360 = 14U;
uint16_t x369 = UINT16_MAX;
int64_t x376 = INT64_MAX;
int32_t x380 = INT32_MIN;
int16_t x381 = INT16_MIN;
int16_t x388 = -1;
int16_t x395 = 1;
uint8_t x398 = 1U;
static uint64_t x402 = 0LLU;
int64_t x412 = -1LL;
uint32_t x416 = 42232777U;
uint32_t x418 = 59117474U;
static uint32_t x420 = 577U;
static int32_t x421 = INT32_MIN;
uint16_t x423 = 17U;
uint16_t x424 = UINT16_MAX;
int16_t x435 = -1;
int32_t x436 = INT32_MIN;
volatile int32_t t108 = 730482;
uint32_t x439 = UINT32_MAX;
int32_t t112 = 174233307;
int8_t x455 = -1;
int64_t x457 = INT64_MAX;
static volatile int8_t x458 = INT8_MIN;
int32_t t115 = 5777964;
volatile uint32_t x465 = UINT32_MAX;
static int32_t t117 = -112;
int16_t x474 = INT16_MIN;
uint32_t x475 = UINT32_MAX;
static volatile int32_t x476 = INT32_MAX;
uint16_t x480 = 571U;
int32_t t119 = 1;
int64_t x482 = INT64_MAX;
uint32_t x484 = 38682U;
volatile int16_t x488 = -74;
volatile int32_t t121 = 121;
int16_t x492 = -1;
static int16_t x493 = INT16_MIN;
static volatile uint64_t x498 = UINT64_MAX;
int32_t t124 = -26709;
int64_t x501 = -1LL;
static int32_t x507 = INT32_MIN;
uint32_t x513 = UINT32_MAX;
volatile uint16_t x515 = UINT16_MAX;
uint16_t x516 = 867U;
static uint64_t x524 = 11LLU;
int32_t x527 = INT32_MIN;
volatile int32_t t131 = -597;
uint32_t x530 = UINT32_MAX;
int8_t x536 = INT8_MIN;
int32_t t133 = -139540;
static int32_t x542 = INT32_MIN;
volatile uint8_t x543 = 1U;
static int8_t x544 = -1;
int32_t t135 = -5056;
int16_t x549 = -1;
int64_t x557 = -1LL;
uint64_t x559 = UINT64_MAX;
uint64_t x562 = UINT64_MAX;
int32_t x572 = INT32_MIN;
static volatile int16_t x573 = INT16_MIN;
volatile int32_t t143 = 1893182;
int64_t x580 = 99279683128111940LL;
volatile int16_t x581 = INT16_MIN;
static volatile int32_t t145 = -14325;
int32_t x587 = 2063;
int64_t x588 = -3LL;
static uint64_t x593 = 92607519407437LLU;
int32_t x594 = -86966758;
int8_t x609 = INT8_MIN;
static int16_t x628 = 30;
volatile uint8_t x630 = 17U;
int32_t x631 = 19593270;
int8_t x635 = -1;
uint8_t x641 = 8U;
static volatile int32_t t164 = 27;
int64_t x667 = INT64_MIN;
uint16_t x668 = 482U;
volatile int32_t t166 = -142426;
int16_t x671 = -1;
static volatile int32_t x675 = 986222;
int64_t x678 = -411895813159818LL;
volatile uint64_t x681 = 283102291048233173LLU;
volatile int8_t x688 = -1;
volatile int16_t x689 = INT16_MIN;
int16_t x698 = INT16_MIN;
int8_t x703 = INT8_MIN;
volatile int32_t t175 = -81458621;
uint32_t x705 = 18456360U;
int16_t x707 = INT16_MAX;
int16_t x708 = INT16_MAX;
int32_t x711 = -1;
int8_t x712 = INT8_MAX;
volatile int32_t t179 = 48459;
uint8_t x725 = UINT8_MAX;
int8_t x726 = -1;
volatile int32_t t181 = -1;
volatile int32_t t182 = -2;
int64_t x733 = -69452344LL;
static uint16_t x738 = 236U;
uint16_t x747 = UINT16_MAX;
int64_t x754 = -1LL;
static int32_t t188 = -1872825;
int32_t x764 = INT32_MIN;
int8_t x765 = INT8_MAX;
int32_t t191 = -2;
int16_t x776 = -1;
volatile int32_t t193 = 32;
volatile uint8_t x784 = 11U;
uint8_t x786 = UINT8_MAX;
volatile int32_t t198 = 13688;
int8_t x798 = 57;
static volatile int32_t t199 = -4061149;


void f0(void) {
    	static int8_t x1 = -1;
	int64_t x2 = -1LL;
	int8_t x3 = -1;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 575;

    t0 = ((x1>x2)!=(x3>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1444;
	static volatile int32_t x6 = INT32_MIN;
	int32_t x7 = -316;
	static int16_t x8 = 34;
	volatile int32_t t1 = 56;

    t1 = ((x5>x6)!=(x7>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 16U;
	uint8_t x11 = UINT8_MAX;
	static int64_t x12 = -1LL;
	static int32_t t2 = 3;

    t2 = ((x9>x10)!=(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = 8019;
	int16_t x14 = INT16_MIN;
	int32_t x16 = -1;
	volatile int32_t t3 = -44072880;

    t3 = ((x13>x14)!=(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 123372U;
	uint64_t x19 = 40269035191354LLU;
	static volatile int32_t t4 = 5889447;

    t4 = ((x17>x18)!=(x19>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	int64_t x22 = -549223776LL;
	uint32_t x24 = 6514063U;
	int32_t t5 = -217932;

    t5 = ((x21>x22)!=(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = INT8_MIN;
	uint8_t x27 = 13U;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 221038602;

    t6 = ((x25>x26)!=(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1;
	static uint8_t x31 = 1U;
	int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = -150;

    t7 = ((x29>x30)!=(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = UINT8_MAX;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = 492404;

    t8 = ((x33>x34)!=(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x40 = INT64_MIN;

    t9 = ((x37>x38)!=(x39>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = INT8_MIN;
	static uint64_t x42 = 71656550288975LLU;
	static int16_t x43 = INT16_MAX;
	int16_t x44 = -1314;
	int32_t t10 = -64807;

    t10 = ((x41>x42)!=(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int8_t x46 = 1;
	uint16_t x47 = 563U;
	volatile int32_t t11 = 444;

    t11 = ((x45>x46)!=(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 2U;
	volatile int32_t t12 = -1949445;

    t12 = ((x49>x50)!=(x51>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	static int8_t x54 = INT8_MAX;
	int64_t x55 = -1LL;
	int8_t x56 = -1;

    t13 = ((x53>x54)!=(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint16_t x58 = 32219U;
	int8_t x59 = -12;
	int16_t x60 = -2;
	int32_t t14 = -3;

    t14 = ((x57>x58)!=(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 8022;
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = 1;
	int32_t x64 = 95180;
	volatile int32_t t15 = -568106;

    t15 = ((x61>x62)!=(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 6U;
	int32_t t16 = 0;

    t16 = ((x65>x66)!=(x67>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 1U;
	int16_t x70 = INT16_MIN;

    t17 = ((x69>x70)!=(x71>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -45399162;

    t18 = ((x73>x74)!=(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x78 = 101388450016377780LL;
	volatile uint32_t x80 = UINT32_MAX;

    t19 = ((x77>x78)!=(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MAX;
	int64_t x83 = INT64_MAX;
	static int64_t x84 = -560230982656963883LL;
	static volatile int32_t t20 = 6863;

    t20 = ((x81>x82)!=(x83>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = 993454480U;
	int8_t x88 = INT8_MAX;

    t21 = ((x85>x86)!=(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = 1533;
	volatile int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = -1;
	int32_t t22 = 30;

    t22 = ((x89>x90)!=(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x94 = 27780067U;
	uint64_t x95 = 283455794836854105LLU;
	uint64_t x96 = UINT64_MAX;
	int32_t t23 = -107920;

    t23 = ((x93>x94)!=(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x99 = INT32_MIN;
	int16_t x100 = -1914;
	int32_t t24 = 4;

    t24 = ((x97>x98)!=(x99>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 139138545692117LL;
	uint16_t x103 = UINT16_MAX;
	uint8_t x104 = 1U;
	int32_t t25 = -65;

    t25 = ((x101>x102)!=(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 17;
	uint64_t x106 = UINT64_MAX;
	volatile int32_t t26 = -294661688;

    t26 = ((x105>x106)!=(x107>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = 31U;
	int32_t x110 = -1;
	int64_t x111 = -8LL;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -16285662;

    t27 = ((x109>x110)!=(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x115 = 13;
	static int8_t x116 = INT8_MIN;
	int32_t t28 = 195236;

    t28 = ((x113>x114)!=(x115>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 13U;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = 1U;
	volatile int32_t t29 = -55553184;

    t29 = ((x117>x118)!=(x119>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MIN;
	uint8_t x124 = 7U;

    t30 = ((x121>x122)!=(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = 96997;
	uint16_t x126 = UINT16_MAX;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = -21;

    t31 = ((x125>x126)!=(x127>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	uint64_t x131 = 57971LLU;

    t32 = ((x129>x130)!=(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 0;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = UINT8_MAX;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = -5946782;

    t33 = ((x133>x134)!=(x135>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int32_t t34 = -29520;

    t34 = ((x137>x138)!=(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x144 = INT32_MAX;
	volatile int32_t t35 = -47815293;

    t35 = ((x141>x142)!=(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	volatile int16_t x146 = 1660;
	uint32_t x147 = 1374534U;
	int32_t t36 = -41987889;

    t36 = ((x145>x146)!=(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 4U;
	static int8_t x150 = -1;
	static uint64_t x151 = 28601LLU;
	int8_t x152 = -1;
	volatile int32_t t37 = -404112;

    t37 = ((x149>x150)!=(x151>x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x155 = -1;
	int32_t x156 = INT32_MAX;
	static volatile int32_t t38 = 27;

    t38 = ((x153>x154)!=(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = 496618729915LLU;
	int32_t t39 = 6958;

    t39 = ((x157>x158)!=(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = 6022691;
	volatile uint16_t x163 = 240U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 188206;

    t40 = ((x161>x162)!=(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MAX;
	static uint8_t x166 = 60U;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;

    t41 = ((x165>x166)!=(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1;
	uint8_t x170 = UINT8_MAX;
	static int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = -2;

    t42 = ((x169>x170)!=(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x173 = -1;
	uint32_t x174 = 1666052036U;
	static int64_t x175 = INT64_MIN;
	volatile int32_t t43 = -12904117;

    t43 = ((x173>x174)!=(x175>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 1;
	int16_t x178 = 45;
	volatile int32_t x179 = -49681339;
	int64_t x180 = -2621LL;
	volatile int32_t t44 = -721302;

    t44 = ((x177>x178)!=(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = INT64_MIN;
	volatile uint8_t x184 = UINT8_MAX;
	int32_t t45 = -59284;

    t45 = ((x181>x182)!=(x183>x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	uint64_t x186 = 1LLU;
	uint16_t x187 = 37U;
	int32_t x188 = -211616358;
	volatile int32_t t46 = -3743502;

    t46 = ((x185>x186)!=(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	uint64_t x190 = UINT64_MAX;
	int8_t x192 = INT8_MAX;
	static volatile int32_t t47 = -89781181;

    t47 = ((x189>x190)!=(x191>x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 251340787205LL;
	int64_t x194 = INT64_MAX;
	volatile int64_t x195 = 222602144808LL;
	static int16_t x196 = -1;

    t48 = ((x193>x194)!=(x195>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -980820294543300LL;
	int64_t x198 = INT64_MAX;
	static int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -1;

    t49 = ((x197>x198)!=(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MIN;
	static int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	static int32_t x204 = -2;
	int32_t t50 = -171507645;

    t50 = ((x201>x202)!=(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t51 = 881133980;

    t51 = ((x205>x206)!=(x207>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	int8_t x210 = -1;
	int8_t x211 = -9;
	static volatile int16_t x212 = INT16_MAX;
	int32_t t52 = -1135460;

    t52 = ((x209>x210)!=(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x214 = INT32_MIN;
	uint8_t x215 = UINT8_MAX;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = 2250678;

    t53 = ((x213>x214)!=(x215>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	volatile int8_t x218 = 11;
	static uint64_t x219 = 462114LLU;
	int32_t t54 = -12;

    t54 = ((x217>x218)!=(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	uint16_t x224 = 15U;
	volatile int32_t t55 = 873993;

    t55 = ((x221>x222)!=(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -576650731;
	uint32_t x226 = 212U;
	uint8_t x227 = 90U;
	uint64_t x228 = UINT64_MAX;
	static int32_t t56 = -137847;

    t56 = ((x225>x226)!=(x227>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MIN;
	uint64_t x230 = 607290591LLU;
	uint8_t x231 = UINT8_MAX;
	static int16_t x232 = INT16_MIN;

    t57 = ((x229>x230)!=(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = UINT8_MAX;
	volatile int32_t x234 = INT32_MIN;
	int16_t x235 = 2983;
	static int64_t x236 = INT64_MIN;
	int32_t t58 = -53999;

    t58 = ((x233>x234)!=(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x237 = 29U;
	uint32_t x238 = 370U;
	int32_t x239 = 0;

    t59 = ((x237>x238)!=(x239>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -21LL;
	volatile int16_t x242 = -1297;
	static int32_t t60 = 1;

    t60 = ((x241>x242)!=(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = INT16_MIN;
	static volatile uint32_t x246 = 403U;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;

    t61 = ((x245>x246)!=(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MAX;
	uint32_t x251 = UINT32_MAX;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t62 = -117;

    t62 = ((x249>x250)!=(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x254 = 100340986LLU;
	int8_t x255 = -1;
	uint8_t x256 = 3U;
	int32_t t63 = -9;

    t63 = ((x253>x254)!=(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x258 = UINT16_MAX;
	int16_t x259 = -1;
	int32_t x260 = -20;
	volatile int32_t t64 = -39434846;

    t64 = ((x257>x258)!=(x259>x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	static int32_t x263 = 129714;
	volatile int32_t x264 = -1;
	int32_t t65 = 1589;

    t65 = ((x261>x262)!=(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	static int8_t x266 = INT8_MIN;
	int32_t t66 = -2982;

    t66 = ((x265>x266)!=(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x269 = 3U;
	int8_t x270 = -1;
	uint16_t x272 = 517U;

    t67 = ((x269>x270)!=(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	uint32_t x274 = 14U;
	int8_t x275 = 15;
	volatile int32_t t68 = -493877843;

    t68 = ((x273>x274)!=(x275>x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x279 = -19;

    t69 = ((x277>x278)!=(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	volatile int16_t x283 = INT16_MIN;
	int32_t t70 = 118153;

    t70 = ((x281>x282)!=(x283>x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = INT64_MIN;
	int16_t x287 = 56;
	static int32_t t71 = 194502;

    t71 = ((x285>x286)!=(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = INT16_MIN;
	uint8_t x291 = 2U;
	static int64_t x292 = INT64_MIN;

    t72 = ((x289>x290)!=(x291>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = 536519324LLU;
	volatile int32_t t73 = -85745;

    t73 = ((x293>x294)!=(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x298 = INT32_MIN;
	uint64_t x299 = 3680707LLU;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = 167932;

    t74 = ((x297>x298)!=(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = -1;
	volatile int64_t x302 = -1LL;
	static int8_t x303 = INT8_MIN;
	static uint32_t x304 = 14U;
	volatile int32_t t75 = 893;

    t75 = ((x301>x302)!=(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MIN;
	uint16_t x306 = 53U;
	uint8_t x308 = 1U;
	int32_t t76 = -11379;

    t76 = ((x305>x306)!=(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MAX;
	int32_t t77 = -69246488;

    t77 = ((x309>x310)!=(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -41LL;
	int32_t x314 = -424754;
	int16_t x315 = INT16_MIN;
	int16_t x316 = -1;
	int32_t t78 = -2800102;

    t78 = ((x313>x314)!=(x315>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = -1LL;
	volatile int64_t x319 = -1LL;
	volatile uint16_t x320 = 614U;

    t79 = ((x317>x318)!=(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	int64_t x322 = INT64_MAX;
	static int8_t x324 = -9;
	int32_t t80 = 4526931;

    t80 = ((x321>x322)!=(x323>x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	int64_t x326 = -1513928048LL;
	int16_t x327 = 114;
	uint32_t x328 = 1U;
	int32_t t81 = -32643;

    t81 = ((x325>x326)!=(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x331 = 7;
	static uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = 13812756;

    t82 = ((x329>x330)!=(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MIN;
	uint8_t x335 = 27U;
	volatile int32_t t83 = -1034147;

    t83 = ((x333>x334)!=(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	static int16_t x340 = -1;
	volatile int32_t t84 = 146;

    t84 = ((x337>x338)!=(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MIN;
	static uint8_t x342 = 118U;

    t85 = ((x341>x342)!=(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x346 = 143506520U;
	uint32_t x347 = 27236951U;
	volatile int32_t t86 = -499837767;

    t86 = ((x345>x346)!=(x347>x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = 2;
	volatile int64_t x350 = 0LL;
	uint16_t x351 = 12U;
	static int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -7718741;

    t87 = ((x349>x350)!=(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	int16_t x355 = -1;
	int16_t x356 = 109;
	static volatile int32_t t88 = 0;

    t88 = ((x353>x354)!=(x355>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MIN;
	int8_t x359 = 54;
	int32_t t89 = -112471;

    t89 = ((x357>x358)!=(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -28;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MAX;
	volatile int8_t x364 = -1;
	volatile int32_t t90 = 120;

    t90 = ((x361>x362)!=(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -185206803638533LL;
	int8_t x366 = -1;
	volatile uint32_t x367 = 11U;
	static int8_t x368 = 1;
	volatile int32_t t91 = 330;

    t91 = ((x365>x366)!=(x367>x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x370 = 32U;
	uint16_t x371 = 7985U;
	uint32_t x372 = 243352U;
	int32_t t92 = -1;

    t92 = ((x369>x370)!=(x371>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = INT32_MIN;
	int32_t x374 = 1;
	static int8_t x375 = -1;
	int32_t t93 = 15107712;

    t93 = ((x373>x374)!=(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = -35;
	int8_t x378 = -24;
	int64_t x379 = -65485079741853064LL;
	int32_t t94 = -209192;

    t94 = ((x377>x378)!=(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = INT32_MIN;
	static int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MAX;
	int32_t t95 = 5807;

    t95 = ((x381>x382)!=(x383>x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 165849U;
	volatile int16_t x386 = INT16_MAX;
	static uint32_t x387 = 97U;
	static int32_t t96 = -183;

    t96 = ((x385>x386)!=(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -2731;
	static int8_t x390 = -8;
	static volatile int8_t x391 = INT8_MAX;
	uint8_t x392 = 54U;
	volatile int32_t t97 = -1;

    t97 = ((x389>x390)!=(x391>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 6U;
	static uint8_t x394 = 1U;
	uint64_t x396 = 10801LLU;
	volatile int32_t t98 = 529331962;

    t98 = ((x393>x394)!=(x395>x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 3380258U;
	static int64_t x399 = 3LL;
	uint32_t x400 = UINT32_MAX;
	static volatile int32_t t99 = -1686744;

    t99 = ((x397>x398)!=(x399>x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	uint8_t x403 = 5U;
	int32_t x404 = 0;
	int32_t t100 = 547389578;

    t100 = ((x401>x402)!=(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 32599U;
	int8_t x406 = -1;
	uint16_t x407 = UINT16_MAX;
	int64_t x408 = -1LL;
	int32_t t101 = 158092;

    t101 = ((x405>x406)!=(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1;
	int32_t x410 = INT32_MAX;
	int8_t x411 = INT8_MAX;
	volatile int32_t t102 = -7;

    t102 = ((x409>x410)!=(x411>x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 2579U;
	volatile uint32_t x414 = 10U;
	int16_t x415 = INT16_MIN;
	int32_t t103 = -534;

    t103 = ((x413>x414)!=(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	uint8_t x419 = 16U;
	volatile int32_t t104 = 31;

    t104 = ((x417>x418)!=(x419>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x422 = -1LL;
	int32_t t105 = -88150;

    t105 = ((x421>x422)!=(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	uint64_t x426 = 109602518LLU;
	uint16_t x427 = 370U;
	int64_t x428 = 1020167713386778755LL;
	volatile int32_t t106 = 319;

    t106 = ((x425>x426)!=(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	static uint64_t x430 = UINT64_MAX;
	int8_t x431 = INT8_MIN;
	static volatile uint16_t x432 = 14671U;
	volatile int32_t t107 = 35928734;

    t107 = ((x429>x430)!=(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 124U;
	static volatile uint16_t x434 = UINT16_MAX;

    t108 = ((x433>x434)!=(x435>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	int8_t x438 = INT8_MAX;
	int16_t x440 = -875;
	int32_t t109 = -5016;

    t109 = ((x437>x438)!=(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	uint32_t x442 = 181340414U;
	int32_t x443 = INT32_MAX;
	uint16_t x444 = UINT16_MAX;
	int32_t t110 = -7;

    t110 = ((x441>x442)!=(x443>x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 177364398LLU;
	volatile int32_t x446 = INT32_MIN;
	static volatile uint32_t x447 = 363U;
	static int16_t x448 = -14;
	volatile int32_t t111 = 263;

    t111 = ((x445>x446)!=(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 2U;
	volatile uint64_t x450 = 379LLU;
	uint16_t x451 = 42U;
	uint16_t x452 = 4U;

    t112 = ((x449>x450)!=(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 43U;
	volatile int64_t x454 = INT64_MAX;
	int32_t x456 = INT32_MIN;
	volatile int32_t t113 = 1;

    t113 = ((x453>x454)!=(x455>x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x459 = INT32_MIN;
	int32_t x460 = -15025883;
	int32_t t114 = 1;

    t114 = ((x457>x458)!=(x459>x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	static volatile int16_t x462 = -6;
	volatile int8_t x463 = -1;
	int8_t x464 = 15;

    t115 = ((x461>x462)!=(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x466 = 0U;
	static int64_t x467 = INT64_MAX;
	int32_t x468 = -147248325;
	int32_t t116 = 46160882;

    t116 = ((x465>x466)!=(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = INT32_MAX;
	volatile int32_t x470 = 15822093;
	int16_t x471 = -3277;
	static uint32_t x472 = 6612U;

    t117 = ((x469>x470)!=(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 641005LL;
	volatile int32_t t118 = -12;

    t118 = ((x473>x474)!=(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	static uint8_t x478 = 9U;
	uint8_t x479 = UINT8_MAX;

    t119 = ((x477>x478)!=(x479>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = -1;
	int8_t x483 = -55;
	int32_t t120 = 250512;

    t120 = ((x481>x482)!=(x483>x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MIN;
	static int8_t x486 = INT8_MIN;
	volatile int16_t x487 = -8;

    t121 = ((x485>x486)!=(x487>x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MAX;
	int16_t x490 = INT16_MIN;
	int64_t x491 = 460LL;
	volatile int32_t t122 = 51120570;

    t122 = ((x489>x490)!=(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x494 = 426U;
	static int8_t x495 = INT8_MIN;
	int64_t x496 = 65237766LL;
	int32_t t123 = -113561300;

    t123 = ((x493>x494)!=(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	static int8_t x499 = INT8_MIN;
	volatile int64_t x500 = 6816294705LL;

    t124 = ((x497>x498)!=(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = INT16_MAX;
	uint16_t x503 = UINT16_MAX;
	volatile int32_t x504 = INT32_MAX;
	volatile int32_t t125 = -12139;

    t125 = ((x501>x502)!=(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x505 = 1288U;
	uint64_t x506 = 9985747226443LLU;
	int16_t x508 = INT16_MIN;
	volatile int32_t t126 = -80120105;

    t126 = ((x505>x506)!=(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 297U;
	int32_t x510 = -1;
	uint32_t x511 = UINT32_MAX;
	int16_t x512 = -1;
	int32_t t127 = -963537;

    t127 = ((x509>x510)!=(x511>x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = -1;
	int32_t t128 = -9870;

    t128 = ((x513>x514)!=(x515>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = 6LLU;
	int32_t x518 = -1;
	uint16_t x519 = 549U;
	int8_t x520 = INT8_MIN;
	static volatile int32_t t129 = 5157900;

    t129 = ((x517>x518)!=(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = 7408U;
	static int8_t x522 = -1;
	int64_t x523 = 338LL;
	int32_t t130 = 51;

    t130 = ((x521>x522)!=(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MAX;
	int8_t x526 = -9;
	volatile int32_t x528 = INT32_MIN;

    t131 = ((x525>x526)!=(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x529 = -1;
	int64_t x531 = -1538470809713636LL;
	uint32_t x532 = UINT32_MAX;
	volatile int32_t t132 = -7;

    t132 = ((x529>x530)!=(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	static uint16_t x535 = 57U;

    t133 = ((x533>x534)!=(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	int8_t x538 = INT8_MIN;
	volatile int32_t x539 = 283072;
	uint32_t x540 = 26648869U;
	int32_t t134 = 462484;

    t134 = ((x537>x538)!=(x539>x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = -169;

    t135 = ((x541>x542)!=(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 5;
	uint16_t x546 = UINT16_MAX;
	int32_t x547 = INT32_MAX;
	volatile uint64_t x548 = UINT64_MAX;
	int32_t t136 = -1;

    t136 = ((x545>x546)!=(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -4;
	int32_t x551 = -1;
	static uint8_t x552 = 14U;
	int32_t t137 = -1;

    t137 = ((x549>x550)!=(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 9110598U;
	int16_t x554 = INT16_MIN;
	static int64_t x555 = INT64_MIN;
	uint64_t x556 = 3160671123LLU;
	int32_t t138 = -7;

    t138 = ((x553>x554)!=(x555>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x558 = INT32_MIN;
	int32_t x560 = INT32_MIN;
	int32_t t139 = 96010;

    t139 = ((x557>x558)!=(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 139255277872960663LLU;
	int16_t x563 = INT16_MIN;
	static uint32_t x564 = 6446538U;
	static int32_t t140 = -23715012;

    t140 = ((x561>x562)!=(x563>x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint32_t x566 = UINT32_MAX;
	volatile uint32_t x567 = UINT32_MAX;
	int16_t x568 = INT16_MAX;
	int32_t t141 = 5131827;

    t141 = ((x565>x566)!=(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MAX;
	static volatile int64_t x570 = -3LL;
	int32_t x571 = INT32_MIN;
	int32_t t142 = -38969;

    t142 = ((x569>x570)!=(x571>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x574 = UINT16_MAX;
	int32_t x575 = INT32_MAX;
	int16_t x576 = -1;

    t143 = ((x573>x574)!=(x575>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x577 = -1;
	volatile int16_t x578 = INT16_MIN;
	int16_t x579 = -1;
	int32_t t144 = 13255;

    t144 = ((x577>x578)!=(x579>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = INT64_MIN;
	uint32_t x583 = 121U;
	uint8_t x584 = 15U;

    t145 = ((x581>x582)!=(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int8_t x586 = -1;
	static volatile int32_t t146 = 4;

    t146 = ((x585>x586)!=(x587>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	static volatile uint32_t x590 = 343U;
	int64_t x591 = INT64_MIN;
	uint16_t x592 = UINT16_MAX;
	volatile int32_t t147 = 95213236;

    t147 = ((x589>x590)!=(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x595 = INT16_MAX;
	int8_t x596 = 25;
	int32_t t148 = -3203521;

    t148 = ((x593>x594)!=(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x598 = -1;
	static uint32_t x599 = 1544782U;
	static int32_t x600 = INT32_MIN;
	static volatile int32_t t149 = 10792533;

    t149 = ((x597>x598)!=(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	static uint64_t x602 = UINT64_MAX;
	int64_t x603 = -1LL;
	int32_t x604 = -1;
	int32_t t150 = 18777;

    t150 = ((x601>x602)!=(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MAX;
	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MIN;
	volatile int32_t x608 = INT32_MIN;
	volatile int32_t t151 = -375111;

    t151 = ((x605>x606)!=(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = -1LL;
	static uint32_t x611 = 46U;
	int32_t x612 = INT32_MIN;
	volatile int32_t t152 = 45;

    t152 = ((x609>x610)!=(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = INT64_MIN;
	static uint32_t x614 = UINT32_MAX;
	uint16_t x615 = UINT16_MAX;
	int8_t x616 = -1;
	volatile int32_t t153 = -153314;

    t153 = ((x613>x614)!=(x615>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -25;
	volatile int32_t x618 = INT32_MIN;
	int8_t x619 = -11;
	uint32_t x620 = 51148U;
	static int32_t t154 = 109890;

    t154 = ((x617>x618)!=(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	static int8_t x622 = INT8_MAX;
	static int16_t x623 = 4;
	uint64_t x624 = 3260719901293253LLU;
	int32_t t155 = -6857;

    t155 = ((x621>x622)!=(x623>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = -3;
	int16_t x626 = 9;
	static uint32_t x627 = 2U;
	static volatile int32_t t156 = 55;

    t156 = ((x625>x626)!=(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = INT16_MAX;
	int16_t x632 = 11210;
	int32_t t157 = 5388;

    t157 = ((x629>x630)!=(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	static int8_t x634 = INT8_MIN;
	int32_t x636 = -19;
	int32_t t158 = 0;

    t158 = ((x633>x634)!=(x635>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = 1;
	int32_t x638 = INT32_MAX;
	int32_t x639 = INT32_MIN;
	volatile int32_t x640 = INT32_MIN;
	volatile int32_t t159 = 3496;

    t159 = ((x637>x638)!=(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x642 = INT64_MIN;
	uint64_t x643 = 270014182396057LLU;
	int64_t x644 = -23519335LL;
	volatile int32_t t160 = 2;

    t160 = ((x641>x642)!=(x643>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	uint64_t x646 = 34894LLU;
	static int64_t x647 = 388462LL;
	static int8_t x648 = INT8_MIN;
	int32_t t161 = 3159;

    t161 = ((x645>x646)!=(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = 1;
	int32_t x650 = -1;
	uint64_t x651 = UINT64_MAX;
	uint8_t x652 = 17U;
	volatile int32_t t162 = 7728019;

    t162 = ((x649>x650)!=(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	volatile int8_t x654 = 1;
	volatile int32_t x655 = -1;
	static int32_t x656 = -14;
	volatile int32_t t163 = -2947515;

    t163 = ((x653>x654)!=(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 64971628973LLU;
	static int8_t x658 = -9;
	int16_t x659 = INT16_MIN;
	int64_t x660 = INT64_MIN;

    t164 = ((x657>x658)!=(x659>x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	uint8_t x662 = 7U;
	int32_t x663 = INT32_MAX;
	uint32_t x664 = 1843526U;
	volatile int32_t t165 = 0;

    t165 = ((x661>x662)!=(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = INT8_MAX;
	int16_t x666 = INT16_MAX;

    t166 = ((x665>x666)!=(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 4339149632934LLU;
	int8_t x670 = INT8_MIN;
	static uint16_t x672 = 16U;
	int32_t t167 = -781737;

    t167 = ((x669>x670)!=(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	uint32_t x674 = UINT32_MAX;
	uint64_t x676 = 459159822474LLU;
	volatile int32_t t168 = -371362;

    t168 = ((x673>x674)!=(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = 8646U;
	int16_t x679 = -1;
	static int16_t x680 = -1;
	static volatile int32_t t169 = 0;

    t169 = ((x677>x678)!=(x679>x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = 47404LLU;
	uint8_t x683 = 94U;
	static volatile int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 826835;

    t170 = ((x681>x682)!=(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 7766;
	int64_t x686 = INT64_MAX;
	int8_t x687 = 0;
	int32_t t171 = 103;

    t171 = ((x685>x686)!=(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x690 = 14366378573LLU;
	int64_t x691 = INT64_MIN;
	uint32_t x692 = UINT32_MAX;
	volatile int32_t t172 = -20981;

    t172 = ((x689>x690)!=(x691>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MIN;
	int16_t x694 = INT16_MAX;
	int16_t x695 = INT16_MIN;
	volatile uint8_t x696 = 3U;
	int32_t t173 = 342790647;

    t173 = ((x693>x694)!=(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = INT16_MIN;
	int64_t x699 = INT64_MIN;
	uint64_t x700 = 1888231522768322LLU;
	static int32_t t174 = 85209;

    t174 = ((x697>x698)!=(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	static uint16_t x702 = 4236U;
	volatile int16_t x704 = INT16_MAX;

    t175 = ((x701>x702)!=(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = -9;
	static volatile int32_t t176 = 161380;

    t176 = ((x705>x706)!=(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int64_t x710 = -223727LL;
	volatile int32_t t177 = 224597;

    t177 = ((x709>x710)!=(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	static int64_t x714 = INT64_MIN;
	static uint8_t x715 = UINT8_MAX;
	int64_t x716 = 1764826057778052941LL;
	volatile int32_t t178 = 3706279;

    t178 = ((x713>x714)!=(x715>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = INT8_MIN;
	static int16_t x718 = INT16_MAX;
	uint8_t x719 = 113U;
	int16_t x720 = -1;

    t179 = ((x717>x718)!=(x719>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int16_t x722 = INT16_MAX;
	static int16_t x723 = INT16_MIN;
	uint64_t x724 = 5032089935355LLU;
	static volatile int32_t t180 = 143;

    t180 = ((x721>x722)!=(x723>x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x727 = 390702470U;
	volatile uint8_t x728 = 2U;

    t181 = ((x725>x726)!=(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 0U;
	int32_t x730 = -296;
	volatile int32_t x731 = INT32_MAX;
	int8_t x732 = 16;

    t182 = ((x729>x730)!=(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x734 = 2U;
	static int8_t x735 = 1;
	uint64_t x736 = 58059782834028LLU;
	int32_t t183 = 231256;

    t183 = ((x733>x734)!=(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 1U;
	int8_t x739 = INT8_MIN;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = 802875;

    t184 = ((x737>x738)!=(x739>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -91;
	int8_t x742 = -5;
	int64_t x743 = INT64_MIN;
	volatile int64_t x744 = INT64_MIN;
	int32_t t185 = -1437;

    t185 = ((x741>x742)!=(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	int16_t x746 = 1;
	uint32_t x748 = UINT32_MAX;
	volatile int32_t t186 = -3817643;

    t186 = ((x745>x746)!=(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile int8_t x750 = -1;
	int16_t x751 = 250;
	int16_t x752 = -1;
	static int32_t t187 = 356;

    t187 = ((x749>x750)!=(x751>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 59U;
	uint16_t x755 = UINT16_MAX;
	int64_t x756 = INT64_MIN;

    t188 = ((x753>x754)!=(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x757 = 3329244U;
	volatile uint8_t x758 = UINT8_MAX;
	int8_t x759 = 0;
	int32_t x760 = INT32_MIN;
	int32_t t189 = -3840;

    t189 = ((x757>x758)!=(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = 165;
	int8_t x762 = -1;
	uint32_t x763 = 1106U;
	volatile int32_t t190 = 297;

    t190 = ((x761>x762)!=(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x766 = 6423550U;
	volatile int8_t x767 = -1;
	static uint16_t x768 = 7123U;

    t191 = ((x765>x766)!=(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	static uint64_t x770 = 263LLU;
	volatile uint64_t x771 = 52170LLU;
	static volatile int8_t x772 = 14;
	volatile int32_t t192 = -426;

    t192 = ((x769>x770)!=(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x773 = INT32_MAX;
	int16_t x774 = -1;
	volatile uint16_t x775 = 59U;

    t193 = ((x773>x774)!=(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -1;
	uint16_t x778 = 9U;
	volatile uint8_t x779 = UINT8_MAX;
	static int8_t x780 = 4;
	volatile int32_t t194 = 60871;

    t194 = ((x777>x778)!=(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -5LL;
	int64_t x782 = INT64_MIN;
	static int16_t x783 = INT16_MAX;
	int32_t t195 = -303617;

    t195 = ((x781>x782)!=(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = UINT32_MAX;
	int32_t x787 = INT32_MIN;
	int8_t x788 = INT8_MAX;
	int32_t t196 = 991;

    t196 = ((x785>x786)!=(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 105696516543LLU;
	int8_t x790 = -9;
	int32_t x791 = -127;
	static int8_t x792 = -4;
	static int32_t t197 = -181;

    t197 = ((x789>x790)!=(x791>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = INT32_MIN;
	static int16_t x794 = INT16_MAX;
	int16_t x795 = INT16_MIN;
	int8_t x796 = INT8_MIN;

    t198 = ((x793>x794)!=(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x799 = INT16_MIN;
	int16_t x800 = INT16_MAX;

    t199 = ((x797>x798)!=(x799>x800));

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

