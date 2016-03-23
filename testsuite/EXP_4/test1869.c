
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

static int16_t x5 = 0;
static volatile int32_t t1 = 66;
int32_t x10 = -4;
int32_t x12 = INT32_MAX;
volatile uint64_t x19 = 14142212150002LLU;
uint16_t x20 = 99U;
volatile int32_t x22 = INT32_MIN;
int64_t x38 = INT64_MAX;
uint16_t x42 = 6U;
uint32_t x43 = 793U;
uint32_t x44 = 455838775U;
static volatile int32_t t10 = 25;
static int32_t t11 = -8;
static volatile int32_t t13 = -68792;
int32_t t14 = -11948244;
static int32_t t15 = -444144435;
uint64_t x65 = 86781125982825515LLU;
static uint32_t x66 = 34240242U;
int32_t t18 = 8164;
uint16_t x77 = 28U;
int32_t x80 = -1;
static int32_t t19 = -54;
volatile uint16_t x95 = UINT16_MAX;
int64_t x102 = INT64_MIN;
uint64_t x108 = 0LLU;
volatile int32_t t26 = 166188850;
int8_t x123 = INT8_MAX;
int64_t x125 = INT64_MIN;
static volatile int16_t x128 = -1;
int64_t x131 = -1LL;
int32_t t32 = 557;
static volatile int32_t t33 = 2804;
volatile int8_t x137 = -15;
static int32_t x138 = INT32_MAX;
int32_t x141 = INT32_MIN;
uint16_t x150 = 8579U;
int64_t x151 = INT64_MIN;
static int32_t x154 = 7;
int8_t x165 = INT8_MAX;
static int8_t x171 = INT8_MIN;
static volatile int16_t x173 = INT16_MAX;
volatile int32_t t45 = 0;
int8_t x192 = INT8_MAX;
static int64_t x195 = INT64_MIN;
uint8_t x202 = UINT8_MAX;
uint64_t x204 = 132755LLU;
volatile int32_t t50 = -1497;
uint16_t x205 = UINT16_MAX;
static volatile int32_t t52 = -6385418;
int8_t x214 = INT8_MIN;
int16_t x217 = -1;
uint16_t x218 = 68U;
volatile int32_t x231 = -1;
volatile int32_t t57 = -5627547;
static uint8_t x234 = 25U;
int64_t x237 = INT64_MIN;
volatile int64_t x238 = -1LL;
volatile int32_t t59 = 195056410;
volatile int32_t t61 = -6496229;
static volatile int32_t t63 = 954;
int8_t x257 = INT8_MAX;
volatile int64_t x263 = INT64_MAX;
volatile int32_t t65 = 3;
uint32_t x272 = 511721209U;
static int16_t x274 = -14;
int32_t t68 = 1063;
volatile int16_t x281 = INT16_MAX;
volatile int64_t x282 = INT64_MIN;
static uint32_t x285 = UINT32_MAX;
uint16_t x291 = 2U;
volatile int32_t t73 = -3728;
volatile uint8_t x298 = UINT8_MAX;
uint32_t x300 = UINT32_MAX;
volatile int32_t t74 = -796220;
int32_t t75 = 0;
static int32_t x307 = 21;
volatile int32_t t76 = 1096;
static int16_t x310 = INT16_MIN;
int16_t x318 = -1;
volatile int32_t x327 = 301566888;
int16_t x330 = INT16_MAX;
int64_t x332 = 12922LL;
static uint64_t x335 = 1805905458463377758LLU;
int32_t x336 = -1;
volatile int32_t t83 = 441;
int32_t t85 = -3;
uint32_t x345 = 22797923U;
static volatile uint8_t x346 = 48U;
volatile int64_t x350 = -15LL;
uint64_t x351 = 708663746LLU;
static int8_t x356 = INT8_MIN;
static int8_t x363 = INT8_MIN;
int64_t x373 = INT64_MAX;
int32_t t93 = -338;
int32_t x382 = -1;
int16_t x383 = 3;
static int16_t x388 = -10;
int32_t t97 = -45;
static int32_t x399 = INT32_MIN;
volatile uint8_t x403 = UINT8_MAX;
int32_t x406 = INT32_MAX;
static int32_t t102 = -17;
volatile int32_t x418 = INT32_MIN;
uint64_t x419 = 36550970LLU;
uint64_t x431 = UINT64_MAX;
int32_t x432 = -20590;
static int32_t x441 = -121870;
uint64_t x447 = UINT64_MAX;
int32_t x458 = 0;
uint32_t x462 = 34677084U;
static uint32_t x468 = 27U;
int16_t x471 = INT16_MIN;
uint16_t x473 = 169U;
int8_t x480 = -17;
int8_t x481 = -5;
uint16_t x484 = UINT16_MAX;
int16_t x485 = 36;
volatile uint32_t x488 = UINT32_MAX;
int8_t x491 = INT8_MIN;
uint8_t x492 = UINT8_MAX;
uint16_t x493 = UINT16_MAX;
volatile int32_t t124 = 612687;
uint8_t x510 = UINT8_MAX;
int64_t x515 = -23517624280628LL;
volatile int32_t t128 = 17342;
int32_t t129 = -60;
static uint8_t x522 = 1U;
uint32_t x524 = 5U;
uint64_t x525 = 247LLU;
int16_t x542 = INT16_MIN;
uint64_t x544 = 24746335195070499LLU;
int16_t x548 = 216;
uint16_t x552 = UINT16_MAX;
static int64_t x559 = INT64_MAX;
int16_t x563 = INT16_MIN;
int64_t x584 = -8LL;
int8_t x589 = -11;
int16_t x601 = -1;
volatile int8_t x604 = 43;
volatile int8_t x608 = -1;
int8_t x610 = INT8_MIN;
static int64_t x620 = INT64_MIN;
int16_t x621 = -1;
volatile int8_t x623 = INT8_MAX;
volatile int32_t x633 = INT32_MIN;
volatile int16_t x635 = 489;
int32_t t159 = 3853637;
static int64_t x642 = 5872115LL;
static int8_t x648 = -27;
static volatile uint16_t x651 = 18742U;
int32_t t162 = -11340;
int16_t x664 = -1;
static volatile int32_t t165 = -1;
volatile uint64_t x665 = 23LLU;
static int8_t x669 = INT8_MAX;
int64_t x671 = INT64_MIN;
volatile int32_t t168 = -745233038;
uint64_t x678 = 576148514920380LLU;
int64_t x685 = -23609410610LL;
int32_t x686 = INT32_MIN;
static volatile int64_t x690 = -18461358382LL;
int32_t x693 = INT32_MAX;
int8_t x697 = INT8_MIN;
int64_t x700 = -1LL;
int16_t x710 = INT16_MIN;
volatile uint32_t x715 = UINT32_MAX;
int16_t x719 = INT16_MIN;
int8_t x723 = INT8_MAX;
int64_t x729 = INT64_MIN;
int64_t x744 = INT64_MIN;
static volatile int32_t t186 = -74682;
uint16_t x765 = 11U;
int8_t x771 = -1;
volatile uint8_t x777 = 7U;
int32_t x778 = -1;
int32_t t194 = -2487912;
static int32_t t195 = -11949;
uint8_t x790 = UINT8_MAX;
static volatile int8_t x791 = INT8_MAX;
int16_t x794 = -763;
int64_t x798 = INT64_MAX;
int64_t x799 = INT64_MIN;


void f0(void) {
    	int8_t x1 = 11;
	volatile uint8_t x2 = 1U;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = 610007713U;
	int32_t t0 = 617;

    t0 = (x1!=(x2==(x3<=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x6 = -2;
	int64_t x7 = -6LL;
	int8_t x8 = INT8_MAX;

    t1 = (x5!=(x6==(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static int64_t x11 = -1LL;
	int32_t t2 = -10746;

    t2 = (x9!=(x10==(x11<=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	volatile int8_t x14 = INT8_MIN;
	uint32_t x15 = 1617414287U;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 486169801;

    t3 = (x13!=(x14==(x15<=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 116041988U;
	uint64_t x18 = 370288LLU;
	volatile int32_t t4 = -535966;

    t4 = (x17!=(x18==(x19<=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int16_t x23 = -635;
	int8_t x24 = -1;
	volatile int32_t t5 = 907907;

    t5 = (x21!=(x22==(x23<=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	static int16_t x26 = -1903;
	uint64_t x27 = 20669507014LLU;
	static int64_t x28 = -1LL;
	int32_t t6 = 16285594;

    t6 = (x25!=(x26==(x27<=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int8_t x30 = -2;
	int32_t x31 = -1;
	static int8_t x32 = 8;
	static volatile int32_t t7 = 725183;

    t7 = (x29!=(x30==(x31<=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 0;
	volatile uint64_t x34 = UINT64_MAX;
	volatile int8_t x35 = 2;
	int8_t x36 = -6;
	volatile int32_t t8 = -4027;

    t8 = (x33!=(x34==(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	int32_t x39 = 193;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 995;

    t9 = (x37!=(x38==(x39<=x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;

    t10 = (x41!=(x42==(x43<=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	int16_t x46 = 1;
	volatile int8_t x47 = -1;
	int32_t x48 = -1;

    t11 = (x45!=(x46==(x47<=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int32_t x50 = -22169506;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -7439LL;
	volatile int32_t t12 = -3990828;

    t12 = (x49!=(x50==(x51<=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x53 = 0U;
	uint64_t x54 = 141LLU;
	int8_t x55 = -1;
	static int8_t x56 = 4;

    t13 = (x53!=(x54==(x55<=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 1U;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	static int32_t x60 = INT32_MAX;

    t14 = (x57!=(x58==(x59<=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 6996;
	static uint32_t x62 = UINT32_MAX;
	uint32_t x63 = 28552U;
	int8_t x64 = INT8_MIN;

    t15 = (x61!=(x62==(x63<=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x67 = 14992037897827LLU;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 124195794;

    t16 = (x65!=(x66==(x67<=x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static volatile int32_t x70 = INT32_MIN;
	uint16_t x71 = 3U;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = -24089727;

    t17 = (x69!=(x70==(x71<=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = 13;
	static volatile int64_t x74 = INT64_MIN;
	uint8_t x75 = 1U;
	int8_t x76 = -1;

    t18 = (x73!=(x74==(x75<=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MIN;
	uint8_t x79 = 5U;

    t19 = (x77!=(x78==(x79<=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MIN;
	volatile int16_t x82 = -48;
	static volatile int32_t x83 = INT32_MAX;
	volatile uint32_t x84 = 234185588U;
	volatile int32_t t20 = 0;

    t20 = (x81!=(x82==(x83<=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 2071U;
	static int64_t x86 = -1LL;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = 3522;

    t21 = (x85!=(x86==(x87<=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 93473642U;
	static int32_t x90 = 461573916;
	int32_t x91 = 6864;
	static int64_t x92 = -1LL;
	volatile int32_t t22 = -7;

    t22 = (x89!=(x90==(x91<=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = -1;
	uint32_t x96 = 47496U;
	int32_t t23 = 41;

    t23 = (x93!=(x94==(x95<=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	int32_t x98 = -1;
	int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 380881249;

    t24 = (x97!=(x98==(x99<=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	static uint8_t x103 = 16U;
	uint8_t x104 = 19U;
	volatile int32_t t25 = 6696;

    t25 = (x101!=(x102==(x103<=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x105 = UINT32_MAX;
	int16_t x106 = -1;
	volatile int64_t x107 = INT64_MAX;

    t26 = (x105!=(x106==(x107<=x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x109 = 2086363814245436LLU;
	static uint64_t x110 = 2200177173541602337LLU;
	static int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 46204338;

    t27 = (x109!=(x110==(x111<=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x113 = 0;
	int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 1468;

    t28 = (x113!=(x114==(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -52;
	static volatile int8_t x118 = -37;
	int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MAX;
	int32_t t29 = 909301;

    t29 = (x117!=(x118==(x119<=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 3837U;
	uint64_t x122 = 3541LLU;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -1625;

    t30 = (x121!=(x122==(x123<=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = -6;
	int64_t x127 = 817LL;
	volatile int32_t t31 = 1;

    t31 = (x125!=(x126==(x127<=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	volatile int16_t x130 = -1;
	static int8_t x132 = INT8_MIN;

    t32 = (x129!=(x130==(x131<=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 782U;
	uint64_t x135 = 3607LLU;
	int8_t x136 = 2;

    t33 = (x133!=(x134==(x135<=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x139 = INT8_MIN;
	uint64_t x140 = 252143190910704457LLU;
	volatile int32_t t34 = -1644268;

    t34 = (x137!=(x138==(x139<=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x142 = INT8_MAX;
	uint64_t x143 = UINT64_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 2168733;

    t35 = (x141!=(x142==(x143<=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = 13537852U;
	static int64_t x146 = INT64_MIN;
	volatile int8_t x147 = -1;
	int16_t x148 = -1162;
	volatile int32_t t36 = 2155804;

    t36 = (x145!=(x146==(x147<=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint64_t x149 = 1LLU;
	volatile int32_t x152 = INT32_MIN;
	int32_t t37 = -4935;

    t37 = (x149!=(x150==(x151<=x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int32_t x155 = 261;
	uint32_t x156 = 105807277U;
	static int32_t t38 = 4;

    t38 = (x153!=(x154==(x155<=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 10U;
	int32_t x158 = -9;
	uint8_t x159 = 3U;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = -2991613;

    t39 = (x157!=(x158==(x159<=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 10479632581153LL;
	volatile int8_t x162 = INT8_MAX;
	uint64_t x163 = 67530594830645576LLU;
	int16_t x164 = -116;
	int32_t t40 = 13;

    t40 = (x161!=(x162==(x163<=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x166 = INT8_MAX;
	int32_t x167 = 38458835;
	static int8_t x168 = -1;
	int32_t t41 = -1730;

    t41 = (x165!=(x166==(x167<=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 1080764043168229835LLU;
	uint32_t x170 = UINT32_MAX;
	uint16_t x172 = 9053U;
	volatile int32_t t42 = 0;

    t42 = (x169!=(x170==(x171<=x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x174 = INT8_MIN;
	volatile int16_t x175 = -1;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 3271953;

    t43 = (x173!=(x174==(x175<=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 472866687809LLU;
	uint64_t x178 = 29410304LLU;
	uint32_t x179 = 28996U;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = -1;

    t44 = (x177!=(x178==(x179<=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MAX;
	static int8_t x182 = -1;
	uint8_t x183 = 100U;
	static volatile int8_t x184 = -1;

    t45 = (x181!=(x182==(x183<=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = -1;
	int32_t x186 = -18059609;
	int64_t x187 = INT64_MIN;
	uint64_t x188 = 203268169590LLU;
	static int32_t t46 = 3;

    t46 = (x185!=(x186==(x187<=x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	static uint8_t x190 = UINT8_MAX;
	uint64_t x191 = 3516952937240946LLU;
	static volatile int32_t t47 = 783266;

    t47 = (x189!=(x190==(x191<=x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	volatile int32_t x194 = INT32_MIN;
	static volatile int32_t x196 = 11697319;
	int32_t t48 = 619693237;

    t48 = (x193!=(x194==(x195<=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = UINT32_MAX;
	int32_t x198 = -1;
	static int16_t x199 = -1;
	volatile int64_t x200 = INT64_MIN;
	int32_t t49 = 1;

    t49 = (x197!=(x198==(x199<=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 0;
	static int16_t x203 = INT16_MIN;

    t50 = (x201!=(x202==(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = -1;
	int8_t x207 = -36;
	static int8_t x208 = -1;
	volatile int32_t t51 = -13176;

    t51 = (x205!=(x206==(x207<=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	volatile int32_t x210 = INT32_MIN;
	uint32_t x211 = 13U;
	int16_t x212 = INT16_MIN;

    t52 = (x209!=(x210==(x211<=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -184718348933LL;
	uint8_t x215 = 3U;
	static int8_t x216 = INT8_MIN;
	int32_t t53 = 111;

    t53 = (x213!=(x214==(x215<=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x219 = -1LL;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 4;

    t54 = (x217!=(x218==(x219<=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 1;
	static uint8_t x222 = 13U;
	static int16_t x223 = INT16_MIN;
	uint16_t x224 = 4U;
	volatile int32_t t55 = -16453;

    t55 = (x221!=(x222==(x223<=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 9017;
	static int64_t x226 = INT64_MIN;
	uint8_t x227 = 5U;
	static uint8_t x228 = UINT8_MAX;
	int32_t t56 = 7154094;

    t56 = (x225!=(x226==(x227<=x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int16_t x230 = 0;
	int32_t x232 = INT32_MIN;

    t57 = (x229!=(x230==(x231<=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 712010718;
	int16_t x235 = INT16_MIN;
	volatile int32_t x236 = -1;
	int32_t t58 = -61;

    t58 = (x233!=(x234==(x235<=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x239 = -1;
	uint64_t x240 = 12816333LLU;

    t59 = (x237!=(x238==(x239<=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MAX;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 7475046;

    t60 = (x241!=(x242==(x243<=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 93447219U;
	int64_t x246 = 5989736438LL;
	volatile int64_t x247 = INT64_MIN;
	int16_t x248 = 194;

    t61 = (x245!=(x246==(x247<=x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MAX;
	volatile int8_t x250 = INT8_MAX;
	int16_t x251 = 42;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t62 = -1065964;

    t62 = (x249!=(x250==(x251<=x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	volatile uint16_t x254 = UINT16_MAX;
	int64_t x255 = -1LL;
	uint16_t x256 = 6U;

    t63 = (x253!=(x254==(x255<=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = 1;
	static uint8_t x259 = 1U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -260567;

    t64 = (x257!=(x258==(x259<=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = INT16_MIN;
	static uint8_t x262 = 118U;
	volatile int8_t x264 = -10;

    t65 = (x261!=(x262==(x263<=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -33079693042LL;
	int8_t x266 = 4;
	int64_t x267 = -1LL;
	volatile uint8_t x268 = 2U;
	int32_t t66 = -25;

    t66 = (x265!=(x266==(x267<=x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	static uint8_t x270 = 31U;
	volatile int64_t x271 = INT64_MIN;
	int32_t t67 = -862944568;

    t67 = (x269!=(x270==(x271<=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	int32_t x275 = INT32_MIN;
	volatile uint64_t x276 = 13027966560343LLU;

    t68 = (x273!=(x274==(x275<=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MIN;
	volatile int8_t x279 = -10;
	uint8_t x280 = 12U;
	volatile int32_t t69 = -13253632;

    t69 = (x277!=(x278==(x279<=x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x283 = 16487U;
	int64_t x284 = INT64_MAX;
	int32_t t70 = -807199;

    t70 = (x281!=(x282==(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x286 = 104U;
	int64_t x287 = INT64_MAX;
	int32_t x288 = -1;
	volatile int32_t t71 = -3131310;

    t71 = (x285!=(x286==(x287<=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 0;
	volatile int16_t x290 = INT16_MIN;
	int32_t x292 = 25194;
	volatile int32_t t72 = -58864784;

    t72 = (x289!=(x290==(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	volatile int8_t x294 = -2;
	uint8_t x295 = 0U;
	uint8_t x296 = 48U;

    t73 = (x293!=(x294==(x295<=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 780U;
	int16_t x299 = -4;

    t74 = (x297!=(x298==(x299<=x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = INT8_MIN;
	static int16_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = -18;

    t75 = (x301!=(x302==(x303<=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -4;
	int8_t x306 = INT8_MIN;
	static int32_t x308 = INT32_MIN;

    t76 = (x305!=(x306==(x307<=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	static int64_t x312 = -1LL;
	volatile int32_t t77 = 2258972;

    t77 = (x309!=(x310==(x311<=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	static int32_t x314 = INT32_MAX;
	int16_t x315 = -1;
	int64_t x316 = -349581LL;
	int32_t t78 = -97858;

    t78 = (x313!=(x314==(x315<=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	volatile uint64_t x319 = 272659585825102LLU;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = -29903;

    t79 = (x317!=(x318==(x319<=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1;
	static int32_t x322 = INT32_MAX;
	volatile int16_t x323 = 3392;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 82004730;

    t80 = (x321!=(x322==(x323<=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = INT16_MAX;
	uint16_t x326 = UINT16_MAX;
	static uint32_t x328 = 5U;
	int32_t t81 = 1;

    t81 = (x325!=(x326==(x327<=x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MAX;
	int32_t x331 = -1;
	int32_t t82 = -4;

    t82 = (x329!=(x330==(x331<=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = -8968;
	static uint8_t x334 = 4U;

    t83 = (x333!=(x334==(x335<=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	uint32_t x338 = 102U;
	volatile uint32_t x339 = UINT32_MAX;
	int64_t x340 = 0LL;
	int32_t t84 = -35864744;

    t84 = (x337!=(x338==(x339<=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	uint64_t x342 = 0LLU;
	static volatile int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;

    t85 = (x341!=(x342==(x343<=x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x347 = INT8_MIN;
	uint8_t x348 = 1U;
	int32_t t86 = 363478;

    t86 = (x345!=(x346==(x347<=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x349 = INT16_MAX;
	int64_t x352 = -1LL;
	volatile int32_t t87 = 796106;

    t87 = (x349!=(x350==(x351<=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -220;
	static int16_t x354 = 704;
	static int8_t x355 = -48;
	int32_t t88 = -28;

    t88 = (x353!=(x354==(x355<=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	static int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = 8;
	int32_t t89 = -2713;

    t89 = (x357!=(x358==(x359<=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = INT64_MAX;
	int8_t x362 = -1;
	static int32_t x364 = INT32_MIN;
	int32_t t90 = -19479;

    t90 = (x361!=(x362==(x363<=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -1;
	int16_t x366 = 1;
	uint32_t x367 = 1701U;
	uint32_t x368 = UINT32_MAX;
	int32_t t91 = 9849291;

    t91 = (x365!=(x366==(x367<=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	int32_t x370 = -1;
	volatile int64_t x371 = INT64_MIN;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -523594476;

    t92 = (x369!=(x370==(x371<=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MAX;
	volatile int64_t x376 = INT64_MAX;

    t93 = (x373!=(x374==(x375<=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	int64_t x378 = 11346LL;
	volatile int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MAX;
	volatile int32_t t94 = -35;

    t94 = (x377!=(x378==(x379<=x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 36;
	static int32_t x384 = -1;
	int32_t t95 = 2170808;

    t95 = (x381!=(x382==(x383<=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = 216U;
	volatile uint64_t x386 = 27424131092145618LLU;
	int32_t x387 = -1;
	static int32_t t96 = -91635614;

    t96 = (x385!=(x386==(x387<=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -599;
	uint64_t x390 = 785208757788770636LLU;
	volatile uint64_t x391 = UINT64_MAX;
	uint16_t x392 = 51U;

    t97 = (x389!=(x390==(x391<=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	volatile int16_t x394 = -24;
	volatile int64_t x395 = -1LL;
	int64_t x396 = -14638LL;
	volatile int32_t t98 = 15895;

    t98 = (x393!=(x394==(x395<=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	static uint32_t x398 = UINT32_MAX;
	uint8_t x400 = 25U;
	volatile int32_t t99 = 453007226;

    t99 = (x397!=(x398==(x399<=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	uint16_t x402 = 123U;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t100 = -9566;

    t100 = (x401!=(x402==(x403<=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	int32_t x407 = -17362164;
	static uint8_t x408 = UINT8_MAX;
	static volatile int32_t t101 = 15466;

    t101 = (x405!=(x406==(x407<=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 21LL;
	uint64_t x410 = UINT64_MAX;
	volatile uint64_t x411 = 463257670540991571LLU;
	uint32_t x412 = 1763486U;

    t102 = (x409!=(x410==(x411<=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 3U;
	int16_t x414 = -1;
	int64_t x415 = -264499083871069LL;
	int16_t x416 = INT16_MIN;
	volatile int32_t t103 = 2077;

    t103 = (x413!=(x414==(x415<=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MIN;
	int64_t x420 = INT64_MIN;
	int32_t t104 = -68678;

    t104 = (x417!=(x418==(x419<=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 1;
	volatile uint16_t x422 = 895U;
	volatile uint32_t x423 = 30U;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t105 = 22470669;

    t105 = (x421!=(x422==(x423<=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = 0LL;
	int16_t x426 = INT16_MIN;
	int16_t x427 = -1;
	uint8_t x428 = UINT8_MAX;
	static volatile int32_t t106 = -489;

    t106 = (x425!=(x426==(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 0U;
	uint8_t x430 = 2U;
	int32_t t107 = 20977258;

    t107 = (x429!=(x430==(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = -17;
	int16_t x434 = INT16_MIN;
	int64_t x435 = 54LL;
	static int64_t x436 = INT64_MIN;
	int32_t t108 = 12540136;

    t108 = (x433!=(x434==(x435<=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = INT8_MIN;
	int8_t x438 = INT8_MIN;
	int64_t x439 = -554014658039605LL;
	int16_t x440 = -828;
	static volatile int32_t t109 = -1746948;

    t109 = (x437!=(x438==(x439<=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = UINT8_MAX;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = 78LLU;
	volatile int32_t t110 = 365;

    t110 = (x441!=(x442==(x443<=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x445 = 0U;
	volatile uint32_t x446 = UINT32_MAX;
	static volatile int16_t x448 = INT16_MAX;
	static volatile int32_t t111 = -611027;

    t111 = (x445!=(x446==(x447<=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 56491U;
	uint8_t x450 = 1U;
	int8_t x451 = -11;
	static volatile uint32_t x452 = UINT32_MAX;
	int32_t t112 = 0;

    t112 = (x449!=(x450==(x451<=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MAX;
	static int16_t x454 = -3;
	int8_t x455 = -6;
	uint8_t x456 = 1U;
	volatile int32_t t113 = -759;

    t113 = (x453!=(x454==(x455<=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint32_t x457 = 1U;
	int8_t x459 = INT8_MAX;
	int64_t x460 = -1959198015774236LL;
	volatile int32_t t114 = 8306333;

    t114 = (x457!=(x458==(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = 13679258533210LL;
	int8_t x463 = -1;
	volatile int16_t x464 = 654;
	int32_t t115 = -1;

    t115 = (x461!=(x462==(x463<=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1424387845LL;
	static volatile uint16_t x466 = UINT16_MAX;
	uint32_t x467 = UINT32_MAX;
	int32_t t116 = 1528913;

    t116 = (x465!=(x466==(x467<=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	volatile uint8_t x470 = 13U;
	int32_t x472 = INT32_MIN;
	volatile int32_t t117 = -88334;

    t117 = (x469!=(x470==(x471<=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x474 = INT8_MAX;
	volatile int8_t x475 = 1;
	static volatile int32_t x476 = INT32_MAX;
	volatile int32_t t118 = -2988101;

    t118 = (x473!=(x474==(x475<=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	uint16_t x478 = 82U;
	static int8_t x479 = INT8_MIN;
	int32_t t119 = -17984;

    t119 = (x477!=(x478==(x479<=x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = INT16_MAX;
	int16_t x483 = 32;
	volatile int32_t t120 = -1276;

    t120 = (x481!=(x482==(x483<=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x486 = 76757766060049191LLU;
	volatile int32_t x487 = -1;
	int32_t t121 = 353;

    t121 = (x485!=(x486==(x487<=x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 9;
	static int16_t x490 = -1781;
	int32_t t122 = -21;

    t122 = (x489!=(x490==(x491<=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MAX;
	int64_t x495 = INT64_MAX;
	uint8_t x496 = 4U;
	static int32_t t123 = -7998;

    t123 = (x493!=(x494==(x495<=x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 39988U;
	volatile int64_t x498 = -1739LL;
	int32_t x499 = -1;
	static int8_t x500 = -1;

    t124 = (x497!=(x498==(x499<=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MAX;
	static int64_t x502 = -1LL;
	uint8_t x503 = UINT8_MAX;
	int64_t x504 = -1LL;
	volatile int32_t t125 = -6569;

    t125 = (x501!=(x502==(x503<=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 1;
	int16_t x506 = INT16_MAX;
	volatile uint16_t x507 = UINT16_MAX;
	volatile int32_t x508 = INT32_MAX;
	volatile int32_t t126 = -1555;

    t126 = (x505!=(x506==(x507<=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = INT64_MIN;
	volatile uint16_t x511 = 0U;
	uint64_t x512 = 51035LLU;
	volatile int32_t t127 = -5;

    t127 = (x509!=(x510==(x511<=x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 32U;
	uint8_t x514 = 5U;
	int64_t x516 = -5213LL;

    t128 = (x513!=(x514==(x515<=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = 1553819737397902LL;
	volatile int32_t x518 = INT32_MIN;
	int8_t x519 = 5;
	int32_t x520 = INT32_MAX;

    t129 = (x517!=(x518==(x519<=x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = -1LL;
	int16_t x523 = INT16_MIN;
	volatile int32_t t130 = 17822916;

    t130 = (x521!=(x522==(x523<=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x526 = INT64_MIN;
	static int8_t x527 = -12;
	uint16_t x528 = 2607U;
	volatile int32_t t131 = -97;

    t131 = (x525!=(x526==(x527<=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 15;
	volatile uint8_t x530 = UINT8_MAX;
	int64_t x531 = INT64_MIN;
	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -656;

    t132 = (x529!=(x530==(x531<=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MAX;
	int32_t x534 = -1;
	volatile uint16_t x535 = 13U;
	int8_t x536 = -1;
	static int32_t t133 = 4;

    t133 = (x533!=(x534==(x535<=x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	volatile int16_t x538 = -420;
	int64_t x539 = INT64_MAX;
	int8_t x540 = INT8_MIN;
	int32_t t134 = -73346;

    t134 = (x537!=(x538==(x539<=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x543 = INT16_MIN;
	int32_t t135 = 1982592;

    t135 = (x541!=(x542==(x543<=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 3U;
	int8_t x546 = -1;
	int16_t x547 = INT16_MIN;
	int32_t t136 = -47781;

    t136 = (x545!=(x546==(x547<=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	uint8_t x550 = 97U;
	uint64_t x551 = 1475032LLU;
	volatile int32_t t137 = 14;

    t137 = (x549!=(x550==(x551<=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -3;
	int16_t x554 = INT16_MIN;
	int16_t x555 = INT16_MIN;
	volatile int32_t x556 = -7794825;
	int32_t t138 = -109775;

    t138 = (x553!=(x554==(x555<=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	volatile uint16_t x558 = UINT16_MAX;
	static int16_t x560 = 1;
	int32_t t139 = -2747;

    t139 = (x557!=(x558==(x559<=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = UINT16_MAX;
	uint16_t x562 = 1U;
	int32_t x564 = INT32_MAX;
	volatile int32_t t140 = 162386;

    t140 = (x561!=(x562==(x563<=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 1;
	int32_t x566 = INT32_MIN;
	int32_t x567 = -1;
	uint32_t x568 = 176561U;
	static volatile int32_t t141 = -163;

    t141 = (x565!=(x566==(x567<=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	uint64_t x570 = 3404279888328791097LLU;
	static volatile int64_t x571 = INT64_MAX;
	uint16_t x572 = 7726U;
	volatile int32_t t142 = -61;

    t142 = (x569!=(x570==(x571<=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = INT16_MIN;
	volatile int8_t x574 = INT8_MIN;
	int16_t x575 = INT16_MAX;
	int16_t x576 = -3189;
	volatile int32_t t143 = -808162;

    t143 = (x573!=(x574==(x575<=x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = -1;
	static uint32_t x578 = 1110477U;
	uint32_t x579 = 594464322U;
	uint8_t x580 = UINT8_MAX;
	int32_t t144 = -4371170;

    t144 = (x577!=(x578==(x579<=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	volatile uint64_t x582 = 39464LLU;
	uint8_t x583 = UINT8_MAX;
	int32_t t145 = 31992201;

    t145 = (x581!=(x582==(x583<=x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 248534U;
	static uint32_t x586 = 12980U;
	int32_t x587 = INT32_MIN;
	int64_t x588 = INT64_MIN;
	volatile int32_t t146 = 1;

    t146 = (x585!=(x586==(x587<=x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x590 = 9596581981LL;
	int8_t x591 = -1;
	volatile int32_t x592 = 1;
	static volatile int32_t t147 = 829;

    t147 = (x589!=(x590==(x591<=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	static int32_t x594 = INT32_MIN;
	volatile int16_t x595 = INT16_MIN;
	static int32_t x596 = 3;
	int32_t t148 = -227708;

    t148 = (x593!=(x594==(x595<=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -1LL;
	static int32_t x598 = 235823503;
	static uint32_t x599 = 4774891U;
	int32_t x600 = INT32_MIN;
	volatile int32_t t149 = -257671001;

    t149 = (x597!=(x598==(x599<=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x602 = -1;
	int64_t x603 = -1LL;
	static int32_t t150 = -46;

    t150 = (x601!=(x602==(x603<=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x605 = 0U;
	volatile int32_t x606 = -96466318;
	uint64_t x607 = UINT64_MAX;
	static int32_t t151 = 14;

    t151 = (x605!=(x606==(x607<=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = 48LLU;
	int64_t x611 = 0LL;
	volatile int8_t x612 = INT8_MAX;
	int32_t t152 = 353039;

    t152 = (x609!=(x610==(x611<=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	int8_t x614 = -1;
	static volatile uint8_t x615 = 74U;
	static volatile int8_t x616 = INT8_MIN;
	int32_t t153 = 368472;

    t153 = (x613!=(x614==(x615<=x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	int64_t x618 = -993265LL;
	int8_t x619 = INT8_MIN;
	volatile int32_t t154 = 864425;

    t154 = (x617!=(x618==(x619<=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x622 = INT8_MAX;
	int16_t x624 = -1354;
	int32_t t155 = 8976832;

    t155 = (x621!=(x622==(x623<=x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 41U;
	volatile int64_t x626 = -740LL;
	int32_t x627 = -1;
	static uint16_t x628 = UINT16_MAX;
	int32_t t156 = 280887549;

    t156 = (x625!=(x626==(x627<=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MAX;
	int32_t x630 = -1;
	static int8_t x631 = INT8_MIN;
	uint64_t x632 = UINT64_MAX;
	volatile int32_t t157 = 22486756;

    t157 = (x629!=(x630==(x631<=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x634 = 146457098U;
	int8_t x636 = INT8_MAX;
	volatile int32_t t158 = 2571;

    t158 = (x633!=(x634==(x635<=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	static int8_t x638 = 1;
	int64_t x639 = INT64_MIN;
	static int32_t x640 = 457;

    t159 = (x637!=(x638==(x639<=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = 4468713;
	uint32_t x643 = 1969050U;
	uint16_t x644 = 7582U;
	int32_t t160 = 27838219;

    t160 = (x641!=(x642==(x643<=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int16_t x646 = INT16_MAX;
	int64_t x647 = -514929729LL;
	volatile int32_t t161 = 1505658;

    t161 = (x645!=(x646==(x647<=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 22U;
	uint16_t x650 = UINT16_MAX;
	uint32_t x652 = 3657U;

    t162 = (x649!=(x650==(x651<=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x654 = INT64_MIN;
	volatile int16_t x655 = -1;
	uint8_t x656 = UINT8_MAX;
	int32_t t163 = -7;

    t163 = (x653!=(x654==(x655<=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	static int8_t x658 = -1;
	volatile int8_t x659 = 17;
	uint8_t x660 = 0U;
	volatile int32_t t164 = -5;

    t164 = (x657!=(x658==(x659<=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 701;
	int32_t x662 = INT32_MIN;
	static uint32_t x663 = 1460U;

    t165 = (x661!=(x662==(x663<=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = UINT16_MAX;
	volatile uint32_t x667 = UINT32_MAX;
	static volatile uint32_t x668 = 89U;
	volatile int32_t t166 = 40720;

    t166 = (x665!=(x666==(x667<=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x670 = INT8_MIN;
	int8_t x672 = INT8_MAX;
	static volatile int32_t t167 = -180988;

    t167 = (x669!=(x670==(x671<=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -22782771;
	static volatile int8_t x674 = INT8_MIN;
	volatile int32_t x675 = -1;
	int16_t x676 = INT16_MIN;

    t168 = (x673!=(x674==(x675<=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	uint8_t x679 = UINT8_MAX;
	static int64_t x680 = INT64_MAX;
	int32_t t169 = 31294;

    t169 = (x677!=(x678==(x679<=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MAX;
	static volatile uint64_t x682 = 15340046118678100LLU;
	static uint16_t x683 = 29U;
	static uint32_t x684 = UINT32_MAX;
	volatile int32_t t170 = 12435;

    t170 = (x681!=(x682==(x683<=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x687 = INT8_MIN;
	int8_t x688 = -42;
	int32_t t171 = 14;

    t171 = (x685!=(x686==(x687<=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	int8_t x691 = 13;
	uint32_t x692 = 39193U;
	volatile int32_t t172 = 547684;

    t172 = (x689!=(x690==(x691<=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = INT32_MIN;
	volatile int8_t x695 = -2;
	int32_t x696 = 2000402;
	volatile int32_t t173 = 172;

    t173 = (x693!=(x694==(x695<=x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = -363;
	int64_t x699 = -74840LL;
	int32_t t174 = -789585512;

    t174 = (x697!=(x698==(x699<=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 20973747U;
	int8_t x702 = -1;
	uint16_t x703 = 1398U;
	int16_t x704 = INT16_MIN;
	volatile int32_t t175 = 4712645;

    t175 = (x701!=(x702==(x703<=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 378696U;
	volatile int8_t x706 = INT8_MIN;
	volatile uint64_t x707 = UINT64_MAX;
	static uint64_t x708 = 446548950LLU;
	volatile int32_t t176 = -1;

    t176 = (x705!=(x706==(x707<=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -1;
	int64_t x711 = 114334355305605LL;
	uint64_t x712 = 26126945407409LLU;
	volatile int32_t t177 = -27886216;

    t177 = (x709!=(x710==(x711<=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = 7645LLU;
	int32_t x714 = -3703046;
	int32_t x716 = INT32_MIN;
	volatile int32_t t178 = 848027970;

    t178 = (x713!=(x714==(x715<=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	volatile uint8_t x718 = 97U;
	static uint32_t x720 = 27U;
	int32_t t179 = 4939;

    t179 = (x717!=(x718==(x719<=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MIN;
	int32_t x722 = 92961251;
	int16_t x724 = 56;
	int32_t t180 = 1;

    t180 = (x721!=(x722==(x723<=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = -242;
	int32_t x726 = -1;
	volatile int64_t x727 = INT64_MAX;
	uint64_t x728 = 779121020356150580LLU;
	static int32_t t181 = -600614710;

    t181 = (x725!=(x726==(x727<=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x730 = 3748732897536LLU;
	volatile int16_t x731 = INT16_MIN;
	static int32_t x732 = INT32_MIN;
	volatile int32_t t182 = -14649493;

    t182 = (x729!=(x730==(x731<=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	int16_t x734 = 17;
	int32_t x735 = -1736314;
	uint32_t x736 = 3492U;
	volatile int32_t t183 = -402;

    t183 = (x733!=(x734==(x735<=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int8_t x738 = -1;
	uint8_t x739 = 19U;
	static uint16_t x740 = UINT16_MAX;
	int32_t t184 = 94;

    t184 = (x737!=(x738==(x739<=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -52;
	volatile uint8_t x742 = 42U;
	int8_t x743 = -1;
	volatile int32_t t185 = -116307974;

    t185 = (x741!=(x742==(x743<=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int8_t x746 = -1;
	int32_t x747 = 1467;
	static int32_t x748 = -166;

    t186 = (x745!=(x746==(x747<=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 13U;
	uint32_t x750 = 3947834U;
	int64_t x751 = -1LL;
	int64_t x752 = 408907614535LL;
	volatile int32_t t187 = 2978788;

    t187 = (x749!=(x750==(x751<=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MIN;
	int32_t x754 = -1;
	uint64_t x755 = UINT64_MAX;
	uint32_t x756 = 15U;
	volatile int32_t t188 = -60976;

    t188 = (x753!=(x754==(x755<=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MAX;
	int64_t x758 = -7LL;
	volatile int16_t x759 = -1;
	uint32_t x760 = UINT32_MAX;
	int32_t t189 = 374;

    t189 = (x757!=(x758==(x759<=x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = INT64_MIN;
	uint8_t x762 = UINT8_MAX;
	int64_t x763 = INT64_MAX;
	int32_t x764 = INT32_MIN;
	int32_t t190 = 234;

    t190 = (x761!=(x762==(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 58U;
	int8_t x767 = -1;
	uint8_t x768 = 6U;
	int32_t t191 = -2193078;

    t191 = (x765!=(x766==(x767<=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	uint16_t x770 = UINT16_MAX;
	volatile uint16_t x772 = 129U;
	volatile int32_t t192 = -55;

    t192 = (x769!=(x770==(x771<=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 11457U;
	int8_t x774 = INT8_MAX;
	uint32_t x775 = UINT32_MAX;
	static uint64_t x776 = 172824LLU;
	volatile int32_t t193 = -2;

    t193 = (x773!=(x774==(x775<=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x779 = -1;
	static int16_t x780 = INT16_MIN;

    t194 = (x777!=(x778==(x779<=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = -6;
	int8_t x782 = 3;
	int64_t x783 = INT64_MIN;
	int32_t x784 = INT32_MIN;

    t195 = (x781!=(x782==(x783<=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = 47163018;
	int64_t x786 = INT64_MAX;
	int16_t x787 = INT16_MAX;
	volatile int32_t x788 = INT32_MIN;
	int32_t t196 = -31700975;

    t196 = (x785!=(x786==(x787<=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1808699552LL;
	volatile int16_t x792 = INT16_MIN;
	int32_t t197 = -3770295;

    t197 = (x789!=(x790==(x791<=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = 122139550LL;
	static int8_t x795 = -3;
	static uint8_t x796 = 7U;
	int32_t t198 = 1;

    t198 = (x793!=(x794==(x795<=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	static int32_t x800 = INT32_MIN;
	volatile int32_t t199 = 439;

    t199 = (x797!=(x798==(x799<=x800)));

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

