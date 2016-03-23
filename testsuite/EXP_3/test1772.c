
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

static int64_t x1 = -1LL;
int32_t t0 = 10;
uint16_t x6 = 3633U;
int16_t x10 = INT16_MIN;
int32_t x11 = -213;
volatile int32_t t2 = 166351;
int32_t x15 = -1;
int8_t x21 = -9;
int16_t x30 = 1;
static uint16_t x41 = 21830U;
uint8_t x52 = UINT8_MAX;
int16_t x53 = INT16_MIN;
static uint16_t x58 = 3496U;
int8_t x69 = 4;
int32_t x70 = -1;
static uint32_t x74 = 1695557945U;
int32_t t17 = -2926044;
uint16_t x84 = 4269U;
volatile uint32_t x95 = 467890U;
static volatile int32_t t22 = 189847136;
uint64_t x103 = 175LLU;
static int64_t x115 = INT64_MAX;
volatile int32_t t26 = 55382922;
int32_t t27 = -482118;
volatile int32_t t28 = 0;
uint16_t x125 = 46U;
int32_t x128 = INT32_MAX;
volatile int64_t x129 = -108343981977586LL;
volatile int8_t x134 = INT8_MIN;
static int8_t x136 = INT8_MIN;
int8_t x142 = INT8_MIN;
static uint32_t x147 = 11954280U;
volatile int32_t t35 = 48257;
int64_t x167 = 1550171539165447389LL;
volatile int8_t x168 = 30;
uint64_t x170 = 3541359040165881821LLU;
int32_t x173 = INT32_MAX;
int8_t x184 = INT8_MIN;
volatile int32_t t41 = -587;
uint16_t x193 = 4U;
static volatile int32_t x195 = INT32_MAX;
uint64_t x210 = UINT64_MAX;
volatile int32_t t45 = 81;
int64_t x215 = -198LL;
volatile uint16_t x216 = UINT16_MAX;
static uint32_t x218 = UINT32_MAX;
int16_t x220 = 3;
uint32_t x221 = UINT32_MAX;
int32_t t49 = 47;
uint32_t x232 = 3U;
int64_t x234 = INT64_MIN;
volatile int8_t x236 = INT8_MIN;
static volatile int32_t t51 = -909;
uint32_t x240 = 82140U;
int32_t t52 = -60391;
int16_t x243 = INT16_MIN;
volatile int32_t x244 = 148568;
uint8_t x246 = UINT8_MAX;
int64_t x247 = INT64_MIN;
static uint64_t x258 = 4646117LLU;
int8_t x259 = INT8_MAX;
static int32_t x260 = INT32_MAX;
int64_t x261 = 6627297936310001LL;
int8_t x267 = 6;
volatile int32_t t59 = -538243950;
static int16_t x271 = INT16_MIN;
static int32_t x272 = -1;
uint64_t x275 = UINT64_MAX;
static int32_t x276 = -46470638;
static uint32_t x278 = 878141U;
uint32_t x280 = UINT32_MAX;
uint16_t x281 = UINT16_MAX;
int16_t x285 = INT16_MAX;
uint8_t x289 = UINT8_MAX;
int8_t x292 = INT8_MIN;
uint64_t x302 = UINT64_MAX;
int32_t t69 = -56;
int32_t x316 = INT32_MIN;
volatile int32_t t70 = 836264;
int32_t t71 = -2589426;
int16_t x327 = INT16_MAX;
uint8_t x341 = 1U;
int16_t x345 = -1;
int64_t x347 = 18399823LL;
int16_t x363 = -1;
int16_t x365 = 473;
uint64_t x368 = UINT64_MAX;
static int8_t x369 = -1;
volatile uint16_t x370 = 14U;
static uint8_t x374 = 74U;
int64_t x375 = INT64_MIN;
static volatile int32_t x378 = -1;
volatile uint8_t x397 = UINT8_MAX;
volatile int32_t x400 = INT32_MIN;
int64_t x403 = 23086LL;
static volatile int64_t x405 = -901472887430LL;
volatile int32_t t88 = -7029;
static volatile uint16_t x417 = UINT16_MAX;
int8_t x421 = INT8_MAX;
int32_t x431 = -1;
volatile uint32_t x432 = 593003640U;
int32_t t96 = -429331879;
uint16_t x441 = UINT16_MAX;
uint8_t x442 = 6U;
static int32_t t97 = 1574;
static uint8_t x448 = UINT8_MAX;
int8_t x457 = -5;
uint64_t x462 = UINT64_MAX;
static int16_t x465 = -1;
int32_t t102 = 47166853;
volatile int32_t t104 = -4;
uint16_t x477 = 13037U;
uint32_t x491 = 844550054U;
int16_t x496 = INT16_MIN;
volatile int32_t t109 = 56727987;
uint64_t x502 = 197LLU;
int8_t x508 = INT8_MIN;
int32_t x511 = INT32_MAX;
int8_t x519 = 21;
uint8_t x520 = 10U;
static uint16_t x529 = 54U;
int8_t x534 = INT8_MAX;
uint32_t x538 = 106936259U;
static int8_t x540 = -1;
int64_t x556 = 1LL;
uint8_t x566 = 9U;
static int32_t x567 = INT32_MAX;
uint64_t x572 = 220968617917528LLU;
volatile int64_t x573 = INT64_MAX;
int16_t x577 = -1;
static uint64_t x579 = 598930630LLU;
static uint16_t x590 = UINT16_MAX;
uint64_t x605 = UINT64_MAX;
uint16_t x615 = UINT16_MAX;
int64_t x618 = 0LL;
int16_t x621 = -1;
volatile int32_t t137 = -581568;
static uint32_t x631 = UINT32_MAX;
static int32_t t140 = 1;
int16_t x647 = INT16_MIN;
int16_t x649 = 1;
static int8_t x652 = INT8_MIN;
int32_t x672 = INT32_MIN;
uint64_t x674 = 41623099873660070LLU;
uint16_t x678 = 886U;
int64_t x679 = 221283294188988LL;
volatile int32_t t150 = -64339298;
static uint8_t x687 = 2U;
int8_t x690 = -2;
int16_t x692 = INT16_MIN;
int32_t x699 = -1111;
uint16_t x703 = UINT16_MAX;
int32_t x708 = INT32_MIN;
volatile int32_t t157 = 599384;
uint32_t x713 = 17465619U;
volatile int16_t x721 = 0;
volatile int32_t x722 = -1;
int32_t t159 = -824;
static int16_t x736 = -1;
uint8_t x756 = UINT8_MAX;
volatile int32_t x762 = INT32_MIN;
int64_t x763 = -1LL;
int64_t x771 = -1LL;
static int32_t x772 = -1;
uint64_t x774 = 450969465540101742LLU;
uint8_t x775 = UINT8_MAX;
uint32_t x777 = 59643U;
volatile int32_t t168 = 1;
int32_t x787 = -1816611;
int8_t x799 = INT8_MIN;
int16_t x806 = 1;
uint64_t x808 = 624179LLU;
volatile uint16_t x810 = 238U;
uint16_t x811 = UINT16_MAX;
static uint32_t x814 = 19658788U;
int32_t x830 = INT32_MIN;
int8_t x834 = INT8_MIN;
volatile int16_t x839 = -1;
int64_t x842 = -620617580232LL;
uint16_t x853 = 16081U;
volatile int64_t x858 = -1LL;
int16_t x859 = INT16_MIN;
volatile int16_t x860 = INT16_MAX;
int8_t x862 = INT8_MIN;
int16_t x875 = INT16_MAX;
int8_t x877 = INT8_MIN;
int8_t x882 = INT8_MIN;
uint8_t x885 = 3U;
static volatile int32_t t190 = 6;
uint16_t x889 = UINT16_MAX;
int8_t x890 = INT8_MIN;
int64_t x898 = -1LL;
uint8_t x904 = 1U;
volatile int16_t x905 = INT16_MIN;
int8_t x915 = 46;
int16_t x916 = INT16_MIN;


void f0(void) {
    	int32_t x2 = -1;
	uint32_t x3 = 1184683U;
	uint16_t x4 = 496U;

    t0 = ((x1+x2)==(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 368U;
	int8_t x7 = -49;
	int8_t x8 = 0;
	volatile int32_t t1 = 0;

    t1 = ((x5+x6)==(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 4974LLU;
	uint8_t x12 = 58U;

    t2 = ((x9+x10)==(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int8_t x14 = 0;
	static uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -8107;

    t3 = ((x13+x14)==(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	static int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	uint64_t x20 = 67930399344714801LLU;
	static int32_t t4 = -735;

    t4 = ((x17+x18)==(x19<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 11U;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = 4935;

    t5 = ((x21+x22)==(x23<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MAX;
	int8_t x27 = 1;
	uint8_t x28 = 15U;
	volatile int32_t t6 = 3670;

    t6 = ((x25+x26)==(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 17872U;
	uint8_t x31 = UINT8_MAX;
	uint8_t x32 = 26U;
	int32_t t7 = 2981615;

    t7 = ((x29+x30)==(x31<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -123492LL;
	int64_t x34 = 144LL;
	int16_t x35 = INT16_MAX;
	static volatile int64_t x36 = -7921LL;
	int32_t t8 = -2;

    t8 = ((x33+x34)==(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x37 = 1U;
	uint32_t x38 = 206759U;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -2;
	volatile int32_t t9 = -8;

    t9 = ((x37+x38)==(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = 2753;
	int16_t x43 = 21;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -8334;

    t10 = ((x41+x42)==(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	uint16_t x50 = 296U;
	uint8_t x51 = 3U;
	int32_t t11 = 761358;

    t11 = ((x49+x50)==(x51<=x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x54 = 422893348;
	uint32_t x55 = 221703862U;
	volatile int32_t x56 = INT32_MIN;
	int32_t t12 = -709681907;

    t12 = ((x53+x54)==(x55<=x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = INT16_MIN;
	volatile uint16_t x59 = 74U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t13 = 5581506;

    t13 = ((x57+x58)==(x59<=x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MAX;
	int32_t x62 = -615;
	int64_t x63 = INT64_MAX;
	volatile uint32_t x64 = 38U;
	int32_t t14 = 46753697;

    t14 = ((x61+x62)==(x63<=x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x71 = INT8_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t15 = 1;

    t15 = ((x69+x70)==(x71<=x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = 227U;
	int32_t x75 = INT32_MAX;
	volatile uint16_t x76 = 0U;
	int32_t t16 = 985670;

    t16 = ((x73+x74)==(x75<=x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x77 = 2111176275471LL;
	int8_t x78 = INT8_MIN;
	static uint32_t x79 = 21486U;
	uint16_t x80 = UINT16_MAX;

    t17 = ((x77+x78)==(x79<=x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = 41033U;
	volatile int8_t x82 = 12;
	uint32_t x83 = 7599U;
	volatile int32_t t18 = -4858782;

    t18 = ((x81+x82)==(x83<=x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 17U;
	int16_t x86 = -1;
	int8_t x87 = INT8_MAX;
	uint8_t x88 = 0U;
	int32_t t19 = -13;

    t19 = ((x85+x86)==(x87<=x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	static int8_t x90 = INT8_MIN;
	volatile int8_t x91 = INT8_MIN;
	volatile int8_t x92 = INT8_MAX;
	static int32_t t20 = 200359;

    t20 = ((x89+x90)==(x91<=x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = INT8_MAX;
	static volatile uint16_t x94 = UINT16_MAX;
	int16_t x96 = -1310;
	int32_t t21 = 336525325;

    t21 = ((x93+x94)==(x95<=x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MAX;
	uint16_t x98 = 232U;
	int32_t x99 = INT32_MIN;
	uint16_t x100 = UINT16_MAX;

    t22 = ((x97+x98)==(x99<=x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	int16_t x104 = -1;
	int32_t t23 = 0;

    t23 = ((x101+x102)==(x103<=x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x105 = 8U;
	int16_t x106 = INT16_MIN;
	static int32_t x107 = -1;
	static int64_t x108 = INT64_MIN;
	static volatile int32_t t24 = 42046347;

    t24 = ((x105+x106)==(x107<=x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x109 = 3U;
	static uint32_t x110 = 216413870U;
	uint32_t x111 = 800333U;
	int8_t x112 = INT8_MIN;
	int32_t t25 = 31962;

    t25 = ((x109+x110)==(x111<=x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x113 = 2049880680U;
	volatile uint16_t x114 = 7219U;
	static volatile int64_t x116 = 4LL;

    t26 = ((x113+x114)==(x115<=x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = 71729383650573851LL;
	uint16_t x118 = 1U;
	uint8_t x119 = UINT8_MAX;
	int8_t x120 = INT8_MIN;

    t27 = ((x117+x118)==(x119<=x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x121 = -1;
	int16_t x122 = -1;
	int32_t x123 = -54;
	int64_t x124 = INT64_MAX;

    t28 = ((x121+x122)==(x123<=x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x126 = INT64_MIN;
	int64_t x127 = -56921597LL;
	volatile int32_t t29 = 13963;

    t29 = ((x125+x126)==(x127<=x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x130 = INT32_MAX;
	volatile int32_t x131 = 1992;
	static uint64_t x132 = UINT64_MAX;
	int32_t t30 = 6431538;

    t30 = ((x129+x130)==(x131<=x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x133 = -1LL;
	int64_t x135 = INT64_MIN;
	int32_t t31 = 1673619;

    t31 = ((x133+x134)==(x135<=x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x137 = 23635466917052LL;
	uint64_t x138 = UINT64_MAX;
	static uint16_t x139 = 48U;
	int64_t x140 = -13718637LL;
	int32_t t32 = 1354807;

    t32 = ((x137+x138)==(x139<=x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x141 = INT64_MAX;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t33 = 376;

    t33 = ((x141+x142)==(x143<=x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = 124781101U;
	int8_t x146 = INT8_MAX;
	uint32_t x148 = 15547158U;
	static volatile int32_t t34 = 3;

    t34 = ((x145+x146)==(x147<=x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x153 = UINT32_MAX;
	int16_t x154 = 3;
	int32_t x155 = 0;
	uint32_t x156 = 120U;

    t35 = ((x153+x154)==(x155<=x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = -1;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 175U;
	uint64_t x160 = UINT64_MAX;
	int32_t t36 = -9959929;

    t36 = ((x157+x158)==(x159<=x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MAX;
	int32_t t37 = 15;

    t37 = ((x165+x166)==(x167<=x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x169 = 233018;
	static int8_t x171 = 61;
	int64_t x172 = INT64_MIN;
	int32_t t38 = 1199326;

    t38 = ((x169+x170)==(x171<=x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x174 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;
	static uint16_t x176 = 620U;
	volatile int32_t t39 = -142;

    t39 = ((x173+x174)==(x175<=x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x177 = UINT16_MAX;
	volatile uint64_t x178 = UINT64_MAX;
	int64_t x179 = -550497309300148096LL;
	static volatile int8_t x180 = INT8_MIN;
	int32_t t40 = -603;

    t40 = ((x177+x178)==(x179<=x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x181 = 1;
	volatile uint32_t x182 = UINT32_MAX;
	int8_t x183 = -1;

    t41 = ((x181+x182)==(x183<=x184));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x189 = 1639;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = -166101041;
	int8_t x192 = INT8_MIN;
	volatile int32_t t42 = 2;

    t42 = ((x189+x190)==(x191<=x192));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x194 = 1U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t43 = 108312;

    t43 = ((x193+x194)==(x195<=x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x197 = -28;
	int16_t x198 = INT16_MAX;
	uint16_t x199 = 48U;
	int8_t x200 = INT8_MAX;
	int32_t t44 = -83;

    t44 = ((x197+x198)==(x199<=x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x209 = 7297;
	int32_t x211 = -1;
	uint16_t x212 = 130U;

    t45 = ((x209+x210)==(x211<=x212));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = -3187;
	int8_t x214 = INT8_MAX;
	int32_t t46 = 1;

    t46 = ((x213+x214)==(x215<=x216));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x217 = 520062906443244580LLU;
	int16_t x219 = 0;
	static int32_t t47 = 211183;

    t47 = ((x217+x218)==(x219<=x220));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x222 = INT16_MAX;
	int32_t x223 = INT32_MAX;
	int64_t x224 = -1LL;
	static int32_t t48 = 114771797;

    t48 = ((x221+x222)==(x223<=x224));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x225 = 5U;
	int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	volatile int64_t x228 = INT64_MIN;

    t49 = ((x225+x226)==(x227<=x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x229 = UINT16_MAX;
	int8_t x230 = -1;
	uint8_t x231 = 96U;
	volatile int32_t t50 = -2148223;

    t50 = ((x229+x230)==(x231<=x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x233 = 82824660245LL;
	int16_t x235 = INT16_MIN;

    t51 = ((x233+x234)==(x235<=x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x237 = 188413889058355066LL;
	volatile int8_t x238 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;

    t52 = ((x237+x238)==(x239<=x240));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = INT32_MAX;
	uint64_t x242 = 3745443550LLU;
	int32_t t53 = -8650;

    t53 = ((x241+x242)==(x243<=x244));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x245 = INT16_MIN;
	volatile int64_t x248 = INT64_MIN;
	volatile int32_t t54 = -309831959;

    t54 = ((x245+x246)==(x247<=x248));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x249 = 0;
	static int64_t x250 = -1LL;
	uint64_t x251 = 1261758352081378LLU;
	static int16_t x252 = 3;
	int32_t t55 = -50;

    t55 = ((x249+x250)==(x251<=x252));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x253 = -27;
	int16_t x254 = -1;
	volatile uint32_t x255 = 1402562U;
	int32_t x256 = 0;
	volatile int32_t t56 = -5;

    t56 = ((x253+x254)==(x255<=x256));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = INT16_MAX;
	int32_t t57 = 11627807;

    t57 = ((x257+x258)==(x259<=x260));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x262 = -1046811295886LL;
	int8_t x263 = INT8_MAX;
	uint32_t x264 = 7796U;
	volatile int32_t t58 = -6;

    t58 = ((x261+x262)==(x263<=x264));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = INT16_MIN;
	uint16_t x266 = UINT16_MAX;
	uint8_t x268 = 27U;

    t59 = ((x265+x266)==(x267<=x268));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x269 = 20;
	int8_t x270 = INT8_MAX;
	int32_t t60 = 225764957;

    t60 = ((x269+x270)==(x271<=x272));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x273 = -30248160362871240LL;
	int32_t x274 = INT32_MAX;
	int32_t t61 = -413711964;

    t61 = ((x273+x274)==(x275<=x276));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x277 = -1LL;
	volatile int64_t x279 = -1LL;
	int32_t t62 = -46059761;

    t62 = ((x277+x278)==(x279<=x280));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x282 = UINT16_MAX;
	uint64_t x283 = 3164449729712LLU;
	static volatile uint16_t x284 = 3021U;
	volatile int32_t t63 = 236;

    t63 = ((x281+x282)==(x283<=x284));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x286 = 98U;
	volatile int32_t x287 = INT32_MAX;
	int16_t x288 = INT16_MAX;
	int32_t t64 = 1742;

    t64 = ((x285+x286)==(x287<=x288));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x290 = 740282958779LLU;
	int16_t x291 = -15;
	int32_t t65 = 12;

    t65 = ((x289+x290)==(x291<=x292));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x293 = UINT8_MAX;
	int64_t x294 = -1LL;
	int32_t x295 = -1;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t66 = 711;

    t66 = ((x293+x294)==(x295<=x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = -12;
	static uint32_t x298 = 16U;
	int16_t x299 = INT16_MAX;
	int32_t x300 = 433404;
	int32_t t67 = 638107863;

    t67 = ((x297+x298)==(x299<=x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x301 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	static uint64_t x304 = 1532602985LLU;
	static int32_t t68 = 215604;

    t68 = ((x301+x302)==(x303<=x304));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x305 = UINT64_MAX;
	uint32_t x306 = 105U;
	static int16_t x307 = -1;
	volatile int64_t x308 = INT64_MIN;

    t69 = ((x305+x306)==(x307<=x308));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x313 = 15046LLU;
	int64_t x314 = INT64_MIN;
	uint32_t x315 = UINT32_MAX;

    t70 = ((x313+x314)==(x315<=x316));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = INT16_MIN;
	int32_t x318 = 1;
	int8_t x319 = 1;
	uint16_t x320 = 112U;

    t71 = ((x317+x318)==(x319<=x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x325 = INT16_MAX;
	volatile uint32_t x326 = 2U;
	static uint64_t x328 = 397344087033062369LLU;
	volatile int32_t t72 = -5314645;

    t72 = ((x325+x326)==(x327<=x328));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x342 = 1164207;
	uint32_t x343 = UINT32_MAX;
	static int8_t x344 = INT8_MIN;
	static volatile int32_t t73 = -11352990;

    t73 = ((x341+x342)==(x343<=x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x346 = 13566LL;
	volatile int16_t x348 = INT16_MAX;
	static volatile int32_t t74 = 1366957;

    t74 = ((x345+x346)==(x347<=x348));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x349 = INT64_MIN;
	volatile uint8_t x350 = 6U;
	int16_t x351 = 1040;
	volatile uint16_t x352 = UINT16_MAX;
	static int32_t t75 = 0;

    t75 = ((x349+x350)==(x351<=x352));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x353 = 148;
	int16_t x354 = -81;
	uint16_t x355 = UINT16_MAX;
	static volatile int8_t x356 = -1;
	int32_t t76 = 510541657;

    t76 = ((x353+x354)==(x355<=x356));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = UINT32_MAX;
	static int8_t x360 = INT8_MAX;
	int32_t t77 = 67584;

    t77 = ((x357+x358)==(x359<=x360));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x361 = INT8_MIN;
	volatile uint8_t x362 = 53U;
	volatile uint16_t x364 = UINT16_MAX;
	static volatile int32_t t78 = -12;

    t78 = ((x361+x362)==(x363<=x364));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x366 = INT8_MAX;
	int32_t x367 = -1;
	int32_t t79 = 0;

    t79 = ((x365+x366)==(x367<=x368));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x371 = 33;
	static volatile int64_t x372 = -25401922428LL;
	int32_t t80 = -135;

    t80 = ((x369+x370)==(x371<=x372));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x373 = 8396U;
	static volatile uint16_t x376 = 5U;
	static volatile int32_t t81 = 244075332;

    t81 = ((x373+x374)==(x375<=x376));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x377 = -1;
	int16_t x379 = INT16_MIN;
	int8_t x380 = 0;
	volatile int32_t t82 = -2582838;

    t82 = ((x377+x378)==(x379<=x380));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x385 = INT64_MIN;
	uint64_t x386 = 672635311LLU;
	volatile uint16_t x387 = 29300U;
	int16_t x388 = INT16_MIN;
	int32_t t83 = 2;

    t83 = ((x385+x386)==(x387<=x388));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x389 = -8540621488LL;
	static int32_t x390 = INT32_MAX;
	uint8_t x391 = 0U;
	int32_t x392 = -7340;
	static volatile int32_t t84 = 0;

    t84 = ((x389+x390)==(x391<=x392));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x393 = UINT64_MAX;
	volatile int64_t x394 = INT64_MAX;
	int16_t x395 = 13;
	int32_t x396 = -1;
	volatile int32_t t85 = -431;

    t85 = ((x393+x394)==(x395<=x396));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x398 = -447LL;
	uint32_t x399 = UINT32_MAX;
	static volatile int32_t t86 = -1;

    t86 = ((x397+x398)==(x399<=x400));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x401 = UINT8_MAX;
	int64_t x402 = 17158185778730LL;
	static int32_t x404 = INT32_MAX;
	int32_t t87 = 1;

    t87 = ((x401+x402)==(x403<=x404));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x406 = UINT16_MAX;
	uint16_t x407 = 20U;
	volatile int32_t x408 = -756317;

    t88 = ((x405+x406)==(x407<=x408));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x409 = UINT64_MAX;
	volatile int16_t x410 = INT16_MAX;
	int8_t x411 = INT8_MAX;
	int16_t x412 = -1;
	volatile int32_t t89 = -819947614;

    t89 = ((x409+x410)==(x411<=x412));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x413 = INT8_MAX;
	int8_t x414 = INT8_MAX;
	static int64_t x415 = -1LL;
	int64_t x416 = INT64_MIN;
	int32_t t90 = -12;

    t90 = ((x413+x414)==(x415<=x416));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x418 = -1LL;
	uint64_t x419 = UINT64_MAX;
	uint32_t x420 = 1U;
	volatile int32_t t91 = -670842813;

    t91 = ((x417+x418)==(x419<=x420));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x422 = INT16_MAX;
	int16_t x423 = 94;
	int64_t x424 = -1LL;
	volatile int32_t t92 = -9;

    t92 = ((x421+x422)==(x423<=x424));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = 192;
	int8_t x426 = INT8_MIN;
	uint16_t x427 = 10509U;
	uint8_t x428 = UINT8_MAX;
	int32_t t93 = -14976404;

    t93 = ((x425+x426)==(x427<=x428));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x429 = 7;
	int32_t x430 = INT32_MIN;
	volatile int32_t t94 = -14117877;

    t94 = ((x429+x430)==(x431<=x432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x433 = INT32_MAX;
	volatile int64_t x434 = -1LL;
	uint32_t x435 = UINT32_MAX;
	uint32_t x436 = 25569008U;
	int32_t t95 = -80;

    t95 = ((x433+x434)==(x435<=x436));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x437 = -54;
	int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MIN;
	int8_t x440 = 22;

    t96 = ((x437+x438)==(x439<=x440));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x443 = INT32_MIN;
	volatile int16_t x444 = 140;

    t97 = ((x441+x442)==(x443<=x444));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x445 = INT32_MIN;
	uint8_t x446 = 91U;
	static int64_t x447 = 596LL;
	int32_t t98 = 435556;

    t98 = ((x445+x446)==(x447<=x448));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	uint16_t x450 = 9U;
	static int64_t x451 = 66625483474596652LL;
	int64_t x452 = INT64_MAX;
	static volatile int32_t t99 = 1;

    t99 = ((x449+x450)==(x451<=x452));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x458 = UINT32_MAX;
	uint64_t x459 = UINT64_MAX;
	int8_t x460 = 7;
	volatile int32_t t100 = 45679097;

    t100 = ((x457+x458)==(x459<=x460));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x461 = 464502762416751LL;
	int64_t x463 = -1LL;
	static volatile int32_t x464 = INT32_MIN;
	int32_t t101 = 0;

    t101 = ((x461+x462)==(x463<=x464));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x466 = 591067393;
	volatile uint64_t x467 = UINT64_MAX;
	int16_t x468 = -560;

    t102 = ((x465+x466)==(x467<=x468));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x469 = 440396LLU;
	volatile uint8_t x470 = 7U;
	int64_t x471 = -21951091LL;
	int8_t x472 = 2;
	volatile int32_t t103 = -233591;

    t103 = ((x469+x470)==(x471<=x472));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x473 = 4930160326198664880LLU;
	int16_t x474 = INT16_MAX;
	uint8_t x475 = 38U;
	static uint64_t x476 = 1265202LLU;

    t104 = ((x473+x474)==(x475<=x476));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x478 = INT8_MIN;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = INT64_MIN;
	int32_t t105 = 115006537;

    t105 = ((x477+x478)==(x479<=x480));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x481 = 230U;
	int16_t x482 = INT16_MIN;
	uint8_t x483 = 5U;
	uint32_t x484 = UINT32_MAX;
	static volatile int32_t t106 = -276;

    t106 = ((x481+x482)==(x483<=x484));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x485 = 3739U;
	int32_t x486 = -1;
	uint16_t x487 = 5U;
	int32_t x488 = -1;
	int32_t t107 = -928;

    t107 = ((x485+x486)==(x487<=x488));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x489 = 2204LLU;
	int8_t x490 = INT8_MAX;
	int8_t x492 = -1;
	int32_t t108 = 81699362;

    t108 = ((x489+x490)==(x491<=x492));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x493 = INT8_MIN;
	static int16_t x494 = INT16_MIN;
	static int16_t x495 = 7824;

    t109 = ((x493+x494)==(x495<=x496));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x501 = 56511U;
	volatile int64_t x503 = 118806LL;
	volatile int64_t x504 = -24412LL;
	static volatile int32_t t110 = 0;

    t110 = ((x501+x502)==(x503<=x504));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = INT8_MIN;
	static int16_t x506 = INT16_MIN;
	int64_t x507 = INT64_MIN;
	volatile int32_t t111 = -2021;

    t111 = ((x505+x506)==(x507<=x508));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x509 = 0;
	int32_t x510 = 32;
	volatile int32_t x512 = INT32_MIN;
	static int32_t t112 = -116;

    t112 = ((x509+x510)==(x511<=x512));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x517 = 49397327;
	uint8_t x518 = 5U;
	int32_t t113 = -75487182;

    t113 = ((x517+x518)==(x519<=x520));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = -1;
	int16_t x522 = -1;
	volatile int32_t x523 = -1;
	static uint64_t x524 = 1752LLU;
	volatile int32_t t114 = 15991644;

    t114 = ((x521+x522)==(x523<=x524));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x525 = -1;
	volatile int8_t x526 = -1;
	static int8_t x527 = 1;
	int8_t x528 = INT8_MAX;
	volatile int32_t t115 = 55;

    t115 = ((x525+x526)==(x527<=x528));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x530 = INT8_MAX;
	uint64_t x531 = 15LLU;
	static int64_t x532 = -1LL;
	int32_t t116 = 1569065;

    t116 = ((x529+x530)==(x531<=x532));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x533 = 52298909U;
	static uint8_t x535 = 119U;
	int64_t x536 = -1LL;
	volatile int32_t t117 = 2827635;

    t117 = ((x533+x534)==(x535<=x536));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x537 = -1;
	static uint64_t x539 = UINT64_MAX;
	volatile int32_t t118 = 0;

    t118 = ((x537+x538)==(x539<=x540));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x549 = -1LL;
	int64_t x550 = -7LL;
	volatile uint64_t x551 = 11550470858845LLU;
	static int8_t x552 = INT8_MIN;
	volatile int32_t t119 = -6085691;

    t119 = ((x549+x550)==(x551<=x552));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x553 = -1;
	static uint8_t x554 = UINT8_MAX;
	int64_t x555 = INT64_MIN;
	volatile int32_t t120 = -110874;

    t120 = ((x553+x554)==(x555<=x556));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x561 = 184456358058100946LL;
	uint64_t x562 = 198LLU;
	int16_t x563 = INT16_MIN;
	int8_t x564 = 1;
	volatile int32_t t121 = 7774;

    t121 = ((x561+x562)==(x563<=x564));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x565 = 89U;
	uint16_t x568 = 3U;
	volatile int32_t t122 = 85730694;

    t122 = ((x565+x566)==(x567<=x568));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x569 = UINT64_MAX;
	uint16_t x570 = 6849U;
	uint16_t x571 = UINT16_MAX;
	int32_t t123 = 1483853;

    t123 = ((x569+x570)==(x571<=x572));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x574 = -1;
	int64_t x575 = INT64_MAX;
	uint64_t x576 = 19977754162691LLU;
	int32_t t124 = -487;

    t124 = ((x573+x574)==(x575<=x576));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x578 = INT8_MIN;
	volatile uint32_t x580 = 2147U;
	volatile int32_t t125 = -106907295;

    t125 = ((x577+x578)==(x579<=x580));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x581 = -1;
	static int16_t x582 = -1;
	uint8_t x583 = 8U;
	int8_t x584 = INT8_MIN;
	int32_t t126 = 63;

    t126 = ((x581+x582)==(x583<=x584));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x585 = -1;
	int64_t x586 = -582716LL;
	static int64_t x587 = INT64_MAX;
	int32_t x588 = -55218;
	static volatile int32_t t127 = 26;

    t127 = ((x585+x586)==(x587<=x588));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x589 = -1;
	uint16_t x591 = 3U;
	int64_t x592 = INT64_MIN;
	int32_t t128 = -113;

    t128 = ((x589+x590)==(x591<=x592));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x593 = UINT32_MAX;
	int32_t x594 = -1;
	volatile int16_t x595 = INT16_MAX;
	static volatile int16_t x596 = -7;
	volatile int32_t t129 = -1;

    t129 = ((x593+x594)==(x595<=x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x597 = -1;
	int32_t x598 = -9;
	int32_t x599 = 12129810;
	volatile uint32_t x600 = UINT32_MAX;
	volatile int32_t t130 = -1;

    t130 = ((x597+x598)==(x599<=x600));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x601 = 18236LLU;
	int16_t x602 = INT16_MIN;
	int32_t x603 = -230;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t131 = -3366140;

    t131 = ((x601+x602)==(x603<=x604));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x606 = 223229;
	static int16_t x607 = INT16_MIN;
	volatile int64_t x608 = 559013318116700731LL;
	volatile int32_t t132 = -150090305;

    t132 = ((x605+x606)==(x607<=x608));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x609 = UINT64_MAX;
	static int64_t x610 = INT64_MAX;
	static int8_t x611 = -1;
	volatile int8_t x612 = INT8_MIN;
	int32_t t133 = -54457;

    t133 = ((x609+x610)==(x611<=x612));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x613 = 48LLU;
	volatile int8_t x614 = INT8_MAX;
	int32_t x616 = 22766;
	static int32_t t134 = 2742;

    t134 = ((x613+x614)==(x615<=x616));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x617 = UINT8_MAX;
	static int16_t x619 = 0;
	volatile int32_t x620 = -3473308;
	static volatile int32_t t135 = -7576;

    t135 = ((x617+x618)==(x619<=x620));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x622 = INT8_MIN;
	static int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MIN;
	static int32_t t136 = -896;

    t136 = ((x621+x622)==(x623<=x624));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x625 = 28U;
	int8_t x626 = 10;
	static uint64_t x627 = 530079292877LLU;
	static uint64_t x628 = 121712184101218LLU;

    t137 = ((x625+x626)==(x627<=x628));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x629 = INT16_MIN;
	uint16_t x630 = 1U;
	int8_t x632 = INT8_MIN;
	volatile int32_t t138 = 738;

    t138 = ((x629+x630)==(x631<=x632));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x633 = UINT64_MAX;
	int8_t x634 = -3;
	uint8_t x635 = 13U;
	int32_t x636 = INT32_MIN;
	volatile int32_t t139 = 0;

    t139 = ((x633+x634)==(x635<=x636));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x637 = UINT8_MAX;
	static int32_t x638 = -1;
	static int16_t x639 = INT16_MIN;
	static volatile int32_t x640 = INT32_MIN;

    t140 = ((x637+x638)==(x639<=x640));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x641 = INT16_MIN;
	int8_t x642 = -1;
	volatile uint16_t x643 = UINT16_MAX;
	volatile uint16_t x644 = 4U;
	static volatile int32_t t141 = 96747;

    t141 = ((x641+x642)==(x643<=x644));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x645 = 1762583577LL;
	static int16_t x646 = INT16_MAX;
	static int16_t x648 = -1;
	volatile int32_t t142 = -5356;

    t142 = ((x645+x646)==(x647<=x648));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x650 = INT16_MIN;
	uint8_t x651 = 2U;
	volatile int32_t t143 = 5821874;

    t143 = ((x649+x650)==(x651<=x652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x657 = INT64_MAX;
	static int16_t x658 = -1782;
	int64_t x659 = 16085LL;
	int16_t x660 = -5487;
	int32_t t144 = 30309316;

    t144 = ((x657+x658)==(x659<=x660));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x661 = UINT32_MAX;
	int64_t x662 = -13345751873050LL;
	static int8_t x663 = INT8_MIN;
	int64_t x664 = -1LL;
	int32_t t145 = -234114;

    t145 = ((x661+x662)==(x663<=x664));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x665 = 4U;
	int8_t x666 = 3;
	int64_t x667 = -1LL;
	int64_t x668 = INT64_MIN;
	volatile int32_t t146 = 44830609;

    t146 = ((x665+x666)==(x667<=x668));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x669 = INT32_MAX;
	static volatile int8_t x670 = -11;
	uint16_t x671 = 28U;
	static int32_t t147 = -9029;

    t147 = ((x669+x670)==(x671<=x672));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x673 = UINT32_MAX;
	static uint32_t x675 = 423U;
	int16_t x676 = -1;
	int32_t t148 = 1;

    t148 = ((x673+x674)==(x675<=x676));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x677 = 10123677573927LL;
	int32_t x680 = INT32_MIN;
	int32_t t149 = 108543;

    t149 = ((x677+x678)==(x679<=x680));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = INT32_MAX;
	static volatile uint32_t x683 = 44436352U;
	static volatile uint64_t x684 = 21413882740LLU;

    t150 = ((x681+x682)==(x683<=x684));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x685 = 1558;
	int16_t x686 = INT16_MIN;
	uint8_t x688 = 63U;
	volatile int32_t t151 = 940;

    t151 = ((x685+x686)==(x687<=x688));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x689 = INT8_MAX;
	int16_t x691 = -1;
	static volatile int32_t t152 = 100;

    t152 = ((x689+x690)==(x691<=x692));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x693 = -1;
	int64_t x694 = -27LL;
	int32_t x695 = INT32_MIN;
	int16_t x696 = -1;
	volatile int32_t t153 = 517505;

    t153 = ((x693+x694)==(x695<=x696));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x697 = INT16_MIN;
	int8_t x698 = -1;
	static uint32_t x700 = 2016812U;
	volatile int32_t t154 = -8518583;

    t154 = ((x697+x698)==(x699<=x700));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x701 = -1;
	uint64_t x702 = 2739559LLU;
	static int16_t x704 = -1;
	int32_t t155 = 1039719;

    t155 = ((x701+x702)==(x703<=x704));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x705 = INT32_MAX;
	volatile int64_t x706 = INT64_MIN;
	static int32_t x707 = -1;
	int32_t t156 = 230263;

    t156 = ((x705+x706)==(x707<=x708));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x709 = 6579598;
	int32_t x710 = INT32_MIN;
	static int8_t x711 = INT8_MIN;
	int8_t x712 = 1;

    t157 = ((x709+x710)==(x711<=x712));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x714 = INT16_MAX;
	static int32_t x715 = 3916905;
	static volatile uint32_t x716 = UINT32_MAX;
	volatile int32_t t158 = 298663492;

    t158 = ((x713+x714)==(x715<=x716));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x723 = -2586;
	int16_t x724 = 1;

    t159 = ((x721+x722)==(x723<=x724));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x729 = 1914630LL;
	int8_t x730 = -2;
	uint64_t x731 = 58672074674215LLU;
	static volatile int64_t x732 = -1421LL;
	int32_t t160 = 1157238;

    t160 = ((x729+x730)==(x731<=x732));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x733 = INT32_MAX;
	int64_t x734 = -1LL;
	static int16_t x735 = 617;
	volatile int32_t t161 = 132858985;

    t161 = ((x733+x734)==(x735<=x736));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x745 = 0U;
	int16_t x746 = INT16_MIN;
	static int16_t x747 = -13378;
	static volatile int16_t x748 = INT16_MIN;
	static volatile int32_t t162 = 160;

    t162 = ((x745+x746)==(x747<=x748));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x749 = 161981707U;
	int32_t x750 = -1;
	int8_t x751 = 12;
	int8_t x752 = INT8_MIN;
	int32_t t163 = -202;

    t163 = ((x749+x750)==(x751<=x752));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x753 = 7;
	uint16_t x754 = UINT16_MAX;
	volatile int8_t x755 = INT8_MIN;
	volatile int32_t t164 = 3612;

    t164 = ((x753+x754)==(x755<=x756));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x761 = INT8_MAX;
	int32_t x764 = INT32_MAX;
	int32_t t165 = -2;

    t165 = ((x761+x762)==(x763<=x764));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x769 = UINT64_MAX;
	int16_t x770 = INT16_MIN;
	static volatile int32_t t166 = 6;

    t166 = ((x769+x770)==(x771<=x772));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x773 = INT16_MIN;
	volatile int32_t x776 = -1;
	volatile int32_t t167 = -104664937;

    t167 = ((x773+x774)==(x775<=x776));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x778 = -13610;
	static int16_t x779 = 1;
	uint16_t x780 = 1437U;

    t168 = ((x777+x778)==(x779<=x780));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x785 = 20626369U;
	int16_t x786 = INT16_MAX;
	static int8_t x788 = INT8_MAX;
	volatile int32_t t169 = 26;

    t169 = ((x785+x786)==(x787<=x788));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x793 = INT64_MAX;
	int8_t x794 = -1;
	int8_t x795 = INT8_MIN;
	uint32_t x796 = UINT32_MAX;
	volatile int32_t t170 = 15457645;

    t170 = ((x793+x794)==(x795<=x796));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x797 = INT64_MIN;
	int64_t x798 = 31983467LL;
	uint64_t x800 = UINT64_MAX;
	int32_t t171 = -1;

    t171 = ((x797+x798)==(x799<=x800));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x805 = INT16_MIN;
	static int16_t x807 = INT16_MAX;
	volatile int32_t t172 = 110;

    t172 = ((x805+x806)==(x807<=x808));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x809 = 3049LL;
	static int8_t x812 = INT8_MIN;
	volatile int32_t t173 = 167;

    t173 = ((x809+x810)==(x811<=x812));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x813 = -1;
	volatile uint32_t x815 = 178U;
	uint16_t x816 = 7U;
	volatile int32_t t174 = -85803863;

    t174 = ((x813+x814)==(x815<=x816));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x821 = 316U;
	int32_t x822 = INT32_MAX;
	static int64_t x823 = INT64_MIN;
	uint16_t x824 = 1U;
	int32_t t175 = -214;

    t175 = ((x821+x822)==(x823<=x824));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x825 = 225;
	uint64_t x826 = 44384569LLU;
	int16_t x827 = -142;
	int8_t x828 = INT8_MIN;
	volatile int32_t t176 = -423214;

    t176 = ((x825+x826)==(x827<=x828));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x829 = 26762497U;
	static int8_t x831 = 29;
	int32_t x832 = INT32_MIN;
	int32_t t177 = -45504548;

    t177 = ((x829+x830)==(x831<=x832));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x833 = INT16_MIN;
	int8_t x835 = INT8_MIN;
	volatile uint8_t x836 = 13U;
	int32_t t178 = -1843056;

    t178 = ((x833+x834)==(x835<=x836));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x837 = INT32_MAX;
	uint32_t x838 = 1473U;
	static uint16_t x840 = 264U;
	volatile int32_t t179 = 3025;

    t179 = ((x837+x838)==(x839<=x840));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x841 = 29542U;
	uint16_t x843 = UINT16_MAX;
	static uint32_t x844 = 59199U;
	static int32_t t180 = -1;

    t180 = ((x841+x842)==(x843<=x844));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x845 = 402724;
	int8_t x846 = 6;
	uint16_t x847 = 4U;
	int64_t x848 = 2679580750473LL;
	volatile int32_t t181 = 450655017;

    t181 = ((x845+x846)==(x847<=x848));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x854 = 380LLU;
	static int32_t x855 = INT32_MIN;
	uint16_t x856 = 1U;
	int32_t t182 = -120;

    t182 = ((x853+x854)==(x855<=x856));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x857 = -12;
	volatile int32_t t183 = -815364;

    t183 = ((x857+x858)==(x859<=x860));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x861 = INT16_MIN;
	static int32_t x863 = -6522240;
	int8_t x864 = INT8_MIN;
	int32_t t184 = 354121;

    t184 = ((x861+x862)==(x863<=x864));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x865 = 1227729U;
	int32_t x866 = INT32_MIN;
	int16_t x867 = -21;
	int32_t x868 = -6;
	int32_t t185 = -1;

    t185 = ((x865+x866)==(x867<=x868));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x869 = INT16_MIN;
	int8_t x870 = INT8_MAX;
	static int8_t x871 = INT8_MIN;
	int8_t x872 = -3;
	static volatile int32_t t186 = 944198;

    t186 = ((x869+x870)==(x871<=x872));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x873 = UINT8_MAX;
	volatile int8_t x874 = -17;
	int8_t x876 = 0;
	int32_t t187 = -56109131;

    t187 = ((x873+x874)==(x875<=x876));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x878 = 1U;
	int64_t x879 = 12LL;
	static int32_t x880 = 336419147;
	int32_t t188 = -5537443;

    t188 = ((x877+x878)==(x879<=x880));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x881 = -1768;
	uint16_t x883 = UINT16_MAX;
	int16_t x884 = INT16_MIN;
	volatile int32_t t189 = 504144786;

    t189 = ((x881+x882)==(x883<=x884));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x886 = 600674U;
	volatile uint16_t x887 = UINT16_MAX;
	volatile int8_t x888 = -1;

    t190 = ((x885+x886)==(x887<=x888));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x891 = 91U;
	static int16_t x892 = INT16_MIN;
	volatile int32_t t191 = -87295856;

    t191 = ((x889+x890)==(x891<=x892));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x893 = INT8_MIN;
	static int64_t x894 = 790172155422LL;
	static uint64_t x895 = UINT64_MAX;
	int32_t x896 = INT32_MIN;
	volatile int32_t t192 = -875400803;

    t192 = ((x893+x894)==(x895<=x896));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x897 = -1LL;
	int16_t x899 = INT16_MIN;
	uint16_t x900 = 24U;
	int32_t t193 = -3;

    t193 = ((x897+x898)==(x899<=x900));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x901 = -1509076917100010948LL;
	static volatile int8_t x902 = INT8_MIN;
	int8_t x903 = -1;
	int32_t t194 = -4283;

    t194 = ((x901+x902)==(x903<=x904));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x906 = INT32_MAX;
	volatile int64_t x907 = INT64_MIN;
	volatile int16_t x908 = INT16_MIN;
	volatile int32_t t195 = 13;

    t195 = ((x905+x906)==(x907<=x908));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x909 = 1;
	int32_t x910 = -1;
	uint8_t x911 = UINT8_MAX;
	volatile uint64_t x912 = 1952LLU;
	int32_t t196 = -1741424;

    t196 = ((x909+x910)==(x911<=x912));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x913 = 24U;
	int16_t x914 = INT16_MIN;
	int32_t t197 = 613;

    t197 = ((x913+x914)==(x915<=x916));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x917 = 1;
	static uint32_t x918 = 133687990U;
	static int64_t x919 = INT64_MAX;
	uint64_t x920 = UINT64_MAX;
	volatile int32_t t198 = -399522;

    t198 = ((x917+x918)==(x919<=x920));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x921 = -183119;
	int8_t x922 = INT8_MAX;
	uint8_t x923 = 72U;
	static uint32_t x924 = 2366U;
	static volatile int32_t t199 = 48669908;

    t199 = ((x921+x922)==(x923<=x924));

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

