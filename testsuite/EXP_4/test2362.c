
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

uint16_t x8 = 0U;
int8_t x13 = INT8_MIN;
static int16_t x17 = INT16_MAX;
volatile int8_t x19 = -3;
int32_t t4 = 800994;
int32_t t5 = 5591;
int32_t x26 = INT32_MIN;
static int32_t x27 = -7;
int32_t t6 = 28;
int8_t x31 = INT8_MIN;
volatile int32_t t8 = 0;
int16_t x38 = INT16_MAX;
static uint8_t x40 = 55U;
int32_t t9 = 1047673;
int32_t x42 = INT32_MIN;
volatile int32_t t10 = -169;
int8_t x48 = 18;
int64_t x52 = -1LL;
static int64_t x64 = -1LL;
int32_t t14 = 33759059;
volatile uint64_t x77 = UINT64_MAX;
volatile uint64_t x82 = 3892517643048651LLU;
static volatile uint32_t x95 = UINT32_MAX;
int16_t x100 = INT16_MAX;
int32_t x105 = 519635307;
int8_t x118 = -1;
int8_t x119 = -2;
volatile int16_t x128 = -110;
int8_t x145 = INT8_MIN;
int32_t x148 = 739711318;
int32_t t32 = -127;
volatile int64_t x153 = -25201LL;
int64_t x154 = INT64_MIN;
uint64_t x163 = UINT64_MAX;
int32_t t34 = 516082222;
int8_t x166 = 11;
volatile int32_t t36 = -43476;
static volatile uint32_t x182 = 0U;
int16_t x185 = 1;
volatile int32_t t38 = 5;
int8_t x200 = 9;
volatile int32_t x202 = INT32_MAX;
static uint16_t x203 = 0U;
volatile uint64_t x206 = UINT64_MAX;
uint16_t x208 = UINT16_MAX;
int16_t x216 = 71;
int8_t x220 = 3;
static int8_t x221 = -1;
int32_t x224 = INT32_MIN;
static int16_t x230 = -1;
uint8_t x231 = UINT8_MAX;
volatile int64_t x232 = INT64_MAX;
int32_t t50 = 562464;
int64_t x253 = 596155608547LL;
int64_t x259 = INT64_MAX;
volatile int64_t x260 = -1LL;
static volatile uint64_t x261 = 1202889995746LLU;
volatile uint32_t x265 = 76U;
static int16_t x268 = -6364;
volatile uint16_t x271 = 5132U;
int32_t x282 = INT32_MAX;
int16_t x296 = 157;
int64_t x301 = INT64_MIN;
int64_t x303 = -2294181362LL;
uint16_t x307 = UINT16_MAX;
int8_t x313 = -1;
static int32_t x320 = -51077852;
static volatile int32_t t67 = 239692;
static int32_t x321 = INT32_MAX;
static uint16_t x327 = 0U;
int32_t t69 = 621370680;
volatile int32_t t70 = 4963523;
volatile uint8_t x344 = 34U;
volatile int16_t x365 = 1718;
int64_t x369 = -927LL;
int64_t x378 = -1LL;
uint64_t x381 = UINT64_MAX;
int64_t x385 = INT64_MIN;
int64_t x386 = -4LL;
int32_t x391 = INT32_MIN;
int32_t t83 = 190044150;
uint8_t x396 = UINT8_MAX;
uint8_t x397 = 5U;
volatile uint16_t x402 = UINT16_MAX;
int8_t x403 = INT8_MIN;
int64_t x405 = -1LL;
uint16_t x408 = 6U;
static uint16_t x412 = UINT16_MAX;
int32_t t88 = -26398941;
static int64_t x413 = INT64_MIN;
volatile int16_t x421 = INT16_MIN;
uint64_t x422 = UINT64_MAX;
int64_t x423 = -1LL;
uint16_t x430 = UINT16_MAX;
volatile int64_t x432 = INT64_MIN;
uint64_t x435 = UINT64_MAX;
int32_t t96 = 229;
volatile uint8_t x448 = UINT8_MAX;
int64_t x455 = INT64_MIN;
static int32_t x457 = 2556709;
int8_t x459 = -1;
volatile int16_t x460 = INT16_MIN;
volatile int32_t t100 = 88928;
static uint64_t x462 = UINT64_MAX;
int8_t x463 = INT8_MIN;
int64_t x469 = INT64_MAX;
uint16_t x470 = 0U;
uint8_t x472 = 1U;
uint32_t x473 = 57915U;
volatile int8_t x479 = -1;
static int64_t x480 = -1LL;
static uint64_t x482 = 35261921734LLU;
int8_t x489 = 15;
int32_t x494 = -1;
volatile int8_t x495 = 7;
static volatile int16_t x503 = -119;
volatile int32_t x504 = 1;
static volatile int64_t x513 = 7345464900310257LL;
int32_t x515 = -43111;
static volatile int16_t x525 = INT16_MAX;
static uint32_t x526 = 2U;
int32_t t118 = 599;
volatile int16_t x538 = 0;
int32_t x540 = INT32_MIN;
int32_t t121 = 0;
int32_t x547 = INT32_MIN;
uint64_t x557 = 5238724405864475934LLU;
int64_t x561 = 1301382LL;
static uint16_t x570 = 277U;
int8_t x573 = 0;
int32_t t132 = -77100;
int32_t t133 = 75;
volatile uint32_t x610 = UINT32_MAX;
volatile int16_t x613 = INT16_MIN;
int16_t x617 = 906;
uint64_t x618 = UINT64_MAX;
volatile int16_t x619 = 82;
int8_t x621 = INT8_MIN;
static int64_t x636 = -291840250086134298LL;
static uint16_t x639 = 25216U;
static volatile int16_t x642 = INT16_MAX;
uint64_t x643 = 1265827114508785028LLU;
uint64_t x648 = 587587667028LLU;
volatile int32_t x650 = -1;
int32_t x651 = -1;
int16_t x657 = -1;
int32_t x658 = -45205;
static uint16_t x659 = 1554U;
static int32_t t146 = 40609;
uint16_t x662 = 2193U;
int64_t x663 = 1755089463743LL;
volatile int16_t x670 = -1;
static int32_t x672 = -1;
int8_t x686 = INT8_MIN;
static volatile int32_t t152 = -3464898;
uint32_t x690 = 1171951U;
int16_t x693 = INT16_MAX;
uint8_t x700 = UINT8_MAX;
static int32_t t155 = -402;
static volatile int16_t x701 = INT16_MIN;
int16_t x708 = 14085;
int32_t t157 = -4;
int64_t x712 = INT64_MAX;
static int32_t t158 = -149769820;
int64_t x722 = 244107100LL;
volatile uint32_t x723 = 1305048202U;
volatile int32_t t162 = 9455;
int64_t x730 = INT64_MAX;
int8_t x740 = -14;
int32_t t165 = -1093642;
int32_t x744 = 416570;
uint32_t x746 = 193773U;
uint32_t x748 = 318U;
uint16_t x750 = UINT16_MAX;
uint8_t x751 = 125U;
int32_t t168 = 116969909;
int32_t t169 = -21;
int8_t x759 = -52;
volatile uint8_t x761 = 4U;
volatile int32_t x762 = 0;
uint32_t x763 = UINT32_MAX;
int64_t x765 = -8126172804197481LL;
int16_t x770 = 4315;
static uint16_t x771 = 5554U;
volatile int64_t x774 = INT64_MIN;
static int8_t x775 = -1;
volatile uint32_t x782 = 13883U;
int32_t t178 = 471988;
int64_t x794 = -1LL;
volatile uint16_t x795 = 3U;
int32_t x800 = -459;
uint64_t x812 = 221919LLU;
int16_t x816 = -7;
int64_t x819 = INT64_MIN;
int16_t x824 = -470;
int64_t x828 = -1LL;
int32_t t188 = -20617;
static volatile int64_t x839 = INT64_MIN;
static uint16_t x848 = UINT16_MAX;
static int32_t t191 = -3925;
uint32_t x849 = 0U;
static volatile int32_t x852 = -3;
volatile int32_t t193 = 122924;
int32_t x861 = -1;
volatile int32_t t195 = 4003;
int32_t t196 = -2487;
uint32_t x875 = 2U;


void f0(void) {
    	int16_t x1 = -1;
	static int8_t x2 = INT8_MIN;
	static uint16_t x3 = 12033U;
	int64_t x4 = 3574132194LL;
	volatile int32_t t0 = -27826;

    t0 = (x1<=(x2+(x3|x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = 2U;
	int8_t x6 = INT8_MAX;
	uint32_t x7 = 166U;
	int32_t t1 = 0;

    t1 = (x5<=(x6+(x7|x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MIN;
	int8_t x11 = -6;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -1980530;

    t2 = (x9<=(x10+(x11|x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x14 = 1398479225151LLU;
	int32_t x15 = -1;
	static int16_t x16 = 0;
	volatile int32_t t3 = -1;

    t3 = (x13<=(x14+(x15|x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x18 = UINT16_MAX;
	static int64_t x20 = INT64_MIN;

    t4 = (x17<=(x18+(x19|x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MIN;
	int32_t x22 = -1;
	int16_t x23 = 6;
	int8_t x24 = INT8_MAX;

    t5 = (x21<=(x22+(x23|x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -71;
	int64_t x28 = INT64_MAX;

    t6 = (x25<=(x26+(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	uint64_t x30 = 34745676285745LLU;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 229;

    t7 = (x29<=(x30+(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 212254662LLU;
	int16_t x34 = -1;
	volatile int16_t x35 = -1408;
	uint64_t x36 = 3417527427LLU;

    t8 = (x33<=(x34+(x35|x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 135224817500731LLU;
	static int16_t x39 = INT16_MAX;

    t9 = (x37<=(x38+(x39|x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x41 = -1;
	int64_t x43 = INT64_MAX;
	int16_t x44 = 2425;

    t10 = (x41<=(x42+(x43|x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 234U;
	uint16_t x46 = UINT16_MAX;
	volatile int32_t x47 = 11376138;
	int32_t t11 = 115827127;

    t11 = (x45<=(x46+(x47|x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	volatile int32_t x50 = -1;
	volatile int16_t x51 = INT16_MIN;
	int32_t t12 = 144402;

    t12 = (x49<=(x50+(x51|x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	uint8_t x54 = 98U;
	volatile uint64_t x55 = 8228406LLU;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -983;

    t13 = (x53<=(x54+(x55|x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = -63015737891624547LL;
	static volatile int32_t x62 = -1;
	int16_t x63 = INT16_MIN;

    t14 = (x61<=(x62+(x63|x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x69 = INT32_MAX;
	int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = 1348LLU;
	volatile int32_t t15 = 930897657;

    t15 = (x69<=(x70+(x71|x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x73 = -2037113318046769773LL;
	static volatile int8_t x74 = INT8_MIN;
	static volatile int8_t x75 = -1;
	int64_t x76 = -1LL;
	volatile int32_t t16 = -16705;

    t16 = (x73<=(x74+(x75|x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x78 = 1972;
	uint32_t x79 = 64U;
	int64_t x80 = -300429134664943836LL;
	int32_t t17 = 451510421;

    t17 = (x77<=(x78+(x79|x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x81 = INT8_MIN;
	int8_t x83 = 1;
	int16_t x84 = INT16_MIN;
	int32_t t18 = -60413;

    t18 = (x81<=(x82+(x83|x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = -846402733;
	static int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MAX;
	int16_t x92 = 0;
	volatile int32_t t19 = -1;

    t19 = (x89<=(x90+(x91|x92)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x93 = UINT8_MAX;
	int16_t x94 = 49;
	uint64_t x96 = UINT64_MAX;
	static int32_t t20 = -470991449;

    t20 = (x93<=(x94+(x95|x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	int8_t x98 = 1;
	uint64_t x99 = UINT64_MAX;
	int32_t t21 = -11155;

    t21 = (x97<=(x98+(x99|x100)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	static int8_t x103 = -5;
	int64_t x104 = INT64_MIN;
	int32_t t22 = -905;

    t22 = (x101<=(x102+(x103|x104)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = -6;
	static int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t23 = -114799112;

    t23 = (x105<=(x106+(x107|x108)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x109 = INT32_MAX;
	volatile int64_t x110 = INT64_MIN;
	static int16_t x111 = -276;
	uint32_t x112 = 58112617U;
	volatile int32_t t24 = 0;

    t24 = (x109<=(x110+(x111|x112)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	volatile uint16_t x114 = 3U;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = INT64_MAX;
	static volatile int32_t t25 = 1;

    t25 = (x113<=(x114+(x115|x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x117 = INT8_MAX;
	static uint64_t x120 = 69140720291721159LLU;
	volatile int32_t t26 = -392701188;

    t26 = (x117<=(x118+(x119|x120)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x121 = 48LLU;
	int8_t x122 = -5;
	int32_t x123 = -1;
	uint32_t x124 = 2182618U;
	volatile int32_t t27 = 6;

    t27 = (x121<=(x122+(x123|x124)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x125 = 0U;
	uint32_t x126 = UINT32_MAX;
	static volatile int32_t x127 = -14899767;
	volatile int32_t t28 = 3;

    t28 = (x125<=(x126+(x127|x128)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = 245;
	int32_t x130 = -1;
	static int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MIN;
	volatile int32_t t29 = -81315734;

    t29 = (x129<=(x130+(x131|x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MIN;
	uint32_t x143 = 415448U;
	int8_t x144 = -1;
	volatile int32_t t30 = -100766;

    t30 = (x141<=(x142+(x143|x144)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x146 = INT64_MIN;
	uint32_t x147 = 77U;
	static volatile int32_t t31 = -11015152;

    t31 = (x145<=(x146+(x147|x148)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x149 = -1;
	volatile int8_t x150 = INT8_MIN;
	int16_t x151 = INT16_MIN;
	int8_t x152 = -1;

    t32 = (x149<=(x150+(x151|x152)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x155 = 2176479U;
	int8_t x156 = INT8_MIN;
	volatile int32_t t33 = -3925588;

    t33 = (x153<=(x154+(x155|x156)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	volatile int32_t x162 = INT32_MIN;
	int16_t x164 = INT16_MIN;

    t34 = (x161<=(x162+(x163|x164)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = INT16_MIN;
	static int32_t x167 = INT32_MIN;
	volatile int64_t x168 = INT64_MAX;
	volatile int32_t t35 = -245907402;

    t35 = (x165<=(x166+(x167|x168)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x177 = INT64_MIN;
	uint32_t x178 = UINT32_MAX;
	volatile int32_t x179 = INT32_MIN;
	int16_t x180 = -1;

    t36 = (x177<=(x178+(x179|x180)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x181 = 7907U;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = UINT8_MAX;
	static volatile int32_t t37 = 94;

    t37 = (x181<=(x182+(x183|x184)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x186 = 3950U;
	int8_t x187 = INT8_MIN;
	volatile uint64_t x188 = 15775119LLU;

    t38 = (x185<=(x186+(x187|x188)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x189 = INT64_MAX;
	volatile int16_t x190 = INT16_MAX;
	int64_t x191 = INT64_MIN;
	int8_t x192 = 49;
	volatile int32_t t39 = 3615;

    t39 = (x189<=(x190+(x191|x192)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x193 = INT64_MAX;
	int32_t x194 = 3;
	int16_t x195 = INT16_MIN;
	volatile uint64_t x196 = UINT64_MAX;
	int32_t t40 = -21862110;

    t40 = (x193<=(x194+(x195|x196)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x197 = -18;
	int32_t x198 = 52;
	static int32_t x199 = -99285;
	int32_t t41 = 25792565;

    t41 = (x197<=(x198+(x199|x200)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x201 = UINT16_MAX;
	uint32_t x204 = 154703149U;
	volatile int32_t t42 = 4284347;

    t42 = (x201<=(x202+(x203|x204)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x205 = UINT64_MAX;
	int32_t x207 = 1;
	volatile int32_t t43 = 169;

    t43 = (x205<=(x206+(x207|x208)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x209 = 3LLU;
	int8_t x210 = -1;
	int16_t x211 = 208;
	uint32_t x212 = UINT32_MAX;
	int32_t t44 = 13837;

    t44 = (x209<=(x210+(x211|x212)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	static int16_t x215 = INT16_MAX;
	int32_t t45 = -29009;

    t45 = (x213<=(x214+(x215|x216)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x217 = 5441594519LLU;
	static int32_t x218 = INT32_MIN;
	int16_t x219 = 582;
	int32_t t46 = -230398;

    t46 = (x217<=(x218+(x219|x220)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x222 = 1;
	int64_t x223 = INT64_MAX;
	int32_t t47 = 62514;

    t47 = (x221<=(x222+(x223|x224)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x225 = -1LL;
	int32_t x226 = -1006215704;
	volatile int16_t x227 = INT16_MIN;
	volatile int32_t x228 = -1;
	volatile int32_t t48 = -7;

    t48 = (x225<=(x226+(x227|x228)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x229 = INT32_MIN;
	volatile int32_t t49 = -14187238;

    t49 = (x229<=(x230+(x231|x232)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	static int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MAX;

    t50 = (x233<=(x234+(x235|x236)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x237 = INT8_MIN;
	volatile int32_t x238 = -1;
	uint16_t x239 = 11U;
	uint8_t x240 = UINT8_MAX;
	int32_t t51 = -193399;

    t51 = (x237<=(x238+(x239|x240)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x241 = INT32_MIN;
	static uint64_t x242 = 179579733243337965LLU;
	int64_t x243 = INT64_MIN;
	volatile uint32_t x244 = 68958652U;
	volatile int32_t t52 = -207;

    t52 = (x241<=(x242+(x243|x244)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x245 = 0;
	static uint32_t x246 = 215021512U;
	volatile uint8_t x247 = UINT8_MAX;
	int64_t x248 = -1LL;
	int32_t t53 = 18370;

    t53 = (x245<=(x246+(x247|x248)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x254 = 29U;
	static volatile int32_t x255 = -1;
	uint16_t x256 = 408U;
	static volatile int32_t t54 = -274;

    t54 = (x253<=(x254+(x255|x256)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x257 = -1;
	uint8_t x258 = UINT8_MAX;
	static volatile int32_t t55 = -51782982;

    t55 = (x257<=(x258+(x259|x260)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x262 = INT32_MIN;
	int64_t x263 = -118785020144LL;
	int8_t x264 = -1;
	int32_t t56 = 7302573;

    t56 = (x261<=(x262+(x263|x264)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	volatile int32_t t57 = -13227043;

    t57 = (x265<=(x266+(x267|x268)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x269 = 4U;
	uint8_t x270 = 1U;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t58 = -27342806;

    t58 = (x269<=(x270+(x271|x272)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x281 = -68510908LL;
	uint8_t x283 = 0U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t59 = -20;

    t59 = (x281<=(x282+(x283|x284)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x285 = INT16_MIN;
	int8_t x286 = -1;
	int8_t x287 = 5;
	volatile int32_t x288 = -1;
	volatile int32_t t60 = -22;

    t60 = (x285<=(x286+(x287|x288)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x289 = 4U;
	volatile int8_t x290 = -1;
	static uint64_t x291 = 841702450LLU;
	int32_t x292 = 108;
	static volatile int32_t t61 = -1155920;

    t61 = (x289<=(x290+(x291|x292)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x293 = INT8_MAX;
	static int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MAX;
	volatile int32_t t62 = -38;

    t62 = (x293<=(x294+(x295|x296)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x297 = INT64_MAX;
	volatile uint32_t x298 = 1U;
	uint64_t x299 = 10996LLU;
	volatile int32_t x300 = INT32_MIN;
	int32_t t63 = 6;

    t63 = (x297<=(x298+(x299|x300)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x302 = INT8_MIN;
	static uint16_t x304 = UINT16_MAX;
	int32_t t64 = -730;

    t64 = (x301<=(x302+(x303|x304)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x305 = UINT8_MAX;
	int32_t x306 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	static int32_t t65 = 5288056;

    t65 = (x305<=(x306+(x307|x308)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x314 = UINT32_MAX;
	int8_t x315 = -1;
	int32_t x316 = INT32_MAX;
	int32_t t66 = 596802467;

    t66 = (x313<=(x314+(x315|x316)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x317 = 14U;
	int32_t x318 = -1;
	int32_t x319 = 0;

    t67 = (x317<=(x318+(x319|x320)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x322 = -1;
	int16_t x323 = INT16_MAX;
	uint64_t x324 = 95LLU;
	static volatile int32_t t68 = -932472932;

    t68 = (x321<=(x322+(x323|x324)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x325 = UINT8_MAX;
	volatile uint64_t x326 = 159180269733392LLU;
	static uint16_t x328 = 3U;

    t69 = (x325<=(x326+(x327|x328)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x329 = -31745005869LL;
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = -1;

    t70 = (x329<=(x330+(x331|x332)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x341 = INT8_MIN;
	uint16_t x342 = 4U;
	int8_t x343 = INT8_MAX;
	int32_t t71 = 6317995;

    t71 = (x341<=(x342+(x343|x344)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x345 = 11652;
	static int8_t x346 = INT8_MIN;
	static int16_t x347 = -6376;
	int32_t x348 = INT32_MIN;
	int32_t t72 = 37;

    t72 = (x345<=(x346+(x347|x348)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x349 = -1LL;
	volatile int64_t x350 = -2962410633836226LL;
	uint64_t x351 = 13879700621364LLU;
	int32_t x352 = 34318;
	int32_t t73 = -397476;

    t73 = (x349<=(x350+(x351|x352)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x353 = 1U;
	uint16_t x354 = 5U;
	uint8_t x355 = UINT8_MAX;
	static uint32_t x356 = 903U;
	volatile int32_t t74 = -6;

    t74 = (x353<=(x354+(x355|x356)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x357 = 45734240139641705LLU;
	int16_t x358 = 7924;
	uint32_t x359 = 49438644U;
	uint32_t x360 = UINT32_MAX;
	int32_t t75 = 109;

    t75 = (x357<=(x358+(x359|x360)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x361 = INT16_MIN;
	uint64_t x362 = UINT64_MAX;
	uint32_t x363 = UINT32_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t76 = -332;

    t76 = (x361<=(x362+(x363|x364)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x366 = INT64_MIN;
	volatile int32_t x367 = INT32_MAX;
	uint64_t x368 = 854107325132887LLU;
	int32_t t77 = 27573;

    t77 = (x365<=(x366+(x367|x368)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x370 = -7;
	int64_t x371 = -1175797LL;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t78 = -883288946;

    t78 = (x369<=(x370+(x371|x372)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x373 = INT64_MAX;
	static int16_t x374 = INT16_MAX;
	static uint64_t x375 = 280LLU;
	int64_t x376 = INT64_MIN;
	volatile int32_t t79 = 165976035;

    t79 = (x373<=(x374+(x375|x376)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x377 = 324861LLU;
	int16_t x379 = -1;
	static uint32_t x380 = UINT32_MAX;
	volatile int32_t t80 = 10140351;

    t80 = (x377<=(x378+(x379|x380)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x382 = -1;
	int32_t x383 = INT32_MAX;
	int32_t x384 = 119;
	volatile int32_t t81 = -971;

    t81 = (x381<=(x382+(x383|x384)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x387 = 2U;
	static volatile uint16_t x388 = 291U;
	volatile int32_t t82 = -2939;

    t82 = (x385<=(x386+(x387|x388)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x389 = INT64_MAX;
	uint32_t x390 = UINT32_MAX;
	uint8_t x392 = 3U;

    t83 = (x389<=(x390+(x391|x392)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x393 = INT8_MAX;
	int32_t x394 = 8958;
	int32_t x395 = -1;
	int32_t t84 = 12486348;

    t84 = (x393<=(x394+(x395|x396)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x398 = 5886219U;
	volatile int16_t x399 = -1;
	volatile uint64_t x400 = UINT64_MAX;
	static int32_t t85 = 2687;

    t85 = (x397<=(x398+(x399|x400)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x401 = INT32_MIN;
	uint16_t x404 = 106U;
	volatile int32_t t86 = 730483;

    t86 = (x401<=(x402+(x403|x404)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x406 = INT16_MAX;
	int16_t x407 = INT16_MIN;
	int32_t t87 = -377;

    t87 = (x405<=(x406+(x407|x408)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x409 = 21798179U;
	int8_t x410 = 20;
	volatile int32_t x411 = 201606;

    t88 = (x409<=(x410+(x411|x412)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x414 = 900595608;
	static int32_t x415 = 1;
	int64_t x416 = INT64_MIN;
	static int32_t t89 = 63874;

    t89 = (x413<=(x414+(x415|x416)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x417 = INT8_MIN;
	uint32_t x418 = 728133218U;
	int16_t x419 = -46;
	int8_t x420 = 25;
	int32_t t90 = 15;

    t90 = (x417<=(x418+(x419|x420)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x424 = INT64_MAX;
	int32_t t91 = -415090;

    t91 = (x421<=(x422+(x423|x424)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x425 = -1;
	static int16_t x426 = 767;
	int16_t x427 = 24;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t92 = -4;

    t92 = (x425<=(x426+(x427|x428)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x429 = UINT8_MAX;
	int32_t x431 = 16535667;
	volatile int32_t t93 = 134143;

    t93 = (x429<=(x430+(x431|x432)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x433 = INT8_MAX;
	int32_t x434 = INT32_MIN;
	uint32_t x436 = 5392U;
	volatile int32_t t94 = 100132723;

    t94 = (x433<=(x434+(x435|x436)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x437 = 4053261538787513LLU;
	int32_t x438 = 30241143;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = INT32_MAX;
	volatile int32_t t95 = 436927;

    t95 = (x437<=(x438+(x439|x440)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = -46990;
	uint64_t x442 = 309625076LLU;
	volatile uint32_t x443 = 3U;
	int8_t x444 = INT8_MIN;

    t96 = (x441<=(x442+(x443|x444)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x445 = 473U;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = -55;
	static int32_t t97 = -1061544384;

    t97 = (x445<=(x446+(x447|x448)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x449 = UINT8_MAX;
	uint8_t x450 = UINT8_MAX;
	volatile int16_t x451 = INT16_MAX;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t98 = -253;

    t98 = (x449<=(x450+(x451|x452)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x453 = UINT8_MAX;
	int16_t x454 = 0;
	volatile int64_t x456 = INT64_MIN;
	static volatile int32_t t99 = -5770;

    t99 = (x453<=(x454+(x455|x456)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x458 = UINT32_MAX;

    t100 = (x457<=(x458+(x459|x460)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x461 = UINT8_MAX;
	int32_t x464 = -1;
	volatile int32_t t101 = 1334;

    t101 = (x461<=(x462+(x463|x464)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x465 = -226501;
	uint16_t x466 = 13U;
	int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MAX;
	volatile int32_t t102 = 0;

    t102 = (x465<=(x466+(x467|x468)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x471 = INT16_MIN;
	static int32_t t103 = 63435;

    t103 = (x469<=(x470+(x471|x472)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x474 = 25294610942LLU;
	static volatile int64_t x475 = INT64_MAX;
	int8_t x476 = -1;
	static volatile int32_t t104 = -455987182;

    t104 = (x473<=(x474+(x475|x476)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x477 = -36;
	volatile uint8_t x478 = 3U;
	static int32_t t105 = -22;

    t105 = (x477<=(x478+(x479|x480)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x481 = -1LL;
	volatile uint8_t x483 = 0U;
	int8_t x484 = -1;
	int32_t t106 = -236;

    t106 = (x481<=(x482+(x483|x484)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x485 = INT16_MIN;
	static int32_t x486 = -81175;
	int8_t x487 = -5;
	int8_t x488 = INT8_MIN;
	int32_t t107 = -995545309;

    t107 = (x485<=(x486+(x487|x488)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x490 = 0U;
	static int8_t x491 = INT8_MAX;
	static uint8_t x492 = UINT8_MAX;
	static volatile int32_t t108 = -21428604;

    t108 = (x489<=(x490+(x491|x492)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x493 = -1;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t109 = 2229;

    t109 = (x493<=(x494+(x495|x496)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x497 = INT8_MIN;
	static uint64_t x498 = 134604LLU;
	int32_t x499 = INT32_MIN;
	int64_t x500 = 9LL;
	int32_t t110 = 1050;

    t110 = (x497<=(x498+(x499|x500)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x501 = INT16_MAX;
	volatile uint64_t x502 = 4870230351237657901LLU;
	volatile int32_t t111 = -200759;

    t111 = (x501<=(x502+(x503|x504)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x505 = INT16_MIN;
	uint16_t x506 = 0U;
	uint32_t x507 = 6885362U;
	int8_t x508 = -3;
	int32_t t112 = 280324827;

    t112 = (x505<=(x506+(x507|x508)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = -1LL;
	static int32_t x510 = INT32_MAX;
	static volatile int16_t x511 = INT16_MIN;
	int16_t x512 = 26;
	int32_t t113 = -850983628;

    t113 = (x509<=(x510+(x511|x512)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x514 = INT16_MIN;
	uint32_t x516 = 576977723U;
	static volatile int32_t t114 = 123937909;

    t114 = (x513<=(x514+(x515|x516)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x517 = 7U;
	static int16_t x518 = INT16_MIN;
	static int64_t x519 = 26710630569LL;
	static int8_t x520 = INT8_MIN;
	int32_t t115 = 658;

    t115 = (x517<=(x518+(x519|x520)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x521 = INT8_MAX;
	volatile int64_t x522 = INT64_MAX;
	volatile int8_t x523 = INT8_MIN;
	int16_t x524 = -1;
	static int32_t t116 = -9141;

    t116 = (x521<=(x522+(x523|x524)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x527 = 0;
	int8_t x528 = INT8_MAX;
	int32_t t117 = 33233258;

    t117 = (x525<=(x526+(x527|x528)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x529 = 0U;
	static int32_t x530 = 15;
	uint16_t x531 = UINT16_MAX;
	uint16_t x532 = 6691U;

    t118 = (x529<=(x530+(x531|x532)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x533 = 3;
	int32_t x534 = INT32_MAX;
	int64_t x535 = -4225648399765380LL;
	uint32_t x536 = 8665524U;
	int32_t t119 = 2064116;

    t119 = (x533<=(x534+(x535|x536)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x537 = 11341U;
	int8_t x539 = INT8_MIN;
	int32_t t120 = 1;

    t120 = (x537<=(x538+(x539|x540)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x541 = 23;
	static uint32_t x542 = 8U;
	uint32_t x543 = 2745U;
	volatile int64_t x544 = INT64_MIN;

    t121 = (x541<=(x542+(x543|x544)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x545 = -32;
	int8_t x546 = -9;
	static int32_t x548 = -15;
	volatile int32_t t122 = 719;

    t122 = (x545<=(x546+(x547|x548)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x549 = 4328907314453546LL;
	int64_t x550 = INT64_MIN;
	static int32_t x551 = -28065653;
	static volatile uint32_t x552 = 1837873537U;
	int32_t t123 = -22897;

    t123 = (x549<=(x550+(x551|x552)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x553 = 174521154598LLU;
	uint16_t x554 = 27148U;
	uint64_t x555 = 104991LLU;
	int16_t x556 = INT16_MIN;
	int32_t t124 = -43639277;

    t124 = (x553<=(x554+(x555|x556)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x558 = INT16_MIN;
	static volatile int64_t x559 = INT64_MIN;
	int64_t x560 = 1624275079442LL;
	volatile int32_t t125 = 14714214;

    t125 = (x557<=(x558+(x559|x560)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x562 = INT32_MIN;
	static volatile int8_t x563 = 0;
	volatile int64_t x564 = INT64_MAX;
	volatile int32_t t126 = -648351039;

    t126 = (x561<=(x562+(x563|x564)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x569 = INT8_MAX;
	static uint16_t x571 = 1U;
	static int32_t x572 = 3907172;
	volatile int32_t t127 = 0;

    t127 = (x569<=(x570+(x571|x572)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x574 = INT16_MIN;
	static int64_t x575 = -1LL;
	static int8_t x576 = -1;
	static int32_t t128 = 468;

    t128 = (x573<=(x574+(x575|x576)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x581 = 14289407U;
	volatile int8_t x582 = INT8_MIN;
	static int32_t x583 = -1;
	volatile uint8_t x584 = 25U;
	volatile int32_t t129 = -168;

    t129 = (x581<=(x582+(x583|x584)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x585 = -43;
	static int16_t x586 = -31;
	int8_t x587 = -1;
	int16_t x588 = INT16_MAX;
	int32_t t130 = -62;

    t130 = (x585<=(x586+(x587|x588)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x589 = 8775975175762065LLU;
	int32_t x590 = 1;
	int16_t x591 = -860;
	volatile uint8_t x592 = 4U;
	static volatile int32_t t131 = 1879;

    t131 = (x589<=(x590+(x591|x592)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x593 = -7;
	static uint32_t x594 = 416U;
	uint32_t x595 = 78265U;
	int8_t x596 = INT8_MIN;

    t132 = (x593<=(x594+(x595|x596)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x601 = INT8_MIN;
	static int16_t x602 = INT16_MIN;
	volatile int64_t x603 = -1LL;
	static int16_t x604 = 335;

    t133 = (x601<=(x602+(x603|x604)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x605 = 162U;
	int64_t x606 = INT64_MIN;
	int64_t x607 = INT64_MAX;
	int64_t x608 = 5423776767088LL;
	int32_t t134 = 1975955;

    t134 = (x605<=(x606+(x607|x608)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x609 = -1;
	volatile int16_t x611 = INT16_MIN;
	volatile int32_t x612 = -1;
	static volatile int32_t t135 = -833358011;

    t135 = (x609<=(x610+(x611|x612)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x614 = UINT32_MAX;
	int8_t x615 = INT8_MIN;
	int64_t x616 = INT64_MIN;
	static volatile int32_t t136 = -5345;

    t136 = (x613<=(x614+(x615|x616)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x620 = INT8_MAX;
	volatile int32_t t137 = -63;

    t137 = (x617<=(x618+(x619|x620)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x622 = 1163U;
	uint32_t x623 = UINT32_MAX;
	uint8_t x624 = 1U;
	static volatile int32_t t138 = 1151416;

    t138 = (x621<=(x622+(x623|x624)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x625 = INT16_MIN;
	static uint8_t x626 = 0U;
	static int32_t x627 = INT32_MIN;
	uint64_t x628 = UINT64_MAX;
	volatile int32_t t139 = 28;

    t139 = (x625<=(x626+(x627|x628)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x633 = INT16_MIN;
	int32_t x634 = -1;
	uint16_t x635 = UINT16_MAX;
	static volatile int32_t t140 = -52;

    t140 = (x633<=(x634+(x635|x636)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x637 = 24;
	uint32_t x638 = UINT32_MAX;
	int64_t x640 = INT64_MIN;
	int32_t t141 = 89456;

    t141 = (x637<=(x638+(x639|x640)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x641 = -1;
	int64_t x644 = -1LL;
	int32_t t142 = -536;

    t142 = (x641<=(x642+(x643|x644)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x645 = UINT64_MAX;
	uint8_t x646 = UINT8_MAX;
	int16_t x647 = INT16_MAX;
	volatile int32_t t143 = -11269921;

    t143 = (x645<=(x646+(x647|x648)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x649 = 3965U;
	uint32_t x652 = 12820U;
	int32_t t144 = -134;

    t144 = (x649<=(x650+(x651|x652)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x653 = INT64_MIN;
	uint32_t x654 = UINT32_MAX;
	volatile int8_t x655 = -1;
	int16_t x656 = INT16_MIN;
	static int32_t t145 = -986116222;

    t145 = (x653<=(x654+(x655|x656)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x660 = 1175666LLU;

    t146 = (x657<=(x658+(x659|x660)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x661 = UINT8_MAX;
	static volatile int64_t x664 = 685LL;
	volatile int32_t t147 = 22212903;

    t147 = (x661<=(x662+(x663|x664)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x665 = 4037185418714LLU;
	volatile int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MAX;
	int64_t x668 = INT64_MAX;
	int32_t t148 = -648;

    t148 = (x665<=(x666+(x667|x668)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x669 = -200;
	int16_t x671 = -7;
	int32_t t149 = 1498;

    t149 = (x669<=(x670+(x671|x672)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x673 = UINT16_MAX;
	int32_t x674 = 913498138;
	uint8_t x675 = 14U;
	volatile int64_t x676 = INT64_MIN;
	volatile int32_t t150 = 3;

    t150 = (x673<=(x674+(x675|x676)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x681 = INT8_MIN;
	volatile int16_t x682 = -13;
	volatile int64_t x683 = INT64_MIN;
	int8_t x684 = INT8_MAX;
	volatile int32_t t151 = -417;

    t151 = (x681<=(x682+(x683|x684)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x685 = INT64_MAX;
	uint16_t x687 = 32U;
	int8_t x688 = 1;

    t152 = (x685<=(x686+(x687|x688)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x689 = UINT16_MAX;
	volatile uint8_t x691 = 33U;
	int32_t x692 = INT32_MIN;
	static int32_t t153 = 1;

    t153 = (x689<=(x690+(x691|x692)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x694 = 1129150U;
	int16_t x695 = INT16_MAX;
	volatile int64_t x696 = 64360118547LL;
	volatile int32_t t154 = 12080456;

    t154 = (x693<=(x694+(x695|x696)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x697 = 8U;
	uint32_t x698 = 226151U;
	int16_t x699 = -10736;

    t155 = (x697<=(x698+(x699|x700)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x702 = INT16_MIN;
	int16_t x703 = 6237;
	volatile int32_t x704 = 1386835;
	volatile int32_t t156 = 56068;

    t156 = (x701<=(x702+(x703|x704)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x705 = INT8_MIN;
	uint8_t x706 = 3U;
	uint64_t x707 = 2443LLU;

    t157 = (x705<=(x706+(x707|x708)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x709 = -1;
	static int8_t x710 = -9;
	int32_t x711 = INT32_MIN;

    t158 = (x709<=(x710+(x711|x712)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x713 = INT8_MIN;
	static int16_t x714 = INT16_MIN;
	volatile uint16_t x715 = 759U;
	uint64_t x716 = 130140743395077445LLU;
	int32_t t159 = 27;

    t159 = (x713<=(x714+(x715|x716)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x717 = INT64_MIN;
	static int8_t x718 = 8;
	int64_t x719 = -1LL;
	uint32_t x720 = 21321165U;
	int32_t t160 = -51401;

    t160 = (x717<=(x718+(x719|x720)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x721 = 312943960U;
	int16_t x724 = INT16_MIN;
	int32_t t161 = 4122702;

    t161 = (x721<=(x722+(x723|x724)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x725 = 260264299LL;
	volatile uint8_t x726 = 114U;
	static int16_t x727 = -1;
	uint64_t x728 = 29LLU;

    t162 = (x725<=(x726+(x727|x728)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x729 = UINT64_MAX;
	int64_t x731 = INT64_MIN;
	static int64_t x732 = 157042916231LL;
	volatile int32_t t163 = 7998965;

    t163 = (x729<=(x730+(x731|x732)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x733 = 53U;
	int32_t x734 = INT32_MAX;
	uint64_t x735 = 121379531400683010LLU;
	uint16_t x736 = 21535U;
	static int32_t t164 = 100052;

    t164 = (x733<=(x734+(x735|x736)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x737 = -1;
	static volatile int32_t x738 = 0;
	volatile int8_t x739 = -15;

    t165 = (x737<=(x738+(x739|x740)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x741 = INT32_MIN;
	int16_t x742 = -1;
	int64_t x743 = 0LL;
	int32_t t166 = 7;

    t166 = (x741<=(x742+(x743|x744)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x745 = INT32_MAX;
	uint8_t x747 = 2U;
	volatile int32_t t167 = -20;

    t167 = (x745<=(x746+(x747|x748)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x749 = -1;
	int16_t x752 = INT16_MIN;

    t168 = (x749<=(x750+(x751|x752)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x753 = -1;
	uint64_t x754 = UINT64_MAX;
	int32_t x755 = INT32_MIN;
	volatile int32_t x756 = INT32_MAX;

    t169 = (x753<=(x754+(x755|x756)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x757 = -1LL;
	uint32_t x758 = UINT32_MAX;
	volatile int64_t x760 = INT64_MIN;
	volatile int32_t t170 = -343826282;

    t170 = (x757<=(x758+(x759|x760)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x764 = INT64_MAX;
	volatile int32_t t171 = -2241826;

    t171 = (x761<=(x762+(x763|x764)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x766 = INT16_MAX;
	volatile int16_t x767 = INT16_MIN;
	uint16_t x768 = 217U;
	int32_t t172 = -239723;

    t172 = (x765<=(x766+(x767|x768)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x769 = UINT64_MAX;
	static uint32_t x772 = 95557U;
	static int32_t t173 = -19;

    t173 = (x769<=(x770+(x771|x772)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x773 = INT32_MIN;
	volatile uint32_t x776 = 314U;
	int32_t t174 = -6379;

    t174 = (x773<=(x774+(x775|x776)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x777 = 1472865U;
	volatile int16_t x778 = INT16_MAX;
	int64_t x779 = INT64_MIN;
	uint16_t x780 = 121U;
	static int32_t t175 = 30384;

    t175 = (x777<=(x778+(x779|x780)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x781 = INT16_MIN;
	int8_t x783 = INT8_MAX;
	static volatile uint32_t x784 = 255491U;
	static int32_t t176 = -1371;

    t176 = (x781<=(x782+(x783|x784)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = UINT8_MAX;
	int32_t x786 = INT32_MIN;
	static volatile uint64_t x787 = 3551337626497205LLU;
	volatile int8_t x788 = INT8_MIN;
	static volatile int32_t t177 = -31468561;

    t177 = (x785<=(x786+(x787|x788)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x789 = INT16_MIN;
	int32_t x790 = INT32_MIN;
	static int16_t x791 = INT16_MIN;
	static uint32_t x792 = UINT32_MAX;

    t178 = (x789<=(x790+(x791|x792)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x793 = 18387397U;
	int64_t x796 = 1863475832005922LL;
	volatile int32_t t179 = -13884;

    t179 = (x793<=(x794+(x795|x796)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x797 = -1;
	volatile int32_t x798 = INT32_MAX;
	int32_t x799 = INT32_MIN;
	volatile int32_t t180 = 62;

    t180 = (x797<=(x798+(x799|x800)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x801 = INT8_MAX;
	uint32_t x802 = 1743599237U;
	int8_t x803 = -1;
	static int64_t x804 = INT64_MIN;
	volatile int32_t t181 = -1;

    t181 = (x801<=(x802+(x803|x804)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x809 = INT64_MAX;
	uint8_t x810 = 0U;
	int8_t x811 = -1;
	volatile int32_t t182 = 56382;

    t182 = (x809<=(x810+(x811|x812)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x813 = INT8_MAX;
	static uint32_t x814 = UINT32_MAX;
	int8_t x815 = INT8_MIN;
	volatile int32_t t183 = -1675024;

    t183 = (x813<=(x814+(x815|x816)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x817 = 35;
	int16_t x818 = 1;
	static volatile uint32_t x820 = UINT32_MAX;
	volatile int32_t t184 = 6;

    t184 = (x817<=(x818+(x819|x820)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x821 = 1719U;
	uint16_t x822 = UINT16_MAX;
	uint8_t x823 = 6U;
	int32_t t185 = 362413;

    t185 = (x821<=(x822+(x823|x824)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x825 = UINT32_MAX;
	int32_t x826 = -1;
	int32_t x827 = INT32_MIN;
	int32_t t186 = -1;

    t186 = (x825<=(x826+(x827|x828)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x829 = -107102779;
	int32_t x830 = INT32_MIN;
	static int8_t x831 = -9;
	int64_t x832 = INT64_MAX;
	int32_t t187 = 5448;

    t187 = (x829<=(x830+(x831|x832)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x833 = INT16_MAX;
	volatile uint32_t x834 = UINT32_MAX;
	uint16_t x835 = UINT16_MAX;
	static uint8_t x836 = 84U;

    t188 = (x833<=(x834+(x835|x836)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x837 = 70623086U;
	int64_t x838 = INT64_MAX;
	uint64_t x840 = 1427628216818387059LLU;
	volatile int32_t t189 = 21;

    t189 = (x837<=(x838+(x839|x840)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x841 = 5980840997LLU;
	int16_t x842 = INT16_MIN;
	uint16_t x843 = 578U;
	int16_t x844 = INT16_MIN;
	int32_t t190 = -886;

    t190 = (x841<=(x842+(x843|x844)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x845 = 3590617;
	uint16_t x846 = UINT16_MAX;
	int64_t x847 = INT64_MIN;

    t191 = (x845<=(x846+(x847|x848)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x850 = 2116798083U;
	static int16_t x851 = INT16_MIN;
	volatile int32_t t192 = 1;

    t192 = (x849<=(x850+(x851|x852)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x853 = 40U;
	uint8_t x854 = 4U;
	int8_t x855 = 12;
	static uint32_t x856 = 77458U;

    t193 = (x853<=(x854+(x855|x856)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x857 = INT32_MIN;
	uint8_t x858 = 4U;
	static int8_t x859 = 15;
	static int32_t x860 = -1;
	int32_t t194 = -118220;

    t194 = (x857<=(x858+(x859|x860)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x862 = 58923818043LL;
	int32_t x863 = INT32_MIN;
	uint64_t x864 = 50935676870LLU;

    t195 = (x861<=(x862+(x863|x864)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x865 = -1;
	static volatile int8_t x866 = INT8_MIN;
	int32_t x867 = -2092069;
	int64_t x868 = 5202667254442LL;

    t196 = (x865<=(x866+(x867|x868)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x869 = INT16_MIN;
	int8_t x870 = 1;
	volatile uint8_t x871 = UINT8_MAX;
	uint64_t x872 = UINT64_MAX;
	int32_t t197 = -4611257;

    t197 = (x869<=(x870+(x871|x872)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x873 = UINT64_MAX;
	volatile uint8_t x874 = UINT8_MAX;
	int8_t x876 = INT8_MIN;
	volatile int32_t t198 = -1538;

    t198 = (x873<=(x874+(x875|x876)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x877 = INT64_MIN;
	uint8_t x878 = 0U;
	int32_t x879 = INT32_MIN;
	int64_t x880 = 1LL;
	volatile int32_t t199 = -3087;

    t199 = (x877<=(x878+(x879|x880)));

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

