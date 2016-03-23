
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

static int32_t t0 = 1;
uint16_t x11 = 125U;
int64_t x13 = 834780LL;
int64_t x14 = INT64_MIN;
volatile int64_t x18 = -3LL;
static volatile int32_t x22 = -5304;
volatile int16_t x24 = INT16_MIN;
volatile int32_t t5 = 35422922;
int32_t t6 = 14197015;
static int32_t x37 = INT32_MIN;
int8_t x39 = INT8_MIN;
int64_t x40 = 1761209542716669608LL;
static int32_t t10 = 826503;
volatile int32_t t11 = 0;
static volatile int64_t x50 = INT64_MIN;
static int32_t x51 = -47;
volatile int32_t t12 = 58756992;
uint64_t x54 = 380327413087LLU;
static int8_t x55 = INT8_MIN;
static int16_t x61 = 1;
uint32_t x76 = UINT32_MAX;
volatile int32_t t18 = -10751474;
int64_t x79 = INT64_MIN;
int32_t t19 = 66;
int32_t t20 = -56787;
uint32_t x91 = 50839U;
int8_t x94 = -1;
int32_t t23 = 59;
static volatile uint32_t x98 = UINT32_MAX;
volatile int32_t t24 = 0;
volatile int32_t t25 = -763246;
uint8_t x110 = 11U;
volatile uint16_t x114 = 2032U;
int32_t t28 = 15;
volatile int32_t t29 = 64701422;
int16_t x127 = INT16_MAX;
int64_t x128 = INT64_MIN;
uint16_t x145 = UINT16_MAX;
static volatile int32_t x149 = 24870078;
int8_t x150 = INT8_MIN;
static volatile int32_t t38 = 56;
int32_t t40 = -228664;
static uint16_t x166 = UINT16_MAX;
int8_t x167 = INT8_MAX;
static int64_t x175 = INT64_MIN;
int16_t x176 = -1;
int8_t x181 = INT8_MIN;
static int32_t t45 = -486258447;
int64_t x185 = 0LL;
static volatile int8_t x186 = INT8_MIN;
int16_t x200 = INT16_MIN;
uint8_t x207 = UINT8_MAX;
volatile int32_t x216 = INT32_MAX;
volatile int32_t t53 = 6581;
int32_t t54 = -26049198;
uint8_t x221 = UINT8_MAX;
int16_t x224 = -1510;
uint8_t x227 = 3U;
int8_t x233 = INT8_MAX;
int16_t x239 = INT16_MAX;
volatile int32_t t60 = 0;
int64_t x248 = INT64_MIN;
int8_t x250 = INT8_MIN;
int8_t x257 = -1;
int64_t x268 = INT64_MAX;
int64_t x275 = -998624142822395279LL;
int32_t x283 = -8;
uint16_t x286 = 470U;
uint64_t x296 = UINT64_MAX;
int16_t x303 = INT16_MIN;
static int64_t x304 = -1441308481369870158LL;
static uint8_t x316 = 12U;
uint8_t x327 = UINT8_MAX;
int8_t x330 = INT8_MIN;
static volatile int32_t x332 = 2784455;
int32_t t82 = -448507094;
volatile int32_t x338 = INT32_MAX;
uint16_t x349 = 4753U;
volatile int8_t x351 = INT8_MIN;
int16_t x368 = 3901;
static uint64_t x374 = 3171LLU;
static volatile int32_t t93 = 554250;
uint32_t x379 = 265U;
static uint8_t x382 = UINT8_MAX;
volatile int32_t t95 = 3;
int32_t t96 = -1;
volatile int32_t t97 = 10;
int64_t x398 = INT64_MAX;
static int8_t x400 = INT8_MIN;
static int32_t t99 = -4;
static int32_t x412 = INT32_MIN;
volatile int64_t x417 = INT64_MIN;
uint8_t x430 = UINT8_MAX;
volatile int8_t x438 = INT8_MIN;
int16_t x440 = -1;
static int64_t x448 = INT64_MIN;
uint64_t x449 = 328LLU;
volatile int16_t x460 = -1;
int8_t x463 = 0;
int32_t t118 = 692;
int8_t x477 = INT8_MIN;
volatile int16_t x486 = 736;
uint8_t x493 = 20U;
int32_t t123 = 175248363;
volatile int32_t t124 = -1753;
uint64_t x503 = UINT64_MAX;
volatile int32_t x505 = INT32_MAX;
uint64_t x508 = 36131992LLU;
volatile int32_t t126 = 4277921;
int8_t x513 = -1;
static volatile int64_t x514 = -5058LL;
int16_t x516 = -2231;
volatile int32_t t129 = 589;
int32_t t131 = -7;
int32_t x532 = INT32_MIN;
static uint32_t x534 = 5937003U;
int64_t x535 = -1436247313612LL;
int8_t x536 = INT8_MAX;
static int64_t x538 = INT64_MIN;
uint32_t x540 = UINT32_MAX;
int32_t t134 = 5924270;
int16_t x541 = INT16_MIN;
uint64_t x549 = 344LLU;
static int32_t x553 = 184;
int32_t t138 = 95;
uint8_t x560 = 26U;
int64_t x566 = -4580064LL;
int64_t x572 = INT64_MIN;
volatile uint8_t x574 = 1U;
int64_t x575 = -1642099678LL;
volatile uint8_t x582 = 0U;
int8_t x583 = 6;
static int32_t t146 = 26614;
volatile int8_t x589 = 4;
uint8_t x590 = 1U;
volatile int32_t t147 = 0;
int64_t x595 = 1174189043761630639LL;
volatile uint16_t x598 = 0U;
uint8_t x599 = 1U;
uint16_t x600 = UINT16_MAX;
int8_t x606 = -61;
volatile int32_t t153 = 15359;
int64_t x618 = INT64_MAX;
int8_t x621 = -1;
volatile int8_t x622 = -1;
uint16_t x630 = UINT16_MAX;
int64_t x632 = -18LL;
int8_t x646 = INT8_MIN;
int32_t t162 = 16288;
volatile int16_t x654 = INT16_MAX;
int64_t x656 = 49996149061987489LL;
int8_t x657 = -1;
int8_t x663 = INT8_MIN;
int32_t x665 = -1;
static int64_t x667 = INT64_MIN;
int8_t x672 = INT8_MAX;
volatile int32_t t167 = -15214960;
int64_t x676 = INT64_MIN;
int64_t x678 = INT64_MAX;
int32_t t170 = -5200;
uint32_t x685 = 59369U;
uint16_t x693 = 8827U;
int16_t x698 = INT16_MAX;
static volatile uint8_t x701 = UINT8_MAX;
int16_t x707 = 24;
uint16_t x708 = 25149U;
uint16_t x715 = UINT16_MAX;
int8_t x717 = 3;
int8_t x718 = INT8_MIN;
int8_t x732 = INT8_MIN;
int16_t x738 = -5116;
volatile int32_t x742 = 470113627;
int16_t x745 = 1627;
static uint64_t x751 = 292981LLU;
int16_t x757 = INT16_MIN;
int8_t x762 = 6;
volatile int32_t t190 = 27938387;
int64_t x765 = INT64_MIN;
int16_t x770 = INT16_MAX;
int16_t x771 = -1;
static int16_t x775 = 7;
int8_t x780 = INT8_MAX;
uint32_t x783 = 19342U;
int32_t t195 = 11610;
volatile int8_t x788 = -1;
int64_t x790 = -13685683030255365LL;
volatile int32_t t197 = -149;
int64_t x798 = INT64_MIN;
volatile int32_t t199 = -48252380;


void f0(void) {
    	static uint32_t x1 = 1883035U;
	static int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MIN;

    t0 = ((x1==x2)&(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int16_t x6 = -119;
	int32_t x7 = INT32_MIN;
	int16_t x8 = -198;
	volatile int32_t t1 = -163;

    t1 = ((x5==x6)&(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = -615;
	int64_t x12 = INT64_MIN;
	static int32_t t2 = 192443826;

    t2 = ((x9==x10)&(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x15 = INT32_MAX;
	int16_t x16 = -1;
	volatile int32_t t3 = 499585533;

    t3 = ((x13==x14)&(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MAX;
	int8_t x19 = 1;
	int16_t x20 = -1;
	volatile int32_t t4 = -141703916;

    t4 = ((x17==x18)&(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	uint8_t x23 = 3U;

    t5 = ((x21==x22)&(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	uint16_t x26 = 5494U;
	int8_t x27 = 0;
	volatile int64_t x28 = 21945726070837LL;

    t6 = ((x25==x26)&(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -88691;
	int8_t x30 = INT8_MAX;
	volatile int8_t x31 = -1;
	uint8_t x32 = 34U;
	int32_t t7 = -2;

    t7 = ((x29==x30)&(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 44956U;
	int8_t x34 = -1;
	volatile int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -662;

    t8 = ((x33==x34)&(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = 916;
	int32_t t9 = 333621;

    t9 = ((x37==x38)&(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = 0;
	int64_t x42 = -253354LL;
	volatile uint16_t x43 = 3970U;
	volatile int16_t x44 = INT16_MIN;

    t10 = ((x41==x42)&(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x45 = UINT16_MAX;
	int8_t x46 = -17;
	volatile uint32_t x47 = UINT32_MAX;
	volatile int32_t x48 = INT32_MIN;

    t11 = ((x45==x46)&(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -3331;
	int32_t x52 = -12196862;

    t12 = ((x49==x50)&(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -5784709;
	uint16_t x56 = UINT16_MAX;
	static int32_t t13 = 1;

    t13 = ((x53==x54)&(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 3U;
	int64_t x58 = INT64_MAX;
	static int32_t x59 = -1;
	uint16_t x60 = 64U;
	int32_t t14 = 7122962;

    t14 = ((x57==x58)&(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x62 = 245611U;
	static uint32_t x63 = 767354672U;
	volatile int16_t x64 = -3;
	int32_t t15 = -120;

    t15 = ((x61==x62)&(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = 163U;
	int64_t x66 = -4834939818LL;
	int32_t x67 = 502016962;
	volatile int8_t x68 = -1;
	int32_t t16 = -28883;

    t16 = ((x65==x66)&(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	volatile uint16_t x70 = 699U;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 0;

    t17 = ((x69==x70)&(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -137091907965LL;
	static uint32_t x74 = 3423000U;
	uint32_t x75 = UINT32_MAX;

    t18 = ((x73==x74)&(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 61U;
	volatile int8_t x78 = 5;
	static uint64_t x80 = UINT64_MAX;

    t19 = ((x77==x78)&(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x81 = 1125493784U;
	uint32_t x82 = 202460U;
	volatile int64_t x83 = -257527856208712LL;
	volatile int32_t x84 = 22270;

    t20 = ((x81==x82)&(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int64_t x86 = -1LL;
	int16_t x87 = INT16_MIN;
	int64_t x88 = -68061508407437LL;
	volatile int32_t t21 = 22749122;

    t21 = ((x85==x86)&(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	static int8_t x90 = INT8_MIN;
	int32_t x92 = INT32_MAX;
	int32_t t22 = -787;

    t22 = ((x89==x90)&(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 31063U;
	volatile int8_t x95 = INT8_MIN;
	uint64_t x96 = 454LLU;

    t23 = ((x93==x94)&(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -829;
	volatile int64_t x99 = INT64_MIN;
	uint8_t x100 = 52U;

    t24 = ((x97==x98)&(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -11783454;
	int32_t x102 = INT32_MIN;
	static int32_t x103 = INT32_MIN;
	uint8_t x104 = 35U;

    t25 = ((x101==x102)&(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 0U;
	uint64_t x106 = 12146228070LLU;
	volatile uint32_t x107 = 185U;
	int64_t x108 = 19LL;
	int32_t t26 = 7723044;

    t26 = ((x105==x106)&(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 43U;
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = -1;
	volatile int32_t t27 = 505;

    t27 = ((x109==x110)&(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int16_t x115 = -1;
	static uint32_t x116 = 10186467U;

    t28 = ((x113==x114)&(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = -1;
	int64_t x118 = INT64_MIN;
	volatile uint32_t x119 = 114626U;
	static int16_t x120 = 6;

    t29 = ((x117==x118)&(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	static volatile int32_t x122 = INT32_MIN;
	static int8_t x123 = INT8_MAX;
	volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = 1649693;

    t30 = ((x121==x122)&(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	static uint16_t x126 = 278U;
	int32_t t31 = 1269538;

    t31 = ((x125==x126)&(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -5756;
	static uint16_t x130 = 7U;
	volatile int64_t x131 = -1LL;
	int32_t x132 = 1624483;
	volatile int32_t t32 = -214;

    t32 = ((x129==x130)&(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 482852752232LLU;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 57U;
	volatile int32_t t33 = 40542;

    t33 = ((x133==x134)&(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MAX;
	int32_t x138 = -1;
	int8_t x139 = 23;
	int16_t x140 = INT16_MIN;
	static int32_t t34 = -5;

    t34 = ((x137==x138)&(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 3;
	int16_t x142 = -1;
	uint64_t x143 = 97106939842162564LLU;
	int8_t x144 = -1;
	volatile int32_t t35 = 2573435;

    t35 = ((x141==x142)&(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x146 = INT64_MIN;
	static int32_t x147 = -6971271;
	int8_t x148 = -7;
	int32_t t36 = 215800;

    t36 = ((x145==x146)&(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x151 = 201U;
	uint8_t x152 = UINT8_MAX;
	int32_t t37 = 7;

    t37 = ((x149==x150)&(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	int32_t x154 = -1;
	uint32_t x155 = 52635U;
	int8_t x156 = INT8_MAX;

    t38 = ((x153==x154)&(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 1052U;
	volatile uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	static int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = 434820;

    t39 = ((x157==x158)&(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = 132LLU;
	volatile int8_t x162 = INT8_MAX;
	static int8_t x163 = 4;
	static int64_t x164 = 2420036998797274945LL;

    t40 = ((x161==x162)&(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 4U;
	int8_t x168 = 0;
	int32_t t41 = -2199486;

    t41 = ((x165==x166)&(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -309231238;
	uint16_t x170 = 1432U;
	int8_t x171 = -45;
	int16_t x172 = 2040;
	int32_t t42 = -100;

    t42 = ((x169==x170)&(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MAX;
	static int8_t x174 = 0;
	volatile int32_t t43 = 7414;

    t43 = ((x173==x174)&(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	uint8_t x179 = 3U;
	int64_t x180 = -1LL;
	int32_t t44 = 1561;

    t44 = ((x177==x178)&(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -285389386;
	int8_t x183 = INT8_MAX;
	int64_t x184 = -1LL;

    t45 = ((x181==x182)&(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x187 = 31U;
	int32_t x188 = 30;
	int32_t t46 = -58;

    t46 = ((x185==x186)&(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x189 = 8330U;
	int32_t x190 = 37002321;
	volatile int16_t x191 = 11182;
	uint32_t x192 = 961944879U;
	int32_t t47 = 17515196;

    t47 = ((x189==x190)&(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = -1;
	static int64_t x194 = -1LL;
	volatile int32_t x195 = INT32_MAX;
	uint32_t x196 = 1739U;
	volatile int32_t t48 = 5322202;

    t48 = ((x193==x194)&(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 0;
	static int32_t x198 = 249622466;
	static int32_t x199 = INT32_MIN;
	volatile int32_t t49 = 4;

    t49 = ((x197==x198)&(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -1;
	static int32_t x202 = -1;
	int16_t x203 = INT16_MAX;
	static int64_t x204 = -1LL;
	volatile int32_t t50 = -283423440;

    t50 = ((x201==x202)&(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 247172091142318LL;
	int64_t x206 = -19LL;
	int32_t x208 = INT32_MIN;
	static int32_t t51 = 267906;

    t51 = ((x205==x206)&(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	int8_t x210 = 3;
	static int16_t x211 = INT16_MIN;
	uint64_t x212 = 12LLU;
	volatile int32_t t52 = 4;

    t52 = ((x209==x210)&(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	int64_t x214 = 1LL;
	static int32_t x215 = INT32_MIN;

    t53 = ((x213==x214)&(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = -355711390;
	static int32_t x220 = -1;

    t54 = ((x217==x218)&(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x222 = UINT8_MAX;
	int8_t x223 = 1;
	int32_t t55 = -132173;

    t55 = ((x221==x222)&(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MAX;
	static uint16_t x226 = 2570U;
	uint32_t x228 = UINT32_MAX;
	static int32_t t56 = 617;

    t56 = ((x225==x226)&(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 46;
	uint8_t x230 = 18U;
	int16_t x231 = INT16_MIN;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 46275664;

    t57 = ((x229==x230)&(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = 1U;
	int64_t x235 = INT64_MIN;
	volatile uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = 47852646;

    t58 = ((x233==x234)&(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	int64_t x240 = -1LL;
	volatile int32_t t59 = 3;

    t59 = ((x237==x238)&(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 26429248LLU;
	int64_t x242 = -1LL;
	int16_t x243 = 1082;
	int32_t x244 = INT32_MIN;

    t60 = ((x241==x242)&(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 30415U;
	uint8_t x246 = 0U;
	static int64_t x247 = INT64_MIN;
	volatile int32_t t61 = 12448;

    t61 = ((x245==x246)&(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MIN;
	uint64_t x251 = UINT64_MAX;
	volatile uint8_t x252 = 6U;
	int32_t t62 = -9416;

    t62 = ((x249==x250)&(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -42;
	int16_t x254 = 2;
	volatile int64_t x255 = 273898787577LL;
	uint16_t x256 = 29625U;
	int32_t t63 = 1023943208;

    t63 = ((x253==x254)&(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MAX;
	int64_t x260 = -392216414253490504LL;
	int32_t t64 = -80155887;

    t64 = ((x257==x258)&(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 24519271LL;
	static volatile int32_t x262 = -1;
	int8_t x263 = INT8_MIN;
	int64_t x264 = 4008550LL;
	volatile int32_t t65 = 2;

    t65 = ((x261==x262)&(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x265 = 60;
	int32_t x266 = -58309;
	int8_t x267 = 48;
	volatile int32_t t66 = 0;

    t66 = ((x265==x266)&(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MAX;
	uint8_t x271 = 1U;
	static int64_t x272 = -1LL;
	volatile int32_t t67 = -24796;

    t67 = ((x269==x270)&(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -2054LL;
	int16_t x274 = -1;
	int32_t x276 = -41253423;
	volatile int32_t t68 = 11116;

    t68 = ((x273==x274)&(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	uint8_t x278 = 124U;
	static int8_t x279 = INT8_MIN;
	int8_t x280 = 6;
	int32_t t69 = 2559369;

    t69 = ((x277==x278)&(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	int32_t x284 = 0;
	volatile int32_t t70 = 0;

    t70 = ((x281==x282)&(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = -1;
	static volatile int8_t x287 = INT8_MIN;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 1164393;

    t71 = ((x285==x286)&(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MIN;
	int64_t x291 = 124972989LL;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 23;

    t72 = ((x289==x290)&(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -18;
	int32_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	int32_t t73 = -43;

    t73 = ((x293==x294)&(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MIN;
	uint8_t x298 = UINT8_MAX;
	static volatile int32_t x299 = INT32_MIN;
	volatile int8_t x300 = INT8_MIN;
	static int32_t t74 = 63331;

    t74 = ((x297==x298)&(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	uint8_t x302 = UINT8_MAX;
	static int32_t t75 = 57074323;

    t75 = ((x301==x302)&(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = UINT32_MAX;
	volatile uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 32066709LLU;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = 48;

    t76 = ((x305==x306)&(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 0U;
	uint8_t x310 = 0U;
	static int64_t x311 = INT64_MIN;
	uint16_t x312 = UINT16_MAX;
	int32_t t77 = 163272;

    t77 = ((x309==x310)&(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	static int8_t x314 = INT8_MAX;
	volatile uint16_t x315 = 252U;
	int32_t t78 = -98549035;

    t78 = ((x313==x314)&(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MIN;
	uint32_t x319 = 1067U;
	int16_t x320 = -1;
	static int32_t t79 = -1;

    t79 = ((x317==x318)&(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = UINT8_MAX;
	volatile int64_t x322 = INT64_MAX;
	uint8_t x323 = 0U;
	uint8_t x324 = UINT8_MAX;
	static volatile int32_t t80 = 1450528;

    t80 = ((x321==x322)&(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	volatile int16_t x326 = INT16_MAX;
	volatile uint16_t x328 = 13956U;
	volatile int32_t t81 = 42;

    t81 = ((x325==x326)&(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = -17298108082194542LL;
	uint16_t x331 = 4U;

    t82 = ((x329==x330)&(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 2;
	uint64_t x334 = 1550LLU;
	uint64_t x335 = 17074001LLU;
	int64_t x336 = INT64_MIN;
	int32_t t83 = -14015225;

    t83 = ((x333==x334)&(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	volatile int32_t x339 = 2238323;
	int64_t x340 = -14053634942LL;
	int32_t t84 = 317133130;

    t84 = ((x337==x338)&(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = -1LL;
	static int32_t t85 = 86;

    t85 = ((x341==x342)&(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MIN;
	static uint8_t x347 = 77U;
	volatile int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = -224599819;

    t86 = ((x345==x346)&(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 65U;
	int64_t x352 = INT64_MAX;
	volatile int32_t t87 = -3782;

    t87 = ((x349==x350)&(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	uint16_t x354 = UINT16_MAX;
	volatile int16_t x355 = INT16_MIN;
	int8_t x356 = 7;
	int32_t t88 = -1187;

    t88 = ((x353==x354)&(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = 1109850LL;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = -3123;

    t89 = ((x357==x358)&(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	int32_t x362 = -11240698;
	uint8_t x363 = 4U;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 30678132;

    t90 = ((x361==x362)&(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	uint8_t x366 = 0U;
	volatile int64_t x367 = 379941LL;
	int32_t t91 = -18755;

    t91 = ((x365==x366)&(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x369 = 3035U;
	uint32_t x370 = 101522412U;
	static int32_t x371 = 521571;
	uint64_t x372 = 59019412LLU;
	volatile int32_t t92 = 2623319;

    t92 = ((x369==x370)&(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x373 = INT64_MIN;
	uint64_t x375 = 1303058720789420LLU;
	volatile int8_t x376 = 12;

    t93 = ((x373==x374)&(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -1549;
	volatile int8_t x378 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 3417;

    t94 = ((x377==x378)&(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = 4;
	static int16_t x383 = INT16_MIN;
	uint8_t x384 = 3U;

    t95 = ((x381==x382)&(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = INT32_MIN;
	volatile int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	volatile int16_t x388 = INT16_MIN;

    t96 = ((x385==x386)&(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MAX;
	int8_t x390 = 11;
	volatile int16_t x391 = 1;
	int8_t x392 = INT8_MIN;

    t97 = ((x389==x390)&(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -1;
	int16_t x394 = -1;
	static volatile int16_t x395 = INT16_MIN;
	static volatile int32_t x396 = -242170783;
	int32_t t98 = -50;

    t98 = ((x393==x394)&(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = 25613115316941304LL;
	uint64_t x399 = 661143822440408753LLU;

    t99 = ((x397==x398)&(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -187538839LL;
	volatile uint64_t x402 = 139219549665LLU;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t100 = 1142178;

    t100 = ((x401==x402)&(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x405 = 1U;
	volatile uint32_t x406 = 47451865U;
	int16_t x407 = -23;
	static volatile uint32_t x408 = 60264U;
	int32_t t101 = 19456344;

    t101 = ((x405==x406)&(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = -99665027;
	int32_t x410 = INT32_MIN;
	int16_t x411 = -1;
	int32_t t102 = -2619;

    t102 = ((x409==x410)&(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 1U;
	uint16_t x414 = UINT16_MAX;
	static volatile uint16_t x415 = 2U;
	int16_t x416 = -1;
	volatile int32_t t103 = 14;

    t103 = ((x413==x414)&(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x418 = INT32_MAX;
	static volatile uint8_t x419 = UINT8_MAX;
	volatile int32_t x420 = INT32_MIN;
	int32_t t104 = -120;

    t104 = ((x417==x418)&(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x421 = 1445499601U;
	int16_t x422 = INT16_MIN;
	int16_t x423 = 172;
	int64_t x424 = INT64_MIN;
	int32_t t105 = -5905717;

    t105 = ((x421==x422)&(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MIN;
	volatile int8_t x427 = 5;
	static int8_t x428 = -4;
	static volatile int32_t t106 = -3;

    t106 = ((x425==x426)&(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x429 = INT8_MIN;
	int32_t x431 = -1;
	int32_t x432 = -1;
	static int32_t t107 = -435;

    t107 = ((x429==x430)&(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 1U;
	int16_t x434 = -3;
	int32_t x435 = -1;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t108 = 1;

    t108 = ((x433==x434)&(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 128212762360086745LLU;
	int16_t x439 = -1;
	static int32_t t109 = 8667;

    t109 = ((x437==x438)&(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 7918;
	int16_t x442 = INT16_MIN;
	static uint8_t x443 = 5U;
	uint8_t x444 = 5U;
	volatile int32_t t110 = -68;

    t110 = ((x441==x442)&(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 0U;
	int64_t x446 = 246399475603LL;
	int32_t x447 = 28968;
	volatile int32_t t111 = -169404801;

    t111 = ((x445==x446)&(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = INT64_MIN;
	static volatile uint16_t x451 = UINT16_MAX;
	int8_t x452 = INT8_MAX;
	int32_t t112 = -7781;

    t112 = ((x449==x450)&(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MIN;
	int32_t x454 = INT32_MIN;
	volatile int64_t x455 = INT64_MAX;
	volatile int16_t x456 = INT16_MIN;
	volatile int32_t t113 = -15051872;

    t113 = ((x453==x454)&(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1117124687LL;
	int16_t x458 = -1;
	int64_t x459 = INT64_MAX;
	volatile int32_t t114 = 1;

    t114 = ((x457==x458)&(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	uint16_t x462 = 3U;
	int8_t x464 = -1;
	int32_t t115 = 1610805;

    t115 = ((x461==x462)&(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = 776890632U;
	volatile uint64_t x466 = 13LLU;
	int64_t x467 = 2548761729773LL;
	static int16_t x468 = 61;
	volatile int32_t t116 = 21593;

    t116 = ((x465==x466)&(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 84U;
	uint8_t x470 = UINT8_MAX;
	uint64_t x471 = 1012337930LLU;
	static int32_t x472 = -1;
	int32_t t117 = 18844926;

    t117 = ((x469==x470)&(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x474 = -1;
	static uint64_t x475 = UINT64_MAX;
	volatile int32_t x476 = INT32_MAX;

    t118 = ((x473==x474)&(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x478 = -584;
	uint64_t x479 = 391472193595LLU;
	int16_t x480 = -1;
	volatile int32_t t119 = 678918;

    t119 = ((x477==x478)&(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	uint64_t x482 = UINT64_MAX;
	int8_t x483 = INT8_MAX;
	static int64_t x484 = -1LL;
	volatile int32_t t120 = -6;

    t120 = ((x481==x482)&(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = 637U;
	static int32_t x487 = INT32_MIN;
	int8_t x488 = INT8_MIN;
	static int32_t t121 = 35259;

    t121 = ((x485==x486)&(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	int32_t x490 = 2014433;
	uint16_t x491 = 1U;
	int16_t x492 = 276;
	int32_t t122 = -673;

    t122 = ((x489==x490)&(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x494 = 6454563295363LL;
	uint8_t x495 = UINT8_MAX;
	uint16_t x496 = 2570U;

    t123 = ((x493==x494)&(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	static uint16_t x500 = UINT16_MAX;

    t124 = ((x497==x498)&(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = -2076LL;
	int8_t x502 = INT8_MAX;
	int64_t x504 = INT64_MAX;
	int32_t t125 = 1;

    t125 = ((x501==x502)&(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = INT64_MAX;
	int16_t x507 = -80;

    t126 = ((x505==x506)&(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MAX;
	int8_t x510 = -11;
	int64_t x511 = -1LL;
	volatile int32_t x512 = -1;
	int32_t t127 = 244499;

    t127 = ((x509==x510)&(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x515 = INT32_MIN;
	static volatile int32_t t128 = -14;

    t128 = ((x513==x514)&(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 1U;
	int32_t x518 = INT32_MIN;
	static uint64_t x519 = UINT64_MAX;
	uint32_t x520 = 6290U;

    t129 = ((x517==x518)&(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 396U;
	static int32_t x522 = 23;
	int16_t x523 = -1;
	uint8_t x524 = UINT8_MAX;
	int32_t t130 = 1;

    t130 = ((x521==x522)&(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x525 = INT64_MIN;
	int32_t x526 = -1;
	volatile uint8_t x527 = 1U;
	volatile int32_t x528 = INT32_MAX;

    t131 = ((x525==x526)&(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = 29;
	static int32_t x530 = INT32_MIN;
	int32_t x531 = -1;
	int32_t t132 = 2477280;

    t132 = ((x529==x530)&(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = -11191423;
	int32_t t133 = 765687252;

    t133 = ((x533==x534)&(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x537 = -426;
	int64_t x539 = -1LL;

    t134 = ((x537==x538)&(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = -648523143587875012LL;
	volatile int32_t x543 = -44660824;
	int32_t x544 = -1;
	static int32_t t135 = -40237589;

    t135 = ((x541==x542)&(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int64_t x546 = -7477464541199288LL;
	uint64_t x547 = 3LLU;
	uint8_t x548 = 1U;
	int32_t t136 = 146191260;

    t136 = ((x545==x546)&(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = -1;
	int32_t x551 = INT32_MIN;
	int32_t x552 = INT32_MAX;
	volatile int32_t t137 = 3;

    t137 = ((x549==x550)&(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = INT16_MAX;
	volatile int64_t x555 = INT64_MAX;
	uint64_t x556 = 31579341260281624LLU;

    t138 = ((x553==x554)&(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 3LLU;
	uint32_t x558 = 3340U;
	uint64_t x559 = 529519166586613161LLU;
	volatile int32_t t139 = 16704;

    t139 = ((x557==x558)&(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	volatile uint16_t x562 = 2U;
	static int32_t x563 = -1;
	int32_t x564 = INT32_MAX;
	int32_t t140 = 22918;

    t140 = ((x561==x562)&(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	volatile int64_t x567 = INT64_MAX;
	int8_t x568 = 3;
	volatile int32_t t141 = 11816850;

    t141 = ((x565==x566)&(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 4166U;
	static int64_t x570 = -1LL;
	int16_t x571 = INT16_MIN;
	static volatile int32_t t142 = -2105100;

    t142 = ((x569==x570)&(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MAX;
	uint8_t x576 = 4U;
	static int32_t t143 = 17339;

    t143 = ((x573==x574)&(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = INT64_MIN;
	int8_t x578 = -1;
	int8_t x579 = INT8_MIN;
	volatile int16_t x580 = INT16_MAX;
	volatile int32_t t144 = 35294;

    t144 = ((x577==x578)&(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = UINT8_MAX;
	int8_t x584 = -1;
	static volatile int32_t t145 = 952248963;

    t145 = ((x581==x582)&(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = INT8_MIN;
	volatile int32_t x586 = INT32_MAX;
	uint16_t x587 = UINT16_MAX;
	uint16_t x588 = 12732U;

    t146 = ((x585==x586)&(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x591 = 3U;
	int8_t x592 = INT8_MIN;

    t147 = ((x589==x590)&(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x593 = 2U;
	int8_t x594 = INT8_MIN;
	volatile int32_t x596 = -915;
	volatile int32_t t148 = -206;

    t148 = ((x593==x594)&(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	volatile int32_t t149 = -36;

    t149 = ((x597==x598)&(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x601 = 7489179LLU;
	uint8_t x602 = 3U;
	int32_t x603 = -238;
	uint16_t x604 = 3U;
	static int32_t t150 = -305244;

    t150 = ((x601==x602)&(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 66113174239LLU;
	int64_t x607 = INT64_MIN;
	int64_t x608 = -1LL;
	int32_t t151 = 350497;

    t151 = ((x605==x606)&(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x610 = -1;
	volatile int8_t x611 = -1;
	volatile uint64_t x612 = 51054182565056LLU;
	volatile int32_t t152 = 121;

    t152 = ((x609==x610)&(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	int32_t x614 = -1;
	uint16_t x615 = 26U;
	int16_t x616 = 0;

    t153 = ((x613==x614)&(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = INT32_MAX;
	uint16_t x619 = 5418U;
	int8_t x620 = INT8_MAX;
	volatile int32_t t154 = -2;

    t154 = ((x617==x618)&(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x623 = -3;
	int32_t x624 = 50;
	int32_t t155 = 7;

    t155 = ((x621==x622)&(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 9646070U;
	static int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MIN;
	volatile uint64_t x628 = UINT64_MAX;
	int32_t t156 = -586;

    t156 = ((x625==x626)&(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MAX;
	int16_t x631 = INT16_MAX;
	volatile int32_t t157 = -585;

    t157 = ((x629==x630)&(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 949U;
	int8_t x634 = INT8_MIN;
	uint32_t x635 = 1107U;
	int32_t x636 = -1;
	static int32_t t158 = -58;

    t158 = ((x633==x634)&(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = -10813521280343130LL;
	int64_t x638 = INT64_MIN;
	uint32_t x639 = 10751U;
	static int16_t x640 = INT16_MIN;
	int32_t t159 = -790293;

    t159 = ((x637==x638)&(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = -1;
	static volatile uint16_t x642 = 586U;
	uint8_t x643 = UINT8_MAX;
	uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -4705341;

    t160 = ((x641==x642)&(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = -2;
	int64_t x647 = -1LL;
	int32_t x648 = -1;
	int32_t t161 = -209687183;

    t161 = ((x645==x646)&(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	uint16_t x650 = UINT16_MAX;
	static uint8_t x651 = 18U;
	int16_t x652 = -2581;

    t162 = ((x649==x650)&(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = 0;
	int32_t x655 = INT32_MIN;
	int32_t t163 = 60926222;

    t163 = ((x653==x654)&(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x658 = 115U;
	static int32_t x659 = INT32_MIN;
	static volatile uint64_t x660 = 1LLU;
	volatile int32_t t164 = 44;

    t164 = ((x657==x658)&(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x661 = 20U;
	int32_t x662 = INT32_MIN;
	int64_t x664 = 637LL;
	static int32_t t165 = 219;

    t165 = ((x661==x662)&(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x666 = INT32_MIN;
	int16_t x668 = 1165;
	int32_t t166 = 1;

    t166 = ((x665==x666)&(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x669 = 34543746859697LLU;
	volatile uint64_t x670 = 20519702315111LLU;
	int16_t x671 = INT16_MIN;

    t167 = ((x669==x670)&(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x673 = -1;
	uint32_t x674 = 1399U;
	int8_t x675 = INT8_MIN;
	int32_t t168 = 995;

    t168 = ((x673==x674)&(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = INT8_MIN;
	static int16_t x679 = INT16_MIN;
	static int32_t x680 = -1;
	int32_t t169 = 1043;

    t169 = ((x677==x678)&(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = -1LL;
	int32_t x683 = -6965;
	uint32_t x684 = 75096914U;

    t170 = ((x681==x682)&(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x686 = 61U;
	int16_t x687 = INT16_MAX;
	volatile int8_t x688 = -15;
	static volatile int32_t t171 = -247208306;

    t171 = ((x685==x686)&(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	uint32_t x690 = UINT32_MAX;
	uint32_t x691 = UINT32_MAX;
	uint8_t x692 = 2U;
	volatile int32_t t172 = -84508821;

    t172 = ((x689==x690)&(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x694 = UINT16_MAX;
	int8_t x695 = -18;
	int32_t x696 = -1;
	volatile int32_t t173 = 2643601;

    t173 = ((x693==x694)&(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -28LL;
	int64_t x699 = -1LL;
	volatile uint8_t x700 = 1U;
	static int32_t t174 = 134501068;

    t174 = ((x697==x698)&(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = UINT32_MAX;
	static int16_t x703 = INT16_MAX;
	int32_t x704 = -16156479;
	int32_t t175 = -123508;

    t175 = ((x701==x702)&(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x705 = UINT8_MAX;
	static int8_t x706 = INT8_MIN;
	volatile int32_t t176 = -237;

    t176 = ((x705==x706)&(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -1;
	volatile int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MIN;
	int16_t x712 = 902;
	static int32_t t177 = 22;

    t177 = ((x709==x710)&(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1;
	uint64_t x714 = 404418106207LLU;
	int8_t x716 = INT8_MIN;
	volatile int32_t t178 = -11;

    t178 = ((x713==x714)&(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x719 = -1;
	uint64_t x720 = 425889015364LLU;
	int32_t t179 = 209429375;

    t179 = ((x717==x718)&(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int8_t x722 = INT8_MAX;
	int8_t x723 = -1;
	int64_t x724 = -1LL;
	volatile int32_t t180 = 6466156;

    t180 = ((x721==x722)&(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	int64_t x726 = INT64_MAX;
	static int8_t x727 = -1;
	uint8_t x728 = 0U;
	int32_t t181 = -485;

    t181 = ((x725==x726)&(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 28U;
	volatile int8_t x730 = INT8_MIN;
	int16_t x731 = -5;
	volatile int32_t t182 = 203;

    t182 = ((x729==x730)&(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	int32_t x734 = -1;
	uint64_t x735 = 48847LLU;
	static uint32_t x736 = 55317019U;
	int32_t t183 = -290746131;

    t183 = ((x733==x734)&(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = INT16_MIN;
	volatile int64_t x739 = -5078839668LL;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = 1;

    t184 = ((x737==x738)&(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -435858;
	volatile int64_t x743 = INT64_MAX;
	volatile int16_t x744 = 0;
	static volatile int32_t t185 = 52810289;

    t185 = ((x741==x742)&(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = INT16_MIN;
	int32_t x747 = INT32_MIN;
	uint64_t x748 = UINT64_MAX;
	int32_t t186 = 11180417;

    t186 = ((x745==x746)&(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = 1380;
	int16_t x750 = INT16_MAX;
	static volatile uint32_t x752 = 172444052U;
	int32_t t187 = 4805684;

    t187 = ((x749==x750)&(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x753 = INT64_MIN;
	int64_t x754 = -222803LL;
	uint32_t x755 = 0U;
	uint8_t x756 = 1U;
	static int32_t t188 = -28190;

    t188 = ((x753==x754)&(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -498;
	int16_t x759 = -1;
	int8_t x760 = 1;
	int32_t t189 = -96;

    t189 = ((x757==x758)&(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 1;
	uint16_t x763 = UINT16_MAX;
	static int64_t x764 = INT64_MAX;

    t190 = ((x761==x762)&(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x766 = INT64_MIN;
	int8_t x767 = -1;
	int32_t x768 = -1;
	static int32_t t191 = -8873;

    t191 = ((x765==x766)&(x767==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 5957724LLU;
	uint8_t x772 = 0U;
	volatile int32_t t192 = -871707654;

    t192 = ((x769==x770)&(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = INT16_MIN;
	int64_t x774 = -1LL;
	static volatile uint64_t x776 = 5549LLU;
	int32_t t193 = -180845;

    t193 = ((x773==x774)&(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 1U;
	static uint32_t x778 = 104U;
	int64_t x779 = -1LL;
	int32_t t194 = -1;

    t194 = ((x777==x778)&(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 3U;
	int32_t x782 = INT32_MIN;
	static uint32_t x784 = UINT32_MAX;

    t195 = ((x781==x782)&(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = UINT64_MAX;
	int16_t x786 = INT16_MIN;
	uint16_t x787 = 2599U;
	volatile int32_t t196 = 3;

    t196 = ((x785==x786)&(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	volatile int32_t x791 = INT32_MIN;
	volatile int64_t x792 = -1LL;

    t197 = ((x789==x790)&(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -9;
	uint16_t x794 = UINT16_MAX;
	static volatile int64_t x795 = 138134731566980309LL;
	uint32_t x796 = UINT32_MAX;
	int32_t t198 = 50831;

    t198 = ((x793==x794)&(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 29;
	volatile int32_t x799 = 0;
	static int8_t x800 = -1;

    t199 = ((x797==x798)&(x799==x800));

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

