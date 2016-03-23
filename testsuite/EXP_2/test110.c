
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

static volatile int16_t x5 = INT16_MIN;
uint8_t x11 = 1U;
int8_t x12 = 2;
int32_t t1 = -968991695;
int32_t x17 = INT32_MIN;
uint32_t x18 = 28939U;
static int32_t x19 = INT32_MIN;
int64_t x23 = 8LL;
static volatile int64_t x27 = 139159087977LL;
static int8_t x29 = INT8_MIN;
uint64_t x35 = 6289885619876LLU;
static int32_t x45 = -1;
int8_t x47 = -27;
int8_t x50 = INT8_MAX;
uint32_t t10 = 59664208U;
int8_t x55 = 27;
int32_t x65 = INT32_MIN;
int32_t x70 = INT32_MIN;
volatile int8_t x73 = 3;
uint32_t t16 = 419123277U;
volatile int32_t x80 = -1;
static int32_t t17 = -71;
uint8_t x89 = 14U;
int32_t t21 = -252472;
static volatile int16_t x97 = INT16_MIN;
static uint64_t x103 = 1912249615467018LLU;
volatile uint64_t x106 = 2280990677072920981LLU;
static volatile uint32_t t24 = 297742813U;
int16_t x117 = -3;
uint8_t x120 = 0U;
static int32_t x127 = -34705871;
volatile int8_t x143 = 0;
volatile int32_t x149 = 203746590;
static int8_t x151 = -6;
uint32_t x153 = 386U;
int32_t x156 = INT32_MAX;
static int8_t x162 = INT8_MIN;
static int64_t x165 = INT64_MAX;
static volatile int32_t t37 = -33;
int16_t x190 = 5;
volatile uint32_t x196 = 8U;
static int64_t x198 = -3506320LL;
int32_t x200 = -14561996;
volatile int32_t t41 = 1149;
int16_t x206 = 1;
static int64_t x207 = INT64_MIN;
int8_t x210 = 4;
volatile int32_t t43 = -54295;
volatile int32_t t46 = 3057;
static int32_t x225 = INT32_MAX;
int32_t x228 = INT32_MIN;
static uint8_t x229 = 25U;
int32_t x238 = -111254;
uint8_t x239 = 73U;
static int16_t x240 = -1;
volatile int32_t t50 = -16005;
uint32_t x249 = 1640215903U;
int64_t x250 = INT64_MAX;
volatile int8_t x253 = 16;
int16_t x256 = INT16_MIN;
int32_t t53 = 1535219;
volatile int16_t x263 = INT16_MIN;
int32_t x264 = INT32_MAX;
int16_t x265 = INT16_MAX;
static int16_t x266 = -2;
static int32_t t56 = 2493;
int64_t x276 = 20247LL;
int8_t x294 = 1;
volatile int32_t x295 = -1;
static int32_t x296 = INT32_MIN;
uint32_t x298 = 234U;
volatile int8_t x299 = INT8_MAX;
int16_t x308 = -387;
int32_t t63 = 103;
int64_t x312 = -1LL;
int64_t x314 = -1LL;
static volatile int32_t t68 = 10780777;
int32_t t69 = -241;
volatile int64_t x337 = INT64_MAX;
uint16_t x345 = 12U;
volatile uint64_t t74 = 107793LLU;
int64_t x354 = INT64_MIN;
int32_t x357 = -1;
int8_t x364 = INT8_MIN;
volatile int64_t t78 = -404160LL;
int16_t x369 = INT16_MIN;
static int64_t x371 = INT64_MIN;
volatile uint16_t x373 = 1908U;
uint16_t x383 = UINT16_MAX;
uint16_t x387 = UINT16_MAX;
uint32_t x392 = UINT32_MAX;
uint64_t x408 = UINT64_MAX;
static uint32_t x409 = 14352U;
uint64_t t88 = 33890169635594LLU;
static uint8_t x415 = UINT8_MAX;
int16_t x422 = INT16_MAX;
int32_t x430 = -1;
uint16_t x431 = 6U;
uint8_t x438 = UINT8_MAX;
uint32_t x439 = 36334U;
int8_t x442 = INT8_MIN;
uint64_t x444 = 7683817LLU;
volatile uint64_t t94 = 21036915LLU;
volatile uint32_t x454 = 272U;
int32_t x457 = INT32_MIN;
int32_t x458 = 33452321;
int64_t x463 = -1LL;
static uint16_t x474 = 62U;
volatile uint16_t x481 = UINT16_MAX;
int64_t x487 = -1LL;
static uint8_t x488 = 7U;
uint16_t x492 = 15789U;
int16_t x493 = INT16_MAX;
static volatile uint32_t x495 = UINT32_MAX;
static uint32_t x505 = 256448U;
int8_t x507 = INT8_MIN;
static int64_t x513 = 453602LL;
int64_t x515 = -1LL;
static volatile uint8_t x519 = 15U;
volatile int32_t t111 = -6;
volatile int16_t x523 = 3;
int8_t x525 = -1;
volatile int16_t x527 = INT16_MAX;
int32_t t113 = 266;
uint8_t x529 = UINT8_MAX;
int8_t x530 = 1;
int32_t x536 = -12;
int16_t x553 = -1;
volatile int64_t x554 = -1LL;
int8_t x558 = -1;
uint64_t x559 = UINT64_MAX;
uint32_t x563 = 999519501U;
int8_t x570 = INT8_MIN;
int32_t x572 = INT32_MAX;
int32_t t122 = -3;
static int64_t x573 = INT64_MIN;
volatile int8_t x575 = -1;
volatile int32_t t123 = -1;
int64_t x578 = INT64_MIN;
volatile int32_t t124 = 553828;
int8_t x585 = INT8_MIN;
volatile uint32_t x587 = UINT32_MAX;
volatile int64_t t126 = -35376887921120LL;
int8_t x590 = INT8_MAX;
static volatile int32_t t127 = -2709341;
volatile uint64_t t128 = 11LLU;
uint64_t x598 = 432583LLU;
uint64_t x601 = 58094755953LLU;
int8_t x608 = INT8_MIN;
int8_t x613 = INT8_MIN;
static int32_t t135 = -3063;
static int8_t x626 = INT8_MAX;
int32_t t136 = -1037871;
static int32_t x637 = 132305823;
int16_t x638 = INT16_MIN;
uint32_t x641 = 437394097U;
int8_t x647 = INT8_MIN;
static volatile int32_t t140 = -8;
int64_t x657 = -1LL;
int64_t x661 = -1LL;
uint32_t x663 = UINT32_MAX;
int16_t x665 = INT16_MIN;
static uint64_t x669 = 1587378881645399LLU;
int16_t x671 = -1618;
int32_t t147 = -374;
int8_t x684 = 1;
volatile int32_t x688 = INT32_MIN;
uint32_t x694 = UINT32_MAX;
volatile int8_t x703 = 20;
int32_t t153 = 1;
int16_t x707 = -1;
volatile int16_t x708 = -3;
int64_t x717 = 206032063224649772LL;
int8_t x721 = -3;
int32_t x734 = INT32_MAX;
int16_t x738 = -1;
static int64_t x746 = -1LL;
uint32_t x748 = 342073U;
int8_t x749 = 5;
static int64_t x754 = INT64_MIN;
int32_t x760 = INT32_MIN;
uint16_t x761 = 0U;
volatile uint64_t x765 = 122125025LLU;
int32_t x768 = -1;
int16_t x769 = -3;
volatile int16_t x776 = -1;
static volatile int32_t t169 = -130;
int16_t x779 = INT16_MIN;
int32_t x781 = -109;
static uint16_t x782 = 2887U;
volatile int8_t x791 = -1;
uint16_t x793 = 1U;
volatile uint16_t x794 = 12181U;
uint64_t x795 = UINT64_MAX;
int32_t t174 = 189;
static int8_t x800 = -1;
static uint16_t x807 = 6U;
int16_t x808 = -1;
static int16_t x809 = -2288;
uint16_t x818 = UINT16_MAX;
volatile uint64_t t179 = 491636LLU;
volatile int32_t t180 = -35214;
int16_t x834 = INT16_MAX;
uint32_t x837 = UINT32_MAX;
int32_t t182 = 1639;
uint32_t x847 = 2462U;
volatile int8_t x860 = INT8_MIN;
volatile int32_t t189 = -15127886;
static int64_t x877 = 807249LL;
static uint64_t x880 = 261129643LLU;
uint8_t x886 = 80U;
static int32_t t192 = 92635554;
uint16_t x896 = 1U;
uint8_t x897 = UINT8_MAX;
int8_t x899 = INT8_MIN;
static int32_t x902 = INT32_MAX;
static uint32_t x903 = 28U;
volatile uint64_t x905 = UINT64_MAX;
static int32_t t197 = 654;
volatile int32_t x910 = INT32_MIN;
uint8_t x914 = 55U;


void f0(void) {
    	uint16_t x6 = 95U;
	int8_t x7 = -1;
	volatile int32_t x8 = INT32_MIN;
	int32_t t0 = 1;

    t0 = ((x5==(x6+x7))&x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = INT64_MIN;
	uint32_t x10 = 213836U;

    t1 = ((x9==(x10+x11))&x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x20 = 172570U;
	uint32_t t2 = 407U;

    t2 = ((x17==(x18+x19))&x20);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x21 = INT32_MIN;
	static int8_t x22 = INT8_MIN;
	volatile int8_t x24 = INT8_MAX;
	volatile int32_t t3 = 123;

    t3 = ((x21==(x22+x23))&x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x25 = 4900207LLU;
	uint64_t x26 = 4774044886298LLU;
	static uint16_t x28 = UINT16_MAX;
	volatile int32_t t4 = 319992;

    t4 = ((x25==(x26+x27))&x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x30 = UINT32_MAX;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t5 = -46433581;

    t5 = ((x29==(x30+x31))&x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x33 = 4219014950804329LLU;
	static volatile uint64_t x34 = UINT64_MAX;
	int64_t x36 = INT64_MIN;
	int64_t t6 = -65159386511210LL;

    t6 = ((x33==(x34+x35))&x36);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = 3743287494LL;
	volatile int64_t t7 = -13008842297624LL;

    t7 = ((x37==(x38+x39))&x40);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint8_t x42 = 57U;
	int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	volatile int32_t t8 = 125602;

    t8 = ((x41==(x42+x43))&x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x46 = 4864U;
	int64_t x48 = -242597LL;
	volatile int64_t t9 = -56627449755LL;

    t9 = ((x45==(x46+x47))&x48);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MAX;
	uint32_t x51 = UINT32_MAX;
	volatile uint32_t x52 = 29166706U;

    t10 = ((x49==(x50+x51))&x52);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = INT32_MIN;
	uint32_t x54 = 97351232U;
	int32_t x56 = -790341402;
	static int32_t t11 = 523209;

    t11 = ((x53==(x54+x55))&x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 5291479288611822LLU;
	static int64_t x58 = INT64_MIN;
	uint64_t x59 = 377000434912232487LLU;
	volatile int16_t x60 = 480;
	volatile int32_t t12 = 229257910;

    t12 = ((x57==(x58+x59))&x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x61 = INT32_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = 6;
	int8_t x64 = -1;
	volatile int32_t t13 = -7;

    t13 = ((x61==(x62+x63))&x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x66 = -1;
	static volatile uint16_t x67 = UINT16_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t14 = 201U;

    t14 = ((x65==(x66+x67))&x68);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = 1;
	int16_t x71 = 0;
	uint32_t x72 = 306576842U;
	volatile uint32_t t15 = 241722U;

    t15 = ((x69==(x70+x71))&x72);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x74 = 1;
	uint8_t x75 = 2U;
	uint32_t x76 = 2826U;

    t16 = ((x73==(x74+x75))&x76);

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x77 = UINT16_MAX;
	volatile int64_t x78 = -118091293LL;
	static volatile uint16_t x79 = UINT16_MAX;

    t17 = ((x77==(x78+x79))&x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -1822781309056692LL;
	uint8_t x82 = 45U;
	int8_t x83 = 5;
	int8_t x84 = INT8_MIN;
	int32_t t18 = 107718;

    t18 = ((x81==(x82+x83))&x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	volatile int8_t x86 = INT8_MIN;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = -671587047;
	volatile int32_t t19 = -91623;

    t19 = ((x85==(x86+x87))&x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x90 = INT32_MIN;
	uint64_t x91 = 15LLU;
	static int32_t x92 = -1;
	volatile int32_t t20 = -112437;

    t20 = ((x89==(x90+x91))&x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = -1;
	uint16_t x95 = 6948U;
	uint8_t x96 = UINT8_MAX;

    t21 = ((x93==(x94+x95))&x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x98 = 204;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	volatile int32_t t22 = -229;

    t22 = ((x97==(x98+x99))&x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = 1;
	int64_t x102 = INT64_MIN;
	static uint64_t x104 = 358153876932232673LLU;
	volatile uint64_t t23 = 113108010206964512LLU;

    t23 = ((x101==(x102+x103))&x104);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x105 = -1LL;
	int8_t x107 = 0;
	static uint32_t x108 = 45U;

    t24 = ((x105==(x106+x107))&x108);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x118 = 33U;
	int16_t x119 = INT16_MIN;
	volatile int32_t t25 = -3;

    t25 = ((x117==(x118+x119))&x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x125 = 5U;
	int64_t x126 = INT64_MAX;
	uint32_t x128 = 914786U;
	volatile uint32_t t26 = 60315686U;

    t26 = ((x125==(x126+x127))&x128);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x133 = -1;
	uint16_t x134 = 2554U;
	int64_t x135 = -61374980211LL;
	int16_t x136 = INT16_MIN;
	static int32_t t27 = 6769;

    t27 = ((x133==(x134+x135))&x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x141 = UINT16_MAX;
	static int16_t x142 = -14;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t28 = 5937727453LLU;

    t28 = ((x141==(x142+x143))&x144);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x145 = 7U;
	volatile uint64_t x146 = 3596348226LLU;
	static int8_t x147 = 1;
	uint16_t x148 = 3134U;
	volatile int32_t t29 = 93492;

    t29 = ((x145==(x146+x147))&x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x150 = -4462;
	int32_t x152 = -12993707;
	static volatile int32_t t30 = 2910;

    t30 = ((x149==(x150+x151))&x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x154 = UINT16_MAX;
	int32_t x155 = -10610515;
	int32_t t31 = -15;

    t31 = ((x153==(x154+x155))&x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x157 = 1676U;
	int32_t x158 = -1;
	uint32_t x159 = 231U;
	uint64_t x160 = 715368LLU;
	static uint64_t t32 = 3LLU;

    t32 = ((x157==(x158+x159))&x160);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x161 = 70633U;
	static int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	volatile int32_t t33 = 1;

    t33 = ((x161==(x162+x163))&x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x166 = 62U;
	volatile uint32_t x167 = UINT32_MAX;
	int64_t x168 = -1LL;
	volatile int64_t t34 = -147626658LL;

    t34 = ((x165==(x166+x167))&x168);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x169 = 28U;
	volatile int8_t x170 = -1;
	int8_t x171 = -1;
	int32_t x172 = -1;
	volatile int32_t t35 = -23314837;

    t35 = ((x169==(x170+x171))&x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x173 = INT16_MAX;
	uint8_t x174 = 1U;
	volatile uint32_t x175 = 3402854U;
	int64_t x176 = -34251LL;
	int64_t t36 = -199125596162LL;

    t36 = ((x173==(x174+x175))&x176);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x181 = INT16_MIN;
	uint32_t x182 = 103U;
	uint16_t x183 = 114U;
	int8_t x184 = INT8_MAX;

    t37 = ((x181==(x182+x183))&x184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x185 = 7U;
	uint16_t x186 = 0U;
	static volatile uint32_t x187 = 1970U;
	uint8_t x188 = UINT8_MAX;
	int32_t t38 = 144693543;

    t38 = ((x185==(x186+x187))&x188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x189 = INT8_MAX;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t39 = -242297367;

    t39 = ((x189==(x190+x191))&x192);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = -6;
	static int32_t x194 = 36563;
	int8_t x195 = INT8_MAX;
	volatile uint32_t t40 = 121966899U;

    t40 = ((x193==(x194+x195))&x196);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x197 = -1;
	volatile uint8_t x199 = 118U;

    t41 = ((x197==(x198+x199))&x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x205 = INT64_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t42 = 15005701114578LLU;

    t42 = ((x205==(x206+x207))&x208);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x209 = INT16_MAX;
	static int32_t x211 = INT32_MIN;
	int8_t x212 = -1;

    t43 = ((x209==(x210+x211))&x212);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = INT16_MIN;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = UINT64_MAX;
	static uint64_t x216 = 6550LLU;
	volatile uint64_t t44 = 3933857503814107501LLU;

    t44 = ((x213==(x214+x215))&x216);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x217 = -1;
	uint32_t x218 = 0U;
	int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t45 = 72323687;

    t45 = ((x217==(x218+x219))&x220);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x221 = -1;
	static uint16_t x222 = 37U;
	uint16_t x223 = 0U;
	uint8_t x224 = 31U;

    t46 = ((x221==(x222+x223))&x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x226 = 465U;
	int32_t x227 = -1;
	int32_t t47 = 14470;

    t47 = ((x225==(x226+x227))&x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x230 = INT16_MAX;
	int16_t x231 = 236;
	int8_t x232 = -1;
	int32_t t48 = -2;

    t48 = ((x229==(x230+x231))&x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x233 = UINT16_MAX;
	int16_t x234 = -1;
	volatile uint16_t x235 = UINT16_MAX;
	volatile int16_t x236 = INT16_MAX;
	int32_t t49 = -5;

    t49 = ((x233==(x234+x235))&x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x237 = 0;

    t50 = ((x237==(x238+x239))&x240);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x241 = UINT16_MAX;
	volatile int32_t x242 = INT32_MIN;
	static uint32_t x243 = 107U;
	int8_t x244 = INT8_MAX;
	int32_t t51 = -7015;

    t51 = ((x241==(x242+x243))&x244);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x251 = -1;
	static uint8_t x252 = 115U;
	volatile int32_t t52 = 32287;

    t52 = ((x249==(x250+x251))&x252);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x254 = -28;
	int16_t x255 = INT16_MIN;

    t53 = ((x253==(x254+x255))&x256);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = -1;
	static int32_t x258 = INT32_MAX;
	int64_t x259 = -41242397010690786LL;
	int16_t x260 = 5;
	static int32_t t54 = -166943;

    t54 = ((x257==(x258+x259))&x260);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x261 = UINT16_MAX;
	int64_t x262 = INT64_MAX;
	volatile int32_t t55 = 120;

    t55 = ((x261==(x262+x263))&x264);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MAX;

    t56 = ((x265==(x266+x267))&x268);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x273 = -1094;
	volatile int32_t x274 = -1;
	static int64_t x275 = INT64_MAX;
	int64_t t57 = -1LL;

    t57 = ((x273==(x274+x275))&x276);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x277 = 222U;
	volatile int8_t x278 = INT8_MAX;
	int16_t x279 = -1;
	int64_t x280 = INT64_MAX;
	volatile int64_t t58 = -29843LL;

    t58 = ((x277==(x278+x279))&x280);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x289 = 0U;
	uint32_t x290 = 27986678U;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	int32_t t59 = 358;

    t59 = ((x289==(x290+x291))&x292);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x293 = UINT64_MAX;
	int32_t t60 = -7197;

    t60 = ((x293==(x294+x295))&x296);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x297 = 24U;
	volatile uint8_t x300 = 1U;
	volatile int32_t t61 = 849;

    t61 = ((x297==(x298+x299))&x300);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x301 = 6U;
	static int64_t x302 = -1LL;
	static int16_t x303 = 144;
	static int32_t x304 = INT32_MAX;
	static int32_t t62 = 694543;

    t62 = ((x301==(x302+x303))&x304);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x305 = -1;
	volatile int32_t x306 = 10171;
	volatile uint8_t x307 = UINT8_MAX;

    t63 = ((x305==(x306+x307))&x308);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x309 = -122;
	volatile int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	volatile int64_t t64 = 953147507427441LL;

    t64 = ((x309==(x310+x311))&x312);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x313 = INT16_MIN;
	volatile uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MIN;
	static int64_t t65 = -28394LL;

    t65 = ((x313==(x314+x315))&x316);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x317 = 39U;
	int64_t x318 = -1LL;
	int8_t x319 = 1;
	int16_t x320 = INT16_MAX;
	static volatile int32_t t66 = 171;

    t66 = ((x317==(x318+x319))&x320);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MAX;
	uint32_t x323 = 90550U;
	int16_t x324 = INT16_MAX;
	volatile int32_t t67 = -134946;

    t67 = ((x321==(x322+x323))&x324);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x325 = INT64_MIN;
	static int32_t x326 = -1;
	int8_t x327 = INT8_MAX;
	int32_t x328 = 761957;

    t68 = ((x325==(x326+x327))&x328);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x329 = INT64_MIN;
	volatile int64_t x330 = 17837252978218802LL;
	int32_t x331 = -1;
	uint8_t x332 = 3U;

    t69 = ((x329==(x330+x331))&x332);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = INT16_MIN;
	uint64_t x334 = UINT64_MAX;
	static volatile uint16_t x335 = UINT16_MAX;
	int64_t x336 = 7533LL;
	volatile int64_t t70 = -722357410062187LL;

    t70 = ((x333==(x334+x335))&x336);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x338 = INT32_MAX;
	int32_t x339 = -97;
	int16_t x340 = INT16_MIN;
	volatile int32_t t71 = -138098;

    t71 = ((x337==(x338+x339))&x340);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x341 = INT8_MIN;
	uint64_t x342 = 18LLU;
	int32_t x343 = -1;
	int64_t x344 = 1117231838600005262LL;
	volatile int64_t t72 = -1815887198339LL;

    t72 = ((x341==(x342+x343))&x344);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x346 = INT8_MIN;
	volatile int32_t x347 = -1;
	int16_t x348 = 23;
	static int32_t t73 = 12553212;

    t73 = ((x345==(x346+x347))&x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x349 = 1U;
	static int8_t x350 = 1;
	uint64_t x351 = 450LLU;
	uint64_t x352 = 146666793562191261LLU;

    t74 = ((x349==(x350+x351))&x352);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x353 = INT32_MIN;
	int16_t x355 = INT16_MAX;
	uint64_t x356 = 30245198801LLU;
	static uint64_t t75 = 261LLU;

    t75 = ((x353==(x354+x355))&x356);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MAX;
	int64_t x360 = INT64_MAX;
	int64_t t76 = -26LL;

    t76 = ((x357==(x358+x359))&x360);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x361 = 1443366674566833LLU;
	uint32_t x362 = 0U;
	volatile uint64_t x363 = UINT64_MAX;
	int32_t t77 = 226357;

    t77 = ((x361==(x362+x363))&x364);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	int8_t x366 = INT8_MAX;
	uint8_t x367 = 22U;
	static int64_t x368 = INT64_MIN;

    t78 = ((x365==(x366+x367))&x368);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x370 = 0U;
	int8_t x372 = INT8_MIN;
	int32_t t79 = 361;

    t79 = ((x369==(x370+x371))&x372);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t80 = -2294;

    t80 = ((x373==(x374+x375))&x376);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x381 = UINT8_MAX;
	static volatile int32_t x382 = 3;
	int64_t x384 = -1LL;
	volatile int64_t t81 = -4922948372868LL;

    t81 = ((x381==(x382+x383))&x384);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x385 = -1;
	int64_t x386 = 4784048519LL;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t82 = -23169;

    t82 = ((x385==(x386+x387))&x388);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x389 = INT8_MIN;
	volatile int16_t x390 = -1;
	int16_t x391 = -58;
	uint32_t t83 = 835U;

    t83 = ((x389==(x390+x391))&x392);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x393 = INT32_MIN;
	volatile int32_t x394 = -363;
	static volatile uint16_t x395 = 3457U;
	static volatile int32_t x396 = -1;
	int32_t t84 = 100932344;

    t84 = ((x393==(x394+x395))&x396);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x397 = 8102336294LLU;
	int64_t x398 = -221037597504LL;
	static uint64_t x399 = 335470079654363LLU;
	static uint64_t x400 = UINT64_MAX;
	uint64_t t85 = 185152612LLU;

    t85 = ((x397==(x398+x399))&x400);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x401 = -1;
	static int64_t x402 = INT64_MAX;
	volatile int8_t x403 = INT8_MIN;
	uint16_t x404 = UINT16_MAX;
	int32_t t86 = -8790327;

    t86 = ((x401==(x402+x403))&x404);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x405 = INT16_MIN;
	uint64_t x406 = 17786370947LLU;
	static volatile uint64_t x407 = 3642588046897LLU;
	volatile uint64_t t87 = 2259686818555343387LLU;

    t87 = ((x405==(x406+x407))&x408);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x410 = UINT32_MAX;
	static volatile uint64_t x411 = 9587795LLU;
	static uint64_t x412 = 49761541407980LLU;

    t88 = ((x409==(x410+x411))&x412);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x413 = UINT16_MAX;
	uint8_t x414 = 2U;
	volatile int8_t x416 = -1;
	int32_t t89 = 119;

    t89 = ((x413==(x414+x415))&x416);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x417 = INT16_MIN;
	int16_t x418 = 2114;
	uint16_t x419 = 11211U;
	int8_t x420 = 21;
	static int32_t t90 = 11497;

    t90 = ((x417==(x418+x419))&x420);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x421 = INT16_MIN;
	uint32_t x423 = UINT32_MAX;
	uint32_t x424 = 10072U;
	uint32_t t91 = 45246U;

    t91 = ((x421==(x422+x423))&x424);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x429 = -469;
	uint64_t x432 = 265627303733LLU;
	uint64_t t92 = 72LLU;

    t92 = ((x429==(x430+x431))&x432);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x437 = 53U;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t93 = 224588U;

    t93 = ((x437==(x438+x439))&x440);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x441 = 1576149814669104496LL;
	uint16_t x443 = 405U;

    t94 = ((x441==(x442+x443))&x444);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x449 = 117549U;
	int32_t x450 = -1;
	uint8_t x451 = UINT8_MAX;
	int64_t x452 = -1LL;
	static int64_t t95 = 1322294188159841LL;

    t95 = ((x449==(x450+x451))&x452);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x453 = 11U;
	volatile int8_t x455 = INT8_MIN;
	int8_t x456 = INT8_MIN;
	int32_t t96 = 105;

    t96 = ((x453==(x454+x455))&x456);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x459 = UINT8_MAX;
	int32_t x460 = -394577;
	int32_t t97 = 995572;

    t97 = ((x457==(x458+x459))&x460);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x461 = INT8_MIN;
	int16_t x462 = INT16_MIN;
	volatile int8_t x464 = INT8_MAX;
	static int32_t t98 = -598470534;

    t98 = ((x461==(x462+x463))&x464);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x465 = 52;
	uint32_t x466 = UINT32_MAX;
	static uint32_t x467 = 208399U;
	int32_t x468 = INT32_MAX;
	static int32_t t99 = 439947411;

    t99 = ((x465==(x466+x467))&x468);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x469 = INT64_MAX;
	uint8_t x470 = 88U;
	static volatile uint16_t x471 = 766U;
	volatile uint64_t x472 = 4696866LLU;
	volatile uint64_t t100 = 2226522536454558926LLU;

    t100 = ((x469==(x470+x471))&x472);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	int8_t x475 = INT8_MIN;
	uint8_t x476 = 5U;
	volatile int32_t t101 = 2536570;

    t101 = ((x473==(x474+x475))&x476);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x482 = -64;
	static int16_t x483 = -1;
	int32_t x484 = -5;
	static int32_t t102 = 90845755;

    t102 = ((x481==(x482+x483))&x484);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x485 = 9882939482932875LL;
	uint32_t x486 = UINT32_MAX;
	static volatile int32_t t103 = 3922201;

    t103 = ((x485==(x486+x487))&x488);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x489 = 47;
	volatile int32_t x490 = -1;
	int16_t x491 = 1;
	volatile int32_t t104 = -22608;

    t104 = ((x489==(x490+x491))&x492);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x494 = 100344LL;
	int64_t x496 = INT64_MAX;
	volatile int64_t t105 = -7026583460364LL;

    t105 = ((x493==(x494+x495))&x496);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x497 = INT8_MIN;
	int32_t x498 = INT32_MIN;
	volatile int64_t x499 = 98223427580LL;
	int16_t x500 = INT16_MIN;
	int32_t t106 = 986;

    t106 = ((x497==(x498+x499))&x500);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x501 = -21565809;
	int32_t x502 = -2839100;
	static uint8_t x503 = 48U;
	int64_t x504 = INT64_MIN;
	int64_t t107 = 8621032556076094LL;

    t107 = ((x501==(x502+x503))&x504);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x506 = -499912;
	static int64_t x508 = INT64_MIN;
	volatile int64_t t108 = -810LL;

    t108 = ((x505==(x506+x507))&x508);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x509 = -1;
	volatile int8_t x510 = INT8_MAX;
	int8_t x511 = -5;
	volatile uint8_t x512 = 3U;
	static volatile int32_t t109 = -20;

    t109 = ((x509==(x510+x511))&x512);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x514 = INT16_MIN;
	volatile int32_t x516 = 7;
	int32_t t110 = 367437;

    t110 = ((x513==(x514+x515))&x516);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x517 = INT8_MAX;
	int16_t x518 = -19;
	uint16_t x520 = 1U;

    t111 = ((x517==(x518+x519))&x520);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x521 = 4U;
	volatile int16_t x522 = 3075;
	uint64_t x524 = UINT64_MAX;
	uint64_t t112 = 315933311904LLU;

    t112 = ((x521==(x522+x523))&x524);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x526 = 467;
	int16_t x528 = -1;

    t113 = ((x525==(x526+x527))&x528);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x531 = 0LL;
	static int64_t x532 = INT64_MIN;
	int64_t t114 = 1824094445529LL;

    t114 = ((x529==(x530+x531))&x532);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x533 = 12;
	static int32_t x534 = INT32_MAX;
	volatile uint64_t x535 = 128268954LLU;
	volatile int32_t t115 = -192283;

    t115 = ((x533==(x534+x535))&x536);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x545 = 7U;
	int64_t x546 = INT64_MAX;
	int16_t x547 = INT16_MIN;
	static uint16_t x548 = 33U;
	volatile int32_t t116 = 184;

    t116 = ((x545==(x546+x547))&x548);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x549 = 25U;
	uint8_t x550 = UINT8_MAX;
	uint64_t x551 = 13LLU;
	uint16_t x552 = 19292U;
	int32_t t117 = -222175380;

    t117 = ((x549==(x550+x551))&x552);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x555 = -243416701544578975LL;
	static uint8_t x556 = UINT8_MAX;
	int32_t t118 = 29668;

    t118 = ((x553==(x554+x555))&x556);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x557 = 21321807588LLU;
	int8_t x560 = 1;
	int32_t t119 = -164495;

    t119 = ((x557==(x558+x559))&x560);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x561 = -1;
	uint8_t x562 = 30U;
	volatile int32_t x564 = INT32_MIN;
	volatile int32_t t120 = 26;

    t120 = ((x561==(x562+x563))&x564);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x565 = INT8_MIN;
	uint16_t x566 = 22U;
	int8_t x567 = INT8_MIN;
	int8_t x568 = INT8_MAX;
	volatile int32_t t121 = 945505427;

    t121 = ((x565==(x566+x567))&x568);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x569 = -1;
	int32_t x571 = -1;

    t122 = ((x569==(x570+x571))&x572);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x574 = 10U;
	int32_t x576 = INT32_MIN;

    t123 = ((x573==(x574+x575))&x576);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x577 = -12570;
	uint64_t x579 = 121097941LLU;
	volatile uint16_t x580 = UINT16_MAX;

    t124 = ((x577==(x578+x579))&x580);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x581 = 4;
	volatile int16_t x582 = 20;
	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MAX;
	int32_t t125 = 458;

    t125 = ((x581==(x582+x583))&x584);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x586 = -6140;
	static int64_t x588 = -87335920LL;

    t126 = ((x585==(x586+x587))&x588);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x589 = UINT64_MAX;
	uint16_t x591 = UINT16_MAX;
	int8_t x592 = INT8_MAX;

    t127 = ((x589==(x590+x591))&x592);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x593 = -1012257183912068819LL;
	volatile int64_t x594 = 185262431005LL;
	uint8_t x595 = 2U;
	uint64_t x596 = 175926266292LLU;

    t128 = ((x593==(x594+x595))&x596);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x597 = -348;
	int8_t x599 = 1;
	volatile uint8_t x600 = UINT8_MAX;
	volatile int32_t t129 = -57;

    t129 = ((x597==(x598+x599))&x600);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x602 = 925104241827379737LL;
	volatile uint32_t x603 = 1U;
	uint64_t x604 = UINT64_MAX;
	static volatile uint64_t t130 = 2610145679LLU;

    t130 = ((x601==(x602+x603))&x604);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x605 = INT32_MIN;
	volatile uint64_t x606 = UINT64_MAX;
	volatile int64_t x607 = -1LL;
	int32_t t131 = -1714429;

    t131 = ((x605==(x606+x607))&x608);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x609 = 194;
	uint64_t x610 = UINT64_MAX;
	volatile int64_t x611 = -8379925983LL;
	volatile uint8_t x612 = 88U;
	static volatile int32_t t132 = 58;

    t132 = ((x609==(x610+x611))&x612);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x614 = 3U;
	int16_t x615 = -1;
	uint16_t x616 = 61U;
	volatile int32_t t133 = -864996;

    t133 = ((x613==(x614+x615))&x616);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x617 = 5022386526650LLU;
	uint16_t x618 = 20U;
	volatile uint8_t x619 = UINT8_MAX;
	int32_t x620 = 3;
	int32_t t134 = 513117;

    t134 = ((x617==(x618+x619))&x620);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	int64_t x622 = -1LL;
	int32_t x623 = 23;
	volatile int32_t x624 = INT32_MAX;

    t135 = ((x621==(x622+x623))&x624);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x625 = UINT64_MAX;
	int64_t x627 = -1LL;
	int16_t x628 = -1;

    t136 = ((x625==(x626+x627))&x628);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x629 = INT16_MIN;
	static uint8_t x630 = 5U;
	uint32_t x631 = 4U;
	int64_t x632 = INT64_MIN;
	int64_t t137 = 287498908638755900LL;

    t137 = ((x629==(x630+x631))&x632);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x639 = UINT32_MAX;
	volatile int32_t x640 = INT32_MAX;
	volatile int32_t t138 = 1;

    t138 = ((x637==(x638+x639))&x640);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x642 = -7;
	int16_t x643 = -9;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t139 = 2;

    t139 = ((x641==(x642+x643))&x644);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x645 = INT16_MAX;
	int64_t x646 = 16384960251LL;
	uint8_t x648 = UINT8_MAX;

    t140 = ((x645==(x646+x647))&x648);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x653 = -1;
	int32_t x654 = INT32_MIN;
	uint32_t x655 = 231601241U;
	int32_t x656 = -1;
	volatile int32_t t141 = 586130935;

    t141 = ((x653==(x654+x655))&x656);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x658 = 0LLU;
	int64_t x659 = -1LL;
	int8_t x660 = INT8_MAX;
	static volatile int32_t t142 = -1;

    t142 = ((x657==(x658+x659))&x660);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x662 = 80U;
	uint32_t x664 = 199903U;
	volatile uint32_t t143 = 28078911U;

    t143 = ((x661==(x662+x663))&x664);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x666 = -1;
	int16_t x667 = 2;
	volatile int8_t x668 = INT8_MIN;
	int32_t t144 = 1;

    t144 = ((x665==(x666+x667))&x668);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x670 = -1;
	volatile uint8_t x672 = 92U;
	volatile int32_t t145 = 22383;

    t145 = ((x669==(x670+x671))&x672);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x673 = 29290501LLU;
	int16_t x674 = INT16_MAX;
	volatile int64_t x675 = 107038065433LL;
	static uint8_t x676 = UINT8_MAX;
	volatile int32_t t146 = -465560;

    t146 = ((x673==(x674+x675))&x676);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = 1745745142386460770LL;
	uint16_t x679 = 1U;
	int32_t x680 = INT32_MIN;

    t147 = ((x677==(x678+x679))&x680);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x681 = -1;
	uint32_t x682 = UINT32_MAX;
	int16_t x683 = 1;
	static volatile int32_t t148 = 17372146;

    t148 = ((x681==(x682+x683))&x684);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x685 = 0U;
	int32_t x686 = INT32_MAX;
	int32_t x687 = INT32_MIN;
	int32_t t149 = -150466303;

    t149 = ((x685==(x686+x687))&x688);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x689 = UINT32_MAX;
	static volatile int64_t x690 = -1LL;
	int16_t x691 = INT16_MIN;
	volatile int32_t x692 = -1810;
	volatile int32_t t150 = 392;

    t150 = ((x689==(x690+x691))&x692);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x693 = INT8_MIN;
	volatile int8_t x695 = -1;
	int16_t x696 = INT16_MIN;
	volatile int32_t t151 = -13466;

    t151 = ((x693==(x694+x695))&x696);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x697 = 0U;
	int8_t x698 = -3;
	int64_t x699 = INT64_MAX;
	volatile uint8_t x700 = UINT8_MAX;
	static volatile int32_t t152 = -7246;

    t152 = ((x697==(x698+x699))&x700);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x701 = 80054282042LLU;
	static int8_t x702 = -1;
	int16_t x704 = INT16_MIN;

    t153 = ((x701==(x702+x703))&x704);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x705 = 739U;
	static uint8_t x706 = 62U;
	int32_t t154 = -33;

    t154 = ((x705==(x706+x707))&x708);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x709 = -1LL;
	uint16_t x710 = 249U;
	volatile uint8_t x711 = 6U;
	uint8_t x712 = 101U;
	static volatile int32_t t155 = -449;

    t155 = ((x709==(x710+x711))&x712);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x718 = INT8_MAX;
	uint64_t x719 = 2761228660636LLU;
	int8_t x720 = -1;
	static int32_t t156 = -1;

    t156 = ((x717==(x718+x719))&x720);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x722 = INT32_MAX;
	int64_t x723 = -1LL;
	volatile int16_t x724 = -1;
	int32_t t157 = -9809886;

    t157 = ((x721==(x722+x723))&x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x725 = INT64_MIN;
	static volatile uint64_t x726 = 577005LLU;
	static volatile int16_t x727 = INT16_MAX;
	volatile uint32_t x728 = 506487U;
	static volatile uint32_t t158 = 154520U;

    t158 = ((x725==(x726+x727))&x728);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x729 = 2U;
	int64_t x730 = INT64_MIN;
	uint16_t x731 = UINT16_MAX;
	int8_t x732 = INT8_MAX;
	volatile int32_t t159 = 727;

    t159 = ((x729==(x730+x731))&x732);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x733 = 136865;
	int32_t x735 = -1;
	int16_t x736 = -1;
	volatile int32_t t160 = 925604354;

    t160 = ((x733==(x734+x735))&x736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x737 = 18;
	static uint64_t x739 = 220900104367LLU;
	volatile int32_t x740 = -1;
	static volatile int32_t t161 = -34508;

    t161 = ((x737==(x738+x739))&x740);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x745 = -1LL;
	volatile uint32_t x747 = UINT32_MAX;
	static uint32_t t162 = 11711U;

    t162 = ((x745==(x746+x747))&x748);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x750 = 3892911491431LLU;
	static int32_t x751 = INT32_MAX;
	int64_t x752 = INT64_MIN;
	volatile int64_t t163 = 486570487181297LL;

    t163 = ((x749==(x750+x751))&x752);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x753 = UINT8_MAX;
	int8_t x755 = 0;
	volatile uint64_t x756 = UINT64_MAX;
	volatile uint64_t t164 = 835947339LLU;

    t164 = ((x753==(x754+x755))&x756);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x757 = -1;
	uint8_t x758 = UINT8_MAX;
	volatile int8_t x759 = 0;
	int32_t t165 = 572017325;

    t165 = ((x757==(x758+x759))&x760);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x762 = INT8_MIN;
	uint64_t x763 = 273960161004LLU;
	uint32_t x764 = 6U;
	volatile uint32_t t166 = 11331U;

    t166 = ((x761==(x762+x763))&x764);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x766 = -56;
	int32_t x767 = 1;
	volatile int32_t t167 = -374315645;

    t167 = ((x765==(x766+x767))&x768);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x770 = UINT16_MAX;
	uint8_t x771 = 27U;
	uint8_t x772 = 7U;
	volatile int32_t t168 = -6015;

    t168 = ((x769==(x770+x771))&x772);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x773 = 27U;
	volatile int16_t x774 = -1;
	int16_t x775 = 6;

    t169 = ((x773==(x774+x775))&x776);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x777 = INT8_MIN;
	volatile int32_t x778 = INT32_MAX;
	uint8_t x780 = 26U;
	volatile int32_t t170 = 7;

    t170 = ((x777==(x778+x779))&x780);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x783 = -334751126683859LL;
	static int64_t x784 = INT64_MAX;
	int64_t t171 = 1289363129713283LL;

    t171 = ((x781==(x782+x783))&x784);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x785 = INT64_MAX;
	int16_t x786 = INT16_MIN;
	volatile uint16_t x787 = 4U;
	static uint32_t x788 = 489U;
	static volatile uint32_t t172 = 365191514U;

    t172 = ((x785==(x786+x787))&x788);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x789 = 64U;
	uint32_t x790 = UINT32_MAX;
	int64_t x792 = INT64_MAX;
	volatile int64_t t173 = -4LL;

    t173 = ((x789==(x790+x791))&x792);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x796 = 8;

    t174 = ((x793==(x794+x795))&x796);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x797 = UINT16_MAX;
	uint64_t x798 = UINT64_MAX;
	uint16_t x799 = UINT16_MAX;
	static volatile int32_t t175 = -31;

    t175 = ((x797==(x798+x799))&x800);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x805 = UINT8_MAX;
	uint16_t x806 = 116U;
	static int32_t t176 = 1162494;

    t176 = ((x805==(x806+x807))&x808);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x810 = INT8_MIN;
	static uint64_t x811 = UINT64_MAX;
	uint8_t x812 = UINT8_MAX;
	int32_t t177 = -1915556;

    t177 = ((x809==(x810+x811))&x812);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x817 = 2U;
	int64_t x819 = 191195750150LL;
	int64_t x820 = -1LL;
	int64_t t178 = 12422165LL;

    t178 = ((x817==(x818+x819))&x820);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x821 = -38;
	uint64_t x822 = UINT64_MAX;
	uint16_t x823 = 28U;
	uint64_t x824 = 644769266262329LLU;

    t179 = ((x821==(x822+x823))&x824);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x825 = INT8_MIN;
	static int16_t x826 = -1;
	int8_t x827 = 63;
	static uint8_t x828 = 3U;

    t180 = ((x825==(x826+x827))&x828);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x833 = -260574414241LL;
	int8_t x835 = INT8_MIN;
	static volatile uint64_t x836 = UINT64_MAX;
	uint64_t t181 = 11303792547016693LLU;

    t181 = ((x833==(x834+x835))&x836);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x838 = -140982;
	uint32_t x839 = 264U;
	int8_t x840 = -1;

    t182 = ((x837==(x838+x839))&x840);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x841 = INT8_MIN;
	int32_t x842 = -11121423;
	uint16_t x843 = 251U;
	uint16_t x844 = UINT16_MAX;
	int32_t t183 = -12418;

    t183 = ((x841==(x842+x843))&x844);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x845 = 27994U;
	volatile int16_t x846 = -736;
	static int16_t x848 = -1;
	int32_t t184 = -12650376;

    t184 = ((x845==(x846+x847))&x848);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x849 = INT64_MAX;
	uint8_t x850 = UINT8_MAX;
	int64_t x851 = 627548506617645LL;
	int8_t x852 = 3;
	int32_t t185 = -1;

    t185 = ((x849==(x850+x851))&x852);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x853 = -1;
	uint8_t x854 = UINT8_MAX;
	int16_t x855 = -2538;
	int32_t x856 = INT32_MAX;
	static int32_t t186 = 450;

    t186 = ((x853==(x854+x855))&x856);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x857 = INT64_MIN;
	int8_t x858 = INT8_MAX;
	uint32_t x859 = 26U;
	volatile int32_t t187 = 21;

    t187 = ((x857==(x858+x859))&x860);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x861 = 121254081189849203LLU;
	uint8_t x862 = UINT8_MAX;
	volatile int16_t x863 = -224;
	static uint8_t x864 = 126U;
	static volatile int32_t t188 = 13712630;

    t188 = ((x861==(x862+x863))&x864);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x865 = 116U;
	uint16_t x866 = 16802U;
	int64_t x867 = -1LL;
	int16_t x868 = INT16_MIN;

    t189 = ((x865==(x866+x867))&x868);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x878 = INT64_MAX;
	int16_t x879 = INT16_MIN;
	uint64_t t190 = 89LLU;

    t190 = ((x877==(x878+x879))&x880);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x881 = -3717;
	int8_t x882 = 8;
	int16_t x883 = INT16_MIN;
	uint64_t x884 = 18342870814LLU;
	uint64_t t191 = 1423407966560LLU;

    t191 = ((x881==(x882+x883))&x884);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x885 = -1;
	volatile int32_t x887 = -1;
	uint8_t x888 = 26U;

    t192 = ((x885==(x886+x887))&x888);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x889 = 15;
	int32_t x890 = -1;
	uint8_t x891 = 0U;
	static uint8_t x892 = 2U;
	volatile int32_t t193 = 80;

    t193 = ((x889==(x890+x891))&x892);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x893 = INT16_MAX;
	int32_t x894 = -1;
	static int16_t x895 = -1;
	volatile int32_t t194 = -9;

    t194 = ((x893==(x894+x895))&x896);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x898 = INT16_MIN;
	int16_t x900 = -1982;
	volatile int32_t t195 = -13726;

    t195 = ((x897==(x898+x899))&x900);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x901 = 7200385;
	uint32_t x904 = 7991705U;
	uint32_t t196 = 18658U;

    t196 = ((x901==(x902+x903))&x904);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x906 = INT64_MIN;
	int8_t x907 = INT8_MAX;
	volatile int16_t x908 = INT16_MIN;

    t197 = ((x905==(x906+x907))&x908);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x909 = -1;
	uint32_t x911 = 12U;
	int32_t x912 = -1;
	int32_t t198 = 12;

    t198 = ((x909==(x910+x911))&x912);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x913 = 6U;
	uint32_t x915 = 4529728U;
	static uint64_t x916 = UINT64_MAX;
	static uint64_t t199 = 1012122007LLU;

    t199 = ((x913==(x914+x915))&x916);

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

