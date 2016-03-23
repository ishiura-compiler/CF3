
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

static volatile int16_t x6 = 1;
int64_t x8 = -1LL;
uint32_t x9 = UINT32_MAX;
static int64_t x10 = INT64_MIN;
volatile int32_t x11 = INT32_MIN;
volatile int32_t t2 = 2;
uint8_t x18 = UINT8_MAX;
volatile int32_t t5 = -126;
int32_t x25 = 2553173;
static uint32_t x35 = UINT32_MAX;
int64_t x47 = INT64_MIN;
uint32_t x49 = 5703U;
uint8_t x50 = 4U;
static int16_t x51 = -4748;
uint16_t x52 = 464U;
int8_t x60 = -1;
int8_t x61 = 2;
static uint8_t x62 = 2U;
int32_t x67 = -1;
uint8_t x69 = UINT8_MAX;
volatile int64_t x70 = -969381LL;
uint16_t x71 = 242U;
volatile int8_t x76 = -13;
static volatile uint64_t x78 = 1053895LLU;
volatile int8_t x80 = INT8_MAX;
static int32_t t19 = -53182131;
int32_t x83 = INT32_MAX;
static volatile int32_t x85 = INT32_MIN;
int16_t x88 = INT16_MIN;
int64_t x89 = -1LL;
int32_t x90 = INT32_MIN;
uint8_t x92 = 34U;
uint16_t x93 = 1U;
static int32_t x99 = INT32_MIN;
int64_t x101 = INT64_MIN;
int16_t x105 = -1;
volatile int64_t x113 = INT64_MIN;
uint16_t x114 = 7U;
uint64_t x116 = 3033LLU;
int32_t t29 = 28725;
uint16_t x122 = 1226U;
uint16_t x131 = 84U;
int32_t t34 = -1662457;
uint8_t x152 = UINT8_MAX;
uint64_t x165 = 500611166941308LLU;
volatile int32_t t41 = 0;
int64_t x171 = INT64_MAX;
static volatile int16_t x175 = INT16_MIN;
volatile uint64_t x176 = 1095902095980LLU;
static int16_t x180 = INT16_MAX;
int32_t x182 = -1;
volatile uint32_t x189 = 3231U;
volatile int16_t x195 = -1;
volatile int32_t t50 = -1;
uint16_t x207 = 0U;
int32_t t51 = 14368734;
volatile uint16_t x213 = 1313U;
volatile int64_t x217 = INT64_MAX;
int8_t x222 = INT8_MIN;
int8_t x231 = 12;
int32_t x233 = INT32_MIN;
int32_t x236 = INT32_MIN;
int32_t t59 = -207;
int32_t x244 = -65542040;
volatile int32_t t60 = 102;
int64_t x259 = INT64_MIN;
int32_t x264 = INT32_MIN;
uint64_t x269 = UINT64_MAX;
static int16_t x270 = INT16_MAX;
volatile int64_t x271 = 1974002221396802183LL;
uint16_t x273 = 11756U;
int8_t x276 = 1;
int32_t t68 = 12638;
uint16_t x278 = UINT16_MAX;
static uint8_t x281 = UINT8_MAX;
int64_t x284 = INT64_MIN;
uint16_t x287 = UINT16_MAX;
static uint16_t x288 = 511U;
volatile int64_t x300 = 108918843010961LL;
static volatile int32_t t74 = -3659094;
uint64_t x303 = UINT64_MAX;
int32_t x311 = INT32_MAX;
int64_t x317 = 1330LL;
static uint8_t x324 = UINT8_MAX;
volatile int16_t x326 = 1145;
volatile uint8_t x328 = 22U;
int32_t t82 = 924090859;
uint64_t x340 = 70113203063145LLU;
int16_t x341 = INT16_MIN;
uint64_t x348 = 8525LLU;
static uint32_t x349 = 433215U;
static int16_t x350 = INT16_MAX;
volatile int32_t x351 = INT32_MIN;
int64_t x352 = INT64_MAX;
int32_t t90 = 235579156;
int32_t x366 = -1;
uint16_t x370 = 238U;
int32_t x372 = 87;
int32_t t94 = -135;
int32_t x381 = 119177054;
int32_t t97 = -8008223;
int64_t x393 = INT64_MAX;
int32_t x396 = INT32_MIN;
int16_t x402 = INT16_MIN;
int16_t x406 = INT16_MIN;
int64_t x407 = 57447LL;
uint64_t x408 = 693LLU;
int32_t t101 = -10;
volatile int64_t x412 = INT64_MIN;
volatile int32_t t104 = 44199621;
int32_t t105 = 1210429;
int8_t x432 = 17;
static volatile int32_t t111 = -60145;
uint64_t x457 = 151212828904749444LLU;
int64_t x459 = 872190LL;
volatile int32_t t114 = -4;
volatile int32_t t116 = 1362;
uint64_t x469 = 212778LLU;
uint32_t x475 = 4928905U;
int8_t x476 = 1;
uint16_t x478 = 454U;
int16_t x482 = -1;
uint64_t x492 = UINT64_MAX;
int64_t x496 = INT64_MIN;
int32_t t123 = 3647;
int32_t t125 = -36088145;
volatile uint32_t x507 = UINT32_MAX;
volatile uint64_t x511 = 5840631350790LLU;
volatile int16_t x523 = INT16_MIN;
int16_t x525 = 6517;
volatile int32_t t132 = -74;
int64_t x536 = -1LL;
int16_t x540 = INT16_MAX;
volatile int32_t t134 = -1;
volatile int16_t x551 = -103;
uint8_t x552 = UINT8_MAX;
int8_t x554 = INT8_MIN;
int8_t x558 = 36;
int16_t x563 = INT16_MAX;
volatile uint8_t x564 = 119U;
static volatile int32_t t142 = -23780262;
int8_t x573 = INT8_MAX;
volatile int64_t x575 = -32LL;
static int8_t x578 = -1;
volatile int32_t t144 = 1;
int16_t x582 = -49;
uint64_t x590 = 235131691263567LLU;
int32_t t147 = -966418378;
int64_t x608 = INT64_MAX;
int32_t t152 = 22368;
int64_t x613 = 7947055448541570LL;
uint32_t x625 = 2181U;
volatile uint64_t x626 = UINT64_MAX;
volatile int32_t x628 = -1;
int32_t t158 = -347405108;
int8_t x637 = -1;
int16_t x642 = -1265;
static volatile int16_t x644 = 1754;
int32_t t160 = 347733;
uint32_t x645 = UINT32_MAX;
static int16_t x647 = -1;
static int16_t x648 = -1;
int64_t x649 = -132494482958458LL;
int8_t x651 = INT8_MIN;
int8_t x652 = 10;
static uint8_t x657 = 1U;
volatile int16_t x664 = -20;
volatile int32_t t165 = 953895636;
volatile uint16_t x673 = UINT16_MAX;
int64_t x674 = INT64_MAX;
int32_t x675 = INT32_MIN;
static int32_t x685 = -1;
static uint64_t x686 = UINT64_MAX;
volatile int8_t x687 = -12;
int16_t x688 = INT16_MAX;
static volatile int16_t x689 = INT16_MIN;
static volatile uint32_t x690 = 47061U;
static volatile uint16_t x695 = UINT16_MAX;
volatile uint64_t x696 = UINT64_MAX;
volatile int32_t t173 = 405359556;
uint8_t x698 = 20U;
int32_t x703 = -2107071;
volatile int32_t x705 = 105;
int64_t x707 = 0LL;
int32_t x709 = -1;
uint32_t x716 = 43372U;
volatile int8_t x718 = INT8_MAX;
int32_t t181 = -457;
static int64_t x730 = INT64_MIN;
int16_t x738 = INT16_MIN;
int8_t x743 = -1;
static volatile int8_t x745 = -5;
int32_t x753 = INT32_MIN;
volatile int32_t t190 = -733898835;
int8_t x766 = INT8_MIN;
int32_t x767 = -16;
static int32_t x768 = -1;
int32_t x771 = INT32_MIN;
int8_t x773 = -3;
int64_t x774 = INT64_MIN;
static volatile int32_t t193 = -713;
uint16_t x780 = 11763U;
int64_t x782 = INT64_MIN;
int64_t x783 = -60012LL;
int64_t x791 = -524706LL;
int8_t x793 = -1;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int16_t x2 = INT16_MIN;
	volatile int8_t x3 = 0;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -125805;

    t0 = (((x1<=x2)>x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	int32_t x7 = INT32_MIN;
	static int32_t t1 = -164697683;

    t1 = (((x5<=x6)>x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x12 = INT8_MIN;

    t2 = (((x9<=x10)>x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	static int64_t x14 = INT64_MAX;
	volatile int64_t x15 = INT64_MIN;
	int32_t x16 = -404;
	int32_t t3 = -18;

    t3 = (((x13<=x14)>x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	static uint8_t x19 = UINT8_MAX;
	volatile int32_t x20 = 255;
	volatile int32_t t4 = -576594;

    t4 = (((x17<=x18)>x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -9290;
	volatile int16_t x22 = -1;
	uint8_t x23 = 36U;
	int64_t x24 = INT64_MAX;

    t5 = (((x21<=x22)>x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = 3U;
	uint16_t x27 = UINT16_MAX;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -1882;

    t6 = (((x25<=x26)>x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 203386U;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -478;
	volatile int8_t x32 = 1;
	volatile int32_t t7 = 6503899;

    t7 = (((x29<=x30)>x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int32_t x34 = INT32_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 0;

    t8 = (((x33<=x34)>x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	static int64_t x38 = 1412799877144LL;
	static int64_t x39 = -111541069539LL;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -1006040256;

    t9 = (((x37<=x38)>x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 62U;
	static int16_t x42 = -1;
	uint32_t x43 = 465901U;
	int16_t x44 = 12;
	volatile int32_t t10 = 11;

    t10 = (((x41<=x42)>x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 2095653433981LL;
	int8_t x46 = INT8_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -44;

    t11 = (((x45<=x46)>x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t t12 = 16;

    t12 = (((x49<=x50)>x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -161;
	uint32_t x54 = 4173U;
	uint8_t x55 = UINT8_MAX;
	volatile int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -194;

    t13 = (((x53<=x54)>x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	int32_t x58 = 306335364;
	static uint64_t x59 = 5243643413LLU;
	int32_t t14 = -84950;

    t14 = (((x57<=x58)>x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x63 = INT16_MIN;
	static uint64_t x64 = 85545340440539LLU;
	static volatile int32_t t15 = 56272;

    t15 = (((x61<=x62)>x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = 7686169LL;
	uint32_t x68 = 659185U;
	int32_t t16 = -397625646;

    t16 = (((x65<=x66)>x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x72 = 261739U;
	volatile int32_t t17 = 362;

    t17 = (((x69<=x70)>x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	int32_t t18 = -175089;

    t18 = (((x73<=x74)>x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	static int16_t x79 = -19;

    t19 = (((x77<=x78)>x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -53158118486LL;
	int32_t x82 = 30635387;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -10;

    t20 = (((x81<=x82)>x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = -1;
	static volatile uint32_t x87 = 30U;
	volatile int32_t t21 = -467618986;

    t21 = (((x85<=x86)>x87)>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x91 = UINT8_MAX;
	volatile int32_t t22 = 4444;

    t22 = (((x89<=x90)>x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MIN;
	int8_t x95 = -1;
	int64_t x96 = INT64_MIN;
	static int32_t t23 = 253482860;

    t23 = (((x93<=x94)>x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	static int8_t x98 = INT8_MIN;
	volatile int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 983;

    t24 = (((x97<=x98)>x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = INT8_MAX;
	volatile int16_t x103 = INT16_MIN;
	uint64_t x104 = 16231LLU;
	static int32_t t25 = -1201;

    t25 = (((x101<=x102)>x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = 0U;
	static uint32_t x107 = UINT32_MAX;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -109;

    t26 = (((x105<=x106)>x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 2;
	volatile int16_t x110 = INT16_MIN;
	static int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = -28;

    t27 = (((x109<=x110)>x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x115 = 2;
	int32_t t28 = -6;

    t28 = (((x113<=x114)>x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x117 = INT32_MIN;
	uint8_t x118 = UINT8_MAX;
	uint8_t x119 = 26U;
	uint32_t x120 = 3U;

    t29 = (((x117<=x118)>x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x123 = INT64_MAX;
	uint16_t x124 = 863U;
	int32_t t30 = 3734066;

    t30 = (((x121<=x122)>x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	uint8_t x126 = UINT8_MAX;
	volatile uint16_t x127 = 6U;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = 2;

    t31 = (((x125<=x126)>x127)>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 225512633999LL;
	int8_t x130 = INT8_MIN;
	int8_t x132 = -1;
	int32_t t32 = -239727;

    t32 = (((x129<=x130)>x131)>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int32_t x134 = 0;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = UINT8_MAX;
	static int32_t t33 = -84;

    t33 = (((x133<=x134)>x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	static int64_t x138 = -8931306923LL;
	uint16_t x139 = 31821U;
	int16_t x140 = INT16_MIN;

    t34 = (((x137<=x138)>x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	static int16_t x142 = -488;
	volatile uint64_t x143 = 1707029030376LLU;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = -4158677;

    t35 = (((x141<=x142)>x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = 267111857122089980LLU;
	volatile int32_t x146 = INT32_MAX;
	volatile int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MAX;
	int32_t t36 = 56;

    t36 = (((x145<=x146)>x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1167150;
	int16_t x150 = -4595;
	static uint16_t x151 = 0U;
	static int32_t t37 = 6286;

    t37 = (((x149<=x150)>x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = -1;
	int16_t x154 = 37;
	int64_t x155 = INT64_MAX;
	volatile int16_t x156 = -891;
	volatile int32_t t38 = -29080;

    t38 = (((x153<=x154)>x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -176438599683402LL;
	int64_t x158 = INT64_MAX;
	int8_t x159 = -1;
	volatile uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = -363;

    t39 = (((x157<=x158)>x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	static int64_t x162 = -2693778384231LL;
	int16_t x163 = -1;
	volatile int32_t x164 = INT32_MAX;
	int32_t t40 = -672;

    t40 = (((x161<=x162)>x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x166 = UINT16_MAX;
	static int32_t x167 = -91;
	volatile int16_t x168 = INT16_MIN;

    t41 = (((x165<=x166)>x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 19050952LLU;
	static int16_t x170 = INT16_MAX;
	volatile int64_t x172 = -1LL;
	int32_t t42 = -47;

    t42 = (((x169<=x170)>x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MIN;
	static volatile int32_t t43 = -65123745;

    t43 = (((x173<=x174)>x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x178 = 97775209;
	uint8_t x179 = 2U;
	int32_t t44 = -1528646;

    t44 = (((x177<=x178)>x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 59U;
	volatile uint16_t x183 = UINT16_MAX;
	int64_t x184 = INT64_MAX;
	static volatile int32_t t45 = 4;

    t45 = (((x181<=x182)>x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MIN;
	uint8_t x186 = UINT8_MAX;
	volatile int8_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -149293;

    t46 = (((x185<=x186)>x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x190 = -1LL;
	int16_t x191 = -1;
	int8_t x192 = 59;
	int32_t t47 = 11;

    t47 = (((x189<=x190)>x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int32_t x194 = -291898043;
	static volatile uint64_t x196 = 882998488LLU;
	int32_t t48 = 1;

    t48 = (((x193<=x194)>x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 100U;
	volatile uint16_t x198 = 22772U;
	uint16_t x199 = UINT16_MAX;
	uint64_t x200 = 6632083121LLU;
	int32_t t49 = 0;

    t49 = (((x197<=x198)>x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MIN;
	static volatile int32_t x202 = -1;
	int16_t x203 = INT16_MIN;
	volatile uint32_t x204 = 8478962U;

    t50 = (((x201<=x202)>x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	uint32_t x206 = UINT32_MAX;
	int64_t x208 = INT64_MAX;

    t51 = (((x205<=x206)>x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 31U;
	int32_t t52 = 1;

    t52 = (((x209<=x210)>x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x214 = 2U;
	volatile int64_t x215 = -21843LL;
	volatile uint32_t x216 = 118998128U;
	int32_t t53 = -199;

    t53 = (((x213<=x214)>x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x218 = 729U;
	int64_t x219 = INT64_MAX;
	uint8_t x220 = 6U;
	static int32_t t54 = -27;

    t54 = (((x217<=x218)>x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -968;
	volatile int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MAX;
	volatile int32_t t55 = 866440089;

    t55 = (((x221<=x222)>x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = -54;
	int32_t x226 = INT32_MAX;
	volatile uint32_t x227 = 29U;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = 212844003;

    t56 = (((x225<=x226)>x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MIN;
	volatile int32_t x230 = 29;
	int16_t x232 = 1;
	volatile int32_t t57 = 12;

    t57 = (((x229<=x230)>x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = -10;
	uint16_t x235 = 4U;
	volatile int32_t t58 = -5;

    t58 = (((x233<=x234)>x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 27973249669626681LL;
	volatile int32_t x238 = 2367997;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;

    t59 = (((x237<=x238)>x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MIN;
	static int32_t x243 = -14275;

    t60 = (((x241<=x242)>x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	static int16_t x246 = INT16_MAX;
	static int64_t x247 = INT64_MIN;
	static int16_t x248 = 90;
	volatile int32_t t61 = -826560464;

    t61 = (((x245<=x246)>x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	int64_t x250 = INT64_MIN;
	static int16_t x251 = -1;
	uint16_t x252 = 129U;
	static int32_t t62 = 391;

    t62 = (((x249<=x250)>x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -71943106293689LL;
	int64_t x254 = -1LL;
	static int8_t x255 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	static int32_t t63 = 668995;

    t63 = (((x253<=x254)>x255)>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MAX;
	uint64_t x258 = 293LLU;
	int8_t x260 = -7;
	static int32_t t64 = 57;

    t64 = (((x257<=x258)>x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = 8567;
	int32_t x262 = INT32_MAX;
	volatile uint64_t x263 = 7484077182057LLU;
	int32_t t65 = 27429608;

    t65 = (((x261<=x262)>x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = 2;
	static volatile uint8_t x266 = 43U;
	uint8_t x267 = 91U;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 15;

    t66 = (((x265<=x266)>x267)>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x272 = INT32_MAX;
	int32_t t67 = 637;

    t67 = (((x269<=x270)>x271)>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = 236747816U;
	int16_t x275 = -724;

    t68 = (((x273<=x274)>x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x277 = UINT64_MAX;
	uint64_t x279 = 3074964065630230835LLU;
	static uint32_t x280 = 544215253U;
	volatile int32_t t69 = 5;

    t69 = (((x277<=x278)>x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MIN;
	int16_t x283 = -1;
	static volatile int32_t t70 = -2898622;

    t70 = (((x281<=x282)>x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 5;
	int64_t x286 = INT64_MAX;
	volatile int32_t t71 = 2417;

    t71 = (((x285<=x286)>x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -510924LL;
	int32_t x290 = 886;
	volatile uint16_t x291 = 163U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -11750388;

    t72 = (((x289<=x290)>x291)>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	uint16_t x294 = 1736U;
	uint32_t x295 = 19U;
	int32_t x296 = INT32_MAX;
	static volatile int32_t t73 = 62952;

    t73 = (((x293<=x294)>x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x297 = INT32_MAX;
	int8_t x298 = -1;
	int8_t x299 = INT8_MIN;

    t74 = (((x297<=x298)>x299)>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	volatile int64_t x302 = 2988LL;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 2746;

    t75 = (((x301<=x302)>x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 1851474071U;
	int64_t x306 = -1LL;
	int64_t x307 = INT64_MIN;
	uint64_t x308 = 914590LLU;
	int32_t t76 = -20450;

    t76 = (((x305<=x306)>x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = INT16_MIN;
	int32_t x310 = -1771;
	int8_t x312 = 10;
	volatile int32_t t77 = 11252114;

    t77 = (((x309<=x310)>x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	volatile int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = 1982;
	int32_t t78 = 805;

    t78 = (((x313<=x314)>x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x318 = 14833313;
	volatile int8_t x319 = 5;
	uint16_t x320 = 172U;
	int32_t t79 = -126613;

    t79 = (((x317<=x318)>x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	int8_t x322 = -2;
	int16_t x323 = -1;
	volatile int32_t t80 = 7000;

    t80 = (((x321<=x322)>x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x327 = -44;
	int32_t t81 = -50045093;

    t81 = (((x325<=x326)>x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 7U;
	volatile int64_t x330 = INT64_MIN;
	uint16_t x331 = 0U;
	static uint8_t x332 = UINT8_MAX;

    t82 = (((x329<=x330)>x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = INT64_MAX;
	static int32_t x334 = -56;
	int16_t x335 = -1137;
	volatile int16_t x336 = -1;
	volatile int32_t t83 = 968;

    t83 = (((x333<=x334)>x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -88287;
	int64_t x338 = INT64_MIN;
	int16_t x339 = -1;
	int32_t t84 = -32;

    t84 = (((x337<=x338)>x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x342 = INT32_MIN;
	volatile uint64_t x343 = 48407306441LLU;
	static uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = -1705;

    t85 = (((x341<=x342)>x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	int32_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	volatile int32_t t86 = -7;

    t86 = (((x345<=x346)>x347)>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t t87 = 786078;

    t87 = (((x349<=x350)>x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	uint32_t x354 = 54513976U;
	volatile int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	volatile int32_t t88 = 0;

    t88 = (((x353<=x354)>x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 1036876031920124174LLU;
	uint16_t x358 = 2386U;
	int8_t x359 = -1;
	static int64_t x360 = -1LL;
	int32_t t89 = 317404;

    t89 = (((x357<=x358)>x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	static int8_t x362 = INT8_MAX;
	int64_t x363 = INT64_MAX;
	int8_t x364 = -15;

    t90 = (((x361<=x362)>x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = UINT64_MAX;
	int8_t x367 = INT8_MIN;
	uint32_t x368 = 36595581U;
	volatile int32_t t91 = -5;

    t91 = (((x365<=x366)>x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -162130891;
	volatile int64_t x371 = -857569806942966LL;
	volatile int32_t t92 = -189;

    t92 = (((x369<=x370)>x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -25251616247LL;
	int32_t x374 = -1;
	static uint8_t x375 = UINT8_MAX;
	volatile int32_t x376 = 20844369;
	volatile int32_t t93 = -10454;

    t93 = (((x373<=x374)>x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -1;
	static volatile int16_t x380 = INT16_MIN;

    t94 = (((x377<=x378)>x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x382 = 483129;
	int32_t x383 = 8160;
	static uint8_t x384 = 80U;
	volatile int32_t t95 = 27519997;

    t95 = (((x381<=x382)>x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	int32_t x386 = 921079277;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = 7;
	int32_t t96 = -266;

    t96 = (((x385<=x386)>x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -156866667;
	uint32_t x390 = 857197U;
	volatile uint8_t x391 = UINT8_MAX;
	static volatile int16_t x392 = -1;

    t97 = (((x389<=x390)>x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	int32_t t98 = -411;

    t98 = (((x393<=x394)>x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	static uint64_t x398 = 5880913045846183067LLU;
	uint16_t x399 = 26576U;
	uint64_t x400 = 43914626LLU;
	volatile int32_t t99 = 5;

    t99 = (((x397<=x398)>x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -20;
	volatile int64_t x403 = -1LL;
	volatile uint32_t x404 = 0U;
	int32_t t100 = 604;

    t100 = (((x401<=x402)>x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 0U;

    t101 = (((x405<=x406)>x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MIN;
	uint8_t x410 = UINT8_MAX;
	int16_t x411 = -1;
	static int32_t t102 = 1030720837;

    t102 = (((x409<=x410)>x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int8_t x414 = INT8_MIN;
	int8_t x415 = -30;
	int8_t x416 = -1;
	volatile int32_t t103 = 5042;

    t103 = (((x413<=x414)>x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = UINT64_MAX;
	static volatile int16_t x420 = -1;

    t104 = (((x417<=x418)>x419)>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	static uint8_t x422 = UINT8_MAX;
	static int64_t x423 = -32102LL;
	uint16_t x424 = UINT16_MAX;

    t105 = (((x421<=x422)>x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MAX;
	int32_t x426 = -1;
	static int32_t x427 = 582;
	volatile uint8_t x428 = 0U;
	volatile int32_t t106 = 214;

    t106 = (((x425<=x426)>x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = -1;
	int32_t x430 = INT32_MIN;
	int32_t x431 = -5;
	int32_t t107 = 1;

    t107 = (((x429<=x430)>x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -1;
	int32_t x434 = INT32_MAX;
	int8_t x435 = INT8_MIN;
	volatile int32_t x436 = INT32_MIN;
	int32_t t108 = -8;

    t108 = (((x433<=x434)>x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	int32_t x438 = -1;
	int64_t x439 = INT64_MAX;
	static uint16_t x440 = UINT16_MAX;
	static volatile int32_t t109 = 5031422;

    t109 = (((x437<=x438)>x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MAX;
	static uint64_t x442 = 53250539402825LLU;
	uint16_t x443 = 6436U;
	volatile int32_t x444 = 1;
	int32_t t110 = 0;

    t110 = (((x441<=x442)>x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = -611LL;
	uint64_t x446 = UINT64_MAX;
	static int16_t x447 = 1;
	uint64_t x448 = UINT64_MAX;

    t111 = (((x445<=x446)>x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 0;
	static int64_t x450 = INT64_MAX;
	int64_t x451 = 905630782LL;
	int32_t x452 = -1;
	int32_t t112 = -134038656;

    t112 = (((x449<=x450)>x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x453 = 3577U;
	int16_t x454 = INT16_MIN;
	volatile int64_t x455 = -1LL;
	int32_t x456 = INT32_MIN;
	volatile int32_t t113 = 49;

    t113 = (((x453<=x454)>x455)>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x458 = 56U;
	uint16_t x460 = UINT16_MAX;

    t114 = (((x457<=x458)>x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = -1907706535523504793LL;
	static uint16_t x462 = 0U;
	static int8_t x463 = INT8_MIN;
	volatile uint16_t x464 = 99U;
	int32_t t115 = 106606;

    t115 = (((x461<=x462)>x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x465 = 2029U;
	uint32_t x466 = UINT32_MAX;
	static int16_t x467 = INT16_MIN;
	volatile int32_t x468 = 726307;

    t116 = (((x465<=x466)>x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -1;
	volatile int64_t x471 = 0LL;
	static uint32_t x472 = 837U;
	int32_t t117 = -46716;

    t117 = (((x469<=x470)>x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 766161U;
	int8_t x474 = -1;
	volatile int32_t t118 = -242;

    t118 = (((x473<=x474)>x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	uint16_t x479 = UINT16_MAX;
	uint16_t x480 = 708U;
	volatile int32_t t119 = 539;

    t119 = (((x477<=x478)>x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	static int16_t x483 = 3912;
	uint8_t x484 = 81U;
	volatile int32_t t120 = -116;

    t120 = (((x481<=x482)>x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MIN;
	static int8_t x486 = -1;
	static int32_t x487 = 7428247;
	int32_t x488 = INT32_MIN;
	static int32_t t121 = -24;

    t121 = (((x485<=x486)>x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	uint16_t x490 = 1132U;
	int16_t x491 = 5523;
	int32_t t122 = 6;

    t122 = (((x489<=x490)>x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	uint32_t x494 = UINT32_MAX;
	volatile int64_t x495 = 3449LL;

    t123 = (((x493<=x494)>x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	volatile uint64_t x498 = 66590364110LLU;
	uint16_t x499 = 17264U;
	int64_t x500 = INT64_MIN;
	int32_t t124 = -119;

    t124 = (((x497<=x498)>x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	int64_t x502 = -5812119328148LL;
	int32_t x503 = INT32_MAX;
	int32_t x504 = INT32_MIN;

    t125 = (((x501<=x502)>x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x505 = UINT16_MAX;
	int16_t x506 = INT16_MAX;
	volatile int64_t x508 = INT64_MAX;
	int32_t t126 = -782539;

    t126 = (((x505<=x506)>x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = UINT32_MAX;
	volatile int64_t x510 = INT64_MAX;
	int16_t x512 = INT16_MAX;
	static volatile int32_t t127 = -47009;

    t127 = (((x509<=x510)>x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x513 = 5U;
	static int8_t x514 = 5;
	int32_t x515 = INT32_MIN;
	static int32_t x516 = INT32_MAX;
	static volatile int32_t t128 = -166;

    t128 = (((x513<=x514)>x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MIN;
	int8_t x519 = -1;
	int64_t x520 = 2564LL;
	volatile int32_t t129 = 108721;

    t129 = (((x517<=x518)>x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -2;
	volatile int32_t x522 = INT32_MIN;
	volatile int8_t x524 = 20;
	int32_t t130 = -8227614;

    t130 = (((x521<=x522)>x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x526 = 63U;
	int64_t x527 = -1LL;
	int16_t x528 = INT16_MIN;
	volatile int32_t t131 = -308029;

    t131 = (((x525<=x526)>x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 57826738U;
	int32_t x530 = 334;
	volatile uint32_t x531 = 226350U;
	uint8_t x532 = 0U;

    t132 = (((x529<=x530)>x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x533 = 15483LLU;
	static uint8_t x534 = 1U;
	volatile uint64_t x535 = UINT64_MAX;
	int32_t t133 = 438624254;

    t133 = (((x533<=x534)>x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = UINT16_MAX;
	static volatile int8_t x538 = INT8_MIN;
	int8_t x539 = -1;

    t134 = (((x537<=x538)>x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 1U;
	static uint8_t x542 = UINT8_MAX;
	int16_t x543 = INT16_MIN;
	volatile int64_t x544 = INT64_MIN;
	static int32_t t135 = 53213;

    t135 = (((x541<=x542)>x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = UINT8_MAX;
	uint32_t x546 = UINT32_MAX;
	uint32_t x547 = 8210U;
	static int64_t x548 = -12492605089938371LL;
	volatile int32_t t136 = 5191070;

    t136 = (((x545<=x546)>x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 4997177LL;
	static int8_t x550 = -12;
	int32_t t137 = -20;

    t137 = (((x549<=x550)>x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = INT64_MIN;
	static int32_t x555 = INT32_MIN;
	static int64_t x556 = -1LL;
	int32_t t138 = 7935;

    t138 = (((x553<=x554)>x555)>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -7;
	static int32_t x559 = 3;
	volatile uint64_t x560 = 899304542LLU;
	static int32_t t139 = -55;

    t139 = (((x557<=x558)>x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	uint64_t x562 = 2692537LLU;
	volatile int32_t t140 = 9235634;

    t140 = (((x561<=x562)>x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	int32_t x566 = 372398;
	uint32_t x567 = 5316U;
	volatile int64_t x568 = INT64_MIN;
	int32_t t141 = 18;

    t141 = (((x565<=x566)>x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	int64_t x570 = 109403863LL;
	int32_t x571 = INT32_MIN;
	int64_t x572 = -145374LL;

    t142 = (((x569<=x570)>x571)>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x574 = -1LL;
	int64_t x576 = 0LL;
	volatile int32_t t143 = 804171;

    t143 = (((x573<=x574)>x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = 2;
	volatile int64_t x579 = INT64_MIN;
	int32_t x580 = INT32_MIN;

    t144 = (((x577<=x578)>x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	uint16_t x583 = 61U;
	uint16_t x584 = 1U;
	int32_t t145 = -11954;

    t145 = (((x581<=x582)>x583)>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	static uint8_t x586 = UINT8_MAX;
	int64_t x587 = INT64_MIN;
	uint64_t x588 = 14180208008532LLU;
	static volatile int32_t t146 = -5;

    t146 = (((x585<=x586)>x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x589 = 812;
	uint16_t x591 = UINT16_MAX;
	uint64_t x592 = 3655635496671457617LLU;

    t147 = (((x589<=x590)>x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	static int32_t x594 = -1;
	uint8_t x595 = UINT8_MAX;
	volatile int8_t x596 = INT8_MAX;
	static volatile int32_t t148 = -1800986;

    t148 = (((x593<=x594)>x595)>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = -1LL;
	uint8_t x598 = 0U;
	uint8_t x599 = 14U;
	int32_t x600 = -1;
	int32_t t149 = 190;

    t149 = (((x597<=x598)>x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	volatile uint16_t x602 = 278U;
	volatile int8_t x603 = INT8_MIN;
	int32_t x604 = INT32_MAX;
	static int32_t t150 = -15983;

    t150 = (((x601<=x602)>x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	static uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MIN;
	volatile int32_t t151 = -12083;

    t151 = (((x605<=x606)>x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 0;
	uint64_t x610 = 26366263185795253LLU;
	volatile int64_t x611 = -41218867520LL;
	static uint64_t x612 = UINT64_MAX;

    t152 = (((x609<=x610)>x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x614 = 950820836949782LLU;
	int16_t x615 = -2;
	int8_t x616 = -1;
	int32_t t153 = 82;

    t153 = (((x613<=x614)>x615)>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	int16_t x618 = INT16_MAX;
	int16_t x619 = -1;
	volatile int8_t x620 = -1;
	volatile int32_t t154 = 361635;

    t154 = (((x617<=x618)>x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x621 = 195079676LLU;
	uint64_t x622 = UINT64_MAX;
	volatile uint64_t x623 = UINT64_MAX;
	int64_t x624 = INT64_MAX;
	static volatile int32_t t155 = 0;

    t155 = (((x621<=x622)>x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x627 = 3U;
	volatile int32_t t156 = 328003562;

    t156 = (((x625<=x626)>x627)>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 30565U;
	volatile int8_t x630 = 7;
	static int64_t x631 = INT64_MAX;
	static volatile int64_t x632 = -1LL;
	volatile int32_t t157 = 814608;

    t157 = (((x629<=x630)>x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -5LL;
	static int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MIN;
	uint16_t x636 = UINT16_MAX;

    t158 = (((x633<=x634)>x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x638 = 485U;
	volatile int32_t x639 = 6502;
	uint16_t x640 = UINT16_MAX;
	int32_t t159 = -5376;

    t159 = (((x637<=x638)>x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x641 = 25;
	volatile uint64_t x643 = UINT64_MAX;

    t160 = (((x641<=x642)>x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = -1;
	int32_t t161 = -10;

    t161 = (((x645<=x646)>x647)>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = 205956543462LL;
	int32_t t162 = 474740489;

    t162 = (((x649<=x650)>x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -63;
	volatile int32_t x654 = 12;
	uint16_t x655 = UINT16_MAX;
	uint8_t x656 = 10U;
	int32_t t163 = 7828032;

    t163 = (((x653<=x654)>x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x658 = 4U;
	uint64_t x659 = 195648652771426813LLU;
	volatile int32_t x660 = INT32_MIN;
	volatile int32_t t164 = -1193;

    t164 = (((x657<=x658)>x659)>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -115;
	uint32_t x662 = UINT32_MAX;
	uint16_t x663 = 1U;

    t165 = (((x661<=x662)>x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x665 = 475U;
	int16_t x666 = INT16_MIN;
	volatile int64_t x667 = INT64_MIN;
	uint64_t x668 = UINT64_MAX;
	int32_t t166 = 270386478;

    t166 = (((x665<=x666)>x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = INT64_MIN;
	int64_t x671 = -1LL;
	uint16_t x672 = 1338U;
	int32_t t167 = -5336;

    t167 = (((x669<=x670)>x671)>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x676 = 1U;
	static int32_t t168 = -3030187;

    t168 = (((x673<=x674)>x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = INT32_MIN;
	int64_t x678 = INT64_MAX;
	int32_t x679 = INT32_MIN;
	static uint8_t x680 = 50U;
	volatile int32_t t169 = 1;

    t169 = (((x677<=x678)>x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x681 = INT32_MIN;
	uint8_t x682 = UINT8_MAX;
	volatile int16_t x683 = -1;
	int32_t x684 = -1;
	volatile int32_t t170 = -350887;

    t170 = (((x681<=x682)>x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t t171 = -367;

    t171 = (((x685<=x686)>x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x691 = -1;
	static int32_t x692 = INT32_MIN;
	int32_t t172 = 27;

    t172 = (((x689<=x690)>x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 30U;
	int16_t x694 = INT16_MIN;

    t173 = (((x693<=x694)>x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 107LLU;
	volatile int32_t x699 = INT32_MIN;
	int64_t x700 = INT64_MIN;
	int32_t t174 = -151353;

    t174 = (((x697<=x698)>x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 45773300532218339LLU;
	int16_t x702 = -1606;
	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t175 = -49269665;

    t175 = (((x701<=x702)>x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = 1;
	int16_t x708 = INT16_MAX;
	int32_t t176 = 411;

    t176 = (((x705<=x706)>x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = 838;
	int32_t x711 = -95;
	int16_t x712 = -4312;
	volatile int32_t t177 = -1525625;

    t177 = (((x709<=x710)>x711)>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	static volatile int32_t x714 = -1;
	int64_t x715 = -1LL;
	volatile int32_t t178 = -1;

    t178 = (((x713<=x714)>x715)>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -3982507;
	int32_t x719 = INT32_MIN;
	volatile uint64_t x720 = 486603508390832LLU;
	int32_t t179 = 134187075;

    t179 = (((x717<=x718)>x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 114U;
	int8_t x722 = INT8_MIN;
	volatile int64_t x723 = INT64_MIN;
	uint16_t x724 = 5U;
	int32_t t180 = -10;

    t180 = (((x721<=x722)>x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -3;
	uint8_t x726 = 24U;
	static volatile int8_t x727 = INT8_MIN;
	static int32_t x728 = -1;

    t181 = (((x725<=x726)>x727)>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 18U;
	int8_t x731 = INT8_MIN;
	static int16_t x732 = 53;
	int32_t t182 = 18737462;

    t182 = (((x729<=x730)>x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	uint64_t x734 = UINT64_MAX;
	uint64_t x735 = 7888242004087482LLU;
	volatile int16_t x736 = INT16_MIN;
	volatile int32_t t183 = -473381;

    t183 = (((x733<=x734)>x735)>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 1LLU;
	int32_t x739 = -1;
	uint8_t x740 = 6U;
	volatile int32_t t184 = 34275241;

    t184 = (((x737<=x738)>x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	volatile int8_t x742 = 1;
	int32_t x744 = INT32_MAX;
	int32_t t185 = 378;

    t185 = (((x741<=x742)>x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x746 = UINT32_MAX;
	volatile uint16_t x747 = 855U;
	uint64_t x748 = 0LLU;
	volatile int32_t t186 = 142;

    t186 = (((x745<=x746)>x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	volatile int64_t x750 = INT64_MIN;
	static uint16_t x751 = UINT16_MAX;
	static uint64_t x752 = 110830561902LLU;
	int32_t t187 = 218;

    t187 = (((x749<=x750)>x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MAX;
	static uint64_t x755 = 1402740500742551LLU;
	volatile int32_t x756 = -95987;
	int32_t t188 = -709911095;

    t188 = (((x753<=x754)>x755)>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = -464;
	uint16_t x758 = 1932U;
	int8_t x759 = INT8_MIN;
	static uint64_t x760 = 4486582161639867393LLU;
	static volatile int32_t t189 = -48;

    t189 = (((x757<=x758)>x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 2994U;
	int32_t x762 = -1;
	uint8_t x763 = UINT8_MAX;
	static int16_t x764 = 1;

    t190 = (((x761<=x762)>x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	static int32_t t191 = -8;

    t191 = (((x765<=x766)>x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = UINT8_MAX;
	static volatile uint16_t x770 = 42U;
	int16_t x772 = INT16_MIN;
	volatile int32_t t192 = -7238910;

    t192 = (((x769<=x770)>x771)>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x775 = INT8_MIN;
	int64_t x776 = INT64_MIN;

    t193 = (((x773<=x774)>x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	uint64_t x778 = UINT64_MAX;
	int64_t x779 = 15697211LL;
	int32_t t194 = -3824;

    t194 = (((x777<=x778)>x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	int16_t x784 = INT16_MIN;
	volatile int32_t t195 = 1;

    t195 = (((x781<=x782)>x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MAX;
	int64_t x786 = -1LL;
	uint16_t x787 = UINT16_MAX;
	uint64_t x788 = 87746177LLU;
	volatile int32_t t196 = 475682290;

    t196 = (((x785<=x786)>x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = -1;
	static uint8_t x790 = 10U;
	volatile int8_t x792 = INT8_MAX;
	volatile int32_t t197 = -1;

    t197 = (((x789<=x790)>x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x794 = UINT32_MAX;
	uint16_t x795 = 1696U;
	static int32_t x796 = INT32_MAX;
	volatile int32_t t198 = 0;

    t198 = (((x793<=x794)>x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MAX;
	int64_t x798 = -42138766LL;
	volatile int64_t x799 = -3814411258095LL;
	volatile int32_t x800 = INT32_MIN;
	int32_t t199 = 2;

    t199 = (((x797<=x798)>x799)>x800);

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

