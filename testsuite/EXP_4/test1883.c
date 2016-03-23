
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

int64_t x2 = INT64_MIN;
int32_t x6 = 1;
uint32_t x7 = 132796848U;
int32_t x12 = 0;
int32_t x14 = -29702;
int32_t t3 = -3;
int64_t x17 = -245068LL;
int8_t x19 = -12;
volatile uint8_t x24 = UINT8_MAX;
int8_t x28 = -11;
uint64_t x29 = UINT64_MAX;
int8_t x30 = INT8_MAX;
int8_t x31 = -1;
volatile int32_t x38 = -1;
int32_t x40 = INT32_MIN;
uint8_t x44 = 2U;
int8_t x46 = -1;
volatile int64_t x49 = -21292355LL;
uint32_t x51 = 21U;
uint64_t x52 = 1750637418096LLU;
int32_t t12 = 13;
uint8_t x53 = 46U;
int64_t x59 = INT64_MIN;
volatile int32_t t15 = 1637491;
int16_t x70 = -14552;
int8_t x72 = -1;
static volatile int32_t x84 = INT32_MIN;
volatile int32_t t20 = 452;
int8_t x91 = INT8_MAX;
int32_t x92 = INT32_MAX;
int64_t x96 = -1LL;
int16_t x103 = -1;
int16_t x109 = -15489;
static volatile uint32_t x113 = 7728879U;
volatile int32_t x116 = INT32_MIN;
int8_t x120 = -1;
static uint16_t x125 = UINT16_MAX;
uint64_t x129 = UINT64_MAX;
static int8_t x131 = -1;
int16_t x133 = 4992;
int64_t x140 = INT64_MIN;
static int32_t t35 = 2004;
uint16_t x155 = 395U;
static uint8_t x157 = UINT8_MAX;
static int64_t x166 = 4922888435125178LL;
volatile uint16_t x184 = UINT16_MAX;
int32_t t45 = 73;
uint16_t x185 = 406U;
int8_t x190 = INT8_MIN;
uint16_t x192 = 18U;
static volatile int32_t t47 = 187222210;
static volatile uint8_t x195 = UINT8_MAX;
int16_t x198 = INT16_MIN;
int32_t x203 = INT32_MIN;
int64_t x205 = INT64_MIN;
int16_t x206 = 4489;
uint8_t x217 = 22U;
volatile int16_t x222 = 62;
int64_t x225 = INT64_MIN;
static uint64_t x227 = UINT64_MAX;
uint32_t x232 = UINT32_MAX;
volatile int32_t t60 = -26124;
static int32_t x249 = -1;
volatile uint64_t x252 = 5809525521LLU;
volatile int32_t x255 = INT32_MAX;
int16_t x263 = 16163;
uint32_t x270 = 1U;
static int16_t x271 = INT16_MAX;
int16_t x273 = INT16_MIN;
static int32_t t68 = -3;
int32_t x278 = INT32_MIN;
volatile int32_t t69 = 245739308;
int16_t x281 = INT16_MIN;
int32_t x282 = -94041;
static uint8_t x286 = 6U;
uint16_t x289 = 71U;
uint64_t x290 = UINT64_MAX;
int16_t x293 = -1;
int32_t x299 = INT32_MIN;
static int32_t t75 = 49;
volatile int8_t x310 = -10;
int32_t x311 = -1;
static int64_t x312 = -3937441208528LL;
volatile int16_t x315 = INT16_MAX;
static int16_t x316 = -1;
int32_t t78 = 1476;
static volatile int16_t x317 = 90;
int8_t x320 = INT8_MIN;
static int16_t x321 = INT16_MIN;
uint16_t x323 = 2237U;
uint16_t x324 = 1U;
volatile uint8_t x325 = 0U;
volatile int32_t t81 = 152;
int16_t x329 = INT16_MIN;
static int16_t x332 = INT16_MIN;
int16_t x335 = INT16_MIN;
int32_t x339 = INT32_MAX;
volatile int32_t t86 = -298;
int64_t x351 = INT64_MAX;
volatile uint32_t x353 = 1029333U;
int32_t x356 = INT32_MIN;
uint8_t x357 = 47U;
int16_t x361 = -1;
int16_t x363 = -2235;
static int64_t x365 = INT64_MIN;
volatile int32_t t91 = 27;
volatile int32_t t94 = -349;
int16_t x381 = INT16_MIN;
int64_t x383 = INT64_MAX;
int32_t x387 = 663038;
int32_t x388 = -1;
uint64_t x395 = 3530972277255174LLU;
static volatile int8_t x400 = INT8_MIN;
int64_t x403 = INT64_MIN;
int32_t x408 = INT32_MIN;
uint32_t x416 = UINT32_MAX;
static uint64_t x422 = UINT64_MAX;
uint64_t x423 = 31327LLU;
uint8_t x428 = 58U;
static uint64_t x433 = 243LLU;
uint8_t x434 = UINT8_MAX;
int16_t x436 = -2332;
uint16_t x438 = UINT16_MAX;
static int32_t t109 = 1;
static uint16_t x444 = UINT16_MAX;
volatile int32_t x447 = INT32_MIN;
int32_t x451 = INT32_MIN;
static volatile int32_t t113 = -2223080;
int16_t x458 = INT16_MIN;
volatile int16_t x462 = 123;
uint16_t x466 = 1U;
static volatile int64_t x474 = -1LL;
static int32_t x476 = INT32_MIN;
uint16_t x478 = 25192U;
uint64_t x486 = 82LLU;
int32_t t123 = -3514;
volatile int32_t x501 = 901674119;
volatile int32_t t125 = -3342328;
volatile int8_t x505 = INT8_MIN;
int32_t x510 = -1;
int8_t x512 = -1;
uint32_t x515 = 3078975U;
int8_t x516 = 3;
int16_t x517 = 392;
static int8_t x518 = 1;
int32_t x524 = INT32_MIN;
static volatile int64_t x531 = -539364530399580LL;
int16_t x534 = 13;
int64_t x536 = 700386LL;
int32_t x544 = 328900;
int32_t t135 = -790;
static int64_t x546 = INT64_MIN;
uint16_t x548 = 267U;
uint16_t x552 = 0U;
int32_t t137 = 1;
int16_t x557 = -1;
volatile int32_t t139 = -4998334;
int8_t x563 = INT8_MAX;
volatile int32_t t140 = -3;
static int16_t x571 = INT16_MAX;
int32_t t142 = 12637774;
int16_t x581 = INT16_MIN;
static volatile int32_t x590 = INT32_MAX;
int16_t x594 = -1;
volatile uint8_t x608 = 2U;
int32_t t151 = -200697;
int16_t x616 = -1;
int64_t x618 = -1LL;
int32_t t154 = 268;
static int8_t x622 = INT8_MIN;
int64_t x637 = 4054041595994101LL;
volatile int32_t x641 = 3080;
int16_t x643 = -1;
static volatile int32_t t160 = 4709375;
int32_t x658 = INT32_MAX;
static int16_t x672 = INT16_MAX;
volatile int8_t x679 = -1;
int8_t x682 = 8;
int32_t t171 = 649534593;
static uint64_t x693 = UINT64_MAX;
int8_t x695 = INT8_MIN;
uint32_t x696 = UINT32_MAX;
volatile int16_t x702 = 72;
volatile int64_t x706 = INT64_MIN;
int32_t x710 = INT32_MIN;
volatile uint64_t x718 = UINT64_MAX;
static int16_t x739 = INT16_MIN;
int64_t x741 = -3923LL;
volatile uint8_t x744 = 2U;
volatile uint64_t x747 = 2810LLU;
int8_t x748 = 4;
static uint8_t x751 = UINT8_MAX;
uint64_t x757 = 2LLU;
static uint8_t x759 = 1U;
uint64_t x760 = 7140634909539990166LLU;
volatile int8_t x764 = 1;
uint8_t x766 = UINT8_MAX;
int64_t x768 = INT64_MAX;
int32_t t191 = 331355757;
int64_t x770 = -1LL;
static int64_t x771 = INT64_MIN;
int16_t x776 = INT16_MIN;
int16_t x778 = INT16_MIN;
int32_t x783 = 668351791;
volatile int32_t x788 = INT32_MIN;
volatile int16_t x791 = -6;
int64_t x793 = -460017049LL;
uint16_t x794 = UINT16_MAX;
int64_t x795 = 233804590374128248LL;


void f0(void) {
    	static volatile uint32_t x1 = 19807U;
	volatile int16_t x3 = INT16_MAX;
	uint8_t x4 = UINT8_MAX;
	static int32_t t0 = -14760221;

    t0 = (x1!=(x2>(x3<=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 257660253U;
	int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = 180;

    t1 = (x5!=(x6>(x7<=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 302029634;
	int16_t x10 = INT16_MIN;
	static uint16_t x11 = 358U;
	volatile int32_t t2 = -37188;

    t2 = (x9!=(x10>(x11<=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -31985692LL;
	static uint8_t x15 = 11U;
	static volatile int8_t x16 = -1;

    t3 = (x13!=(x14>(x15<=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -405;

    t4 = (x17!=(x18>(x19<=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	static int64_t x22 = 3968854108451269133LL;
	uint8_t x23 = UINT8_MAX;
	int32_t t5 = -39053793;

    t5 = (x21!=(x22>(x23<=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	int64_t x26 = INT64_MAX;
	int8_t x27 = 13;
	volatile int32_t t6 = 1011417;

    t6 = (x25!=(x26>(x27<=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x32 = INT16_MIN;
	int32_t t7 = 126;

    t7 = (x29!=(x30>(x31<=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 2;

    t8 = (x33!=(x34>(x35<=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int64_t x39 = INT64_MIN;
	int32_t t9 = -17;

    t9 = (x37!=(x38>(x39<=x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	static int16_t x42 = 43;
	volatile int8_t x43 = INT8_MAX;
	volatile int32_t t10 = -1282330;

    t10 = (x41!=(x42>(x43<=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	int64_t x47 = -1LL;
	int8_t x48 = -1;
	volatile int32_t t11 = -403;

    t11 = (x45!=(x46>(x47<=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 3;

    t12 = (x49!=(x50>(x51<=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = 1U;
	static int16_t x55 = -1;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 0;

    t13 = (x53!=(x54>(x55<=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	int32_t x58 = INT32_MIN;
	volatile int32_t x60 = 1;
	int32_t t14 = 147;

    t14 = (x57!=(x58>(x59<=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int64_t x62 = -1LL;
	int64_t x63 = 0LL;
	static volatile uint64_t x64 = UINT64_MAX;

    t15 = (x61!=(x62>(x63<=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -120101290;
	int64_t x66 = INT64_MAX;
	volatile uint8_t x67 = UINT8_MAX;
	int64_t x68 = INT64_MAX;
	int32_t t16 = -3020543;

    t16 = (x65!=(x66>(x67<=x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	uint32_t x71 = UINT32_MAX;
	int32_t t17 = 1;

    t17 = (x69!=(x70>(x71<=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int64_t x74 = INT64_MAX;
	uint64_t x75 = 1769649276LLU;
	volatile uint64_t x76 = 644814880799725540LLU;
	static int32_t t18 = -1927;

    t18 = (x73!=(x74>(x75<=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = 2036966801642LL;
	int16_t x78 = 0;
	int8_t x79 = INT8_MAX;
	uint32_t x80 = 1628399191U;
	static volatile int32_t t19 = 26569050;

    t19 = (x77!=(x78>(x79<=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MAX;
	uint16_t x82 = 315U;
	volatile int32_t x83 = INT32_MIN;

    t20 = (x81!=(x82>(x83<=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -18;
	int16_t x86 = 52;
	volatile int8_t x87 = 0;
	static volatile uint16_t x88 = UINT16_MAX;
	int32_t t21 = -9824826;

    t21 = (x85!=(x86>(x87<=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x89 = 1583972177515098228LLU;
	int32_t x90 = INT32_MAX;
	volatile int32_t t22 = -3132200;

    t22 = (x89!=(x90>(x91<=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	static uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MAX;
	int32_t t23 = 103;

    t23 = (x93!=(x94>(x95<=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = 23U;
	int16_t x100 = -1;
	int32_t t24 = -131;

    t24 = (x97!=(x98>(x99<=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = -2;
	volatile int64_t x102 = -10557869832LL;
	static volatile int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -4;

    t25 = (x101!=(x102>(x103<=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	static int16_t x106 = -1;
	int16_t x107 = INT16_MAX;
	uint32_t x108 = UINT32_MAX;
	static volatile int32_t t26 = 326618150;

    t26 = (x105!=(x106>(x107<=x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x110 = 54U;
	int16_t x111 = -1;
	volatile int16_t x112 = 248;
	int32_t t27 = -90784393;

    t27 = (x109!=(x110>(x111<=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MIN;
	int8_t x115 = -3;
	int32_t t28 = 1386;

    t28 = (x113!=(x114>(x115<=x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -13;
	volatile uint64_t x118 = 505598206LLU;
	uint16_t x119 = UINT16_MAX;
	int32_t t29 = 24397870;

    t29 = (x117!=(x118>(x119<=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	int32_t x122 = -452083;
	uint64_t x123 = UINT64_MAX;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = 1025372807;

    t30 = (x121!=(x122>(x123<=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	int8_t x128 = 1;
	int32_t t31 = 25734247;

    t31 = (x125!=(x126>(x127<=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = INT32_MAX;
	volatile uint8_t x132 = 2U;
	volatile int32_t t32 = -3239;

    t32 = (x129!=(x130>(x131<=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x134 = -1LL;
	int8_t x135 = INT8_MIN;
	static volatile uint64_t x136 = 46645LLU;
	int32_t t33 = -19432871;

    t33 = (x133!=(x134>(x135<=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 33095419;
	uint32_t x138 = 7156057U;
	int16_t x139 = INT16_MIN;
	static volatile int32_t t34 = -15;

    t34 = (x137!=(x138>(x139<=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	volatile int16_t x142 = 1880;
	int64_t x143 = INT64_MAX;
	static volatile int32_t x144 = INT32_MIN;

    t35 = (x141!=(x142>(x143<=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = 1487LL;
	uint8_t x146 = UINT8_MAX;
	uint64_t x147 = 153677043LLU;
	int8_t x148 = -5;
	int32_t t36 = 7005646;

    t36 = (x145!=(x146>(x147<=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = INT8_MIN;
	uint16_t x150 = 785U;
	static uint16_t x151 = 1752U;
	volatile uint16_t x152 = 1U;
	static int32_t t37 = -659316;

    t37 = (x149!=(x150>(x151<=x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MAX;
	volatile int8_t x154 = 1;
	static int8_t x156 = INT8_MIN;
	static volatile int32_t t38 = 3115;

    t38 = (x153!=(x154>(x155<=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = UINT32_MAX;
	int32_t x159 = 22798;
	volatile int16_t x160 = INT16_MIN;
	int32_t t39 = 25428734;

    t39 = (x157!=(x158>(x159<=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	int8_t x162 = 2;
	int8_t x163 = INT8_MIN;
	static int64_t x164 = 81139752LL;
	volatile int32_t t40 = -640;

    t40 = (x161!=(x162>(x163<=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	static int64_t x167 = INT64_MIN;
	int16_t x168 = -1;
	volatile int32_t t41 = 1;

    t41 = (x165!=(x166>(x167<=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 1;
	static int16_t x170 = INT16_MAX;
	uint16_t x171 = UINT16_MAX;
	static uint16_t x172 = UINT16_MAX;
	int32_t t42 = 335281799;

    t42 = (x169!=(x170>(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -29407851LL;
	int64_t x174 = 1013031726LL;
	int16_t x175 = INT16_MAX;
	uint32_t x176 = 4942U;
	volatile int32_t t43 = 12222;

    t43 = (x173!=(x174>(x175<=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x177 = 4525U;
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = 2082;
	int8_t x180 = -3;
	int32_t t44 = 33;

    t44 = (x177!=(x178>(x179<=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 10U;
	static uint32_t x182 = 1806975899U;
	static int32_t x183 = INT32_MAX;

    t45 = (x181!=(x182>(x183<=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x186 = INT64_MIN;
	static volatile int64_t x187 = -1LL;
	int64_t x188 = INT64_MAX;
	int32_t t46 = 28;

    t46 = (x185!=(x186>(x187<=x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x191 = 5U;

    t47 = (x189!=(x190>(x191<=x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	volatile int16_t x194 = INT16_MAX;
	int8_t x196 = -1;
	static int32_t t48 = -155022;

    t48 = (x193!=(x194>(x195<=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 2263243740313LLU;
	uint16_t x199 = 2487U;
	static int32_t x200 = 13374030;
	int32_t t49 = 571;

    t49 = (x197!=(x198>(x199<=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = 0;
	volatile int8_t x202 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t50 = 8362001;

    t50 = (x201!=(x202>(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x207 = INT16_MIN;
	static uint64_t x208 = 887392737799103820LLU;
	int32_t t51 = -186012;

    t51 = (x205!=(x206>(x207<=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MAX;
	volatile int64_t x212 = -865965LL;
	int32_t t52 = -388287;

    t52 = (x209!=(x210>(x211<=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	static int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MIN;
	static int16_t x216 = 2;
	int32_t t53 = 0;

    t53 = (x213!=(x214>(x215<=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = INT32_MAX;
	int64_t x219 = INT64_MAX;
	volatile uint32_t x220 = UINT32_MAX;
	int32_t t54 = -418265;

    t54 = (x217!=(x218>(x219<=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = INT64_MIN;
	int64_t x223 = -55799LL;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 249859518;

    t55 = (x221!=(x222>(x223<=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = 72178398LL;
	uint8_t x228 = 7U;
	volatile int32_t t56 = -41251897;

    t56 = (x225!=(x226>(x227<=x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 430304730LL;
	uint32_t x230 = 87U;
	uint16_t x231 = 30817U;
	volatile int32_t t57 = -976842529;

    t57 = (x229!=(x230>(x231<=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = 10654;
	uint64_t x234 = 1276564990LLU;
	int32_t x235 = -944579;
	int64_t x236 = INT64_MIN;
	static int32_t t58 = -62117;

    t58 = (x233!=(x234>(x235<=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	volatile int32_t x239 = INT32_MAX;
	int64_t x240 = -7LL;
	static volatile int32_t t59 = 90120770;

    t59 = (x237!=(x238>(x239<=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 976U;
	uint32_t x242 = UINT32_MAX;
	uint8_t x243 = 55U;
	static int64_t x244 = INT64_MIN;

    t60 = (x241!=(x242>(x243<=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 5353U;
	volatile int8_t x246 = -2;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MAX;
	int32_t t61 = -654;

    t61 = (x245!=(x246>(x247<=x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = INT16_MAX;
	volatile uint64_t x251 = UINT64_MAX;
	int32_t t62 = -59;

    t62 = (x249!=(x250>(x251<=x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 2;
	static int32_t x254 = INT32_MIN;
	volatile uint32_t x256 = 1U;
	volatile int32_t t63 = 1;

    t63 = (x253!=(x254>(x255<=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	static int64_t x258 = INT64_MIN;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int32_t t64 = 0;

    t64 = (x257!=(x258>(x259<=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = -1;
	int64_t x262 = -1LL;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 1;

    t65 = (x261!=(x262>(x263<=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x265 = 13985859317950LLU;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = INT32_MAX;
	static int8_t x268 = 3;
	int32_t t66 = -28;

    t66 = (x265!=(x266>(x267<=x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = INT16_MIN;
	int8_t x272 = -1;
	volatile int32_t t67 = -108438;

    t67 = (x269!=(x270>(x271<=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = UINT32_MAX;
	static int8_t x275 = -3;
	static volatile int32_t x276 = -1;

    t68 = (x273!=(x274>(x275<=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = -1;
	static volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MAX;

    t69 = (x277!=(x278>(x279<=x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x283 = INT16_MIN;
	uint8_t x284 = 14U;
	volatile int32_t t70 = -3306519;

    t70 = (x281!=(x282>(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	uint8_t x287 = 0U;
	int8_t x288 = -1;
	volatile int32_t t71 = 55718;

    t71 = (x285!=(x286>(x287<=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x291 = -1;
	static int16_t x292 = INT16_MIN;
	int32_t t72 = -22027;

    t72 = (x289!=(x290>(x291<=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = 17688LLU;
	volatile int32_t x295 = INT32_MIN;
	int16_t x296 = -307;
	int32_t t73 = -2;

    t73 = (x293!=(x294>(x295<=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = -1LL;
	volatile uint32_t x300 = 176932742U;
	int32_t t74 = -4842615;

    t74 = (x297!=(x298>(x299<=x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	volatile uint32_t x302 = 581845U;
	uint32_t x303 = 2859U;
	uint16_t x304 = UINT16_MAX;

    t75 = (x301!=(x302>(x303<=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = INT64_MIN;
	static int16_t x306 = -2;
	static int64_t x307 = -357591184LL;
	uint32_t x308 = UINT32_MAX;
	int32_t t76 = -68;

    t76 = (x305!=(x306>(x307<=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -328511644LL;
	int32_t t77 = 2923;

    t77 = (x309!=(x310>(x311<=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = INT16_MIN;
	static volatile int8_t x314 = -10;

    t78 = (x313!=(x314>(x315<=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x318 = 0U;
	static int32_t x319 = -11681;
	static int32_t t79 = -319;

    t79 = (x317!=(x318>(x319<=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x322 = 19;
	volatile int32_t t80 = 115;

    t80 = (x321!=(x322>(x323<=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x326 = 822U;
	int32_t x327 = -259489060;
	uint64_t x328 = 5643071LLU;

    t81 = (x325!=(x326>(x327<=x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x330 = UINT64_MAX;
	int32_t x331 = 3;
	volatile int32_t t82 = 951;

    t82 = (x329!=(x330>(x331<=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	int32_t x334 = INT32_MIN;
	int16_t x336 = INT16_MAX;
	static int32_t t83 = 152;

    t83 = (x333!=(x334>(x335<=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = INT64_MIN;
	int32_t x338 = 5;
	int64_t x340 = INT64_MAX;
	int32_t t84 = 7907;

    t84 = (x337!=(x338>(x339<=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 224984LL;
	uint32_t x342 = 9U;
	static uint16_t x343 = UINT16_MAX;
	static int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -368577;

    t85 = (x341!=(x342>(x343<=x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	uint32_t x346 = UINT32_MAX;
	volatile int64_t x347 = INT64_MIN;
	uint16_t x348 = 2U;

    t86 = (x345!=(x346>(x347<=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = 2140;
	volatile int8_t x350 = 4;
	volatile int16_t x352 = -9991;
	volatile int32_t t87 = -23446163;

    t87 = (x349!=(x350>(x351<=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = INT64_MIN;
	static uint16_t x355 = 1U;
	int32_t t88 = 14;

    t88 = (x353!=(x354>(x355<=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = INT16_MIN;
	static int16_t x359 = INT16_MIN;
	int8_t x360 = 1;
	int32_t t89 = 19774036;

    t89 = (x357!=(x358>(x359<=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x362 = 309921U;
	uint8_t x364 = 13U;
	volatile int32_t t90 = -363;

    t90 = (x361!=(x362>(x363<=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x366 = 10064U;
	int16_t x367 = -1;
	uint8_t x368 = 0U;

    t91 = (x365!=(x366>(x367<=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	volatile int64_t x370 = -1LL;
	int64_t x371 = INT64_MIN;
	int8_t x372 = -1;
	static int32_t t92 = 955340;

    t92 = (x369!=(x370>(x371<=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MAX;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = 78628606830LL;
	volatile int32_t t93 = -6720481;

    t93 = (x373!=(x374>(x375<=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x377 = 12473618U;
	int8_t x378 = 15;
	uint32_t x379 = 715U;
	static int64_t x380 = INT64_MAX;

    t94 = (x377!=(x378>(x379<=x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = 3240975976456502LL;
	int16_t x384 = 34;
	static volatile int32_t t95 = 46289;

    t95 = (x381!=(x382>(x383<=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	volatile int32_t t96 = 11509;

    t96 = (x385!=(x386>(x387<=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 43U;
	int64_t x390 = INT64_MAX;
	int32_t x391 = -471595;
	uint32_t x392 = 62309496U;
	int32_t t97 = 128032;

    t97 = (x389!=(x390>(x391<=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = -37;
	int32_t x394 = INT32_MAX;
	int64_t x396 = 14LL;
	volatile int32_t t98 = -21;

    t98 = (x393!=(x394>(x395<=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MAX;
	uint16_t x398 = 1U;
	int32_t x399 = INT32_MIN;
	static volatile int32_t t99 = -2968396;

    t99 = (x397!=(x398>(x399<=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x401 = 83U;
	static int16_t x402 = INT16_MAX;
	volatile int32_t x404 = INT32_MAX;
	int32_t t100 = -3;

    t100 = (x401!=(x402>(x403<=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile uint8_t x406 = UINT8_MAX;
	static int32_t x407 = -1;
	int32_t t101 = -1;

    t101 = (x405!=(x406>(x407<=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	uint16_t x410 = 2784U;
	int32_t x411 = -1;
	int64_t x412 = -203LL;
	volatile int32_t t102 = -134232927;

    t102 = (x409!=(x410>(x411<=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	uint8_t x414 = 0U;
	uint16_t x415 = UINT16_MAX;
	volatile int32_t t103 = -122250869;

    t103 = (x413!=(x414>(x415<=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 29U;
	int16_t x418 = INT16_MAX;
	int64_t x419 = INT64_MIN;
	uint32_t x420 = 2U;
	volatile int32_t t104 = -135953;

    t104 = (x417!=(x418>(x419<=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x421 = -361327169477671119LL;
	int8_t x424 = INT8_MAX;
	int32_t t105 = -22;

    t105 = (x421!=(x422>(x423<=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MIN;
	uint64_t x427 = 614565901LLU;
	volatile int32_t t106 = 65363;

    t106 = (x425!=(x426>(x427<=x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 62;
	int16_t x430 = -1;
	uint8_t x431 = 29U;
	int16_t x432 = INT16_MIN;
	int32_t t107 = -577415;

    t107 = (x429!=(x430>(x431<=x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x435 = INT16_MAX;
	int32_t t108 = 4230;

    t108 = (x433!=(x434>(x435<=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x437 = UINT64_MAX;
	uint32_t x439 = 28228U;
	volatile int32_t x440 = INT32_MAX;

    t109 = (x437!=(x438>(x439<=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	volatile uint8_t x442 = 9U;
	int32_t x443 = INT32_MAX;
	volatile int32_t t110 = 96837;

    t110 = (x441!=(x442>(x443<=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	int32_t x446 = INT32_MAX;
	volatile uint32_t x448 = 3989896U;
	int32_t t111 = 118484;

    t111 = (x445!=(x446>(x447<=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	int64_t x450 = INT64_MIN;
	uint8_t x452 = UINT8_MAX;
	int32_t t112 = -490116;

    t112 = (x449!=(x450>(x451<=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MAX;
	volatile int32_t x454 = INT32_MIN;
	static int64_t x455 = INT64_MIN;
	uint8_t x456 = 48U;

    t113 = (x453!=(x454>(x455<=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	int32_t x459 = -296;
	uint8_t x460 = UINT8_MAX;
	int32_t t114 = 36165973;

    t114 = (x457!=(x458>(x459<=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	static uint8_t x463 = 27U;
	uint32_t x464 = UINT32_MAX;
	int32_t t115 = -41621;

    t115 = (x461!=(x462>(x463<=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = INT32_MIN;
	volatile int8_t x467 = INT8_MIN;
	static volatile int64_t x468 = -1LL;
	static volatile int32_t t116 = 1;

    t116 = (x465!=(x466>(x467<=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = INT32_MIN;
	volatile int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MAX;
	uint16_t x472 = 16333U;
	int32_t t117 = -1734585;

    t117 = (x469!=(x470>(x471<=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 7;
	volatile int8_t x475 = INT8_MIN;
	int32_t t118 = 496;

    t118 = (x473!=(x474>(x475<=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 0U;
	int32_t x479 = 11738;
	static uint32_t x480 = 2021U;
	int32_t t119 = 1;

    t119 = (x477!=(x478>(x479<=x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	int64_t x482 = 1LL;
	uint16_t x483 = 15293U;
	int8_t x484 = INT8_MAX;
	int32_t t120 = -423;

    t120 = (x481!=(x482>(x483<=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 25847601LLU;
	int64_t x487 = INT64_MIN;
	uint64_t x488 = UINT64_MAX;
	int32_t t121 = 58;

    t121 = (x485!=(x486>(x487<=x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x489 = 120905603047LLU;
	uint32_t x490 = 1382728184U;
	uint32_t x491 = 62122611U;
	int64_t x492 = INT64_MAX;
	volatile int32_t t122 = 267758;

    t122 = (x489!=(x490>(x491<=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MAX;
	static int16_t x494 = INT16_MAX;
	uint8_t x495 = UINT8_MAX;
	volatile int8_t x496 = -1;

    t123 = (x493!=(x494>(x495<=x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 0U;
	int16_t x498 = -1;
	volatile uint64_t x499 = 308024LLU;
	int64_t x500 = 101895919406156886LL;
	volatile int32_t t124 = -18415;

    t124 = (x497!=(x498>(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x502 = -1;
	volatile uint32_t x503 = 254534037U;
	int16_t x504 = -6336;

    t125 = (x501!=(x502>(x503<=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x506 = 1U;
	volatile int64_t x507 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t126 = 90176815;

    t126 = (x505!=(x506>(x507<=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = -1;
	int64_t x511 = INT64_MIN;
	volatile int32_t t127 = 1;

    t127 = (x509!=(x510>(x511<=x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int8_t x514 = INT8_MIN;
	static volatile int32_t t128 = -75736;

    t128 = (x513!=(x514>(x515<=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x519 = UINT32_MAX;
	int64_t x520 = -1LL;
	volatile int32_t t129 = 30566;

    t129 = (x517!=(x518>(x519<=x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -226;
	volatile uint32_t x522 = UINT32_MAX;
	int32_t x523 = 1;
	static volatile int32_t t130 = -3;

    t130 = (x521!=(x522>(x523<=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = UINT32_MAX;
	volatile uint64_t x526 = 1265020208755LLU;
	static volatile int64_t x527 = -223896304LL;
	int32_t x528 = -1;
	volatile int32_t t131 = -6205;

    t131 = (x525!=(x526>(x527<=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 1;
	int8_t x530 = -1;
	int16_t x532 = INT16_MIN;
	int32_t t132 = -1606;

    t132 = (x529!=(x530>(x531<=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	volatile int8_t x535 = INT8_MIN;
	static volatile int32_t t133 = -513928973;

    t133 = (x533!=(x534>(x535<=x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = INT16_MAX;
	int32_t x539 = -21581;
	int64_t x540 = INT64_MIN;
	volatile int32_t t134 = -1696030;

    t134 = (x537!=(x538>(x539<=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = 7615852058279LL;
	int8_t x542 = 10;
	uint16_t x543 = 1U;

    t135 = (x541!=(x542>(x543<=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	volatile int8_t x547 = INT8_MIN;
	volatile int32_t t136 = -30;

    t136 = (x545!=(x546>(x547<=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -1;
	uint16_t x550 = 10U;
	static int32_t x551 = -718;

    t137 = (x549!=(x550>(x551<=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = 1;
	int8_t x554 = -24;
	int32_t x555 = INT32_MIN;
	uint32_t x556 = 97515999U;
	static int32_t t138 = -2003430;

    t138 = (x553!=(x554>(x555<=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = INT32_MIN;
	int64_t x559 = -2334129796LL;
	static volatile int64_t x560 = -1LL;

    t139 = (x557!=(x558>(x559<=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	uint16_t x562 = 765U;
	int32_t x564 = 1991885;

    t140 = (x561!=(x562>(x563<=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -3670848700359LL;
	static int32_t x566 = INT32_MIN;
	uint32_t x567 = 27U;
	int16_t x568 = INT16_MIN;
	static int32_t t141 = -2;

    t141 = (x565!=(x566>(x567<=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x569 = 5U;
	int32_t x570 = INT32_MIN;
	static volatile int8_t x572 = INT8_MIN;

    t142 = (x569!=(x570>(x571<=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = -1LL;
	static int8_t x575 = 19;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t143 = 960402532;

    t143 = (x573!=(x574>(x575<=x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 4981U;
	uint32_t x578 = UINT32_MAX;
	uint8_t x579 = UINT8_MAX;
	int32_t x580 = -220;
	volatile int32_t t144 = -4;

    t144 = (x577!=(x578>(x579<=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x582 = -5;
	uint32_t x583 = 6019906U;
	volatile int16_t x584 = INT16_MIN;
	volatile int32_t t145 = 176901644;

    t145 = (x581!=(x582>(x583<=x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = INT64_MAX;
	uint64_t x586 = 399689671595611735LLU;
	static int32_t x587 = -1;
	int8_t x588 = -49;
	volatile int32_t t146 = 21521;

    t146 = (x585!=(x586>(x587<=x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = -38;
	int16_t x591 = INT16_MIN;
	uint8_t x592 = 13U;
	volatile int32_t t147 = -2938889;

    t147 = (x589!=(x590>(x591<=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -6239501300LL;
	volatile int64_t x595 = INT64_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -777671;

    t148 = (x593!=(x594>(x595<=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -1LL;
	uint8_t x598 = 1U;
	int8_t x599 = INT8_MAX;
	int64_t x600 = INT64_MIN;
	volatile int32_t t149 = -5;

    t149 = (x597!=(x598>(x599<=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = -1;
	int16_t x602 = INT16_MIN;
	static int16_t x603 = 204;
	int16_t x604 = -3155;
	int32_t t150 = 1;

    t150 = (x601!=(x602>(x603<=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x605 = UINT16_MAX;
	int8_t x606 = 2;
	static uint16_t x607 = UINT16_MAX;

    t151 = (x605!=(x606>(x607<=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	static volatile int32_t x610 = INT32_MIN;
	int16_t x611 = 12437;
	static volatile int16_t x612 = INT16_MAX;
	static int32_t t152 = 108;

    t152 = (x609!=(x610>(x611<=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 4U;
	int32_t x614 = INT32_MIN;
	int16_t x615 = -1;
	static volatile int32_t t153 = -49587628;

    t153 = (x613!=(x614>(x615<=x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	int64_t x619 = INT64_MIN;
	uint64_t x620 = 1765LLU;

    t154 = (x617!=(x618>(x619<=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	int16_t x623 = 1511;
	int32_t x624 = INT32_MAX;
	static volatile int32_t t155 = -52323;

    t155 = (x621!=(x622>(x623<=x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	static uint32_t x626 = 9641443U;
	int64_t x627 = INT64_MAX;
	uint32_t x628 = 4686906U;
	static int32_t t156 = -1;

    t156 = (x625!=(x626>(x627<=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 21U;
	int8_t x630 = INT8_MAX;
	int16_t x631 = 65;
	static int32_t x632 = -23;
	int32_t t157 = -25;

    t157 = (x629!=(x630>(x631<=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x633 = 1U;
	int32_t x634 = -156;
	int32_t x635 = INT32_MIN;
	uint64_t x636 = 274966841258020LLU;
	int32_t t158 = -2888;

    t158 = (x633!=(x634>(x635<=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x638 = 21U;
	int16_t x639 = 6;
	int8_t x640 = -1;
	volatile int32_t t159 = 10671386;

    t159 = (x637!=(x638>(x639<=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = 11U;
	uint16_t x644 = 9U;

    t160 = (x641!=(x642>(x643<=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	uint8_t x646 = 10U;
	int64_t x647 = -1LL;
	int32_t x648 = INT32_MAX;
	volatile int32_t t161 = -28124906;

    t161 = (x645!=(x646>(x647<=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 5U;
	volatile uint16_t x650 = 162U;
	int16_t x651 = 677;
	static int8_t x652 = -54;
	volatile int32_t t162 = -50708513;

    t162 = (x649!=(x650>(x651<=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	static uint8_t x654 = 19U;
	uint64_t x655 = 8054LLU;
	uint8_t x656 = 1U;
	static int32_t t163 = 6065;

    t163 = (x653!=(x654>(x655<=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 1848157606869214LL;
	static volatile int32_t x659 = -1;
	int16_t x660 = INT16_MIN;
	static int32_t t164 = 31;

    t164 = (x657!=(x658>(x659<=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 27;
	int16_t x662 = -1;
	int8_t x663 = INT8_MIN;
	uint8_t x664 = UINT8_MAX;
	int32_t t165 = -6705642;

    t165 = (x661!=(x662>(x663<=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = -1;
	int8_t x666 = -1;
	int8_t x667 = INT8_MIN;
	int64_t x668 = INT64_MIN;
	volatile int32_t t166 = 268086;

    t166 = (x665!=(x666>(x667<=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = UINT16_MAX;
	static int8_t x670 = 3;
	int64_t x671 = INT64_MIN;
	volatile int32_t t167 = -809;

    t167 = (x669!=(x670>(x671<=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int64_t x674 = INT64_MIN;
	uint64_t x675 = 84LLU;
	int8_t x676 = 47;
	static int32_t t168 = 431;

    t168 = (x673!=(x674>(x675<=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	volatile int8_t x678 = -1;
	int32_t x680 = 0;
	int32_t t169 = -218392289;

    t169 = (x677!=(x678>(x679<=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = INT16_MAX;
	int8_t x683 = -1;
	int8_t x684 = 2;
	int32_t t170 = -1030228041;

    t170 = (x681!=(x682>(x683<=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MIN;
	volatile uint8_t x686 = 81U;
	int64_t x687 = -1LL;
	volatile int8_t x688 = -11;

    t171 = (x685!=(x686>(x687<=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1075;
	uint8_t x690 = 0U;
	int8_t x691 = INT8_MIN;
	int8_t x692 = 0;
	int32_t t172 = 620;

    t172 = (x689!=(x690>(x691<=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = -6LL;
	volatile int32_t t173 = 8014;

    t173 = (x693!=(x694>(x695<=x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = INT8_MIN;
	int64_t x698 = INT64_MIN;
	uint64_t x699 = UINT64_MAX;
	static uint8_t x700 = 0U;
	volatile int32_t t174 = 1;

    t174 = (x697!=(x698>(x699<=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = 3;
	int64_t x703 = 1294LL;
	int64_t x704 = 9329782LL;
	int32_t t175 = 111271;

    t175 = (x701!=(x702>(x703<=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	int8_t x707 = -1;
	int8_t x708 = -1;
	int32_t t176 = 1;

    t176 = (x705!=(x706>(x707<=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 3U;
	volatile int32_t x711 = INT32_MAX;
	volatile int8_t x712 = INT8_MAX;
	volatile int32_t t177 = -5395;

    t177 = (x709!=(x710>(x711<=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	int32_t x714 = INT32_MIN;
	uint32_t x715 = 881U;
	int16_t x716 = 7895;
	volatile int32_t t178 = 3420830;

    t178 = (x713!=(x714>(x715<=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = -1LL;
	int64_t x719 = INT64_MIN;
	uint64_t x720 = 23386674LLU;
	int32_t t179 = 18624932;

    t179 = (x717!=(x718>(x719<=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -149;
	int64_t x722 = INT64_MIN;
	uint16_t x723 = 100U;
	uint32_t x724 = 520U;
	volatile int32_t t180 = -1;

    t180 = (x721!=(x722>(x723<=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -6;
	uint32_t x726 = UINT32_MAX;
	int16_t x727 = INT16_MIN;
	int32_t x728 = INT32_MAX;
	int32_t t181 = 1520951;

    t181 = (x725!=(x726>(x727<=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MAX;
	int16_t x730 = -1;
	int32_t x731 = -902938;
	static int64_t x732 = INT64_MAX;
	static volatile int32_t t182 = -4908426;

    t182 = (x729!=(x730>(x731<=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	int16_t x734 = 2;
	int32_t x735 = INT32_MIN;
	int16_t x736 = -305;
	int32_t t183 = -191409664;

    t183 = (x733!=(x734>(x735<=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = INT16_MIN;
	uint16_t x738 = 513U;
	static uint32_t x740 = UINT32_MAX;
	volatile int32_t t184 = -35084951;

    t184 = (x737!=(x738>(x739<=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x742 = INT16_MAX;
	int32_t x743 = INT32_MIN;
	int32_t t185 = -64614;

    t185 = (x741!=(x742>(x743<=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -35823701832510469LL;
	int32_t x746 = INT32_MAX;
	int32_t t186 = 484789603;

    t186 = (x745!=(x746>(x747<=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 84U;
	int64_t x750 = INT64_MIN;
	volatile int32_t x752 = INT32_MIN;
	int32_t t187 = -403763;

    t187 = (x749!=(x750>(x751<=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	int64_t x754 = -276620052061575761LL;
	int16_t x755 = -1;
	volatile int32_t x756 = -92730318;
	static int32_t t188 = -343;

    t188 = (x753!=(x754>(x755<=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x758 = -1;
	static volatile int32_t t189 = 0;

    t189 = (x757!=(x758>(x759<=x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int64_t x762 = INT64_MAX;
	uint64_t x763 = 120718350798LLU;
	int32_t t190 = 90153;

    t190 = (x761!=(x762>(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	volatile int64_t x767 = INT64_MIN;

    t191 = (x765!=(x766>(x767<=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	volatile int64_t x772 = INT64_MIN;
	int32_t t192 = -3;

    t192 = (x769!=(x770>(x771<=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = -1;
	int16_t x774 = INT16_MAX;
	int32_t x775 = 308014459;
	volatile int32_t t193 = -49149460;

    t193 = (x773!=(x774>(x775<=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	volatile uint32_t x779 = 75U;
	int64_t x780 = 294595LL;
	int32_t t194 = -1;

    t194 = (x777!=(x778>(x779<=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int32_t x782 = 1068097;
	volatile int32_t x784 = INT32_MIN;
	static int32_t t195 = -44587;

    t195 = (x781!=(x782>(x783<=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MAX;
	volatile int16_t x786 = 10516;
	uint32_t x787 = 898566115U;
	volatile int32_t t196 = 4030789;

    t196 = (x785!=(x786>(x787<=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = INT16_MAX;
	int32_t x790 = 7;
	uint16_t x792 = 0U;
	volatile int32_t t197 = 14;

    t197 = (x789!=(x790>(x791<=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x796 = INT8_MAX;
	int32_t t198 = 5097276;

    t198 = (x793!=(x794>(x795<=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	volatile int16_t x798 = -27;
	uint16_t x799 = 686U;
	int16_t x800 = -70;
	int32_t t199 = 1;

    t199 = (x797!=(x798>(x799<=x800)));

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

