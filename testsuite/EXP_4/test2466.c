
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

int32_t x8 = INT32_MIN;
int64_t x10 = -507587616556760LL;
static uint64_t x22 = 462885LLU;
static int8_t x23 = INT8_MIN;
int8_t x33 = 1;
uint64_t x34 = 2839771473LLU;
int16_t x37 = INT16_MIN;
int32_t x38 = 1046475;
int64_t x41 = -1LL;
int64_t t9 = 59983958084LL;
uint16_t x50 = UINT16_MAX;
int8_t x53 = -9;
static int32_t x58 = -283400;
static volatile int16_t x65 = INT16_MAX;
uint16_t x69 = UINT16_MAX;
static int64_t x72 = -1LL;
volatile uint64_t x78 = 305128LLU;
int64_t t18 = 445918220LL;
static uint16_t x92 = UINT16_MAX;
int32_t t21 = 12;
int64_t x103 = -1LL;
int8_t x107 = INT8_MIN;
volatile int32_t t26 = 7984298;
int64_t x116 = INT64_MIN;
uint64_t x125 = 12157LLU;
volatile uint64_t t29 = 6437855336126LLU;
int8_t x130 = INT8_MIN;
volatile uint8_t x131 = 4U;
volatile int16_t x138 = INT16_MIN;
uint8_t x140 = UINT8_MAX;
int8_t x148 = 4;
static uint64_t x150 = 4267420LLU;
int32_t t37 = 22829234;
int32_t t38 = 0;
uint16_t x167 = 2884U;
uint16_t x168 = 240U;
int8_t x170 = INT8_MIN;
int32_t x173 = INT32_MIN;
uint8_t x183 = UINT8_MAX;
static int8_t x185 = INT8_MAX;
uint64_t x192 = 38419LLU;
static int32_t x194 = INT32_MIN;
volatile int32_t t46 = 14758;
int32_t x200 = INT32_MIN;
int32_t x203 = 260604;
int32_t t49 = 3236432;
uint16_t x213 = 7385U;
int64_t x216 = -48LL;
int16_t x224 = 0;
int32_t t52 = INT32_MIN;
volatile int32_t t53 = -10;
uint16_t x229 = UINT16_MAX;
volatile int32_t x230 = -1;
int8_t x231 = INT8_MAX;
int32_t x237 = INT32_MAX;
uint64_t x243 = 22220LLU;
uint8_t x255 = 1U;
int32_t x256 = INT32_MIN;
int32_t x261 = -1;
volatile uint64_t t63 = 239900472919LLU;
int8_t x271 = INT8_MIN;
int64_t x277 = -200504224676682344LL;
uint32_t x279 = UINT32_MAX;
int64_t t66 = 59976229LL;
uint16_t x294 = 2U;
int8_t x295 = INT8_MIN;
volatile int32_t t71 = 12331851;
int64_t x301 = -84315922386347130LL;
int8_t x306 = -20;
int16_t x307 = 7326;
uint64_t x308 = UINT64_MAX;
volatile int32_t t73 = 628;
int32_t x311 = INT32_MIN;
uint8_t x314 = UINT8_MAX;
int16_t x315 = -1;
uint16_t x316 = 685U;
int64_t x327 = INT64_MIN;
static int32_t t77 = -17275;
int8_t x331 = -1;
uint16_t x332 = 18U;
int16_t x337 = 1;
int64_t x340 = 261918554719883745LL;
int32_t t81 = -1;
uint16_t x348 = UINT16_MAX;
int8_t x355 = -1;
int64_t x356 = INT64_MAX;
volatile int32_t t84 = -288;
static int16_t x358 = INT16_MIN;
static int32_t t85 = -6295;
int64_t x368 = INT64_MAX;
volatile int32_t t87 = INT32_MIN;
int64_t x380 = INT64_MAX;
int16_t x381 = INT16_MAX;
int16_t x392 = INT16_MIN;
int32_t t92 = 431;
uint32_t x396 = UINT32_MAX;
volatile int64_t x399 = INT64_MAX;
uint32_t x403 = 18941789U;
int32_t x404 = -1;
int16_t x411 = 1;
static volatile int32_t t97 = 311122;
int32_t t98 = -10393;
static int64_t x421 = INT64_MAX;
volatile uint16_t x429 = 3U;
uint32_t x434 = 790361U;
int32_t x435 = INT32_MAX;
uint32_t x438 = 5818U;
int32_t x442 = -1;
uint64_t x449 = 50616397644558LLU;
int8_t x451 = -1;
static int32_t x455 = -61010134;
int64_t x456 = INT64_MIN;
static uint32_t x459 = 466U;
int16_t x463 = INT16_MAX;
uint8_t x466 = 65U;
volatile int32_t t111 = 1467;
static int64_t t112 = 63898500822LL;
volatile int32_t t113 = -1;
int32_t x483 = INT32_MAX;
int8_t x484 = -1;
volatile int64_t t115 = 417335317878LL;
int32_t x487 = INT32_MIN;
volatile int32_t t117 = -704223;
volatile uint32_t x501 = UINT32_MAX;
int32_t x502 = 372;
uint32_t x507 = UINT32_MAX;
static uint8_t x510 = UINT8_MAX;
volatile int32_t t125 = -982;
volatile int8_t x526 = INT8_MIN;
int8_t x529 = -1;
volatile int32_t x530 = -3958535;
uint32_t x533 = 1192086U;
int8_t x544 = -1;
int32_t x549 = 785420199;
int64_t x551 = INT64_MIN;
int16_t x563 = -100;
int8_t x566 = INT8_MIN;
uint16_t x567 = UINT16_MAX;
volatile int64_t t136 = INT64_MIN;
static uint32_t x574 = UINT32_MAX;
volatile int32_t t139 = 9439;
int32_t x587 = -1;
uint8_t x588 = 26U;
int32_t x590 = -1;
static int64_t x591 = INT64_MIN;
uint64_t x595 = UINT64_MAX;
int8_t x602 = INT8_MAX;
int64_t x608 = INT64_MAX;
uint32_t x610 = UINT32_MAX;
uint32_t x613 = 15003U;
int64_t x614 = INT64_MIN;
int8_t x615 = INT8_MIN;
static volatile int32_t x616 = INT32_MIN;
static uint32_t x628 = UINT32_MAX;
int32_t x630 = -1;
int32_t x632 = -1;
uint8_t x637 = 77U;
int32_t x647 = INT32_MAX;
uint64_t x653 = 316LLU;
int8_t x658 = -1;
int64_t x666 = INT64_MIN;
static volatile uint64_t x669 = UINT64_MAX;
uint64_t x679 = 4091LLU;
volatile int32_t t165 = -4674310;
int16_t x686 = -1;
static int32_t t167 = INT32_MAX;
uint8_t x693 = 30U;
volatile uint64_t x694 = UINT64_MAX;
volatile int32_t t169 = -4;
static int32_t x703 = INT32_MIN;
uint64_t x704 = UINT64_MAX;
volatile int32_t t170 = -47323;
uint32_t x710 = 9673942U;
volatile uint64_t x711 = UINT64_MAX;
uint64_t t173 = 806768631280LLU;
int16_t x717 = 24;
int32_t x720 = INT32_MIN;
int8_t x721 = -1;
volatile int32_t t176 = 79727765;
int32_t x742 = 0;
volatile int8_t x743 = INT8_MAX;
static int32_t x747 = INT32_MAX;
static uint32_t t180 = 28U;
volatile uint16_t x765 = 1U;
int8_t x769 = -59;
static int16_t x771 = -197;
volatile int32_t t186 = -231726;
int8_t x773 = -10;
int16_t x775 = INT16_MIN;
volatile int32_t t187 = 936;
static uint64_t x777 = 1743607LLU;
uint32_t x779 = 1697249U;
static volatile int16_t x784 = INT16_MIN;
int8_t x792 = INT8_MAX;
volatile uint32_t x793 = UINT32_MAX;
volatile uint8_t x795 = UINT8_MAX;
volatile uint16_t x798 = 2U;
uint32_t x812 = UINT32_MAX;
uint32_t x819 = UINT32_MAX;


void f0(void) {
    	uint64_t x1 = 7301LLU;
	static int16_t x2 = -1;
	volatile int8_t x3 = -8;
	int32_t x4 = INT32_MAX;
	static uint64_t t0 = 4583098877948136LLU;

    t0 = (x1-(x2>(x3|x4)));

    if (t0 != 7301LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	int8_t x6 = 0;
	uint64_t x7 = UINT64_MAX;
	int32_t t1 = -46446;

    t1 = (x5-(x6>(x7|x8)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 3340U;
	volatile uint64_t x11 = 0LLU;
	int16_t x12 = INT16_MAX;
	uint32_t t2 = 187U;

    t2 = (x9-(x10>(x11|x12)));

    if (t2 != 3339U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = UINT16_MAX;
	int32_t x18 = -1293896;
	static uint64_t x19 = UINT64_MAX;
	uint8_t x20 = 3U;
	volatile int32_t t3 = -3840;

    t3 = (x17-(x18>(x19|x20)));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x21 = 2049178520975362849LLU;
	int32_t x24 = INT32_MIN;
	uint64_t t4 = 50869LLU;

    t4 = (x21-(x22>(x23|x24)));

    if (t4 != 2049178520975362849LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 0;
	volatile int16_t x26 = -32;
	int8_t x27 = -1;
	static uint16_t x28 = 3597U;
	int32_t t5 = 0;

    t5 = (x25-(x26>(x27|x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x29 = UINT64_MAX;
	int16_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MIN;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x29-(x30>(x31|x32)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MIN;
	volatile int32_t t7 = -36734388;

    t7 = (x33-(x34>(x35|x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x39 = UINT8_MAX;
	int16_t x40 = -21;
	int32_t t8 = -1542;

    t8 = (x37-(x38>(x39|x40)));

    if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x42 = 26321582LL;
	int8_t x43 = 28;
	uint64_t x44 = 3612991LLU;

    t9 = (x41-(x42>(x43|x44)));

    if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = 2100;
	uint64_t x46 = 67120188LLU;
	int64_t x47 = 42305968LL;
	int16_t x48 = INT16_MAX;
	volatile int32_t t10 = -1;

    t10 = (x45-(x46>(x47|x48)));

    if (t10 != 2099) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x49 = UINT32_MAX;
	int8_t x51 = 1;
	int8_t x52 = -57;
	uint32_t t11 = 45839031U;

    t11 = (x49-(x50>(x51|x52)));

    if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x54 = INT16_MIN;
	int16_t x55 = -1;
	uint16_t x56 = UINT16_MAX;
	static volatile int32_t t12 = 1974;

    t12 = (x53-(x54>(x55|x56)));

    if (t12 != -9) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x57 = 21809481137708LLU;
	static volatile int32_t x59 = -1;
	int16_t x60 = -1;
	uint64_t t13 = 92056093LLU;

    t13 = (x57-(x58>(x59|x60)));

    if (t13 != 21809481137708LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MIN;
	static uint64_t x63 = 2489501294591462140LLU;
	static volatile int8_t x64 = INT8_MIN;
	int64_t t14 = INT64_MIN;

    t14 = (x61-(x62>(x63|x64)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x66 = 2U;
	static int32_t x67 = -1;
	volatile uint64_t x68 = 16027595771LLU;
	int32_t t15 = -303;

    t15 = (x65-(x66>(x67|x68)));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x70 = INT16_MIN;
	int16_t x71 = -17;
	int32_t t16 = 295;

    t16 = (x69-(x70>(x71|x72)));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 75U;
	volatile int16_t x74 = -12;
	volatile int32_t x75 = -1;
	uint32_t x76 = 13389U;
	volatile int32_t t17 = -24;

    t17 = (x73-(x74>(x75|x76)));

    if (t17 != 75) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -1LL;
	volatile int64_t x79 = INT64_MIN;
	static uint8_t x80 = 27U;

    t18 = (x77-(x78>(x79|x80)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x81 = INT8_MIN;
	uint16_t x82 = 3172U;
	int8_t x83 = -1;
	int8_t x84 = -1;
	static volatile int32_t t19 = -1;

    t19 = (x81-(x82>(x83|x84)));

    if (t19 != -129) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x85 = 782;
	int16_t x86 = 1;
	int8_t x87 = 35;
	uint64_t x88 = 94581755LLU;
	static int32_t t20 = -27257;

    t20 = (x85-(x86>(x87|x88)));

    if (t20 != 782) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = INT8_MIN;
	uint8_t x90 = 15U;
	uint64_t x91 = 7974923LLU;

    t21 = (x89-(x90>(x91|x92)));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x93 = INT8_MIN;
	int16_t x94 = 2686;
	uint8_t x95 = UINT8_MAX;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t22 = 0;

    t22 = (x93-(x94>(x95|x96)));

    if (t22 != -129) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MAX;
	int8_t x98 = -9;
	int8_t x99 = 0;
	int64_t x100 = INT64_MAX;
	volatile int32_t t23 = -3;

    t23 = (x97-(x98>(x99|x100)));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 9U;
	static volatile uint32_t x102 = 0U;
	static uint16_t x104 = UINT16_MAX;
	volatile int32_t t24 = 138985882;

    t24 = (x101-(x102>(x103|x104)));

    if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x105 = 1552U;
	uint32_t x106 = UINT32_MAX;
	volatile int64_t x108 = INT64_MAX;
	static int32_t t25 = -190231;

    t25 = (x105-(x106>(x107|x108)));

    if (t25 != 1551) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MAX;
	static volatile uint32_t x110 = 7864U;
	int64_t x111 = 38446754LL;
	static uint16_t x112 = UINT16_MAX;

    t26 = (x109-(x110>(x111|x112)));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x113 = 89U;
	uint16_t x114 = 1520U;
	uint8_t x115 = 61U;
	static int32_t t27 = -3853479;

    t27 = (x113-(x114>(x115|x116)));

    if (t27 != 88) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = 1835934444LLU;
	uint16_t x122 = 172U;
	static int64_t x123 = INT64_MIN;
	volatile int64_t x124 = INT64_MAX;
	volatile uint64_t t28 = 309308LLU;

    t28 = (x121-(x122>(x123|x124)));

    if (t28 != 1835934443LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	static uint64_t x128 = UINT64_MAX;

    t29 = (x125-(x126>(x127|x128)));

    if (t29 != 12157LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x129 = 212570565LLU;
	static int8_t x132 = 0;
	uint64_t t30 = 2260495782541873836LLU;

    t30 = (x129-(x130>(x131|x132)));

    if (t30 != 212570565LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MAX;
	volatile int32_t x134 = -1;
	static uint64_t x135 = 1912278983073061LLU;
	uint16_t x136 = 93U;
	int64_t t31 = 524693035584LL;

    t31 = (x133-(x134>(x135|x136)));

    if (t31 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = -1;
	uint8_t x139 = UINT8_MAX;
	static volatile int32_t t32 = 8763480;

    t32 = (x137-(x138>(x139|x140)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	int8_t x142 = -1;
	int32_t x143 = -522;
	uint8_t x144 = UINT8_MAX;
	int32_t t33 = -1196782;

    t33 = (x141-(x142>(x143|x144)));

    if (t33 != -32769) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = UINT64_MAX;
	static int16_t x146 = -1;
	static int8_t x147 = 1;
	static uint64_t t34 = UINT64_MAX;

    t34 = (x145-(x146>(x147|x148)));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = 10;
	uint64_t x151 = 4367472419767LLU;
	static int32_t x152 = 664;
	static int32_t t35 = -124400459;

    t35 = (x149-(x150>(x151|x152)));

    if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = 5;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = INT64_MIN;
	int8_t x156 = -1;
	int32_t t36 = 447528001;

    t36 = (x153-(x154>(x155|x156)));

    if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x157 = -1;
	uint64_t x158 = 10768428527504460LLU;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 3U;

    t37 = (x157-(x158>(x159|x160)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x161 = 575U;
	int64_t x162 = INT64_MIN;
	int64_t x163 = -18202789LL;
	uint64_t x164 = 357708LLU;

    t38 = (x161-(x162>(x163|x164)));

    if (t38 != 575) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = 15615703;
	volatile uint32_t x166 = 5U;
	int32_t t39 = -115684;

    t39 = (x165-(x166>(x167|x168)));

    if (t39 != 15615703) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x169 = 227;
	int16_t x171 = INT16_MIN;
	static uint16_t x172 = UINT16_MAX;
	int32_t t40 = -8063540;

    t40 = (x169-(x170>(x171|x172)));

    if (t40 != 227) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x174 = INT64_MIN;
	int64_t x175 = -1LL;
	int64_t x176 = INT64_MAX;
	volatile int32_t t41 = INT32_MIN;

    t41 = (x173-(x174>(x175|x176)));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = -1;
	int16_t x178 = INT16_MAX;
	static uint8_t x179 = 8U;
	uint16_t x180 = 8057U;
	int32_t t42 = -10;

    t42 = (x177-(x178>(x179|x180)));

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = INT32_MIN;
	static int32_t x182 = INT32_MIN;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

    t43 = (x181-(x182>(x183|x184)));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x186 = INT16_MAX;
	int16_t x187 = 7;
	uint64_t x188 = 89523665383LLU;
	int32_t t44 = 372534;

    t44 = (x185-(x186>(x187|x188)));

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = 4;
	int8_t x191 = INT8_MAX;
	volatile int32_t t45 = -1;

    t45 = (x189-(x190>(x191|x192)));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = -1;
	static uint16_t x195 = 12U;
	volatile int64_t x196 = INT64_MAX;

    t46 = (x193-(x194>(x195|x196)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x197 = -1;
	int16_t x198 = -1;
	int64_t x199 = INT64_MIN;
	int32_t t47 = 36011014;

    t47 = (x197-(x198>(x199|x200)));

    if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x201 = 102LL;
	int64_t x202 = INT64_MAX;
	uint32_t x204 = UINT32_MAX;
	int64_t t48 = 63LL;

    t48 = (x201-(x202>(x203|x204)));

    if (t48 != 101LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x205 = -1;
	int64_t x206 = INT64_MAX;
	uint8_t x207 = 0U;
	uint8_t x208 = 0U;

    t49 = (x205-(x206>(x207|x208)));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = 1762U;
	int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	volatile int16_t x212 = INT16_MAX;
	int32_t t50 = 315723;

    t50 = (x209-(x210>(x211|x212)));

    if (t50 != 1762) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x214 = 7U;
	int64_t x215 = INT64_MIN;
	int32_t t51 = -1463514;

    t51 = (x213-(x214>(x215|x216)));

    if (t51 != 7384) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = INT32_MIN;
	static uint64_t x222 = 1455680LLU;
	uint64_t x223 = 7919710LLU;

    t52 = (x221-(x222>(x223|x224)));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = 401;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;

    t53 = (x225-(x226>(x227|x228)));

    if (t53 != 400) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x232 = -49030LL;
	int32_t t54 = 503368027;

    t54 = (x229-(x230>(x231|x232)));

    if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x233 = INT8_MAX;
	static volatile int64_t x234 = -9780849084356LL;
	int8_t x235 = -1;
	int8_t x236 = 31;
	int32_t t55 = -21383;

    t55 = (x233-(x234>(x235|x236)));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x238 = -726451389259LL;
	int64_t x239 = 1726950507LL;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t56 = INT32_MAX;

    t56 = (x237-(x238>(x239|x240)));

    if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = -1;
	uint8_t x242 = 3U;
	volatile int64_t x244 = 3280217LL;
	volatile int32_t t57 = -1510;

    t57 = (x241-(x242>(x243|x244)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = -11;
	int16_t x246 = -322;
	int64_t x247 = 257709LL;
	int32_t x248 = INT32_MIN;
	int32_t t58 = 78296605;

    t58 = (x245-(x246>(x247|x248)));

    if (t58 != -12) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x249 = 8430728036952LLU;
	int64_t x250 = INT64_MIN;
	volatile uint64_t x251 = UINT64_MAX;
	uint16_t x252 = 4258U;
	uint64_t t59 = 323259537303620542LLU;

    t59 = (x249-(x250>(x251|x252)));

    if (t59 != 8430728036952LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = INT16_MIN;
	int16_t x254 = 3;
	int32_t t60 = -3;

    t60 = (x253-(x254>(x255|x256)));

    if (t60 != -32769) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x257 = UINT16_MAX;
	int32_t x258 = -38;
	int32_t x259 = INT32_MAX;
	int16_t x260 = -1;
	volatile int32_t t61 = 160678051;

    t61 = (x257-(x258>(x259|x260)));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x262 = 385;
	int16_t x263 = INT16_MIN;
	uint64_t x264 = 234806329LLU;
	int32_t t62 = 13377085;

    t62 = (x261-(x262>(x263|x264)));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x265 = 4725567626003LLU;
	static int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	static int16_t x268 = -62;

    t63 = (x265-(x266>(x267|x268)));

    if (t63 != 4725567626003LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x269 = 48LL;
	int16_t x270 = INT16_MIN;
	volatile int32_t x272 = INT32_MIN;
	static int64_t t64 = -127441042325456194LL;

    t64 = (x269-(x270>(x271|x272)));

    if (t64 != 48LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x273 = INT32_MAX;
	int16_t x274 = INT16_MAX;
	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MIN;
	volatile int32_t t65 = -63063;

    t65 = (x273-(x274>(x275|x276)));

    if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x278 = -1;
	uint32_t x280 = 31U;

    t66 = (x277-(x278>(x279|x280)));

    if (t66 != -200504224676682344LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MAX;
	volatile int32_t x283 = INT32_MIN;
	static volatile int8_t x284 = INT8_MAX;
	uint64_t t67 = 1680078920LLU;

    t67 = (x281-(x282>(x283|x284)));

    if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = INT32_MAX;
	int32_t x286 = INT32_MAX;
	volatile int16_t x287 = 874;
	int16_t x288 = 1;
	volatile int32_t t68 = 28718;

    t68 = (x285-(x286>(x287|x288)));

    if (t68 != 2147483646) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x289 = INT8_MIN;
	volatile int8_t x290 = 2;
	volatile uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;
	int32_t t69 = 833287;

    t69 = (x289-(x290>(x291|x292)));

    if (t69 != -129) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x293 = 254386653222598LLU;
	int16_t x296 = INT16_MAX;
	static uint64_t t70 = 3116LLU;

    t70 = (x293-(x294>(x295|x296)));

    if (t70 != 254386653222597LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = 243U;
	int16_t x300 = INT16_MIN;

    t71 = (x297-(x298>(x299|x300)));

    if (t71 != -32769) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	static int16_t x304 = 122;
	volatile int64_t t72 = -100762106162LL;

    t72 = (x301-(x302>(x303|x304)));

    if (t72 != -84315922386347131LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x305 = INT16_MAX;

    t73 = (x305-(x306>(x307|x308)));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = 14;
	int32_t x310 = -1;
	int32_t x312 = INT32_MIN;
	volatile int32_t t74 = -6723;

    t74 = (x309-(x310>(x311|x312)));

    if (t74 != 13) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = INT32_MAX;
	volatile int32_t t75 = 0;

    t75 = (x313-(x314>(x315|x316)));

    if (t75 != 2147483646) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x322 = 859474;
	uint64_t x323 = 1563747412LLU;
	volatile uint16_t x324 = 28U;
	volatile int32_t t76 = 7;

    t76 = (x321-(x322>(x323|x324)));

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x325 = -1;
	uint16_t x326 = 881U;
	int16_t x328 = -1;

    t77 = (x325-(x326>(x327|x328)));

    if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x329 = INT16_MIN;
	static int8_t x330 = INT8_MIN;
	volatile int32_t t78 = -6377;

    t78 = (x329-(x330>(x331|x332)));

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x333 = 3824988996162481LLU;
	int64_t x334 = INT64_MIN;
	uint8_t x335 = 16U;
	volatile int64_t x336 = -1LL;
	volatile uint64_t t79 = 1209179843372LLU;

    t79 = (x333-(x334>(x335|x336)));

    if (t79 != 3824988996162481LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x338 = -510777691LL;
	uint64_t x339 = 1382634315742458LLU;
	volatile int32_t t80 = -2706016;

    t80 = (x337-(x338>(x339|x340)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x341 = 4574U;
	int8_t x342 = -27;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = 163034622224LLU;

    t81 = (x341-(x342>(x343|x344)));

    if (t81 != 4573) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x345 = -2;
	volatile int16_t x346 = -1;
	int32_t x347 = -281375;
	int32_t t82 = -56256;

    t82 = (x345-(x346>(x347|x348)));

    if (t82 != -3) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x349 = INT16_MAX;
	volatile int16_t x350 = INT16_MAX;
	volatile int8_t x351 = 33;
	int8_t x352 = INT8_MAX;
	static int32_t t83 = 3672222;

    t83 = (x349-(x350>(x351|x352)));

    if (t83 != 32766) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x353 = UINT8_MAX;
	int32_t x354 = -1;

    t84 = (x353-(x354>(x355|x356)));

    if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x357 = 1;
	static int32_t x359 = INT32_MAX;
	volatile int8_t x360 = INT8_MAX;

    t85 = (x357-(x358>(x359|x360)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x361 = 25242U;
	int32_t x362 = INT32_MIN;
	int32_t x363 = -2988;
	static int64_t x364 = INT64_MIN;
	uint32_t t86 = 2092872275U;

    t86 = (x361-(x362>(x363|x364)));

    if (t86 != 25242U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x365 = INT32_MIN;
	volatile int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MAX;

    t87 = (x365-(x366>(x367|x368)));

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x369 = 26088;
	int64_t x370 = INT64_MAX;
	uint32_t x371 = 30U;
	int64_t x372 = -468808779950LL;
	static int32_t t88 = -20768803;

    t88 = (x369-(x370>(x371|x372)));

    if (t88 != 26087) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x373 = -1;
	static int8_t x374 = 0;
	static int64_t x375 = INT64_MAX;
	static int32_t x376 = 834978680;
	volatile int32_t t89 = -9376357;

    t89 = (x373-(x374>(x375|x376)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = INT8_MIN;
	int8_t x378 = -1;
	static volatile int64_t x379 = 8470997464LL;
	volatile int32_t t90 = 9;

    t90 = (x377-(x378>(x379|x380)));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x382 = -102994;
	volatile int16_t x383 = INT16_MIN;
	uint64_t x384 = 9190944608727869405LLU;
	volatile int32_t t91 = -5256;

    t91 = (x381-(x382>(x383|x384)));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 18126411U;

    t92 = (x389-(x390>(x391|x392)));

    if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x393 = INT32_MIN;
	uint8_t x394 = 4U;
	uint8_t x395 = UINT8_MAX;
	int32_t t93 = INT32_MIN;

    t93 = (x393-(x394>(x395|x396)));

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x397 = 1779;
	uint8_t x398 = 67U;
	int64_t x400 = INT64_MAX;
	int32_t t94 = -19788927;

    t94 = (x397-(x398>(x399|x400)));

    if (t94 != 1779) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x401 = -2054;
	static int64_t x402 = -1LL;
	volatile int32_t t95 = -562105954;

    t95 = (x401-(x402>(x403|x404)));

    if (t95 != -2054) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x405 = 617014LLU;
	int16_t x406 = INT16_MAX;
	volatile uint32_t x407 = UINT32_MAX;
	static volatile uint16_t x408 = UINT16_MAX;
	uint64_t t96 = 3385055121482172LLU;

    t96 = (x405-(x406>(x407|x408)));

    if (t96 != 617014LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = -1;
	int64_t x410 = 76304578074869417LL;
	static int32_t x412 = -1;

    t97 = (x409-(x410>(x411|x412)));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x413 = INT16_MAX;
	int64_t x414 = -1LL;
	int64_t x415 = -1LL;
	volatile uint16_t x416 = UINT16_MAX;

    t98 = (x413-(x414>(x415|x416)));

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x417 = 7U;
	static int16_t x418 = 11677;
	int32_t x419 = -1;
	uint16_t x420 = UINT16_MAX;
	int32_t t99 = 0;

    t99 = (x417-(x418>(x419|x420)));

    if (t99 != 6) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x422 = -1LL;
	int16_t x423 = INT16_MIN;
	static volatile int64_t x424 = -1LL;
	int64_t t100 = INT64_MAX;

    t100 = (x421-(x422>(x423|x424)));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x425 = 193589LLU;
	uint16_t x426 = 57U;
	volatile int8_t x427 = -7;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t101 = 2819LLU;

    t101 = (x425-(x426>(x427|x428)));

    if (t101 != 193588LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x430 = 9933960506846099LLU;
	int8_t x431 = INT8_MAX;
	static int8_t x432 = INT8_MIN;
	volatile int32_t t102 = 18842;

    t102 = (x429-(x430>(x431|x432)));

    if (t102 != 3) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x436 = -1;
	volatile int32_t t103 = -8;

    t103 = (x433-(x434>(x435|x436)));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = 132966176;
	static int8_t x439 = INT8_MAX;
	static volatile uint16_t x440 = 1U;
	int32_t t104 = -2063302;

    t104 = (x437-(x438>(x439|x440)));

    if (t104 != 132966175) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = -1;
	static uint8_t x443 = UINT8_MAX;
	volatile uint32_t x444 = 36648U;
	int32_t t105 = 20666;

    t105 = (x441-(x442>(x443|x444)));

    if (t105 != -2) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x445 = 138292545680LLU;
	int64_t x446 = INT64_MAX;
	int16_t x447 = 2;
	volatile int8_t x448 = 0;
	volatile uint64_t t106 = 85LLU;

    t106 = (x445-(x446>(x447|x448)));

    if (t106 != 138292545679LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x450 = 2961LL;
	uint8_t x452 = UINT8_MAX;
	volatile uint64_t t107 = 8445075379LLU;

    t107 = (x449-(x450>(x451|x452)));

    if (t107 != 50616397644557LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x453 = 0U;
	int64_t x454 = -1LL;
	int32_t t108 = -1021616146;

    t108 = (x453-(x454>(x455|x456)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = -1;
	int16_t x458 = INT16_MIN;
	int16_t x460 = 1310;
	int32_t t109 = 3381396;

    t109 = (x457-(x458>(x459|x460)));

    if (t109 != -2) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x461 = -10064702121LL;
	uint8_t x462 = 63U;
	static uint64_t x464 = 298304538993LLU;
	static volatile int64_t t110 = 976883318LL;

    t110 = (x461-(x462>(x463|x464)));

    if (t110 != -10064702121LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x465 = 9U;
	uint16_t x467 = 0U;
	int8_t x468 = -1;

    t111 = (x465-(x466>(x467|x468)));

    if (t111 != 8) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x469 = -1LL;
	uint32_t x470 = 2U;
	volatile uint16_t x471 = 67U;
	int8_t x472 = -1;

    t112 = (x469-(x470>(x471|x472)));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x473 = 1U;
	static int16_t x474 = INT16_MIN;
	uint16_t x475 = 4U;
	volatile int16_t x476 = INT16_MAX;

    t113 = (x473-(x474>(x475|x476)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = 1;
	int32_t x478 = INT32_MIN;
	int64_t x479 = INT64_MAX;
	static uint64_t x480 = UINT64_MAX;
	volatile int32_t t114 = 0;

    t114 = (x477-(x478>(x479|x480)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x481 = 130LL;
	static uint32_t x482 = UINT32_MAX;

    t115 = (x481-(x482>(x483|x484)));

    if (t115 != 130LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x485 = 30185LLU;
	volatile int64_t x486 = 1568124617656LL;
	volatile uint16_t x488 = 6316U;
	uint64_t t116 = 1600661703LLU;

    t116 = (x485-(x486>(x487|x488)));

    if (t116 != 30184LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x489 = UINT8_MAX;
	int32_t x490 = INT32_MAX;
	uint8_t x491 = UINT8_MAX;
	volatile uint32_t x492 = UINT32_MAX;

    t117 = (x489-(x490>(x491|x492)));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x493 = INT8_MIN;
	int8_t x494 = INT8_MIN;
	int32_t x495 = 409;
	int32_t x496 = -57022330;
	int32_t t118 = 445;

    t118 = (x493-(x494>(x495|x496)));

    if (t118 != -129) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x497 = INT16_MAX;
	uint16_t x498 = UINT16_MAX;
	volatile uint64_t x499 = 557121663920179464LLU;
	volatile uint16_t x500 = UINT16_MAX;
	int32_t t119 = -1649695;

    t119 = (x497-(x498>(x499|x500)));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x503 = -748437160006617LL;
	int32_t x504 = INT32_MIN;
	volatile uint32_t t120 = 34989U;

    t120 = (x501-(x502>(x503|x504)));

    if (t120 != 4294967294U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x505 = INT8_MAX;
	int8_t x506 = INT8_MAX;
	static int32_t x508 = INT32_MIN;
	static volatile int32_t t121 = 1746474;

    t121 = (x505-(x506>(x507|x508)));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x509 = 3U;
	int16_t x511 = INT16_MAX;
	static int16_t x512 = INT16_MIN;
	uint32_t t122 = 12559772U;

    t122 = (x509-(x510>(x511|x512)));

    if (t122 != 2U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x513 = UINT32_MAX;
	volatile uint32_t x514 = 50U;
	int16_t x515 = -1;
	static volatile int64_t x516 = INT64_MAX;
	volatile uint32_t t123 = 22471U;

    t123 = (x513-(x514>(x515|x516)));

    if (t123 != 4294967294U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x517 = 389056824626755LL;
	static int32_t x518 = 2929404;
	volatile uint64_t x519 = UINT64_MAX;
	volatile uint32_t x520 = 9013022U;
	int64_t t124 = 37378249608LL;

    t124 = (x517-(x518>(x519|x520)));

    if (t124 != 389056824626755LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MIN;
	static int64_t x522 = 975083879234253068LL;
	int64_t x523 = INT64_MIN;
	uint16_t x524 = UINT16_MAX;

    t125 = (x521-(x522>(x523|x524)));

    if (t125 != -129) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x525 = 16908677386262090LLU;
	uint8_t x527 = 64U;
	volatile int8_t x528 = INT8_MIN;
	uint64_t t126 = 4953LLU;

    t126 = (x525-(x526>(x527|x528)));

    if (t126 != 16908677386262090LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x531 = 1650894744LL;
	static volatile int32_t x532 = -1;
	volatile int32_t t127 = 5655;

    t127 = (x529-(x530>(x531|x532)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x534 = 64U;
	static volatile uint64_t x535 = 50LLU;
	int8_t x536 = INT8_MIN;
	static volatile uint32_t t128 = 659503U;

    t128 = (x533-(x534>(x535|x536)));

    if (t128 != 1192086U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x537 = 965;
	int8_t x538 = INT8_MIN;
	static int64_t x539 = -277160497726399LL;
	int32_t x540 = INT32_MIN;
	volatile int32_t t129 = 51;

    t129 = (x537-(x538>(x539|x540)));

    if (t129 != 964) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x541 = 119681U;
	volatile int32_t x542 = INT32_MIN;
	static int64_t x543 = 347LL;
	uint32_t t130 = 688U;

    t130 = (x541-(x542>(x543|x544)));

    if (t130 != 119681U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = 99689724;
	int8_t x546 = -1;
	static int32_t x547 = INT32_MAX;
	int8_t x548 = INT8_MIN;
	int32_t t131 = 21648;

    t131 = (x545-(x546>(x547|x548)));

    if (t131 != 99689724) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x550 = 7;
	int16_t x552 = -1;
	volatile int32_t t132 = -1;

    t132 = (x549-(x550>(x551|x552)));

    if (t132 != 785420198) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x553 = 4038U;
	uint16_t x554 = 5353U;
	int32_t x555 = -1;
	int8_t x556 = 1;
	static int32_t t133 = 1378;

    t133 = (x553-(x554>(x555|x556)));

    if (t133 != 4037) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x557 = INT32_MAX;
	volatile int32_t x558 = -43273385;
	static int32_t x559 = INT32_MIN;
	int8_t x560 = INT8_MAX;
	int32_t t134 = 28;

    t134 = (x557-(x558>(x559|x560)));

    if (t134 != 2147483646) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = 28;
	static int32_t x562 = INT32_MAX;
	static int32_t x564 = 38;
	static int32_t t135 = -33240280;

    t135 = (x561-(x562>(x563|x564)));

    if (t135 != 27) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x565 = INT64_MIN;
	int8_t x568 = INT8_MAX;

    t136 = (x565-(x566>(x567|x568)));

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x569 = INT16_MIN;
	int32_t x570 = 356;
	int32_t x571 = -1;
	int16_t x572 = INT16_MIN;
	int32_t t137 = 2;

    t137 = (x569-(x570>(x571|x572)));

    if (t137 != -32769) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x573 = UINT16_MAX;
	uint32_t x575 = 412521583U;
	uint8_t x576 = 63U;
	static volatile int32_t t138 = -143275;

    t138 = (x573-(x574>(x575|x576)));

    if (t138 != 65534) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x577 = -1;
	uint16_t x578 = 2U;
	static uint16_t x579 = 83U;
	int32_t x580 = INT32_MIN;

    t139 = (x577-(x578>(x579|x580)));

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x581 = 30U;
	uint64_t x582 = UINT64_MAX;
	uint8_t x583 = 61U;
	static uint16_t x584 = 0U;
	volatile int32_t t140 = 70195;

    t140 = (x581-(x582>(x583|x584)));

    if (t140 != 29) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x585 = 35328068U;
	int16_t x586 = -58;
	uint32_t t141 = 24142U;

    t141 = (x585-(x586>(x587|x588)));

    if (t141 != 35328068U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x589 = -1;
	uint16_t x592 = 12U;
	int32_t t142 = 30038;

    t142 = (x589-(x590>(x591|x592)));

    if (t142 != -2) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x593 = -1;
	volatile int32_t x594 = -1;
	static int64_t x596 = 0LL;
	volatile int32_t t143 = -888101206;

    t143 = (x593-(x594>(x595|x596)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x597 = INT8_MAX;
	int64_t x598 = INT64_MIN;
	int64_t x599 = -1LL;
	static uint64_t x600 = UINT64_MAX;
	int32_t t144 = 12076;

    t144 = (x597-(x598>(x599|x600)));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = 40353089098069865LL;
	uint16_t x603 = 335U;
	volatile uint64_t x604 = UINT64_MAX;
	int64_t t145 = -439121712LL;

    t145 = (x601-(x602>(x603|x604)));

    if (t145 != 40353089098069865LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x605 = 0;
	int16_t x606 = INT16_MAX;
	uint16_t x607 = 7014U;
	int32_t t146 = -351625;

    t146 = (x605-(x606>(x607|x608)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x609 = 462U;
	int8_t x611 = 15;
	uint64_t x612 = 138710129797261374LLU;
	volatile int32_t t147 = 23716;

    t147 = (x609-(x610>(x611|x612)));

    if (t147 != 462) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t t148 = 1120940U;

    t148 = (x613-(x614>(x615|x616)));

    if (t148 != 15003U) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x617 = INT64_MIN;
	int64_t x618 = -2914651717LL;
	int64_t x619 = 1004800645864840LL;
	int16_t x620 = INT16_MIN;
	int64_t t149 = INT64_MIN;

    t149 = (x617-(x618>(x619|x620)));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x621 = -259842LL;
	int8_t x622 = INT8_MAX;
	int32_t x623 = INT32_MAX;
	int64_t x624 = INT64_MIN;
	int64_t t150 = 146685670LL;

    t150 = (x621-(x622>(x623|x624)));

    if (t150 != -259843LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x625 = UINT8_MAX;
	int16_t x626 = INT16_MIN;
	static volatile int16_t x627 = INT16_MIN;
	volatile int32_t t151 = 0;

    t151 = (x625-(x626>(x627|x628)));

    if (t151 != 255) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x629 = 26390064810LLU;
	int8_t x631 = -1;
	static volatile uint64_t t152 = 2LLU;

    t152 = (x629-(x630>(x631|x632)));

    if (t152 != 26390064810LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x633 = 2535U;
	int8_t x634 = -1;
	static int16_t x635 = INT16_MIN;
	static int8_t x636 = INT8_MIN;
	int32_t t153 = 74;

    t153 = (x633-(x634>(x635|x636)));

    if (t153 != 2534) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x638 = 112;
	int16_t x639 = 17;
	int32_t x640 = INT32_MIN;
	volatile int32_t t154 = -125982160;

    t154 = (x637-(x638>(x639|x640)));

    if (t154 != 76) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	volatile uint64_t x642 = 183680209551LLU;
	uint16_t x643 = UINT16_MAX;
	int64_t x644 = INT64_MIN;
	static volatile uint64_t t155 = UINT64_MAX;

    t155 = (x641-(x642>(x643|x644)));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x645 = 6889U;
	int32_t x646 = INT32_MAX;
	int8_t x648 = 0;
	int32_t t156 = -26909;

    t156 = (x645-(x646>(x647|x648)));

    if (t156 != 6889) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x649 = INT16_MAX;
	int16_t x650 = -3;
	uint8_t x651 = 22U;
	int64_t x652 = INT64_MIN;
	volatile int32_t t157 = 21905;

    t157 = (x649-(x650>(x651|x652)));

    if (t157 != 32766) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x654 = INT64_MAX;
	uint64_t x655 = 67132294961740LLU;
	int64_t x656 = -25432743LL;
	static volatile uint64_t t158 = 159LLU;

    t158 = (x653-(x654>(x655|x656)));

    if (t158 != 316LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x657 = INT8_MIN;
	int64_t x659 = INT64_MIN;
	volatile int32_t x660 = INT32_MAX;
	static volatile int32_t t159 = 431;

    t159 = (x657-(x658>(x659|x660)));

    if (t159 != -129) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x661 = 6U;
	int64_t x662 = INT64_MIN;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MAX;
	volatile int32_t t160 = -468;

    t160 = (x661-(x662>(x663|x664)));

    if (t160 != 6) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x665 = INT32_MIN;
	static volatile int8_t x667 = -1;
	uint8_t x668 = 10U;
	int32_t t161 = INT32_MIN;

    t161 = (x665-(x666>(x667|x668)));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x670 = -43;
	int64_t x671 = INT64_MAX;
	int16_t x672 = -6;
	volatile uint64_t t162 = UINT64_MAX;

    t162 = (x669-(x670>(x671|x672)));

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x674 = INT8_MIN;
	int32_t x675 = -1;
	int64_t x676 = INT64_MIN;
	int32_t t163 = INT32_MIN;

    t163 = (x673-(x674>(x675|x676)));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x677 = -1;
	int16_t x678 = -1;
	uint32_t x680 = 15935539U;
	int32_t t164 = -49;

    t164 = (x677-(x678>(x679|x680)));

    if (t164 != -2) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = -1;
	int8_t x682 = INT8_MIN;
	int8_t x683 = INT8_MIN;
	static volatile int16_t x684 = 143;

    t165 = (x681-(x682>(x683|x684)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = -8123;
	uint8_t x687 = UINT8_MAX;
	volatile int64_t x688 = -1LL;
	int32_t t166 = 1281773;

    t166 = (x685-(x686>(x687|x688)));

    if (t166 != -8123) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = INT32_MAX;
	uint32_t x690 = 0U;
	int8_t x691 = -1;
	static volatile uint16_t x692 = 107U;

    t167 = (x689-(x690>(x691|x692)));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x695 = INT8_MAX;
	uint32_t x696 = 18268U;
	volatile int32_t t168 = 1880;

    t168 = (x693-(x694>(x695|x696)));

    if (t168 != 29) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x697 = INT8_MAX;
	uint8_t x698 = UINT8_MAX;
	volatile int64_t x699 = INT64_MIN;
	int32_t x700 = -1;

    t169 = (x697-(x698>(x699|x700)));

    if (t169 != 126) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = -1;
	static uint8_t x702 = 43U;

    t170 = (x701-(x702>(x703|x704)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x705 = 118905U;
	static volatile int8_t x706 = -14;
	static int8_t x707 = INT8_MAX;
	static volatile uint64_t x708 = 105628783448LLU;
	static volatile uint32_t t171 = 3421938U;

    t171 = (x705-(x706>(x707|x708)));

    if (t171 != 118904U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x709 = INT64_MIN;
	int64_t x712 = INT64_MAX;
	volatile int64_t t172 = INT64_MIN;

    t172 = (x709-(x710>(x711|x712)));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x713 = 0LLU;
	int16_t x714 = INT16_MIN;
	int8_t x715 = 3;
	static int8_t x716 = INT8_MIN;

    t173 = (x713-(x714>(x715|x716)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x718 = -1316;
	uint8_t x719 = 67U;
	static volatile int32_t t174 = 6842675;

    t174 = (x717-(x718>(x719|x720)));

    if (t174 != 23) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x722 = INT8_MAX;
	volatile uint32_t x723 = 3U;
	int32_t x724 = INT32_MAX;
	static volatile int32_t t175 = 45540394;

    t175 = (x721-(x722>(x723|x724)));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x729 = 98U;
	int64_t x730 = INT64_MIN;
	static uint64_t x731 = UINT64_MAX;
	int16_t x732 = -1;

    t176 = (x729-(x730>(x731|x732)));

    if (t176 != 98) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x733 = INT64_MAX;
	uint16_t x734 = 12U;
	uint64_t x735 = UINT64_MAX;
	static int8_t x736 = INT8_MIN;
	volatile int64_t t177 = INT64_MAX;

    t177 = (x733-(x734>(x735|x736)));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x737 = INT64_MAX;
	int16_t x738 = -1;
	int32_t x739 = -1;
	int8_t x740 = INT8_MAX;
	volatile int64_t t178 = INT64_MAX;

    t178 = (x737-(x738>(x739|x740)));

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = -1;
	uint32_t x744 = 2131384U;
	volatile int32_t t179 = -30;

    t179 = (x741-(x742>(x743|x744)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x745 = UINT32_MAX;
	uint64_t x746 = 1089338431315047LLU;
	static int16_t x748 = 0;

    t180 = (x745-(x746>(x747|x748)));

    if (t180 != 4294967294U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x749 = 27138U;
	static uint8_t x750 = 3U;
	uint16_t x751 = UINT16_MAX;
	int64_t x752 = INT64_MIN;
	volatile int32_t t181 = -27132022;

    t181 = (x749-(x750>(x751|x752)));

    if (t181 != 27137) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x753 = -1LL;
	static int64_t x754 = INT64_MIN;
	volatile int16_t x755 = INT16_MIN;
	volatile int16_t x756 = 2;
	int64_t t182 = -409235660LL;

    t182 = (x753-(x754>(x755|x756)));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x757 = 104U;
	volatile int64_t x758 = -212LL;
	static int16_t x759 = INT16_MAX;
	uint32_t x760 = 0U;
	static int32_t t183 = 1;

    t183 = (x757-(x758>(x759|x760)));

    if (t183 != 104) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x761 = 3380U;
	int16_t x762 = 10749;
	int16_t x763 = INT16_MIN;
	static int16_t x764 = INT16_MAX;
	volatile uint32_t t184 = 93U;

    t184 = (x761-(x762>(x763|x764)));

    if (t184 != 3379U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x766 = -6960;
	volatile int64_t x767 = INT64_MAX;
	uint64_t x768 = UINT64_MAX;
	static int32_t t185 = -36;

    t185 = (x765-(x766>(x767|x768)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x770 = -1;
	uint64_t x772 = 631971974729440LLU;

    t186 = (x769-(x770>(x771|x772)));

    if (t186 != -60) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x774 = -1LL;
	int32_t x776 = INT32_MAX;

    t187 = (x773-(x774>(x775|x776)));

    if (t187 != -10) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x778 = INT8_MIN;
	uint16_t x780 = UINT16_MAX;
	volatile uint64_t t188 = 209962003LLU;

    t188 = (x777-(x778>(x779|x780)));

    if (t188 != 1743606LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x781 = -13;
	int64_t x782 = 669LL;
	int16_t x783 = 381;
	static int32_t t189 = 239018;

    t189 = (x781-(x782>(x783|x784)));

    if (t189 != -14) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x785 = -9LL;
	uint32_t x786 = 1U;
	volatile uint16_t x787 = UINT16_MAX;
	uint16_t x788 = 345U;
	volatile int64_t t190 = 609909LL;

    t190 = (x785-(x786>(x787|x788)));

    if (t190 != -9LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x789 = -58;
	static volatile int32_t x790 = INT32_MAX;
	static uint16_t x791 = 7U;
	int32_t t191 = -38143;

    t191 = (x789-(x790>(x791|x792)));

    if (t191 != -59) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x794 = 217LLU;
	int16_t x796 = -1;
	uint32_t t192 = UINT32_MAX;

    t192 = (x793-(x794>(x795|x796)));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x797 = UINT32_MAX;
	static uint32_t x799 = 169181U;
	int32_t x800 = INT32_MAX;
	volatile uint32_t t193 = UINT32_MAX;

    t193 = (x797-(x798>(x799|x800)));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x801 = UINT8_MAX;
	uint8_t x802 = 2U;
	int32_t x803 = -1;
	uint8_t x804 = 12U;
	int32_t t194 = -4870444;

    t194 = (x801-(x802>(x803|x804)));

    if (t194 != 254) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x805 = 13U;
	int8_t x806 = INT8_MAX;
	uint8_t x807 = UINT8_MAX;
	uint64_t x808 = 24940980688LLU;
	int32_t t195 = 5638826;

    t195 = (x805-(x806>(x807|x808)));

    if (t195 != 13) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x809 = 0;
	uint8_t x810 = 14U;
	static int32_t x811 = -1;
	int32_t t196 = -2094209;

    t196 = (x809-(x810>(x811|x812)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x813 = INT64_MIN;
	static int8_t x814 = -1;
	static int32_t x815 = INT32_MAX;
	int8_t x816 = 12;
	static volatile int64_t t197 = INT64_MIN;

    t197 = (x813-(x814>(x815|x816)));

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x817 = 67141445366251272LLU;
	int64_t x818 = -1LL;
	static uint16_t x820 = 728U;
	uint64_t t198 = 2714LLU;

    t198 = (x817-(x818>(x819|x820)));

    if (t198 != 67141445366251272LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = INT16_MAX;
	static uint16_t x822 = 5840U;
	int8_t x823 = INT8_MIN;
	int32_t x824 = INT32_MAX;
	static volatile int32_t t199 = -1461;

    t199 = (x821-(x822>(x823|x824)));

    if (t199 != 32766) { NG(); } else { ; }
	
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

