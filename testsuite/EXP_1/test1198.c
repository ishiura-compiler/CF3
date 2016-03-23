
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

static int32_t x2 = -1;
static int32_t x3 = INT32_MAX;
int16_t x5 = INT16_MIN;
int64_t x6 = INT64_MAX;
int16_t x8 = 0;
volatile uint16_t x12 = 81U;
static int16_t x15 = -14150;
volatile int32_t t3 = -19;
static int64_t x17 = INT64_MAX;
int64_t x18 = -34836685326016265LL;
int32_t x26 = INT32_MIN;
static int64_t x27 = -1LL;
int32_t t6 = -145269;
int8_t x35 = 8;
int32_t x40 = INT32_MIN;
int16_t x42 = INT16_MAX;
volatile int32_t x44 = INT32_MIN;
int32_t t10 = -7;
uint8_t x46 = 27U;
volatile uint64_t x52 = 7774476606296387LLU;
int16_t x56 = INT16_MAX;
int64_t x58 = INT64_MIN;
uint8_t x60 = 3U;
int32_t x68 = INT32_MIN;
int8_t x72 = INT8_MAX;
static int32_t t18 = 24248;
volatile int8_t x79 = 1;
int8_t x87 = INT8_MIN;
int32_t t22 = -30858054;
int64_t x98 = -1LL;
volatile uint16_t x100 = UINT16_MAX;
int32_t t25 = -489900334;
volatile int32_t t26 = -125417426;
uint64_t x110 = UINT64_MAX;
volatile uint32_t x112 = 91577445U;
volatile int32_t t28 = 63170;
int64_t x128 = INT64_MIN;
int32_t x131 = -1;
int32_t x136 = -1;
int32_t x144 = INT32_MIN;
static volatile uint32_t x147 = 3202304U;
int16_t x148 = INT16_MIN;
uint32_t x151 = 5U;
int64_t x156 = INT64_MIN;
int16_t x161 = -1;
static int8_t x171 = -1;
volatile int32_t t42 = -944640;
static uint8_t x179 = UINT8_MAX;
static volatile int32_t t43 = -58517969;
static int32_t t44 = 2564;
int64_t x187 = -218190485136117LL;
volatile int64_t x188 = INT64_MIN;
static int32_t t45 = 152;
int8_t x189 = -1;
int32_t x192 = INT32_MIN;
int16_t x194 = INT16_MAX;
uint64_t x195 = UINT64_MAX;
int32_t t47 = 511279;
uint16_t x202 = 3U;
volatile int16_t x216 = INT16_MIN;
int32_t t51 = -4;
int16_t x231 = INT16_MIN;
uint16_t x234 = 0U;
volatile int32_t t56 = -406652;
volatile int8_t x241 = 16;
static int8_t x244 = INT8_MIN;
uint64_t x248 = UINT64_MAX;
int64_t x252 = 2176LL;
int16_t x253 = -13276;
int64_t x262 = -3158536852LL;
volatile int32_t t61 = -1;
int32_t t62 = 188;
int16_t x269 = INT16_MAX;
static volatile int32_t t63 = 15105272;
volatile uint16_t x278 = 22U;
int32_t x287 = 227;
int64_t x289 = INT64_MIN;
int8_t x292 = -8;
int32_t t68 = 694;
static uint64_t x295 = 279652334953122LLU;
int32_t t69 = 361;
static int8_t x297 = -1;
uint64_t x300 = 0LLU;
volatile int32_t t70 = 9897;
static int32_t x309 = INT32_MAX;
static int8_t x311 = -1;
uint32_t x312 = 29U;
static uint8_t x317 = UINT8_MAX;
volatile int8_t x318 = -1;
uint32_t x320 = 116562U;
uint32_t x321 = 50038U;
uint32_t x325 = UINT32_MAX;
static volatile int16_t x326 = INT16_MIN;
static volatile int32_t t77 = -4166427;
int32_t t78 = 6;
volatile int16_t x334 = -1;
int64_t x336 = -1LL;
int64_t x338 = INT64_MIN;
uint64_t x339 = UINT64_MAX;
static int32_t t85 = -130559;
int8_t x361 = -1;
int32_t x364 = 3;
volatile int32_t t86 = -5;
volatile uint32_t x369 = 29U;
int8_t x379 = -3;
uint64_t x384 = UINT64_MAX;
int16_t x391 = INT16_MIN;
volatile int32_t t92 = 153973;
int64_t x401 = INT64_MIN;
uint32_t x404 = 16946011U;
static volatile int32_t t94 = -397;
static int8_t x410 = -1;
volatile uint8_t x418 = 0U;
int8_t x419 = INT8_MIN;
volatile int32_t t98 = 1;
int8_t x423 = INT8_MAX;
int32_t t99 = -741063815;
static volatile int64_t x425 = -1LL;
int32_t x429 = INT32_MIN;
int8_t x431 = 5;
int64_t x432 = -1LL;
uint16_t x434 = UINT16_MAX;
int8_t x438 = INT8_MIN;
volatile int8_t x442 = INT8_MAX;
static uint64_t x443 = 404933476845144LLU;
static volatile int32_t t104 = 20704622;
int8_t x449 = INT8_MAX;
int32_t x450 = INT32_MIN;
int64_t x451 = 7703LL;
int32_t x452 = INT32_MIN;
static int16_t x455 = INT16_MIN;
int32_t t108 = 952289;
int64_t x465 = -383228531157192830LL;
int32_t x471 = -1;
volatile int64_t x478 = 14493976251440LL;
int8_t x488 = INT8_MAX;
uint16_t x490 = 80U;
static int64_t x500 = -1LL;
volatile uint64_t x504 = 201854306961908184LLU;
int8_t x506 = 20;
static volatile int32_t t117 = -18434152;
static int64_t x516 = 59LL;
uint8_t x520 = UINT8_MAX;
int16_t x524 = INT16_MAX;
int16_t x525 = -1;
static volatile uint8_t x528 = 0U;
int8_t x540 = 1;
volatile int32_t t124 = 307106981;
static int32_t x542 = INT32_MAX;
int32_t t125 = -14450;
int32_t x548 = -1;
static int16_t x551 = INT16_MIN;
int64_t x552 = 379LL;
int32_t x554 = 3428;
int16_t x558 = INT16_MAX;
uint64_t x561 = UINT64_MAX;
volatile int16_t x575 = INT16_MIN;
int8_t x579 = -1;
static int8_t x583 = INT8_MAX;
static volatile int32_t t136 = 1413;
int16_t x598 = INT16_MIN;
volatile uint32_t x601 = 13310727U;
int16_t x610 = INT16_MAX;
uint32_t x611 = UINT32_MAX;
int32_t t142 = 260410568;
uint8_t x617 = 7U;
static uint16_t x627 = UINT16_MAX;
int32_t x640 = 235683;
int8_t x653 = INT8_MAX;
static int64_t x657 = 504000403LL;
static volatile int32_t x663 = -12911437;
volatile int32_t x668 = -1;
int8_t x669 = INT8_MAX;
int64_t x670 = -1LL;
uint8_t x671 = UINT8_MAX;
int64_t x672 = 437684636LL;
int64_t x676 = INT64_MIN;
static uint32_t x677 = UINT32_MAX;
static int64_t x679 = 751450LL;
int16_t x680 = INT16_MIN;
volatile uint16_t x681 = UINT16_MAX;
static volatile uint8_t x682 = 0U;
int64_t x683 = -2294614520524553LL;
int32_t x684 = -1;
int8_t x688 = INT8_MAX;
int64_t x690 = INT64_MAX;
volatile int32_t x691 = INT32_MAX;
int32_t x696 = 43;
volatile int32_t t162 = 30717283;
volatile uint16_t x699 = UINT16_MAX;
int16_t x702 = INT16_MIN;
uint32_t x709 = 0U;
int64_t x710 = INT64_MIN;
int32_t t166 = -3261849;
volatile int32_t t167 = 1;
int32_t t168 = 0;
uint8_t x722 = 1U;
uint16_t x726 = UINT16_MAX;
uint32_t x738 = UINT32_MAX;
volatile uint16_t x743 = UINT16_MAX;
static int32_t t174 = 321875;
volatile int16_t x745 = -1;
uint8_t x752 = 31U;
uint8_t x753 = 0U;
uint32_t x756 = 6U;
int32_t x770 = INT32_MAX;
int8_t x772 = INT8_MIN;
static uint16_t x773 = 14257U;
static uint64_t x774 = 763434LLU;
int16_t x776 = INT16_MAX;
int8_t x777 = 1;
static volatile int32_t t184 = 498385840;
int32_t t185 = -2;
int16_t x793 = INT16_MIN;
int8_t x794 = 0;
int8_t x803 = INT8_MAX;
volatile int16_t x807 = INT16_MIN;
uint64_t x808 = UINT64_MAX;
volatile uint16_t x809 = UINT16_MAX;
int64_t x812 = -8508406942LL;
static volatile uint64_t x819 = 1899978LLU;
static uint8_t x826 = 1U;
int64_t x831 = INT64_MAX;
int32_t t195 = 219;
static int64_t x833 = INT64_MIN;
int32_t t196 = 535;
int32_t x837 = -1;
static int32_t x842 = -1;
int32_t t198 = 4701;
volatile int8_t x845 = INT8_MAX;


void f0(void) {
    	uint16_t x1 = 31284U;
	static uint32_t x4 = 16053U;
	static volatile int32_t t0 = 890026025;

    t0 = (((x1!=x2)-x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x7 = 5731U;
	volatile int32_t t1 = -42613043;

    t1 = (((x5!=x6)-x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 92;
	int16_t x10 = 164;
	int8_t x11 = -1;
	volatile int32_t t2 = 52527976;

    t2 = (((x9!=x10)-x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 0U;
	static volatile int64_t x14 = 4340090814LL;
	int8_t x16 = -1;

    t3 = (((x13!=x14)-x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x19 = UINT8_MAX;
	static int32_t x20 = -1;
	volatile int32_t t4 = -181318174;

    t4 = (((x17!=x18)-x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	int8_t x22 = -7;
	uint8_t x23 = 2U;
	int16_t x24 = -1;
	volatile int32_t t5 = 5768;

    t5 = (((x21!=x22)-x23)==x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -1977LL;
	static int32_t x28 = INT32_MAX;

    t6 = (((x25!=x26)-x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	int8_t x30 = -1;
	static uint32_t x31 = 4008025U;
	int8_t x32 = -1;
	volatile int32_t t7 = 18;

    t7 = (((x29!=x30)-x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 0U;
	int32_t x34 = INT32_MIN;
	static uint8_t x36 = 3U;
	volatile int32_t t8 = 43;

    t8 = (((x33!=x34)-x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = 834129;
	static int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	int32_t t9 = -1748256;

    t9 = (((x37!=x38)-x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 193584859705059100LLU;
	uint64_t x43 = 1505504848LLU;

    t10 = (((x41!=x42)-x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 38339;
	int64_t x47 = 1695LL;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -187371;

    t11 = (((x45!=x46)-x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x50 = 183;
	uint16_t x51 = 1U;
	static volatile int32_t t12 = 256578122;

    t12 = (((x49!=x50)-x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int8_t x54 = 7;
	int32_t x55 = INT32_MAX;
	volatile int32_t t13 = 735754327;

    t13 = (((x53!=x54)-x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 31103U;
	uint8_t x59 = 12U;
	static int32_t t14 = -184546;

    t14 = (((x57!=x58)-x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 9U;
	int64_t x62 = -1LL;
	volatile int64_t x63 = -1LL;
	static int64_t x64 = -1LL;
	int32_t t15 = 0;

    t15 = (((x61!=x62)-x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1;
	uint8_t x67 = UINT8_MAX;
	static int32_t t16 = 155;

    t16 = (((x65!=x66)-x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = INT16_MAX;
	int32_t x70 = -37;
	volatile int8_t x71 = 25;
	volatile int32_t t17 = -7278;

    t17 = (((x69!=x70)-x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = INT32_MIN;
	int64_t x74 = -1LL;
	static uint32_t x75 = 1013852406U;
	int32_t x76 = -1;

    t18 = (((x73!=x74)-x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = -633759LL;
	int64_t x78 = INT64_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 13;

    t19 = (((x77!=x78)-x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	volatile int32_t x82 = INT32_MIN;
	int64_t x83 = 77187080329LL;
	volatile int64_t x84 = -1421111LL;
	int32_t t20 = 12;

    t20 = (((x81!=x82)-x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	volatile uint32_t x88 = 28582327U;
	volatile int32_t t21 = 5;

    t21 = (((x85!=x86)-x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	volatile int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;

    t22 = (((x89!=x90)-x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	static uint64_t x95 = 3191LLU;
	int8_t x96 = 1;
	static volatile int32_t t23 = -1;

    t23 = (((x93!=x94)-x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -8632030496LL;
	static int8_t x99 = INT8_MIN;
	static volatile int32_t t24 = -26;

    t24 = (((x97!=x98)-x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MAX;
	int16_t x102 = -19;
	int8_t x103 = INT8_MIN;
	volatile int16_t x104 = 428;

    t25 = (((x101!=x102)-x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	static volatile uint64_t x106 = 1453551950012711062LLU;
	volatile int32_t x107 = -364;
	uint32_t x108 = 77819851U;

    t26 = (((x105!=x106)-x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	static volatile int32_t x111 = INT32_MAX;
	volatile int32_t t27 = -1;

    t27 = (((x109!=x110)-x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int32_t x114 = INT32_MIN;
	volatile int16_t x115 = INT16_MIN;
	uint64_t x116 = UINT64_MAX;

    t28 = (((x113!=x114)-x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 11U;
	uint8_t x118 = 6U;
	volatile uint16_t x119 = UINT16_MAX;
	volatile uint8_t x120 = UINT8_MAX;
	int32_t t29 = -32;

    t29 = (((x117!=x118)-x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = UINT16_MAX;
	volatile int16_t x122 = INT16_MAX;
	int32_t x123 = 61314230;
	volatile int8_t x124 = INT8_MAX;
	volatile int32_t t30 = 2639338;

    t30 = (((x121!=x122)-x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = 3;
	volatile int8_t x126 = -1;
	static uint16_t x127 = 1U;
	volatile int32_t t31 = -520198126;

    t31 = (((x125!=x126)-x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -17496546;
	int8_t x130 = -1;
	int64_t x132 = 3832127375378812LL;
	volatile int32_t t32 = 960055;

    t32 = (((x129!=x130)-x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	static int16_t x134 = 515;
	static uint8_t x135 = 32U;
	int32_t t33 = -241590;

    t33 = (((x133!=x134)-x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int8_t x138 = 7;
	int8_t x139 = INT8_MIN;
	static int8_t x140 = 0;
	int32_t t34 = -3;

    t34 = (((x137!=x138)-x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	static int8_t x142 = INT8_MIN;
	uint64_t x143 = UINT64_MAX;
	static volatile int32_t t35 = 638581575;

    t35 = (((x141!=x142)-x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 63U;
	int16_t x146 = 0;
	volatile int32_t t36 = -4165123;

    t36 = (((x145!=x146)-x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MIN;
	volatile int64_t x152 = INT64_MAX;
	static int32_t t37 = -1;

    t37 = (((x149!=x150)-x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	uint8_t x154 = 1U;
	int64_t x155 = -1LL;
	static volatile int32_t t38 = 489;

    t38 = (((x153!=x154)-x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x162 = INT64_MIN;
	uint16_t x163 = 13964U;
	static int8_t x164 = INT8_MIN;
	int32_t t39 = 10529;

    t39 = (((x161!=x162)-x163)==x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint32_t x165 = 1237950840U;
	int64_t x166 = INT64_MIN;
	volatile int32_t x167 = -1;
	int8_t x168 = 7;
	volatile int32_t t40 = 26154124;

    t40 = (((x165!=x166)-x167)==x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x169 = 63351161LL;
	int8_t x170 = INT8_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t41 = -6713095;

    t41 = (((x169!=x170)-x171)==x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = -1;
	volatile uint16_t x174 = 92U;
	volatile uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MIN;

    t42 = (((x173!=x174)-x175)==x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = UINT8_MAX;
	int32_t x178 = INT32_MAX;
	int32_t x180 = INT32_MIN;

    t43 = (((x177!=x178)-x179)==x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x181 = 24U;
	int8_t x182 = -1;
	uint16_t x183 = UINT16_MAX;
	int32_t x184 = INT32_MAX;

    t44 = (((x181!=x182)-x183)==x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MAX;

    t45 = (((x185!=x186)-x187)==x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x190 = INT8_MAX;
	uint32_t x191 = 1749145635U;
	int32_t t46 = -9397300;

    t46 = (((x189!=x190)-x191)==x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = INT16_MAX;
	int16_t x196 = -1;

    t47 = (((x193!=x194)-x195)==x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x201 = 48U;
	static int64_t x203 = -1LL;
	uint8_t x204 = 4U;
	volatile int32_t t48 = -21912;

    t48 = (((x201!=x202)-x203)==x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x205 = 98U;
	static uint16_t x206 = 12051U;
	static volatile int8_t x207 = -1;
	int64_t x208 = INT64_MIN;
	static int32_t t49 = -16045383;

    t49 = (((x205!=x206)-x207)==x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = 36;
	int16_t x210 = -1;
	uint32_t x211 = 39140U;
	static uint64_t x212 = 443627829730LLU;
	int32_t t50 = -15026;

    t50 = (((x209!=x210)-x211)==x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x213 = 13831LLU;
	uint8_t x214 = 1U;
	volatile uint8_t x215 = UINT8_MAX;

    t51 = (((x213!=x214)-x215)==x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x221 = INT16_MAX;
	int32_t x222 = INT32_MIN;
	uint8_t x223 = UINT8_MAX;
	uint8_t x224 = 1U;
	static int32_t t52 = -5376778;

    t52 = (((x221!=x222)-x223)==x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x225 = 8192;
	int32_t x226 = INT32_MAX;
	uint16_t x227 = 6U;
	int64_t x228 = INT64_MAX;
	volatile int32_t t53 = -210480112;

    t53 = (((x225!=x226)-x227)==x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = 9720034625LL;
	int8_t x230 = INT8_MIN;
	int64_t x232 = INT64_MAX;
	int32_t t54 = 276;

    t54 = (((x229!=x230)-x231)==x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x233 = -1;
	int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MAX;
	static volatile int32_t t55 = -89988260;

    t55 = (((x233!=x234)-x235)==x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MAX;
	uint8_t x238 = UINT8_MAX;
	uint16_t x239 = UINT16_MAX;
	static int8_t x240 = INT8_MIN;

    t56 = (((x237!=x238)-x239)==x240);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x242 = UINT64_MAX;
	int8_t x243 = -1;
	int32_t t57 = 2592;

    t57 = (((x241!=x242)-x243)==x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x245 = 731858428869LLU;
	uint32_t x246 = 61895U;
	int8_t x247 = 6;
	int32_t t58 = 61210;

    t58 = (((x245!=x246)-x247)==x248);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = 396;
	static volatile int8_t x250 = 0;
	uint32_t x251 = 4351U;
	volatile int32_t t59 = -1;

    t59 = (((x249!=x250)-x251)==x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	static uint16_t x256 = 2453U;
	int32_t t60 = 38709;

    t60 = (((x253!=x254)-x255)==x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x261 = UINT64_MAX;
	uint8_t x263 = 38U;
	uint8_t x264 = 122U;

    t61 = (((x261!=x262)-x263)==x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x265 = 14701U;
	int8_t x266 = 15;
	int16_t x267 = 49;
	static int64_t x268 = INT64_MIN;

    t62 = (((x265!=x266)-x267)==x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x270 = -1;
	static uint32_t x271 = 159U;
	volatile int32_t x272 = -2914;

    t63 = (((x269!=x270)-x271)==x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = INT16_MIN;
	uint32_t x274 = UINT32_MAX;
	static int16_t x275 = INT16_MAX;
	int64_t x276 = 1640591554575575LL;
	int32_t t64 = -793;

    t64 = (((x273!=x274)-x275)==x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	int32_t x280 = 109;
	static int32_t t65 = 55;

    t65 = (((x277!=x278)-x279)==x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x281 = INT8_MIN;
	volatile int16_t x282 = INT16_MIN;
	uint16_t x283 = 14U;
	int16_t x284 = INT16_MAX;
	volatile int32_t t66 = -24641;

    t66 = (((x281!=x282)-x283)==x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x285 = 1U;
	uint16_t x286 = 0U;
	volatile int32_t x288 = 483;
	int32_t t67 = 3259;

    t67 = (((x285!=x286)-x287)==x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x290 = 1;
	int32_t x291 = -1;

    t68 = (((x289!=x290)-x291)==x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x293 = INT64_MIN;
	volatile int16_t x294 = -1;
	int16_t x296 = INT16_MAX;

    t69 = (((x293!=x294)-x295)==x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x298 = INT8_MIN;
	uint16_t x299 = 602U;

    t70 = (((x297!=x298)-x299)==x300);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x301 = 2321U;
	int8_t x302 = INT8_MIN;
	volatile uint64_t x303 = 8613LLU;
	int32_t x304 = INT32_MIN;
	int32_t t71 = -62667;

    t71 = (((x301!=x302)-x303)==x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x305 = 0;
	int32_t x306 = 6;
	static uint32_t x307 = 4287U;
	int64_t x308 = 224469LL;
	static volatile int32_t t72 = -24724745;

    t72 = (((x305!=x306)-x307)==x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x310 = 11U;
	volatile int32_t t73 = -5;

    t73 = (((x309!=x310)-x311)==x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = -25;
	volatile int8_t x315 = 46;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t74 = -1363587;

    t74 = (((x313!=x314)-x315)==x316);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x319 = UINT32_MAX;
	volatile int32_t t75 = 1;

    t75 = (((x317!=x318)-x319)==x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x322 = -12;
	int16_t x323 = -1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t76 = 647819098;

    t76 = (((x321!=x322)-x323)==x324);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x327 = -1;
	static int32_t x328 = INT32_MAX;

    t77 = (((x325!=x326)-x327)==x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x329 = 0;
	int16_t x330 = 14707;
	int32_t x331 = 10962810;
	static volatile int32_t x332 = 13;

    t78 = (((x329!=x330)-x331)==x332);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = -1;
	static int16_t x335 = INT16_MIN;
	int32_t t79 = -465012556;

    t79 = (((x333!=x334)-x335)==x336);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x337 = 927U;
	uint8_t x340 = 1U;
	volatile int32_t t80 = 182;

    t80 = (((x337!=x338)-x339)==x340);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = 10791607261236431LLU;
	int32_t t81 = -6;

    t81 = (((x341!=x342)-x343)==x344);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x345 = INT32_MAX;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	volatile uint64_t x348 = 5678916789409178056LLU;
	volatile int32_t t82 = -79;

    t82 = (((x345!=x346)-x347)==x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x349 = -6984843;
	int32_t x350 = INT32_MIN;
	int64_t x351 = -4432297LL;
	int32_t x352 = INT32_MAX;
	int32_t t83 = 3;

    t83 = (((x349!=x350)-x351)==x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = -1LL;
	static int32_t x354 = INT32_MAX;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = INT8_MAX;
	static int32_t t84 = 74351;

    t84 = (((x353!=x354)-x355)==x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = INT32_MIN;
	volatile uint16_t x358 = UINT16_MAX;
	int64_t x359 = -1LL;
	uint16_t x360 = 3595U;

    t85 = (((x357!=x358)-x359)==x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x362 = 0;
	volatile int64_t x363 = INT64_MAX;

    t86 = (((x361!=x362)-x363)==x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x365 = -1;
	volatile int32_t x366 = -97211906;
	int16_t x367 = 9869;
	uint64_t x368 = 8322LLU;
	volatile int32_t t87 = 78668;

    t87 = (((x365!=x366)-x367)==x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x370 = 1;
	static volatile int16_t x371 = INT16_MIN;
	int8_t x372 = 0;
	int32_t t88 = 1;

    t88 = (((x369!=x370)-x371)==x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x373 = INT16_MIN;
	volatile int8_t x374 = INT8_MIN;
	uint32_t x375 = 990U;
	int64_t x376 = INT64_MIN;
	int32_t t89 = -1041929566;

    t89 = (((x373!=x374)-x375)==x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x377 = -1;
	static uint8_t x378 = 1U;
	uint32_t x380 = UINT32_MAX;
	int32_t t90 = -2;

    t90 = (((x377!=x378)-x379)==x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x381 = -3833;
	int16_t x382 = INT16_MAX;
	int16_t x383 = INT16_MAX;
	volatile int32_t t91 = -333233;

    t91 = (((x381!=x382)-x383)==x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	static int64_t x392 = -82650232883723LL;

    t92 = (((x389!=x390)-x391)==x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x397 = 287889033U;
	static int32_t x398 = 0;
	static int8_t x399 = -1;
	volatile uint64_t x400 = 817LLU;
	volatile int32_t t93 = 26481844;

    t93 = (((x397!=x398)-x399)==x400);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x402 = INT32_MIN;
	int8_t x403 = 0;

    t94 = (((x401!=x402)-x403)==x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x405 = -1LL;
	int8_t x406 = INT8_MIN;
	int32_t x407 = INT32_MAX;
	int16_t x408 = -3;
	static volatile int32_t t95 = -53038087;

    t95 = (((x405!=x406)-x407)==x408);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x409 = INT32_MIN;
	int8_t x411 = -15;
	static int64_t x412 = INT64_MIN;
	static int32_t t96 = 506905869;

    t96 = (((x409!=x410)-x411)==x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x413 = 406842;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	int32_t t97 = 60;

    t97 = (((x413!=x414)-x415)==x416);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x417 = 348717LLU;
	int8_t x420 = 8;

    t98 = (((x417!=x418)-x419)==x420);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x421 = -1LL;
	int8_t x422 = 38;
	int32_t x424 = INT32_MIN;

    t99 = (((x421!=x422)-x423)==x424);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x426 = -2037;
	volatile uint8_t x427 = 21U;
	uint32_t x428 = UINT32_MAX;
	int32_t t100 = 32;

    t100 = (((x425!=x426)-x427)==x428);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x430 = -1662926426039516LL;
	int32_t t101 = -80;

    t101 = (((x429!=x430)-x431)==x432);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x433 = -1LL;
	static int16_t x435 = INT16_MAX;
	int32_t x436 = -1;
	volatile int32_t t102 = 2387194;

    t102 = (((x433!=x434)-x435)==x436);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = -130683LL;
	uint64_t x439 = 7345837797LLU;
	uint64_t x440 = 998280LLU;
	int32_t t103 = 17713499;

    t103 = (((x437!=x438)-x439)==x440);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x441 = 2691377U;
	int32_t x444 = INT32_MIN;

    t104 = (((x441!=x442)-x443)==x444);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x445 = UINT8_MAX;
	static int64_t x446 = INT64_MIN;
	volatile int32_t x447 = 110120;
	int8_t x448 = INT8_MAX;
	static volatile int32_t t105 = 1;

    t105 = (((x445!=x446)-x447)==x448);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t t106 = -417546102;

    t106 = (((x449!=x450)-x451)==x452);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x453 = UINT32_MAX;
	uint16_t x454 = 15186U;
	static int32_t x456 = INT32_MIN;
	int32_t t107 = -69593;

    t107 = (((x453!=x454)-x455)==x456);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x461 = 1U;
	volatile uint16_t x462 = 1197U;
	uint16_t x463 = 6U;
	int32_t x464 = INT32_MIN;

    t108 = (((x461!=x462)-x463)==x464);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x466 = 3074560550812960LLU;
	uint64_t x467 = 884823533242812LLU;
	static int64_t x468 = INT64_MAX;
	int32_t t109 = 0;

    t109 = (((x465!=x466)-x467)==x468);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x469 = INT32_MIN;
	volatile uint8_t x470 = 13U;
	volatile int16_t x472 = INT16_MIN;
	int32_t t110 = -175482468;

    t110 = (((x469!=x470)-x471)==x472);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x473 = INT32_MIN;
	uint64_t x474 = 337878312869LLU;
	int64_t x475 = -2592830741173628072LL;
	int8_t x476 = 2;
	volatile int32_t t111 = 14;

    t111 = (((x473!=x474)-x475)==x476);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x477 = 319544400658941LLU;
	volatile int16_t x479 = -14801;
	static int16_t x480 = -2934;
	volatile int32_t t112 = -32;

    t112 = (((x477!=x478)-x479)==x480);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x485 = INT16_MAX;
	uint16_t x486 = 5626U;
	int64_t x487 = 133414295675LL;
	static volatile int32_t t113 = -253607170;

    t113 = (((x485!=x486)-x487)==x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = -1LL;
	uint8_t x491 = 3U;
	uint16_t x492 = UINT16_MAX;
	static volatile int32_t t114 = -911;

    t114 = (((x489!=x490)-x491)==x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x497 = INT32_MIN;
	static int8_t x498 = -1;
	uint16_t x499 = 3U;
	static volatile int32_t t115 = -3133;

    t115 = (((x497!=x498)-x499)==x500);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x501 = 67U;
	uint16_t x502 = 121U;
	int32_t x503 = -12769982;
	volatile int32_t t116 = -672;

    t116 = (((x501!=x502)-x503)==x504);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x505 = 31;
	int16_t x507 = INT16_MAX;
	volatile int32_t x508 = INT32_MIN;

    t117 = (((x505!=x506)-x507)==x508);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x509 = 107;
	int32_t x510 = -1;
	uint8_t x511 = 6U;
	static int32_t x512 = -1;
	int32_t t118 = 2956568;

    t118 = (((x509!=x510)-x511)==x512);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x513 = 10492996981548LLU;
	uint16_t x514 = 28U;
	uint32_t x515 = 57U;
	int32_t t119 = -646591;

    t119 = (((x513!=x514)-x515)==x516);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x517 = 3U;
	static int16_t x518 = 222;
	static uint64_t x519 = 3445015LLU;
	static volatile int32_t t120 = 37715754;

    t120 = (((x517!=x518)-x519)==x520);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x521 = 5724726078370774046LLU;
	uint32_t x522 = 32221U;
	uint32_t x523 = 20164678U;
	volatile int32_t t121 = 155182;

    t121 = (((x521!=x522)-x523)==x524);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x526 = 970328341;
	int64_t x527 = 2706982440749372LL;
	volatile int32_t t122 = 263662;

    t122 = (((x525!=x526)-x527)==x528);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x533 = 49;
	int32_t x534 = -1;
	static uint32_t x535 = 799739181U;
	int8_t x536 = -1;
	int32_t t123 = -7086;

    t123 = (((x533!=x534)-x535)==x536);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x537 = 21U;
	uint32_t x538 = UINT32_MAX;
	int8_t x539 = INT8_MAX;

    t124 = (((x537!=x538)-x539)==x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x541 = INT16_MAX;
	uint32_t x543 = 10614425U;
	int64_t x544 = 91007763692707166LL;

    t125 = (((x541!=x542)-x543)==x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x545 = INT32_MIN;
	uint8_t x546 = UINT8_MAX;
	int16_t x547 = INT16_MIN;
	int32_t t126 = 13899;

    t126 = (((x545!=x546)-x547)==x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x549 = -515334;
	int32_t x550 = -25;
	volatile int32_t t127 = -399555;

    t127 = (((x549!=x550)-x551)==x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x553 = -1;
	int32_t x555 = 0;
	static volatile uint64_t x556 = 13766LLU;
	volatile int32_t t128 = -2146;

    t128 = (((x553!=x554)-x555)==x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x557 = -48;
	int16_t x559 = -1;
	int16_t x560 = -1;
	volatile int32_t t129 = -297523;

    t129 = (((x557!=x558)-x559)==x560);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x562 = -26;
	uint32_t x563 = 184389773U;
	uint8_t x564 = UINT8_MAX;
	int32_t t130 = -41;

    t130 = (((x561!=x562)-x563)==x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x565 = -1;
	int32_t x566 = -1;
	int32_t x567 = INT32_MAX;
	volatile int16_t x568 = INT16_MIN;
	volatile int32_t t131 = 19;

    t131 = (((x565!=x566)-x567)==x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x569 = 32701LL;
	int64_t x570 = -7720709762703376LL;
	uint32_t x571 = 3U;
	int64_t x572 = -1LL;
	static volatile int32_t t132 = -56;

    t132 = (((x569!=x570)-x571)==x572);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x573 = -1;
	volatile int16_t x574 = -682;
	uint32_t x576 = UINT32_MAX;
	volatile int32_t t133 = 3147103;

    t133 = (((x573!=x574)-x575)==x576);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = INT8_MAX;
	volatile uint32_t x578 = UINT32_MAX;
	uint16_t x580 = 1U;
	int32_t t134 = 626051584;

    t134 = (((x577!=x578)-x579)==x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x581 = 385467664117496LLU;
	uint16_t x582 = 1U;
	static uint64_t x584 = UINT64_MAX;
	volatile int32_t t135 = -6230;

    t135 = (((x581!=x582)-x583)==x584);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = INT16_MIN;
	int16_t x587 = -85;
	int8_t x588 = INT8_MAX;

    t136 = (((x585!=x586)-x587)==x588);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x589 = -385;
	uint32_t x590 = UINT32_MAX;
	int64_t x591 = INT64_MAX;
	uint16_t x592 = 3U;
	volatile int32_t t137 = -15;

    t137 = (((x589!=x590)-x591)==x592);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x593 = INT64_MIN;
	uint32_t x594 = UINT32_MAX;
	int32_t x595 = 16;
	int64_t x596 = 5994407LL;
	volatile int32_t t138 = 1976945;

    t138 = (((x593!=x594)-x595)==x596);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x597 = INT8_MIN;
	uint8_t x599 = 2U;
	uint8_t x600 = 5U;
	int32_t t139 = -7;

    t139 = (((x597!=x598)-x599)==x600);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x602 = 5496615385LLU;
	uint16_t x603 = 112U;
	int8_t x604 = -3;
	volatile int32_t t140 = 4109320;

    t140 = (((x601!=x602)-x603)==x604);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x605 = INT64_MIN;
	int64_t x606 = INT64_MIN;
	volatile uint16_t x607 = 117U;
	uint16_t x608 = UINT16_MAX;
	volatile int32_t t141 = -180257;

    t141 = (((x605!=x606)-x607)==x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x609 = 2573243508859439LLU;
	int64_t x612 = INT64_MAX;

    t142 = (((x609!=x610)-x611)==x612);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x613 = -1;
	int32_t x614 = 3112;
	int32_t x615 = INT32_MAX;
	int8_t x616 = -1;
	volatile int32_t t143 = 1;

    t143 = (((x613!=x614)-x615)==x616);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x618 = -3761;
	static int8_t x619 = 6;
	uint32_t x620 = 15731U;
	int32_t t144 = -1428;

    t144 = (((x617!=x618)-x619)==x620);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x621 = UINT64_MAX;
	uint32_t x622 = 53U;
	volatile uint8_t x623 = 0U;
	uint32_t x624 = UINT32_MAX;
	int32_t t145 = -3;

    t145 = (((x621!=x622)-x623)==x624);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x625 = -1;
	static int16_t x626 = INT16_MIN;
	volatile int32_t x628 = INT32_MAX;
	int32_t t146 = 1;

    t146 = (((x625!=x626)-x627)==x628);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x629 = 236;
	int8_t x630 = -2;
	int32_t x631 = -7085;
	uint32_t x632 = 2550985U;
	int32_t t147 = 1617140;

    t147 = (((x629!=x630)-x631)==x632);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x633 = INT64_MIN;
	uint64_t x634 = 126LLU;
	static uint32_t x635 = UINT32_MAX;
	static uint16_t x636 = UINT16_MAX;
	volatile int32_t t148 = -10840995;

    t148 = (((x633!=x634)-x635)==x636);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x637 = 2205U;
	volatile uint16_t x638 = 12U;
	static int8_t x639 = 29;
	int32_t t149 = 1261;

    t149 = (((x637!=x638)-x639)==x640);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x645 = INT32_MIN;
	volatile int64_t x646 = INT64_MIN;
	int16_t x647 = INT16_MAX;
	int16_t x648 = INT16_MAX;
	volatile int32_t t150 = -9862549;

    t150 = (((x645!=x646)-x647)==x648);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x649 = INT32_MAX;
	int16_t x650 = -1;
	int64_t x651 = -1LL;
	int8_t x652 = INT8_MIN;
	static volatile int32_t t151 = 207;

    t151 = (((x649!=x650)-x651)==x652);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x654 = UINT64_MAX;
	volatile uint16_t x655 = 124U;
	uint64_t x656 = 6643987832345179253LLU;
	volatile int32_t t152 = -1962;

    t152 = (((x653!=x654)-x655)==x656);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x658 = -1LL;
	int32_t x659 = INT32_MAX;
	int32_t x660 = INT32_MIN;
	volatile int32_t t153 = 53;

    t153 = (((x657!=x658)-x659)==x660);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x661 = INT16_MAX;
	int64_t x662 = -1LL;
	int32_t x664 = -1;
	int32_t t154 = -10;

    t154 = (((x661!=x662)-x663)==x664);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x665 = 110U;
	uint32_t x666 = 75U;
	int8_t x667 = INT8_MIN;
	volatile int32_t t155 = -44;

    t155 = (((x665!=x666)-x667)==x668);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t t156 = 487594145;

    t156 = (((x669!=x670)-x671)==x672);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x673 = INT8_MIN;
	int8_t x674 = -6;
	volatile int32_t x675 = 192154419;
	volatile int32_t t157 = 1583;

    t157 = (((x673!=x674)-x675)==x676);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x678 = -1LL;
	int32_t t158 = -1961129;

    t158 = (((x677!=x678)-x679)==x680);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t t159 = -95;

    t159 = (((x681!=x682)-x683)==x684);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x685 = -1;
	int32_t x686 = 0;
	int8_t x687 = INT8_MIN;
	int32_t t160 = 82;

    t160 = (((x685!=x686)-x687)==x688);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x689 = INT16_MIN;
	int8_t x692 = INT8_MIN;
	int32_t t161 = 2713823;

    t161 = (((x689!=x690)-x691)==x692);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x693 = 4U;
	uint8_t x694 = UINT8_MAX;
	uint16_t x695 = 6024U;

    t162 = (((x693!=x694)-x695)==x696);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x697 = 30U;
	uint16_t x698 = 106U;
	int64_t x700 = INT64_MIN;
	volatile int32_t t163 = -8;

    t163 = (((x697!=x698)-x699)==x700);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x701 = 2795356LLU;
	volatile int8_t x703 = INT8_MAX;
	int8_t x704 = -1;
	static int32_t t164 = -912;

    t164 = (((x701!=x702)-x703)==x704);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x705 = -1;
	int64_t x706 = INT64_MIN;
	int32_t x707 = -79682;
	uint8_t x708 = 1U;
	static volatile int32_t t165 = 22370;

    t165 = (((x705!=x706)-x707)==x708);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x711 = INT32_MAX;
	int64_t x712 = INT64_MAX;

    t166 = (((x709!=x710)-x711)==x712);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x713 = -1LL;
	int32_t x714 = INT32_MIN;
	volatile uint8_t x715 = UINT8_MAX;
	int32_t x716 = INT32_MIN;

    t167 = (((x713!=x714)-x715)==x716);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x717 = -7;
	static uint16_t x718 = 123U;
	int64_t x719 = -100973178LL;
	int8_t x720 = -7;

    t168 = (((x717!=x718)-x719)==x720);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x721 = INT8_MAX;
	int64_t x723 = -110680LL;
	int32_t x724 = 22;
	int32_t t169 = 62;

    t169 = (((x721!=x722)-x723)==x724);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x725 = INT8_MIN;
	volatile int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MAX;
	int32_t t170 = -8;

    t170 = (((x725!=x726)-x727)==x728);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x729 = UINT64_MAX;
	int16_t x730 = 1;
	int8_t x731 = -1;
	int32_t x732 = -1;
	static int32_t t171 = 106;

    t171 = (((x729!=x730)-x731)==x732);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x733 = -1;
	uint32_t x734 = 21U;
	volatile int8_t x735 = -1;
	volatile uint16_t x736 = UINT16_MAX;
	volatile int32_t t172 = 536224;

    t172 = (((x733!=x734)-x735)==x736);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x737 = 1;
	int8_t x739 = INT8_MIN;
	static int8_t x740 = -1;
	volatile int32_t t173 = 16;

    t173 = (((x737!=x738)-x739)==x740);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	volatile int32_t x742 = -1;
	uint64_t x744 = 1316087372680LLU;

    t174 = (((x741!=x742)-x743)==x744);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x746 = INT8_MIN;
	int32_t x747 = 29;
	int16_t x748 = INT16_MAX;
	int32_t t175 = -1455;

    t175 = (((x745!=x746)-x747)==x748);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x749 = INT64_MIN;
	int8_t x750 = 46;
	static volatile uint16_t x751 = 54U;
	volatile int32_t t176 = -245567658;

    t176 = (((x749!=x750)-x751)==x752);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x754 = INT8_MIN;
	int64_t x755 = INT64_MAX;
	static int32_t t177 = -972043;

    t177 = (((x753!=x754)-x755)==x756);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x757 = -1;
	uint8_t x758 = 12U;
	volatile uint32_t x759 = 918U;
	int64_t x760 = -18477359843LL;
	static volatile int32_t t178 = 141;

    t178 = (((x757!=x758)-x759)==x760);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x761 = 1750;
	int8_t x762 = 5;
	static int16_t x763 = -1;
	int32_t x764 = -1;
	volatile int32_t t179 = -870740;

    t179 = (((x761!=x762)-x763)==x764);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x765 = INT32_MIN;
	volatile uint32_t x766 = UINT32_MAX;
	uint16_t x767 = UINT16_MAX;
	int32_t x768 = INT32_MAX;
	static int32_t t180 = 258030232;

    t180 = (((x765!=x766)-x767)==x768);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x769 = 21U;
	int8_t x771 = -1;
	volatile int32_t t181 = -13;

    t181 = (((x769!=x770)-x771)==x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x775 = 2294U;
	int32_t t182 = 2302140;

    t182 = (((x773!=x774)-x775)==x776);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x778 = INT32_MIN;
	volatile uint16_t x779 = 959U;
	static int64_t x780 = INT64_MAX;
	volatile int32_t t183 = -621395040;

    t183 = (((x777!=x778)-x779)==x780);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x785 = 12;
	uint8_t x786 = 0U;
	uint16_t x787 = 315U;
	uint32_t x788 = 2458763U;

    t184 = (((x785!=x786)-x787)==x788);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x789 = INT64_MIN;
	int8_t x790 = -1;
	uint8_t x791 = 50U;
	uint64_t x792 = UINT64_MAX;

    t185 = (((x789!=x790)-x791)==x792);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x795 = 168U;
	int64_t x796 = INT64_MIN;
	volatile int32_t t186 = -1;

    t186 = (((x793!=x794)-x795)==x796);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x797 = UINT8_MAX;
	int16_t x798 = INT16_MIN;
	int16_t x799 = -1;
	int32_t x800 = INT32_MIN;
	volatile int32_t t187 = 31;

    t187 = (((x797!=x798)-x799)==x800);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x801 = 294U;
	int16_t x802 = 5442;
	int64_t x804 = -12815LL;
	static int32_t t188 = 329751440;

    t188 = (((x801!=x802)-x803)==x804);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x805 = UINT32_MAX;
	volatile int32_t x806 = INT32_MIN;
	volatile int32_t t189 = -64637;

    t189 = (((x805!=x806)-x807)==x808);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x810 = INT16_MAX;
	volatile uint16_t x811 = UINT16_MAX;
	int32_t t190 = 0;

    t190 = (((x809!=x810)-x811)==x812);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x813 = -1LL;
	int8_t x814 = -1;
	int16_t x815 = -1;
	int16_t x816 = INT16_MIN;
	int32_t t191 = 22427;

    t191 = (((x813!=x814)-x815)==x816);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x817 = UINT32_MAX;
	static int32_t x818 = INT32_MAX;
	int32_t x820 = INT32_MIN;
	int32_t t192 = 601;

    t192 = (((x817!=x818)-x819)==x820);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x821 = -1LL;
	int32_t x822 = INT32_MIN;
	uint64_t x823 = 36244LLU;
	uint32_t x824 = 61776928U;
	volatile int32_t t193 = -1;

    t193 = (((x821!=x822)-x823)==x824);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x825 = INT16_MIN;
	static volatile uint16_t x827 = UINT16_MAX;
	static volatile int16_t x828 = INT16_MAX;
	int32_t t194 = 727811071;

    t194 = (((x825!=x826)-x827)==x828);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x829 = 800076896160469LLU;
	int8_t x830 = -8;
	uint16_t x832 = 14U;

    t195 = (((x829!=x830)-x831)==x832);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x834 = INT64_MAX;
	int64_t x835 = -4485471275LL;
	int64_t x836 = INT64_MIN;

    t196 = (((x833!=x834)-x835)==x836);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x838 = 187;
	int32_t x839 = 3579;
	static volatile uint8_t x840 = 6U;
	volatile int32_t t197 = -121188;

    t197 = (((x837!=x838)-x839)==x840);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x841 = INT16_MIN;
	int16_t x843 = INT16_MIN;
	int8_t x844 = INT8_MAX;

    t198 = (((x841!=x842)-x843)==x844);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x846 = -1LL;
	int64_t x847 = -1LL;
	int32_t x848 = INT32_MIN;
	volatile int32_t t199 = 457176774;

    t199 = (((x845!=x846)-x847)==x848);

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

