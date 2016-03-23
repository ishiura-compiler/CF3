
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

static uint8_t x5 = 0U;
int32_t x6 = INT32_MIN;
uint16_t x9 = UINT16_MAX;
static uint64_t x10 = UINT64_MAX;
uint8_t x16 = 72U;
static volatile int8_t x25 = INT8_MIN;
int8_t x27 = INT8_MIN;
volatile int32_t t5 = -57772;
static uint8_t x33 = UINT8_MAX;
int64_t x34 = INT64_MAX;
uint32_t x51 = UINT32_MAX;
int32_t t7 = -47;
uint16_t x63 = 4802U;
uint32_t x65 = 8U;
uint32_t x68 = 192U;
volatile uint64_t x69 = 1425LLU;
volatile int16_t x70 = INT16_MAX;
int16_t x75 = INT16_MIN;
volatile int32_t t13 = 46373;
uint32_t x80 = 140229918U;
int32_t t15 = -45;
int32_t t16 = -908;
int16_t x94 = INT16_MIN;
static uint8_t x98 = 15U;
uint64_t x100 = UINT64_MAX;
int16_t x106 = INT16_MIN;
int32_t x124 = INT32_MAX;
volatile int32_t t24 = 1262167;
static int64_t x125 = -26670988397910817LL;
int64_t x133 = -1LL;
int8_t x135 = INT8_MIN;
volatile int32_t t28 = 478501;
uint32_t x155 = UINT32_MAX;
static int32_t x162 = INT32_MIN;
static int16_t x163 = 17;
static int64_t x164 = INT64_MIN;
volatile int32_t t31 = -9956;
int16_t x168 = -1;
int32_t t32 = -1;
static int16_t x177 = -13;
static int8_t x178 = INT8_MIN;
uint16_t x179 = 1U;
int8_t x181 = INT8_MIN;
uint8_t x182 = UINT8_MAX;
int16_t x194 = INT16_MIN;
int32_t t42 = -7;
static uint16_t x230 = 16U;
int8_t x234 = INT8_MAX;
uint64_t x235 = UINT64_MAX;
int8_t x237 = INT8_MAX;
int16_t x240 = -1;
volatile int32_t t46 = 44;
int32_t x241 = 25315;
volatile int32_t t49 = 721;
static int32_t x255 = -1;
uint32_t x257 = UINT32_MAX;
int32_t x271 = -1;
int32_t t53 = -132604693;
static int8_t x275 = 9;
int64_t x291 = INT64_MIN;
int32_t t57 = 4;
int64_t x294 = INT64_MAX;
int64_t x295 = -1LL;
static int32_t x296 = INT32_MIN;
int32_t t58 = -233;
volatile uint16_t x300 = 200U;
int32_t t59 = -89304;
static volatile uint16_t x301 = 122U;
int32_t x302 = 2807025;
int16_t x306 = INT16_MIN;
static int16_t x307 = -11;
uint32_t x310 = 2673U;
int16_t x311 = INT16_MAX;
uint64_t x312 = 7512360LLU;
int8_t x318 = -1;
int32_t t66 = 0;
static int16_t x338 = INT16_MIN;
static int32_t t68 = 28669721;
uint8_t x355 = UINT8_MAX;
int16_t x356 = INT16_MIN;
uint8_t x358 = 2U;
int32_t x393 = INT32_MIN;
static int16_t x396 = 73;
int16_t x416 = -40;
static int16_t x421 = -1;
static int8_t x424 = 63;
volatile int32_t t86 = 102305;
volatile int64_t x439 = INT64_MIN;
int8_t x440 = 2;
volatile uint16_t x449 = 697U;
static int64_t x451 = -1LL;
volatile int16_t x452 = 27;
static uint8_t x457 = 104U;
int8_t x459 = 24;
int16_t x461 = 512;
volatile int32_t t94 = -97;
uint32_t x465 = 674588742U;
static int8_t x472 = INT8_MIN;
static volatile int32_t t96 = -8952916;
static uint32_t x481 = 2027063U;
int64_t x491 = -23257LL;
int32_t x498 = -1;
int32_t x506 = INT32_MIN;
int64_t x507 = -1434000288849924123LL;
uint64_t x517 = 107LLU;
uint64_t x524 = 8251872735315422LLU;
static int64_t x533 = INT64_MIN;
static uint8_t x535 = UINT8_MAX;
int64_t x537 = -96825LL;
int16_t x538 = INT16_MAX;
volatile int32_t x539 = INT32_MIN;
int16_t x540 = 1;
uint16_t x544 = UINT16_MAX;
static int64_t x561 = INT64_MIN;
static int8_t x562 = 3;
static uint64_t x564 = UINT64_MAX;
static uint8_t x568 = 34U;
static uint32_t x581 = UINT32_MAX;
static int32_t x598 = INT32_MAX;
volatile uint16_t x602 = UINT16_MAX;
int8_t x604 = -1;
static volatile int32_t t123 = 28366368;
int32_t x610 = 29;
int32_t x611 = 0;
static uint64_t x613 = UINT64_MAX;
static int8_t x616 = INT8_MAX;
int8_t x617 = INT8_MAX;
static volatile int16_t x618 = INT16_MIN;
uint32_t x628 = 15U;
int32_t t128 = 501702;
volatile int32_t t129 = -298859968;
static volatile int32_t t130 = -8;
int16_t x639 = INT16_MAX;
static int64_t x642 = -20988579628437LL;
int32_t t133 = -6;
static int8_t x659 = 0;
static int32_t x660 = INT32_MIN;
volatile int32_t t135 = -10214585;
int32_t x664 = -1;
uint16_t x666 = 1U;
int32_t x671 = 59510119;
static int8_t x674 = INT8_MIN;
uint32_t x675 = 397965U;
static int64_t x679 = -1LL;
static int8_t x681 = 1;
static uint64_t x687 = 34536539523183074LLU;
int16_t x690 = -6838;
volatile int32_t t143 = -6;
static int64_t x701 = -1LL;
static int64_t x709 = INT64_MIN;
int16_t x710 = INT16_MAX;
static int16_t x712 = -3;
uint16_t x715 = 13042U;
uint64_t x729 = 881482090748LLU;
static volatile int8_t x757 = -1;
static int64_t x758 = -114LL;
int16_t x764 = INT16_MAX;
volatile int32_t t159 = 879347;
uint16_t x770 = UINT16_MAX;
volatile int32_t t161 = -5;
volatile uint16_t x781 = 3U;
int32_t t164 = 11;
int8_t x799 = INT8_MIN;
uint32_t x816 = UINT32_MAX;
static uint64_t x819 = 367017184930LLU;
int16_t x827 = INT16_MIN;
volatile int64_t x828 = -206234217969LL;
volatile int32_t t172 = 2764;
volatile int64_t x833 = -1LL;
static volatile int64_t x844 = -89LL;
volatile int32_t t175 = -15;
int16_t x846 = -1;
uint64_t x864 = 3195742694616LLU;
int8_t x869 = 1;
int16_t x882 = -661;
uint8_t x890 = UINT8_MAX;
int16_t x901 = 13;
volatile uint8_t x905 = 3U;
uint32_t x906 = 2453647U;
int32_t x908 = INT32_MIN;
volatile int32_t x917 = INT32_MIN;
static int8_t x924 = INT8_MAX;
int64_t x929 = INT64_MIN;
volatile uint64_t x931 = UINT64_MAX;
uint8_t x937 = 80U;
volatile int64_t x943 = INT64_MIN;
volatile int32_t t195 = -395041826;
uint32_t x954 = 29583U;
int32_t x955 = INT32_MIN;
uint64_t x959 = UINT64_MAX;


void f0(void) {
    	int8_t x1 = -1;
	int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = 54960;

    t0 = ((x1&x2)>(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x7 = INT16_MIN;
	static uint32_t x8 = 29U;
	int32_t t1 = 14795632;

    t1 = ((x5&x6)>(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x11 = 1651U;
	int8_t x12 = -1;
	volatile int32_t t2 = -200831;

    t2 = ((x9&x10)>(x11+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 27831U;
	uint64_t x14 = UINT64_MAX;
	uint8_t x15 = UINT8_MAX;
	volatile int32_t t3 = -5;

    t3 = ((x13&x14)>(x15+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	uint8_t x22 = 2U;
	int16_t x23 = INT16_MIN;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t4 = 20802992;

    t4 = ((x21&x22)>(x23+x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x26 = 1861LLU;
	static int8_t x28 = 0;

    t5 = ((x25&x26)>(x27+x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x35 = INT8_MAX;
	int8_t x36 = 5;
	volatile int32_t t6 = 45499032;

    t6 = ((x33&x34)>(x35+x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x49 = 3910536483270868LLU;
	uint16_t x50 = UINT16_MAX;
	int8_t x52 = INT8_MIN;

    t7 = ((x49&x50)>(x51+x52));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile uint16_t x54 = 171U;
	int8_t x55 = 1;
	volatile int64_t x56 = -1LL;
	static int32_t t8 = -1685121;

    t8 = ((x53&x54)>(x55+x56));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x57 = 6342U;
	int16_t x58 = INT16_MIN;
	static uint8_t x59 = UINT8_MAX;
	int16_t x60 = 0;
	volatile int32_t t9 = -565216095;

    t9 = ((x57&x58)>(x59+x60));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x61 = 16U;
	uint32_t x62 = UINT32_MAX;
	volatile int16_t x64 = -1;
	volatile int32_t t10 = -872251;

    t10 = ((x61&x62)>(x63+x64));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x66 = 4U;
	int8_t x67 = INT8_MAX;
	volatile int32_t t11 = 73475887;

    t11 = ((x65&x66)>(x67+x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x71 = UINT64_MAX;
	uint64_t x72 = 1517454696186LLU;
	volatile int32_t t12 = -25;

    t12 = ((x69&x70)>(x71+x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x73 = -6;
	static int16_t x74 = INT16_MIN;
	uint32_t x76 = 20870024U;

    t13 = ((x73&x74)>(x75+x76));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x77 = UINT32_MAX;
	int16_t x78 = INT16_MIN;
	volatile int32_t x79 = -1;
	int32_t t14 = -1;

    t14 = ((x77&x78)>(x79+x80));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x81 = 3U;
	uint64_t x82 = 240660515LLU;
	volatile int32_t x83 = 101671;
	volatile uint32_t x84 = UINT32_MAX;

    t15 = ((x81&x82)>(x83+x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x85 = UINT8_MAX;
	int8_t x86 = -3;
	volatile int64_t x87 = 1501217638860829LL;
	uint64_t x88 = 79145081992031LLU;

    t16 = ((x85&x86)>(x87+x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x93 = -1;
	int32_t x95 = -16605739;
	static uint16_t x96 = 3785U;
	int32_t t17 = 1;

    t17 = ((x93&x94)>(x95+x96));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x97 = INT32_MIN;
	static int64_t x99 = INT64_MAX;
	int32_t t18 = -4853649;

    t18 = ((x97&x98)>(x99+x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x101 = INT32_MAX;
	int8_t x102 = INT8_MIN;
	uint32_t x103 = 622263441U;
	uint16_t x104 = 19U;
	volatile int32_t t19 = 174311;

    t19 = ((x101&x102)>(x103+x104));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x105 = UINT16_MAX;
	volatile uint32_t x107 = 926U;
	uint32_t x108 = 20059U;
	int32_t t20 = -4;

    t20 = ((x105&x106)>(x107+x108));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x109 = -2145163600LL;
	static uint32_t x110 = 1760541U;
	int16_t x111 = INT16_MAX;
	int64_t x112 = -1497048508384112243LL;
	int32_t t21 = -1875955;

    t21 = ((x109&x110)>(x111+x112));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	static volatile int64_t x116 = INT64_MAX;
	volatile int32_t t22 = 727152957;

    t22 = ((x113&x114)>(x115+x116));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x117 = 4552168535424LLU;
	static volatile int32_t x118 = INT32_MAX;
	int16_t x119 = INT16_MAX;
	int8_t x120 = 26;
	static volatile int32_t t23 = -5590;

    t23 = ((x117&x118)>(x119+x120));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x121 = 3U;
	int16_t x122 = 0;
	int64_t x123 = -1LL;

    t24 = ((x121&x122)>(x123+x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x126 = 0;
	volatile int64_t x127 = -1LL;
	volatile int64_t x128 = 454927LL;
	int32_t t25 = 105529;

    t25 = ((x125&x126)>(x127+x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x134 = -1LL;
	static int16_t x136 = 343;
	volatile int32_t t26 = 0;

    t26 = ((x133&x134)>(x135+x136));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x137 = 52266454LLU;
	uint8_t x138 = UINT8_MAX;
	uint32_t x139 = UINT32_MAX;
	static volatile uint16_t x140 = 5U;
	int32_t t27 = 12991;

    t27 = ((x137&x138)>(x139+x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x149 = 378317U;
	volatile uint8_t x150 = 1U;
	static volatile uint64_t x151 = 184487644840702LLU;
	volatile uint16_t x152 = UINT16_MAX;

    t28 = ((x149&x150)>(x151+x152));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x153 = 311;
	static int32_t x154 = INT32_MAX;
	uint64_t x156 = UINT64_MAX;
	int32_t t29 = 1;

    t29 = ((x153&x154)>(x155+x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x157 = 5731;
	volatile int8_t x158 = -1;
	uint8_t x159 = UINT8_MAX;
	static int32_t x160 = -583278;
	int32_t t30 = 42347;

    t30 = ((x157&x158)>(x159+x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x161 = 237;

    t31 = ((x161&x162)>(x163+x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = INT16_MIN;
	static volatile int64_t x166 = -7756161267LL;
	volatile int16_t x167 = INT16_MIN;

    t32 = ((x165&x166)>(x167+x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x169 = INT64_MIN;
	uint8_t x170 = UINT8_MAX;
	uint64_t x171 = 152645345746LLU;
	static uint64_t x172 = UINT64_MAX;
	int32_t t33 = -128836;

    t33 = ((x169&x170)>(x171+x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x180 = -1LL;
	int32_t t34 = 3;

    t34 = ((x177&x178)>(x179+x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x183 = INT64_MIN;
	int32_t x184 = 154;
	int32_t t35 = 1944;

    t35 = ((x181&x182)>(x183+x184));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x185 = -1;
	int8_t x186 = INT8_MAX;
	static int8_t x187 = 34;
	uint8_t x188 = 52U;
	int32_t t36 = -441528809;

    t36 = ((x185&x186)>(x187+x188));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x193 = 0;
	int16_t x195 = -12;
	uint8_t x196 = 24U;
	static int32_t t37 = -9;

    t37 = ((x193&x194)>(x195+x196));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x197 = UINT32_MAX;
	uint8_t x198 = 0U;
	volatile uint8_t x199 = UINT8_MAX;
	volatile int32_t x200 = -1;
	volatile int32_t t38 = -66385298;

    t38 = ((x197&x198)>(x199+x200));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x201 = 61U;
	static int64_t x202 = 47LL;
	int16_t x203 = INT16_MIN;
	static uint8_t x204 = 10U;
	volatile int32_t t39 = -11;

    t39 = ((x201&x202)>(x203+x204));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x209 = -2;
	volatile uint8_t x210 = 31U;
	volatile uint16_t x211 = 20U;
	int64_t x212 = -1LL;
	int32_t t40 = 15;

    t40 = ((x209&x210)>(x211+x212));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x213 = INT32_MIN;
	int16_t x214 = -1;
	volatile int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	int32_t t41 = -34617;

    t41 = ((x213&x214)>(x215+x216));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x217 = INT32_MIN;
	int32_t x218 = -159347704;
	volatile int16_t x219 = -1;
	int64_t x220 = INT64_MAX;

    t42 = ((x217&x218)>(x219+x220));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x221 = INT64_MAX;
	int16_t x222 = -44;
	volatile int8_t x223 = -1;
	static int8_t x224 = INT8_MAX;
	int32_t t43 = -197341952;

    t43 = ((x221&x222)>(x223+x224));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x229 = -188064LL;
	static int16_t x231 = 4;
	volatile int8_t x232 = 24;
	int32_t t44 = 7437;

    t44 = ((x229&x230)>(x231+x232));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x233 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	volatile int32_t t45 = 232510655;

    t45 = ((x233&x234)>(x235+x236));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MIN;

    t46 = ((x237&x238)>(x239+x240));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x242 = -8;
	static volatile int8_t x243 = 3;
	uint64_t x244 = 633648339252404837LLU;
	static volatile int32_t t47 = -12252437;

    t47 = ((x241&x242)>(x243+x244));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x245 = -1LL;
	volatile int64_t x246 = -2LL;
	static uint32_t x247 = UINT32_MAX;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int32_t t48 = 8301334;

    t48 = ((x245&x246)>(x247+x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x249 = -3;
	static int64_t x250 = -8LL;
	int32_t x251 = -1;
	static uint32_t x252 = UINT32_MAX;

    t49 = ((x249&x250)>(x251+x252));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x253 = 3312836;
	uint32_t x254 = UINT32_MAX;
	static uint16_t x256 = UINT16_MAX;
	int32_t t50 = -2382541;

    t50 = ((x253&x254)>(x255+x256));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x258 = INT16_MIN;
	int32_t x259 = -1;
	int8_t x260 = INT8_MIN;
	volatile int32_t t51 = 5704996;

    t51 = ((x257&x258)>(x259+x260));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x265 = 1U;
	int32_t x266 = INT32_MAX;
	volatile uint64_t x267 = 300LLU;
	volatile int8_t x268 = -6;
	volatile int32_t t52 = -206;

    t52 = ((x265&x266)>(x267+x268));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x269 = INT16_MAX;
	volatile int16_t x270 = -1;
	volatile int32_t x272 = 16684;

    t53 = ((x269&x270)>(x271+x272));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = -1;
	uint64_t x276 = UINT64_MAX;
	int32_t t54 = 349595459;

    t54 = ((x273&x274)>(x275+x276));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x277 = 7184537U;
	static volatile uint16_t x278 = 0U;
	uint32_t x279 = 472189975U;
	uint16_t x280 = 3U;
	volatile int32_t t55 = 8;

    t55 = ((x277&x278)>(x279+x280));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x285 = -1242918;
	int64_t x286 = INT64_MIN;
	int64_t x287 = -1LL;
	static uint8_t x288 = 5U;
	int32_t t56 = 4025;

    t56 = ((x285&x286)>(x287+x288));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x289 = 113U;
	static int16_t x290 = INT16_MIN;
	int32_t x292 = 31300;

    t57 = ((x289&x290)>(x291+x292));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x293 = 127U;

    t58 = ((x293&x294)>(x295+x296));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	static int32_t x299 = 345394816;

    t59 = ((x297&x298)>(x299+x300));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x303 = -1;
	volatile int8_t x304 = 1;
	static int32_t t60 = 9;

    t60 = ((x301&x302)>(x303+x304));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x305 = 2U;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t61 = -2132857;

    t61 = ((x305&x306)>(x307+x308));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	volatile int32_t t62 = 0;

    t62 = ((x309&x310)>(x311+x312));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x317 = INT64_MIN;
	static int32_t x319 = INT32_MAX;
	int32_t x320 = -1;
	volatile int32_t t63 = -11;

    t63 = ((x317&x318)>(x319+x320));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x321 = -30;
	int16_t x322 = -1;
	int8_t x323 = 1;
	uint64_t x324 = UINT64_MAX;
	int32_t t64 = -713411;

    t64 = ((x321&x322)>(x323+x324));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x325 = INT8_MAX;
	static int8_t x326 = INT8_MIN;
	static uint32_t x327 = UINT32_MAX;
	int64_t x328 = -1LL;
	int32_t t65 = -1;

    t65 = ((x325&x326)>(x327+x328));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	int32_t x331 = 9550469;
	static uint64_t x332 = 6316807221016629450LLU;

    t66 = ((x329&x330)>(x331+x332));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x333 = INT16_MAX;
	int8_t x334 = -1;
	uint32_t x335 = UINT32_MAX;
	volatile int8_t x336 = 19;
	int32_t t67 = 293;

    t67 = ((x333&x334)>(x335+x336));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x337 = -460414655738901834LL;
	static uint64_t x339 = 682444LLU;
	uint64_t x340 = 32657LLU;

    t68 = ((x337&x338)>(x339+x340));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x341 = INT16_MAX;
	int64_t x342 = -1LL;
	static volatile uint16_t x343 = 140U;
	uint8_t x344 = UINT8_MAX;
	int32_t t69 = 11891;

    t69 = ((x341&x342)>(x343+x344));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x345 = INT16_MAX;
	uint16_t x346 = 25751U;
	volatile int16_t x347 = INT16_MAX;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t70 = 366;

    t70 = ((x345&x346)>(x347+x348));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x349 = INT32_MAX;
	volatile int64_t x350 = INT64_MAX;
	static int16_t x351 = INT16_MIN;
	uint32_t x352 = 127192933U;
	int32_t t71 = -13;

    t71 = ((x349&x350)>(x351+x352));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x353 = 1679608;
	int64_t x354 = INT64_MIN;
	int32_t t72 = 0;

    t72 = ((x353&x354)>(x355+x356));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x357 = INT32_MIN;
	static int64_t x359 = INT64_MIN;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t73 = 25;

    t73 = ((x357&x358)>(x359+x360));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x365 = INT8_MIN;
	int16_t x366 = 1;
	uint16_t x367 = 7131U;
	uint32_t x368 = 1992067546U;
	int32_t t74 = -686423918;

    t74 = ((x365&x366)>(x367+x368));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x369 = -42;
	int16_t x370 = -3;
	uint32_t x371 = UINT32_MAX;
	uint16_t x372 = 10236U;
	static volatile int32_t t75 = -50;

    t75 = ((x369&x370)>(x371+x372));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MIN;
	int8_t x376 = 15;
	static volatile int32_t t76 = 113;

    t76 = ((x373&x374)>(x375+x376));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x377 = INT16_MIN;
	volatile int32_t x378 = INT32_MAX;
	int32_t x379 = 252;
	int32_t x380 = INT32_MIN;
	int32_t t77 = -273;

    t77 = ((x377&x378)>(x379+x380));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x389 = -1;
	uint64_t x390 = 1516226LLU;
	int32_t x391 = -1;
	int64_t x392 = -392530836546862886LL;
	volatile int32_t t78 = 1860;

    t78 = ((x389&x390)>(x391+x392));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x394 = INT16_MAX;
	uint64_t x395 = UINT64_MAX;
	int32_t t79 = -66754706;

    t79 = ((x393&x394)>(x395+x396));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x397 = 11U;
	static uint16_t x398 = 448U;
	static int64_t x399 = -1LL;
	uint32_t x400 = 69572571U;
	static int32_t t80 = -685330;

    t80 = ((x397&x398)>(x399+x400));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = 59645LL;
	int32_t x403 = INT32_MIN;
	int16_t x404 = 5163;
	volatile int32_t t81 = -1;

    t81 = ((x401&x402)>(x403+x404));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x405 = 2014135415LL;
	static uint16_t x406 = 94U;
	int64_t x407 = 82528819664273797LL;
	int64_t x408 = 220LL;
	int32_t t82 = -776686;

    t82 = ((x405&x406)>(x407+x408));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x409 = 2003;
	uint8_t x410 = 21U;
	volatile int8_t x411 = INT8_MAX;
	uint8_t x412 = 103U;
	volatile int32_t t83 = 18666446;

    t83 = ((x409&x410)>(x411+x412));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x413 = 41U;
	static int32_t x414 = INT32_MIN;
	uint8_t x415 = 12U;
	volatile int32_t t84 = 3;

    t84 = ((x413&x414)>(x415+x416));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x417 = INT16_MIN;
	uint16_t x418 = UINT16_MAX;
	int16_t x419 = -13608;
	int16_t x420 = 2;
	volatile int32_t t85 = 3;

    t85 = ((x417&x418)>(x419+x420));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x422 = 6188U;
	int32_t x423 = -1;

    t86 = ((x421&x422)>(x423+x424));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x425 = -1LL;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = 1764326804U;
	int64_t x428 = -1LL;
	volatile int32_t t87 = 72786714;

    t87 = ((x425&x426)>(x427+x428));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x433 = UINT64_MAX;
	int8_t x434 = -1;
	static int8_t x435 = -28;
	static int32_t x436 = INT32_MAX;
	static int32_t t88 = -1;

    t88 = ((x433&x434)>(x435+x436));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x437 = INT16_MAX;
	static int64_t x438 = 10272613399502494LL;
	int32_t t89 = 995674795;

    t89 = ((x437&x438)>(x439+x440));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x445 = 66579884386085153LLU;
	int8_t x446 = -3;
	int16_t x447 = INT16_MIN;
	int16_t x448 = -1;
	int32_t t90 = 5;

    t90 = ((x445&x446)>(x447+x448));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x450 = 127743757965884052LL;
	static int32_t t91 = 1;

    t91 = ((x449&x450)>(x451+x452));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x453 = INT8_MIN;
	uint64_t x454 = UINT64_MAX;
	static uint64_t x455 = 73494847301LLU;
	int8_t x456 = -3;
	volatile int32_t t92 = 68;

    t92 = ((x453&x454)>(x455+x456));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x458 = -1;
	uint8_t x460 = 0U;
	volatile int32_t t93 = 0;

    t93 = ((x457&x458)>(x459+x460));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x462 = INT64_MAX;
	int32_t x463 = -1;
	uint8_t x464 = 3U;

    t94 = ((x461&x462)>(x463+x464));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x466 = INT16_MAX;
	static uint8_t x467 = 95U;
	int8_t x468 = -1;
	static volatile int32_t t95 = -15;

    t95 = ((x465&x466)>(x467+x468));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = -1;
	volatile int8_t x471 = -1;

    t96 = ((x469&x470)>(x471+x472));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x473 = 1071U;
	uint64_t x474 = 14824342747LLU;
	static int64_t x475 = INT64_MAX;
	int64_t x476 = -49894512325570562LL;
	volatile int32_t t97 = 3971;

    t97 = ((x473&x474)>(x475+x476));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x477 = INT32_MAX;
	int32_t x478 = 1118819;
	uint16_t x479 = 13U;
	uint64_t x480 = 3LLU;
	volatile int32_t t98 = 956;

    t98 = ((x477&x478)>(x479+x480));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x482 = INT16_MIN;
	static int8_t x483 = INT8_MIN;
	static int8_t x484 = INT8_MAX;
	volatile int32_t t99 = 37535;

    t99 = ((x481&x482)>(x483+x484));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x489 = 347;
	volatile int64_t x490 = -91746665053LL;
	uint32_t x492 = 606408U;
	static volatile int32_t t100 = 100281216;

    t100 = ((x489&x490)>(x491+x492));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x497 = 27U;
	volatile int32_t x499 = INT32_MIN;
	volatile int8_t x500 = 0;
	volatile int32_t t101 = 46637788;

    t101 = ((x497&x498)>(x499+x500));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x505 = 16970492LL;
	uint64_t x508 = 791373592899LLU;
	int32_t t102 = 622;

    t102 = ((x505&x506)>(x507+x508));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x509 = -276216LL;
	volatile uint8_t x510 = 0U;
	uint8_t x511 = 24U;
	uint32_t x512 = 4541U;
	static volatile int32_t t103 = -136;

    t103 = ((x509&x510)>(x511+x512));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x513 = INT8_MIN;
	volatile int64_t x514 = 2440270494690LL;
	uint32_t x515 = UINT32_MAX;
	int8_t x516 = 60;
	int32_t t104 = -270;

    t104 = ((x513&x514)>(x515+x516));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x518 = 91;
	static uint16_t x519 = 7U;
	static int32_t x520 = 242603;
	volatile int32_t t105 = -1456;

    t105 = ((x517&x518)>(x519+x520));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x521 = 1;
	static int64_t x522 = 63674387503LL;
	uint16_t x523 = 1933U;
	int32_t t106 = 93;

    t106 = ((x521&x522)>(x523+x524));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x525 = 4082887053LLU;
	int8_t x526 = INT8_MAX;
	int64_t x527 = 0LL;
	static int8_t x528 = -1;
	int32_t t107 = -5347;

    t107 = ((x525&x526)>(x527+x528));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x529 = 2378653U;
	int64_t x530 = INT64_MIN;
	static int32_t x531 = INT32_MAX;
	static int32_t x532 = INT32_MIN;
	volatile int32_t t108 = 15;

    t108 = ((x529&x530)>(x531+x532));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x534 = -1;
	volatile uint16_t x536 = 658U;
	int32_t t109 = 0;

    t109 = ((x533&x534)>(x535+x536));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t t110 = -85432;

    t110 = ((x537&x538)>(x539+x540));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x541 = INT64_MIN;
	int32_t x542 = INT32_MIN;
	static int16_t x543 = INT16_MAX;
	volatile int32_t t111 = 48649;

    t111 = ((x541&x542)>(x543+x544));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x545 = -1;
	uint8_t x546 = UINT8_MAX;
	int16_t x547 = 11;
	int32_t x548 = -1;
	int32_t t112 = 58419557;

    t112 = ((x545&x546)>(x547+x548));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x549 = 6448083LL;
	int32_t x550 = INT32_MIN;
	int8_t x551 = 9;
	volatile int16_t x552 = 2;
	volatile int32_t t113 = 7886948;

    t113 = ((x549&x550)>(x551+x552));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x553 = 6U;
	uint32_t x554 = 646469U;
	int16_t x555 = INT16_MIN;
	int16_t x556 = INT16_MAX;
	volatile int32_t t114 = -7220842;

    t114 = ((x553&x554)>(x555+x556));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x557 = INT16_MIN;
	uint16_t x558 = 1632U;
	uint32_t x559 = UINT32_MAX;
	int64_t x560 = INT64_MIN;
	volatile int32_t t115 = -36;

    t115 = ((x557&x558)>(x559+x560));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x563 = 416176787;
	volatile int32_t t116 = 4540;

    t116 = ((x561&x562)>(x563+x564));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x565 = 1U;
	uint16_t x566 = 4560U;
	int32_t x567 = INT32_MIN;
	volatile int32_t t117 = -2265;

    t117 = ((x565&x566)>(x567+x568));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x577 = UINT32_MAX;
	static int32_t x578 = 7;
	static int16_t x579 = 1961;
	int16_t x580 = INT16_MAX;
	static volatile int32_t t118 = -58883;

    t118 = ((x577&x578)>(x579+x580));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x582 = -1;
	int8_t x583 = -1;
	int64_t x584 = -1LL;
	int32_t t119 = -4393843;

    t119 = ((x581&x582)>(x583+x584));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x589 = -341938;
	int8_t x590 = 1;
	int16_t x591 = INT16_MIN;
	static int16_t x592 = INT16_MIN;
	volatile int32_t t120 = -5;

    t120 = ((x589&x590)>(x591+x592));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x593 = 27921LLU;
	volatile int64_t x594 = 88693LL;
	volatile int16_t x595 = INT16_MAX;
	volatile uint16_t x596 = UINT16_MAX;
	int32_t t121 = 152928523;

    t121 = ((x593&x594)>(x595+x596));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x599 = INT8_MIN;
	uint16_t x600 = UINT16_MAX;
	int32_t t122 = 67193045;

    t122 = ((x597&x598)>(x599+x600));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x601 = INT8_MIN;
	static volatile int8_t x603 = INT8_MIN;

    t123 = ((x601&x602)>(x603+x604));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x605 = 16458050866LL;
	uint64_t x606 = UINT64_MAX;
	uint8_t x607 = 87U;
	uint32_t x608 = UINT32_MAX;
	volatile int32_t t124 = 1064;

    t124 = ((x605&x606)>(x607+x608));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x609 = 12157;
	int32_t x612 = 13166411;
	volatile int32_t t125 = -22109;

    t125 = ((x609&x610)>(x611+x612));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x614 = 1;
	static uint32_t x615 = UINT32_MAX;
	int32_t t126 = 7454;

    t126 = ((x613&x614)>(x615+x616));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x619 = 13U;
	volatile int64_t x620 = -93061249462633LL;
	volatile int32_t t127 = 477;

    t127 = ((x617&x618)>(x619+x620));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x625 = INT64_MIN;
	static volatile int64_t x626 = 54595487104LL;
	static uint16_t x627 = 64U;

    t128 = ((x625&x626)>(x627+x628));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x629 = INT8_MIN;
	volatile int16_t x630 = -11;
	int16_t x631 = 4;
	volatile int16_t x632 = 0;

    t129 = ((x629&x630)>(x631+x632));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint32_t x633 = 745U;
	uint16_t x634 = 6165U;
	int64_t x635 = 14194221LL;
	int64_t x636 = INT64_MIN;

    t130 = ((x633&x634)>(x635+x636));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x637 = 3466163U;
	uint16_t x638 = UINT16_MAX;
	int64_t x640 = INT64_MIN;
	int32_t t131 = -372006578;

    t131 = ((x637&x638)>(x639+x640));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x641 = 36;
	int16_t x643 = INT16_MIN;
	int8_t x644 = INT8_MAX;
	volatile int32_t t132 = -959;

    t132 = ((x641&x642)>(x643+x644));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x645 = -1;
	int16_t x646 = -1;
	int16_t x647 = INT16_MIN;
	int32_t x648 = 25;

    t133 = ((x645&x646)>(x647+x648));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x653 = 8U;
	int8_t x654 = 28;
	volatile int64_t x655 = -1LL;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t134 = -314292481;

    t134 = ((x653&x654)>(x655+x656));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x657 = UINT32_MAX;
	int64_t x658 = INT64_MIN;

    t135 = ((x657&x658)>(x659+x660));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x661 = 7643U;
	int64_t x662 = -1LL;
	int8_t x663 = 5;
	volatile int32_t t136 = -29774143;

    t136 = ((x661&x662)>(x663+x664));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x665 = 1U;
	int64_t x667 = -1LL;
	volatile int32_t x668 = -1339;
	static volatile int32_t t137 = 6738927;

    t137 = ((x665&x666)>(x667+x668));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x669 = 212205LLU;
	int64_t x670 = INT64_MAX;
	int32_t x672 = -5;
	static int32_t t138 = -11;

    t138 = ((x669&x670)>(x671+x672));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x673 = 144805LLU;
	static int64_t x676 = -250089329LL;
	int32_t t139 = 24993;

    t139 = ((x673&x674)>(x675+x676));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x677 = -1;
	static int64_t x678 = INT64_MIN;
	int16_t x680 = -1883;
	int32_t t140 = -469186;

    t140 = ((x677&x678)>(x679+x680));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x682 = 727LL;
	uint32_t x683 = UINT32_MAX;
	int64_t x684 = -2470361248664LL;
	volatile int32_t t141 = 7516799;

    t141 = ((x681&x682)>(x683+x684));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x685 = INT16_MAX;
	int8_t x686 = INT8_MIN;
	uint16_t x688 = 1U;
	volatile int32_t t142 = -72433060;

    t142 = ((x685&x686)>(x687+x688));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x689 = -2308442203495LL;
	static uint64_t x691 = UINT64_MAX;
	static int8_t x692 = INT8_MIN;

    t143 = ((x689&x690)>(x691+x692));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x693 = INT8_MAX;
	int32_t x694 = INT32_MAX;
	uint64_t x695 = 7185111213LLU;
	static int32_t x696 = INT32_MIN;
	static volatile int32_t t144 = -40513063;

    t144 = ((x693&x694)>(x695+x696));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x697 = 485LL;
	int8_t x698 = INT8_MAX;
	volatile int32_t x699 = INT32_MIN;
	static int16_t x700 = INT16_MAX;
	int32_t t145 = -2543;

    t145 = ((x697&x698)>(x699+x700));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x702 = INT64_MAX;
	volatile int32_t x703 = -1;
	static int32_t x704 = INT32_MAX;
	static int32_t t146 = -44759;

    t146 = ((x701&x702)>(x703+x704));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x705 = INT16_MIN;
	int32_t x706 = -1;
	static volatile int16_t x707 = 12834;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t147 = -32489;

    t147 = ((x705&x706)>(x707+x708));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x711 = INT16_MIN;
	volatile int32_t t148 = 88593808;

    t148 = ((x709&x710)>(x711+x712));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x713 = -70813502558579912LL;
	static int32_t x714 = -1;
	static volatile int64_t x716 = INT64_MIN;
	int32_t t149 = 62785017;

    t149 = ((x713&x714)>(x715+x716));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x717 = -21;
	int16_t x718 = -1;
	uint16_t x719 = UINT16_MAX;
	static int32_t x720 = -1;
	static volatile int32_t t150 = 0;

    t150 = ((x717&x718)>(x719+x720));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x721 = UINT8_MAX;
	static int32_t x722 = 11019;
	int16_t x723 = INT16_MIN;
	int16_t x724 = -1;
	static volatile int32_t t151 = 49946832;

    t151 = ((x721&x722)>(x723+x724));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x725 = INT16_MIN;
	volatile int8_t x726 = INT8_MAX;
	volatile int64_t x727 = -1LL;
	static int16_t x728 = -7;
	volatile int32_t t152 = -4187;

    t152 = ((x725&x726)>(x727+x728));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x730 = INT8_MIN;
	uint16_t x731 = 1U;
	volatile int16_t x732 = INT16_MIN;
	int32_t t153 = -10563;

    t153 = ((x729&x730)>(x731+x732));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x733 = 103U;
	int16_t x734 = -1;
	uint64_t x735 = 2352031LLU;
	volatile int64_t x736 = INT64_MIN;
	int32_t t154 = -1;

    t154 = ((x733&x734)>(x735+x736));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x737 = -1;
	uint64_t x738 = UINT64_MAX;
	uint64_t x739 = UINT64_MAX;
	int64_t x740 = -35320868431498495LL;
	volatile int32_t t155 = -15;

    t155 = ((x737&x738)>(x739+x740));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x741 = INT16_MIN;
	int16_t x742 = -1;
	volatile int8_t x743 = INT8_MIN;
	static int8_t x744 = INT8_MAX;
	int32_t t156 = -110;

    t156 = ((x741&x742)>(x743+x744));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x759 = INT8_MIN;
	volatile uint32_t x760 = UINT32_MAX;
	static volatile int32_t t157 = 5494;

    t157 = ((x757&x758)>(x759+x760));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x761 = 16525207249902LL;
	int32_t x762 = -1;
	uint64_t x763 = 1552700283988LLU;
	static volatile int32_t t158 = 6779;

    t158 = ((x761&x762)>(x763+x764));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x765 = 1;
	static uint32_t x766 = 44U;
	uint8_t x767 = 11U;
	uint64_t x768 = 1LLU;

    t159 = ((x765&x766)>(x767+x768));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x769 = INT16_MAX;
	int16_t x771 = -1;
	int16_t x772 = INT16_MIN;
	volatile int32_t t160 = 0;

    t160 = ((x769&x770)>(x771+x772));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x777 = UINT64_MAX;
	uint64_t x778 = 1121697357LLU;
	static int32_t x779 = -1;
	uint32_t x780 = 234U;

    t161 = ((x777&x778)>(x779+x780));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x782 = 1581204529322850382LLU;
	uint16_t x783 = 24369U;
	volatile uint8_t x784 = 10U;
	volatile int32_t t162 = 1667344;

    t162 = ((x781&x782)>(x783+x784));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x785 = INT8_MAX;
	static uint64_t x786 = 20874075694783070LLU;
	int16_t x787 = INT16_MIN;
	static int32_t x788 = -1;
	int32_t t163 = -330759;

    t163 = ((x785&x786)>(x787+x788));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x793 = -1;
	int16_t x794 = -15;
	int8_t x795 = INT8_MIN;
	volatile int8_t x796 = 1;

    t164 = ((x793&x794)>(x795+x796));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x797 = -1LL;
	static int64_t x798 = 259825LL;
	volatile int64_t x800 = -1LL;
	volatile int32_t t165 = 2;

    t165 = ((x797&x798)>(x799+x800));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x801 = INT16_MIN;
	uint16_t x802 = 21931U;
	uint64_t x803 = UINT64_MAX;
	static int16_t x804 = INT16_MIN;
	volatile int32_t t166 = -1;

    t166 = ((x801&x802)>(x803+x804));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x809 = -1;
	static volatile int8_t x810 = INT8_MIN;
	uint8_t x811 = 14U;
	volatile int64_t x812 = INT64_MIN;
	static int32_t t167 = -3785;

    t167 = ((x809&x810)>(x811+x812));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x813 = -2;
	int8_t x814 = -1;
	uint8_t x815 = UINT8_MAX;
	volatile int32_t t168 = 1956160;

    t168 = ((x813&x814)>(x815+x816));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x817 = -1;
	int8_t x818 = 31;
	volatile int64_t x820 = -1LL;
	int32_t t169 = -602;

    t169 = ((x817&x818)>(x819+x820));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x821 = -1LL;
	int8_t x822 = -1;
	int16_t x823 = INT16_MAX;
	int64_t x824 = INT64_MIN;
	static volatile int32_t t170 = 0;

    t170 = ((x821&x822)>(x823+x824));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x825 = 1798277643073330752LLU;
	uint8_t x826 = 16U;
	int32_t t171 = 2254;

    t171 = ((x825&x826)>(x827+x828));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x829 = 3U;
	int32_t x830 = -27;
	volatile uint16_t x831 = UINT16_MAX;
	uint8_t x832 = 15U;

    t172 = ((x829&x830)>(x831+x832));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x834 = INT32_MAX;
	uint8_t x835 = 81U;
	int32_t x836 = -777;
	int32_t t173 = -15648742;

    t173 = ((x833&x834)>(x835+x836));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x837 = UINT16_MAX;
	volatile int64_t x838 = INT64_MIN;
	volatile uint8_t x839 = 0U;
	int16_t x840 = 51;
	volatile int32_t t174 = 819600467;

    t174 = ((x837&x838)>(x839+x840));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x841 = UINT64_MAX;
	uint32_t x842 = 149677416U;
	int16_t x843 = INT16_MIN;

    t175 = ((x841&x842)>(x843+x844));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x845 = -1LL;
	int64_t x847 = -1LL;
	static uint32_t x848 = 8780U;
	int32_t t176 = -24927313;

    t176 = ((x845&x846)>(x847+x848));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x849 = INT32_MIN;
	static int32_t x850 = INT32_MIN;
	uint64_t x851 = 2978LLU;
	static int32_t x852 = -1;
	static int32_t t177 = -972;

    t177 = ((x849&x850)>(x851+x852));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x853 = 103029468U;
	uint64_t x854 = 24752610692255LLU;
	static int16_t x855 = INT16_MAX;
	volatile uint16_t x856 = 125U;
	volatile int32_t t178 = 5443065;

    t178 = ((x853&x854)>(x855+x856));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x857 = 1LL;
	uint16_t x858 = UINT16_MAX;
	uint8_t x859 = UINT8_MAX;
	static uint8_t x860 = UINT8_MAX;
	static int32_t t179 = -11240;

    t179 = ((x857&x858)>(x859+x860));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x861 = 13U;
	int32_t x862 = 80;
	int32_t x863 = INT32_MIN;
	int32_t t180 = -1;

    t180 = ((x861&x862)>(x863+x864));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x870 = INT16_MAX;
	int32_t x871 = -1;
	uint8_t x872 = 1U;
	volatile int32_t t181 = -3398;

    t181 = ((x869&x870)>(x871+x872));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x877 = -46;
	static int32_t x878 = 36285;
	uint64_t x879 = UINT64_MAX;
	int16_t x880 = -1;
	volatile int32_t t182 = -225;

    t182 = ((x877&x878)>(x879+x880));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x881 = 5404LL;
	int8_t x883 = INT8_MAX;
	volatile uint32_t x884 = 0U;
	volatile int32_t t183 = 14007;

    t183 = ((x881&x882)>(x883+x884));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x889 = INT32_MIN;
	int8_t x891 = -1;
	int8_t x892 = INT8_MIN;
	int32_t t184 = 442004;

    t184 = ((x889&x890)>(x891+x892));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x893 = -990;
	uint8_t x894 = 0U;
	int32_t x895 = 416;
	int32_t x896 = 133;
	int32_t t185 = 12134;

    t185 = ((x893&x894)>(x895+x896));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x897 = -3;
	int64_t x898 = 753645LL;
	static int64_t x899 = -12924494126630956LL;
	uint32_t x900 = 4001852U;
	volatile int32_t t186 = -3;

    t186 = ((x897&x898)>(x899+x900));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x902 = 61849929485123LL;
	int64_t x903 = INT64_MAX;
	static volatile int16_t x904 = INT16_MIN;
	static int32_t t187 = 1593;

    t187 = ((x901&x902)>(x903+x904));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x907 = -1LL;
	volatile int32_t t188 = -280;

    t188 = ((x905&x906)>(x907+x908));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x909 = 548648174247LL;
	volatile uint64_t x910 = UINT64_MAX;
	int8_t x911 = -11;
	int8_t x912 = 3;
	volatile int32_t t189 = -10844;

    t189 = ((x909&x910)>(x911+x912));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x918 = 531;
	int32_t x919 = 12234394;
	uint16_t x920 = 7528U;
	int32_t t190 = -755716376;

    t190 = ((x917&x918)>(x919+x920));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x921 = INT8_MIN;
	int32_t x922 = INT32_MAX;
	int32_t x923 = -1;
	volatile int32_t t191 = -931214488;

    t191 = ((x921&x922)>(x923+x924));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x930 = INT16_MIN;
	uint64_t x932 = UINT64_MAX;
	volatile int32_t t192 = 76613;

    t192 = ((x929&x930)>(x931+x932));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x933 = 61327860321LLU;
	static uint32_t x934 = UINT32_MAX;
	int16_t x935 = 1;
	uint16_t x936 = 33U;
	int32_t t193 = 128614783;

    t193 = ((x933&x934)>(x935+x936));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x938 = INT16_MIN;
	int8_t x939 = INT8_MIN;
	int16_t x940 = -1;
	volatile int32_t t194 = 1287578;

    t194 = ((x937&x938)>(x939+x940));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x941 = 234U;
	int32_t x942 = INT32_MAX;
	uint16_t x944 = 2U;

    t195 = ((x941&x942)>(x943+x944));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x945 = UINT8_MAX;
	uint8_t x946 = 24U;
	static uint8_t x947 = 0U;
	volatile int8_t x948 = INT8_MIN;
	int32_t t196 = 837390;

    t196 = ((x945&x946)>(x947+x948));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x953 = INT64_MIN;
	volatile int64_t x956 = 31199441871414333LL;
	static volatile int32_t t197 = 12;

    t197 = ((x953&x954)>(x955+x956));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x957 = -28;
	volatile int32_t x958 = -1;
	int64_t x960 = -1LL;
	volatile int32_t t198 = -1191;

    t198 = ((x957&x958)>(x959+x960));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x961 = INT64_MAX;
	static uint16_t x962 = UINT16_MAX;
	uint16_t x963 = UINT16_MAX;
	int16_t x964 = INT16_MAX;
	volatile int32_t t199 = 0;

    t199 = ((x961&x962)>(x963+x964));

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

