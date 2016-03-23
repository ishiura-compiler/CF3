
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

int64_t x8 = INT64_MIN;
int8_t x14 = -1;
volatile int32_t x15 = INT32_MIN;
int8_t x16 = INT8_MAX;
int8_t x19 = INT8_MIN;
static uint32_t x25 = 1U;
static uint8_t x28 = 1U;
volatile uint8_t x31 = UINT8_MAX;
int32_t x32 = -1;
int32_t t8 = 5;
volatile int32_t t9 = -7369977;
int64_t x41 = INT64_MIN;
static int8_t x44 = -1;
static uint64_t x45 = UINT64_MAX;
volatile int32_t x52 = 616952718;
int32_t t12 = 1;
static volatile int32_t x58 = -4237954;
volatile int32_t t15 = 276;
int32_t x70 = INT32_MAX;
volatile int8_t x74 = INT8_MAX;
volatile int32_t t18 = 2040940;
static int32_t t22 = 312293991;
int64_t x99 = -1LL;
int32_t t25 = 20;
int32_t x115 = INT32_MAX;
uint64_t x117 = UINT64_MAX;
volatile int8_t x123 = INT8_MAX;
int16_t x127 = 80;
volatile int32_t x136 = INT32_MIN;
volatile int32_t t37 = -118;
static int8_t x153 = INT8_MIN;
static uint32_t x163 = 1U;
int16_t x164 = -806;
uint64_t x169 = UINT64_MAX;
volatile int64_t x177 = -837588721LL;
uint8_t x187 = 1U;
uint16_t x191 = UINT16_MAX;
int16_t x192 = -1;
uint16_t x195 = UINT16_MAX;
static uint8_t x204 = 12U;
static int32_t x207 = 52746462;
int8_t x208 = -1;
static int64_t x217 = INT64_MIN;
volatile int8_t x222 = 17;
volatile int64_t x224 = INT64_MIN;
volatile int32_t t55 = 421;
uint16_t x230 = 5336U;
uint16_t x233 = 2U;
int8_t x234 = -1;
static volatile uint16_t x240 = UINT16_MAX;
uint64_t x244 = 679149010636LLU;
static uint16_t x247 = UINT16_MAX;
int8_t x248 = -1;
uint32_t x249 = 64535U;
int8_t x253 = INT8_MAX;
volatile int8_t x255 = INT8_MIN;
int32_t t63 = 334;
int64_t x259 = -1LL;
static volatile int32_t t64 = -22731;
int16_t x268 = INT16_MIN;
uint64_t x274 = 80941LLU;
uint8_t x275 = 0U;
static int8_t x283 = 11;
int16_t x284 = 19;
static volatile int32_t x289 = -30751093;
int32_t x291 = -1;
volatile uint16_t x296 = 0U;
uint32_t x300 = UINT32_MAX;
int32_t x304 = -25664934;
int32_t t75 = -13952;
int16_t x309 = 2;
uint8_t x311 = 1U;
int32_t x322 = -85177991;
volatile int8_t x325 = 15;
uint8_t x327 = 100U;
volatile int8_t x329 = -27;
volatile int32_t t83 = -920303399;
uint16_t x341 = UINT16_MAX;
static uint16_t x342 = 3U;
uint64_t x344 = 81670959708447LLU;
static int64_t x348 = -1LL;
int16_t x359 = -1;
uint32_t x364 = 3349U;
volatile uint64_t x365 = UINT64_MAX;
uint8_t x366 = UINT8_MAX;
volatile int32_t t91 = 2;
int16_t x372 = 8;
uint8_t x374 = UINT8_MAX;
int16_t x376 = INT16_MIN;
uint64_t x381 = 25944815210195LLU;
uint64_t x383 = 4100LLU;
volatile int32_t t95 = 84131670;
uint8_t x392 = 4U;
static volatile int8_t x396 = -7;
volatile int32_t t101 = -80560212;
static int8_t x412 = 28;
static uint32_t x413 = UINT32_MAX;
static int8_t x417 = -32;
int32_t t104 = 49322381;
static int64_t x428 = -1LL;
int32_t t106 = -1;
static int16_t x429 = INT16_MAX;
int16_t x436 = INT16_MIN;
volatile int32_t t108 = -3861265;
uint8_t x442 = 12U;
int16_t x444 = INT16_MAX;
static uint16_t x453 = 29U;
static int8_t x454 = INT8_MAX;
int8_t x456 = 1;
static volatile int64_t x464 = 465216LL;
int32_t t115 = -4;
volatile int32_t t118 = 1;
volatile int8_t x482 = INT8_MAX;
int16_t x486 = 570;
volatile int32_t t121 = -27958;
int8_t x498 = -1;
volatile int64_t x504 = 7037202LL;
int8_t x508 = INT8_MIN;
uint64_t x511 = UINT64_MAX;
int64_t x514 = -1LL;
uint64_t x518 = 13428424874LLU;
int32_t x524 = INT32_MAX;
int32_t x526 = INT32_MAX;
uint16_t x532 = 240U;
int32_t x535 = -1;
int32_t t135 = 5973632;
uint64_t x546 = 5097LLU;
static int32_t x552 = INT32_MAX;
volatile int32_t t137 = -60605;
volatile int32_t t138 = 0;
static volatile int32_t t139 = 1;
uint8_t x563 = 54U;
uint16_t x564 = 88U;
volatile int64_t x569 = -1LL;
int8_t x572 = -42;
volatile int32_t t143 = -4;
volatile int8_t x587 = -1;
int32_t x591 = INT32_MIN;
static uint8_t x593 = 10U;
int8_t x594 = -1;
uint64_t x596 = 168LLU;
int32_t t148 = 4457;
int16_t x598 = -1;
volatile uint8_t x600 = 8U;
int16_t x612 = 37;
volatile int64_t x618 = 183128646LL;
volatile uint32_t x619 = 609857U;
int16_t x622 = 487;
volatile int32_t t156 = 8626;
uint8_t x631 = 13U;
volatile int32_t x632 = INT32_MIN;
int32_t t157 = -190;
static int16_t x647 = INT16_MAX;
static uint16_t x650 = 16U;
uint64_t x652 = 8619274087160LLU;
static volatile int16_t x655 = INT16_MIN;
uint16_t x657 = UINT16_MAX;
uint16_t x663 = 12U;
volatile int32_t t166 = 151120;
int8_t x669 = -1;
int16_t x676 = INT16_MAX;
int64_t x680 = -3LL;
int32_t x681 = INT32_MIN;
static uint32_t x684 = UINT32_MAX;
uint64_t x691 = 207979721233LLU;
static uint32_t x705 = UINT32_MAX;
int32_t t176 = 8;
static volatile int64_t x709 = -406158LL;
static int8_t x715 = -3;
uint64_t x717 = 3112456523LLU;
uint32_t x720 = UINT32_MAX;
int32_t t180 = 43429;
uint64_t x733 = UINT64_MAX;
static int32_t t184 = -3198;
int32_t x746 = 1;
static uint16_t x748 = UINT16_MAX;
int32_t t186 = -4362388;
uint64_t x753 = 114149511LLU;
volatile int64_t x754 = INT64_MIN;
int64_t x759 = -1LL;
volatile int32_t t190 = -727384;
static uint16_t x766 = 4388U;
int32_t x767 = INT32_MIN;
int8_t x771 = INT8_MIN;
int32_t t193 = 24;
int8_t x778 = INT8_MAX;
int32_t x779 = -1;
int16_t x785 = -1886;
volatile int8_t x789 = -1;
uint16_t x795 = 3022U;
int64_t x796 = INT64_MIN;
int64_t x797 = INT64_MIN;
int32_t t199 = 2;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int32_t x2 = INT32_MIN;
	volatile uint32_t x3 = 216U;
	static uint8_t x4 = 34U;
	volatile int32_t t0 = -10615181;

    t0 = ((x1==x2)*(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 12;
	static uint8_t x6 = 0U;
	int16_t x7 = -110;
	static int32_t t1 = 2764271;

    t1 = ((x5==x6)*(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -57;
	volatile uint64_t x10 = 73233906122LLU;
	int16_t x11 = INT16_MIN;
	volatile uint32_t x12 = 2U;
	static int32_t t2 = -32619;

    t2 = ((x9==x10)*(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile int32_t t3 = 55824;

    t3 = ((x13==x14)*(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint64_t x18 = 145291790420LLU;
	int8_t x20 = INT8_MAX;
	int32_t t4 = -259141;

    t4 = ((x17==x18)*(x19>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int32_t x22 = 4;
	uint32_t x23 = 22U;
	int64_t x24 = 2356543316239451829LL;
	int32_t t5 = -9054343;

    t5 = ((x21==x22)*(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	int32_t t6 = 24089990;

    t6 = ((x25==x26)*(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 18082U;
	int32_t x30 = -1;
	static volatile int32_t t7 = 253334689;

    t7 = ((x29==x30)*(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1307041647627360LL;
	int32_t x34 = 119790155;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 47U;

    t8 = ((x33==x34)*(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint16_t x38 = 3U;
	volatile uint32_t x39 = 13323U;
	int8_t x40 = INT8_MAX;

    t9 = ((x37==x38)*(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x42 = INT16_MIN;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t t10 = -306867;

    t10 = ((x41==x42)*(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x46 = INT32_MAX;
	static uint16_t x47 = 17U;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 3978;

    t11 = ((x45==x46)*(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -395828398455LL;
	int8_t x50 = INT8_MIN;
	volatile uint32_t x51 = UINT32_MAX;

    t12 = ((x49==x50)*(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint8_t x54 = 0U;
	uint32_t x55 = 13065U;
	int8_t x56 = 0;
	static volatile int32_t t13 = 232951886;

    t13 = ((x53==x54)*(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	volatile int16_t x59 = INT16_MIN;
	int8_t x60 = -1;
	static volatile int32_t t14 = 247;

    t14 = ((x57==x58)*(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	uint16_t x62 = 0U;
	static int16_t x63 = INT16_MIN;
	static volatile int16_t x64 = INT16_MAX;

    t15 = ((x61==x62)*(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -28;
	volatile int32_t x66 = -1;
	uint64_t x67 = 114030046498493647LLU;
	static int32_t x68 = -1;
	int32_t t16 = 156034;

    t16 = ((x65==x66)*(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = -2;
	int16_t x71 = INT16_MAX;
	static volatile uint16_t x72 = 5429U;
	volatile int32_t t17 = 979760;

    t17 = ((x69==x70)*(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 1545390925627895293LL;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;

    t18 = ((x73==x74)*(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	static int16_t x78 = INT16_MAX;
	uint16_t x79 = 1U;
	int8_t x80 = 0;
	static volatile int32_t t19 = 3;

    t19 = ((x77==x78)*(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -15;
	int16_t x82 = INT16_MIN;
	volatile int64_t x83 = 3874714275998LL;
	int8_t x84 = -1;
	volatile int32_t t20 = 101;

    t20 = ((x81==x82)*(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 6U;
	int8_t x86 = -1;
	static int16_t x87 = INT16_MIN;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = 8;

    t21 = ((x85==x86)*(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = INT64_MAX;
	uint64_t x92 = UINT64_MAX;

    t22 = ((x89==x90)*(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = -357212280LL;
	int32_t x95 = -61326;
	volatile uint64_t x96 = 33341022914091548LLU;
	int32_t t23 = -949;

    t23 = ((x93==x94)*(x95>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x97 = INT64_MAX;
	int64_t x98 = INT64_MIN;
	volatile int8_t x100 = INT8_MIN;
	static int32_t t24 = -54900;

    t24 = ((x97==x98)*(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x101 = UINT16_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -3;
	uint32_t x104 = UINT32_MAX;

    t25 = ((x101==x102)*(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	uint64_t x106 = 911579LLU;
	static uint64_t x107 = UINT64_MAX;
	static uint32_t x108 = 4U;
	volatile int32_t t26 = -1408;

    t26 = ((x105==x106)*(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = -68686390967832882LL;
	uint8_t x110 = 52U;
	static int16_t x111 = 72;
	int16_t x112 = -1;
	int32_t t27 = -6225181;

    t27 = ((x109==x110)*(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	volatile uint32_t x114 = 87503163U;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -1;

    t28 = ((x113==x114)*(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -5LL;
	int64_t x119 = INT64_MIN;
	int16_t x120 = -1;
	static volatile int32_t t29 = 51;

    t29 = ((x117==x118)*(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	uint8_t x122 = 6U;
	volatile int16_t x124 = 97;
	int32_t t30 = 342030;

    t30 = ((x121==x122)*(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	static uint64_t x126 = 2059530922LLU;
	uint8_t x128 = 16U;
	volatile int32_t t31 = 1;

    t31 = ((x125==x126)*(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MIN;
	volatile uint64_t x130 = 3399LLU;
	static int64_t x131 = -1944647147813888LL;
	int64_t x132 = -1LL;
	int32_t t32 = 2;

    t32 = ((x129==x130)*(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 1;
	uint64_t x134 = 5LLU;
	static int16_t x135 = INT16_MIN;
	int32_t t33 = 2078591;

    t33 = ((x133==x134)*(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 22208U;
	static volatile int32_t x138 = 1;
	static uint16_t x139 = UINT16_MAX;
	int32_t x140 = -1;
	static int32_t t34 = -2891;

    t34 = ((x137==x138)*(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 0;
	int64_t x142 = INT64_MAX;
	int64_t x143 = -1LL;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t35 = 2;

    t35 = ((x141==x142)*(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	static uint8_t x146 = 6U;
	static int64_t x147 = -1LL;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = -179611;

    t36 = ((x145==x146)*(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = 2;
	uint16_t x150 = 13580U;
	static int64_t x151 = -9386617LL;
	int64_t x152 = -13981681516359759LL;

    t37 = ((x149==x150)*(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = INT16_MIN;
	int32_t x155 = -13;
	int8_t x156 = -1;
	static int32_t t38 = -36;

    t38 = ((x153==x154)*(x155>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x157 = INT32_MAX;
	uint8_t x158 = 2U;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = 97028U;
	int32_t t39 = 2996;

    t39 = ((x157==x158)*(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	int16_t x162 = INT16_MIN;
	volatile int32_t t40 = 98770;

    t40 = ((x161==x162)*(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x165 = 0U;
	static volatile int8_t x166 = INT8_MAX;
	int8_t x167 = -3;
	static uint16_t x168 = 3U;
	int32_t t41 = -17406;

    t41 = ((x165==x166)*(x167>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = 245258678995137271LL;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MAX;
	static volatile int32_t t42 = -1061;

    t42 = ((x169==x170)*(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 3U;
	uint32_t x174 = 1535U;
	static int8_t x175 = -1;
	static int32_t x176 = INT32_MIN;
	static int32_t t43 = 1;

    t43 = ((x173==x174)*(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = -27891650;
	uint32_t x179 = 816243943U;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t44 = 24628;

    t44 = ((x177==x178)*(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 104U;
	int8_t x182 = -29;
	static int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	int32_t t45 = -71;

    t45 = ((x181==x182)*(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	int8_t x186 = -1;
	static volatile uint64_t x188 = 331654946509948LLU;
	int32_t t46 = -1098;

    t46 = ((x185==x186)*(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = 493614739LL;
	volatile int32_t x190 = 0;
	int32_t t47 = 208606367;

    t47 = ((x189==x190)*(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	volatile uint64_t x194 = UINT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -52;

    t48 = ((x193==x194)*(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 304398228LL;
	int16_t x198 = 24;
	static uint16_t x199 = 20613U;
	uint16_t x200 = 45U;
	volatile int32_t t49 = 11288457;

    t49 = ((x197==x198)*(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 1;
	volatile int64_t x202 = -167469973LL;
	int32_t x203 = INT32_MIN;
	volatile int32_t t50 = 23;

    t50 = ((x201==x202)*(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = 1148390017346338539LL;
	volatile int64_t x206 = -925230909991LL;
	volatile int32_t t51 = -111902;

    t51 = ((x205==x206)*(x207>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	static int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MAX;
	uint16_t x212 = UINT16_MAX;
	static int32_t t52 = -6508711;

    t52 = ((x209==x210)*(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -796;
	int16_t x214 = -10;
	volatile int32_t x215 = -1030684135;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -1;

    t53 = ((x213==x214)*(x215>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x218 = 0U;
	int8_t x219 = -60;
	int16_t x220 = -1;
	volatile int32_t t54 = 1950229;

    t54 = ((x217==x218)*(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 64;
	uint32_t x223 = UINT32_MAX;

    t55 = ((x221==x222)*(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 46;
	static int64_t x226 = 818680107442274609LL;
	uint32_t x227 = 5350717U;
	int64_t x228 = 931111371LL;
	volatile int32_t t56 = -2401358;

    t56 = ((x225==x226)*(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	int16_t x231 = INT16_MIN;
	int32_t x232 = -1;
	volatile int32_t t57 = 254766713;

    t57 = ((x229==x230)*(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x235 = -7385;
	int64_t x236 = 397461114898955LL;
	volatile int32_t t58 = -1211568;

    t58 = ((x233==x234)*(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 14U;
	int64_t x238 = -594LL;
	int16_t x239 = INT16_MAX;
	static int32_t t59 = -729;

    t59 = ((x237==x238)*(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	int16_t x243 = INT16_MAX;
	static volatile int32_t t60 = -2359912;

    t60 = ((x241==x242)*(x243>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	static int64_t x246 = INT64_MIN;
	int32_t t61 = -62;

    t61 = ((x245==x246)*(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x250 = UINT8_MAX;
	volatile int8_t x251 = -1;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t62 = 64;

    t62 = ((x249==x250)*(x251>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = -41;
	int16_t x256 = -1;

    t63 = ((x253==x254)*(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	static int64_t x258 = -9961670LL;
	uint8_t x260 = UINT8_MAX;

    t64 = ((x257==x258)*(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = -1;
	int64_t x262 = 933LL;
	static int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	static int32_t t65 = 6276;

    t65 = ((x261==x262)*(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 15602LLU;
	static int8_t x266 = -58;
	int8_t x267 = -30;
	volatile int32_t t66 = -51;

    t66 = ((x265==x266)*(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	uint64_t x270 = 4LLU;
	volatile int8_t x271 = -1;
	int16_t x272 = -1;
	volatile int32_t t67 = -1198587;

    t67 = ((x269==x270)*(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = 1;
	int32_t x276 = 546908;
	volatile int32_t t68 = -189;

    t68 = ((x273==x274)*(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 0LL;
	uint32_t x278 = 288412U;
	uint64_t x279 = 8952513757LLU;
	int64_t x280 = -1LL;
	volatile int32_t t69 = -94;

    t69 = ((x277==x278)*(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	volatile int32_t x282 = 365;
	int32_t t70 = -9;

    t70 = ((x281==x282)*(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = INT8_MAX;
	int32_t x286 = -33952894;
	uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 22U;
	static int32_t t71 = 5201;

    t71 = ((x285==x286)*(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x290 = INT8_MIN;
	int16_t x292 = -12;
	volatile int32_t t72 = 4020271;

    t72 = ((x289==x290)*(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	static uint8_t x295 = 4U;
	int32_t t73 = 30185297;

    t73 = ((x293==x294)*(x295>x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	uint32_t x298 = 340709U;
	volatile uint64_t x299 = 12044412172858198LLU;
	volatile int32_t t74 = 10636;

    t74 = ((x297==x298)*(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -1;
	uint8_t x302 = 6U;
	static uint32_t x303 = 191534862U;

    t75 = ((x301==x302)*(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x305 = 10U;
	uint8_t x306 = UINT8_MAX;
	uint32_t x307 = 10U;
	volatile uint32_t x308 = 7U;
	int32_t t76 = 853567848;

    t76 = ((x305==x306)*(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x310 = -37970;
	uint64_t x312 = 3818448559LLU;
	volatile int32_t t77 = -22202207;

    t77 = ((x309==x310)*(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	static volatile int16_t x314 = 2545;
	static uint8_t x315 = UINT8_MAX;
	static int64_t x316 = INT64_MAX;
	volatile int32_t t78 = -97178;

    t78 = ((x313==x314)*(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = INT64_MIN;
	int32_t x318 = -63;
	static int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -428856;

    t79 = ((x317==x318)*(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	uint16_t x323 = 371U;
	int16_t x324 = 34;
	volatile int32_t t80 = -132481373;

    t80 = ((x321==x322)*(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = -6023;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -304880735;

    t81 = ((x325==x326)*(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = -3;
	int16_t x331 = -1;
	int64_t x332 = 42564510563226219LL;
	int32_t t82 = 3132;

    t82 = ((x329==x330)*(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -66;
	int64_t x334 = INT64_MIN;
	static int64_t x335 = INT64_MIN;
	volatile int16_t x336 = -101;

    t83 = ((x333==x334)*(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	uint16_t x338 = 349U;
	int16_t x339 = -7;
	static volatile int16_t x340 = 5382;
	int32_t t84 = 3482;

    t84 = ((x337==x338)*(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x343 = -1293300182274LL;
	volatile int32_t t85 = 61561;

    t85 = ((x341==x342)*(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = 852599LL;
	uint64_t x346 = 4LLU;
	uint8_t x347 = 0U;
	volatile int32_t t86 = 0;

    t86 = ((x345==x346)*(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -41;
	volatile int16_t x350 = -14;
	volatile uint32_t x351 = UINT32_MAX;
	int8_t x352 = -1;
	volatile int32_t t87 = 1469158;

    t87 = ((x349==x350)*(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int8_t x354 = -1;
	static int32_t x355 = INT32_MIN;
	uint64_t x356 = 14050944313107LLU;
	int32_t t88 = -165451720;

    t88 = ((x353==x354)*(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	static int16_t x358 = INT16_MIN;
	int8_t x360 = -2;
	volatile int32_t t89 = -147;

    t89 = ((x357==x358)*(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MIN;
	volatile uint16_t x362 = UINT16_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	volatile int32_t t90 = -151;

    t90 = ((x361==x362)*(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x367 = 54939294U;
	int64_t x368 = INT64_MIN;

    t91 = ((x365==x366)*(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = UINT64_MAX;
	static int32_t x370 = -964;
	uint32_t x371 = 10U;
	int32_t t92 = -274240;

    t92 = ((x369==x370)*(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = UINT8_MAX;
	int32_t x375 = INT32_MIN;
	int32_t t93 = 1353;

    t93 = ((x373==x374)*(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 0;
	int32_t x378 = INT32_MAX;
	uint64_t x379 = UINT64_MAX;
	static int8_t x380 = -1;
	static volatile int32_t t94 = -11141;

    t94 = ((x377==x378)*(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x382 = 2137U;
	static volatile uint8_t x384 = UINT8_MAX;

    t95 = ((x381==x382)*(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = -286;
	uint8_t x386 = 7U;
	int16_t x387 = -9;
	int8_t x388 = INT8_MIN;
	int32_t t96 = -502240857;

    t96 = ((x385==x386)*(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	volatile uint32_t x390 = 432412127U;
	int64_t x391 = INT64_MIN;
	volatile int32_t t97 = 1949;

    t97 = ((x389==x390)*(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -7853;
	uint64_t x394 = UINT64_MAX;
	volatile int32_t x395 = -1;
	int32_t t98 = 12069362;

    t98 = ((x393==x394)*(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = -1546;
	int16_t x398 = 16286;
	static int16_t x399 = -138;
	int8_t x400 = INT8_MAX;
	volatile int32_t t99 = 13;

    t99 = ((x397==x398)*(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = 0LL;
	volatile int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MAX;
	int32_t x404 = INT32_MAX;
	int32_t t100 = 0;

    t100 = ((x401==x402)*(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	volatile uint32_t x406 = 239020850U;
	int64_t x407 = INT64_MIN;
	int16_t x408 = 679;

    t101 = ((x405==x406)*(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1LL;
	int8_t x410 = -33;
	static int64_t x411 = INT64_MAX;
	int32_t t102 = -4;

    t102 = ((x409==x410)*(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = INT8_MIN;
	int8_t x415 = 0;
	int8_t x416 = INT8_MIN;
	int32_t t103 = -42546202;

    t103 = ((x413==x414)*(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = INT32_MIN;
	int8_t x419 = -7;
	int32_t x420 = INT32_MAX;

    t104 = ((x417==x418)*(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	static int8_t x422 = 0;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = INT32_MIN;
	int32_t t105 = -78088;

    t105 = ((x421==x422)*(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x425 = 1U;
	uint8_t x426 = 4U;
	static volatile int8_t x427 = INT8_MIN;

    t106 = ((x425==x426)*(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x430 = INT64_MIN;
	uint32_t x431 = 65594387U;
	uint16_t x432 = UINT16_MAX;
	static int32_t t107 = 0;

    t107 = ((x429==x430)*(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = -1556;
	volatile int32_t x434 = INT32_MAX;
	static uint8_t x435 = 50U;

    t108 = ((x433==x434)*(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	static uint32_t x438 = 30581U;
	volatile uint16_t x439 = UINT16_MAX;
	static int64_t x440 = INT64_MAX;
	volatile int32_t t109 = -571711;

    t109 = ((x437==x438)*(x439>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -1LL;
	static uint8_t x443 = UINT8_MAX;
	static volatile int32_t t110 = 9681903;

    t110 = ((x441==x442)*(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	int16_t x446 = INT16_MAX;
	static int32_t x447 = INT32_MAX;
	int8_t x448 = -1;
	int32_t t111 = -4697982;

    t111 = ((x445==x446)*(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 156852U;
	int32_t x450 = INT32_MIN;
	static uint16_t x451 = 2374U;
	int8_t x452 = INT8_MIN;
	int32_t t112 = 209;

    t112 = ((x449==x450)*(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x455 = -1;
	int32_t t113 = 216;

    t113 = ((x453==x454)*(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -6720;
	int8_t x458 = INT8_MIN;
	int64_t x459 = -1LL;
	static uint32_t x460 = UINT32_MAX;
	int32_t t114 = -1;

    t114 = ((x457==x458)*(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -6;
	static int64_t x462 = -1LL;
	volatile int32_t x463 = 7725;

    t115 = ((x461==x462)*(x463>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MAX;
	uint8_t x466 = UINT8_MAX;
	volatile uint64_t x467 = UINT64_MAX;
	volatile uint64_t x468 = 2802379136LLU;
	static volatile int32_t t116 = 2218;

    t116 = ((x465==x466)*(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x469 = UINT64_MAX;
	int32_t x470 = -1621582;
	static int8_t x471 = 0;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t117 = -2;

    t117 = ((x469==x470)*(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = 411;
	volatile int8_t x474 = -1;
	static int8_t x475 = -1;
	int16_t x476 = INT16_MIN;

    t118 = ((x473==x474)*(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = -1;
	int16_t x478 = INT16_MAX;
	int32_t x479 = INT32_MIN;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t119 = 1;

    t119 = ((x477==x478)*(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 29;
	static uint64_t x483 = UINT64_MAX;
	static int16_t x484 = 8082;
	volatile int32_t t120 = 20355;

    t120 = ((x481==x482)*(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -2;
	int8_t x487 = 1;
	volatile int16_t x488 = -1;

    t121 = ((x485==x486)*(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 0U;
	static int8_t x490 = INT8_MIN;
	static volatile int64_t x491 = 4242638797LL;
	static int32_t x492 = INT32_MIN;
	int32_t t122 = -458;

    t122 = ((x489==x490)*(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 1792998052U;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = 3LLU;
	int16_t x496 = 111;
	int32_t t123 = 13992415;

    t123 = ((x493==x494)*(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = -14;
	int16_t x499 = INT16_MAX;
	static uint8_t x500 = UINT8_MAX;
	int32_t t124 = 254499;

    t124 = ((x497==x498)*(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = -1;
	int8_t x502 = INT8_MAX;
	static volatile int64_t x503 = -6505456992675LL;
	volatile int32_t t125 = -30977;

    t125 = ((x501==x502)*(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	uint64_t x506 = 1050674911170329338LLU;
	int64_t x507 = -1LL;
	int32_t t126 = -36;

    t126 = ((x505==x506)*(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = INT64_MIN;
	int16_t x510 = INT16_MAX;
	volatile int16_t x512 = 3800;
	volatile int32_t t127 = -1556;

    t127 = ((x509==x510)*(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -16080;
	int64_t x515 = -1LL;
	static int8_t x516 = INT8_MIN;
	int32_t t128 = -1;

    t128 = ((x513==x514)*(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = 1047U;
	volatile int16_t x519 = 2;
	uint8_t x520 = UINT8_MAX;
	static int32_t t129 = -46809732;

    t129 = ((x517==x518)*(x519>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = UINT64_MAX;
	int8_t x522 = INT8_MAX;
	int64_t x523 = INT64_MAX;
	static int32_t t130 = 18;

    t130 = ((x521==x522)*(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x527 = INT8_MIN;
	uint16_t x528 = 686U;
	volatile int32_t t131 = -13573;

    t131 = ((x525==x526)*(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 131U;
	int16_t x530 = INT16_MIN;
	uint8_t x531 = 13U;
	int32_t t132 = -293692;

    t132 = ((x529==x530)*(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 30;
	static uint32_t x534 = 4U;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t133 = 5;

    t133 = ((x533==x534)*(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	int16_t x538 = INT16_MAX;
	volatile uint8_t x539 = 2U;
	uint16_t x540 = 2847U;
	int32_t t134 = -62133940;

    t134 = ((x537==x538)*(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	static volatile int8_t x542 = INT8_MAX;
	uint16_t x543 = 7016U;
	int16_t x544 = 73;

    t135 = ((x541==x542)*(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	int16_t x547 = INT16_MIN;
	int32_t x548 = 3373;
	volatile int32_t t136 = 1788137;

    t136 = ((x545==x546)*(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = -185057;
	uint32_t x550 = 78U;
	static int8_t x551 = INT8_MAX;

    t137 = ((x549==x550)*(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = INT8_MIN;
	int16_t x554 = -53;
	volatile int16_t x555 = -1;
	int32_t x556 = -1;

    t138 = ((x553==x554)*(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x557 = 0U;
	int16_t x558 = -155;
	int64_t x559 = INT64_MAX;
	static volatile uint64_t x560 = 880798997793806926LLU;

    t139 = ((x557==x558)*(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	uint64_t x562 = 7LLU;
	volatile int32_t t140 = 425305;

    t140 = ((x561==x562)*(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 2U;
	int16_t x566 = -1;
	int64_t x567 = INT64_MIN;
	volatile int64_t x568 = INT64_MAX;
	int32_t t141 = 1;

    t141 = ((x565==x566)*(x567>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = INT32_MIN;
	volatile int16_t x571 = -1;
	int32_t t142 = -70;

    t142 = ((x569==x570)*(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = 1U;
	uint16_t x574 = 4259U;
	uint64_t x575 = 82766856494140LLU;
	int8_t x576 = INT8_MIN;

    t143 = ((x573==x574)*(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 5090LL;
	int32_t x578 = 13690;
	int64_t x579 = 170LL;
	int64_t x580 = -1LL;
	int32_t t144 = -580924;

    t144 = ((x577==x578)*(x579>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x581 = 316782937;
	volatile int32_t x582 = INT32_MIN;
	static volatile int8_t x583 = -10;
	int64_t x584 = -1LL;
	volatile int32_t t145 = -1633836;

    t145 = ((x581==x582)*(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 302470176;
	uint32_t x586 = 979317U;
	volatile int32_t x588 = INT32_MIN;
	volatile int32_t t146 = 96;

    t146 = ((x585==x586)*(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MAX;
	static int64_t x590 = 1LL;
	static int64_t x592 = 16412418627LL;
	int32_t t147 = -2979668;

    t147 = ((x589==x590)*(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x595 = -1LL;

    t148 = ((x593==x594)*(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 27U;
	uint64_t x599 = 1160682433LLU;
	int32_t t149 = -357500083;

    t149 = ((x597==x598)*(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -11573LL;
	volatile int32_t x602 = -16133668;
	int64_t x603 = -1LL;
	int8_t x604 = -10;
	int32_t t150 = -1;

    t150 = ((x601==x602)*(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x605 = UINT64_MAX;
	int64_t x606 = -1LL;
	uint8_t x607 = 25U;
	int32_t x608 = 1;
	int32_t t151 = -28588776;

    t151 = ((x605==x606)*(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = INT64_MIN;
	int32_t x610 = INT32_MAX;
	static int64_t x611 = -1LL;
	volatile int32_t t152 = -501;

    t152 = ((x609==x610)*(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 302833459371632345LLU;
	int64_t x614 = INT64_MIN;
	uint32_t x615 = 18523608U;
	volatile uint32_t x616 = 111U;
	volatile int32_t t153 = -16963302;

    t153 = ((x613==x614)*(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -10556LL;
	int8_t x620 = 7;
	static volatile int32_t t154 = -55;

    t154 = ((x617==x618)*(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = -38;
	uint8_t x623 = 50U;
	int64_t x624 = INT64_MIN;
	int32_t t155 = 1;

    t155 = ((x621==x622)*(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int64_t x626 = INT64_MIN;
	uint32_t x627 = 161643U;
	int32_t x628 = INT32_MAX;

    t156 = ((x625==x626)*(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = 7;
	static int64_t x630 = 778736352925514LL;

    t157 = ((x629==x630)*(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = 415;
	int8_t x634 = INT8_MIN;
	static volatile int64_t x635 = INT64_MIN;
	volatile int32_t x636 = INT32_MAX;
	volatile int32_t t158 = 4287;

    t158 = ((x633==x634)*(x635>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = INT64_MIN;
	static int64_t x638 = INT64_MAX;
	int32_t x639 = -4042;
	int16_t x640 = INT16_MIN;
	int32_t t159 = 7754677;

    t159 = ((x637==x638)*(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	int64_t x642 = INT64_MIN;
	static volatile uint32_t x643 = 2U;
	uint8_t x644 = 1U;
	volatile int32_t t160 = -399222385;

    t160 = ((x641==x642)*(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 27589U;
	uint32_t x646 = 0U;
	int32_t x648 = 4;
	volatile int32_t t161 = -1;

    t161 = ((x645==x646)*(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MAX;
	static int32_t x651 = INT32_MAX;
	volatile int32_t t162 = 16788;

    t162 = ((x649==x650)*(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x653 = 136673909248466LLU;
	uint8_t x654 = 1U;
	volatile uint64_t x656 = UINT64_MAX;
	int32_t t163 = 176541436;

    t163 = ((x653==x654)*(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = INT16_MAX;
	int64_t x659 = INT64_MIN;
	int32_t x660 = 963630;
	static int32_t t164 = 9;

    t164 = ((x657==x658)*(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MAX;
	int32_t x662 = INT32_MAX;
	static int32_t x664 = -1;
	int32_t t165 = -213179;

    t165 = ((x661==x662)*(x663>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 273264U;
	static uint8_t x666 = 27U;
	static int32_t x667 = INT32_MIN;
	int8_t x668 = 11;

    t166 = ((x665==x666)*(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x670 = INT64_MAX;
	volatile int16_t x671 = -176;
	static volatile int64_t x672 = -1LL;
	volatile int32_t t167 = 93964918;

    t167 = ((x669==x670)*(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 0;
	volatile uint8_t x674 = 5U;
	uint16_t x675 = 22U;
	volatile int32_t t168 = -655;

    t168 = ((x673==x674)*(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	int16_t x678 = INT16_MIN;
	uint16_t x679 = 235U;
	volatile int32_t t169 = 21409;

    t169 = ((x677==x678)*(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x682 = INT64_MIN;
	static int16_t x683 = INT16_MIN;
	int32_t t170 = -773871540;

    t170 = ((x681==x682)*(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 85382LLU;
	uint16_t x686 = 998U;
	int32_t x687 = INT32_MIN;
	int8_t x688 = -40;
	volatile int32_t t171 = 0;

    t171 = ((x685==x686)*(x687>x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	int32_t x690 = -247577;
	int16_t x692 = -1;
	int32_t t172 = -10707;

    t172 = ((x689==x690)*(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	int16_t x694 = 2;
	int8_t x695 = -9;
	uint16_t x696 = 209U;
	volatile int32_t t173 = -7788;

    t173 = ((x693==x694)*(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	int64_t x698 = -2395869LL;
	static uint32_t x699 = UINT32_MAX;
	volatile int64_t x700 = -1120152LL;
	int32_t t174 = -260565;

    t174 = ((x697==x698)*(x699>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = -1LL;
	static uint32_t x702 = 4986U;
	static uint32_t x703 = 4849U;
	static int32_t x704 = INT32_MIN;
	volatile int32_t t175 = 83713;

    t175 = ((x701==x702)*(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MIN;
	int16_t x707 = INT16_MAX;
	int8_t x708 = INT8_MIN;

    t176 = ((x705==x706)*(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x710 = 40908051LLU;
	volatile int8_t x711 = INT8_MIN;
	int8_t x712 = -1;
	int32_t t177 = -1;

    t177 = ((x709==x710)*(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = 14489U;
	int8_t x714 = -1;
	uint8_t x716 = 49U;
	volatile int32_t t178 = -6718;

    t178 = ((x713==x714)*(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x718 = UINT8_MAX;
	int32_t x719 = -1846;
	volatile int32_t t179 = -91;

    t179 = ((x717==x718)*(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = -1;
	int32_t x722 = INT32_MIN;
	static volatile int16_t x723 = -1;
	uint64_t x724 = 5241267LLU;

    t180 = ((x721==x722)*(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	static int32_t x726 = INT32_MIN;
	uint8_t x727 = 3U;
	int64_t x728 = -1LL;
	volatile int32_t t181 = 0;

    t181 = ((x725==x726)*(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	volatile int16_t x730 = INT16_MAX;
	static uint8_t x731 = 19U;
	int16_t x732 = 1680;
	static int32_t t182 = -3092;

    t182 = ((x729==x730)*(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = INT16_MAX;
	uint8_t x735 = UINT8_MAX;
	static int16_t x736 = -3519;
	volatile int32_t t183 = -993277923;

    t183 = ((x733==x734)*(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = INT32_MIN;
	uint32_t x738 = UINT32_MAX;
	static volatile int8_t x739 = 55;
	int16_t x740 = -12136;

    t184 = ((x737==x738)*(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MIN;
	int16_t x742 = -53;
	volatile uint8_t x743 = 1U;
	volatile int32_t x744 = INT32_MIN;
	volatile int32_t t185 = 28738;

    t185 = ((x741==x742)*(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = -1;
	uint16_t x747 = UINT16_MAX;

    t186 = ((x745==x746)*(x747>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int32_t x750 = INT32_MIN;
	uint16_t x751 = 209U;
	int32_t x752 = -1;
	int32_t t187 = 378;

    t187 = ((x749==x750)*(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x755 = -1101687975140660LL;
	uint32_t x756 = UINT32_MAX;
	volatile int32_t t188 = 881974;

    t188 = ((x753==x754)*(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -3;
	volatile int64_t x758 = -1LL;
	volatile uint32_t x760 = 825433U;
	static volatile int32_t t189 = -5654795;

    t189 = ((x757==x758)*(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -164852099664034LL;
	volatile int32_t x762 = -202286683;
	int32_t x763 = INT32_MAX;
	int32_t x764 = INT32_MAX;

    t190 = ((x761==x762)*(x763>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x768 = INT64_MIN;
	volatile int32_t t191 = -300;

    t191 = ((x765==x766)*(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 814039247209962806LLU;
	volatile int16_t x770 = -1;
	static volatile uint64_t x772 = 837148688038299LLU;
	int32_t t192 = -725;

    t192 = ((x769==x770)*(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	volatile uint16_t x774 = 25910U;
	static int32_t x775 = INT32_MIN;
	volatile int64_t x776 = INT64_MAX;

    t193 = ((x773==x774)*(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x777 = 4329615489929701LLU;
	static uint64_t x780 = 25080LLU;
	static volatile int32_t t194 = 1863;

    t194 = ((x777==x778)*(x779>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MAX;
	int32_t x782 = INT32_MIN;
	int64_t x783 = INT64_MIN;
	static uint16_t x784 = 9857U;
	int32_t t195 = 1680793;

    t195 = ((x781==x782)*(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x786 = INT8_MIN;
	int64_t x787 = INT64_MAX;
	int64_t x788 = INT64_MIN;
	int32_t t196 = 1364962;

    t196 = ((x785==x786)*(x787>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x790 = 1087U;
	volatile uint16_t x791 = UINT16_MAX;
	volatile int64_t x792 = 1LL;
	volatile int32_t t197 = -240;

    t197 = ((x789==x790)*(x791>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = -1;
	volatile int8_t x794 = -1;
	static int32_t t198 = 97982932;

    t198 = ((x793==x794)*(x795>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = INT8_MAX;
	static uint64_t x799 = 3705819431251022470LLU;
	volatile int32_t x800 = INT32_MIN;

    t199 = ((x797==x798)*(x799>x800));

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

