
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

uint8_t x1 = 9U;
volatile int8_t x2 = 34;
static uint16_t x4 = 10057U;
static int16_t x8 = 129;
volatile int32_t t2 = 359;
int16_t x17 = INT16_MAX;
int16_t x19 = 13;
volatile uint32_t x24 = UINT32_MAX;
volatile int32_t x26 = -1;
int32_t t7 = 2290002;
volatile int32_t t8 = -1168331;
volatile int8_t x37 = INT8_MAX;
static int64_t x39 = 3552LL;
int32_t x40 = -114641207;
int8_t x42 = INT8_MAX;
int64_t x45 = INT64_MAX;
int16_t x46 = 0;
int64_t x54 = INT64_MIN;
int16_t x58 = -1;
int16_t x59 = -1;
int64_t x60 = INT64_MIN;
int32_t x72 = 42;
uint32_t x81 = UINT32_MAX;
int16_t x89 = INT16_MIN;
volatile int64_t x90 = INT64_MAX;
static uint32_t x98 = 14495U;
uint16_t x99 = UINT16_MAX;
int32_t x101 = INT32_MIN;
int16_t x111 = INT16_MAX;
volatile int32_t t28 = -267126;
int32_t x118 = INT32_MAX;
uint16_t x128 = 1287U;
volatile int32_t t31 = 23;
int32_t x135 = 62;
volatile int16_t x136 = INT16_MAX;
volatile int32_t x137 = -1;
uint8_t x143 = UINT8_MAX;
static uint8_t x144 = 110U;
int64_t x145 = INT64_MIN;
int8_t x147 = INT8_MAX;
uint8_t x151 = UINT8_MAX;
volatile int32_t t37 = 89;
int64_t x155 = INT64_MIN;
volatile uint64_t x158 = 1262140LLU;
uint64_t x160 = UINT64_MAX;
static uint32_t x162 = UINT32_MAX;
uint16_t x164 = UINT16_MAX;
volatile int32_t t41 = 249273;
int64_t x169 = -1LL;
uint32_t x171 = 9184U;
int32_t x176 = INT32_MIN;
int32_t t43 = 26183235;
uint64_t x181 = 363980LLU;
int16_t x186 = INT16_MIN;
int64_t x189 = INT64_MIN;
int32_t x192 = 2;
uint8_t x195 = 2U;
static uint64_t x196 = 772090LLU;
int8_t x197 = INT8_MAX;
int64_t x202 = -1763834721805854809LL;
volatile int32_t t50 = -4846;
static volatile int64_t x209 = 0LL;
int16_t x210 = INT16_MIN;
int16_t x215 = INT16_MIN;
int32_t x216 = INT32_MIN;
int8_t x217 = 6;
int32_t x223 = INT32_MIN;
volatile int32_t t55 = -1019955;
static volatile int32_t t56 = 1748614;
int32_t x230 = -129818;
static volatile int16_t x231 = 16;
uint64_t x241 = 327952716LLU;
int16_t x242 = 14;
int16_t x246 = -1;
volatile int32_t t62 = -860;
uint8_t x253 = 1U;
volatile int64_t x255 = -268666LL;
int32_t x256 = INT32_MAX;
uint32_t x258 = 6U;
int32_t t64 = -1;
int64_t x262 = -1LL;
int64_t x264 = INT64_MAX;
static int16_t x265 = INT16_MIN;
int64_t x266 = INT64_MAX;
int8_t x267 = -4;
static int8_t x274 = INT8_MIN;
int64_t x283 = INT64_MIN;
uint8_t x284 = UINT8_MAX;
int32_t t70 = 16514502;
volatile int32_t t71 = -1;
volatile int16_t x299 = INT16_MIN;
volatile int32_t t75 = 314;
uint64_t x306 = 399LLU;
static volatile int32_t t76 = -48;
int16_t x320 = INT16_MIN;
int32_t t80 = 761123043;
int32_t x326 = 12133;
volatile int32_t t81 = -940;
uint8_t x330 = UINT8_MAX;
uint32_t x333 = 10U;
int64_t x342 = INT64_MIN;
volatile int32_t x347 = -1;
uint32_t x357 = UINT32_MAX;
volatile int32_t t89 = 473367705;
static uint32_t x362 = UINT32_MAX;
static volatile uint8_t x363 = 4U;
volatile uint64_t x368 = 411356517694260198LLU;
int16_t x370 = INT16_MIN;
static int16_t x371 = INT16_MIN;
int32_t t92 = -5757;
int8_t x376 = INT8_MIN;
volatile int32_t t93 = 53635764;
uint32_t x378 = 9108808U;
uint16_t x379 = UINT16_MAX;
static int64_t x392 = INT64_MIN;
static volatile int32_t t99 = -241099583;
volatile int32_t t101 = -3756;
volatile int8_t x415 = INT8_MIN;
int16_t x419 = 198;
uint16_t x420 = 24U;
int16_t x435 = INT16_MIN;
uint8_t x448 = UINT8_MAX;
uint8_t x459 = 4U;
static volatile int32_t t115 = -58553;
volatile int64_t x468 = INT64_MAX;
int32_t t116 = 855742;
int8_t x483 = -1;
volatile int32_t x486 = 15047555;
int16_t x489 = -1;
int16_t x492 = 555;
uint64_t x499 = UINT64_MAX;
volatile int64_t x500 = -1LL;
uint32_t x501 = 143008918U;
volatile int32_t x506 = INT32_MAX;
volatile int32_t t126 = 19;
volatile int16_t x510 = INT16_MIN;
int16_t x511 = INT16_MIN;
int64_t x512 = 2920LL;
volatile int32_t t127 = 10;
uint32_t x515 = 43U;
int64_t x516 = INT64_MIN;
static volatile uint32_t x517 = 1U;
uint16_t x522 = 99U;
static uint32_t x526 = UINT32_MAX;
static volatile uint16_t x529 = 104U;
static uint8_t x535 = 5U;
int64_t x544 = -82025012236LL;
uint8_t x554 = UINT8_MAX;
int16_t x556 = INT16_MIN;
volatile int32_t t138 = -217599;
int32_t t141 = -42;
int8_t x575 = INT8_MAX;
volatile uint32_t x576 = UINT32_MAX;
int32_t t145 = -110568564;
static volatile uint16_t x591 = 5U;
int8_t x596 = -1;
int32_t t148 = -1049;
static int8_t x599 = 0;
int16_t x610 = -1;
static volatile uint32_t x611 = 47U;
int64_t x620 = -1LL;
static int16_t x623 = -1;
int8_t x629 = INT8_MAX;
int32_t t157 = 558691271;
int16_t x638 = INT16_MIN;
uint16_t x639 = 31U;
int64_t x648 = 1052061852741LL;
int16_t x651 = -1;
int32_t t162 = -1009584900;
static uint16_t x657 = 14364U;
int64_t x661 = INT64_MIN;
uint8_t x664 = 2U;
static int32_t x671 = -8509;
uint32_t x675 = 30110U;
uint32_t x676 = 13912086U;
static int32_t t168 = -25;
int8_t x678 = 18;
int32_t x679 = -323;
volatile int32_t t169 = 1;
static uint16_t x689 = 1552U;
uint16_t x691 = UINT16_MAX;
uint32_t x700 = 63U;
static volatile int32_t t175 = -561;
int32_t x705 = INT32_MIN;
int32_t x721 = INT32_MIN;
int8_t x724 = INT8_MIN;
int8_t x725 = -1;
uint16_t x727 = UINT16_MAX;
int16_t x746 = INT16_MAX;
volatile uint16_t x747 = 32U;
static int8_t x765 = -1;
int32_t x767 = INT32_MIN;
static int8_t x770 = -1;
int32_t t194 = 73;
uint32_t x782 = 11300824U;
volatile int32_t t195 = 39073;
volatile int32_t t196 = 520253646;
static int16_t x794 = INT16_MAX;
int16_t x800 = -1;


void f0(void) {
    	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 28593328;

    t0 = ((x1&x2)==(x3|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -15625396;
	volatile int32_t x6 = INT32_MIN;
	uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = 517375207;

    t1 = ((x5&x6)==(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 2U;
	volatile uint64_t x10 = UINT64_MAX;
	static uint32_t x11 = 51214U;
	static volatile uint8_t x12 = 1U;

    t2 = ((x9&x10)==(x11|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = UINT16_MAX;
	volatile int16_t x14 = -1;
	uint16_t x15 = 6U;
	int64_t x16 = 5326850868568329LL;
	int32_t t3 = -410092076;

    t3 = ((x13&x14)==(x15|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x18 = -1;
	static int64_t x20 = 12467886LL;
	int32_t t4 = -357409499;

    t4 = ((x17&x18)==(x19|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 80191060447LLU;
	static int64_t x22 = INT64_MIN;
	static uint64_t x23 = 618LLU;
	int32_t t5 = 89;

    t5 = ((x21&x22)==(x23|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 22426LLU;
	uint16_t x27 = 624U;
	static int64_t x28 = 53738395LL;
	volatile int32_t t6 = -34;

    t6 = ((x25&x26)==(x27|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MIN;
	volatile int64_t x30 = -1LL;
	int64_t x31 = 3067213486584689610LL;
	volatile uint8_t x32 = UINT8_MAX;

    t7 = ((x29&x30)==(x31|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 582322072340LL;
	static int64_t x34 = -1LL;
	static int8_t x35 = -1;
	static int64_t x36 = INT64_MIN;

    t8 = ((x33&x34)==(x35|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = 7;
	volatile int32_t t9 = -15979756;

    t9 = ((x37&x38)==(x39|x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	int16_t x43 = 1;
	uint64_t x44 = 7428304129715708LLU;
	int32_t t10 = 1381;

    t10 = ((x41&x42)==(x43|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x47 = -1;
	volatile int32_t x48 = 22;
	int32_t t11 = 29;

    t11 = ((x45&x46)==(x47|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int32_t x50 = INT32_MAX;
	static int8_t x51 = INT8_MAX;
	static uint16_t x52 = UINT16_MAX;
	int32_t t12 = -36807;

    t12 = ((x49&x50)==(x51|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 52;
	uint8_t x55 = 5U;
	static uint32_t x56 = 342106697U;
	int32_t t13 = 8136;

    t13 = ((x53&x54)==(x55|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	volatile int32_t t14 = 10;

    t14 = ((x57&x58)==(x59|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = 7LL;
	volatile uint32_t x62 = 15505520U;
	static uint32_t x63 = 110507613U;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 52230873;

    t15 = ((x61&x62)==(x63|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int64_t x66 = 5LL;
	uint16_t x67 = 9U;
	uint64_t x68 = UINT64_MAX;
	static volatile int32_t t16 = -8836;

    t16 = ((x65&x66)==(x67|x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MIN;
	static int32_t x70 = -995152173;
	static uint8_t x71 = 12U;
	int32_t t17 = -20056;

    t17 = ((x69&x70)==(x71|x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int8_t x74 = 52;
	int16_t x75 = INT16_MAX;
	uint32_t x76 = 88428745U;
	static volatile int32_t t18 = -48681;

    t18 = ((x73&x74)==(x75|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 3U;
	uint64_t x78 = 61429447244LLU;
	static volatile uint32_t x79 = 1393921U;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 2;

    t19 = ((x77&x78)==(x79|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = -389;
	static uint16_t x83 = 28157U;
	volatile uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = 31319035;

    t20 = ((x81&x82)==(x83|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1852LL;
	int8_t x86 = 1;
	int8_t x87 = -1;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = 1062255509;

    t21 = ((x85&x86)==(x87|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x91 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = 1;

    t22 = ((x89&x90)==(x91|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 188280529000789LL;
	static int32_t x94 = -333462;
	int32_t x95 = INT32_MIN;
	static int32_t x96 = INT32_MAX;
	volatile int32_t t23 = 44;

    t23 = ((x93&x94)==(x95|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -57;
	int64_t x100 = 1LL;
	static volatile int32_t t24 = 11262512;

    t24 = ((x97&x98)==(x99|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x102 = -41259709;
	volatile int32_t x103 = 2;
	int64_t x104 = -1119LL;
	volatile int32_t t25 = 125165162;

    t25 = ((x101&x102)==(x103|x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 177316383976350200LLU;
	int32_t x106 = -6;
	int8_t x107 = 8;
	int32_t x108 = 37;
	volatile int32_t t26 = 253;

    t26 = ((x105&x106)==(x107|x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x109 = INT64_MAX;
	int8_t x110 = -9;
	static uint32_t x112 = 25U;
	volatile int32_t t27 = 287372;

    t27 = ((x109&x110)==(x111|x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = 3563851727233569LL;
	int8_t x114 = INT8_MIN;
	static uint32_t x115 = 463760639U;
	uint64_t x116 = UINT64_MAX;

    t28 = ((x113&x114)==(x115|x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 40U;
	int32_t x119 = -1;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -51721;

    t29 = ((x117&x118)==(x119|x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	uint64_t x123 = 87LLU;
	int64_t x124 = -1LL;
	volatile int32_t t30 = 10721;

    t30 = ((x121&x122)==(x123|x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MIN;
	volatile int16_t x127 = INT16_MAX;

    t31 = ((x125&x126)==(x127|x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	int16_t x130 = -1;
	uint8_t x131 = UINT8_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t32 = 5413370;

    t32 = ((x129&x130)==(x131|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = -95;
	int32_t x134 = 1904179;
	int32_t t33 = 135;

    t33 = ((x133&x134)==(x135|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x138 = INT64_MIN;
	uint16_t x139 = UINT16_MAX;
	volatile int32_t x140 = -1;
	volatile int32_t t34 = 602;

    t34 = ((x137&x138)==(x139|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 15LLU;
	int8_t x142 = INT8_MIN;
	volatile int32_t t35 = 512339;

    t35 = ((x141&x142)==(x143|x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x146 = INT32_MAX;
	static volatile int64_t x148 = INT64_MIN;
	static volatile int32_t t36 = 1;

    t36 = ((x145&x146)==(x147|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 150;
	int8_t x150 = -4;
	uint8_t x152 = 5U;

    t37 = ((x149&x150)==(x151|x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 9;
	int64_t x154 = INT64_MAX;
	uint16_t x156 = 0U;
	static volatile int32_t t38 = 3133310;

    t38 = ((x153&x154)==(x155|x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	static int16_t x159 = 710;
	int32_t t39 = -147308;

    t39 = ((x157&x158)==(x159|x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = 15403LLU;
	int64_t x163 = -25896136927LL;
	static volatile int32_t t40 = 36738;

    t40 = ((x161&x162)==(x163|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 785LLU;
	static int8_t x166 = INT8_MIN;
	volatile int32_t x167 = INT32_MAX;
	static int32_t x168 = INT32_MAX;

    t41 = ((x165&x166)==(x167|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x170 = 58;
	int64_t x172 = INT64_MIN;
	int32_t t42 = 3902;

    t42 = ((x169&x170)==(x171|x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	uint64_t x174 = 463LLU;
	uint64_t x175 = 6703187280662067LLU;

    t43 = ((x173&x174)==(x175|x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = UINT8_MAX;
	int8_t x178 = -47;
	static uint32_t x179 = 136192U;
	int8_t x180 = INT8_MIN;
	static int32_t t44 = -59033;

    t44 = ((x177&x178)==(x179|x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = INT8_MAX;
	volatile int16_t x183 = -1;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -1;

    t45 = ((x181&x182)==(x183|x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	int8_t x187 = INT8_MIN;
	int16_t x188 = -15;
	int32_t t46 = -100;

    t46 = ((x185&x186)==(x187|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = -48;
	int32_t x191 = INT32_MIN;
	volatile int32_t t47 = 0;

    t47 = ((x189&x190)==(x191|x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x193 = UINT32_MAX;
	uint16_t x194 = 15729U;
	int32_t t48 = -5;

    t48 = ((x193&x194)==(x195|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MAX;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -9;
	volatile int32_t t49 = 30;

    t49 = ((x197&x198)==(x199|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	static int64_t x203 = INT64_MIN;
	uint64_t x204 = 9LLU;

    t50 = ((x201&x202)==(x203|x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 70424431U;
	uint64_t x206 = UINT64_MAX;
	int8_t x207 = -1;
	int8_t x208 = -1;
	volatile int32_t t51 = 89156;

    t51 = ((x205&x206)==(x207|x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t52 = 16;

    t52 = ((x209&x210)==(x211|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x213 = INT64_MAX;
	int8_t x214 = -14;
	int32_t t53 = 3851;

    t53 = ((x213&x214)==(x215|x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = INT8_MIN;
	static volatile uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 0U;
	volatile int32_t t54 = 205538690;

    t54 = ((x217&x218)==(x219|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	static int32_t x222 = INT32_MIN;
	static int64_t x224 = INT64_MIN;

    t55 = ((x221&x222)==(x223|x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MAX;
	int32_t x227 = -12;
	uint16_t x228 = 20U;

    t56 = ((x225&x226)==(x227|x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	volatile int16_t x232 = -1;
	static volatile int32_t t57 = 7;

    t57 = ((x229&x230)==(x231|x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x233 = 13U;
	static uint16_t x234 = 207U;
	int32_t x235 = INT32_MAX;
	static int64_t x236 = INT64_MAX;
	volatile int32_t t58 = -10359267;

    t58 = ((x233&x234)==(x235|x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 5568337069761223LL;
	volatile uint8_t x238 = UINT8_MAX;
	int64_t x239 = INT64_MIN;
	static int8_t x240 = -1;
	int32_t t59 = 18157;

    t59 = ((x237&x238)==(x239|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x243 = 4688212LLU;
	int16_t x244 = -1;
	static volatile int32_t t60 = -1;

    t60 = ((x241&x242)==(x243|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 1;
	uint32_t x247 = 1111U;
	static int64_t x248 = INT64_MIN;
	static int32_t t61 = 17957;

    t61 = ((x245&x246)==(x247|x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 31601470061LL;
	int16_t x250 = 3242;
	int16_t x251 = 0;
	volatile int32_t x252 = 25975081;

    t62 = ((x249&x250)==(x251|x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = INT16_MAX;
	volatile int32_t t63 = -98129955;

    t63 = ((x253&x254)==(x255|x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x257 = UINT64_MAX;
	static uint16_t x259 = 87U;
	int32_t x260 = -7523595;

    t64 = ((x257&x258)==(x259|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = 18U;
	static int8_t x263 = 47;
	volatile int32_t t65 = 0;

    t65 = ((x261&x262)==(x263|x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = 21373;

    t66 = ((x265&x266)==(x267|x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	uint64_t x270 = 1839045635839645LLU;
	static int16_t x271 = INT16_MIN;
	int64_t x272 = -1LL;
	volatile int32_t t67 = -4112753;

    t67 = ((x269&x270)==(x271|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x273 = 475U;
	static int16_t x275 = -18;
	volatile uint64_t x276 = UINT64_MAX;
	static volatile int32_t t68 = 420261;

    t68 = ((x273&x274)==(x275|x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 624109912LL;
	uint32_t x278 = 26U;
	uint16_t x279 = 1U;
	volatile uint8_t x280 = 0U;
	int32_t t69 = -7;

    t69 = ((x277&x278)==(x279|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	int64_t x282 = INT64_MIN;

    t70 = ((x281&x282)==(x283|x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 6;
	volatile int8_t x286 = -1;
	int16_t x287 = -233;
	int64_t x288 = -34LL;

    t71 = ((x285&x286)==(x287|x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x289 = -16692352369336521LL;
	int16_t x290 = INT16_MIN;
	volatile int64_t x291 = INT64_MIN;
	int8_t x292 = 1;
	volatile int32_t t72 = -141;

    t72 = ((x289&x290)==(x291|x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x293 = 158149LLU;
	int8_t x294 = -1;
	volatile int8_t x295 = INT8_MAX;
	volatile int32_t x296 = 31164066;
	volatile int32_t t73 = 32004;

    t73 = ((x293&x294)==(x295|x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = 122;
	static uint16_t x298 = UINT16_MAX;
	static uint8_t x300 = 106U;
	static volatile int32_t t74 = -479073;

    t74 = ((x297&x298)==(x299|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x301 = 0U;
	static int16_t x302 = 1;
	int32_t x303 = -82075;
	int8_t x304 = INT8_MIN;

    t75 = ((x301&x302)==(x303|x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = 3;
	uint64_t x307 = 8945358221461242LLU;
	static int8_t x308 = INT8_MIN;

    t76 = ((x305&x306)==(x307|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = -1;
	int64_t x311 = -1LL;
	static int64_t x312 = INT64_MIN;
	static volatile int32_t t77 = 1057;

    t77 = ((x309&x310)==(x311|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = -143200;
	int64_t x314 = INT64_MAX;
	int64_t x315 = 61068753739841LL;
	int64_t x316 = INT64_MIN;
	volatile int32_t t78 = -116;

    t78 = ((x313&x314)==(x315|x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MIN;
	static int32_t x318 = -1;
	static int16_t x319 = -151;
	int32_t t79 = 13248;

    t79 = ((x317&x318)==(x319|x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = 1;
	int32_t x322 = 95044;
	int32_t x323 = 8811852;
	volatile int64_t x324 = -3692489LL;

    t80 = ((x321&x322)==(x323|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MAX;
	uint64_t x327 = 3755474211987513LLU;
	int8_t x328 = -1;

    t81 = ((x325&x326)==(x327|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 34U;
	int32_t x331 = INT32_MIN;
	volatile int32_t x332 = 8;
	volatile int32_t t82 = -640309346;

    t82 = ((x329&x330)==(x331|x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x334 = INT8_MIN;
	uint16_t x335 = 84U;
	volatile int8_t x336 = -10;
	volatile int32_t t83 = 186;

    t83 = ((x333&x334)==(x335|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 1U;
	int8_t x338 = 47;
	volatile int32_t x339 = -1;
	uint64_t x340 = 2220941774LLU;
	static int32_t t84 = 0;

    t84 = ((x337&x338)==(x339|x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MIN;
	int16_t x343 = -1;
	volatile uint64_t x344 = 778693165897723034LLU;
	int32_t t85 = -14;

    t85 = ((x341&x342)==(x343|x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 24867U;
	volatile int16_t x346 = -8;
	volatile int64_t x348 = -11713998486622LL;
	int32_t t86 = -954010779;

    t86 = ((x345&x346)==(x347|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	uint16_t x350 = 50U;
	int64_t x351 = INT64_MAX;
	int16_t x352 = -4089;
	int32_t t87 = 89;

    t87 = ((x349&x350)==(x351|x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	volatile int32_t t88 = 713714161;

    t88 = ((x353&x354)==(x355|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x358 = -1;
	int16_t x359 = 57;
	int64_t x360 = 1294LL;

    t89 = ((x357&x358)==(x359|x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 12U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t90 = -8637;

    t90 = ((x361&x362)==(x363|x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	int32_t x366 = -234192067;
	int32_t x367 = INT32_MAX;
	volatile int32_t t91 = -11507911;

    t91 = ((x365&x366)==(x367|x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 15LLU;
	int8_t x372 = -12;

    t92 = ((x369&x370)==(x371|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -1;
	uint8_t x374 = 13U;
	uint16_t x375 = UINT16_MAX;

    t93 = ((x373&x374)==(x375|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -2956772;
	volatile int64_t x380 = 267744265LL;
	volatile int32_t t94 = -99;

    t94 = ((x377&x378)==(x379|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x382 = -1;
	int32_t x383 = INT32_MIN;
	int64_t x384 = -1LL;
	volatile int32_t t95 = 33301;

    t95 = ((x381&x382)==(x383|x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 43480423868678LLU;
	uint64_t x386 = UINT64_MAX;
	static uint16_t x387 = 221U;
	volatile int32_t x388 = 97590;
	static int32_t t96 = 1;

    t96 = ((x385&x386)==(x387|x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1LL;
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = -1;
	int32_t t97 = -22;

    t97 = ((x389&x390)==(x391|x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x393 = INT64_MIN;
	static int16_t x394 = INT16_MIN;
	volatile int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -234399;

    t98 = ((x393&x394)==(x395|x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 2LLU;
	static uint8_t x398 = 112U;
	static volatile int16_t x399 = -1;
	int16_t x400 = INT16_MAX;

    t99 = ((x397&x398)==(x399|x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MAX;
	volatile int64_t x402 = INT64_MIN;
	int32_t x403 = 3314611;
	static int16_t x404 = INT16_MIN;
	int32_t t100 = 120680971;

    t100 = ((x401&x402)==(x403|x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MIN;
	uint16_t x408 = 16U;

    t101 = ((x405&x406)==(x407|x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	volatile int8_t x410 = INT8_MIN;
	uint64_t x411 = 598714LLU;
	volatile uint64_t x412 = 581660280328489LLU;
	static volatile int32_t t102 = 7;

    t102 = ((x409&x410)==(x411|x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	int64_t x414 = 0LL;
	static int16_t x416 = -132;
	volatile int32_t t103 = -1268;

    t103 = ((x413&x414)==(x415|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	static int32_t t104 = -1242;

    t104 = ((x417&x418)==(x419|x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 8191683390897249LLU;
	uint32_t x422 = UINT32_MAX;
	static int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MAX;
	static volatile int32_t t105 = 67152;

    t105 = ((x421&x422)==(x423|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MIN;
	int16_t x426 = -1;
	static int8_t x427 = INT8_MIN;
	static int64_t x428 = INT64_MIN;
	static volatile int32_t t106 = -309;

    t106 = ((x425&x426)==(x427|x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = INT32_MIN;
	volatile int64_t x430 = -2859805LL;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t107 = 4408573;

    t107 = ((x429&x430)==(x431|x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = 12941306789LL;
	uint32_t x434 = UINT32_MAX;
	volatile int64_t x436 = -1LL;
	static int32_t t108 = -48422928;

    t108 = ((x433&x434)==(x435|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 1224642900363209LL;
	volatile int32_t x438 = -1;
	int8_t x439 = -1;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t109 = -31713874;

    t109 = ((x437&x438)==(x439|x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = INT32_MIN;
	uint8_t x442 = 23U;
	int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MAX;
	int32_t t110 = 391;

    t110 = ((x441&x442)==(x443|x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = UINT32_MAX;
	int64_t x446 = -1133599159LL;
	int16_t x447 = -2256;
	int32_t t111 = -319252;

    t111 = ((x445&x446)==(x447|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 143812943591545713LLU;
	uint32_t x450 = 172019700U;
	volatile uint32_t x451 = UINT32_MAX;
	volatile int64_t x452 = INT64_MIN;
	volatile int32_t t112 = 6286;

    t112 = ((x449&x450)==(x451|x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -1040519274;
	int32_t x454 = INT32_MIN;
	volatile uint16_t x455 = 9U;
	static int32_t x456 = -1;
	volatile int32_t t113 = -15956;

    t113 = ((x453&x454)==(x455|x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1LL;
	uint8_t x458 = UINT8_MAX;
	volatile int16_t x460 = -1;
	volatile int32_t t114 = 0;

    t114 = ((x457&x458)==(x459|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MAX;
	volatile int64_t x462 = 7820414714244LL;
	static int32_t x463 = 1;
	uint32_t x464 = 139204356U;

    t115 = ((x461&x462)==(x463|x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 16U;
	int64_t x466 = 368LL;
	int16_t x467 = INT16_MIN;

    t116 = ((x465&x466)==(x467|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 0LLU;
	static int64_t x470 = -15643LL;
	static uint64_t x471 = UINT64_MAX;
	volatile uint16_t x472 = UINT16_MAX;
	int32_t t117 = 208;

    t117 = ((x469&x470)==(x471|x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = INT32_MAX;
	int8_t x474 = 0;
	int32_t x475 = 521763;
	int32_t x476 = INT32_MIN;
	int32_t t118 = 2;

    t118 = ((x473&x474)==(x475|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1956049;
	int32_t x478 = -1;
	int32_t x479 = 144105;
	static int16_t x480 = -165;
	static volatile int32_t t119 = 0;

    t119 = ((x477&x478)==(x479|x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 3749238945912610603LL;
	uint16_t x482 = UINT16_MAX;
	uint8_t x484 = 1U;
	volatile int32_t t120 = 1977;

    t120 = ((x481&x482)==(x483|x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int32_t x487 = 20685526;
	int32_t x488 = INT32_MIN;
	int32_t t121 = 3400;

    t121 = ((x485&x486)==(x487|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x490 = INT8_MIN;
	int64_t x491 = 7134LL;
	volatile int32_t t122 = 141603635;

    t122 = ((x489&x490)==(x491|x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 541970726184LL;
	int32_t x494 = INT32_MIN;
	static volatile int16_t x495 = -1;
	int32_t x496 = INT32_MIN;
	static volatile int32_t t123 = -714129322;

    t123 = ((x493&x494)==(x495|x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	static int8_t x498 = INT8_MIN;
	volatile int32_t t124 = 2656;

    t124 = ((x497&x498)==(x499|x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = 1774660716LL;
	static volatile uint16_t x503 = 9U;
	uint16_t x504 = 1419U;
	int32_t t125 = 945826461;

    t125 = ((x501&x502)==(x503|x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	static int8_t x507 = 1;
	int32_t x508 = INT32_MIN;

    t126 = ((x505&x506)==(x507|x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;

    t127 = ((x509&x510)==(x511|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	static uint16_t x514 = 1794U;
	static volatile int32_t t128 = 755;

    t128 = ((x513&x514)==(x515|x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x518 = INT16_MIN;
	int16_t x519 = INT16_MIN;
	int64_t x520 = -1010LL;
	static volatile int32_t t129 = 490;

    t129 = ((x517&x518)==(x519|x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	uint64_t x523 = 3163805328530LLU;
	uint8_t x524 = 1U;
	int32_t t130 = -203582;

    t130 = ((x521&x522)==(x523|x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 428553LLU;
	volatile int8_t x527 = 44;
	int64_t x528 = 1449372324118147909LL;
	static volatile int32_t t131 = -1;

    t131 = ((x525&x526)==(x527|x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = 16470U;
	int16_t x531 = -9;
	int8_t x532 = -1;
	volatile int32_t t132 = 52098147;

    t132 = ((x529&x530)==(x531|x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = INT32_MIN;
	volatile uint8_t x534 = 2U;
	static int32_t x536 = -34165;
	int32_t t133 = -16203;

    t133 = ((x533&x534)==(x535|x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 106U;
	volatile int8_t x538 = INT8_MIN;
	volatile int64_t x539 = INT64_MIN;
	uint16_t x540 = UINT16_MAX;
	static volatile int32_t t134 = 1128373;

    t134 = ((x537&x538)==(x539|x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 230713561U;
	int64_t x542 = INT64_MIN;
	int32_t x543 = INT32_MIN;
	volatile int32_t t135 = -6;

    t135 = ((x541&x542)==(x543|x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = UINT32_MAX;
	static int64_t x546 = -1LL;
	uint32_t x547 = 7U;
	int32_t x548 = -357;
	static int32_t t136 = -160584;

    t136 = ((x545&x546)==(x547|x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 119705508512814LLU;
	int32_t x550 = -163;
	volatile uint8_t x551 = 10U;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t137 = -4330;

    t137 = ((x549&x550)==(x551|x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -52;
	static uint32_t x555 = 522538146U;

    t138 = ((x553&x554)==(x555|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = -1;
	int16_t x558 = -254;
	uint16_t x559 = UINT16_MAX;
	uint16_t x560 = 31U;
	volatile int32_t t139 = -401162411;

    t139 = ((x557&x558)==(x559|x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = INT64_MAX;
	uint8_t x562 = 3U;
	int64_t x563 = 1LL;
	uint16_t x564 = 2U;
	int32_t t140 = 876102020;

    t140 = ((x561&x562)==(x563|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	static int32_t x566 = -22;
	uint64_t x567 = 394496206LLU;
	int16_t x568 = INT16_MIN;

    t141 = ((x565&x566)==(x567|x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	uint8_t x570 = 3U;
	int16_t x571 = 168;
	static int32_t x572 = -1;
	volatile int32_t t142 = -490781;

    t142 = ((x569&x570)==(x571|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	static volatile uint16_t x574 = 38U;
	int32_t t143 = -3;

    t143 = ((x573&x574)==(x575|x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 58U;
	volatile int16_t x578 = INT16_MIN;
	volatile int64_t x579 = INT64_MIN;
	int32_t x580 = INT32_MIN;
	int32_t t144 = 131043423;

    t144 = ((x577&x578)==(x579|x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x581 = 6;
	static volatile uint16_t x582 = UINT16_MAX;
	int64_t x583 = 897612235LL;
	int64_t x584 = INT64_MIN;

    t145 = ((x581&x582)==(x583|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = -1;
	int8_t x586 = 60;
	int32_t x587 = INT32_MAX;
	uint64_t x588 = UINT64_MAX;
	int32_t t146 = -5002;

    t146 = ((x585&x586)==(x587|x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 498LLU;
	volatile int16_t x590 = -21;
	static uint8_t x592 = UINT8_MAX;
	int32_t t147 = 21;

    t147 = ((x589&x590)==(x591|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MIN;
	uint8_t x595 = UINT8_MAX;

    t148 = ((x593&x594)==(x595|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	static int32_t x598 = INT32_MIN;
	static uint16_t x600 = UINT16_MAX;
	int32_t t149 = -741389;

    t149 = ((x597&x598)==(x599|x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = 28LL;
	volatile uint16_t x602 = 250U;
	int16_t x603 = -1;
	uint64_t x604 = 3484551933259171995LLU;
	volatile int32_t t150 = 1916110;

    t150 = ((x601&x602)==(x603|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 4;
	volatile int32_t x606 = 4;
	uint16_t x607 = 9786U;
	volatile int64_t x608 = 29899745577803LL;
	int32_t t151 = -664072;

    t151 = ((x605&x606)==(x607|x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x609 = INT8_MIN;
	static volatile int32_t x612 = INT32_MAX;
	volatile int32_t t152 = -34327884;

    t152 = ((x609&x610)==(x611|x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 105U;
	static int16_t x614 = -1;
	static int32_t x615 = INT32_MIN;
	int16_t x616 = -1;
	int32_t t153 = -46224;

    t153 = ((x613&x614)==(x615|x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	static int64_t x618 = -91LL;
	int8_t x619 = INT8_MIN;
	volatile int32_t t154 = 733;

    t154 = ((x617&x618)==(x619|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = 400;
	int64_t x622 = INT64_MAX;
	volatile int64_t x624 = -120LL;
	int32_t t155 = -66;

    t155 = ((x621&x622)==(x623|x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = INT32_MAX;
	int64_t x626 = -1LL;
	int16_t x627 = INT16_MIN;
	volatile uint16_t x628 = 13U;
	volatile int32_t t156 = 1314366;

    t156 = ((x625&x626)==(x627|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x630 = INT32_MIN;
	volatile int64_t x631 = 1LL;
	volatile int16_t x632 = 18;

    t157 = ((x629&x630)==(x631|x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	static uint32_t x634 = UINT32_MAX;
	static int8_t x635 = INT8_MIN;
	volatile int8_t x636 = INT8_MIN;
	volatile int32_t t158 = 25126928;

    t158 = ((x633&x634)==(x635|x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -1;
	int8_t x640 = -8;
	static volatile int32_t t159 = -33927;

    t159 = ((x637&x638)==(x639|x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -96528;
	int32_t x642 = 142664;
	int16_t x643 = -1;
	static int64_t x644 = INT64_MIN;
	volatile int32_t t160 = 148766;

    t160 = ((x641&x642)==(x643|x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = 1981090733U;
	uint32_t x646 = 9269U;
	volatile uint32_t x647 = 5U;
	volatile int32_t t161 = -723185684;

    t161 = ((x645&x646)==(x647|x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = 15;
	int8_t x650 = 2;
	int8_t x652 = INT8_MIN;

    t162 = ((x649&x650)==(x651|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 509U;
	volatile int8_t x654 = -1;
	int64_t x655 = INT64_MIN;
	int8_t x656 = INT8_MIN;
	int32_t t163 = 433;

    t163 = ((x653&x654)==(x655|x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x658 = -11;
	int16_t x659 = -1;
	uint64_t x660 = 52533901798240825LLU;
	static volatile int32_t t164 = 760091;

    t164 = ((x657&x658)==(x659|x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x662 = UINT32_MAX;
	static int16_t x663 = INT16_MAX;
	int32_t t165 = 261225;

    t165 = ((x661&x662)==(x663|x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	int8_t x666 = -5;
	uint64_t x667 = 1420628580591362275LLU;
	static uint16_t x668 = 5U;
	int32_t t166 = -1;

    t166 = ((x665&x666)==(x667|x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -3;
	int64_t x670 = INT64_MAX;
	int32_t x672 = INT32_MIN;
	volatile int32_t t167 = 648;

    t167 = ((x669&x670)==(x671|x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	uint8_t x674 = UINT8_MAX;

    t168 = ((x673&x674)==(x675|x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = -1;
	static uint64_t x680 = 15744209602966366LLU;

    t169 = ((x677&x678)==(x679|x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	volatile uint8_t x682 = 1U;
	int16_t x683 = 6581;
	uint32_t x684 = UINT32_MAX;
	static volatile int32_t t170 = 1048639309;

    t170 = ((x681&x682)==(x683|x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x685 = 2439054100152741999LLU;
	static int64_t x686 = -1LL;
	int32_t x687 = 156097;
	uint32_t x688 = 3U;
	int32_t t171 = -59215;

    t171 = ((x685&x686)==(x687|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = INT8_MAX;
	static volatile int16_t x692 = -5;
	static int32_t t172 = 383;

    t172 = ((x689&x690)==(x691|x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	static uint8_t x694 = 1U;
	int16_t x695 = INT16_MAX;
	volatile int32_t x696 = -583;
	int32_t t173 = 839308;

    t173 = ((x693&x694)==(x695|x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -2694;
	uint32_t x698 = 23344013U;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t t174 = -37122;

    t174 = ((x697&x698)==(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	static uint64_t x702 = UINT64_MAX;
	int8_t x703 = -13;
	volatile int32_t x704 = -48910324;

    t175 = ((x701&x702)==(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x706 = INT64_MIN;
	int8_t x707 = INT8_MAX;
	uint8_t x708 = UINT8_MAX;
	int32_t t176 = 23709836;

    t176 = ((x705&x706)==(x707|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	volatile int64_t x710 = INT64_MIN;
	int64_t x711 = INT64_MIN;
	volatile uint32_t x712 = 7454U;
	volatile int32_t t177 = 59;

    t177 = ((x709&x710)==(x711|x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x713 = 564U;
	volatile int8_t x714 = INT8_MAX;
	static uint8_t x715 = 112U;
	int32_t x716 = INT32_MAX;
	int32_t t178 = 221079884;

    t178 = ((x713&x714)==(x715|x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	volatile uint32_t x718 = UINT32_MAX;
	uint8_t x719 = 2U;
	int16_t x720 = INT16_MIN;
	static int32_t t179 = -1002890777;

    t179 = ((x717&x718)==(x719|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = -1;
	uint8_t x723 = 116U;
	int32_t t180 = 1;

    t180 = ((x721&x722)==(x723|x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x726 = 40832637LLU;
	int64_t x728 = INT64_MIN;
	volatile int32_t t181 = -3861486;

    t181 = ((x725&x726)==(x727|x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = -1;
	static int64_t x730 = -13LL;
	int64_t x731 = 7355170LL;
	volatile int8_t x732 = -1;
	volatile int32_t t182 = -228609049;

    t182 = ((x729&x730)==(x731|x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 127U;
	int16_t x734 = 6;
	uint8_t x735 = UINT8_MAX;
	volatile int32_t x736 = 111734043;
	volatile int32_t t183 = -2349;

    t183 = ((x733&x734)==(x735|x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	int8_t x738 = INT8_MAX;
	uint32_t x739 = UINT32_MAX;
	uint8_t x740 = UINT8_MAX;
	int32_t t184 = 223;

    t184 = ((x737&x738)==(x739|x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = 2649LLU;
	int16_t x742 = -1;
	int8_t x743 = -1;
	int16_t x744 = INT16_MIN;
	static int32_t t185 = -331;

    t185 = ((x741&x742)==(x743|x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = 5;
	int32_t x748 = -1;
	volatile int32_t t186 = 571922609;

    t186 = ((x745&x746)==(x747|x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = INT32_MAX;
	uint16_t x750 = 66U;
	static uint32_t x751 = 685U;
	static volatile int16_t x752 = INT16_MIN;
	int32_t t187 = -2795;

    t187 = ((x749&x750)==(x751|x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	static volatile int64_t x754 = INT64_MIN;
	volatile int64_t x755 = -1LL;
	volatile int8_t x756 = INT8_MAX;
	int32_t t188 = -255;

    t188 = ((x753&x754)==(x755|x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x757 = 803318U;
	static int16_t x758 = -1;
	uint8_t x759 = 10U;
	int8_t x760 = INT8_MIN;
	int32_t t189 = -628548255;

    t189 = ((x757&x758)==(x759|x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = INT16_MAX;
	int32_t x762 = -37;
	int32_t x763 = -3;
	int32_t x764 = INT32_MIN;
	int32_t t190 = 7;

    t190 = ((x761&x762)==(x763|x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MIN;
	static int32_t x768 = -22575;
	int32_t t191 = 120950869;

    t191 = ((x765&x766)==(x767|x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 117U;
	int64_t x771 = INT64_MIN;
	int8_t x772 = INT8_MIN;
	volatile int32_t t192 = 17370079;

    t192 = ((x769&x770)==(x771|x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MIN;
	volatile int32_t x774 = -40917;
	int16_t x775 = -1;
	static int64_t x776 = INT64_MAX;
	static volatile int32_t t193 = 29;

    t193 = ((x773&x774)==(x775|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = -1LL;
	int64_t x778 = -386762633LL;
	volatile uint8_t x779 = 1U;
	static int8_t x780 = 4;

    t194 = ((x777&x778)==(x779|x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 75064184179LLU;
	volatile int64_t x783 = -484385810000310563LL;
	static uint64_t x784 = UINT64_MAX;

    t195 = ((x781&x782)==(x783|x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = INT8_MIN;
	int16_t x786 = INT16_MAX;
	int16_t x787 = INT16_MIN;
	static volatile int64_t x788 = INT64_MIN;

    t196 = ((x785&x786)==(x787|x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x789 = UINT16_MAX;
	uint8_t x790 = UINT8_MAX;
	int32_t x791 = INT32_MIN;
	int16_t x792 = INT16_MAX;
	int32_t t197 = -258019;

    t197 = ((x789&x790)==(x791|x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	static int16_t x795 = INT16_MIN;
	uint8_t x796 = 2U;
	volatile int32_t t198 = 3;

    t198 = ((x793&x794)==(x795|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 0;
	static int16_t x798 = INT16_MIN;
	int32_t x799 = -1;
	int32_t t199 = 56693145;

    t199 = ((x797&x798)==(x799|x800));

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

