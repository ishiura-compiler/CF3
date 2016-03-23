
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

static int16_t x8 = -1;
int32_t t1 = 21699;
static uint32_t x10 = 1876U;
static int8_t x14 = -1;
int64_t x16 = -1LL;
uint32_t x19 = UINT32_MAX;
volatile uint32_t x23 = 1U;
uint64_t x25 = 112942443881118LLU;
int32_t x33 = 288407715;
uint16_t x34 = 26U;
uint64_t x41 = UINT64_MAX;
int32_t t10 = 849244848;
static volatile uint32_t x49 = UINT32_MAX;
int32_t t12 = -2076;
volatile int64_t x60 = -3LL;
static volatile int32_t t14 = 743587;
int32_t x66 = INT32_MIN;
int16_t x68 = 0;
uint8_t x71 = 6U;
int64_t x75 = 14809153663210LL;
uint32_t x76 = 3158U;
int16_t x81 = INT16_MIN;
uint16_t x82 = UINT16_MAX;
int64_t x83 = INT64_MIN;
uint64_t x84 = UINT64_MAX;
int16_t x86 = INT16_MIN;
int16_t x91 = INT16_MIN;
int16_t x93 = 26;
int32_t x98 = -2;
uint16_t x99 = 42U;
volatile int16_t x103 = INT16_MIN;
int32_t t25 = 94;
uint16_t x112 = 116U;
int32_t t29 = 9;
int32_t t30 = -60647858;
static volatile uint32_t x128 = UINT32_MAX;
int32_t t31 = 49;
int32_t t33 = -16273067;
int16_t x142 = -1;
static int32_t x146 = INT32_MAX;
volatile uint8_t x148 = 3U;
static uint32_t x152 = 7U;
static uint32_t x155 = UINT32_MAX;
uint8_t x157 = 2U;
volatile uint16_t x158 = 1228U;
int8_t x164 = INT8_MIN;
int64_t x166 = 912489530LL;
static uint16_t x171 = 11975U;
int64_t x174 = 6787247LL;
int16_t x183 = -3050;
uint8_t x185 = 7U;
static int8_t x186 = 0;
int16_t x190 = INT16_MAX;
static int32_t x192 = -1;
uint64_t x196 = 48336406745LLU;
int32_t t48 = 29595;
volatile uint64_t x199 = 68147218LLU;
uint64_t x200 = UINT64_MAX;
int32_t x205 = INT32_MIN;
uint64_t x212 = UINT64_MAX;
int16_t x217 = INT16_MIN;
static uint32_t x219 = UINT32_MAX;
int16_t x226 = -730;
int64_t x228 = INT64_MIN;
int32_t t56 = 105;
int32_t x229 = INT32_MIN;
volatile int64_t x231 = -1LL;
int16_t x239 = -1;
volatile int32_t t59 = -2802620;
volatile int16_t x244 = INT16_MIN;
volatile int8_t x254 = INT8_MIN;
int64_t x256 = INT64_MAX;
static uint64_t x261 = 753LLU;
static int32_t x268 = INT32_MIN;
static int8_t x275 = -51;
int64_t x276 = INT64_MIN;
int32_t x277 = -1;
int32_t t70 = -92;
volatile int16_t x286 = INT16_MAX;
int16_t x288 = INT16_MIN;
int32_t t71 = 37852613;
int16_t x292 = INT16_MIN;
int32_t x299 = INT32_MIN;
static uint64_t x301 = 65LLU;
uint8_t x307 = UINT8_MAX;
int64_t x313 = -82086601002810LL;
static volatile int32_t t78 = 1913;
int32_t t80 = -416842858;
int8_t x327 = -13;
static int32_t t82 = -46428;
int16_t x333 = -1;
int32_t x342 = -1;
uint64_t x344 = 15151LLU;
static int8_t x345 = INT8_MAX;
int16_t x356 = -795;
int32_t t89 = -237;
static volatile int32_t x363 = -1;
static int64_t x365 = 1048641664514012LL;
int64_t x367 = INT64_MIN;
int64_t x373 = INT64_MIN;
static int32_t x378 = INT32_MAX;
volatile int32_t x386 = INT32_MIN;
volatile int16_t x389 = -14416;
uint8_t x398 = 3U;
int16_t x399 = -1;
volatile int32_t t99 = 32347688;
static int64_t x401 = INT64_MAX;
volatile int32_t t101 = -18;
static int32_t x411 = 204007;
int64_t x412 = -36105342811067253LL;
int16_t x414 = INT16_MIN;
int64_t x418 = 4783403LL;
int32_t x419 = INT32_MAX;
int8_t x425 = -1;
static uint16_t x431 = UINT16_MAX;
int8_t x433 = 0;
static volatile uint64_t x435 = UINT64_MAX;
int32_t t110 = -1961818;
static int8_t x446 = 36;
static uint32_t x450 = UINT32_MAX;
int16_t x454 = INT16_MIN;
int32_t x457 = INT32_MAX;
int8_t x458 = -1;
int8_t x468 = INT8_MIN;
uint64_t x469 = 14610141930667LLU;
int64_t x471 = 0LL;
int8_t x476 = -7;
int32_t x477 = -2;
int8_t x479 = INT8_MIN;
int32_t t119 = -119774;
uint8_t x483 = 24U;
uint64_t x484 = 38LLU;
int32_t x485 = INT32_MAX;
int32_t t121 = 79;
int8_t x492 = INT8_MIN;
volatile int32_t t122 = 13073805;
int8_t x493 = INT8_MAX;
static int16_t x496 = INT16_MAX;
static int16_t x499 = -217;
volatile int32_t t124 = -2770;
int16_t x508 = INT16_MIN;
int64_t x510 = INT64_MAX;
volatile int32_t x517 = 8840;
int32_t t129 = -62175;
uint32_t x521 = 3481480U;
int8_t x522 = INT8_MIN;
int64_t x528 = INT64_MAX;
uint64_t x529 = UINT64_MAX;
volatile int32_t x538 = -1;
static volatile int8_t x539 = -1;
uint64_t x547 = UINT64_MAX;
int16_t x550 = -1;
uint8_t x552 = 101U;
volatile int8_t x561 = -7;
uint32_t x565 = 0U;
uint8_t x572 = UINT8_MAX;
static int32_t t142 = -595300;
uint16_t x579 = UINT16_MAX;
uint16_t x580 = 169U;
uint64_t x581 = 90LLU;
int8_t x583 = -1;
static int32_t x584 = -1;
static volatile uint32_t x588 = UINT32_MAX;
uint64_t x592 = UINT64_MAX;
uint64_t x597 = 876168LLU;
int32_t t149 = 31142;
uint32_t x604 = 25541037U;
int32_t t151 = 406923123;
volatile uint32_t x611 = 0U;
int64_t x612 = INT64_MIN;
static uint8_t x618 = 0U;
volatile int32_t t154 = -31816605;
uint8_t x625 = UINT8_MAX;
static int64_t x628 = 1707156817LL;
volatile int32_t t157 = 293899;
int64_t x640 = INT64_MAX;
volatile int16_t x654 = INT16_MIN;
int32_t x658 = -17;
int32_t t164 = 1788885;
int64_t x662 = -1LL;
uint32_t x668 = 62861532U;
int8_t x669 = -3;
static volatile int32_t t167 = -60778367;
volatile int64_t x674 = INT64_MAX;
static volatile int64_t x676 = INT64_MIN;
volatile int64_t x678 = INT64_MIN;
int32_t t169 = 22297976;
int64_t x681 = 4377684193LL;
int32_t x687 = INT32_MIN;
volatile int64_t x689 = -1LL;
int32_t x694 = -1;
int32_t t173 = -3;
uint32_t x699 = 32491U;
int32_t x707 = 6;
volatile int32_t t176 = -3625;
volatile int32_t t178 = 2675302;
volatile int32_t t179 = 1514;
uint16_t x723 = 1851U;
int16_t x725 = INT16_MAX;
uint8_t x730 = 13U;
int16_t x733 = INT16_MIN;
int32_t x737 = -1;
static int16_t x739 = -786;
uint32_t x740 = UINT32_MAX;
int64_t x742 = -66806LL;
volatile int32_t t185 = -1643525;
static volatile uint16_t x752 = UINT16_MAX;
int16_t x758 = INT16_MIN;
int32_t t190 = 10;
int64_t x769 = INT64_MIN;
int64_t x773 = INT64_MIN;
volatile int32_t x777 = INT32_MAX;
int32_t x778 = INT32_MAX;
int16_t x780 = -3966;
int32_t t194 = 211993;
static uint16_t x781 = 137U;
int8_t x784 = INT8_MAX;
volatile int64_t x786 = -156790565549LL;
uint16_t x795 = 1970U;
int32_t t198 = -5700446;
volatile uint16_t x799 = UINT16_MAX;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MIN;
	static int64_t x3 = 783647085874273LL;
	volatile int64_t x4 = -119LL;
	int32_t t0 = 201;

    t0 = ((x1<=x2)>(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = UINT64_MAX;

    t1 = ((x5<=x6)>(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 91940748;

    t2 = ((x9<=x10)>(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	static uint32_t x15 = 244U;
	static volatile int32_t t3 = 4034;

    t3 = ((x13<=x14)>(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	static volatile int32_t t4 = 1860;

    t4 = ((x17<=x18)>(x19>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	static volatile int64_t x22 = INT64_MAX;
	uint8_t x24 = 3U;
	volatile int32_t t5 = 1044634;

    t5 = ((x21<=x22)>(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	int64_t x27 = 19721934963157LL;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 1288;

    t6 = ((x25<=x26)>(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = -1LL;
	static int8_t x30 = INT8_MAX;
	int16_t x31 = -15;
	volatile uint16_t x32 = 12U;
	int32_t t7 = -139979980;

    t7 = ((x29<=x30)>(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x35 = INT64_MIN;
	volatile uint32_t x36 = 860U;
	int32_t t8 = 44082;

    t8 = ((x33<=x34)>(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MAX;
	int64_t x38 = -1LL;
	volatile int8_t x39 = -1;
	int32_t x40 = INT32_MAX;
	static volatile int32_t t9 = 109625690;

    t9 = ((x37<=x38)>(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x42 = INT8_MAX;
	uint64_t x43 = 1328942952953LLU;
	int8_t x44 = 12;

    t10 = ((x41<=x42)>(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -5;
	static int16_t x46 = INT16_MAX;
	uint8_t x47 = 0U;
	static uint8_t x48 = 71U;
	int32_t t11 = 2711;

    t11 = ((x45<=x46)>(x47>x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x50 = INT8_MIN;
	volatile int32_t x51 = 10203640;
	uint8_t x52 = 56U;

    t12 = ((x49<=x50)>(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int16_t x54 = 0;
	int32_t x55 = 113;
	int8_t x56 = INT8_MIN;
	static int32_t t13 = -27180;

    t13 = ((x53<=x54)>(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x58 = 3800;
	int8_t x59 = -1;

    t14 = ((x57<=x58)>(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MIN;
	static uint16_t x62 = 116U;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 106;

    t15 = ((x61<=x62)>(x63>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 93766598LL;
	volatile int32_t x67 = -2;
	static volatile int32_t t16 = 124954261;

    t16 = ((x65<=x66)>(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	static int8_t x70 = -7;
	volatile int8_t x72 = -1;
	volatile int32_t t17 = -2;

    t17 = ((x69<=x70)>(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	static int16_t x74 = INT16_MAX;
	int32_t t18 = 45736;

    t18 = ((x73<=x74)>(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	int64_t x78 = INT64_MIN;
	volatile uint16_t x79 = UINT16_MAX;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t19 = -493528;

    t19 = ((x77<=x78)>(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t t20 = -621741287;

    t20 = ((x81<=x82)>(x83>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = 3202;
	int8_t x87 = 14;
	static uint64_t x88 = UINT64_MAX;
	int32_t t21 = 12;

    t21 = ((x85<=x86)>(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 22LL;
	uint8_t x90 = 1U;
	volatile uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 1293;

    t22 = ((x89<=x90)>(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 162U;
	int32_t x95 = -10;
	int64_t x96 = INT64_MAX;
	static volatile int32_t t23 = 247;

    t23 = ((x93<=x94)>(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x97 = UINT8_MAX;
	static int32_t x100 = 58724563;
	int32_t t24 = 126334322;

    t24 = ((x97<=x98)>(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 16U;
	uint64_t x102 = UINT64_MAX;
	uint64_t x104 = 1771133066LLU;

    t25 = ((x101<=x102)>(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	static int64_t x106 = INT64_MIN;
	int32_t x107 = INT32_MIN;
	volatile int8_t x108 = INT8_MAX;
	static int32_t t26 = 45;

    t26 = ((x105<=x106)>(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x109 = UINT16_MAX;
	volatile int64_t x110 = -3729LL;
	static int64_t x111 = -1LL;
	volatile int32_t t27 = 60651;

    t27 = ((x109<=x110)>(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -48;
	int8_t x114 = 0;
	uint16_t x115 = 4396U;
	volatile uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = 2852;

    t28 = ((x113<=x114)>(x115>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 6326;
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	volatile int16_t x120 = INT16_MIN;

    t29 = ((x117<=x118)>(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	static int8_t x122 = 1;
	volatile int32_t x123 = 6;
	int64_t x124 = INT64_MIN;

    t30 = ((x121<=x122)>(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 1267910422LLU;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = UINT16_MAX;

    t31 = ((x125<=x126)>(x127>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -9;
	int8_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	volatile int64_t x132 = 133973933127428966LL;
	volatile int32_t t32 = 7353;

    t32 = ((x129<=x130)>(x131>x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MAX;
	uint16_t x134 = 280U;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;

    t33 = ((x133<=x134)>(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = -3;
	volatile int16_t x138 = -1;
	volatile uint64_t x139 = 2425496485400LLU;
	int16_t x140 = -950;
	int32_t t34 = 9358;

    t34 = ((x137<=x138)>(x139>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = UINT64_MAX;
	uint64_t x143 = 21683459625LLU;
	static int8_t x144 = INT8_MIN;
	int32_t t35 = 66151806;

    t35 = ((x141<=x142)>(x143>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x147 = INT32_MAX;
	volatile int32_t t36 = -109696080;

    t36 = ((x145<=x146)>(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x149 = UINT8_MAX;
	int32_t x150 = -28220;
	static volatile int32_t x151 = INT32_MIN;
	int32_t t37 = 3;

    t37 = ((x149<=x150)>(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	uint8_t x154 = UINT8_MAX;
	volatile int8_t x156 = INT8_MIN;
	int32_t t38 = -14438725;

    t38 = ((x153<=x154)>(x155>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x159 = UINT8_MAX;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -52171;

    t39 = ((x157<=x158)>(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	uint32_t x162 = 21385U;
	uint8_t x163 = 109U;
	volatile int32_t t40 = -1052716605;

    t40 = ((x161<=x162)>(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int64_t x167 = -64295282203897LL;
	uint8_t x168 = 13U;
	volatile int32_t t41 = 684;

    t41 = ((x165<=x166)>(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -1;
	volatile uint64_t x170 = 4LLU;
	static volatile int8_t x172 = -13;
	int32_t t42 = 1;

    t42 = ((x169<=x170)>(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 2371U;
	int32_t x175 = -1;
	int64_t x176 = 5537LL;
	static volatile int32_t t43 = -16;

    t43 = ((x173<=x174)>(x175>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MAX;
	int8_t x178 = 10;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	static int32_t t44 = -8;

    t44 = ((x177<=x178)>(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x181 = INT16_MIN;
	static int16_t x182 = INT16_MIN;
	int16_t x184 = -1;
	static int32_t t45 = 0;

    t45 = ((x181<=x182)>(x183>x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x187 = -1;
	volatile uint32_t x188 = 39U;
	static int32_t t46 = -26867847;

    t46 = ((x185<=x186)>(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x189 = INT16_MAX;
	uint8_t x191 = 70U;
	volatile int32_t t47 = -755613;

    t47 = ((x189<=x190)>(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	static int16_t x194 = 991;
	int64_t x195 = -2070911518580450982LL;

    t48 = ((x193<=x194)>(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x197 = 3397U;
	int16_t x198 = -1;
	static int32_t t49 = -832260643;

    t49 = ((x197<=x198)>(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = -30;
	int16_t x202 = INT16_MIN;
	volatile int16_t x203 = -1;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -452;

    t50 = ((x201<=x202)>(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	int32_t t51 = 239;

    t51 = ((x205<=x206)>(x207>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = -1;
	int64_t x210 = -7229569225LL;
	static int32_t x211 = 241112;
	volatile int32_t t52 = 30;

    t52 = ((x209<=x210)>(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	volatile int8_t x214 = 2;
	int8_t x215 = INT8_MIN;
	volatile int16_t x216 = INT16_MIN;
	int32_t t53 = -22203;

    t53 = ((x213<=x214)>(x215>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MIN;
	int8_t x220 = INT8_MAX;
	int32_t t54 = -10855543;

    t54 = ((x217<=x218)>(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MAX;
	static int32_t x223 = -1;
	int64_t x224 = INT64_MIN;
	int32_t t55 = 2626;

    t55 = ((x221<=x222)>(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int32_t x227 = INT32_MAX;

    t56 = ((x225<=x226)>(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = INT64_MIN;
	int64_t x232 = -1LL;
	int32_t t57 = -1;

    t57 = ((x229<=x230)>(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	static uint32_t x234 = 299004U;
	static volatile int32_t x235 = INT32_MAX;
	static int32_t x236 = INT32_MAX;
	int32_t t58 = 56901;

    t58 = ((x233<=x234)>(x235>x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 0U;
	int16_t x238 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;

    t59 = ((x237<=x238)>(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = 15;
	uint64_t x242 = UINT64_MAX;
	volatile uint32_t x243 = 73429U;
	static volatile int32_t t60 = -5296;

    t60 = ((x241<=x242)>(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = 15;
	uint32_t x246 = 14U;
	uint8_t x247 = UINT8_MAX;
	uint8_t x248 = 14U;
	volatile int32_t t61 = -335322;

    t61 = ((x245<=x246)>(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 7123LL;
	int32_t x250 = INT32_MIN;
	static int8_t x251 = INT8_MIN;
	volatile int8_t x252 = INT8_MAX;
	int32_t t62 = 3;

    t62 = ((x249<=x250)>(x251>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 8;
	int32_t x255 = -1;
	int32_t t63 = 3;

    t63 = ((x253<=x254)>(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MAX;
	volatile uint64_t x258 = UINT64_MAX;
	int16_t x259 = INT16_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t64 = -538606;

    t64 = ((x257<=x258)>(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = INT16_MIN;
	volatile uint64_t x263 = 436491755226LLU;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = -494830;

    t65 = ((x261<=x262)>(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MIN;
	static uint64_t x267 = 14688751042LLU;
	volatile int32_t t66 = -1;

    t66 = ((x265<=x266)>(x267>x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	uint32_t x270 = 1U;
	int64_t x271 = INT64_MAX;
	int64_t x272 = -1LL;
	volatile int32_t t67 = -118730;

    t67 = ((x269<=x270)>(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	int64_t x274 = INT64_MAX;
	int32_t t68 = -1202981;

    t68 = ((x273<=x274)>(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x278 = 28LLU;
	uint16_t x279 = 544U;
	int32_t x280 = -2645;
	int32_t t69 = -601799906;

    t69 = ((x277<=x278)>(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = -1;
	uint32_t x284 = 4704873U;

    t70 = ((x281<=x282)>(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = INT32_MIN;
	int16_t x287 = -1;

    t71 = ((x285<=x286)>(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MAX;
	volatile uint64_t x291 = 17293312LLU;
	volatile int32_t t72 = 15072227;

    t72 = ((x289<=x290)>(x291>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = INT8_MIN;
	static volatile int64_t x294 = INT64_MIN;
	int32_t x295 = -449041;
	int64_t x296 = -1LL;
	volatile int32_t t73 = -12656082;

    t73 = ((x293<=x294)>(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = 4U;
	int16_t x298 = -2829;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = -3416;

    t74 = ((x297<=x298)>(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x302 = 1949;
	static uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t75 = 48567963;

    t75 = ((x301<=x302)>(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	uint32_t x306 = 2815585U;
	int64_t x308 = INT64_MIN;
	int32_t t76 = -16;

    t76 = ((x305<=x306)>(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	volatile int16_t x310 = INT16_MAX;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = -42;
	volatile int32_t t77 = 1771749;

    t77 = ((x309<=x310)>(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x314 = 46U;
	int32_t x315 = INT32_MIN;
	int16_t x316 = -1;

    t78 = ((x313<=x314)>(x315>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 1986161;
	int8_t x318 = 42;
	int64_t x319 = INT64_MIN;
	int32_t x320 = -1;
	volatile int32_t t79 = 28037540;

    t79 = ((x317<=x318)>(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = UINT32_MAX;
	int8_t x322 = 11;
	uint16_t x323 = 5U;
	int16_t x324 = -1;

    t80 = ((x321<=x322)>(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int32_t x326 = 210;
	static int16_t x328 = -1;
	int32_t t81 = -997269532;

    t81 = ((x325<=x326)>(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	volatile int64_t x330 = 2633821338503LL;
	int16_t x331 = -1;
	int64_t x332 = INT64_MIN;

    t82 = ((x329<=x330)>(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x334 = INT64_MAX;
	int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;
	static int32_t t83 = -6828;

    t83 = ((x333<=x334)>(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	volatile int16_t x338 = 202;
	uint8_t x339 = 6U;
	int8_t x340 = -22;
	int32_t t84 = 354902;

    t84 = ((x337<=x338)>(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	volatile int32_t t85 = -47051;

    t85 = ((x341<=x342)>(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x346 = 1U;
	static volatile int64_t x347 = INT64_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 2257088;

    t86 = ((x345<=x346)>(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MIN;
	int16_t x351 = 14;
	uint32_t x352 = 420430U;
	volatile int32_t t87 = -19830872;

    t87 = ((x349<=x350)>(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = -1;
	uint32_t x354 = 3205357U;
	int8_t x355 = INT8_MIN;
	volatile int32_t t88 = 3;

    t88 = ((x353<=x354)>(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	uint64_t x358 = 257681509LLU;
	int8_t x359 = INT8_MIN;
	int32_t x360 = 278768498;

    t89 = ((x357<=x358)>(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = 2650;
	uint8_t x362 = 4U;
	int8_t x364 = 1;
	volatile int32_t t90 = -7;

    t90 = ((x361<=x362)>(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x366 = INT32_MIN;
	uint16_t x368 = 3294U;
	volatile int32_t t91 = 33;

    t91 = ((x365<=x366)>(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MAX;
	static volatile int16_t x371 = INT16_MAX;
	volatile int8_t x372 = -1;
	int32_t t92 = -498404969;

    t92 = ((x369<=x370)>(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x374 = -1;
	uint32_t x375 = 186384U;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -2811;

    t93 = ((x373<=x374)>(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 1U;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 0;

    t94 = ((x377<=x378)>(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 38650320777221090LLU;
	static int32_t x382 = -1;
	uint8_t x383 = 2U;
	uint16_t x384 = 0U;
	volatile int32_t t95 = -4;

    t95 = ((x381<=x382)>(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = 1100927363582143358LL;
	int16_t x387 = 5;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 12358;

    t96 = ((x385<=x386)>(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x390 = UINT32_MAX;
	int16_t x391 = 1;
	uint16_t x392 = UINT16_MAX;
	static int32_t t97 = -426153406;

    t97 = ((x389<=x390)>(x391>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 0U;
	uint8_t x394 = 27U;
	int16_t x395 = 89;
	volatile int16_t x396 = 10;
	volatile int32_t t98 = 960213;

    t98 = ((x393<=x394)>(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x400 = INT16_MIN;

    t99 = ((x397<=x398)>(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -1899574;
	int16_t x403 = INT16_MIN;
	uint8_t x404 = 2U;
	int32_t t100 = 3211919;

    t100 = ((x401<=x402)>(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	volatile int16_t x407 = 4;
	volatile uint64_t x408 = UINT64_MAX;

    t101 = ((x405<=x406)>(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	int8_t x410 = 3;
	volatile int32_t t102 = -106483454;

    t102 = ((x409<=x410)>(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 0;
	int64_t x415 = 223LL;
	uint16_t x416 = UINT16_MAX;
	int32_t t103 = -6203090;

    t103 = ((x413<=x414)>(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	int16_t x420 = -1;
	volatile int32_t t104 = 231468;

    t104 = ((x417<=x418)>(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = INT64_MAX;
	static int64_t x422 = INT64_MIN;
	volatile int32_t x423 = INT32_MAX;
	int32_t x424 = INT32_MIN;
	int32_t t105 = -1867598;

    t105 = ((x421<=x422)>(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = 484410489200LLU;
	int32_t x427 = INT32_MIN;
	int32_t x428 = -84;
	int32_t t106 = 351;

    t106 = ((x425<=x426)>(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	int32_t x430 = INT32_MIN;
	int16_t x432 = -714;
	volatile int32_t t107 = -1;

    t107 = ((x429<=x430)>(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x434 = INT64_MIN;
	uint8_t x436 = 3U;
	volatile int32_t t108 = -15394090;

    t108 = ((x433<=x434)>(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	volatile int16_t x438 = INT16_MAX;
	int32_t x439 = INT32_MIN;
	volatile int8_t x440 = -1;
	volatile int32_t t109 = -165349;

    t109 = ((x437<=x438)>(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = 77;
	int32_t x442 = -1;
	uint16_t x443 = UINT16_MAX;
	int32_t x444 = INT32_MIN;

    t110 = ((x441<=x442)>(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	volatile int32_t x447 = -1;
	int16_t x448 = 83;
	static volatile int32_t t111 = -2312500;

    t111 = ((x445<=x446)>(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	static volatile uint32_t x451 = 229570U;
	uint8_t x452 = 36U;
	int32_t t112 = 0;

    t112 = ((x449<=x450)>(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 165117388;
	int32_t x455 = INT32_MAX;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t113 = 49;

    t113 = ((x453<=x454)>(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x459 = 15016LLU;
	uint32_t x460 = 583U;
	volatile int32_t t114 = 16181;

    t114 = ((x457<=x458)>(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MIN;
	int64_t x462 = 2572LL;
	uint16_t x463 = UINT16_MAX;
	int64_t x464 = INT64_MAX;
	static int32_t t115 = 250013065;

    t115 = ((x461<=x462)>(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -2878;
	uint64_t x466 = UINT64_MAX;
	uint64_t x467 = 105153513429LLU;
	int32_t t116 = 6213673;

    t116 = ((x465<=x466)>(x467>x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x470 = INT32_MIN;
	uint64_t x472 = UINT64_MAX;
	static volatile int32_t t117 = 302293655;

    t117 = ((x469<=x470)>(x471>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	int32_t x474 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	volatile int32_t t118 = -3;

    t118 = ((x473<=x474)>(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x478 = UINT64_MAX;
	int8_t x480 = INT8_MAX;

    t119 = ((x477<=x478)>(x479>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 7U;
	uint64_t x482 = UINT64_MAX;
	volatile int32_t t120 = -7;

    t120 = ((x481<=x482)>(x483>x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x486 = -1;
	int16_t x487 = -1;
	volatile int8_t x488 = -1;

    t121 = ((x485<=x486)>(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	int8_t x490 = -1;
	static int8_t x491 = INT8_MIN;

    t122 = ((x489<=x490)>(x491>x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x494 = INT64_MIN;
	int64_t x495 = INT64_MAX;
	int32_t t123 = -503;

    t123 = ((x493<=x494)>(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -14941245LL;
	uint8_t x498 = 56U;
	int16_t x500 = INT16_MIN;

    t124 = ((x497<=x498)>(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x501 = 82U;
	int32_t x502 = -1;
	volatile int16_t x503 = INT16_MAX;
	int8_t x504 = 3;
	int32_t t125 = 0;

    t125 = ((x501<=x502)>(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -1;
	volatile int32_t x506 = -1;
	static volatile int16_t x507 = 367;
	int32_t t126 = -15;

    t126 = ((x505<=x506)>(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	volatile int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MIN;
	static int32_t t127 = -1;

    t127 = ((x509<=x510)>(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = UINT8_MAX;
	int16_t x514 = -1;
	static int64_t x515 = INT64_MIN;
	uint32_t x516 = 1324948U;
	static volatile int32_t t128 = -47;

    t128 = ((x513<=x514)>(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x518 = UINT64_MAX;
	int8_t x519 = -29;
	static int16_t x520 = 0;

    t129 = ((x517<=x518)>(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x523 = -1;
	uint64_t x524 = UINT64_MAX;
	int32_t t130 = -10755503;

    t130 = ((x521<=x522)>(x523>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 6U;
	int16_t x526 = INT16_MAX;
	uint64_t x527 = 4187158056106727LLU;
	int32_t t131 = 421;

    t131 = ((x525<=x526)>(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MIN;
	static int8_t x531 = INT8_MIN;
	static volatile int32_t x532 = -1;
	int32_t t132 = 133;

    t132 = ((x529<=x530)>(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -2575213629018197812LL;
	uint8_t x534 = UINT8_MAX;
	uint64_t x535 = 19345827425722810LLU;
	volatile int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 100;

    t133 = ((x533<=x534)>(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -40;
	int32_t x540 = INT32_MIN;
	volatile int32_t t134 = -15;

    t134 = ((x537<=x538)>(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	uint32_t x542 = 204806728U;
	int32_t x543 = -904967;
	int32_t x544 = -1;
	volatile int32_t t135 = 4;

    t135 = ((x541<=x542)>(x543>x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int8_t x546 = INT8_MIN;
	uint32_t x548 = 1U;
	int32_t t136 = -8642;

    t136 = ((x545<=x546)>(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = -1LL;
	int16_t x551 = 364;
	volatile int32_t t137 = -37562980;

    t137 = ((x549<=x550)>(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = -1LL;
	static int8_t x554 = INT8_MAX;
	int8_t x555 = 0;
	int16_t x556 = INT16_MAX;
	volatile int32_t t138 = 2337;

    t138 = ((x553<=x554)>(x555>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MIN;
	int8_t x558 = INT8_MIN;
	int64_t x559 = INT64_MAX;
	static uint8_t x560 = 9U;
	volatile int32_t t139 = -265624747;

    t139 = ((x557<=x558)>(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = INT32_MAX;
	int8_t x563 = -1;
	int16_t x564 = INT16_MIN;
	int32_t t140 = 33349;

    t140 = ((x561<=x562)>(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x566 = INT32_MIN;
	int32_t x567 = -105841006;
	volatile uint8_t x568 = UINT8_MAX;
	static int32_t t141 = 4325247;

    t141 = ((x565<=x566)>(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 6383;
	volatile uint16_t x570 = 0U;
	uint32_t x571 = 5703888U;

    t142 = ((x569<=x570)>(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 60915491;
	static int16_t x574 = -1022;
	static uint8_t x575 = 4U;
	uint64_t x576 = 292578209127030350LLU;
	int32_t t143 = 239720801;

    t143 = ((x573<=x574)>(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	static volatile int64_t x578 = 880185850128263LL;
	volatile int32_t t144 = 119;

    t144 = ((x577<=x578)>(x579>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x582 = 2U;
	int32_t t145 = -2;

    t145 = ((x581<=x582)>(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 3012;
	static volatile uint16_t x586 = UINT16_MAX;
	static int32_t x587 = INT32_MIN;
	int32_t t146 = -381;

    t146 = ((x585<=x586)>(x587>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	volatile int16_t x590 = INT16_MIN;
	static uint16_t x591 = UINT16_MAX;
	volatile int32_t t147 = -1500353;

    t147 = ((x589<=x590)>(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x593 = UINT8_MAX;
	int64_t x594 = 1LL;
	uint8_t x595 = 1U;
	uint16_t x596 = UINT16_MAX;
	volatile int32_t t148 = -646551975;

    t148 = ((x593<=x594)>(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = -1390116662885760162LL;
	int32_t x599 = INT32_MAX;
	volatile uint64_t x600 = 6LLU;

    t149 = ((x597<=x598)>(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	int32_t x602 = -1;
	int32_t x603 = -1;
	int32_t t150 = -11016;

    t150 = ((x601<=x602)>(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 3U;
	uint32_t x606 = UINT32_MAX;
	uint16_t x607 = 1842U;
	int64_t x608 = -31487566473379430LL;

    t151 = ((x605<=x606)>(x607>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	int16_t x610 = INT16_MIN;
	int32_t t152 = -32345;

    t152 = ((x609<=x610)>(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MIN;
	static volatile int64_t x614 = INT64_MIN;
	static uint64_t x615 = 1LLU;
	uint16_t x616 = 2187U;
	int32_t t153 = 0;

    t153 = ((x613<=x614)>(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = 88578892LL;
	uint8_t x619 = 19U;
	uint16_t x620 = 587U;

    t154 = ((x617<=x618)>(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -21;
	static int16_t x622 = -12;
	int8_t x623 = -55;
	volatile int32_t x624 = -1;
	static int32_t t155 = 4;

    t155 = ((x621<=x622)>(x623>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x626 = UINT32_MAX;
	uint64_t x627 = 132246963518656999LLU;
	volatile int32_t t156 = 71498620;

    t156 = ((x625<=x626)>(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	volatile int32_t x630 = INT32_MAX;
	int8_t x631 = -1;
	uint16_t x632 = 5652U;

    t157 = ((x629<=x630)>(x631>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x633 = -10;
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = -1;
	static volatile uint16_t x636 = 68U;
	volatile int32_t t158 = 8632;

    t158 = ((x633<=x634)>(x635>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MIN;
	static int64_t x638 = INT64_MIN;
	static int8_t x639 = -1;
	static volatile int32_t t159 = -370;

    t159 = ((x637<=x638)>(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	uint16_t x642 = 3678U;
	static int32_t x643 = -1;
	uint32_t x644 = 50U;
	int32_t t160 = 4099647;

    t160 = ((x641<=x642)>(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x645 = 1057116U;
	uint64_t x646 = 5301300LLU;
	static volatile int8_t x647 = INT8_MAX;
	int32_t x648 = INT32_MAX;
	static volatile int32_t t161 = -2;

    t161 = ((x645<=x646)>(x647>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MIN;
	static int64_t x650 = INT64_MIN;
	uint64_t x651 = UINT64_MAX;
	volatile int8_t x652 = INT8_MAX;
	int32_t t162 = 58;

    t162 = ((x649<=x650)>(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	static int64_t x655 = -892918LL;
	int64_t x656 = INT64_MAX;
	int32_t t163 = 90040616;

    t163 = ((x653<=x654)>(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = 17991U;
	uint64_t x659 = UINT64_MAX;
	int16_t x660 = -8;

    t164 = ((x657<=x658)>(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 15269U;
	int64_t x663 = 1571LL;
	volatile int32_t x664 = 573644672;
	static volatile int32_t t165 = 12;

    t165 = ((x661<=x662)>(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	uint8_t x666 = UINT8_MAX;
	int64_t x667 = INT64_MAX;
	int32_t t166 = -779756;

    t166 = ((x665<=x666)>(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x670 = 343871629206820LLU;
	int32_t x671 = INT32_MAX;
	static volatile int8_t x672 = INT8_MIN;

    t167 = ((x669<=x670)>(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	int8_t x675 = INT8_MIN;
	int32_t t168 = 891292;

    t168 = ((x673<=x674)>(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	static uint32_t x679 = 108610U;
	volatile int16_t x680 = -1;

    t169 = ((x677<=x678)>(x679>x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x682 = 117849341993115LLU;
	int32_t x683 = INT32_MIN;
	volatile int16_t x684 = -164;
	volatile int32_t t170 = -132;

    t170 = ((x681<=x682)>(x683>x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MAX;
	uint16_t x686 = UINT16_MAX;
	int32_t x688 = -397;
	static volatile int32_t t171 = 113172;

    t171 = ((x685<=x686)>(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = -1;
	volatile int8_t x691 = -1;
	int64_t x692 = INT64_MIN;
	volatile int32_t t172 = 80444;

    t172 = ((x689<=x690)>(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = -1LL;
	int16_t x695 = INT16_MAX;
	int8_t x696 = INT8_MIN;

    t173 = ((x693<=x694)>(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 415246U;
	static uint8_t x698 = UINT8_MAX;
	volatile int32_t x700 = 60882;
	static int32_t t174 = 30994248;

    t174 = ((x697<=x698)>(x699>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x702 = INT64_MAX;
	int32_t x703 = 20675678;
	volatile int64_t x704 = INT64_MIN;
	int32_t t175 = -1;

    t175 = ((x701<=x702)>(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 61;
	static uint64_t x706 = 772326LLU;
	uint8_t x708 = 12U;

    t176 = ((x705<=x706)>(x707>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = -1LL;
	uint8_t x711 = 5U;
	uint64_t x712 = 6LLU;
	volatile int32_t t177 = -6417;

    t177 = ((x709<=x710)>(x711>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	volatile uint32_t x714 = 140916U;
	uint64_t x715 = 2242522950838923LLU;
	int16_t x716 = INT16_MIN;

    t178 = ((x713<=x714)>(x715>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 5U;
	int64_t x718 = INT64_MAX;
	int32_t x719 = INT32_MIN;
	uint16_t x720 = 1020U;

    t179 = ((x717<=x718)>(x719>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MIN;
	static int32_t x722 = INT32_MIN;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = 461;

    t180 = ((x721<=x722)>(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x726 = 14119506LLU;
	uint32_t x727 = 13059883U;
	volatile int16_t x728 = -1;
	volatile int32_t t181 = -18546;

    t181 = ((x725<=x726)>(x727>x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = INT8_MIN;
	int16_t x731 = INT16_MIN;
	uint64_t x732 = 74826163324227052LLU;
	static int32_t t182 = -325930265;

    t182 = ((x729<=x730)>(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MIN;
	int32_t x735 = INT32_MAX;
	volatile uint32_t x736 = UINT32_MAX;
	int32_t t183 = -49394704;

    t183 = ((x733<=x734)>(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x738 = UINT8_MAX;
	int32_t t184 = -109264353;

    t184 = ((x737<=x738)>(x739>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	volatile uint16_t x743 = UINT16_MAX;
	static int16_t x744 = -1;

    t185 = ((x741<=x742)>(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int64_t x746 = -1LL;
	uint8_t x747 = UINT8_MAX;
	int32_t x748 = -1;
	volatile int32_t t186 = 318930151;

    t186 = ((x745<=x746)>(x747>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x749 = 14U;
	int16_t x750 = INT16_MIN;
	static int8_t x751 = INT8_MAX;
	int32_t t187 = -26757;

    t187 = ((x749<=x750)>(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	volatile int16_t x754 = -1;
	volatile int64_t x755 = INT64_MIN;
	volatile int8_t x756 = INT8_MIN;
	static int32_t t188 = 12;

    t188 = ((x753<=x754)>(x755>x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	uint64_t x759 = 142612827LLU;
	uint16_t x760 = 961U;
	static int32_t t189 = -2;

    t189 = ((x757<=x758)>(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x761 = 63U;
	int8_t x762 = -1;
	int8_t x763 = -1;
	uint64_t x764 = 1684696479074LLU;

    t190 = ((x761<=x762)>(x763>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x765 = -1;
	int32_t x766 = INT32_MIN;
	volatile uint64_t x767 = 3076LLU;
	uint32_t x768 = 148979338U;
	static int32_t t191 = 173971;

    t191 = ((x765<=x766)>(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x770 = -1;
	uint32_t x771 = UINT32_MAX;
	int16_t x772 = 1;
	volatile int32_t t192 = 14;

    t192 = ((x769<=x770)>(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x774 = 36U;
	uint32_t x775 = 14322197U;
	volatile int32_t x776 = -268506009;
	static volatile int32_t t193 = -4;

    t193 = ((x773<=x774)>(x775>x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x779 = 4036U;

    t194 = ((x777<=x778)>(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = 13;
	int8_t x783 = 25;
	static volatile int32_t t195 = 25677302;

    t195 = ((x781<=x782)>(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	int8_t x787 = -1;
	static uint16_t x788 = UINT16_MAX;
	volatile int32_t t196 = -119057;

    t196 = ((x785<=x786)>(x787>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	uint64_t x790 = 1526951502244290201LLU;
	volatile int32_t x791 = INT32_MIN;
	int64_t x792 = -1LL;
	int32_t t197 = 14067944;

    t197 = ((x789<=x790)>(x791>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	static uint16_t x794 = 1265U;
	static volatile int64_t x796 = -1LL;

    t198 = ((x793<=x794)>(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = INT8_MIN;
	int16_t x798 = -1;
	static volatile int64_t x800 = -98LL;
	int32_t t199 = 2;

    t199 = ((x797<=x798)>(x799>x800));

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

