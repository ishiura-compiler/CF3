
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

uint64_t x2 = 111962LLU;
volatile int64_t t1 = -210LL;
volatile int8_t x10 = INT8_MAX;
volatile int64_t x15 = INT64_MIN;
volatile int64_t x39 = INT64_MAX;
int16_t x40 = -1;
static volatile int64_t t8 = 2914LL;
int16_t x42 = INT16_MIN;
static int64_t x52 = -1LL;
volatile uint32_t t11 = 108929U;
volatile uint16_t x64 = 20749U;
static volatile uint8_t x69 = UINT8_MAX;
volatile int64_t x72 = INT64_MIN;
uint64_t x79 = 152355831721LLU;
static int8_t x84 = INT8_MAX;
int64_t x97 = -1LL;
int16_t x103 = INT16_MIN;
static volatile int64_t t23 = -42LL;
int32_t x124 = 16889;
uint8_t x146 = 3U;
int32_t x148 = INT32_MIN;
volatile int64_t x167 = INT64_MIN;
volatile int32_t x170 = 27;
volatile int64_t t34 = -427680907454079LL;
int16_t x187 = 3157;
static int64_t x189 = INT64_MAX;
uint8_t x191 = 1U;
int64_t x192 = -1LL;
int32_t x205 = -42262369;
static int8_t x207 = INT8_MAX;
int64_t x211 = -1LL;
static int64_t x212 = -1LL;
int16_t x218 = -3;
int32_t x222 = INT32_MIN;
int64_t x236 = INT64_MIN;
int8_t x241 = 1;
uint32_t x242 = 130484U;
static int64_t t46 = 8LL;
int8_t x246 = INT8_MIN;
int64_t x247 = 1LL;
int64_t x250 = INT64_MIN;
int64_t t48 = 689351881542LL;
int8_t x260 = INT8_MIN;
int8_t x263 = INT8_MIN;
int16_t x266 = INT16_MIN;
volatile int32_t x267 = INT32_MAX;
uint32_t x268 = UINT32_MAX;
volatile uint32_t x271 = UINT32_MAX;
uint64_t x293 = 1613681LLU;
static int16_t x297 = 0;
int16_t x307 = INT16_MIN;
volatile uint8_t x310 = 1U;
uint8_t x318 = 48U;
int64_t x319 = -1LL;
static uint64_t x324 = UINT64_MAX;
int16_t x336 = INT16_MIN;
volatile int32_t t67 = -2404478;
int8_t x344 = INT8_MIN;
volatile int32_t t69 = -19453244;
uint16_t x354 = 0U;
volatile int32_t t72 = -1549;
volatile uint64_t x370 = UINT64_MAX;
volatile uint64_t t75 = 9607591129604LLU;
int16_t x374 = INT16_MIN;
static volatile uint8_t x381 = 14U;
static volatile int32_t x383 = INT32_MAX;
volatile int16_t x385 = 0;
volatile int64_t t79 = -870583563251LL;
volatile int64_t t81 = 55LL;
int64_t x399 = -1LL;
uint16_t x411 = 61U;
uint64_t t85 = 121279168019831924LLU;
int32_t t86 = 389023;
static uint8_t x418 = 1U;
volatile int32_t x419 = 21279040;
uint64_t x434 = 507211996LLU;
volatile uint16_t x435 = 34U;
int64_t x440 = INT64_MIN;
uint8_t x441 = 0U;
int16_t x444 = INT16_MIN;
static volatile int64_t t92 = 51378068123787LL;
static int32_t x445 = -1;
static uint64_t x449 = 2376641786452075LLU;
int16_t x454 = INT16_MIN;
int32_t x456 = INT32_MIN;
volatile int32_t t95 = 91;
static int16_t x473 = -221;
int8_t x479 = 1;
volatile int64_t x483 = INT64_MAX;
static int32_t x485 = 109;
int64_t x497 = INT64_MIN;
int32_t x512 = -2602671;
int16_t x514 = -1;
int16_t x518 = INT16_MAX;
int8_t x522 = -1;
uint32_t t110 = 167692827U;
int16_t x530 = INT16_MAX;
uint64_t x536 = 236841198LLU;
uint64_t x538 = UINT64_MAX;
int8_t x550 = 1;
uint8_t x551 = 18U;
int32_t x561 = 1459696;
int8_t x563 = 0;
uint32_t x572 = 913019U;
int64_t x588 = INT64_MIN;
static volatile uint8_t x590 = 7U;
int64_t t124 = 31483922237311079LL;
uint16_t x602 = UINT16_MAX;
int8_t x603 = -1;
int32_t x607 = 577804727;
uint16_t x609 = UINT16_MAX;
uint32_t x610 = 191508530U;
uint64_t x613 = 3952117LLU;
uint64_t t130 = 162808734LLU;
uint64_t x620 = UINT64_MAX;
volatile uint64_t t131 = 1730039012311LLU;
static int8_t x622 = -3;
static uint16_t x624 = UINT16_MAX;
static int32_t x633 = 14196;
volatile uint32_t x644 = UINT32_MAX;
static volatile int32_t t136 = 147;
uint8_t x658 = 54U;
volatile int64_t x662 = 3949254896212LL;
int32_t x663 = -1;
int64_t t140 = 285795057075741744LL;
uint8_t x665 = 0U;
uint64_t x671 = UINT64_MAX;
volatile uint64_t t142 = 20531923871638749LLU;
volatile uint16_t x673 = 5525U;
static int16_t x676 = 43;
volatile uint64_t t144 = 567487741231275LLU;
uint8_t x682 = UINT8_MAX;
volatile int32_t t147 = 23961;
uint64_t x700 = UINT64_MAX;
int8_t x704 = INT8_MIN;
uint16_t x708 = 23U;
volatile int32_t t152 = -297;
static int8_t x713 = -1;
int16_t x716 = INT16_MIN;
uint32_t t153 = 3564U;
int32_t x720 = -1;
int16_t x724 = INT16_MIN;
int16_t x731 = 40;
static int64_t x732 = INT64_MAX;
static int64_t t156 = 1LL;
uint8_t x734 = UINT8_MAX;
int32_t t157 = 0;
uint64_t x741 = 14076992LLU;
uint64_t t158 = 923992LLU;
int64_t x750 = -1LL;
int64_t t160 = -282311166LL;
volatile uint32_t x757 = UINT32_MAX;
volatile int16_t x758 = -491;
int8_t x762 = 1;
uint8_t x765 = UINT8_MAX;
int16_t x766 = INT16_MAX;
int8_t x767 = INT8_MIN;
int32_t t164 = -58106;
static int64_t x775 = -1LL;
int64_t x777 = -1LL;
volatile int64_t t167 = -113416538350331LL;
int8_t x782 = -3;
volatile int16_t x789 = INT16_MIN;
static int32_t x793 = INT32_MAX;
static int16_t x802 = INT16_MIN;
uint16_t x807 = 30238U;
static volatile int32_t x808 = -393358627;
volatile int32_t x823 = -1;
static volatile uint16_t x827 = UINT16_MAX;
uint16_t x829 = 2569U;
volatile int64_t t179 = 30962LL;
int64_t t180 = 301730LL;
int32_t t181 = -25251620;
volatile uint64_t x851 = 442969737LLU;
static uint32_t x853 = 2U;
static uint8_t x861 = UINT8_MAX;
int8_t x873 = INT8_MIN;
int16_t x879 = -12610;
volatile uint32_t t187 = 0U;
volatile int64_t x887 = -1LL;
static int64_t t188 = 130191153079LL;
int32_t x893 = -1;
static int64_t x894 = -462374553LL;
volatile int16_t x898 = INT16_MAX;
static int32_t x904 = INT32_MAX;
uint32_t t193 = 28100U;
uint64_t t194 = 138LLU;
uint16_t x926 = 1U;
static int8_t x931 = 20;
int16_t x932 = INT16_MIN;
int8_t x934 = INT8_MIN;
uint32_t x935 = 171640U;
int8_t x940 = INT8_MIN;


void f0(void) {
    	volatile uint32_t x1 = 106U;
	volatile uint32_t x3 = 1042276U;
	int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = 58008859LLU;

    t0 = ((x1+x2)&(x3%x4));

    if (t0 != 64LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int64_t x7 = -111049027LL;
	uint8_t x8 = UINT8_MAX;

    t1 = ((x5+x6)&(x7%x8));

    if (t1 != -32865LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 1;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 3144LLU;
	static volatile uint64_t t2 = 832LLU;

    t2 = ((x9+x10)&(x11%x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 980654LLU;
	int64_t x14 = INT64_MAX;
	uint32_t x16 = 4U;
	static volatile uint64_t t3 = 30003832502LLU;

    t3 = ((x13+x14)&(x15%x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	static uint8_t x18 = 0U;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -27260088092140LL;

    t4 = ((x17+x18)&(x19%x20));

    if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	volatile uint16_t x22 = UINT16_MAX;
	int64_t x23 = INT64_MAX;
	int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 23342998337185LL;

    t5 = ((x21+x22)&(x23%x24));

    if (t5 != 65662LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	static int16_t x26 = INT16_MIN;
	int8_t x27 = 1;
	uint64_t x28 = 12784777451223LLU;
	static uint64_t t6 = 39LLU;

    t6 = ((x25+x26)&(x27%x28));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x33 = INT8_MAX;
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = 400575041667LL;
	volatile int8_t x36 = INT8_MIN;
	static int64_t t7 = 1LL;

    t7 = ((x33+x34)&(x35%x36));

    if (t7 != 2LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	static int64_t x38 = INT64_MAX;

    t8 = ((x37+x38)&(x39%x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x41 = -104;
	int32_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	int32_t t9 = -155643509;

    t9 = ((x41+x42)&(x43%x44));

    if (t9 != -32872) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x49 = INT64_MAX;
	static uint64_t x50 = 107549905798LLU;
	uint32_t x51 = 102883982U;
	uint64_t t10 = 5647512LLU;

    t10 = ((x49+x50)&(x51%x52));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	volatile int16_t x59 = -1;
	static volatile uint32_t x60 = UINT32_MAX;

    t11 = ((x57+x58)&(x59%x60));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = 377749572LLU;
	static volatile int16_t x62 = -1;
	int32_t x63 = -1885;
	volatile uint64_t t12 = 6346LLU;

    t12 = ((x61+x62)&(x63%x64));

    if (t12 != 377749507LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x70 = 170007470;
	static volatile int8_t x71 = INT8_MIN;
	static int64_t t13 = -965LL;

    t13 = ((x69+x70)&(x71%x72));

    if (t13 != 170007680LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = INT32_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	uint16_t x75 = 60U;
	volatile int32_t x76 = INT32_MIN;
	uint32_t t14 = 6U;

    t14 = ((x73+x74)&(x75%x76));

    if (t14 != 60U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = -77LL;
	uint16_t x78 = 2U;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t15 = 6957078620LLU;

    t15 = ((x77+x78)&(x79%x80));

    if (t15 != 152355831713LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x81 = 368;
	volatile uint16_t x82 = 0U;
	volatile int64_t x83 = INT64_MIN;
	volatile int64_t t16 = 234LL;

    t16 = ((x81+x82)&(x83%x84));

    if (t16 != 368LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x85 = INT8_MIN;
	uint16_t x86 = 9547U;
	int32_t x87 = -1;
	static int8_t x88 = -1;
	volatile int32_t t17 = -59410;

    t17 = ((x85+x86)&(x87%x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = 706;
	volatile int64_t x94 = -1LL;
	volatile uint32_t x95 = UINT32_MAX;
	volatile int32_t x96 = -1;
	volatile int64_t t18 = -2LL;

    t18 = ((x93+x94)&(x95%x96));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x98 = 17361604463LLU;
	static volatile int64_t x99 = -1LL;
	int32_t x100 = -1;
	volatile uint64_t t19 = 21511365293691132LLU;

    t19 = ((x97+x98)&(x99%x100));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x101 = -6996;
	static int8_t x102 = INT8_MAX;
	int64_t x104 = INT64_MAX;
	int64_t t20 = 361LL;

    t20 = ((x101+x102)&(x103%x104));

    if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile uint8_t x110 = UINT8_MAX;
	volatile uint8_t x111 = 3U;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t21 = 12798LLU;

    t21 = ((x109+x110)&(x111%x112));

    if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x113 = 29U;
	volatile uint64_t x114 = 483429792760369479LLU;
	static int16_t x115 = -1;
	uint32_t x116 = 2990708U;
	uint64_t t22 = 7LLU;

    t22 = ((x113+x114)&(x115%x116));

    if (t22 != 37188LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x117 = 74U;
	int32_t x118 = INT32_MIN;
	int32_t x119 = -132201;
	volatile int64_t x120 = -921970534494LL;

    t23 = ((x117+x118)&(x119%x120));

    if (t23 != -2147483646LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = 527923481LL;
	int16_t x122 = INT16_MIN;
	int64_t x123 = -1LL;
	volatile int64_t t24 = -21689171035LL;

    t24 = ((x121+x122)&(x123%x124));

    if (t24 != 527890713LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x129 = 5U;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MIN;
	int32_t x132 = 63;
	uint64_t t25 = 68727LLU;

    t25 = ((x129+x130)&(x131%x132));

    if (t25 != 4LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = -1;
	volatile uint8_t x134 = UINT8_MAX;
	int64_t x135 = -1LL;
	int16_t x136 = 4;
	volatile int64_t t26 = 39657900637397LL;

    t26 = ((x133+x134)&(x135%x136));

    if (t26 != 254LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x141 = -1;
	int8_t x142 = -1;
	static int64_t x143 = INT64_MIN;
	static int32_t x144 = INT32_MIN;
	volatile int64_t t27 = 640LL;

    t27 = ((x141+x142)&(x143%x144));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x145 = -1;
	int64_t x147 = INT64_MIN;
	volatile int64_t t28 = 1219LL;

    t28 = ((x145+x146)&(x147%x148));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x157 = -1;
	int64_t x158 = -3571377587429849899LL;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = -1LL;
	static volatile int64_t t29 = 5775354LL;

    t29 = ((x157+x158)&(x159%x160));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x161 = 104U;
	volatile int8_t x162 = INT8_MIN;
	uint32_t x163 = 735987U;
	int32_t x164 = INT32_MIN;
	uint32_t t30 = 5348U;

    t30 = ((x161+x162)&(x163%x164));

    if (t30 != 735968U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x165 = 31109988U;
	static uint8_t x166 = UINT8_MAX;
	int32_t x168 = INT32_MIN;
	int64_t t31 = -2389LL;

    t31 = ((x165+x166)&(x167%x168));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x169 = UINT32_MAX;
	int8_t x171 = 49;
	int16_t x172 = INT16_MIN;
	static volatile uint32_t t32 = 149206U;

    t32 = ((x169+x170)&(x171%x172));

    if (t32 != 16U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x173 = INT16_MIN;
	volatile int32_t x174 = INT32_MAX;
	static volatile uint16_t x175 = 6088U;
	static uint16_t x176 = 1327U;
	volatile int32_t t33 = 249207;

    t33 = ((x173+x174)&(x175%x176));

    if (t33 != 780) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x177 = UINT8_MAX;
	static int64_t x178 = 400108690LL;
	int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;

    t34 = ((x177+x178)&(x179%x180));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x181 = INT8_MAX;
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	volatile int64_t x184 = INT64_MAX;
	static int64_t t35 = INT64_MIN;

    t35 = ((x181+x182)&(x183%x184));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x185 = INT32_MIN;
	uint64_t x186 = 17082323LLU;
	int32_t x188 = INT32_MIN;
	volatile uint64_t t36 = 8809696378590766LLU;

    t36 = ((x185+x186)&(x187%x188));

    if (t36 != 1105LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x190 = -22;
	volatile int64_t t37 = 44114148892LL;

    t37 = ((x189+x190)&(x191%x192));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x193 = 5089U;
	uint32_t x194 = 49U;
	volatile uint64_t x195 = 104831506761LLU;
	volatile int8_t x196 = 1;
	volatile uint64_t t38 = 26643503LLU;

    t38 = ((x193+x194)&(x195%x196));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x201 = 28;
	int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	static volatile int8_t x204 = 9;
	int32_t t39 = 181259;

    t39 = ((x201+x202)&(x203%x204));

    if (t39 != 24) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x206 = 1;
	uint16_t x208 = 32593U;
	static volatile int32_t t40 = -3859950;

    t40 = ((x205+x206)&(x207%x208));

    if (t40 != 32) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x209 = -1;
	int8_t x210 = 7;
	int64_t t41 = -5LL;

    t41 = ((x209+x210)&(x211%x212));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x213 = -1;
	uint16_t x214 = 57U;
	volatile int16_t x215 = -1;
	int8_t x216 = -22;
	static volatile int32_t t42 = 3737777;

    t42 = ((x213+x214)&(x215%x216));

    if (t42 != 56) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x217 = 17U;
	int16_t x219 = INT16_MIN;
	static int32_t x220 = INT32_MIN;
	int32_t t43 = 284;

    t43 = ((x217+x218)&(x219%x220));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x221 = 5;
	int16_t x223 = INT16_MAX;
	int16_t x224 = -35;
	static volatile int32_t t44 = 1;

    t44 = ((x221+x222)&(x223%x224));

    if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x233 = -1;
	int16_t x234 = -1;
	uint32_t x235 = 2U;
	int64_t t45 = -4311828LL;

    t45 = ((x233+x234)&(x235%x236));

    if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x243 = -1863;
	volatile int64_t x244 = INT64_MIN;

    t46 = ((x241+x242)&(x243%x244));

    if (t46 != 129201LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x245 = -1;
	volatile uint32_t x248 = 44232U;
	int64_t t47 = 8092021LL;

    t47 = ((x245+x246)&(x247%x248));

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x249 = 4U;
	int16_t x251 = INT16_MAX;
	int64_t x252 = INT64_MIN;

    t48 = ((x249+x250)&(x251%x252));

    if (t48 != 4LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x253 = INT32_MAX;
	int64_t x254 = INT64_MIN;
	volatile uint64_t x255 = 3LLU;
	static int64_t x256 = INT64_MAX;
	uint64_t t49 = 1146187227373949LLU;

    t49 = ((x253+x254)&(x255%x256));

    if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x258 = 0U;
	uint64_t x259 = 9503LLU;
	static volatile uint64_t t50 = 2125539915323LLU;

    t50 = ((x257+x258)&(x259%x260));

    if (t50 != 9472LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x261 = 11;
	int16_t x262 = 3875;
	static int8_t x264 = INT8_MAX;
	int32_t t51 = -2016334;

    t51 = ((x261+x262)&(x263%x264));

    if (t51 != 3886) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x265 = INT8_MIN;
	volatile uint32_t t52 = 80U;

    t52 = ((x265+x266)&(x267%x268));

    if (t52 != 2147450752U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x269 = INT16_MIN;
	static volatile uint32_t x270 = 7U;
	uint32_t x272 = 208644211U;
	uint32_t t53 = 81265U;

    t53 = ((x269+x270)&(x271%x272));

    if (t53 != 122060803U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x273 = -677LL;
	uint8_t x274 = 37U;
	uint32_t x275 = 2371808U;
	int8_t x276 = -56;
	volatile int64_t t54 = 68796859276332021LL;

    t54 = ((x273+x274)&(x275%x276));

    if (t54 != 2371712LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x277 = 3948771894LLU;
	volatile int64_t x278 = INT64_MIN;
	uint16_t x279 = UINT16_MAX;
	int16_t x280 = -1;
	uint64_t t55 = 219LLU;

    t55 = ((x277+x278)&(x279%x280));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x281 = 293779135187233LL;
	uint8_t x282 = 105U;
	volatile int32_t x283 = -1;
	int32_t x284 = 11556;
	static int64_t t56 = 90LL;

    t56 = ((x281+x282)&(x283%x284));

    if (t56 != 293779135187338LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x285 = UINT64_MAX;
	volatile uint16_t x286 = 7406U;
	static int32_t x287 = -1;
	uint8_t x288 = 1U;
	volatile uint64_t t57 = 244904688522739LLU;

    t57 = ((x285+x286)&(x287%x288));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x294 = 101U;
	int64_t x295 = INT64_MAX;
	static uint32_t x296 = UINT32_MAX;
	uint64_t t58 = 179984675LLU;

    t58 = ((x293+x294)&(x295%x296));

    if (t58 != 1613782LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x298 = -928;
	int16_t x299 = -3;
	int16_t x300 = INT16_MIN;
	volatile int32_t t59 = 12293708;

    t59 = ((x297+x298)&(x299%x300));

    if (t59 != -928) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x301 = -4300;
	static int8_t x302 = INT8_MAX;
	uint16_t x303 = 1U;
	uint32_t x304 = 11615U;
	uint32_t t60 = 2U;

    t60 = ((x301+x302)&(x303%x304));

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x305 = 77991430;
	int64_t x306 = -503787851515312LL;
	int16_t x308 = -42;
	static volatile int64_t t61 = 3LL;

    t61 = ((x305+x306)&(x307%x308));

    if (t61 != -503787773523888LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x309 = 194508;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t62 = -12;

    t62 = ((x309+x310)&(x311%x312));

    if (t62 != 30669) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x317 = INT16_MAX;
	uint8_t x320 = 1U;
	volatile int64_t t63 = -8284734LL;

    t63 = ((x317+x318)&(x319%x320));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x321 = INT32_MAX;
	int8_t x322 = -1;
	int32_t x323 = -187;
	volatile uint64_t t64 = 5768434LLU;

    t64 = ((x321+x322)&(x323%x324));

    if (t64 != 2147483460LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x325 = 1604;
	volatile uint64_t x326 = 169LLU;
	volatile uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1901090;
	static uint64_t t65 = 3LLU;

    t65 = ((x325+x326)&(x327%x328));

    if (t65 != 1773LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x329 = 117;
	static volatile int32_t x330 = -1;
	int32_t x331 = INT32_MIN;
	static uint8_t x332 = 86U;
	int32_t t66 = -77970;

    t66 = ((x329+x330)&(x331%x332));

    if (t66 != 112) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x333 = INT16_MIN;
	volatile int8_t x334 = -31;
	volatile uint8_t x335 = 25U;

    t67 = ((x333+x334)&(x335%x336));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x337 = INT8_MAX;
	static int8_t x338 = INT8_MAX;
	uint32_t x339 = UINT32_MAX;
	static volatile int64_t x340 = -1LL;
	volatile int64_t t68 = 185749502891120890LL;

    t68 = ((x337+x338)&(x339%x340));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x341 = INT32_MIN;
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = -1;

    t69 = ((x341+x342)&(x343%x344));

    if (t69 != -2147418113) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x345 = -1LL;
	int8_t x346 = -1;
	uint64_t x347 = 5746735681817423LLU;
	int16_t x348 = INT16_MIN;
	uint64_t t70 = 805115LLU;

    t70 = ((x345+x346)&(x347%x348));

    if (t70 != 5746735681817422LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x349 = -2351;
	volatile uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -15;
	uint64_t t71 = 2048237LLU;

    t71 = ((x349+x350)&(x351%x352));

    if (t71 != 18446744073709549264LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x353 = INT16_MAX;
	uint8_t x355 = UINT8_MAX;
	static int32_t x356 = -5568657;

    t72 = ((x353+x354)&(x355%x356));

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x361 = INT32_MIN;
	volatile uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 4U;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t73 = 543747571511LLU;

    t73 = ((x361+x362)&(x363%x364));

    if (t73 != 4LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x365 = -432954602620LL;
	static uint32_t x366 = UINT32_MAX;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = -1;
	uint64_t t74 = 19734542479LLU;

    t74 = ((x365+x366)&(x367%x368));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x369 = -1;
	uint32_t x371 = 200U;
	static uint8_t x372 = 1U;

    t75 = ((x369+x370)&(x371%x372));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x373 = INT8_MIN;
	uint8_t x375 = 1U;
	int16_t x376 = INT16_MIN;
	volatile int32_t t76 = -90760;

    t76 = ((x373+x374)&(x375%x376));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x377 = -1;
	volatile uint16_t x378 = 933U;
	volatile int64_t x379 = INT64_MIN;
	uint32_t x380 = 35U;
	volatile int64_t t77 = -122LL;

    t77 = ((x377+x378)&(x379%x380));

    if (t77 != 928LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x382 = -816;
	int32_t x384 = 198;
	static int32_t t78 = -373;

    t78 = ((x381+x382)&(x383%x384));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MAX;
	volatile int64_t x388 = 1404666LL;

    t79 = ((x385+x386)&(x387%x388));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x389 = 6;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = -1;
	uint16_t x392 = 1U;
	volatile int32_t t80 = -1;

    t80 = ((x389+x390)&(x391%x392));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x393 = UINT16_MAX;
	int64_t x394 = -3192410147022LL;
	volatile uint8_t x395 = 29U;
	int32_t x396 = INT32_MIN;

    t81 = ((x393+x394)&(x395%x396));

    if (t81 != 17LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x397 = INT8_MAX;
	volatile int64_t x398 = INT64_MIN;
	uint64_t x400 = UINT64_MAX;
	uint64_t t82 = 1864197266015035752LLU;

    t82 = ((x397+x398)&(x399%x400));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x401 = 249U;
	static int16_t x402 = INT16_MIN;
	int16_t x403 = -1;
	volatile uint64_t x404 = 458203LLU;
	uint64_t t83 = 222320732708LLU;

    t83 = ((x401+x402)&(x403%x404));

    if (t83 != 121LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x405 = -155LL;
	int64_t x406 = 157796363472162926LL;
	volatile uint64_t x407 = 1949LLU;
	uint64_t x408 = 15812LLU;
	static volatile uint64_t t84 = 2161254156121LLU;

    t84 = ((x405+x406)&(x407%x408));

    if (t84 != 1937LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x409 = -124LL;
	static volatile int16_t x410 = -2;
	static volatile uint64_t x412 = 96483289788594LLU;

    t85 = ((x409+x410)&(x411%x412));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x413 = -1;
	int16_t x414 = 5;
	int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MAX;

    t86 = ((x413+x414)&(x415%x416));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x420 = INT16_MAX;
	volatile int32_t t87 = -65229830;

    t87 = ((x417+x418)&(x419%x420));

    if (t87 != 13185) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x421 = INT16_MAX;
	volatile int16_t x422 = INT16_MIN;
	volatile uint8_t x423 = 74U;
	uint64_t x424 = 204243092LLU;
	static uint64_t t88 = 46822LLU;

    t88 = ((x421+x422)&(x423%x424));

    if (t88 != 74LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x429 = 13610702213LL;
	static volatile int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	volatile int64_t t89 = -1LL;

    t89 = ((x429+x430)&(x431%x432));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x433 = -58;
	int64_t x436 = -1LL;
	uint64_t t90 = 33470838997118LLU;

    t90 = ((x433+x434)&(x435%x436));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x437 = 4418U;
	uint64_t x438 = 92210601934161511LLU;
	static int16_t x439 = 486;
	volatile uint64_t t91 = 15856997992829959LLU;

    t91 = ((x437+x438)&(x439%x440));

    if (t91 != 416LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x442 = UINT16_MAX;
	static int64_t x443 = -1LL;

    t92 = ((x441+x442)&(x443%x444));

    if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x446 = INT8_MAX;
	static int16_t x447 = INT16_MIN;
	int8_t x448 = 21;
	int32_t t93 = 1107129;

    t93 = ((x445+x446)&(x447%x448));

    if (t93 != 120) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x450 = -1;
	volatile int16_t x451 = INT16_MIN;
	uint64_t x452 = 769596189557141617LLU;
	uint64_t t94 = 15937241533351849LLU;

    t94 = ((x449+x450)&(x451%x452));

    if (t94 != 2359002220462152LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x453 = 1U;
	int32_t x455 = -1;

    t95 = ((x453+x454)&(x455%x456));

    if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x457 = INT32_MAX;
	uint32_t x458 = 659U;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = UINT8_MAX;
	volatile int64_t t96 = -71254744580246244LL;

    t96 = ((x457+x458)&(x459%x460));

    if (t96 != 2147484288LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int16_t x463 = -1;
	uint32_t x464 = UINT32_MAX;
	uint32_t t97 = 13852142U;

    t97 = ((x461+x462)&(x463%x464));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x474 = INT32_MAX;
	uint64_t x475 = UINT64_MAX;
	int8_t x476 = 13;
	volatile uint64_t t98 = 554LLU;

    t98 = ((x473+x474)&(x475%x476));

    if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x477 = 1;
	uint16_t x478 = UINT16_MAX;
	int8_t x480 = -1;
	volatile int32_t t99 = -385;

    t99 = ((x477+x478)&(x479%x480));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x481 = INT32_MAX;
	int64_t x482 = 1190406LL;
	int64_t x484 = 188LL;
	int64_t t100 = -16628109123053386LL;

    t100 = ((x481+x482)&(x483%x484));

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x486 = INT8_MAX;
	volatile uint64_t x487 = 10774123824LLU;
	int32_t x488 = INT32_MIN;
	volatile uint64_t t101 = 3653771737983LLU;

    t101 = ((x485+x486)&(x487%x488));

    if (t101 != 32LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x489 = UINT32_MAX;
	uint32_t x490 = UINT32_MAX;
	int16_t x491 = INT16_MAX;
	volatile uint8_t x492 = UINT8_MAX;
	static volatile uint32_t t102 = 13U;

    t102 = ((x489+x490)&(x491%x492));

    if (t102 != 126U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x493 = 178367179U;
	static int32_t x494 = -1;
	volatile int8_t x495 = 29;
	volatile int8_t x496 = -1;
	uint32_t t103 = 17U;

    t103 = ((x493+x494)&(x495%x496));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x498 = 3;
	static int64_t x499 = -1LL;
	uint8_t x500 = 11U;
	int64_t t104 = -1612691304778820647LL;

    t104 = ((x497+x498)&(x499%x500));

    if (t104 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x501 = 13U;
	volatile uint32_t x502 = 10U;
	int8_t x503 = -1;
	int64_t x504 = INT64_MIN;
	int64_t t105 = 5257LL;

    t105 = ((x501+x502)&(x503%x504));

    if (t105 != 23LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x509 = 11;
	uint64_t x510 = 36566079LLU;
	static volatile uint32_t x511 = 64U;
	static volatile uint64_t t106 = 777884719130LLU;

    t106 = ((x509+x510)&(x511%x512));

    if (t106 != 64LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x513 = 2;
	static uint64_t x515 = 344827281268LLU;
	int16_t x516 = 11;
	volatile uint64_t t107 = 487563713279006865LLU;

    t107 = ((x513+x514)&(x515%x516));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x517 = -1;
	int16_t x519 = INT16_MAX;
	uint8_t x520 = UINT8_MAX;
	int32_t t108 = -131;

    t108 = ((x517+x518)&(x519%x520));

    if (t108 != 126) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x521 = 7;
	volatile uint16_t x523 = 4765U;
	static uint8_t x524 = 1U;
	volatile int32_t t109 = 18;

    t109 = ((x521+x522)&(x523%x524));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x525 = 26850U;
	volatile int8_t x526 = -21;
	uint32_t x527 = 2011U;
	uint16_t x528 = 6569U;

    t110 = ((x525+x526)&(x527%x528));

    if (t110 != 201U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x529 = INT16_MIN;
	static uint8_t x531 = 5U;
	volatile int32_t x532 = INT32_MIN;
	volatile int32_t t111 = 75767710;

    t111 = ((x529+x530)&(x531%x532));

    if (t111 != 5) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x533 = UINT16_MAX;
	int32_t x534 = -1;
	static uint32_t x535 = UINT32_MAX;
	uint64_t t112 = 1206566522083605297LLU;

    t112 = ((x533+x534)&(x535%x536));

    if (t112 != 40770LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x537 = UINT64_MAX;
	int16_t x539 = INT16_MIN;
	uint64_t x540 = UINT64_MAX;
	uint64_t t113 = 30908931LLU;

    t113 = ((x537+x538)&(x539%x540));

    if (t113 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x541 = 3;
	uint64_t x542 = 1266353903774201LLU;
	uint64_t x543 = 1222754692LLU;
	uint8_t x544 = 1U;
	uint64_t t114 = 61095LLU;

    t114 = ((x541+x542)&(x543%x544));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x549 = 2U;
	int32_t x552 = INT32_MIN;
	volatile int32_t t115 = 1;

    t115 = ((x549+x550)&(x551%x552));

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x553 = INT32_MAX;
	static int32_t x554 = -1;
	int16_t x555 = -1404;
	int16_t x556 = -1;
	volatile int32_t t116 = 165631560;

    t116 = ((x553+x554)&(x555%x556));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x557 = -7079LL;
	static uint8_t x558 = 7U;
	int32_t x559 = INT32_MAX;
	volatile uint32_t x560 = UINT32_MAX;
	volatile int64_t t117 = 74LL;

    t117 = ((x557+x558)&(x559%x560));

    if (t117 != 2147476576LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x562 = INT64_MIN;
	static uint8_t x564 = UINT8_MAX;
	volatile int64_t t118 = 105697226008LL;

    t118 = ((x561+x562)&(x563%x564));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x565 = 7408U;
	volatile uint64_t x566 = 216929239LLU;
	volatile uint32_t x567 = UINT32_MAX;
	int16_t x568 = 3291;
	volatile uint64_t t119 = 10320LLU;

    t119 = ((x565+x566)&(x567%x568));

    if (t119 != 135LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x569 = INT16_MIN;
	volatile int64_t x570 = -1429957654866LL;
	int64_t x571 = INT64_MIN;
	int64_t t120 = -6684905264624LL;

    t120 = ((x569+x570)&(x571%x572));

    if (t120 != -1429957688664LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x573 = 25260LLU;
	volatile int16_t x574 = INT16_MIN;
	int64_t x575 = INT64_MAX;
	int64_t x576 = INT64_MIN;
	uint64_t t121 = 7745544662451797286LLU;

    t121 = ((x573+x574)&(x575%x576));

    if (t121 != 9223372036854768300LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x581 = -1;
	int8_t x582 = -1;
	static int8_t x583 = 7;
	int16_t x584 = INT16_MAX;
	static volatile int32_t t122 = -240649;

    t122 = ((x581+x582)&(x583%x584));

    if (t122 != 6) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x585 = 28U;
	uint8_t x586 = UINT8_MAX;
	static int16_t x587 = 3706;
	volatile int64_t t123 = -1899LL;

    t123 = ((x585+x586)&(x587%x588));

    if (t123 != 26LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x589 = INT64_MIN;
	volatile int8_t x591 = -1;
	uint32_t x592 = UINT32_MAX;

    t124 = ((x589+x590)&(x591%x592));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x593 = 7928185LL;
	int64_t x594 = INT64_MIN;
	int32_t x595 = 32707674;
	int8_t x596 = INT8_MIN;
	static int64_t t125 = -1447317049664802LL;

    t125 = ((x593+x594)&(x595%x596));

    if (t125 != 88LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x597 = 134U;
	int64_t x598 = INT64_MIN;
	int8_t x599 = 47;
	int64_t x600 = 2473979778030944630LL;
	int64_t t126 = 112134958LL;

    t126 = ((x597+x598)&(x599%x600));

    if (t126 != 6LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x601 = 52LLU;
	int32_t x604 = INT32_MIN;
	uint64_t t127 = 548433702863LLU;

    t127 = ((x601+x602)&(x603%x604));

    if (t127 != 65587LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x605 = -1;
	uint32_t x606 = 2860U;
	static volatile uint8_t x608 = 1U;
	uint32_t t128 = 0U;

    t128 = ((x605+x606)&(x607%x608));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x611 = INT16_MIN;
	volatile int64_t x612 = -500746205LL;
	volatile int64_t t129 = -1272901LL;

    t129 = ((x609+x610)&(x611%x612));

    if (t129 != 191561728LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x614 = UINT16_MAX;
	static volatile int16_t x615 = 201;
	int32_t x616 = INT32_MIN;

    t130 = ((x613+x614)&(x615%x616));

    if (t130 != 192LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x617 = -82558LL;
	uint64_t x618 = UINT64_MAX;
	volatile int8_t x619 = INT8_MIN;

    t131 = ((x617+x618)&(x619%x620));

    if (t131 != 18446744073709469056LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x621 = INT16_MIN;
	int16_t x623 = INT16_MIN;
	static int32_t t132 = 22392;

    t132 = ((x621+x622)&(x623%x624));

    if (t132 != -65536) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x634 = 111;
	static volatile int64_t x635 = INT64_MAX;
	int64_t x636 = INT64_MIN;
	volatile int64_t t133 = 0LL;

    t133 = ((x633+x634)&(x635%x636));

    if (t133 != 14307LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x637 = -1923;
	int8_t x638 = 4;
	uint32_t x639 = 55U;
	int16_t x640 = 1;
	static uint32_t t134 = 138U;

    t134 = ((x637+x638)&(x639%x640));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x641 = INT64_MIN;
	uint32_t x642 = 1157062U;
	volatile int16_t x643 = 3;
	volatile int64_t t135 = 28408968398LL;

    t135 = ((x641+x642)&(x643%x644));

    if (t135 != 2LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x645 = INT32_MAX;
	int8_t x646 = INT8_MIN;
	int16_t x647 = -1;
	int8_t x648 = -2;

    t136 = ((x645+x646)&(x647%x648));

    if (t136 != 2147483519) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x649 = 0;
	static int32_t x650 = 236306854;
	int32_t x651 = -152796526;
	int32_t x652 = INT32_MAX;
	int32_t t137 = 1788;

    t137 = ((x649+x650)&(x651%x652));

    if (t137 != 100958338) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x653 = 155253824839374713LLU;
	uint16_t x654 = 11U;
	static int8_t x655 = -1;
	volatile int8_t x656 = -1;
	volatile uint64_t t138 = 44560679445LLU;

    t138 = ((x653+x654)&(x655%x656));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x657 = -1;
	volatile int8_t x659 = -1;
	uint64_t x660 = 3380LLU;
	uint64_t t139 = 113043493161LLU;

    t139 = ((x657+x658)&(x659%x660));

    if (t139 != 53LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x661 = UINT16_MAX;
	int16_t x664 = INT16_MIN;

    t140 = ((x661+x662)&(x663%x664));

    if (t140 != 3949254961747LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x666 = INT32_MIN;
	int8_t x667 = INT8_MIN;
	static int64_t x668 = -1LL;
	static int64_t t141 = 13662171229671494LL;

    t141 = ((x665+x666)&(x667%x668));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x669 = UINT8_MAX;
	uint8_t x670 = 0U;
	int64_t x672 = INT64_MIN;

    t142 = ((x669+x670)&(x671%x672));

    if (t142 != 255LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x674 = -1;
	int8_t x675 = INT8_MAX;
	volatile int32_t t143 = 588042;

    t143 = ((x673+x674)&(x675%x676));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x677 = -34768898968489297LL;
	uint64_t x678 = 12418758LLU;
	int8_t x679 = -1;
	int16_t x680 = INT16_MAX;

    t144 = ((x677+x678)&(x679%x680));

    if (t144 != 18411975174753481077LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x681 = -1LL;
	static int32_t x683 = -1;
	static int32_t x684 = INT32_MAX;
	volatile int64_t t145 = 1221594LL;

    t145 = ((x681+x682)&(x683%x684));

    if (t145 != 254LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x685 = INT8_MAX;
	int8_t x686 = 33;
	static int32_t x687 = INT32_MAX;
	int8_t x688 = INT8_MAX;
	volatile int32_t t146 = 29513;

    t146 = ((x685+x686)&(x687%x688));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x689 = 639U;
	uint8_t x690 = 4U;
	int8_t x691 = -1;
	volatile int8_t x692 = 23;

    t147 = ((x689+x690)&(x691%x692));

    if (t147 != 643) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x693 = INT16_MIN;
	static int16_t x694 = -153;
	volatile uint8_t x695 = UINT8_MAX;
	volatile uint8_t x696 = 75U;
	int32_t t148 = -3;

    t148 = ((x693+x694)&(x695%x696));

    if (t148 != 6) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x697 = INT32_MAX;
	volatile int8_t x698 = INT8_MIN;
	int16_t x699 = INT16_MIN;
	uint64_t t149 = 6357063953LLU;

    t149 = ((x697+x698)&(x699%x700));

    if (t149 != 2147450880LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x701 = -24;
	static volatile int16_t x702 = INT16_MAX;
	volatile int32_t x703 = INT32_MIN;
	volatile int32_t t150 = 719340;

    t150 = ((x701+x702)&(x703%x704));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x705 = UINT32_MAX;
	int64_t x706 = 25702674469431938LL;
	int8_t x707 = INT8_MIN;
	volatile int64_t t151 = -3LL;

    t151 = ((x705+x706)&(x707%x708));

    if (t151 != 25702678764399233LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x709 = 2;
	int16_t x710 = INT16_MIN;
	int8_t x711 = INT8_MIN;
	int8_t x712 = -30;

    t152 = ((x709+x710)&(x711%x712));

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x714 = -26867;
	uint32_t x715 = 10U;

    t153 = ((x713+x714)&(x715%x716));

    if (t153 != 8U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x717 = 1513008966U;
	int16_t x718 = INT16_MAX;
	uint16_t x719 = UINT16_MAX;
	uint32_t t154 = 7548926U;

    t154 = ((x717+x718)&(x719%x720));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x721 = 2U;
	int16_t x722 = INT16_MIN;
	int64_t x723 = INT64_MAX;
	volatile int64_t t155 = -2039LL;

    t155 = ((x721+x722)&(x723%x724));

    if (t155 != 2LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	static uint32_t x730 = 106735U;

    t156 = ((x729+x730)&(x731%x732));

    if (t156 != 40LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x733 = 277;
	static int16_t x735 = -1;
	uint16_t x736 = UINT16_MAX;

    t157 = ((x733+x734)&(x735%x736));

    if (t157 != 532) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x742 = INT64_MIN;
	volatile int64_t x743 = -1LL;
	volatile int16_t x744 = -1;

    t158 = ((x741+x742)&(x743%x744));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x745 = -6;
	int8_t x746 = -13;
	int8_t x747 = INT8_MAX;
	int16_t x748 = -125;
	static int32_t t159 = -1;

    t159 = ((x745+x746)&(x747%x748));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x749 = -1;
	int64_t x751 = INT64_MAX;
	uint8_t x752 = UINT8_MAX;

    t160 = ((x749+x750)&(x751%x752));

    if (t160 != 126LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x753 = 612399U;
	static int64_t x754 = 182052687788LL;
	uint32_t x755 = 60014U;
	int32_t x756 = -133676;
	int64_t t161 = 2805431059678LL;

    t161 = ((x753+x754)&(x755%x756));

    if (t161 != 57930LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x759 = -1;
	volatile uint16_t x760 = 278U;
	uint32_t t162 = 5007579U;

    t162 = ((x757+x758)&(x759%x760));

    if (t162 != 4294966804U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x761 = INT16_MIN;
	int8_t x763 = -1;
	uint32_t x764 = UINT32_MAX;
	uint32_t t163 = 27160U;

    t163 = ((x761+x762)&(x763%x764));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x768 = UINT16_MAX;

    t164 = ((x765+x766)&(x767%x768));

    if (t164 != 32896) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x769 = INT16_MIN;
	static uint64_t x770 = 596455LLU;
	uint8_t x771 = 2U;
	uint64_t x772 = 54196608017193063LLU;
	static uint64_t t165 = 31421081170224LLU;

    t165 = ((x769+x770)&(x771%x772));

    if (t165 != 2LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x773 = -1LL;
	static int16_t x774 = INT16_MIN;
	uint32_t x776 = UINT32_MAX;
	int64_t t166 = 9LL;

    t166 = ((x773+x774)&(x775%x776));

    if (t166 != -32769LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x778 = 81;
	int16_t x779 = INT16_MIN;
	int64_t x780 = 315834398LL;

    t167 = ((x777+x778)&(x779%x780));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x781 = 0U;
	int16_t x783 = -1;
	volatile uint8_t x784 = 38U;
	uint32_t t168 = 123245U;

    t168 = ((x781+x782)&(x783%x784));

    if (t168 != 4294967293U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x785 = -1;
	int64_t x786 = -1LL;
	volatile int8_t x787 = INT8_MIN;
	int16_t x788 = INT16_MAX;
	volatile int64_t t169 = 21063058888587732LL;

    t169 = ((x785+x786)&(x787%x788));

    if (t169 != -128LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x790 = 0LL;
	volatile int32_t x791 = INT32_MIN;
	int16_t x792 = 2785;
	int64_t t170 = 73505039911864LL;

    t170 = ((x789+x790)&(x791%x792));

    if (t170 != -32768LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x794 = 0U;
	volatile int8_t x795 = -8;
	int16_t x796 = INT16_MIN;
	uint32_t t171 = 2503043U;

    t171 = ((x793+x794)&(x795%x796));

    if (t171 != 2147483640U) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint64_t x797 = 0LLU;
	int16_t x798 = -1;
	int16_t x799 = INT16_MIN;
	uint16_t x800 = 93U;
	volatile uint64_t t172 = 4754512978663LLU;

    t172 = ((x797+x798)&(x799%x800));

    if (t172 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x801 = 66U;
	int8_t x803 = INT8_MIN;
	static int64_t x804 = INT64_MAX;
	volatile int64_t t173 = 19307748011LL;

    t173 = ((x801+x802)&(x803%x804));

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x805 = 2U;
	static int8_t x806 = -1;
	volatile int32_t t174 = -61196633;

    t174 = ((x805+x806)&(x807%x808));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x809 = -1LL;
	volatile int32_t x810 = -1;
	static uint8_t x811 = 10U;
	int8_t x812 = -1;
	static int64_t t175 = 14786280564833936LL;

    t175 = ((x809+x810)&(x811%x812));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x821 = 1U;
	static uint16_t x822 = UINT16_MAX;
	static uint64_t x824 = 29696756693052034LLU;
	static uint64_t t176 = 4333014070855380463LLU;

    t176 = ((x821+x822)&(x823%x824));

    if (t176 != 65536LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x825 = INT64_MIN;
	static volatile uint64_t x826 = UINT64_MAX;
	int8_t x828 = INT8_MIN;
	volatile uint64_t t177 = 3011881715981LLU;

    t177 = ((x825+x826)&(x827%x828));

    if (t177 != 127LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x830 = INT64_MIN;
	int8_t x831 = -1;
	int32_t x832 = INT32_MIN;
	int64_t t178 = 1434602LL;

    t178 = ((x829+x830)&(x831%x832));

    if (t178 != -9223372036854773239LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x833 = INT64_MAX;
	int16_t x834 = INT16_MIN;
	volatile int8_t x835 = 1;
	volatile int16_t x836 = -1;

    t179 = ((x833+x834)&(x835%x836));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x837 = 20506182889LL;
	volatile int32_t x838 = 80;
	int32_t x839 = -687424436;
	static uint32_t x840 = UINT32_MAX;

    t180 = ((x837+x838)&(x839%x840));

    if (t180 != 3322053640LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x841 = INT8_MAX;
	volatile int8_t x842 = INT8_MAX;
	int16_t x843 = INT16_MIN;
	static int16_t x844 = INT16_MIN;

    t181 = ((x841+x842)&(x843%x844));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x849 = INT16_MIN;
	static uint32_t x850 = 94214U;
	int32_t x852 = -1;
	volatile uint64_t t182 = 252992LLU;

    t182 = ((x849+x850)&(x851%x852));

    if (t182 != 8192LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x854 = -1;
	volatile uint16_t x855 = 0U;
	volatile int16_t x856 = INT16_MAX;
	volatile uint32_t t183 = 3U;

    t183 = ((x853+x854)&(x855%x856));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x862 = INT16_MIN;
	uint8_t x863 = 0U;
	int8_t x864 = INT8_MIN;
	int32_t t184 = 2;

    t184 = ((x861+x862)&(x863%x864));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x865 = INT16_MIN;
	volatile int8_t x866 = INT8_MAX;
	int32_t x867 = INT32_MIN;
	static volatile uint64_t x868 = 16644724897052LLU;
	uint64_t t185 = 9622739121LLU;

    t185 = ((x865+x866)&(x867%x868));

    if (t185 != 11322980499516LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x874 = -949;
	int8_t x875 = INT8_MAX;
	int64_t x876 = -3132928299565525769LL;
	volatile int64_t t186 = 488577682747LL;

    t186 = ((x873+x874)&(x875%x876));

    if (t186 != 75LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x877 = -1;
	static int16_t x878 = -1;
	static uint32_t x880 = 942637U;

    t187 = ((x877+x878)&(x879%x880));

    if (t187 != 300514U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x885 = 1U;
	int8_t x886 = INT8_MAX;
	static volatile int16_t x888 = -1;

    t188 = ((x885+x886)&(x887%x888));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x889 = INT8_MAX;
	static int16_t x890 = INT16_MIN;
	int8_t x891 = -1;
	int32_t x892 = -60399;
	volatile int32_t t189 = 1427789;

    t189 = ((x889+x890)&(x891%x892));

    if (t189 != -32641) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x895 = -1LL;
	uint64_t x896 = 8873733997365341LLU;
	volatile uint64_t t190 = 21536359LLU;

    t190 = ((x893+x894)&(x895%x896));

    if (t190 != 7124826764351744LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x897 = 0U;
	int16_t x899 = INT16_MIN;
	uint64_t x900 = 2180538124847LLU;
	volatile uint64_t t191 = 14842LLU;

    t191 = ((x897+x898)&(x899%x900));

    if (t191 != 12360LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x901 = 1U;
	static int8_t x902 = INT8_MIN;
	int8_t x903 = 0;
	int32_t t192 = -20;

    t192 = ((x901+x902)&(x903%x904));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x905 = 0;
	int8_t x906 = INT8_MIN;
	volatile int16_t x907 = INT16_MIN;
	uint32_t x908 = 1984U;

    t193 = ((x905+x906)&(x907%x908));

    if (t193 != 1024U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x913 = 138653U;
	int64_t x914 = -1LL;
	uint64_t x915 = 230359998842597LLU;
	uint32_t x916 = 86164U;

    t194 = ((x913+x914)&(x915%x916));

    if (t194 != 2440LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x917 = -1;
	int8_t x918 = -1;
	static uint8_t x919 = 0U;
	int8_t x920 = INT8_MIN;
	int32_t t195 = -8199;

    t195 = ((x917+x918)&(x919%x920));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x925 = -1;
	int8_t x927 = INT8_MAX;
	int64_t x928 = -1LL;
	int64_t t196 = -43LL;

    t196 = ((x925+x926)&(x927%x928));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x929 = 0;
	int64_t x930 = 1LL;
	volatile int64_t t197 = 13LL;

    t197 = ((x929+x930)&(x931%x932));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x933 = -40;
	int32_t x936 = -9500820;
	uint32_t t198 = 912U;

    t198 = ((x933+x934)&(x935%x936));

    if (t198 != 171608U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x937 = UINT16_MAX;
	static volatile int64_t x938 = -24612LL;
	int32_t x939 = -6823458;
	int64_t t199 = -90274LL;

    t199 = ((x937+x938)&(x939%x940));

    if (t199 != 40922LL) { NG(); } else { ; }
	
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

