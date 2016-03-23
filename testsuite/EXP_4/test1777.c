
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

int8_t x6 = INT8_MAX;
static volatile int64_t t1 = INT64_MAX;
uint64_t x10 = 1755LLU;
int16_t x16 = INT16_MAX;
volatile int8_t x18 = 6;
uint32_t x24 = UINT32_MAX;
int32_t x28 = INT32_MIN;
static volatile int64_t x30 = 86LL;
volatile int64_t x38 = INT64_MAX;
uint16_t x42 = 110U;
uint64_t x57 = UINT64_MAX;
int16_t x58 = 3113;
uint64_t x59 = 34037013514LLU;
int64_t x61 = -1LL;
uint8_t x66 = 1U;
static int32_t x74 = 2481;
uint32_t x76 = 291604U;
volatile int32_t t18 = -3565;
uint32_t x80 = 231U;
int8_t x84 = INT8_MIN;
int16_t x86 = INT16_MAX;
static uint8_t x88 = UINT8_MAX;
volatile int64_t t24 = INT64_MAX;
int32_t x106 = INT32_MIN;
int64_t t26 = 16129207LL;
int16_t x109 = 0;
int16_t x110 = -1;
volatile int32_t x116 = INT32_MIN;
static volatile int32_t t29 = -817901;
volatile int8_t x124 = -7;
volatile int32_t x130 = INT32_MAX;
int64_t x136 = -1LL;
volatile int64_t x142 = 1LL;
int16_t x149 = 8855;
int64_t x151 = INT64_MIN;
int32_t t37 = -926176;
int64_t x160 = INT64_MAX;
int32_t t39 = -385340880;
int64_t x168 = INT64_MAX;
int16_t x170 = INT16_MAX;
int32_t x172 = INT32_MIN;
int64_t x185 = INT64_MIN;
int64_t x186 = INT64_MIN;
volatile int64_t t45 = 54356146LL;
int16_t x197 = 15;
volatile int32_t t48 = 461;
static int16_t x201 = INT16_MAX;
int16_t x202 = INT16_MIN;
volatile int32_t x207 = INT32_MAX;
int8_t x208 = -1;
int32_t x227 = INT32_MAX;
static int32_t x236 = -406578;
uint8_t x237 = 1U;
volatile int32_t x244 = -138;
static int8_t x254 = INT8_MIN;
static uint8_t x255 = 53U;
int8_t x256 = 20;
static int8_t x259 = -1;
int16_t x260 = INT16_MIN;
static volatile uint32_t x262 = UINT32_MAX;
int8_t x266 = 11;
int32_t x267 = -1;
uint64_t x272 = UINT64_MAX;
int64_t x276 = -58694976466700206LL;
int32_t t66 = 1087;
int64_t x278 = -1LL;
static uint64_t x280 = 14349736623LLU;
int64_t t67 = 2354290LL;
static uint16_t x291 = 5337U;
int8_t x292 = INT8_MIN;
volatile uint32_t t70 = 139422U;
int8_t x296 = -1;
volatile int16_t x299 = -10;
int8_t x301 = INT8_MAX;
int64_t x315 = -1LL;
static int8_t x317 = INT8_MIN;
uint8_t x318 = UINT8_MAX;
static uint32_t x323 = 182U;
int64_t x326 = -1LL;
int16_t x332 = -1;
int64_t t81 = 64896245657LL;
int32_t x345 = -1;
static volatile int16_t x351 = 125;
volatile uint32_t t86 = 156U;
uint32_t x359 = UINT32_MAX;
static int64_t x360 = -55240124LL;
static uint32_t x369 = 2467823U;
uint32_t t90 = 1143257U;
static uint64_t x374 = 382525448603LLU;
int32_t x377 = -816;
int64_t x379 = -1LL;
int64_t x380 = INT64_MIN;
uint32_t x382 = 234104211U;
static uint16_t x383 = UINT16_MAX;
int8_t x391 = -57;
int64_t x415 = -30625LL;
volatile int8_t x418 = 50;
int64_t x419 = INT64_MIN;
static volatile int64_t t101 = INT64_MAX;
static volatile int64_t x428 = -1LL;
int32_t x429 = -1;
int32_t x434 = -33190;
uint8_t x439 = 64U;
volatile int64_t x445 = INT64_MIN;
uint8_t x446 = 79U;
volatile int64_t t108 = 15960629LL;
int64_t x455 = -262739512LL;
static uint32_t x471 = 8021143U;
uint32_t x474 = UINT32_MAX;
int32_t x478 = INT32_MIN;
int16_t x490 = -1;
uint32_t t118 = UINT32_MAX;
uint8_t x496 = 2U;
int8_t x497 = INT8_MIN;
static volatile int8_t x499 = INT8_MIN;
uint32_t x501 = UINT32_MAX;
uint16_t x502 = UINT16_MAX;
uint64_t x503 = 5902176969450600LLU;
volatile uint64_t t124 = UINT64_MAX;
uint64_t x520 = 497855589339LLU;
int16_t x521 = INT16_MIN;
static int64_t x524 = INT64_MAX;
volatile int16_t x526 = INT16_MIN;
volatile int32_t x530 = INT32_MIN;
uint32_t x534 = 56578U;
uint16_t x538 = 1023U;
static int8_t x542 = INT8_MIN;
volatile int32_t t131 = 37968829;
int16_t x546 = INT16_MIN;
int32_t x552 = -1035;
volatile int32_t t133 = 115908046;
int8_t x554 = INT8_MIN;
int64_t x557 = -1LL;
volatile uint64_t t135 = UINT64_MAX;
static uint32_t t136 = UINT32_MAX;
static uint64_t t140 = UINT64_MAX;
volatile int64_t x584 = -1LL;
int32_t x585 = -1;
uint16_t x593 = UINT16_MAX;
uint16_t x597 = 11388U;
int32_t t146 = 9;
int8_t x612 = -1;
int32_t t147 = 61;
int32_t x613 = INT32_MIN;
static uint32_t x627 = 3927023U;
uint32_t x629 = 149227551U;
int16_t x646 = INT16_MAX;
static uint64_t x655 = 1417390432LLU;
int32_t t156 = -24;
uint16_t x657 = 3641U;
int16_t x659 = -1;
volatile int32_t t157 = 1;
uint16_t x664 = 1729U;
static int8_t x667 = INT8_MIN;
int8_t x669 = INT8_MIN;
volatile uint8_t x673 = UINT8_MAX;
int64_t x682 = -1LL;
int32_t x684 = INT32_MIN;
int32_t x686 = 59186249;
uint16_t x691 = 20939U;
static int16_t x710 = -186;
uint8_t x720 = UINT8_MAX;
uint32_t x723 = 601U;
uint32_t x724 = UINT32_MAX;
volatile int32_t x726 = -1;
int32_t t174 = 76178;
int8_t x738 = INT8_MAX;
int32_t x743 = -1;
int8_t x746 = -1;
int32_t t178 = -4173;
static volatile int64_t t179 = -910259434160LL;
volatile int8_t x762 = 7;
int64_t x763 = INT64_MIN;
uint64_t x766 = 235415887007309136LLU;
volatile uint64_t t183 = 499481664771660LLU;
uint64_t x773 = 137227LLU;
volatile uint64_t t185 = 31592444887099LLU;
volatile int16_t x780 = INT16_MIN;
static volatile int32_t t186 = -74385487;
uint32_t t190 = 704U;
int16_t x806 = INT16_MAX;
int16_t x810 = 47;
int32_t x817 = -141;
int64_t x821 = -1LL;
volatile int8_t x822 = -1;
static int8_t x828 = -1;
uint64_t x829 = 601972764LLU;
static volatile uint64_t t199 = 929879650LLU;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int32_t x2 = 2;
	volatile int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	static uint64_t t0 = UINT64_MAX;

    t0 = (x1|(x2+(x3<=x4)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	volatile uint64_t x7 = 3597573550228693946LLU;
	int8_t x8 = INT8_MIN;

    t1 = (x5|(x6+(x7<=x8)));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	int32_t x11 = -17217;
	volatile uint64_t x12 = 43LLU;
	static uint64_t t2 = UINT64_MAX;

    t2 = (x9|(x10+(x11<=x12)));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -1;
	int64_t x14 = -1269LL;
	uint64_t x15 = 41778559LLU;
	int64_t t3 = -842142637LL;

    t3 = (x13|(x14+(x15<=x16)));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x17 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 34;

    t4 = (x17|(x18+(x19<=x20)));

    if (t4 != -121) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = -1LL;
	static int64_t x22 = -1LL;
	static int8_t x23 = -36;
	int64_t t5 = -1LL;

    t5 = (x21|(x22+(x23<=x24)));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 2968;
	static int16_t x26 = INT16_MIN;
	uint64_t x27 = 81117423709LLU;
	volatile int32_t t6 = -9756;

    t6 = (x25|(x26+(x27<=x28)));

    if (t6 != -29799) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 2140037U;
	int8_t x31 = 7;
	volatile int16_t x32 = INT16_MIN;
	int64_t t7 = 27108860049390897LL;

    t7 = (x29|(x30+(x31<=x32)));

    if (t7 != 2140119LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	static uint8_t x34 = 1U;
	volatile int16_t x35 = 244;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 3;

    t8 = (x33|(x34+(x35<=x36)));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	int16_t x39 = INT16_MAX;
	int32_t x40 = -70463612;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x37|(x38+(x39<=x40)));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -357622LL;
	int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MAX;
	static volatile int64_t t10 = 46671322854LL;

    t10 = (x41|(x42+(x43<=x44)));

    if (t10 != -357522LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	static uint16_t x46 = 1827U;
	int8_t x47 = INT8_MIN;
	volatile int8_t x48 = -1;
	static uint64_t t11 = UINT64_MAX;

    t11 = (x45|(x46+(x47<=x48)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	static uint8_t x50 = 1U;
	static uint16_t x51 = 0U;
	static volatile uint8_t x52 = 1U;
	volatile int32_t t12 = 29529880;

    t12 = (x49|(x50+(x51<=x52)));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MIN;
	int16_t x54 = 1;
	static volatile uint16_t x55 = 0U;
	int32_t x56 = 0;
	volatile int32_t t13 = 250;

    t13 = (x53|(x54+(x55<=x56)));

    if (t13 != -126) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x60 = INT16_MIN;
	volatile uint64_t t14 = UINT64_MAX;

    t14 = (x57|(x58+(x59<=x60)));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = 759;
	static volatile int16_t x63 = INT16_MAX;
	int16_t x64 = INT16_MIN;
	int64_t t15 = 921816956LL;

    t15 = (x61|(x62+(x63<=x64)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -4;
	uint64_t x67 = 6LLU;
	volatile uint64_t x68 = 263511368557291LLU;
	int32_t t16 = 2;

    t16 = (x65|(x66+(x67<=x68)));

    if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = 90677122;
	static int16_t x70 = 324;
	static uint64_t x71 = UINT64_MAX;
	uint8_t x72 = UINT8_MAX;
	static volatile int32_t t17 = 1;

    t17 = (x69|(x70+(x71<=x72)));

    if (t17 != 90677190) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	volatile uint16_t x75 = 39U;

    t18 = (x73|(x74+(x75<=x76)));

    if (t18 != -78) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 12059;
	int32_t x78 = INT32_MAX;
	static uint32_t x79 = 620U;
	static volatile int32_t t19 = INT32_MAX;

    t19 = (x77|(x78+(x79<=x80)));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 1222U;
	volatile uint8_t x82 = UINT8_MAX;
	int8_t x83 = -1;
	int32_t t20 = 633212513;

    t20 = (x81|(x82+(x83<=x84)));

    if (t20 != 1279) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = 1;
	uint8_t x87 = UINT8_MAX;
	static volatile int32_t t21 = -700;

    t21 = (x85|(x86+(x87<=x88)));

    if (t21 != 32769) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 4090052273148339759LLU;
	static int32_t x90 = INT32_MIN;
	int8_t x91 = -7;
	static int8_t x92 = -4;
	uint64_t t22 = 1LLU;

    t22 = (x89|(x90+(x91<=x92)));

    if (t22 != 18446744073001313839LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	static int8_t x94 = 58;
	uint8_t x95 = UINT8_MAX;
	volatile int32_t x96 = 238;
	static int64_t t23 = 120787630923092270LL;

    t23 = (x93|(x94+(x95<=x96)));

    if (t23 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	uint16_t x98 = 15731U;
	int64_t x99 = INT64_MIN;
	int32_t x100 = -1;

    t24 = (x97|(x98+(x99<=x100)));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = 0;
	static uint32_t x102 = 2U;
	int64_t x103 = INT64_MAX;
	static int16_t x104 = 18;
	volatile uint32_t t25 = 451668021U;

    t25 = (x101|(x102+(x103<=x104)));

    if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x105 = INT64_MIN;
	int8_t x107 = 18;
	int8_t x108 = 26;

    t26 = (x105|(x106+(x107<=x108)));

    if (t26 != -2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x111 = INT64_MIN;
	int32_t x112 = -1;
	int32_t t27 = 10;

    t27 = (x109|(x110+(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = -7;
	int8_t x114 = INT8_MIN;
	static int16_t x115 = INT16_MIN;
	int32_t t28 = -53;

    t28 = (x113|(x114+(x115<=x116)));

    if (t28 != -7) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = 0;
	volatile uint8_t x118 = 61U;
	int16_t x119 = -5754;
	uint64_t x120 = 8258206717356LLU;

    t29 = (x117|(x118+(x119<=x120)));

    if (t29 != 61) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	int8_t x122 = -1;
	int16_t x123 = 27;
	static volatile int32_t t30 = 175685390;

    t30 = (x121|(x122+(x123<=x124)));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = 44425LLU;
	volatile int16_t x126 = INT16_MIN;
	int64_t x127 = -387515501506LL;
	int8_t x128 = 9;
	static volatile uint64_t t31 = 1083230532864613574LLU;

    t31 = (x125|(x126+(x127<=x128)));

    if (t31 != 18446744073709530505LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	int8_t x131 = -1;
	uint64_t x132 = 50LLU;
	uint64_t t32 = UINT64_MAX;

    t32 = (x129|(x130+(x131<=x132)));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1931;
	int16_t x134 = -1;
	uint32_t x135 = 542U;
	static volatile int32_t t33 = 48582;

    t33 = (x133|(x134+(x135<=x136)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MIN;
	int8_t x139 = 1;
	int32_t x140 = INT32_MAX;
	volatile int64_t t34 = 391998294799LL;

    t34 = (x137|(x138+(x139<=x140)));

    if (t34 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	uint64_t x144 = 0LLU;
	static volatile int64_t t35 = -47537LL;

    t35 = (x141|(x142+(x143<=x144)));

    if (t35 != -127LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MAX;
	volatile int8_t x146 = 0;
	int64_t x147 = INT64_MAX;
	int64_t x148 = 37935858172LL;
	int32_t t36 = 5;

    t36 = (x145|(x146+(x147<=x148)));

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = 477U;
	int8_t x152 = INT8_MIN;

    t37 = (x149|(x150+(x151<=x152)));

    if (t37 != 9183) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint8_t x154 = 0U;
	volatile int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MIN;
	volatile int64_t t38 = INT64_MIN;

    t38 = (x153|(x154+(x155<=x156)));

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -23;
	static int32_t x158 = -15;
	static uint8_t x159 = 0U;

    t39 = (x157|(x158+(x159<=x160)));

    if (t39 != -5) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 1U;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	volatile int32_t t40 = 20138;

    t40 = (x161|(x162+(x163<=x164)));

    if (t40 != 257) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 0;
	volatile uint64_t x166 = 2051190827LLU;
	int32_t x167 = INT32_MAX;
	uint64_t t41 = 912628129620974188LLU;

    t41 = (x165|(x166+(x167<=x168)));

    if (t41 != 2051190828LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = 94U;
	static int32_t x171 = -1;
	volatile int32_t t42 = 6;

    t42 = (x169|(x170+(x171<=x172)));

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MAX;
	static int32_t x174 = -1445;
	static int64_t x175 = 1772446LL;
	uint8_t x176 = 2U;
	int32_t t43 = 188049;

    t43 = (x173|(x174+(x175<=x176)));

    if (t43 != -1409) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	static uint64_t x178 = 8703094783299985863LLU;
	int32_t x179 = -3;
	uint8_t x180 = 0U;
	uint64_t t44 = 9528870517LLU;

    t44 = (x177|(x178+(x179<=x180)));

    if (t44 != 8703094783300009983LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x187 = -580056;
	static int8_t x188 = -1;

    t45 = (x185|(x186+(x187<=x188)));

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	volatile uint32_t x191 = 720U;
	int8_t x192 = INT8_MIN;
	volatile int32_t t46 = 1019611;

    t46 = (x189|(x190+(x191<=x192)));

    if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x193 = 624260830345LLU;
	volatile int64_t x194 = 5LL;
	int32_t x195 = 12586;
	volatile int16_t x196 = INT16_MIN;
	uint64_t t47 = 115543LLU;

    t47 = (x193|(x194+(x195<=x196)));

    if (t47 != 624260830349LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x198 = -12289;
	volatile int64_t x199 = -1LL;
	volatile uint16_t x200 = UINT16_MAX;

    t48 = (x197|(x198+(x199<=x200)));

    if (t48 != -12273) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x203 = INT8_MIN;
	int64_t x204 = -31021243655LL;
	volatile int32_t t49 = -1300;

    t49 = (x201|(x202+(x203<=x204)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MIN;
	volatile uint8_t x206 = 4U;
	int32_t t50 = 16984;

    t50 = (x205|(x206+(x207<=x208)));

    if (t50 != -2147483644) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x209 = 6090U;
	volatile uint64_t x210 = UINT64_MAX;
	volatile int64_t x211 = -985786947LL;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t51 = 107883941LLU;

    t51 = (x209|(x210+(x211<=x212)));

    if (t51 != 6090LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x213 = 79206667581453436LL;
	int32_t x214 = -364;
	int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	int64_t t52 = -781547794186LL;

    t52 = (x213|(x214+(x215<=x216)));

    if (t52 != -259LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = 2267U;
	volatile int16_t x218 = INT16_MIN;
	uint8_t x219 = 54U;
	volatile uint8_t x220 = 3U;
	volatile uint32_t t53 = 33302U;

    t53 = (x217|(x218+(x219<=x220)));

    if (t53 != 4294936795U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = 1715LL;
	uint8_t x222 = 68U;
	static int8_t x223 = INT8_MIN;
	int8_t x224 = 0;
	int64_t t54 = -700809137218LL;

    t54 = (x221|(x222+(x223<=x224)));

    if (t54 != 1783LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = -1LL;
	volatile uint64_t x226 = 38532823250LLU;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t55 = UINT64_MAX;

    t55 = (x225|(x226+(x227<=x228)));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x229 = INT64_MAX;
	static uint8_t x230 = UINT8_MAX;
	int32_t x231 = -51905858;
	static int64_t x232 = 3938582167747LL;
	volatile int64_t t56 = INT64_MAX;

    t56 = (x229|(x230+(x231<=x232)));

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x233 = -1;
	uint64_t x234 = 41766059207595LLU;
	int32_t x235 = -1;
	uint64_t t57 = UINT64_MAX;

    t57 = (x233|(x234+(x235<=x236)));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x238 = -1;
	volatile int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MIN;
	volatile int32_t t58 = 221558177;

    t58 = (x237|(x238+(x239<=x240)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = INT64_MIN;
	int64_t x242 = -1LL;
	int32_t x243 = INT32_MIN;
	int64_t t59 = INT64_MIN;

    t59 = (x241|(x242+(x243<=x244)));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x249 = 28U;
	uint32_t x250 = 30364841U;
	uint32_t x251 = 87U;
	int32_t x252 = 4201;
	uint32_t t60 = 26663796U;

    t60 = (x249|(x250+(x251<=x252)));

    if (t60 != 30364862U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x253 = 3;
	volatile int32_t t61 = 46;

    t61 = (x253|(x254+(x255<=x256)));

    if (t61 != -125) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = INT16_MAX;
	static int64_t x258 = INT64_MIN;
	int64_t t62 = 64138LL;

    t62 = (x257|(x258+(x259<=x260)));

    if (t62 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x261 = 640U;
	volatile int8_t x263 = INT8_MIN;
	volatile uint8_t x264 = 5U;
	static volatile uint32_t t63 = 35608721U;

    t63 = (x261|(x262+(x263<=x264)));

    if (t63 != 640U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = INT8_MAX;
	volatile int16_t x268 = -1;
	volatile int32_t t64 = -68223186;

    t64 = (x265|(x266+(x267<=x268)));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = INT32_MAX;
	int8_t x270 = -1;
	int8_t x271 = 0;
	volatile int32_t t65 = INT32_MAX;

    t65 = (x269|(x270+(x271<=x272)));

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x273 = 17U;
	volatile uint8_t x274 = 5U;
	uint8_t x275 = 8U;

    t66 = (x273|(x274+(x275<=x276)));

    if (t66 != 21) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x277 = 439U;
	volatile int16_t x279 = -1;

    t67 = (x277|(x278+(x279<=x280)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = 0;
	volatile int32_t x282 = 274248658;
	int64_t x283 = 161LL;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t68 = -105991718;

    t68 = (x281|(x282+(x283<=x284)));

    if (t68 != 274248659) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = INT16_MIN;
	static uint16_t x286 = UINT16_MAX;
	static int16_t x287 = INT16_MIN;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t69 = 364703306;

    t69 = (x285|(x286+(x287<=x288)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = 907;
	uint32_t x290 = 1440493U;

    t70 = (x289|(x290+(x291<=x292)));

    if (t70 != 1440751U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x293 = 5180U;
	static int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	int64_t t71 = 1366019264LL;

    t71 = (x293|(x294+(x295<=x296)));

    if (t71 != -9223372036854770627LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x297 = INT8_MAX;
	int8_t x298 = -11;
	int8_t x300 = 0;
	static volatile int32_t t72 = -279381093;

    t72 = (x297|(x298+(x299<=x300)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x302 = -1;
	int64_t x303 = 205472950LL;
	static int16_t x304 = 3;
	int32_t t73 = 468125;

    t73 = (x301|(x302+(x303<=x304)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x305 = -728;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t74 = -12;

    t74 = (x305|(x306+(x307<=x308)));

    if (t74 != -728) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x309 = 33U;
	int32_t x310 = 0;
	uint8_t x311 = 38U;
	volatile uint16_t x312 = 4390U;
	uint32_t t75 = 14U;

    t75 = (x309|(x310+(x311<=x312)));

    if (t75 != 33U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = 0;
	uint64_t x314 = 5097327499836LLU;
	int32_t x316 = -1;
	static uint64_t t76 = 86279816751299LLU;

    t76 = (x313|(x314+(x315<=x316)));

    if (t76 != 5097327499837LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x319 = INT8_MIN;
	int32_t x320 = 94;
	int32_t t77 = -124984;

    t77 = (x317|(x318+(x319<=x320)));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x321 = -22787749374LL;
	uint16_t x322 = 5930U;
	int64_t x324 = -141337612177433972LL;
	int64_t t78 = 6946LL;

    t78 = (x321|(x322+(x323<=x324)));

    if (t78 != -22787743958LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x325 = 0;
	int8_t x327 = -1;
	int32_t x328 = -1;
	static volatile int64_t t79 = 7261LL;

    t79 = (x325|(x326+(x327<=x328)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = -1LL;
	static uint8_t x330 = UINT8_MAX;
	uint64_t x331 = 380977813139520LLU;
	volatile int64_t t80 = 2803289LL;

    t80 = (x329|(x330+(x331<=x332)));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x333 = 1;
	int64_t x334 = INT64_MIN;
	uint32_t x335 = 37951U;
	volatile int16_t x336 = -1;

    t81 = (x333|(x334+(x335<=x336)));

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x337 = UINT16_MAX;
	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	uint64_t x340 = 193135784LLU;
	volatile int32_t t82 = -766118;

    t82 = (x337|(x338+(x339<=x340)));

    if (t82 != -2147418113) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x341 = 26;
	int64_t x342 = INT64_MIN;
	uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = -1917;
	volatile int64_t t83 = -1049936228291696713LL;

    t83 = (x341|(x342+(x343<=x344)));

    if (t83 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x346 = 3070U;
	int64_t x347 = 218374820LL;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t84 = -2;

    t84 = (x345|(x346+(x347<=x348)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	static uint8_t x350 = UINT8_MAX;
	uint32_t x352 = UINT32_MAX;
	static int32_t t85 = 2;

    t85 = (x349|(x350+(x351<=x352)));

    if (t85 != -2147483392) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x353 = INT8_MIN;
	volatile uint32_t x354 = 654210U;
	int64_t x355 = INT64_MIN;
	int8_t x356 = 2;

    t86 = (x353|(x354+(x355<=x356)));

    if (t86 != 4294967171U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = INT16_MIN;
	uint64_t x358 = 1134971LLU;
	volatile uint64_t t87 = 263054853367444365LLU;

    t87 = (x357|(x358+(x359<=x360)));

    if (t87 != 18446744073709539707LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x361 = UINT64_MAX;
	volatile int32_t x362 = -146023;
	static uint16_t x363 = 12319U;
	int8_t x364 = INT8_MIN;
	uint64_t t88 = UINT64_MAX;

    t88 = (x361|(x362+(x363<=x364)));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x365 = 446855802507LL;
	uint64_t x366 = 100062369236642590LLU;
	uint8_t x367 = 0U;
	int32_t x368 = -1;
	static volatile uint64_t t89 = 3138409043651LLU;

    t89 = (x365|(x366+(x367<=x368)));

    if (t89 != 100062678642323359LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x370 = 2394;
	static int8_t x371 = -24;
	int32_t x372 = INT32_MAX;

    t90 = (x369|(x370+(x371<=x372)));

    if (t90 != 2469887U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x373 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	uint16_t x376 = UINT16_MAX;
	static uint64_t t91 = 17719807546228420LLU;

    t91 = (x373|(x374+(x375<=x376)));

    if (t91 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x378 = -1;
	int32_t t92 = -39355534;

    t92 = (x377|(x378+(x379<=x380)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = 0;
	uint8_t x384 = 1U;
	volatile uint32_t t93 = 1U;

    t93 = (x381|(x382+(x383<=x384)));

    if (t93 != 234104211U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x389 = 403LL;
	volatile uint32_t x390 = 15651987U;
	uint32_t x392 = 28081U;
	volatile int64_t t94 = 2435312567541LL;

    t94 = (x389|(x390+(x391<=x392)));

    if (t94 != 15652243LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x393 = -6;
	int32_t x394 = -1;
	int8_t x395 = INT8_MAX;
	static volatile int64_t x396 = -4010391463092LL;
	volatile int32_t t95 = -5781428;

    t95 = (x393|(x394+(x395<=x396)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = 37631;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	static uint16_t x400 = 22U;
	volatile int64_t t96 = -1829679929143LL;

    t96 = (x397|(x398+(x399<=x400)));

    if (t96 != -9223372036854738177LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x401 = INT64_MIN;
	int64_t x402 = -1LL;
	int32_t x403 = INT32_MAX;
	int8_t x404 = -1;
	volatile int64_t t97 = 1908LL;

    t97 = (x401|(x402+(x403<=x404)));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x405 = 0;
	int8_t x406 = 46;
	static int16_t x407 = INT16_MIN;
	int64_t x408 = -1LL;
	volatile int32_t t98 = 14;

    t98 = (x405|(x406+(x407<=x408)));

    if (t98 != 47) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = INT64_MAX;
	int32_t x410 = -1;
	static int8_t x411 = 16;
	int64_t x412 = INT64_MIN;
	static volatile int64_t t99 = 2522LL;

    t99 = (x409|(x410+(x411<=x412)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x413 = -1;
	int32_t x414 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t100 = 2458937;

    t100 = (x413|(x414+(x415<=x416)));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = INT64_MAX;
	volatile int8_t x420 = INT8_MAX;

    t101 = (x417|(x418+(x419<=x420)));

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x421 = INT32_MAX;
	uint16_t x422 = UINT16_MAX;
	uint16_t x423 = 1U;
	uint16_t x424 = 807U;
	int32_t t102 = INT32_MAX;

    t102 = (x421|(x422+(x423<=x424)));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x425 = 127711614393900LLU;
	int32_t x426 = INT32_MIN;
	int32_t x427 = -122;
	volatile uint64_t t103 = 55509644209371LLU;

    t103 = (x425|(x426+(x427<=x428)));

    if (t103 != 18446744072323915309LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x430 = -1;
	static int16_t x431 = -121;
	static volatile uint16_t x432 = 11176U;
	volatile int32_t t104 = -31960;

    t104 = (x429|(x430+(x431<=x432)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -1LL;
	int16_t x435 = -1;
	static volatile int64_t x436 = 60132342LL;
	int64_t t105 = 7909827166558LL;

    t105 = (x433|(x434+(x435<=x436)));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = INT16_MIN;
	int32_t x438 = INT32_MAX;
	int32_t x440 = -1;
	volatile int32_t t106 = 2319;

    t106 = (x437|(x438+(x439<=x440)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = -3050658402LL;
	int64_t x442 = -1LL;
	uint8_t x443 = 5U;
	int32_t x444 = -1;
	int64_t t107 = 3222088268555LL;

    t107 = (x441|(x442+(x443<=x444)));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x447 = INT16_MIN;
	volatile int64_t x448 = INT64_MAX;

    t108 = (x445|(x446+(x447<=x448)));

    if (t108 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x449 = 6U;
	static int8_t x450 = INT8_MIN;
	int16_t x451 = -10;
	int16_t x452 = -1;
	static int32_t t109 = -78240;

    t109 = (x449|(x450+(x451<=x452)));

    if (t109 != -121) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -6127LL;
	volatile int32_t x454 = -1;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t110 = 4132203507LL;

    t110 = (x453|(x454+(x455<=x456)));

    if (t110 != -6127LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = INT64_MAX;
	volatile int16_t x458 = INT16_MIN;
	uint16_t x459 = 2U;
	static uint64_t x460 = 0LLU;
	volatile int64_t t111 = -740661972343LL;

    t111 = (x457|(x458+(x459<=x460)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x465 = 41;
	static uint16_t x466 = 203U;
	volatile uint16_t x467 = UINT16_MAX;
	uint8_t x468 = 20U;
	volatile int32_t t112 = 45400;

    t112 = (x465|(x466+(x467<=x468)));

    if (t112 != 235) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = INT8_MAX;
	uint16_t x470 = UINT16_MAX;
	static int32_t x472 = INT32_MIN;
	int32_t t113 = 19;

    t113 = (x469|(x470+(x471<=x472)));

    if (t113 != 65663) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x473 = -1;
	int8_t x475 = INT8_MIN;
	int16_t x476 = INT16_MIN;
	uint32_t t114 = UINT32_MAX;

    t114 = (x473|(x474+(x475<=x476)));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x477 = UINT16_MAX;
	uint16_t x479 = 141U;
	int16_t x480 = INT16_MIN;
	int32_t t115 = 25069;

    t115 = (x477|(x478+(x479<=x480)));

    if (t115 != -2147418113) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x481 = 163628LLU;
	int8_t x482 = -1;
	int16_t x483 = -2519;
	volatile uint16_t x484 = 0U;
	uint64_t t116 = 17068874980850078LLU;

    t116 = (x481|(x482+(x483<=x484)));

    if (t116 != 163628LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x485 = INT64_MIN;
	uint16_t x486 = 2U;
	volatile int64_t x487 = -1LL;
	int32_t x488 = INT32_MAX;
	int64_t t117 = 40701095LL;

    t117 = (x485|(x486+(x487<=x488)));

    if (t117 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x489 = UINT32_MAX;
	int32_t x491 = 1;
	int16_t x492 = INT16_MAX;

    t118 = (x489|(x490+(x491<=x492)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x493 = 3LL;
	uint64_t x494 = 2LLU;
	uint64_t x495 = UINT64_MAX;
	volatile uint64_t t119 = 797378276958LLU;

    t119 = (x493|(x494+(x495<=x496)));

    if (t119 != 3LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x498 = INT8_MIN;
	int64_t x500 = -1LL;
	int32_t t120 = 841461;

    t120 = (x497|(x498+(x499<=x500)));

    if (t120 != -127) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x504 = 14U;
	volatile uint32_t t121 = UINT32_MAX;

    t121 = (x501|(x502+(x503<=x504)));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = -7;
	static int64_t x506 = -1LL;
	static int8_t x507 = -2;
	int32_t x508 = INT32_MIN;
	volatile int64_t t122 = 30701LL;

    t122 = (x505|(x506+(x507<=x508)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x509 = 534004535;
	volatile int16_t x510 = INT16_MIN;
	uint16_t x511 = 2446U;
	int16_t x512 = INT16_MIN;
	int32_t t123 = 5;

    t123 = (x509|(x510+(x511<=x512)));

    if (t123 != -15561) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x513 = UINT64_MAX;
	int16_t x514 = -1;
	static volatile uint16_t x515 = 3U;
	volatile int64_t x516 = 1174742684082LL;

    t124 = (x513|(x514+(x515<=x516)));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x517 = 0U;
	static int64_t x518 = INT64_MIN;
	uint32_t x519 = UINT32_MAX;
	volatile int64_t t125 = 85LL;

    t125 = (x517|(x518+(x519<=x520)));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x522 = -12629839LL;
	volatile uint16_t x523 = 5U;
	volatile int64_t t126 = 96888090122551LL;

    t126 = (x521|(x522+(x523<=x524)));

    if (t126 != -14158LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = 1137;
	static int32_t x527 = 121;
	uint32_t x528 = 354U;
	int32_t t127 = -2960;

    t127 = (x525|(x526+(x527<=x528)));

    if (t127 != -31631) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x529 = INT16_MIN;
	uint64_t x531 = UINT64_MAX;
	uint8_t x532 = 1U;
	volatile int32_t t128 = 298698848;

    t128 = (x529|(x530+(x531<=x532)));

    if (t128 != -32768) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x533 = -577;
	uint32_t x535 = 3542U;
	int32_t x536 = -745513786;
	uint32_t t129 = 682U;

    t129 = (x533|(x534+(x535<=x536)));

    if (t129 != 4294966719U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = -9;
	int32_t x539 = -1;
	uint64_t x540 = 45729337540942519LLU;
	int32_t t130 = -59;

    t130 = (x537|(x538+(x539<=x540)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x541 = 14;
	volatile uint32_t x543 = UINT32_MAX;
	int16_t x544 = INT16_MAX;

    t131 = (x541|(x542+(x543<=x544)));

    if (t131 != -114) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x545 = -1;
	uint32_t x547 = 13836U;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t132 = 4171;

    t132 = (x545|(x546+(x547<=x548)));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x549 = 12U;
	static uint8_t x550 = UINT8_MAX;
	int32_t x551 = INT32_MAX;

    t133 = (x549|(x550+(x551<=x552)));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x553 = 3;
	static uint32_t x555 = UINT32_MAX;
	volatile int16_t x556 = INT16_MAX;
	volatile int32_t t134 = 375;

    t134 = (x553|(x554+(x555<=x556)));

    if (t134 != -125) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x558 = 8378104812831LLU;
	int32_t x559 = -1;
	static int16_t x560 = -4;

    t135 = (x557|(x558+(x559<=x560)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x561 = -6;
	uint32_t x562 = UINT32_MAX;
	int8_t x563 = INT8_MAX;
	int16_t x564 = -1;

    t136 = (x561|(x562+(x563<=x564)));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = 1;
	uint32_t x566 = 13U;
	int8_t x567 = INT8_MIN;
	int32_t x568 = 5386097;
	uint32_t t137 = 173604069U;

    t137 = (x565|(x566+(x567<=x568)));

    if (t137 != 15U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x569 = INT64_MAX;
	volatile uint8_t x570 = 3U;
	volatile int16_t x571 = -1;
	int16_t x572 = 1;
	int64_t t138 = INT64_MAX;

    t138 = (x569|(x570+(x571<=x572)));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = 51077879;
	static uint16_t x574 = 599U;
	volatile int64_t x575 = 114753935224081LL;
	volatile int32_t x576 = INT32_MAX;
	static int32_t t139 = -4047;

    t139 = (x573|(x574+(x575<=x576)));

    if (t139 != 51077879) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x577 = UINT64_MAX;
	int16_t x578 = 1;
	static uint8_t x579 = UINT8_MAX;
	volatile int8_t x580 = -1;

    t140 = (x577|(x578+(x579<=x580)));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x581 = 1795210U;
	uint8_t x582 = 25U;
	uint64_t x583 = 79150121658374LLU;
	volatile uint32_t t141 = 3408U;

    t141 = (x581|(x582+(x583<=x584)));

    if (t141 != 1795226U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x586 = INT8_MIN;
	uint8_t x587 = UINT8_MAX;
	int8_t x588 = INT8_MAX;
	static int32_t t142 = 13600;

    t142 = (x585|(x586+(x587<=x588)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x589 = -1;
	uint8_t x590 = 40U;
	int64_t x591 = INT64_MIN;
	uint16_t x592 = 379U;
	static int32_t t143 = 132;

    t143 = (x589|(x590+(x591<=x592)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x594 = -1LL;
	uint32_t x595 = UINT32_MAX;
	static uint8_t x596 = UINT8_MAX;
	volatile int64_t t144 = -662055003LL;

    t144 = (x593|(x594+(x595<=x596)));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x598 = INT64_MIN;
	int16_t x599 = 3866;
	static volatile uint64_t x600 = 74387761953024321LLU;
	int64_t t145 = -4256523788165953LL;

    t145 = (x597|(x598+(x599<=x600)));

    if (t145 != -9223372036854764419LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x605 = INT8_MIN;
	int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MAX;
	static uint32_t x608 = UINT32_MAX;

    t146 = (x605|(x606+(x607<=x608)));

    if (t146 != -127) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x609 = -1;
	int8_t x610 = INT8_MIN;
	static int64_t x611 = INT64_MIN;

    t147 = (x609|(x610+(x611<=x612)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x614 = 3U;
	static int8_t x615 = 1;
	static int32_t x616 = -10;
	int32_t t148 = 129462816;

    t148 = (x613|(x614+(x615<=x616)));

    if (t148 != -2147483645) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x617 = 15LLU;
	uint64_t x618 = 345LLU;
	static int64_t x619 = 16449915876LL;
	uint64_t x620 = UINT64_MAX;
	static volatile uint64_t t149 = 113966063568197LLU;

    t149 = (x617|(x618+(x619<=x620)));

    if (t149 != 351LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x621 = 18;
	int64_t x622 = -1LL;
	int64_t x623 = 510571798LL;
	volatile int64_t x624 = INT64_MAX;
	int64_t t150 = -1032552422LL;

    t150 = (x621|(x622+(x623<=x624)));

    if (t150 != 18LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x625 = 998;
	static volatile int64_t x626 = INT64_MIN;
	uint64_t x628 = 684272243LLU;
	int64_t t151 = 189546LL;

    t151 = (x625|(x626+(x627<=x628)));

    if (t151 != -9223372036854774809LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x630 = 23;
	uint32_t x631 = 54U;
	uint64_t x632 = 5549862523LLU;
	volatile uint32_t t152 = 91492U;

    t152 = (x629|(x630+(x631<=x632)));

    if (t152 != 149227551U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x633 = 461U;
	int64_t x634 = -1LL;
	static int16_t x635 = INT16_MIN;
	int16_t x636 = INT16_MIN;
	volatile int64_t t153 = -253611993703LL;

    t153 = (x633|(x634+(x635<=x636)));

    if (t153 != 461LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x641 = -337659331952763751LL;
	volatile int8_t x642 = INT8_MIN;
	int64_t x643 = INT64_MIN;
	int8_t x644 = INT8_MAX;
	volatile int64_t t154 = -3334222767987569496LL;

    t154 = (x641|(x642+(x643<=x644)));

    if (t154 != -103LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x645 = -1;
	int8_t x647 = INT8_MAX;
	uint16_t x648 = 1870U;
	volatile int32_t t155 = 3969;

    t155 = (x645|(x646+(x647<=x648)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = -1;
	static int32_t x654 = -1;
	int64_t x656 = INT64_MAX;

    t156 = (x653|(x654+(x655<=x656)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x658 = 100U;
	int8_t x660 = 7;

    t157 = (x657|(x658+(x659<=x660)));

    if (t157 != 3709) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x661 = UINT64_MAX;
	uint8_t x662 = 0U;
	int64_t x663 = INT64_MIN;
	uint64_t t158 = UINT64_MAX;

    t158 = (x661|(x662+(x663<=x664)));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x666 = INT64_MIN;
	uint16_t x668 = 1263U;
	int64_t t159 = 1023630166LL;

    t159 = (x665|(x666+(x667<=x668)));

    if (t159 != -32767LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x670 = 5U;
	uint16_t x671 = 203U;
	uint8_t x672 = UINT8_MAX;
	volatile int32_t t160 = -32469351;

    t160 = (x669|(x670+(x671<=x672)));

    if (t160 != -122) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x674 = 7U;
	static volatile int64_t x675 = -97069254884LL;
	int32_t x676 = INT32_MIN;
	static volatile uint32_t t161 = 13138344U;

    t161 = (x673|(x674+(x675<=x676)));

    if (t161 != 255U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x677 = -1LL;
	int64_t x678 = -1LL;
	static uint16_t x679 = 1678U;
	int16_t x680 = -1;
	volatile int64_t t162 = -178308024275LL;

    t162 = (x677|(x678+(x679<=x680)));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x681 = INT16_MIN;
	static int8_t x683 = INT8_MAX;
	static volatile int64_t t163 = -31222030LL;

    t163 = (x681|(x682+(x683<=x684)));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x685 = INT16_MIN;
	uint8_t x687 = 42U;
	static int32_t x688 = INT32_MIN;
	volatile int32_t t164 = 3616;

    t164 = (x685|(x686+(x687<=x688)));

    if (t164 != -25527) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x689 = 9;
	int32_t x690 = 0;
	int8_t x692 = -3;
	int32_t t165 = -27;

    t165 = (x689|(x690+(x691<=x692)));

    if (t165 != 9) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x693 = 512729;
	uint8_t x694 = 0U;
	uint8_t x695 = 59U;
	uint8_t x696 = 1U;
	volatile int32_t t166 = 45862;

    t166 = (x693|(x694+(x695<=x696)));

    if (t166 != 512729) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x701 = UINT32_MAX;
	static int8_t x702 = INT8_MIN;
	static int8_t x703 = 9;
	static int64_t x704 = INT64_MAX;
	volatile uint32_t t167 = UINT32_MAX;

    t167 = (x701|(x702+(x703<=x704)));

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x705 = INT16_MAX;
	volatile int8_t x706 = -1;
	uint64_t x707 = 4LLU;
	int8_t x708 = -1;
	volatile int32_t t168 = 21050;

    t168 = (x705|(x706+(x707<=x708)));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x709 = 104U;
	volatile int32_t x711 = INT32_MIN;
	uint8_t x712 = UINT8_MAX;
	int32_t t169 = 56528328;

    t169 = (x709|(x710+(x711<=x712)));

    if (t169 != -145) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x713 = 7303687LL;
	static volatile int32_t x714 = -1;
	int32_t x715 = -58;
	static int8_t x716 = 0;
	int64_t t170 = 34075497010LL;

    t170 = (x713|(x714+(x715<=x716)));

    if (t170 != 7303687LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x717 = INT16_MAX;
	static int32_t x718 = INT32_MIN;
	uint16_t x719 = UINT16_MAX;
	volatile int32_t t171 = 15360884;

    t171 = (x717|(x718+(x719<=x720)));

    if (t171 != -2147450881) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x721 = INT32_MAX;
	int64_t x722 = -1LL;
	volatile int64_t t172 = -55657LL;

    t172 = (x721|(x722+(x723<=x724)));

    if (t172 != 2147483647LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x725 = INT32_MAX;
	uint16_t x727 = 201U;
	int32_t x728 = INT32_MAX;
	int32_t t173 = INT32_MAX;

    t173 = (x725|(x726+(x727<=x728)));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x729 = 5U;
	volatile int16_t x730 = INT16_MIN;
	int16_t x731 = INT16_MIN;
	static int8_t x732 = 1;

    t174 = (x729|(x730+(x731<=x732)));

    if (t174 != -32763) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x733 = 65;
	static int8_t x734 = 1;
	uint32_t x735 = UINT32_MAX;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t175 = 379616318;

    t175 = (x733|(x734+(x735<=x736)));

    if (t175 != 65) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x737 = INT32_MIN;
	static int64_t x739 = INT64_MIN;
	volatile uint16_t x740 = 15130U;
	volatile int32_t t176 = -1;

    t176 = (x737|(x738+(x739<=x740)));

    if (t176 != -2147483520) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x741 = -1LL;
	static int8_t x742 = -27;
	uint16_t x744 = UINT16_MAX;
	volatile int64_t t177 = -122LL;

    t177 = (x741|(x742+(x743<=x744)));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x745 = INT16_MIN;
	volatile int16_t x747 = INT16_MIN;
	static volatile int16_t x748 = INT16_MIN;

    t178 = (x745|(x746+(x747<=x748)));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x749 = 8442;
	int64_t x750 = 1008851357321116LL;
	int16_t x751 = INT16_MAX;
	int32_t x752 = INT32_MAX;

    t179 = (x749|(x750+(x751<=x752)));

    if (t179 != 1008851357329407LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x753 = 319840174LLU;
	int64_t x754 = 2149019719365187788LL;
	int8_t x755 = 1;
	uint64_t x756 = 15LLU;
	uint64_t t180 = 30684LLU;

    t180 = (x753|(x754+(x755<=x756)));

    if (t180 != 2149019719415521263LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x757 = 0U;
	static uint64_t x758 = 13LLU;
	int64_t x759 = -287443LL;
	uint32_t x760 = UINT32_MAX;
	uint64_t t181 = 7177453681LLU;

    t181 = (x757|(x758+(x759<=x760)));

    if (t181 != 14LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x761 = -1LL;
	static int64_t x764 = INT64_MIN;
	int64_t t182 = -759038LL;

    t182 = (x761|(x762+(x763<=x764)));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x765 = UINT32_MAX;
	volatile uint8_t x767 = UINT8_MAX;
	int64_t x768 = INT64_MIN;

    t183 = (x765|(x766+(x767<=x768)));

    if (t183 != 235415889162272767LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x769 = 0U;
	int8_t x770 = INT8_MIN;
	int16_t x771 = INT16_MAX;
	uint64_t x772 = UINT64_MAX;
	volatile int32_t t184 = 0;

    t184 = (x769|(x770+(x771<=x772)));

    if (t184 != -127) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x774 = -23;
	int8_t x775 = -37;
	int32_t x776 = -1;

    t185 = (x773|(x774+(x775<=x776)));

    if (t185 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x777 = INT32_MIN;
	int8_t x778 = INT8_MIN;
	uint8_t x779 = 18U;

    t186 = (x777|(x778+(x779<=x780)));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x781 = -11;
	uint8_t x782 = 3U;
	uint32_t x783 = 14U;
	static int8_t x784 = -1;
	static volatile int32_t t187 = 373075;

    t187 = (x781|(x782+(x783<=x784)));

    if (t187 != -11) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x785 = INT32_MIN;
	uint64_t x786 = 702085254265441LLU;
	int8_t x787 = INT8_MAX;
	volatile int32_t x788 = INT32_MIN;
	volatile uint64_t t188 = 5362LLU;

    t188 = (x785|(x786+(x787<=x788)));

    if (t188 != 18446744073544841825LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x789 = 8U;
	int16_t x790 = INT16_MIN;
	uint64_t x791 = UINT64_MAX;
	static int16_t x792 = INT16_MIN;
	int32_t t189 = 5;

    t189 = (x789|(x790+(x791<=x792)));

    if (t189 != -32760) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x793 = 529U;
	int32_t x794 = INT32_MIN;
	static int8_t x795 = INT8_MIN;
	int16_t x796 = -1;

    t190 = (x793|(x794+(x795<=x796)));

    if (t190 != 2147484177U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x797 = -3;
	int16_t x798 = INT16_MIN;
	static int16_t x799 = -1;
	int8_t x800 = -3;
	int32_t t191 = -12;

    t191 = (x797|(x798+(x799<=x800)));

    if (t191 != -3) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x801 = 846199891U;
	static int8_t x802 = -1;
	static uint16_t x803 = 78U;
	int16_t x804 = INT16_MAX;
	uint32_t t192 = 42U;

    t192 = (x801|(x802+(x803<=x804)));

    if (t192 != 846199891U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x805 = UINT8_MAX;
	int8_t x807 = -1;
	int8_t x808 = INT8_MAX;
	int32_t t193 = -758593;

    t193 = (x805|(x806+(x807<=x808)));

    if (t193 != 33023) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x809 = INT16_MIN;
	int16_t x811 = INT16_MIN;
	int64_t x812 = INT64_MIN;
	int32_t t194 = -12;

    t194 = (x809|(x810+(x811<=x812)));

    if (t194 != -32721) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x813 = INT64_MAX;
	static volatile uint16_t x814 = UINT16_MAX;
	int8_t x815 = 0;
	volatile uint32_t x816 = 38198617U;
	static int64_t t195 = INT64_MAX;

    t195 = (x813|(x814+(x815<=x816)));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x818 = INT64_MIN;
	static uint8_t x819 = 125U;
	int32_t x820 = -285243;
	int64_t t196 = 1LL;

    t196 = (x817|(x818+(x819<=x820)));

    if (t196 != -141LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x823 = UINT64_MAX;
	int16_t x824 = INT16_MIN;
	static int64_t t197 = -218450549075588LL;

    t197 = (x821|(x822+(x823<=x824)));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x825 = 16097U;
	uint64_t x826 = 342889602LLU;
	static uint16_t x827 = 905U;
	uint64_t t198 = 2474066LLU;

    t198 = (x825|(x826+(x827<=x828)));

    if (t198 != 342900451LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x830 = INT16_MAX;
	uint64_t x831 = 4462953752249741419LLU;
	int16_t x832 = INT16_MIN;

    t199 = (x829|(x830+(x831<=x832)));

    if (t199 != 602005532LLU) { NG(); } else { ; }
	
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

