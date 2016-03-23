
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

static uint64_t x1 = UINT64_MAX;
volatile uint8_t x3 = 2U;
volatile int32_t t0 = -25;
static int64_t x8 = INT64_MIN;
static int32_t x14 = INT32_MIN;
static int16_t x18 = INT16_MIN;
static int8_t x28 = INT8_MIN;
volatile int8_t x37 = 1;
int16_t x38 = INT16_MAX;
int8_t x42 = INT8_MIN;
int8_t x47 = INT8_MIN;
int16_t x51 = INT16_MAX;
volatile uint64_t x52 = 21LLU;
int16_t x57 = -1;
int64_t x59 = INT64_MAX;
static int32_t t13 = -798568236;
volatile uint64_t x63 = 5127244LLU;
uint32_t x68 = UINT32_MAX;
static int32_t x71 = INT32_MIN;
uint16_t x73 = UINT16_MAX;
int32_t x77 = 631;
int64_t x79 = INT64_MIN;
uint16_t x89 = UINT16_MAX;
int64_t x94 = -1LL;
int8_t x97 = INT8_MAX;
int8_t x102 = 0;
static int64_t x103 = INT64_MIN;
int32_t x105 = INT32_MIN;
static volatile int32_t t24 = -68;
uint64_t x110 = 278811382511192567LLU;
int64_t x119 = INT64_MIN;
int16_t x123 = INT16_MIN;
volatile int64_t x124 = 2669391536988LL;
uint64_t x133 = UINT64_MAX;
static uint8_t x134 = UINT8_MAX;
int16_t x135 = -1;
int64_t x137 = INT64_MIN;
int64_t x140 = -1LL;
static int8_t x141 = -1;
int32_t x146 = INT32_MIN;
uint8_t x148 = 102U;
volatile int32_t t34 = -15;
volatile int32_t x156 = INT32_MIN;
volatile uint32_t x160 = 182217613U;
uint64_t x164 = UINT64_MAX;
volatile int64_t x168 = 1284679218LL;
static uint32_t x173 = 1043802079U;
int8_t x174 = -5;
int32_t t40 = -328;
int64_t x177 = 24228945064017581LL;
uint8_t x179 = 63U;
uint64_t x183 = 111586675029694450LLU;
int32_t t42 = -647179185;
int8_t x186 = INT8_MIN;
int32_t t43 = -649;
volatile int64_t x191 = 14869579145371LL;
volatile uint64_t x192 = 978528LLU;
volatile int32_t x194 = -1;
volatile int32_t t47 = -4;
int64_t x224 = INT64_MAX;
uint8_t x225 = 0U;
int64_t x233 = INT64_MAX;
int8_t x236 = 8;
volatile uint64_t x250 = UINT64_MAX;
static volatile int32_t t59 = -53462;
int32_t t60 = -88;
uint64_t x258 = 256371LLU;
int16_t x268 = INT16_MAX;
volatile int32_t t63 = -117012143;
volatile uint32_t x275 = 3836U;
int16_t x277 = INT16_MIN;
static int32_t t66 = -66455;
uint8_t x282 = 1U;
volatile uint16_t x288 = 14107U;
volatile int32_t t68 = -30071;
int16_t x290 = INT16_MAX;
int32_t x292 = -1;
int8_t x293 = INT8_MIN;
int16_t x296 = 11;
int32_t t72 = 1931;
int32_t x309 = INT32_MIN;
static int32_t x317 = INT32_MIN;
volatile int32_t x318 = INT32_MIN;
int16_t x319 = INT16_MIN;
volatile int64_t x320 = INT64_MIN;
int8_t x321 = 1;
uint16_t x322 = 1709U;
volatile int16_t x324 = 10;
uint64_t x331 = UINT64_MAX;
static int32_t x334 = -1;
int16_t x348 = INT16_MIN;
int8_t x351 = INT8_MAX;
int16_t x354 = INT16_MIN;
int16_t x357 = -1883;
static int16_t x363 = INT16_MAX;
int8_t x364 = INT8_MAX;
static int32_t x369 = INT32_MAX;
int16_t x373 = INT16_MIN;
uint8_t x383 = UINT8_MAX;
int32_t t92 = 332603416;
int16_t x395 = 4;
uint32_t x403 = UINT32_MAX;
uint32_t x404 = UINT32_MAX;
static volatile int64_t x405 = INT64_MAX;
volatile int32_t t97 = 11;
int32_t x417 = 233918942;
uint32_t x422 = UINT32_MAX;
int64_t x424 = INT64_MIN;
volatile int8_t x425 = INT8_MAX;
int32_t t103 = -2;
int32_t x438 = -24419;
static volatile int32_t t104 = -148;
volatile int16_t x449 = INT16_MIN;
static uint8_t x452 = 51U;
volatile int16_t x453 = INT16_MIN;
volatile int32_t t108 = -179;
volatile uint64_t x457 = UINT64_MAX;
static int64_t x463 = INT64_MIN;
int8_t x464 = INT8_MIN;
static int64_t x465 = INT64_MIN;
int32_t x467 = -27806511;
volatile uint16_t x470 = 3463U;
int64_t x471 = -11748LL;
uint32_t x485 = 361501U;
int8_t x487 = -1;
int8_t x488 = -1;
volatile int8_t x491 = -12;
int16_t x496 = INT16_MIN;
int64_t x497 = -442117LL;
int64_t x502 = -1263319732865614634LL;
int8_t x503 = INT8_MIN;
static volatile uint32_t x507 = 0U;
int32_t x509 = -1;
static volatile int8_t x510 = INT8_MIN;
volatile uint8_t x524 = 10U;
volatile int32_t t125 = 35997006;
volatile int8_t x531 = -42;
int64_t x533 = -1LL;
int64_t x547 = INT64_MIN;
int32_t t131 = 1;
int64_t x553 = -1LL;
uint64_t x558 = 30744011LLU;
static volatile uint64_t x565 = 361694653095LLU;
uint64_t x569 = UINT64_MAX;
int8_t x576 = INT8_MAX;
int32_t x580 = INT32_MIN;
int8_t x582 = 6;
int64_t x602 = -1LL;
int64_t x603 = INT64_MIN;
uint32_t x607 = UINT32_MAX;
volatile int32_t t145 = -823330;
volatile int32_t t146 = 815319316;
int8_t x617 = -1;
int32_t x620 = 2659;
volatile int32_t t147 = 200064166;
int16_t x621 = -1;
static volatile int32_t t148 = -1400169;
static uint16_t x643 = 8U;
uint64_t x645 = UINT64_MAX;
int16_t x646 = 1;
static int64_t x648 = -1LL;
static uint32_t x653 = 366185U;
static int32_t x657 = INT32_MIN;
int32_t t158 = 189500334;
int16_t x665 = INT16_MAX;
static volatile int32_t t159 = 1;
int64_t x671 = -1LL;
int64_t x674 = -79381918LL;
int64_t x682 = INT64_MIN;
uint16_t x685 = 46U;
int32_t t164 = -28247;
volatile uint32_t x689 = 2627U;
static int32_t x690 = -1;
volatile int32_t t165 = 2800549;
volatile int32_t t166 = -44;
uint16_t x704 = UINT16_MAX;
int64_t x705 = -444314231440LL;
uint32_t x709 = UINT32_MAX;
int32_t x711 = INT32_MAX;
int8_t x719 = -1;
int32_t t171 = 93446496;
int32_t t172 = 75;
static volatile int32_t t174 = -4;
static uint16_t x733 = UINT16_MAX;
static uint16_t x734 = UINT16_MAX;
int32_t t176 = -1899061;
int16_t x741 = INT16_MIN;
static int32_t x744 = -125;
volatile int32_t t178 = 7310;
int8_t x752 = -2;
static int32_t t179 = 10657;
int64_t x756 = -1LL;
uint16_t x758 = 11378U;
int64_t x760 = -1LL;
int16_t x765 = INT16_MAX;
int64_t x772 = 16594859651LL;
int32_t t185 = -1;
volatile int64_t x778 = INT64_MAX;
int8_t x784 = 0;
uint32_t x786 = 929U;
volatile int64_t x788 = INT64_MIN;
static uint32_t x797 = 41622018U;
volatile int16_t x799 = 8;
volatile int32_t t191 = -6;
static int64_t x809 = INT64_MIN;
volatile int32_t t192 = -460;
static int32_t x817 = 493188;
static int16_t x825 = -1;
static volatile int8_t x826 = INT8_MAX;
volatile int16_t x827 = -1;
static int16_t x832 = -53;
static int32_t t197 = 10481;


void f0(void) {
    	int32_t x2 = -1;
	static int8_t x4 = INT8_MIN;

    t0 = (x1!=(x2+(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	volatile uint8_t x6 = 0U;
	int32_t x7 = 0;
	int32_t t1 = 51823581;

    t1 = (x5!=(x6+(x7>x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -1LL;
	int16_t x15 = -1;
	volatile int16_t x16 = 2;
	int32_t t2 = 4790;

    t2 = (x13!=(x14+(x15>x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = 172718963LLU;
	volatile int32_t t3 = -81141;

    t3 = (x17!=(x18+(x19>x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 505984LLU;
	int16_t x22 = INT16_MIN;
	int16_t x23 = -1;
	uint64_t x24 = 16463258974006LLU;
	int32_t t4 = 5465;

    t4 = (x21!=(x22+(x23>x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 183;
	int32_t x26 = 1;
	uint8_t x27 = 58U;
	volatile int32_t t5 = 1;

    t5 = (x25!=(x26+(x27>x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = -1;
	uint8_t x30 = 79U;
	int8_t x31 = 28;
	int64_t x32 = -1LL;
	int32_t t6 = 0;

    t6 = (x29!=(x30+(x31>x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 10836U;
	static volatile int8_t x34 = INT8_MAX;
	static uint8_t x35 = UINT8_MAX;
	int32_t x36 = -1;
	volatile int32_t t7 = 14971;

    t7 = (x33!=(x34+(x35>x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x39 = -1;
	int8_t x40 = 0;
	int32_t t8 = -360797588;

    t8 = (x37!=(x38+(x39>x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = UINT16_MAX;
	volatile int8_t x43 = 37;
	uint32_t x44 = 664132459U;
	int32_t t9 = -48777;

    t9 = (x41!=(x42+(x43>x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = INT64_MIN;
	volatile int8_t x46 = 3;
	uint64_t x48 = 225950LLU;
	int32_t t10 = -2873492;

    t10 = (x45!=(x46+(x47>x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -92;
	int64_t x50 = INT64_MIN;
	int32_t t11 = -1386;

    t11 = (x49!=(x50+(x51>x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 81645LLU;
	int32_t x54 = -1;
	volatile uint16_t x55 = 1U;
	uint8_t x56 = UINT8_MAX;
	static volatile int32_t t12 = -91749;

    t12 = (x53!=(x54+(x55>x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x58 = 17;
	int16_t x60 = -1915;

    t13 = (x57!=(x58+(x59>x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 352U;
	uint64_t x62 = 132701LLU;
	int64_t x64 = -423444476284640726LL;
	volatile int32_t t14 = 12983;

    t14 = (x61!=(x62+(x63>x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x65 = 49;
	volatile int32_t x66 = -1;
	int64_t x67 = 269285505387652016LL;
	int32_t t15 = -288490953;

    t15 = (x65!=(x66+(x67>x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -1;
	volatile int8_t x70 = INT8_MIN;
	int8_t x72 = 26;
	int32_t t16 = 956;

    t16 = (x69!=(x70+(x71>x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x74 = 1363867413272LLU;
	uint8_t x75 = 60U;
	uint16_t x76 = 2U;
	static volatile int32_t t17 = -262881;

    t17 = (x73!=(x74+(x75>x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x78 = INT8_MAX;
	uint64_t x80 = 12LLU;
	int32_t t18 = 49728619;

    t18 = (x77!=(x78+(x79>x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	int16_t x86 = 5932;
	uint64_t x87 = 340104592248004LLU;
	int16_t x88 = -1;
	volatile int32_t t19 = -1;

    t19 = (x85!=(x86+(x87>x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x90 = INT64_MIN;
	volatile int16_t x91 = INT16_MAX;
	uint32_t x92 = UINT32_MAX;
	int32_t t20 = -97;

    t20 = (x89!=(x90+(x91>x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MAX;
	volatile int8_t x95 = -38;
	uint32_t x96 = 348U;
	volatile int32_t t21 = -2;

    t21 = (x93!=(x94+(x95>x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x98 = INT8_MIN;
	static int8_t x99 = 0;
	static int16_t x100 = INT16_MAX;
	int32_t t22 = 205787151;

    t22 = (x97!=(x98+(x99>x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 204421U;
	int8_t x104 = -1;
	int32_t t23 = 1492170;

    t23 = (x101!=(x102+(x103>x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x106 = -1;
	uint64_t x107 = 930483059745LLU;
	int32_t x108 = -62295072;

    t24 = (x105!=(x106+(x107>x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x109 = -25;
	volatile uint16_t x111 = 319U;
	int64_t x112 = INT64_MIN;
	static int32_t t25 = -2186582;

    t25 = (x109!=(x110+(x111>x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	volatile int8_t x115 = INT8_MAX;
	static int8_t x116 = 0;
	volatile int32_t t26 = -128312803;

    t26 = (x113!=(x114+(x115>x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x117 = 0;
	static int64_t x118 = INT64_MIN;
	volatile int32_t x120 = INT32_MAX;
	int32_t t27 = -2092;

    t27 = (x117!=(x118+(x119>x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = -113;
	static int32_t x122 = INT32_MAX;
	int32_t t28 = 7;

    t28 = (x121!=(x122+(x123>x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = -9;
	int8_t x130 = 1;
	static uint32_t x131 = 19U;
	int64_t x132 = 917192782404814922LL;
	int32_t t29 = 1282961;

    t29 = (x129!=(x130+(x131>x132)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x136 = INT32_MIN;
	int32_t t30 = 2;

    t30 = (x133!=(x134+(x135>x136)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x138 = 5406;
	volatile uint8_t x139 = 0U;
	int32_t t31 = -62;

    t31 = (x137!=(x138+(x139>x140)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x142 = -1;
	static int32_t x143 = 31;
	uint16_t x144 = UINT16_MAX;
	static int32_t t32 = 1;

    t32 = (x141!=(x142+(x143>x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x145 = 23U;
	static uint8_t x147 = 99U;
	static volatile int32_t t33 = -250214;

    t33 = (x145!=(x146+(x147>x148)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = -1;
	int32_t x150 = INT32_MAX;
	int16_t x151 = 30;
	volatile uint32_t x152 = UINT32_MAX;

    t34 = (x149!=(x150+(x151>x152)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x153 = 72U;
	int32_t x154 = INT32_MIN;
	static int64_t x155 = INT64_MAX;
	int32_t t35 = 1;

    t35 = (x153!=(x154+(x155>x156)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x157 = 132004U;
	static uint16_t x158 = UINT16_MAX;
	volatile int64_t x159 = INT64_MIN;
	int32_t t36 = -1;

    t36 = (x157!=(x158+(x159>x160)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = 12LL;
	uint16_t x162 = UINT16_MAX;
	int32_t x163 = INT32_MIN;
	int32_t t37 = -7;

    t37 = (x161!=(x162+(x163>x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x165 = 5349U;
	volatile uint32_t x166 = 204321U;
	int16_t x167 = 13674;
	int32_t t38 = -13223400;

    t38 = (x165!=(x166+(x167>x168)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = 0;
	int64_t x170 = 84406109LL;
	int8_t x171 = 2;
	static volatile int16_t x172 = INT16_MAX;
	int32_t t39 = -1;

    t39 = (x169!=(x170+(x171>x172)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x175 = -102788547;
	static int8_t x176 = INT8_MIN;

    t40 = (x173!=(x174+(x175>x176)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x178 = INT8_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t41 = -5;

    t41 = (x177!=(x178+(x179>x180)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x181 = 7837U;
	int32_t x182 = -79173;
	uint16_t x184 = UINT16_MAX;

    t42 = (x181!=(x182+(x183>x184)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MIN;
	uint32_t x187 = UINT32_MAX;
	volatile int8_t x188 = INT8_MAX;

    t43 = (x185!=(x186+(x187>x188)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = 3U;
	static volatile int64_t x190 = -1LL;
	int32_t t44 = 3318121;

    t44 = (x189!=(x190+(x191>x192)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x193 = 10LLU;
	volatile int16_t x195 = INT16_MIN;
	int16_t x196 = -5031;
	volatile int32_t t45 = 5;

    t45 = (x193!=(x194+(x195>x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = 1;
	static volatile uint64_t x198 = 579389534LLU;
	static int8_t x199 = INT8_MAX;
	static uint16_t x200 = 10U;
	int32_t t46 = -10231971;

    t46 = (x197!=(x198+(x199>x200)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x201 = 6U;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = 1050757834896565136LLU;
	int16_t x204 = INT16_MIN;

    t47 = (x201!=(x202+(x203>x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = INT8_MIN;
	static volatile uint32_t x206 = UINT32_MAX;
	int32_t x207 = -253596;
	int8_t x208 = 21;
	volatile int32_t t48 = 179927;

    t48 = (x205!=(x206+(x207>x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = INT32_MIN;
	static int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MIN;
	static volatile int32_t t49 = -484;

    t49 = (x209!=(x210+(x211>x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x213 = 61LLU;
	int64_t x214 = -1LL;
	volatile int8_t x215 = -47;
	int32_t x216 = INT32_MIN;
	volatile int32_t t50 = 4972;

    t50 = (x213!=(x214+(x215>x216)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = -11889;
	static int8_t x218 = INT8_MAX;
	int8_t x219 = INT8_MAX;
	static int64_t x220 = INT64_MIN;
	int32_t t51 = 12;

    t51 = (x217!=(x218+(x219>x220)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x221 = 54U;
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = -1;
	int32_t t52 = 45;

    t52 = (x221!=(x222+(x223>x224)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x226 = INT16_MIN;
	static int32_t x227 = -1;
	static int64_t x228 = -8233751552692LL;
	int32_t t53 = -241;

    t53 = (x225!=(x226+(x227>x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = -1;
	volatile uint16_t x230 = 241U;
	int32_t x231 = INT32_MIN;
	int8_t x232 = 4;
	int32_t t54 = -22;

    t54 = (x229!=(x230+(x231>x232)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MAX;
	volatile int32_t t55 = 1;

    t55 = (x233!=(x234+(x235>x236)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x237 = 23U;
	volatile int16_t x238 = -1;
	volatile int32_t x239 = -767;
	static int16_t x240 = -14;
	int32_t t56 = 8487050;

    t56 = (x237!=(x238+(x239>x240)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x241 = INT8_MAX;
	static int32_t x242 = INT32_MIN;
	volatile int16_t x243 = 0;
	static uint8_t x244 = 1U;
	int32_t t57 = 301891;

    t57 = (x241!=(x242+(x243>x244)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = INT64_MIN;
	volatile int8_t x246 = -1;
	int32_t x247 = INT32_MIN;
	static int8_t x248 = 5;
	int32_t t58 = -107553656;

    t58 = (x245!=(x246+(x247>x248)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = 335LL;
	static int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;

    t59 = (x249!=(x250+(x251>x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = -1;
	static volatile int16_t x254 = -774;
	int8_t x255 = -14;
	int32_t x256 = 149323;

    t60 = (x253!=(x254+(x255>x256)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x257 = INT32_MIN;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = INT64_MAX;
	volatile int32_t t61 = -58;

    t61 = (x257!=(x258+(x259>x260)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x261 = INT8_MIN;
	uint32_t x262 = 2217U;
	int16_t x263 = INT16_MIN;
	static uint64_t x264 = 28540477LLU;
	volatile int32_t t62 = -805;

    t62 = (x261!=(x262+(x263>x264)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x265 = 612723805LLU;
	int64_t x266 = -1LL;
	int32_t x267 = INT32_MIN;

    t63 = (x265!=(x266+(x267>x268)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = INT8_MIN;
	static uint8_t x270 = UINT8_MAX;
	uint64_t x271 = 22009743031055LLU;
	int16_t x272 = 4885;
	static int32_t t64 = -1;

    t64 = (x269!=(x270+(x271>x272)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x273 = 4008U;
	uint8_t x274 = 7U;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t65 = -25843;

    t65 = (x273!=(x274+(x275>x276)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x278 = INT64_MAX;
	int8_t x279 = INT8_MAX;
	static int32_t x280 = INT32_MAX;

    t66 = (x277!=(x278+(x279>x280)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x281 = UINT32_MAX;
	int8_t x283 = 5;
	int32_t x284 = INT32_MAX;
	int32_t t67 = 138;

    t67 = (x281!=(x282+(x283>x284)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x285 = UINT32_MAX;
	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;

    t68 = (x285!=(x286+(x287>x288)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x289 = 95533837U;
	int8_t x291 = INT8_MAX;
	volatile int32_t t69 = 3619;

    t69 = (x289!=(x290+(x291>x292)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x294 = -1LL;
	volatile int16_t x295 = -1;
	volatile int32_t t70 = -14;

    t70 = (x293!=(x294+(x295>x296)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = INT32_MIN;
	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = -1LL;
	static int8_t x300 = INT8_MAX;
	int32_t t71 = -2226788;

    t71 = (x297!=(x298+(x299>x300)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	int64_t x303 = -1693975551353LL;
	int16_t x304 = INT16_MAX;

    t72 = (x301!=(x302+(x303>x304)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;
	static int8_t x307 = 1;
	volatile int8_t x308 = -2;
	int32_t t73 = 0;

    t73 = (x305!=(x306+(x307>x308)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x310 = 269635698755662LL;
	int32_t x311 = -1;
	int16_t x312 = INT16_MAX;
	int32_t t74 = -504237392;

    t74 = (x309!=(x310+(x311>x312)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x313 = -1LL;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = -1;
	volatile int64_t x316 = INT64_MAX;
	static volatile int32_t t75 = -3234;

    t75 = (x313!=(x314+(x315>x316)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t t76 = -39100;

    t76 = (x317!=(x318+(x319>x320)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x323 = 1259U;
	int32_t t77 = 6021788;

    t77 = (x321!=(x322+(x323>x324)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x325 = 7LL;
	volatile int8_t x326 = -5;
	volatile uint64_t x327 = UINT64_MAX;
	volatile uint16_t x328 = 7398U;
	static int32_t t78 = 502360;

    t78 = (x325!=(x326+(x327>x328)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x329 = 2210825480LL;
	uint64_t x330 = 3751754LLU;
	uint16_t x332 = 97U;
	volatile int32_t t79 = 70919;

    t79 = (x329!=(x330+(x331>x332)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x333 = UINT8_MAX;
	int32_t x335 = -1;
	volatile int64_t x336 = INT64_MIN;
	int32_t t80 = -96;

    t80 = (x333!=(x334+(x335>x336)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = INT8_MIN;
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = 983708912093047360LLU;
	volatile int32_t t81 = -12;

    t81 = (x341!=(x342+(x343>x344)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x345 = INT32_MAX;
	volatile int8_t x346 = INT8_MIN;
	static uint16_t x347 = UINT16_MAX;
	static int32_t t82 = 21;

    t82 = (x345!=(x346+(x347>x348)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x349 = -1LL;
	int64_t x350 = INT64_MIN;
	int16_t x352 = -1;
	int32_t t83 = -112;

    t83 = (x349!=(x350+(x351>x352)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x353 = UINT8_MAX;
	uint32_t x355 = 131997U;
	static int16_t x356 = -47;
	int32_t t84 = 0;

    t84 = (x353!=(x354+(x355>x356)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x358 = -1;
	static int32_t x359 = -848672;
	int8_t x360 = INT8_MAX;
	volatile int32_t t85 = -631994;

    t85 = (x357!=(x358+(x359>x360)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = -5;
	volatile uint64_t x362 = 32437952LLU;
	int32_t t86 = 85528;

    t86 = (x361!=(x362+(x363>x364)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x365 = INT32_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;
	int32_t t87 = 444478133;

    t87 = (x365!=(x366+(x367>x368)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x370 = INT16_MIN;
	volatile int16_t x371 = INT16_MIN;
	volatile int64_t x372 = INT64_MIN;
	volatile int32_t t88 = -1111689;

    t88 = (x369!=(x370+(x371>x372)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x374 = -1LL;
	int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MIN;
	static int32_t t89 = -844509142;

    t89 = (x373!=(x374+(x375>x376)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = 1;
	static volatile uint32_t x378 = 3U;
	uint32_t x379 = 14322U;
	int8_t x380 = 24;
	static volatile int32_t t90 = -571283334;

    t90 = (x377!=(x378+(x379>x380)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = INT32_MAX;
	volatile int8_t x382 = 25;
	static volatile int16_t x384 = -1;
	volatile int32_t t91 = 2131405;

    t91 = (x381!=(x382+(x383>x384)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x385 = 66U;
	static int8_t x386 = INT8_MIN;
	int8_t x387 = 1;
	uint8_t x388 = 0U;

    t92 = (x385!=(x386+(x387>x388)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x389 = 2044U;
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 8636132U;
	int32_t x392 = INT32_MIN;
	int32_t t93 = -80293;

    t93 = (x389!=(x390+(x391>x392)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x393 = 1U;
	int16_t x394 = -2;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t94 = 284718909;

    t94 = (x393!=(x394+(x395>x396)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = INT64_MIN;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = -1;
	volatile int32_t t95 = 27146;

    t95 = (x397!=(x398+(x399>x400)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = 0;
	int32_t x402 = INT32_MAX;
	volatile int32_t t96 = 56254066;

    t96 = (x401!=(x402+(x403>x404)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x406 = INT64_MAX;
	int32_t x407 = INT32_MIN;
	static volatile int64_t x408 = 270495LL;

    t97 = (x405!=(x406+(x407>x408)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x409 = INT32_MIN;
	uint32_t x410 = UINT32_MAX;
	uint32_t x411 = 38022080U;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t98 = 1;

    t98 = (x409!=(x410+(x411>x412)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x413 = 6217LLU;
	uint8_t x414 = 22U;
	int16_t x415 = INT16_MAX;
	uint16_t x416 = UINT16_MAX;
	static int32_t t99 = 10566;

    t99 = (x413!=(x414+(x415>x416)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x418 = UINT8_MAX;
	volatile uint64_t x419 = 17251270334456LLU;
	int16_t x420 = 1;
	int32_t t100 = -158;

    t100 = (x417!=(x418+(x419>x420)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x421 = INT8_MAX;
	uint16_t x423 = 57U;
	int32_t t101 = 8825457;

    t101 = (x421!=(x422+(x423>x424)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x426 = UINT8_MAX;
	int64_t x427 = INT64_MIN;
	int64_t x428 = INT64_MAX;
	volatile int32_t t102 = 1959;

    t102 = (x425!=(x426+(x427>x428)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	uint32_t x434 = 458U;
	static int16_t x435 = -1;
	int16_t x436 = INT16_MIN;

    t103 = (x433!=(x434+(x435>x436)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x437 = 4U;
	static int16_t x439 = -108;
	int64_t x440 = INT64_MIN;

    t104 = (x437!=(x438+(x439>x440)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = -1;
	int64_t x442 = INT64_MIN;
	uint8_t x443 = 55U;
	int16_t x444 = INT16_MIN;
	int32_t t105 = 24622620;

    t105 = (x441!=(x442+(x443>x444)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x445 = UINT8_MAX;
	int64_t x446 = INT64_MIN;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = INT8_MAX;
	volatile int32_t t106 = -2592538;

    t106 = (x445!=(x446+(x447>x448)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x450 = 49131571754LL;
	static int8_t x451 = -1;
	volatile int32_t t107 = -2900286;

    t107 = (x449!=(x450+(x451>x452)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x454 = 153U;
	int32_t x455 = INT32_MAX;
	uint8_t x456 = 2U;

    t108 = (x453!=(x454+(x455>x456)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x458 = INT8_MIN;
	volatile int8_t x459 = INT8_MIN;
	int64_t x460 = -86907479126LL;
	int32_t t109 = -3585;

    t109 = (x457!=(x458+(x459>x460)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MIN;
	static volatile int32_t t110 = -121400212;

    t110 = (x461!=(x462+(x463>x464)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x466 = 1973U;
	int16_t x468 = -1;
	volatile int32_t t111 = -218373450;

    t111 = (x465!=(x466+(x467>x468)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = INT16_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t112 = -40526187;

    t112 = (x469!=(x470+(x471>x472)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x473 = 1259112LLU;
	volatile int16_t x474 = 336;
	int16_t x475 = -4;
	static uint8_t x476 = 0U;
	volatile int32_t t113 = -253184431;

    t113 = (x473!=(x474+(x475>x476)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x477 = INT8_MAX;
	volatile uint64_t x478 = UINT64_MAX;
	int32_t x479 = INT32_MAX;
	static int32_t x480 = INT32_MAX;
	volatile int32_t t114 = -78;

    t114 = (x477!=(x478+(x479>x480)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x486 = -17;
	volatile int32_t t115 = 0;

    t115 = (x485!=(x486+(x487>x488)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x489 = INT32_MIN;
	uint16_t x490 = 96U;
	uint64_t x492 = 1041528364LLU;
	volatile int32_t t116 = 328598835;

    t116 = (x489!=(x490+(x491>x492)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = INT16_MAX;
	volatile uint32_t x494 = 955607U;
	volatile int16_t x495 = 70;
	static volatile int32_t t117 = -7243584;

    t117 = (x493!=(x494+(x495>x496)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x498 = -1LL;
	volatile int8_t x499 = INT8_MAX;
	int16_t x500 = INT16_MIN;
	int32_t t118 = -15;

    t118 = (x497!=(x498+(x499>x500)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x501 = 7;
	uint8_t x504 = 0U;
	volatile int32_t t119 = 293213774;

    t119 = (x501!=(x502+(x503>x504)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x505 = INT64_MAX;
	int16_t x506 = INT16_MAX;
	uint16_t x508 = UINT16_MAX;
	int32_t t120 = -1160;

    t120 = (x505!=(x506+(x507>x508)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x511 = INT32_MIN;
	volatile int64_t x512 = 2323060921724037096LL;
	int32_t t121 = 6514;

    t121 = (x509!=(x510+(x511>x512)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = INT64_MAX;
	volatile int32_t x514 = 352;
	volatile uint64_t x515 = 58650045111413LLU;
	static int32_t x516 = -86960;
	int32_t t122 = 7272931;

    t122 = (x513!=(x514+(x515>x516)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x517 = 44;
	int64_t x518 = INT64_MIN;
	volatile uint32_t x519 = UINT32_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t123 = -465389790;

    t123 = (x517!=(x518+(x519>x520)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x521 = INT32_MAX;
	uint16_t x522 = 0U;
	int32_t x523 = -15367186;
	volatile int32_t t124 = 1230890;

    t124 = (x521!=(x522+(x523>x524)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x525 = 19007377LLU;
	static volatile int32_t x526 = -15;
	volatile uint32_t x527 = 2U;
	volatile int8_t x528 = 43;

    t125 = (x525!=(x526+(x527>x528)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x529 = UINT32_MAX;
	static int64_t x530 = INT64_MIN;
	int64_t x532 = INT64_MIN;
	volatile int32_t t126 = 122080108;

    t126 = (x529!=(x530+(x531>x532)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x534 = 2243U;
	int32_t x535 = -1;
	int64_t x536 = 27431034704505914LL;
	static int32_t t127 = -41;

    t127 = (x533!=(x534+(x535>x536)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = 33;
	static int16_t x539 = INT16_MIN;
	int64_t x540 = INT64_MIN;
	volatile int32_t t128 = 96545301;

    t128 = (x537!=(x538+(x539>x540)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x541 = INT16_MIN;
	volatile uint8_t x542 = 20U;
	int64_t x543 = INT64_MIN;
	static int8_t x544 = INT8_MIN;
	static int32_t t129 = 11841732;

    t129 = (x541!=(x542+(x543>x544)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = INT8_MAX;
	static int32_t x546 = 105460919;
	int16_t x548 = INT16_MIN;
	volatile int32_t t130 = -94;

    t130 = (x545!=(x546+(x547>x548)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x549 = INT64_MIN;
	static int16_t x550 = INT16_MIN;
	int16_t x551 = INT16_MIN;
	uint8_t x552 = 24U;

    t131 = (x549!=(x550+(x551>x552)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x554 = INT16_MAX;
	int16_t x555 = -1;
	uint64_t x556 = UINT64_MAX;
	static volatile int32_t t132 = -2783;

    t132 = (x553!=(x554+(x555>x556)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x557 = -1;
	int64_t x559 = INT64_MAX;
	static int8_t x560 = 2;
	static int32_t t133 = 912367;

    t133 = (x557!=(x558+(x559>x560)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = INT64_MAX;
	int64_t x562 = INT64_MAX;
	static int64_t x563 = INT64_MIN;
	volatile uint8_t x564 = 66U;
	static int32_t t134 = -6513;

    t134 = (x561!=(x562+(x563>x564)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x566 = -1;
	static int32_t x567 = -1718;
	int64_t x568 = INT64_MAX;
	int32_t t135 = 392885;

    t135 = (x565!=(x566+(x567>x568)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x570 = INT32_MIN;
	static volatile int16_t x571 = 0;
	volatile int16_t x572 = INT16_MIN;
	int32_t t136 = -324217;

    t136 = (x569!=(x570+(x571>x572)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x573 = 7921U;
	static int16_t x574 = INT16_MAX;
	int32_t x575 = INT32_MIN;
	volatile int32_t t137 = -1;

    t137 = (x573!=(x574+(x575>x576)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x578 = -1;
	int64_t x579 = INT64_MIN;
	int32_t t138 = -4370;

    t138 = (x577!=(x578+(x579>x580)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x581 = INT64_MAX;
	int32_t x583 = 2186982;
	int32_t x584 = -1;
	int32_t t139 = 2957;

    t139 = (x581!=(x582+(x583>x584)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x585 = INT8_MAX;
	int8_t x586 = INT8_MIN;
	uint8_t x587 = 4U;
	static int8_t x588 = INT8_MIN;
	int32_t t140 = -22;

    t140 = (x585!=(x586+(x587>x588)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x589 = -1;
	volatile int32_t x590 = INT32_MIN;
	int32_t x591 = INT32_MIN;
	static int32_t x592 = INT32_MIN;
	int32_t t141 = -4;

    t141 = (x589!=(x590+(x591>x592)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x593 = 300252509LLU;
	int8_t x594 = INT8_MIN;
	static volatile int16_t x595 = -187;
	int8_t x596 = -1;
	int32_t t142 = 20;

    t142 = (x593!=(x594+(x595>x596)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x601 = -1LL;
	int64_t x604 = -1LL;
	int32_t t143 = -349;

    t143 = (x601!=(x602+(x603>x604)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x605 = INT32_MIN;
	volatile uint32_t x606 = 1U;
	uint32_t x608 = UINT32_MAX;
	static int32_t t144 = 40693;

    t144 = (x605!=(x606+(x607>x608)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x609 = -441424;
	int32_t x610 = -255770163;
	static uint16_t x611 = UINT16_MAX;
	volatile int16_t x612 = INT16_MAX;

    t145 = (x609!=(x610+(x611>x612)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x613 = -1;
	uint16_t x614 = 509U;
	int32_t x615 = -1916230;
	int16_t x616 = INT16_MAX;

    t146 = (x613!=(x614+(x615>x616)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x618 = 224;
	int8_t x619 = -1;

    t147 = (x617!=(x618+(x619>x620)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x622 = INT64_MIN;
	uint8_t x623 = UINT8_MAX;
	static int64_t x624 = -1156453261797613LL;

    t148 = (x621!=(x622+(x623>x624)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x625 = -1;
	volatile int16_t x626 = INT16_MIN;
	int32_t x627 = 4155057;
	volatile int32_t x628 = INT32_MIN;
	volatile int32_t t149 = 221;

    t149 = (x625!=(x626+(x627>x628)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x629 = 75777LLU;
	uint64_t x630 = UINT64_MAX;
	int8_t x631 = INT8_MIN;
	static uint64_t x632 = UINT64_MAX;
	int32_t t150 = 242;

    t150 = (x629!=(x630+(x631>x632)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x633 = 0;
	static volatile uint16_t x634 = 28U;
	uint8_t x635 = UINT8_MAX;
	int16_t x636 = 2;
	int32_t t151 = 471482;

    t151 = (x633!=(x634+(x635>x636)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x637 = 4381;
	static volatile uint64_t x638 = 1089331187820557LLU;
	static int64_t x639 = INT64_MIN;
	static int8_t x640 = 34;
	static volatile int32_t t152 = -36235072;

    t152 = (x637!=(x638+(x639>x640)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x641 = -1;
	int16_t x642 = -6351;
	static int8_t x644 = 1;
	int32_t t153 = -276;

    t153 = (x641!=(x642+(x643>x644)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x647 = UINT16_MAX;
	volatile int32_t t154 = -12423134;

    t154 = (x645!=(x646+(x647>x648)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x649 = 6129LL;
	volatile uint64_t x650 = 58968LLU;
	static uint64_t x651 = UINT64_MAX;
	uint32_t x652 = UINT32_MAX;
	static int32_t t155 = 3;

    t155 = (x649!=(x650+(x651>x652)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x654 = 12U;
	int32_t x655 = -1;
	static uint64_t x656 = 25531LLU;
	int32_t t156 = 9781;

    t156 = (x653!=(x654+(x655>x656)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x658 = 868397569550LL;
	static uint8_t x659 = UINT8_MAX;
	int64_t x660 = -37984LL;
	int32_t t157 = -752699406;

    t157 = (x657!=(x658+(x659>x660)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x661 = 25407U;
	static int16_t x662 = INT16_MIN;
	volatile int32_t x663 = 0;
	volatile int16_t x664 = -1;

    t158 = (x661!=(x662+(x663>x664)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x666 = 5840U;
	volatile uint64_t x667 = 33265LLU;
	uint64_t x668 = 15598LLU;

    t159 = (x665!=(x666+(x667>x668)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x669 = UINT32_MAX;
	uint64_t x670 = 8863500302991LLU;
	volatile int8_t x672 = 8;
	volatile int32_t t160 = 45831;

    t160 = (x669!=(x670+(x671>x672)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x673 = INT16_MIN;
	int64_t x675 = 925LL;
	volatile int8_t x676 = -13;
	volatile int32_t t161 = 64389;

    t161 = (x673!=(x674+(x675>x676)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x677 = INT16_MAX;
	static int64_t x678 = 1782869955026472LL;
	int32_t x679 = INT32_MIN;
	int32_t x680 = INT32_MAX;
	int32_t t162 = -51;

    t162 = (x677!=(x678+(x679>x680)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x681 = INT8_MIN;
	int64_t x683 = -1LL;
	static uint16_t x684 = UINT16_MAX;
	int32_t t163 = -3996;

    t163 = (x681!=(x682+(x683>x684)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x686 = 3;
	int32_t x687 = -1;
	volatile uint32_t x688 = UINT32_MAX;

    t164 = (x685!=(x686+(x687>x688)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x691 = INT16_MIN;
	uint8_t x692 = UINT8_MAX;

    t165 = (x689!=(x690+(x691>x692)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x693 = 14;
	int64_t x694 = INT64_MIN;
	static volatile uint16_t x695 = 30U;
	uint32_t x696 = 754264U;

    t166 = (x693!=(x694+(x695>x696)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x697 = -22645;
	uint16_t x698 = 11612U;
	volatile int64_t x699 = -1LL;
	int32_t x700 = -1;
	int32_t t167 = -836213;

    t167 = (x697!=(x698+(x699>x700)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x701 = 115U;
	volatile int8_t x702 = -1;
	int64_t x703 = -1LL;
	int32_t t168 = -14749235;

    t168 = (x701!=(x702+(x703>x704)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x706 = INT8_MAX;
	volatile int8_t x707 = -6;
	int8_t x708 = INT8_MAX;
	int32_t t169 = 1437215;

    t169 = (x705!=(x706+(x707>x708)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x710 = INT8_MIN;
	int8_t x712 = 0;
	static volatile int32_t t170 = 442509480;

    t170 = (x709!=(x710+(x711>x712)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x717 = UINT64_MAX;
	static volatile int32_t x718 = INT32_MAX;
	int64_t x720 = 284688576684582125LL;

    t171 = (x717!=(x718+(x719>x720)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x721 = 261894074;
	uint16_t x722 = 2U;
	int8_t x723 = INT8_MIN;
	volatile int32_t x724 = INT32_MIN;

    t172 = (x721!=(x722+(x723>x724)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x725 = -30;
	static int32_t x726 = -1;
	uint8_t x727 = 7U;
	uint32_t x728 = 50U;
	volatile int32_t t173 = -9175;

    t173 = (x725!=(x726+(x727>x728)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x729 = INT32_MIN;
	int32_t x730 = INT32_MIN;
	int64_t x731 = -17LL;
	volatile int16_t x732 = -1;

    t174 = (x729!=(x730+(x731>x732)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x735 = INT16_MAX;
	int64_t x736 = 107829175361001815LL;
	volatile int32_t t175 = -4458931;

    t175 = (x733!=(x734+(x735>x736)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x737 = -6;
	uint64_t x738 = 7615634922919052LLU;
	uint32_t x739 = 59543662U;
	uint8_t x740 = 2U;

    t176 = (x737!=(x738+(x739>x740)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint32_t x742 = 5042U;
	static volatile int64_t x743 = -1LL;
	volatile int32_t t177 = 20;

    t177 = (x741!=(x742+(x743>x744)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x745 = -1;
	int16_t x746 = -14422;
	int32_t x747 = -1;
	int8_t x748 = -26;

    t178 = (x745!=(x746+(x747>x748)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x749 = INT8_MAX;
	static int64_t x750 = -1LL;
	int8_t x751 = INT8_MIN;

    t179 = (x749!=(x750+(x751>x752)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x753 = -21;
	int8_t x754 = INT8_MIN;
	volatile uint64_t x755 = 10019067327604366LLU;
	static volatile int32_t t180 = -16487621;

    t180 = (x753!=(x754+(x755>x756)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x757 = -1;
	int8_t x759 = -1;
	volatile int32_t t181 = -29;

    t181 = (x757!=(x758+(x759>x760)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x761 = 95585289U;
	uint64_t x762 = UINT64_MAX;
	volatile int32_t x763 = -1;
	int64_t x764 = INT64_MAX;
	volatile int32_t t182 = -248391;

    t182 = (x761!=(x762+(x763>x764)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x766 = UINT64_MAX;
	static int8_t x767 = INT8_MIN;
	static volatile uint32_t x768 = UINT32_MAX;
	volatile int32_t t183 = -280034997;

    t183 = (x765!=(x766+(x767>x768)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x769 = 108U;
	volatile uint32_t x770 = UINT32_MAX;
	static volatile int16_t x771 = INT16_MIN;
	int32_t t184 = -123;

    t184 = (x769!=(x770+(x771>x772)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x773 = INT32_MIN;
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MIN;
	int32_t x776 = 11;

    t185 = (x773!=(x774+(x775>x776)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x777 = -1;
	uint8_t x779 = 1U;
	volatile int32_t x780 = 1;
	volatile int32_t t186 = -1994532;

    t186 = (x777!=(x778+(x779>x780)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x781 = 89U;
	uint32_t x782 = UINT32_MAX;
	static int64_t x783 = -1802LL;
	int32_t t187 = 11817;

    t187 = (x781!=(x782+(x783>x784)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x785 = INT16_MIN;
	uint64_t x787 = 99949423925265LLU;
	int32_t t188 = -24;

    t188 = (x785!=(x786+(x787>x788)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x789 = 1;
	volatile int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MIN;
	int64_t x792 = -1572716614575562LL;
	volatile int32_t t189 = -441;

    t189 = (x789!=(x790+(x791>x792)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x793 = INT32_MIN;
	int64_t x794 = INT64_MAX;
	int32_t x795 = INT32_MIN;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t190 = -11444;

    t190 = (x793!=(x794+(x795>x796)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x798 = 120824621552LL;
	int32_t x800 = INT32_MAX;

    t191 = (x797!=(x798+(x799>x800)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x810 = 109U;
	int32_t x811 = INT32_MAX;
	uint8_t x812 = 3U;

    t192 = (x809!=(x810+(x811>x812)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x818 = UINT64_MAX;
	int64_t x819 = INT64_MIN;
	int16_t x820 = INT16_MAX;
	int32_t t193 = 0;

    t193 = (x817!=(x818+(x819>x820)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x821 = -1;
	int32_t x822 = INT32_MAX;
	int64_t x823 = INT64_MIN;
	int64_t x824 = -2193807224345LL;
	int32_t t194 = -42;

    t194 = (x821!=(x822+(x823>x824)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x828 = 19U;
	volatile int32_t t195 = 16;

    t195 = (x825!=(x826+(x827>x828)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x829 = UINT8_MAX;
	int16_t x830 = INT16_MIN;
	int16_t x831 = 3;
	int32_t t196 = 835232170;

    t196 = (x829!=(x830+(x831>x832)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x833 = 1U;
	uint64_t x834 = 1961560333786LLU;
	int16_t x835 = INT16_MIN;
	int16_t x836 = 2641;

    t197 = (x833!=(x834+(x835>x836)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x837 = UINT8_MAX;
	static volatile int8_t x838 = INT8_MAX;
	int64_t x839 = -486240767945LL;
	static uint8_t x840 = 39U;
	int32_t t198 = 1204;

    t198 = (x837!=(x838+(x839>x840)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x841 = INT32_MIN;
	int64_t x842 = 30461544855LL;
	static int64_t x843 = INT64_MIN;
	volatile int8_t x844 = 54;
	int32_t t199 = 4;

    t199 = (x841!=(x842+(x843>x844)));

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

