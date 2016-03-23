
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

int32_t x1 = INT32_MAX;
int16_t x2 = INT16_MAX;
volatile uint8_t x10 = UINT8_MAX;
uint64_t x14 = UINT64_MAX;
static volatile int32_t x15 = INT32_MIN;
uint64_t x21 = UINT64_MAX;
int32_t t5 = -426613;
uint32_t x34 = UINT32_MAX;
uint64_t x36 = 884955490850LLU;
volatile int32_t t7 = 44517;
static uint32_t x46 = UINT32_MAX;
int16_t x53 = -1;
static uint16_t x55 = 21958U;
static volatile int32_t t12 = 29496861;
volatile int64_t x57 = -1LL;
volatile int32_t t13 = -11512;
static volatile int32_t t15 = 3115436;
int16_t x72 = INT16_MIN;
volatile uint64_t x75 = 16853363LLU;
static uint16_t x80 = 27075U;
uint64_t x90 = 3701382336072814LLU;
static volatile int32_t t21 = -185967;
static uint8_t x101 = UINT8_MAX;
int32_t t24 = 126822694;
volatile int32_t t26 = 993;
uint32_t x117 = UINT32_MAX;
int32_t x118 = INT32_MAX;
int16_t x120 = 12309;
int32_t x123 = INT32_MAX;
static volatile int8_t x127 = INT8_MIN;
static int64_t x130 = -1LL;
int16_t x131 = INT16_MAX;
uint8_t x135 = 31U;
int16_t x137 = -1;
int8_t x144 = INT8_MIN;
static volatile int32_t t34 = -245;
static int16_t x148 = -1;
uint32_t x152 = UINT32_MAX;
int32_t t36 = 3603870;
volatile uint8_t x154 = 23U;
uint64_t x158 = 2199008354347269LLU;
volatile int8_t x165 = -1;
int16_t x174 = -3796;
int8_t x175 = INT8_MAX;
uint16_t x177 = 51U;
int32_t x178 = INT32_MIN;
volatile int32_t t43 = 766;
uint32_t x184 = UINT32_MAX;
volatile int32_t t44 = 681776;
uint32_t x186 = 501476263U;
int8_t x188 = 0;
int32_t t47 = -8009089;
int32_t x197 = -1;
uint64_t x199 = 885755LLU;
int16_t x200 = -1;
uint8_t x203 = 2U;
int16_t x207 = INT16_MIN;
volatile int32_t t51 = 0;
int8_t x214 = -14;
uint64_t x216 = 256372943LLU;
uint8_t x223 = 15U;
int64_t x224 = INT64_MIN;
uint16_t x237 = 30785U;
uint16_t x245 = UINT16_MAX;
static volatile int32_t x249 = INT32_MIN;
int16_t x251 = -3187;
uint64_t x253 = UINT64_MAX;
int64_t x258 = -174LL;
uint8_t x259 = UINT8_MAX;
uint16_t x263 = 3U;
int8_t x266 = -1;
static volatile int32_t t65 = 968355136;
uint32_t x269 = UINT32_MAX;
uint64_t x271 = 44259447594904886LLU;
int16_t x272 = 45;
int64_t x278 = INT64_MAX;
uint16_t x289 = 0U;
volatile int8_t x290 = INT8_MAX;
int8_t x301 = INT8_MIN;
int64_t x304 = INT64_MIN;
uint32_t x306 = 161218U;
static uint16_t x307 = 158U;
int32_t t75 = -235651590;
int8_t x312 = INT8_MAX;
int16_t x321 = 0;
int32_t x328 = INT32_MIN;
int32_t x331 = INT32_MIN;
int64_t x335 = INT64_MIN;
int64_t x339 = 16086548LL;
static volatile int32_t x346 = INT32_MAX;
volatile int64_t x355 = -163220384683512224LL;
int16_t x361 = INT16_MAX;
static int8_t x372 = INT8_MAX;
int8_t x380 = INT8_MIN;
volatile int8_t x382 = -1;
static uint16_t x383 = 4635U;
uint64_t x386 = 3291049409LLU;
static uint64_t x387 = 30753LLU;
volatile int32_t t95 = -1;
static int16_t x390 = INT16_MIN;
int32_t t96 = 17178;
int32_t x393 = 1779;
volatile int8_t x395 = 31;
int32_t x401 = INT32_MIN;
static int8_t x405 = -1;
volatile int64_t x406 = INT64_MIN;
volatile int8_t x412 = 0;
volatile int32_t t101 = 3;
int64_t x416 = 1455LL;
volatile uint8_t x417 = UINT8_MAX;
int16_t x429 = INT16_MIN;
uint64_t x431 = 198323629069806175LLU;
static int32_t t106 = 1;
uint16_t x434 = 83U;
static uint16_t x436 = 13U;
static int16_t x443 = -1;
int8_t x449 = INT8_MIN;
volatile uint8_t x450 = UINT8_MAX;
static volatile uint16_t x454 = UINT16_MAX;
int16_t x468 = INT16_MIN;
volatile uint16_t x471 = 11124U;
static uint32_t x474 = 26017U;
int16_t x490 = 47;
int64_t x496 = INT64_MIN;
int16_t x497 = -4;
int16_t x498 = -137;
volatile int32_t t123 = -1141;
uint16_t x506 = 7494U;
int32_t t125 = 1;
int32_t t126 = 3434;
static volatile uint64_t x515 = 1634099534653878542LLU;
int64_t x517 = INT64_MIN;
static int8_t x530 = 1;
int32_t x531 = 37398;
int32_t t133 = 0;
static int64_t x542 = INT64_MIN;
volatile int16_t x544 = INT16_MIN;
static int8_t x545 = -1;
uint32_t x553 = UINT32_MAX;
int64_t x558 = INT64_MIN;
volatile uint64_t x563 = 51096077031LLU;
uint64_t x564 = UINT64_MAX;
uint32_t x573 = UINT32_MAX;
int8_t x574 = INT8_MAX;
volatile int64_t x576 = -14954LL;
int32_t t142 = 6515550;
static int32_t x583 = INT32_MAX;
int64_t x586 = -397985164858713LL;
volatile int32_t x589 = -1;
uint64_t x590 = 201598404682574780LLU;
int32_t x591 = INT32_MIN;
static volatile int64_t x600 = -14716LL;
volatile int32_t t148 = 430486669;
static int8_t x608 = 1;
static int32_t x612 = INT32_MAX;
int32_t x616 = -2493;
static int32_t x617 = INT32_MAX;
static int16_t x623 = -1;
int32_t x626 = 1;
uint16_t x638 = 21U;
int8_t x643 = 2;
int16_t x645 = -1;
int64_t x646 = -1LL;
volatile int8_t x650 = -9;
volatile int32_t t160 = -21;
volatile int32_t x653 = INT32_MIN;
int16_t x654 = INT16_MIN;
volatile uint64_t x662 = 74LLU;
int64_t x670 = -89581LL;
static uint16_t x681 = 459U;
static uint8_t x686 = 49U;
volatile int32_t x687 = 985224;
int32_t x689 = INT32_MIN;
static uint32_t x693 = UINT32_MAX;
static uint16_t x694 = 31U;
volatile uint16_t x700 = 607U;
volatile int32_t t172 = 221559;
int32_t x715 = INT32_MIN;
volatile int32_t t176 = 40778557;
volatile int8_t x726 = INT8_MIN;
int32_t x734 = INT32_MAX;
static uint64_t x735 = 32986753765LLU;
int64_t x736 = -1LL;
static int16_t x737 = INT16_MIN;
volatile int32_t t180 = 8288805;
int64_t x747 = -1LL;
static volatile int32_t t183 = 66089;
int32_t x754 = INT32_MIN;
int32_t t185 = 38880;
int32_t x766 = INT32_MAX;
volatile int32_t t187 = 2522;
uint8_t x770 = 1U;
int64_t x772 = INT64_MAX;
volatile int32_t t188 = 815008771;
volatile int32_t t189 = -263;
int32_t x778 = INT32_MIN;
static volatile int32_t t190 = 153145;
static volatile int64_t x787 = 255942LL;
int16_t x792 = INT16_MIN;
int32_t x796 = -1;
int32_t t194 = 6;


void f0(void) {
    	volatile int16_t x3 = INT16_MIN;
	int64_t x4 = 122LL;
	volatile int32_t t0 = 1836;

    t0 = ((x1%x2)<=(x3|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int16_t x6 = -1;
	int64_t x7 = INT64_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 1;

    t1 = ((x5%x6)<=(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	volatile uint8_t x11 = 2U;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -728709;

    t2 = ((x9%x10)<=(x11|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 137720546141134311LLU;
	static int32_t x16 = INT32_MIN;
	int32_t t3 = 87;

    t3 = ((x13%x14)<=(x15|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	int64_t x18 = 1958514281LL;
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = 1U;
	volatile int32_t t4 = 303363410;

    t4 = ((x17%x18)<=(x19|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x22 = INT8_MAX;
	volatile int16_t x23 = INT16_MAX;
	uint64_t x24 = UINT64_MAX;

    t5 = ((x21%x22)<=(x23|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 321511U;
	int32_t x30 = INT32_MIN;
	volatile int64_t x31 = -1LL;
	static volatile int64_t x32 = INT64_MIN;
	int32_t t6 = 25558;

    t6 = ((x29%x30)<=(x31|x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	static volatile uint64_t x35 = 36129LLU;

    t7 = ((x33%x34)<=(x35|x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -9791;
	volatile int64_t x38 = INT64_MIN;
	int32_t x39 = -108;
	uint32_t x40 = UINT32_MAX;
	int32_t t8 = -4548595;

    t8 = ((x37%x38)<=(x39|x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = -1LL;
	static int32_t x42 = -1;
	uint16_t x43 = 862U;
	static uint32_t x44 = UINT32_MAX;
	static int32_t t9 = -3108280;

    t9 = ((x41%x42)<=(x43|x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	int64_t x47 = -2775626585569668LL;
	volatile int64_t x48 = -1LL;
	volatile int32_t t10 = 27086028;

    t10 = ((x45%x46)<=(x47|x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	volatile int32_t t11 = 18;

    t11 = ((x49%x50)<=(x51|x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = INT8_MAX;
	uint64_t x56 = 99519LLU;

    t12 = ((x53%x54)<=(x55|x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x58 = UINT32_MAX;
	static volatile int64_t x59 = 24949625160LL;
	int8_t x60 = INT8_MIN;

    t13 = ((x57%x58)<=(x59|x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MAX;
	volatile int64_t x62 = INT64_MIN;
	int8_t x63 = -13;
	static uint64_t x64 = 6410452932666LLU;
	volatile int32_t t14 = 123;

    t14 = ((x61%x62)<=(x63|x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	int16_t x67 = -5866;
	int16_t x68 = 2967;

    t15 = ((x65%x66)<=(x67|x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = UINT16_MAX;
	int8_t x70 = INT8_MAX;
	volatile int8_t x71 = INT8_MAX;
	static volatile int32_t t16 = 6;

    t16 = ((x69%x70)<=(x71|x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	volatile uint64_t x74 = 1473344986350721LLU;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t17 = 671231;

    t17 = ((x73%x74)<=(x75|x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MIN;
	int32_t x78 = 30619228;
	int32_t x79 = 1;
	static int32_t t18 = 1;

    t18 = ((x77%x78)<=(x79|x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	int16_t x82 = -1;
	volatile uint64_t x83 = UINT64_MAX;
	int32_t x84 = 28662275;
	int32_t t19 = 0;

    t19 = ((x81%x82)<=(x83|x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x85 = 24U;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	volatile int64_t x88 = INT64_MIN;
	volatile int32_t t20 = 7120;

    t20 = ((x85%x86)<=(x87|x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = -28;
	int64_t x91 = -1LL;
	static int32_t x92 = 68016;

    t21 = ((x89%x90)<=(x91|x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MIN;
	static int8_t x94 = -48;
	static int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t22 = 53512147;

    t22 = ((x93%x94)<=(x95|x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -24;
	uint64_t x98 = 53354331965495562LLU;
	int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MAX;
	volatile int32_t t23 = -22556;

    t23 = ((x97%x98)<=(x99|x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x102 = UINT16_MAX;
	static uint64_t x103 = UINT64_MAX;
	static int16_t x104 = -26;

    t24 = ((x101%x102)<=(x103|x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x105 = INT64_MIN;
	int64_t x106 = 2LL;
	int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MIN;
	static int32_t t25 = 124;

    t25 = ((x105%x106)<=(x107|x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	int8_t x110 = 42;
	int64_t x111 = -953153694942516LL;
	static int32_t x112 = INT32_MAX;

    t26 = ((x109%x110)<=(x111|x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	static uint8_t x115 = 11U;
	volatile int32_t x116 = INT32_MAX;
	static int32_t t27 = 1893;

    t27 = ((x113%x114)<=(x115|x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x119 = UINT32_MAX;
	volatile int32_t t28 = -391064;

    t28 = ((x117%x118)<=(x119|x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = 0;
	uint16_t x122 = 695U;
	int64_t x124 = 8556LL;
	volatile int32_t t29 = -19;

    t29 = ((x121%x122)<=(x123|x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	volatile int16_t x126 = INT16_MIN;
	static int32_t x128 = -110470867;
	int32_t t30 = 959581922;

    t30 = ((x125%x126)<=(x127|x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = -970284827;
	int32_t x132 = -1;
	int32_t t31 = -58594;

    t31 = ((x129%x130)<=(x131|x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = UINT64_MAX;
	static int64_t x134 = INT64_MIN;
	volatile uint32_t x136 = 182U;
	int32_t t32 = -3;

    t32 = ((x133%x134)<=(x135|x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x138 = -1;
	static uint64_t x139 = UINT64_MAX;
	volatile uint64_t x140 = 840968LLU;
	int32_t t33 = 22964;

    t33 = ((x137%x138)<=(x139|x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x141 = INT8_MIN;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 2434U;

    t34 = ((x141%x142)<=(x143|x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x145 = INT16_MAX;
	uint16_t x146 = UINT16_MAX;
	static int64_t x147 = INT64_MAX;
	int32_t t35 = 10630;

    t35 = ((x145%x146)<=(x147|x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = 6441;
	volatile int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MIN;

    t36 = ((x149%x150)<=(x151|x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = 54U;
	uint8_t x155 = 49U;
	int32_t x156 = 1847457;
	int32_t t37 = 0;

    t37 = ((x153%x154)<=(x155|x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = INT32_MIN;
	uint32_t x159 = 63418738U;
	uint8_t x160 = 6U;
	int32_t t38 = -9388806;

    t38 = ((x157%x158)<=(x159|x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = INT64_MAX;
	volatile int64_t x162 = INT64_MIN;
	int8_t x163 = -42;
	int64_t x164 = 25335522311LL;
	int32_t t39 = 16021;

    t39 = ((x161%x162)<=(x163|x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x166 = -17;
	static volatile int8_t x167 = INT8_MAX;
	int32_t x168 = INT32_MIN;
	int32_t t40 = -20;

    t40 = ((x165%x166)<=(x167|x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x169 = 6033145U;
	uint64_t x170 = 114362626LLU;
	volatile uint8_t x171 = UINT8_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t41 = 1;

    t41 = ((x169%x170)<=(x171|x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x173 = 1U;
	int16_t x176 = INT16_MAX;
	volatile int32_t t42 = 6490;

    t42 = ((x173%x174)<=(x175|x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MAX;

    t43 = ((x177%x178)<=(x179|x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = -1178033253140LL;
	static int32_t x182 = 78;
	int16_t x183 = INT16_MIN;

    t44 = ((x181%x182)<=(x183|x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -1;
	static volatile int16_t x187 = INT16_MIN;
	static int32_t t45 = 59822;

    t45 = ((x185%x186)<=(x187|x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x189 = 14U;
	int32_t x190 = -29044104;
	int32_t x191 = INT32_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t46 = -7;

    t46 = ((x189%x190)<=(x191|x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x193 = 137507446168LLU;
	uint64_t x194 = 851507089LLU;
	uint8_t x195 = 70U;
	int16_t x196 = -1;

    t47 = ((x193%x194)<=(x195|x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x198 = UINT32_MAX;
	volatile int32_t t48 = 47830161;

    t48 = ((x197%x198)<=(x199|x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x201 = UINT16_MAX;
	int16_t x202 = -67;
	uint64_t x204 = 8174959LLU;
	static volatile int32_t t49 = 19833376;

    t49 = ((x201%x202)<=(x203|x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x205 = INT32_MAX;
	uint64_t x206 = 3582LLU;
	static volatile int64_t x208 = -1LL;
	static volatile int32_t t50 = -181394648;

    t50 = ((x205%x206)<=(x207|x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = -1;
	static int16_t x210 = INT16_MIN;
	volatile int16_t x211 = 4083;
	volatile int8_t x212 = INT8_MIN;

    t51 = ((x209%x210)<=(x211|x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MAX;
	int16_t x215 = 2;
	int32_t t52 = -5;

    t52 = ((x213%x214)<=(x215|x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = INT32_MAX;
	static int16_t x218 = INT16_MIN;
	static int16_t x219 = 1;
	int8_t x220 = INT8_MAX;
	int32_t t53 = -7578;

    t53 = ((x217%x218)<=(x219|x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = 204U;
	int64_t x222 = -1304421565264375159LL;
	volatile int32_t t54 = -640349;

    t54 = ((x221%x222)<=(x223|x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 12U;
	int32_t x226 = 1395142;
	volatile int8_t x227 = -1;
	int32_t x228 = INT32_MIN;
	int32_t t55 = -139;

    t55 = ((x225%x226)<=(x227|x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x229 = INT8_MIN;
	static uint64_t x230 = UINT64_MAX;
	int16_t x231 = -1;
	uint32_t x232 = 123598377U;
	int32_t t56 = -1775;

    t56 = ((x229%x230)<=(x231|x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MAX;
	static uint32_t x235 = 890843422U;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t57 = -14;

    t57 = ((x233%x234)<=(x235|x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x238 = INT64_MAX;
	int16_t x239 = INT16_MAX;
	uint32_t x240 = 290838159U;
	int32_t t58 = 1359656;

    t58 = ((x237%x238)<=(x239|x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x241 = INT64_MIN;
	volatile int32_t x242 = 3;
	static int8_t x243 = INT8_MAX;
	static int8_t x244 = INT8_MIN;
	static int32_t t59 = -327;

    t59 = ((x241%x242)<=(x243|x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x246 = UINT8_MAX;
	volatile int32_t x247 = INT32_MAX;
	static volatile int8_t x248 = INT8_MAX;
	int32_t t60 = 14695326;

    t60 = ((x245%x246)<=(x247|x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x250 = UINT16_MAX;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t61 = -231;

    t61 = ((x249%x250)<=(x251|x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x254 = 2367071567713LLU;
	uint32_t x255 = 30U;
	uint64_t x256 = 529505333240473643LLU;
	static volatile int32_t t62 = -676;

    t62 = ((x253%x254)<=(x255|x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x257 = INT64_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t63 = -52;

    t63 = ((x257%x258)<=(x259|x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x261 = UINT16_MAX;
	static uint16_t x262 = 9U;
	static int16_t x264 = INT16_MIN;
	int32_t t64 = -37856;

    t64 = ((x261%x262)<=(x263|x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 7589354674434063LLU;
	int32_t x267 = INT32_MIN;
	volatile int16_t x268 = -11792;

    t65 = ((x265%x266)<=(x267|x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x270 = 51;
	static volatile int32_t t66 = -253439;

    t66 = ((x269%x270)<=(x271|x272));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x273 = 5928375;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = 3038829761257654LL;
	uint8_t x276 = 0U;
	int32_t t67 = -40283;

    t67 = ((x273%x274)<=(x275|x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = -6133;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = 8184U;
	volatile int32_t t68 = -58;

    t68 = ((x277%x278)<=(x279|x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x281 = INT8_MIN;
	uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 120012U;
	static int32_t x284 = INT32_MIN;
	int32_t t69 = -3;

    t69 = ((x281%x282)<=(x283|x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x285 = 19U;
	int8_t x286 = 39;
	int64_t x287 = INT64_MIN;
	static uint64_t x288 = 4LLU;
	volatile int32_t t70 = -2;

    t70 = ((x285%x286)<=(x287|x288));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x291 = 3958;
	int64_t x292 = INT64_MAX;
	int32_t t71 = -29285;

    t71 = ((x289%x290)<=(x291|x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = 11;
	static int32_t x294 = INT32_MIN;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = -1185130;
	static volatile int32_t t72 = -8;

    t72 = ((x293%x294)<=(x295|x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = 3510U;
	int16_t x298 = INT16_MIN;
	volatile uint8_t x299 = 1U;
	int16_t x300 = INT16_MAX;
	volatile int32_t t73 = 393892179;

    t73 = ((x297%x298)<=(x299|x300));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x302 = -1;
	static int16_t x303 = -1;
	int32_t t74 = -28661808;

    t74 = ((x301%x302)<=(x303|x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x305 = INT8_MIN;
	static int16_t x308 = INT16_MIN;

    t75 = ((x305%x306)<=(x307|x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	static int32_t x311 = INT32_MAX;
	volatile int32_t t76 = 0;

    t76 = ((x309%x310)<=(x311|x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t77 = -2336;

    t77 = ((x313%x314)<=(x315|x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x317 = INT64_MAX;
	static uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = 156U;
	volatile int32_t t78 = 804;

    t78 = ((x317%x318)<=(x319|x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x322 = -1LL;
	volatile uint64_t x323 = UINT64_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	int32_t t79 = 2699047;

    t79 = ((x321%x322)<=(x323|x324));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = INT8_MIN;
	static volatile uint64_t x326 = 16LLU;
	static int16_t x327 = -34;
	volatile int32_t t80 = 6987055;

    t80 = ((x325%x326)<=(x327|x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MAX;
	int32_t x332 = 247468;
	int32_t t81 = -1;

    t81 = ((x329%x330)<=(x331|x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x333 = 5U;
	int64_t x334 = INT64_MIN;
	volatile uint16_t x336 = 57U;
	volatile int32_t t82 = 121046414;

    t82 = ((x333%x334)<=(x335|x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = -1;
	int16_t x338 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t83 = 521;

    t83 = ((x337%x338)<=(x339|x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x341 = INT64_MAX;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	int32_t t84 = -24405;

    t84 = ((x341%x342)<=(x343|x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x345 = INT64_MIN;
	int8_t x347 = INT8_MAX;
	uint16_t x348 = UINT16_MAX;
	int32_t t85 = 5133;

    t85 = ((x345%x346)<=(x347|x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x349 = INT16_MAX;
	int16_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int64_t x352 = -243199LL;
	int32_t t86 = 31783771;

    t86 = ((x349%x350)<=(x351|x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x353 = UINT8_MAX;
	int32_t x354 = INT32_MIN;
	static int16_t x356 = -50;
	int32_t t87 = 106;

    t87 = ((x353%x354)<=(x355|x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x357 = -1LL;
	uint64_t x358 = UINT64_MAX;
	int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t88 = -87565998;

    t88 = ((x357%x358)<=(x359|x360));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x362 = INT64_MAX;
	volatile uint64_t x363 = 16711267766LLU;
	volatile int32_t x364 = INT32_MIN;
	int32_t t89 = 2710;

    t89 = ((x361%x362)<=(x363|x364));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x365 = UINT8_MAX;
	static uint64_t x366 = UINT64_MAX;
	static uint16_t x367 = 2U;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t90 = -1;

    t90 = ((x365%x366)<=(x367|x368));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MIN;
	volatile int16_t x370 = INT16_MIN;
	uint64_t x371 = 24070429882060LLU;
	volatile int32_t t91 = 546340312;

    t91 = ((x369%x370)<=(x371|x372));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = -79680453LL;
	volatile uint8_t x374 = 3U;
	uint64_t x375 = 11LLU;
	uint64_t x376 = 206050975567946383LLU;
	int32_t t92 = -25219413;

    t92 = ((x373%x374)<=(x375|x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x377 = -1LL;
	volatile int32_t x378 = -214;
	uint64_t x379 = 55052193286LLU;
	int32_t t93 = -104876;

    t93 = ((x377%x378)<=(x379|x380));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x381 = 9639U;
	uint64_t x384 = 283902281480001984LLU;
	static int32_t t94 = -32093517;

    t94 = ((x381%x382)<=(x383|x384));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = INT64_MAX;
	int16_t x388 = 2;

    t95 = ((x385%x386)<=(x387|x388));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x389 = INT8_MAX;
	uint16_t x391 = 1853U;
	int16_t x392 = INT16_MIN;

    t96 = ((x389%x390)<=(x391|x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x394 = -1LL;
	int64_t x396 = -1210755617801910100LL;
	int32_t t97 = 773;

    t97 = ((x393%x394)<=(x395|x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MAX;
	static volatile int32_t t98 = -423;

    t98 = ((x397%x398)<=(x399|x400));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x402 = UINT8_MAX;
	static int16_t x403 = INT16_MAX;
	uint32_t x404 = 895U;
	volatile int32_t t99 = -267119902;

    t99 = ((x401%x402)<=(x403|x404));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	static volatile int32_t t100 = 218;

    t100 = ((x405%x406)<=(x407|x408));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x409 = INT8_MAX;
	uint64_t x410 = 8615439LLU;
	int16_t x411 = INT16_MIN;

    t101 = ((x409%x410)<=(x411|x412));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x413 = INT32_MIN;
	uint16_t x414 = 4U;
	uint8_t x415 = 29U;
	volatile int32_t t102 = 734;

    t102 = ((x413%x414)<=(x415|x416));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x418 = INT32_MIN;
	static uint16_t x419 = 0U;
	int16_t x420 = 9;
	int32_t t103 = 1770;

    t103 = ((x417%x418)<=(x419|x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x421 = 10757U;
	int64_t x422 = -5204891046718641LL;
	int16_t x423 = 218;
	int64_t x424 = 2601LL;
	int32_t t104 = -1;

    t104 = ((x421%x422)<=(x423|x424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x425 = UINT64_MAX;
	uint64_t x426 = 100LLU;
	int32_t x427 = -1;
	uint64_t x428 = 157302814556271617LLU;
	static volatile int32_t t105 = 21;

    t105 = ((x425%x426)<=(x427|x428));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x430 = INT64_MAX;
	volatile int64_t x432 = INT64_MIN;

    t106 = ((x429%x430)<=(x431|x432));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = -3;
	int16_t x435 = 1987;
	static volatile int32_t t107 = 4808;

    t107 = ((x433%x434)<=(x435|x436));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x437 = INT8_MAX;
	int32_t x438 = INT32_MAX;
	int64_t x439 = INT64_MAX;
	static uint8_t x440 = 15U;
	int32_t t108 = -89572;

    t108 = ((x437%x438)<=(x439|x440));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x441 = 124U;
	volatile int8_t x442 = -1;
	int16_t x444 = INT16_MIN;
	int32_t t109 = -38770;

    t109 = ((x441%x442)<=(x443|x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x445 = -1;
	int32_t x446 = INT32_MIN;
	int16_t x447 = -1;
	int16_t x448 = INT16_MAX;
	int32_t t110 = 48;

    t110 = ((x445%x446)<=(x447|x448));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x451 = -18;
	volatile uint64_t x452 = UINT64_MAX;
	int32_t t111 = 11030224;

    t111 = ((x449%x450)<=(x451|x452));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x453 = 2U;
	uint32_t x455 = UINT32_MAX;
	int16_t x456 = INT16_MAX;
	int32_t t112 = -370;

    t112 = ((x453%x454)<=(x455|x456));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x457 = 169871U;
	int8_t x458 = 7;
	int16_t x459 = INT16_MIN;
	int32_t x460 = INT32_MIN;
	int32_t t113 = 483862237;

    t113 = ((x457%x458)<=(x459|x460));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = INT8_MAX;
	volatile uint32_t x462 = 198U;
	int64_t x463 = -7299626832LL;
	uint16_t x464 = 14866U;
	volatile int32_t t114 = 1971283;

    t114 = ((x461%x462)<=(x463|x464));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x465 = 1050LL;
	volatile int64_t x466 = -1LL;
	int64_t x467 = INT64_MIN;
	int32_t t115 = 36137139;

    t115 = ((x465%x466)<=(x467|x468));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x469 = 3530;
	volatile int32_t x470 = INT32_MIN;
	volatile int64_t x472 = INT64_MIN;
	volatile int32_t t116 = -8;

    t116 = ((x469%x470)<=(x471|x472));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x473 = -26;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t117 = -71925357;

    t117 = ((x473%x474)<=(x475|x476));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x477 = INT16_MAX;
	volatile int16_t x478 = -160;
	static int64_t x479 = INT64_MIN;
	volatile int32_t x480 = INT32_MIN;
	volatile int32_t t118 = -932239265;

    t118 = ((x477%x478)<=(x479|x480));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x481 = 0U;
	static int64_t x482 = 9118LL;
	int8_t x483 = INT8_MIN;
	int16_t x484 = INT16_MIN;
	int32_t t119 = 3674;

    t119 = ((x481%x482)<=(x483|x484));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x485 = 1166U;
	static int8_t x486 = -3;
	int32_t x487 = -5886;
	static int8_t x488 = INT8_MAX;
	static int32_t t120 = 315;

    t120 = ((x485%x486)<=(x487|x488));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x489 = INT16_MIN;
	int32_t x491 = INT32_MIN;
	int32_t x492 = 36022424;
	volatile int32_t t121 = 224159;

    t121 = ((x489%x490)<=(x491|x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x493 = 38905781000244694LLU;
	int64_t x494 = INT64_MAX;
	static int16_t x495 = INT16_MIN;
	int32_t t122 = 240;

    t122 = ((x493%x494)<=(x495|x496));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x499 = INT16_MIN;
	static volatile int32_t x500 = -1262490;

    t123 = ((x497%x498)<=(x499|x500));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x501 = UINT64_MAX;
	int8_t x502 = -2;
	int8_t x503 = INT8_MAX;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t124 = -77653;

    t124 = ((x501%x502)<=(x503|x504));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = -1;
	int16_t x507 = 469;
	int32_t x508 = INT32_MAX;

    t125 = ((x505%x506)<=(x507|x508));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x509 = 7;
	int64_t x510 = 420423LL;
	static int16_t x511 = -11;
	int16_t x512 = -1;

    t126 = ((x509%x510)<=(x511|x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x513 = -1LL;
	int8_t x514 = -46;
	static volatile uint32_t x516 = UINT32_MAX;
	volatile int32_t t127 = 62;

    t127 = ((x513%x514)<=(x515|x516));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x518 = 2U;
	volatile int64_t x519 = -11LL;
	static uint64_t x520 = 75541LLU;
	volatile int32_t t128 = -138243;

    t128 = ((x517%x518)<=(x519|x520));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x521 = 121U;
	static uint16_t x522 = UINT16_MAX;
	int64_t x523 = -1LL;
	static int32_t x524 = -15;
	int32_t t129 = -108556;

    t129 = ((x521%x522)<=(x523|x524));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x525 = 11;
	uint8_t x526 = 27U;
	volatile uint64_t x527 = UINT64_MAX;
	int8_t x528 = INT8_MAX;
	int32_t t130 = 0;

    t130 = ((x525%x526)<=(x527|x528));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x529 = INT64_MIN;
	int16_t x532 = INT16_MAX;
	int32_t t131 = 983;

    t131 = ((x529%x530)<=(x531|x532));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x533 = -1;
	volatile int64_t x534 = -1LL;
	int64_t x535 = -54780744LL;
	int32_t x536 = INT32_MIN;
	static int32_t t132 = -1900871;

    t132 = ((x533%x534)<=(x535|x536));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = INT64_MIN;
	static volatile int64_t x539 = 0LL;
	uint8_t x540 = 42U;

    t133 = ((x537%x538)<=(x539|x540));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x541 = 5317538U;
	volatile uint64_t x543 = 29618LLU;
	int32_t t134 = -1006;

    t134 = ((x541%x542)<=(x543|x544));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x546 = INT8_MIN;
	uint32_t x547 = UINT32_MAX;
	volatile int64_t x548 = INT64_MAX;
	int32_t t135 = 1;

    t135 = ((x545%x546)<=(x547|x548));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x549 = INT64_MAX;
	static uint16_t x550 = 53U;
	uint32_t x551 = 1130394750U;
	static int32_t x552 = -1;
	volatile int32_t t136 = -16215;

    t136 = ((x549%x550)<=(x551|x552));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x554 = INT8_MIN;
	uint16_t x555 = 2907U;
	int8_t x556 = 1;
	int32_t t137 = -648;

    t137 = ((x553%x554)<=(x555|x556));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x557 = 12U;
	volatile uint8_t x559 = UINT8_MAX;
	volatile int8_t x560 = INT8_MIN;
	int32_t t138 = 626244846;

    t138 = ((x557%x558)<=(x559|x560));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x561 = INT16_MAX;
	uint16_t x562 = UINT16_MAX;
	int32_t t139 = -1294079;

    t139 = ((x561%x562)<=(x563|x564));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x565 = INT32_MIN;
	int8_t x566 = -1;
	static volatile int16_t x567 = 230;
	int32_t x568 = INT32_MIN;
	volatile int32_t t140 = 0;

    t140 = ((x565%x566)<=(x567|x568));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x569 = -1;
	int64_t x570 = INT64_MIN;
	int64_t x571 = INT64_MIN;
	volatile uint16_t x572 = 186U;
	int32_t t141 = -1;

    t141 = ((x569%x570)<=(x571|x572));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x575 = 6515010U;

    t142 = ((x573%x574)<=(x575|x576));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x577 = -1LL;
	int32_t x578 = INT32_MIN;
	volatile uint64_t x579 = 1695388008680940875LLU;
	int32_t x580 = -2082055;
	volatile int32_t t143 = 30;

    t143 = ((x577%x578)<=(x579|x580));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x581 = INT32_MIN;
	int32_t x582 = -1;
	volatile int8_t x584 = 1;
	static volatile int32_t t144 = -2372;

    t144 = ((x581%x582)<=(x583|x584));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x585 = UINT8_MAX;
	uint16_t x587 = UINT16_MAX;
	volatile uint64_t x588 = 73LLU;
	static int32_t t145 = -916408494;

    t145 = ((x585%x586)<=(x587|x588));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x592 = 1;
	int32_t t146 = 4098112;

    t146 = ((x589%x590)<=(x591|x592));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x597 = -1;
	uint32_t x598 = UINT32_MAX;
	uint32_t x599 = UINT32_MAX;
	volatile int32_t t147 = -165052;

    t147 = ((x597%x598)<=(x599|x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x601 = 55144676U;
	uint16_t x602 = UINT16_MAX;
	volatile int64_t x603 = 395003LL;
	static volatile uint16_t x604 = 58U;

    t148 = ((x601%x602)<=(x603|x604));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x605 = UINT64_MAX;
	int16_t x606 = 1084;
	int16_t x607 = INT16_MAX;
	static int32_t t149 = -37636;

    t149 = ((x605%x606)<=(x607|x608));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile int64_t x610 = -1LL;
	static int16_t x611 = -3;
	int32_t t150 = -1232309;

    t150 = ((x609%x610)<=(x611|x612));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x613 = INT32_MIN;
	uint8_t x614 = 1U;
	int8_t x615 = INT8_MAX;
	int32_t t151 = -68;

    t151 = ((x613%x614)<=(x615|x616));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x618 = 34U;
	volatile int8_t x619 = -2;
	int32_t x620 = INT32_MIN;
	int32_t t152 = 0;

    t152 = ((x617%x618)<=(x619|x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x621 = INT64_MAX;
	uint16_t x622 = UINT16_MAX;
	uint32_t x624 = 17284U;
	int32_t t153 = 1;

    t153 = ((x621%x622)<=(x623|x624));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x625 = 1650;
	int16_t x627 = -1;
	int64_t x628 = INT64_MIN;
	volatile int32_t t154 = -466716453;

    t154 = ((x625%x626)<=(x627|x628));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x629 = 73684227U;
	uint16_t x630 = 1U;
	uint16_t x631 = 7U;
	int8_t x632 = 3;
	int32_t t155 = 53682;

    t155 = ((x629%x630)<=(x631|x632));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x633 = -2;
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = INT32_MIN;
	uint8_t x636 = UINT8_MAX;
	int32_t t156 = -100604;

    t156 = ((x633%x634)<=(x635|x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x637 = INT32_MIN;
	int8_t x639 = INT8_MIN;
	uint64_t x640 = 57LLU;
	volatile int32_t t157 = -14646213;

    t157 = ((x637%x638)<=(x639|x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x641 = 55;
	int8_t x642 = INT8_MIN;
	static volatile int8_t x644 = -1;
	int32_t t158 = -55075;

    t158 = ((x641%x642)<=(x643|x644));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x647 = 14U;
	static volatile int16_t x648 = INT16_MIN;
	volatile int32_t t159 = -10126248;

    t159 = ((x645%x646)<=(x647|x648));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	volatile int32_t x651 = INT32_MAX;
	int16_t x652 = INT16_MIN;

    t160 = ((x649%x650)<=(x651|x652));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x655 = INT32_MIN;
	volatile int8_t x656 = INT8_MIN;
	int32_t t161 = -616564676;

    t161 = ((x653%x654)<=(x655|x656));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x657 = UINT8_MAX;
	uint32_t x658 = 32158845U;
	int64_t x659 = 935031900LL;
	static volatile uint16_t x660 = 1677U;
	int32_t t162 = 4;

    t162 = ((x657%x658)<=(x659|x660));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x661 = 5LLU;
	int16_t x663 = 619;
	int64_t x664 = 24761581865LL;
	int32_t t163 = -7560;

    t163 = ((x661%x662)<=(x663|x664));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x665 = INT64_MAX;
	volatile int16_t x666 = INT16_MIN;
	int16_t x667 = INT16_MIN;
	volatile int64_t x668 = 114615598429723LL;
	volatile int32_t t164 = 966493;

    t164 = ((x665%x666)<=(x667|x668));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = -18;
	int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MIN;
	static int32_t t165 = 3245517;

    t165 = ((x669%x670)<=(x671|x672));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x673 = 5174376134LL;
	static int32_t x674 = 509630;
	static int16_t x675 = 1563;
	int16_t x676 = INT16_MAX;
	volatile int32_t t166 = 10337427;

    t166 = ((x673%x674)<=(x675|x676));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x677 = INT16_MIN;
	int32_t x678 = INT32_MAX;
	uint32_t x679 = 175199U;
	int64_t x680 = INT64_MIN;
	int32_t t167 = -262334456;

    t167 = ((x677%x678)<=(x679|x680));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x682 = INT32_MIN;
	int64_t x683 = INT64_MIN;
	int8_t x684 = INT8_MIN;
	int32_t t168 = -50164547;

    t168 = ((x681%x682)<=(x683|x684));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x685 = -1;
	static volatile uint16_t x688 = 27381U;
	static volatile int32_t t169 = -10321953;

    t169 = ((x685%x686)<=(x687|x688));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x690 = UINT16_MAX;
	static volatile uint32_t x691 = 11189U;
	int16_t x692 = INT16_MAX;
	int32_t t170 = -1;

    t170 = ((x689%x690)<=(x691|x692));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x695 = 28182691LL;
	int32_t x696 = -2727;
	static int32_t t171 = 44;

    t171 = ((x693%x694)<=(x695|x696));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x697 = INT16_MIN;
	int32_t x698 = -317313;
	static volatile int32_t x699 = -1;

    t172 = ((x697%x698)<=(x699|x700));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x701 = UINT16_MAX;
	int64_t x702 = INT64_MIN;
	int16_t x703 = -311;
	int16_t x704 = -1;
	int32_t t173 = 510434970;

    t173 = ((x701%x702)<=(x703|x704));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x705 = 789U;
	volatile uint32_t x706 = 566934587U;
	int16_t x707 = 2;
	int64_t x708 = 137314971112062LL;
	int32_t t174 = 0;

    t174 = ((x705%x706)<=(x707|x708));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x713 = 870;
	volatile int32_t x714 = -1;
	uint32_t x716 = UINT32_MAX;
	int32_t t175 = -3634454;

    t175 = ((x713%x714)<=(x715|x716));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x721 = INT32_MIN;
	static int16_t x722 = 1;
	int64_t x723 = INT64_MIN;
	int16_t x724 = 98;

    t176 = ((x721%x722)<=(x723|x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x725 = 13744U;
	uint16_t x727 = 87U;
	int16_t x728 = 0;
	volatile int32_t t177 = 592;

    t177 = ((x725%x726)<=(x727|x728));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x729 = INT32_MAX;
	int32_t x730 = INT32_MIN;
	int32_t x731 = INT32_MIN;
	int64_t x732 = INT64_MIN;
	static volatile int32_t t178 = -1171899;

    t178 = ((x729%x730)<=(x731|x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x733 = 7;
	int32_t t179 = -82620309;

    t179 = ((x733%x734)<=(x735|x736));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x738 = 79405479U;
	uint32_t x739 = 106405137U;
	uint64_t x740 = 2590076418LLU;

    t180 = ((x737%x738)<=(x739|x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x741 = 5784U;
	uint64_t x742 = UINT64_MAX;
	volatile int32_t x743 = 1;
	int8_t x744 = INT8_MAX;
	volatile int32_t t181 = 38534551;

    t181 = ((x741%x742)<=(x743|x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x745 = INT32_MIN;
	int16_t x746 = -1;
	static int32_t x748 = -1;
	static int32_t t182 = 1;

    t182 = ((x745%x746)<=(x747|x748));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x749 = INT16_MAX;
	int64_t x750 = INT64_MIN;
	int32_t x751 = 6689;
	uint16_t x752 = UINT16_MAX;

    t183 = ((x749%x750)<=(x751|x752));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x753 = INT32_MIN;
	static uint32_t x755 = UINT32_MAX;
	uint8_t x756 = 25U;
	volatile int32_t t184 = -6;

    t184 = ((x753%x754)<=(x755|x756));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x757 = INT32_MIN;
	volatile int16_t x758 = -1;
	uint64_t x759 = 105317539LLU;
	uint32_t x760 = UINT32_MAX;

    t185 = ((x757%x758)<=(x759|x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x761 = 1222691U;
	int16_t x762 = -13;
	int8_t x763 = -1;
	uint64_t x764 = UINT64_MAX;
	int32_t t186 = 15;

    t186 = ((x761%x762)<=(x763|x764));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x765 = INT16_MIN;
	uint32_t x767 = UINT32_MAX;
	int16_t x768 = INT16_MIN;

    t187 = ((x765%x766)<=(x767|x768));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x769 = -1;
	static int32_t x771 = -2885;

    t188 = ((x769%x770)<=(x771|x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x773 = INT64_MIN;
	volatile int32_t x774 = -1;
	volatile uint8_t x775 = 4U;
	int64_t x776 = INT64_MIN;

    t189 = ((x773%x774)<=(x775|x776));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x777 = -1;
	static int32_t x779 = -1;
	static int32_t x780 = INT32_MIN;

    t190 = ((x777%x778)<=(x779|x780));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x781 = -1;
	uint64_t x782 = 6991467LLU;
	volatile int16_t x783 = -57;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t191 = -3;

    t191 = ((x781%x782)<=(x783|x784));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = 1;
	volatile uint32_t x786 = 7390U;
	int8_t x788 = 1;
	volatile int32_t t192 = -51133;

    t192 = ((x785%x786)<=(x787|x788));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x789 = 27;
	static int8_t x790 = -1;
	static uint32_t x791 = UINT32_MAX;
	volatile int32_t t193 = -1828;

    t193 = ((x789%x790)<=(x791|x792));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x793 = 1;
	static int8_t x794 = INT8_MIN;
	int16_t x795 = -1;

    t194 = ((x793%x794)<=(x795|x796));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x797 = INT64_MIN;
	uint64_t x798 = UINT64_MAX;
	int64_t x799 = -58237431664439780LL;
	int64_t x800 = -885615113972LL;
	volatile int32_t t195 = -12105750;

    t195 = ((x797%x798)<=(x799|x800));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x801 = INT32_MIN;
	int32_t x802 = INT32_MIN;
	int64_t x803 = INT64_MIN;
	int8_t x804 = 26;
	int32_t t196 = 59;

    t196 = ((x801%x802)<=(x803|x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x805 = -15LL;
	static int32_t x806 = -1;
	static int32_t x807 = -21856500;
	int64_t x808 = 5485226366009380LL;
	static int32_t t197 = -4;

    t197 = ((x805%x806)<=(x807|x808));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x809 = UINT8_MAX;
	static int8_t x810 = 46;
	static volatile int16_t x811 = -24;
	uint8_t x812 = 105U;
	volatile int32_t t198 = 189;

    t198 = ((x809%x810)<=(x811|x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x813 = 1843704128U;
	static int8_t x814 = INT8_MIN;
	int8_t x815 = INT8_MAX;
	volatile uint32_t x816 = UINT32_MAX;
	int32_t t199 = -50413;

    t199 = ((x813%x814)<=(x815|x816));

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

