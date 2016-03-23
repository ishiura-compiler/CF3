
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

static int32_t x3 = -1;
uint8_t x5 = UINT8_MAX;
int32_t t1 = 156967;
uint8_t x12 = UINT8_MAX;
volatile int16_t x14 = INT16_MAX;
int32_t x15 = -1023935972;
int16_t x16 = INT16_MIN;
int32_t x17 = INT32_MIN;
int8_t x20 = INT8_MIN;
volatile int32_t t4 = 64414;
static int64_t x33 = INT64_MAX;
int32_t x34 = 4967810;
static uint16_t x35 = 5U;
volatile uint16_t x37 = 2U;
static int32_t x38 = INT32_MAX;
int64_t x44 = -44624138727414LL;
volatile int32_t t8 = 54852;
uint32_t x49 = 137U;
int32_t x51 = INT32_MIN;
volatile int32_t t10 = -27229;
uint8_t x58 = 7U;
int64_t x61 = -40253LL;
int32_t x63 = -43246;
static volatile int32_t t13 = -22126317;
volatile int64_t x66 = INT64_MAX;
volatile uint32_t x71 = 102072555U;
static volatile int32_t t15 = -8596;
uint64_t x78 = UINT64_MAX;
volatile int8_t x80 = INT8_MAX;
int16_t x82 = INT16_MAX;
static volatile int32_t t19 = -131262428;
volatile uint32_t x92 = 381U;
int32_t x94 = INT32_MIN;
uint8_t x101 = 32U;
int8_t x104 = -3;
int32_t t23 = 839;
int32_t x105 = INT32_MAX;
int8_t x113 = -1;
volatile int32_t t26 = -4031669;
static volatile int32_t x126 = INT32_MIN;
uint32_t x127 = UINT32_MAX;
static int32_t x132 = -3180;
volatile int16_t x140 = INT16_MIN;
int32_t t34 = 328543;
int32_t t35 = 25226511;
int8_t x153 = INT8_MIN;
uint8_t x158 = 52U;
uint8_t x159 = UINT8_MAX;
volatile int16_t x162 = 21;
int32_t t38 = 106;
volatile int16_t x166 = INT16_MAX;
volatile int32_t t40 = -3977306;
static volatile uint64_t x174 = UINT64_MAX;
int16_t x176 = INT16_MAX;
static uint64_t x194 = 2167249856972825LLU;
int32_t t45 = 950;
int16_t x201 = INT16_MIN;
volatile int64_t x202 = -7529846LL;
volatile int32_t x205 = INT32_MIN;
volatile uint16_t x211 = 29U;
volatile int32_t t49 = 48;
volatile int32_t t50 = -3;
volatile int16_t x225 = -21;
uint32_t x227 = UINT32_MAX;
uint64_t x228 = 1764344LLU;
int64_t x233 = -1LL;
volatile uint32_t x234 = 134173994U;
uint32_t x236 = 1498537U;
volatile int64_t x237 = INT64_MIN;
volatile int32_t x244 = INT32_MIN;
volatile int32_t t57 = 1;
int64_t x258 = INT64_MIN;
int32_t x268 = INT32_MAX;
int8_t x269 = 27;
uint32_t x272 = 5099U;
static int32_t t64 = -31273;
static int64_t x277 = INT64_MIN;
static uint8_t x282 = 31U;
int32_t t67 = -349252308;
static volatile int16_t x286 = INT16_MIN;
static uint64_t x288 = 1322LLU;
uint32_t x295 = 3662U;
volatile int16_t x296 = INT16_MIN;
volatile int8_t x298 = INT8_MIN;
int32_t x302 = 0;
uint16_t x307 = UINT16_MAX;
uint64_t x320 = UINT64_MAX;
static uint64_t x326 = 159232224LLU;
int64_t x334 = INT64_MAX;
volatile int32_t t80 = 2;
int32_t x343 = 124884;
int32_t t83 = 81563;
static int32_t x355 = INT32_MIN;
volatile uint64_t x369 = UINT64_MAX;
int32_t x373 = -193911394;
volatile uint64_t x374 = 27346482LLU;
int64_t x375 = -822468LL;
int8_t x385 = INT8_MIN;
int8_t x387 = INT8_MIN;
uint8_t x389 = 2U;
uint8_t x394 = UINT8_MAX;
uint16_t x395 = 0U;
int8_t x396 = -1;
volatile uint64_t x397 = UINT64_MAX;
static int8_t x399 = INT8_MAX;
volatile int64_t x407 = INT64_MAX;
int32_t t98 = -8;
uint32_t x412 = 2526U;
int16_t x423 = INT16_MIN;
static int64_t x427 = -1LL;
static int32_t t104 = -35617941;
int32_t x438 = INT32_MIN;
volatile int32_t t106 = -65297053;
uint16_t x450 = UINT16_MAX;
volatile int32_t x451 = INT32_MIN;
int32_t t108 = 38926;
int8_t x460 = INT8_MAX;
uint64_t x462 = 18474435067645LLU;
uint32_t x465 = 6000U;
volatile uint16_t x468 = 4482U;
int8_t x470 = 30;
uint64_t x476 = 4504531068203885081LLU;
volatile int32_t t113 = 14545571;
int16_t x480 = -1;
int16_t x481 = 19;
int32_t x482 = 233933003;
static uint16_t x486 = 956U;
static uint64_t x492 = 473551LLU;
static int8_t x493 = INT8_MIN;
int32_t x505 = INT32_MIN;
int32_t t122 = -6028;
int32_t x518 = INT32_MIN;
uint8_t x519 = UINT8_MAX;
static volatile int16_t x520 = INT16_MIN;
static int32_t t125 = -63;
int32_t x537 = -1;
uint32_t x539 = 99U;
static int8_t x540 = -1;
uint16_t x542 = 2U;
uint16_t x546 = UINT16_MAX;
int32_t x547 = INT32_MAX;
uint64_t x576 = 23598LLU;
volatile int32_t t138 = -1939;
int8_t x581 = -1;
volatile int32_t t140 = -646577;
uint32_t x586 = 592262993U;
static int32_t x587 = 6;
static int32_t t143 = 0;
int8_t x601 = 0;
int8_t x603 = INT8_MAX;
static int16_t x607 = INT16_MIN;
int32_t x608 = 701110057;
uint16_t x615 = 998U;
volatile uint64_t x619 = 40LLU;
int16_t x620 = INT16_MIN;
int32_t x624 = INT32_MAX;
static int32_t t150 = -39842819;
volatile int16_t x626 = INT16_MIN;
int64_t x632 = 3475309LL;
volatile int32_t t152 = 515103;
uint8_t x634 = 11U;
static volatile int32_t x635 = INT32_MIN;
volatile uint64_t x652 = 1969LLU;
int32_t t157 = -63;
volatile uint8_t x655 = UINT8_MAX;
static int32_t t158 = -81815;
int64_t x659 = INT64_MAX;
static int16_t x664 = -2206;
int32_t x665 = 1;
static volatile int8_t x674 = INT8_MAX;
static volatile int32_t x678 = -1;
int32_t x681 = -1;
volatile int32_t t164 = -1028;
volatile int16_t x688 = -323;
volatile int8_t x693 = INT8_MAX;
int64_t x694 = -1LL;
int64_t x695 = -12369LL;
int8_t x710 = INT8_MIN;
int16_t x714 = INT16_MIN;
static int8_t x718 = -1;
int16_t x719 = -1;
int64_t x722 = INT64_MIN;
uint8_t x730 = 0U;
uint8_t x731 = 15U;
volatile uint16_t x736 = 23229U;
volatile int16_t x741 = 0;
static int32_t x742 = -1;
uint8_t x746 = 26U;
int8_t x749 = 19;
int32_t x751 = INT32_MIN;
static int64_t x753 = 169529LL;
volatile int32_t t182 = -49939;
int8_t x760 = -17;
uint8_t x761 = 8U;
uint16_t x762 = UINT16_MAX;
int8_t x770 = 0;
int32_t x779 = 2319508;
int32_t x781 = INT32_MIN;
uint16_t x785 = 8U;
uint16_t x787 = UINT16_MAX;
int32_t t190 = 0;
static int32_t t191 = 12;
static volatile int32_t t194 = -168;
uint32_t x813 = UINT32_MAX;
uint16_t x816 = 12U;
volatile int16_t x818 = -1;
int32_t x822 = INT32_MIN;
static int32_t t199 = -32137722;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static int16_t x2 = INT16_MIN;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -540076;

    t0 = (x1!=(x2/(x3!=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 42U;
	uint8_t x7 = 1U;
	volatile int16_t x8 = INT16_MIN;

    t1 = (x5!=(x6/(x7!=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x9 = 11467LLU;
	uint64_t x10 = UINT64_MAX;
	static int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -432921247;

    t2 = (x9!=(x10/(x11!=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 1;
	static volatile int32_t t3 = 490264734;

    t3 = (x13!=(x14/(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x18 = -1461;
	volatile int32_t x19 = 0;

    t4 = (x17!=(x18/(x19!=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	static int8_t x26 = INT8_MIN;
	static volatile int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MAX;
	int32_t t5 = 0;

    t5 = (x25!=(x26/(x27!=x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x36 = UINT16_MAX;
	int32_t t6 = -10;

    t6 = (x33!=(x34/(x35!=x36)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x39 = -1;
	static uint8_t x40 = 4U;
	volatile int32_t t7 = 7;

    t7 = (x37!=(x38/(x39!=x40)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = UINT16_MAX;
	int8_t x42 = -1;
	static int32_t x43 = INT32_MIN;

    t8 = (x41!=(x42/(x43!=x44)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = -72;
	int32_t x46 = INT32_MAX;
	volatile uint16_t x47 = 1755U;
	volatile int8_t x48 = 0;
	int32_t t9 = 5297;

    t9 = (x45!=(x46/(x47!=x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x50 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;

    t10 = (x49!=(x50/(x51!=x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x53 = 19299LLU;
	static uint16_t x54 = 15689U;
	static int64_t x55 = INT64_MAX;
	uint8_t x56 = 52U;
	volatile int32_t t11 = -327948762;

    t11 = (x53!=(x54/(x55!=x56)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x57 = 3U;
	int64_t x59 = INT64_MIN;
	int64_t x60 = -8021008583445LL;
	volatile int32_t t12 = -160869;

    t12 = (x57!=(x58/(x59!=x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x62 = -1;
	volatile int16_t x64 = -1;

    t13 = (x61!=(x62/(x63!=x64)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x65 = 39U;
	int32_t x67 = -1;
	int64_t x68 = -5310546842627528LL;
	static volatile int32_t t14 = 0;

    t14 = (x65!=(x66/(x67!=x68)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x69 = -1969;
	static int8_t x70 = INT8_MAX;
	int16_t x72 = -4710;

    t15 = (x69!=(x70/(x71!=x72)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MAX;
	volatile int64_t x74 = 4LL;
	uint8_t x75 = UINT8_MAX;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t16 = -51635;

    t16 = (x73!=(x74/(x75!=x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MIN;
	volatile uint8_t x79 = 2U;
	int32_t t17 = 1811176;

    t17 = (x77!=(x78/(x79!=x80)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MIN;
	volatile uint32_t x83 = UINT32_MAX;
	int64_t x84 = -523065836819948481LL;
	volatile int32_t t18 = 10;

    t18 = (x81!=(x82/(x83!=x84)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	static uint8_t x86 = UINT8_MAX;
	uint64_t x87 = 213494138LLU;
	volatile int32_t x88 = -1;

    t19 = (x85!=(x86/(x87!=x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	volatile int32_t t20 = 1;

    t20 = (x89!=(x90/(x91!=x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	int32_t x95 = 311826;
	int8_t x96 = INT8_MIN;
	int32_t t21 = 0;

    t21 = (x93!=(x94/(x95!=x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = 12130238578052LL;
	int32_t x98 = -26;
	static int16_t x99 = INT16_MIN;
	uint64_t x100 = 377546703826LLU;
	volatile int32_t t22 = -531169;

    t22 = (x97!=(x98/(x99!=x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x102 = 127U;
	uint16_t x103 = 880U;

    t23 = (x101!=(x102/(x103!=x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x106 = 2U;
	int64_t x107 = 14326652411914LL;
	int32_t x108 = -1372467;
	int32_t t24 = 558173;

    t24 = (x105!=(x106/(x107!=x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x109 = -1;
	uint32_t x110 = 477757406U;
	int64_t x111 = -1LL;
	int16_t x112 = INT16_MIN;
	int32_t t25 = 0;

    t25 = (x109!=(x110/(x111!=x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 982U;

    t26 = (x113!=(x114/(x115!=x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = 422U;
	int8_t x118 = 1;
	static int16_t x119 = -6;
	int64_t x120 = -1LL;
	int32_t t27 = -11;

    t27 = (x117!=(x118/(x119!=x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MAX;
	static int8_t x122 = INT8_MIN;
	static volatile uint16_t x123 = 6166U;
	static int8_t x124 = 0;
	volatile int32_t t28 = 3199;

    t28 = (x121!=(x122/(x123!=x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x125 = -7347;
	uint64_t x128 = 7804102205442634197LLU;
	static volatile int32_t t29 = 19;

    t29 = (x125!=(x126/(x127!=x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = 0;
	uint64_t x130 = UINT64_MAX;
	volatile int64_t x131 = 428523996LL;
	int32_t t30 = 232986033;

    t30 = (x129!=(x130/(x131!=x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x133 = UINT64_MAX;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = 2;
	static uint16_t x136 = 142U;
	int32_t t31 = -1569;

    t31 = (x133!=(x134/(x135!=x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -1;
	int32_t x138 = -1;
	static int32_t x139 = INT32_MIN;
	int32_t t32 = 2;

    t32 = (x137!=(x138/(x139!=x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x141 = INT8_MIN;
	int8_t x142 = -2;
	static volatile int8_t x143 = INT8_MAX;
	int32_t x144 = -12207;
	volatile int32_t t33 = 689677670;

    t33 = (x141!=(x142/(x143!=x144)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x145 = 36U;
	uint32_t x146 = 876820U;
	volatile int16_t x147 = INT16_MAX;
	uint64_t x148 = UINT64_MAX;

    t34 = (x145!=(x146/(x147!=x148)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x149 = 411U;
	static int8_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = -25;

    t35 = (x149!=(x150/(x151!=x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x154 = -2;
	volatile uint64_t x155 = UINT64_MAX;
	uint64_t x156 = 60875937920563LLU;
	volatile int32_t t36 = 50;

    t36 = (x153!=(x154/(x155!=x156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = INT16_MIN;
	uint32_t x160 = UINT32_MAX;
	static volatile int32_t t37 = 0;

    t37 = (x157!=(x158/(x159!=x160)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	static uint8_t x164 = 0U;

    t38 = (x161!=(x162/(x163!=x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MIN;
	uint16_t x167 = 7928U;
	int64_t x168 = -1LL;
	int32_t t39 = -1;

    t39 = (x165!=(x166/(x167!=x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = UINT64_MAX;
	static int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MAX;
	uint32_t x172 = UINT32_MAX;

    t40 = (x169!=(x170/(x171!=x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = INT16_MAX;
	volatile uint16_t x175 = 912U;
	static volatile int32_t t41 = 144;

    t41 = (x173!=(x174/(x175!=x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = 3U;
	int64_t x178 = -1LL;
	volatile int64_t x179 = INT64_MIN;
	int32_t x180 = -1;
	static int32_t t42 = -4687095;

    t42 = (x177!=(x178/(x179!=x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x181 = UINT8_MAX;
	int64_t x182 = -148553428025LL;
	int64_t x183 = -8395LL;
	static int64_t x184 = -1LL;
	int32_t t43 = 711002;

    t43 = (x181!=(x182/(x183!=x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = -1;
	int8_t x186 = INT8_MIN;
	uint64_t x187 = 262061838195LLU;
	static uint16_t x188 = 1U;
	int32_t t44 = -16470207;

    t44 = (x185!=(x186/(x187!=x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x193 = 10960U;
	volatile uint16_t x195 = 3U;
	int64_t x196 = 4416044398LL;

    t45 = (x193!=(x194/(x195!=x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x197 = 83U;
	static int8_t x198 = -1;
	static uint64_t x199 = 1967472506070LLU;
	volatile int32_t x200 = INT32_MAX;
	volatile int32_t t46 = -70836833;

    t46 = (x197!=(x198/(x199!=x200)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x203 = INT16_MAX;
	static int32_t x204 = INT32_MIN;
	static volatile int32_t t47 = -3472;

    t47 = (x201!=(x202/(x203!=x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x206 = 9343;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = INT64_MIN;
	int32_t t48 = 71558410;

    t48 = (x205!=(x206/(x207!=x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = INT64_MIN;
	int16_t x210 = 0;
	volatile int64_t x212 = INT64_MIN;

    t49 = (x209!=(x210/(x211!=x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	volatile uint64_t x215 = 532LLU;
	int16_t x216 = INT16_MIN;

    t50 = (x213!=(x214/(x215!=x216)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x217 = -24;
	int64_t x218 = INT64_MIN;
	uint32_t x219 = 389596269U;
	volatile int32_t x220 = INT32_MAX;
	static volatile int32_t t51 = -22160;

    t51 = (x217!=(x218/(x219!=x220)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = INT32_MIN;
	uint8_t x222 = UINT8_MAX;
	static int32_t x223 = INT32_MAX;
	int64_t x224 = 2568LL;
	int32_t t52 = 22195032;

    t52 = (x221!=(x222/(x223!=x224)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x226 = 1U;
	volatile int32_t t53 = -42490450;

    t53 = (x225!=(x226/(x227!=x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = -1;
	int32_t x230 = -1;
	uint64_t x231 = 45367LLU;
	int16_t x232 = -450;
	int32_t t54 = -68160470;

    t54 = (x229!=(x230/(x231!=x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x235 = INT32_MIN;
	int32_t t55 = 296905;

    t55 = (x233!=(x234/(x235!=x236)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x238 = INT8_MIN;
	static uint64_t x239 = 6LLU;
	int64_t x240 = INT64_MIN;
	int32_t t56 = 17;

    t56 = (x237!=(x238/(x239!=x240)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x241 = INT8_MIN;
	volatile uint32_t x242 = 12331454U;
	static int32_t x243 = INT32_MAX;

    t57 = (x241!=(x242/(x243!=x244)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = 37;
	uint8_t x246 = 92U;
	volatile int16_t x247 = 3336;
	uint16_t x248 = UINT16_MAX;
	int32_t t58 = -40512498;

    t58 = (x245!=(x246/(x247!=x248)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MAX;
	uint64_t x250 = 146LLU;
	uint8_t x251 = 1U;
	int32_t x252 = -1;
	static int32_t t59 = -3248;

    t59 = (x249!=(x250/(x251!=x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x253 = INT64_MAX;
	uint8_t x254 = 1U;
	volatile uint32_t x255 = UINT32_MAX;
	int64_t x256 = -1LL;
	volatile int32_t t60 = -787;

    t60 = (x253!=(x254/(x255!=x256)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x257 = 2LLU;
	uint64_t x259 = 2593881833552897910LLU;
	static int16_t x260 = -1;
	volatile int32_t t61 = 220701;

    t61 = (x257!=(x258/(x259!=x260)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = INT16_MIN;
	uint32_t x262 = 82U;
	static uint8_t x263 = UINT8_MAX;
	static int8_t x264 = 0;
	volatile int32_t t62 = -78;

    t62 = (x261!=(x262/(x263!=x264)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = -1;
	int16_t x266 = 85;
	int32_t x267 = INT32_MIN;
	int32_t t63 = -251839702;

    t63 = (x265!=(x266/(x267!=x268)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x270 = 89U;
	static uint64_t x271 = 322682373669063431LLU;

    t64 = (x269!=(x270/(x271!=x272)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x273 = INT8_MIN;
	int64_t x274 = -1194LL;
	static uint8_t x275 = UINT8_MAX;
	int64_t x276 = 63968124649LL;
	int32_t t65 = -48;

    t65 = (x273!=(x274/(x275!=x276)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x278 = INT32_MAX;
	int16_t x279 = -1;
	volatile uint64_t x280 = 164420LLU;
	volatile int32_t t66 = 71671;

    t66 = (x277!=(x278/(x279!=x280)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MIN;
	uint32_t x283 = 37U;
	int8_t x284 = -1;

    t67 = (x281!=(x282/(x283!=x284)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x285 = -1;
	uint32_t x287 = UINT32_MAX;
	int32_t t68 = 829;

    t68 = (x285!=(x286/(x287!=x288)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x289 = INT8_MIN;
	uint64_t x290 = 5LLU;
	static int8_t x291 = -1;
	int64_t x292 = INT64_MIN;
	volatile int32_t t69 = -399435;

    t69 = (x289!=(x290/(x291!=x292)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x293 = 3U;
	uint8_t x294 = UINT8_MAX;
	int32_t t70 = 29021;

    t70 = (x293!=(x294/(x295!=x296)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x297 = INT8_MIN;
	int32_t x299 = -1;
	int64_t x300 = INT64_MIN;
	int32_t t71 = 242695;

    t71 = (x297!=(x298/(x299!=x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x301 = UINT64_MAX;
	static uint32_t x303 = 113192U;
	uint64_t x304 = 7LLU;
	static volatile int32_t t72 = 1644;

    t72 = (x301!=(x302/(x303!=x304)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x305 = 1436475897862LLU;
	int32_t x306 = -1;
	int64_t x308 = INT64_MIN;
	volatile int32_t t73 = -265897;

    t73 = (x305!=(x306/(x307!=x308)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = INT8_MAX;
	static int32_t x310 = INT32_MIN;
	int8_t x311 = -1;
	volatile int32_t x312 = -459288;
	static int32_t t74 = 23;

    t74 = (x309!=(x310/(x311!=x312)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x313 = UINT32_MAX;
	static int32_t x314 = -6303422;
	static int64_t x315 = 74046290756654566LL;
	uint8_t x316 = UINT8_MAX;
	int32_t t75 = 14507110;

    t75 = (x313!=(x314/(x315!=x316)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x317 = -4;
	int64_t x318 = -1LL;
	volatile int32_t x319 = INT32_MIN;
	int32_t t76 = 1017545632;

    t76 = (x317!=(x318/(x319!=x320)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MIN;
	int64_t x323 = -1296220025623374387LL;
	int8_t x324 = -1;
	int32_t t77 = 7503;

    t77 = (x321!=(x322/(x323!=x324)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x325 = 4LLU;
	uint8_t x327 = 7U;
	int16_t x328 = -1;
	volatile int32_t t78 = 10481316;

    t78 = (x325!=(x326/(x327!=x328)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x329 = 641367LLU;
	uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 8897067U;
	uint64_t x332 = 353542111LLU;
	static volatile int32_t t79 = -26773;

    t79 = (x329!=(x330/(x331!=x332)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MAX;
	int32_t x335 = INT32_MAX;
	volatile int64_t x336 = -16321350549735456LL;

    t80 = (x333!=(x334/(x335!=x336)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x337 = UINT16_MAX;
	int16_t x338 = -1;
	int8_t x339 = -1;
	volatile uint32_t x340 = 397927U;
	volatile int32_t t81 = 12;

    t81 = (x337!=(x338/(x339!=x340)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x342 = UINT64_MAX;
	int8_t x344 = -1;
	int32_t t82 = 889726;

    t82 = (x341!=(x342/(x343!=x344)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x345 = 1954838676U;
	static int64_t x346 = -1LL;
	static int8_t x347 = INT8_MAX;
	volatile int8_t x348 = 1;

    t83 = (x345!=(x346/(x347!=x348)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x349 = INT32_MAX;
	uint16_t x350 = UINT16_MAX;
	uint32_t x351 = UINT32_MAX;
	uint8_t x352 = 0U;
	int32_t t84 = 10;

    t84 = (x349!=(x350/(x351!=x352)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = -16530821346294105LL;
	volatile uint64_t x354 = 41315737LLU;
	uint16_t x356 = UINT16_MAX;
	int32_t t85 = 289072;

    t85 = (x353!=(x354/(x355!=x356)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x357 = 1;
	int32_t x358 = 1;
	int16_t x359 = INT16_MAX;
	uint16_t x360 = 108U;
	static volatile int32_t t86 = -55078016;

    t86 = (x357!=(x358/(x359!=x360)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x361 = 16293U;
	int16_t x362 = INT16_MAX;
	int16_t x363 = -110;
	volatile uint8_t x364 = 119U;
	volatile int32_t t87 = 1171;

    t87 = (x361!=(x362/(x363!=x364)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	uint16_t x368 = 83U;
	int32_t t88 = -6423228;

    t88 = (x365!=(x366/(x367!=x368)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t89 = 88717749;

    t89 = (x369!=(x370/(x371!=x372)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x376 = -1LL;
	int32_t t90 = 3019941;

    t90 = (x373!=(x374/(x375!=x376)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	volatile int16_t x379 = INT16_MIN;
	volatile int16_t x380 = -1;
	volatile int32_t t91 = 3770542;

    t91 = (x377!=(x378/(x379!=x380)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x381 = INT16_MAX;
	static uint8_t x382 = UINT8_MAX;
	volatile uint16_t x383 = 4U;
	volatile int16_t x384 = 0;
	volatile int32_t t92 = -7262646;

    t92 = (x381!=(x382/(x383!=x384)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x386 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t93 = 1;

    t93 = (x385!=(x386/(x387!=x388)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	static int32_t t94 = 2471717;

    t94 = (x389!=(x390/(x391!=x392)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x393 = INT32_MAX;
	volatile int32_t t95 = 2;

    t95 = (x393!=(x394/(x395!=x396)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x398 = INT16_MIN;
	int8_t x400 = -1;
	volatile int32_t t96 = 1450815;

    t96 = (x397!=(x398/(x399!=x400)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = INT16_MIN;
	static int32_t x402 = INT32_MAX;
	uint32_t x403 = 753120U;
	uint64_t x404 = 3546LLU;
	volatile int32_t t97 = -133967241;

    t97 = (x401!=(x402/(x403!=x404)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	int64_t x406 = 77LL;
	int8_t x408 = INT8_MIN;

    t98 = (x405!=(x406/(x407!=x408)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x409 = -26;
	static uint32_t x410 = 483023580U;
	uint16_t x411 = 22U;
	int32_t t99 = -2074798;

    t99 = (x409!=(x410/(x411!=x412)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x413 = INT8_MIN;
	int16_t x414 = 19;
	int64_t x415 = INT64_MIN;
	int8_t x416 = -1;
	volatile int32_t t100 = 160911;

    t100 = (x413!=(x414/(x415!=x416)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x417 = 887U;
	int16_t x418 = -1;
	volatile int32_t x419 = -12512;
	static uint16_t x420 = 1614U;
	int32_t t101 = 85015;

    t101 = (x417!=(x418/(x419!=x420)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x421 = 16193750463053LLU;
	uint64_t x422 = 483702893019213LLU;
	int32_t x424 = -1093269;
	volatile int32_t t102 = -1507;

    t102 = (x421!=(x422/(x423!=x424)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x425 = 6981U;
	volatile int8_t x426 = INT8_MAX;
	static uint16_t x428 = 0U;
	int32_t t103 = -5479;

    t103 = (x425!=(x426/(x427!=x428)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x429 = -1;
	int8_t x430 = -28;
	int16_t x431 = INT16_MAX;
	int64_t x432 = -1LL;

    t104 = (x429!=(x430/(x431!=x432)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x437 = 1334U;
	static uint64_t x439 = UINT64_MAX;
	static int8_t x440 = INT8_MAX;
	int32_t t105 = -13154;

    t105 = (x437!=(x438/(x439!=x440)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x445 = 56;
	int16_t x446 = -7;
	uint32_t x447 = 2624U;
	static int8_t x448 = INT8_MIN;

    t106 = (x445!=(x446/(x447!=x448)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x449 = 23903U;
	int64_t x452 = INT64_MIN;
	int32_t t107 = -2085104;

    t107 = (x449!=(x450/(x451!=x452)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile int8_t x454 = INT8_MAX;
	int8_t x455 = -21;
	int16_t x456 = INT16_MAX;

    t108 = (x453!=(x454/(x455!=x456)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x457 = 1U;
	int32_t x458 = -5245;
	volatile uint16_t x459 = 3561U;
	int32_t t109 = -131947;

    t109 = (x457!=(x458/(x459!=x460)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x461 = 106U;
	int32_t x463 = -1;
	uint64_t x464 = 29006773372LLU;
	static int32_t t110 = -21;

    t110 = (x461!=(x462/(x463!=x464)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x466 = INT16_MAX;
	static uint8_t x467 = 120U;
	static int32_t t111 = -19307;

    t111 = (x465!=(x466/(x467!=x468)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x469 = INT8_MAX;
	int16_t x471 = INT16_MIN;
	uint64_t x472 = UINT64_MAX;
	int32_t t112 = -1;

    t112 = (x469!=(x470/(x471!=x472)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x473 = 974453875U;
	int64_t x474 = 2LL;
	int32_t x475 = 257;

    t113 = (x473!=(x474/(x475!=x476)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x477 = INT64_MIN;
	static int16_t x478 = INT16_MAX;
	static int64_t x479 = 16LL;
	volatile int32_t t114 = -3824372;

    t114 = (x477!=(x478/(x479!=x480)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x483 = 0LLU;
	uint64_t x484 = 1431689695731597155LLU;
	static int32_t t115 = -549276;

    t115 = (x481!=(x482/(x483!=x484)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x485 = INT8_MIN;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = 42548543730292LLU;
	volatile int32_t t116 = 57891;

    t116 = (x485!=(x486/(x487!=x488)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = INT64_MIN;
	uint64_t x491 = 207935002260LLU;
	int32_t t117 = 57029;

    t117 = (x489!=(x490/(x491!=x492)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x494 = INT16_MAX;
	int32_t x495 = -1;
	int16_t x496 = 20;
	volatile int32_t t118 = -2141796;

    t118 = (x493!=(x494/(x495!=x496)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x497 = 3LLU;
	volatile int64_t x498 = INT64_MIN;
	volatile uint64_t x499 = 6462LLU;
	uint32_t x500 = UINT32_MAX;
	int32_t t119 = -28;

    t119 = (x497!=(x498/(x499!=x500)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x501 = -1;
	int8_t x502 = INT8_MIN;
	int64_t x503 = -1LL;
	int16_t x504 = INT16_MIN;
	volatile int32_t t120 = -80021504;

    t120 = (x501!=(x502/(x503!=x504)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x506 = UINT64_MAX;
	static uint64_t x507 = 36360629451248817LLU;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t121 = 22251;

    t121 = (x505!=(x506/(x507!=x508)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x509 = 72U;
	static int8_t x510 = -1;
	static volatile int16_t x511 = INT16_MIN;
	int8_t x512 = INT8_MAX;

    t122 = (x509!=(x510/(x511!=x512)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x513 = UINT16_MAX;
	uint8_t x514 = UINT8_MAX;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = UINT16_MAX;
	int32_t t123 = -1330917;

    t123 = (x513!=(x514/(x515!=x516)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x517 = -46;
	int32_t t124 = -39;

    t124 = (x517!=(x518/(x519!=x520)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x521 = 8641U;
	int64_t x522 = -1LL;
	int32_t x523 = -194;
	int8_t x524 = INT8_MAX;

    t125 = (x521!=(x522/(x523!=x524)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x525 = INT16_MIN;
	static uint32_t x526 = 91870U;
	static int64_t x527 = INT64_MIN;
	static int64_t x528 = INT64_MAX;
	int32_t t126 = 228622627;

    t126 = (x525!=(x526/(x527!=x528)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x529 = INT32_MIN;
	int16_t x530 = -1;
	int16_t x531 = INT16_MIN;
	uint16_t x532 = 1U;
	static volatile int32_t t127 = 0;

    t127 = (x529!=(x530/(x531!=x532)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = -15;
	uint16_t x534 = 136U;
	volatile int8_t x535 = 0;
	uint32_t x536 = 1600307U;
	static int32_t t128 = -502909521;

    t128 = (x533!=(x534/(x535!=x536)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x538 = 156346303509293902LLU;
	int32_t t129 = 203863719;

    t129 = (x537!=(x538/(x539!=x540)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = INT16_MIN;
	uint32_t x543 = 111974U;
	static volatile int32_t x544 = 10;
	volatile int32_t t130 = -1;

    t130 = (x541!=(x542/(x543!=x544)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x545 = 1;
	volatile int32_t x548 = -1;
	int32_t t131 = -1268;

    t131 = (x545!=(x546/(x547!=x548)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x549 = INT16_MIN;
	int64_t x550 = -3530LL;
	int32_t x551 = 232;
	int64_t x552 = 194275LL;
	volatile int32_t t132 = -201;

    t132 = (x549!=(x550/(x551!=x552)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x553 = 146;
	int16_t x554 = INT16_MIN;
	int8_t x555 = -1;
	static int32_t x556 = INT32_MAX;
	volatile int32_t t133 = 81;

    t133 = (x553!=(x554/(x555!=x556)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x557 = INT8_MIN;
	volatile int64_t x558 = INT64_MIN;
	uint16_t x559 = 22660U;
	uint8_t x560 = UINT8_MAX;
	int32_t t134 = -23248;

    t134 = (x557!=(x558/(x559!=x560)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x561 = 2U;
	int8_t x562 = INT8_MIN;
	volatile int8_t x563 = INT8_MIN;
	int64_t x564 = -1LL;
	int32_t t135 = 57167365;

    t135 = (x561!=(x562/(x563!=x564)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x565 = INT8_MIN;
	int8_t x566 = INT8_MIN;
	int16_t x567 = 27;
	volatile int16_t x568 = INT16_MIN;
	volatile int32_t t136 = -26781;

    t136 = (x565!=(x566/(x567!=x568)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = -1LL;
	uint16_t x570 = UINT16_MAX;
	int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MIN;
	volatile int32_t t137 = 393999112;

    t137 = (x569!=(x570/(x571!=x572)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x573 = -24722548;
	int64_t x574 = 280490435109812381LL;
	volatile int16_t x575 = INT16_MIN;

    t138 = (x573!=(x574/(x575!=x576)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x577 = 7U;
	int16_t x578 = INT16_MAX;
	int16_t x579 = INT16_MIN;
	volatile uint16_t x580 = 5761U;
	volatile int32_t t139 = 116;

    t139 = (x577!=(x578/(x579!=x580)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x582 = 102519LL;
	uint32_t x583 = 16147U;
	int32_t x584 = 1;

    t140 = (x581!=(x582/(x583!=x584)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x585 = 761203584904LLU;
	int16_t x588 = INT16_MIN;
	volatile int32_t t141 = -1105;

    t141 = (x585!=(x586/(x587!=x588)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x589 = 0LLU;
	static int32_t x590 = INT32_MIN;
	static int16_t x591 = INT16_MAX;
	volatile int16_t x592 = -1;
	int32_t t142 = -9101942;

    t142 = (x589!=(x590/(x591!=x592)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x593 = INT8_MIN;
	int32_t x594 = 9224541;
	uint64_t x595 = 2095003211LLU;
	volatile int8_t x596 = -3;

    t143 = (x593!=(x594/(x595!=x596)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x597 = UINT32_MAX;
	uint32_t x598 = 33876748U;
	int32_t x599 = INT32_MIN;
	static int32_t x600 = INT32_MAX;
	volatile int32_t t144 = 1;

    t144 = (x597!=(x598/(x599!=x600)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x602 = INT16_MIN;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t145 = -13215;

    t145 = (x601!=(x602/(x603!=x604)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x605 = 196U;
	volatile int16_t x606 = INT16_MIN;
	int32_t t146 = -267;

    t146 = (x605!=(x606/(x607!=x608)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x609 = 19941093U;
	int8_t x610 = -1;
	int8_t x611 = INT8_MIN;
	uint8_t x612 = 112U;
	static int32_t t147 = -1463377;

    t147 = (x609!=(x610/(x611!=x612)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x613 = 37U;
	int16_t x614 = 31;
	int8_t x616 = -3;
	volatile int32_t t148 = 49064;

    t148 = (x613!=(x614/(x615!=x616)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x617 = INT32_MAX;
	volatile uint16_t x618 = 27521U;
	int32_t t149 = -2;

    t149 = (x617!=(x618/(x619!=x620)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x621 = -4490;
	int32_t x622 = INT32_MIN;
	uint32_t x623 = UINT32_MAX;

    t150 = (x621!=(x622/(x623!=x624)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x625 = 0U;
	volatile int64_t x627 = INT64_MAX;
	int16_t x628 = INT16_MAX;
	int32_t t151 = 11530557;

    t151 = (x625!=(x626/(x627!=x628)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x629 = 2U;
	static volatile int16_t x630 = INT16_MAX;
	static volatile int16_t x631 = -1;

    t152 = (x629!=(x630/(x631!=x632)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x633 = INT8_MIN;
	int64_t x636 = INT64_MAX;
	int32_t t153 = 1;

    t153 = (x633!=(x634/(x635!=x636)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x637 = INT8_MAX;
	uint64_t x638 = UINT64_MAX;
	uint16_t x639 = 7U;
	int32_t x640 = INT32_MIN;
	static volatile int32_t t154 = 4743;

    t154 = (x637!=(x638/(x639!=x640)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x641 = 41446638879470172LLU;
	int8_t x642 = 5;
	int64_t x643 = INT64_MIN;
	volatile int16_t x644 = INT16_MIN;
	volatile int32_t t155 = 16249;

    t155 = (x641!=(x642/(x643!=x644)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x645 = 205U;
	int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MIN;
	int8_t x648 = 0;
	static int32_t t156 = -1497;

    t156 = (x645!=(x646/(x647!=x648)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x649 = 139729755U;
	static int32_t x650 = -2953;
	int64_t x651 = -40181LL;

    t157 = (x649!=(x650/(x651!=x652)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x653 = 3289;
	int16_t x654 = INT16_MIN;
	static volatile int64_t x656 = INT64_MAX;

    t158 = (x653!=(x654/(x655!=x656)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x657 = 45188337LLU;
	static volatile int64_t x658 = INT64_MIN;
	int32_t x660 = 3;
	int32_t t159 = -59;

    t159 = (x657!=(x658/(x659!=x660)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x661 = 8997U;
	int32_t x662 = -1;
	uint8_t x663 = 23U;
	volatile int32_t t160 = -2501;

    t160 = (x661!=(x662/(x663!=x664)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x666 = INT32_MIN;
	volatile int64_t x667 = INT64_MAX;
	static uint16_t x668 = 1132U;
	int32_t t161 = -3;

    t161 = (x665!=(x666/(x667!=x668)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x673 = 6224LLU;
	int64_t x675 = -1LL;
	int64_t x676 = 12009650246LL;
	volatile int32_t t162 = 365790889;

    t162 = (x673!=(x674/(x675!=x676)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x677 = INT32_MIN;
	int8_t x679 = -31;
	uint16_t x680 = 7881U;
	volatile int32_t t163 = 17541;

    t163 = (x677!=(x678/(x679!=x680)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x682 = 66U;
	volatile int64_t x683 = INT64_MAX;
	int64_t x684 = -324944501844728961LL;

    t164 = (x681!=(x682/(x683!=x684)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x685 = INT32_MIN;
	uint8_t x686 = UINT8_MAX;
	uint16_t x687 = 1572U;
	int32_t t165 = 2;

    t165 = (x685!=(x686/(x687!=x688)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x689 = 5805LLU;
	volatile int32_t x690 = INT32_MIN;
	int8_t x691 = -1;
	int16_t x692 = INT16_MIN;
	volatile int32_t t166 = -27;

    t166 = (x689!=(x690/(x691!=x692)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x696 = 993U;
	int32_t t167 = -3322446;

    t167 = (x693!=(x694/(x695!=x696)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x697 = -352021993;
	uint32_t x698 = UINT32_MAX;
	uint8_t x699 = 87U;
	int16_t x700 = -1;
	volatile int32_t t168 = 2754049;

    t168 = (x697!=(x698/(x699!=x700)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x701 = 6334U;
	int32_t x702 = INT32_MAX;
	int16_t x703 = INT16_MIN;
	int16_t x704 = -3;
	volatile int32_t t169 = -8167;

    t169 = (x701!=(x702/(x703!=x704)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x705 = 255;
	uint32_t x706 = 3325U;
	static uint64_t x707 = 6285381007269LLU;
	int64_t x708 = INT64_MIN;
	int32_t t170 = -118015;

    t170 = (x705!=(x706/(x707!=x708)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x709 = -2334;
	uint16_t x711 = UINT16_MAX;
	static volatile int32_t x712 = INT32_MAX;
	static int32_t t171 = 11109979;

    t171 = (x709!=(x710/(x711!=x712)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x713 = -889982;
	int32_t x715 = INT32_MAX;
	int64_t x716 = INT64_MAX;
	int32_t t172 = 5140;

    t172 = (x713!=(x714/(x715!=x716)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x717 = -1;
	volatile int8_t x720 = INT8_MIN;
	int32_t t173 = -3180;

    t173 = (x717!=(x718/(x719!=x720)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x721 = -1;
	volatile int64_t x723 = INT64_MIN;
	int8_t x724 = INT8_MAX;
	volatile int32_t t174 = 11429;

    t174 = (x721!=(x722/(x723!=x724)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x725 = INT64_MAX;
	static int32_t x726 = 2288828;
	static uint8_t x727 = UINT8_MAX;
	volatile int64_t x728 = -1208946938LL;
	static volatile int32_t t175 = 29093103;

    t175 = (x725!=(x726/(x727!=x728)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = -13;
	uint32_t x732 = UINT32_MAX;
	int32_t t176 = 1910976;

    t176 = (x729!=(x730/(x731!=x732)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = -1;
	uint8_t x734 = 5U;
	static volatile int64_t x735 = -1LL;
	static int32_t t177 = -5;

    t177 = (x733!=(x734/(x735!=x736)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x737 = -1;
	static uint32_t x738 = 27194U;
	int64_t x739 = INT64_MAX;
	static uint32_t x740 = 3154U;
	int32_t t178 = 8056845;

    t178 = (x737!=(x738/(x739!=x740)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x743 = 0U;
	volatile int32_t x744 = INT32_MAX;
	int32_t t179 = -2;

    t179 = (x741!=(x742/(x743!=x744)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x745 = 131LLU;
	int16_t x747 = INT16_MIN;
	int8_t x748 = -1;
	static int32_t t180 = -987843;

    t180 = (x745!=(x746/(x747!=x748)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x750 = INT16_MIN;
	int8_t x752 = -15;
	int32_t t181 = 276494818;

    t181 = (x749!=(x750/(x751!=x752)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x754 = 11853233206580LLU;
	uint8_t x755 = 0U;
	volatile int16_t x756 = INT16_MIN;

    t182 = (x753!=(x754/(x755!=x756)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x757 = INT32_MAX;
	int64_t x758 = INT64_MIN;
	int16_t x759 = INT16_MIN;
	int32_t t183 = -1;

    t183 = (x757!=(x758/(x759!=x760)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x763 = -1;
	int8_t x764 = INT8_MAX;
	static int32_t t184 = 3304;

    t184 = (x761!=(x762/(x763!=x764)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x765 = 10648678U;
	int16_t x766 = INT16_MIN;
	uint16_t x767 = 1U;
	static uint32_t x768 = 22701U;
	volatile int32_t t185 = 121;

    t185 = (x765!=(x766/(x767!=x768)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = -17646;
	uint16_t x771 = 28U;
	int64_t x772 = INT64_MIN;
	int32_t t186 = -688476827;

    t186 = (x769!=(x770/(x771!=x772)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x773 = INT64_MIN;
	uint16_t x774 = UINT16_MAX;
	volatile int32_t x775 = -31582;
	int8_t x776 = INT8_MIN;
	static volatile int32_t t187 = -7;

    t187 = (x773!=(x774/(x775!=x776)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x777 = -1;
	volatile int16_t x778 = 1139;
	static int16_t x780 = INT16_MIN;
	int32_t t188 = -1417;

    t188 = (x777!=(x778/(x779!=x780)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x782 = 41U;
	uint64_t x783 = 2LLU;
	int64_t x784 = -1LL;
	int32_t t189 = 1;

    t189 = (x781!=(x782/(x783!=x784)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x786 = INT16_MIN;
	int64_t x788 = -1LL;

    t190 = (x785!=(x786/(x787!=x788)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x789 = UINT64_MAX;
	int8_t x790 = -1;
	static volatile int32_t x791 = INT32_MAX;
	uint64_t x792 = 407720320743LLU;

    t191 = (x789!=(x790/(x791!=x792)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x793 = UINT64_MAX;
	int16_t x794 = INT16_MAX;
	volatile int8_t x795 = INT8_MAX;
	uint32_t x796 = UINT32_MAX;
	static int32_t t192 = 8;

    t192 = (x793!=(x794/(x795!=x796)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x797 = INT8_MAX;
	volatile int16_t x798 = -14982;
	static uint8_t x799 = 0U;
	int8_t x800 = 1;
	volatile int32_t t193 = 208580;

    t193 = (x797!=(x798/(x799!=x800)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x801 = INT32_MIN;
	int16_t x802 = -1;
	volatile int16_t x803 = INT16_MAX;
	uint16_t x804 = 1U;

    t194 = (x801!=(x802/(x803!=x804)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x805 = 7U;
	static int64_t x806 = -7958937LL;
	int8_t x807 = INT8_MIN;
	static int16_t x808 = -695;
	int32_t t195 = 53;

    t195 = (x805!=(x806/(x807!=x808)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x809 = INT8_MAX;
	volatile uint8_t x810 = UINT8_MAX;
	volatile uint8_t x811 = 18U;
	static int8_t x812 = INT8_MAX;
	volatile int32_t t196 = -36078;

    t196 = (x809!=(x810/(x811!=x812)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x814 = 3654U;
	static uint8_t x815 = 10U;
	static int32_t t197 = -398520;

    t197 = (x813!=(x814/(x815!=x816)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x817 = -1;
	uint16_t x819 = 1800U;
	uint64_t x820 = 0LLU;
	static volatile int32_t t198 = -49;

    t198 = (x817!=(x818/(x819!=x820)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x821 = INT64_MIN;
	int16_t x823 = 8784;
	int8_t x824 = 1;

    t199 = (x821!=(x822/(x823!=x824)));

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

