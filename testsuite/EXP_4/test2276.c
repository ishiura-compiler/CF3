
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

static int32_t x1 = -2662160;
volatile int16_t x5 = -1;
volatile int32_t t1 = 2322;
int32_t x12 = INT32_MIN;
int32_t t2 = -14280427;
int64_t x13 = INT64_MIN;
uint8_t x14 = UINT8_MAX;
uint16_t x20 = 1U;
uint32_t x24 = 3U;
int32_t x27 = INT32_MAX;
volatile uint64_t x30 = 155302715306LLU;
static int16_t x32 = INT16_MIN;
static int8_t x33 = INT8_MAX;
int64_t x35 = -3509LL;
static int8_t x42 = -6;
int8_t x43 = -4;
int32_t t11 = -40;
int8_t x63 = 1;
static int16_t x64 = 2017;
static int8_t x65 = INT8_MIN;
volatile int32_t t17 = -969759;
volatile int8_t x76 = -1;
static int32_t t18 = 116734159;
uint8_t x84 = 4U;
uint32_t x91 = 815377787U;
int32_t t22 = 123;
static uint64_t x94 = UINT64_MAX;
static int16_t x99 = INT16_MAX;
int16_t x103 = 1992;
int32_t x106 = -1;
int8_t x114 = 2;
uint16_t x118 = 97U;
static int32_t x131 = INT32_MIN;
volatile int32_t t32 = -28056;
static uint16_t x137 = 40U;
static int16_t x148 = INT16_MIN;
volatile int32_t x153 = 56;
static int32_t t38 = -5560754;
volatile int64_t x157 = INT64_MIN;
int64_t x165 = 2003449410044922227LL;
static int32_t x170 = -1;
uint32_t x172 = UINT32_MAX;
uint8_t x176 = UINT8_MAX;
uint64_t x179 = UINT64_MAX;
static int32_t t44 = -1;
uint8_t x183 = UINT8_MAX;
int8_t x187 = INT8_MAX;
static uint8_t x188 = UINT8_MAX;
volatile int8_t x205 = -1;
static uint64_t x207 = UINT64_MAX;
volatile uint8_t x212 = UINT8_MAX;
uint32_t x213 = 14659557U;
volatile int64_t x223 = INT64_MIN;
static volatile int8_t x226 = INT8_MIN;
int16_t x230 = 1;
int16_t x233 = INT16_MIN;
static volatile int32_t t58 = -2;
int16_t x238 = INT16_MAX;
int64_t x245 = INT64_MIN;
volatile int32_t t61 = 491388255;
int32_t x255 = INT32_MIN;
uint16_t x259 = 14U;
int32_t x263 = 382;
volatile int8_t x267 = INT8_MIN;
int64_t x270 = INT64_MAX;
uint64_t x280 = 103914933071LLU;
volatile int16_t x283 = -3;
volatile int8_t x292 = -1;
volatile int16_t x301 = INT16_MIN;
int8_t x319 = -1;
volatile int64_t x322 = -1LL;
static volatile int32_t t80 = 236161371;
uint64_t x328 = UINT64_MAX;
static uint8_t x332 = 67U;
volatile int8_t x333 = INT8_MIN;
int8_t x335 = INT8_MIN;
int32_t x337 = -1;
int64_t x341 = INT64_MIN;
int32_t x344 = -5;
int8_t x356 = 0;
volatile uint16_t x361 = UINT16_MAX;
int32_t x365 = INT32_MIN;
int8_t x366 = INT8_MIN;
int32_t x368 = INT32_MIN;
static int16_t x374 = -14;
static int64_t x375 = INT64_MIN;
int16_t x378 = -1;
uint64_t x379 = 590211270699117LLU;
uint8_t x388 = 18U;
int8_t x393 = -8;
volatile int32_t x396 = 681698;
static int64_t x401 = INT64_MIN;
int32_t t100 = -2997024;
int16_t x405 = INT16_MIN;
uint8_t x407 = UINT8_MAX;
int8_t x408 = INT8_MAX;
uint64_t x412 = 182045953216863079LLU;
volatile uint8_t x413 = UINT8_MAX;
volatile int32_t t103 = -311;
int32_t t104 = 30641;
int8_t x423 = 13;
int32_t t105 = 5624243;
int64_t x430 = INT64_MIN;
volatile int32_t t107 = 5467746;
int32_t x441 = INT32_MAX;
int32_t t110 = -665;
volatile int32_t x446 = -12;
int8_t x447 = INT8_MAX;
int32_t t111 = 0;
volatile int32_t x450 = -1198603;
int16_t x456 = INT16_MIN;
volatile int32_t t114 = 0;
uint64_t x461 = UINT64_MAX;
int16_t x470 = -1;
int32_t x475 = INT32_MIN;
volatile int32_t t119 = -1;
volatile uint32_t x482 = UINT32_MAX;
static volatile int16_t x485 = 7;
static int32_t x486 = INT32_MAX;
int32_t x490 = INT32_MIN;
int32_t x499 = INT32_MIN;
int32_t t124 = -2459;
int8_t x512 = INT8_MIN;
int32_t t127 = -101;
volatile int32_t t129 = -3292421;
int32_t x529 = -7450477;
int64_t x532 = INT64_MAX;
volatile int64_t x533 = 10420LL;
int16_t x544 = -872;
volatile int32_t t135 = 306181530;
uint64_t x549 = 4106039706956023944LLU;
volatile int16_t x559 = -1;
int32_t x564 = -1;
int8_t x567 = -1;
uint16_t x570 = 1086U;
static volatile int8_t x571 = INT8_MIN;
volatile uint64_t x578 = 371268329313616LLU;
uint8_t x580 = 5U;
volatile uint32_t x584 = UINT32_MAX;
int16_t x586 = INT16_MIN;
int64_t x587 = INT64_MIN;
volatile uint32_t x593 = 2U;
int32_t x597 = -1837;
volatile int32_t x605 = -315;
int32_t x609 = 1;
int64_t x625 = INT64_MIN;
int8_t x630 = -1;
int64_t x633 = -1509528523680704343LL;
int64_t x639 = INT64_MAX;
volatile int32_t t161 = -26;
static int16_t x650 = -1;
static uint16_t x651 = 28823U;
int64_t x652 = -1LL;
uint32_t x654 = UINT32_MAX;
volatile int8_t x660 = -14;
int16_t x663 = 0;
volatile int64_t x669 = INT64_MIN;
uint8_t x672 = 112U;
volatile int32_t t167 = -47;
uint32_t x675 = UINT32_MAX;
static int64_t x678 = 0LL;
static volatile int64_t x679 = INT64_MIN;
static uint32_t x681 = 238724U;
static volatile uint64_t x683 = 1803380757LLU;
int16_t x687 = 3178;
int8_t x690 = INT8_MIN;
int32_t x692 = INT32_MAX;
int64_t x698 = 4271230564LL;
static volatile int32_t x699 = INT32_MAX;
static volatile int32_t t174 = -418917983;
static uint16_t x719 = 0U;
int32_t t182 = -57;
uint16_t x736 = UINT16_MAX;
static volatile int32_t x737 = -31647;
volatile int64_t x743 = INT64_MIN;
volatile int32_t t185 = 106261;
volatile int32_t t186 = -3083037;
int8_t x752 = 0;
int32_t x753 = INT32_MIN;
int32_t x766 = INT32_MIN;
uint16_t x768 = 0U;
static volatile int8_t x769 = INT8_MIN;
uint8_t x773 = UINT8_MAX;
static int64_t x778 = INT64_MAX;
int32_t x780 = INT32_MIN;
int32_t t194 = -526216530;
uint16_t x781 = UINT16_MAX;
static uint32_t x782 = 174U;
int32_t x791 = 280;
static volatile int16_t x792 = INT16_MIN;
static int32_t t197 = -1;
int16_t x794 = -9407;
int8_t x795 = -35;
volatile int32_t t198 = -11325439;
int64_t x797 = INT64_MAX;
int64_t x799 = INT64_MIN;


void f0(void) {
    	int64_t x2 = INT64_MAX;
	uint64_t x3 = 584934924461533LLU;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1;

    t0 = (x1==(x2>(x3&x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	volatile int64_t x7 = INT64_MIN;
	int64_t x8 = 606784774219402430LL;

    t1 = (x5==(x6>(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -26LL;
	static int8_t x10 = -2;
	uint8_t x11 = 65U;

    t2 = (x9==(x10>(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 24090;

    t3 = (x13==(x14>(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 23;
	int16_t x18 = INT16_MIN;
	static volatile int16_t x19 = INT16_MIN;
	volatile int32_t t4 = 1;

    t4 = (x17==(x18>(x19&x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MAX;
	static int32_t t5 = 140549;

    t5 = (x21==(x22>(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 18093215744184448LLU;
	volatile int16_t x26 = INT16_MIN;
	int16_t x28 = -1;
	static int32_t t6 = -482420230;

    t6 = (x25==(x26>(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	volatile int32_t x31 = INT32_MIN;
	volatile int32_t t7 = -18640;

    t7 = (x29==(x30>(x31&x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x34 = 2272U;
	uint16_t x36 = 3U;
	volatile int32_t t8 = -62189;

    t8 = (x33==(x34>(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 4U;
	uint32_t x38 = 3101U;
	uint16_t x39 = UINT16_MAX;
	static uint64_t x40 = UINT64_MAX;
	int32_t t9 = -108281184;

    t9 = (x37==(x38>(x39&x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = 592637;

    t10 = (x41==(x42>(x43&x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -7LL;
	int8_t x46 = -1;
	int8_t x47 = -1;
	volatile int32_t x48 = 87201441;

    t11 = (x45==(x46>(x47&x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = -1776317820024324609LL;
	int8_t x50 = -1;
	int16_t x51 = INT16_MIN;
	uint8_t x52 = 113U;
	volatile int32_t t12 = -173;

    t12 = (x49==(x50>(x51&x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	uint8_t x54 = 77U;
	volatile int8_t x55 = 0;
	int16_t x56 = -1;
	volatile int32_t t13 = 19;

    t13 = (x53==(x54>(x55&x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = INT8_MIN;
	static int32_t x59 = INT32_MAX;
	int8_t x60 = INT8_MAX;
	int32_t t14 = -7044550;

    t14 = (x57==(x58>(x59&x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 16;
	int32_t x62 = -1;
	int32_t t15 = 58;

    t15 = (x61==(x62>(x63&x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = UINT16_MAX;
	int8_t x67 = INT8_MIN;
	uint32_t x68 = 120097769U;
	static volatile int32_t t16 = -377;

    t16 = (x65==(x66>(x67&x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;
	int8_t x72 = -1;

    t17 = (x69==(x70>(x71&x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -112;
	int16_t x74 = -1;
	int64_t x75 = INT64_MIN;

    t18 = (x73==(x74>(x75&x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = 97271U;
	static int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MAX;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -14043658;

    t19 = (x77==(x78>(x79&x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 15578;
	uint32_t x82 = 3190U;
	volatile uint8_t x83 = UINT8_MAX;
	volatile int32_t t20 = -25583;

    t20 = (x81==(x82>(x83&x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 8616115603455206LLU;
	static int8_t x86 = 1;
	uint64_t x87 = UINT64_MAX;
	uint8_t x88 = 17U;
	static int32_t t21 = 193575;

    t21 = (x85==(x86>(x87&x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	int16_t x90 = -1;
	int32_t x92 = -1;

    t22 = (x89==(x90>(x91&x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 0U;
	int32_t x95 = 15853944;
	volatile uint64_t x96 = UINT64_MAX;
	static int32_t t23 = 0;

    t23 = (x93==(x94>(x95&x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 24U;
	uint32_t x98 = 21942225U;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 58595;

    t24 = (x97==(x98>(x99&x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	static volatile int32_t x102 = 272774;
	uint64_t x104 = 2281LLU;
	static int32_t t25 = -1199454;

    t25 = (x101==(x102>(x103&x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	uint64_t x107 = 31161697LLU;
	static volatile int16_t x108 = -1;
	static int32_t t26 = 523;

    t26 = (x105==(x106>(x107&x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	static uint64_t x110 = UINT64_MAX;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t27 = -105666;

    t27 = (x109==(x110>(x111&x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = UINT64_MAX;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 0;

    t28 = (x113==(x114>(x115&x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x117 = INT8_MIN;
	int8_t x119 = -1;
	volatile int16_t x120 = -1;
	static int32_t t29 = -100788247;

    t29 = (x117==(x118>(x119&x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = INT8_MIN;
	volatile uint64_t x122 = 501044LLU;
	uint8_t x123 = 3U;
	int8_t x124 = -1;
	volatile int32_t t30 = -2851;

    t30 = (x121==(x122>(x123&x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -370;
	int64_t x126 = -1LL;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = 1445554214686332113LL;
	volatile int32_t t31 = 2485;

    t31 = (x125==(x126>(x127&x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -10480;
	static int16_t x130 = -1;
	int64_t x132 = -1LL;

    t32 = (x129==(x130>(x131&x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 276U;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = 5838432U;
	volatile int8_t x136 = -1;
	volatile int32_t t33 = -122473810;

    t33 = (x133==(x134>(x135&x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x138 = -1;
	static int32_t x139 = 383;
	volatile uint8_t x140 = 5U;
	volatile int32_t t34 = 2296090;

    t34 = (x137==(x138>(x139&x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	static volatile int8_t x142 = INT8_MIN;
	static volatile int64_t x143 = 2822253392903989841LL;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 4;

    t35 = (x141==(x142>(x143&x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	int32_t x146 = -509710068;
	int32_t x147 = 16;
	int32_t t36 = 14079;

    t36 = (x145==(x146>(x147&x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	uint64_t x150 = 212272448711877203LLU;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = 1800U;
	int32_t t37 = 3336;

    t37 = (x149==(x150>(x151&x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = -1;
	int8_t x155 = -1;
	volatile int8_t x156 = -1;

    t38 = (x153==(x154>(x155&x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = UINT8_MAX;
	int16_t x159 = 38;
	volatile int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = 1;

    t39 = (x157==(x158>(x159&x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static int32_t x162 = -833748838;
	static volatile uint32_t x163 = 1098262231U;
	int16_t x164 = INT16_MAX;
	volatile int32_t t40 = 623106;

    t40 = (x161==(x162>(x163&x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x166 = 11U;
	static int32_t x167 = INT32_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 23383819;

    t41 = (x165==(x166>(x167&x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 648013198U;
	volatile uint64_t x171 = UINT64_MAX;
	volatile int32_t t42 = -51861;

    t42 = (x169==(x170>(x171&x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	static int8_t x174 = INT8_MIN;
	static uint64_t x175 = UINT64_MAX;
	int32_t t43 = -28857214;

    t43 = (x173==(x174>(x175&x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	static volatile int8_t x178 = INT8_MIN;
	static int64_t x180 = 0LL;

    t44 = (x177==(x178>(x179&x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	static int32_t x182 = 557705998;
	int16_t x184 = 268;
	int32_t t45 = -3352661;

    t45 = (x181==(x182>(x183&x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MAX;
	int16_t x186 = INT16_MIN;
	static volatile int32_t t46 = 17504;

    t46 = (x185==(x186>(x187&x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MAX;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	int8_t x192 = INT8_MIN;
	int32_t t47 = 1;

    t47 = (x189==(x190>(x191&x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 3714;
	int32_t x194 = INT32_MIN;
	volatile int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -213813;

    t48 = (x193==(x194>(x195&x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -816131582LL;
	int64_t x198 = -62259548119LL;
	int16_t x199 = 6;
	static int32_t x200 = -1;
	int32_t t49 = -16379;

    t49 = (x197==(x198>(x199&x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 40U;
	static int32_t x202 = INT32_MAX;
	int32_t x203 = INT32_MAX;
	uint8_t x204 = 30U;
	int32_t t50 = 4;

    t50 = (x201==(x202>(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = -31;
	static int8_t x208 = INT8_MIN;
	static volatile int32_t t51 = -263970;

    t51 = (x205==(x206>(x207&x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x209 = INT16_MIN;
	uint64_t x210 = UINT64_MAX;
	static uint8_t x211 = UINT8_MAX;
	static volatile int32_t t52 = -2887691;

    t52 = (x209==(x210>(x211&x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = INT64_MIN;
	int8_t x215 = -1;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -8159;

    t53 = (x213==(x214>(x215&x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = INT16_MAX;
	uint64_t x218 = UINT64_MAX;
	int8_t x219 = -1;
	volatile int64_t x220 = -1LL;
	static volatile int32_t t54 = 0;

    t54 = (x217==(x218>(x219&x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	volatile uint8_t x222 = 29U;
	uint64_t x224 = 67LLU;
	int32_t t55 = -49948;

    t55 = (x221==(x222>(x223&x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -602057;

    t56 = (x225==(x226>(x227&x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	static volatile int8_t x231 = INT8_MAX;
	static int16_t x232 = INT16_MAX;
	int32_t t57 = -44156;

    t57 = (x229==(x230>(x231&x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = -1;
	uint64_t x235 = 244LLU;
	volatile uint8_t x236 = 0U;

    t58 = (x233==(x234>(x235&x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	volatile int64_t x239 = 39790934355324LL;
	int8_t x240 = INT8_MAX;
	int32_t t59 = -1605;

    t59 = (x237==(x238>(x239&x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -177;
	static int64_t x242 = INT64_MIN;
	uint16_t x243 = 389U;
	int64_t x244 = -2914253809LL;
	volatile int32_t t60 = -2;

    t60 = (x241==(x242>(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x246 = 1806264013400182180LLU;
	int8_t x247 = -1;
	int64_t x248 = INT64_MAX;

    t61 = (x245==(x246>(x247&x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 1986394U;
	int32_t x250 = INT32_MAX;
	static int32_t x251 = -5198;
	volatile int8_t x252 = -1;
	int32_t t62 = 17;

    t62 = (x249==(x250>(x251&x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 37;
	int64_t x254 = 150001LL;
	static uint8_t x256 = 7U;
	volatile int32_t t63 = -15139;

    t63 = (x253==(x254>(x255&x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	int16_t x258 = 57;
	int64_t x260 = 4306919718873295LL;
	static int32_t t64 = -111920413;

    t64 = (x257==(x258>(x259&x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x261 = 1176011U;
	volatile uint32_t x262 = UINT32_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t65 = -15;

    t65 = (x261==(x262>(x263&x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	static int64_t x266 = -16876759LL;
	volatile uint32_t x268 = UINT32_MAX;
	int32_t t66 = 4046;

    t66 = (x265==(x266>(x267&x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	int64_t x271 = 1LL;
	volatile uint16_t x272 = 23897U;
	static volatile int32_t t67 = 24;

    t67 = (x269==(x270>(x271&x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = 31U;
	int16_t x274 = 31;
	static volatile int16_t x275 = 5;
	volatile uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 72790679;

    t68 = (x273==(x274>(x275&x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	int16_t x278 = -286;
	volatile uint64_t x279 = UINT64_MAX;
	volatile int32_t t69 = -6359;

    t69 = (x277==(x278>(x279&x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	volatile int32_t x282 = INT32_MAX;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t70 = 3;

    t70 = (x281==(x282>(x283&x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 2U;
	uint32_t x286 = 35068234U;
	static int64_t x287 = -2158218266886LL;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 965737;

    t71 = (x285==(x286>(x287&x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	int8_t x290 = -1;
	uint32_t x291 = 1648408U;
	volatile int32_t t72 = -14;

    t72 = (x289==(x290>(x291&x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	int32_t x294 = INT32_MAX;
	static uint32_t x295 = 10U;
	volatile uint16_t x296 = UINT16_MAX;
	int32_t t73 = -263;

    t73 = (x293==(x294>(x295&x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	int32_t x298 = -1490;
	uint16_t x299 = 3U;
	volatile uint32_t x300 = 54136U;
	volatile int32_t t74 = -545;

    t74 = (x297==(x298>(x299&x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = -27;
	static int64_t x303 = INT64_MAX;
	int64_t x304 = INT64_MIN;
	int32_t t75 = 0;

    t75 = (x301==(x302>(x303&x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x305 = UINT8_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 4839082U;
	int64_t x308 = 1778171652590LL;
	int32_t t76 = 3;

    t76 = (x305==(x306>(x307&x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -70LL;
	uint16_t x310 = 31U;
	static uint32_t x311 = 3049210U;
	volatile uint16_t x312 = 11U;
	volatile int32_t t77 = -1583834;

    t77 = (x309==(x310>(x311&x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	static uint8_t x314 = UINT8_MAX;
	static int64_t x315 = INT64_MIN;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t78 = 31037;

    t78 = (x313==(x314>(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	volatile int8_t x318 = INT8_MIN;
	uint8_t x320 = UINT8_MAX;
	static int32_t t79 = 91799;

    t79 = (x317==(x318>(x319&x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = 13LL;
	volatile int8_t x323 = -1;
	uint32_t x324 = 279U;

    t80 = (x321==(x322>(x323&x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 59614;
	uint8_t x326 = UINT8_MAX;
	uint32_t x327 = 58110U;
	int32_t t81 = 511;

    t81 = (x325==(x326>(x327&x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 21480U;
	static int8_t x330 = -13;
	int16_t x331 = INT16_MIN;
	int32_t t82 = -146792;

    t82 = (x329==(x330>(x331&x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -103;
	uint32_t x336 = 1074702U;
	int32_t t83 = 57582;

    t83 = (x333==(x334>(x335&x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = -1LL;
	static int64_t x339 = -1LL;
	int32_t x340 = -1;
	volatile int32_t t84 = 10966;

    t84 = (x337==(x338>(x339&x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = 22;
	volatile int8_t x343 = INT8_MIN;
	int32_t t85 = -3930;

    t85 = (x341==(x342>(x343&x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = 456755904000399658LLU;
	int32_t x346 = INT32_MIN;
	static int16_t x347 = -8;
	volatile int64_t x348 = -1874182161820044LL;
	volatile int32_t t86 = -2334;

    t86 = (x345==(x346>(x347&x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MAX;
	static int64_t x351 = INT64_MAX;
	uint8_t x352 = 0U;
	volatile int32_t t87 = -23231020;

    t87 = (x349==(x350>(x351&x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	int8_t x354 = INT8_MIN;
	volatile int32_t x355 = -1;
	static volatile int32_t t88 = 7168;

    t88 = (x353==(x354>(x355&x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	uint8_t x358 = 10U;
	static volatile uint16_t x359 = UINT16_MAX;
	static volatile uint16_t x360 = 882U;
	volatile int32_t t89 = -44110;

    t89 = (x357==(x358>(x359&x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x362 = INT32_MAX;
	int16_t x363 = 9;
	int64_t x364 = -78467891LL;
	int32_t t90 = 229371;

    t90 = (x361==(x362>(x363&x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x367 = INT8_MIN;
	volatile int32_t t91 = 53054527;

    t91 = (x365==(x366>(x367&x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 19U;
	int64_t x370 = 179817LL;
	int32_t x371 = -1;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -3;

    t92 = (x369==(x370>(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = 1431LLU;
	volatile int64_t x376 = -54064336601125LL;
	static int32_t t93 = 137720;

    t93 = (x373==(x374>(x375&x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	volatile int16_t x380 = -1;
	int32_t t94 = -1842027;

    t94 = (x377==(x378>(x379&x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	static int8_t x382 = 5;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = 12133448887886LLU;
	int32_t t95 = 12961;

    t95 = (x381==(x382>(x383&x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 3U;
	int8_t x386 = 58;
	int16_t x387 = INT16_MIN;
	int32_t t96 = 35302;

    t96 = (x385==(x386>(x387&x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 0;
	volatile uint16_t x390 = 15792U;
	int16_t x391 = 4305;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = -1003663951;

    t97 = (x389==(x390>(x391&x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = 1433U;
	static uint32_t x395 = 54U;
	volatile int32_t t98 = -12;

    t98 = (x393==(x394>(x395&x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	volatile int16_t x398 = INT16_MAX;
	int64_t x399 = INT64_MIN;
	int32_t x400 = 24757859;
	static int32_t t99 = 58;

    t99 = (x397==(x398>(x399&x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x402 = INT8_MIN;
	int32_t x403 = -1;
	int64_t x404 = -1LL;

    t100 = (x401==(x402>(x403&x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x406 = 0;
	int32_t t101 = -108024;

    t101 = (x405==(x406>(x407&x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MAX;
	int16_t x410 = -2458;
	int8_t x411 = -1;
	static volatile int32_t t102 = -107;

    t102 = (x409==(x410>(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x414 = 4723U;
	uint64_t x415 = 2811267582LLU;
	int64_t x416 = 3416837186LL;

    t103 = (x413==(x414>(x415&x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int64_t x418 = 5776LL;
	uint16_t x419 = 76U;
	uint64_t x420 = 3598613376938347LLU;

    t104 = (x417==(x418>(x419&x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = INT16_MAX;
	uint64_t x422 = UINT64_MAX;
	int64_t x424 = INT64_MAX;

    t105 = (x421==(x422>(x423&x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = 491021588391903484LLU;
	static uint64_t x426 = 64668932966839LLU;
	uint64_t x427 = 16362894LLU;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = -18;

    t106 = (x425==(x426>(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x429 = 52755U;
	volatile int64_t x431 = 1388773611464055LL;
	int64_t x432 = 1408LL;

    t107 = (x429==(x430>(x431&x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = 2U;
	uint16_t x434 = UINT16_MAX;
	volatile int64_t x435 = INT64_MIN;
	int16_t x436 = -1;
	volatile int32_t t108 = -128682;

    t108 = (x433==(x434>(x435&x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	int8_t x438 = INT8_MAX;
	volatile uint32_t x439 = 659946489U;
	static int8_t x440 = 26;
	int32_t t109 = 18087;

    t109 = (x437==(x438>(x439&x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = INT16_MAX;
	static uint8_t x443 = 31U;
	int8_t x444 = -1;

    t110 = (x441==(x442>(x443&x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	uint16_t x448 = 1058U;

    t111 = (x445==(x446>(x447&x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	static int8_t x451 = -1;
	static uint32_t x452 = UINT32_MAX;
	int32_t t112 = -51541;

    t112 = (x449==(x450>(x451&x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	int8_t x454 = INT8_MAX;
	volatile uint64_t x455 = 103572009601564LLU;
	int32_t t113 = -893262568;

    t113 = (x453==(x454>(x455&x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 799735988U;
	volatile uint8_t x458 = UINT8_MAX;
	int16_t x459 = -1789;
	volatile uint8_t x460 = 15U;

    t114 = (x457==(x458>(x459&x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = 64523U;
	volatile uint32_t x463 = 528U;
	uint32_t x464 = 92055878U;
	volatile int32_t t115 = 70;

    t115 = (x461==(x462>(x463&x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = -15761;
	int16_t x466 = -1;
	volatile int16_t x467 = INT16_MIN;
	static int64_t x468 = INT64_MIN;
	int32_t t116 = 127116410;

    t116 = (x465==(x466>(x467&x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 92U;
	int32_t x471 = -101;
	int64_t x472 = -15553604149287LL;
	int32_t t117 = -302;

    t117 = (x469==(x470>(x471&x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 3736U;
	int16_t x474 = INT16_MAX;
	static volatile uint8_t x476 = 0U;
	volatile int32_t t118 = 164603;

    t118 = (x473==(x474>(x475&x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MAX;
	volatile int32_t x478 = -1;
	int64_t x479 = -131806075515702480LL;
	int8_t x480 = 3;

    t119 = (x477==(x478>(x479&x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 6491U;
	int32_t x483 = INT32_MAX;
	static int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -85600;

    t120 = (x481==(x482>(x483&x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x487 = 47U;
	volatile int32_t x488 = INT32_MIN;
	int32_t t121 = -71;

    t121 = (x485==(x486>(x487&x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = UINT64_MAX;
	uint16_t x491 = UINT16_MAX;
	uint16_t x492 = 2798U;
	static volatile int32_t t122 = 6645;

    t122 = (x489==(x490>(x491&x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	static uint16_t x494 = 15500U;
	int64_t x495 = INT64_MIN;
	uint32_t x496 = UINT32_MAX;
	static volatile int32_t t123 = 28966679;

    t123 = (x493==(x494>(x495&x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -1;
	static int8_t x498 = INT8_MIN;
	static int64_t x500 = -3124207817603LL;

    t124 = (x497==(x498>(x499&x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 4;
	uint16_t x502 = UINT16_MAX;
	int16_t x503 = INT16_MIN;
	uint16_t x504 = 14U;
	static int32_t t125 = -5290;

    t125 = (x501==(x502>(x503&x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	int32_t x506 = 467734972;
	volatile int8_t x507 = 4;
	int32_t x508 = 11724;
	static int32_t t126 = -27812;

    t126 = (x505==(x506>(x507&x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1011;
	int16_t x510 = 428;
	static int16_t x511 = INT16_MAX;

    t127 = (x509==(x510>(x511&x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x513 = INT32_MIN;
	int16_t x514 = INT16_MAX;
	volatile uint64_t x515 = 180452LLU;
	volatile int16_t x516 = INT16_MIN;
	static int32_t t128 = -46;

    t128 = (x513==(x514>(x515&x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	int32_t x518 = INT32_MIN;
	int32_t x519 = -1;
	uint64_t x520 = 16103897568873LLU;

    t129 = (x517==(x518>(x519&x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 24U;
	uint16_t x522 = 7U;
	int16_t x523 = 3;
	static int16_t x524 = -92;
	int32_t t130 = 21;

    t130 = (x521==(x522>(x523&x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = -11450874;
	int16_t x526 = INT16_MIN;
	volatile int8_t x527 = INT8_MIN;
	volatile int32_t x528 = -87869;
	static int32_t t131 = 60680;

    t131 = (x525==(x526>(x527&x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x530 = -3;
	int8_t x531 = INT8_MAX;
	volatile int32_t t132 = 6;

    t132 = (x529==(x530>(x531&x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x534 = INT32_MIN;
	int8_t x535 = -1;
	uint16_t x536 = 7191U;
	volatile int32_t t133 = -50965;

    t133 = (x533==(x534>(x535&x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	int32_t x538 = INT32_MIN;
	static volatile uint8_t x539 = 10U;
	int32_t x540 = INT32_MIN;
	static int32_t t134 = 13844000;

    t134 = (x537==(x538>(x539&x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = 7270898U;
	int16_t x542 = -7586;
	volatile uint8_t x543 = UINT8_MAX;

    t135 = (x541==(x542>(x543&x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = -3;
	int64_t x546 = INT64_MIN;
	volatile int32_t x547 = -3;
	static uint32_t x548 = UINT32_MAX;
	volatile int32_t t136 = 1823;

    t136 = (x545==(x546>(x547&x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = -28;
	volatile int64_t x551 = INT64_MIN;
	static int32_t x552 = 220335;
	volatile int32_t t137 = -1907835;

    t137 = (x549==(x550>(x551&x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int32_t x554 = -1;
	int16_t x555 = -1881;
	uint32_t x556 = 59U;
	volatile int32_t t138 = 843;

    t138 = (x553==(x554>(x555&x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = -3;
	static int64_t x558 = INT64_MIN;
	int16_t x560 = INT16_MAX;
	int32_t t139 = 192;

    t139 = (x557==(x558>(x559&x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = INT64_MIN;
	int16_t x562 = INT16_MIN;
	static int64_t x563 = INT64_MAX;
	int32_t t140 = 978;

    t140 = (x561==(x562>(x563&x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MAX;
	static volatile int8_t x566 = -1;
	uint16_t x568 = UINT16_MAX;
	static int32_t t141 = 2;

    t141 = (x565==(x566>(x567&x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	int8_t x572 = 1;
	static int32_t t142 = -9906;

    t142 = (x569==(x570>(x571&x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	volatile uint8_t x574 = 57U;
	volatile int32_t x575 = INT32_MIN;
	uint8_t x576 = 63U;
	volatile int32_t t143 = -3;

    t143 = (x573==(x574>(x575&x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	uint8_t x579 = 28U;
	volatile int32_t t144 = -49125869;

    t144 = (x577==(x578>(x579&x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -11984;
	uint16_t x582 = UINT16_MAX;
	uint8_t x583 = 12U;
	int32_t t145 = 3866;

    t145 = (x581==(x582>(x583&x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = UINT16_MAX;
	int64_t x588 = 1092182201150746LL;
	int32_t t146 = -1;

    t146 = (x585==(x586>(x587&x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	int64_t x590 = INT64_MAX;
	int8_t x591 = -1;
	uint16_t x592 = 196U;
	int32_t t147 = -193826;

    t147 = (x589==(x590>(x591&x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x594 = INT64_MIN;
	int64_t x595 = -125572392LL;
	uint8_t x596 = 4U;
	volatile int32_t t148 = -872997679;

    t148 = (x593==(x594>(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x598 = INT16_MIN;
	int16_t x599 = INT16_MAX;
	static uint8_t x600 = UINT8_MAX;
	int32_t t149 = -13040117;

    t149 = (x597==(x598>(x599&x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = -1;
	int32_t x602 = INT32_MAX;
	uint16_t x603 = 3U;
	uint64_t x604 = UINT64_MAX;
	volatile int32_t t150 = 680264;

    t150 = (x601==(x602>(x603&x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x606 = -1;
	uint8_t x607 = UINT8_MAX;
	int32_t x608 = INT32_MIN;
	static int32_t t151 = -147528;

    t151 = (x605==(x606>(x607&x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = 3U;
	int16_t x611 = -1;
	int16_t x612 = -15;
	volatile int32_t t152 = -18;

    t152 = (x609==(x610>(x611&x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = 65;
	int32_t x614 = -1;
	static int64_t x615 = -1LL;
	static int16_t x616 = INT16_MAX;
	volatile int32_t t153 = -956726;

    t153 = (x613==(x614>(x615&x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 42160183LLU;
	static uint32_t x618 = 31994U;
	uint16_t x619 = 14864U;
	static int16_t x620 = INT16_MIN;
	volatile int32_t t154 = 352;

    t154 = (x617==(x618>(x619&x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MAX;
	uint8_t x622 = 1U;
	int16_t x623 = INT16_MAX;
	static volatile int8_t x624 = 7;
	static int32_t t155 = -3;

    t155 = (x621==(x622>(x623&x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x626 = -390884380;
	static uint32_t x627 = UINT32_MAX;
	int16_t x628 = INT16_MAX;
	int32_t t156 = 47563571;

    t156 = (x625==(x626>(x627&x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = UINT8_MAX;
	static volatile uint32_t x631 = 3285U;
	int64_t x632 = INT64_MIN;
	static int32_t t157 = 44722962;

    t157 = (x629==(x630>(x631&x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = INT8_MIN;
	volatile int32_t x635 = INT32_MAX;
	uint16_t x636 = UINT16_MAX;
	static int32_t t158 = 647150238;

    t158 = (x633==(x634>(x635&x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	volatile int32_t x638 = 614506;
	int64_t x640 = 287700501853604903LL;
	static volatile int32_t t159 = -591043;

    t159 = (x637==(x638>(x639&x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 16247U;
	int16_t x642 = INT16_MIN;
	uint16_t x643 = 1U;
	int8_t x644 = INT8_MAX;
	static int32_t t160 = 0;

    t160 = (x641==(x642>(x643&x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = 12407;
	uint32_t x646 = 2798879U;
	uint64_t x647 = UINT64_MAX;
	volatile uint8_t x648 = 3U;

    t161 = (x645==(x646>(x647&x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	static volatile int32_t t162 = 1090;

    t162 = (x649==(x650>(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 1;
	uint32_t x655 = UINT32_MAX;
	int32_t x656 = INT32_MIN;
	int32_t t163 = 0;

    t163 = (x653==(x654>(x655&x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	static int16_t x658 = -1;
	uint16_t x659 = UINT16_MAX;
	static int32_t t164 = 11538087;

    t164 = (x657==(x658>(x659&x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = 106877491247577497LL;
	int32_t x662 = -248;
	uint8_t x664 = UINT8_MAX;
	int32_t t165 = 2896644;

    t165 = (x661==(x662>(x663&x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -3416;
	int8_t x666 = -1;
	volatile int8_t x667 = -1;
	volatile uint64_t x668 = UINT64_MAX;
	static volatile int32_t t166 = 7;

    t166 = (x665==(x666>(x667&x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = INT64_MIN;
	uint32_t x671 = 2493U;

    t167 = (x669==(x670>(x671&x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = UINT32_MAX;
	volatile int16_t x674 = INT16_MAX;
	int64_t x676 = 8058729625086LL;
	volatile int32_t t168 = -3;

    t168 = (x673==(x674>(x675&x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MAX;
	uint16_t x680 = 2U;
	int32_t t169 = 459814;

    t169 = (x677==(x678>(x679&x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = INT8_MIN;
	uint64_t x684 = 19012655990LLU;
	static volatile int32_t t170 = -142723;

    t170 = (x681==(x682>(x683&x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = UINT8_MAX;
	volatile uint32_t x686 = 875335U;
	volatile int8_t x688 = INT8_MIN;
	volatile int32_t t171 = 7849339;

    t171 = (x685==(x686>(x687&x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 1975;
	int16_t x691 = -321;
	static int32_t t172 = 1;

    t172 = (x689==(x690>(x691&x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x693 = 2U;
	static int16_t x694 = INT16_MIN;
	volatile int32_t x695 = INT32_MIN;
	volatile uint32_t x696 = UINT32_MAX;
	int32_t t173 = 176;

    t173 = (x693==(x694>(x695&x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -1LL;
	int8_t x700 = INT8_MAX;

    t174 = (x697==(x698>(x699&x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = INT32_MIN;
	static volatile int16_t x702 = -1;
	int8_t x703 = -1;
	uint32_t x704 = 50228110U;
	volatile int32_t t175 = -2882;

    t175 = (x701==(x702>(x703&x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int32_t x706 = INT32_MIN;
	int32_t x707 = INT32_MAX;
	uint32_t x708 = 117809U;
	volatile int32_t t176 = 586698;

    t176 = (x705==(x706>(x707&x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	uint8_t x710 = 41U;
	int64_t x711 = INT64_MIN;
	int8_t x712 = -1;
	volatile int32_t t177 = 411;

    t177 = (x709==(x710>(x711&x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	int16_t x714 = INT16_MIN;
	int32_t x715 = 14155;
	int32_t x716 = -1;
	int32_t t178 = -51894449;

    t178 = (x713==(x714>(x715&x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MAX;
	uint32_t x718 = 439063U;
	static int16_t x720 = INT16_MAX;
	static volatile int32_t t179 = 15911430;

    t179 = (x717==(x718>(x719&x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -866051125;
	int64_t x722 = INT64_MIN;
	static uint16_t x723 = UINT16_MAX;
	int16_t x724 = INT16_MIN;
	int32_t t180 = -165;

    t180 = (x721==(x722>(x723&x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -38;
	int32_t x726 = -1642750;
	int16_t x727 = -4724;
	int64_t x728 = -424231789811LL;
	volatile int32_t t181 = 1610;

    t181 = (x725==(x726>(x727&x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 1U;
	int8_t x730 = INT8_MIN;
	volatile uint8_t x731 = 12U;
	int64_t x732 = INT64_MIN;

    t182 = (x729==(x730>(x731&x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x733 = -38;
	uint32_t x734 = UINT32_MAX;
	volatile int32_t x735 = INT32_MIN;
	int32_t t183 = -101451836;

    t183 = (x733==(x734>(x735&x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x738 = 28U;
	int64_t x739 = -195954844398211LL;
	uint16_t x740 = 12690U;
	int32_t t184 = 8581271;

    t184 = (x737==(x738>(x739&x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = 42U;
	uint64_t x742 = 414176LLU;
	int64_t x744 = 1784324LL;

    t185 = (x741==(x742>(x743&x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = 0;
	uint16_t x747 = UINT16_MAX;
	static int16_t x748 = INT16_MIN;

    t186 = (x745==(x746>(x747&x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	volatile int32_t x750 = -1;
	static int32_t x751 = -1;
	volatile int32_t t187 = 1;

    t187 = (x749==(x750>(x751&x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x754 = INT64_MAX;
	static volatile int32_t x755 = 36008058;
	int32_t x756 = INT32_MAX;
	static int32_t t188 = -21220121;

    t188 = (x753==(x754>(x755&x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = -1570;
	int8_t x758 = -35;
	static int16_t x759 = -7426;
	uint64_t x760 = UINT64_MAX;
	int32_t t189 = -746753;

    t189 = (x757==(x758>(x759&x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int8_t x762 = 1;
	uint64_t x763 = 108029709LLU;
	int16_t x764 = -1;
	static volatile int32_t t190 = -15817528;

    t190 = (x761==(x762>(x763&x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 26606U;
	uint8_t x767 = UINT8_MAX;
	volatile int32_t t191 = -61456227;

    t191 = (x765==(x766>(x767&x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x770 = 47U;
	int16_t x771 = INT16_MIN;
	volatile int64_t x772 = INT64_MIN;
	int32_t t192 = 6147;

    t192 = (x769==(x770>(x771&x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x774 = INT16_MAX;
	uint16_t x775 = 4729U;
	static int32_t x776 = INT32_MAX;
	int32_t t193 = -44287280;

    t193 = (x773==(x774>(x775&x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	static int32_t x779 = INT32_MAX;

    t194 = (x777==(x778>(x779&x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x783 = INT64_MAX;
	volatile uint64_t x784 = UINT64_MAX;
	volatile int32_t t195 = 1;

    t195 = (x781==(x782>(x783&x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 56853285971LLU;
	volatile uint8_t x786 = 1U;
	static uint32_t x787 = 1247638U;
	uint64_t x788 = 3646486726431556LLU;
	int32_t t196 = -5814862;

    t196 = (x785==(x786>(x787&x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 3U;
	int64_t x790 = INT64_MIN;

    t197 = (x789==(x790>(x791&x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	static int32_t x796 = -1164;

    t198 = (x793==(x794>(x795&x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x798 = 1666;
	static int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 96596541;

    t199 = (x797==(x798>(x799&x800)));

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

