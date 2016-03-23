
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

static int64_t x1 = INT64_MAX;
int16_t x3 = INT16_MIN;
volatile uint64_t x5 = UINT64_MAX;
uint64_t t1 = UINT64_MAX;
int64_t x12 = INT64_MIN;
uint64_t x22 = UINT64_MAX;
int64_t x23 = INT64_MIN;
volatile int64_t x25 = INT64_MIN;
static int8_t x31 = INT8_MIN;
int16_t x33 = -22;
int32_t t8 = -34968;
int64_t t9 = -29LL;
uint32_t x42 = UINT32_MAX;
int64_t x43 = -936247410276438LL;
uint32_t t10 = UINT32_MAX;
uint16_t x46 = 468U;
int8_t x47 = INT8_MAX;
int8_t x48 = INT8_MIN;
uint16_t x49 = UINT16_MAX;
static volatile int32_t t12 = 2151474;
int32_t x53 = -1;
static uint64_t x62 = 91555677LLU;
static int16_t x64 = 55;
static int64_t x65 = INT64_MAX;
int16_t x68 = INT16_MIN;
uint32_t x74 = UINT32_MAX;
static int16_t x80 = INT16_MAX;
int16_t x87 = -1;
int8_t x93 = -18;
uint8_t x97 = UINT8_MAX;
volatile int32_t x99 = INT32_MIN;
volatile uint32_t x101 = UINT32_MAX;
static uint64_t t25 = 5266066499126299754LLU;
static int8_t x106 = -3;
volatile int64_t x114 = 538760018LL;
uint64_t x116 = 0LLU;
static volatile uint64_t t29 = 24321LLU;
int32_t x124 = INT32_MIN;
int8_t x126 = -36;
volatile int16_t x137 = -1;
static volatile uint32_t x146 = UINT32_MAX;
int16_t x151 = 3;
int16_t x155 = -1;
uint64_t x157 = 1523689631LLU;
volatile uint64_t t39 = UINT64_MAX;
static volatile int64_t t40 = -15496152181444178LL;
int64_t x172 = INT64_MAX;
volatile int64_t t43 = -110LL;
static int32_t x183 = -114473813;
int64_t x188 = INT64_MAX;
int64_t t46 = 4638636488459LL;
int32_t x194 = INT32_MIN;
static int64_t x196 = INT64_MIN;
int8_t x204 = INT8_MIN;
uint16_t x211 = 12U;
int32_t x212 = -3549;
int32_t x215 = INT32_MIN;
int32_t x231 = INT32_MIN;
int32_t x237 = INT32_MIN;
int8_t x242 = -1;
int64_t x250 = INT64_MAX;
static int32_t x251 = -35;
static int16_t x252 = -1;
uint16_t x255 = 1632U;
uint8_t x256 = UINT8_MAX;
int64_t t63 = 5968049LL;
static uint32_t x260 = 481424364U;
uint32_t x263 = UINT32_MAX;
uint8_t x267 = UINT8_MAX;
uint16_t x275 = 194U;
uint64_t x276 = 247664600797821866LLU;
int64_t t68 = -5357001632LL;
volatile uint64_t t69 = UINT64_MAX;
volatile int32_t t70 = -121215207;
int32_t x285 = INT32_MIN;
volatile uint32_t x291 = 55288U;
uint32_t x297 = UINT32_MAX;
uint64_t x298 = UINT64_MAX;
static volatile int64_t x300 = -7701672LL;
volatile int32_t x301 = INT32_MIN;
int16_t x304 = INT16_MIN;
volatile uint32_t t75 = UINT32_MAX;
int16_t x309 = INT16_MAX;
volatile int64_t t77 = -43950549239528352LL;
static uint32_t x313 = 168378129U;
int16_t x325 = INT16_MIN;
static volatile int16_t x333 = INT16_MIN;
int8_t x334 = INT8_MIN;
volatile int32_t t83 = -1207;
int16_t x338 = 3;
int64_t x342 = 7746357322164LL;
int64_t x344 = INT64_MAX;
volatile int64_t t85 = 68389371913922LL;
volatile int16_t x346 = INT16_MAX;
static int64_t x351 = -1LL;
uint8_t x356 = 8U;
uint32_t x360 = 487655084U;
volatile uint8_t x363 = 1U;
uint16_t x370 = UINT16_MAX;
static volatile int32_t t92 = -159491086;
volatile uint16_t x374 = 463U;
uint32_t x383 = UINT32_MAX;
volatile int32_t t95 = 64157057;
int16_t x385 = -135;
volatile int64_t x388 = INT64_MIN;
volatile int8_t x389 = 2;
int32_t x391 = INT32_MIN;
volatile int64_t t98 = INT64_MIN;
int64_t x401 = -1LL;
int64_t x411 = INT64_MIN;
int16_t x415 = INT16_MAX;
uint32_t x428 = 3923786U;
int32_t x429 = 402;
uint64_t x432 = 136856553551897LLU;
int16_t x433 = INT16_MIN;
int64_t x440 = 3759LL;
static int8_t x441 = INT8_MIN;
static int8_t x443 = INT8_MIN;
volatile int32_t t110 = 17449;
int8_t x451 = 40;
int64_t t112 = 11120383096LL;
int32_t x453 = -1;
volatile int16_t x457 = 1878;
int8_t x464 = -4;
int8_t x466 = INT8_MIN;
volatile int16_t x468 = 5405;
int32_t t116 = 410950596;
volatile int32_t x469 = INT32_MAX;
uint32_t x470 = 41664U;
volatile uint32_t t117 = 40U;
int64_t x476 = -34926LL;
int16_t x483 = -414;
static int32_t x500 = INT32_MIN;
int16_t x502 = INT16_MIN;
uint16_t x507 = 120U;
static volatile int64_t t126 = -8708566LL;
int32_t x513 = 22;
int8_t x514 = INT8_MAX;
int64_t x516 = INT64_MIN;
int8_t x518 = INT8_MIN;
volatile uint32_t x519 = 1133455679U;
int32_t t129 = -242211;
volatile int64_t x525 = 1040602LL;
int32_t x527 = -1;
int8_t x531 = INT8_MIN;
static uint64_t x535 = 435784LLU;
static volatile uint8_t x539 = 2U;
int16_t x541 = -367;
static volatile int8_t x545 = INT8_MIN;
volatile int64_t t136 = -29644355842LL;
int8_t x552 = -1;
int64_t x555 = 5268972LL;
uint32_t x558 = 11U;
int64_t x562 = 34142907338744LL;
static int32_t x563 = -1;
int64_t t140 = 471350232284LL;
uint8_t x566 = 3U;
volatile int32_t t141 = 232;
volatile int16_t x569 = 2378;
volatile int64_t x570 = 10598851916LL;
volatile int32_t t143 = -1403800;
int64_t t147 = -6404581700LL;
static int64_t x594 = INT64_MIN;
static uint64_t x595 = 3973517714355LLU;
volatile int64_t t148 = 7799155921LL;
uint8_t x604 = 16U;
static uint64_t x605 = UINT64_MAX;
volatile int16_t x607 = INT16_MIN;
int32_t x614 = INT32_MAX;
uint8_t x616 = UINT8_MAX;
volatile int16_t x618 = -264;
int32_t t154 = -1;
static volatile int8_t x621 = INT8_MIN;
int32_t t155 = 31400271;
uint16_t x628 = UINT16_MAX;
static volatile int64_t x630 = INT64_MIN;
int64_t x636 = -1LL;
int16_t x639 = 4;
static volatile int32_t t160 = 367133664;
int32_t x646 = 23647160;
int8_t x647 = -44;
static int32_t x650 = INT32_MIN;
int32_t x655 = INT32_MIN;
volatile int64_t t163 = 89782LL;
volatile uint16_t x666 = UINT16_MAX;
static int16_t x667 = INT16_MIN;
volatile uint64_t x671 = UINT64_MAX;
uint64_t x674 = 18843LLU;
int32_t x677 = -1;
int32_t x678 = 29046498;
int16_t x686 = 7;
volatile int32_t t171 = 43;
uint16_t x689 = 658U;
static int32_t t174 = 5811;
static int32_t x709 = -13923;
static int64_t x713 = -354187LL;
static volatile uint16_t x714 = 25U;
int32_t t179 = -166747790;
static int64_t x723 = INT64_MAX;
volatile int16_t x725 = 77;
uint8_t x726 = 3U;
int32_t x727 = 11;
uint16_t x729 = 1U;
int32_t x736 = INT32_MAX;
static uint64_t t183 = 924081906025LLU;
uint32_t x739 = UINT32_MAX;
uint64_t x743 = 13LLU;
static volatile int32_t x745 = 11979894;
int16_t x746 = 10494;
uint8_t x747 = 0U;
static int8_t x751 = INT8_MIN;
volatile int16_t x759 = INT16_MIN;
volatile int32_t x763 = -1;
volatile uint8_t x766 = UINT8_MAX;
static uint64_t x767 = 8942579066372802424LLU;
uint64_t x783 = 1566462045462046353LLU;
int16_t x790 = 11;
static uint64_t x794 = UINT64_MAX;
uint8_t x799 = UINT8_MAX;


void f0(void) {
    	volatile int64_t x2 = -1LL;
	int16_t x4 = INT16_MAX;
	volatile int64_t t0 = 732LL;

    t0 = (x1|(x2+(x3==x4)));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MIN;

    t1 = (x5|(x6+(x7==x8)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 1U;
	volatile int32_t t2 = 73;

    t2 = (x9|(x10+(x11==x12)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 0U;
	volatile uint16_t x14 = 3606U;
	int16_t x15 = -1;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = -24103;

    t3 = (x13|(x14+(x15==x16)));

    if (t3 != 3606) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	volatile int32_t x18 = -1;
	static int16_t x19 = INT16_MIN;
	static volatile int8_t x20 = 1;
	static volatile int32_t t4 = -166532875;

    t4 = (x17|(x18+(x19==x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -388486901569803LL;
	int32_t x24 = -1;
	volatile uint64_t t5 = UINT64_MAX;

    t5 = (x21|(x22+(x23==x24)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x26 = 1879152435U;
	uint32_t x27 = 480U;
	int16_t x28 = -1;
	static volatile int64_t t6 = 2499128627986349032LL;

    t6 = (x25|(x26+(x27==x28)));

    if (t6 != -9223372034975623373LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	static uint8_t x30 = 52U;
	static int64_t x32 = -1LL;
	int32_t t7 = 32297;

    t7 = (x29|(x30+(x31==x32)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x34 = 1;
	int64_t x35 = INT64_MAX;
	static int64_t x36 = -1LL;

    t8 = (x33|(x34+(x35==x36)));

    if (t8 != -21) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static volatile uint8_t x38 = 105U;
	uint32_t x39 = 10U;
	uint32_t x40 = UINT32_MAX;

    t9 = (x37|(x38+(x39==x40)));

    if (t9 != -9223372036854775703LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	volatile uint16_t x44 = 8123U;

    t10 = (x41|(x42+(x43==x44)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 127;
	int32_t t11 = -125;

    t11 = (x45|(x46+(x47==x48)));

    if (t11 != 511) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	volatile uint8_t x51 = UINT8_MAX;
	int64_t x52 = INT64_MIN;

    t12 = (x49|(x50+(x51==x52)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = -1;
	int32_t x55 = -1;
	int8_t x56 = 3;
	int32_t t13 = -3964030;

    t13 = (x53|(x54+(x55==x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int64_t x58 = INT64_MAX;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	int64_t t14 = -7666840527340006LL;

    t14 = (x57|(x58+(x59==x60)));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	int8_t x63 = -1;
	static volatile uint64_t t15 = 122LLU;

    t15 = (x61|(x62+(x63==x64)));

    if (t15 != 91555711LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = 1;
	static int32_t x67 = INT32_MIN;
	int64_t t16 = INT64_MAX;

    t16 = (x65|(x66+(x67==x68)));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	static uint16_t x70 = 54U;
	volatile int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	static volatile int64_t t17 = 7706266LL;

    t17 = (x69|(x70+(x71==x72)));

    if (t17 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int16_t x75 = -1;
	volatile int32_t x76 = INT32_MIN;
	static volatile uint32_t t18 = UINT32_MAX;

    t18 = (x73|(x74+(x75==x76)));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	int64_t x78 = -2764852LL;
	static int16_t x79 = INT16_MIN;
	int64_t t19 = 8210373724425LL;

    t19 = (x77|(x78+(x79==x80)));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	volatile int16_t x82 = 1;
	int16_t x83 = INT16_MIN;
	volatile int64_t x84 = INT64_MIN;
	int32_t t20 = 247912;

    t20 = (x81|(x82+(x83==x84)));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 41;
	int16_t x86 = 11;
	int64_t x88 = 1113335656273350900LL;
	int32_t t21 = 1097372;

    t21 = (x85|(x86+(x87==x88)));

    if (t21 != 43) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	uint16_t x90 = 4973U;
	int16_t x91 = INT16_MIN;
	int8_t x92 = 0;
	int32_t t22 = 5;

    t22 = (x89|(x90+(x91==x92)));

    if (t22 != -2147478675) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 347486U;
	uint8_t x95 = 0U;
	static uint16_t x96 = UINT16_MAX;
	static volatile uint32_t t23 = 12413U;

    t23 = (x93|(x94+(x95==x96)));

    if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MIN;
	volatile uint64_t x100 = 270569927LLU;
	volatile int32_t t24 = 13334;

    t24 = (x97|(x98+(x99==x100)));

    if (t24 != -2147483393) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 2726344713724198951LLU;
	int64_t x103 = -31956LL;
	static int64_t x104 = INT64_MIN;

    t25 = (x101|(x102+(x103==x104)));

    if (t25 != 2726344715791237119LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	static int64_t x107 = INT64_MAX;
	uint64_t x108 = UINT64_MAX;
	static int32_t t26 = 220675278;

    t26 = (x105|(x106+(x107==x108)));

    if (t26 != -3) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 3197623154LLU;
	volatile int16_t x110 = -30;
	static uint32_t x111 = 222U;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t27 = 3899LLU;

    t27 = (x109|(x110+(x111==x112)));

    if (t27 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	int64_t t28 = 4959430925LL;

    t28 = (x113|(x114+(x115==x116)));

    if (t28 != -9223372036316015790LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = 33LLU;
	int32_t x118 = INT32_MAX;
	static volatile int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MAX;

    t29 = (x117|(x118+(x119==x120)));

    if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	uint32_t x122 = 18806813U;
	uint64_t x123 = UINT64_MAX;
	uint32_t t30 = 31402U;

    t30 = (x121|(x122+(x123==x124)));

    if (t30 != 4294967197U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	static volatile int16_t x127 = -1;
	static int32_t x128 = 6295456;
	int32_t t31 = 578286;

    t31 = (x125|(x126+(x127==x128)));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -15787;
	int16_t x130 = 42;
	volatile uint16_t x131 = 6U;
	uint16_t x132 = UINT16_MAX;
	int32_t t32 = -492872;

    t32 = (x129|(x130+(x131==x132)));

    if (t32 != -15745) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = 39;
	static uint16_t x134 = 4U;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 475U;
	int32_t t33 = -1;

    t33 = (x133|(x134+(x135==x136)));

    if (t33 != 39) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t34 = 58199626621943LL;

    t34 = (x137|(x138+(x139==x140)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = 14;
	uint8_t x142 = 0U;
	int16_t x143 = INT16_MIN;
	int64_t x144 = -130966889871252LL;
	volatile int32_t t35 = 0;

    t35 = (x141|(x142+(x143==x144)));

    if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 248934563268100250LLU;
	volatile int64_t x147 = 196023LL;
	uint16_t x148 = 0U;
	volatile uint64_t t36 = 8937022208LLU;

    t36 = (x145|(x146+(x147==x148)));

    if (t36 != 248934565014405119LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	int32_t x150 = INT32_MAX;
	static uint16_t x152 = 699U;
	int32_t t37 = INT32_MAX;

    t37 = (x149|(x150+(x151==x152)));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = -15;
	int16_t x154 = INT16_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t38 = -38033;

    t38 = (x153|(x154+(x155==x156)));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;

    t39 = (x157|(x158+(x159==x160)));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	static int64_t x162 = -173096643LL;
	int64_t x163 = 673020915379570642LL;
	uint64_t x164 = 6704672490486LLU;

    t40 = (x161|(x162+(x163==x164)));

    if (t40 != -173080577LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x165 = INT8_MIN;
	int64_t x166 = -4LL;
	int32_t x167 = 13671;
	static volatile int32_t x168 = -1;
	int64_t t41 = -134910770596971338LL;

    t41 = (x165|(x166+(x167==x168)));

    if (t41 != -4LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 72799U;
	uint16_t x170 = UINT16_MAX;
	static int32_t x171 = -9156892;
	volatile uint32_t t42 = 1096U;

    t42 = (x169|(x170+(x171==x172)));

    if (t42 != 131071U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 21522674U;
	static int64_t x174 = -1LL;
	static uint8_t x175 = 7U;
	int64_t x176 = 3LL;

    t43 = (x173|(x174+(x175==x176)));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1029LL;
	int64_t x178 = INT64_MAX;
	uint64_t x179 = UINT64_MAX;
	uint16_t x180 = 23U;
	volatile int64_t t44 = -12223578210LL;

    t44 = (x177|(x178+(x179==x180)));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	int8_t x184 = INT8_MAX;
	int32_t t45 = -2589;

    t45 = (x181|(x182+(x183==x184)));

    if (t45 != -32513) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	int64_t x186 = -1LL;
	int8_t x187 = INT8_MIN;

    t46 = (x185|(x186+(x187==x188)));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 1342;
	int8_t x190 = 23;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 47492;

    t47 = (x189|(x190+(x191==x192)));

    if (t47 != 1343) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 13LL;
	int8_t x195 = 3;
	volatile int64_t t48 = -64591LL;

    t48 = (x193|(x194+(x195==x196)));

    if (t48 != -2147483635LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -299LL;
	uint16_t x198 = 4473U;
	uint64_t x199 = 2635068046204235LLU;
	int16_t x200 = INT16_MIN;
	int64_t t49 = 2403315018LL;

    t49 = (x197|(x198+(x199==x200)));

    if (t49 != -3LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MAX;
	uint32_t x202 = 21U;
	static int8_t x203 = -44;
	uint32_t t50 = 3918991U;

    t50 = (x201|(x202+(x203==x204)));

    if (t50 != 32767U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 1;
	uint8_t x206 = UINT8_MAX;
	int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 875325;

    t51 = (x205|(x206+(x207==x208)));

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	int8_t x210 = INT8_MAX;
	int32_t t52 = -1485;

    t52 = (x209|(x210+(x211==x212)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	uint16_t x214 = 15U;
	volatile uint16_t x216 = 1U;
	int32_t t53 = -424051315;

    t53 = (x213|(x214+(x215==x216)));

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	int32_t x218 = 0;
	static int8_t x219 = INT8_MIN;
	static int8_t x220 = -39;
	volatile int64_t t54 = INT64_MAX;

    t54 = (x217|(x218+(x219==x220)));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 12LLU;
	volatile uint32_t x222 = UINT32_MAX;
	static volatile int32_t x223 = 97866655;
	static int8_t x224 = INT8_MAX;
	uint64_t t55 = 590139784637387480LLU;

    t55 = (x221|(x222+(x223==x224)));

    if (t55 != 4294967295LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	static uint8_t x226 = 7U;
	static int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -6;

    t56 = (x225|(x226+(x227==x228)));

    if (t56 != -32761) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 1U;
	uint16_t x230 = 66U;
	static int8_t x232 = INT8_MIN;
	static int32_t t57 = 1019;

    t57 = (x229|(x230+(x231==x232)));

    if (t57 != 67) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 983379U;
	int16_t x234 = INT16_MIN;
	int32_t x235 = 37;
	int8_t x236 = INT8_MIN;
	uint32_t t58 = 7U;

    t58 = (x233|(x234+(x235==x236)));

    if (t58 != 4294934867U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = 14584795025LL;
	uint8_t x239 = 16U;
	uint8_t x240 = 2U;
	static int64_t t59 = -4000293829159310LL;

    t59 = (x237|(x238+(x239==x240)));

    if (t59 != -447590511LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	int32_t x243 = -1;
	int8_t x244 = -1;
	uint32_t t60 = UINT32_MAX;

    t60 = (x241|(x242+(x243==x244)));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	volatile int64_t x246 = INT64_MAX;
	int32_t x247 = INT32_MIN;
	uint8_t x248 = 1U;
	static int64_t t61 = -35023105148910LL;

    t61 = (x245|(x246+(x247==x248)));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 119584U;
	volatile int64_t t62 = INT64_MAX;

    t62 = (x249|(x250+(x251==x252)));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	static int32_t x254 = -1;

    t63 = (x253|(x254+(x255==x256)));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = INT8_MIN;
	volatile int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MAX;
	static volatile int32_t t64 = -1;

    t64 = (x257|(x258+(x259==x260)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x261 = 469U;
	static int32_t x262 = INT32_MIN;
	volatile uint32_t x264 = 1364040U;
	static uint32_t t65 = 6065U;

    t65 = (x261|(x262+(x263==x264)));

    if (t65 != 2147484117U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x265 = 4119283U;
	volatile int8_t x266 = INT8_MAX;
	volatile uint32_t x268 = 169688U;
	static volatile uint32_t t66 = 31U;

    t66 = (x265|(x266+(x267==x268)));

    if (t66 != 4119295U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = 39;
	static int64_t x270 = INT64_MIN;
	int32_t x271 = -1;
	int32_t x272 = INT32_MAX;
	int64_t t67 = 6261LL;

    t67 = (x269|(x270+(x271==x272)));

    if (t67 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = INT64_MIN;
	int8_t x274 = -1;

    t68 = (x273|(x274+(x275==x276)));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 8426471756LLU;
	volatile int8_t x278 = -1;
	static volatile int64_t x279 = 47522565816844529LL;
	int16_t x280 = -1;

    t69 = (x277|(x278+(x279==x280)));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int16_t x282 = -188;
	uint16_t x283 = 3U;
	volatile uint64_t x284 = UINT64_MAX;

    t70 = (x281|(x282+(x283==x284)));

    if (t70 != -188) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = -1;
	int64_t x287 = INT64_MAX;
	int8_t x288 = -1;
	int32_t t71 = -862269282;

    t71 = (x285|(x286+(x287==x288)));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	volatile uint8_t x290 = 3U;
	int8_t x292 = INT8_MIN;
	uint32_t t72 = UINT32_MAX;

    t72 = (x289|(x290+(x291==x292)));

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t73 = INT32_MIN;

    t73 = (x293|(x294+(x295==x296)));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x299 = INT64_MIN;
	uint64_t t74 = UINT64_MAX;

    t74 = (x297|(x298+(x299==x300)));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x302 = UINT32_MAX;
	static int16_t x303 = -1;

    t75 = (x301|(x302+(x303==x304)));

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x305 = -61;
	volatile int8_t x306 = 28;
	int32_t x307 = 10817325;
	int8_t x308 = -1;
	int32_t t76 = -1608;

    t76 = (x305|(x306+(x307==x308)));

    if (t76 != -33) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = INT8_MAX;

    t77 = (x309|(x310+(x311==x312)));

    if (t77 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x314 = -1;
	uint64_t x315 = 5996306LLU;
	int64_t x316 = 32671333450075568LL;
	uint32_t t78 = UINT32_MAX;

    t78 = (x313|(x314+(x315==x316)));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	int16_t x318 = 2772;
	volatile int8_t x319 = 3;
	int32_t x320 = 1;
	volatile int32_t t79 = -23138;

    t79 = (x317|(x318+(x319==x320)));

    if (t79 != -2147480876) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MAX;
	volatile uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	uint64_t x324 = 2660708592253LLU;
	uint64_t t80 = UINT64_MAX;

    t80 = (x321|(x322+(x323==x324)));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x326 = 22471LLU;
	volatile uint8_t x327 = UINT8_MAX;
	static uint8_t x328 = UINT8_MAX;
	uint64_t t81 = 103110LLU;

    t81 = (x325|(x326+(x327==x328)));

    if (t81 != 18446744073709541320LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MIN;
	static uint64_t x330 = UINT64_MAX;
	uint64_t x331 = UINT64_MAX;
	static uint64_t x332 = UINT64_MAX;
	uint64_t t82 = 3758693513841324LLU;

    t82 = (x329|(x330+(x331==x332)));

    if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x335 = 59U;
	int32_t x336 = -2;

    t83 = (x333|(x334+(x335==x336)));

    if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	int8_t x339 = -1;
	volatile int8_t x340 = -1;
	volatile int32_t t84 = 62863;

    t84 = (x337|(x338+(x339==x340)));

    if (t84 != -2147483644) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	uint8_t x343 = 6U;

    t85 = (x341|(x342+(x343==x344)));

    if (t85 != 7746357322239LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 285;
	uint32_t x347 = 371U;
	volatile int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 1;

    t86 = (x345|(x346+(x347==x348)));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	int8_t x350 = 1;
	uint16_t x352 = 401U;
	int64_t t87 = INT64_MAX;

    t87 = (x349|(x350+(x351==x352)));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile int16_t x354 = -1;
	int64_t x355 = -1LL;
	static volatile int32_t t88 = -1;

    t88 = (x353|(x354+(x355==x356)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	static uint8_t x358 = 14U;
	volatile uint8_t x359 = UINT8_MAX;
	static volatile int32_t t89 = -16166014;

    t89 = (x357|(x358+(x359==x360)));

    if (t89 != -114) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = INT16_MIN;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -507963;

    t90 = (x361|(x362+(x363==x364)));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x365 = 399271329147269065LLU;
	int16_t x366 = -379;
	int8_t x367 = INT8_MIN;
	volatile int32_t x368 = INT32_MAX;
	uint64_t t91 = 8222LLU;

    t91 = (x365|(x366+(x367==x368)));

    if (t91 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = 1U;
	uint64_t x371 = 5074050280919730LLU;
	uint8_t x372 = 54U;

    t92 = (x369|(x370+(x371==x372)));

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	int8_t x375 = INT8_MAX;
	volatile int32_t x376 = INT32_MIN;
	uint64_t t93 = UINT64_MAX;

    t93 = (x373|(x374+(x375==x376)));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = 1U;
	int64_t x378 = -1LL;
	int8_t x379 = INT8_MIN;
	volatile uint8_t x380 = 5U;
	volatile int64_t t94 = -379LL;

    t94 = (x377|(x378+(x379==x380)));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MIN;
	uint8_t x384 = 38U;

    t95 = (x381|(x382+(x383==x384)));

    if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 3U;
	static uint16_t x387 = UINT16_MAX;
	int32_t t96 = -4386;

    t96 = (x385|(x386+(x387==x388)));

    if (t96 != -133) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x390 = -24;
	static int64_t x392 = INT64_MIN;
	int32_t t97 = -60162618;

    t97 = (x389|(x390+(x391==x392)));

    if (t97 != -22) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	int64_t x395 = 46932878LL;
	uint64_t x396 = UINT64_MAX;

    t98 = (x393|(x394+(x395==x396)));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = 3703;
	volatile int64_t x399 = INT64_MAX;
	int16_t x400 = 0;
	uint32_t t99 = UINT32_MAX;

    t99 = (x397|(x398+(x399==x400)));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x402 = INT16_MIN;
	static int32_t x403 = -1;
	volatile int64_t x404 = INT64_MAX;
	int64_t t100 = 40399018674LL;

    t100 = (x401|(x402+(x403==x404)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 1943LLU;
	volatile int64_t x406 = INT64_MIN;
	volatile uint16_t x407 = UINT16_MAX;
	volatile int16_t x408 = INT16_MIN;
	uint64_t t101 = 3559LLU;

    t101 = (x405|(x406+(x407==x408)));

    if (t101 != 9223372036854777751LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	static int8_t x410 = 11;
	volatile int16_t x412 = -1;
	int32_t t102 = 42263;

    t102 = (x409|(x410+(x411==x412)));

    if (t102 != -117) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 1248789174929LLU;
	uint8_t x414 = 15U;
	uint16_t x416 = 55U;
	volatile uint64_t t103 = 311725LLU;

    t103 = (x413|(x414+(x415==x416)));

    if (t103 != 1248789174943LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	uint32_t x418 = 16382359U;
	volatile int16_t x419 = INT16_MIN;
	uint16_t x420 = 26991U;
	volatile uint32_t t104 = UINT32_MAX;

    t104 = (x417|(x418+(x419==x420)));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	uint8_t x422 = UINT8_MAX;
	static uint8_t x423 = 115U;
	uint8_t x424 = 108U;
	int32_t t105 = -22665;

    t105 = (x421|(x422+(x423==x424)));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	uint8_t x426 = 57U;
	int8_t x427 = INT8_MIN;
	static volatile int32_t t106 = -39;

    t106 = (x425|(x426+(x427==x428)));

    if (t106 != -2147483591) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = 2;
	int64_t x431 = -7616941417LL;
	int32_t t107 = 30;

    t107 = (x429|(x430+(x431==x432)));

    if (t107 != 402) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x434 = 0;
	uint64_t x435 = 6936LLU;
	uint8_t x436 = 1U;
	int32_t t108 = -577159719;

    t108 = (x433|(x434+(x435==x436)));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MIN;
	uint32_t x438 = 22197U;
	static int8_t x439 = -7;
	uint32_t t109 = 25552U;

    t109 = (x437|(x438+(x439==x440)));

    if (t109 != 4294956725U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x442 = -13;
	int8_t x444 = -1;

    t110 = (x441|(x442+(x443==x444)));

    if (t110 != -13) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MAX;
	int8_t x446 = INT8_MIN;
	static uint8_t x447 = 5U;
	int64_t x448 = 392184093126LL;
	volatile int32_t t111 = -883948801;

    t111 = (x445|(x446+(x447==x448)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x449 = 86415;
	int64_t x450 = 58723878576178481LL;
	uint64_t x452 = UINT64_MAX;

    t112 = (x449|(x450+(x451==x452)));

    if (t112 != 58723878576182719LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = 19LL;
	volatile int8_t x455 = -1;
	int8_t x456 = INT8_MIN;
	volatile int64_t t113 = 100334605LL;

    t113 = (x453|(x454+(x455==x456)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x458 = 3618LLU;
	int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MAX;
	uint64_t t114 = 66560884322696LLU;

    t114 = (x457|(x458+(x459==x460)));

    if (t114 != 3958LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 4U;
	static volatile int32_t x462 = 64564;
	int8_t x463 = -1;
	volatile int32_t t115 = 52;

    t115 = (x461|(x462+(x463==x464)));

    if (t115 != 64564) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = -1;
	int64_t x467 = INT64_MIN;

    t116 = (x465|(x466+(x467==x468)));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x471 = 195735748174LLU;
	int16_t x472 = 172;

    t117 = (x469|(x470+(x471==x472)));

    if (t117 != 2147483647U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 5U;
	static int64_t x474 = 85164761179LL;
	int32_t x475 = 0;
	volatile int64_t t118 = 14LL;

    t118 = (x473|(x474+(x475==x476)));

    if (t118 != 85164761183LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 865922U;
	int32_t x478 = -764846;
	int16_t x479 = INT16_MIN;
	static int16_t x480 = 0;
	uint32_t t119 = 26499U;

    t119 = (x477|(x478+(x479==x480)));

    if (t119 != 4294801106U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = UINT16_MAX;
	uint64_t x482 = 7839944LLU;
	int32_t x484 = -1;
	uint64_t t120 = 0LLU;

    t120 = (x481|(x482+(x483==x484)));

    if (t120 != 7864319LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	uint32_t x486 = 15U;
	static uint32_t x487 = 2035696U;
	static volatile int32_t x488 = INT32_MIN;
	uint32_t t121 = 440692U;

    t121 = (x485|(x486+(x487==x488)));

    if (t121 != 2147483663U) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x489 = INT32_MIN;
	uint32_t x490 = 441385743U;
	int64_t x491 = -1LL;
	int32_t x492 = INT32_MAX;
	static volatile uint32_t t122 = 7034U;

    t122 = (x489|(x490+(x491==x492)));

    if (t122 != 2588869391U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = INT32_MAX;
	uint64_t x494 = 1973867372878LLU;
	int64_t x495 = -70149448LL;
	volatile uint64_t x496 = UINT64_MAX;
	uint64_t t123 = 11927396320803087LLU;

    t123 = (x493|(x494+(x495==x496)));

    if (t123 != 1975684956159LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 0U;
	volatile int32_t x498 = -12;
	static uint8_t x499 = 123U;
	static volatile int32_t t124 = -327;

    t124 = (x497|(x498+(x499==x500)));

    if (t124 != -12) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 922U;
	uint64_t x503 = 2LLU;
	int32_t x504 = INT32_MAX;
	int32_t t125 = 15;

    t125 = (x501|(x502+(x503==x504)));

    if (t125 != -31846) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = INT64_MIN;
	uint8_t x506 = UINT8_MAX;
	uint8_t x508 = 12U;

    t126 = (x505|(x506+(x507==x508)));

    if (t126 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MIN;
	int64_t x510 = INT64_MAX;
	int8_t x511 = INT8_MAX;
	uint16_t x512 = UINT16_MAX;
	static int64_t t127 = -6866414492983LL;

    t127 = (x509|(x510+(x511==x512)));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x515 = UINT32_MAX;
	volatile int32_t t128 = -9190;

    t128 = (x513|(x514+(x515==x516)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	static int8_t x520 = INT8_MIN;

    t129 = (x517|(x518+(x519==x520)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = INT64_MIN;
	int16_t x522 = INT16_MIN;
	volatile int64_t x523 = -430013259LL;
	int32_t x524 = INT32_MIN;
	int64_t t130 = -847207826LL;

    t130 = (x521|(x522+(x523==x524)));

    if (t130 != -32768LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint64_t x526 = UINT64_MAX;
	int16_t x528 = INT16_MIN;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = (x525|(x526+(x527==x528)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 12U;
	int64_t x530 = INT64_MAX;
	int16_t x532 = INT16_MIN;
	static int64_t t132 = INT64_MAX;

    t132 = (x529|(x530+(x531==x532)));

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = -1;
	volatile int64_t x534 = INT64_MIN;
	volatile uint32_t x536 = UINT32_MAX;
	int64_t t133 = -1005795227682487LL;

    t133 = (x533|(x534+(x535==x536)));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x537 = 1073U;
	volatile int64_t x538 = INT64_MIN;
	static volatile int32_t x540 = INT32_MIN;
	int64_t t134 = -31174LL;

    t134 = (x537|(x538+(x539==x540)));

    if (t134 != -9223372036854774735LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x542 = UINT32_MAX;
	int16_t x543 = -7;
	int16_t x544 = INT16_MIN;
	static uint32_t t135 = UINT32_MAX;

    t135 = (x541|(x542+(x543==x544)));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x546 = -1LL;
	uint16_t x547 = 1U;
	int64_t x548 = -4LL;

    t136 = (x545|(x546+(x547==x548)));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x549 = -88;
	volatile int16_t x550 = -1;
	static uint8_t x551 = UINT8_MAX;
	int32_t t137 = -11786;

    t137 = (x549|(x550+(x551==x552)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = -285062408150606LL;
	int8_t x554 = -22;
	static int64_t x556 = -226164702637LL;
	static int64_t t138 = 3168518LL;

    t138 = (x553|(x554+(x555==x556)));

    if (t138 != -6LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	int64_t x559 = 1849333LL;
	int16_t x560 = INT16_MIN;
	int64_t t139 = INT64_MAX;

    t139 = (x557|(x558+(x559==x560)));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MIN;
	uint64_t x564 = UINT64_MAX;

    t140 = (x561|(x562+(x563==x564)));

    if (t140 != -28679LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	int64_t x567 = INT64_MIN;
	int64_t x568 = -28676LL;

    t141 = (x565|(x566+(x567==x568)));

    if (t141 != -125) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x571 = -56901141;
	int16_t x572 = -6883;
	static volatile int64_t t142 = -3411LL;

    t142 = (x569|(x570+(x571==x572)));

    if (t142 != 10598853966LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 1778U;
	int8_t x574 = -1;
	uint32_t x575 = 237325883U;
	static volatile uint16_t x576 = 6U;

    t143 = (x573|(x574+(x575==x576)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 113U;
	int8_t x578 = 1;
	int16_t x579 = INT16_MAX;
	int32_t x580 = INT32_MIN;
	int32_t t144 = 3522;

    t144 = (x577|(x578+(x579==x580)));

    if (t144 != 113) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x581 = 970U;
	uint8_t x582 = 12U;
	int32_t x583 = 1377929;
	uint8_t x584 = UINT8_MAX;
	volatile uint32_t t145 = 2982216U;

    t145 = (x581|(x582+(x583==x584)));

    if (t145 != 974U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 23U;
	static int8_t x586 = INT8_MAX;
	int16_t x587 = 244;
	uint16_t x588 = 124U;
	volatile int32_t t146 = -122;

    t146 = (x585|(x586+(x587==x588)));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = -1LL;
	uint8_t x590 = 3U;
	static uint32_t x591 = 132961U;
	int64_t x592 = INT64_MIN;

    t147 = (x589|(x590+(x591==x592)));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = 2617120961729912397LL;
	int8_t x596 = 0;

    t148 = (x593|(x594+(x595==x596)));

    if (t148 != -6606251075124863411LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	static int16_t x598 = INT16_MAX;
	int16_t x599 = -1;
	int16_t x600 = INT16_MAX;
	volatile int32_t t149 = 1;

    t149 = (x597|(x598+(x599==x600)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int16_t x602 = -3;
	int64_t x603 = INT64_MIN;
	static int32_t t150 = 15199046;

    t150 = (x601|(x602+(x603==x604)));

    if (t150 != -3) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = INT16_MAX;
	uint16_t x608 = 1U;
	static uint64_t t151 = UINT64_MAX;

    t151 = (x605|(x606+(x607==x608)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 76098U;
	volatile int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MIN;
	int8_t x612 = 0;
	volatile int64_t t152 = -197783478009385288LL;

    t152 = (x609|(x610+(x611==x612)));

    if (t152 != -9223372036854699710LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	int16_t x615 = INT16_MIN;
	static volatile int32_t t153 = -207;

    t153 = (x613|(x614+(x615==x616)));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int64_t x619 = INT64_MIN;
	int16_t x620 = INT16_MAX;

    t154 = (x617|(x618+(x619==x620)));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = -1;
	int16_t x623 = 0;
	uint64_t x624 = 28LLU;

    t155 = (x621|(x622+(x623==x624)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int16_t x626 = INT16_MIN;
	volatile int64_t x627 = -1LL;
	volatile int32_t t156 = 1;

    t156 = (x625|(x626+(x627==x628)));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	volatile uint8_t x631 = 8U;
	int64_t x632 = INT64_MIN;
	static volatile int64_t t157 = 687LL;

    t157 = (x629|(x630+(x631==x632)));

    if (t157 != -128LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = -1;
	int16_t x634 = INT16_MIN;
	uint8_t x635 = 14U;
	volatile int32_t t158 = -420146;

    t158 = (x633|(x634+(x635==x636)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	uint64_t x638 = 8700343LLU;
	static uint64_t x640 = 1705781931888LLU;
	volatile uint64_t t159 = UINT64_MAX;

    t159 = (x637|(x638+(x639==x640)));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MIN;
	volatile int32_t x642 = 5;
	volatile int64_t x643 = INT64_MIN;
	int16_t x644 = -186;

    t160 = (x641|(x642+(x643==x644)));

    if (t160 != -123) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -1LL;
	int8_t x648 = 10;
	int64_t t161 = 35868465349247984LL;

    t161 = (x645|(x646+(x647==x648)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	volatile uint8_t x651 = 55U;
	static int16_t x652 = INT16_MIN;
	volatile int64_t t162 = -750897536LL;

    t162 = (x649|(x650+(x651==x652)));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = INT64_MAX;
	int64_t x654 = INT64_MIN;
	int64_t x656 = INT64_MIN;

    t163 = (x653|(x654+(x655==x656)));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	static int32_t x658 = 4839678;
	int32_t x659 = INT32_MIN;
	volatile int16_t x660 = INT16_MIN;
	static volatile int32_t t164 = 1781;

    t164 = (x657|(x658+(x659==x660)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = 0;
	uint32_t x662 = 120937U;
	uint8_t x663 = 0U;
	int64_t x664 = 1284LL;
	volatile uint32_t t165 = 1U;

    t165 = (x661|(x662+(x663==x664)));

    if (t165 != 120937U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 0;
	int8_t x668 = INT8_MIN;
	int32_t t166 = 13;

    t166 = (x665|(x666+(x667==x668)));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	volatile int8_t x670 = 0;
	volatile int16_t x672 = INT16_MAX;
	int32_t t167 = 89;

    t167 = (x669|(x670+(x671==x672)));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MIN;
	volatile int32_t x675 = INT32_MAX;
	uint32_t x676 = 26U;
	static volatile uint64_t t168 = 478149001319914LLU;

    t168 = (x673|(x674+(x675==x676)));

    if (t168 != 18446744071562086811LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x679 = 3624U;
	uint64_t x680 = 8972412242LLU;
	volatile int32_t t169 = 46;

    t169 = (x677|(x678+(x679==x680)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	uint32_t x682 = UINT32_MAX;
	int32_t x683 = INT32_MIN;
	int8_t x684 = -1;
	uint32_t t170 = UINT32_MAX;

    t170 = (x681|(x682+(x683==x684)));

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	uint32_t x687 = 70022U;
	volatile int16_t x688 = INT16_MIN;

    t171 = (x685|(x686+(x687==x688)));

    if (t171 != -121) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = 2U;
	uint64_t x691 = 152LLU;
	int16_t x692 = INT16_MIN;
	static int32_t t172 = 113492983;

    t172 = (x689|(x690+(x691==x692)));

    if (t172 != 658) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x693 = INT32_MIN;
	int16_t x694 = INT16_MIN;
	uint32_t x695 = 1646973537U;
	int8_t x696 = INT8_MIN;
	volatile int32_t t173 = -192;

    t173 = (x693|(x694+(x695==x696)));

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	int8_t x698 = 44;
	int32_t x699 = INT32_MIN;
	int64_t x700 = INT64_MAX;

    t174 = (x697|(x698+(x699==x700)));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = 7870;
	uint16_t x702 = UINT16_MAX;
	volatile int32_t x703 = 1;
	static int64_t x704 = INT64_MIN;
	int32_t t175 = 34992;

    t175 = (x701|(x702+(x703==x704)));

    if (t175 != 65535) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -81;
	volatile int16_t x706 = 54;
	static int16_t x707 = INT16_MIN;
	int16_t x708 = -1;
	volatile int32_t t176 = 887;

    t176 = (x705|(x706+(x707==x708)));

    if (t176 != -65) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = INT8_MIN;
	int8_t x711 = -1;
	volatile uint32_t x712 = 50332908U;
	int32_t t177 = -55098;

    t177 = (x709|(x710+(x711==x712)));

    if (t177 != -99) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x715 = INT64_MAX;
	uint16_t x716 = UINT16_MAX;
	volatile int64_t t178 = 6LL;

    t178 = (x713|(x714+(x715==x716)));

    if (t178 != -354179LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	volatile uint8_t x718 = 53U;
	int16_t x719 = 1;
	uint16_t x720 = 434U;

    t179 = (x717|(x718+(x719==x720)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 22U;
	volatile int8_t x722 = INT8_MIN;
	static uint32_t x724 = 1911U;
	uint32_t t180 = 32753155U;

    t180 = (x721|(x722+(x723==x724)));

    if (t180 != 4294967190U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x728 = 9U;
	static volatile int32_t t181 = 111202008;

    t181 = (x725|(x726+(x727==x728)));

    if (t181 != 79) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = INT32_MIN;
	int32_t x731 = 0;
	volatile int32_t x732 = 13;
	int32_t t182 = -93;

    t182 = (x729|(x730+(x731==x732)));

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 173;
	volatile uint64_t x734 = 172037LLU;
	volatile uint8_t x735 = UINT8_MAX;

    t183 = (x733|(x734+(x735==x736)));

    if (t183 != 172205LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 0U;
	int16_t x738 = -374;
	volatile uint8_t x740 = UINT8_MAX;
	int32_t t184 = -34785;

    t184 = (x737|(x738+(x739==x740)));

    if (t184 != -374) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 795308926U;
	static int64_t x742 = -1LL;
	int16_t x744 = -1;
	static volatile int64_t t185 = -184802LL;

    t185 = (x741|(x742+(x743==x744)));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x748 = -1LL;
	volatile int32_t t186 = 12;

    t186 = (x745|(x746+(x747==x748)));

    if (t186 != 11988222) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x749 = 805U;
	volatile uint64_t x750 = UINT64_MAX;
	uint8_t x752 = 2U;
	static volatile uint64_t t187 = UINT64_MAX;

    t187 = (x749|(x750+(x751==x752)));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = UINT8_MAX;
	volatile uint64_t x754 = 4226726LLU;
	int16_t x755 = 1;
	int8_t x756 = 30;
	uint64_t t188 = 1710958106LLU;

    t188 = (x753|(x754+(x755==x756)));

    if (t188 != 4226815LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x757 = 358;
	int16_t x758 = -5407;
	static uint32_t x760 = UINT32_MAX;
	int32_t t189 = 447;

    t189 = (x757|(x758+(x759==x760)));

    if (t189 != -5145) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int32_t x762 = INT32_MIN;
	int64_t x764 = INT64_MAX;
	int32_t t190 = -809;

    t190 = (x761|(x762+(x763==x764)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	int16_t x768 = 46;
	volatile int32_t t191 = -99161;

    t191 = (x765|(x766+(x767==x768)));

    if (t191 != -32513) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	int8_t x770 = 12;
	uint32_t x771 = UINT32_MAX;
	static uint8_t x772 = 1U;
	static volatile int32_t t192 = 74382839;

    t192 = (x769|(x770+(x771==x772)));

    if (t192 != -116) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MAX;
	uint32_t x774 = 16462487U;
	uint32_t x775 = UINT32_MAX;
	uint8_t x776 = UINT8_MAX;
	int64_t t193 = INT64_MAX;

    t193 = (x773|(x774+(x775==x776)));

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	int32_t x778 = 433399753;
	volatile int8_t x779 = INT8_MIN;
	volatile uint8_t x780 = 5U;
	volatile int32_t t194 = -46891049;

    t194 = (x777|(x778+(x779==x780)));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -1;
	static int64_t x782 = -1LL;
	static uint16_t x784 = UINT16_MAX;
	int64_t t195 = 405LL;

    t195 = (x781|(x782+(x783==x784)));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x789 = 10198125085LLU;
	int32_t x791 = INT32_MIN;
	int16_t x792 = 0;
	uint64_t t196 = 239LLU;

    t196 = (x789|(x790+(x791==x792)));

    if (t196 != 10198125087LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x793 = UINT64_MAX;
	static int16_t x795 = INT16_MIN;
	int8_t x796 = INT8_MAX;
	uint64_t t197 = UINT64_MAX;

    t197 = (x793|(x794+(x795==x796)));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x797 = INT64_MIN;
	uint32_t x798 = 4U;
	int64_t x800 = 1LL;
	static volatile int64_t t198 = -719097551328LL;

    t198 = (x797|(x798+(x799==x800)));

    if (t198 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x801 = 410LLU;
	int16_t x802 = -1;
	uint32_t x803 = 8826845U;
	static int32_t x804 = INT32_MAX;
	volatile uint64_t t199 = UINT64_MAX;

    t199 = (x801|(x802+(x803==x804)));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

