
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

static int16_t x1 = 0;
int64_t x5 = INT64_MAX;
int32_t x6 = INT32_MIN;
uint16_t x7 = UINT16_MAX;
uint64_t x11 = 14419412889770455LLU;
uint32_t x12 = 1U;
volatile int32_t t2 = 415;
volatile uint8_t x15 = UINT8_MAX;
static int64_t x21 = INT64_MAX;
volatile uint8_t x24 = 108U;
static int32_t t5 = -445817826;
int16_t x25 = -1;
volatile uint8_t x26 = 44U;
uint16_t x28 = 14589U;
static volatile int32_t t6 = -339844969;
uint8_t x32 = 15U;
int32_t t7 = 0;
int64_t x34 = 28630310798LL;
int16_t x35 = INT16_MIN;
volatile int32_t t8 = 11320194;
uint32_t x38 = 363724U;
uint32_t x41 = 1041U;
volatile uint8_t x47 = 4U;
volatile int32_t t12 = 7751;
uint8_t x57 = 12U;
int16_t x61 = -771;
int32_t x64 = INT32_MIN;
uint64_t x67 = UINT64_MAX;
static volatile int32_t t17 = -45559302;
volatile int32_t x74 = -1;
static int16_t x78 = INT16_MIN;
volatile int32_t x81 = INT32_MIN;
static volatile int32_t t20 = 14;
volatile int32_t x91 = INT32_MIN;
int32_t x97 = 11;
static int8_t x98 = 0;
static int16_t x102 = -1;
int32_t t25 = -229065134;
volatile int8_t x108 = INT8_MAX;
int64_t x109 = 1LL;
int64_t x112 = INT64_MIN;
static uint8_t x113 = UINT8_MAX;
int64_t x119 = -1LL;
int64_t x122 = INT64_MIN;
static int8_t x127 = 2;
volatile int32_t t31 = -6433;
int16_t x131 = -1010;
uint16_t x134 = 55U;
static int64_t x136 = INT64_MAX;
volatile int32_t t33 = 8965;
int32_t x146 = INT32_MIN;
static volatile int32_t t37 = 56842415;
int8_t x155 = INT8_MIN;
static volatile int64_t x158 = 3740595948LL;
volatile int16_t x164 = INT16_MIN;
volatile int32_t x167 = -1;
static volatile int16_t x168 = INT16_MAX;
static int8_t x171 = -2;
int32_t t42 = 3;
static int8_t x174 = 3;
uint16_t x177 = 1813U;
int16_t x178 = 9;
static volatile int32_t x179 = INT32_MIN;
volatile int32_t t44 = 6211496;
volatile int32_t x183 = INT32_MIN;
int16_t x184 = INT16_MIN;
static uint64_t x187 = 23044LLU;
uint8_t x190 = 113U;
static int32_t x200 = INT32_MIN;
int32_t t52 = 286088477;
uint32_t x213 = 713316547U;
int32_t t54 = 453039479;
int64_t x228 = INT64_MIN;
uint64_t x230 = UINT64_MAX;
volatile int32_t t57 = -843;
volatile uint64_t x236 = 961408380789772LLU;
int64_t x238 = -31826228883177LL;
int16_t x240 = -1;
int32_t t59 = -1732818;
uint64_t x245 = 1790143159544441907LLU;
static int32_t x260 = INT32_MIN;
volatile int32_t t65 = -256991;
volatile int32_t t66 = -15;
static int64_t x271 = INT64_MIN;
int64_t x279 = INT64_MIN;
static volatile int32_t x281 = INT32_MIN;
int16_t x284 = -1;
static int8_t x285 = INT8_MAX;
volatile int32_t t72 = -826;
int64_t x293 = INT64_MIN;
int32_t x299 = INT32_MIN;
static int16_t x300 = INT16_MAX;
volatile int8_t x301 = INT8_MIN;
int32_t t75 = 1457;
int32_t x310 = INT32_MAX;
int8_t x316 = -23;
int32_t x324 = 6873339;
int8_t x328 = -1;
volatile int64_t x331 = INT64_MIN;
uint64_t x332 = 4057961836833786LLU;
volatile int32_t t82 = 0;
static int64_t x338 = -1365LL;
static int32_t x339 = -1;
int32_t x342 = INT32_MAX;
static int8_t x354 = INT8_MIN;
static uint32_t x362 = UINT32_MAX;
int32_t x364 = -1;
int32_t x371 = -1;
int32_t t92 = 1;
volatile int8_t x373 = INT8_MIN;
volatile uint8_t x376 = UINT8_MAX;
volatile uint8_t x385 = 0U;
int32_t x388 = INT32_MIN;
int8_t x393 = INT8_MIN;
static volatile int32_t t98 = 0;
int32_t x405 = INT32_MIN;
uint16_t x406 = 2354U;
int8_t x410 = 8;
static int8_t x411 = INT8_MIN;
static int16_t x414 = -1;
int8_t x420 = -19;
int16_t x425 = -12246;
uint32_t x430 = UINT32_MAX;
int8_t x439 = -22;
volatile int64_t x440 = INT64_MAX;
volatile int32_t t110 = 241;
int8_t x451 = -24;
int32_t x458 = INT32_MAX;
volatile int32_t t115 = 50;
static int32_t x471 = INT32_MIN;
static volatile int32_t t117 = 1046550;
volatile int8_t x473 = INT8_MIN;
static volatile int64_t x474 = INT64_MIN;
static int16_t x481 = -176;
uint32_t x486 = 37801U;
volatile int32_t t125 = -83;
uint64_t x506 = 546110357LLU;
volatile uint64_t x507 = UINT64_MAX;
int32_t x511 = -842756;
int32_t x512 = -42870;
static volatile int32_t t127 = -620363;
int32_t x514 = INT32_MIN;
int32_t t129 = -7;
int8_t x525 = -1;
volatile int16_t x542 = INT16_MAX;
int32_t x547 = INT32_MIN;
static int32_t t136 = 22;
int16_t x552 = 3;
int16_t x553 = -4;
int8_t x557 = INT8_MAX;
int32_t t139 = 110961;
int8_t x562 = INT8_MAX;
uint16_t x563 = 4337U;
static int32_t x570 = INT32_MAX;
int32_t x577 = INT32_MAX;
uint32_t x578 = 2U;
int16_t x585 = -1;
int32_t x586 = -3;
int32_t x598 = -645;
uint32_t x599 = 1365U;
int32_t x600 = -36340854;
int32_t x601 = -1752591;
uint64_t x604 = 298889268863LLU;
uint8_t x606 = 14U;
volatile int16_t x607 = INT16_MIN;
int64_t x609 = -50167491679LL;
static volatile int32_t t152 = -15;
uint8_t x613 = 0U;
static uint8_t x615 = 1U;
static uint16_t x635 = 2U;
volatile int32_t x639 = INT32_MIN;
static volatile int32_t x641 = INT32_MIN;
int32_t t160 = 33237;
int16_t x656 = INT16_MAX;
int16_t x657 = INT16_MIN;
int32_t x659 = INT32_MIN;
volatile int64_t x662 = -1LL;
volatile uint16_t x664 = UINT16_MAX;
int32_t x666 = INT32_MAX;
int64_t x671 = -1LL;
uint32_t x679 = 418U;
volatile int32_t t170 = 369795929;
int16_t x689 = INT16_MIN;
uint64_t x690 = 223672LLU;
volatile int32_t t175 = 2680;
int16_t x705 = INT16_MAX;
uint16_t x707 = 2U;
int16_t x710 = -1;
int64_t x715 = 160366158LL;
int64_t x716 = -1088111623071LL;
int8_t x717 = -1;
volatile int32_t t179 = 131792580;
volatile uint64_t x724 = 59910369606LLU;
volatile int32_t t180 = -7;
int32_t x726 = INT32_MIN;
volatile uint64_t x727 = 8600389878355LLU;
volatile int8_t x733 = -32;
volatile int32_t t186 = -2;
static int16_t x755 = -1;
static int32_t t189 = -25283;
static int16_t x763 = 445;
int64_t x766 = -14852LL;
uint64_t x770 = UINT64_MAX;
int16_t x777 = INT16_MIN;
int64_t x792 = -237098LL;
int16_t x799 = INT16_MAX;
int64_t x800 = INT64_MAX;
volatile int32_t t199 = -2627285;


void f0(void) {
    	uint16_t x2 = 29827U;
	uint16_t x3 = 96U;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 124407;

    t0 = (((x1<=x2)&x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -3921293;

    t1 = (((x5<=x6)&x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 4753378LLU;
	int8_t x10 = -1;

    t2 = (((x9<=x10)&x11)==x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -122;
	int16_t x14 = INT16_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -511823299;

    t3 = (((x13<=x14)&x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 58;
	volatile int64_t x18 = INT64_MIN;
	volatile uint16_t x19 = 0U;
	int64_t x20 = -10813892237293838LL;
	static volatile int32_t t4 = 257017;

    t4 = (((x17<=x18)&x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x22 = INT64_MAX;
	uint16_t x23 = UINT16_MAX;

    t5 = (((x21<=x22)&x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x27 = INT32_MIN;

    t6 = (((x25<=x26)&x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = UINT32_MAX;
	int32_t x30 = -311697541;
	volatile int8_t x31 = -4;

    t7 = (((x29<=x30)&x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int8_t x36 = -1;

    t8 = (((x33<=x34)&x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = 2503;
	int32_t x39 = -957;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -231760673;

    t9 = (((x37<=x38)&x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x42 = 119477699630LLU;
	int8_t x43 = -1;
	int16_t x44 = -1865;
	volatile int32_t t10 = 182;

    t10 = (((x41<=x42)&x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 33711669169466757LLU;
	int8_t x46 = INT8_MIN;
	volatile uint16_t x48 = 3U;
	volatile int32_t t11 = 7035656;

    t11 = (((x45<=x46)&x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	static int8_t x50 = INT8_MIN;
	uint8_t x51 = 112U;
	uint8_t x52 = 32U;

    t12 = (((x49<=x50)&x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 4U;
	int8_t x54 = INT8_MAX;
	static volatile int32_t x55 = 117173;
	static int64_t x56 = -2033843328555LL;
	volatile int32_t t13 = 25866993;

    t13 = (((x53<=x54)&x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	static int16_t x60 = -1;
	int32_t t14 = -1;

    t14 = (((x57<=x58)&x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	static volatile int32_t t15 = 451581519;

    t15 = (((x61<=x62)&x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 516U;
	int64_t x66 = INT64_MIN;
	uint64_t x68 = 22109308663368052LLU;
	volatile int32_t t16 = -15761;

    t16 = (((x65<=x66)&x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = 54U;
	volatile int32_t x70 = INT32_MAX;
	int16_t x71 = 1;
	int32_t x72 = INT32_MIN;

    t17 = (((x69<=x70)&x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = 26;
	int64_t x75 = INT64_MIN;
	static int32_t x76 = INT32_MIN;
	int32_t t18 = 38;

    t18 = (((x73<=x74)&x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	uint8_t x79 = 11U;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -144467333;

    t19 = (((x77<=x78)&x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x82 = 48655577006LL;
	int32_t x83 = INT32_MIN;
	volatile int16_t x84 = INT16_MIN;

    t20 = (((x81<=x82)&x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = INT64_MAX;
	static uint64_t x87 = 5461238LLU;
	int64_t x88 = 26496599493LL;
	static volatile int32_t t21 = -99;

    t21 = (((x85<=x86)&x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MAX;
	static volatile int64_t x90 = -2460840676LL;
	uint32_t x92 = UINT32_MAX;
	int32_t t22 = 1528;

    t22 = (((x89<=x90)&x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	static int8_t x94 = -1;
	int16_t x95 = 1;
	volatile uint32_t x96 = 528721331U;
	int32_t t23 = -183;

    t23 = (((x93<=x94)&x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x99 = UINT64_MAX;
	static int16_t x100 = INT16_MAX;
	static volatile int32_t t24 = 7444;

    t24 = (((x97<=x98)&x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 509U;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = UINT16_MAX;

    t25 = (((x101<=x102)&x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;
	volatile int32_t x106 = -1;
	volatile int8_t x107 = -20;
	volatile int32_t t26 = -491995014;

    t26 = (((x105<=x106)&x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x110 = 29U;
	static int16_t x111 = INT16_MIN;
	volatile int32_t t27 = 125492062;

    t27 = (((x109<=x110)&x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = -2874;
	int8_t x115 = INT8_MAX;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 40;

    t28 = (((x113<=x114)&x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile int16_t x118 = INT16_MIN;
	volatile uint16_t x120 = 1U;
	static volatile int32_t t29 = -218;

    t29 = (((x117<=x118)&x119)==x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 209622308LL;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MAX;
	static int32_t t30 = 417;

    t30 = (((x121<=x122)&x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = 2;
	int16_t x126 = INT16_MAX;
	int8_t x128 = INT8_MAX;

    t31 = (((x125<=x126)&x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MAX;
	int8_t x132 = 1;
	int32_t t32 = 53;

    t32 = (((x129<=x130)&x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 0;
	uint32_t x135 = 19929524U;

    t33 = (((x133<=x134)&x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	volatile uint8_t x138 = 3U;
	uint32_t x139 = 186945U;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 874152683;

    t34 = (((x137<=x138)&x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	static int32_t x142 = INT32_MAX;
	uint64_t x143 = 82329735LLU;
	int64_t x144 = INT64_MAX;
	static int32_t t35 = 129045510;

    t35 = (((x141<=x142)&x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	int8_t x147 = 40;
	uint8_t x148 = UINT8_MAX;
	static int32_t t36 = 565;

    t36 = (((x145<=x146)&x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MAX;
	int32_t x150 = -1;
	volatile uint64_t x151 = 5725846505429149LLU;
	uint16_t x152 = UINT16_MAX;

    t37 = (((x149<=x150)&x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -3;
	int16_t x154 = -36;
	volatile int8_t x156 = INT8_MIN;
	static int32_t t38 = -35483;

    t38 = (((x153<=x154)&x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;
	int32_t t39 = 0;

    t39 = (((x157<=x158)&x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 10U;
	volatile uint16_t x162 = 21U;
	int64_t x163 = INT64_MIN;
	volatile int32_t t40 = -14608780;

    t40 = (((x161<=x162)&x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x165 = UINT8_MAX;
	int32_t x166 = INT32_MIN;
	volatile int32_t t41 = 1728;

    t41 = (((x165<=x166)&x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	int32_t x170 = INT32_MIN;
	static int16_t x172 = -1;

    t42 = (((x169<=x170)&x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = 513;
	int64_t x175 = 128281181262943845LL;
	int16_t x176 = 1;
	volatile int32_t t43 = -13;

    t43 = (((x173<=x174)&x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x180 = INT64_MIN;

    t44 = (((x177<=x178)&x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = INT8_MIN;
	int16_t x182 = -1;
	int32_t t45 = -54;

    t45 = (((x181<=x182)&x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x185 = 45U;
	uint64_t x186 = UINT64_MAX;
	int32_t x188 = -3826372;
	volatile int32_t t46 = 79;

    t46 = (((x185<=x186)&x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	static int16_t x191 = INT16_MIN;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 228056;

    t47 = (((x189<=x190)&x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint16_t x193 = 130U;
	uint8_t x194 = UINT8_MAX;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 56LLU;
	int32_t t48 = 8238544;

    t48 = (((x193<=x194)&x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = 99404807LL;
	int32_t x198 = -2893;
	int32_t x199 = -1;
	volatile int32_t t49 = -14;

    t49 = (((x197<=x198)&x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 1U;
	static int32_t x202 = -2;
	int8_t x203 = -1;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -496;

    t50 = (((x201<=x202)&x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 26U;
	uint16_t x206 = 18936U;
	int16_t x207 = 1702;
	int64_t x208 = INT64_MIN;
	int32_t t51 = 541795;

    t51 = (((x205<=x206)&x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 250896529386601559LLU;
	volatile int16_t x210 = INT16_MAX;
	volatile int16_t x211 = -9;
	volatile int8_t x212 = 1;

    t52 = (((x209<=x210)&x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x214 = UINT8_MAX;
	static int64_t x215 = INT64_MAX;
	int32_t x216 = 293517029;
	static volatile int32_t t53 = 7265;

    t53 = (((x213<=x214)&x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x217 = UINT32_MAX;
	uint16_t x218 = 223U;
	static volatile int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;

    t54 = (((x217<=x218)&x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	uint16_t x222 = UINT16_MAX;
	static int16_t x223 = INT16_MAX;
	static int8_t x224 = -1;
	int32_t t55 = 0;

    t55 = (((x221<=x222)&x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = 3582732221573LL;
	volatile uint8_t x226 = 29U;
	uint64_t x227 = UINT64_MAX;
	volatile int32_t t56 = 620061;

    t56 = (((x225<=x226)&x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	uint16_t x232 = 3U;

    t57 = (((x229<=x230)&x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 73LL;
	volatile int16_t x234 = INT16_MIN;
	volatile int64_t x235 = INT64_MIN;
	volatile int32_t t58 = 1233590;

    t58 = (((x233<=x234)&x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	uint8_t x239 = 85U;

    t59 = (((x237<=x238)&x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	volatile int8_t x242 = 1;
	int8_t x243 = 57;
	uint8_t x244 = 12U;
	int32_t t60 = 251;

    t60 = (((x241<=x242)&x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x246 = -1;
	volatile int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	int32_t t61 = 304064;

    t61 = (((x245<=x246)&x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -124LL;
	volatile uint32_t x250 = UINT32_MAX;
	int16_t x251 = -3129;
	int16_t x252 = -1;
	static volatile int32_t t62 = 1813332;

    t62 = (((x249<=x250)&x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -10032;
	int16_t x254 = -1;
	int64_t x255 = -303026379751374361LL;
	static uint64_t x256 = UINT64_MAX;
	volatile int32_t t63 = 7506091;

    t63 = (((x253<=x254)&x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	uint64_t x259 = UINT64_MAX;
	int32_t t64 = -55;

    t64 = (((x257<=x258)&x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x261 = UINT64_MAX;
	static int32_t x262 = -3071853;
	volatile int32_t x263 = INT32_MIN;
	volatile uint32_t x264 = 0U;

    t65 = (((x261<=x262)&x263)==x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 1046;
	int32_t x266 = INT32_MIN;
	volatile int8_t x267 = 1;
	volatile int32_t x268 = INT32_MIN;

    t66 = (((x265<=x266)&x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	volatile uint32_t x270 = UINT32_MAX;
	uint64_t x272 = 223878LLU;
	int32_t t67 = -40212;

    t67 = (((x269<=x270)&x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 57;
	int64_t x274 = INT64_MIN;
	int16_t x275 = 1383;
	int16_t x276 = INT16_MAX;
	static int32_t t68 = -487;

    t68 = (((x273<=x274)&x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	static int64_t x278 = INT64_MIN;
	uint8_t x280 = 9U;
	volatile int32_t t69 = -13;

    t69 = (((x277<=x278)&x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x282 = 11U;
	uint8_t x283 = 1U;
	volatile int32_t t70 = 791212686;

    t70 = (((x281<=x282)&x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x286 = INT32_MAX;
	static volatile int16_t x287 = INT16_MIN;
	static uint32_t x288 = 459522U;
	static int32_t t71 = 51068955;

    t71 = (((x285<=x286)&x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x289 = 658606568266734804LLU;
	volatile uint32_t x290 = 2626548U;
	uint8_t x291 = 1U;
	int64_t x292 = INT64_MIN;

    t72 = (((x289<=x290)&x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x294 = INT32_MIN;
	volatile uint16_t x295 = 6122U;
	static int64_t x296 = -180451LL;
	volatile int32_t t73 = -4094;

    t73 = (((x293<=x294)&x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 3U;
	uint8_t x298 = 0U;
	volatile int32_t t74 = 440415;

    t74 = (((x297<=x298)&x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x302 = -1LL;
	volatile uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = -350;

    t75 = (((x301<=x302)&x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = -3069;
	uint32_t x308 = UINT32_MAX;
	volatile int32_t t76 = -24715172;

    t76 = (((x305<=x306)&x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	int8_t x311 = -2;
	volatile int32_t x312 = 1326;
	volatile int32_t t77 = 39755;

    t77 = (((x309<=x310)&x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 12348LLU;
	int32_t x314 = 0;
	static uint16_t x315 = 1U;
	volatile int32_t t78 = -100;

    t78 = (((x313<=x314)&x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = 97;
	int16_t x318 = -166;
	volatile int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 7;

    t79 = (((x317<=x318)&x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MAX;
	int64_t x322 = -1LL;
	int8_t x323 = INT8_MIN;
	volatile int32_t t80 = -114;

    t80 = (((x321<=x322)&x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MAX;
	int16_t x326 = INT16_MIN;
	int8_t x327 = 3;
	int32_t t81 = -23588;

    t81 = (((x325<=x326)&x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 40U;
	static uint64_t x330 = UINT64_MAX;

    t82 = (((x329<=x330)&x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MAX;
	static uint16_t x336 = UINT16_MAX;
	int32_t t83 = 8;

    t83 = (((x333<=x334)&x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -17;
	volatile int8_t x340 = 0;
	int32_t t84 = -4828295;

    t84 = (((x337<=x338)&x339)==x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MAX;
	static int8_t x343 = 0;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -8;

    t85 = (((x341<=x342)&x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	static int64_t x346 = -5LL;
	volatile int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = 570994;

    t86 = (((x345<=x346)&x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 91U;
	int16_t x350 = -2;
	static int16_t x351 = INT16_MIN;
	uint8_t x352 = 2U;
	volatile int32_t t87 = -822;

    t87 = (((x349<=x350)&x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -660;
	static int64_t x355 = INT64_MIN;
	static int64_t x356 = INT64_MIN;
	static int32_t t88 = -396297106;

    t88 = (((x353<=x354)&x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	int8_t x360 = -36;
	volatile int32_t t89 = 0;

    t89 = (((x357<=x358)&x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int32_t x363 = INT32_MIN;
	volatile int32_t t90 = -11910;

    t90 = (((x361<=x362)&x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 234U;
	uint32_t x366 = 681043U;
	int32_t x367 = INT32_MAX;
	int16_t x368 = INT16_MAX;
	int32_t t91 = -32;

    t91 = (((x365<=x366)&x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	static int16_t x370 = 5374;
	volatile int64_t x372 = INT64_MIN;

    t92 = (((x369<=x370)&x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MIN;
	int16_t x375 = -8136;
	int32_t t93 = 3209384;

    t93 = (((x373<=x374)&x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	volatile int32_t x378 = INT32_MIN;
	volatile int64_t x379 = 2962383750LL;
	int32_t x380 = INT32_MAX;
	int32_t t94 = 1715;

    t94 = (((x377<=x378)&x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 6U;
	int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = 2U;
	uint8_t x384 = 23U;
	volatile int32_t t95 = 4;

    t95 = (((x381<=x382)&x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x386 = INT16_MAX;
	volatile int64_t x387 = 0LL;
	int32_t t96 = -7781329;

    t96 = (((x385<=x386)&x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 4974;
	int64_t x390 = -1889259924521645255LL;
	static int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 4528286;

    t97 = (((x389<=x390)&x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = -1;
	uint16_t x395 = 38U;
	static int64_t x396 = INT64_MIN;

    t98 = (((x393<=x394)&x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1174482LL;
	int8_t x398 = INT8_MIN;
	volatile int8_t x399 = 1;
	uint32_t x400 = 5474749U;
	volatile int32_t t99 = 45520089;

    t99 = (((x397<=x398)&x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = -154209194LL;
	static int8_t x402 = 0;
	static int16_t x403 = INT16_MIN;
	uint8_t x404 = UINT8_MAX;
	int32_t t100 = 996269142;

    t100 = (((x401<=x402)&x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x407 = 30U;
	int64_t x408 = INT64_MIN;
	static volatile int32_t t101 = 342;

    t101 = (((x405<=x406)&x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = 7785825179826871484LLU;
	uint16_t x412 = 57U;
	volatile int32_t t102 = -23663882;

    t102 = (((x409<=x410)&x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 30U;
	int16_t x415 = 3;
	int8_t x416 = -1;
	int32_t t103 = 0;

    t103 = (((x413<=x414)&x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 0LL;
	static int64_t x418 = 49673784739LL;
	int8_t x419 = -6;
	int32_t t104 = -54;

    t104 = (((x417<=x418)&x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	static int64_t x422 = INT64_MIN;
	static int64_t x423 = INT64_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t105 = -12275;

    t105 = (((x421<=x422)&x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x426 = -14;
	int8_t x427 = -4;
	uint32_t x428 = UINT32_MAX;
	int32_t t106 = -469027220;

    t106 = (((x425<=x426)&x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 808181LLU;
	volatile int16_t x431 = -321;
	int16_t x432 = INT16_MIN;
	volatile int32_t t107 = 610167;

    t107 = (((x429<=x430)&x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = -1;
	volatile uint32_t x434 = UINT32_MAX;
	int64_t x435 = 934161551109LL;
	int32_t x436 = INT32_MAX;
	volatile int32_t t108 = 22;

    t108 = (((x433<=x434)&x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MAX;
	int64_t x438 = 60013566571951673LL;
	int32_t t109 = 17607507;

    t109 = (((x437<=x438)&x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	volatile int16_t x442 = 8710;
	int64_t x443 = -440188919284910111LL;
	int8_t x444 = INT8_MAX;

    t110 = (((x441<=x442)&x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = 230973215U;
	static uint64_t x446 = 209LLU;
	static volatile int8_t x447 = INT8_MIN;
	uint32_t x448 = 2140079U;
	volatile int32_t t111 = 245;

    t111 = (((x445<=x446)&x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = -1;
	static uint16_t x450 = 0U;
	int16_t x452 = INT16_MIN;
	volatile int32_t t112 = -2696564;

    t112 = (((x449<=x450)&x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MAX;
	int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	int64_t x456 = -1LL;
	volatile int32_t t113 = 0;

    t113 = (((x453<=x454)&x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = INT64_MIN;
	uint32_t x459 = 448822U;
	volatile int64_t x460 = INT64_MIN;
	volatile int32_t t114 = 5113409;

    t114 = (((x457<=x458)&x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	uint32_t x462 = UINT32_MAX;
	uint8_t x463 = 95U;
	int32_t x464 = INT32_MIN;

    t115 = (((x461<=x462)&x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	uint64_t x466 = UINT64_MAX;
	int32_t x467 = 1;
	int8_t x468 = INT8_MAX;
	volatile int32_t t116 = 177568272;

    t116 = (((x465<=x466)&x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = INT64_MIN;
	int64_t x470 = INT64_MAX;
	uint64_t x472 = 466224LLU;

    t117 = (((x469<=x470)&x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x475 = UINT64_MAX;
	int64_t x476 = -1LL;
	int32_t t118 = -2783206;

    t118 = (((x473<=x474)&x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = 2416;
	static int64_t x478 = INT64_MAX;
	int16_t x479 = -999;
	uint64_t x480 = 261077684LLU;
	int32_t t119 = 2437;

    t119 = (((x477<=x478)&x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint8_t x482 = 3U;
	static uint8_t x483 = UINT8_MAX;
	int16_t x484 = 3318;
	int32_t t120 = 44223;

    t120 = (((x481<=x482)&x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	static uint16_t x487 = 65U;
	int8_t x488 = INT8_MAX;
	volatile int32_t t121 = 3680;

    t121 = (((x485<=x486)&x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	uint32_t x490 = 2066731506U;
	static uint8_t x491 = 52U;
	int32_t x492 = INT32_MIN;
	volatile int32_t t122 = -433;

    t122 = (((x489<=x490)&x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x493 = 8U;
	static int16_t x494 = -1;
	volatile int64_t x495 = -31581LL;
	int32_t x496 = -3605319;
	volatile int32_t t123 = 575884;

    t123 = (((x493<=x494)&x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -112;
	int64_t x498 = -1LL;
	static int32_t x499 = INT32_MIN;
	uint64_t x500 = 1061305789908740LLU;
	int32_t t124 = -188433635;

    t124 = (((x497<=x498)&x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x501 = 169892416U;
	int32_t x502 = -611787;
	static int8_t x503 = -1;
	volatile int16_t x504 = INT16_MIN;

    t125 = (((x501<=x502)&x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 10034LLU;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t126 = -480663;

    t126 = (((x505<=x506)&x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = -1;
	int64_t x510 = INT64_MAX;

    t127 = (((x509<=x510)&x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x513 = 87560375U;
	volatile int16_t x515 = INT16_MIN;
	uint8_t x516 = UINT8_MAX;
	int32_t t128 = 44;

    t128 = (((x513<=x514)&x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int8_t x518 = -1;
	volatile int16_t x519 = INT16_MAX;
	int64_t x520 = INT64_MIN;

    t129 = (((x517<=x518)&x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = INT64_MIN;
	volatile uint32_t x522 = 2024253410U;
	volatile uint32_t x523 = 828U;
	uint8_t x524 = 13U;
	volatile int32_t t130 = -323;

    t130 = (((x521<=x522)&x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MIN;
	int16_t x527 = INT16_MAX;
	static uint8_t x528 = 80U;
	volatile int32_t t131 = 7030;

    t131 = (((x525<=x526)&x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int32_t x530 = 0;
	int8_t x531 = INT8_MAX;
	static volatile int8_t x532 = INT8_MAX;
	volatile int32_t t132 = -4;

    t132 = (((x529<=x530)&x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -26;
	volatile int64_t x534 = INT64_MIN;
	int16_t x535 = -194;
	uint16_t x536 = 17U;
	static volatile int32_t t133 = -72107118;

    t133 = (((x533<=x534)&x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	uint8_t x538 = 1U;
	int32_t x539 = INT32_MAX;
	uint16_t x540 = UINT16_MAX;
	int32_t t134 = -2714;

    t134 = (((x537<=x538)&x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -9408;
	int64_t x543 = INT64_MAX;
	static int16_t x544 = 1128;
	int32_t t135 = 337517;

    t135 = (((x541<=x542)&x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	volatile int8_t x546 = INT8_MIN;
	int64_t x548 = INT64_MAX;

    t136 = (((x545<=x546)&x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = -1LL;
	volatile uint16_t x550 = 189U;
	uint8_t x551 = 6U;
	volatile int32_t t137 = 770354465;

    t137 = (((x549<=x550)&x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x554 = INT16_MIN;
	static uint8_t x555 = UINT8_MAX;
	int16_t x556 = -1;
	volatile int32_t t138 = -22;

    t138 = (((x553<=x554)&x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MIN;
	volatile uint32_t x559 = UINT32_MAX;
	static uint16_t x560 = 1U;

    t139 = (((x557<=x558)&x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x561 = -14;
	int64_t x564 = -1LL;
	int32_t t140 = 235;

    t140 = (((x561<=x562)&x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = -1;
	static int8_t x566 = -1;
	static int8_t x567 = INT8_MAX;
	uint8_t x568 = 1U;
	int32_t t141 = -455;

    t141 = (((x565<=x566)&x567)==x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 62U;
	int16_t x571 = 21;
	static uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = -2381;

    t142 = (((x569<=x570)&x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = -1LL;
	int16_t x575 = INT16_MAX;
	int8_t x576 = -1;
	volatile int32_t t143 = 1049342412;

    t143 = (((x573<=x574)&x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x579 = INT64_MAX;
	int64_t x580 = -1LL;
	volatile int32_t t144 = 29958772;

    t144 = (((x577<=x578)&x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 1;
	volatile int8_t x582 = -4;
	int64_t x583 = 500172LL;
	int32_t x584 = -1018;
	int32_t t145 = 3244;

    t145 = (((x581<=x582)&x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x587 = INT16_MAX;
	int64_t x588 = INT64_MAX;
	int32_t t146 = -6160;

    t146 = (((x585<=x586)&x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 5U;
	uint8_t x590 = 0U;
	static uint16_t x591 = 1U;
	uint8_t x592 = 6U;
	int32_t t147 = 1014201893;

    t147 = (((x589<=x590)&x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	uint64_t x594 = UINT64_MAX;
	static int64_t x595 = -1LL;
	volatile int8_t x596 = INT8_MIN;
	volatile int32_t t148 = 915;

    t148 = (((x593<=x594)&x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x597 = UINT8_MAX;
	volatile int32_t t149 = 44;

    t149 = (((x597<=x598)&x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 14U;
	int8_t x603 = 0;
	volatile int32_t t150 = -148;

    t150 = (((x601<=x602)&x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 8804U;
	volatile uint8_t x608 = UINT8_MAX;
	static volatile int32_t t151 = 84317;

    t151 = (((x605<=x606)&x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x610 = INT16_MAX;
	static int64_t x611 = INT64_MIN;
	uint32_t x612 = UINT32_MAX;

    t152 = (((x609<=x610)&x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x614 = -21;
	volatile int32_t x616 = INT32_MIN;
	int32_t t153 = 3438504;

    t153 = (((x613<=x614)&x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -482022;
	int16_t x618 = INT16_MIN;
	volatile int32_t x619 = -1;
	int64_t x620 = INT64_MIN;
	int32_t t154 = -434;

    t154 = (((x617<=x618)&x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	int16_t x622 = -1;
	int8_t x623 = INT8_MAX;
	uint32_t x624 = UINT32_MAX;
	int32_t t155 = 26688689;

    t155 = (((x621<=x622)&x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x625 = 0U;
	int16_t x626 = INT16_MAX;
	int32_t x627 = -588;
	uint8_t x628 = 16U;
	static int32_t t156 = 515175;

    t156 = (((x625<=x626)&x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = INT32_MIN;
	static volatile int8_t x630 = INT8_MAX;
	int16_t x631 = INT16_MIN;
	int16_t x632 = 0;
	int32_t t157 = 223046403;

    t157 = (((x629<=x630)&x631)==x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 7845U;
	uint32_t x634 = UINT32_MAX;
	int64_t x636 = -73317428350LL;
	int32_t t158 = -17615450;

    t158 = (((x633<=x634)&x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	volatile int64_t x638 = INT64_MAX;
	int64_t x640 = INT64_MIN;
	int32_t t159 = -17177036;

    t159 = (((x637<=x638)&x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x642 = 547600143717057LLU;
	volatile int64_t x643 = INT64_MIN;
	static uint32_t x644 = 6245878U;

    t160 = (((x641<=x642)&x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = 24;
	int32_t x647 = 134;
	uint16_t x648 = 970U;
	volatile int32_t t161 = 31;

    t161 = (((x645<=x646)&x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = -15839;
	int64_t x651 = INT64_MIN;
	int8_t x652 = INT8_MIN;
	int32_t t162 = 7349908;

    t162 = (((x649<=x650)&x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = 24;
	static uint8_t x654 = 2U;
	volatile int32_t x655 = 5595;
	int32_t t163 = 9;

    t163 = (((x653<=x654)&x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x658 = 686U;
	static int8_t x660 = 54;
	int32_t t164 = -1;

    t164 = (((x657<=x658)&x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = INT8_MAX;
	int16_t x663 = 3244;
	volatile int32_t t165 = 0;

    t165 = (((x661<=x662)&x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = INT16_MIN;
	uint32_t x667 = 3222489U;
	uint32_t x668 = 20U;
	volatile int32_t t166 = 11;

    t166 = (((x665<=x666)&x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = INT64_MAX;
	static int64_t x670 = INT64_MIN;
	uint8_t x672 = 21U;
	int32_t t167 = -838325782;

    t167 = (((x669<=x670)&x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MAX;
	uint16_t x674 = 5U;
	int64_t x675 = INT64_MIN;
	uint8_t x676 = 0U;
	int32_t t168 = 289362757;

    t168 = (((x673<=x674)&x675)==x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = 163439LLU;
	uint8_t x678 = 12U;
	uint8_t x680 = 13U;
	volatile int32_t t169 = 457877694;

    t169 = (((x677<=x678)&x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	static uint8_t x682 = 21U;
	int64_t x683 = 3341308287733180881LL;
	int8_t x684 = -1;

    t170 = (((x681<=x682)&x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	volatile int16_t x686 = 154;
	uint32_t x687 = 253U;
	volatile uint16_t x688 = UINT16_MAX;
	volatile int32_t t171 = -784457;

    t171 = (((x685<=x686)&x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x691 = INT8_MIN;
	uint64_t x692 = 2111953LLU;
	volatile int32_t t172 = 36348;

    t172 = (((x689<=x690)&x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	int16_t x694 = 2;
	int8_t x695 = -1;
	volatile uint8_t x696 = 3U;
	volatile int32_t t173 = 2;

    t173 = (((x693<=x694)&x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = 422;
	static int8_t x698 = 8;
	uint8_t x699 = UINT8_MAX;
	uint32_t x700 = 1U;
	int32_t t174 = -919434;

    t174 = (((x697<=x698)&x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	int8_t x702 = -1;
	int64_t x703 = 67082LL;
	static volatile uint8_t x704 = 20U;

    t175 = (((x701<=x702)&x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = 12663U;
	volatile uint16_t x708 = 31U;
	volatile int32_t t176 = -2098;

    t176 = (((x705<=x706)&x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 8030;
	int8_t x711 = INT8_MIN;
	int8_t x712 = -13;
	volatile int32_t t177 = -57864385;

    t177 = (((x709<=x710)&x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -4;
	int16_t x714 = -1;
	static int32_t t178 = -42;

    t178 = (((x713<=x714)&x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = 0;
	static uint32_t x719 = 9U;
	int8_t x720 = INT8_MAX;

    t179 = (((x717<=x718)&x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MIN;
	uint64_t x722 = 260LLU;
	uint64_t x723 = 564LLU;

    t180 = (((x721<=x722)&x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	volatile uint8_t x728 = 99U;
	int32_t t181 = -1;

    t181 = (((x725<=x726)&x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = -40;
	static volatile uint64_t x730 = 2329LLU;
	int32_t x731 = INT32_MIN;
	static uint16_t x732 = UINT16_MAX;
	volatile int32_t t182 = 11076;

    t182 = (((x729<=x730)&x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x734 = 12019786446247988LLU;
	static uint64_t x735 = UINT64_MAX;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t183 = -1760;

    t183 = (((x733<=x734)&x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MAX;
	static int16_t x738 = INT16_MAX;
	volatile int8_t x739 = 0;
	volatile int8_t x740 = INT8_MIN;
	volatile int32_t t184 = 5;

    t184 = (((x737<=x738)&x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	volatile uint64_t x742 = UINT64_MAX;
	uint32_t x743 = UINT32_MAX;
	volatile uint32_t x744 = UINT32_MAX;
	volatile int32_t t185 = 41558660;

    t185 = (((x741<=x742)&x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = 19720418;
	int8_t x746 = 12;
	int64_t x747 = INT64_MIN;
	volatile uint64_t x748 = 330379LLU;

    t186 = (((x745<=x746)&x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = INT32_MIN;
	volatile int8_t x750 = -5;
	static int16_t x751 = INT16_MIN;
	volatile uint32_t x752 = 279U;
	int32_t t187 = -1;

    t187 = (((x749<=x750)&x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	int64_t x754 = INT64_MIN;
	int32_t x756 = 3;
	int32_t t188 = 3696;

    t188 = (((x753<=x754)&x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 614662371;
	uint8_t x758 = 107U;
	static volatile int64_t x759 = INT64_MIN;
	static int16_t x760 = INT16_MAX;

    t189 = (((x757<=x758)&x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x762 = -1;
	int8_t x764 = INT8_MIN;
	int32_t t190 = 51413;

    t190 = (((x761<=x762)&x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x765 = -1;
	int64_t x767 = -1LL;
	uint32_t x768 = UINT32_MAX;
	static volatile int32_t t191 = 8591;

    t191 = (((x765<=x766)&x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = -1;
	volatile uint8_t x771 = 7U;
	volatile int8_t x772 = INT8_MAX;
	volatile int32_t t192 = -1;

    t192 = (((x769<=x770)&x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	int64_t x774 = -142LL;
	int64_t x775 = INT64_MAX;
	volatile int8_t x776 = INT8_MIN;
	volatile int32_t t193 = 0;

    t193 = (((x773<=x774)&x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x778 = 6480U;
	volatile int64_t x779 = -242LL;
	uint64_t x780 = 277682317504325629LLU;
	volatile int32_t t194 = -28963364;

    t194 = (((x777<=x778)&x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 3;
	int16_t x782 = 106;
	int16_t x783 = 0;
	int16_t x784 = INT16_MIN;
	volatile int32_t t195 = -168;

    t195 = (((x781<=x782)&x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int32_t x786 = INT32_MAX;
	int32_t x787 = INT32_MIN;
	int64_t x788 = -21309133904813LL;
	static volatile int32_t t196 = 218494;

    t196 = (((x785<=x786)&x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MIN;
	int8_t x790 = INT8_MIN;
	uint8_t x791 = 48U;
	volatile int32_t t197 = 506;

    t197 = (((x789<=x790)&x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	static uint16_t x794 = 4556U;
	int64_t x795 = -1LL;
	volatile int16_t x796 = 1;
	volatile int32_t t198 = 2015;

    t198 = (((x793<=x794)&x795)==x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 12U;
	uint8_t x798 = UINT8_MAX;

    t199 = (((x797<=x798)&x799)==x800);

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

