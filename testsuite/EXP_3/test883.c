
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

volatile int16_t x2 = 3;
volatile uint16_t x15 = 1U;
int64_t x18 = INT64_MAX;
int32_t x21 = INT32_MAX;
static int64_t x24 = INT64_MAX;
volatile int16_t x25 = -1;
int16_t x26 = -3;
static uint32_t t6 = 3026024U;
static int32_t x34 = INT32_MIN;
int32_t x36 = INT32_MAX;
int8_t x38 = -1;
uint16_t x43 = 16U;
int64_t x47 = INT64_MIN;
volatile uint8_t x71 = UINT8_MAX;
volatile int64_t x73 = -1LL;
static int32_t x76 = INT32_MIN;
int32_t x78 = INT32_MIN;
int16_t x80 = INT16_MIN;
static volatile int8_t x81 = 0;
volatile int32_t t19 = 141768;
static uint32_t t21 = 1U;
int64_t t23 = -410289LL;
uint32_t x109 = UINT32_MAX;
int16_t x114 = INT16_MIN;
volatile int8_t x115 = INT8_MIN;
int32_t t28 = -1;
volatile int32_t x121 = INT32_MAX;
uint16_t x122 = 0U;
static int32_t x123 = -5341;
volatile uint16_t x131 = 28U;
volatile int64_t t32 = 488573085180938851LL;
int32_t t36 = -50513;
uint8_t x162 = 15U;
int64_t x167 = INT64_MAX;
static uint64_t x170 = 511578753071874LLU;
uint8_t x172 = UINT8_MAX;
int16_t x175 = INT16_MIN;
int32_t t42 = 378606756;
static volatile uint32_t t43 = 39122728U;
int8_t x186 = 63;
int16_t x190 = -1;
static volatile int16_t x196 = INT16_MIN;
uint32_t x200 = 467188211U;
int8_t x206 = INT8_MIN;
int16_t x207 = INT16_MIN;
volatile uint16_t x214 = 1U;
uint32_t x215 = UINT32_MAX;
int16_t x225 = 372;
uint8_t x227 = 12U;
int16_t x228 = INT16_MAX;
int32_t x229 = -1;
uint64_t x235 = UINT64_MAX;
int64_t t57 = -709786515LL;
static int16_t x241 = -27;
static int32_t x243 = INT32_MAX;
static volatile uint32_t x250 = 283526352U;
static int8_t x252 = -1;
int32_t x253 = INT32_MAX;
static int8_t x257 = INT8_MIN;
int8_t x259 = INT8_MIN;
int16_t x263 = INT16_MIN;
uint32_t x266 = 114U;
int64_t x268 = INT64_MIN;
static uint32_t t64 = 1788U;
int32_t x277 = -16018;
uint64_t x283 = 122LLU;
static volatile uint64_t t67 = 0LLU;
int64_t x287 = -947352644934873LL;
int16_t x292 = -1;
int32_t t70 = -6;
static int32_t x297 = -1;
int16_t x300 = INT16_MIN;
volatile uint64_t t72 = 11LLU;
uint32_t x316 = UINT32_MAX;
volatile uint32_t t75 = 145199303U;
int8_t x319 = INT8_MAX;
int32_t x325 = 0;
volatile int32_t t78 = -3973194;
int64_t x333 = INT64_MIN;
volatile int8_t x338 = -1;
volatile int16_t x342 = INT16_MIN;
static int8_t x344 = INT8_MIN;
uint64_t x345 = 132376LLU;
int32_t t84 = 422451;
int16_t x361 = INT16_MIN;
int32_t x374 = INT32_MAX;
uint8_t x376 = 31U;
int16_t x377 = -1;
static volatile int32_t t93 = -253;
int32_t x398 = INT32_MIN;
int64_t x399 = INT64_MIN;
volatile uint64_t x401 = 123710LLU;
uint32_t t95 = 35U;
int8_t x407 = INT8_MAX;
uint32_t x412 = 490198527U;
volatile uint32_t t97 = 18U;
uint16_t x417 = UINT16_MAX;
static uint16_t x419 = UINT16_MAX;
uint32_t t99 = 228U;
static uint64_t x426 = 46895351199099LLU;
uint8_t x439 = 7U;
int64_t x445 = INT64_MIN;
int64_t x452 = INT64_MIN;
int8_t x457 = INT8_MIN;
uint32_t x458 = UINT32_MAX;
static int16_t x464 = -1;
volatile uint32_t t110 = 2140877468U;
int16_t x470 = -628;
static uint16_t x471 = 5077U;
uint64_t x474 = 6612168844568890605LLU;
uint8_t x484 = UINT8_MAX;
uint64_t x485 = UINT64_MAX;
uint16_t x488 = 42U;
volatile int32_t x490 = -1;
int64_t t117 = 48508063LL;
volatile int32_t x496 = -1;
int32_t t118 = 53197;
volatile int16_t x498 = 126;
static int32_t x501 = -1;
uint8_t x503 = 3U;
volatile uint64_t t120 = 277014LLU;
int32_t x505 = INT32_MIN;
int32_t x514 = INT32_MIN;
uint16_t x533 = UINT16_MAX;
int64_t x541 = INT64_MIN;
static uint64_t x543 = UINT64_MAX;
static int64_t x545 = -1LL;
uint8_t x549 = 15U;
int32_t x555 = INT32_MIN;
uint64_t x558 = 3464LLU;
int16_t x561 = -1;
uint32_t x567 = 19436744U;
volatile uint8_t x570 = UINT8_MAX;
int64_t x577 = -1LL;
uint32_t x582 = 1926U;
volatile uint16_t x583 = 7U;
static volatile int32_t t138 = 8;
int32_t x587 = 338;
uint64_t x590 = 3065LLU;
static uint64_t x591 = UINT64_MAX;
static uint32_t t141 = 11U;
uint32_t x600 = 46387U;
static uint32_t x606 = UINT32_MAX;
static int32_t x610 = INT32_MIN;
int64_t t145 = -931395992LL;
int8_t x616 = INT8_MAX;
volatile uint64_t x626 = UINT64_MAX;
int16_t x627 = -1;
uint32_t x636 = UINT32_MAX;
int8_t x646 = INT8_MIN;
static uint64_t x647 = 23654476509LLU;
int32_t x649 = INT32_MAX;
volatile int8_t x651 = INT8_MIN;
int16_t x656 = INT16_MIN;
volatile int32_t t156 = -62006;
int32_t x661 = INT32_MAX;
int16_t x670 = -13421;
uint64_t x674 = 9340026LLU;
volatile uint8_t x682 = UINT8_MAX;
int32_t x686 = INT32_MIN;
volatile int64_t t164 = -3799532452LL;
int8_t x689 = -1;
static int8_t x690 = 1;
int16_t x691 = INT16_MIN;
int64_t x695 = INT64_MIN;
uint64_t x696 = UINT64_MAX;
uint64_t t166 = 43LLU;
int64_t x707 = INT64_MIN;
static volatile int64_t t169 = -14576473LL;
static volatile int32_t t170 = 120102079;
static uint8_t x714 = 4U;
volatile uint64_t x725 = 329LLU;
int16_t x726 = 0;
int16_t x727 = -180;
volatile int32_t t173 = -1553758;
volatile uint16_t x730 = 9U;
static int32_t x738 = 2772528;
static volatile int32_t t176 = -905486185;
int32_t x745 = INT32_MIN;
volatile uint32_t x746 = UINT32_MAX;
volatile int16_t x747 = INT16_MIN;
int16_t x752 = INT16_MIN;
int8_t x755 = INT8_MAX;
volatile int16_t x756 = -123;
volatile uint8_t x757 = UINT8_MAX;
static volatile int32_t t180 = 742510353;
volatile int16_t x768 = INT16_MIN;
volatile int32_t t182 = 188684885;
volatile uint8_t x770 = 69U;
int8_t x772 = INT8_MAX;
uint64_t t186 = 2340498830119LLU;
int16_t x789 = -1;
int32_t x792 = -1;
static volatile int8_t x798 = INT8_MIN;
uint32_t t191 = 11910U;
static uint64_t x806 = 26156390874LLU;
uint64_t x807 = 57098002023701LLU;
int32_t x818 = INT32_MIN;
int8_t x824 = -14;
int8_t x832 = INT8_MAX;
volatile uint16_t x833 = 243U;
int32_t x834 = INT32_MIN;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	static int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 23717848816745808LL;

    t0 = ((x1==x2)+(x3%x4));

    if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	int8_t x6 = -1;
	uint64_t x7 = 62494267LLU;
	static volatile int32_t x8 = -51;
	volatile uint64_t t1 = 2LLU;

    t1 = ((x5==x6)+(x7%x8));

    if (t1 != 62494268LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 3U;
	static int16_t x10 = 10;
	static int32_t x11 = -1;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = 1;

    t2 = ((x9==x10)+(x11%x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 12152;
	static int64_t x14 = INT64_MAX;
	static int64_t x16 = INT64_MIN;
	int64_t t3 = -3871172LL;

    t3 = ((x13==x14)+(x15%x16));

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x19 = 216270770LL;
	static uint64_t x20 = 2LLU;
	uint64_t t4 = 1LLU;

    t4 = ((x17==x18)+(x19%x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MAX;
	volatile int64_t x23 = INT64_MIN;
	static int64_t t5 = -83004177LL;

    t5 = ((x21==x22)+(x23%x24));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x27 = -1;
	static uint32_t x28 = UINT32_MAX;

    t6 = ((x25==x26)+(x27%x28));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 492664;
	int64_t x30 = INT64_MAX;
	static volatile int16_t x31 = -3010;
	volatile int32_t x32 = INT32_MIN;
	int32_t t7 = 21996207;

    t7 = ((x29==x30)+(x31%x32));

    if (t7 != -3010) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int32_t x35 = 14888999;
	volatile int32_t t8 = 50593615;

    t8 = ((x33==x34)+(x35%x36));

    if (t8 != 14888999) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -6;
	int64_t x39 = INT64_MIN;
	static int8_t x40 = 3;
	static volatile int64_t t9 = -784687639628LL;

    t9 = ((x37==x38)+(x39%x40));

    if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 28U;
	volatile int16_t x42 = -1;
	static volatile uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 61565U;

    t10 = ((x41==x42)+(x43%x44));

    if (t10 != 16U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 379007936849299LLU;
	volatile int16_t x46 = -1;
	static uint32_t x48 = UINT32_MAX;
	static int64_t t11 = 12962LL;

    t11 = ((x45==x46)+(x47%x48));

    if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MIN;
	static volatile uint32_t x55 = UINT32_MAX;
	uint64_t x56 = 512691LLU;
	uint64_t t12 = 9715943LLU;

    t12 = ((x53==x54)+(x55%x56));

    if (t12 != 154788LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	int64_t x59 = -2080277213812083817LL;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t13 = 254623782759291966LL;

    t13 = ((x57==x58)+(x59%x60));

    if (t13 != -2080277213812083817LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -1;
	static int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MAX;
	int64_t t14 = -18636180312397LL;

    t14 = ((x61==x62)+(x63%x64));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = INT32_MAX;
	volatile int16_t x66 = INT16_MAX;
	static uint32_t x67 = UINT32_MAX;
	static int64_t x68 = INT64_MIN;
	volatile int64_t t15 = 119LL;

    t15 = ((x65==x66)+(x67%x68));

    if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	static int32_t x70 = -1;
	int32_t x72 = INT32_MAX;
	int32_t t16 = -1200484;

    t16 = ((x69==x70)+(x71%x72));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x74 = 27U;
	int64_t x75 = -5469695410363036LL;
	volatile int64_t t17 = 1828202259LL;

    t17 = ((x73==x74)+(x75%x76));

    if (t17 != -871815836LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	int32_t x79 = -186;
	volatile int32_t t18 = -2;

    t18 = ((x77==x78)+(x79%x80));

    if (t18 != -186) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x82 = 3;
	uint16_t x83 = 0U;
	int32_t x84 = INT32_MIN;

    t19 = ((x81==x82)+(x83%x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = 7869LL;
	int16_t x86 = -203;
	int8_t x87 = -4;
	int8_t x88 = INT8_MIN;
	static int32_t t20 = 16610019;

    t20 = ((x85==x86)+(x87%x88));

    if (t20 != -4) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x89 = -1LL;
	uint32_t x90 = UINT32_MAX;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 2U;

    t21 = ((x89==x90)+(x91%x92));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = 191;
	static volatile uint64_t x95 = 144116963121754LLU;
	volatile int64_t x96 = 156602LL;
	volatile uint64_t t22 = 14429349LLU;

    t22 = ((x93==x94)+(x95%x96));

    if (t22 != 98820LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x97 = -2;
	int16_t x98 = -1128;
	int64_t x99 = -1LL;
	uint8_t x100 = UINT8_MAX;

    t23 = ((x97==x98)+(x99%x100));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	uint8_t x103 = 5U;
	static int64_t x104 = -1LL;
	volatile int64_t t24 = 195031706186LL;

    t24 = ((x101==x102)+(x103%x104));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = UINT16_MAX;
	volatile uint16_t x106 = 42U;
	volatile uint64_t x107 = 27154LLU;
	int16_t x108 = 1;
	uint64_t t25 = 10617733626LLU;

    t25 = ((x105==x106)+(x107%x108));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	uint8_t x112 = UINT8_MAX;
	int32_t t26 = -342611;

    t26 = ((x109==x110)+(x111%x112));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int64_t x116 = INT64_MAX;
	int64_t t27 = 177LL;

    t27 = ((x113==x114)+(x115%x116));

    if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = 7U;
	static int32_t x119 = INT32_MIN;
	int8_t x120 = INT8_MAX;

    t28 = ((x117==x118)+(x119%x120));

    if (t28 != -8) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x124 = UINT8_MAX;
	volatile int32_t t29 = -1752023;

    t29 = ((x121==x122)+(x123%x124));

    if (t29 != -241) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x125 = -946311730;
	int64_t x126 = -86972LL;
	volatile uint16_t x127 = UINT16_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t30 = -59827;

    t30 = ((x125==x126)+(x127%x128));

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x129 = -2066602247019LL;
	int16_t x130 = -1;
	uint8_t x132 = 3U;
	int32_t t31 = -3746904;

    t31 = ((x129==x130)+(x131%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -452145;
	static int8_t x134 = INT8_MIN;
	int64_t x135 = 0LL;
	int32_t x136 = -1;

    t32 = ((x133==x134)+(x135%x136));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = -10582LL;
	int32_t x138 = -2759931;
	int64_t x139 = INT64_MAX;
	int32_t x140 = -1;
	int64_t t33 = 840263850LL;

    t33 = ((x137==x138)+(x139%x140));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -37779880;
	volatile int8_t x142 = INT8_MIN;
	static int32_t x143 = INT32_MAX;
	int8_t x144 = INT8_MAX;
	volatile int32_t t34 = -46;

    t34 = ((x141==x142)+(x143%x144));

    if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = 0;
	uint32_t x146 = 32320489U;
	int32_t x147 = INT32_MIN;
	static int8_t x148 = 3;
	int32_t t35 = 23884;

    t35 = ((x145==x146)+(x147%x148));

    if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x149 = -1083;
	static int64_t x150 = INT64_MIN;
	int8_t x151 = -1;
	int8_t x152 = INT8_MIN;

    t36 = ((x149==x150)+(x151%x152));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x153 = 44651U;
	int64_t x154 = 234122LL;
	uint32_t x155 = 1525229442U;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t37 = 60670160U;

    t37 = ((x153==x154)+(x155%x156));

    if (t37 != 1525229442U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 12;
	int8_t x158 = 1;
	int8_t x159 = 1;
	uint16_t x160 = 239U;
	volatile int32_t t38 = -14554611;

    t38 = ((x157==x158)+(x159%x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x161 = INT64_MIN;
	volatile uint16_t x163 = 1U;
	int64_t x164 = 72589171686256LL;
	static volatile int64_t t39 = -8230839907LL;

    t39 = ((x161==x162)+(x163%x164));

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x165 = UINT32_MAX;
	uint32_t x166 = 1591U;
	static int32_t x168 = INT32_MAX;
	volatile int64_t t40 = 26507866871696401LL;

    t40 = ((x165==x166)+(x167%x168));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = UINT16_MAX;
	volatile int64_t x171 = -6LL;
	volatile int64_t t41 = -2231134010LL;

    t41 = ((x169==x170)+(x171%x172));

    if (t41 != -6LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = INT8_MIN;
	uint8_t x174 = 5U;
	int32_t x176 = INT32_MIN;

    t42 = ((x173==x174)+(x175%x176));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = INT8_MAX;
	static volatile uint64_t x182 = 1750065271060486305LLU;
	uint32_t x183 = 496761130U;
	int16_t x184 = 4078;

    t43 = ((x181==x182)+(x183%x184));

    if (t43 != 3638U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = 0;
	volatile uint32_t x187 = UINT32_MAX;
	uint16_t x188 = 3441U;
	uint32_t t44 = 81584U;

    t44 = ((x185==x186)+(x187%x188));

    if (t44 != 561U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = 24933782LLU;
	static uint64_t x191 = 48469113693605070LLU;
	int16_t x192 = -671;
	volatile uint64_t t45 = 148136025201337LLU;

    t45 = ((x189==x190)+(x191%x192));

    if (t45 != 48469113693605070LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x193 = INT32_MIN;
	int64_t x194 = 298580925540690LL;
	uint8_t x195 = 101U;
	volatile int32_t t46 = 9733;

    t46 = ((x193==x194)+(x195%x196));

    if (t46 != 101) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 0;
	int64_t x198 = INT64_MAX;
	int64_t x199 = INT64_MIN;
	int64_t t47 = 377LL;

    t47 = ((x197==x198)+(x199%x200));

    if (t47 != -152661769LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x201 = INT8_MIN;
	uint64_t x202 = 51LLU;
	static volatile int8_t x203 = -1;
	int32_t x204 = 3498;
	volatile int32_t t48 = 13;

    t48 = ((x201==x202)+(x203%x204));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = INT64_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t49 = 1264;

    t49 = ((x205==x206)+(x207%x208));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = -1LL;
	int16_t x210 = INT16_MAX;
	int32_t x211 = 1;
	int16_t x212 = INT16_MIN;
	int32_t t50 = -733;

    t50 = ((x209==x210)+(x211%x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x213 = 0;
	static int16_t x216 = -1;
	volatile uint32_t t51 = 3191108U;

    t51 = ((x213==x214)+(x215%x216));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x217 = 5U;
	int8_t x218 = 19;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 3889931449201157404LLU;
	uint64_t t52 = 179058905LLU;

    t52 = ((x217==x218)+(x219%x220));

    if (t52 != 1443509138452461000LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x221 = -1;
	static uint8_t x222 = 29U;
	int64_t x223 = INT64_MIN;
	volatile int16_t x224 = -1;
	static volatile int64_t t53 = -9267617867LL;

    t53 = ((x221==x222)+(x223%x224));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x226 = 1771674561709390627LLU;
	volatile int32_t t54 = 85677;

    t54 = ((x225==x226)+(x227%x228));

    if (t54 != 12) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x230 = 16U;
	int16_t x231 = INT16_MIN;
	static int64_t x232 = -1LL;
	static volatile int64_t t55 = -278471366518140864LL;

    t55 = ((x229==x230)+(x231%x232));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = UINT32_MAX;
	uint64_t x234 = UINT64_MAX;
	int64_t x236 = -1LL;
	uint64_t t56 = 53463656695747LLU;

    t56 = ((x233==x234)+(x235%x236));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	int64_t x239 = -9491LL;
	uint16_t x240 = UINT16_MAX;

    t57 = ((x237==x238)+(x239%x240));

    if (t57 != -9491LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x242 = 154443826810950050LL;
	volatile uint8_t x244 = 3U;
	volatile int32_t t58 = 23;

    t58 = ((x241==x242)+(x243%x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x249 = 2727U;
	volatile int32_t x251 = INT32_MIN;
	int32_t t59 = -116185608;

    t59 = ((x249==x250)+(x251%x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x254 = 10U;
	int32_t x255 = 0;
	int8_t x256 = INT8_MIN;
	volatile int32_t t60 = -16910157;

    t60 = ((x253==x254)+(x255%x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x258 = 499;
	int8_t x260 = -5;
	static volatile int32_t t61 = 2;

    t61 = ((x257==x258)+(x259%x260));

    if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = -1;
	static int64_t x262 = INT64_MAX;
	int16_t x264 = -2;
	int32_t t62 = 0;

    t62 = ((x261==x262)+(x263%x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = 4;
	uint64_t x267 = 371181350LLU;
	uint64_t t63 = 4000040151617LLU;

    t63 = ((x265==x266)+(x267%x268));

    if (t63 != 371181350LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = UINT16_MAX;
	static int64_t x270 = -1LL;
	uint32_t x271 = 467687798U;
	uint32_t x272 = 43U;

    t64 = ((x269==x270)+(x271%x272));

    if (t64 != 18U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x273 = 407215286LLU;
	static int64_t x274 = INT64_MIN;
	uint16_t x275 = 740U;
	int32_t x276 = INT32_MIN;
	int32_t t65 = 2;

    t65 = ((x273==x274)+(x275%x276));

    if (t65 != 740) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x278 = -99743471980LL;
	uint8_t x279 = 10U;
	volatile uint16_t x280 = UINT16_MAX;
	volatile int32_t t66 = 51416024;

    t66 = ((x277==x278)+(x279%x280));

    if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MIN;
	int64_t x284 = -3LL;

    t67 = ((x281==x282)+(x283%x284));

    if (t67 != 122LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = 82219599;
	int32_t x286 = 1;
	volatile int8_t x288 = 48;
	volatile int64_t t68 = -4595222384110LL;

    t68 = ((x285==x286)+(x287%x288));

    if (t68 != -9LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x289 = UINT32_MAX;
	uint8_t x290 = 27U;
	int32_t x291 = 64720484;
	static int32_t t69 = 1;

    t69 = ((x289==x290)+(x291%x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = INT64_MAX;
	int64_t x294 = INT64_MIN;
	int32_t x295 = -6964439;
	volatile int8_t x296 = INT8_MIN;

    t70 = ((x293==x294)+(x295%x296));

    if (t70 != -87) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x298 = INT8_MIN;
	static volatile int8_t x299 = 0;
	static volatile int32_t t71 = -1;

    t71 = ((x297==x298)+(x299%x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x301 = -112771903542913LL;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = UINT64_MAX;
	volatile int64_t x304 = 3063803038733261416LL;

    t72 = ((x301==x302)+(x303%x304));

    if (t72 != 63925841309983119LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x305 = INT16_MIN;
	volatile int8_t x306 = -1;
	int8_t x307 = INT8_MAX;
	static uint32_t x308 = 837U;
	volatile uint32_t t73 = 659927821U;

    t73 = ((x305==x306)+(x307%x308));

    if (t73 != 127U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x309 = UINT64_MAX;
	uint64_t x310 = 11880344081LLU;
	static int8_t x311 = 57;
	uint16_t x312 = UINT16_MAX;
	static int32_t t74 = 264174;

    t74 = ((x309==x310)+(x311%x312));

    if (t74 != 57) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = -1;
	static uint64_t x314 = 26LLU;
	uint8_t x315 = 2U;

    t75 = ((x313==x314)+(x315%x316));

    if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = INT8_MIN;
	uint8_t x318 = 4U;
	int8_t x320 = -1;
	int32_t t76 = 58754407;

    t76 = ((x317==x318)+(x319%x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x321 = 1829LLU;
	int16_t x322 = 614;
	int8_t x323 = -26;
	uint8_t x324 = 6U;
	static int32_t t77 = -3984274;

    t77 = ((x321==x322)+(x323%x324));

    if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x326 = 182671644U;
	volatile uint16_t x327 = 11U;
	static int8_t x328 = INT8_MIN;

    t78 = ((x325==x326)+(x327%x328));

    if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MAX;
	int32_t t79 = -14;

    t79 = ((x333==x334)+(x335%x336));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x337 = INT16_MAX;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	volatile int32_t t80 = 141316230;

    t80 = ((x337==x338)+(x339%x340));

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = -1;
	volatile int32_t x343 = INT32_MIN;
	int32_t t81 = 42934;

    t81 = ((x341==x342)+(x343%x344));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x346 = -1;
	volatile int64_t x347 = INT64_MAX;
	int64_t x348 = INT64_MAX;
	volatile int64_t t82 = 0LL;

    t82 = ((x345==x346)+(x347%x348));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x349 = 21;
	int8_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int8_t x352 = -3;
	volatile int32_t t83 = -2;

    t83 = ((x349==x350)+(x351%x352));

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x353 = -2027;
	int32_t x354 = 1;
	static int16_t x355 = -1;
	int8_t x356 = -1;

    t84 = ((x353==x354)+(x355%x356));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = INT32_MAX;
	uint16_t x358 = 31999U;
	uint16_t x359 = 0U;
	volatile int64_t x360 = -1002542248069296735LL;
	int64_t t85 = -36LL;

    t85 = ((x357==x358)+(x359%x360));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x362 = UINT64_MAX;
	volatile int64_t x363 = -1LL;
	volatile int16_t x364 = INT16_MIN;
	volatile int64_t t86 = -1285929781LL;

    t86 = ((x361==x362)+(x363%x364));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = 66727155702024069LL;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 290U;
	uint32_t x372 = 69596U;
	volatile uint32_t t87 = 4287266U;

    t87 = ((x369==x370)+(x371%x372));

    if (t87 != 290U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x373 = 113U;
	int8_t x375 = 1;
	int32_t t88 = 710787297;

    t88 = ((x373==x374)+(x375%x376));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x378 = -1;
	static int16_t x379 = 8;
	int32_t x380 = -1;
	static volatile int32_t t89 = 80520;

    t89 = ((x377==x378)+(x379%x380));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x381 = 99U;
	volatile uint16_t x382 = UINT16_MAX;
	int16_t x383 = INT16_MIN;
	volatile uint64_t x384 = UINT64_MAX;
	uint64_t t90 = 254315233LLU;

    t90 = ((x381==x382)+(x383%x384));

    if (t90 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x385 = 15;
	int32_t x386 = INT32_MIN;
	static int64_t x387 = INT64_MIN;
	static int64_t x388 = 10386140964379LL;
	int64_t t91 = -521633229726LL;

    t91 = ((x385==x386)+(x387%x388));

    if (t91 != -1098001862374LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x389 = 299U;
	static volatile int64_t x390 = INT64_MIN;
	int32_t x391 = 8133584;
	int32_t x392 = -1;
	volatile int32_t t92 = -2874557;

    t92 = ((x389==x390)+(x391%x392));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x393 = 3236861184148491LLU;
	uint64_t x394 = 18LLU;
	static int16_t x395 = INT16_MIN;
	int32_t x396 = 118;

    t93 = ((x393==x394)+(x395%x396));

    if (t93 != -82) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x397 = 8;
	static uint64_t x400 = 156691021604LLU;
	volatile uint64_t t94 = 16LLU;

    t94 = ((x397==x398)+(x399%x400));

    if (t94 != 114893104464LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x402 = INT32_MIN;
	volatile uint32_t x403 = UINT32_MAX;
	volatile int32_t x404 = INT32_MIN;

    t95 = ((x401==x402)+(x403%x404));

    if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x405 = -1;
	volatile int8_t x406 = -5;
	uint32_t x408 = UINT32_MAX;
	uint32_t t96 = 2U;

    t96 = ((x405==x406)+(x407%x408));

    if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int8_t x411 = INT8_MAX;

    t97 = ((x409==x410)+(x411%x412));

    if (t97 != 127U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x413 = UINT8_MAX;
	int64_t x414 = INT64_MIN;
	uint64_t x415 = 352833LLU;
	int16_t x416 = 6960;
	uint64_t t98 = 8068LLU;

    t98 = ((x413==x414)+(x415%x416));

    if (t98 != 4833LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x418 = -1;
	uint32_t x420 = 521880U;

    t99 = ((x417==x418)+(x419%x420));

    if (t99 != 65535U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x421 = -675LL;
	int64_t x422 = INT64_MIN;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t100 = -32;

    t100 = ((x421==x422)+(x423%x424));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x425 = INT16_MIN;
	volatile uint64_t x427 = UINT64_MAX;
	uint8_t x428 = 117U;
	uint64_t t101 = 8386659LLU;

    t101 = ((x425==x426)+(x427%x428));

    if (t101 != 15LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x429 = INT8_MIN;
	static int8_t x430 = -1;
	int32_t x431 = INT32_MAX;
	volatile uint32_t x432 = 52837728U;
	uint32_t t102 = 321806137U;

    t102 = ((x429==x430)+(x431%x432));

    if (t102 != 33974527U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x433 = 18467U;
	volatile int64_t x434 = INT64_MIN;
	int32_t x435 = INT32_MAX;
	int8_t x436 = -3;
	volatile int32_t t103 = 217;

    t103 = ((x433==x434)+(x435%x436));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x437 = -1LL;
	uint16_t x438 = 28049U;
	int64_t x440 = -544363333682525988LL;
	volatile int64_t t104 = 8247821LL;

    t104 = ((x437==x438)+(x439%x440));

    if (t104 != 7LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x441 = INT16_MAX;
	uint8_t x442 = 2U;
	int16_t x443 = INT16_MAX;
	uint64_t x444 = 26894671578265LLU;
	volatile uint64_t t105 = 21074836227564LLU;

    t105 = ((x441==x442)+(x443%x444));

    if (t105 != 32767LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x446 = -37LL;
	volatile int32_t x447 = INT32_MAX;
	int16_t x448 = INT16_MAX;
	volatile int32_t t106 = -1;

    t106 = ((x445==x446)+(x447%x448));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x449 = -3475;
	uint32_t x450 = UINT32_MAX;
	volatile int32_t x451 = -127783317;
	int64_t t107 = 0LL;

    t107 = ((x449==x450)+(x451%x452));

    if (t107 != -127783317LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = INT64_MAX;
	int8_t x454 = INT8_MIN;
	int32_t x455 = INT32_MIN;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t108 = 7380286873938106499LLU;

    t108 = ((x453==x454)+(x455%x456));

    if (t108 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x459 = UINT64_MAX;
	int32_t x460 = INT32_MIN;
	volatile uint64_t t109 = 263LLU;

    t109 = ((x457==x458)+(x459%x460));

    if (t109 != 2147483647LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x461 = INT64_MAX;
	uint64_t x462 = UINT64_MAX;
	static uint32_t x463 = 25U;

    t110 = ((x461==x462)+(x463%x464));

    if (t110 != 25U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x465 = 15387U;
	int32_t x466 = -1814989;
	static int64_t x467 = INT64_MAX;
	uint32_t x468 = UINT32_MAX;
	static int64_t t111 = -1461320LL;

    t111 = ((x465==x466)+(x467%x468));

    if (t111 != 2147483647LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = 32;
	static volatile int64_t x472 = INT64_MIN;
	volatile int64_t t112 = 3LL;

    t112 = ((x469==x470)+(x471%x472));

    if (t112 != 5077LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x473 = 1366476552305001046LLU;
	static int64_t x475 = -1LL;
	volatile uint64_t x476 = 417382393LLU;
	uint64_t t113 = 15374373755LLU;

    t113 = ((x473==x474)+(x475%x476));

    if (t113 != 77935981LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x477 = UINT32_MAX;
	uint8_t x478 = 30U;
	uint64_t x479 = UINT64_MAX;
	uint16_t x480 = 13U;
	volatile uint64_t t114 = 404034829371415LLU;

    t114 = ((x477==x478)+(x479%x480));

    if (t114 != 2LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x481 = INT32_MIN;
	uint32_t x482 = UINT32_MAX;
	uint16_t x483 = 4942U;
	int32_t t115 = -1087;

    t115 = ((x481==x482)+(x483%x484));

    if (t115 != 97) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x486 = -1LL;
	volatile int32_t x487 = INT32_MAX;
	static volatile int32_t t116 = -3666;

    t116 = ((x485==x486)+(x487%x488));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x489 = 17U;
	int64_t x491 = INT64_MIN;
	int64_t x492 = INT64_MAX;

    t117 = ((x489==x490)+(x491%x492));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x493 = 27;
	int64_t x494 = -81LL;
	int16_t x495 = INT16_MAX;

    t118 = ((x493==x494)+(x495%x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x497 = -1LL;
	static int8_t x499 = INT8_MAX;
	int16_t x500 = INT16_MIN;
	int32_t t119 = 29843232;

    t119 = ((x497==x498)+(x499%x500));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x502 = UINT8_MAX;
	uint64_t x504 = UINT64_MAX;

    t120 = ((x501==x502)+(x503%x504));

    if (t120 != 3LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x506 = 31U;
	static int64_t x507 = 63929126527245LL;
	int32_t x508 = INT32_MIN;
	static volatile int64_t t121 = 613585672LL;

    t121 = ((x505==x506)+(x507%x508));

    if (t121 != 685809933LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x509 = INT64_MIN;
	uint32_t x510 = 280737826U;
	int16_t x511 = INT16_MIN;
	int8_t x512 = INT8_MIN;
	volatile int32_t t122 = 273;

    t122 = ((x509==x510)+(x511%x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x515 = 1768;
	int8_t x516 = INT8_MIN;
	int32_t t123 = -846;

    t123 = ((x513==x514)+(x515%x516));

    if (t123 != 104) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x517 = 66U;
	int16_t x518 = -2576;
	int64_t x519 = -830658222222LL;
	uint8_t x520 = 8U;
	volatile int64_t t124 = 52LL;

    t124 = ((x517==x518)+(x519%x520));

    if (t124 != -6LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MIN;
	uint32_t x522 = 3U;
	int64_t x523 = -5702312356679391LL;
	static volatile int8_t x524 = INT8_MIN;
	volatile int64_t t125 = -30594132LL;

    t125 = ((x521==x522)+(x523%x524));

    if (t125 != -95LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x525 = 3U;
	uint8_t x526 = UINT8_MAX;
	int8_t x527 = -1;
	uint8_t x528 = 10U;
	int32_t t126 = 1167;

    t126 = ((x525==x526)+(x527%x528));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x534 = INT16_MAX;
	uint64_t x535 = 21222214545379057LLU;
	int16_t x536 = INT16_MIN;
	uint64_t t127 = 555802LLU;

    t127 = ((x533==x534)+(x535%x536));

    if (t127 != 21222214545379057LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x542 = 0;
	static volatile int16_t x544 = -1;
	uint64_t t128 = 128064106608LLU;

    t128 = ((x541==x542)+(x543%x544));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x546 = 458264456U;
	int64_t x547 = INT64_MAX;
	volatile uint32_t x548 = 445206U;
	volatile int64_t t129 = 3254596898460LL;

    t129 = ((x545==x546)+(x547%x548));

    if (t129 != 17215LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x550 = -394;
	int8_t x551 = INT8_MAX;
	volatile int8_t x552 = INT8_MIN;
	int32_t t130 = 2237;

    t130 = ((x549==x550)+(x551%x552));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x553 = INT32_MAX;
	uint8_t x554 = 1U;
	int64_t x556 = INT64_MAX;
	volatile int64_t t131 = 2096014308686LL;

    t131 = ((x553==x554)+(x555%x556));

    if (t131 != -2147483648LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x557 = 11564LL;
	volatile int32_t x559 = -1;
	static uint32_t x560 = 9U;
	static uint32_t t132 = 12U;

    t132 = ((x557==x558)+(x559%x560));

    if (t132 != 3U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x562 = 20U;
	static uint64_t x563 = 33441535183LLU;
	int16_t x564 = INT16_MAX;
	static volatile uint64_t t133 = 16LLU;

    t133 = ((x561==x562)+(x563%x564));

    if (t133 != 26488LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x565 = 1999312LL;
	int8_t x566 = INT8_MIN;
	int8_t x568 = 5;
	volatile uint32_t t134 = 32U;

    t134 = ((x565==x566)+(x567%x568));

    if (t134 != 4U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x569 = INT64_MIN;
	int16_t x571 = -1;
	int64_t x572 = -865123363346946LL;
	volatile int64_t t135 = 1719742LL;

    t135 = ((x569==x570)+(x571%x572));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = -1;
	uint16_t x574 = 582U;
	uint8_t x575 = UINT8_MAX;
	int64_t x576 = -1355063LL;
	int64_t t136 = -3186569LL;

    t136 = ((x573==x574)+(x575%x576));

    if (t136 != 255LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x578 = 891542U;
	static uint64_t x579 = 1539162703550288LLU;
	static volatile uint64_t x580 = 1788LLU;
	uint64_t t137 = 42LLU;

    t137 = ((x577==x578)+(x579%x580));

    if (t137 != 1616LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x581 = -7;
	int16_t x584 = 1;

    t138 = ((x581==x582)+(x583%x584));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x585 = INT32_MIN;
	static int8_t x586 = INT8_MIN;
	volatile uint32_t x588 = UINT32_MAX;
	volatile uint32_t t139 = 1049322066U;

    t139 = ((x585==x586)+(x587%x588));

    if (t139 != 338U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x589 = 2974U;
	int32_t x592 = INT32_MIN;
	static uint64_t t140 = 28479007583373LLU;

    t140 = ((x589==x590)+(x591%x592));

    if (t140 != 2147483647LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = -1;
	volatile int8_t x594 = 0;
	uint8_t x595 = 3U;
	uint32_t x596 = UINT32_MAX;

    t141 = ((x593==x594)+(x595%x596));

    if (t141 != 3U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x597 = 514LL;
	int16_t x598 = INT16_MIN;
	volatile int32_t x599 = INT32_MIN;
	volatile uint32_t t142 = 439688U;

    t142 = ((x597==x598)+(x599%x600));

    if (t142 != 43870U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x601 = 20984;
	int32_t x602 = 16221925;
	volatile int64_t x603 = INT64_MIN;
	uint32_t x604 = UINT32_MAX;
	int64_t t143 = -1LL;

    t143 = ((x601==x602)+(x603%x604));

    if (t143 != -2147483648LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x605 = 5011557;
	int64_t x607 = INT64_MIN;
	int32_t x608 = -1;
	static volatile int64_t t144 = -151845863551LL;

    t144 = ((x605==x606)+(x607%x608));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x611 = INT32_MAX;
	volatile int64_t x612 = -7817417660045324LL;

    t145 = ((x609==x610)+(x611%x612));

    if (t145 != 2147483647LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x613 = UINT8_MAX;
	volatile uint64_t x614 = UINT64_MAX;
	uint64_t x615 = UINT64_MAX;
	volatile uint64_t t146 = 2073943LLU;

    t146 = ((x613==x614)+(x615%x616));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x617 = 13;
	int8_t x618 = INT8_MIN;
	uint64_t x619 = 0LLU;
	uint32_t x620 = 871485U;
	uint64_t t147 = 18LLU;

    t147 = ((x617==x618)+(x619%x620));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x621 = -1;
	int64_t x622 = -1LL;
	volatile int16_t x623 = -1;
	int64_t x624 = -1LL;
	volatile int64_t t148 = -16173979LL;

    t148 = ((x621==x622)+(x623%x624));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x625 = INT8_MIN;
	uint16_t x628 = 2U;
	volatile int32_t t149 = -1;

    t149 = ((x625==x626)+(x627%x628));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x629 = UINT32_MAX;
	uint32_t x630 = 868626U;
	volatile int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MAX;
	int64_t t150 = 16410529648LL;

    t150 = ((x629==x630)+(x631%x632));

    if (t150 != -32768LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x633 = INT16_MIN;
	volatile int32_t x634 = -100891000;
	int8_t x635 = -1;
	volatile uint32_t t151 = 8007U;

    t151 = ((x633==x634)+(x635%x636));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x637 = 8771250885176LLU;
	int64_t x638 = INT64_MIN;
	int32_t x639 = -1;
	int32_t x640 = 419;
	static int32_t t152 = 13892567;

    t152 = ((x637==x638)+(x639%x640));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x641 = INT32_MAX;
	volatile int64_t x642 = INT64_MIN;
	static int32_t x643 = INT32_MIN;
	uint32_t x644 = 13U;
	static uint32_t t153 = 211492U;

    t153 = ((x641==x642)+(x643%x644));

    if (t153 != 11U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x645 = -1;
	volatile uint32_t x648 = UINT32_MAX;
	uint64_t t154 = 689LLU;

    t154 = ((x645==x646)+(x647%x648));

    if (t154 != 2179640034LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x650 = 0U;
	uint8_t x652 = 19U;
	volatile int32_t t155 = 1;

    t155 = ((x649==x650)+(x651%x652));

    if (t155 != -14) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = 153;
	static volatile int8_t x654 = -1;
	int32_t x655 = -54071874;

    t156 = ((x653==x654)+(x655%x656));

    if (t156 != -4674) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	int64_t x658 = 2850210987341478LL;
	volatile int32_t x659 = INT32_MIN;
	uint8_t x660 = 3U;
	static volatile int32_t t157 = -183;

    t157 = ((x657==x658)+(x659%x660));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x662 = INT8_MIN;
	static int32_t x663 = 365;
	int16_t x664 = INT16_MAX;
	volatile int32_t t158 = 7;

    t158 = ((x661==x662)+(x663%x664));

    if (t158 != 365) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x665 = 495856535LLU;
	int32_t x666 = INT32_MIN;
	int32_t x667 = INT32_MAX;
	static int32_t x668 = -14657;
	int32_t t159 = -1;

    t159 = ((x665==x666)+(x667%x668));

    if (t159 != 13292) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x669 = UINT64_MAX;
	volatile int32_t x671 = -380885;
	uint32_t x672 = 894U;
	uint32_t t160 = 973810345U;

    t160 = ((x669==x670)+(x671%x672));

    if (t160 != 833U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x673 = 610146756856230832LL;
	int8_t x675 = -1;
	volatile int8_t x676 = 1;
	int32_t t161 = 1175;

    t161 = ((x673==x674)+(x675%x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x677 = INT64_MIN;
	int16_t x678 = INT16_MIN;
	uint8_t x679 = 3U;
	volatile int64_t x680 = -214538LL;
	int64_t t162 = 3129510501LL;

    t162 = ((x677==x678)+(x679%x680));

    if (t162 != 3LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x681 = -1;
	int64_t x683 = -90923245915845187LL;
	uint8_t x684 = UINT8_MAX;
	volatile int64_t t163 = 741LL;

    t163 = ((x681==x682)+(x683%x684));

    if (t163 != -247LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x685 = INT64_MIN;
	int16_t x687 = -1;
	int64_t x688 = 7648141404LL;

    t164 = ((x685==x686)+(x687%x688));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x692 = -1;
	volatile int32_t t165 = -190361668;

    t165 = ((x689==x690)+(x691%x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x693 = -2;
	int32_t x694 = INT32_MAX;

    t166 = ((x693==x694)+(x695%x696));

    if (t166 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = INT64_MIN;
	uint32_t x698 = 100U;
	int16_t x699 = -1;
	int64_t x700 = INT64_MIN;
	int64_t t167 = 13122LL;

    t167 = ((x697==x698)+(x699%x700));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x701 = 83U;
	uint8_t x702 = 60U;
	volatile uint16_t x703 = 5U;
	uint32_t x704 = 60U;
	static uint32_t t168 = 10164U;

    t168 = ((x701==x702)+(x703%x704));

    if (t168 != 5U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x705 = INT32_MAX;
	uint8_t x706 = 4U;
	volatile int32_t x708 = 272;

    t169 = ((x705==x706)+(x707%x708));

    if (t169 != -128LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x709 = INT16_MAX;
	uint32_t x710 = 27486U;
	int32_t x711 = INT32_MIN;
	volatile uint8_t x712 = 1U;

    t170 = ((x709==x710)+(x711%x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x713 = UINT8_MAX;
	int8_t x715 = -1;
	int64_t x716 = INT64_MIN;
	int64_t t171 = 1636113635915LL;

    t171 = ((x713==x714)+(x715%x716));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x717 = 9;
	int64_t x718 = -1LL;
	uint8_t x719 = UINT8_MAX;
	static volatile int8_t x720 = -1;
	static int32_t t172 = 178567268;

    t172 = ((x717==x718)+(x719%x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x728 = INT16_MAX;

    t173 = ((x725==x726)+(x727%x728));

    if (t173 != -180) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x729 = 32105;
	int32_t x731 = INT32_MIN;
	int32_t x732 = INT32_MAX;
	volatile int32_t t174 = 1011;

    t174 = ((x729==x730)+(x731%x732));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x737 = -19861;
	uint16_t x739 = UINT16_MAX;
	static uint64_t x740 = 593911235165293360LLU;
	static volatile uint64_t t175 = 1080875246LLU;

    t175 = ((x737==x738)+(x739%x740));

    if (t175 != 65535LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x741 = INT32_MIN;
	int64_t x742 = INT64_MIN;
	int8_t x743 = -1;
	static uint16_t x744 = UINT16_MAX;

    t176 = ((x741==x742)+(x743%x744));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x748 = 435;
	volatile int32_t t177 = 985432795;

    t177 = ((x745==x746)+(x747%x748));

    if (t177 != -143) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x749 = -1LL;
	volatile int64_t x750 = -1LL;
	static volatile int64_t x751 = INT64_MIN;
	int64_t t178 = 4347579290902LL;

    t178 = ((x749==x750)+(x751%x752));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = INT64_MAX;
	int32_t t179 = -15273;

    t179 = ((x753==x754)+(x755%x756));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x758 = INT16_MAX;
	int8_t x759 = -1;
	static int32_t x760 = -1;

    t180 = ((x757==x758)+(x759%x760));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x761 = 520518482LL;
	static uint8_t x762 = UINT8_MAX;
	int16_t x763 = INT16_MIN;
	static volatile int8_t x764 = 41;
	static volatile int32_t t181 = -193662;

    t181 = ((x761==x762)+(x763%x764));

    if (t181 != -9) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x765 = INT64_MIN;
	int16_t x766 = INT16_MIN;
	uint16_t x767 = 7U;

    t182 = ((x765==x766)+(x767%x768));

    if (t182 != 7) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x769 = -1LL;
	int8_t x771 = 35;
	int32_t t183 = -885;

    t183 = ((x769==x770)+(x771%x772));

    if (t183 != 35) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x773 = 0;
	static int16_t x774 = 2;
	volatile int16_t x775 = 63;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t184 = -1;

    t184 = ((x773==x774)+(x775%x776));

    if (t184 != 63) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x777 = 1U;
	volatile uint64_t x778 = 8697438959590LLU;
	volatile uint32_t x779 = UINT32_MAX;
	static uint64_t x780 = 524832152409904123LLU;
	volatile uint64_t t185 = 247037LLU;

    t185 = ((x777==x778)+(x779%x780));

    if (t185 != 4294967295LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x781 = -1LL;
	uint64_t x782 = 8673120998919362LLU;
	uint64_t x783 = 3913LLU;
	uint16_t x784 = 7U;

    t186 = ((x781==x782)+(x783%x784));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x785 = -1;
	int32_t x786 = -1;
	volatile uint64_t x787 = 36247039421044973LLU;
	int32_t x788 = INT32_MAX;
	static volatile uint64_t t187 = 8123358441699LLU;

    t187 = ((x785==x786)+(x787%x788));

    if (t187 != 98264553LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x790 = -1;
	static uint32_t x791 = 62U;
	uint32_t t188 = 3U;

    t188 = ((x789==x790)+(x791%x792));

    if (t188 != 63U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x793 = 147LL;
	volatile int8_t x794 = INT8_MIN;
	int8_t x795 = -1;
	static volatile int8_t x796 = INT8_MAX;
	int32_t t189 = -712726;

    t189 = ((x793==x794)+(x795%x796));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x797 = -1;
	volatile int8_t x799 = -13;
	int8_t x800 = INT8_MIN;
	volatile int32_t t190 = 54958;

    t190 = ((x797==x798)+(x799%x800));

    if (t190 != -13) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x801 = INT8_MIN;
	static uint32_t x802 = 242983U;
	uint32_t x803 = 2U;
	static volatile uint8_t x804 = 17U;

    t191 = ((x801==x802)+(x803%x804));

    if (t191 != 2U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x805 = 19338525608596LLU;
	uint32_t x808 = 1331548U;
	uint64_t t192 = 389376484LLU;

    t192 = ((x805==x806)+(x807%x808));

    if (t192 != 91089LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x809 = 1844;
	uint8_t x810 = UINT8_MAX;
	volatile int32_t x811 = INT32_MAX;
	static volatile int8_t x812 = INT8_MAX;
	int32_t t193 = -837621;

    t193 = ((x809==x810)+(x811%x812));

    if (t193 != 7) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x813 = -1;
	uint64_t x814 = 157395787LLU;
	uint16_t x815 = 50U;
	static int16_t x816 = INT16_MIN;
	static volatile int32_t t194 = 7690;

    t194 = ((x813==x814)+(x815%x816));

    if (t194 != 50) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x817 = INT16_MAX;
	volatile int64_t x819 = INT64_MIN;
	int8_t x820 = -13;
	volatile int64_t t195 = 1529410730937174937LL;

    t195 = ((x817==x818)+(x819%x820));

    if (t195 != -8LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x821 = -1LL;
	int16_t x822 = INT16_MIN;
	uint64_t x823 = 8840212047001992LLU;
	volatile uint64_t t196 = 845422979921LLU;

    t196 = ((x821==x822)+(x823%x824));

    if (t196 != 8840212047001992LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x825 = UINT64_MAX;
	int32_t x826 = INT32_MIN;
	int16_t x827 = INT16_MIN;
	int16_t x828 = INT16_MAX;
	volatile int32_t t197 = -54969;

    t197 = ((x825==x826)+(x827%x828));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x829 = -1031111;
	int16_t x830 = INT16_MAX;
	int32_t x831 = INT32_MIN;
	int32_t t198 = -25;

    t198 = ((x829==x830)+(x831%x832));

    if (t198 != -8) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x835 = -1;
	int8_t x836 = -1;
	static int32_t t199 = -858192;

    t199 = ((x833==x834)+(x835%x836));

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

