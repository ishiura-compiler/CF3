
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

static uint32_t x2 = UINT32_MAX;
static int8_t x6 = -1;
static int16_t x7 = -3;
int16_t x8 = -1;
uint8_t x10 = 3U;
int64_t x11 = INT64_MIN;
volatile int32_t t3 = -9;
uint8_t x19 = UINT8_MAX;
volatile int16_t x20 = 21;
volatile int8_t x22 = INT8_MIN;
int64_t x26 = -271LL;
static int32_t x28 = -1;
int16_t x34 = INT16_MIN;
int64_t x41 = 3787578593609LL;
int16_t x48 = INT16_MIN;
volatile int16_t x53 = INT16_MAX;
int8_t x55 = INT8_MAX;
int32_t x60 = 377;
int32_t x67 = INT32_MIN;
uint8_t x68 = 13U;
int32_t x72 = INT32_MIN;
volatile int32_t x73 = -910;
int32_t t17 = -5;
int32_t t18 = -6185;
int64_t x81 = INT64_MIN;
int16_t x82 = INT16_MIN;
volatile int64_t x83 = -1533LL;
int32_t x88 = 51561;
static volatile uint32_t x90 = UINT32_MAX;
int8_t x91 = INT8_MIN;
uint16_t x92 = UINT16_MAX;
static volatile int64_t x94 = 327580LL;
int32_t t22 = 36;
int8_t x98 = INT8_MAX;
volatile int16_t x103 = -1;
uint64_t x104 = 405582LLU;
volatile uint32_t x114 = UINT32_MAX;
int32_t t27 = 198354;
int32_t x125 = -1;
static uint32_t x127 = 140079317U;
int32_t x131 = 1;
int8_t x133 = -1;
int32_t x134 = INT32_MIN;
volatile int8_t x138 = -1;
static int32_t t31 = 101;
int64_t x148 = 15566349855LL;
uint32_t x149 = 448240228U;
int16_t x150 = INT16_MIN;
static int16_t x158 = 38;
int64_t x167 = INT64_MIN;
int8_t x168 = INT8_MAX;
uint16_t x171 = UINT16_MAX;
int16_t x176 = 25;
int64_t x179 = -161307721LL;
int32_t x194 = 286351;
static int64_t x196 = 1389220041394503788LL;
static int32_t t49 = 0;
uint16_t x219 = 937U;
int32_t t50 = 124023593;
int64_t x227 = INT64_MIN;
uint32_t x231 = 258159U;
volatile uint16_t x235 = UINT16_MAX;
int64_t x243 = -4537LL;
volatile int16_t x249 = INT16_MIN;
uint32_t x254 = UINT32_MAX;
int16_t x259 = INT16_MAX;
static uint8_t x260 = UINT8_MAX;
volatile int32_t t59 = -439;
int16_t x262 = INT16_MAX;
int32_t t61 = -9099;
volatile int32_t t62 = 5361090;
static int32_t t64 = 15;
uint64_t x285 = 897350798249745656LLU;
int8_t x287 = INT8_MAX;
int16_t x288 = 2924;
volatile int32_t t65 = -350929927;
uint64_t x289 = 3592594013773774801LLU;
int8_t x296 = -1;
uint32_t x303 = 271359957U;
static uint8_t x306 = 2U;
static int16_t x315 = -1;
int16_t x321 = INT16_MIN;
volatile int16_t x328 = -13799;
int64_t x330 = INT64_MIN;
int32_t t74 = 100;
int64_t x343 = INT64_MIN;
uint64_t x347 = 1089LLU;
int32_t x349 = INT32_MIN;
static int16_t x352 = -1;
int16_t x359 = -2066;
uint16_t x361 = 192U;
volatile uint64_t x363 = 20433318004323097LLU;
uint8_t x367 = 121U;
static volatile int32_t t81 = 78375;
static int64_t x374 = -1840577793LL;
uint8_t x376 = UINT8_MAX;
uint8_t x377 = 43U;
uint16_t x379 = UINT16_MAX;
uint8_t x382 = UINT8_MAX;
int32_t x386 = INT32_MAX;
int8_t x391 = -1;
static uint16_t x394 = 295U;
volatile int32_t x402 = INT32_MAX;
int32_t x403 = -1;
volatile uint8_t x406 = 9U;
int32_t x415 = 10;
int32_t t94 = 147452;
static int8_t x428 = INT8_MIN;
static int64_t x446 = -420895029LL;
int32_t x448 = INT32_MIN;
int8_t x451 = INT8_MIN;
static volatile int32_t x453 = INT32_MIN;
int64_t x455 = INT64_MIN;
int8_t x467 = -1;
static int32_t x475 = INT32_MAX;
volatile int16_t x480 = -1483;
static int8_t x481 = 9;
int32_t t107 = 0;
volatile int16_t x485 = INT16_MIN;
static int32_t t108 = 75686;
int64_t x494 = INT64_MIN;
volatile int32_t t110 = -55636609;
int16_t x507 = INT16_MAX;
static volatile int8_t x510 = INT8_MAX;
volatile int32_t x516 = -1;
volatile int32_t t115 = -302066550;
int64_t x518 = -157436LL;
uint32_t x528 = UINT32_MAX;
uint8_t x532 = UINT8_MAX;
int32_t x537 = -20256984;
int32_t x539 = INT32_MIN;
volatile int32_t t121 = 8;
int16_t x542 = INT16_MIN;
int8_t x545 = INT8_MAX;
int16_t x547 = -13651;
volatile uint32_t x548 = UINT32_MAX;
int32_t t123 = 350770080;
int32_t t124 = -16;
int32_t t125 = 73609542;
int32_t x559 = 64987601;
int32_t x561 = -53079861;
static volatile int32_t x562 = INT32_MIN;
int32_t t129 = -351;
int32_t x573 = INT32_MAX;
static uint8_t x574 = 3U;
uint64_t x576 = 5606LLU;
int32_t t130 = 98;
int16_t x577 = INT16_MIN;
uint64_t x579 = UINT64_MAX;
static int32_t t131 = -29;
int8_t x582 = 1;
volatile int32_t t132 = 4631;
volatile uint8_t x586 = UINT8_MAX;
static volatile int32_t t134 = 31422;
uint8_t x593 = UINT8_MAX;
static uint8_t x595 = 9U;
int16_t x598 = INT16_MIN;
int32_t t136 = -15;
int16_t x602 = 2;
volatile int16_t x610 = -2558;
int32_t t139 = 14;
volatile int64_t x637 = INT64_MIN;
uint64_t x638 = 36417456216691137LLU;
int8_t x642 = 0;
int16_t x644 = -6476;
volatile uint32_t x646 = 11039U;
int16_t x651 = -1608;
int32_t x661 = 14812;
int8_t x662 = INT8_MAX;
int64_t x666 = 959LL;
uint32_t x668 = UINT32_MAX;
uint16_t x681 = 6U;
uint32_t x682 = 652880924U;
int8_t x690 = 14;
volatile uint16_t x691 = 13U;
volatile int32_t t157 = -88553;
uint8_t x695 = 0U;
static int32_t t158 = 234555048;
int8_t x698 = 4;
volatile uint32_t x704 = 52760128U;
static int16_t x707 = INT16_MIN;
volatile uint64_t x711 = UINT64_MAX;
static int16_t x712 = -1;
int16_t x734 = -1;
int16_t x735 = INT16_MIN;
static int32_t t168 = 0;
int8_t x750 = INT8_MIN;
volatile int64_t x756 = INT64_MIN;
int32_t t172 = 803779;
static int16_t x763 = INT16_MIN;
static int8_t x768 = INT8_MIN;
static volatile int32_t t174 = 141534;
uint32_t x771 = 100127U;
int32_t t175 = 7863;
int8_t x774 = -1;
uint64_t x777 = 66612765954LLU;
int32_t x784 = INT32_MIN;
static volatile int32_t t178 = 19853;
volatile int16_t x785 = INT16_MIN;
int8_t x791 = INT8_MIN;
uint8_t x795 = 27U;
int32_t x802 = -154972443;
volatile int32_t t185 = 10249232;
int32_t x813 = INT32_MAX;
int16_t x814 = INT16_MIN;
uint32_t x815 = 9944823U;
int8_t x816 = -1;
int32_t x819 = 19383;
volatile int16_t x835 = INT16_MIN;
static int8_t x839 = 0;
int32_t t194 = -185970;
int64_t x859 = INT64_MIN;
int16_t x860 = -6325;
volatile int32_t t197 = 13119;
static uint16_t x862 = UINT16_MAX;
int32_t t199 = -8;


void f0(void) {
    	int64_t x1 = 0LL;
	int32_t x3 = INT32_MAX;
	int32_t x4 = -1;
	volatile int32_t t0 = -219;

    t0 = (x1!=(x2+(x3/x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = UINT64_MAX;
	int32_t t1 = -42802;

    t1 = (x5!=(x6+(x7/x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	uint32_t x12 = 766U;
	int32_t t2 = -64445074;

    t2 = (x9!=(x10+(x11/x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = -48;
	uint16_t x14 = 21495U;
	static volatile int32_t x15 = INT32_MIN;
	volatile uint32_t x16 = 86580U;

    t3 = (x13!=(x14+(x15/x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int8_t x18 = 3;
	int32_t t4 = -20;

    t4 = (x17!=(x18+(x19/x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int64_t x23 = -1LL;
	uint32_t x24 = 11795U;
	int32_t t5 = -107619906;

    t5 = (x21!=(x22+(x23/x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = UINT32_MAX;
	int8_t x27 = INT8_MAX;
	static volatile int32_t t6 = -2598176;

    t6 = (x25!=(x26+(x27/x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = 829U;
	uint32_t x30 = 1696083U;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 8U;
	int32_t t7 = 59870;

    t7 = (x29!=(x30+(x31/x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = 3582U;
	uint16_t x35 = 0U;
	static volatile int8_t x36 = INT8_MAX;
	int32_t t8 = 0;

    t8 = (x33!=(x34+(x35/x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 42U;
	int64_t x39 = -37217395965LL;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -577343;

    t9 = (x37!=(x38+(x39/x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MIN;
	uint16_t x43 = 8U;
	int64_t x44 = 28710472630853LL;
	static int32_t t10 = 8121;

    t10 = (x41!=(x42+(x43/x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -9;
	static uint8_t x46 = 51U;
	volatile uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = 619901;

    t11 = (x45!=(x46+(x47/x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 2;
	uint64_t x50 = 10368497902705252LLU;
	static volatile int32_t x51 = 7984;
	int8_t x52 = -3;
	volatile int32_t t12 = 0;

    t12 = (x49!=(x50+(x51/x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MIN;
	int8_t x56 = 61;
	volatile int32_t t13 = -141575;

    t13 = (x53!=(x54+(x55/x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	int64_t x59 = INT64_MAX;
	int32_t t14 = 65358402;

    t14 = (x57!=(x58+(x59/x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -8072813564015574LL;
	int8_t x66 = INT8_MIN;
	volatile int32_t t15 = 1596;

    t15 = (x65!=(x66+(x67/x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 4188835930LL;
	int64_t x70 = INT64_MIN;
	int8_t x71 = 46;
	volatile int32_t t16 = -31923486;

    t16 = (x69!=(x70+(x71/x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x74 = INT16_MIN;
	uint8_t x75 = 0U;
	uint16_t x76 = UINT16_MAX;

    t17 = (x73!=(x74+(x75/x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x77 = 59LLU;
	uint16_t x78 = 5611U;
	int16_t x79 = -27;
	volatile int64_t x80 = -1LL;

    t18 = (x77!=(x78+(x79/x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x84 = INT32_MIN;
	int32_t t19 = 20608;

    t19 = (x81!=(x82+(x83/x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x85 = -13;
	static int64_t x86 = -1LL;
	int16_t x87 = -1;
	int32_t t20 = -2057;

    t20 = (x85!=(x86+(x87/x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -49;
	volatile int32_t t21 = 375326;

    t21 = (x89!=(x90+(x91/x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = -27120;
	int32_t x95 = INT32_MIN;
	static uint8_t x96 = UINT8_MAX;

    t22 = (x93!=(x94+(x95/x96)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MAX;
	volatile int64_t x99 = INT64_MIN;
	uint64_t x100 = UINT64_MAX;
	static int32_t t23 = -157085;

    t23 = (x97!=(x98+(x99/x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = UINT8_MAX;
	static int32_t x102 = 3868;
	int32_t t24 = 1071;

    t24 = (x101!=(x102+(x103/x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MIN;
	static volatile uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 12U;
	volatile int16_t x112 = INT16_MIN;
	int32_t t25 = -31987;

    t25 = (x109!=(x110+(x111/x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x113 = UINT8_MAX;
	int64_t x115 = -8103649101578LL;
	uint32_t x116 = 5129406U;
	static int32_t t26 = -410;

    t26 = (x113!=(x114+(x115/x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = 0;
	static volatile int16_t x118 = -1;
	int16_t x119 = 8;
	uint32_t x120 = 3234522U;

    t27 = (x117!=(x118+(x119/x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x126 = INT8_MAX;
	uint64_t x128 = 3113579LLU;
	int32_t t28 = -495889793;

    t28 = (x125!=(x126+(x127/x128)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MAX;
	uint16_t x130 = 39U;
	static uint32_t x132 = 15U;
	volatile int32_t t29 = -51320;

    t29 = (x129!=(x130+(x131/x132)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x135 = 23;
	int8_t x136 = INT8_MIN;
	int32_t t30 = 117540;

    t30 = (x133!=(x134+(x135/x136)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = 123121752U;
	static int32_t x139 = -1;
	volatile uint16_t x140 = 13017U;

    t31 = (x137!=(x138+(x139/x140)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -119026375720024LL;
	volatile int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t32 = 32642075;

    t32 = (x141!=(x142+(x143/x144)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	volatile int32_t t33 = -531;

    t33 = (x145!=(x146+(x147/x148)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x151 = -3;
	int32_t x152 = INT32_MIN;
	volatile int32_t t34 = 527290718;

    t34 = (x149!=(x150+(x151/x152)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -24507584;
	volatile int8_t x154 = 1;
	static volatile uint8_t x155 = UINT8_MAX;
	int8_t x156 = -1;
	int32_t t35 = 1;

    t35 = (x153!=(x154+(x155/x156)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = -1;
	int16_t x159 = -494;
	int8_t x160 = -1;
	int32_t t36 = -1193;

    t36 = (x157!=(x158+(x159/x160)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = 7417U;
	uint32_t x162 = 7U;
	volatile int16_t x163 = -1;
	static uint16_t x164 = UINT16_MAX;
	static volatile int32_t t37 = 3;

    t37 = (x161!=(x162+(x163/x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = 1616991LL;
	static int64_t x166 = 199388701LL;
	int32_t t38 = 519716;

    t38 = (x165!=(x166+(x167/x168)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = 27U;
	volatile int32_t x170 = INT32_MAX;
	uint64_t x172 = 54672674948LLU;
	int32_t t39 = -27;

    t39 = (x169!=(x170+(x171/x172)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x173 = INT32_MIN;
	int64_t x174 = -1LL;
	volatile int32_t x175 = INT32_MAX;
	int32_t t40 = 7500249;

    t40 = (x173!=(x174+(x175/x176)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x177 = UINT64_MAX;
	static int16_t x178 = -6;
	int64_t x180 = INT64_MAX;
	int32_t t41 = 26190324;

    t41 = (x177!=(x178+(x179/x180)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MAX;
	int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MAX;
	uint64_t x184 = UINT64_MAX;
	static int32_t t42 = 14138;

    t42 = (x181!=(x182+(x183/x184)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = 28223U;
	int64_t x186 = INT64_MIN;
	static uint16_t x187 = UINT16_MAX;
	static uint64_t x188 = 461707LLU;
	static int32_t t43 = -2906;

    t43 = (x185!=(x186+(x187/x188)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = 5;
	uint32_t x190 = UINT32_MAX;
	volatile int8_t x191 = INT8_MAX;
	static int8_t x192 = INT8_MIN;
	static volatile int32_t t44 = 2255931;

    t44 = (x189!=(x190+(x191/x192)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x193 = 125477LLU;
	int64_t x195 = -1LL;
	volatile int32_t t45 = 1;

    t45 = (x193!=(x194+(x195/x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x197 = 509U;
	int64_t x198 = INT64_MIN;
	static int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -1;
	int32_t t46 = 173;

    t46 = (x197!=(x198+(x199/x200)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = 162345U;
	static volatile int16_t x202 = -1;
	volatile int32_t x203 = 513;
	uint64_t x204 = 4569LLU;
	static volatile int32_t t47 = -158748691;

    t47 = (x201!=(x202+(x203/x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = 1;
	uint16_t x206 = 1851U;
	static volatile uint32_t x207 = 6117237U;
	volatile int32_t x208 = INT32_MIN;
	static int32_t t48 = -4;

    t48 = (x205!=(x206+(x207/x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x209 = 29U;
	uint64_t x210 = UINT64_MAX;
	static int32_t x211 = -1;
	int8_t x212 = -1;

    t49 = (x209!=(x210+(x211/x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x217 = -1;
	int16_t x218 = INT16_MIN;
	volatile uint8_t x220 = 1U;

    t50 = (x217!=(x218+(x219/x220)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x225 = INT32_MIN;
	static int32_t x226 = -2;
	uint32_t x228 = 284503U;
	volatile int32_t t51 = 0;

    t51 = (x225!=(x226+(x227/x228)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x229 = 129611483LLU;
	volatile int8_t x230 = 9;
	uint16_t x232 = 3U;
	static volatile int32_t t52 = -9;

    t52 = (x229!=(x230+(x231/x232)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x233 = UINT32_MAX;
	uint32_t x234 = 37U;
	uint32_t x236 = 232U;
	int32_t t53 = 0;

    t53 = (x233!=(x234+(x235/x236)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = INT8_MIN;
	int64_t x238 = -65LL;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = INT64_MIN;
	static int32_t t54 = 52941171;

    t54 = (x237!=(x238+(x239/x240)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x241 = 6U;
	int32_t x242 = INT32_MIN;
	int32_t x244 = INT32_MIN;
	volatile int32_t t55 = -2571942;

    t55 = (x241!=(x242+(x243/x244)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x245 = 2086U;
	uint16_t x246 = 2147U;
	uint64_t x247 = 78064731LLU;
	volatile uint8_t x248 = 21U;
	int32_t t56 = -3628473;

    t56 = (x245!=(x246+(x247/x248)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x250 = INT64_MAX;
	static int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MAX;
	volatile int32_t t57 = -6014;

    t57 = (x249!=(x250+(x251/x252)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = -44;
	volatile int16_t x255 = -1;
	static int16_t x256 = -15;
	volatile int32_t t58 = 457;

    t58 = (x253!=(x254+(x255/x256)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x257 = INT64_MIN;
	static volatile int8_t x258 = 1;

    t59 = (x257!=(x258+(x259/x260)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x261 = INT64_MIN;
	int32_t x263 = INT32_MAX;
	int32_t x264 = INT32_MAX;
	static int32_t t60 = 840779;

    t60 = (x261!=(x262+(x263/x264)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x265 = 8U;
	uint32_t x266 = 150U;
	static int32_t x267 = INT32_MAX;
	uint8_t x268 = UINT8_MAX;

    t61 = (x265!=(x266+(x267/x268)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = -144;
	uint16_t x270 = 400U;
	int16_t x271 = 39;
	int64_t x272 = 3304579572155387LL;

    t62 = (x269!=(x270+(x271/x272)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x273 = 12;
	int64_t x274 = 66948413724019328LL;
	volatile int64_t x275 = INT64_MAX;
	volatile int16_t x276 = 46;
	static volatile int32_t t63 = 3;

    t63 = (x273!=(x274+(x275/x276)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x277 = -7326;
	uint64_t x278 = 754733793LLU;
	uint16_t x279 = 1U;
	static uint32_t x280 = UINT32_MAX;

    t64 = (x277!=(x278+(x279/x280)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x286 = 20616420U;

    t65 = (x285!=(x286+(x287/x288)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x290 = INT64_MIN;
	uint16_t x291 = UINT16_MAX;
	volatile int32_t x292 = INT32_MIN;
	static int32_t t66 = -2028;

    t66 = (x289!=(x290+(x291/x292)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = 63;
	int16_t x294 = -1;
	uint8_t x295 = 1U;
	volatile int32_t t67 = 26306;

    t67 = (x293!=(x294+(x295/x296)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x301 = INT32_MIN;
	uint64_t x302 = 905248020290LLU;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t68 = 679233433;

    t68 = (x301!=(x302+(x303/x304)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x305 = INT16_MIN;
	int64_t x307 = INT64_MIN;
	int16_t x308 = 1;
	int32_t t69 = 0;

    t69 = (x305!=(x306+(x307/x308)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x313 = -1LL;
	uint64_t x314 = UINT64_MAX;
	int8_t x316 = -1;
	static volatile int32_t t70 = 1;

    t70 = (x313!=(x314+(x315/x316)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x322 = -64761LL;
	int16_t x323 = INT16_MIN;
	int64_t x324 = 89801949770148380LL;
	volatile int32_t t71 = 7151801;

    t71 = (x321!=(x322+(x323/x324)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	static int8_t x327 = INT8_MAX;
	volatile int32_t t72 = 841556;

    t72 = (x325!=(x326+(x327/x328)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x329 = 0U;
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = 854229612486LL;
	int32_t t73 = -1221;

    t73 = (x329!=(x330+(x331/x332)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 493531956104LLU;

    t74 = (x337!=(x338+(x339/x340)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x341 = INT8_MAX;
	volatile int16_t x342 = -76;
	uint16_t x344 = 3554U;
	volatile int32_t t75 = -7;

    t75 = (x341!=(x342+(x343/x344)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x345 = 4U;
	volatile int64_t x346 = INT64_MAX;
	uint32_t x348 = 5612271U;
	int32_t t76 = 1;

    t76 = (x345!=(x346+(x347/x348)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x350 = UINT64_MAX;
	static int32_t x351 = -1;
	volatile int32_t t77 = -12690185;

    t77 = (x349!=(x350+(x351/x352)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = -7;
	uint32_t x354 = 5U;
	volatile int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	static int32_t t78 = 2022601;

    t78 = (x353!=(x354+(x355/x356)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x357 = UINT64_MAX;
	int8_t x358 = INT8_MIN;
	volatile int64_t x360 = INT64_MAX;
	int32_t t79 = -727540;

    t79 = (x357!=(x358+(x359/x360)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x362 = 530;
	int32_t x364 = INT32_MIN;
	int32_t t80 = 23;

    t80 = (x361!=(x362+(x363/x364)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x365 = 399U;
	int16_t x366 = INT16_MIN;
	static uint32_t x368 = 2U;

    t81 = (x365!=(x366+(x367/x368)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x369 = -1;
	int8_t x370 = -1;
	int32_t x371 = -1;
	int8_t x372 = 6;
	volatile int32_t t82 = 9;

    t82 = (x369!=(x370+(x371/x372)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x373 = -355197943546522LL;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t t83 = -1;

    t83 = (x373!=(x374+(x375/x376)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x378 = 1U;
	uint32_t x380 = 447154767U;
	int32_t t84 = -4900;

    t84 = (x377!=(x378+(x379/x380)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x381 = -364126LL;
	int32_t x383 = -1;
	static int8_t x384 = INT8_MAX;
	int32_t t85 = -513;

    t85 = (x381!=(x382+(x383/x384)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x385 = -1;
	int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MIN;
	static int32_t t86 = 41;

    t86 = (x385!=(x386+(x387/x388)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x389 = 541;
	int8_t x390 = -34;
	static int16_t x392 = -1;
	int32_t t87 = -171327698;

    t87 = (x389!=(x390+(x391/x392)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x393 = INT8_MIN;
	uint16_t x395 = 22U;
	static int32_t x396 = 68;
	int32_t t88 = 1;

    t88 = (x393!=(x394+(x395/x396)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x401 = INT16_MIN;
	int32_t x404 = INT32_MAX;
	int32_t t89 = -1153;

    t89 = (x401!=(x402+(x403/x404)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x405 = INT8_MIN;
	int16_t x407 = INT16_MAX;
	volatile int8_t x408 = INT8_MAX;
	int32_t t90 = -31702;

    t90 = (x405!=(x406+(x407/x408)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x409 = 3929393U;
	int8_t x410 = INT8_MAX;
	uint8_t x411 = UINT8_MAX;
	uint16_t x412 = 10U;
	int32_t t91 = 106277237;

    t91 = (x409!=(x410+(x411/x412)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x413 = INT16_MIN;
	uint32_t x414 = UINT32_MAX;
	uint64_t x416 = 156LLU;
	static volatile int32_t t92 = -15;

    t92 = (x413!=(x414+(x415/x416)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x417 = 1LL;
	volatile int32_t x418 = INT32_MAX;
	static int32_t x419 = 16087159;
	static uint32_t x420 = UINT32_MAX;
	int32_t t93 = -1;

    t93 = (x417!=(x418+(x419/x420)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x421 = 2U;
	static int32_t x422 = INT32_MIN;
	volatile int32_t x423 = -1;
	uint8_t x424 = 11U;

    t94 = (x421!=(x422+(x423/x424)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x425 = UINT32_MAX;
	int32_t x426 = INT32_MIN;
	uint8_t x427 = 31U;
	int32_t t95 = -2;

    t95 = (x425!=(x426+(x427/x428)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x429 = 48U;
	uint32_t x430 = 125297U;
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = INT8_MIN;
	static int32_t t96 = -15998950;

    t96 = (x429!=(x430+(x431/x432)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x437 = -242LL;
	static volatile int8_t x438 = INT8_MIN;
	uint32_t x439 = 729516566U;
	int8_t x440 = INT8_MAX;
	static int32_t t97 = -80995963;

    t97 = (x437!=(x438+(x439/x440)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MIN;
	volatile int16_t x442 = INT16_MIN;
	int64_t x443 = -538102LL;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t98 = 9;

    t98 = (x441!=(x442+(x443/x444)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = -1;
	int8_t x447 = 25;
	int32_t t99 = 24;

    t99 = (x445!=(x446+(x447/x448)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x449 = 43;
	volatile int16_t x450 = -2;
	volatile int32_t x452 = -162323;
	int32_t t100 = 25;

    t100 = (x449!=(x450+(x451/x452)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x454 = 394U;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t101 = -2950186;

    t101 = (x453!=(x454+(x455/x456)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x457 = 4327024855105770521LL;
	int64_t x458 = -1LL;
	uint64_t x459 = 4783723208841926LLU;
	static int32_t x460 = -678132110;
	volatile int32_t t102 = 527998140;

    t102 = (x457!=(x458+(x459/x460)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x465 = 31U;
	static volatile int64_t x466 = 157685LL;
	uint16_t x468 = 39U;
	int32_t t103 = 457;

    t103 = (x465!=(x466+(x467/x468)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x469 = -19765536293LL;
	int8_t x470 = -1;
	static int16_t x471 = INT16_MIN;
	static volatile int16_t x472 = INT16_MAX;
	int32_t t104 = 46;

    t104 = (x469!=(x470+(x471/x472)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x473 = -1LL;
	uint64_t x474 = 171140LLU;
	int64_t x476 = 381625122237058561LL;
	volatile int32_t t105 = -821077796;

    t105 = (x473!=(x474+(x475/x476)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x477 = -1;
	int64_t x478 = -44853LL;
	int16_t x479 = INT16_MIN;
	static int32_t t106 = -879756405;

    t106 = (x477!=(x478+(x479/x480)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x482 = INT8_MIN;
	static uint32_t x483 = 118001521U;
	int16_t x484 = INT16_MIN;

    t107 = (x481!=(x482+(x483/x484)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x486 = INT64_MIN;
	volatile int32_t x487 = -1;
	static volatile uint16_t x488 = 8170U;

    t108 = (x485!=(x486+(x487/x488)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = 3;
	volatile int8_t x490 = INT8_MIN;
	int64_t x491 = -133806122358LL;
	int16_t x492 = -11;
	volatile int32_t t109 = -440358918;

    t109 = (x489!=(x490+(x491/x492)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x493 = 5U;
	volatile uint64_t x495 = 1245011LLU;
	int16_t x496 = -1;

    t110 = (x493!=(x494+(x495/x496)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x497 = 8626;
	uint16_t x498 = 49U;
	uint8_t x499 = UINT8_MAX;
	int64_t x500 = 44LL;
	volatile int32_t t111 = -82;

    t111 = (x497!=(x498+(x499/x500)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x501 = -52894230232LL;
	volatile int16_t x502 = -278;
	int8_t x503 = INT8_MAX;
	int64_t x504 = -1LL;
	volatile int32_t t112 = 1;

    t112 = (x501!=(x502+(x503/x504)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x505 = INT64_MIN;
	int16_t x506 = 512;
	int32_t x508 = INT32_MAX;
	static int32_t t113 = 13;

    t113 = (x505!=(x506+(x507/x508)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = INT8_MAX;
	int8_t x511 = INT8_MIN;
	volatile int16_t x512 = -10;
	int32_t t114 = 350691;

    t114 = (x509!=(x510+(x511/x512)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x513 = -1;
	int64_t x514 = INT64_MAX;
	volatile int16_t x515 = INT16_MAX;

    t115 = (x513!=(x514+(x515/x516)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x517 = 10859405;
	static volatile int32_t x519 = 15209;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t116 = 56532112;

    t116 = (x517!=(x518+(x519/x520)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x521 = 95063988U;
	static int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MIN;
	volatile int32_t x524 = -1;
	volatile int32_t t117 = 220431584;

    t117 = (x521!=(x522+(x523/x524)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x525 = 41835751396928783LLU;
	static int16_t x526 = 220;
	int8_t x527 = 0;
	int32_t t118 = 2;

    t118 = (x525!=(x526+(x527/x528)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x529 = -34;
	uint16_t x530 = 15614U;
	int16_t x531 = 0;
	volatile int32_t t119 = 0;

    t119 = (x529!=(x530+(x531/x532)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x533 = 7113251U;
	volatile int64_t x534 = INT64_MIN;
	static int16_t x535 = INT16_MIN;
	static int32_t x536 = INT32_MIN;
	static int32_t t120 = -517536167;

    t120 = (x533!=(x534+(x535/x536)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x538 = 4584777953914106524LLU;
	int16_t x540 = INT16_MIN;

    t121 = (x537!=(x538+(x539/x540)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x541 = 31521U;
	volatile int64_t x543 = INT64_MAX;
	volatile uint8_t x544 = UINT8_MAX;
	volatile int32_t t122 = 29057;

    t122 = (x541!=(x542+(x543/x544)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x546 = INT8_MIN;

    t123 = (x545!=(x546+(x547/x548)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x549 = INT32_MIN;
	volatile uint64_t x550 = 3376621664LLU;
	volatile uint16_t x551 = UINT16_MAX;
	static int32_t x552 = INT32_MIN;

    t124 = (x549!=(x550+(x551/x552)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x553 = 25;
	uint32_t x554 = UINT32_MAX;
	int8_t x555 = INT8_MAX;
	volatile int8_t x556 = INT8_MAX;

    t125 = (x553!=(x554+(x555/x556)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x557 = -1LL;
	uint64_t x558 = 2545354118LLU;
	uint32_t x560 = 6021056U;
	static int32_t t126 = -142;

    t126 = (x557!=(x558+(x559/x560)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x563 = -1;
	int16_t x564 = INT16_MIN;
	int32_t t127 = -6;

    t127 = (x561!=(x562+(x563/x564)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x565 = 72258;
	int64_t x566 = -1797568980LL;
	static int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MAX;
	static int32_t t128 = 161;

    t128 = (x565!=(x566+(x567/x568)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x569 = 113313995146LL;
	int32_t x570 = 12756;
	int8_t x571 = INT8_MAX;
	static volatile int32_t x572 = INT32_MIN;

    t129 = (x569!=(x570+(x571/x572)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x575 = 141LLU;

    t130 = (x573!=(x574+(x575/x576)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x578 = -1LL;
	static volatile int64_t x580 = INT64_MIN;

    t131 = (x577!=(x578+(x579/x580)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x581 = -310783364370LL;
	static int8_t x583 = 22;
	uint64_t x584 = 7855LLU;

    t132 = (x581!=(x582+(x583/x584)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x585 = UINT32_MAX;
	uint64_t x587 = 0LLU;
	uint8_t x588 = 1U;
	int32_t t133 = -1;

    t133 = (x585!=(x586+(x587/x588)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x589 = 3;
	static uint64_t x590 = 63168700365LLU;
	int64_t x591 = -38318534313516LL;
	static int64_t x592 = -89962980738LL;

    t134 = (x589!=(x590+(x591/x592)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x594 = UINT16_MAX;
	volatile int8_t x596 = INT8_MIN;
	static int32_t t135 = 26766200;

    t135 = (x593!=(x594+(x595/x596)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x597 = -1;
	uint8_t x599 = UINT8_MAX;
	uint64_t x600 = UINT64_MAX;

    t136 = (x597!=(x598+(x599/x600)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x601 = INT32_MIN;
	static volatile int64_t x603 = -75962719036207433LL;
	static uint64_t x604 = 8066LLU;
	static int32_t t137 = 0;

    t137 = (x601!=(x602+(x603/x604)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = -6;
	uint16_t x611 = UINT16_MAX;
	static uint32_t x612 = UINT32_MAX;
	int32_t t138 = -110072;

    t138 = (x609!=(x610+(x611/x612)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x613 = -1;
	int64_t x614 = INT64_MIN;
	static uint32_t x615 = 7U;
	int16_t x616 = INT16_MAX;

    t139 = (x613!=(x614+(x615/x616)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x617 = -7;
	static volatile uint64_t x618 = 6034LLU;
	int32_t x619 = INT32_MIN;
	static int64_t x620 = 92710179881260LL;
	int32_t t140 = 60548465;

    t140 = (x617!=(x618+(x619/x620)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x621 = 7;
	int8_t x622 = -1;
	int64_t x623 = -3LL;
	int16_t x624 = -1;
	int32_t t141 = -136;

    t141 = (x621!=(x622+(x623/x624)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x625 = INT16_MIN;
	static uint32_t x626 = UINT32_MAX;
	static int64_t x627 = INT64_MAX;
	int64_t x628 = -472912986815571616LL;
	volatile int32_t t142 = 236;

    t142 = (x625!=(x626+(x627/x628)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x629 = INT32_MIN;
	int64_t x630 = -5443243214486LL;
	uint32_t x631 = UINT32_MAX;
	volatile uint64_t x632 = UINT64_MAX;
	int32_t t143 = 99753692;

    t143 = (x629!=(x630+(x631/x632)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x639 = INT32_MAX;
	static volatile uint16_t x640 = 26781U;
	volatile int32_t t144 = 3648;

    t144 = (x637!=(x638+(x639/x640)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x641 = UINT8_MAX;
	int16_t x643 = INT16_MIN;
	volatile int32_t t145 = 250117;

    t145 = (x641!=(x642+(x643/x644)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x645 = -1;
	int16_t x647 = -1;
	int8_t x648 = -3;
	volatile int32_t t146 = 11;

    t146 = (x645!=(x646+(x647/x648)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x649 = 0U;
	static volatile uint16_t x650 = 3099U;
	int64_t x652 = -1LL;
	int32_t t147 = -1723;

    t147 = (x649!=(x650+(x651/x652)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x653 = UINT32_MAX;
	int32_t x654 = 6211221;
	int8_t x655 = INT8_MIN;
	int32_t x656 = INT32_MAX;
	volatile int32_t t148 = -169;

    t148 = (x653!=(x654+(x655/x656)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x657 = 1;
	int8_t x658 = INT8_MIN;
	volatile uint16_t x659 = 9354U;
	uint64_t x660 = UINT64_MAX;
	volatile int32_t t149 = 12938;

    t149 = (x657!=(x658+(x659/x660)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x663 = UINT32_MAX;
	static uint32_t x664 = 63U;
	int32_t t150 = -19250;

    t150 = (x661!=(x662+(x663/x664)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x665 = 1017U;
	int8_t x667 = INT8_MIN;
	volatile int32_t t151 = -5;

    t151 = (x665!=(x666+(x667/x668)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x669 = UINT64_MAX;
	int32_t x670 = INT32_MIN;
	int64_t x671 = INT64_MIN;
	uint64_t x672 = UINT64_MAX;
	static int32_t t152 = 2048;

    t152 = (x669!=(x670+(x671/x672)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x673 = 506575872;
	static int16_t x674 = INT16_MAX;
	int8_t x675 = INT8_MAX;
	int8_t x676 = INT8_MIN;
	static int32_t t153 = -281496;

    t153 = (x673!=(x674+(x675/x676)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x677 = 0U;
	int64_t x678 = -1LL;
	int16_t x679 = -1;
	int16_t x680 = INT16_MAX;
	static volatile int32_t t154 = -623;

    t154 = (x677!=(x678+(x679/x680)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x683 = INT16_MAX;
	static uint64_t x684 = UINT64_MAX;
	static volatile int32_t t155 = -81;

    t155 = (x681!=(x682+(x683/x684)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x685 = -645091363836881911LL;
	static uint8_t x686 = 116U;
	static int16_t x687 = 0;
	volatile int16_t x688 = INT16_MAX;
	volatile int32_t t156 = -1;

    t156 = (x685!=(x686+(x687/x688)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x689 = INT32_MIN;
	int8_t x692 = INT8_MAX;

    t157 = (x689!=(x690+(x691/x692)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x693 = INT8_MAX;
	static uint8_t x694 = 1U;
	volatile uint8_t x696 = UINT8_MAX;

    t158 = (x693!=(x694+(x695/x696)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x697 = 69U;
	int32_t x699 = 93283;
	uint64_t x700 = 227LLU;
	volatile int32_t t159 = 433423740;

    t159 = (x697!=(x698+(x699/x700)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x701 = -1;
	uint16_t x702 = 9523U;
	volatile uint16_t x703 = 0U;
	int32_t t160 = -1050365315;

    t160 = (x701!=(x702+(x703/x704)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x705 = -1;
	static volatile int8_t x706 = INT8_MAX;
	int8_t x708 = INT8_MIN;
	static volatile int32_t t161 = -1157012;

    t161 = (x705!=(x706+(x707/x708)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x709 = -1;
	volatile uint64_t x710 = 31469LLU;
	volatile int32_t t162 = -96581;

    t162 = (x709!=(x710+(x711/x712)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x713 = 12679392936136866LLU;
	int32_t x714 = INT32_MIN;
	int32_t x715 = 505035;
	int8_t x716 = INT8_MAX;
	int32_t t163 = 116218275;

    t163 = (x713!=(x714+(x715/x716)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x721 = INT8_MAX;
	volatile int16_t x722 = INT16_MAX;
	uint32_t x723 = 14473U;
	volatile uint32_t x724 = 954U;
	static int32_t t164 = 200412;

    t164 = (x721!=(x722+(x723/x724)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x729 = INT16_MIN;
	int32_t x730 = INT32_MAX;
	uint8_t x731 = 1U;
	static uint16_t x732 = 7570U;
	volatile int32_t t165 = -456282792;

    t165 = (x729!=(x730+(x731/x732)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x733 = -1LL;
	static uint8_t x736 = UINT8_MAX;
	volatile int32_t t166 = -4256384;

    t166 = (x733!=(x734+(x735/x736)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x737 = 87U;
	int8_t x738 = -16;
	uint8_t x739 = 5U;
	int32_t x740 = -203;
	int32_t t167 = -30635;

    t167 = (x737!=(x738+(x739/x740)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x741 = UINT64_MAX;
	static volatile int8_t x742 = -1;
	int64_t x743 = 1928695LL;
	static volatile int32_t x744 = -1;

    t168 = (x741!=(x742+(x743/x744)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x745 = INT8_MIN;
	uint8_t x746 = 25U;
	int64_t x747 = INT64_MIN;
	static uint8_t x748 = 48U;
	int32_t t169 = 29626917;

    t169 = (x745!=(x746+(x747/x748)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint16_t x749 = 27U;
	volatile int16_t x751 = -3797;
	static int64_t x752 = INT64_MIN;
	int32_t t170 = -1720;

    t170 = (x749!=(x750+(x751/x752)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x753 = INT32_MIN;
	static uint8_t x754 = UINT8_MAX;
	volatile int16_t x755 = 3;
	volatile int32_t t171 = 201579;

    t171 = (x753!=(x754+(x755/x756)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x757 = 0U;
	int64_t x758 = INT64_MIN;
	uint32_t x759 = 1U;
	uint8_t x760 = 5U;

    t172 = (x757!=(x758+(x759/x760)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x761 = 3485552LL;
	volatile int8_t x762 = 20;
	int8_t x764 = -1;
	int32_t t173 = 194078156;

    t173 = (x761!=(x762+(x763/x764)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x765 = UINT64_MAX;
	int16_t x766 = -465;
	static int16_t x767 = INT16_MIN;

    t174 = (x765!=(x766+(x767/x768)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x769 = UINT32_MAX;
	static int64_t x770 = -1LL;
	uint8_t x772 = 5U;

    t175 = (x769!=(x770+(x771/x772)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x773 = 351648804LLU;
	int8_t x775 = INT8_MAX;
	int16_t x776 = INT16_MIN;
	static int32_t t176 = 1005511145;

    t176 = (x773!=(x774+(x775/x776)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x778 = INT8_MIN;
	uint32_t x779 = 123886192U;
	static uint16_t x780 = UINT16_MAX;
	volatile int32_t t177 = 0;

    t177 = (x777!=(x778+(x779/x780)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x781 = 35239505LLU;
	static int16_t x782 = 0;
	int64_t x783 = 57081086316928616LL;

    t178 = (x781!=(x782+(x783/x784)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x786 = UINT64_MAX;
	static int32_t x787 = -512444288;
	int16_t x788 = -1;
	int32_t t179 = -1727619;

    t179 = (x785!=(x786+(x787/x788)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x789 = INT8_MIN;
	uint32_t x790 = 173U;
	uint32_t x792 = UINT32_MAX;
	int32_t t180 = -72109;

    t180 = (x789!=(x790+(x791/x792)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x793 = INT64_MIN;
	static uint8_t x794 = UINT8_MAX;
	volatile int8_t x796 = -1;
	int32_t t181 = 16135030;

    t181 = (x793!=(x794+(x795/x796)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x797 = -12730;
	uint64_t x798 = 25266581323033172LLU;
	static uint8_t x799 = UINT8_MAX;
	static volatile uint16_t x800 = 3242U;
	volatile int32_t t182 = 43;

    t182 = (x797!=(x798+(x799/x800)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x801 = 7U;
	volatile int64_t x803 = INT64_MIN;
	int16_t x804 = -3;
	static int32_t t183 = -186;

    t183 = (x801!=(x802+(x803/x804)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x805 = INT32_MAX;
	static int64_t x806 = INT64_MAX;
	int8_t x807 = INT8_MIN;
	int8_t x808 = 13;
	static volatile int32_t t184 = -4;

    t184 = (x805!=(x806+(x807/x808)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x809 = INT32_MAX;
	int16_t x810 = -15079;
	int8_t x811 = -43;
	static uint16_t x812 = 20U;

    t185 = (x809!=(x810+(x811/x812)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t t186 = 3;

    t186 = (x813!=(x814+(x815/x816)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x817 = 12LLU;
	int16_t x818 = -6;
	uint32_t x820 = 163196U;
	volatile int32_t t187 = 2;

    t187 = (x817!=(x818+(x819/x820)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x821 = INT64_MIN;
	int64_t x822 = INT64_MAX;
	int64_t x823 = INT64_MIN;
	volatile int16_t x824 = INT16_MAX;
	volatile int32_t t188 = -404;

    t188 = (x821!=(x822+(x823/x824)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x825 = 0U;
	int16_t x826 = INT16_MAX;
	uint64_t x827 = 256035216571129LLU;
	int64_t x828 = 91928241020LL;
	volatile int32_t t189 = -973161336;

    t189 = (x825!=(x826+(x827/x828)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x829 = 477U;
	static volatile uint64_t x830 = 131618206LLU;
	static int8_t x831 = -26;
	static int64_t x832 = 804LL;
	static int32_t t190 = 509;

    t190 = (x829!=(x830+(x831/x832)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x833 = 29;
	uint8_t x834 = 7U;
	static int64_t x836 = INT64_MIN;
	volatile int32_t t191 = 10555710;

    t191 = (x833!=(x834+(x835/x836)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x837 = -1;
	int8_t x838 = 50;
	static int8_t x840 = -7;
	volatile int32_t t192 = -106147;

    t192 = (x837!=(x838+(x839/x840)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x841 = 0;
	int8_t x842 = INT8_MIN;
	static uint64_t x843 = 2671LLU;
	int32_t x844 = -1;
	int32_t t193 = -1533;

    t193 = (x841!=(x842+(x843/x844)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x845 = INT64_MAX;
	int8_t x846 = 4;
	uint8_t x847 = UINT8_MAX;
	int8_t x848 = INT8_MIN;

    t194 = (x845!=(x846+(x847/x848)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = INT32_MAX;
	int32_t x850 = 3370;
	static int32_t x851 = INT32_MAX;
	static volatile int16_t x852 = INT16_MAX;
	volatile int32_t t195 = 195753816;

    t195 = (x849!=(x850+(x851/x852)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x853 = 58981291675381LLU;
	int8_t x854 = 1;
	int8_t x855 = INT8_MIN;
	static int32_t x856 = INT32_MAX;
	volatile int32_t t196 = 117715;

    t196 = (x853!=(x854+(x855/x856)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x857 = 1823U;
	int32_t x858 = INT32_MIN;

    t197 = (x857!=(x858+(x859/x860)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x861 = UINT64_MAX;
	volatile uint64_t x863 = 811344LLU;
	uint64_t x864 = UINT64_MAX;
	int32_t t198 = -6475;

    t198 = (x861!=(x862+(x863/x864)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x865 = UINT32_MAX;
	int8_t x866 = INT8_MIN;
	int8_t x867 = 0;
	static int8_t x868 = INT8_MAX;

    t199 = (x865!=(x866+(x867/x868)));

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

