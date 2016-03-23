
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

static uint16_t x1 = UINT16_MAX;
int32_t x8 = -33550934;
static volatile int32_t t1 = -68989;
uint32_t x12 = UINT32_MAX;
uint16_t x13 = 16285U;
uint16_t x20 = 12272U;
int32_t x32 = -26895684;
volatile int32_t t7 = -47491567;
volatile int16_t x43 = INT16_MAX;
uint8_t x44 = UINT8_MAX;
int32_t x45 = -1;
uint64_t x46 = 1131039101204415LLU;
static volatile int32_t t11 = 557491;
int16_t x59 = 226;
volatile int32_t t12 = -63539;
static uint8_t x67 = 7U;
uint64_t x68 = 818LLU;
volatile int32_t t14 = 408;
int16_t x75 = INT16_MIN;
uint8_t x87 = 2U;
int8_t x88 = -63;
int32_t x91 = INT32_MAX;
int16_t x92 = INT16_MIN;
static uint32_t x93 = UINT32_MAX;
int16_t x102 = INT16_MAX;
uint8_t x103 = UINT8_MAX;
int64_t x104 = INT64_MIN;
int32_t t23 = -26982883;
static volatile uint64_t x107 = 16185581703678332LLU;
volatile int32_t t26 = 20;
uint64_t x118 = 657964LLU;
static int32_t x119 = -2038;
volatile uint16_t x121 = 40U;
uint8_t x122 = UINT8_MAX;
int32_t x123 = -1;
int8_t x125 = -1;
volatile int32_t t31 = -2800;
int32_t x141 = INT32_MIN;
uint64_t x142 = UINT64_MAX;
uint32_t x144 = 1587U;
static volatile int32_t t32 = 381629411;
int16_t x146 = INT16_MAX;
int32_t t34 = -14774;
int32_t t36 = 0;
int16_t x161 = INT16_MAX;
int64_t x173 = INT64_MIN;
int16_t x188 = INT16_MAX;
uint8_t x191 = UINT8_MAX;
volatile int32_t t43 = -25;
uint32_t x210 = 673219812U;
volatile int8_t x226 = INT8_MIN;
static uint64_t x244 = UINT64_MAX;
int64_t x251 = INT64_MIN;
static uint16_t x255 = UINT16_MAX;
static int16_t x256 = INT16_MAX;
volatile int32_t t54 = 61129874;
static uint32_t x258 = UINT32_MAX;
static uint8_t x260 = UINT8_MAX;
int32_t x266 = -1;
int64_t x268 = 127LL;
int32_t t57 = 4602931;
static int16_t x275 = INT16_MIN;
volatile int32_t x300 = INT32_MIN;
int64_t x301 = -1LL;
uint64_t x309 = UINT64_MAX;
int32_t x310 = -241658;
static uint16_t x316 = UINT16_MAX;
volatile uint8_t x317 = UINT8_MAX;
int64_t x318 = INT64_MAX;
static uint64_t x330 = UINT64_MAX;
volatile int32_t t69 = 23018777;
static uint8_t x338 = 5U;
int32_t x346 = INT32_MAX;
uint32_t x354 = 689U;
volatile int16_t x356 = INT16_MAX;
int64_t x358 = INT64_MIN;
volatile uint16_t x366 = 1660U;
static int32_t t78 = -2237;
int32_t t79 = 23257173;
int32_t x388 = INT32_MIN;
static int32_t t82 = 422963;
int64_t x400 = -95185485454826616LL;
int8_t x401 = 0;
int16_t x440 = INT16_MAX;
static uint64_t x441 = UINT64_MAX;
int16_t x446 = 34;
static int32_t x447 = -1;
static int32_t x449 = -1;
uint64_t x467 = 369674967LLU;
int32_t x472 = 22957213;
static volatile int32_t t100 = 222469054;
int64_t x474 = -17327476LL;
int32_t x476 = 1370;
uint8_t x495 = 8U;
int32_t t105 = 7;
int32_t x507 = -184715415;
int16_t x512 = -372;
uint64_t x517 = UINT64_MAX;
volatile int32_t x520 = INT32_MIN;
int8_t x523 = INT8_MIN;
uint32_t x534 = UINT32_MAX;
volatile uint32_t x537 = 6107565U;
int32_t x538 = INT32_MIN;
int32_t x549 = 131;
static uint64_t x563 = UINT64_MAX;
static int8_t x564 = 3;
int8_t x566 = INT8_MAX;
static int64_t x567 = -388831127674231602LL;
uint64_t x571 = 10272LLU;
static uint64_t x578 = 2525LLU;
static int8_t x579 = INT8_MIN;
volatile int64_t x588 = INT64_MAX;
int32_t t128 = -1;
static uint8_t x598 = 0U;
volatile int64_t x600 = INT64_MIN;
static int32_t t130 = 11;
int32_t x601 = -1;
int16_t x612 = INT16_MIN;
static volatile uint32_t x614 = 29470245U;
volatile uint64_t x615 = UINT64_MAX;
static int8_t x619 = -2;
volatile int32_t t135 = 0;
uint8_t x626 = UINT8_MAX;
static uint8_t x635 = 0U;
static int32_t x645 = -67;
uint32_t x646 = 56089679U;
uint64_t x648 = UINT64_MAX;
uint16_t x650 = UINT16_MAX;
int32_t t143 = 0;
static int64_t x659 = INT64_MAX;
static int64_t x674 = INT64_MIN;
int32_t t149 = 21070;
volatile int64_t x686 = -1803853904LL;
uint16_t x691 = 275U;
uint64_t x693 = 209926LLU;
int32_t t152 = 846812793;
int32_t x705 = INT32_MAX;
static volatile int32_t t154 = 44;
static uint8_t x725 = 1U;
uint64_t x734 = 13979500198815157LLU;
uint8_t x745 = 0U;
volatile uint64_t x747 = 14026373LLU;
int32_t t164 = -7536;
uint16_t x762 = 1U;
static int64_t x768 = -1LL;
int16_t x773 = INT16_MIN;
uint64_t x775 = 11499487LLU;
int8_t x793 = -1;
static int64_t x794 = INT64_MIN;
int8_t x809 = INT8_MIN;
uint32_t x812 = 2669U;
int32_t t176 = -611693673;
volatile int32_t t177 = -159574347;
volatile int16_t x829 = INT16_MIN;
volatile int64_t x830 = INT64_MIN;
uint8_t x835 = UINT8_MAX;
int16_t x836 = INT16_MIN;
int32_t t181 = -287070585;
uint32_t x839 = UINT32_MAX;
int64_t x840 = 345395LL;
volatile int32_t t182 = -78;
int8_t x841 = -17;
uint8_t x846 = UINT8_MAX;
int16_t x850 = -3;
int8_t x875 = 38;
int16_t x878 = INT16_MIN;
int16_t x885 = INT16_MIN;
volatile int32_t x886 = 1;
int16_t x888 = INT16_MAX;
int32_t x889 = -1;
int64_t x890 = INT64_MAX;
int16_t x903 = 6474;
uint16_t x910 = 8053U;
int8_t x915 = 6;


void f0(void) {
    	int16_t x2 = -1;
	uint16_t x3 = 6571U;
	volatile int32_t x4 = 2167;
	static volatile int32_t t0 = -24;

    t0 = (x1<=(x2*(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 210U;
	int8_t x6 = -1;
	int64_t x7 = 436338333354LL;

    t1 = (x5<=(x6*(x7/x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MAX;
	int64_t x10 = INT64_MIN;
	volatile int8_t x11 = INT8_MIN;
	static int32_t t2 = -12873619;

    t2 = (x9<=(x10*(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 4U;
	int8_t x15 = INT8_MIN;
	uint32_t x16 = UINT32_MAX;
	static volatile int32_t t3 = 480218976;

    t3 = (x13<=(x14*(x15/x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 30LL;
	int32_t x18 = -5654;
	static int64_t x19 = INT64_MAX;
	int32_t t4 = -282065;

    t4 = (x17<=(x18*(x19/x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MAX;
	static int64_t x27 = -1432024LL;
	volatile int8_t x28 = INT8_MIN;
	int32_t t5 = 2831537;

    t5 = (x25<=(x26*(x27/x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 4U;
	int16_t x30 = -9344;
	int64_t x31 = INT64_MIN;
	int32_t t6 = 102;

    t6 = (x29<=(x30*(x31/x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = 5217;
	static int64_t x34 = -1LL;
	int64_t x35 = -1LL;
	int16_t x36 = INT16_MIN;

    t7 = (x33<=(x34*(x35/x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x37 = 26908U;
	static int32_t x38 = INT32_MIN;
	uint8_t x39 = 0U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 15;

    t8 = (x37<=(x38*(x39/x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	static int32_t t9 = 3815496;

    t9 = (x41<=(x42*(x43/x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x47 = 534U;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -274338796;

    t10 = (x45<=(x46*(x47/x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	volatile int16_t x50 = INT16_MAX;
	int16_t x51 = -436;
	volatile int8_t x52 = -1;

    t11 = (x49<=(x50*(x51/x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MIN;
	volatile int16_t x60 = INT16_MIN;

    t12 = (x57<=(x58*(x59/x60)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x61 = 265U;
	volatile int8_t x62 = -23;
	uint8_t x63 = 5U;
	uint64_t x64 = UINT64_MAX;
	int32_t t13 = -3146;

    t13 = (x61<=(x62*(x63/x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x65 = 1U;
	int32_t x66 = INT32_MAX;

    t14 = (x65<=(x66*(x67/x68)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x69 = UINT16_MAX;
	static uint8_t x70 = 27U;
	uint64_t x71 = UINT64_MAX;
	uint8_t x72 = UINT8_MAX;
	int32_t t15 = 36017;

    t15 = (x69<=(x70*(x71/x72)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x73 = INT8_MAX;
	uint16_t x74 = 313U;
	static int16_t x76 = INT16_MAX;
	int32_t t16 = -172;

    t16 = (x73<=(x74*(x75/x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = 10U;
	volatile uint16_t x78 = 21U;
	int32_t x79 = -1;
	uint8_t x80 = 27U;
	int32_t t17 = -13303;

    t17 = (x77<=(x78*(x79/x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x81 = 4180647LL;
	static int16_t x82 = -1;
	static volatile uint32_t x83 = 622014241U;
	volatile int16_t x84 = INT16_MAX;
	static volatile int32_t t18 = 123361304;

    t18 = (x81<=(x82*(x83/x84)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = 337U;
	int16_t x86 = INT16_MAX;
	static int32_t t19 = 5708;

    t19 = (x85<=(x86*(x87/x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x89 = 6596949144650523LLU;
	int32_t x90 = 233;
	static int32_t t20 = 104;

    t20 = (x89<=(x90*(x91/x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x94 = 41;
	int8_t x95 = 0;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t21 = -133061903;

    t21 = (x93<=(x94*(x95/x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MAX;
	uint16_t x98 = 1134U;
	static uint16_t x99 = UINT16_MAX;
	uint8_t x100 = UINT8_MAX;
	int32_t t22 = 60523;

    t22 = (x97<=(x98*(x99/x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MIN;

    t23 = (x101<=(x102*(x103/x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x105 = 14880U;
	int16_t x106 = -1;
	int8_t x108 = 1;
	int32_t t24 = -71;

    t24 = (x105<=(x106*(x107/x108)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = -1LL;
	uint8_t x110 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -1LL;
	int32_t t25 = -29;

    t25 = (x109<=(x110*(x111/x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x113 = 1050244566LL;
	uint16_t x114 = 4U;
	int8_t x115 = -2;
	volatile uint8_t x116 = 12U;

    t26 = (x113<=(x114*(x115/x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x117 = INT64_MAX;
	int8_t x120 = INT8_MIN;
	int32_t t27 = -31;

    t27 = (x117<=(x118*(x119/x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x124 = UINT8_MAX;
	static int32_t t28 = -37837;

    t28 = (x121<=(x122*(x123/x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x126 = INT16_MIN;
	int32_t x127 = 680195;
	volatile int16_t x128 = INT16_MAX;
	volatile int32_t t29 = 126669;

    t29 = (x125<=(x126*(x127/x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = INT32_MIN;
	static volatile int32_t x134 = -163579074;
	int64_t x135 = -1LL;
	int64_t x136 = INT64_MIN;
	int32_t t30 = 243;

    t30 = (x133<=(x134*(x135/x136)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x137 = 1010U;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;

    t31 = (x137<=(x138*(x139/x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x143 = INT32_MAX;

    t32 = (x141<=(x142*(x143/x144)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = 928936504U;
	static volatile int8_t x147 = 2;
	int16_t x148 = 1;
	static volatile int32_t t33 = 253322849;

    t33 = (x145<=(x146*(x147/x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = INT64_MAX;
	uint32_t x150 = 7U;
	static uint8_t x151 = UINT8_MAX;
	int16_t x152 = -55;

    t34 = (x149<=(x150*(x151/x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = -1LL;
	int16_t x154 = -1;
	volatile int32_t x155 = INT32_MAX;
	uint64_t x156 = 47216876425488LLU;
	static volatile int32_t t35 = -1;

    t35 = (x153<=(x154*(x155/x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x157 = UINT64_MAX;
	int32_t x158 = INT32_MIN;
	uint8_t x159 = UINT8_MAX;
	static int32_t x160 = -3206;

    t36 = (x157<=(x158*(x159/x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint8_t x164 = UINT8_MAX;
	int32_t t37 = -37300934;

    t37 = (x161<=(x162*(x163/x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x165 = UINT8_MAX;
	static int16_t x166 = INT16_MIN;
	int32_t x167 = 0;
	volatile int16_t x168 = -1;
	volatile int32_t t38 = 4032349;

    t38 = (x165<=(x166*(x167/x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x174 = UINT32_MAX;
	int8_t x175 = -4;
	uint16_t x176 = UINT16_MAX;
	int32_t t39 = 121085;

    t39 = (x173<=(x174*(x175/x176)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x181 = 171443186270LLU;
	int16_t x182 = -1;
	volatile int16_t x183 = -27;
	uint64_t x184 = 991LLU;
	static int32_t t40 = 12543;

    t40 = (x181<=(x182*(x183/x184)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x186 = 0;
	int8_t x187 = INT8_MIN;
	volatile int32_t t41 = 674147;

    t41 = (x185<=(x186*(x187/x188)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x189 = INT64_MAX;
	int64_t x190 = -1LL;
	int16_t x192 = INT16_MIN;
	volatile int32_t t42 = -191095;

    t42 = (x189<=(x190*(x191/x192)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x193 = UINT32_MAX;
	volatile uint32_t x194 = 739441U;
	uint32_t x195 = UINT32_MAX;
	static int8_t x196 = -3;

    t43 = (x193<=(x194*(x195/x196)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	volatile uint8_t x203 = 0U;
	uint64_t x204 = 425170648LLU;
	int32_t t44 = -926130;

    t44 = (x201<=(x202*(x203/x204)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x205 = -1LL;
	static volatile int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = UINT16_MAX;
	static volatile int32_t t45 = -100;

    t45 = (x205<=(x206*(x207/x208)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = 4;
	volatile int8_t x211 = INT8_MIN;
	static volatile int32_t x212 = INT32_MAX;
	int32_t t46 = 39110;

    t46 = (x209<=(x210*(x211/x212)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x213 = -1;
	int32_t x214 = -911345;
	uint32_t x215 = 1030197125U;
	volatile uint8_t x216 = 23U;
	static volatile int32_t t47 = -253;

    t47 = (x213<=(x214*(x215/x216)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x225 = INT32_MAX;
	static int64_t x227 = -729LL;
	int32_t x228 = INT32_MIN;
	int32_t t48 = 437867;

    t48 = (x225<=(x226*(x227/x228)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x229 = 361U;
	int16_t x230 = INT16_MIN;
	static uint8_t x231 = UINT8_MAX;
	int16_t x232 = -9615;
	volatile int32_t t49 = -439015;

    t49 = (x229<=(x230*(x231/x232)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = 0U;
	int32_t x238 = INT32_MAX;
	uint64_t x239 = UINT64_MAX;
	volatile int8_t x240 = INT8_MAX;
	int32_t t50 = 795634827;

    t50 = (x237<=(x238*(x239/x240)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x241 = 5862U;
	static volatile int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	volatile int32_t t51 = 19;

    t51 = (x241<=(x242*(x243/x244)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x245 = 1083066U;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 67732927248210LLU;
	int64_t x248 = -471LL;
	int32_t t52 = -3;

    t52 = (x245<=(x246*(x247/x248)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x249 = INT32_MAX;
	int32_t x250 = 13081;
	static int32_t x252 = 101562891;
	static int32_t t53 = 53511065;

    t53 = (x249<=(x250*(x251/x252)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x253 = INT16_MAX;
	static int8_t x254 = INT8_MAX;

    t54 = (x253<=(x254*(x255/x256)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x257 = 605159LL;
	static int16_t x259 = INT16_MIN;
	int32_t t55 = 244614192;

    t55 = (x257<=(x258*(x259/x260)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x261 = 11802162455LL;
	int8_t x262 = 53;
	static int32_t x263 = -26;
	static int16_t x264 = -6;
	int32_t t56 = -1370291;

    t56 = (x261<=(x262*(x263/x264)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x265 = 727503377U;
	volatile int64_t x267 = INT64_MIN;

    t57 = (x265<=(x266*(x267/x268)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x269 = 873;
	uint32_t x270 = 4212U;
	uint64_t x271 = 194009LLU;
	int16_t x272 = INT16_MAX;
	volatile int32_t t58 = -3303502;

    t58 = (x269<=(x270*(x271/x272)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x273 = INT64_MIN;
	uint32_t x274 = 179U;
	volatile int8_t x276 = -1;
	int32_t t59 = -46480910;

    t59 = (x273<=(x274*(x275/x276)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x277 = UINT64_MAX;
	int32_t x278 = INT32_MIN;
	int32_t x279 = -1;
	int8_t x280 = INT8_MIN;
	int32_t t60 = 6972;

    t60 = (x277<=(x278*(x279/x280)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x281 = INT16_MAX;
	static volatile int64_t x282 = -20610246748234LL;
	int64_t x283 = -1LL;
	uint64_t x284 = 301754091681155LLU;
	volatile int32_t t61 = 4242;

    t61 = (x281<=(x282*(x283/x284)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x289 = INT16_MAX;
	int16_t x290 = 12;
	uint8_t x291 = UINT8_MAX;
	volatile uint8_t x292 = 55U;
	int32_t t62 = -437876;

    t62 = (x289<=(x290*(x291/x292)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x297 = -1;
	int64_t x298 = INT64_MIN;
	uint8_t x299 = 5U;
	static int32_t t63 = -1;

    t63 = (x297<=(x298*(x299/x300)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x302 = UINT16_MAX;
	int32_t x303 = -119341587;
	int32_t x304 = INT32_MIN;
	volatile int32_t t64 = -1029047640;

    t64 = (x301<=(x302*(x303/x304)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x305 = INT8_MAX;
	uint8_t x306 = 73U;
	volatile int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MAX;
	volatile int32_t t65 = 55343;

    t65 = (x305<=(x306*(x307/x308)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x311 = INT64_MAX;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t66 = -95875;

    t66 = (x309<=(x310*(x311/x312)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x313 = 723157U;
	int32_t x314 = -217294;
	int16_t x315 = INT16_MIN;
	static volatile int32_t t67 = -3332;

    t67 = (x313<=(x314*(x315/x316)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x319 = -128793LL;
	int64_t x320 = INT64_MAX;
	volatile int32_t t68 = -1278022;

    t68 = (x317<=(x318*(x319/x320)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x329 = -1;
	int16_t x331 = INT16_MAX;
	uint8_t x332 = 3U;

    t69 = (x329<=(x330*(x331/x332)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x333 = UINT16_MAX;
	static int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	uint64_t x336 = 34466826399198LLU;
	static volatile int32_t t70 = 0;

    t70 = (x333<=(x334*(x335/x336)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x337 = -276693024346753190LL;
	uint32_t x339 = 13543U;
	int8_t x340 = INT8_MAX;
	volatile int32_t t71 = -411;

    t71 = (x337<=(x338*(x339/x340)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x345 = UINT8_MAX;
	volatile int8_t x347 = INT8_MIN;
	volatile int32_t x348 = INT32_MIN;
	int32_t t72 = 426;

    t72 = (x345<=(x346*(x347/x348)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x349 = UINT32_MAX;
	static int8_t x350 = -13;
	int32_t x351 = -88;
	static int64_t x352 = INT64_MAX;
	volatile int32_t t73 = 97;

    t73 = (x349<=(x350*(x351/x352)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x353 = 41;
	static volatile int32_t x355 = INT32_MIN;
	static volatile int32_t t74 = 10214;

    t74 = (x353<=(x354*(x355/x356)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x357 = -1LL;
	int8_t x359 = 0;
	static uint32_t x360 = 17490U;
	int32_t t75 = 155;

    t75 = (x357<=(x358*(x359/x360)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x365 = 1U;
	uint8_t x367 = 0U;
	int16_t x368 = 1;
	static volatile int32_t t76 = 1055213104;

    t76 = (x365<=(x366*(x367/x368)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x369 = 543U;
	static volatile int64_t x370 = -1LL;
	volatile int32_t x371 = -1;
	volatile int16_t x372 = -1;
	volatile int32_t t77 = 4327;

    t77 = (x369<=(x370*(x371/x372)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x373 = INT16_MIN;
	uint32_t x374 = UINT32_MAX;
	volatile int64_t x375 = 2LL;
	volatile int64_t x376 = INT64_MIN;

    t78 = (x373<=(x374*(x375/x376)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x377 = UINT8_MAX;
	static int64_t x378 = -1LL;
	int64_t x379 = INT64_MAX;
	volatile uint16_t x380 = 30708U;

    t79 = (x377<=(x378*(x379/x380)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x381 = INT32_MIN;
	static int32_t x382 = INT32_MIN;
	int64_t x383 = -1LL;
	uint64_t x384 = UINT64_MAX;
	static volatile int32_t t80 = -40875270;

    t80 = (x381<=(x382*(x383/x384)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x385 = INT8_MIN;
	volatile int8_t x386 = -53;
	uint64_t x387 = 768678149356604034LLU;
	int32_t t81 = -346;

    t81 = (x385<=(x386*(x387/x388)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x389 = INT64_MAX;
	int16_t x390 = -15587;
	static uint8_t x391 = 1U;
	int16_t x392 = INT16_MIN;

    t82 = (x389<=(x390*(x391/x392)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x393 = UINT8_MAX;
	static int16_t x394 = INT16_MIN;
	int16_t x395 = -1;
	int64_t x396 = INT64_MAX;
	static volatile int32_t t83 = 718;

    t83 = (x393<=(x394*(x395/x396)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x397 = INT64_MIN;
	static uint8_t x398 = 2U;
	static uint16_t x399 = 27U;
	int32_t t84 = 1504281;

    t84 = (x397<=(x398*(x399/x400)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x402 = -3;
	int8_t x403 = -1;
	uint32_t x404 = 51937479U;
	volatile int32_t t85 = 133;

    t85 = (x401<=(x402*(x403/x404)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x405 = 38U;
	uint32_t x406 = UINT32_MAX;
	static int8_t x407 = -18;
	static int64_t x408 = 257654066232LL;
	volatile int32_t t86 = -18;

    t86 = (x405<=(x406*(x407/x408)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x409 = -1;
	int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t87 = -178;

    t87 = (x409<=(x410*(x411/x412)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x413 = -18;
	int8_t x414 = INT8_MIN;
	static int16_t x415 = 8199;
	int64_t x416 = -1LL;
	int32_t t88 = 65;

    t88 = (x413<=(x414*(x415/x416)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x417 = INT64_MIN;
	static volatile int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MIN;
	static uint8_t x420 = UINT8_MAX;
	volatile int32_t t89 = 3679626;

    t89 = (x417<=(x418*(x419/x420)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x421 = 1543U;
	volatile int8_t x422 = INT8_MIN;
	static int64_t x423 = INT64_MAX;
	static int16_t x424 = INT16_MIN;
	volatile int32_t t90 = 16919327;

    t90 = (x421<=(x422*(x423/x424)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x425 = 173025U;
	uint32_t x426 = 10832U;
	volatile uint16_t x427 = UINT16_MAX;
	int8_t x428 = INT8_MIN;
	static int32_t t91 = 0;

    t91 = (x425<=(x426*(x427/x428)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x433 = INT8_MAX;
	int64_t x434 = -1653LL;
	int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MIN;
	int32_t t92 = -83615;

    t92 = (x433<=(x434*(x435/x436)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x437 = -1;
	static int64_t x438 = -1LL;
	static volatile int64_t x439 = INT64_MIN;
	volatile int32_t t93 = -234788;

    t93 = (x437<=(x438*(x439/x440)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x442 = 95U;
	int64_t x443 = INT64_MIN;
	int32_t x444 = 143961760;
	int32_t t94 = 475;

    t94 = (x441<=(x442*(x443/x444)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x445 = 18U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t95 = -634820;

    t95 = (x445<=(x446*(x447/x448)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x450 = -1;
	int16_t x451 = -2;
	uint8_t x452 = 110U;
	volatile int32_t t96 = 464025873;

    t96 = (x449<=(x450*(x451/x452)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x453 = 5858748LLU;
	static int8_t x454 = INT8_MIN;
	int32_t x455 = 4606125;
	static uint16_t x456 = 18U;
	volatile int32_t t97 = -15972;

    t97 = (x453<=(x454*(x455/x456)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x457 = -71633219317LL;
	uint16_t x458 = UINT16_MAX;
	static int8_t x459 = -6;
	int16_t x460 = 6;
	int32_t t98 = 2581209;

    t98 = (x457<=(x458*(x459/x460)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x465 = INT64_MIN;
	uint8_t x466 = UINT8_MAX;
	static uint32_t x468 = 201673U;
	int32_t t99 = 158640;

    t99 = (x465<=(x466*(x467/x468)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x469 = 18U;
	int64_t x470 = -1LL;
	int32_t x471 = -43939;

    t100 = (x469<=(x470*(x471/x472)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x473 = 291368454LLU;
	int32_t x475 = 13754;
	volatile int32_t t101 = 1;

    t101 = (x473<=(x474*(x475/x476)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x477 = -1;
	int8_t x478 = -1;
	int16_t x479 = INT16_MIN;
	static uint32_t x480 = 201684275U;
	int32_t t102 = 1;

    t102 = (x477<=(x478*(x479/x480)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x481 = INT32_MIN;
	uint8_t x482 = 58U;
	uint8_t x483 = 1U;
	int32_t x484 = INT32_MIN;
	volatile int32_t t103 = 34368;

    t103 = (x481<=(x482*(x483/x484)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x485 = 14;
	int8_t x486 = INT8_MIN;
	int8_t x487 = -1;
	int16_t x488 = INT16_MIN;
	static volatile int32_t t104 = 406;

    t104 = (x485<=(x486*(x487/x488)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x493 = 1LL;
	volatile int16_t x494 = INT16_MAX;
	int64_t x496 = INT64_MIN;

    t105 = (x493<=(x494*(x495/x496)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x497 = 2U;
	int32_t x498 = -1;
	uint32_t x499 = 190098350U;
	uint32_t x500 = UINT32_MAX;
	volatile int32_t t106 = 398869442;

    t106 = (x497<=(x498*(x499/x500)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x501 = INT16_MIN;
	int16_t x502 = -1;
	static uint8_t x503 = 3U;
	uint64_t x504 = 102821LLU;
	int32_t t107 = 135;

    t107 = (x501<=(x502*(x503/x504)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x505 = -1;
	int64_t x506 = -1LL;
	volatile uint8_t x508 = UINT8_MAX;
	volatile int32_t t108 = 570;

    t108 = (x505<=(x506*(x507/x508)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x509 = INT32_MAX;
	uint32_t x510 = 171076546U;
	int16_t x511 = INT16_MIN;
	int32_t t109 = -6531597;

    t109 = (x509<=(x510*(x511/x512)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x513 = 2843U;
	int8_t x514 = INT8_MIN;
	uint16_t x515 = UINT16_MAX;
	int16_t x516 = 279;
	volatile int32_t t110 = -15537982;

    t110 = (x513<=(x514*(x515/x516)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x518 = INT16_MAX;
	static int64_t x519 = INT64_MIN;
	volatile int32_t t111 = 161560644;

    t111 = (x517<=(x518*(x519/x520)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x521 = INT32_MIN;
	volatile int8_t x522 = INT8_MAX;
	int64_t x524 = 115385481562980686LL;
	int32_t t112 = -123166576;

    t112 = (x521<=(x522*(x523/x524)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x529 = 2LLU;
	uint16_t x530 = 17059U;
	uint8_t x531 = 15U;
	int64_t x532 = INT64_MIN;
	volatile int32_t t113 = -100568913;

    t113 = (x529<=(x530*(x531/x532)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x533 = 678283355U;
	uint32_t x535 = 2679U;
	int32_t x536 = INT32_MIN;
	int32_t t114 = 16;

    t114 = (x533<=(x534*(x535/x536)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x539 = -1;
	static int64_t x540 = INT64_MAX;
	int32_t t115 = 98546;

    t115 = (x537<=(x538*(x539/x540)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x541 = INT32_MIN;
	static uint64_t x542 = 14705769182161099LLU;
	int8_t x543 = INT8_MAX;
	int64_t x544 = -16761992085929LL;
	int32_t t116 = -26;

    t116 = (x541<=(x542*(x543/x544)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x545 = 6;
	volatile int32_t x546 = INT32_MAX;
	int16_t x547 = INT16_MIN;
	int16_t x548 = INT16_MAX;
	int32_t t117 = 34;

    t117 = (x545<=(x546*(x547/x548)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x550 = INT16_MIN;
	volatile uint16_t x551 = UINT16_MAX;
	volatile int16_t x552 = INT16_MIN;
	static volatile int32_t t118 = 1154;

    t118 = (x549<=(x550*(x551/x552)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x553 = 664U;
	volatile uint8_t x554 = 4U;
	int16_t x555 = -1;
	uint16_t x556 = 5108U;
	static volatile int32_t t119 = 3721;

    t119 = (x553<=(x554*(x555/x556)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x557 = 1;
	uint32_t x558 = UINT32_MAX;
	volatile int32_t x559 = INT32_MIN;
	int8_t x560 = INT8_MIN;
	volatile int32_t t120 = -64;

    t120 = (x557<=(x558*(x559/x560)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x562 = 20;
	volatile int32_t t121 = 3328572;

    t121 = (x561<=(x562*(x563/x564)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t122 = -5112702;

    t122 = (x565<=(x566*(x567/x568)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x569 = INT64_MAX;
	volatile uint64_t x570 = 16946306203541LLU;
	static uint8_t x572 = 117U;
	int32_t t123 = -3;

    t123 = (x569<=(x570*(x571/x572)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x573 = UINT8_MAX;
	int32_t x574 = INT32_MAX;
	int16_t x575 = -1655;
	int16_t x576 = INT16_MAX;
	int32_t t124 = 5;

    t124 = (x573<=(x574*(x575/x576)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x577 = 406U;
	volatile uint64_t x580 = 13734471075129684LLU;
	volatile int32_t t125 = -14;

    t125 = (x577<=(x578*(x579/x580)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x581 = 177LL;
	int8_t x582 = INT8_MIN;
	static uint16_t x583 = UINT16_MAX;
	uint16_t x584 = UINT16_MAX;
	volatile int32_t t126 = -897;

    t126 = (x581<=(x582*(x583/x584)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x585 = 34868196755953282LLU;
	uint32_t x586 = UINT32_MAX;
	int64_t x587 = INT64_MIN;
	int32_t t127 = -251;

    t127 = (x585<=(x586*(x587/x588)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x589 = -1;
	static uint16_t x590 = 8U;
	static int8_t x591 = INT8_MAX;
	static uint64_t x592 = UINT64_MAX;

    t128 = (x589<=(x590*(x591/x592)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x593 = 18U;
	uint16_t x594 = UINT16_MAX;
	volatile uint64_t x595 = 77011LLU;
	int32_t x596 = 528;
	int32_t t129 = -330702;

    t129 = (x593<=(x594*(x595/x596)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x597 = INT64_MIN;
	volatile uint64_t x599 = 10LLU;

    t130 = (x597<=(x598*(x599/x600)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x602 = INT64_MIN;
	int32_t x603 = INT32_MAX;
	uint64_t x604 = 425LLU;
	int32_t t131 = -54;

    t131 = (x601<=(x602*(x603/x604)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x605 = -1;
	volatile int8_t x606 = INT8_MAX;
	static int32_t x607 = -1;
	static uint64_t x608 = 7729540LLU;
	volatile int32_t t132 = -13537951;

    t132 = (x605<=(x606*(x607/x608)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x609 = INT16_MIN;
	int32_t x610 = 25;
	uint8_t x611 = UINT8_MAX;
	volatile int32_t t133 = 0;

    t133 = (x609<=(x610*(x611/x612)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x613 = 8632;
	uint8_t x616 = 88U;
	int32_t t134 = -79317465;

    t134 = (x613<=(x614*(x615/x616)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x617 = -1;
	uint16_t x618 = 1359U;
	volatile int32_t x620 = -1845;

    t135 = (x617<=(x618*(x619/x620)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x625 = UINT16_MAX;
	static volatile uint16_t x627 = 89U;
	static int64_t x628 = INT64_MIN;
	static volatile int32_t t136 = -197664600;

    t136 = (x625<=(x626*(x627/x628)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x629 = -1;
	static volatile uint32_t x630 = UINT32_MAX;
	uint64_t x631 = 265609297122LLU;
	int64_t x632 = INT64_MAX;
	int32_t t137 = -38691240;

    t137 = (x629<=(x630*(x631/x632)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x633 = INT16_MIN;
	int16_t x634 = -1;
	int32_t x636 = 37744;
	static int32_t t138 = -1;

    t138 = (x633<=(x634*(x635/x636)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x637 = UINT16_MAX;
	int8_t x638 = INT8_MIN;
	static int32_t x639 = -58824786;
	static volatile uint16_t x640 = UINT16_MAX;
	static volatile int32_t t139 = -5302005;

    t139 = (x637<=(x638*(x639/x640)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x641 = -1;
	volatile uint8_t x642 = UINT8_MAX;
	int16_t x643 = INT16_MIN;
	uint16_t x644 = 1U;
	static volatile int32_t t140 = 298090;

    t140 = (x641<=(x642*(x643/x644)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x647 = INT8_MAX;
	int32_t t141 = -17451;

    t141 = (x645<=(x646*(x647/x648)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x649 = 0;
	int16_t x651 = 1;
	int16_t x652 = -1;
	static int32_t t142 = -18916;

    t142 = (x649<=(x650*(x651/x652)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x653 = INT64_MIN;
	int16_t x654 = 296;
	int8_t x655 = INT8_MIN;
	uint16_t x656 = UINT16_MAX;

    t143 = (x653<=(x654*(x655/x656)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x657 = INT64_MAX;
	static uint32_t x658 = 5429U;
	static uint32_t x660 = UINT32_MAX;
	volatile int32_t t144 = 18;

    t144 = (x657<=(x658*(x659/x660)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x661 = -1;
	volatile int64_t x662 = -185502LL;
	volatile uint32_t x663 = UINT32_MAX;
	volatile int32_t x664 = -11;
	int32_t t145 = 4077;

    t145 = (x661<=(x662*(x663/x664)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x665 = -1855293;
	uint8_t x666 = 30U;
	int64_t x667 = INT64_MIN;
	int64_t x668 = 82854084818LL;
	int32_t t146 = 25235183;

    t146 = (x665<=(x666*(x667/x668)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x673 = -1;
	static volatile uint64_t x675 = 650583206326LLU;
	int32_t x676 = 5;
	int32_t t147 = -2844;

    t147 = (x673<=(x674*(x675/x676)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x677 = INT64_MAX;
	int32_t x678 = -3;
	uint64_t x679 = 0LLU;
	int8_t x680 = -1;
	int32_t t148 = -4494;

    t148 = (x677<=(x678*(x679/x680)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x681 = INT16_MIN;
	static int16_t x682 = INT16_MAX;
	volatile int16_t x683 = 3975;
	int32_t x684 = INT32_MIN;

    t149 = (x681<=(x682*(x683/x684)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x685 = 723354977U;
	volatile uint8_t x687 = UINT8_MAX;
	int64_t x688 = INT64_MIN;
	int32_t t150 = 42;

    t150 = (x685<=(x686*(x687/x688)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x689 = 0;
	int8_t x690 = INT8_MIN;
	uint64_t x692 = UINT64_MAX;
	static int32_t t151 = -157283;

    t151 = (x689<=(x690*(x691/x692)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x694 = -373LL;
	int64_t x695 = 17288860LL;
	static int64_t x696 = INT64_MAX;

    t152 = (x693<=(x694*(x695/x696)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x701 = INT64_MIN;
	int16_t x702 = INT16_MAX;
	int16_t x703 = INT16_MIN;
	volatile int8_t x704 = 11;
	volatile int32_t t153 = 147560193;

    t153 = (x701<=(x702*(x703/x704)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x706 = INT16_MAX;
	uint16_t x707 = 796U;
	int64_t x708 = -15LL;

    t154 = (x705<=(x706*(x707/x708)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x709 = UINT8_MAX;
	uint64_t x710 = 192669073566LLU;
	uint8_t x711 = UINT8_MAX;
	static int16_t x712 = -3787;
	static volatile int32_t t155 = 27535;

    t155 = (x709<=(x710*(x711/x712)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = INT16_MAX;
	uint8_t x715 = 12U;
	volatile uint32_t x716 = 59U;
	int32_t t156 = 1993;

    t156 = (x713<=(x714*(x715/x716)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x717 = UINT16_MAX;
	static int16_t x718 = -1;
	static int16_t x719 = INT16_MIN;
	volatile int64_t x720 = -1LL;
	int32_t t157 = 89431;

    t157 = (x717<=(x718*(x719/x720)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x721 = 57;
	static int16_t x722 = -1;
	int32_t x723 = INT32_MAX;
	uint8_t x724 = UINT8_MAX;
	int32_t t158 = -2256;

    t158 = (x721<=(x722*(x723/x724)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x726 = -4;
	static int8_t x727 = 63;
	uint32_t x728 = 57U;
	int32_t t159 = 1;

    t159 = (x725<=(x726*(x727/x728)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x729 = 17U;
	volatile int8_t x730 = -1;
	static volatile uint64_t x731 = UINT64_MAX;
	uint64_t x732 = 3387618655064635LLU;
	volatile int32_t t160 = -239;

    t160 = (x729<=(x730*(x731/x732)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x733 = 0U;
	volatile uint32_t x735 = UINT32_MAX;
	static uint64_t x736 = 5803200810LLU;
	volatile int32_t t161 = 1001;

    t161 = (x733<=(x734*(x735/x736)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x741 = INT64_MIN;
	volatile int8_t x742 = INT8_MIN;
	int16_t x743 = INT16_MIN;
	int8_t x744 = 51;
	int32_t t162 = 828484;

    t162 = (x741<=(x742*(x743/x744)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x746 = 1U;
	int16_t x748 = INT16_MIN;
	volatile int32_t t163 = 1;

    t163 = (x745<=(x746*(x747/x748)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x749 = INT64_MIN;
	static int32_t x750 = INT32_MAX;
	static int64_t x751 = INT64_MIN;
	static int64_t x752 = INT64_MIN;

    t164 = (x749<=(x750*(x751/x752)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x757 = -1;
	volatile int32_t x758 = -1;
	int8_t x759 = INT8_MIN;
	uint8_t x760 = UINT8_MAX;
	volatile int32_t t165 = -2;

    t165 = (x757<=(x758*(x759/x760)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x761 = INT8_MIN;
	static uint64_t x763 = UINT64_MAX;
	static int64_t x764 = INT64_MAX;
	volatile int32_t t166 = 444;

    t166 = (x761<=(x762*(x763/x764)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x765 = INT16_MIN;
	volatile int8_t x766 = INT8_MIN;
	int32_t x767 = -1;
	int32_t t167 = 49061721;

    t167 = (x765<=(x766*(x767/x768)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x769 = -1;
	uint32_t x770 = 119912U;
	volatile int32_t x771 = -1;
	volatile int16_t x772 = 16;
	int32_t t168 = -3950;

    t168 = (x769<=(x770*(x771/x772)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x774 = INT32_MAX;
	int64_t x776 = INT64_MIN;
	int32_t t169 = 2;

    t169 = (x773<=(x774*(x775/x776)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x785 = 12U;
	static int16_t x786 = -25;
	static volatile int64_t x787 = -1438296LL;
	uint32_t x788 = 3574995U;
	int32_t t170 = 61354459;

    t170 = (x785<=(x786*(x787/x788)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x789 = INT16_MAX;
	int64_t x790 = INT64_MIN;
	static int16_t x791 = -1;
	uint8_t x792 = 39U;
	volatile int32_t t171 = -1493;

    t171 = (x789<=(x790*(x791/x792)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x795 = INT8_MAX;
	int8_t x796 = INT8_MIN;
	static volatile int32_t t172 = -133665203;

    t172 = (x793<=(x794*(x795/x796)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x801 = UINT64_MAX;
	int64_t x802 = -347280005622703LL;
	uint16_t x803 = 1614U;
	int16_t x804 = INT16_MIN;
	int32_t t173 = 347790;

    t173 = (x801<=(x802*(x803/x804)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x805 = INT8_MAX;
	static int32_t x806 = 373642655;
	volatile uint8_t x807 = UINT8_MAX;
	int32_t x808 = 51090619;
	int32_t t174 = 106578;

    t174 = (x805<=(x806*(x807/x808)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x810 = -5866;
	static int16_t x811 = INT16_MIN;
	volatile int32_t t175 = -54064626;

    t175 = (x809<=(x810*(x811/x812)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x813 = 1425U;
	static int8_t x814 = -1;
	volatile uint8_t x815 = 1U;
	int8_t x816 = 15;

    t176 = (x813<=(x814*(x815/x816)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x817 = -259554808;
	int64_t x818 = 30299LL;
	int64_t x819 = -10095LL;
	int32_t x820 = INT32_MAX;

    t177 = (x817<=(x818*(x819/x820)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x821 = INT32_MIN;
	static volatile int8_t x822 = 4;
	static int64_t x823 = INT64_MIN;
	static volatile uint16_t x824 = 12U;
	static int32_t t178 = 15983117;

    t178 = (x821<=(x822*(x823/x824)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x825 = INT8_MAX;
	int16_t x826 = INT16_MIN;
	volatile int64_t x827 = INT64_MAX;
	static int32_t x828 = 68946034;
	int32_t t179 = 28385;

    t179 = (x825<=(x826*(x827/x828)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x831 = -1;
	int8_t x832 = INT8_MIN;
	int32_t t180 = -28812;

    t180 = (x829<=(x830*(x831/x832)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x833 = INT32_MAX;
	uint16_t x834 = 0U;

    t181 = (x833<=(x834*(x835/x836)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x837 = INT32_MAX;
	static uint8_t x838 = 12U;

    t182 = (x837<=(x838*(x839/x840)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x842 = 17675846U;
	int32_t x843 = 1;
	int64_t x844 = INT64_MIN;
	int32_t t183 = 250085662;

    t183 = (x841<=(x842*(x843/x844)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x845 = INT8_MIN;
	static uint8_t x847 = 0U;
	uint32_t x848 = UINT32_MAX;
	int32_t t184 = 20953052;

    t184 = (x845<=(x846*(x847/x848)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x849 = INT32_MIN;
	static int64_t x851 = INT64_MIN;
	uint8_t x852 = UINT8_MAX;
	static volatile int32_t t185 = 1452;

    t185 = (x849<=(x850*(x851/x852)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x861 = INT64_MIN;
	int32_t x862 = INT32_MIN;
	uint32_t x863 = 483693U;
	int8_t x864 = INT8_MAX;
	int32_t t186 = 59563567;

    t186 = (x861<=(x862*(x863/x864)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x869 = -76;
	uint8_t x870 = UINT8_MAX;
	static int32_t x871 = -1;
	volatile uint8_t x872 = 95U;
	volatile int32_t t187 = -3153;

    t187 = (x869<=(x870*(x871/x872)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x873 = -1;
	int8_t x874 = INT8_MIN;
	uint8_t x876 = UINT8_MAX;
	int32_t t188 = -861030;

    t188 = (x873<=(x874*(x875/x876)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x877 = INT16_MIN;
	volatile int8_t x879 = INT8_MIN;
	uint32_t x880 = 128229310U;
	static int32_t t189 = -303584512;

    t189 = (x877<=(x878*(x879/x880)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x881 = -1;
	int8_t x882 = -3;
	int16_t x883 = INT16_MAX;
	int64_t x884 = -875278179191LL;
	volatile int32_t t190 = -46602650;

    t190 = (x881<=(x882*(x883/x884)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x887 = INT64_MAX;
	volatile int32_t t191 = -791188383;

    t191 = (x885<=(x886*(x887/x888)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x891 = 3813453793189LLU;
	int32_t x892 = 826689;
	volatile int32_t t192 = -765108;

    t192 = (x889<=(x890*(x891/x892)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x893 = INT16_MIN;
	volatile int16_t x894 = -1813;
	uint8_t x895 = 5U;
	static int32_t x896 = INT32_MIN;
	int32_t t193 = 53;

    t193 = (x893<=(x894*(x895/x896)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x897 = 35U;
	int16_t x898 = INT16_MIN;
	uint16_t x899 = 4711U;
	uint16_t x900 = UINT16_MAX;
	volatile int32_t t194 = -927;

    t194 = (x897<=(x898*(x899/x900)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x901 = 1741919LLU;
	uint16_t x902 = 2650U;
	int16_t x904 = INT16_MAX;
	int32_t t195 = 32815;

    t195 = (x901<=(x902*(x903/x904)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x905 = UINT32_MAX;
	int64_t x906 = INT64_MIN;
	int8_t x907 = -1;
	int16_t x908 = INT16_MIN;
	static int32_t t196 = -10;

    t196 = (x905<=(x906*(x907/x908)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x909 = INT32_MIN;
	int32_t x911 = INT32_MIN;
	int32_t x912 = -472843;
	int32_t t197 = -6;

    t197 = (x909<=(x910*(x911/x912)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x913 = 511111369U;
	volatile int16_t x914 = 586;
	int16_t x916 = -1;
	static volatile int32_t t198 = 135012;

    t198 = (x913<=(x914*(x915/x916)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x917 = INT16_MAX;
	static int32_t x918 = INT32_MIN;
	uint32_t x919 = 1005701U;
	static volatile int8_t x920 = INT8_MAX;
	volatile int32_t t199 = -30116854;

    t199 = (x917<=(x918*(x919/x920)));

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

