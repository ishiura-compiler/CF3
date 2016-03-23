
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

static uint32_t x1 = UINT32_MAX;
int8_t x7 = 12;
int32_t t1 = 3;
int64_t x14 = INT64_MIN;
int32_t t4 = -175078;
static uint16_t x23 = UINT16_MAX;
int16_t x28 = -1;
int32_t t6 = -222;
int32_t x32 = INT32_MIN;
int32_t x40 = INT32_MIN;
int64_t x45 = INT64_MIN;
int8_t x48 = INT8_MIN;
uint16_t x64 = 8985U;
uint32_t x67 = UINT32_MAX;
int8_t x69 = INT8_MIN;
int32_t x71 = INT32_MAX;
volatile int32_t t18 = 3;
static uint64_t x80 = UINT64_MAX;
static uint16_t x81 = 62U;
int32_t x82 = -1;
int64_t x84 = -883602714LL;
int16_t x87 = INT16_MAX;
uint16_t x90 = UINT16_MAX;
static volatile int32_t t22 = 236336851;
volatile int32_t t23 = 454;
int32_t x107 = -1;
int64_t x111 = INT64_MIN;
int32_t t27 = -1196784;
uint64_t x132 = 6541705172486408LLU;
volatile int16_t x137 = -13;
int32_t x142 = -2062420;
int64_t x147 = INT64_MIN;
int32_t t36 = 0;
int8_t x150 = 1;
volatile int32_t t37 = 16513527;
int32_t x153 = -1;
static int64_t x155 = INT64_MIN;
static int8_t x156 = INT8_MIN;
int16_t x166 = -209;
static int64_t x167 = -1LL;
volatile int64_t x176 = INT64_MAX;
static uint32_t x177 = 61279655U;
uint64_t x181 = 366881550LLU;
int16_t x182 = -21;
int16_t x184 = INT16_MIN;
int32_t x186 = INT32_MIN;
int32_t x187 = -1;
static volatile int32_t t46 = -52;
int64_t x190 = -1LL;
volatile int16_t x191 = INT16_MAX;
int8_t x200 = INT8_MIN;
int32_t x203 = INT32_MIN;
static int16_t x207 = -1;
volatile int32_t t51 = 0;
static uint64_t x210 = 0LLU;
static uint32_t x217 = UINT32_MAX;
volatile uint8_t x219 = 1U;
volatile uint32_t x220 = UINT32_MAX;
int8_t x222 = 6;
static int8_t x226 = -1;
int8_t x227 = 1;
int64_t x232 = 1049LL;
int32_t t57 = -63209304;
static int32_t t59 = 1362;
int8_t x242 = 4;
uint32_t x244 = UINT32_MAX;
static int32_t x246 = -1;
volatile uint64_t x247 = 1221838LLU;
int16_t x248 = INT16_MIN;
int32_t x249 = -1;
static int8_t x258 = 0;
int32_t x260 = INT32_MIN;
int64_t x264 = 530105157LL;
int32_t t65 = -372;
int32_t t66 = -810721116;
volatile int32_t x270 = INT32_MIN;
uint8_t x277 = 57U;
int8_t x284 = -3;
volatile int32_t t70 = 140;
int16_t x288 = -1;
volatile int32_t t71 = 118356;
int32_t x290 = -240;
int16_t x294 = INT16_MAX;
volatile int16_t x300 = 339;
static volatile int32_t x302 = INT32_MAX;
int8_t x308 = INT8_MIN;
static int32_t x309 = INT32_MIN;
int8_t x312 = 0;
static int16_t x314 = -1;
int32_t t78 = -22;
int8_t x319 = -2;
int64_t x320 = 3LL;
uint8_t x321 = 110U;
int64_t x331 = -4LL;
volatile int16_t x332 = INT16_MIN;
static int32_t t82 = 95;
volatile int32_t x340 = INT32_MAX;
volatile int32_t t84 = 6213289;
int16_t x343 = -204;
int16_t x344 = INT16_MIN;
uint16_t x346 = UINT16_MAX;
int16_t x352 = -1;
int32_t t87 = -24;
uint8_t x353 = 9U;
volatile uint32_t x355 = UINT32_MAX;
int64_t x358 = -1LL;
int32_t t89 = 192154342;
int8_t x363 = INT8_MAX;
int16_t x369 = -1;
int64_t x372 = -147LL;
static int32_t t92 = -292077874;
static int32_t x375 = INT32_MIN;
static int16_t x377 = INT16_MIN;
int8_t x380 = INT8_MAX;
static uint32_t x383 = UINT32_MAX;
static int8_t x386 = -2;
int32_t t98 = -16;
int16_t x404 = INT16_MIN;
static uint32_t x406 = UINT32_MAX;
uint64_t x408 = UINT64_MAX;
int64_t x412 = INT64_MIN;
uint64_t x413 = UINT64_MAX;
uint64_t x414 = UINT64_MAX;
static int16_t x418 = 14118;
uint8_t x426 = 3U;
uint8_t x427 = 27U;
int8_t x429 = -1;
uint16_t x433 = 223U;
static int16_t x437 = 242;
int8_t x439 = -62;
volatile int32_t t109 = -141;
static int8_t x441 = INT8_MAX;
volatile int16_t x450 = INT16_MAX;
volatile int32_t t113 = 5;
static volatile int8_t x458 = INT8_MAX;
int8_t x460 = INT8_MAX;
volatile int32_t t114 = -252390;
static int32_t t115 = 138896;
volatile uint8_t x465 = UINT8_MAX;
uint8_t x466 = 29U;
int8_t x472 = INT8_MAX;
volatile int32_t t118 = 4041;
static int32_t x477 = 8;
static uint32_t x479 = UINT32_MAX;
int32_t x483 = 118;
static int8_t x490 = -1;
volatile int64_t x506 = INT64_MAX;
volatile uint32_t x507 = UINT32_MAX;
int16_t x518 = INT16_MAX;
int32_t x521 = 0;
uint8_t x523 = 58U;
volatile int32_t t130 = -29832;
int8_t x528 = INT8_MAX;
uint8_t x529 = 7U;
uint64_t x530 = UINT64_MAX;
int32_t x532 = -1;
int32_t t132 = 846;
volatile int32_t x536 = 567007;
uint16_t x550 = 613U;
volatile uint32_t x551 = 239U;
int32_t t137 = 1;
int16_t x553 = -1;
uint8_t x555 = 10U;
volatile int32_t x556 = INT32_MIN;
int32_t t140 = 26357944;
int64_t x566 = -1LL;
volatile int32_t t142 = -81;
static uint64_t x574 = 23965618403928200LLU;
static int16_t x577 = INT16_MIN;
volatile uint64_t x588 = 32497138LLU;
volatile int16_t x590 = -3374;
int32_t x592 = -7356307;
static int32_t x596 = 98;
volatile int64_t x600 = INT64_MAX;
static volatile int32_t t149 = -315;
volatile int32_t x605 = -91370057;
static volatile int32_t t151 = 5256244;
uint16_t x609 = 18U;
uint8_t x616 = UINT8_MAX;
int64_t x630 = INT64_MIN;
int32_t t158 = 2;
volatile int8_t x644 = INT8_MAX;
volatile int32_t t160 = -169904;
volatile int32_t t161 = 372555649;
int32_t t162 = 48030920;
int16_t x656 = INT16_MAX;
int16_t x658 = 3158;
int8_t x664 = INT8_MIN;
uint16_t x665 = UINT16_MAX;
static volatile int64_t x667 = 67261968094084048LL;
uint64_t x669 = 18964299823630625LLU;
static volatile int32_t t168 = 193664;
int8_t x679 = 0;
int16_t x682 = 0;
int32_t x683 = INT32_MIN;
uint8_t x689 = 2U;
volatile int64_t x690 = INT64_MIN;
int64_t x692 = INT64_MIN;
static int64_t x697 = -1LL;
int64_t x699 = 1860593LL;
uint8_t x707 = UINT8_MAX;
static uint64_t x715 = 45LLU;
uint64_t x719 = 18LLU;
uint8_t x720 = 2U;
volatile int16_t x721 = -1;
uint8_t x726 = 46U;
int16_t x730 = INT16_MIN;
volatile int32_t t182 = 17072518;
volatile int32_t t183 = -844127;
volatile uint64_t x739 = 5028358717262511690LLU;
int8_t x742 = INT8_MIN;
volatile int32_t t188 = -2605;
uint8_t x760 = 1U;
int8_t x765 = INT8_MIN;
int8_t x767 = INT8_MIN;
static volatile int16_t x772 = -15;
volatile int64_t x780 = INT64_MIN;
static volatile int32_t t194 = 1040064974;
static volatile int16_t x786 = 849;
static volatile int16_t x789 = -1;
int64_t x793 = -1LL;
volatile int32_t x795 = -1;
static int16_t x796 = INT16_MAX;


void f0(void) {
    	int16_t x2 = -645;
	int64_t x3 = 711641LL;
	static uint32_t x4 = 26573U;
	volatile int32_t t0 = -2920;

    t0 = (x1==(x2>(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 1LL;
	int64_t x6 = INT64_MIN;
	static int8_t x8 = -1;

    t1 = (x5==(x6>(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	int32_t x10 = INT32_MIN;
	int16_t x11 = -9;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -116419837;

    t2 = (x9==(x10>(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 450;
	static int64_t x15 = INT64_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	static int32_t t3 = 3;

    t3 = (x13==(x14>(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 87U;
	int64_t x18 = -3150LL;
	int32_t x19 = INT32_MAX;
	uint8_t x20 = UINT8_MAX;

    t4 = (x17==(x18>(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	int32_t x22 = -12245;
	int64_t x24 = INT64_MAX;
	int32_t t5 = -807153;

    t5 = (x21==(x22>(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 0;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = UINT16_MAX;

    t6 = (x25==(x26>(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 6U;
	int8_t x30 = INT8_MAX;
	volatile int8_t x31 = 9;
	int32_t t7 = 64361;

    t7 = (x29==(x30>(x31>x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = 1;
	int16_t x34 = 56;
	static int16_t x35 = INT16_MIN;
	static int32_t x36 = 2423212;
	volatile int32_t t8 = -62;

    t8 = (x33==(x34>(x35>x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 7;
	static volatile int8_t x38 = INT8_MAX;
	int64_t x39 = 35104062LL;
	int32_t t9 = 956;

    t9 = (x37==(x38>(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x41 = 2509U;
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = -354;
	volatile int32_t t10 = 11697;

    t10 = (x41==(x42>(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x46 = INT32_MAX;
	volatile int32_t x47 = INT32_MIN;
	int32_t t11 = 1901088;

    t11 = (x45==(x46>(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	volatile int32_t x50 = 6;
	int16_t x51 = 749;
	uint64_t x52 = 3369261804565LLU;
	int32_t t12 = -43;

    t12 = (x49==(x50>(x51>x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -2;
	uint8_t x54 = UINT8_MAX;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t x56 = 0;
	int32_t t13 = 7236913;

    t13 = (x53==(x54>(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = -1;
	static int8_t x58 = -1;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = 19203LLU;
	int32_t t14 = -3;

    t14 = (x57==(x58>(x59>x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -51016494LL;
	uint64_t x62 = 19416LLU;
	int64_t x63 = INT64_MIN;
	volatile int32_t t15 = 773;

    t15 = (x61==(x62>(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	static int32_t x66 = -1;
	volatile int64_t x68 = INT64_MIN;
	volatile int32_t t16 = 0;

    t16 = (x65==(x66>(x67>x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x70 = INT8_MAX;
	uint8_t x72 = 2U;
	int32_t t17 = -7199964;

    t17 = (x69==(x70>(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	uint16_t x74 = 3U;
	int32_t x75 = INT32_MAX;
	uint16_t x76 = 73U;

    t18 = (x73==(x74>(x75>x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 31U;
	uint16_t x78 = UINT16_MAX;
	uint8_t x79 = UINT8_MAX;
	int32_t t19 = 49956687;

    t19 = (x77==(x78>(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x83 = -1;
	int32_t t20 = 1222265;

    t20 = (x81==(x82>(x83>x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int8_t x86 = 15;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -197411;

    t21 = (x85==(x86>(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 108;
	uint8_t x91 = 21U;
	uint64_t x92 = 71LLU;

    t22 = (x89==(x90>(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = 121U;
	volatile int8_t x94 = 9;
	volatile int64_t x95 = -1LL;
	int64_t x96 = -1LL;

    t23 = (x93==(x94>(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int64_t x98 = 5106088LL;
	int32_t x99 = INT32_MIN;
	int8_t x100 = -1;
	static int32_t t24 = -240442815;

    t24 = (x97==(x98>(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	static int64_t x102 = -1LL;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = 0U;
	volatile int32_t t25 = 0;

    t25 = (x101==(x102>(x103>x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = INT32_MIN;
	static volatile int64_t x106 = 16498760743833577LL;
	uint8_t x108 = 28U;
	static volatile int32_t t26 = -169877;

    t26 = (x105==(x106>(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 223;
	volatile uint8_t x110 = UINT8_MAX;
	volatile uint8_t x112 = 12U;

    t27 = (x109==(x110>(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 7U;
	int64_t x114 = INT64_MIN;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = 7;
	int32_t t28 = -2410;

    t28 = (x113==(x114>(x115>x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = -90628219854262LL;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 35886990;

    t29 = (x117==(x118>(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	static int32_t x122 = INT32_MIN;
	uint32_t x123 = 3U;
	static volatile uint8_t x124 = 1U;
	volatile int32_t t30 = -2;

    t30 = (x121==(x122>(x123>x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 591;
	int8_t x126 = INT8_MIN;
	int32_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	static volatile int32_t t31 = -21;

    t31 = (x125==(x126>(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = 2003559627LLU;
	volatile int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MAX;
	volatile int32_t t32 = 83873;

    t32 = (x129==(x130>(x131>x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	uint16_t x134 = 1U;
	uint64_t x135 = 28963297LLU;
	volatile int16_t x136 = 351;
	static int32_t t33 = -354049;

    t33 = (x133==(x134>(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = 43U;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MAX;
	int32_t t34 = -114927;

    t34 = (x137==(x138>(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1;
	uint32_t x143 = 55U;
	volatile uint64_t x144 = 560LLU;
	volatile int32_t t35 = -417523848;

    t35 = (x141==(x142>(x143>x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 1U;
	static int16_t x146 = -341;
	uint8_t x148 = UINT8_MAX;

    t36 = (x145==(x146>(x147>x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = INT8_MAX;
	int16_t x151 = 184;
	int16_t x152 = INT16_MAX;

    t37 = (x149==(x150>(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = INT16_MIN;
	volatile int32_t t38 = 9;

    t38 = (x153==(x154>(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = -1LL;
	volatile uint8_t x158 = 48U;
	volatile int32_t x159 = INT32_MIN;
	int64_t x160 = 5062413835591LL;
	int32_t t39 = 14;

    t39 = (x157==(x158>(x159>x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	uint8_t x162 = UINT8_MAX;
	uint16_t x163 = 2270U;
	int8_t x164 = INT8_MIN;
	int32_t t40 = 7876;

    t40 = (x161==(x162>(x163>x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 13924393795275LL;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t41 = 0;

    t41 = (x165==(x166>(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = 4U;
	static int64_t x170 = INT64_MAX;
	int32_t x171 = -771824;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -440;

    t42 = (x169==(x170>(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 83;
	static volatile int16_t x174 = INT16_MIN;
	int32_t x175 = -153728884;
	int32_t t43 = -12474;

    t43 = (x173==(x174>(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = INT8_MAX;
	int64_t x179 = -1LL;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -448;

    t44 = (x177==(x178>(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x183 = INT64_MIN;
	int32_t t45 = 117588962;

    t45 = (x181==(x182>(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 10;
	uint32_t x188 = UINT32_MAX;

    t46 = (x185==(x186>(x187>x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MIN;
	static int16_t x192 = -3137;
	volatile int32_t t47 = -7595;

    t47 = (x189==(x190>(x191>x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	static uint64_t x194 = UINT64_MAX;
	volatile int32_t x195 = 0;
	int8_t x196 = -1;
	volatile int32_t t48 = 7170;

    t48 = (x193==(x194>(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MAX;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t t49 = 1;

    t49 = (x197==(x198>(x199>x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x201 = 55U;
	static volatile int64_t x202 = INT64_MIN;
	uint64_t x204 = 0LLU;
	volatile int32_t t50 = -473;

    t50 = (x201==(x202>(x203>x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	static uint64_t x206 = 35271773260300893LLU;
	int32_t x208 = 24963;

    t51 = (x205==(x206>(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = 18;
	volatile int32_t x211 = INT32_MAX;
	int8_t x212 = 40;
	int32_t t52 = 3;

    t52 = (x209==(x210>(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	int16_t x214 = 53;
	static uint16_t x215 = 3U;
	int8_t x216 = -3;
	int32_t t53 = -66561721;

    t53 = (x213==(x214>(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = INT64_MIN;
	int32_t t54 = 42545;

    t54 = (x217==(x218>(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 121876U;
	static int16_t x223 = -1;
	uint16_t x224 = UINT16_MAX;
	static int32_t t55 = 71790033;

    t55 = (x221==(x222>(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 8U;
	static volatile uint8_t x228 = UINT8_MAX;
	int32_t t56 = 4;

    t56 = (x225==(x226>(x227>x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	volatile uint8_t x231 = UINT8_MAX;

    t57 = (x229==(x230>(x231>x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	static uint16_t x235 = 25U;
	int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 281200;

    t58 = (x233==(x234>(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x237 = UINT32_MAX;
	static volatile int32_t x238 = -1;
	volatile uint32_t x239 = 132U;
	int32_t x240 = INT32_MAX;

    t59 = (x237==(x238>(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 7409804LLU;
	static int8_t x243 = INT8_MAX;
	int32_t t60 = -23591;

    t60 = (x241==(x242>(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	static volatile int32_t t61 = -28972;

    t61 = (x245==(x246>(x247>x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x250 = INT64_MIN;
	static uint8_t x251 = 55U;
	volatile int16_t x252 = -90;
	int32_t t62 = 2;

    t62 = (x249==(x250>(x251>x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 0U;
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MAX;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 0;

    t63 = (x253==(x254>(x255>x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x257 = 1U;
	static int32_t x259 = -1;
	volatile int32_t t64 = 404;

    t64 = (x257==(x258>(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x261 = INT16_MAX;
	uint64_t x262 = 11166521679733LLU;
	uint16_t x263 = 252U;

    t65 = (x261==(x262>(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 1U;
	volatile int16_t x266 = -2;
	static uint8_t x267 = UINT8_MAX;
	uint64_t x268 = 50768311299526LLU;

    t66 = (x265==(x266>(x267>x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	uint8_t x271 = 0U;
	int64_t x272 = INT64_MIN;
	int32_t t67 = 46;

    t67 = (x269==(x270>(x271>x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x273 = -10;
	int64_t x274 = INT64_MIN;
	int16_t x275 = -68;
	static volatile uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 137;

    t68 = (x273==(x274>(x275>x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = INT32_MIN;
	volatile int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	volatile int32_t t69 = 0;

    t69 = (x277==(x278>(x279>x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = 15007490;
	int16_t x282 = 25;
	static int16_t x283 = INT16_MAX;

    t70 = (x281==(x282>(x283>x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 47U;
	volatile int64_t x286 = 996350LL;
	volatile int32_t x287 = 344;

    t71 = (x285==(x286>(x287>x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	int8_t x292 = 6;
	int32_t t72 = 29603423;

    t72 = (x289==(x290>(x291>x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	static int64_t x295 = 266262LL;
	volatile uint32_t x296 = 81U;
	static volatile int32_t t73 = 1888;

    t73 = (x293==(x294>(x295>x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	static volatile int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	static int32_t t74 = 23;

    t74 = (x297==(x298>(x299>x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = 17975907LLU;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 32111;

    t75 = (x301==(x302>(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -76323108629968038LL;
	static volatile uint8_t x306 = UINT8_MAX;
	volatile int64_t x307 = INT64_MIN;
	int32_t t76 = 64399639;

    t76 = (x305==(x306>(x307>x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x310 = UINT32_MAX;
	static volatile int64_t x311 = INT64_MAX;
	volatile int32_t t77 = 4314685;

    t77 = (x309==(x310>(x311>x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = INT64_MIN;
	static int32_t x315 = -17;
	uint16_t x316 = 12U;

    t78 = (x313==(x314>(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	uint16_t x318 = UINT16_MAX;
	volatile int32_t t79 = 2;

    t79 = (x317==(x318>(x319>x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = 1402010178LL;
	int32_t x323 = -1;
	uint8_t x324 = 0U;
	volatile int32_t t80 = 212;

    t80 = (x321==(x322>(x323>x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	int8_t x326 = 31;
	static int16_t x327 = -97;
	uint8_t x328 = 4U;
	int32_t t81 = 3;

    t81 = (x325==(x326>(x327>x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x329 = 3199850513809LLU;
	int8_t x330 = INT8_MIN;

    t82 = (x329==(x330>(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 1;
	uint8_t x334 = 30U;
	int16_t x335 = INT16_MIN;
	volatile uint8_t x336 = 22U;
	int32_t t83 = -1;

    t83 = (x333==(x334>(x335>x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MIN;
	uint64_t x339 = 11LLU;

    t84 = (x337==(x338>(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	volatile int16_t x342 = INT16_MIN;
	int32_t t85 = 366757827;

    t85 = (x341==(x342>(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 2099U;
	static volatile int64_t x347 = INT64_MAX;
	volatile uint16_t x348 = UINT16_MAX;
	int32_t t86 = 681743;

    t86 = (x345==(x346>(x347>x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 97;
	int64_t x350 = -1LL;
	uint16_t x351 = 612U;

    t87 = (x349==(x350>(x351>x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MAX;
	uint16_t x356 = 0U;
	volatile int32_t t88 = 16;

    t88 = (x353==(x354>(x355>x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x359 = -42;
	volatile int16_t x360 = 392;

    t89 = (x357==(x358>(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int64_t x362 = INT64_MIN;
	int16_t x364 = -1;
	static int32_t t90 = -323883651;

    t90 = (x361==(x362>(x363>x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = 0;
	int32_t x366 = -2458242;
	uint8_t x367 = 22U;
	int8_t x368 = -1;
	int32_t t91 = 10;

    t91 = (x365==(x366>(x367>x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = -1;
	int8_t x371 = -1;

    t92 = (x369==(x370>(x371>x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	static volatile uint64_t x374 = UINT64_MAX;
	int64_t x376 = 480902885LL;
	int32_t t93 = -492350932;

    t93 = (x373==(x374>(x375>x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -68418642484LL;
	int8_t x379 = INT8_MIN;
	volatile int32_t t94 = -6205535;

    t94 = (x377==(x378>(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MIN;
	uint64_t x384 = 193340LLU;
	int32_t t95 = -114369334;

    t95 = (x381==(x382>(x383>x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x385 = 116133814346340467LL;
	int8_t x387 = INT8_MAX;
	int16_t x388 = -1;
	static int32_t t96 = 26837;

    t96 = (x385==(x386>(x387>x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 38;
	static int64_t x390 = INT64_MIN;
	volatile int16_t x391 = INT16_MIN;
	int32_t x392 = -91432;
	volatile int32_t t97 = -16114786;

    t97 = (x389==(x390>(x391>x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -40;
	int16_t x394 = -1;
	volatile uint64_t x395 = 25568957392LLU;
	int16_t x396 = -1;

    t98 = (x393==(x394>(x395>x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	static int32_t x398 = INT32_MAX;
	volatile uint8_t x399 = 34U;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -34;

    t99 = (x397==(x398>(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = 2;
	int16_t x402 = INT16_MAX;
	int8_t x403 = -1;
	int32_t t100 = -11;

    t100 = (x401==(x402>(x403>x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 50219LLU;
	int16_t x407 = -1;
	volatile int32_t t101 = 244981591;

    t101 = (x405==(x406>(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = -1;
	static uint8_t x411 = 5U;
	int32_t t102 = -1;

    t102 = (x409==(x410>(x411>x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x415 = INT32_MAX;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = 29185024;

    t103 = (x413==(x414>(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = 44U;
	int32_t x419 = -437;
	static uint8_t x420 = 117U;
	int32_t t104 = 151167229;

    t104 = (x417==(x418>(x419>x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x421 = UINT32_MAX;
	int64_t x422 = INT64_MAX;
	int16_t x423 = INT16_MIN;
	uint64_t x424 = 298396LLU;
	volatile int32_t t105 = 63150;

    t105 = (x421==(x422>(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	int32_t x428 = -1;
	volatile int32_t t106 = 1014843092;

    t106 = (x425==(x426>(x427>x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x430 = 4145018705253LL;
	int8_t x431 = 0;
	int32_t x432 = 23;
	volatile int32_t t107 = -658134842;

    t107 = (x429==(x430>(x431>x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	uint64_t x435 = 2018088281LLU;
	int8_t x436 = -1;
	volatile int32_t t108 = -477;

    t108 = (x433==(x434>(x435>x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x438 = -1;
	int32_t x440 = INT32_MIN;

    t109 = (x437==(x438>(x439>x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x442 = INT16_MAX;
	volatile int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MIN;
	int32_t t110 = 12;

    t110 = (x441==(x442>(x443>x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	static int32_t x446 = INT32_MAX;
	int8_t x447 = -3;
	int8_t x448 = -1;
	static int32_t t111 = 6;

    t111 = (x445==(x446>(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 1U;
	uint16_t x451 = 46U;
	int32_t x452 = INT32_MIN;
	int32_t t112 = 15;

    t112 = (x449==(x450>(x451>x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = INT64_MIN;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = -6;
	volatile uint8_t x456 = 44U;

    t113 = (x453==(x454>(x455>x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x457 = 10U;
	int64_t x459 = INT64_MIN;

    t114 = (x457==(x458>(x459>x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = INT64_MAX;
	int32_t x462 = -1;
	int32_t x463 = 201113;
	uint64_t x464 = UINT64_MAX;

    t115 = (x461==(x462>(x463>x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x467 = 0LLU;
	int16_t x468 = INT16_MIN;
	volatile int32_t t116 = 1;

    t116 = (x465==(x466>(x467>x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = INT32_MAX;
	uint16_t x470 = 1U;
	int16_t x471 = -1;
	volatile int32_t t117 = -70069;

    t117 = (x469==(x470>(x471>x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = UINT8_MAX;
	static uint64_t x474 = 81608189784364LLU;
	static int64_t x475 = INT64_MAX;
	uint8_t x476 = UINT8_MAX;

    t118 = (x473==(x474>(x475>x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = -1;
	int8_t x480 = INT8_MIN;
	int32_t t119 = -875743075;

    t119 = (x477==(x478>(x479>x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x481 = 0LLU;
	volatile uint64_t x482 = UINT64_MAX;
	volatile uint8_t x484 = UINT8_MAX;
	static volatile int32_t t120 = 17528;

    t120 = (x481==(x482>(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = 0;
	volatile int32_t x486 = -20918;
	uint32_t x487 = 483383069U;
	uint64_t x488 = 1LLU;
	int32_t t121 = -19;

    t121 = (x485==(x486>(x487>x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	uint8_t x491 = 3U;
	volatile int64_t x492 = 9LL;
	volatile int32_t t122 = 227119;

    t122 = (x489==(x490>(x491>x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	static uint64_t x494 = 8962556870240542LLU;
	static uint32_t x495 = UINT32_MAX;
	int32_t x496 = INT32_MAX;
	volatile int32_t t123 = -1;

    t123 = (x493==(x494>(x495>x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 4920871923060LL;
	static int32_t x498 = -91501;
	uint32_t x499 = UINT32_MAX;
	volatile uint64_t x500 = UINT64_MAX;
	int32_t t124 = 13599427;

    t124 = (x497==(x498>(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 519441990U;
	volatile uint64_t x502 = UINT64_MAX;
	int16_t x503 = INT16_MIN;
	int16_t x504 = INT16_MIN;
	volatile int32_t t125 = -35339990;

    t125 = (x501==(x502>(x503>x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = -1;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = 493;

    t126 = (x505==(x506>(x507>x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 269027LL;
	uint16_t x510 = UINT16_MAX;
	uint64_t x511 = 299869826077LLU;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t127 = 226032;

    t127 = (x509==(x510>(x511>x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 27U;
	int64_t x514 = -1LL;
	int64_t x515 = INT64_MAX;
	static volatile int32_t x516 = INT32_MIN;
	int32_t t128 = 2054;

    t128 = (x513==(x514>(x515>x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = 178U;
	uint8_t x519 = 41U;
	uint32_t x520 = UINT32_MAX;
	int32_t t129 = -3;

    t129 = (x517==(x518>(x519>x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x522 = 1289138LLU;
	static volatile uint8_t x524 = 1U;

    t130 = (x521==(x522>(x523>x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 1936U;
	volatile int8_t x526 = -1;
	static uint64_t x527 = 8424027LLU;
	int32_t t131 = -173533343;

    t131 = (x525==(x526>(x527>x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x531 = 24087U;

    t132 = (x529==(x530>(x531>x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int32_t x534 = -1;
	volatile int64_t x535 = INT64_MAX;
	volatile int32_t t133 = -1046563;

    t133 = (x533==(x534>(x535>x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	int32_t x538 = -1;
	int16_t x539 = -1;
	volatile uint32_t x540 = 1088715U;
	int32_t t134 = -165;

    t134 = (x537==(x538>(x539>x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = 3;
	uint8_t x542 = 0U;
	uint32_t x543 = 988507U;
	int16_t x544 = -1;
	int32_t t135 = -20965795;

    t135 = (x541==(x542>(x543>x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -8052;
	static int16_t x546 = -1;
	static int8_t x547 = -1;
	static volatile uint32_t x548 = 577U;
	int32_t t136 = 347700;

    t136 = (x545==(x546>(x547>x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MAX;
	uint32_t x552 = 125519U;

    t137 = (x549==(x550>(x551>x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = -39;
	volatile int32_t t138 = -18090570;

    t138 = (x553==(x554>(x555>x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x557 = UINT16_MAX;
	uint16_t x558 = UINT16_MAX;
	int64_t x559 = INT64_MIN;
	static int16_t x560 = INT16_MIN;
	volatile int32_t t139 = 398587;

    t139 = (x557==(x558>(x559>x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 1381133LLU;
	int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	int32_t x564 = INT32_MIN;

    t140 = (x561==(x562>(x563>x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	int16_t x567 = INT16_MIN;
	int8_t x568 = 54;
	volatile int32_t t141 = -330;

    t141 = (x565==(x566>(x567>x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1579159LL;
	int16_t x570 = 503;
	uint8_t x571 = 15U;
	int8_t x572 = -1;

    t142 = (x569==(x570>(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	static int16_t x575 = INT16_MIN;
	volatile uint16_t x576 = 3083U;
	volatile int32_t t143 = 1;

    t143 = (x573==(x574>(x575>x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = INT32_MIN;
	uint64_t x579 = 194855138340175LLU;
	uint16_t x580 = UINT16_MAX;
	int32_t t144 = 6060525;

    t144 = (x577==(x578>(x579>x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = -1;
	int8_t x582 = 27;
	int16_t x583 = 240;
	int32_t x584 = INT32_MIN;
	volatile int32_t t145 = -51420096;

    t145 = (x581==(x582>(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 3;
	uint64_t x586 = UINT64_MAX;
	int32_t x587 = -641400816;
	volatile int32_t t146 = 1614802;

    t146 = (x585==(x586>(x587>x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint32_t x589 = UINT32_MAX;
	uint64_t x591 = UINT64_MAX;
	volatile int32_t t147 = -60;

    t147 = (x589==(x590>(x591>x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 0U;
	int64_t x594 = INT64_MIN;
	volatile uint64_t x595 = UINT64_MAX;
	volatile int32_t t148 = 364339;

    t148 = (x593==(x594>(x595>x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int64_t x598 = INT64_MIN;
	int16_t x599 = INT16_MIN;

    t149 = (x597==(x598>(x599>x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 0U;
	volatile uint64_t x602 = UINT64_MAX;
	static int16_t x603 = 0;
	int16_t x604 = INT16_MIN;
	int32_t t150 = -28994;

    t150 = (x601==(x602>(x603>x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x606 = 2U;
	int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MAX;

    t151 = (x605==(x606>(x607>x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	int16_t x611 = INT16_MIN;
	uint16_t x612 = 14U;
	volatile int32_t t152 = 3235280;

    t152 = (x609==(x610>(x611>x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = UINT32_MAX;
	uint64_t x614 = UINT64_MAX;
	uint16_t x615 = 1376U;
	volatile int32_t t153 = 14;

    t153 = (x613==(x614>(x615>x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	uint16_t x618 = 106U;
	int8_t x619 = 11;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t154 = 8983;

    t154 = (x617==(x618>(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x622 = 8816;
	static int64_t x623 = INT64_MAX;
	int16_t x624 = -1;
	volatile int32_t t155 = -13857485;

    t155 = (x621==(x622>(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x625 = 573108U;
	uint8_t x626 = 1U;
	int32_t x627 = -1;
	uint64_t x628 = 69726366628180978LLU;
	volatile int32_t t156 = -81;

    t156 = (x625==(x626>(x627>x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 3U;
	int8_t x631 = -12;
	volatile int16_t x632 = INT16_MIN;
	volatile int32_t t157 = 0;

    t157 = (x629==(x630>(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 116168836U;
	int16_t x634 = -218;
	volatile uint8_t x635 = 76U;
	uint64_t x636 = UINT64_MAX;

    t158 = (x633==(x634>(x635>x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MAX;
	static volatile uint64_t x638 = 1752814908603LLU;
	uint8_t x639 = 0U;
	volatile int64_t x640 = INT64_MIN;
	static int32_t t159 = -1;

    t159 = (x637==(x638>(x639>x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	int8_t x642 = -1;
	int64_t x643 = -1LL;

    t160 = (x641==(x642>(x643>x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 120U;
	uint16_t x646 = UINT16_MAX;
	int64_t x647 = INT64_MIN;
	int32_t x648 = INT32_MIN;

    t161 = (x645==(x646>(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 207U;
	uint32_t x650 = 2336U;
	uint8_t x651 = UINT8_MAX;
	uint64_t x652 = 266802965265LLU;

    t162 = (x649==(x650>(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	int64_t x654 = -1LL;
	int64_t x655 = INT64_MAX;
	volatile int32_t t163 = -11805;

    t163 = (x653==(x654>(x655>x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	int8_t x659 = -1;
	volatile int8_t x660 = INT8_MIN;
	int32_t t164 = 355;

    t164 = (x657==(x658>(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int32_t x662 = 180232320;
	int32_t x663 = INT32_MAX;
	static volatile int32_t t165 = 377116;

    t165 = (x661==(x662>(x663>x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x666 = -1;
	int64_t x668 = -5044256019777LL;
	volatile int32_t t166 = 414;

    t166 = (x665==(x666>(x667>x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x670 = -1;
	volatile int8_t x671 = -1;
	volatile int8_t x672 = -1;
	int32_t t167 = -2678;

    t167 = (x669==(x670>(x671>x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = -1;
	uint8_t x674 = UINT8_MAX;
	volatile int8_t x675 = -6;
	int32_t x676 = -1939501;

    t168 = (x673==(x674>(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = 8;
	uint8_t x678 = UINT8_MAX;
	int32_t x680 = -1;
	int32_t t169 = -11;

    t169 = (x677==(x678>(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	volatile uint16_t x684 = 9687U;
	volatile int32_t t170 = -93;

    t170 = (x681==(x682>(x683>x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	int32_t x686 = 4675;
	int16_t x687 = 440;
	volatile uint64_t x688 = 257487216812427084LLU;
	volatile int32_t t171 = -1979;

    t171 = (x685==(x686>(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x691 = 1029434615U;
	volatile int32_t t172 = -27;

    t172 = (x689==(x690>(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MAX;
	int64_t x694 = INT64_MIN;
	uint16_t x695 = UINT16_MAX;
	static int8_t x696 = -57;
	static int32_t t173 = 21;

    t173 = (x693==(x694>(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = INT32_MIN;
	volatile uint16_t x700 = 581U;
	volatile int32_t t174 = -50088;

    t174 = (x697==(x698>(x699>x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 1LLU;
	uint16_t x702 = 1374U;
	int16_t x703 = INT16_MAX;
	int8_t x704 = -1;
	volatile int32_t t175 = -66306092;

    t175 = (x701==(x702>(x703>x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint32_t x705 = UINT32_MAX;
	uint8_t x706 = UINT8_MAX;
	uint32_t x708 = UINT32_MAX;
	volatile int32_t t176 = 3068181;

    t176 = (x705==(x706>(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	static int32_t x710 = INT32_MAX;
	int64_t x711 = INT64_MAX;
	static int8_t x712 = -5;
	volatile int32_t t177 = -13;

    t177 = (x709==(x710>(x711>x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = 3189331U;
	int64_t x714 = INT64_MIN;
	static int8_t x716 = -1;
	int32_t t178 = -1;

    t178 = (x713==(x714>(x715>x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x717 = INT64_MIN;
	volatile int16_t x718 = INT16_MIN;
	int32_t t179 = 252329765;

    t179 = (x717==(x718>(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x722 = INT64_MAX;
	uint32_t x723 = 1845U;
	volatile int16_t x724 = -1;
	int32_t t180 = 150;

    t180 = (x721==(x722>(x723>x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int32_t x727 = -748898386;
	volatile int8_t x728 = INT8_MIN;
	static volatile int32_t t181 = -21838981;

    t181 = (x725==(x726>(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = 3339429;
	volatile uint32_t x731 = 9U;
	uint8_t x732 = 3U;

    t182 = (x729==(x730>(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -782;
	int64_t x734 = -341LL;
	static uint8_t x735 = 118U;
	uint32_t x736 = UINT32_MAX;

    t183 = (x733==(x734>(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = -1LL;
	int32_t x738 = INT32_MAX;
	static int64_t x740 = -1LL;
	volatile int32_t t184 = 14;

    t184 = (x737==(x738>(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	uint64_t x743 = 6487LLU;
	int16_t x744 = INT16_MIN;
	volatile int32_t t185 = 13;

    t185 = (x741==(x742>(x743>x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 0;
	static volatile uint32_t x746 = 282016U;
	int32_t x747 = -1;
	volatile int16_t x748 = INT16_MIN;
	int32_t t186 = 4985426;

    t186 = (x745==(x746>(x747>x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = 1;
	int64_t x750 = -1LL;
	volatile int64_t x751 = INT64_MAX;
	int16_t x752 = -1;
	int32_t t187 = -219760602;

    t187 = (x749==(x750>(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MIN;
	int32_t x754 = INT32_MIN;
	int32_t x755 = 0;
	int16_t x756 = -1;

    t188 = (x753==(x754>(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MIN;
	int8_t x758 = 1;
	volatile int32_t x759 = -2015;
	static int32_t t189 = -104565;

    t189 = (x757==(x758>(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	uint32_t x762 = 29383636U;
	uint32_t x763 = 3073U;
	volatile uint64_t x764 = UINT64_MAX;
	volatile int32_t t190 = -1017426;

    t190 = (x761==(x762>(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x766 = -1LL;
	uint16_t x768 = 54U;
	int32_t t191 = 3529468;

    t191 = (x765==(x766>(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -1;
	uint64_t x770 = 137488708382438LLU;
	int32_t x771 = INT32_MIN;
	volatile int32_t t192 = -8;

    t192 = (x769==(x770>(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -1;
	uint32_t x774 = 18U;
	static uint16_t x775 = 1369U;
	int32_t x776 = -1;
	int32_t t193 = -56;

    t193 = (x773==(x774>(x775>x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x777 = UINT64_MAX;
	static int32_t x778 = INT32_MAX;
	uint64_t x779 = 81965351LLU;

    t194 = (x777==(x778>(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = INT8_MIN;
	static int64_t x782 = -207LL;
	static volatile int32_t x783 = -1637;
	int8_t x784 = INT8_MIN;
	static int32_t t195 = -5705;

    t195 = (x781==(x782>(x783>x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x785 = 7U;
	int32_t x787 = -15363;
	volatile int16_t x788 = -60;
	volatile int32_t t196 = -48194;

    t196 = (x785==(x786>(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x790 = UINT32_MAX;
	static int16_t x791 = INT16_MAX;
	int8_t x792 = 0;
	int32_t t197 = -155797;

    t197 = (x789==(x790>(x791>x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x794 = 157798700907LL;
	volatile int32_t t198 = 70;

    t198 = (x793==(x794>(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -421;
	volatile uint64_t x798 = 63524461799623300LLU;
	static uint32_t x799 = 14864U;
	static int16_t x800 = -102;
	static volatile int32_t t199 = 2070;

    t199 = (x797==(x798>(x799>x800)));

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

