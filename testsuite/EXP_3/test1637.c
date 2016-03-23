
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

int32_t x1 = INT32_MIN;
int64_t x4 = INT64_MIN;
int8_t x5 = INT8_MIN;
volatile int32_t t2 = 1278573;
int64_t t3 = 1739180642LL;
int32_t x24 = INT32_MAX;
static volatile uint8_t x25 = 0U;
int32_t x27 = -1;
static int64_t x29 = -1LL;
uint64_t x35 = 1128906441393LLU;
static int32_t x48 = INT32_MIN;
volatile uint64_t t11 = 142LLU;
static volatile int32_t t13 = -1014215;
static volatile int16_t x64 = -1;
static volatile int8_t x65 = -22;
uint32_t x68 = 847U;
int32_t x69 = -3152674;
static int64_t x74 = -1LL;
static uint8_t x80 = 9U;
static volatile int32_t t18 = 38;
int32_t x85 = -1;
static uint8_t x86 = 58U;
volatile int64_t x93 = INT64_MIN;
volatile uint8_t x94 = UINT8_MAX;
static volatile uint16_t x98 = 228U;
uint8_t x101 = 3U;
static int32_t t24 = 2253;
static uint64_t x106 = 49594652640984LLU;
int32_t x112 = INT32_MIN;
uint32_t x115 = 418537180U;
uint32_t x118 = 152750864U;
volatile int32_t x120 = INT32_MAX;
int64_t x125 = -1LL;
int64_t t30 = 545989528191676LL;
volatile int16_t x133 = -32;
int32_t x136 = INT32_MAX;
static int16_t x137 = INT16_MIN;
static int16_t x138 = -1;
int16_t x140 = -1;
static int64_t x141 = -6231876166126232LL;
uint64_t x144 = 3463LLU;
uint16_t x146 = 4543U;
int32_t x148 = -1;
uint64_t t35 = 204649610444LLU;
int8_t x160 = 1;
int8_t x162 = 1;
volatile int16_t x170 = 2;
int64_t x173 = -1390129353068LL;
uint8_t x174 = 96U;
int32_t x177 = -1;
static int16_t x181 = INT16_MIN;
int64_t x190 = 49139564832328LL;
int32_t t47 = 23;
int64_t x199 = INT64_MIN;
uint8_t x200 = 1U;
uint8_t x203 = 8U;
int32_t t50 = -3016;
volatile uint32_t x218 = UINT32_MAX;
static uint16_t x227 = UINT16_MAX;
int16_t x234 = -4;
uint32_t x235 = UINT32_MAX;
uint64_t x236 = 12238404806862176LLU;
static volatile int16_t x254 = -1;
static volatile int64_t t62 = -1705952303LL;
int64_t x262 = -248644510LL;
static volatile int8_t x265 = -26;
int64_t x268 = 66922554LL;
uint64_t x271 = 28275542351LLU;
static int16_t x272 = 8;
volatile int64_t t65 = -460066630251LL;
int32_t x273 = 94532;
uint64_t x282 = UINT64_MAX;
static int32_t x284 = INT32_MIN;
volatile int8_t x290 = INT8_MIN;
int32_t t69 = -758414;
volatile int16_t x293 = -1609;
static volatile uint64_t x297 = 13395532LLU;
int8_t x302 = INT8_MIN;
uint64_t x306 = UINT64_MAX;
uint64_t t73 = 80LLU;
static int8_t x310 = -1;
uint32_t x311 = 39U;
static int8_t x313 = INT8_MIN;
int32_t t76 = 400;
volatile int64_t x323 = -1LL;
static int8_t x329 = -1;
int32_t x330 = INT32_MAX;
static volatile int16_t x331 = INT16_MAX;
static int8_t x335 = INT8_MIN;
int32_t t80 = -227;
uint64_t t82 = 0LLU;
volatile int32_t x350 = INT32_MIN;
int64_t t85 = -255LL;
int64_t x357 = INT64_MAX;
int32_t x359 = -448;
volatile uint64_t x369 = UINT64_MAX;
volatile int16_t x370 = 2;
int8_t x373 = 0;
int16_t x376 = -1;
uint64_t x378 = 5LLU;
uint16_t x388 = UINT16_MAX;
static volatile int32_t t94 = -6467307;
volatile uint16_t x401 = UINT16_MAX;
int8_t x408 = -1;
int16_t x411 = INT16_MIN;
static volatile uint32_t t98 = 31U;
int64_t x413 = 52707558278419685LL;
int16_t x414 = INT16_MAX;
int8_t x423 = -1;
volatile uint64_t x427 = 58LLU;
volatile uint32_t x434 = 17U;
int16_t x436 = INT16_MAX;
uint32_t t104 = 4118581U;
static int16_t x440 = -1;
int8_t x446 = INT8_MIN;
uint64_t x447 = 1209286972415LLU;
int32_t x458 = INT32_MAX;
int32_t t112 = -128;
volatile uint16_t x472 = 3U;
int16_t x473 = INT16_MIN;
uint64_t x478 = 12789LLU;
static uint64_t x482 = 1162LLU;
int8_t x485 = 1;
uint64_t x486 = 27528LLU;
int32_t t118 = -708;
static int64_t x493 = INT64_MAX;
int32_t x500 = INT32_MIN;
uint8_t x501 = 60U;
volatile int8_t x503 = 5;
static volatile int32_t t121 = 6266;
int32_t x508 = -1;
int64_t x511 = -1LL;
static int64_t t123 = 98LL;
volatile int64_t x513 = INT64_MIN;
int16_t x514 = INT16_MIN;
volatile uint64_t t125 = 10947716280583LLU;
uint16_t x522 = UINT16_MAX;
int32_t t126 = -168290;
int32_t x546 = INT32_MIN;
volatile uint8_t x547 = UINT8_MAX;
int8_t x550 = -1;
static int64_t x554 = 31595LL;
static volatile int64_t t134 = -7404741LL;
int8_t x558 = INT8_MIN;
int16_t x561 = INT16_MIN;
int16_t x562 = INT16_MIN;
int32_t x565 = -6473;
int16_t x567 = INT16_MIN;
int16_t x568 = INT16_MIN;
volatile int16_t x569 = INT16_MAX;
static volatile int64_t x572 = INT64_MIN;
volatile int32_t x573 = INT32_MIN;
static int64_t t139 = 2574LL;
volatile uint32_t x577 = 3U;
int32_t x583 = INT32_MIN;
volatile uint16_t x584 = UINT16_MAX;
volatile uint32_t t141 = 1994511U;
static int32_t x587 = INT32_MAX;
int8_t x588 = 1;
int16_t x590 = INT16_MIN;
static int64_t x593 = -4642786LL;
int32_t x595 = -447080419;
uint32_t x601 = 1725U;
int16_t x607 = INT16_MIN;
int8_t x617 = INT8_MIN;
uint32_t x622 = UINT32_MAX;
int8_t x623 = -31;
static volatile int64_t t151 = -1LL;
uint32_t x632 = 0U;
static int16_t x635 = 2;
static int32_t x636 = INT32_MAX;
int64_t x639 = INT64_MIN;
uint32_t t154 = 88776082U;
uint16_t x644 = 4180U;
volatile int8_t x660 = 47;
int32_t t159 = -18;
int32_t x662 = INT32_MIN;
int8_t x675 = -1;
uint16_t x694 = 51U;
volatile int32_t x702 = INT32_MIN;
static volatile int8_t x709 = INT8_MIN;
static int32_t x723 = INT32_MAX;
static uint32_t t176 = 1U;
volatile int8_t x738 = -17;
int64_t x743 = -1LL;
int8_t x748 = INT8_MIN;
volatile uint64_t t180 = 292966053173478LLU;
static int8_t x750 = -1;
volatile int32_t t182 = -20748421;
static int16_t x764 = INT16_MIN;
volatile uint32_t t185 = 8217U;
int64_t x771 = INT64_MIN;
int8_t x773 = -1;
uint32_t x777 = 14581U;
int64_t x779 = INT64_MIN;
int8_t x782 = -1;
uint32_t x785 = 73U;
uint16_t x786 = UINT16_MAX;
uint16_t x788 = 38U;
int32_t x795 = INT32_MAX;
static uint64_t x806 = UINT64_MAX;
volatile int64_t x807 = INT64_MAX;
volatile int64_t x809 = INT64_MIN;
int16_t x812 = INT16_MAX;
volatile int64_t t196 = 1011087183LL;
int8_t x818 = -1;
uint64_t t199 = 19LLU;


void f0(void) {
    	volatile uint8_t x2 = 14U;
	static int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 0;

    t0 = ((x1%x2)|(x3>x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = UINT8_MAX;
	int16_t x7 = -1;
	int64_t x8 = 21611599023794LL;
	int32_t t1 = 51237997;

    t1 = ((x5%x6)|(x7>x8));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int32_t x10 = -427108;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;

    t2 = ((x9%x10)|(x11>x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	volatile int16_t x14 = INT16_MIN;
	uint8_t x15 = 1U;
	uint16_t x16 = UINT16_MAX;

    t3 = ((x13%x14)|(x15>x16));

    if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 15U;
	int8_t x22 = -1;
	int16_t x23 = 2;
	uint32_t t4 = 7360U;

    t4 = ((x21%x22)|(x23>x24));

    if (t4 != 15U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x26 = -8431310857LL;
	int32_t x28 = INT32_MAX;
	static volatile int64_t t5 = -359917269739476LL;

    t5 = ((x25%x26)|(x27>x28));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x30 = INT64_MIN;
	static int32_t x31 = INT32_MAX;
	int16_t x32 = -1696;
	int64_t t6 = -9153340LL;

    t6 = ((x29%x30)|(x31>x32));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = -2;
	static int64_t x34 = -1LL;
	static uint8_t x36 = 99U;
	volatile int64_t t7 = 32514053161LL;

    t7 = ((x33%x34)|(x35>x36));

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 3190U;
	int32_t x38 = 112613704;
	uint16_t x39 = 23U;
	int32_t x40 = -1;
	volatile int32_t t8 = 18131;

    t8 = ((x37%x38)|(x39>x40));

    if (t8 != 3191) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	static uint16_t x42 = 614U;
	volatile uint16_t x43 = 1U;
	uint8_t x44 = 76U;
	volatile int32_t t9 = -363295;

    t9 = ((x41%x42)|(x43>x44));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -1;
	static int16_t x46 = INT16_MAX;
	static volatile int64_t x47 = INT64_MIN;
	static int32_t t10 = 6735559;

    t10 = ((x45%x46)|(x47>x48));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = 1728705LLU;
	volatile uint16_t x50 = 148U;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -1LL;

    t11 = ((x49%x50)|(x51>x52));

    if (t11 != 65LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x53 = UINT32_MAX;
	uint8_t x54 = 8U;
	uint16_t x55 = 1843U;
	static int64_t x56 = 517286130178528LL;
	static uint32_t t12 = 3U;

    t12 = ((x53%x54)|(x55>x56));

    if (t12 != 7U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 10530U;
	int32_t x60 = INT32_MIN;

    t13 = ((x57%x58)|(x59>x60));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = 121509063;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = 41U;
	volatile int32_t t14 = 1862;

    t14 = ((x61%x62)|(x63>x64));

    if (t14 != 71) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;
	static volatile int32_t t15 = -482;

    t15 = ((x65%x66)|(x67>x68));

    if (t15 != -21) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x70 = INT64_MAX;
	volatile int8_t x71 = -1;
	static int16_t x72 = INT16_MIN;
	int64_t t16 = 170494411596134LL;

    t16 = ((x69%x70)|(x71>x72));

    if (t16 != -3152673LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = -1;
	int32_t x75 = 3811;
	int32_t x76 = -1;
	int64_t t17 = -7041LL;

    t17 = ((x73%x74)|(x75>x76));

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = INT16_MAX;
	static volatile uint8_t x78 = UINT8_MAX;
	static volatile int8_t x79 = INT8_MIN;

    t18 = ((x77%x78)|(x79>x80));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 1343117740088LL;
	uint16_t x82 = 171U;
	int64_t x83 = INT64_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t19 = 524136875418LL;

    t19 = ((x81%x82)|(x83>x84));

    if (t19 != 21LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x87 = 1U;
	int8_t x88 = -1;
	volatile int32_t t20 = -14;

    t20 = ((x85%x86)|(x87>x88));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MIN;
	static uint64_t x91 = 536884654390LLU;
	int64_t x92 = 119567118609LL;
	int32_t t21 = INT32_MAX;

    t21 = ((x89%x90)|(x91>x92));

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x95 = -1LL;
	static int64_t x96 = INT64_MIN;
	static volatile int64_t t22 = 0LL;

    t22 = ((x93%x94)|(x95>x96));

    if (t22 != -127LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x97 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MAX;
	volatile int32_t t23 = -589749258;

    t23 = ((x97%x98)|(x99>x100));

    if (t23 != -212) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x102 = INT8_MAX;
	static int8_t x103 = INT8_MIN;
	int32_t x104 = -140483;

    t24 = ((x101%x102)|(x103>x104));

    if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = 48;
	int8_t x107 = INT8_MAX;
	uint32_t x108 = 2386U;
	volatile uint64_t t25 = 19LLU;

    t25 = ((x105%x106)|(x107>x108));

    if (t25 != 48LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x109 = 14U;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MIN;
	volatile uint32_t t26 = 857265466U;

    t26 = ((x109%x110)|(x111>x112));

    if (t26 != 15U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	uint16_t x114 = 749U;
	int8_t x116 = INT8_MAX;
	volatile int64_t t27 = -5108LL;

    t27 = ((x113%x114)|(x115>x116));

    if (t27 != -259LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = INT8_MAX;
	static uint32_t x119 = UINT32_MAX;
	volatile uint32_t t28 = 544346U;

    t28 = ((x117%x118)|(x119>x120));

    if (t28 != 127U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	int32_t x122 = -1;
	uint8_t x123 = UINT8_MAX;
	uint16_t x124 = 117U;
	int32_t t29 = 30138;

    t29 = ((x121%x122)|(x123>x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x126 = -1;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = 41;

    t30 = ((x125%x126)|(x127>x128));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x129 = INT64_MAX;
	uint8_t x130 = 2U;
	int32_t x131 = 3735;
	uint64_t x132 = UINT64_MAX;
	volatile int64_t t31 = -1LL;

    t31 = ((x129%x130)|(x131>x132));

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x134 = 21251;
	volatile int64_t x135 = -92LL;
	static volatile int32_t t32 = 15;

    t32 = ((x133%x134)|(x135>x136));

    if (t32 != -32) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x139 = -440LL;
	int32_t t33 = -441680;

    t33 = ((x137%x138)|(x139>x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x142 = INT32_MIN;
	uint32_t x143 = 22646018U;
	static int64_t t34 = 0LL;

    t34 = ((x141%x142)|(x143>x144));

    if (t34 != -1026198167LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 509590869313583617LLU;
	int64_t x147 = INT64_MIN;

    t35 = ((x145%x146)|(x147>x148));

    if (t35 != 560LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = UINT32_MAX;
	int16_t x150 = 8;
	uint32_t x151 = 1019499773U;
	uint64_t x152 = 2466LLU;
	uint32_t t36 = 52U;

    t36 = ((x149%x150)|(x151>x152));

    if (t36 != 7U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -1LL;
	static uint16_t x154 = UINT16_MAX;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	volatile int64_t t37 = -92163LL;

    t37 = ((x153%x154)|(x155>x156));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MIN;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = 872;
	int32_t t38 = -3576;

    t38 = ((x157%x158)|(x159>x160));

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = INT32_MAX;
	volatile uint32_t x163 = 1U;
	uint64_t x164 = 25566623703125843LLU;
	volatile int32_t t39 = -7;

    t39 = ((x161%x162)|(x163>x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -1;
	int16_t x166 = 82;
	uint8_t x167 = 1U;
	volatile uint64_t x168 = 601469LLU;
	int32_t t40 = 47459;

    t40 = ((x165%x166)|(x167>x168));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x169 = INT32_MIN;
	static int64_t x171 = -1LL;
	static volatile int64_t x172 = -1LL;
	int32_t t41 = -8597;

    t41 = ((x169%x170)|(x171>x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x175 = 708586257246363310LLU;
	int32_t x176 = INT32_MIN;
	int64_t t42 = -124058286658LL;

    t42 = ((x173%x174)|(x175>x176));

    if (t42 != -44LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x178 = 1;
	int8_t x179 = INT8_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t43 = 281;

    t43 = ((x177%x178)|(x179>x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x182 = 1914U;
	uint64_t x183 = 14547LLU;
	int64_t x184 = 40323863LL;
	volatile int32_t t44 = -384009;

    t44 = ((x181%x182)|(x183>x184));

    if (t44 != -230) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x185 = INT8_MAX;
	int32_t x186 = INT32_MIN;
	int32_t x187 = 747723;
	int16_t x188 = INT16_MIN;
	int32_t t45 = 60485068;

    t45 = ((x185%x186)|(x187>x188));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = -26;
	uint16_t x191 = 6U;
	uint64_t x192 = 58168769227LLU;
	int64_t t46 = 19772821LL;

    t46 = ((x189%x190)|(x191>x192));

    if (t46 != -26LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = 9;
	static int8_t x194 = INT8_MIN;
	uint64_t x195 = UINT64_MAX;
	static uint32_t x196 = 74U;

    t47 = ((x193%x194)|(x195>x196));

    if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = INT8_MIN;
	volatile int32_t t48 = -13872689;

    t48 = ((x197%x198)|(x199>x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = 1419852214899LLU;
	int32_t x202 = INT32_MIN;
	volatile uint16_t x204 = UINT16_MAX;
	uint64_t t49 = 437045912LLU;

    t49 = ((x201%x202)|(x203>x204));

    if (t49 != 1419852214899LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = -1;
	volatile uint8_t x206 = UINT8_MAX;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MAX;

    t50 = ((x205%x206)|(x207>x208));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = UINT8_MAX;
	static volatile int64_t x210 = -700LL;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;
	int64_t t51 = 7454028548895LL;

    t51 = ((x209%x210)|(x211>x212));

    if (t51 != 255LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x217 = INT32_MAX;
	volatile uint64_t x219 = 30561835LLU;
	int8_t x220 = INT8_MIN;
	uint32_t t52 = 89302U;

    t52 = ((x217%x218)|(x219>x220));

    if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = 1U;
	uint64_t x222 = 18347715LLU;
	uint16_t x223 = 3U;
	uint32_t x224 = 315273234U;
	volatile uint64_t t53 = 801291535626LLU;

    t53 = ((x221%x222)|(x223>x224));

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x225 = 2U;
	static int64_t x226 = INT64_MIN;
	int16_t x228 = -1;
	volatile int64_t t54 = -110645243LL;

    t54 = ((x225%x226)|(x227>x228));

    if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x229 = UINT16_MAX;
	int8_t x230 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t55 = 63165804;

    t55 = ((x229%x230)|(x231>x232));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x233 = -1114760913406523LL;
	int64_t t56 = -23768383109LL;

    t56 = ((x233%x234)|(x235>x236));

    if (t56 != -3LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = 447933;
	static uint32_t x238 = 7738U;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t57 = 153390719U;

    t57 = ((x237%x238)|(x239>x240));

    if (t57 != 6867U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = 2494739726635140LLU;
	int64_t x243 = -1LL;
	uint32_t x244 = 28U;
	uint64_t t58 = 297813691LLU;

    t58 = ((x241%x242)|(x243>x244));

    if (t58 != 65535LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = 14934723;
	int32_t x246 = -1;
	int8_t x247 = INT8_MIN;
	int64_t x248 = -946LL;
	volatile int32_t t59 = 0;

    t59 = ((x245%x246)|(x247>x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = UINT16_MAX;
	static uint8_t x250 = 114U;
	int16_t x251 = INT16_MIN;
	int16_t x252 = 452;
	volatile int32_t t60 = 13897712;

    t60 = ((x249%x250)|(x251>x252));

    if (t60 != 99) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = INT32_MIN;
	int16_t x255 = -1;
	uint8_t x256 = 17U;
	int32_t t61 = 0;

    t61 = ((x253%x254)|(x255>x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MAX;
	uint8_t x259 = 0U;
	int16_t x260 = -1;

    t62 = ((x257%x258)|(x259>x260));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x261 = 2598;
	int64_t x263 = 11701LL;
	volatile uint64_t x264 = 219325391LLU;
	volatile int64_t t63 = -97227748951470015LL;

    t63 = ((x261%x262)|(x263>x264));

    if (t63 != 2598LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x266 = INT64_MIN;
	static uint16_t x267 = 1946U;
	volatile int64_t t64 = 938006905032190709LL;

    t64 = ((x265%x266)|(x267>x268));

    if (t64 != -26LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = 0U;
	int64_t x270 = -327LL;

    t65 = ((x269%x270)|(x271>x272));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x274 = 821;
	int16_t x275 = -1;
	int8_t x276 = 6;
	volatile int32_t t66 = -130815;

    t66 = ((x273%x274)|(x275>x276));

    if (t66 != 117) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = -1LL;
	int64_t x283 = INT64_MIN;
	uint64_t t67 = 240633114547356725LLU;

    t67 = ((x281%x282)|(x283>x284));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = 59101174;
	int16_t x286 = INT16_MIN;
	int64_t x287 = 947588053463066398LL;
	static int16_t x288 = -91;
	volatile int32_t t68 = 10110336;

    t68 = ((x285%x286)|(x287>x288));

    if (t68 != 20471) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x289 = 17U;
	int32_t x291 = -1;
	int32_t x292 = -383093;

    t69 = ((x289%x290)|(x291>x292));

    if (t69 != 17) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x294 = UINT32_MAX;
	uint8_t x295 = 11U;
	static uint64_t x296 = 39006692834853LLU;
	volatile uint32_t t70 = 131612465U;

    t70 = ((x293%x294)|(x295>x296));

    if (t70 != 4294965687U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x298 = 1U;
	uint64_t x299 = 3761595LLU;
	static int32_t x300 = INT32_MIN;
	volatile uint64_t t71 = 1058731412012865896LLU;

    t71 = ((x297%x298)|(x299>x300));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x301 = 2U;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t72 = 23205;

    t72 = ((x301%x302)|(x303>x304));

    if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = 39083379LL;
	int64_t x307 = INT64_MAX;
	int8_t x308 = 0;

    t73 = ((x305%x306)|(x307>x308));

    if (t73 != 39083379LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x309 = 1U;
	int8_t x312 = INT8_MAX;
	static int32_t t74 = 8155520;

    t74 = ((x309%x310)|(x311>x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x314 = -76;
	uint64_t x315 = 20234200LLU;
	int64_t x316 = INT64_MIN;
	volatile int32_t t75 = -180862;

    t75 = ((x313%x314)|(x315>x316));

    if (t75 != -52) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x317 = 7U;
	uint16_t x318 = 2009U;
	uint64_t x319 = 8LLU;
	uint32_t x320 = UINT32_MAX;

    t76 = ((x317%x318)|(x319>x320));

    if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = INT32_MIN;
	volatile uint32_t x322 = 9842U;
	uint64_t x324 = 20894481417LLU;
	volatile uint32_t t77 = 822582U;

    t77 = ((x321%x322)|(x323>x324));

    if (t77 != 8459U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x325 = UINT8_MAX;
	int64_t x326 = 3730557267336LL;
	volatile int64_t x327 = -1LL;
	int16_t x328 = -464;
	int64_t t78 = -2128412221341LL;

    t78 = ((x325%x326)|(x327>x328));

    if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x332 = 0U;
	volatile int32_t t79 = -4032;

    t79 = ((x329%x330)|(x331>x332));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = 1;
	int16_t x334 = INT16_MIN;
	uint64_t x336 = 16134LLU;

    t80 = ((x333%x334)|(x335>x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = 1090586160128515LL;
	uint16_t x338 = 13051U;
	static uint32_t x339 = UINT32_MAX;
	int64_t x340 = -1LL;
	volatile int64_t t81 = 18485264LL;

    t81 = ((x337%x338)|(x339>x340));

    if (t81 != 6543LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x341 = 67LLU;
	static uint8_t x342 = 48U;
	int64_t x343 = 10LL;
	int64_t x344 = INT64_MIN;

    t82 = ((x341%x342)|(x343>x344));

    if (t82 != 19LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x345 = INT64_MAX;
	uint16_t x346 = 322U;
	static int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	volatile int64_t t83 = 9420067210530LL;

    t83 = ((x345%x346)|(x347>x348));

    if (t83 != 301LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = 437538332935728958LL;
	int16_t x351 = -1;
	int64_t x352 = INT64_MIN;
	int64_t t84 = -780404905505276706LL;

    t84 = ((x349%x350)|(x351>x352));

    if (t84 != 775958335LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x353 = 29;
	int64_t x354 = INT64_MIN;
	volatile int8_t x355 = -1;
	int64_t x356 = 2430824363LL;

    t85 = ((x353%x354)|(x355>x356));

    if (t85 != 29LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x358 = 9U;
	int32_t x360 = INT32_MIN;
	int64_t t86 = -2591166794LL;

    t86 = ((x357%x358)|(x359>x360));

    if (t86 != 7LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = -1;
	static uint8_t x362 = UINT8_MAX;
	int16_t x363 = 0;
	int64_t x364 = INT64_MIN;
	volatile int32_t t87 = 416;

    t87 = ((x361%x362)|(x363>x364));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x371 = INT8_MIN;
	int8_t x372 = -1;
	volatile uint64_t t88 = 5628LLU;

    t88 = ((x369%x370)|(x371>x372));

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x374 = -692412;
	uint64_t x375 = 35LLU;
	volatile int32_t t89 = -126;

    t89 = ((x373%x374)|(x375>x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MIN;
	int16_t x379 = -1;
	int32_t x380 = INT32_MIN;
	static uint64_t t90 = 291905686097LLU;

    t90 = ((x377%x378)|(x379>x380));

    if (t90 != 3LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x381 = -8659719279LL;
	int8_t x382 = 1;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;
	int64_t t91 = 265LL;

    t91 = ((x381%x382)|(x383>x384));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x385 = 0U;
	uint64_t x386 = UINT64_MAX;
	int8_t x387 = INT8_MAX;
	volatile uint64_t t92 = 1842669134048950LLU;

    t92 = ((x385%x386)|(x387>x388));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x389 = INT64_MIN;
	static uint8_t x390 = 126U;
	int8_t x391 = INT8_MIN;
	int16_t x392 = 26;
	static int64_t t93 = 41688174LL;

    t93 = ((x389%x390)|(x391>x392));

    if (t93 != -8LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	static int64_t x395 = -1LL;
	int16_t x396 = INT16_MIN;

    t94 = ((x393%x394)|(x395>x396));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = -1064948719LL;
	volatile int32_t x399 = -115;
	static int64_t x400 = INT64_MIN;
	int64_t t95 = 4677420752LL;

    t95 = ((x397%x398)|(x399>x400));

    if (t95 != -32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x402 = 14U;
	int32_t x403 = 24;
	static volatile uint32_t x404 = 20U;
	int32_t t96 = -12;

    t96 = ((x401%x402)|(x403>x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x405 = 361859428617832LLU;
	int8_t x406 = -1;
	static volatile int64_t x407 = -13203055LL;
	volatile uint64_t t97 = 31570260LLU;

    t97 = ((x405%x406)|(x407>x408));

    if (t97 != 361859428617832LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x409 = -194233;
	uint32_t x410 = 4U;
	volatile int16_t x412 = INT16_MIN;

    t98 = ((x409%x410)|(x411>x412));

    if (t98 != 3U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MIN;
	int64_t t99 = 3069LL;

    t99 = ((x413%x414)|(x415>x416));

    if (t99 != 20493LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x417 = UINT8_MAX;
	volatile int32_t x418 = INT32_MIN;
	uint8_t x419 = UINT8_MAX;
	int64_t x420 = INT64_MAX;
	int32_t t100 = 1686;

    t100 = ((x417%x418)|(x419>x420));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = -1LL;
	int16_t x422 = -1;
	int16_t x424 = -28;
	volatile int64_t t101 = -49979226448LL;

    t101 = ((x421%x422)|(x423>x424));

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x425 = UINT8_MAX;
	static uint32_t x426 = 5552U;
	uint64_t x428 = 351484LLU;
	volatile uint32_t t102 = 121496681U;

    t102 = ((x425%x426)|(x427>x428));

    if (t102 != 255U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x429 = INT8_MAX;
	volatile int32_t x430 = INT32_MIN;
	int32_t x431 = -217843839;
	volatile int16_t x432 = -1;
	static volatile int32_t t103 = -5;

    t103 = ((x429%x430)|(x431>x432));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x433 = INT16_MIN;
	static int32_t x435 = 114307118;

    t104 = ((x433%x434)|(x435>x436));

    if (t104 != 9U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x437 = INT64_MAX;
	int16_t x438 = INT16_MIN;
	volatile uint8_t x439 = 112U;
	volatile int64_t t105 = 129950LL;

    t105 = ((x437%x438)|(x439>x440));

    if (t105 != 32767LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x441 = -9;
	int64_t x442 = -929445083LL;
	int64_t x443 = -7087965392156LL;
	volatile int16_t x444 = 157;
	int64_t t106 = -90483638524007LL;

    t106 = ((x441%x442)|(x443>x444));

    if (t106 != -9LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x445 = 688;
	int16_t x448 = INT16_MIN;
	volatile int32_t t107 = 61;

    t107 = ((x445%x446)|(x447>x448));

    if (t107 != 48) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x449 = INT8_MIN;
	int8_t x450 = -1;
	int16_t x451 = 4031;
	int8_t x452 = -1;
	volatile int32_t t108 = -3145228;

    t108 = ((x449%x450)|(x451>x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x453 = 11LLU;
	uint32_t x454 = 7066492U;
	static volatile int64_t x455 = 20128542370423LL;
	static int32_t x456 = INT32_MIN;
	volatile uint64_t t109 = 315674051LLU;

    t109 = ((x453%x454)|(x455>x456));

    if (t109 != 11LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x457 = UINT16_MAX;
	int8_t x459 = 11;
	int16_t x460 = -1;
	static int32_t t110 = 80853;

    t110 = ((x457%x458)|(x459>x460));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x461 = -779271261911953049LL;
	static volatile int64_t x462 = -1LL;
	volatile int64_t x463 = INT64_MIN;
	int32_t x464 = INT32_MIN;
	int64_t t111 = -104823189402845LL;

    t111 = ((x461%x462)|(x463>x464));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x465 = 17U;
	int8_t x466 = INT8_MIN;
	uint16_t x467 = 451U;
	int32_t x468 = -1;

    t112 = ((x465%x466)|(x467>x468));

    if (t112 != 17) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x469 = -1;
	int8_t x470 = INT8_MIN;
	static int8_t x471 = 1;
	int32_t t113 = -258116;

    t113 = ((x469%x470)|(x471>x472));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x474 = INT8_MIN;
	int32_t x475 = 757;
	int64_t x476 = 143625LL;
	int32_t t114 = -107417;

    t114 = ((x473%x474)|(x475>x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = INT64_MIN;
	int32_t x479 = INT32_MAX;
	int64_t x480 = -31702843614LL;
	volatile uint64_t t115 = 2965LLU;

    t115 = ((x477%x478)|(x479>x480));

    if (t115 != 1521LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = INT64_MIN;
	uint32_t x483 = 2U;
	volatile int8_t x484 = -1;
	volatile uint64_t t116 = 151130680171619535LLU;

    t116 = ((x481%x482)|(x483>x484));

    if (t116 != 848LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x487 = 3U;
	int64_t x488 = -1LL;
	uint64_t t117 = 2422509408465LLU;

    t117 = ((x485%x486)|(x487>x488));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MIN;
	volatile int64_t x491 = 3LL;
	volatile int16_t x492 = INT16_MIN;

    t118 = ((x489%x490)|(x491>x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x494 = 122773LLU;
	int64_t x495 = INT64_MIN;
	static int32_t x496 = 26316911;
	volatile uint64_t t119 = 115258162791956LLU;

    t119 = ((x493%x494)|(x495>x496));

    if (t119 != 97097LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x497 = 992184682284227LLU;
	uint32_t x498 = UINT32_MAX;
	uint16_t x499 = UINT16_MAX;
	uint64_t t120 = 993600813487LLU;

    t120 = ((x497%x498)|(x499>x500));

    if (t120 != 4287466277LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x502 = INT16_MAX;
	static volatile int8_t x504 = -50;

    t121 = ((x501%x502)|(x503>x504));

    if (t121 != 61) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x505 = -1;
	int8_t x506 = -1;
	int16_t x507 = INT16_MIN;
	static volatile int32_t t122 = 105758928;

    t122 = ((x505%x506)|(x507>x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x509 = INT64_MAX;
	static uint32_t x510 = UINT32_MAX;
	int64_t x512 = INT64_MIN;

    t123 = ((x509%x510)|(x511>x512));

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x515 = -7;
	int16_t x516 = INT16_MIN;
	volatile int64_t t124 = 390462254285LL;

    t124 = ((x513%x514)|(x515>x516));

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x517 = 24722510139LL;
	static uint64_t x518 = 869LLU;
	static volatile int8_t x519 = INT8_MIN;
	static uint64_t x520 = 849200761268LLU;

    t125 = ((x517%x518)|(x519>x520));

    if (t125 != 657LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x521 = -1;
	int64_t x523 = INT64_MIN;
	uint8_t x524 = UINT8_MAX;

    t126 = ((x521%x522)|(x523>x524));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x525 = 388968717U;
	int8_t x526 = -51;
	static uint32_t x527 = 14901816U;
	int64_t x528 = 50645606863763LL;
	uint32_t t127 = 7722U;

    t127 = ((x525%x526)|(x527>x528));

    if (t127 != 388968717U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x529 = -338534;
	int32_t x530 = -1;
	uint64_t x531 = 50956667LLU;
	uint8_t x532 = UINT8_MAX;
	int32_t t128 = 0;

    t128 = ((x529%x530)|(x531>x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x533 = 148U;
	int32_t x534 = -1;
	uint32_t x535 = 17125892U;
	static int8_t x536 = INT8_MIN;
	int32_t t129 = -360772446;

    t129 = ((x533%x534)|(x535>x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x537 = -1;
	volatile uint32_t x538 = UINT32_MAX;
	static volatile uint64_t x539 = UINT64_MAX;
	static uint8_t x540 = 118U;
	static uint32_t t130 = 228179062U;

    t130 = ((x537%x538)|(x539>x540));

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x541 = UINT32_MAX;
	volatile int32_t x542 = INT32_MIN;
	volatile int64_t x543 = -1LL;
	volatile uint8_t x544 = 7U;
	static uint32_t t131 = 1176929U;

    t131 = ((x541%x542)|(x543>x544));

    if (t131 != 2147483647U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x545 = INT32_MIN;
	uint16_t x548 = 59U;
	int32_t t132 = -193081703;

    t132 = ((x545%x546)|(x547>x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x549 = 1955045611570LLU;
	volatile int16_t x551 = -1;
	uint64_t x552 = 2291LLU;
	volatile uint64_t t133 = 23944341LLU;

    t133 = ((x549%x550)|(x551>x552));

    if (t133 != 1955045611571LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x553 = 5U;
	int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MIN;

    t134 = ((x553%x554)|(x555>x556));

    if (t134 != 5LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x557 = 1U;
	uint32_t x559 = UINT32_MAX;
	int32_t x560 = INT32_MAX;
	int32_t t135 = 8214750;

    t135 = ((x557%x558)|(x559>x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x563 = UINT64_MAX;
	uint64_t x564 = UINT64_MAX;
	int32_t t136 = 13316;

    t136 = ((x561%x562)|(x563>x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x566 = INT16_MIN;
	int32_t t137 = 21;

    t137 = ((x565%x566)|(x567>x568));

    if (t137 != -6473) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x570 = UINT32_MAX;
	int64_t x571 = INT64_MIN;
	uint32_t t138 = 71802U;

    t138 = ((x569%x570)|(x571>x572));

    if (t138 != 32767U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x574 = -1LL;
	static volatile int64_t x575 = 4444578156088216LL;
	int8_t x576 = INT8_MAX;

    t139 = ((x573%x574)|(x575>x576));

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x578 = INT32_MAX;
	volatile int16_t x579 = INT16_MIN;
	int8_t x580 = -25;
	volatile uint32_t t140 = 398U;

    t140 = ((x577%x578)|(x579>x580));

    if (t140 != 3U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = INT16_MIN;
	uint32_t x582 = 163543290U;

    t141 = ((x581%x582)|(x583>x584));

    if (t141 != 42808988U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x585 = 61380018050685LLU;
	int16_t x586 = INT16_MIN;
	static volatile uint64_t t142 = 2550807LLU;

    t142 = ((x585%x586)|(x587>x588));

    if (t142 != 61380018050685LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x589 = 168095076U;
	int8_t x591 = 1;
	uint64_t x592 = 34311450907LLU;
	volatile uint32_t t143 = 270140193U;

    t143 = ((x589%x590)|(x591>x592));

    if (t143 != 168095076U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x594 = 6496LL;
	static int32_t x596 = INT32_MIN;
	static volatile int64_t t144 = -150027650327LL;

    t144 = ((x593%x594)|(x595>x596));

    if (t144 != -4641LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x597 = 17;
	static int32_t x598 = INT32_MIN;
	uint16_t x599 = 7966U;
	int32_t x600 = INT32_MIN;
	int32_t t145 = -3;

    t145 = ((x597%x598)|(x599>x600));

    if (t145 != 17) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x602 = INT32_MIN;
	static int8_t x603 = INT8_MIN;
	volatile int64_t x604 = INT64_MIN;
	volatile uint32_t t146 = 8752494U;

    t146 = ((x601%x602)|(x603>x604));

    if (t146 != 1725U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = -1;
	uint8_t x606 = 4U;
	volatile int32_t x608 = 1834741;
	int32_t t147 = -2;

    t147 = ((x605%x606)|(x607>x608));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = -1;
	int32_t x610 = INT32_MIN;
	uint64_t x611 = 1154425540584LLU;
	int16_t x612 = INT16_MIN;
	static int32_t t148 = 231;

    t148 = ((x609%x610)|(x611>x612));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x618 = 6U;
	int8_t x619 = INT8_MAX;
	int64_t x620 = INT64_MIN;
	static volatile int32_t t149 = -707566031;

    t149 = ((x617%x618)|(x619>x620));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x621 = INT16_MAX;
	uint64_t x624 = 1001209LLU;
	volatile uint32_t t150 = 102U;

    t150 = ((x621%x622)|(x623>x624));

    if (t150 != 32767U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x625 = 11920401776866LL;
	uint32_t x626 = UINT32_MAX;
	static volatile uint64_t x627 = UINT64_MAX;
	volatile int32_t x628 = -7497;

    t151 = ((x625%x626)|(x627>x628));

    if (t151 != 1867533241LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x629 = -434LL;
	int32_t x630 = -1;
	uint32_t x631 = 1U;
	int64_t t152 = 0LL;

    t152 = ((x629%x630)|(x631>x632));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x633 = UINT16_MAX;
	uint8_t x634 = UINT8_MAX;
	static volatile int32_t t153 = -1131;

    t153 = ((x633%x634)|(x635>x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	uint16_t x638 = 1278U;
	int8_t x640 = -53;

    t154 = ((x637%x638)|(x639>x640));

    if (t154 != 363U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x641 = INT16_MIN;
	volatile int8_t x642 = -1;
	uint64_t x643 = UINT64_MAX;
	static volatile int32_t t155 = -239;

    t155 = ((x641%x642)|(x643>x644));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x645 = INT32_MIN;
	static volatile int64_t x646 = INT64_MIN;
	uint64_t x647 = 67154717477LLU;
	volatile int8_t x648 = 5;
	int64_t t156 = 1833LL;

    t156 = ((x645%x646)|(x647>x648));

    if (t156 != -2147483647LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x649 = INT8_MIN;
	uint64_t x650 = UINT64_MAX;
	uint64_t x651 = 11042310392430LLU;
	uint8_t x652 = UINT8_MAX;
	volatile uint64_t t157 = 2LLU;

    t157 = ((x649%x650)|(x651>x652));

    if (t157 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x653 = -1;
	volatile int64_t x654 = INT64_MIN;
	int64_t x655 = INT64_MIN;
	int16_t x656 = -1;
	volatile int64_t t158 = -9LL;

    t158 = ((x653%x654)|(x655>x656));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x657 = 0U;
	static int16_t x658 = -1;
	volatile int16_t x659 = -1;

    t159 = ((x657%x658)|(x659>x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x661 = 19257842568LLU;
	uint8_t x663 = 56U;
	volatile uint16_t x664 = 7073U;
	static volatile uint64_t t160 = 6354682350626LLU;

    t160 = ((x661%x662)|(x663>x664));

    if (t160 != 19257842568LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MIN;
	int8_t x667 = INT8_MIN;
	uint32_t x668 = UINT32_MAX;
	static int32_t t161 = -1572593;

    t161 = ((x665%x666)|(x667>x668));

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x669 = INT16_MAX;
	static int64_t x670 = -1LL;
	int64_t x671 = -1LL;
	int32_t x672 = -1;
	int64_t t162 = -1468LL;

    t162 = ((x669%x670)|(x671>x672));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x673 = INT64_MAX;
	int32_t x674 = INT32_MIN;
	int64_t x676 = -1LL;
	static int64_t t163 = -24747178LL;

    t163 = ((x673%x674)|(x675>x676));

    if (t163 != 2147483647LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = INT16_MIN;
	static int8_t x682 = INT8_MAX;
	int32_t x683 = INT32_MAX;
	uint8_t x684 = UINT8_MAX;
	int32_t t164 = 903586110;

    t164 = ((x681%x682)|(x683>x684));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = 774872063334216685LLU;
	int8_t x686 = INT8_MAX;
	volatile int16_t x687 = -1;
	int32_t x688 = INT32_MIN;
	volatile uint64_t t165 = 368LLU;

    t165 = ((x685%x686)|(x687>x688));

    if (t165 != 125LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x689 = 879204781112887665LLU;
	int16_t x690 = -25;
	volatile int8_t x691 = INT8_MAX;
	static int16_t x692 = -621;
	static volatile uint64_t t166 = 75632030LLU;

    t166 = ((x689%x690)|(x691>x692));

    if (t166 != 879204781112887665LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = -222058684LL;
	static volatile int64_t x695 = INT64_MIN;
	int16_t x696 = -1;
	int64_t t167 = -40029889224LL;

    t167 = ((x693%x694)|(x695>x696));

    if (t167 != -43LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x697 = INT8_MAX;
	uint32_t x698 = 3099U;
	uint64_t x699 = 0LLU;
	uint8_t x700 = 61U;
	uint32_t t168 = 100U;

    t168 = ((x697%x698)|(x699>x700));

    if (t168 != 127U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = -1;
	int64_t x703 = INT64_MAX;
	int16_t x704 = INT16_MIN;
	int32_t t169 = -439;

    t169 = ((x701%x702)|(x703>x704));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	volatile int64_t x706 = INT64_MIN;
	uint16_t x707 = 6384U;
	int16_t x708 = INT16_MAX;
	static volatile uint64_t t170 = 776685103LLU;

    t170 = ((x705%x706)|(x707>x708));

    if (t170 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x710 = 1362U;
	uint8_t x711 = UINT8_MAX;
	static int64_t x712 = -933LL;
	volatile uint32_t t171 = 5U;

    t171 = ((x709%x710)|(x711>x712));

    if (t171 != 957U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x713 = -1;
	int8_t x714 = INT8_MIN;
	uint16_t x715 = 6U;
	uint32_t x716 = UINT32_MAX;
	int32_t t172 = -2;

    t172 = ((x713%x714)|(x715>x716));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x717 = 1U;
	int32_t x718 = INT32_MIN;
	uint64_t x719 = UINT64_MAX;
	volatile int64_t x720 = INT64_MIN;
	int32_t t173 = 971;

    t173 = ((x717%x718)|(x719>x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x721 = INT16_MAX;
	uint8_t x722 = 4U;
	static int32_t x724 = INT32_MIN;
	static int32_t t174 = 901;

    t174 = ((x721%x722)|(x723>x724));

    if (t174 != 3) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x725 = 143U;
	int8_t x726 = 4;
	int16_t x727 = INT16_MIN;
	volatile uint32_t x728 = 12U;
	int32_t t175 = 6;

    t175 = ((x725%x726)|(x727>x728));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint32_t x729 = UINT32_MAX;
	uint8_t x730 = 1U;
	int64_t x731 = INT64_MIN;
	int32_t x732 = -1;

    t176 = ((x729%x730)|(x731>x732));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x733 = -1LL;
	volatile uint8_t x734 = UINT8_MAX;
	int8_t x735 = -2;
	static int32_t x736 = -145;
	int64_t t177 = -230531014LL;

    t177 = ((x733%x734)|(x735>x736));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x737 = INT64_MIN;
	int64_t x739 = 1LL;
	int16_t x740 = -4;
	int64_t t178 = 3804274668LL;

    t178 = ((x737%x738)|(x739>x740));

    if (t178 != -9LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	volatile int64_t x742 = -63128113210666LL;
	volatile int64_t x744 = INT64_MIN;
	volatile int64_t t179 = 3098665088055146LL;

    t179 = ((x741%x742)|(x743>x744));

    if (t179 != 4294967295LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x745 = 1052985LLU;
	int32_t x746 = 1088;
	int8_t x747 = INT8_MIN;

    t180 = ((x745%x746)|(x747>x748));

    if (t180 != 889LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x749 = -1LL;
	uint8_t x751 = UINT8_MAX;
	static int16_t x752 = INT16_MIN;
	int64_t t181 = 217588686955485LL;

    t181 = ((x749%x750)|(x751>x752));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = INT8_MAX;
	int8_t x754 = INT8_MIN;
	static int16_t x755 = INT16_MIN;
	int8_t x756 = 50;

    t182 = ((x753%x754)|(x755>x756));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x757 = INT8_MIN;
	volatile int16_t x758 = -1;
	volatile int16_t x759 = 0;
	static int64_t x760 = INT64_MIN;
	volatile int32_t t183 = -32950;

    t183 = ((x757%x758)|(x759>x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x761 = UINT64_MAX;
	int32_t x762 = INT32_MIN;
	static uint16_t x763 = 16014U;
	uint64_t t184 = 929182454563LLU;

    t184 = ((x761%x762)|(x763>x764));

    if (t184 != 2147483647LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x765 = INT8_MAX;
	volatile uint32_t x766 = 25U;
	int8_t x767 = -26;
	static volatile int16_t x768 = -1;

    t185 = ((x765%x766)|(x767>x768));

    if (t185 != 2U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = -915;
	static int8_t x770 = -1;
	int32_t x772 = -1;
	static volatile int32_t t186 = -382916;

    t186 = ((x769%x770)|(x771>x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x774 = INT32_MIN;
	int32_t x775 = INT32_MAX;
	int16_t x776 = INT16_MIN;
	int32_t t187 = -14;

    t187 = ((x773%x774)|(x775>x776));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x778 = INT32_MAX;
	volatile uint16_t x780 = UINT16_MAX;
	static uint32_t t188 = 1198035218U;

    t188 = ((x777%x778)|(x779>x780));

    if (t188 != 14581U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = 133LL;
	static uint32_t x783 = 5U;
	static int8_t x784 = INT8_MIN;
	static volatile int64_t t189 = -25868220124037276LL;

    t189 = ((x781%x782)|(x783>x784));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x787 = INT64_MAX;
	static volatile uint32_t t190 = 15983084U;

    t190 = ((x785%x786)|(x787>x788));

    if (t190 != 73U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = 0;
	int64_t x790 = INT64_MIN;
	static uint64_t x791 = 3392802677LLU;
	uint8_t x792 = 14U;
	int64_t t191 = -1LL;

    t191 = ((x789%x790)|(x791>x792));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x793 = -1;
	int16_t x794 = -1;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t192 = -634722025;

    t192 = ((x793%x794)|(x795>x796));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = -1LL;
	int16_t x798 = INT16_MIN;
	int32_t x799 = INT32_MAX;
	uint16_t x800 = 2U;
	int64_t t193 = 177563280316LL;

    t193 = ((x797%x798)|(x799>x800));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = 1416LL;
	static volatile int8_t x802 = INT8_MIN;
	static volatile uint32_t x803 = UINT32_MAX;
	uint16_t x804 = 8496U;
	static int64_t t194 = 181LL;

    t194 = ((x801%x802)|(x803>x804));

    if (t194 != 9LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x805 = 472U;
	int64_t x808 = INT64_MAX;
	volatile uint64_t t195 = 8871670LLU;

    t195 = ((x805%x806)|(x807>x808));

    if (t195 != 472LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x810 = INT16_MIN;
	uint16_t x811 = 177U;

    t196 = ((x809%x810)|(x811>x812));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x813 = -29;
	int8_t x814 = INT8_MIN;
	volatile int32_t x815 = INT32_MIN;
	uint64_t x816 = 285123LLU;
	volatile int32_t t197 = 5907;

    t197 = ((x813%x814)|(x815>x816));

    if (t197 != -29) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x817 = INT64_MIN;
	uint64_t x819 = 84760693985LLU;
	uint32_t x820 = UINT32_MAX;
	volatile int64_t t198 = 178LL;

    t198 = ((x817%x818)|(x819>x820));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x821 = 0;
	static uint64_t x822 = 77777124106066LLU;
	uint8_t x823 = UINT8_MAX;
	int16_t x824 = INT16_MAX;

    t199 = ((x821%x822)|(x823>x824));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

