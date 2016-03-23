
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

uint8_t x2 = 0U;
uint8_t x11 = 1U;
int16_t x20 = -1628;
static int8_t x24 = -1;
uint64_t x30 = 94548LLU;
static uint8_t x31 = UINT8_MAX;
uint16_t x35 = 2U;
int8_t x36 = 7;
int64_t x40 = INT64_MAX;
static int32_t x44 = INT32_MAX;
volatile int64_t t10 = 108455LL;
int16_t x49 = INT16_MIN;
uint8_t x56 = 14U;
int8_t x60 = -1;
int32_t t14 = 1461259;
uint32_t x61 = 104778176U;
volatile uint32_t t15 = 5443U;
volatile int32_t t16 = 223370041;
volatile uint8_t x74 = 58U;
int64_t x79 = INT64_MIN;
uint64_t t19 = 1246336865548683573LLU;
int32_t x85 = 479;
int64_t x94 = 20009261731361LL;
uint16_t x96 = 221U;
static int16_t x105 = -315;
volatile int32_t t26 = -774405520;
int16_t x111 = -22;
static volatile int32_t t27 = 1556;
int8_t x115 = INT8_MIN;
int32_t t28 = INT32_MIN;
uint32_t t30 = 32344425U;
int64_t x126 = -33150475828LL;
int32_t x127 = INT32_MIN;
int8_t x132 = 0;
static volatile int32_t t32 = 1056;
static uint64_t x133 = UINT64_MAX;
static uint16_t x138 = 3U;
static uint16_t x143 = UINT16_MAX;
int16_t x146 = INT16_MIN;
volatile int64_t x152 = INT64_MAX;
static uint64_t t40 = 3839757LLU;
uint8_t x172 = UINT8_MAX;
uint32_t t42 = 217780311U;
uint8_t x177 = 1U;
int32_t t43 = -12422;
static volatile int32_t x182 = -181440689;
int64_t x183 = -1LL;
volatile int64_t t44 = INT64_MIN;
uint64_t x187 = UINT64_MAX;
int8_t x189 = -1;
int32_t x192 = INT32_MAX;
int64_t t47 = -157855663945933LL;
int8_t x199 = INT8_MIN;
volatile int32_t t48 = -438;
uint16_t x203 = 1881U;
int16_t x215 = INT16_MIN;
int32_t x218 = INT32_MIN;
static uint64_t x219 = UINT64_MAX;
uint8_t x230 = 20U;
static volatile int64_t x231 = INT64_MAX;
uint32_t x238 = 2U;
int64_t x239 = -4197669251LL;
int32_t x244 = -2;
int32_t x246 = INT32_MIN;
int16_t x249 = -1;
static volatile int32_t t59 = 355;
uint64_t x268 = 2726332258LLU;
int8_t x269 = -51;
uint16_t x271 = UINT16_MAX;
static int32_t t64 = -1025736;
volatile uint32_t x279 = UINT32_MAX;
uint64_t x283 = 82467098676525907LLU;
int32_t t66 = -111479839;
int16_t x285 = 1765;
uint8_t x289 = 0U;
int32_t t69 = -632;
uint32_t x304 = UINT32_MAX;
int32_t x317 = INT32_MIN;
volatile uint32_t t74 = 5021457U;
uint16_t x322 = UINT16_MAX;
volatile int32_t t76 = 1454712;
uint64_t x333 = 54724708499244LLU;
static int8_t x334 = -1;
int16_t x335 = INT16_MAX;
uint16_t x344 = UINT16_MAX;
int64_t t80 = -15LL;
static uint32_t x348 = 1992U;
volatile int32_t x355 = -255;
volatile int64_t t83 = 13LL;
int16_t x358 = 51;
static int32_t x367 = 400446;
uint16_t x370 = 19U;
int16_t x374 = INT16_MIN;
uint64_t x379 = UINT64_MAX;
static int32_t x390 = -3327;
volatile int16_t x397 = -1;
volatile int8_t x401 = -1;
volatile int64_t t94 = -31471581530331LL;
int64_t x408 = INT64_MIN;
static int64_t t96 = INT64_MAX;
int16_t x414 = -792;
uint8_t x418 = 81U;
int32_t x422 = INT32_MAX;
int8_t x429 = -1;
volatile int16_t x431 = 9047;
uint16_t x432 = 29U;
int32_t x437 = INT32_MIN;
volatile int64_t t104 = INT64_MIN;
uint64_t x457 = UINT64_MAX;
volatile int32_t x459 = INT32_MAX;
static uint8_t x461 = 110U;
static uint64_t x465 = 16631279LLU;
uint16_t x467 = 14U;
uint32_t x471 = 8433728U;
int64_t x477 = INT64_MIN;
uint64_t x478 = UINT64_MAX;
volatile uint8_t x479 = 15U;
int64_t t113 = INT64_MIN;
int32_t x482 = -1;
static volatile uint64_t t114 = 31247299700LLU;
int16_t x489 = INT16_MIN;
int32_t x491 = INT32_MIN;
int32_t t116 = 268080;
volatile int8_t x507 = 56;
int64_t x509 = INT64_MIN;
int64_t x519 = INT64_MIN;
uint32_t x524 = UINT32_MAX;
uint64_t t126 = 2836847962531237LLU;
int8_t x538 = INT8_MAX;
volatile uint32_t x541 = 254684U;
static volatile int32_t x545 = INT32_MIN;
static volatile int8_t x546 = INT8_MIN;
uint16_t x552 = 45U;
int64_t x555 = -1LL;
int8_t x556 = 7;
int8_t x560 = INT8_MAX;
int32_t x561 = INT32_MIN;
static int8_t x565 = INT8_MAX;
int64_t x570 = INT64_MAX;
int8_t x571 = 0;
uint32_t t136 = 2U;
uint32_t x574 = 2U;
static int32_t t137 = -10195;
uint16_t x581 = 6030U;
uint64_t x582 = 256642145430177003LLU;
volatile uint8_t x588 = UINT8_MAX;
int32_t t142 = -29;
int64_t x598 = -125370603857513674LL;
static int32_t t148 = 39230;
volatile int16_t x621 = -1;
int8_t x635 = 0;
int8_t x637 = 0;
int32_t x644 = INT32_MIN;
static int16_t x647 = INT16_MIN;
uint16_t x648 = 2U;
int32_t t155 = -2;
volatile int64_t x653 = -3074428LL;
int32_t x656 = -217424;
int16_t x659 = INT16_MIN;
uint32_t x663 = 2299U;
int32_t x664 = -1;
static int32_t x666 = -1;
static uint32_t x684 = 45236383U;
volatile uint32_t t163 = 0U;
volatile uint16_t x686 = UINT16_MAX;
static uint32_t x694 = 14886U;
int64_t x696 = 160691094788258214LL;
int64_t t166 = -2691659985LL;
volatile uint64_t x704 = UINT64_MAX;
volatile uint64_t t170 = 80258840164430LLU;
static uint32_t x719 = UINT32_MAX;
static volatile int64_t t172 = -2247229554LL;
volatile int8_t x726 = -9;
static volatile int64_t t174 = INT64_MIN;
static volatile int64_t t175 = -17643284844045337LL;
static int64_t x742 = -1LL;
volatile int16_t x743 = 1;
uint32_t x749 = UINT32_MAX;
uint64_t x757 = 67836345756290LLU;
int64_t x760 = INT64_MAX;
int64_t t183 = 58925LL;
static int32_t x767 = INT32_MIN;
uint64_t t184 = 8LLU;
static int32_t x776 = INT32_MIN;
uint32_t x777 = 7U;
int32_t x780 = -16663189;
int16_t x782 = -1;
uint64_t x792 = 1LLU;
uint64_t t190 = 254515833321LLU;
uint32_t x797 = UINT32_MAX;
int16_t x799 = INT16_MIN;
volatile uint32_t t192 = 15583U;
volatile int64_t x806 = INT64_MIN;
uint32_t t197 = 13588U;
volatile int16_t x821 = INT16_MIN;
uint64_t x822 = 0LLU;
int8_t x823 = INT8_MIN;
int16_t x826 = -1;


void f0(void) {
    	uint8_t x1 = 48U;
	int8_t x3 = -5;
	uint64_t x4 = 133668002884820LLU;
	volatile uint64_t t0 = 1LLU;

    t0 = ((x1+(x2>x3))&x4);

    if (t0 != 16LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MAX;
	int64_t x7 = -29805709LL;
	uint16_t x8 = 1600U;
	int32_t t1 = -197719147;

    t1 = ((x5+(x6>x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	static volatile int8_t x12 = 6;
	volatile int64_t t2 = 841295670410163868LL;

    t2 = ((x9+(x10>x11))&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -5280983LL;
	uint8_t x14 = UINT8_MAX;
	uint16_t x15 = 1U;
	int8_t x16 = INT8_MIN;
	volatile int64_t t3 = 22LL;

    t3 = ((x13+(x14>x15))&x16);

    if (t3 != -5281024LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	uint8_t x18 = 1U;
	int32_t x19 = INT32_MAX;
	static uint64_t t4 = 27LLU;

    t4 = ((x17+(x18>x19))&x20);

    if (t4 != 18446744073709549988LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = UINT16_MAX;
	uint32_t x22 = UINT32_MAX;
	int16_t x23 = 17;
	volatile int32_t t5 = 202909;

    t5 = ((x21+(x22>x23))&x24);

    if (t5 != 65536) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -49;
	volatile uint8_t x26 = 4U;
	int64_t x27 = -1LL;
	volatile int8_t x28 = INT8_MAX;
	int32_t t6 = 24;

    t6 = ((x25+(x26>x27))&x28);

    if (t6 != 80) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 846;
	int16_t x32 = -1;
	volatile int32_t t7 = -14391196;

    t7 = ((x29+(x30>x31))&x32);

    if (t7 != 847) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MAX;
	int8_t x34 = INT8_MIN;
	volatile int64_t t8 = 16474094LL;

    t8 = ((x33+(x34>x35))&x36);

    if (t8 != 7LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MIN;
	uint8_t x38 = UINT8_MAX;
	volatile int8_t x39 = INT8_MIN;
	volatile int64_t t9 = -13363LL;

    t9 = ((x37+(x38>x39))&x40);

    if (t9 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -5371743LL;
	int16_t x42 = INT16_MIN;
	int32_t x43 = 119;

    t10 = ((x41+(x42>x43))&x44);

    if (t10 != 2142111905LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MIN;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 407471;

    t11 = ((x45+(x46>x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x50 = UINT64_MAX;
	static int64_t x51 = INT64_MAX;
	volatile uint32_t x52 = 0U;
	uint32_t t12 = 232U;

    t12 = ((x49+(x50>x51))&x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	static int16_t x54 = INT16_MAX;
	int32_t x55 = -1;
	int32_t t13 = -34169972;

    t13 = ((x53+(x54>x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int32_t x58 = -1;
	int32_t x59 = INT32_MIN;

    t14 = ((x57+(x58>x59))&x60);

    if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = -1;
	volatile uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MIN;

    t15 = ((x61+(x62>x63))&x64);

    if (t15 != 104759296U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 45U;
	uint8_t x66 = 0U;
	volatile uint32_t x67 = 8189617U;
	int32_t x68 = INT32_MIN;

    t16 = ((x65+(x66>x67))&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = 538;
	static int16_t x70 = -696;
	int32_t x71 = -1;
	uint8_t x72 = 3U;
	volatile int32_t t17 = 33490314;

    t17 = ((x69+(x70>x71))&x72);

    if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	static int8_t x75 = INT8_MAX;
	int16_t x76 = -76;
	volatile uint32_t t18 = 792205U;

    t18 = ((x73+(x74>x75))&x76);

    if (t18 != 4294967220U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 1911942324408508LLU;
	static uint8_t x78 = 35U;
	uint16_t x80 = 1U;

    t19 = ((x77+(x78>x79))&x80);

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -9;
	static volatile int64_t x82 = -1LL;
	int32_t x83 = -1;
	int8_t x84 = -1;
	volatile int32_t t20 = 497346;

    t20 = ((x81+(x82>x83))&x84);

    if (t20 != -9) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 83244U;
	int16_t x87 = -39;
	volatile int32_t x88 = -18862689;
	int32_t t21 = 450;

    t21 = ((x85+(x86>x87))&x88);

    if (t21 != 415) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = 13474U;
	int16_t x91 = -225;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = INT32_MIN;

    t22 = ((x89+(x90>x91))&x92);

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	volatile int64_t x95 = 1001044142062208969LL;
	int32_t t23 = -93280;

    t23 = ((x93+(x94>x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MAX;
	volatile int64_t x99 = -792LL;
	int8_t x100 = -1;
	volatile int32_t t24 = -3;

    t24 = ((x97+(x98>x99))&x100);

    if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 17236U;
	int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	int8_t x104 = -1;
	static uint32_t t25 = 31660U;

    t25 = ((x101+(x102>x103))&x104);

    if (t25 != 17237U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x106 = 30632374LLU;
	static int8_t x107 = -1;
	static int8_t x108 = INT8_MIN;

    t26 = ((x105+(x106>x107))&x108);

    if (t26 != -384) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	uint8_t x110 = 86U;
	uint8_t x112 = 0U;

    t27 = ((x109+(x110>x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	uint64_t x114 = 3LLU;
	int32_t x116 = INT32_MIN;

    t28 = ((x113+(x114>x115))&x116);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 72511175666LLU;
	uint32_t x118 = 107U;
	volatile int8_t x119 = INT8_MAX;
	int8_t x120 = 3;
	static volatile uint64_t t29 = 6835196667878210LLU;

    t29 = ((x117+(x118>x119))&x120);

    if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x122 = 621721LL;
	volatile int16_t x123 = INT16_MIN;
	static uint32_t x124 = 57454718U;

    t30 = ((x121+(x122>x123))&x124);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -30;
	static uint32_t x128 = UINT32_MAX;
	volatile uint32_t t31 = 4630U;

    t31 = ((x125+(x126>x127))&x128);

    if (t31 != 4294967266U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = INT16_MAX;
	volatile uint8_t x130 = 11U;
	int64_t x131 = -113LL;

    t32 = ((x129+(x130>x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = -1;
	static int8_t x135 = 48;
	static int8_t x136 = INT8_MIN;
	uint64_t t33 = 71396LLU;

    t33 = ((x133+(x134>x135))&x136);

    if (t33 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	int64_t x139 = INT64_MAX;
	uint16_t x140 = UINT16_MAX;
	uint64_t t34 = 31448LLU;

    t34 = ((x137+(x138>x139))&x140);

    if (t34 != 65535LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = UINT8_MAX;
	static volatile uint32_t x142 = 133U;
	int8_t x144 = -1;
	int32_t t35 = 263895;

    t35 = ((x141+(x142>x143))&x144);

    if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	uint32_t x147 = 11198396U;
	int8_t x148 = -1;
	int32_t t36 = 4;

    t36 = ((x145+(x146>x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = INT8_MIN;
	int8_t x150 = 7;
	int8_t x151 = INT8_MAX;
	volatile int64_t t37 = -1734090033LL;

    t37 = ((x149+(x150>x151))&x152);

    if (t37 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = 839U;
	int32_t x158 = -834;
	int16_t x159 = -1;
	int64_t x160 = INT64_MAX;
	int64_t t38 = 836939236989668698LL;

    t38 = ((x157+(x158>x159))&x160);

    if (t38 != 839LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = -1;
	int16_t x162 = INT16_MAX;
	uint32_t x163 = 148937364U;
	uint32_t x164 = 241U;
	volatile uint32_t t39 = 202692577U;

    t39 = ((x161+(x162>x163))&x164);

    if (t39 != 241U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x165 = 877173LLU;
	uint16_t x166 = 25U;
	volatile int64_t x167 = -1LL;
	static int64_t x168 = -59910956660311345LL;

    t40 = ((x165+(x166>x167))&x168);

    if (t40 != 598598LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 192405760328486LLU;
	volatile uint64_t x170 = 18LLU;
	int16_t x171 = INT16_MIN;
	static volatile uint64_t t41 = 3106429956748LLU;

    t41 = ((x169+(x170>x171))&x172);

    if (t41 != 38LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x173 = UINT32_MAX;
	volatile uint8_t x174 = 103U;
	static int8_t x175 = -1;
	uint16_t x176 = 24684U;

    t42 = ((x173+(x174>x175))&x176);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	volatile uint16_t x180 = 329U;

    t43 = ((x177+(x178>x179))&x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x181 = -1LL;
	volatile int64_t x184 = INT64_MIN;

    t44 = ((x181+(x182>x183))&x184);

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x185 = -1;
	int32_t x186 = INT32_MAX;
	int16_t x188 = -7;
	volatile int32_t t45 = -8661766;

    t45 = ((x185+(x186>x187))&x188);

    if (t45 != -7) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x190 = UINT8_MAX;
	static uint32_t x191 = 927520964U;
	int32_t t46 = INT32_MAX;

    t46 = ((x189+(x190>x191))&x192);

    if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = 140U;
	int16_t x194 = -13;
	volatile int16_t x195 = 75;
	int64_t x196 = INT64_MIN;

    t47 = ((x193+(x194>x195))&x196);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x197 = 2843U;
	static uint8_t x198 = 9U;
	uint16_t x200 = 6U;

    t48 = ((x197+(x198>x199))&x200);

    if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x201 = 113U;
	int32_t x202 = -228;
	uint8_t x204 = UINT8_MAX;
	int32_t t49 = -1055;

    t49 = ((x201+(x202>x203))&x204);

    if (t49 != 113) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = INT64_MIN;
	int8_t x206 = -11;
	volatile uint64_t x207 = 4061856176LLU;
	volatile int16_t x208 = -1;
	static int64_t t50 = 430867080422048LL;

    t50 = ((x205+(x206>x207))&x208);

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = -1LL;
	uint32_t x214 = UINT32_MAX;
	volatile int64_t x216 = INT64_MAX;
	int64_t t51 = -8LL;

    t51 = ((x213+(x214>x215))&x216);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x217 = 1U;
	int64_t x220 = INT64_MIN;
	int64_t t52 = -520633587161LL;

    t52 = ((x217+(x218>x219))&x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x221 = -28052108LL;
	uint32_t x222 = 791U;
	uint32_t x223 = UINT32_MAX;
	volatile int64_t x224 = -1LL;
	int64_t t53 = -7621474982164703LL;

    t53 = ((x221+(x222>x223))&x224);

    if (t53 != -28052108LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x225 = UINT16_MAX;
	int32_t x226 = -189678;
	static volatile int8_t x227 = -44;
	int64_t x228 = INT64_MIN;
	int64_t t54 = -124LL;

    t54 = ((x225+(x226>x227))&x228);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = -1;
	uint8_t x232 = UINT8_MAX;
	static int32_t t55 = 25;

    t55 = ((x229+(x230>x231))&x232);

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x237 = UINT32_MAX;
	static int32_t x240 = -113;
	static uint32_t t56 = 13991849U;

    t56 = ((x237+(x238>x239))&x240);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = 0;
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = 583313784LL;
	volatile int32_t t57 = 350009709;

    t57 = ((x241+(x242>x243))&x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x245 = 952972U;
	int32_t x247 = INT32_MIN;
	static int64_t x248 = -11270229291LL;
	volatile int64_t t58 = -251510384151LL;

    t58 = ((x245+(x246>x247))&x248);

    if (t58 != 819844LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x250 = INT16_MAX;
	int16_t x251 = -1;
	volatile int16_t x252 = -5215;

    t59 = ((x249+(x250>x251))&x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x257 = 105747503987LLU;
	static uint64_t x258 = 381497539669889495LLU;
	uint16_t x259 = 1U;
	static int64_t x260 = INT64_MIN;
	uint64_t t60 = 65320672205001799LLU;

    t60 = ((x257+(x258>x259))&x260);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x261 = INT16_MIN;
	uint8_t x262 = 28U;
	int32_t x263 = -1;
	int8_t x264 = -1;
	int32_t t61 = -3;

    t61 = ((x261+(x262>x263))&x264);

    if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x265 = 121U;
	static int8_t x266 = -4;
	uint32_t x267 = 1820832U;
	uint64_t t62 = 260903LLU;

    t62 = ((x265+(x266>x267))&x268);

    if (t62 != 98LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x270 = INT16_MIN;
	uint8_t x272 = 46U;
	volatile int32_t t63 = 1016539;

    t63 = ((x269+(x270>x271))&x272);

    if (t63 != 12) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = 27502936;
	volatile int32_t x274 = -15435;
	static uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MIN;

    t64 = ((x273+(x274>x275))&x276);

    if (t64 != 27492352) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x277 = -22;
	int64_t x278 = 6LL;
	volatile int16_t x280 = INT16_MIN;
	int32_t t65 = 794405;

    t65 = ((x277+(x278>x279))&x280);

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = -47;
	uint16_t x282 = UINT16_MAX;
	int8_t x284 = INT8_MIN;

    t66 = ((x281+(x282>x283))&x284);

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x286 = 99655LLU;
	volatile uint16_t x287 = 5U;
	uint16_t x288 = 6U;
	int32_t t67 = -46256081;

    t67 = ((x285+(x286>x287))&x288);

    if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x290 = UINT16_MAX;
	volatile int64_t x291 = -122066LL;
	int8_t x292 = 0;
	int32_t t68 = 6;

    t68 = ((x289+(x290>x291))&x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = INT32_MIN;
	volatile uint8_t x294 = 1U;
	uint16_t x295 = 21378U;
	volatile int16_t x296 = INT16_MAX;

    t69 = ((x293+(x294>x295))&x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x297 = 2451U;
	int64_t x298 = 8574704781171857LL;
	int16_t x299 = -1;
	int32_t x300 = INT32_MAX;
	static volatile int32_t t70 = -16570;

    t70 = ((x297+(x298>x299))&x300);

    if (t70 != 2452) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = -1;
	int16_t x302 = -1;
	uint16_t x303 = 10141U;
	uint32_t t71 = UINT32_MAX;

    t71 = ((x301+(x302>x303))&x304);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x309 = 15U;
	volatile int64_t x310 = 9LL;
	int64_t x311 = 28411584344086294LL;
	int32_t x312 = INT32_MIN;
	int32_t t72 = -396997891;

    t72 = ((x309+(x310>x311))&x312);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x313 = 11770U;
	int16_t x314 = -1;
	int64_t x315 = INT64_MIN;
	volatile int64_t x316 = 43LL;
	static volatile int64_t t73 = -187LL;

    t73 = ((x313+(x314>x315))&x316);

    if (t73 != 43LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x318 = 25018U;
	static uint8_t x319 = 8U;
	uint32_t x320 = 4U;

    t74 = ((x317+(x318>x319))&x320);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x321 = 23270851350LLU;
	int32_t x323 = INT32_MIN;
	int16_t x324 = -1;
	uint64_t t75 = 100LLU;

    t75 = ((x321+(x322>x323))&x324);

    if (t75 != 23270851351LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = INT16_MIN;
	volatile int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	uint16_t x328 = 179U;

    t76 = ((x325+(x326>x327))&x328);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x329 = -1;
	int8_t x330 = -3;
	int64_t x331 = INT64_MIN;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t77 = 145556187;

    t77 = ((x329+(x330>x331))&x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x336 = 912U;
	volatile uint64_t t78 = 1197296024LLU;

    t78 = ((x333+(x334>x335))&x336);

    if (t78 != 768LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x337 = UINT64_MAX;
	volatile int64_t x338 = 1515745282127486548LL;
	static uint16_t x339 = 12500U;
	int32_t x340 = -4;
	volatile uint64_t t79 = 28632514492446698LLU;

    t79 = ((x337+(x338>x339))&x340);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x341 = INT64_MIN;
	uint32_t x342 = 24519921U;
	static volatile int8_t x343 = INT8_MAX;

    t80 = ((x341+(x342>x343))&x344);

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x345 = INT8_MIN;
	uint8_t x346 = 3U;
	uint32_t x347 = 1306249U;
	static volatile uint32_t t81 = 6809701U;

    t81 = ((x345+(x346>x347))&x348);

    if (t81 != 1920U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = INT16_MIN;
	uint8_t x350 = 1U;
	int32_t x351 = -1;
	int16_t x352 = INT16_MIN;
	static int32_t t82 = 14292433;

    t82 = ((x349+(x350>x351))&x352);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = INT64_MIN;
	uint16_t x354 = 12215U;
	static volatile uint8_t x356 = 2U;

    t83 = ((x353+(x354>x355))&x356);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x357 = 66U;
	static int8_t x359 = INT8_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t84 = -228586;

    t84 = ((x357+(x358>x359))&x360);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x365 = 80302U;
	static volatile int8_t x366 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	uint32_t t85 = 7869934U;

    t85 = ((x365+(x366>x367))&x368);

    if (t85 != 80256U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x369 = -1;
	int16_t x371 = INT16_MAX;
	uint32_t x372 = UINT32_MAX;
	static uint32_t t86 = UINT32_MAX;

    t86 = ((x369+(x370>x371))&x372);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x373 = -1;
	int64_t x375 = INT64_MIN;
	volatile int16_t x376 = INT16_MIN;
	int32_t t87 = -941916;

    t87 = ((x373+(x374>x375))&x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x377 = INT32_MIN;
	uint8_t x378 = 1U;
	uint32_t x380 = UINT32_MAX;
	uint32_t t88 = 31U;

    t88 = ((x377+(x378>x379))&x380);

    if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = 58907299428LL;
	static int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

    t89 = ((x381+(x382>x383))&x384);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x385 = UINT16_MAX;
	uint8_t x386 = 22U;
	uint16_t x387 = 2286U;
	uint64_t x388 = 1645607LLU;
	static uint64_t t90 = 124509LLU;

    t90 = ((x385+(x386>x387))&x388);

    if (t90 != 7207LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x389 = UINT16_MAX;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = UINT32_MAX;
	static volatile uint32_t t91 = 5U;

    t91 = ((x389+(x390>x391))&x392);

    if (t91 != 65536U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x393 = -1LL;
	int64_t x394 = INT64_MIN;
	uint16_t x395 = 894U;
	int64_t x396 = INT64_MIN;
	volatile int64_t t92 = INT64_MIN;

    t92 = ((x393+(x394>x395))&x396);

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MIN;
	static int32_t t93 = 0;

    t93 = ((x397+(x398>x399))&x400);

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x402 = -4007532106383562LL;
	int16_t x403 = INT16_MAX;
	volatile int64_t x404 = -1LL;

    t94 = ((x401+(x402>x403))&x404);

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x405 = INT64_MAX;
	int32_t x406 = INT32_MIN;
	int8_t x407 = -1;
	volatile int64_t t95 = 984702944LL;

    t95 = ((x405+(x406>x407))&x408);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x409 = -2;
	uint64_t x410 = 10390915LLU;
	static volatile uint16_t x411 = 1U;
	static int64_t x412 = INT64_MAX;

    t96 = ((x409+(x410>x411))&x412);

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x413 = INT16_MAX;
	static int8_t x415 = INT8_MIN;
	int32_t x416 = -1773;
	volatile int32_t t97 = 577;

    t97 = ((x413+(x414>x415))&x416);

    if (t97 != 30995) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x417 = -56;
	int8_t x419 = INT8_MIN;
	int32_t x420 = -1;
	volatile int32_t t98 = 24004418;

    t98 = ((x417+(x418>x419))&x420);

    if (t98 != -55) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x421 = INT64_MAX;
	volatile int64_t x423 = INT64_MAX;
	uint32_t x424 = 535091U;
	volatile int64_t t99 = -42601417353833477LL;

    t99 = ((x421+(x422>x423))&x424);

    if (t99 != 535091LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x425 = INT8_MAX;
	int16_t x426 = -1;
	static volatile int16_t x427 = INT16_MIN;
	static uint16_t x428 = UINT16_MAX;
	int32_t t100 = -1685;

    t100 = ((x425+(x426>x427))&x428);

    if (t100 != 128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x430 = 3U;
	volatile int32_t t101 = -260888;

    t101 = ((x429+(x430>x431))&x432);

    if (t101 != 29) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x433 = 13;
	int16_t x434 = INT16_MIN;
	static uint64_t x435 = 0LLU;
	int32_t x436 = INT32_MAX;
	volatile int32_t t102 = -886922480;

    t102 = ((x433+(x434>x435))&x436);

    if (t102 != 14) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x438 = INT8_MIN;
	volatile uint8_t x439 = UINT8_MAX;
	uint8_t x440 = 42U;
	int32_t t103 = -805232;

    t103 = ((x437+(x438>x439))&x440);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x441 = INT64_MIN;
	static int64_t x442 = -1LL;
	uint32_t x443 = UINT32_MAX;
	int32_t x444 = -1086;

    t104 = ((x441+(x442>x443))&x444);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x445 = 548405182393691226LLU;
	int64_t x446 = 651554818LL;
	int32_t x447 = -552597129;
	uint64_t x448 = 354837310453708LLU;
	static uint64_t t105 = 2380353401852220902LLU;

    t105 = ((x445+(x446>x447))&x448);

    if (t105 != 73223178232904LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x449 = 5322910946LLU;
	uint16_t x450 = 1U;
	static int32_t x451 = INT32_MAX;
	volatile int16_t x452 = INT16_MIN;
	static volatile uint64_t t106 = 43LLU;

    t106 = ((x449+(x450>x451))&x452);

    if (t106 != 5322899456LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x453 = 10U;
	int16_t x454 = INT16_MIN;
	volatile int16_t x455 = -1;
	uint32_t x456 = 66U;
	volatile uint32_t t107 = 192281329U;

    t107 = ((x453+(x454>x455))&x456);

    if (t107 != 2U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x458 = 43U;
	int16_t x460 = INT16_MIN;
	static uint64_t t108 = 595546308933936779LLU;

    t108 = ((x457+(x458>x459))&x460);

    if (t108 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x462 = -4038;
	int8_t x463 = -1;
	static uint16_t x464 = 3U;
	static volatile int32_t t109 = -202;

    t109 = ((x461+(x462>x463))&x464);

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x466 = INT8_MIN;
	uint64_t x468 = UINT64_MAX;
	uint64_t t110 = 18349749LLU;

    t110 = ((x465+(x466>x467))&x468);

    if (t110 != 16631279LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x469 = -1;
	int8_t x470 = 3;
	volatile int32_t x472 = 12;
	volatile int32_t t111 = 111;

    t111 = ((x469+(x470>x471))&x472);

    if (t111 != 12) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MAX;
	volatile int64_t x475 = -1LL;
	int8_t x476 = INT8_MIN;
	int32_t t112 = 384;

    t112 = ((x473+(x474>x475))&x476);

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x480 = INT32_MIN;

    t113 = ((x477+(x478>x479))&x480);

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x481 = -1;
	int32_t x483 = INT32_MIN;
	uint64_t x484 = 129015233524847585LLU;

    t114 = ((x481+(x482>x483))&x484);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x485 = -1;
	volatile int32_t x486 = -1;
	static uint64_t x487 = UINT64_MAX;
	uint32_t x488 = UINT32_MAX;
	volatile uint32_t t115 = UINT32_MAX;

    t115 = ((x485+(x486>x487))&x488);

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x490 = 151U;
	static volatile int32_t x492 = -1;

    t116 = ((x489+(x490>x491))&x492);

    if (t116 != -32767) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x493 = UINT32_MAX;
	int32_t x494 = -1;
	uint16_t x495 = 28U;
	volatile int8_t x496 = INT8_MAX;
	volatile uint32_t t117 = 194U;

    t117 = ((x493+(x494>x495))&x496);

    if (t117 != 127U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x497 = -511LL;
	static int8_t x498 = -5;
	static int8_t x499 = -3;
	int64_t x500 = INT64_MIN;
	volatile int64_t t118 = INT64_MIN;

    t118 = ((x497+(x498>x499))&x500);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = -3;
	uint32_t x502 = UINT32_MAX;
	int16_t x503 = INT16_MIN;
	int8_t x504 = INT8_MIN;
	volatile int32_t t119 = -29422;

    t119 = ((x501+(x502>x503))&x504);

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x505 = 29300U;
	int32_t x506 = -1;
	int64_t x508 = INT64_MAX;
	int64_t t120 = -1LL;

    t120 = ((x505+(x506>x507))&x508);

    if (t120 != 29300LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x510 = UINT32_MAX;
	uint8_t x511 = 3U;
	static int32_t x512 = 658554;
	int64_t t121 = -132244042668339LL;

    t121 = ((x509+(x510>x511))&x512);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x513 = INT16_MIN;
	int64_t x514 = INT64_MIN;
	int16_t x515 = -1;
	uint32_t x516 = 1936349405U;
	volatile uint32_t t122 = 1478U;

    t122 = ((x513+(x514>x515))&x516);

    if (t122 != 1936326656U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x517 = 0;
	static int64_t x518 = -572337550196827387LL;
	int8_t x520 = INT8_MAX;
	volatile int32_t t123 = -257;

    t123 = ((x517+(x518>x519))&x520);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x521 = 0U;
	uint16_t x522 = UINT16_MAX;
	static volatile uint32_t x523 = 4161756U;
	uint32_t t124 = 1953226U;

    t124 = ((x521+(x522>x523))&x524);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x525 = -1;
	static int16_t x526 = INT16_MIN;
	volatile uint32_t x527 = 3U;
	int64_t x528 = INT64_MIN;
	volatile int64_t t125 = 1LL;

    t125 = ((x525+(x526>x527))&x528);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x529 = 412LLU;
	uint64_t x530 = 2353880260543183382LLU;
	uint8_t x531 = 1U;
	int32_t x532 = INT32_MIN;

    t126 = ((x529+(x530>x531))&x532);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x533 = 6U;
	static volatile int8_t x534 = INT8_MIN;
	static uint16_t x535 = 3493U;
	static int8_t x536 = -1;
	uint32_t t127 = 6687U;

    t127 = ((x533+(x534>x535))&x536);

    if (t127 != 6U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x537 = 583U;
	uint32_t x539 = 3381032U;
	int64_t x540 = -852920366004346794LL;
	int64_t t128 = 29509205539144LL;

    t128 = ((x537+(x538>x539))&x540);

    if (t128 != 70LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x542 = 115150;
	uint16_t x543 = UINT16_MAX;
	volatile int32_t x544 = INT32_MAX;
	static volatile uint32_t t129 = 13959U;

    t129 = ((x541+(x542>x543))&x544);

    if (t129 != 254685U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x547 = 2896U;
	static volatile int64_t x548 = -1LL;
	volatile int64_t t130 = -17123645LL;

    t130 = ((x545+(x546>x547))&x548);

    if (t130 != -2147483647LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x549 = 71U;
	int32_t x550 = 2;
	int32_t x551 = INT32_MIN;
	int32_t t131 = 2757943;

    t131 = ((x549+(x550>x551))&x552);

    if (t131 != 8) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x553 = UINT16_MAX;
	int8_t x554 = INT8_MIN;
	volatile int32_t t132 = -9;

    t132 = ((x553+(x554>x555))&x556);

    if (t132 != 7) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x557 = UINT16_MAX;
	int16_t x558 = 101;
	volatile int16_t x559 = INT16_MIN;
	volatile int32_t t133 = -22;

    t133 = ((x557+(x558>x559))&x560);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x562 = INT16_MAX;
	uint64_t x563 = UINT64_MAX;
	uint8_t x564 = UINT8_MAX;
	static int32_t t134 = 1;

    t134 = ((x561+(x562>x563))&x564);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x566 = -58;
	int32_t x567 = 56770;
	uint16_t x568 = UINT16_MAX;
	int32_t t135 = -12207;

    t135 = ((x565+(x566>x567))&x568);

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x569 = -855706;
	uint32_t x572 = UINT32_MAX;

    t136 = ((x569+(x570>x571))&x572);

    if (t136 != 4294111591U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x573 = 61;
	volatile uint64_t x575 = 5627080665355875477LLU;
	int32_t x576 = 99;

    t137 = ((x573+(x574>x575))&x576);

    if (t137 != 33) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x577 = -1;
	int32_t x578 = INT32_MAX;
	int16_t x579 = INT16_MAX;
	static int16_t x580 = INT16_MIN;
	int32_t t138 = 63;

    t138 = ((x577+(x578>x579))&x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x583 = UINT32_MAX;
	volatile int16_t x584 = INT16_MAX;
	int32_t t139 = -6;

    t139 = ((x581+(x582>x583))&x584);

    if (t139 != 6031) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x585 = UINT16_MAX;
	int16_t x586 = -1;
	static volatile int32_t x587 = INT32_MAX;
	int32_t t140 = 2832512;

    t140 = ((x585+(x586>x587))&x588);

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x589 = 6132421372181874LLU;
	int8_t x590 = -7;
	static uint32_t x591 = 18886233U;
	uint64_t x592 = UINT64_MAX;
	uint64_t t141 = 251LLU;

    t141 = ((x589+(x590>x591))&x592);

    if (t141 != 6132421372181875LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x593 = -1489;
	uint8_t x594 = UINT8_MAX;
	volatile int16_t x595 = INT16_MAX;
	static uint8_t x596 = UINT8_MAX;

    t142 = ((x593+(x594>x595))&x596);

    if (t142 != 47) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x597 = INT32_MIN;
	int8_t x599 = -1;
	volatile int8_t x600 = INT8_MIN;
	volatile int32_t t143 = INT32_MIN;

    t143 = ((x597+(x598>x599))&x600);

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x601 = INT16_MAX;
	int8_t x602 = INT8_MAX;
	int32_t x603 = 2535487;
	int64_t x604 = -1LL;
	volatile int64_t t144 = 794124243952473LL;

    t144 = ((x601+(x602>x603))&x604);

    if (t144 != 32767LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x605 = 4686902LLU;
	int8_t x606 = INT8_MIN;
	uint32_t x607 = 57380U;
	volatile int16_t x608 = INT16_MAX;
	static volatile uint64_t t145 = 15760LLU;

    t145 = ((x605+(x606>x607))&x608);

    if (t145 != 1079LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x609 = 37LLU;
	volatile int64_t x610 = INT64_MIN;
	volatile uint8_t x611 = 25U;
	int8_t x612 = 5;
	uint64_t t146 = 251667034684359610LLU;

    t146 = ((x609+(x610>x611))&x612);

    if (t146 != 5LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x613 = INT16_MIN;
	static int32_t x614 = -1;
	int32_t x615 = -770734;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t147 = INT32_MIN;

    t147 = ((x613+(x614>x615))&x616);

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = 1;
	volatile int64_t x618 = 2332LL;
	static int32_t x619 = 36895;
	int8_t x620 = -1;

    t148 = ((x617+(x618>x619))&x620);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x622 = 98360518947147LL;
	uint32_t x623 = UINT32_MAX;
	uint8_t x624 = 12U;
	int32_t t149 = 48;

    t149 = ((x621+(x622>x623))&x624);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x625 = -1;
	uint16_t x626 = 0U;
	int32_t x627 = INT32_MAX;
	static int8_t x628 = 3;
	int32_t t150 = 336023960;

    t150 = ((x625+(x626>x627))&x628);

    if (t150 != 3) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x633 = INT32_MIN;
	int16_t x634 = INT16_MAX;
	uint32_t x636 = UINT32_MAX;
	volatile uint32_t t151 = 13U;

    t151 = ((x633+(x634>x635))&x636);

    if (t151 != 2147483649U) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x638 = UINT16_MAX;
	int64_t x639 = INT64_MIN;
	int16_t x640 = 2;
	int32_t t152 = -1783;

    t152 = ((x637+(x638>x639))&x640);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x641 = 0U;
	volatile int32_t x642 = INT32_MIN;
	int64_t x643 = -1LL;
	int32_t t153 = 42467628;

    t153 = ((x641+(x642>x643))&x644);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x645 = 2818503440042294LL;
	int32_t x646 = -1;
	volatile int64_t t154 = -15810051714385LL;

    t154 = ((x645+(x646>x647))&x648);

    if (t154 != 2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x649 = INT16_MAX;
	uint64_t x650 = 114662574LLU;
	static volatile int8_t x651 = 31;
	int8_t x652 = 1;

    t155 = ((x649+(x650>x651))&x652);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x654 = 1179;
	int16_t x655 = -1;
	int64_t t156 = 49LL;

    t156 = ((x653+(x654>x655))&x656);

    if (t156 != -3144064LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	int8_t x658 = INT8_MAX;
	uint64_t x660 = 252508LLU;
	uint64_t t157 = 935268663651LLU;

    t157 = ((x657+(x658>x659))&x660);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x661 = 46880LL;
	static int16_t x662 = -1;
	int64_t t158 = -9644802486894LL;

    t158 = ((x661+(x662>x663))&x664);

    if (t158 != 46881LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x665 = 123U;
	int8_t x667 = -1;
	int16_t x668 = INT16_MIN;
	static int32_t t159 = 8;

    t159 = ((x665+(x666>x667))&x668);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	int64_t x670 = -1LL;
	static volatile uint16_t x671 = UINT16_MAX;
	int8_t x672 = INT8_MIN;
	static volatile int32_t t160 = 299;

    t160 = ((x669+(x670>x671))&x672);

    if (t160 != 65408) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = -1;
	int16_t x674 = 0;
	volatile int64_t x675 = INT64_MIN;
	volatile uint8_t x676 = UINT8_MAX;
	static int32_t t161 = 0;

    t161 = ((x673+(x674>x675))&x676);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x677 = UINT16_MAX;
	volatile int32_t x678 = -1;
	static int64_t x679 = -2387573044218LL;
	uint64_t x680 = UINT64_MAX;
	uint64_t t162 = 665LLU;

    t162 = ((x677+(x678>x679))&x680);

    if (t162 != 65536LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x681 = -1;
	int16_t x682 = -3951;
	volatile uint32_t x683 = 25954U;

    t163 = ((x681+(x682>x683))&x684);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x685 = INT64_MAX;
	int32_t x687 = INT32_MAX;
	uint16_t x688 = 24U;
	static int64_t t164 = -112530775887403LL;

    t164 = ((x685+(x686>x687))&x688);

    if (t164 != 24LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x689 = INT8_MIN;
	static volatile int64_t x690 = 14837LL;
	uint16_t x691 = UINT16_MAX;
	uint64_t x692 = 16LLU;
	uint64_t t165 = 440720496028077004LLU;

    t165 = ((x689+(x690>x691))&x692);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x695 = 3267860711889784LL;

    t166 = ((x693+(x694>x695))&x696);

    if (t166 != 160691094663725056LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x697 = UINT8_MAX;
	static uint32_t x698 = 406U;
	static uint64_t x699 = UINT64_MAX;
	int32_t x700 = INT32_MIN;
	volatile int32_t t167 = 93534;

    t167 = ((x697+(x698>x699))&x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x701 = 0;
	int16_t x702 = -1;
	static int16_t x703 = -1;
	volatile uint64_t t168 = 49941907391290LLU;

    t168 = ((x701+(x702>x703))&x704);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x705 = -3;
	int64_t x706 = -1LL;
	int8_t x707 = INT8_MIN;
	int32_t x708 = -1;
	int32_t t169 = -97;

    t169 = ((x705+(x706>x707))&x708);

    if (t169 != -2) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x709 = 17920LLU;
	int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MIN;
	static int32_t x712 = 1;

    t170 = ((x709+(x710>x711))&x712);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x713 = UINT64_MAX;
	int8_t x714 = INT8_MAX;
	int16_t x715 = INT16_MAX;
	int64_t x716 = INT64_MIN;
	volatile uint64_t t171 = 92LLU;

    t171 = ((x713+(x714>x715))&x716);

    if (t171 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x717 = 21814LL;
	volatile int8_t x718 = INT8_MIN;
	int32_t x720 = INT32_MAX;

    t172 = ((x717+(x718>x719))&x720);

    if (t172 != 21814LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x721 = 7309587511827740LLU;
	int32_t x722 = -645;
	int32_t x723 = INT32_MIN;
	int8_t x724 = -12;
	volatile uint64_t t173 = 1566063543427LLU;

    t173 = ((x721+(x722>x723))&x724);

    if (t173 != 7309587511827732LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = INT64_MIN;
	uint8_t x727 = 2U;
	static volatile int16_t x728 = -351;

    t174 = ((x725+(x726>x727))&x728);

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x729 = -423422638996518182LL;
	uint16_t x730 = UINT16_MAX;
	int64_t x731 = -1894LL;
	int16_t x732 = INT16_MIN;

    t175 = ((x729+(x730>x731))&x732);

    if (t175 != -423422638996520960LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	volatile int8_t x734 = INT8_MIN;
	int32_t x735 = -1031501;
	uint64_t x736 = UINT64_MAX;
	volatile uint64_t t176 = 8502937188925693LLU;

    t176 = ((x733+(x734>x735))&x736);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x737 = -1;
	int32_t x738 = INT32_MIN;
	uint16_t x739 = 1496U;
	volatile int16_t x740 = INT16_MIN;
	volatile int32_t t177 = -135483;

    t177 = ((x737+(x738>x739))&x740);

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x741 = -1;
	int64_t x744 = -1LL;
	int64_t t178 = 3896778053530637188LL;

    t178 = ((x741+(x742>x743))&x744);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x745 = -23;
	uint64_t x746 = UINT64_MAX;
	volatile int16_t x747 = -1;
	int8_t x748 = INT8_MIN;
	volatile int32_t t179 = -63144;

    t179 = ((x745+(x746>x747))&x748);

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x750 = 14205793780117182LLU;
	int64_t x751 = INT64_MIN;
	int64_t x752 = 1LL;
	int64_t t180 = -29368LL;

    t180 = ((x749+(x750>x751))&x752);

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x753 = INT64_MIN;
	int16_t x754 = -14;
	uint64_t x755 = UINT64_MAX;
	volatile int64_t x756 = INT64_MIN;
	int64_t t181 = INT64_MIN;

    t181 = ((x753+(x754>x755))&x756);

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x758 = INT32_MIN;
	static uint16_t x759 = 307U;
	volatile uint64_t t182 = 136881080308LLU;

    t182 = ((x757+(x758>x759))&x760);

    if (t182 != 67836345756290LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x761 = INT64_MIN;
	static int64_t x762 = INT64_MIN;
	uint16_t x763 = 14U;
	static int8_t x764 = INT8_MAX;

    t183 = ((x761+(x762>x763))&x764);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x765 = 1493531525639LLU;
	int8_t x766 = INT8_MIN;
	int8_t x768 = -1;

    t184 = ((x765+(x766>x767))&x768);

    if (t184 != 1493531525640LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x769 = INT8_MIN;
	int16_t x770 = -1;
	int16_t x771 = INT16_MAX;
	static uint8_t x772 = 6U;
	static volatile int32_t t185 = 37;

    t185 = ((x769+(x770>x771))&x772);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x773 = 1056387LL;
	int64_t x774 = INT64_MAX;
	volatile int64_t x775 = INT64_MIN;
	static int64_t t186 = 5247090LL;

    t186 = ((x773+(x774>x775))&x776);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x778 = INT16_MIN;
	static volatile int8_t x779 = INT8_MAX;
	volatile uint32_t t187 = 13U;

    t187 = ((x777+(x778>x779))&x780);

    if (t187 != 3U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x781 = -1;
	int64_t x783 = -1LL;
	int64_t x784 = -1LL;
	int64_t t188 = 7633081826034LL;

    t188 = ((x781+(x782>x783))&x784);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x785 = INT8_MIN;
	int32_t x786 = -94090709;
	int64_t x787 = -1LL;
	static int32_t x788 = -4;
	volatile int32_t t189 = -2429;

    t189 = ((x785+(x786>x787))&x788);

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = 7;
	int32_t x790 = INT32_MIN;
	volatile int32_t x791 = -1;

    t190 = ((x789+(x790>x791))&x792);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MIN;
	int8_t x795 = 50;
	volatile int64_t x796 = -17727642502134570LL;
	volatile int64_t t191 = 56LL;

    t191 = ((x793+(x794>x795))&x796);

    if (t191 != -17727642870480896LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x798 = INT32_MIN;
	int32_t x800 = 1;

    t192 = ((x797+(x798>x799))&x800);

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x801 = INT8_MAX;
	static int16_t x802 = INT16_MAX;
	uint8_t x803 = 40U;
	volatile int16_t x804 = -1643;
	static int32_t t193 = -10047094;

    t193 = ((x801+(x802>x803))&x804);

    if (t193 != 128) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x805 = -1;
	uint64_t x807 = UINT64_MAX;
	uint8_t x808 = 105U;
	static volatile int32_t t194 = 98;

    t194 = ((x805+(x806>x807))&x808);

    if (t194 != 105) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x809 = 48908747522646LL;
	static volatile uint8_t x810 = UINT8_MAX;
	uint64_t x811 = 8219544LLU;
	static uint8_t x812 = 126U;
	int64_t t195 = -3064624LL;

    t195 = ((x809+(x810>x811))&x812);

    if (t195 != 86LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x813 = -1;
	int32_t x814 = 12571896;
	int32_t x815 = INT32_MAX;
	int32_t x816 = -1;
	volatile int32_t t196 = 120;

    t196 = ((x813+(x814>x815))&x816);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x817 = 1U;
	int64_t x818 = INT64_MIN;
	int32_t x819 = INT32_MIN;
	static int32_t x820 = 6676;

    t197 = ((x817+(x818>x819))&x820);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x824 = UINT8_MAX;
	static int32_t t198 = 2194;

    t198 = ((x821+(x822>x823))&x824);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x825 = -1;
	volatile int16_t x827 = INT16_MIN;
	volatile uint8_t x828 = UINT8_MAX;
	volatile int32_t t199 = 347;

    t199 = ((x825+(x826>x827))&x828);

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

