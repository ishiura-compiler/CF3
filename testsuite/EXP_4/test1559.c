
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

static int64_t x4 = -586334LL;
static uint8_t x6 = 2U;
static int32_t x7 = INT32_MIN;
static int32_t x15 = INT32_MIN;
static int8_t x19 = INT8_MAX;
volatile uint64_t x25 = UINT64_MAX;
uint16_t x28 = 246U;
uint16_t x29 = UINT16_MAX;
static int16_t x35 = INT16_MIN;
uint32_t x45 = 14592961U;
volatile uint16_t x46 = 2434U;
int32_t x47 = INT32_MAX;
int32_t x49 = INT32_MAX;
static volatile int32_t t12 = -577;
int8_t x55 = -1;
int8_t x58 = -1;
int64_t x68 = -1LL;
int32_t t16 = -3;
volatile uint8_t x80 = 0U;
static int32_t t19 = 122639717;
static int8_t x85 = INT8_MIN;
int16_t x91 = -313;
volatile int32_t x95 = INT32_MIN;
int16_t x96 = 16363;
uint32_t x97 = 7127020U;
static uint32_t x101 = UINT32_MAX;
int8_t x104 = -14;
volatile int16_t x105 = INT16_MAX;
int8_t x107 = -1;
static volatile int32_t t26 = 216036;
static int32_t x117 = 11371070;
uint32_t x119 = 116213378U;
int64_t x120 = -1LL;
static uint64_t t29 = 91224542876LLU;
int64_t x123 = INT64_MAX;
static int64_t x124 = 1715834150730846LL;
int32_t x136 = INT32_MIN;
volatile uint16_t x140 = 2U;
static uint8_t x150 = 29U;
int64_t x159 = INT64_MIN;
static int32_t x166 = -6914;
volatile int8_t x167 = -38;
volatile int8_t x170 = -1;
int64_t x172 = INT64_MIN;
int16_t x173 = INT16_MIN;
volatile int64_t t46 = -238077238565507935LL;
volatile int8_t x189 = -1;
static volatile uint64_t x193 = UINT64_MAX;
int32_t x202 = INT32_MIN;
int8_t x206 = INT8_MAX;
static uint64_t x208 = UINT64_MAX;
volatile int8_t x213 = INT8_MIN;
uint64_t x215 = 624LLU;
int32_t x226 = 45874008;
volatile int8_t x228 = -1;
int32_t x229 = INT32_MIN;
static int64_t x237 = -1661559158229855LL;
uint16_t x238 = 167U;
int8_t x246 = -31;
int32_t t62 = -4;
int16_t x259 = 232;
volatile int16_t x265 = 2115;
static int32_t x268 = INT32_MIN;
int8_t x277 = 1;
volatile int32_t x278 = INT32_MIN;
int64_t x279 = INT64_MIN;
volatile int32_t t69 = -15;
int8_t x289 = INT8_MIN;
int8_t x291 = -1;
volatile uint8_t x294 = 1U;
static volatile int16_t x305 = INT16_MIN;
int16_t x313 = -1;
uint32_t x316 = 698106U;
uint64_t x318 = 213736371LLU;
static int32_t x320 = -1;
static volatile uint64_t x327 = 138376518924LLU;
uint32_t x336 = UINT32_MAX;
volatile int16_t x341 = -1;
int64_t x353 = INT64_MIN;
static uint64_t t87 = 1822546524705LLU;
volatile int16_t x371 = INT16_MIN;
volatile int8_t x373 = -5;
static volatile int32_t x378 = 15518819;
int32_t x387 = INT32_MAX;
static int16_t x392 = 1;
int64_t x397 = -31365241843019927LL;
uint64_t x404 = 9957916LLU;
int32_t x407 = 79;
int8_t x410 = INT8_MAX;
volatile int32_t t100 = -141;
uint32_t x414 = 8U;
volatile uint32_t t101 = 365048589U;
volatile uint16_t x422 = UINT16_MAX;
static int8_t x424 = INT8_MIN;
int64_t x427 = 107166LL;
volatile uint64_t x441 = 854319726577578472LLU;
uint64_t t108 = 14579243609008LLU;
static int64_t x445 = INT64_MAX;
volatile int32_t t110 = -473879472;
int32_t x459 = -1;
static int16_t x460 = INT16_MIN;
volatile int32_t x465 = 420965;
int32_t x466 = -13117;
static volatile int32_t x470 = INT32_MIN;
int64_t x476 = INT64_MAX;
static int64_t x481 = 40108LL;
static volatile uint8_t x483 = 52U;
uint64_t x484 = 1131315105255083LLU;
int16_t x485 = INT16_MIN;
int8_t x489 = INT8_MIN;
uint16_t x492 = 0U;
int16_t x496 = 14;
int32_t t121 = -200487955;
volatile int64_t t123 = 3964403LL;
static volatile int64_t t125 = -2938314520LL;
int64_t x516 = -947113728337425LL;
int32_t x517 = INT32_MAX;
int32_t x522 = 17268;
static uint32_t x529 = 523122U;
volatile int64_t x531 = -29527142LL;
int16_t x542 = INT16_MIN;
int32_t x547 = -1;
int32_t x549 = -1;
int32_t x552 = 104;
int16_t x556 = -1;
volatile int64_t t136 = 0LL;
int64_t x559 = INT64_MAX;
int8_t x560 = INT8_MIN;
static uint64_t x561 = 3LLU;
static int32_t t139 = -79014509;
int32_t t141 = 10;
uint8_t x579 = 31U;
int64_t x580 = -642469837LL;
uint32_t x589 = 12307591U;
volatile uint32_t t145 = 0U;
volatile uint64_t t146 = 879721LLU;
volatile uint16_t x600 = UINT16_MAX;
static int16_t x603 = INT16_MIN;
uint32_t x606 = 7857U;
static int32_t x608 = 1;
static int64_t x609 = INT64_MIN;
static int64_t t150 = -1354640707LL;
volatile int8_t x618 = -1;
static volatile int32_t t153 = -4329;
int32_t x628 = INT32_MIN;
static volatile uint8_t x635 = 10U;
static int64_t x639 = -1LL;
int64_t t157 = 639720932015LL;
int16_t x644 = INT16_MIN;
int32_t x648 = 8418303;
static volatile int32_t t159 = -43396725;
int16_t x654 = -1;
static volatile int64_t t161 = -2183497LL;
static volatile int32_t x666 = 327545358;
int8_t x667 = INT8_MIN;
int32_t t164 = -1052594278;
uint64_t x671 = UINT64_MAX;
volatile int16_t x675 = INT16_MIN;
int32_t t166 = 500235964;
int64_t x679 = INT64_MIN;
static uint8_t x683 = UINT8_MAX;
int8_t x684 = INT8_MIN;
uint16_t x693 = 14U;
static int64_t x700 = 345501713813LL;
uint32_t t173 = 1808458U;
static volatile int32_t t174 = -26149377;
static volatile uint64_t x713 = 7487373LLU;
uint32_t x715 = 1061086559U;
int32_t x717 = INT32_MIN;
int32_t t177 = -56811;
int8_t x722 = INT8_MAX;
int32_t t178 = -98896816;
volatile int32_t x735 = INT32_MIN;
int64_t t180 = -989609LL;
int64_t x738 = 48LL;
uint16_t x739 = 12U;
volatile int64_t x741 = -168364960716870227LL;
uint32_t x744 = 512U;
int16_t x746 = INT16_MIN;
static int32_t x747 = INT32_MIN;
int32_t t183 = -327053364;
int16_t x757 = INT16_MIN;
uint32_t x759 = UINT32_MAX;
static volatile int32_t t186 = 999231;
volatile int16_t x766 = INT16_MAX;
uint64_t x771 = UINT64_MAX;
int16_t x774 = INT16_MIN;
int16_t x777 = -367;
uint64_t x778 = 1LLU;
uint16_t x780 = UINT16_MAX;
static volatile uint64_t t191 = 6305LLU;
volatile int32_t t193 = 1;
int64_t x796 = -5LL;
int32_t t197 = -1;
int16_t x808 = INT16_MAX;
int64_t x811 = INT64_MIN;


void f0(void) {
    	volatile int64_t x1 = -1LL;
	int64_t x2 = -1LL;
	static uint32_t x3 = UINT32_MAX;
	volatile int64_t t0 = -60757433214732587LL;

    t0 = (x1%(x2^(x3==x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -1LL;
	static int64_t x8 = INT64_MIN;
	int64_t t1 = 2050754LL;

    t1 = (x5%(x6^(x7==x8)));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 9;
	uint32_t x10 = UINT32_MAX;
	static uint64_t x11 = UINT64_MAX;
	uint16_t x12 = 3822U;
	uint32_t t2 = 164U;

    t2 = (x9%(x10^(x11==x12)));

    if (t2 != 9U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	int32_t x14 = INT32_MIN;
	uint16_t x16 = 17006U;
	static int32_t t3 = -53;

    t3 = (x13%(x14^(x15==x16)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -705;
	uint8_t x18 = 104U;
	volatile int8_t x20 = -1;
	int32_t t4 = 61;

    t4 = (x17%(x18^(x19==x20)));

    if (t4 != -81) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	volatile int16_t x22 = INT16_MIN;
	int32_t x23 = -2;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = 66981475;

    t5 = (x21%(x22^(x23==x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x26 = INT64_MIN;
	uint8_t x27 = 3U;
	static uint64_t t6 = 2573332168957LLU;

    t6 = (x25%(x26^(x27==x28)));

    if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 14U;
	volatile int64_t x31 = -6416946574253108LL;
	uint16_t x32 = 6U;
	int32_t t7 = -119082;

    t7 = (x29%(x30^(x31==x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	volatile uint32_t x34 = 4178717U;
	uint64_t x36 = UINT64_MAX;
	uint32_t t8 = 304042U;

    t8 = (x33%(x34^(x35==x36)));

    if (t8 != 3424936U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	uint16_t x39 = 11570U;
	static int32_t x40 = 7695;
	volatile int64_t t9 = 15232975880LL;

    t9 = (x37%(x38^(x39==x40)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	int64_t t10 = 575693191077463624LL;

    t10 = (x41%(x42^(x43==x44)));

    if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x48 = INT16_MAX;
	uint32_t t11 = 7U;

    t11 = (x45%(x46^(x47==x48)));

    if (t11 != 1131U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MAX;
	int16_t x51 = 7698;
	static int16_t x52 = INT16_MIN;

    t12 = (x49%(x50^(x51==x52)));

    if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	int32_t x54 = -211279;
	volatile int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 18;

    t13 = (x53%(x54^(x55==x56)));

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = INT16_MIN;
	int32_t x59 = INT32_MAX;
	int8_t x60 = -15;
	int32_t t14 = -7;

    t14 = (x57%(x58^(x59==x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	volatile int32_t x62 = -119378;
	uint16_t x63 = 2U;
	int8_t x64 = -5;
	int32_t t15 = 158;

    t15 = (x61%(x62^(x63==x64)));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 1;
	static volatile int32_t x66 = 9;
	uint16_t x67 = 6794U;

    t16 = (x65%(x66^(x67==x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MIN;
	uint64_t x70 = 208878LLU;
	int16_t x71 = INT16_MAX;
	int8_t x72 = INT8_MAX;
	uint64_t t17 = 9018499296042240666LLU;

    t17 = (x69%(x70^(x71==x72)));

    if (t17 != 22766LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -244428;
	volatile int16_t x74 = -1;
	int64_t x75 = INT64_MIN;
	volatile int8_t x76 = INT8_MAX;
	static int32_t t18 = 292788;

    t18 = (x73%(x74^(x75==x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = UINT8_MAX;

    t19 = (x77%(x78^(x79==x80)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = UINT64_MAX;
	static int32_t x82 = -1;
	volatile uint32_t x83 = UINT32_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile uint64_t t20 = 7013388LLU;

    t20 = (x81%(x82^(x83==x84)));

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x86 = -1;
	volatile int16_t x87 = -8;
	uint32_t x88 = 7180U;
	static volatile int32_t t21 = 42062863;

    t21 = (x85%(x86^(x87==x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 7;

    t22 = (x89%(x90^(x91==x92)));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 504708722043430LLU;
	int8_t x94 = -1;
	uint64_t t23 = 319LLU;

    t23 = (x93%(x94^(x95==x96)));

    if (t23 != 504708722043430LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = -1;
	int16_t x99 = -2;
	int32_t x100 = -1;
	uint32_t t24 = 499067U;

    t24 = (x97%(x98^(x99==x100)));

    if (t24 != 7127020U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = -1;
	static volatile int32_t x103 = 23742751;
	uint32_t t25 = 1U;

    t25 = (x101%(x102^(x103==x104)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = 3229;
	uint32_t x108 = 363U;

    t26 = (x105%(x106^(x107==x108)));

    if (t26 != 477) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	volatile uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = -30;
	volatile int8_t x112 = -7;
	uint64_t t27 = 292722487758LLU;

    t27 = (x109%(x110^(x111==x112)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x113 = 40U;
	int8_t x114 = -1;
	int16_t x115 = -1;
	uint16_t x116 = 7651U;
	static int32_t t28 = 206546;

    t28 = (x113%(x114^(x115==x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = UINT64_MAX;

    t29 = (x117%(x118^(x119==x120)));

    if (t29 != 11371070LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MAX;
	int64_t x122 = INT64_MAX;
	volatile int64_t t30 = -21887999564853LL;

    t30 = (x121%(x122^(x123==x124)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 3124;
	uint16_t x126 = 478U;
	int8_t x127 = -1;
	uint64_t x128 = 10819598075LLU;
	volatile int32_t t31 = -954999;

    t31 = (x125%(x126^(x127==x128)));

    if (t31 != 256) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = -1;
	int64_t x130 = 160650173919133LL;
	volatile int8_t x131 = INT8_MIN;
	volatile int8_t x132 = 0;
	int64_t t32 = 4LL;

    t32 = (x129%(x130^(x131==x132)));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = -1LL;
	uint32_t x135 = UINT32_MAX;
	static volatile int64_t t33 = 53848373625LL;

    t33 = (x133%(x134^(x135==x136)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = 63;
	static int64_t x138 = INT64_MIN;
	uint64_t x139 = UINT64_MAX;
	int64_t t34 = -353LL;

    t34 = (x137%(x138^(x139==x140)));

    if (t34 != 63LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = 1948257772442LL;
	int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t35 = -197624157LL;

    t35 = (x141%(x142^(x143==x144)));

    if (t35 != 1948257772442LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = 241714LLU;
	int16_t x146 = -1;
	int8_t x147 = -1;
	static uint16_t x148 = 134U;
	uint64_t t36 = 71158901111LLU;

    t36 = (x145%(x146^(x147==x148)));

    if (t36 != 241714LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -52;
	static uint32_t x151 = UINT32_MAX;
	int8_t x152 = -1;
	int32_t t37 = 0;

    t37 = (x149%(x150^(x151==x152)));

    if (t37 != -24) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	static volatile uint32_t x154 = UINT32_MAX;
	volatile uint8_t x155 = 114U;
	uint8_t x156 = 3U;
	volatile uint32_t t38 = 5U;

    t38 = (x153%(x154^(x155==x156)));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 31U;
	int32_t x158 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	static int32_t t39 = -54890;

    t39 = (x157%(x158^(x159==x160)));

    if (t39 != 31) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MAX;
	int32_t x162 = -5169;
	static int8_t x163 = -1;
	uint8_t x164 = 17U;
	static int32_t t40 = -1;

    t40 = (x161%(x162^(x163==x164)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -52;
	uint64_t x168 = 110281998870LLU;
	static int32_t t41 = -57848984;

    t41 = (x165%(x166^(x167==x168)));

    if (t41 != -52) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MAX;
	int8_t x171 = INT8_MAX;
	volatile int32_t t42 = 0;

    t42 = (x169%(x170^(x171==x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x174 = -1;
	volatile int32_t x175 = -1;
	uint16_t x176 = UINT16_MAX;
	static volatile int32_t t43 = 36167;

    t43 = (x173%(x174^(x175==x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1716;
	int8_t x178 = INT8_MIN;
	int16_t x179 = 28;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = -1409622;

    t44 = (x177%(x178^(x179==x180)));

    if (t44 != -52) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	static int64_t x183 = -62203200LL;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = 22;

    t45 = (x181%(x182^(x183==x184)));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MAX;
	static volatile int32_t x187 = 732593;
	uint32_t x188 = 24U;

    t46 = (x185%(x186^(x187==x188)));

    if (t46 != 255LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -1LL;
	volatile uint8_t x191 = 1U;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t47 = 0LL;

    t47 = (x189%(x190^(x191==x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = 124U;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t48 = 22275LLU;

    t48 = (x193%(x194^(x195==x196)));

    if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -2127291457903LL;
	int16_t x198 = INT16_MAX;
	uint32_t x199 = 181964U;
	static volatile int8_t x200 = 0;
	int64_t t49 = -15336LL;

    t49 = (x197%(x198^(x199==x200)));

    if (t49 != -16915LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 5;
	int64_t x203 = -39848LL;
	uint64_t x204 = 186514531430012LLU;
	volatile int32_t t50 = 15848449;

    t50 = (x201%(x202^(x203==x204)));

    if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	static volatile int8_t x207 = INT8_MIN;
	volatile int64_t t51 = -4751621695126LL;

    t51 = (x205%(x206^(x207==x208)));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MAX;
	int16_t x211 = -1;
	volatile uint64_t x212 = 7736937125780LLU;
	uint32_t t52 = 376869126U;

    t52 = (x209%(x210^(x211==x212)));

    if (t52 != 15U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = INT64_MAX;
	volatile int64_t x216 = -1LL;
	int64_t t53 = -974762277540LL;

    t53 = (x213%(x214^(x215==x216)));

    if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = 1U;
	int8_t x220 = INT8_MAX;
	int32_t t54 = 29863849;

    t54 = (x217%(x218^(x219==x220)));

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = INT64_MAX;
	uint16_t x222 = 24U;
	int16_t x223 = INT16_MIN;
	volatile uint16_t x224 = 32756U;
	volatile int64_t t55 = 6260LL;

    t55 = (x221%(x222^(x223==x224)));

    if (t55 != 7LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	uint32_t x227 = 6098281U;
	static uint32_t t56 = 2U;

    t56 = (x225%(x226^(x227==x228)));

    if (t56 != 28684551U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = 323754LL;
	uint16_t x231 = 6457U;
	int8_t x232 = 0;
	volatile int64_t t57 = 1LL;

    t57 = (x229%(x230^(x231==x232)));

    if (t57 != -23366LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x233 = UINT8_MAX;
	int32_t x234 = INT32_MAX;
	volatile uint8_t x235 = 3U;
	int8_t x236 = -31;
	volatile int32_t t58 = -2034;

    t58 = (x233%(x234^(x235==x236)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x239 = INT32_MIN;
	static int32_t x240 = -3031;
	int64_t t59 = 11054145825583LL;

    t59 = (x237%(x238^(x239==x240)));

    if (t59 != -87LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	int64_t x242 = INT64_MIN;
	static int16_t x243 = INT16_MAX;
	uint8_t x244 = 0U;
	volatile int64_t t60 = 222039LL;

    t60 = (x241%(x242^(x243==x244)));

    if (t60 != 255LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -241900;
	static uint32_t x247 = 1465351U;
	int8_t x248 = 1;
	int32_t t61 = 97821107;

    t61 = (x245%(x246^(x247==x248)));

    if (t61 != -7) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MAX;
	volatile int8_t x250 = INT8_MAX;
	volatile int32_t x251 = INT32_MIN;
	int32_t x252 = -1;

    t62 = (x249%(x250^(x251==x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 9264U;
	volatile uint32_t x256 = 863518045U;
	int64_t t63 = -700295559182638084LL;

    t63 = (x253%(x254^(x255==x256)));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = -2;
	int16_t x258 = INT16_MIN;
	int16_t x260 = 9608;
	volatile int32_t t64 = 1;

    t64 = (x257%(x258^(x259==x260)));

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x261 = 3463U;
	static int8_t x262 = INT8_MIN;
	static volatile int16_t x263 = -1;
	int8_t x264 = -1;
	int32_t t65 = -569;

    t65 = (x261%(x262^(x263==x264)));

    if (t65 != 34) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x266 = 12866033391LLU;
	int8_t x267 = -1;
	volatile uint64_t t66 = 87473599LLU;

    t66 = (x265%(x266^(x267==x268)));

    if (t66 != 2115LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 24106282LL;
	uint16_t x270 = 3U;
	int16_t x271 = -1;
	int32_t x272 = 2678;
	static volatile int64_t t67 = -124532096LL;

    t67 = (x269%(x270^(x271==x272)));

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = -1LL;
	volatile uint16_t x274 = 1U;
	volatile uint8_t x275 = 68U;
	int16_t x276 = 1;
	volatile int64_t t68 = 386932777406331LL;

    t68 = (x273%(x274^(x275==x276)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x280 = INT16_MIN;

    t69 = (x277%(x278^(x279==x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	int32_t x282 = 93;
	uint16_t x283 = UINT16_MAX;
	uint64_t x284 = 188LLU;
	volatile int64_t t70 = -1LL;

    t70 = (x281%(x282^(x283==x284)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x290 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;
	int32_t t71 = 1014763637;

    t71 = (x289%(x290^(x291==x292)));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x293 = UINT32_MAX;
	static int8_t x295 = INT8_MIN;
	int32_t x296 = 34683;
	volatile uint32_t t72 = 6U;

    t72 = (x293%(x294^(x295==x296)));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = 120LL;
	int16_t x299 = -1;
	uint64_t x300 = 1773693981687964LLU;
	static uint64_t t73 = 26664423706120495LLU;

    t73 = (x297%(x298^(x299==x300)));

    if (t73 != 15LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x301 = UINT16_MAX;
	int16_t x302 = INT16_MIN;
	static int64_t x303 = 5476998LL;
	uint32_t x304 = 38525U;
	volatile int32_t t74 = -779026477;

    t74 = (x301%(x302^(x303==x304)));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x306 = INT16_MIN;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = -439004607;
	static int32_t t75 = 1;

    t75 = (x305%(x306^(x307==x308)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = 783033696U;
	uint32_t x310 = 14U;
	volatile int32_t x311 = -8123;
	uint64_t x312 = 418775044075LLU;
	uint32_t t76 = 60U;

    t76 = (x309%(x310^(x311==x312)));

    if (t76 != 4U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	volatile int32_t t77 = 41051801;

    t77 = (x313%(x314^(x315==x316)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x317 = INT16_MIN;
	static uint8_t x319 = 3U;
	static uint64_t t78 = 68486138370763236LLU;

    t78 = (x317%(x318^(x319==x320)));

    if (t78 != 108394733LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = UINT8_MAX;
	uint16_t x322 = 0U;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = -1;
	volatile int32_t t79 = -105483;

    t79 = (x321%(x322^(x323==x324)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x325 = -1LL;
	uint16_t x326 = 29645U;
	uint32_t x328 = 4722U;
	volatile int64_t t80 = -273729766040685881LL;

    t80 = (x325%(x326^(x327==x328)));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x329 = 7760902886886LLU;
	static volatile uint16_t x330 = UINT16_MAX;
	static int32_t x331 = -12112;
	int16_t x332 = -1;
	uint64_t t81 = 3LLU;

    t81 = (x329%(x330^(x331==x332)));

    if (t81 != 5841LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = INT8_MAX;
	int16_t x334 = -1;
	volatile int16_t x335 = INT16_MIN;
	int32_t t82 = -3;

    t82 = (x333%(x334^(x335==x336)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x337 = 6462768U;
	uint64_t x338 = UINT64_MAX;
	volatile uint16_t x339 = 356U;
	static int8_t x340 = -1;
	uint64_t t83 = 126574LLU;

    t83 = (x337%(x338^(x339==x340)));

    if (t83 != 6462768LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x342 = INT32_MIN;
	int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t84 = 374998;

    t84 = (x341%(x342^(x343==x344)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x345 = 2U;
	int64_t x346 = 218301128671LL;
	uint32_t x347 = 952256U;
	int8_t x348 = INT8_MAX;
	volatile int64_t t85 = 432670838LL;

    t85 = (x345%(x346^(x347==x348)));

    if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x349 = UINT32_MAX;
	int32_t x350 = 1;
	volatile int8_t x351 = INT8_MIN;
	uint8_t x352 = 30U;
	volatile uint32_t t86 = 250U;

    t86 = (x349%(x350^(x351==x352)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x354 = 67237858LLU;
	int64_t x355 = 436216306476410260LL;
	int32_t x356 = INT32_MAX;

    t87 = (x353%(x354^(x355==x356)));

    if (t87 != 39340310LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x357 = 102685909920LL;
	int64_t x358 = 66129351LL;
	static volatile uint8_t x359 = 125U;
	int8_t x360 = INT8_MIN;
	int64_t t88 = -84LL;

    t88 = (x357%(x358^(x359==x360)));

    if (t88 != 53157168LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x365 = 12020U;
	static int8_t x366 = INT8_MAX;
	volatile uint32_t x367 = 17232719U;
	int8_t x368 = 0;
	volatile int32_t t89 = -1;

    t89 = (x365%(x366^(x367==x368)));

    if (t89 != 82) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = INT16_MIN;
	int64_t x370 = -1LL;
	static volatile uint16_t x372 = UINT16_MAX;
	int64_t t90 = -1109521805040LL;

    t90 = (x369%(x370^(x371==x372)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x374 = 21U;
	int8_t x375 = INT8_MIN;
	static volatile int32_t x376 = -42899;
	volatile int32_t t91 = 8662;

    t91 = (x373%(x374^(x375==x376)));

    if (t91 != -5) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x377 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	static int32_t x380 = 83;
	int32_t t92 = 159331367;

    t92 = (x377%(x378^(x379==x380)));

    if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = 1247691219018646LL;
	static int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MAX;
	uint16_t x384 = 4280U;
	volatile int64_t t93 = 130830281LL;

    t93 = (x381%(x382^(x383==x384)));

    if (t93 != 22LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x385 = 1;
	volatile uint16_t x386 = 272U;
	static int16_t x388 = 0;
	int32_t t94 = -10923;

    t94 = (x385%(x386^(x387==x388)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x389 = 60370;
	static int8_t x390 = INT8_MIN;
	volatile int16_t x391 = INT16_MAX;
	int32_t t95 = -1332878;

    t95 = (x389%(x390^(x391==x392)));

    if (t95 != 82) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -12;
	volatile int64_t x394 = -88674422LL;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = 101U;
	int64_t t96 = -3154LL;

    t96 = (x393%(x394^(x395==x396)));

    if (t96 != -12LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x398 = 109U;
	int32_t x399 = -2032;
	int8_t x400 = -1;
	volatile int64_t t97 = -21158733082856477LL;

    t97 = (x397%(x398^(x399==x400)));

    if (t97 != -80LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = -951419134;
	int16_t x402 = INT16_MAX;
	static uint32_t x403 = 1U;
	int32_t t98 = 4;

    t98 = (x401%(x402^(x403==x404)));

    if (t98 != -29289) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x405 = 4041;
	static int64_t x406 = INT64_MAX;
	uint32_t x408 = 195U;
	static volatile int64_t t99 = 15098803627LL;

    t99 = (x405%(x406^(x407==x408)));

    if (t99 != 4041LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x409 = -1;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = 884565380743LL;

    t100 = (x409%(x410^(x411==x412)));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x413 = UINT32_MAX;
	int64_t x415 = -1LL;
	static uint8_t x416 = UINT8_MAX;

    t101 = (x413%(x414^(x415==x416)));

    if (t101 != 7U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x417 = INT16_MIN;
	int32_t x418 = 8691;
	int32_t x419 = INT32_MAX;
	uint32_t x420 = 369U;
	int32_t t102 = -126898;

    t102 = (x417%(x418^(x419==x420)));

    if (t102 != -6695) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x421 = 50496617582LLU;
	volatile int32_t x423 = -1;
	volatile uint64_t t103 = 0LLU;

    t103 = (x421%(x422^(x423==x424)));

    if (t103 != 65102LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = 0;
	uint64_t x426 = 8353119280LLU;
	int64_t x428 = -1LL;
	volatile uint64_t t104 = 1866178155910LLU;

    t104 = (x425%(x426^(x427==x428)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x429 = 1U;
	uint32_t x430 = 1153432U;
	volatile uint32_t x431 = UINT32_MAX;
	int32_t x432 = -1;
	volatile uint32_t t105 = 15U;

    t105 = (x429%(x430^(x431==x432)));

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MIN;
	volatile int8_t x434 = -1;
	int8_t x435 = -1;
	int64_t x436 = INT64_MIN;
	static volatile int32_t t106 = 0;

    t106 = (x433%(x434^(x435==x436)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x437 = INT64_MIN;
	volatile int32_t x438 = INT32_MIN;
	static int16_t x439 = -1;
	int8_t x440 = INT8_MIN;
	int64_t t107 = -236032LL;

    t107 = (x437%(x438^(x439==x440)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x442 = 47;
	int8_t x443 = INT8_MIN;
	static uint8_t x444 = 119U;

    t108 = (x441%(x442^(x443==x444)));

    if (t108 != 14LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x446 = -4272;
	int8_t x447 = INT8_MIN;
	int32_t x448 = -1;
	volatile int64_t t109 = -1881454LL;

    t109 = (x445%(x446^(x447==x448)));

    if (t109 != 3103LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = 4;
	int32_t x450 = -805;
	volatile uint8_t x451 = UINT8_MAX;
	int8_t x452 = -1;

    t110 = (x449%(x450^(x451==x452)));

    if (t110 != 4) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = INT32_MAX;
	uint64_t x454 = 4285309085581930121LLU;
	static int32_t x455 = INT32_MIN;
	int16_t x456 = INT16_MAX;
	static uint64_t t111 = 55LLU;

    t111 = (x453%(x454^(x455==x456)));

    if (t111 != 2147483647LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x457 = INT16_MAX;
	static uint32_t x458 = 4018U;
	volatile uint32_t t112 = 3998U;

    t112 = (x457%(x458^(x459==x460)));

    if (t112 != 623U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = INT16_MAX;
	uint32_t x462 = 467329U;
	int8_t x463 = INT8_MAX;
	volatile uint32_t x464 = UINT32_MAX;
	uint32_t t113 = 377354835U;

    t113 = (x461%(x462^(x463==x464)));

    if (t113 != 32767U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x467 = -2734540747764266LL;
	int8_t x468 = INT8_MIN;
	volatile int32_t t114 = -17891680;

    t114 = (x465%(x466^(x467==x468)));

    if (t114 != 1221) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x469 = 57U;
	static int32_t x471 = -1;
	int32_t x472 = 3392885;
	int32_t t115 = -168594040;

    t115 = (x469%(x470^(x471==x472)));

    if (t115 != 57) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x473 = UINT32_MAX;
	volatile uint32_t x474 = 1487U;
	int8_t x475 = INT8_MAX;
	static volatile uint32_t t116 = 1U;

    t116 = (x473%(x474^(x475==x476)));

    if (t116 != 1254U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = INT8_MIN;
	int16_t x478 = INT16_MAX;
	uint16_t x479 = 184U;
	int16_t x480 = INT16_MIN;
	int32_t t117 = 2747959;

    t117 = (x477%(x478^(x479==x480)));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x482 = 69493723035366LLU;
	volatile uint64_t t118 = 20623LLU;

    t118 = (x481%(x482^(x483==x484)));

    if (t118 != 40108LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x486 = 120U;
	int8_t x487 = INT8_MIN;
	volatile uint8_t x488 = 1U;
	volatile int32_t t119 = 758;

    t119 = (x485%(x486^(x487==x488)));

    if (t119 != -8) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x490 = 184429104LLU;
	int32_t x491 = -1;
	volatile uint64_t t120 = 146LLU;

    t120 = (x489%(x490^(x491==x492)));

    if (t120 != 146860064LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x493 = 12;
	volatile uint8_t x494 = 16U;
	uint32_t x495 = 14848753U;

    t121 = (x493%(x494^(x495==x496)));

    if (t121 != 12) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x497 = 11975U;
	static int32_t x498 = INT32_MIN;
	int64_t x499 = -1LL;
	int8_t x500 = -11;
	volatile int32_t t122 = -201042;

    t122 = (x497%(x498^(x499==x500)));

    if (t122 != 11975) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x501 = INT64_MIN;
	int64_t x502 = INT64_MAX;
	uint16_t x503 = UINT16_MAX;
	volatile int8_t x504 = -1;

    t123 = (x501%(x502^(x503==x504)));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x505 = 2083U;
	uint16_t x506 = 23916U;
	static uint64_t x507 = UINT64_MAX;
	volatile uint8_t x508 = UINT8_MAX;
	volatile int32_t t124 = -8474;

    t124 = (x505%(x506^(x507==x508)));

    if (t124 != 2083) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x510 = 3061459;
	static int64_t x511 = INT64_MAX;
	volatile uint8_t x512 = 45U;

    t125 = (x509%(x510^(x511==x512)));

    if (t125 != 2793642LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MAX;
	static int16_t x515 = INT16_MIN;
	static int64_t t126 = -93517303LL;

    t126 = (x513%(x514^(x515==x516)));

    if (t126 != -8LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x518 = -1;
	volatile int16_t x519 = INT16_MIN;
	int32_t x520 = INT32_MIN;
	volatile int32_t t127 = 1;

    t127 = (x517%(x518^(x519==x520)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x521 = UINT16_MAX;
	volatile int8_t x523 = -1;
	static uint32_t x524 = UINT32_MAX;
	volatile int32_t t128 = -30914;

    t128 = (x521%(x522^(x523==x524)));

    if (t128 != 13728) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x525 = -1;
	volatile int64_t x526 = INT64_MIN;
	int16_t x527 = -5;
	int8_t x528 = INT8_MIN;
	int64_t t129 = 2213LL;

    t129 = (x525%(x526^(x527==x528)));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x530 = 38U;
	volatile int64_t x532 = INT64_MAX;
	uint32_t t130 = 1746321U;

    t130 = (x529%(x530^(x531==x532)));

    if (t130 != 14U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x533 = -1;
	static uint32_t x534 = UINT32_MAX;
	int64_t x535 = -1LL;
	uint8_t x536 = 1U;
	volatile uint32_t t131 = 5U;

    t131 = (x533%(x534^(x535==x536)));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x537 = 2484U;
	volatile uint16_t x538 = 262U;
	int32_t x539 = INT32_MIN;
	int64_t x540 = 3536LL;
	volatile int32_t t132 = -824084;

    t132 = (x537%(x538^(x539==x540)));

    if (t132 != 126) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x541 = 12270U;
	volatile int64_t x543 = INT64_MAX;
	uint32_t x544 = 7U;
	static volatile int32_t t133 = -1552;

    t133 = (x541%(x542^(x543==x544)));

    if (t133 != 12270) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x545 = INT8_MIN;
	int64_t x546 = -44665159201475LL;
	int16_t x548 = INT16_MAX;
	static int64_t t134 = -10321838930369LL;

    t134 = (x545%(x546^(x547==x548)));

    if (t134 != -128LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x550 = -1;
	uint64_t x551 = 280LLU;
	static int32_t t135 = -1991;

    t135 = (x549%(x550^(x551==x552)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x553 = 378884LL;
	static uint8_t x554 = 42U;
	uint32_t x555 = 8530252U;

    t136 = (x553%(x554^(x555==x556)));

    if (t136 != 2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x557 = INT32_MIN;
	static uint32_t x558 = 53462U;
	uint32_t t137 = 1544109U;

    t137 = (x557%(x558^(x559==x560)));

    if (t137 != 22032U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x562 = 106U;
	volatile int8_t x563 = INT8_MIN;
	uint32_t x564 = 436327U;
	volatile uint64_t t138 = 3754890LLU;

    t138 = (x561%(x562^(x563==x564)));

    if (t138 != 3LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x565 = -29;
	int16_t x566 = INT16_MIN;
	volatile int8_t x567 = INT8_MAX;
	uint64_t x568 = 74LLU;

    t139 = (x565%(x566^(x567==x568)));

    if (t139 != -29) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x569 = 53;
	uint32_t x570 = UINT32_MAX;
	int16_t x571 = INT16_MIN;
	static uint8_t x572 = UINT8_MAX;
	volatile uint32_t t140 = 18642501U;

    t140 = (x569%(x570^(x571==x572)));

    if (t140 != 53U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x573 = -1;
	int32_t x574 = -1;
	int64_t x575 = 12LL;
	uint32_t x576 = 1101U;

    t141 = (x573%(x574^(x575==x576)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x577 = INT64_MAX;
	static uint8_t x578 = 20U;
	static int64_t t142 = -1017LL;

    t142 = (x577%(x578^(x579==x580)));

    if (t142 != 7LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x581 = INT32_MIN;
	uint16_t x582 = UINT16_MAX;
	volatile int32_t x583 = 1355;
	uint16_t x584 = 24U;
	int32_t t143 = -97;

    t143 = (x581%(x582^(x583==x584)));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x585 = 12369737LL;
	uint64_t x586 = 44419237390656759LLU;
	int16_t x587 = INT16_MIN;
	int16_t x588 = INT16_MAX;
	volatile uint64_t t144 = 44636107LLU;

    t144 = (x585%(x586^(x587==x588)));

    if (t144 != 12369737LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x590 = INT8_MAX;
	volatile int8_t x591 = INT8_MIN;
	uint16_t x592 = UINT16_MAX;

    t145 = (x589%(x590^(x591==x592)));

    if (t145 != 21U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x593 = UINT64_MAX;
	static uint64_t x594 = 55769LLU;
	int16_t x595 = 319;
	uint8_t x596 = 5U;

    t146 = (x593%(x594^(x595==x596)));

    if (t146 != 34952LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x597 = -1;
	int16_t x598 = INT16_MAX;
	int64_t x599 = 508975LL;
	int32_t t147 = -26263696;

    t147 = (x597%(x598^(x599==x600)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x602 = -1;
	uint32_t x604 = 64843U;
	static volatile int32_t t148 = -841;

    t148 = (x601%(x602^(x603==x604)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x605 = 24;
	int64_t x607 = INT64_MIN;
	volatile uint32_t t149 = 595305058U;

    t149 = (x605%(x606^(x607==x608)));

    if (t149 != 24U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x610 = -1;
	int32_t x611 = INT32_MAX;
	volatile int16_t x612 = -1;

    t150 = (x609%(x610^(x611==x612)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x613 = INT8_MAX;
	static uint16_t x614 = 3U;
	volatile int32_t x615 = INT32_MIN;
	uint32_t x616 = 27730436U;
	volatile int32_t t151 = -39;

    t151 = (x613%(x614^(x615==x616)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x617 = INT8_MIN;
	int16_t x619 = -1;
	int64_t x620 = 1LL;
	static volatile int32_t t152 = -151010;

    t152 = (x617%(x618^(x619==x620)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x621 = 4U;
	int32_t x622 = INT32_MIN;
	uint32_t x623 = UINT32_MAX;
	int8_t x624 = INT8_MIN;

    t153 = (x621%(x622^(x623==x624)));

    if (t153 != 4) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x625 = -123668043933LL;
	static uint8_t x626 = UINT8_MAX;
	int16_t x627 = INT16_MIN;
	int64_t t154 = -11496LL;

    t154 = (x625%(x626^(x627==x628)));

    if (t154 != -78LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x629 = 2666690943779918LL;
	int16_t x630 = INT16_MIN;
	static volatile uint32_t x631 = 35241U;
	uint8_t x632 = UINT8_MAX;
	int64_t t155 = -3068598286829407LL;

    t155 = (x629%(x630^(x631==x632)));

    if (t155 != 1102LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x633 = -1;
	static int32_t x634 = 3;
	int32_t x636 = 15;
	volatile int32_t t156 = 3545;

    t156 = (x633%(x634^(x635==x636)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x637 = INT8_MIN;
	int64_t x638 = INT64_MIN;
	int8_t x640 = INT8_MIN;

    t157 = (x637%(x638^(x639==x640)));

    if (t157 != -128LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x641 = INT32_MIN;
	int8_t x642 = INT8_MIN;
	static int16_t x643 = -1;
	volatile int32_t t158 = 5587;

    t158 = (x641%(x642^(x643==x644)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x645 = 513363;
	int16_t x646 = INT16_MIN;
	int64_t x647 = 901269532LL;

    t159 = (x645%(x646^(x647==x648)));

    if (t159 != 21843) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x649 = INT16_MIN;
	int64_t x650 = INT64_MIN;
	static int64_t x651 = INT64_MAX;
	int8_t x652 = 3;
	volatile int64_t t160 = -21639711078LL;

    t160 = (x649%(x650^(x651==x652)));

    if (t160 != -32768LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x653 = INT64_MIN;
	uint32_t x655 = 70U;
	uint8_t x656 = 42U;

    t161 = (x653%(x654^(x655==x656)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x657 = INT8_MIN;
	uint32_t x658 = 7165944U;
	int16_t x659 = -43;
	int16_t x660 = INT16_MIN;
	static volatile uint32_t t162 = 2038133248U;

    t162 = (x657%(x658^(x659==x660)));

    if (t162 != 2566712U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x661 = INT32_MIN;
	static uint8_t x662 = UINT8_MAX;
	int64_t x663 = 46LL;
	int64_t x664 = INT64_MIN;
	int32_t t163 = 482167110;

    t163 = (x661%(x662^(x663==x664)));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x665 = -1;
	volatile uint8_t x668 = 4U;

    t164 = (x665%(x666^(x667==x668)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x669 = INT16_MAX;
	volatile int16_t x670 = INT16_MIN;
	int8_t x672 = -1;
	static volatile int32_t t165 = -94;

    t165 = (x669%(x670^(x671==x672)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x674 = INT8_MIN;
	static uint32_t x676 = 26805415U;

    t166 = (x673%(x674^(x675==x676)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x677 = INT16_MIN;
	int8_t x678 = 1;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t167 = 2973;

    t167 = (x677%(x678^(x679==x680)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x681 = 1712535165876299LLU;
	uint16_t x682 = 13277U;
	volatile uint64_t t168 = 397715LLU;

    t168 = (x681%(x682^(x683==x684)));

    if (t168 != 677LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x685 = 24;
	int8_t x686 = INT8_MIN;
	int64_t x687 = INT64_MIN;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t169 = 760;

    t169 = (x685%(x686^(x687==x688)));

    if (t169 != 24) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x689 = -3915;
	int16_t x690 = -1;
	volatile uint8_t x691 = UINT8_MAX;
	volatile int8_t x692 = 14;
	int32_t t170 = 267267;

    t170 = (x689%(x690^(x691==x692)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x694 = UINT8_MAX;
	int32_t x695 = -4;
	uint16_t x696 = UINT16_MAX;
	int32_t t171 = -1980053;

    t171 = (x693%(x694^(x695==x696)));

    if (t171 != 14) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x697 = UINT16_MAX;
	int8_t x698 = INT8_MAX;
	static int64_t x699 = -1LL;
	int32_t t172 = -3487;

    t172 = (x697%(x698^(x699==x700)));

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x701 = 11515U;
	uint32_t x702 = UINT32_MAX;
	uint8_t x703 = 2U;
	static uint64_t x704 = 23877800935631LLU;

    t173 = (x701%(x702^(x703==x704)));

    if (t173 != 11515U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x706 = 448494;
	uint8_t x707 = UINT8_MAX;
	int32_t x708 = INT32_MIN;

    t174 = (x705%(x706^(x707==x708)));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x709 = 7482737299LLU;
	int8_t x710 = -12;
	int64_t x711 = INT64_MAX;
	static int16_t x712 = INT16_MIN;
	static uint64_t t175 = 60863098LLU;

    t175 = (x709%(x710^(x711==x712)));

    if (t175 != 7482737299LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x714 = INT32_MIN;
	int8_t x716 = INT8_MAX;
	uint64_t t176 = 922897899LLU;

    t176 = (x713%(x714^(x715==x716)));

    if (t176 != 7487373LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x718 = INT16_MAX;
	uint64_t x719 = 313994280175LLU;
	int32_t x720 = INT32_MAX;

    t177 = (x717%(x718^(x719==x720)));

    if (t177 != -2) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x721 = 6376U;
	int16_t x723 = -3;
	static int64_t x724 = INT64_MIN;

    t178 = (x721%(x722^(x723==x724)));

    if (t178 != 26) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = INT64_MIN;
	static int32_t x726 = 7901;
	static uint32_t x727 = UINT32_MAX;
	int16_t x728 = 6;
	int64_t t179 = 20LL;

    t179 = (x725%(x726^(x727==x728)));

    if (t179 != -7487LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x733 = INT64_MIN;
	int16_t x734 = INT16_MIN;
	int8_t x736 = -1;

    t180 = (x733%(x734^(x735==x736)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x737 = 1;
	volatile int16_t x740 = -1509;
	int64_t t181 = 704361626154014232LL;

    t181 = (x737%(x738^(x739==x740)));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x742 = UINT32_MAX;
	static int16_t x743 = -1;
	volatile int64_t t182 = 355104794670612LL;

    t182 = (x741%(x742^(x743==x744)));

    if (t182 != -779942237LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x745 = INT8_MIN;
	int64_t x748 = INT64_MAX;

    t183 = (x745%(x746^(x747==x748)));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x749 = INT64_MIN;
	volatile int64_t x750 = INT64_MIN;
	volatile int32_t x751 = -1;
	uint8_t x752 = 15U;
	int64_t t184 = 1067056766928265273LL;

    t184 = (x749%(x750^(x751==x752)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x753 = INT8_MIN;
	int8_t x754 = -23;
	uint32_t x755 = 9544479U;
	volatile uint32_t x756 = UINT32_MAX;
	static int32_t t185 = -1;

    t185 = (x753%(x754^(x755==x756)));

    if (t185 != -13) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x758 = 20U;
	volatile int8_t x760 = INT8_MIN;

    t186 = (x757%(x758^(x759==x760)));

    if (t186 != -8) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x761 = UINT8_MAX;
	int8_t x762 = INT8_MIN;
	uint32_t x763 = 1340184U;
	static uint8_t x764 = 47U;
	volatile int32_t t187 = 38676;

    t187 = (x761%(x762^(x763==x764)));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x767 = INT64_MAX;
	int32_t x768 = INT32_MAX;
	int32_t t188 = 696559089;

    t188 = (x765%(x766^(x767==x768)));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x769 = INT64_MIN;
	int16_t x770 = -1;
	int16_t x772 = -1;
	static volatile int64_t t189 = 17103890LL;

    t189 = (x769%(x770^(x771==x772)));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x773 = 1U;
	uint8_t x775 = 56U;
	int32_t x776 = INT32_MAX;
	int32_t t190 = 98226;

    t190 = (x773%(x774^(x775==x776)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x779 = INT64_MIN;

    t191 = (x777%(x778^(x779==x780)));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x781 = -6;
	uint64_t x782 = 1140603950876LLU;
	static uint16_t x783 = 9U;
	volatile int16_t x784 = INT16_MAX;
	static volatile uint64_t t192 = 29944684055722LLU;

    t192 = (x781%(x782^(x783==x784)));

    if (t192 != 465437491074LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x785 = 30;
	volatile int8_t x786 = INT8_MIN;
	volatile int64_t x787 = INT64_MIN;
	uint64_t x788 = UINT64_MAX;

    t193 = (x785%(x786^(x787==x788)));

    if (t193 != 30) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x789 = INT8_MIN;
	int16_t x790 = 629;
	static int32_t x791 = INT32_MIN;
	volatile int64_t x792 = INT64_MIN;
	volatile int32_t t194 = 414840;

    t194 = (x789%(x790^(x791==x792)));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x793 = 3193475174LL;
	uint8_t x794 = 26U;
	uint32_t x795 = 7151U;
	int64_t t195 = 338077195747710LL;

    t195 = (x793%(x794^(x795==x796)));

    if (t195 != 6LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = 22059885U;
	uint32_t x798 = 96U;
	volatile uint16_t x799 = 0U;
	uint64_t x800 = 49LLU;
	volatile uint32_t t196 = 584073037U;

    t196 = (x797%(x798^(x799==x800)));

    if (t196 != 45U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x801 = 473U;
	uint16_t x802 = 29854U;
	uint32_t x803 = 668U;
	int64_t x804 = INT64_MAX;

    t197 = (x801%(x802^(x803==x804)));

    if (t197 != 473) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x805 = 857U;
	volatile uint32_t x806 = UINT32_MAX;
	int32_t x807 = 19120;
	uint32_t t198 = 674U;

    t198 = (x805%(x806^(x807==x808)));

    if (t198 != 857U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x809 = 15;
	static int16_t x810 = INT16_MIN;
	static uint32_t x812 = UINT32_MAX;
	volatile int32_t t199 = 10;

    t199 = (x809%(x810^(x811==x812)));

    if (t199 != 15) { NG(); } else { ; }
	
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

