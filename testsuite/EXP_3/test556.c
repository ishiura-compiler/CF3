
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

static int32_t x5 = INT32_MIN;
volatile uint16_t x8 = 236U;
uint16_t x11 = 26102U;
static volatile int32_t t2 = 0;
static volatile int32_t x19 = -1;
static volatile int32_t t4 = -183589;
int32_t t5 = 19;
uint64_t x36 = 142972765137490769LLU;
int16_t x37 = -1;
int8_t x50 = 23;
static int32_t t10 = 0;
volatile int8_t x53 = 31;
int8_t x54 = INT8_MAX;
int8_t x58 = INT8_MIN;
volatile int32_t x69 = INT32_MIN;
uint16_t x71 = UINT16_MAX;
int32_t x73 = 2302731;
int32_t t17 = 743;
volatile int8_t x96 = INT8_MIN;
int16_t x104 = -1;
uint16_t x117 = UINT16_MAX;
int32_t x119 = 42;
int32_t t23 = 2;
volatile uint16_t x142 = 26U;
uint32_t x152 = 1U;
static volatile int16_t x160 = -1189;
int32_t t28 = 4287;
uint64_t x161 = 2171962318036976904LLU;
volatile uint64_t x163 = 5704734985LLU;
int32_t t29 = -1623421;
static int32_t x169 = -1742355;
static int32_t t31 = 12467498;
int64_t x173 = 44527490755797LL;
static uint16_t x174 = UINT16_MAX;
volatile int32_t x176 = INT32_MIN;
int8_t x177 = -31;
static uint16_t x178 = 523U;
static int8_t x200 = INT8_MAX;
static volatile int32_t t38 = 3318;
static volatile int16_t x203 = INT16_MIN;
static volatile int64_t x204 = -1LL;
volatile uint32_t x205 = 2209U;
static uint64_t x220 = UINT64_MAX;
int16_t x221 = INT16_MIN;
uint16_t x222 = 0U;
int64_t x240 = -492809361LL;
volatile int32_t t45 = 209848865;
static uint64_t x244 = 999807LLU;
int8_t x252 = -18;
int64_t x266 = -6326LL;
uint8_t x268 = 4U;
int8_t x272 = -1;
volatile int32_t t55 = -19928421;
uint64_t x292 = 7246449380100354457LLU;
static int8_t x294 = -1;
uint8_t x296 = 4U;
uint64_t x306 = UINT64_MAX;
static uint32_t x307 = 80299U;
int8_t x308 = INT8_MIN;
uint16_t x309 = 10212U;
int64_t x313 = -56474469LL;
uint64_t x316 = 3LLU;
volatile uint8_t x323 = UINT8_MAX;
volatile int32_t t63 = 27;
volatile int32_t t64 = -997989517;
volatile int32_t x337 = -1;
static volatile int32_t t66 = 26696907;
int8_t x341 = INT8_MIN;
int64_t x344 = -210615484320LL;
int8_t x361 = -1;
uint64_t x366 = UINT64_MAX;
volatile int16_t x373 = 54;
uint8_t x380 = UINT8_MAX;
int32_t x386 = INT32_MIN;
volatile int32_t t73 = 839;
int8_t x395 = -1;
int32_t t74 = 7750057;
int32_t x398 = INT32_MIN;
int8_t x404 = 0;
int32_t t76 = 58613730;
int16_t x409 = INT16_MIN;
static int32_t x413 = INT32_MIN;
int64_t x427 = -1LL;
static int16_t x433 = -1;
int32_t x436 = INT32_MIN;
int32_t t81 = 222443822;
uint64_t x443 = 970894344144LLU;
int32_t x454 = -1;
int32_t x459 = -1;
volatile int32_t t87 = -1;
static int32_t x472 = -3;
int64_t x477 = INT64_MIN;
volatile int32_t t90 = 1060269050;
volatile int32_t t92 = 4666;
int32_t x504 = INT32_MAX;
uint16_t x515 = UINT16_MAX;
int16_t x516 = INT16_MAX;
uint64_t x521 = 9971446726892588LLU;
int64_t x522 = -1079042316185LL;
int16_t x523 = 37;
int32_t x533 = -1;
uint8_t x536 = 3U;
int16_t x538 = INT16_MAX;
volatile uint64_t x539 = 770411929534854735LLU;
static volatile int16_t x541 = -1;
int32_t t102 = -247243123;
uint8_t x547 = UINT8_MAX;
int32_t x551 = 943048383;
int64_t x561 = INT64_MAX;
static volatile int16_t x562 = -15;
uint16_t x563 = UINT16_MAX;
volatile int32_t t105 = -369;
static volatile uint16_t x573 = 1191U;
int32_t x574 = -3;
volatile uint16_t x575 = UINT16_MAX;
int32_t x582 = INT32_MAX;
int64_t x584 = -178815371203497038LL;
volatile uint8_t x586 = 101U;
volatile int32_t t108 = -1;
int32_t x595 = -1398171;
int32_t x599 = INT32_MIN;
int8_t x607 = INT8_MAX;
volatile int32_t t111 = -554687407;
volatile int32_t t112 = -991458;
static int32_t x613 = 21;
static uint16_t x614 = UINT16_MAX;
int32_t t114 = -749266132;
uint64_t x641 = 4109369717035LLU;
volatile int32_t t116 = -11;
uint32_t x656 = UINT32_MAX;
uint16_t x664 = 21629U;
int32_t t118 = 22;
static int64_t x666 = INT64_MIN;
static int32_t t120 = -55401466;
uint64_t x673 = 5216529680263LLU;
volatile int32_t t121 = -530473410;
int64_t x680 = 5511LL;
int8_t x682 = -1;
uint64_t x684 = 20119377LLU;
int32_t t123 = 3;
int8_t x686 = -1;
int32_t t126 = 667131;
uint32_t x702 = 110685203U;
static int8_t x713 = INT8_MIN;
uint64_t x715 = UINT64_MAX;
uint32_t x717 = 2602U;
static int64_t x729 = INT64_MIN;
int8_t x731 = 0;
volatile int64_t x735 = -1LL;
volatile uint32_t x736 = 10U;
static int32_t t133 = 110336;
uint8_t x737 = 64U;
int8_t x739 = INT8_MIN;
volatile uint32_t x743 = 208U;
uint8_t x749 = 15U;
volatile int8_t x750 = INT8_MAX;
volatile int32_t t137 = -2086832;
static int8_t x755 = INT8_MIN;
int8_t x758 = INT8_MAX;
int8_t x759 = INT8_MAX;
int8_t x760 = 31;
int8_t x768 = INT8_MIN;
int32_t x771 = -1;
volatile int8_t x782 = -1;
static int32_t x784 = INT32_MIN;
static int16_t x788 = INT16_MIN;
volatile int64_t x805 = INT64_MIN;
volatile int32_t t148 = -194;
int64_t x817 = INT64_MAX;
int16_t x822 = INT16_MIN;
int64_t x842 = 3227202596584895LL;
static int8_t x853 = INT8_MAX;
int64_t x855 = INT64_MIN;
int16_t x859 = INT16_MIN;
uint32_t x862 = UINT32_MAX;
uint64_t x865 = 250667353688LLU;
volatile int64_t x866 = 93198LL;
int32_t t159 = -17;
int16_t x876 = INT16_MAX;
uint16_t x883 = UINT16_MAX;
volatile int32_t t163 = -112536;
volatile uint8_t x895 = 40U;
uint64_t x896 = 11534503LLU;
static uint16_t x897 = UINT16_MAX;
int32_t x902 = INT32_MAX;
int8_t x916 = INT8_MIN;
int16_t x917 = -493;
int16_t x918 = -1;
uint64_t x925 = 43662834998943LLU;
volatile int8_t x928 = INT8_MAX;
uint8_t x936 = UINT8_MAX;
static uint32_t x949 = UINT32_MAX;
volatile uint32_t x965 = 5687383U;
static uint64_t x974 = UINT64_MAX;
int16_t x977 = INT16_MIN;
static uint32_t x979 = UINT32_MAX;
int64_t x981 = 6079167LL;
int16_t x982 = INT16_MIN;
static uint8_t x1010 = UINT8_MAX;
uint64_t x1013 = UINT64_MAX;
int8_t x1014 = INT8_MIN;
volatile int16_t x1020 = -1;
int32_t x1024 = -1;
volatile uint16_t x1025 = 708U;
static uint16_t x1036 = 3U;
volatile int64_t x1049 = INT64_MIN;
static uint64_t x1053 = 5LLU;
static uint32_t x1054 = UINT32_MAX;
volatile int32_t t192 = 64443390;
volatile uint32_t x1059 = 301U;
static int32_t x1067 = 1345326;
int16_t x1073 = -1;
static uint16_t x1078 = UINT16_MAX;
volatile int16_t x1080 = INT16_MAX;
volatile int64_t x1081 = 180409645943LL;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int32_t x2 = 257712;
	uint64_t x3 = UINT64_MAX;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = 65505255;

    t0 = ((x1&x2)<=(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = 89693304757LL;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = -3846830;

    t1 = ((x5&x6)<=(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;

    t2 = ((x9&x10)<=(x11*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	volatile int32_t x18 = -1;
	int16_t x20 = INT16_MAX;
	static volatile int32_t t3 = 1;

    t3 = ((x17&x18)<=(x19*x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -15657;
	int8_t x26 = INT8_MIN;
	static int16_t x27 = INT16_MIN;
	int16_t x28 = -1;

    t4 = ((x25&x26)<=(x27*x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = -55253087;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = INT8_MIN;

    t5 = ((x29&x30)<=(x31*x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile uint8_t x34 = 0U;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t t6 = -277753;

    t6 = ((x33&x34)<=(x35*x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x38 = 14612U;
	volatile int16_t x39 = 13;
	int32_t x40 = 73372101;
	volatile int32_t t7 = 835808790;

    t7 = ((x37&x38)<=(x39*x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = UINT32_MAX;
	int32_t x42 = -24;
	static uint32_t x43 = UINT32_MAX;
	int32_t x44 = -1;
	volatile int32_t t8 = 1048528543;

    t8 = ((x41&x42)<=(x43*x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 18171U;
	static volatile int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	int16_t x48 = -1;
	int32_t t9 = 3688523;

    t9 = ((x45&x46)<=(x47*x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = -1LL;
	volatile int32_t x51 = 8;
	int64_t x52 = -1904885318460177LL;

    t10 = ((x49&x50)<=(x51*x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x55 = -27247067LL;
	int32_t x56 = 5253615;
	int32_t t11 = -1;

    t11 = ((x53&x54)<=(x55*x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 15588156LLU;
	int16_t x59 = 0;
	int32_t x60 = 3158;
	volatile int32_t t12 = -136;

    t12 = ((x57&x58)<=(x59*x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x65 = -5;
	static uint32_t x66 = UINT32_MAX;
	static volatile uint8_t x67 = 1U;
	volatile uint16_t x68 = 3205U;
	static volatile int32_t t13 = -215826;

    t13 = ((x65&x66)<=(x67*x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x70 = INT16_MAX;
	int8_t x72 = INT8_MAX;
	volatile int32_t t14 = -203801086;

    t14 = ((x69&x70)<=(x71*x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x74 = INT64_MAX;
	int16_t x75 = 815;
	volatile int16_t x76 = INT16_MIN;
	int32_t t15 = 415;

    t15 = ((x73&x74)<=(x75*x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = INT8_MIN;
	int16_t x86 = -1;
	static int16_t x87 = 11;
	volatile uint16_t x88 = UINT16_MAX;
	static int32_t t16 = -1910746;

    t16 = ((x85&x86)<=(x87*x88));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = 1;
	uint32_t x90 = 881333780U;
	static uint16_t x91 = 12U;
	volatile int32_t x92 = -28673669;

    t17 = ((x89&x90)<=(x91*x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x93 = 21U;
	uint8_t x94 = 7U;
	int8_t x95 = INT8_MIN;
	static int32_t t18 = -114;

    t18 = ((x93&x94)<=(x95*x96));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x97 = -1;
	volatile uint8_t x98 = 4U;
	volatile int16_t x99 = INT16_MIN;
	int16_t x100 = -1;
	volatile int32_t t19 = -42897026;

    t19 = ((x97&x98)<=(x99*x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x101 = 32305807U;
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = UINT8_MAX;
	int32_t t20 = -111862900;

    t20 = ((x101&x102)<=(x103*x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = INT16_MIN;
	static int32_t x110 = INT32_MAX;
	static int16_t x111 = INT16_MAX;
	static int32_t x112 = -1;
	volatile int32_t t21 = -595;

    t21 = ((x109&x110)<=(x111*x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	uint32_t x114 = UINT32_MAX;
	static uint16_t x115 = UINT16_MAX;
	uint64_t x116 = 3779699551967444LLU;
	static volatile int32_t t22 = -455564;

    t22 = ((x113&x114)<=(x115*x116));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x118 = UINT16_MAX;
	uint16_t x120 = 130U;

    t23 = ((x117&x118)<=(x119*x120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x125 = 0;
	uint16_t x126 = UINT16_MAX;
	int16_t x127 = -43;
	int16_t x128 = INT16_MIN;
	int32_t t24 = 37743;

    t24 = ((x125&x126)<=(x127*x128));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x133 = INT16_MIN;
	int32_t x134 = INT32_MIN;
	int16_t x135 = -1;
	volatile uint16_t x136 = 2U;
	volatile int32_t t25 = 1281;

    t25 = ((x133&x134)<=(x135*x136));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x141 = -1LL;
	uint32_t x143 = UINT32_MAX;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t26 = 196029;

    t26 = ((x141&x142)<=(x143*x144));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x149 = 38954009216043924LLU;
	static int32_t x150 = INT32_MIN;
	int8_t x151 = 13;
	static volatile int32_t t27 = -923585;

    t27 = ((x149&x150)<=(x151*x152));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x157 = INT32_MIN;
	int32_t x158 = -32834470;
	int16_t x159 = -1;

    t28 = ((x157&x158)<=(x159*x160));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x162 = INT32_MIN;
	volatile int16_t x164 = -6;

    t29 = ((x161&x162)<=(x163*x164));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x165 = 2009316;
	int32_t x166 = INT32_MAX;
	int16_t x167 = -53;
	int64_t x168 = -1400983176LL;
	int32_t t30 = -34;

    t30 = ((x165&x166)<=(x167*x168));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x170 = UINT8_MAX;
	volatile uint64_t x171 = 989924051477965LLU;
	int32_t x172 = INT32_MAX;

    t31 = ((x169&x170)<=(x171*x172));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x175 = UINT32_MAX;
	volatile int32_t t32 = 114736;

    t32 = ((x173&x174)<=(x175*x176));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x179 = INT8_MIN;
	volatile uint32_t x180 = 7159909U;
	static volatile int32_t t33 = 62793;

    t33 = ((x177&x178)<=(x179*x180));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x181 = -1;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 13295U;
	int8_t x184 = -8;
	volatile int32_t t34 = -1;

    t34 = ((x181&x182)<=(x183*x184));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x185 = UINT32_MAX;
	int16_t x186 = 2920;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = 12255;
	int32_t t35 = -1;

    t35 = ((x185&x186)<=(x187*x188));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x189 = 785LLU;
	int16_t x190 = INT16_MAX;
	static int8_t x191 = -1;
	uint32_t x192 = 1032148U;
	volatile int32_t t36 = -3452;

    t36 = ((x189&x190)<=(x191*x192));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x193 = -1852094318501648159LL;
	static int8_t x194 = INT8_MIN;
	int8_t x195 = 2;
	int16_t x196 = -1;
	volatile int32_t t37 = 23;

    t37 = ((x193&x194)<=(x195*x196));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	int8_t x199 = INT8_MIN;

    t38 = ((x197&x198)<=(x199*x200));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x201 = 3942344271929LL;
	static uint64_t x202 = 113121LLU;
	int32_t t39 = -1310;

    t39 = ((x201&x202)<=(x203*x204));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x206 = 2465580105518650LL;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = 0;
	volatile int32_t t40 = 666639;

    t40 = ((x205&x206)<=(x207*x208));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x209 = INT16_MAX;
	int32_t x210 = -7;
	uint64_t x211 = 38387759315659418LLU;
	uint8_t x212 = UINT8_MAX;
	static int32_t t41 = -109834;

    t41 = ((x209&x210)<=(x211*x212));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x217 = INT16_MIN;
	uint32_t x218 = 1U;
	volatile int8_t x219 = INT8_MIN;
	int32_t t42 = -1715;

    t42 = ((x217&x218)<=(x219*x220));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x223 = 7136872700LLU;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int32_t t43 = 1;

    t43 = ((x221&x222)<=(x223*x224));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x225 = 32063U;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 160171LLU;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t44 = 1794944;

    t44 = ((x225&x226)<=(x227*x228));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x237 = 79617U;
	volatile int16_t x238 = -831;
	uint64_t x239 = UINT64_MAX;

    t45 = ((x237&x238)<=(x239*x240));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x241 = 323600U;
	int16_t x242 = -10;
	volatile int16_t x243 = 824;
	int32_t t46 = 669;

    t46 = ((x241&x242)<=(x243*x244));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x245 = -97183817;
	static volatile int64_t x246 = -3782404295LL;
	int8_t x247 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	volatile int32_t t47 = -160275097;

    t47 = ((x245&x246)<=(x247*x248));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x249 = 28993532U;
	int64_t x250 = 3304292383LL;
	int8_t x251 = INT8_MIN;
	volatile int32_t t48 = 7887;

    t48 = ((x249&x250)<=(x251*x252));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x253 = INT16_MIN;
	uint16_t x254 = 2771U;
	uint32_t x255 = 1008997U;
	int16_t x256 = INT16_MIN;
	volatile int32_t t49 = -13;

    t49 = ((x253&x254)<=(x255*x256));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x265 = -1;
	uint16_t x267 = UINT16_MAX;
	int32_t t50 = 0;

    t50 = ((x265&x266)<=(x267*x268));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x269 = -1LL;
	int64_t x270 = -1LL;
	static int16_t x271 = -11;
	int32_t t51 = -129;

    t51 = ((x269&x270)<=(x271*x272));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x273 = INT8_MIN;
	int8_t x274 = -1;
	uint8_t x275 = 124U;
	static uint64_t x276 = UINT64_MAX;
	volatile int32_t t52 = -261673;

    t52 = ((x273&x274)<=(x275*x276));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x277 = -2134;
	volatile uint32_t x278 = UINT32_MAX;
	int8_t x279 = -1;
	volatile uint16_t x280 = 261U;
	volatile int32_t t53 = 4;

    t53 = ((x277&x278)<=(x279*x280));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x281 = -39;
	int16_t x282 = -379;
	int64_t x283 = -1LL;
	int32_t x284 = 18492;
	volatile int32_t t54 = 371;

    t54 = ((x281&x282)<=(x283*x284));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x285 = INT16_MIN;
	uint32_t x286 = 1U;
	int64_t x287 = 149685704274LL;
	int64_t x288 = -7LL;

    t55 = ((x285&x286)<=(x287*x288));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x289 = -7510415664113LL;
	int16_t x290 = -1;
	int32_t x291 = INT32_MAX;
	volatile int32_t t56 = 41930002;

    t56 = ((x289&x290)<=(x291*x292));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x293 = -11LL;
	int16_t x295 = INT16_MAX;
	int32_t t57 = -107642;

    t57 = ((x293&x294)<=(x295*x296));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = -1;
	volatile int32_t t58 = 1925;

    t58 = ((x297&x298)<=(x299*x300));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x305 = 106LL;
	static volatile int32_t t59 = -9479;

    t59 = ((x305&x306)<=(x307*x308));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x310 = 281;
	volatile uint32_t x311 = 109U;
	static int32_t x312 = -1;
	int32_t t60 = 27757;

    t60 = ((x309&x310)<=(x311*x312));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x314 = 12U;
	volatile uint64_t x315 = UINT64_MAX;
	int32_t t61 = -5195749;

    t61 = ((x313&x314)<=(x315*x316));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x317 = INT64_MIN;
	int64_t x318 = -53082708023LL;
	int8_t x319 = INT8_MAX;
	volatile int8_t x320 = INT8_MIN;
	int32_t t62 = 51916;

    t62 = ((x317&x318)<=(x319*x320));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x321 = 4U;
	int16_t x322 = -1;
	static int32_t x324 = -1;

    t63 = ((x321&x322)<=(x323*x324));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x325 = UINT32_MAX;
	int64_t x326 = INT64_MIN;
	static int16_t x327 = -148;
	int16_t x328 = INT16_MIN;

    t64 = ((x325&x326)<=(x327*x328));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x329 = UINT16_MAX;
	uint64_t x330 = 2623792172LLU;
	uint16_t x331 = 15328U;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t65 = 1;

    t65 = ((x329&x330)<=(x331*x332));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x338 = INT8_MIN;
	static uint8_t x339 = UINT8_MAX;
	volatile int16_t x340 = -1;

    t66 = ((x337&x338)<=(x339*x340));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x342 = INT8_MIN;
	int16_t x343 = -5;
	volatile int32_t t67 = 780202460;

    t67 = ((x341&x342)<=(x343*x344));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x362 = 3175764194LLU;
	volatile int8_t x363 = 3;
	uint8_t x364 = UINT8_MAX;
	int32_t t68 = -3913597;

    t68 = ((x361&x362)<=(x363*x364));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x365 = 4601U;
	static volatile int64_t x367 = 143502649302LL;
	int16_t x368 = 308;
	int32_t t69 = 233868918;

    t69 = ((x365&x366)<=(x367*x368));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = -1;
	uint64_t x371 = 8472344822402487900LLU;
	uint32_t x372 = 10597243U;
	int32_t t70 = -325314928;

    t70 = ((x369&x370)<=(x371*x372));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x374 = INT16_MAX;
	static uint16_t x375 = 7445U;
	int64_t x376 = 18101498LL;
	volatile int32_t t71 = -4095111;

    t71 = ((x373&x374)<=(x375*x376));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x377 = -1;
	int8_t x378 = INT8_MAX;
	volatile int64_t x379 = 0LL;
	int32_t t72 = 1;

    t72 = ((x377&x378)<=(x379*x380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x385 = 2U;
	static int16_t x387 = -12676;
	uint32_t x388 = 2U;

    t73 = ((x385&x386)<=(x387*x388));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x393 = 87U;
	volatile uint64_t x394 = UINT64_MAX;
	static int64_t x396 = 0LL;

    t74 = ((x393&x394)<=(x395*x396));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = 0;
	static volatile int32_t t75 = 241285;

    t75 = ((x397&x398)<=(x399*x400));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x401 = 928215729U;
	int8_t x402 = -14;
	int8_t x403 = -11;

    t76 = ((x401&x402)<=(x403*x404));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x410 = -1;
	uint64_t x411 = UINT64_MAX;
	static int64_t x412 = INT64_MIN;
	int32_t t77 = -905785337;

    t77 = ((x409&x410)<=(x411*x412));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x414 = UINT8_MAX;
	volatile uint32_t x415 = 240861340U;
	uint8_t x416 = 6U;
	volatile int32_t t78 = 23;

    t78 = ((x413&x414)<=(x415*x416));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x421 = 16303997608279163LL;
	uint32_t x422 = 564570U;
	static int16_t x423 = 0;
	static uint16_t x424 = UINT16_MAX;
	int32_t t79 = -5;

    t79 = ((x421&x422)<=(x423*x424));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x425 = INT32_MIN;
	static volatile uint8_t x426 = UINT8_MAX;
	uint32_t x428 = UINT32_MAX;
	int32_t t80 = -1;

    t80 = ((x425&x426)<=(x427*x428));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x434 = INT64_MIN;
	static uint32_t x435 = 1573287U;

    t81 = ((x433&x434)<=(x435*x436));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x441 = 7047LL;
	uint32_t x442 = UINT32_MAX;
	volatile int64_t x444 = INT64_MIN;
	static volatile int32_t t82 = 2627;

    t82 = ((x441&x442)<=(x443*x444));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x445 = 1;
	uint8_t x446 = UINT8_MAX;
	int16_t x447 = -3903;
	int32_t x448 = -11;
	int32_t t83 = -1;

    t83 = ((x445&x446)<=(x447*x448));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x449 = 0;
	int16_t x450 = -40;
	int16_t x451 = -339;
	int16_t x452 = INT16_MIN;
	int32_t t84 = 220;

    t84 = ((x449&x450)<=(x451*x452));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x453 = INT64_MIN;
	int8_t x455 = INT8_MAX;
	int64_t x456 = -1LL;
	int32_t t85 = 165547;

    t85 = ((x453&x454)<=(x455*x456));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x457 = 5295;
	static int8_t x458 = -48;
	int16_t x460 = -30;
	static int32_t t86 = 43;

    t86 = ((x457&x458)<=(x459*x460));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x465 = INT64_MIN;
	volatile int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MAX;
	int64_t x468 = -1LL;

    t87 = ((x465&x466)<=(x467*x468));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x469 = INT16_MAX;
	static uint64_t x470 = 873591401LLU;
	static uint64_t x471 = 1019362431007352897LLU;
	volatile int32_t t88 = 86969;

    t88 = ((x469&x470)<=(x471*x472));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x478 = INT8_MIN;
	int16_t x479 = INT16_MIN;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t89 = -596631642;

    t89 = ((x477&x478)<=(x479*x480));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x481 = 14191628575LLU;
	uint64_t x482 = 18042373396865LLU;
	uint8_t x483 = 12U;
	volatile uint16_t x484 = 1U;

    t90 = ((x481&x482)<=(x483*x484));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x485 = INT16_MAX;
	int64_t x486 = -1LL;
	static uint64_t x487 = 1941LLU;
	uint8_t x488 = 2U;
	static int32_t t91 = -19274706;

    t91 = ((x485&x486)<=(x487*x488));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x497 = INT8_MIN;
	static int32_t x498 = -1983;
	static uint8_t x499 = UINT8_MAX;
	static int8_t x500 = INT8_MIN;

    t92 = ((x497&x498)<=(x499*x500));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MAX;
	static uint32_t x503 = 137U;
	int32_t t93 = 3945;

    t93 = ((x501&x502)<=(x503*x504));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x509 = 3485U;
	volatile int64_t x510 = INT64_MIN;
	int8_t x511 = 0;
	int64_t x512 = -1LL;
	static volatile int32_t t94 = -19160571;

    t94 = ((x509&x510)<=(x511*x512));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x513 = -521222075873LL;
	static uint8_t x514 = UINT8_MAX;
	int32_t t95 = -5;

    t95 = ((x513&x514)<=(x515*x516));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x517 = 1656LLU;
	int8_t x518 = -9;
	uint64_t x519 = 2LLU;
	static volatile int64_t x520 = INT64_MIN;
	int32_t t96 = 1571250;

    t96 = ((x517&x518)<=(x519*x520));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x524 = -1;
	static volatile int32_t t97 = 141;

    t97 = ((x521&x522)<=(x523*x524));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x525 = INT32_MAX;
	volatile int16_t x526 = -1;
	int64_t x527 = -1LL;
	static int16_t x528 = INT16_MAX;
	int32_t t98 = -130082366;

    t98 = ((x525&x526)<=(x527*x528));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x529 = INT32_MAX;
	static int16_t x530 = INT16_MIN;
	int16_t x531 = -1;
	int8_t x532 = -1;
	static int32_t t99 = -8902;

    t99 = ((x529&x530)<=(x531*x532));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x534 = UINT64_MAX;
	int64_t x535 = -1LL;
	static int32_t t100 = -1187;

    t100 = ((x533&x534)<=(x535*x536));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x537 = -1;
	static uint16_t x540 = 1896U;
	volatile int32_t t101 = 125552;

    t101 = ((x537&x538)<=(x539*x540));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x542 = INT64_MIN;
	int8_t x543 = 26;
	int16_t x544 = INT16_MAX;

    t102 = ((x541&x542)<=(x543*x544));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x545 = INT8_MAX;
	int64_t x546 = 8716132653LL;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t103 = 15852862;

    t103 = ((x545&x546)<=(x547*x548));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x549 = INT32_MAX;
	static int16_t x550 = INT16_MIN;
	static int64_t x552 = -1LL;
	int32_t t104 = -3107;

    t104 = ((x549&x550)<=(x551*x552));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x564 = 7366U;

    t105 = ((x561&x562)<=(x563*x564));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x576 = 29U;
	int32_t t106 = -99781;

    t106 = ((x573&x574)<=(x575*x576));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x581 = -25;
	uint16_t x583 = 1U;
	volatile int32_t t107 = -699119;

    t107 = ((x581&x582)<=(x583*x584));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x585 = -1;
	int32_t x587 = INT32_MAX;
	static int8_t x588 = -1;

    t108 = ((x585&x586)<=(x587*x588));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x593 = UINT64_MAX;
	int64_t x594 = -172167LL;
	int8_t x596 = 10;
	volatile int32_t t109 = -24;

    t109 = ((x593&x594)<=(x595*x596));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x597 = 19;
	int32_t x598 = -20;
	int64_t x600 = 3938716LL;
	int32_t t110 = -3263;

    t110 = ((x597&x598)<=(x599*x600));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x605 = 92U;
	int8_t x606 = -3;
	int16_t x608 = INT16_MIN;

    t111 = ((x605&x606)<=(x607*x608));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x609 = -1LL;
	int64_t x610 = INT64_MAX;
	int16_t x611 = INT16_MIN;
	static volatile int8_t x612 = INT8_MIN;

    t112 = ((x609&x610)<=(x611*x612));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x615 = -1;
	volatile int64_t x616 = -7085493LL;
	volatile int32_t t113 = 3554331;

    t113 = ((x613&x614)<=(x615*x616));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x625 = INT8_MAX;
	int16_t x626 = 38;
	uint8_t x627 = 1U;
	static uint32_t x628 = UINT32_MAX;

    t114 = ((x625&x626)<=(x627*x628));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x629 = INT64_MAX;
	volatile int8_t x630 = INT8_MIN;
	uint32_t x631 = UINT32_MAX;
	static volatile int32_t x632 = -1;
	int32_t t115 = 15786607;

    t115 = ((x629&x630)<=(x631*x632));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x642 = -1;
	int32_t x643 = -13989;
	uint64_t x644 = 590023279347LLU;

    t116 = ((x641&x642)<=(x643*x644));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x653 = -54;
	int32_t x654 = INT32_MIN;
	int16_t x655 = 3103;
	static volatile int32_t t117 = -6;

    t117 = ((x653&x654)<=(x655*x656));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x661 = -1;
	int32_t x662 = INT32_MIN;
	uint32_t x663 = UINT32_MAX;

    t118 = ((x661&x662)<=(x663*x664));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x665 = 62179198LLU;
	int64_t x667 = -14523559151LL;
	static int8_t x668 = INT8_MIN;
	int32_t t119 = -18377;

    t119 = ((x665&x666)<=(x667*x668));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x669 = -1;
	static uint64_t x670 = 2297509337533174831LLU;
	int64_t x671 = -1LL;
	int16_t x672 = INT16_MIN;

    t120 = ((x669&x670)<=(x671*x672));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x674 = 18891U;
	static uint16_t x675 = 1511U;
	volatile uint64_t x676 = UINT64_MAX;

    t121 = ((x673&x674)<=(x675*x676));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x677 = 11;
	int32_t x678 = -1;
	static int16_t x679 = INT16_MAX;
	volatile int32_t t122 = 1;

    t122 = ((x677&x678)<=(x679*x680));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x681 = 22207450792LL;
	int16_t x683 = -1;

    t123 = ((x681&x682)<=(x683*x684));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x685 = 1;
	int16_t x687 = -1;
	uint32_t x688 = 1159U;
	static int32_t t124 = 416;

    t124 = ((x685&x686)<=(x687*x688));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x693 = -1;
	int16_t x694 = -1;
	volatile int16_t x695 = INT16_MIN;
	int64_t x696 = 1LL;
	static volatile int32_t t125 = -3142;

    t125 = ((x693&x694)<=(x695*x696));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x697 = -19;
	static int16_t x698 = INT16_MAX;
	uint8_t x699 = UINT8_MAX;
	uint64_t x700 = 66308620883180558LLU;

    t126 = ((x697&x698)<=(x699*x700));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x701 = 15;
	int16_t x703 = -7;
	int8_t x704 = 22;
	int32_t t127 = 0;

    t127 = ((x701&x702)<=(x703*x704));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x705 = INT8_MIN;
	volatile int16_t x706 = 1618;
	volatile int8_t x707 = -8;
	volatile int64_t x708 = -1LL;
	int32_t t128 = 379;

    t128 = ((x705&x706)<=(x707*x708));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x714 = 25U;
	uint64_t x716 = 738963LLU;
	volatile int32_t t129 = -2;

    t129 = ((x713&x714)<=(x715*x716));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x718 = INT64_MIN;
	int8_t x719 = -1;
	int64_t x720 = -1LL;
	int32_t t130 = -98358049;

    t130 = ((x717&x718)<=(x719*x720));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x725 = 1U;
	int64_t x726 = INT64_MAX;
	int32_t x727 = -1;
	int32_t x728 = 5494638;
	static volatile int32_t t131 = -27134874;

    t131 = ((x725&x726)<=(x727*x728));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x730 = 0U;
	int64_t x732 = INT64_MIN;
	volatile int32_t t132 = 130860112;

    t132 = ((x729&x730)<=(x731*x732));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x733 = -30;
	int32_t x734 = 7;

    t133 = ((x733&x734)<=(x735*x736));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x738 = INT64_MIN;
	static uint8_t x740 = UINT8_MAX;
	int32_t t134 = -20054866;

    t134 = ((x737&x738)<=(x739*x740));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x741 = 243800LLU;
	int64_t x742 = -1LL;
	volatile int64_t x744 = 10491391432412580LL;
	static volatile int32_t t135 = -1;

    t135 = ((x741&x742)<=(x743*x744));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x745 = INT32_MIN;
	static uint64_t x746 = 86921694656486LLU;
	int64_t x747 = -750038468589LL;
	volatile int32_t x748 = -1;
	volatile int32_t t136 = -5484;

    t136 = ((x745&x746)<=(x747*x748));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint32_t x751 = UINT32_MAX;
	volatile int32_t x752 = -1;

    t137 = ((x749&x750)<=(x751*x752));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x753 = 1U;
	int8_t x754 = INT8_MIN;
	static volatile int16_t x756 = INT16_MIN;
	int32_t t138 = 9;

    t138 = ((x753&x754)<=(x755*x756));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x757 = 0;
	volatile int32_t t139 = 493;

    t139 = ((x757&x758)<=(x759*x760));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x765 = -1;
	int8_t x766 = INT8_MIN;
	int8_t x767 = -12;
	volatile int32_t t140 = 4;

    t140 = ((x765&x766)<=(x767*x768));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x769 = INT16_MIN;
	int8_t x770 = 6;
	int64_t x772 = -6564173151671LL;
	volatile int32_t t141 = -1052319864;

    t141 = ((x769&x770)<=(x771*x772));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x773 = 502817555827470176LLU;
	uint32_t x774 = UINT32_MAX;
	int16_t x775 = INT16_MIN;
	int32_t x776 = 1;
	volatile int32_t t142 = -22;

    t142 = ((x773&x774)<=(x775*x776));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x781 = 31U;
	int64_t x783 = -1LL;
	volatile int32_t t143 = 4604028;

    t143 = ((x781&x782)<=(x783*x784));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x785 = 4LLU;
	uint16_t x786 = UINT16_MAX;
	volatile uint64_t x787 = UINT64_MAX;
	int32_t t144 = 2616;

    t144 = ((x785&x786)<=(x787*x788));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x789 = 208U;
	volatile int16_t x790 = -1;
	int16_t x791 = INT16_MIN;
	uint8_t x792 = 42U;
	static int32_t t145 = -8124539;

    t145 = ((x789&x790)<=(x791*x792));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x797 = INT64_MIN;
	uint16_t x798 = 5U;
	static volatile int8_t x799 = -1;
	uint8_t x800 = 22U;
	volatile int32_t t146 = -952;

    t146 = ((x797&x798)<=(x799*x800));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x801 = INT16_MIN;
	static int64_t x802 = -761LL;
	int64_t x803 = 243413797LL;
	int16_t x804 = 0;
	volatile int32_t t147 = -564920;

    t147 = ((x801&x802)<=(x803*x804));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x806 = UINT16_MAX;
	int8_t x807 = INT8_MIN;
	int32_t x808 = 3880;

    t148 = ((x805&x806)<=(x807*x808));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x813 = INT64_MIN;
	volatile uint32_t x814 = 254U;
	uint8_t x815 = UINT8_MAX;
	int64_t x816 = -1334492305032476LL;
	int32_t t149 = -671;

    t149 = ((x813&x814)<=(x815*x816));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x818 = INT16_MAX;
	int16_t x819 = -12565;
	volatile uint64_t x820 = UINT64_MAX;
	int32_t t150 = 30695034;

    t150 = ((x817&x818)<=(x819*x820));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x821 = -1LL;
	int16_t x823 = INT16_MAX;
	volatile uint64_t x824 = 128135LLU;
	volatile int32_t t151 = 18381724;

    t151 = ((x821&x822)<=(x823*x824));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x825 = INT8_MIN;
	uint16_t x826 = 12021U;
	int32_t x827 = -964;
	static int64_t x828 = -1LL;
	int32_t t152 = 111149802;

    t152 = ((x825&x826)<=(x827*x828));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x829 = -1LL;
	uint8_t x830 = 45U;
	volatile int16_t x831 = 2766;
	static uint32_t x832 = 405086556U;
	volatile int32_t t153 = 1;

    t153 = ((x829&x830)<=(x831*x832));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x837 = INT8_MAX;
	uint64_t x838 = 106175933120137LLU;
	int16_t x839 = 1;
	static int8_t x840 = INT8_MIN;
	int32_t t154 = -76837;

    t154 = ((x837&x838)<=(x839*x840));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x841 = -1;
	uint32_t x843 = 40512034U;
	int16_t x844 = INT16_MIN;
	int32_t t155 = -380141421;

    t155 = ((x841&x842)<=(x843*x844));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x854 = UINT32_MAX;
	uint64_t x856 = 2497268598419LLU;
	volatile int32_t t156 = 187;

    t156 = ((x853&x854)<=(x855*x856));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x857 = -1LL;
	int64_t x858 = INT64_MIN;
	int16_t x860 = -1;
	volatile int32_t t157 = 172;

    t157 = ((x857&x858)<=(x859*x860));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x861 = 3U;
	int16_t x863 = 3;
	volatile uint8_t x864 = UINT8_MAX;
	int32_t t158 = -1;

    t158 = ((x861&x862)<=(x863*x864));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x867 = 0U;
	int8_t x868 = -9;

    t159 = ((x865&x866)<=(x867*x868));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x873 = -49;
	int64_t x874 = INT64_MAX;
	int8_t x875 = INT8_MIN;
	static volatile int32_t t160 = -16449894;

    t160 = ((x873&x874)<=(x875*x876));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x877 = -1;
	static int8_t x878 = INT8_MAX;
	int8_t x879 = -1;
	int32_t x880 = -1;
	static int32_t t161 = 19;

    t161 = ((x877&x878)<=(x879*x880));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x881 = -858756555639465LL;
	int32_t x882 = -1398869;
	int16_t x884 = -1;
	int32_t t162 = 22220;

    t162 = ((x881&x882)<=(x883*x884));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x885 = UINT8_MAX;
	volatile int64_t x886 = INT64_MAX;
	uint64_t x887 = 15521215749695496LLU;
	static int16_t x888 = INT16_MAX;

    t163 = ((x885&x886)<=(x887*x888));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x889 = 1;
	int32_t x890 = INT32_MAX;
	int16_t x891 = INT16_MIN;
	int16_t x892 = -1;
	volatile int32_t t164 = -3673;

    t164 = ((x889&x890)<=(x891*x892));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x893 = UINT16_MAX;
	static int32_t x894 = -561819;
	volatile int32_t t165 = 65;

    t165 = ((x893&x894)<=(x895*x896));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x898 = -1;
	int32_t x899 = 129904;
	static volatile int8_t x900 = INT8_MIN;
	int32_t t166 = -173191;

    t166 = ((x897&x898)<=(x899*x900));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x901 = 14958LLU;
	static uint8_t x903 = UINT8_MAX;
	int32_t x904 = -711684;
	int32_t t167 = 69902;

    t167 = ((x901&x902)<=(x903*x904));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x909 = INT8_MAX;
	int64_t x910 = INT64_MIN;
	int16_t x911 = INT16_MAX;
	uint16_t x912 = 30504U;
	static volatile int32_t t168 = -6061;

    t168 = ((x909&x910)<=(x911*x912));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x913 = -1LL;
	static volatile int64_t x914 = -1LL;
	static int16_t x915 = INT16_MIN;
	volatile int32_t t169 = -84;

    t169 = ((x913&x914)<=(x915*x916));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x919 = 3153099267870898LLU;
	volatile int8_t x920 = -1;
	volatile int32_t t170 = -109609;

    t170 = ((x917&x918)<=(x919*x920));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x926 = INT16_MIN;
	static int16_t x927 = -1;
	volatile int32_t t171 = -627038;

    t171 = ((x925&x926)<=(x927*x928));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x933 = 27138U;
	int64_t x934 = INT64_MAX;
	volatile int32_t x935 = -1;
	static volatile int32_t t172 = -1;

    t172 = ((x933&x934)<=(x935*x936));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x937 = -1;
	int64_t x938 = 10867026873358LL;
	int32_t x939 = -3;
	int64_t x940 = 5775778707059LL;
	volatile int32_t t173 = -17615;

    t173 = ((x937&x938)<=(x939*x940));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x945 = UINT32_MAX;
	uint8_t x946 = 19U;
	static uint8_t x947 = UINT8_MAX;
	uint16_t x948 = UINT16_MAX;
	int32_t t174 = 4053;

    t174 = ((x945&x946)<=(x947*x948));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x950 = INT64_MAX;
	uint64_t x951 = UINT64_MAX;
	int64_t x952 = INT64_MIN;
	static volatile int32_t t175 = 3;

    t175 = ((x949&x950)<=(x951*x952));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x966 = INT16_MIN;
	uint16_t x967 = UINT16_MAX;
	int8_t x968 = -1;
	volatile int32_t t176 = 54;

    t176 = ((x965&x966)<=(x967*x968));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x973 = INT32_MAX;
	volatile uint64_t x975 = 1010145LLU;
	int64_t x976 = -1LL;
	int32_t t177 = 108552;

    t177 = ((x973&x974)<=(x975*x976));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x978 = INT16_MIN;
	uint32_t x980 = 0U;
	int32_t t178 = 10816;

    t178 = ((x977&x978)<=(x979*x980));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x983 = UINT16_MAX;
	static volatile int16_t x984 = -1;
	static int32_t t179 = 78063493;

    t179 = ((x981&x982)<=(x983*x984));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x985 = 186822;
	int8_t x986 = INT8_MIN;
	volatile int64_t x987 = INT64_MAX;
	volatile uint64_t x988 = 266795625326982LLU;
	int32_t t180 = 2656968;

    t180 = ((x985&x986)<=(x987*x988));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x989 = 13163;
	volatile int8_t x990 = INT8_MAX;
	uint16_t x991 = 14U;
	uint8_t x992 = UINT8_MAX;
	volatile int32_t t181 = 858077;

    t181 = ((x989&x990)<=(x991*x992));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1009 = -1LL;
	uint16_t x1011 = 9U;
	static volatile uint32_t x1012 = UINT32_MAX;
	int32_t t182 = 0;

    t182 = ((x1009&x1010)<=(x1011*x1012));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1015 = 1U;
	uint64_t x1016 = UINT64_MAX;
	int32_t t183 = -7013;

    t183 = ((x1013&x1014)<=(x1015*x1016));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x1017 = UINT32_MAX;
	int64_t x1018 = INT64_MIN;
	volatile int64_t x1019 = INT64_MAX;
	int32_t t184 = 729183;

    t184 = ((x1017&x1018)<=(x1019*x1020));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1021 = INT8_MIN;
	int8_t x1022 = INT8_MIN;
	uint8_t x1023 = 1U;
	volatile int32_t t185 = -2203929;

    t185 = ((x1021&x1022)<=(x1023*x1024));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1026 = INT32_MAX;
	int8_t x1027 = INT8_MAX;
	int32_t x1028 = 1;
	volatile int32_t t186 = -213;

    t186 = ((x1025&x1026)<=(x1027*x1028));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1029 = 349862785411209LL;
	uint8_t x1030 = 58U;
	uint32_t x1031 = 3U;
	int32_t x1032 = -1;
	int32_t t187 = 2490578;

    t187 = ((x1029&x1030)<=(x1031*x1032));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1033 = -17;
	uint32_t x1034 = 66U;
	int8_t x1035 = INT8_MAX;
	static int32_t t188 = -40552;

    t188 = ((x1033&x1034)<=(x1035*x1036));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1041 = UINT16_MAX;
	int64_t x1042 = INT64_MAX;
	int8_t x1043 = INT8_MIN;
	uint8_t x1044 = UINT8_MAX;
	volatile int32_t t189 = -25997454;

    t189 = ((x1041&x1042)<=(x1043*x1044));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1045 = 656455U;
	int16_t x1046 = INT16_MIN;
	int16_t x1047 = INT16_MAX;
	uint32_t x1048 = 71181U;
	static int32_t t190 = -30;

    t190 = ((x1045&x1046)<=(x1047*x1048));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1050 = INT8_MIN;
	static int32_t x1051 = INT32_MIN;
	volatile int64_t x1052 = 224475LL;
	volatile int32_t t191 = -28072814;

    t191 = ((x1049&x1050)<=(x1051*x1052));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1055 = INT32_MAX;
	volatile uint64_t x1056 = 202964LLU;

    t192 = ((x1053&x1054)<=(x1055*x1056));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1057 = 59U;
	int8_t x1058 = INT8_MIN;
	int32_t x1060 = INT32_MAX;
	static int32_t t193 = -78941;

    t193 = ((x1057&x1058)<=(x1059*x1060));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1061 = INT16_MIN;
	static volatile uint16_t x1062 = UINT16_MAX;
	int16_t x1063 = INT16_MIN;
	int8_t x1064 = INT8_MAX;
	volatile int32_t t194 = 88949620;

    t194 = ((x1061&x1062)<=(x1063*x1064));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1065 = UINT64_MAX;
	volatile uint64_t x1066 = UINT64_MAX;
	uint64_t x1068 = UINT64_MAX;
	int32_t t195 = -4936;

    t195 = ((x1065&x1066)<=(x1067*x1068));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1074 = -1;
	volatile int16_t x1075 = INT16_MAX;
	uint64_t x1076 = 943511LLU;
	volatile int32_t t196 = 42197562;

    t196 = ((x1073&x1074)<=(x1075*x1076));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1077 = INT64_MIN;
	uint8_t x1079 = 1U;
	int32_t t197 = -53938444;

    t197 = ((x1077&x1078)<=(x1079*x1080));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1082 = 7;
	static uint8_t x1083 = 124U;
	uint16_t x1084 = UINT16_MAX;
	static int32_t t198 = -231587;

    t198 = ((x1081&x1082)<=(x1083*x1084));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1085 = 25U;
	int16_t x1086 = 0;
	static int16_t x1087 = INT16_MAX;
	uint32_t x1088 = 4474814U;
	volatile int32_t t199 = -7288;

    t199 = ((x1085&x1086)<=(x1087*x1088));

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

