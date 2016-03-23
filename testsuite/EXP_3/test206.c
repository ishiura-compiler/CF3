
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

uint8_t x16 = 1U;
int32_t t2 = -166;
static volatile int32_t t5 = 830;
static int8_t x37 = INT8_MIN;
uint8_t x42 = 28U;
int64_t x44 = INT64_MAX;
int32_t t8 = 0;
uint32_t x45 = 4U;
int16_t x47 = INT16_MAX;
volatile int32_t t9 = 1;
uint32_t x52 = UINT32_MAX;
volatile int32_t t10 = 978;
volatile int16_t x76 = 122;
static int16_t x80 = 0;
volatile int32_t t16 = -185160;
static volatile int32_t t17 = -6;
uint8_t x88 = 32U;
uint32_t x94 = UINT32_MAX;
int16_t x99 = -49;
int8_t x104 = -21;
static uint32_t x109 = 382147U;
int32_t x110 = -1;
volatile int64_t x116 = INT64_MAX;
static volatile int32_t t24 = 28;
volatile int32_t t26 = 30351034;
int8_t x135 = 0;
int32_t t28 = -19554189;
static int32_t x150 = -1;
int64_t x157 = -1LL;
uint32_t x184 = 14U;
uint32_t x188 = 207U;
volatile int32_t t35 = 61348;
uint32_t x189 = UINT32_MAX;
uint16_t x192 = 1291U;
volatile int32_t t36 = -8052406;
int8_t x208 = -1;
int32_t x211 = INT32_MIN;
static volatile int32_t t39 = -344;
uint16_t x218 = 181U;
uint32_t x223 = 7126157U;
volatile int32_t t41 = -95116074;
int16_t x227 = INT16_MAX;
int16_t x240 = INT16_MIN;
volatile int16_t x244 = INT16_MIN;
volatile int8_t x249 = -1;
static uint64_t x250 = 8759542240061853305LLU;
uint16_t x251 = 50U;
int32_t t47 = 148;
static uint16_t x253 = 451U;
volatile uint16_t x256 = 10U;
int32_t x264 = INT32_MAX;
static int8_t x270 = INT8_MIN;
volatile int8_t x277 = INT8_MIN;
int32_t t54 = -225769672;
volatile int32_t t55 = -15672;
static uint32_t x286 = 9947U;
static uint16_t x288 = UINT16_MAX;
volatile int32_t t56 = 135725;
uint64_t x296 = 501186207128786LLU;
uint16_t x314 = 0U;
int16_t x320 = INT16_MAX;
static int32_t t64 = 0;
uint16_t x331 = 14U;
int64_t x351 = INT64_MIN;
static int32_t t70 = -2;
static uint8_t x358 = 0U;
int64_t x359 = -3493373292464574LL;
static uint16_t x362 = UINT16_MAX;
int8_t x379 = INT8_MIN;
static volatile int32_t t75 = -1;
int8_t x385 = INT8_MAX;
int64_t x386 = -851798616973652LL;
int16_t x387 = INT16_MIN;
int32_t t77 = 3092399;
int8_t x391 = INT8_MIN;
volatile int32_t t79 = -388679;
volatile int32_t t81 = -3;
int16_t x416 = INT16_MAX;
int32_t x420 = 0;
int32_t t83 = 2633700;
int32_t x433 = INT32_MAX;
volatile int64_t x434 = -1LL;
volatile int8_t x436 = INT8_MIN;
static int32_t x439 = 455797;
uint32_t x446 = 7047U;
volatile int16_t x447 = -1;
int16_t x448 = -1;
volatile int32_t t88 = -383367913;
int32_t t89 = -92245787;
volatile uint8_t x457 = UINT8_MAX;
volatile int32_t t94 = 15;
int64_t x480 = INT64_MIN;
static uint16_t x495 = UINT16_MAX;
static uint16_t x496 = 63U;
int32_t x501 = -1;
static int64_t x504 = INT64_MIN;
volatile int32_t t98 = 1124385;
int16_t x510 = -15780;
int32_t t99 = 316827517;
static uint32_t x514 = 55404U;
int64_t x522 = 3608858760749490670LL;
int64_t x523 = INT64_MAX;
volatile uint64_t x528 = 5785769150802880561LLU;
uint32_t x539 = 453857298U;
volatile int16_t x540 = 61;
volatile int32_t t106 = -36459;
int8_t x561 = INT8_MIN;
int16_t x565 = INT16_MAX;
volatile int32_t t108 = -46410234;
volatile int8_t x573 = INT8_MIN;
static int8_t x574 = -1;
static int64_t x576 = 30040LL;
static int16_t x585 = INT16_MIN;
int32_t t111 = 1630150;
static int8_t x590 = 0;
volatile int32_t t112 = 592;
uint8_t x598 = 13U;
int8_t x599 = INT8_MAX;
volatile int64_t x602 = -1LL;
static int32_t t114 = 27682;
int32_t x606 = INT32_MAX;
static uint64_t x619 = UINT64_MAX;
int16_t x623 = INT16_MIN;
static int32_t t118 = 4;
int32_t x634 = INT32_MIN;
uint16_t x636 = UINT16_MAX;
int32_t t119 = -3634;
static uint64_t x638 = 226009344593LLU;
static uint64_t x639 = 3617665589905881LLU;
int32_t t122 = -364490140;
int64_t x657 = 31577383LL;
int64_t x658 = -977509LL;
int32_t t124 = -116008;
int64_t x668 = 68465115141LL;
int16_t x674 = 0;
int32_t x677 = INT32_MIN;
int8_t x678 = INT8_MAX;
static volatile int32_t t129 = -2162;
static uint8_t x685 = UINT8_MAX;
int64_t x686 = INT64_MIN;
static uint64_t x697 = 23888867LLU;
int16_t x698 = INT16_MIN;
int32_t x699 = 1;
int32_t t132 = 9884;
int32_t t134 = 304692570;
int32_t t136 = 171;
static uint32_t x726 = 2U;
int16_t x728 = -1;
int64_t x730 = -1LL;
uint16_t x736 = UINT16_MAX;
volatile int32_t t141 = -3;
static int32_t t142 = 364;
volatile int32_t t145 = -6063;
int64_t x776 = INT64_MAX;
uint8_t x780 = 15U;
int32_t x782 = INT32_MAX;
volatile int8_t x787 = INT8_MAX;
static int32_t t151 = -4244440;
int32_t x793 = -1028;
int8_t x809 = INT8_MIN;
uint32_t x811 = 973U;
int32_t t155 = -990806;
int16_t x820 = INT16_MAX;
int8_t x821 = INT8_MIN;
int16_t x824 = -1;
volatile int16_t x825 = INT16_MIN;
int8_t x827 = 0;
int8_t x830 = -49;
volatile int8_t x834 = INT8_MIN;
int32_t t161 = 2;
uint64_t x837 = 1069LLU;
static int8_t x838 = INT8_MAX;
static uint32_t x843 = 3925U;
static volatile int16_t x845 = INT16_MAX;
int32_t t164 = 718128;
int64_t x851 = INT64_MAX;
int8_t x854 = INT8_MIN;
uint64_t x855 = 54208071185331560LLU;
int64_t x892 = -3939LL;
int8_t x894 = -1;
int8_t x896 = INT8_MIN;
volatile int32_t t173 = 29;
int64_t x899 = INT64_MIN;
static volatile int32_t t177 = 9;
uint8_t x918 = UINT8_MAX;
int64_t x920 = 181872210804LL;
int64_t x922 = 154737909796636LL;
volatile int32_t t179 = 461243651;
int8_t x926 = INT8_MIN;
uint8_t x929 = 12U;
uint64_t x941 = 6205LLU;
static volatile uint32_t x946 = UINT32_MAX;
int16_t x948 = INT16_MAX;
volatile int32_t t184 = 1;
int32_t x949 = INT32_MIN;
int8_t x955 = INT8_MIN;
int8_t x962 = INT8_MAX;
int32_t t187 = -87;
int8_t x967 = -1;
volatile int32_t t188 = 7528;
int16_t x972 = -1;
static uint16_t x984 = 62U;
volatile uint8_t x985 = 18U;
int32_t x986 = INT32_MIN;
static int16_t x987 = 4;
static uint8_t x988 = UINT8_MAX;
int16_t x997 = 1;


void f0(void) {
    	uint64_t x5 = 23LLU;
	int16_t x6 = -1;
	uint64_t x7 = 856869LLU;
	uint64_t x8 = 14291378172896LLU;
	volatile int32_t t0 = 44;

    t0 = ((x5+x6)<=(x7-x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x9 = 0;
	int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MAX;
	volatile uint16_t x12 = 59U;
	static volatile int32_t t1 = -31094;

    t1 = ((x9+x10)<=(x11-x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = INT32_MAX;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 5U;

    t2 = ((x13+x14)<=(x15-x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = 7;
	volatile int64_t x18 = INT64_MIN;
	int32_t x19 = -22922464;
	static int32_t x20 = INT32_MIN;
	int32_t t3 = 10;

    t3 = ((x17+x18)<=(x19-x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MAX;
	static volatile int16_t x27 = -1;
	int32_t x28 = INT32_MAX;
	volatile int32_t t4 = 30;

    t4 = ((x25+x26)<=(x27-x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MAX;
	int16_t x31 = -1;
	int8_t x32 = INT8_MAX;

    t5 = ((x29+x30)<=(x31-x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MIN;
	static uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = 65216560852548LLU;
	static volatile int32_t t6 = -8625;

    t6 = ((x33+x34)<=(x35-x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	volatile int32_t t7 = 67118;

    t7 = ((x37+x38)<=(x39-x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 1U;
	uint64_t x43 = 68100LLU;

    t8 = ((x41+x42)<=(x43-x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x46 = INT16_MAX;
	uint64_t x48 = 567276186486044LLU;

    t9 = ((x45+x46)<=(x47-x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = -1;
	uint64_t x50 = 357961LLU;
	int16_t x51 = 1;

    t10 = ((x49+x50)<=(x51-x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = INT64_MAX;
	uint64_t x54 = 9083653583388873LLU;
	int16_t x55 = INT16_MAX;
	volatile int8_t x56 = 0;
	static int32_t t11 = -127;

    t11 = ((x53+x54)<=(x55-x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = 68515U;
	int32_t x58 = -1;
	int16_t x59 = INT16_MAX;
	volatile int32_t x60 = -1;
	volatile int32_t t12 = 12;

    t12 = ((x57+x58)<=(x59-x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MAX;
	int16_t x62 = INT16_MIN;
	int64_t x63 = 131206LL;
	uint64_t x64 = 2003287169514996214LLU;
	int32_t t13 = -1;

    t13 = ((x61+x62)<=(x63-x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x69 = 1278167166LLU;
	int64_t x70 = -1LL;
	volatile int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t14 = -1;

    t14 = ((x69+x70)<=(x71-x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = -1;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MAX;
	int32_t t15 = 398;

    t15 = ((x73+x74)<=(x75-x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = -1LL;
	static uint8_t x78 = 89U;
	volatile uint64_t x79 = 488259LLU;

    t16 = ((x77+x78)<=(x79-x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = -525;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = -1;
	int64_t x84 = INT64_MAX;

    t17 = ((x81+x82)<=(x83-x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	int64_t x86 = INT64_MIN;
	uint32_t x87 = UINT32_MAX;
	int32_t t18 = 38064;

    t18 = ((x85+x86)<=(x87-x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x89 = 23417285U;
	volatile int64_t x90 = INT64_MIN;
	int32_t x91 = -766;
	int16_t x92 = -1;
	static volatile int32_t t19 = 0;

    t19 = ((x89+x90)<=(x91-x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MAX;
	int16_t x95 = -25;
	int16_t x96 = INT16_MIN;
	int32_t t20 = -101722;

    t20 = ((x93+x94)<=(x95-x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MAX;
	volatile int8_t x98 = 15;
	int64_t x100 = INT64_MIN;
	volatile int32_t t21 = 147;

    t21 = ((x97+x98)<=(x99-x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = -1804;
	uint32_t x102 = 146495928U;
	static uint8_t x103 = 1U;
	int32_t t22 = -23615;

    t22 = ((x101+x102)<=(x103-x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x111 = 6U;
	volatile uint16_t x112 = 143U;
	volatile int32_t t23 = -1413911;

    t23 = ((x109+x110)<=(x111-x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x113 = 579740;
	int64_t x114 = -1LL;
	uint8_t x115 = 0U;

    t24 = ((x113+x114)<=(x115-x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x121 = -1;
	int16_t x122 = 915;
	static uint8_t x123 = UINT8_MAX;
	int32_t x124 = -1;
	volatile int32_t t25 = 3;

    t25 = ((x121+x122)<=(x123-x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = INT8_MAX;
	static volatile int64_t x126 = 15247687705LL;
	int16_t x127 = INT16_MAX;
	int16_t x128 = -1093;

    t26 = ((x125+x126)<=(x127-x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = 7;
	volatile int8_t x130 = INT8_MAX;
	volatile uint64_t x131 = 4136317944965593405LLU;
	uint16_t x132 = 5U;
	static volatile int32_t t27 = -2;

    t27 = ((x129+x130)<=(x131-x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x133 = UINT8_MAX;
	int16_t x134 = -58;
	volatile uint64_t x136 = 256657LLU;

    t28 = ((x133+x134)<=(x135-x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = 7;
	int64_t x142 = -1LL;
	uint16_t x143 = UINT16_MAX;
	static uint64_t x144 = 318403LLU;
	volatile int32_t t29 = -2165;

    t29 = ((x141+x142)<=(x143-x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x149 = INT64_MAX;
	volatile int8_t x151 = INT8_MIN;
	static uint16_t x152 = 9U;
	volatile int32_t t30 = 2978;

    t30 = ((x149+x150)<=(x151-x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	volatile int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;
	int32_t t31 = -152602483;

    t31 = ((x153+x154)<=(x155-x156));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x158 = INT8_MAX;
	uint64_t x159 = 7LLU;
	int64_t x160 = -45703671LL;
	volatile int32_t t32 = -49423;

    t32 = ((x157+x158)<=(x159-x160));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x165 = 15;
	int16_t x166 = INT16_MAX;
	int8_t x167 = 0;
	int8_t x168 = -1;
	int32_t t33 = -1024792;

    t33 = ((x165+x166)<=(x167-x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x181 = 101U;
	int64_t x182 = 0LL;
	int8_t x183 = 1;
	volatile int32_t t34 = 24;

    t34 = ((x181+x182)<=(x183-x184));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x185 = 734U;
	static volatile uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 862LLU;

    t35 = ((x185+x186)<=(x187-x188));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x190 = INT32_MAX;
	static int8_t x191 = -1;

    t36 = ((x189+x190)<=(x191-x192));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x201 = -1;
	int16_t x202 = 10;
	int8_t x203 = -62;
	int16_t x204 = -7115;
	static int32_t t37 = -703654094;

    t37 = ((x201+x202)<=(x203-x204));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x205 = 496U;
	int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MAX;
	volatile int32_t t38 = -135;

    t38 = ((x205+x206)<=(x207-x208));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint32_t x209 = 124549625U;
	uint16_t x210 = 537U;
	int16_t x212 = -1;

    t39 = ((x209+x210)<=(x211-x212));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x217 = 10U;
	uint64_t x219 = 113416LLU;
	uint32_t x220 = 234330U;
	volatile int32_t t40 = 109;

    t40 = ((x217+x218)<=(x219-x220));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x221 = -158934;
	uint64_t x222 = 124LLU;
	static int32_t x224 = 1456407;

    t41 = ((x221+x222)<=(x223-x224));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x225 = -23478195LL;
	int64_t x226 = -170441206623366LL;
	static int16_t x228 = INT16_MIN;
	volatile int32_t t42 = 1189;

    t42 = ((x225+x226)<=(x227-x228));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x229 = UINT32_MAX;
	int8_t x230 = 10;
	int64_t x231 = -8LL;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t43 = 1;

    t43 = ((x229+x230)<=(x231-x232));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x233 = 303;
	static uint8_t x234 = 13U;
	uint64_t x235 = UINT64_MAX;
	volatile int16_t x236 = 526;
	int32_t t44 = -1;

    t44 = ((x233+x234)<=(x235-x236));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x237 = 4U;
	int16_t x238 = -7;
	int8_t x239 = -6;
	static int32_t t45 = -3852;

    t45 = ((x237+x238)<=(x239-x240));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x241 = UINT16_MAX;
	static volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	volatile int32_t t46 = 11098;

    t46 = ((x241+x242)<=(x243-x244));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x252 = INT64_MAX;

    t47 = ((x249+x250)<=(x251-x252));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MAX;
	static volatile int32_t t48 = -6324353;

    t48 = ((x253+x254)<=(x255-x256));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x257 = INT32_MIN;
	uint8_t x258 = 0U;
	uint8_t x259 = 16U;
	uint64_t x260 = 99LLU;
	int32_t t49 = 62924;

    t49 = ((x257+x258)<=(x259-x260));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x261 = 6U;
	int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MAX;
	volatile int32_t t50 = 3;

    t50 = ((x261+x262)<=(x263-x264));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x265 = -244;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = 1;
	uint32_t x268 = 3673109U;
	int32_t t51 = 600;

    t51 = ((x265+x266)<=(x267-x268));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x269 = UINT64_MAX;
	uint16_t x271 = UINT16_MAX;
	int8_t x272 = -1;
	volatile int32_t t52 = 6488082;

    t52 = ((x269+x270)<=(x271-x272));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x273 = -51;
	int64_t x274 = INT64_MAX;
	static volatile int16_t x275 = -1;
	static volatile int64_t x276 = INT64_MIN;
	volatile int32_t t53 = -19479225;

    t53 = ((x273+x274)<=(x275-x276));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x278 = -81;
	int64_t x279 = 27LL;
	int32_t x280 = INT32_MAX;

    t54 = ((x277+x278)<=(x279-x280));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x281 = -1;
	static uint32_t x282 = 243U;
	int16_t x283 = INT16_MIN;
	static volatile int8_t x284 = INT8_MIN;

    t55 = ((x281+x282)<=(x283-x284));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x285 = 1U;
	volatile int16_t x287 = 4922;

    t56 = ((x285+x286)<=(x287-x288));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x289 = 146729361823859LLU;
	int32_t x290 = INT32_MAX;
	static int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t57 = -3471;

    t57 = ((x289+x290)<=(x291-x292));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x293 = 0U;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = -1;
	int32_t t58 = -4;

    t58 = ((x293+x294)<=(x295-x296));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x297 = 0;
	int8_t x298 = -1;
	static volatile int16_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t59 = 0;

    t59 = ((x297+x298)<=(x299-x300));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = 423;
	uint64_t x303 = 43612987316LLU;
	int16_t x304 = INT16_MIN;
	volatile int32_t t60 = -3996;

    t60 = ((x301+x302)<=(x303-x304));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x305 = 1;
	static int8_t x306 = -7;
	int16_t x307 = 39;
	uint32_t x308 = 213393U;
	static volatile int32_t t61 = -1;

    t61 = ((x305+x306)<=(x307-x308));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x309 = -19;
	volatile int32_t x310 = -1;
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t62 = 0;

    t62 = ((x309+x310)<=(x311-x312));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x313 = 276769U;
	int8_t x315 = INT8_MAX;
	uint16_t x316 = UINT16_MAX;
	int32_t t63 = -1;

    t63 = ((x313+x314)<=(x315-x316));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x317 = 1U;
	int32_t x318 = -1730;
	uint8_t x319 = UINT8_MAX;

    t64 = ((x317+x318)<=(x319-x320));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x321 = -1;
	int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = 7U;
	int32_t t65 = 878397157;

    t65 = ((x321+x322)<=(x323-x324));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x329 = 1;
	static int16_t x330 = INT16_MIN;
	volatile int16_t x332 = -1;
	static int32_t t66 = -521854127;

    t66 = ((x329+x330)<=(x331-x332));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MAX;
	static int8_t x344 = INT8_MIN;
	int32_t t67 = 1;

    t67 = ((x341+x342)<=(x343-x344));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x345 = INT64_MIN;
	volatile uint16_t x346 = 3U;
	uint32_t x347 = 26682561U;
	int32_t x348 = -1;
	volatile int32_t t68 = 17;

    t68 = ((x345+x346)<=(x347-x348));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x349 = 0;
	uint32_t x350 = 83991288U;
	int16_t x352 = INT16_MIN;
	int32_t t69 = -543824002;

    t69 = ((x349+x350)<=(x351-x352));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x353 = UINT64_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	int32_t x355 = 33219;
	int16_t x356 = 890;

    t70 = ((x353+x354)<=(x355-x356));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x357 = INT64_MIN;
	static uint8_t x360 = 76U;
	int32_t t71 = 71636;

    t71 = ((x357+x358)<=(x359-x360));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x361 = -1;
	uint16_t x363 = 3U;
	int16_t x364 = INT16_MIN;
	volatile int32_t t72 = 0;

    t72 = ((x361+x362)<=(x363-x364));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x365 = -1;
	int8_t x366 = 1;
	static volatile uint64_t x367 = 28495998547LLU;
	volatile int32_t x368 = -1;
	int32_t t73 = 2565559;

    t73 = ((x365+x366)<=(x367-x368));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x373 = 116U;
	int8_t x374 = INT8_MIN;
	static uint16_t x375 = 4826U;
	volatile int8_t x376 = 4;
	int32_t t74 = 1543063;

    t74 = ((x373+x374)<=(x375-x376));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x377 = 12;
	volatile int8_t x378 = INT8_MAX;
	int64_t x380 = -1LL;

    t75 = ((x377+x378)<=(x379-x380));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x381 = 4067U;
	int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MAX;
	volatile uint64_t x384 = 177545538LLU;
	volatile int32_t t76 = -302;

    t76 = ((x381+x382)<=(x383-x384));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x388 = UINT32_MAX;

    t77 = ((x385+x386)<=(x387-x388));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x389 = -10782647;
	int16_t x390 = INT16_MIN;
	static int64_t x392 = 424680291LL;
	volatile int32_t t78 = 6922942;

    t78 = ((x389+x390)<=(x391-x392));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x397 = 199763195U;
	int8_t x398 = -1;
	static volatile int8_t x399 = 0;
	static int16_t x400 = INT16_MAX;

    t79 = ((x397+x398)<=(x399-x400));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x401 = -1;
	int16_t x402 = -1;
	uint32_t x403 = 262U;
	static volatile int16_t x404 = -1;
	volatile int32_t t80 = 9226553;

    t80 = ((x401+x402)<=(x403-x404));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x405 = 1;
	uint32_t x406 = 5551646U;
	volatile int64_t x407 = 58019LL;
	uint8_t x408 = 57U;

    t81 = ((x405+x406)<=(x407-x408));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x413 = INT32_MIN;
	volatile int16_t x414 = 0;
	uint64_t x415 = 6142236380206LLU;
	volatile int32_t t82 = 18;

    t82 = ((x413+x414)<=(x415-x416));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x417 = INT16_MIN;
	volatile int32_t x418 = 970183;
	int8_t x419 = INT8_MAX;

    t83 = ((x417+x418)<=(x419-x420));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x421 = INT32_MAX;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = -1;
	volatile int64_t x424 = INT64_MIN;
	volatile int32_t t84 = 18765;

    t84 = ((x421+x422)<=(x423-x424));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x425 = 35999;
	int32_t x426 = INT32_MIN;
	uint64_t x427 = 2114037065533LLU;
	int64_t x428 = INT64_MAX;
	static volatile int32_t t85 = -165;

    t85 = ((x425+x426)<=(x427-x428));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x435 = INT64_MIN;
	volatile int32_t t86 = 89;

    t86 = ((x433+x434)<=(x435-x436));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x437 = 29U;
	volatile uint32_t x438 = 1951196U;
	static uint16_t x440 = UINT16_MAX;
	static int32_t t87 = -54862578;

    t87 = ((x437+x438)<=(x439-x440));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x445 = UINT16_MAX;

    t88 = ((x445+x446)<=(x447-x448));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x449 = INT8_MIN;
	int8_t x450 = -1;
	uint16_t x451 = 643U;
	uint16_t x452 = UINT16_MAX;

    t89 = ((x449+x450)<=(x451-x452));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x454 = 145184770LL;
	int8_t x455 = -11;
	uint64_t x456 = 127070773LLU;
	static volatile int32_t t90 = -24841698;

    t90 = ((x453+x454)<=(x455-x456));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x458 = INT8_MIN;
	static int8_t x459 = INT8_MAX;
	int64_t x460 = 7473LL;
	volatile int32_t t91 = 1;

    t91 = ((x457+x458)<=(x459-x460));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	uint64_t x466 = UINT64_MAX;
	static int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MIN;
	volatile int32_t t92 = 61307;

    t92 = ((x465+x466)<=(x467-x468));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x469 = 48U;
	uint32_t x470 = UINT32_MAX;
	volatile uint16_t x471 = UINT16_MAX;
	int8_t x472 = -12;
	volatile int32_t t93 = 54;

    t93 = ((x469+x470)<=(x471-x472));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x473 = INT32_MAX;
	int64_t x474 = 1LL;
	int8_t x475 = -1;
	static int8_t x476 = -1;

    t94 = ((x473+x474)<=(x475-x476));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x477 = 2U;
	int8_t x478 = INT8_MAX;
	int8_t x479 = -1;
	int32_t t95 = 2093;

    t95 = ((x477+x478)<=(x479-x480));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x481 = -1;
	uint32_t x482 = UINT32_MAX;
	int8_t x483 = 0;
	uint8_t x484 = UINT8_MAX;
	static int32_t t96 = 1035843;

    t96 = ((x481+x482)<=(x483-x484));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x493 = -538306;
	uint32_t x494 = 188826U;
	static int32_t t97 = -9802;

    t97 = ((x493+x494)<=(x495-x496));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x502 = 7311223;
	volatile int16_t x503 = -1;

    t98 = ((x501+x502)<=(x503-x504));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x509 = INT8_MAX;
	static volatile int32_t x511 = -1;
	int64_t x512 = -2981453938LL;

    t99 = ((x509+x510)<=(x511-x512));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x513 = INT16_MIN;
	volatile int64_t x515 = INT64_MAX;
	int16_t x516 = 0;
	int32_t t100 = -2;

    t100 = ((x513+x514)<=(x515-x516));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x517 = INT16_MIN;
	uint8_t x518 = 5U;
	static uint16_t x519 = UINT16_MAX;
	int8_t x520 = 2;
	int32_t t101 = 0;

    t101 = ((x517+x518)<=(x519-x520));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x521 = INT64_MIN;
	uint16_t x524 = 251U;
	static int32_t t102 = 0;

    t102 = ((x521+x522)<=(x523-x524));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x525 = 1;
	static uint32_t x526 = UINT32_MAX;
	static volatile int32_t x527 = INT32_MIN;
	int32_t t103 = 5;

    t103 = ((x525+x526)<=(x527-x528));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x529 = INT8_MAX;
	volatile uint32_t x530 = 180U;
	int64_t x531 = -1LL;
	volatile int8_t x532 = INT8_MIN;
	volatile int32_t t104 = 7652665;

    t104 = ((x529+x530)<=(x531-x532));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x537 = -1;
	int32_t x538 = INT32_MAX;
	static volatile int32_t t105 = -263587195;

    t105 = ((x537+x538)<=(x539-x540));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x545 = 0;
	int8_t x546 = 1;
	volatile int64_t x547 = -211674LL;
	int64_t x548 = 63077289LL;

    t106 = ((x545+x546)<=(x547-x548));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x562 = -1LL;
	static int32_t x563 = -75305;
	int16_t x564 = -1;
	int32_t t107 = 144426;

    t107 = ((x561+x562)<=(x563-x564));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x566 = INT8_MAX;
	volatile uint8_t x567 = 112U;
	volatile uint8_t x568 = 61U;

    t108 = ((x565+x566)<=(x567-x568));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x569 = 1234U;
	int8_t x570 = -7;
	uint8_t x571 = 115U;
	uint16_t x572 = UINT16_MAX;
	static volatile int32_t t109 = 3109;

    t109 = ((x569+x570)<=(x571-x572));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x575 = INT8_MIN;
	static int32_t t110 = -8188249;

    t110 = ((x573+x574)<=(x575-x576));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x586 = 61;
	static int32_t x587 = -173;
	static int16_t x588 = 95;

    t111 = ((x585+x586)<=(x587-x588));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x589 = 2012817938LLU;
	static int64_t x591 = 1372363563980LL;
	static uint8_t x592 = 1U;

    t112 = ((x589+x590)<=(x591-x592));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint64_t x600 = UINT64_MAX;
	int32_t t113 = 39653559;

    t113 = ((x597+x598)<=(x599-x600));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x601 = 0;
	int64_t x603 = INT64_MAX;
	uint32_t x604 = UINT32_MAX;

    t114 = ((x601+x602)<=(x603-x604));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x605 = UINT64_MAX;
	int16_t x607 = -1;
	int64_t x608 = INT64_MIN;
	int32_t t115 = 710;

    t115 = ((x605+x606)<=(x607-x608));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x617 = INT32_MIN;
	volatile uint8_t x618 = 0U;
	int16_t x620 = 62;
	static int32_t t116 = 24826405;

    t116 = ((x617+x618)<=(x619-x620));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x621 = -850;
	int8_t x622 = INT8_MIN;
	uint64_t x624 = 35LLU;
	static int32_t t117 = -8719;

    t117 = ((x621+x622)<=(x623-x624));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x625 = 5U;
	int64_t x626 = INT64_MIN;
	int32_t x627 = 50997523;
	volatile int64_t x628 = 1477940366437157782LL;

    t118 = ((x625+x626)<=(x627-x628));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x633 = INT32_MAX;
	int8_t x635 = -1;

    t119 = ((x633+x634)<=(x635-x636));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x637 = -5LL;
	int32_t x640 = -1;
	int32_t t120 = 1197;

    t120 = ((x637+x638)<=(x639-x640));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x641 = UINT16_MAX;
	int64_t x642 = -261199996214054LL;
	volatile uint8_t x643 = UINT8_MAX;
	uint16_t x644 = UINT16_MAX;
	static volatile int32_t t121 = -15;

    t121 = ((x641+x642)<=(x643-x644));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	static int32_t x650 = INT32_MAX;
	static uint32_t x651 = 4897229U;
	static volatile int8_t x652 = INT8_MAX;

    t122 = ((x649+x650)<=(x651-x652));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x659 = 13779U;
	volatile uint64_t x660 = 12562LLU;
	volatile int32_t t123 = -947;

    t123 = ((x657+x658)<=(x659-x660));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x661 = INT8_MIN;
	int32_t x662 = -28887;
	uint32_t x663 = 2U;
	int32_t x664 = INT32_MAX;

    t124 = ((x661+x662)<=(x663-x664));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x665 = UINT8_MAX;
	uint32_t x666 = UINT32_MAX;
	static int32_t x667 = -2;
	volatile int32_t t125 = 27001;

    t125 = ((x665+x666)<=(x667-x668));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x669 = UINT16_MAX;
	static uint64_t x670 = 23182961780827713LLU;
	uint64_t x671 = UINT64_MAX;
	uint8_t x672 = 0U;
	static volatile int32_t t126 = -873973977;

    t126 = ((x669+x670)<=(x671-x672));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x673 = INT32_MIN;
	volatile int16_t x675 = -832;
	uint64_t x676 = 3015209LLU;
	static volatile int32_t t127 = -27449128;

    t127 = ((x673+x674)<=(x675-x676));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x679 = INT8_MAX;
	int32_t x680 = -76525;
	static volatile int32_t t128 = 2;

    t128 = ((x677+x678)<=(x679-x680));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x681 = -19505;
	static int8_t x682 = INT8_MIN;
	volatile int8_t x683 = 7;
	static uint64_t x684 = 129815248916601LLU;

    t129 = ((x681+x682)<=(x683-x684));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x687 = -1;
	uint32_t x688 = 2U;
	volatile int32_t t130 = -285814777;

    t130 = ((x685+x686)<=(x687-x688));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x689 = 16;
	uint8_t x690 = UINT8_MAX;
	uint8_t x691 = 2U;
	static int64_t x692 = -1LL;
	int32_t t131 = 923611405;

    t131 = ((x689+x690)<=(x691-x692));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x700 = 7854096018672792LL;

    t132 = ((x697+x698)<=(x699-x700));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x701 = INT8_MIN;
	uint8_t x702 = UINT8_MAX;
	static int32_t x703 = -1;
	static int16_t x704 = 636;
	volatile int32_t t133 = 1562413;

    t133 = ((x701+x702)<=(x703-x704));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x705 = INT16_MIN;
	uint32_t x706 = UINT32_MAX;
	uint16_t x707 = 3949U;
	uint32_t x708 = 88851U;

    t134 = ((x705+x706)<=(x707-x708));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x709 = 247U;
	static int8_t x710 = -1;
	uint16_t x711 = UINT16_MAX;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t135 = 224790;

    t135 = ((x709+x710)<=(x711-x712));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x721 = INT16_MIN;
	uint32_t x722 = UINT32_MAX;
	static int8_t x723 = INT8_MIN;
	uint16_t x724 = 4387U;

    t136 = ((x721+x722)<=(x723-x724));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x725 = INT32_MIN;
	uint16_t x727 = 1734U;
	int32_t t137 = 387897103;

    t137 = ((x725+x726)<=(x727-x728));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x729 = 80U;
	volatile uint32_t x731 = 688461055U;
	int32_t x732 = INT32_MAX;
	int32_t t138 = 128;

    t138 = ((x729+x730)<=(x731-x732));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x733 = UINT64_MAX;
	static int16_t x734 = -1718;
	volatile uint64_t x735 = 2485LLU;
	volatile int32_t t139 = -555;

    t139 = ((x733+x734)<=(x735-x736));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x737 = 2651822U;
	static volatile int64_t x738 = 26098LL;
	int8_t x739 = INT8_MIN;
	int64_t x740 = INT64_MIN;
	int32_t t140 = 1;

    t140 = ((x737+x738)<=(x739-x740));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x741 = UINT8_MAX;
	volatile int64_t x742 = -1LL;
	volatile int64_t x743 = -2868LL;
	volatile int64_t x744 = 875280LL;

    t141 = ((x741+x742)<=(x743-x744));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x749 = INT16_MIN;
	uint16_t x750 = UINT16_MAX;
	volatile uint8_t x751 = 28U;
	int8_t x752 = INT8_MIN;

    t142 = ((x749+x750)<=(x751-x752));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x753 = -1;
	uint64_t x754 = 868730001478149684LLU;
	int16_t x755 = INT16_MIN;
	int8_t x756 = -1;
	volatile int32_t t143 = 0;

    t143 = ((x753+x754)<=(x755-x756));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x757 = UINT8_MAX;
	int64_t x758 = 56121297124LL;
	static int16_t x759 = INT16_MIN;
	volatile int32_t x760 = 32;
	volatile int32_t t144 = -4;

    t144 = ((x757+x758)<=(x759-x760));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x761 = -1;
	int32_t x762 = INT32_MAX;
	int64_t x763 = 266LL;
	uint8_t x764 = 17U;

    t145 = ((x761+x762)<=(x763-x764));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x765 = INT32_MIN;
	volatile uint8_t x766 = UINT8_MAX;
	static uint32_t x767 = 4234U;
	uint16_t x768 = 883U;
	volatile int32_t t146 = 314;

    t146 = ((x765+x766)<=(x767-x768));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	static uint8_t x774 = 31U;
	volatile int16_t x775 = 291;
	volatile int32_t t147 = 37127;

    t147 = ((x773+x774)<=(x775-x776));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x777 = 448U;
	int16_t x778 = INT16_MIN;
	int16_t x779 = 6;
	volatile int32_t t148 = -2979;

    t148 = ((x777+x778)<=(x779-x780));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x781 = INT64_MIN;
	volatile uint8_t x783 = 2U;
	static uint8_t x784 = UINT8_MAX;
	volatile int32_t t149 = 1059084612;

    t149 = ((x781+x782)<=(x783-x784));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x785 = -1;
	static int8_t x786 = -1;
	uint8_t x788 = 5U;
	volatile int32_t t150 = -20738960;

    t150 = ((x785+x786)<=(x787-x788));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x789 = 2620551185427LLU;
	static volatile int16_t x790 = -205;
	static int64_t x791 = -1LL;
	volatile int32_t x792 = INT32_MAX;

    t151 = ((x789+x790)<=(x791-x792));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x794 = 220918158LL;
	uint16_t x795 = 244U;
	volatile int16_t x796 = INT16_MAX;
	static int32_t t152 = -30994906;

    t152 = ((x793+x794)<=(x795-x796));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x801 = -11;
	static uint16_t x802 = 26078U;
	int16_t x803 = 434;
	int16_t x804 = -4539;
	volatile int32_t t153 = 82818996;

    t153 = ((x801+x802)<=(x803-x804));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x805 = 126U;
	int64_t x806 = INT64_MIN;
	volatile uint16_t x807 = 32603U;
	volatile uint64_t x808 = 8006673012682LLU;
	volatile int32_t t154 = 65104;

    t154 = ((x805+x806)<=(x807-x808));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint32_t x810 = UINT32_MAX;
	int32_t x812 = -17;

    t155 = ((x809+x810)<=(x811-x812));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x813 = 1;
	uint16_t x814 = UINT16_MAX;
	int64_t x815 = INT64_MAX;
	volatile uint8_t x816 = UINT8_MAX;
	volatile int32_t t156 = 115992938;

    t156 = ((x813+x814)<=(x815-x816));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x817 = 4U;
	uint16_t x818 = 749U;
	volatile int8_t x819 = -1;
	static int32_t t157 = -125607;

    t157 = ((x817+x818)<=(x819-x820));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x822 = INT8_MAX;
	static uint16_t x823 = UINT16_MAX;
	static volatile int32_t t158 = 170;

    t158 = ((x821+x822)<=(x823-x824));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x826 = UINT32_MAX;
	int16_t x828 = INT16_MIN;
	volatile int32_t t159 = -88374;

    t159 = ((x825+x826)<=(x827-x828));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x829 = 7893LLU;
	static int32_t x831 = -4152542;
	uint32_t x832 = 237U;
	int32_t t160 = 4032851;

    t160 = ((x829+x830)<=(x831-x832));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x833 = 3U;
	static volatile int64_t x835 = -165434LL;
	int16_t x836 = INT16_MIN;

    t161 = ((x833+x834)<=(x835-x836));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x839 = 1U;
	uint64_t x840 = 905899404319LLU;
	volatile int32_t t162 = -95949;

    t162 = ((x837+x838)<=(x839-x840));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x841 = UINT8_MAX;
	int8_t x842 = INT8_MAX;
	volatile int16_t x844 = -252;
	static int32_t t163 = 201381912;

    t163 = ((x841+x842)<=(x843-x844));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x846 = -28;
	static volatile uint32_t x847 = 417U;
	uint64_t x848 = UINT64_MAX;

    t164 = ((x845+x846)<=(x847-x848));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x849 = 3U;
	uint16_t x850 = UINT16_MAX;
	volatile int8_t x852 = 28;
	int32_t t165 = -5385499;

    t165 = ((x849+x850)<=(x851-x852));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x853 = -1;
	uint64_t x856 = 29796LLU;
	volatile int32_t t166 = -1155;

    t166 = ((x853+x854)<=(x855-x856));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x857 = 242407649U;
	int64_t x858 = 31483899948LL;
	int64_t x859 = INT64_MIN;
	int16_t x860 = -1;
	int32_t t167 = 982881;

    t167 = ((x857+x858)<=(x859-x860));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x861 = 1625079263U;
	volatile uint64_t x862 = UINT64_MAX;
	uint8_t x863 = UINT8_MAX;
	uint16_t x864 = 892U;
	static int32_t t168 = 6;

    t168 = ((x861+x862)<=(x863-x864));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x873 = UINT64_MAX;
	static int8_t x874 = INT8_MIN;
	int8_t x875 = -3;
	volatile int64_t x876 = INT64_MIN;
	int32_t t169 = 119969519;

    t169 = ((x873+x874)<=(x875-x876));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x877 = -31597LL;
	volatile uint8_t x878 = UINT8_MAX;
	uint64_t x879 = UINT64_MAX;
	static int64_t x880 = INT64_MIN;
	int32_t t170 = 5497;

    t170 = ((x877+x878)<=(x879-x880));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x881 = UINT64_MAX;
	uint64_t x882 = 134518129879789LLU;
	static uint8_t x883 = 1U;
	static uint8_t x884 = 49U;
	int32_t t171 = 0;

    t171 = ((x881+x882)<=(x883-x884));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x889 = INT16_MIN;
	uint16_t x890 = UINT16_MAX;
	int32_t x891 = 4650318;
	int32_t t172 = -5;

    t172 = ((x889+x890)<=(x891-x892));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x893 = INT8_MIN;
	volatile int8_t x895 = INT8_MIN;

    t173 = ((x893+x894)<=(x895-x896));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x897 = INT32_MAX;
	uint64_t x898 = 8176084LLU;
	int16_t x900 = INT16_MIN;
	static volatile int32_t t174 = 308;

    t174 = ((x897+x898)<=(x899-x900));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x905 = -1;
	int16_t x906 = 2910;
	static int16_t x907 = -1;
	int64_t x908 = 3127893903939LL;
	int32_t t175 = 3869;

    t175 = ((x905+x906)<=(x907-x908));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x909 = 4094943198LL;
	static uint32_t x910 = 176U;
	int64_t x911 = -310851LL;
	int16_t x912 = 8;
	int32_t t176 = 14841;

    t176 = ((x909+x910)<=(x911-x912));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x913 = 2033U;
	volatile int16_t x914 = -1;
	int8_t x915 = INT8_MIN;
	static volatile int32_t x916 = -129064;

    t177 = ((x913+x914)<=(x915-x916));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x917 = INT16_MAX;
	volatile int8_t x919 = 12;
	volatile int32_t t178 = -358290163;

    t178 = ((x917+x918)<=(x919-x920));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x921 = UINT64_MAX;
	static int16_t x923 = -507;
	int64_t x924 = -1LL;

    t179 = ((x921+x922)<=(x923-x924));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x925 = 3039905U;
	int32_t x927 = INT32_MIN;
	int8_t x928 = -7;
	int32_t t180 = 350007917;

    t180 = ((x925+x926)<=(x927-x928));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x930 = INT16_MIN;
	static uint64_t x931 = UINT64_MAX;
	int64_t x932 = -1LL;
	int32_t t181 = -304515076;

    t181 = ((x929+x930)<=(x931-x932));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x933 = INT8_MIN;
	int8_t x934 = INT8_MAX;
	static int8_t x935 = INT8_MIN;
	static int8_t x936 = 32;
	volatile int32_t t182 = 25591;

    t182 = ((x933+x934)<=(x935-x936));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x942 = 550391770998302LLU;
	int32_t x943 = -448;
	int32_t x944 = INT32_MIN;
	volatile int32_t t183 = 13468642;

    t183 = ((x941+x942)<=(x943-x944));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x945 = 28791U;
	static int16_t x947 = 0;

    t184 = ((x945+x946)<=(x947-x948));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x950 = 144783U;
	volatile int32_t x951 = -708;
	int64_t x952 = -10156044LL;
	volatile int32_t t185 = 3623;

    t185 = ((x949+x950)<=(x951-x952));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x953 = -1LL;
	uint16_t x954 = 6926U;
	int16_t x956 = -4538;
	int32_t t186 = 110267866;

    t186 = ((x953+x954)<=(x955-x956));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x961 = INT8_MAX;
	uint8_t x963 = UINT8_MAX;
	int8_t x964 = -47;

    t187 = ((x961+x962)<=(x963-x964));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x965 = 30208U;
	int64_t x966 = INT64_MIN;
	volatile int64_t x968 = INT64_MIN;

    t188 = ((x965+x966)<=(x967-x968));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x969 = -1;
	uint32_t x970 = UINT32_MAX;
	volatile int32_t x971 = INT32_MIN;
	volatile int32_t t189 = 0;

    t189 = ((x969+x970)<=(x971-x972));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x973 = 2898U;
	static volatile uint64_t x974 = 193446918585442218LLU;
	int16_t x975 = INT16_MIN;
	uint16_t x976 = 2561U;
	int32_t t190 = 0;

    t190 = ((x973+x974)<=(x975-x976));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x977 = INT8_MIN;
	int64_t x978 = INT64_MAX;
	static uint16_t x979 = 29U;
	int16_t x980 = -1;
	static volatile int32_t t191 = -76203;

    t191 = ((x977+x978)<=(x979-x980));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x981 = 233LLU;
	static uint8_t x982 = 15U;
	uint32_t x983 = 2U;
	volatile int32_t t192 = -46;

    t192 = ((x981+x982)<=(x983-x984));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t t193 = 185604633;

    t193 = ((x985+x986)<=(x987-x988));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x989 = 1U;
	uint64_t x990 = 511181590LLU;
	int64_t x991 = 32786166897603906LL;
	static uint32_t x992 = 8834214U;
	volatile int32_t t194 = 1;

    t194 = ((x989+x990)<=(x991-x992));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x993 = -14;
	static int8_t x994 = -1;
	int32_t x995 = -206;
	int16_t x996 = INT16_MIN;
	int32_t t195 = 61686;

    t195 = ((x993+x994)<=(x995-x996));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x998 = 88U;
	static uint64_t x999 = 752LLU;
	static int8_t x1000 = INT8_MIN;
	volatile int32_t t196 = 12310983;

    t196 = ((x997+x998)<=(x999-x1000));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1001 = 21U;
	int64_t x1002 = -30082LL;
	static int8_t x1003 = INT8_MAX;
	static int8_t x1004 = 26;
	volatile int32_t t197 = 362360;

    t197 = ((x1001+x1002)<=(x1003-x1004));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1005 = -1;
	int64_t x1006 = INT64_MAX;
	uint16_t x1007 = UINT16_MAX;
	int8_t x1008 = INT8_MIN;
	int32_t t198 = 6;

    t198 = ((x1005+x1006)<=(x1007-x1008));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1009 = -1LL;
	uint8_t x1010 = UINT8_MAX;
	static int8_t x1011 = -1;
	uint64_t x1012 = 7202LLU;
	static int32_t t199 = 220357;

    t199 = ((x1009+x1010)<=(x1011-x1012));

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

