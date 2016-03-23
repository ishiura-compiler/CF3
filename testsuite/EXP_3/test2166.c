
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

int8_t x2 = INT8_MAX;
int8_t x9 = INT8_MIN;
uint32_t x10 = UINT32_MAX;
int32_t x11 = INT32_MAX;
volatile int32_t t2 = 3607;
uint64_t x18 = 2167229301508LLU;
int8_t x23 = -1;
int64_t x24 = -1LL;
static volatile int32_t t4 = 1472;
int16_t x36 = INT16_MAX;
int8_t x40 = INT8_MIN;
int32_t t8 = 3911;
int8_t x52 = -61;
volatile uint32_t x64 = 28398U;
int32_t x66 = INT32_MIN;
uint8_t x68 = 0U;
volatile int32_t t15 = 80;
uint16_t x74 = 3205U;
uint8_t x76 = UINT8_MAX;
volatile int32_t t17 = -204047;
volatile int32_t t19 = 133;
int16_t x91 = 1;
int32_t t20 = -2;
uint8_t x106 = 3U;
int8_t x108 = INT8_MIN;
volatile int32_t t23 = -1;
int32_t x120 = -1;
int16_t x121 = 39;
static int8_t x122 = INT8_MAX;
int32_t t27 = -3;
static int64_t x130 = -1LL;
uint32_t x131 = 32973672U;
static int32_t t30 = -16153;
volatile int16_t x160 = INT16_MIN;
static volatile uint8_t x163 = 1U;
int16_t x164 = -1;
uint8_t x166 = 46U;
volatile int32_t t38 = 115;
volatile uint8_t x175 = 68U;
int32_t t40 = -498868;
static volatile int16_t x181 = INT16_MIN;
static volatile int32_t x184 = INT32_MIN;
int32_t t43 = 88;
static int32_t x193 = -231069007;
int16_t x194 = INT16_MIN;
int32_t x198 = INT32_MIN;
int8_t x199 = INT8_MAX;
int32_t t45 = -43047447;
static int64_t x201 = INT64_MIN;
volatile uint16_t x209 = 2U;
static uint32_t x210 = 3632U;
volatile int32_t x214 = -687;
static int8_t x216 = INT8_MIN;
int32_t x219 = 983;
volatile int32_t t50 = 0;
volatile int8_t x242 = INT8_MIN;
int64_t x252 = INT64_MIN;
int16_t x253 = -8384;
static int64_t x256 = 669589LL;
uint16_t x258 = UINT16_MAX;
static volatile uint64_t x264 = 75LLU;
static volatile int32_t t57 = 272630;
volatile int8_t x269 = -1;
static int64_t x276 = INT64_MAX;
uint16_t x282 = UINT16_MAX;
uint8_t x283 = 12U;
static volatile int32_t t64 = -13;
int64_t x297 = INT64_MIN;
static int32_t x300 = -37690552;
static int8_t x307 = INT8_MIN;
int8_t x309 = INT8_MIN;
static volatile int16_t x330 = INT16_MAX;
uint32_t x331 = 591U;
volatile uint64_t x335 = UINT64_MAX;
static volatile int32_t t74 = -57609;
int64_t x349 = -4197574381233LL;
volatile uint8_t x363 = 1U;
uint32_t x366 = 124U;
volatile int32_t x374 = 12;
static volatile int32_t t82 = 7;
int32_t x377 = INT32_MIN;
static int32_t t83 = 26467;
int8_t x381 = INT8_MIN;
uint64_t x382 = 39563525LLU;
static uint16_t x384 = UINT16_MAX;
volatile int32_t t84 = 56596;
int32_t t86 = -31;
uint64_t x403 = UINT64_MAX;
volatile int32_t t87 = 14;
volatile int16_t x405 = INT16_MIN;
int64_t x419 = INT64_MIN;
int32_t t90 = -442307160;
int32_t t91 = 330369;
static int32_t x440 = -1;
int8_t x447 = INT8_MIN;
int32_t t97 = 33;
uint64_t x453 = UINT64_MAX;
volatile int16_t x457 = -1;
int8_t x460 = 3;
int8_t x465 = INT8_MAX;
static int16_t x471 = -1;
volatile uint16_t x489 = 3U;
uint16_t x491 = UINT16_MAX;
int64_t x493 = INT64_MIN;
int64_t x503 = INT64_MIN;
uint16_t x504 = 213U;
static int8_t x509 = INT8_MIN;
int8_t x510 = -1;
volatile uint32_t x524 = UINT32_MAX;
uint8_t x525 = 84U;
int16_t x532 = -1;
volatile int32_t t116 = -553;
int32_t x542 = 3873;
uint8_t x556 = 2U;
int8_t x561 = INT8_MAX;
int32_t t121 = 676;
int32_t x567 = INT32_MAX;
static volatile int32_t t122 = -18633;
static volatile int32_t t123 = 37;
int32_t x577 = INT32_MIN;
int32_t x580 = INT32_MIN;
int64_t x596 = INT64_MAX;
int32_t t127 = -311;
int32_t x598 = INT32_MIN;
volatile uint64_t x605 = 2643491655LLU;
int32_t x608 = INT32_MIN;
int8_t x609 = 33;
int64_t x612 = INT64_MAX;
uint8_t x614 = 95U;
static int16_t x616 = -13;
int8_t x622 = INT8_MAX;
int16_t x624 = -1;
static int32_t x627 = INT32_MIN;
static int16_t x628 = -1;
volatile int32_t t135 = 143653662;
int32_t x630 = INT32_MIN;
int32_t x631 = INT32_MAX;
int32_t x632 = -1;
int32_t t137 = 749680;
volatile uint8_t x647 = 0U;
uint16_t x649 = 26970U;
int32_t t141 = -6852;
static int32_t x655 = INT32_MAX;
int8_t x656 = 6;
static int32_t x659 = INT32_MAX;
int8_t x662 = -1;
int8_t x664 = INT8_MAX;
int32_t x665 = INT32_MIN;
int32_t t145 = -9645;
int8_t x674 = -8;
volatile uint32_t x680 = 683U;
int16_t x681 = -1;
int32_t x684 = INT32_MIN;
volatile int64_t x693 = -1LL;
static uint32_t x701 = 16U;
int64_t x708 = -1LL;
int64_t x712 = -1LL;
uint64_t x715 = UINT64_MAX;
static volatile uint64_t x721 = 163816907836947795LLU;
int32_t x723 = -73;
int8_t x728 = INT8_MIN;
static int32_t x738 = INT32_MIN;
static int16_t x741 = INT16_MIN;
static uint32_t x744 = 232U;
static volatile int64_t x752 = INT64_MIN;
static int32_t t164 = 0;
int32_t x753 = 786451486;
int32_t t165 = -30;
volatile int16_t x759 = 19;
int32_t t166 = 482806466;
static int64_t x764 = INT64_MIN;
static int8_t x768 = INT8_MAX;
int16_t x770 = INT16_MIN;
int64_t x772 = -1LL;
static volatile int32_t t169 = 0;
volatile int32_t t170 = 3237;
int32_t x790 = INT32_MIN;
volatile int64_t x793 = -1LL;
int8_t x795 = -1;
volatile int64_t x801 = INT64_MAX;
volatile uint64_t x809 = 915776LLU;
int8_t x814 = -25;
int16_t x816 = -1;
uint8_t x820 = 50U;
volatile int16_t x831 = -36;
uint8_t x832 = 1U;
volatile int32_t t183 = -66;
uint32_t x840 = 1U;
volatile int8_t x844 = 1;
uint32_t x846 = 162U;
int64_t x851 = INT64_MIN;
static int16_t x852 = -1;
volatile int32_t t187 = -203630518;
int16_t x853 = INT16_MAX;
int64_t x854 = INT64_MIN;
volatile uint32_t x855 = UINT32_MAX;
int8_t x859 = 0;
static uint32_t x860 = UINT32_MAX;
volatile int32_t t190 = 1335048;
uint16_t x866 = 8634U;
int64_t x868 = -2187311287LL;
static int64_t x871 = INT64_MIN;
volatile int32_t x875 = INT32_MIN;
int16_t x880 = INT16_MIN;
uint64_t x889 = UINT64_MAX;
int64_t x896 = -1LL;
static uint16_t x899 = 1U;
int32_t x900 = 0;
int32_t x901 = -2;
volatile int32_t t199 = 2089;


void f0(void) {
    	int8_t x1 = -1;
	volatile int16_t x3 = 110;
	static volatile uint16_t x4 = 172U;
	int32_t t0 = 0;

    t0 = ((x1+x2)<=(x3&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x12 = UINT8_MAX;
	int32_t t1 = -51;

    t1 = ((x9+x10)<=(x11&x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x13 = 1737219LL;
	volatile uint32_t x14 = 7U;
	static int8_t x15 = INT8_MIN;
	int8_t x16 = 41;

    t2 = ((x13+x14)<=(x15&x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = -1;
	int64_t x19 = INT64_MIN;
	static volatile int16_t x20 = INT16_MIN;
	volatile int32_t t3 = -1331475;

    t3 = ((x17+x18)<=(x19&x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = -1LL;
	int8_t x22 = INT8_MAX;

    t4 = ((x21+x22)<=(x23&x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 160U;
	int64_t x26 = INT64_MIN;
	static volatile int64_t x27 = INT64_MAX;
	uint16_t x28 = 4020U;
	int32_t t5 = 22448658;

    t5 = ((x25+x26)<=(x27&x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	uint8_t x30 = 3U;
	volatile uint64_t x31 = 4240112LLU;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -4224344;

    t6 = ((x29+x30)<=(x31&x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x33 = -1LL;
	int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	int32_t t7 = -354834373;

    t7 = ((x33+x34)<=(x35&x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -1;
	int16_t x38 = -362;
	volatile int64_t x39 = -1LL;

    t8 = ((x37+x38)<=(x39&x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = INT64_MIN;
	uint16_t x42 = UINT16_MAX;
	static volatile int16_t x43 = -1;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t9 = -715615214;

    t9 = ((x41+x42)<=(x43&x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -8;
	int8_t x46 = 1;
	static volatile int64_t x47 = -814588512267046340LL;
	int16_t x48 = INT16_MIN;
	volatile int32_t t10 = 37755;

    t10 = ((x45+x46)<=(x47&x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = INT64_MAX;
	int8_t x50 = -1;
	int64_t x51 = INT64_MIN;
	static int32_t t11 = -4085;

    t11 = ((x49+x50)<=(x51&x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x57 = 819U;
	volatile uint32_t x58 = UINT32_MAX;
	static int32_t x59 = INT32_MIN;
	int16_t x60 = 7420;
	static int32_t t12 = -1;

    t12 = ((x57+x58)<=(x59&x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x61 = INT16_MIN;
	uint32_t x62 = 342126U;
	static volatile uint32_t x63 = UINT32_MAX;
	int32_t t13 = -4081404;

    t13 = ((x61+x62)<=(x63&x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MAX;
	int8_t x67 = INT8_MAX;
	int32_t t14 = 0;

    t14 = ((x65+x66)<=(x67&x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	int64_t x70 = INT64_MIN;
	volatile int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;

    t15 = ((x69+x70)<=(x71&x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = 3499344;
	uint16_t x75 = 0U;
	volatile int32_t t16 = 6478;

    t16 = ((x73+x74)<=(x75&x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x77 = INT32_MIN;
	static uint16_t x78 = 0U;
	static uint8_t x79 = UINT8_MAX;
	static int16_t x80 = -1;

    t17 = ((x77+x78)<=(x79&x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = -1;
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MAX;
	int32_t t18 = -810;

    t18 = ((x81+x82)<=(x83&x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	static uint64_t x86 = 831LLU;
	volatile int32_t x87 = -1;
	int64_t x88 = INT64_MAX;

    t19 = ((x85+x86)<=(x87&x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = 0;
	static int8_t x90 = 39;
	uint32_t x92 = UINT32_MAX;

    t20 = ((x89+x90)<=(x91&x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = 11U;
	int16_t x94 = -1171;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t21 = 40;

    t21 = ((x93+x94)<=(x95&x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MAX;
	static int16_t x102 = -1;
	uint32_t x103 = 0U;
	static int64_t x104 = -95398060995LL;
	int32_t t22 = -6;

    t22 = ((x101+x102)<=(x103&x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = 2;
	uint64_t x107 = 3987950LLU;

    t23 = ((x105+x106)<=(x107&x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x109 = INT32_MIN;
	volatile int8_t x110 = 4;
	int8_t x111 = INT8_MIN;
	volatile int8_t x112 = 1;
	int32_t t24 = -80;

    t24 = ((x109+x110)<=(x111&x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = -1;
	static volatile int8_t x114 = 5;
	static int64_t x115 = INT64_MIN;
	volatile uint16_t x116 = 18345U;
	int32_t t25 = -169990927;

    t25 = ((x113+x114)<=(x115&x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = -217667;
	static uint16_t x118 = 94U;
	static int16_t x119 = INT16_MAX;
	int32_t t26 = -17857263;

    t26 = ((x117+x118)<=(x119&x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x123 = -402;
	static uint32_t x124 = 1226715U;

    t27 = ((x121+x122)<=(x123&x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = -1;
	int32_t x126 = -1;
	int16_t x127 = INT16_MAX;
	volatile uint32_t x128 = 17031U;
	volatile int32_t t28 = 2;

    t28 = ((x125+x126)<=(x127&x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = INT8_MIN;
	static int8_t x132 = INT8_MAX;
	static volatile int32_t t29 = -480109533;

    t29 = ((x129+x130)<=(x131&x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x133 = 17149052524669480LLU;
	int8_t x134 = -1;
	static int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MIN;

    t30 = ((x133+x134)<=(x135&x136));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = 46791;
	int64_t x144 = INT64_MAX;
	volatile int32_t t31 = -116001135;

    t31 = ((x141+x142)<=(x143&x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x145 = UINT16_MAX;
	uint64_t x146 = 36078965893906997LLU;
	static uint16_t x147 = UINT16_MAX;
	static int16_t x148 = -23;
	int32_t t32 = 0;

    t32 = ((x145+x146)<=(x147&x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x149 = INT16_MIN;
	uint8_t x150 = 24U;
	uint64_t x151 = UINT64_MAX;
	volatile int8_t x152 = -1;
	volatile int32_t t33 = 1528825;

    t33 = ((x149+x150)<=(x151&x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x153 = UINT16_MAX;
	int16_t x154 = -3304;
	int16_t x155 = 371;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t34 = -1747;

    t34 = ((x153+x154)<=(x155&x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x157 = 27U;
	uint8_t x158 = UINT8_MAX;
	static uint16_t x159 = 49U;
	volatile int32_t t35 = 129;

    t35 = ((x157+x158)<=(x159&x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x161 = UINT8_MAX;
	volatile int16_t x162 = 455;
	static volatile int32_t t36 = -30058028;

    t36 = ((x161+x162)<=(x163&x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = INT8_MAX;
	uint16_t x167 = 1U;
	int8_t x168 = INT8_MAX;
	int32_t t37 = -224;

    t37 = ((x165+x166)<=(x167&x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = INT64_MIN;
	uint8_t x170 = UINT8_MAX;
	volatile int32_t x171 = 1;
	int8_t x172 = INT8_MAX;

    t38 = ((x169+x170)<=(x171&x172));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x174 = 1;
	static int16_t x176 = -1;
	int32_t t39 = 456688;

    t39 = ((x173+x174)<=(x175&x176));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x177 = 812379080819375LLU;
	int16_t x178 = INT16_MIN;
	volatile uint32_t x179 = 112269494U;
	uint32_t x180 = UINT32_MAX;

    t40 = ((x177+x178)<=(x179&x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x182 = 165562LLU;
	int8_t x183 = INT8_MAX;
	volatile int32_t t41 = -9;

    t41 = ((x181+x182)<=(x183&x184));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x185 = -56;
	uint8_t x186 = 121U;
	int64_t x187 = 32LL;
	volatile uint64_t x188 = 2LLU;
	static volatile int32_t t42 = -84;

    t42 = ((x185+x186)<=(x187&x188));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	int8_t x192 = -1;

    t43 = ((x189+x190)<=(x191&x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	volatile int32_t t44 = -67229;

    t44 = ((x193+x194)<=(x195&x196));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x197 = INT64_MAX;
	int64_t x200 = 350080889026530833LL;

    t45 = ((x197+x198)<=(x199&x200));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x202 = 0;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	static volatile int32_t t46 = 1018154;

    t46 = ((x201+x202)<=(x203&x204));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x211 = -1;
	static uint16_t x212 = 19U;
	int32_t t47 = -13268;

    t47 = ((x209+x210)<=(x211&x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MAX;
	uint64_t x215 = 70330257373LLU;
	volatile int32_t t48 = 2;

    t48 = ((x213+x214)<=(x215&x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -1;
	int8_t x218 = -23;
	int64_t x220 = INT64_MAX;
	volatile int32_t t49 = -1489;

    t49 = ((x217+x218)<=(x219&x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x221 = -2;
	int64_t x222 = 58262880188832948LL;
	static uint8_t x223 = 9U;
	int32_t x224 = INT32_MIN;

    t50 = ((x221+x222)<=(x223&x224));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = -1;
	int16_t x230 = 2;
	int32_t x231 = -1;
	uint64_t x232 = 87LLU;
	volatile int32_t t51 = 2;

    t51 = ((x229+x230)<=(x231&x232));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x241 = -1;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = INT64_MAX;
	static volatile int32_t t52 = -209;

    t52 = ((x241+x242)<=(x243&x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x245 = 2U;
	int16_t x246 = INT16_MAX;
	int32_t x247 = 31;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t53 = 1;

    t53 = ((x245+x246)<=(x247&x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = INT32_MAX;
	int16_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int32_t t54 = 221;

    t54 = ((x249+x250)<=(x251&x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x254 = INT16_MIN;
	int64_t x255 = 12LL;
	volatile int32_t t55 = 151956;

    t55 = ((x253+x254)<=(x255&x256));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x257 = 43U;
	uint64_t x259 = 1622583182171674688LLU;
	int32_t x260 = -1;
	int32_t t56 = -105487;

    t56 = ((x257+x258)<=(x259&x260));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x261 = 7;
	int64_t x262 = INT64_MIN;
	int16_t x263 = -1;

    t57 = ((x261+x262)<=(x263&x264));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x270 = -1LL;
	static int64_t x271 = INT64_MAX;
	uint32_t x272 = 63312U;
	volatile int32_t t58 = -29;

    t58 = ((x269+x270)<=(x271&x272));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x273 = INT64_MAX;
	int32_t x274 = -59162;
	int8_t x275 = INT8_MAX;
	volatile int32_t t59 = 33;

    t59 = ((x273+x274)<=(x275&x276));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x277 = -1LL;
	int16_t x278 = -1;
	volatile uint8_t x279 = UINT8_MAX;
	volatile uint16_t x280 = 6U;
	int32_t t60 = -36478205;

    t60 = ((x277+x278)<=(x279&x280));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x281 = -26175633;
	static int32_t x284 = 2439527;
	volatile int32_t t61 = 354;

    t61 = ((x281+x282)<=(x283&x284));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x285 = -204;
	uint64_t x286 = 16803980LLU;
	int32_t x287 = -3;
	int64_t x288 = INT64_MIN;
	static volatile int32_t t62 = 154599;

    t62 = ((x285+x286)<=(x287&x288));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x289 = INT64_MIN;
	uint16_t x290 = 197U;
	static int32_t x291 = INT32_MIN;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t63 = 160;

    t63 = ((x289+x290)<=(x291&x292));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x293 = 231445LLU;
	int32_t x294 = INT32_MIN;
	uint8_t x295 = 14U;
	volatile int64_t x296 = INT64_MIN;

    t64 = ((x293+x294)<=(x295&x296));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x298 = 1689237541U;
	int64_t x299 = INT64_MIN;
	static volatile int32_t t65 = -808;

    t65 = ((x297+x298)<=(x299&x300));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x301 = 7123576U;
	int32_t x302 = INT32_MIN;
	uint16_t x303 = 51U;
	uint32_t x304 = 8317812U;
	static volatile int32_t t66 = -118611;

    t66 = ((x301+x302)<=(x303&x304));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x305 = 2137813LLU;
	uint64_t x306 = UINT64_MAX;
	int32_t x308 = -1;
	volatile int32_t t67 = -6;

    t67 = ((x305+x306)<=(x307&x308));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x310 = INT16_MAX;
	uint64_t x311 = 596692922LLU;
	int32_t x312 = -1;
	int32_t t68 = 11309893;

    t68 = ((x309+x310)<=(x311&x312));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x313 = 4173708LLU;
	volatile int32_t x314 = 0;
	int32_t x315 = INT32_MIN;
	static volatile uint16_t x316 = UINT16_MAX;
	volatile int32_t t69 = 944614;

    t69 = ((x313+x314)<=(x315&x316));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	volatile int32_t x327 = -328293;
	uint8_t x328 = 21U;
	volatile int32_t t70 = -17;

    t70 = ((x325+x326)<=(x327&x328));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x329 = UINT32_MAX;
	volatile int16_t x332 = INT16_MAX;
	int32_t t71 = -1187;

    t71 = ((x329+x330)<=(x331&x332));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = UINT8_MAX;
	int64_t x336 = -1LL;
	int32_t t72 = 64490608;

    t72 = ((x333+x334)<=(x335&x336));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x337 = 1;
	uint8_t x338 = 8U;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = 1453864LLU;
	volatile int32_t t73 = -400383623;

    t73 = ((x337+x338)<=(x339&x340));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x341 = INT8_MIN;
	uint8_t x342 = 15U;
	int16_t x343 = 14775;
	volatile uint16_t x344 = UINT16_MAX;

    t74 = ((x341+x342)<=(x343&x344));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x345 = -1;
	static volatile uint8_t x346 = 63U;
	uint16_t x347 = UINT16_MAX;
	volatile uint8_t x348 = 12U;
	int32_t t75 = -1191;

    t75 = ((x345+x346)<=(x347&x348));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x350 = INT16_MAX;
	uint8_t x351 = 9U;
	uint16_t x352 = 583U;
	volatile int32_t t76 = -472678480;

    t76 = ((x349+x350)<=(x351&x352));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x353 = 0;
	int8_t x354 = 1;
	volatile int64_t x355 = 2015LL;
	int32_t x356 = 30601455;
	int32_t t77 = -9807189;

    t77 = ((x353+x354)<=(x355&x356));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MAX;
	int64_t x359 = INT64_MIN;
	volatile uint32_t x360 = 15593071U;
	int32_t t78 = 1833289;

    t78 = ((x357+x358)<=(x359&x360));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x361 = -375958LL;
	uint8_t x362 = 11U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t79 = 69552;

    t79 = ((x361+x362)<=(x363&x364));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x365 = 1U;
	int8_t x367 = INT8_MIN;
	static uint64_t x368 = 197462576LLU;
	static int32_t t80 = -2958181;

    t80 = ((x365+x366)<=(x367&x368));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x369 = UINT64_MAX;
	uint8_t x370 = UINT8_MAX;
	int16_t x371 = INT16_MAX;
	volatile uint16_t x372 = 7299U;
	int32_t t81 = -32886;

    t81 = ((x369+x370)<=(x371&x372));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x373 = -64828934391372LL;
	static uint32_t x375 = 14462789U;
	uint8_t x376 = UINT8_MAX;

    t82 = ((x373+x374)<=(x375&x376));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x378 = INT8_MAX;
	int8_t x379 = 0;
	volatile uint64_t x380 = 39025356798LLU;

    t83 = ((x377+x378)<=(x379&x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x383 = INT64_MIN;

    t84 = ((x381+x382)<=(x383&x384));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x385 = INT64_MIN;
	int16_t x386 = 1;
	int64_t x387 = INT64_MAX;
	uint32_t x388 = UINT32_MAX;
	int32_t t85 = -97;

    t85 = ((x385+x386)<=(x387&x388));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x389 = 0;
	int8_t x390 = INT8_MIN;
	volatile int32_t x391 = INT32_MIN;
	volatile int32_t x392 = 12026288;

    t86 = ((x389+x390)<=(x391&x392));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = 0;
	volatile uint16_t x402 = UINT16_MAX;
	volatile uint64_t x404 = 123953531927LLU;

    t87 = ((x401+x402)<=(x403&x404));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x406 = INT16_MIN;
	static uint8_t x407 = 11U;
	static int8_t x408 = -1;
	volatile int32_t t88 = -159;

    t88 = ((x405+x406)<=(x407&x408));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x413 = -1LL;
	uint64_t x414 = UINT64_MAX;
	static int16_t x415 = -12457;
	int32_t x416 = 376369;
	volatile int32_t t89 = 49111;

    t89 = ((x413+x414)<=(x415&x416));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x417 = 1746LL;
	static int64_t x418 = -1LL;
	int16_t x420 = INT16_MIN;

    t90 = ((x417+x418)<=(x419&x420));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x421 = INT16_MAX;
	volatile int8_t x422 = INT8_MIN;
	int32_t x423 = -1;
	int32_t x424 = INT32_MAX;

    t91 = ((x421+x422)<=(x423&x424));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x429 = -1;
	int64_t x430 = -1LL;
	volatile int32_t x431 = INT32_MIN;
	volatile uint8_t x432 = 14U;
	volatile int32_t t92 = 196;

    t92 = ((x429+x430)<=(x431&x432));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x433 = 112270370993LLU;
	int32_t x434 = INT32_MIN;
	volatile uint64_t x435 = 14538831997LLU;
	int16_t x436 = INT16_MIN;
	static volatile int32_t t93 = 204530374;

    t93 = ((x433+x434)<=(x435&x436));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x437 = INT16_MIN;
	uint64_t x438 = UINT64_MAX;
	uint32_t x439 = 586U;
	int32_t t94 = 0;

    t94 = ((x437+x438)<=(x439&x440));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x441 = INT64_MAX;
	int16_t x442 = INT16_MIN;
	int32_t x443 = INT32_MAX;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t95 = 1611;

    t95 = ((x441+x442)<=(x443&x444));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x445 = -194599665LL;
	volatile int64_t x446 = 81978993540LL;
	volatile uint32_t x448 = 370465U;
	volatile int32_t t96 = -1519;

    t96 = ((x445+x446)<=(x447&x448));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x449 = -218;
	static uint64_t x450 = UINT64_MAX;
	static int32_t x451 = 4243;
	volatile uint16_t x452 = 996U;

    t97 = ((x449+x450)<=(x451&x452));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x454 = INT64_MIN;
	static int8_t x455 = INT8_MAX;
	static volatile int8_t x456 = INT8_MAX;
	volatile int32_t t98 = 5;

    t98 = ((x453+x454)<=(x455&x456));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x458 = -1LL;
	int32_t x459 = -13260;
	static int32_t t99 = -13;

    t99 = ((x457+x458)<=(x459&x460));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x461 = INT16_MIN;
	int64_t x462 = -3276193910LL;
	int64_t x463 = 1557185514023760LL;
	int16_t x464 = INT16_MIN;
	volatile int32_t t100 = 1;

    t100 = ((x461+x462)<=(x463&x464));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x466 = 993LLU;
	static int64_t x467 = INT64_MAX;
	static int64_t x468 = INT64_MAX;
	int32_t t101 = 45703777;

    t101 = ((x465+x466)<=(x467&x468));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x469 = INT32_MAX;
	uint64_t x470 = 838052131LLU;
	uint64_t x472 = UINT64_MAX;
	int32_t t102 = -341282995;

    t102 = ((x469+x470)<=(x471&x472));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x477 = 356181816U;
	int64_t x478 = INT64_MIN;
	int64_t x479 = INT64_MIN;
	int64_t x480 = INT64_MIN;
	int32_t t103 = -266842955;

    t103 = ((x477+x478)<=(x479&x480));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x481 = -244;
	int8_t x482 = -1;
	static uint16_t x483 = UINT16_MAX;
	int64_t x484 = INT64_MIN;
	int32_t t104 = 51266;

    t104 = ((x481+x482)<=(x483&x484));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x490 = UINT32_MAX;
	int8_t x492 = INT8_MAX;
	static int32_t t105 = 703;

    t105 = ((x489+x490)<=(x491&x492));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint16_t x494 = 17992U;
	volatile int16_t x495 = INT16_MIN;
	volatile int16_t x496 = -2494;
	static int32_t t106 = 0;

    t106 = ((x493+x494)<=(x495&x496));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x497 = INT16_MAX;
	static volatile uint64_t x498 = 9103LLU;
	int64_t x499 = INT64_MAX;
	volatile int8_t x500 = INT8_MAX;
	volatile int32_t t107 = 281071451;

    t107 = ((x497+x498)<=(x499&x500));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x501 = 2U;
	int64_t x502 = -1LL;
	int32_t t108 = 416977;

    t108 = ((x501+x502)<=(x503&x504));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x505 = -75601;
	uint64_t x506 = UINT64_MAX;
	int32_t x507 = 3;
	static uint16_t x508 = 21U;
	volatile int32_t t109 = 1;

    t109 = ((x505+x506)<=(x507&x508));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x511 = INT8_MIN;
	int8_t x512 = -1;
	volatile int32_t t110 = -372375971;

    t110 = ((x509+x510)<=(x511&x512));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x513 = 59880865304LLU;
	static uint32_t x514 = 11380894U;
	uint8_t x515 = 93U;
	int64_t x516 = INT64_MIN;
	volatile int32_t t111 = -51767809;

    t111 = ((x513+x514)<=(x515&x516));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x521 = -1;
	int16_t x522 = -1;
	static int8_t x523 = INT8_MAX;
	int32_t t112 = 37544828;

    t112 = ((x521+x522)<=(x523&x524));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x526 = 3157U;
	static int8_t x527 = INT8_MIN;
	volatile int16_t x528 = -20;
	static int32_t t113 = 54905;

    t113 = ((x525+x526)<=(x527&x528));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x529 = INT16_MIN;
	uint8_t x530 = UINT8_MAX;
	uint64_t x531 = UINT64_MAX;
	int32_t t114 = -2;

    t114 = ((x529+x530)<=(x531&x532));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x533 = UINT64_MAX;
	int8_t x534 = INT8_MIN;
	uint32_t x535 = 83661880U;
	uint64_t x536 = 765LLU;
	volatile int32_t t115 = 383216914;

    t115 = ((x533+x534)<=(x535&x536));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x537 = 91337277451016LLU;
	static int8_t x538 = -5;
	uint8_t x539 = 1U;
	volatile int64_t x540 = INT64_MAX;

    t116 = ((x537+x538)<=(x539&x540));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x541 = 13U;
	uint64_t x543 = UINT64_MAX;
	volatile int16_t x544 = -313;
	int32_t t117 = 126330;

    t117 = ((x541+x542)<=(x543&x544));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x545 = INT64_MIN;
	uint64_t x546 = 972129LLU;
	int8_t x547 = INT8_MAX;
	int64_t x548 = INT64_MIN;
	volatile int32_t t118 = 715;

    t118 = ((x545+x546)<=(x547&x548));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x553 = -1;
	static volatile int8_t x554 = INT8_MIN;
	static uint16_t x555 = 121U;
	static volatile int32_t t119 = 7916784;

    t119 = ((x553+x554)<=(x555&x556));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x557 = INT16_MAX;
	uint32_t x558 = 188956U;
	static volatile uint8_t x559 = UINT8_MAX;
	int16_t x560 = INT16_MAX;
	volatile int32_t t120 = 14496;

    t120 = ((x557+x558)<=(x559&x560));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x562 = 468811736U;
	int64_t x563 = -1LL;
	int64_t x564 = -1LL;

    t121 = ((x561+x562)<=(x563&x564));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x565 = 6U;
	static volatile int64_t x566 = INT64_MIN;
	uint32_t x568 = UINT32_MAX;

    t122 = ((x565+x566)<=(x567&x568));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x569 = 125;
	volatile int8_t x570 = -1;
	static int32_t x571 = -27022175;
	static int16_t x572 = -11;

    t123 = ((x569+x570)<=(x571&x572));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x573 = -40013LL;
	int32_t x574 = 2884;
	uint8_t x575 = 103U;
	volatile int8_t x576 = INT8_MAX;
	volatile int32_t t124 = 967334157;

    t124 = ((x573+x574)<=(x575&x576));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x578 = UINT16_MAX;
	int8_t x579 = 2;
	int32_t t125 = 0;

    t125 = ((x577+x578)<=(x579&x580));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x581 = 123U;
	int64_t x582 = -1LL;
	uint32_t x583 = 1U;
	static volatile int64_t x584 = -977188636LL;
	volatile int32_t t126 = 530770;

    t126 = ((x581+x582)<=(x583&x584));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x593 = 158;
	int16_t x594 = INT16_MIN;
	static uint8_t x595 = 7U;

    t127 = ((x593+x594)<=(x595&x596));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x597 = -18LL;
	static int8_t x599 = -2;
	int8_t x600 = 16;
	volatile int32_t t128 = -1692836;

    t128 = ((x597+x598)<=(x599&x600));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x601 = 161;
	uint64_t x602 = UINT64_MAX;
	volatile int64_t x603 = -8637922LL;
	int16_t x604 = INT16_MAX;
	int32_t t129 = -1066962;

    t129 = ((x601+x602)<=(x603&x604));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x606 = 1;
	uint64_t x607 = 1688429236LLU;
	int32_t t130 = 106283;

    t130 = ((x605+x606)<=(x607&x608));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x610 = 21808513095LLU;
	static int64_t x611 = -1LL;
	int32_t t131 = -31183480;

    t131 = ((x609+x610)<=(x611&x612));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x613 = INT8_MIN;
	int8_t x615 = -1;
	volatile int32_t t132 = -292;

    t132 = ((x613+x614)<=(x615&x616));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x617 = 19815U;
	static uint8_t x618 = UINT8_MAX;
	volatile int8_t x619 = INT8_MIN;
	volatile int64_t x620 = INT64_MIN;
	static int32_t t133 = 1705;

    t133 = ((x617+x618)<=(x619&x620));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x621 = UINT64_MAX;
	static int32_t x623 = INT32_MIN;
	static volatile int32_t t134 = -124909;

    t134 = ((x621+x622)<=(x623&x624));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x625 = -1;
	int64_t x626 = -496364LL;

    t135 = ((x625+x626)<=(x627&x628));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x629 = 98707;
	volatile int32_t t136 = 359;

    t136 = ((x629+x630)<=(x631&x632));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x633 = -215LL;
	uint32_t x634 = 58268439U;
	int64_t x635 = 56840440029LL;
	uint16_t x636 = 305U;

    t137 = ((x633+x634)<=(x635&x636));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x637 = -1LL;
	int8_t x638 = -11;
	uint32_t x639 = 100816405U;
	int8_t x640 = -1;
	volatile int32_t t138 = -6;

    t138 = ((x637+x638)<=(x639&x640));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x641 = INT16_MAX;
	uint16_t x642 = UINT16_MAX;
	int64_t x643 = INT64_MIN;
	static uint64_t x644 = UINT64_MAX;
	volatile int32_t t139 = 501833;

    t139 = ((x641+x642)<=(x643&x644));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x645 = 0;
	static int16_t x646 = INT16_MIN;
	uint16_t x648 = UINT16_MAX;
	static int32_t t140 = 2438;

    t140 = ((x645+x646)<=(x647&x648));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x650 = 6498269896887072LL;
	int64_t x651 = -1LL;
	uint16_t x652 = 3U;

    t141 = ((x649+x650)<=(x651&x652));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x653 = INT16_MAX;
	uint8_t x654 = 41U;
	int32_t t142 = 1593;

    t142 = ((x653+x654)<=(x655&x656));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x657 = INT32_MIN;
	uint8_t x658 = 0U;
	int8_t x660 = INT8_MIN;
	volatile int32_t t143 = -10;

    t143 = ((x657+x658)<=(x659&x660));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x661 = 220029574;
	volatile int64_t x663 = INT64_MAX;
	int32_t t144 = 13827392;

    t144 = ((x661+x662)<=(x663&x664));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x666 = 8352365947202123LL;
	int32_t x667 = -1;
	static int16_t x668 = INT16_MAX;

    t145 = ((x665+x666)<=(x667&x668));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x669 = -1;
	int64_t x670 = INT64_MAX;
	int32_t x671 = INT32_MAX;
	int8_t x672 = -1;
	volatile int32_t t146 = -5479;

    t146 = ((x669+x670)<=(x671&x672));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x673 = INT32_MAX;
	volatile int64_t x675 = INT64_MAX;
	int64_t x676 = 179777LL;
	static int32_t t147 = -29798666;

    t147 = ((x673+x674)<=(x675&x676));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x677 = 3LLU;
	static uint32_t x678 = 433281U;
	int64_t x679 = INT64_MIN;
	int32_t t148 = 17881412;

    t148 = ((x677+x678)<=(x679&x680));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x682 = -1;
	int64_t x683 = INT64_MIN;
	static int32_t t149 = 38;

    t149 = ((x681+x682)<=(x683&x684));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x685 = UINT16_MAX;
	volatile uint16_t x686 = 89U;
	int8_t x687 = -37;
	uint64_t x688 = 43LLU;
	static volatile int32_t t150 = -7622545;

    t150 = ((x685+x686)<=(x687&x688));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x689 = 0;
	volatile int32_t x690 = -1;
	static int8_t x691 = INT8_MIN;
	volatile int8_t x692 = 42;
	int32_t t151 = -13592;

    t151 = ((x689+x690)<=(x691&x692));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x694 = -8787819831834744LL;
	uint64_t x695 = 1LLU;
	int64_t x696 = -34600657LL;
	int32_t t152 = -102;

    t152 = ((x693+x694)<=(x695&x696));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x702 = -2LL;
	static int32_t x703 = INT32_MIN;
	volatile int32_t x704 = -1;
	volatile int32_t t153 = 257855441;

    t153 = ((x701+x702)<=(x703&x704));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x705 = 54534377;
	uint8_t x706 = UINT8_MAX;
	int64_t x707 = 91000517965247LL;
	int32_t t154 = 2738182;

    t154 = ((x705+x706)<=(x707&x708));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x709 = 0U;
	static int64_t x710 = -24219LL;
	volatile int64_t x711 = INT64_MIN;
	static volatile int32_t t155 = 3733329;

    t155 = ((x709+x710)<=(x711&x712));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x713 = INT8_MIN;
	int64_t x714 = -1LL;
	volatile uint8_t x716 = UINT8_MAX;
	volatile int32_t t156 = -521795;

    t156 = ((x713+x714)<=(x715&x716));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x722 = 2U;
	static volatile uint64_t x724 = UINT64_MAX;
	volatile int32_t t157 = 5;

    t157 = ((x721+x722)<=(x723&x724));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	int64_t x726 = INT64_MIN;
	int8_t x727 = INT8_MAX;
	int32_t t158 = 2793;

    t158 = ((x725+x726)<=(x727&x728));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x729 = -403222643483687LL;
	int32_t x730 = -1;
	static uint32_t x731 = 2363555U;
	static volatile int64_t x732 = 578504LL;
	volatile int32_t t159 = 488625068;

    t159 = ((x729+x730)<=(x731&x732));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x733 = 674950LL;
	int16_t x734 = 1;
	static int8_t x735 = INT8_MIN;
	uint8_t x736 = 3U;
	volatile int32_t t160 = -68;

    t160 = ((x733+x734)<=(x735&x736));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x737 = INT8_MAX;
	static int64_t x739 = INT64_MIN;
	int16_t x740 = -1;
	volatile int32_t t161 = -98150584;

    t161 = ((x737+x738)<=(x739&x740));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x742 = 1551U;
	static int64_t x743 = INT64_MIN;
	int32_t t162 = 195;

    t162 = ((x741+x742)<=(x743&x744));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x745 = 3247;
	int64_t x746 = -1LL;
	static int16_t x747 = 7350;
	int8_t x748 = 0;
	volatile int32_t t163 = 0;

    t163 = ((x745+x746)<=(x747&x748));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x749 = INT8_MAX;
	static uint16_t x750 = 3744U;
	int8_t x751 = 1;

    t164 = ((x749+x750)<=(x751&x752));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x754 = UINT16_MAX;
	volatile uint16_t x755 = 3U;
	volatile uint16_t x756 = 0U;

    t165 = ((x753+x754)<=(x755&x756));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x757 = UINT16_MAX;
	int64_t x758 = -126758354154957LL;
	int16_t x760 = -7;

    t166 = ((x757+x758)<=(x759&x760));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x761 = INT16_MAX;
	volatile int8_t x762 = -1;
	volatile int8_t x763 = INT8_MIN;
	int32_t t167 = -75037;

    t167 = ((x761+x762)<=(x763&x764));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x765 = 59920480LL;
	uint16_t x766 = 813U;
	static int64_t x767 = INT64_MIN;
	int32_t t168 = 87;

    t168 = ((x765+x766)<=(x767&x768));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x769 = INT16_MAX;
	uint16_t x771 = 5U;

    t169 = ((x769+x770)<=(x771&x772));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x773 = INT8_MIN;
	int64_t x774 = -1LL;
	int16_t x775 = -45;
	int16_t x776 = 8;

    t170 = ((x773+x774)<=(x775&x776));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x777 = 1447031860850LLU;
	int32_t x778 = INT32_MIN;
	static uint16_t x779 = 0U;
	uint32_t x780 = 2U;
	volatile int32_t t171 = -408003933;

    t171 = ((x777+x778)<=(x779&x780));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x785 = 909;
	int32_t x786 = -2683666;
	int32_t x787 = 6855013;
	int16_t x788 = -1;
	int32_t t172 = -2061562;

    t172 = ((x785+x786)<=(x787&x788));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x789 = UINT8_MAX;
	int64_t x791 = -1LL;
	uint32_t x792 = 196234711U;
	volatile int32_t t173 = -114055;

    t173 = ((x789+x790)<=(x791&x792));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x794 = -1;
	int32_t x796 = INT32_MIN;
	int32_t t174 = 188902607;

    t174 = ((x793+x794)<=(x795&x796));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x797 = INT8_MIN;
	volatile uint32_t x798 = UINT32_MAX;
	volatile uint32_t x799 = 11977381U;
	volatile int32_t x800 = INT32_MIN;
	int32_t t175 = -1415;

    t175 = ((x797+x798)<=(x799&x800));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x802 = UINT64_MAX;
	static uint16_t x803 = 2449U;
	int8_t x804 = INT8_MIN;
	volatile int32_t t176 = -5;

    t176 = ((x801+x802)<=(x803&x804));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x805 = INT8_MIN;
	static volatile int16_t x806 = 22;
	static int16_t x807 = -477;
	int16_t x808 = -1703;
	int32_t t177 = 6969426;

    t177 = ((x805+x806)<=(x807&x808));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x810 = INT64_MAX;
	static uint16_t x811 = UINT16_MAX;
	volatile uint64_t x812 = 7692169708793LLU;
	volatile int32_t t178 = -8759;

    t178 = ((x809+x810)<=(x811&x812));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x813 = INT8_MIN;
	uint32_t x815 = UINT32_MAX;
	volatile int32_t t179 = -3;

    t179 = ((x813+x814)<=(x815&x816));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x817 = UINT16_MAX;
	uint16_t x818 = UINT16_MAX;
	int8_t x819 = -24;
	int32_t t180 = -20016;

    t180 = ((x817+x818)<=(x819&x820));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x821 = UINT8_MAX;
	static int16_t x822 = INT16_MIN;
	int8_t x823 = INT8_MIN;
	uint16_t x824 = 22720U;
	volatile int32_t t181 = 5610;

    t181 = ((x821+x822)<=(x823&x824));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x825 = 8482454514LLU;
	volatile uint16_t x826 = UINT16_MAX;
	uint64_t x827 = UINT64_MAX;
	int16_t x828 = 153;
	int32_t t182 = -4890;

    t182 = ((x825+x826)<=(x827&x828));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x829 = INT16_MIN;
	int64_t x830 = -1LL;

    t183 = ((x829+x830)<=(x831&x832));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x837 = 8U;
	static int8_t x838 = 0;
	static uint32_t x839 = 951033276U;
	volatile int32_t t184 = 534606872;

    t184 = ((x837+x838)<=(x839&x840));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x841 = 26153619;
	static int16_t x842 = -3189;
	static int32_t x843 = INT32_MIN;
	static int32_t t185 = -103854;

    t185 = ((x841+x842)<=(x843&x844));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x845 = 39;
	uint32_t x847 = 718U;
	static int8_t x848 = -14;
	static int32_t t186 = -83055991;

    t186 = ((x845+x846)<=(x847&x848));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x849 = 72;
	static uint8_t x850 = 0U;

    t187 = ((x849+x850)<=(x851&x852));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x856 = 344U;
	int32_t t188 = 276;

    t188 = ((x853+x854)<=(x855&x856));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x857 = INT64_MIN;
	int8_t x858 = 60;
	volatile int32_t t189 = 1333185;

    t189 = ((x857+x858)<=(x859&x860));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x861 = INT64_MAX;
	uint32_t x862 = 0U;
	volatile int8_t x863 = INT8_MAX;
	static uint8_t x864 = UINT8_MAX;

    t190 = ((x861+x862)<=(x863&x864));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x865 = UINT64_MAX;
	int8_t x867 = INT8_MIN;
	volatile int32_t t191 = -13320427;

    t191 = ((x865+x866)<=(x867&x868));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x869 = UINT16_MAX;
	int8_t x870 = -1;
	uint16_t x872 = UINT16_MAX;
	volatile int32_t t192 = 17081161;

    t192 = ((x869+x870)<=(x871&x872));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x873 = -13;
	int8_t x874 = -1;
	int16_t x876 = INT16_MAX;
	int32_t t193 = -214746;

    t193 = ((x873+x874)<=(x875&x876));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x877 = 145429444U;
	volatile uint8_t x878 = 107U;
	int32_t x879 = INT32_MIN;
	static int32_t t194 = 42960;

    t194 = ((x877+x878)<=(x879&x880));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x885 = -1LL;
	uint32_t x886 = 2U;
	uint8_t x887 = 19U;
	static uint64_t x888 = 19643LLU;
	volatile int32_t t195 = 20082;

    t195 = ((x885+x886)<=(x887&x888));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x890 = -202;
	int16_t x891 = 1623;
	uint16_t x892 = 60U;
	int32_t t196 = 27169;

    t196 = ((x889+x890)<=(x891&x892));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x893 = 12U;
	volatile uint16_t x894 = 1U;
	int16_t x895 = -1;
	static int32_t t197 = 13072;

    t197 = ((x893+x894)<=(x895&x896));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x897 = INT64_MIN;
	uint16_t x898 = 689U;
	static volatile int32_t t198 = 22;

    t198 = ((x897+x898)<=(x899&x900));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x902 = 15426;
	int32_t x903 = INT32_MIN;
	int32_t x904 = INT32_MAX;

    t199 = ((x901+x902)<=(x903&x904));

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

