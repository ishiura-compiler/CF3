
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

int8_t x3 = 1;
int8_t x4 = 25;
uint32_t x13 = UINT32_MAX;
int64_t x21 = INT64_MAX;
uint32_t x26 = 19U;
uint16_t x29 = UINT16_MAX;
static int64_t x37 = -658966LL;
int8_t x48 = -17;
int8_t x61 = -1;
static int64_t x62 = INT64_MIN;
volatile int8_t x65 = -1;
static int64_t x68 = 3034707651073974LL;
volatile int32_t t17 = 273283;
static volatile int64_t x76 = 161925831952LL;
int64_t x77 = INT64_MIN;
int32_t x79 = 95531;
volatile uint16_t x84 = 28440U;
int32_t x86 = INT32_MAX;
int64_t x87 = INT64_MIN;
int64_t x88 = INT64_MAX;
int8_t x90 = -1;
uint64_t x95 = UINT64_MAX;
static volatile int32_t x103 = INT32_MIN;
int8_t x104 = INT8_MIN;
static volatile int32_t t25 = 58384035;
static int64_t x109 = -13LL;
volatile int8_t x116 = INT8_MIN;
int8_t x119 = INT8_MIN;
int8_t x121 = 1;
uint8_t x128 = 8U;
volatile uint64_t x129 = 0LLU;
int8_t x130 = INT8_MIN;
uint64_t x136 = 501437916LLU;
volatile int32_t t34 = -30588;
uint64_t x146 = 13089595741456001LLU;
int8_t x151 = INT8_MAX;
static volatile uint16_t x152 = UINT16_MAX;
static volatile uint16_t x162 = UINT16_MAX;
static int16_t x165 = INT16_MIN;
volatile int32_t x176 = INT32_MAX;
int16_t x184 = INT16_MAX;
static volatile int32_t t45 = -3118;
int32_t x193 = INT32_MAX;
int8_t x196 = -1;
int32_t t49 = -124;
volatile int32_t t50 = 366279;
uint8_t x207 = 0U;
int32_t t51 = 10;
uint16_t x209 = 22U;
int8_t x213 = -34;
volatile int32_t x215 = 1;
uint64_t x216 = 117950696735LLU;
static uint8_t x220 = 17U;
volatile uint8_t x225 = 3U;
static int8_t x231 = INT8_MAX;
static int32_t t57 = 462869;
volatile int64_t x236 = 47427721477LL;
uint16_t x237 = 6513U;
int16_t x239 = -116;
uint64_t x241 = 64905557108LLU;
static int8_t x245 = -1;
volatile int32_t t62 = -4;
volatile uint64_t x254 = UINT64_MAX;
int32_t t63 = 0;
static uint16_t x268 = 3U;
static int32_t t67 = -625;
static uint8_t x289 = UINT8_MAX;
static uint8_t x294 = 1U;
int32_t t73 = 123;
int32_t x297 = INT32_MIN;
uint16_t x305 = 11U;
int16_t x313 = INT16_MIN;
int64_t x314 = INT64_MIN;
int32_t t79 = 158212447;
int32_t t80 = 0;
static uint64_t x331 = 19094675767934038LLU;
static int8_t x334 = -11;
int32_t t86 = 12155;
uint8_t x352 = UINT8_MAX;
uint8_t x353 = UINT8_MAX;
int64_t x373 = -37400266LL;
int64_t x379 = INT64_MIN;
uint64_t x380 = 513368375LLU;
static volatile int32_t x381 = INT32_MIN;
uint32_t x385 = UINT32_MAX;
int32_t x390 = -3;
int32_t t97 = 4089;
uint8_t x400 = 52U;
volatile int32_t x404 = INT32_MIN;
int8_t x406 = INT8_MAX;
uint32_t x409 = 354375157U;
uint32_t x436 = 219461934U;
uint16_t x439 = 6U;
int64_t x453 = 40637991440756680LL;
int64_t x454 = -1LL;
uint8_t x458 = 31U;
int32_t x459 = INT32_MAX;
static int32_t t114 = -25569;
uint32_t x461 = 12U;
uint8_t x472 = 3U;
int64_t x478 = 31432LL;
volatile int32_t t119 = 944776;
int8_t x482 = -1;
static int8_t x483 = INT8_MIN;
int8_t x484 = INT8_MAX;
static uint32_t x488 = 0U;
static int32_t t121 = -3462;
static int32_t x490 = INT32_MAX;
static volatile int32_t x493 = INT32_MIN;
int8_t x497 = INT8_MAX;
uint64_t x502 = 211706432276304329LLU;
uint8_t x504 = UINT8_MAX;
int16_t x505 = -1;
int16_t x510 = INT16_MIN;
uint16_t x511 = 4061U;
uint64_t x512 = 3226903309321597LLU;
volatile int16_t x515 = 49;
volatile int32_t t129 = 19;
int32_t t130 = -30;
uint16_t x525 = UINT16_MAX;
uint16_t x528 = 5U;
static volatile int32_t t131 = 49;
uint64_t x535 = 97LLU;
int16_t x539 = INT16_MIN;
volatile int16_t x541 = -1;
volatile uint64_t x542 = 5LLU;
uint8_t x547 = 89U;
int32_t t136 = 885;
static int32_t t137 = 0;
int64_t x553 = 24749254LL;
int8_t x554 = -3;
static int32_t t138 = 51103;
int64_t x559 = -41557812LL;
int64_t x568 = -1LL;
int16_t x572 = INT16_MIN;
int32_t t144 = 14;
int32_t x583 = -1;
static int16_t x588 = 0;
int32_t x596 = -1;
int64_t x597 = INT64_MIN;
int16_t x598 = -3212;
static int8_t x600 = INT8_MAX;
int32_t t149 = 31427;
int64_t x605 = -10397631106406LL;
static int64_t x613 = -269520071770543059LL;
uint32_t x614 = 61693032U;
uint32_t x615 = UINT32_MAX;
volatile int32_t x627 = -1;
uint64_t x630 = 311071176LLU;
volatile int32_t t160 = -235819;
volatile uint32_t x645 = 175U;
volatile int32_t t161 = -194633103;
static volatile int64_t x651 = INT64_MIN;
volatile int32_t t163 = -18556764;
volatile int16_t x658 = 3006;
int64_t x662 = -1LL;
static int8_t x666 = INT8_MIN;
int32_t t167 = 14;
int16_t x673 = INT16_MIN;
int16_t x680 = INT16_MIN;
uint64_t x693 = 550448161182758LLU;
volatile int64_t x695 = INT64_MIN;
static volatile int32_t t173 = -41725609;
int32_t t174 = 5;
int32_t t175 = -592788;
int32_t t176 = 786;
volatile int64_t x711 = INT64_MAX;
int8_t x714 = 62;
int32_t x721 = INT32_MIN;
uint16_t x723 = 6362U;
volatile int64_t x724 = -1LL;
int32_t t182 = -50846;
volatile uint8_t x739 = 39U;
int8_t x742 = INT8_MAX;
int32_t t187 = -770;
int16_t x761 = INT16_MIN;
int64_t x769 = 44362343685568LL;
int8_t x771 = 0;
int32_t x775 = INT32_MIN;
int8_t x781 = -30;
uint32_t x789 = UINT32_MAX;
int32_t t197 = 147776541;
volatile uint16_t x796 = 20U;
volatile int32_t t198 = 18;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	int32_t x2 = INT32_MAX;
	int32_t t0 = 25953;

    t0 = ((x1^(x2>x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	int32_t x6 = 3451;
	volatile uint64_t x7 = UINT64_MAX;
	uint32_t x8 = 884377798U;
	volatile int32_t t1 = -6280539;

    t1 = ((x5^(x6>x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 10U;
	uint8_t x10 = UINT8_MAX;
	static int32_t x11 = INT32_MAX;
	volatile int64_t x12 = -1258LL;
	static volatile int32_t t2 = -107275318;

    t2 = ((x9^(x10>x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MIN;
	int64_t x16 = 18127LL;
	int32_t t3 = 28605;

    t3 = ((x13^(x14>x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	volatile int8_t x18 = -5;
	int8_t x19 = -21;
	static int8_t x20 = -1;
	volatile int32_t t4 = -46921;

    t4 = ((x17^(x18>x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 84U;
	static uint32_t x23 = UINT32_MAX;
	volatile uint64_t x24 = 2931631LLU;
	volatile int32_t t5 = 462;

    t5 = ((x21^(x22>x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = -984;

    t6 = ((x25^(x26>x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = -1;
	int64_t x31 = -1LL;
	int16_t x32 = -1;
	volatile int32_t t7 = -1046590156;

    t7 = ((x29^(x30>x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 285LLU;
	int32_t x34 = -5627363;
	static int16_t x35 = INT16_MIN;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = 114748;

    t8 = ((x33^(x34>x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = -71810466408716233LL;
	static int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = 140U;
	int32_t t9 = -117447;

    t9 = ((x37^(x38>x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -3755586528129LL;
	int64_t x42 = INT64_MIN;
	volatile uint16_t x43 = 1U;
	volatile uint64_t x44 = 2468073684770371942LLU;
	static volatile int32_t t10 = -186;

    t10 = ((x41^(x42>x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 34U;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = 37U;
	static int32_t t11 = 199;

    t11 = ((x45^(x46>x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 15073762U;
	int8_t x50 = -1;
	volatile int16_t x51 = -3463;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 17707;

    t12 = ((x49^(x50>x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = 3;
	volatile int16_t x54 = INT16_MAX;
	uint32_t x55 = UINT32_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -1167521;

    t13 = ((x53^(x54>x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 41U;
	uint64_t x58 = UINT64_MAX;
	static uint32_t x59 = 66883337U;
	uint32_t x60 = 7U;
	volatile int32_t t14 = 2510702;

    t14 = ((x57^(x58>x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x63 = 61573553U;
	volatile uint32_t x64 = 23U;
	volatile int32_t t15 = 347138;

    t15 = ((x61^(x62>x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = 9607U;
	int8_t x67 = INT8_MAX;
	volatile int32_t t16 = -5206301;

    t16 = ((x65^(x66>x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	static uint64_t x70 = 2LLU;
	volatile int16_t x71 = INT16_MIN;
	static int8_t x72 = INT8_MIN;

    t17 = ((x69^(x70>x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -147528628312318966LL;
	int16_t x74 = 1645;
	int16_t x75 = -1343;
	int32_t t18 = -7;

    t18 = ((x73^(x74>x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = INT8_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -56789385;

    t19 = ((x77^(x78>x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 8342436687078LL;
	int64_t x82 = -1LL;
	uint8_t x83 = 35U;
	volatile int32_t t20 = 1;

    t20 = ((x81^(x82>x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	static int32_t t21 = 25;

    t21 = ((x85^(x86>x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 609U;
	volatile int32_t x91 = -1;
	int16_t x92 = -8;
	volatile int32_t t22 = -323;

    t22 = ((x89^(x90>x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = UINT16_MAX;
	uint8_t x94 = UINT8_MAX;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = -237060;

    t23 = ((x93^(x94>x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MAX;
	volatile int8_t x98 = -1;
	uint8_t x99 = 1U;
	volatile int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = 87408;

    t24 = ((x97^(x98>x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 0U;
	int8_t x102 = INT8_MAX;

    t25 = ((x101^(x102>x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 422944988U;
	volatile int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MAX;
	int64_t x108 = 6498452244922LL;
	volatile int32_t t26 = -752;

    t26 = ((x105^(x106>x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MAX;
	int16_t x111 = INT16_MAX;
	volatile uint32_t x112 = 2452859U;
	volatile int32_t t27 = -128;

    t27 = ((x109^(x110>x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = 126294663025LL;
	static uint64_t x115 = 35241LLU;
	static volatile int32_t t28 = -1;

    t28 = ((x113^(x114>x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	int16_t x118 = -1;
	int8_t x120 = -18;
	int32_t t29 = 30639521;

    t29 = ((x117^(x118>x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = 2;
	int16_t x123 = -1;
	int8_t x124 = -1;
	static int32_t t30 = -2610820;

    t30 = ((x121^(x122>x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = 3;
	static int64_t x126 = INT64_MIN;
	static int32_t x127 = INT32_MAX;
	int32_t t31 = 1;

    t31 = ((x125^(x126>x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x131 = INT64_MIN;
	static int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 11561;

    t32 = ((x129^(x130>x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	static int16_t x134 = INT16_MAX;
	volatile int64_t x135 = -6302LL;
	static volatile int32_t t33 = -3554;

    t33 = ((x133^(x134>x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	uint16_t x138 = 2520U;
	int8_t x139 = -1;
	volatile int8_t x140 = 12;

    t34 = ((x137^(x138>x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x141 = INT8_MIN;
	static volatile uint32_t x142 = 103U;
	uint32_t x143 = UINT32_MAX;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = -2184;

    t35 = ((x141^(x142>x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x145 = INT16_MIN;
	uint8_t x147 = 24U;
	uint64_t x148 = 302630950043LLU;
	volatile int32_t t36 = 93722;

    t36 = ((x145^(x146>x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	int32_t t37 = 610489146;

    t37 = ((x149^(x150>x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -6301;
	int32_t x154 = INT32_MAX;
	volatile int8_t x155 = 1;
	static int8_t x156 = -1;
	volatile int32_t t38 = -132297;

    t38 = ((x153^(x154>x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 0U;
	uint8_t x158 = 109U;
	int8_t x159 = INT8_MAX;
	int8_t x160 = -1;
	volatile int32_t t39 = 136;

    t39 = ((x157^(x158>x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 1U;
	uint16_t x163 = 14U;
	int16_t x164 = -1;
	int32_t t40 = 11874;

    t40 = ((x161^(x162>x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x166 = UINT64_MAX;
	uint8_t x167 = UINT8_MAX;
	static int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = -266988450;

    t41 = ((x165^(x166>x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MIN;
	uint64_t x170 = 24894701843849LLU;
	int8_t x171 = 28;
	uint8_t x172 = 3U;
	static int32_t t42 = -34341318;

    t42 = ((x169^(x170>x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 157U;
	volatile int8_t x174 = -6;
	uint16_t x175 = UINT16_MAX;
	volatile int32_t t43 = -93122819;

    t43 = ((x173^(x174>x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MIN;
	static int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MAX;
	static int32_t x180 = -1;
	volatile int32_t t44 = -28646703;

    t44 = ((x177^(x178>x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint64_t x182 = 3714889042732479LLU;
	volatile int32_t x183 = INT32_MIN;

    t45 = ((x181^(x182>x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 12365040;
	volatile int16_t x186 = 4477;
	int8_t x187 = INT8_MIN;
	int64_t x188 = -77LL;
	volatile int32_t t46 = 5;

    t46 = ((x185^(x186>x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 2;
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = 0U;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = -586564;

    t47 = ((x189^(x190>x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = 1;
	int8_t x195 = INT8_MIN;
	static int32_t t48 = -2026384;

    t48 = ((x193^(x194>x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	int8_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = -1;

    t49 = ((x197^(x198>x199))==x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	uint16_t x202 = 1200U;
	int8_t x203 = -1;
	int16_t x204 = 26;

    t50 = ((x201^(x202>x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 55U;
	int64_t x206 = INT64_MAX;
	uint32_t x208 = UINT32_MAX;

    t51 = ((x205^(x206>x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = INT32_MIN;
	int8_t x211 = -22;
	int64_t x212 = 6287271823968665LL;
	int32_t t52 = 1;

    t52 = ((x209^(x210>x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x214 = -349352;
	volatile int32_t t53 = 100446380;

    t53 = ((x213^(x214>x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 77914715395LL;
	uint32_t x218 = 769702315U;
	int64_t x219 = 3988478547159039040LL;
	volatile int32_t t54 = -1;

    t54 = ((x217^(x218>x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 1;
	int8_t x222 = 43;
	int64_t x223 = INT64_MAX;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t55 = 6;

    t55 = ((x221^(x222>x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x226 = 11U;
	volatile int8_t x227 = -1;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -708602375;

    t56 = ((x225^(x226>x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 10U;
	uint32_t x230 = UINT32_MAX;
	static uint16_t x232 = 4619U;

    t57 = ((x229^(x230>x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	static int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = -1850;

    t58 = ((x233^(x234>x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = 9;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = 5306;

    t59 = ((x237^(x238>x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x242 = 1171U;
	int8_t x243 = 31;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -2303936;

    t60 = ((x241^(x242>x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MAX;
	int8_t x247 = INT8_MIN;
	volatile uint32_t x248 = 15067403U;
	static volatile int32_t t61 = 1;

    t61 = ((x245^(x246>x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MAX;
	uint8_t x250 = 6U;
	uint64_t x251 = 26707166179538085LLU;
	int16_t x252 = -1;

    t62 = ((x249^(x250>x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;

    t63 = ((x253^(x254>x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = 22;
	int64_t x258 = INT64_MAX;
	uint16_t x259 = 430U;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = 3481;

    t64 = ((x257^(x258>x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = 19;
	volatile int32_t x262 = -65758584;
	uint32_t x263 = 989497374U;
	static uint16_t x264 = 12339U;
	static int32_t t65 = 163;

    t65 = ((x261^(x262>x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int64_t x266 = -271724081808523221LL;
	uint16_t x267 = 2U;
	volatile int32_t t66 = 90;

    t66 = ((x265^(x266>x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = INT64_MIN;
	int32_t x270 = -1;
	int16_t x271 = 1;
	int8_t x272 = INT8_MAX;

    t67 = ((x269^(x270>x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = 35U;
	static int16_t x274 = -3956;
	uint64_t x275 = UINT64_MAX;
	volatile int16_t x276 = INT16_MAX;
	int32_t t68 = 735171;

    t68 = ((x273^(x274>x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 3U;
	int8_t x278 = 1;
	uint64_t x279 = UINT64_MAX;
	uint64_t x280 = UINT64_MAX;
	static volatile int32_t t69 = 8;

    t69 = ((x277^(x278>x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = 623753203U;
	int64_t x282 = -1LL;
	int64_t x283 = -1LL;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t70 = 15541917;

    t70 = ((x281^(x282>x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MAX;
	static volatile uint32_t x286 = UINT32_MAX;
	uint32_t x287 = 5034660U;
	int8_t x288 = -1;
	int32_t t71 = -3210;

    t71 = ((x285^(x286>x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x290 = INT64_MAX;
	static volatile int8_t x291 = INT8_MIN;
	int8_t x292 = -1;
	volatile int32_t t72 = 720076178;

    t72 = ((x289^(x290>x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	int64_t x296 = -1601641317LL;

    t73 = ((x293^(x294>x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x298 = -4409;
	volatile uint32_t x299 = UINT32_MAX;
	uint8_t x300 = 7U;
	int32_t t74 = -844271282;

    t74 = ((x297^(x298>x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 0;
	static volatile uint32_t x302 = UINT32_MAX;
	volatile int16_t x303 = 184;
	volatile uint8_t x304 = 2U;
	int32_t t75 = -3;

    t75 = ((x301^(x302>x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x306 = UINT8_MAX;
	static uint64_t x307 = 1523LLU;
	uint16_t x308 = 15333U;
	static volatile int32_t t76 = -483060;

    t76 = ((x305^(x306>x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	static int32_t x311 = INT32_MIN;
	uint64_t x312 = 21143782035146508LLU;
	volatile int32_t t77 = 634;

    t77 = ((x309^(x310>x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x315 = 22U;
	uint64_t x316 = 250668325LLU;
	int32_t t78 = 115417446;

    t78 = ((x313^(x314>x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 10U;
	uint32_t x318 = 1067622443U;
	static volatile uint32_t x319 = 19U;
	static int32_t x320 = -15014;

    t79 = ((x317^(x318>x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = INT8_MAX;
	static uint8_t x323 = UINT8_MAX;
	volatile int16_t x324 = -1;

    t80 = ((x321^(x322>x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -1;
	static volatile int16_t x326 = INT16_MAX;
	int32_t x327 = INT32_MAX;
	volatile int16_t x328 = -3;
	int32_t t81 = 28184130;

    t81 = ((x325^(x326>x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = 13476272549LL;
	int64_t x330 = 1LL;
	int32_t x332 = -1;
	static volatile int32_t t82 = -362;

    t82 = ((x329^(x330>x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = -1;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;
	int32_t t83 = 891459;

    t83 = ((x333^(x334>x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MAX;
	static int16_t x340 = INT16_MIN;
	int32_t t84 = -6879191;

    t84 = ((x337^(x338>x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 1LL;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	volatile int32_t x344 = -402064;
	int32_t t85 = -33862;

    t85 = ((x341^(x342>x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x345 = 35U;
	int32_t x346 = INT32_MIN;
	volatile uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MIN;

    t86 = ((x345^(x346>x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int8_t x350 = -1;
	uint16_t x351 = 18U;
	volatile int32_t t87 = 86913;

    t87 = ((x349^(x350>x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = 3640LL;
	int32_t x355 = -380603677;
	int16_t x356 = -1;
	int32_t t88 = -467103;

    t88 = ((x353^(x354>x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = -11;
	static volatile int32_t x358 = -1;
	static volatile uint64_t x359 = 39873004LLU;
	static uint64_t x360 = 396158866050LLU;
	volatile int32_t t89 = -20119;

    t89 = ((x357^(x358>x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	static volatile int64_t x362 = 26178LL;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t90 = 3001653;

    t90 = ((x361^(x362>x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = -1LL;
	static uint16_t x366 = 57U;
	uint8_t x367 = 1U;
	int32_t x368 = INT32_MIN;
	int32_t t91 = -2932;

    t91 = ((x365^(x366>x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	volatile uint8_t x370 = 55U;
	volatile int8_t x371 = -8;
	int64_t x372 = INT64_MIN;
	static int32_t t92 = -53363956;

    t92 = ((x369^(x370>x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x374 = -26;
	uint32_t x375 = 20482642U;
	static volatile int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 181037938;

    t93 = ((x373^(x374>x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -222203;
	int64_t x378 = INT64_MIN;
	int32_t t94 = -42;

    t94 = ((x377^(x378>x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = INT32_MIN;
	int32_t x383 = -1;
	int8_t x384 = -1;
	volatile int32_t t95 = 14;

    t95 = ((x381^(x382>x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = INT32_MIN;
	static int16_t x387 = 2;
	uint64_t x388 = 26184430LLU;
	int32_t t96 = 0;

    t96 = ((x385^(x386>x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	volatile uint32_t x391 = 59U;
	volatile int64_t x392 = INT64_MIN;

    t97 = ((x389^(x390>x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = 1498087LL;
	int16_t x394 = INT16_MIN;
	int16_t x395 = -1;
	int8_t x396 = -3;
	int32_t t98 = -532876126;

    t98 = ((x393^(x394>x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MIN;
	int32_t x398 = -819812;
	int16_t x399 = INT16_MIN;
	volatile int32_t t99 = 1807451;

    t99 = ((x397^(x398>x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x401 = 1650419325LLU;
	volatile int16_t x402 = -1;
	static uint64_t x403 = UINT64_MAX;
	volatile int32_t t100 = -1317;

    t100 = ((x401^(x402>x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x405 = 8U;
	uint64_t x407 = 2343817806720140LLU;
	volatile int8_t x408 = 1;
	int32_t t101 = 1349;

    t101 = ((x405^(x406>x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x410 = -7;
	int32_t x411 = INT32_MAX;
	int64_t x412 = INT64_MIN;
	int32_t t102 = 13222;

    t102 = ((x409^(x410>x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 1349579831U;
	int32_t x414 = INT32_MIN;
	volatile int16_t x415 = -197;
	static int8_t x416 = INT8_MIN;
	int32_t t103 = -642776659;

    t103 = ((x413^(x414>x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	int32_t x418 = -1;
	uint64_t x419 = 249060LLU;
	int64_t x420 = INT64_MAX;
	volatile int32_t t104 = -43;

    t104 = ((x417^(x418>x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = INT16_MIN;
	uint32_t x422 = 0U;
	int32_t x423 = INT32_MIN;
	static volatile int32_t x424 = INT32_MAX;
	static volatile int32_t t105 = 30;

    t105 = ((x421^(x422>x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	uint32_t x426 = 541303U;
	uint32_t x427 = 92801416U;
	static int16_t x428 = INT16_MAX;
	static int32_t t106 = 53970263;

    t106 = ((x425^(x426>x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x429 = 8533355U;
	int8_t x430 = 6;
	uint16_t x431 = 282U;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t107 = 23915;

    t107 = ((x429^(x430>x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x433 = INT32_MAX;
	int16_t x434 = 8375;
	int32_t x435 = INT32_MIN;
	static volatile int32_t t108 = -6;

    t108 = ((x433^(x434>x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 0;
	static int16_t x438 = INT16_MIN;
	int16_t x440 = -1;
	volatile int32_t t109 = 1394;

    t109 = ((x437^(x438>x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	uint8_t x442 = 1U;
	int8_t x443 = INT8_MIN;
	int8_t x444 = INT8_MIN;
	int32_t t110 = 1;

    t110 = ((x441^(x442>x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	int64_t x446 = 157513385415787904LL;
	static int16_t x447 = 119;
	int32_t x448 = 217457;
	volatile int32_t t111 = 13954;

    t111 = ((x445^(x446>x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	uint32_t x450 = UINT32_MAX;
	volatile int64_t x451 = -105LL;
	int64_t x452 = INT64_MIN;
	int32_t t112 = 5580802;

    t112 = ((x449^(x450>x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x455 = 259968921LLU;
	int8_t x456 = -1;
	int32_t t113 = -50047799;

    t113 = ((x453^(x454>x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = -1;
	int64_t x460 = INT64_MAX;

    t114 = ((x457^(x458>x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x462 = 0LL;
	int16_t x463 = -13;
	int64_t x464 = INT64_MIN;
	volatile int32_t t115 = 91034499;

    t115 = ((x461^(x462>x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MAX;
	int16_t x466 = INT16_MIN;
	static int64_t x467 = INT64_MIN;
	int16_t x468 = -1;
	volatile int32_t t116 = 147;

    t116 = ((x465^(x466>x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 0U;
	int16_t x470 = -11;
	static int64_t x471 = INT64_MAX;
	int32_t t117 = -120906;

    t117 = ((x469^(x470>x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	int8_t x474 = INT8_MAX;
	uint64_t x475 = 669894208LLU;
	int32_t x476 = INT32_MIN;
	static int32_t t118 = 297784;

    t118 = ((x473^(x474>x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	uint32_t x479 = UINT32_MAX;
	static volatile int32_t x480 = INT32_MIN;

    t119 = ((x477^(x478>x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	int32_t t120 = 1112876;

    t120 = ((x481^(x482>x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = INT8_MIN;
	int16_t x486 = -57;
	static int32_t x487 = INT32_MAX;

    t121 = ((x485^(x486>x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 7569U;
	static int32_t x491 = 103531426;
	static int16_t x492 = -450;
	int32_t t122 = -12792853;

    t122 = ((x489^(x490>x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MIN;
	static int64_t x495 = -234565243086454LL;
	int64_t x496 = INT64_MIN;
	volatile int32_t t123 = 4798273;

    t123 = ((x493^(x494>x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MIN;
	volatile uint8_t x499 = 112U;
	int16_t x500 = -1;
	int32_t t124 = -304764;

    t124 = ((x497^(x498>x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	int8_t x503 = INT8_MIN;
	int32_t t125 = 1;

    t125 = ((x501^(x502>x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x506 = 34U;
	int64_t x507 = 0LL;
	int8_t x508 = 52;
	volatile int32_t t126 = -542554102;

    t126 = ((x505^(x506>x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 335U;
	int32_t t127 = -193073;

    t127 = ((x509^(x510>x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = -50;
	volatile int16_t x514 = INT16_MIN;
	int16_t x516 = -1;
	volatile int32_t t128 = -4393;

    t128 = ((x513^(x514>x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = UINT16_MAX;
	volatile uint64_t x518 = 61842273887873LLU;
	uint32_t x519 = 41294U;
	uint64_t x520 = 2482076767809914683LLU;

    t129 = ((x517^(x518>x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	int16_t x522 = -215;
	uint64_t x523 = 1LLU;
	int16_t x524 = INT16_MIN;

    t130 = ((x521^(x522>x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x526 = -1;
	volatile int8_t x527 = INT8_MIN;

    t131 = ((x525^(x526>x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	uint16_t x530 = 19U;
	static uint8_t x531 = 1U;
	static uint32_t x532 = UINT32_MAX;
	volatile int32_t t132 = -246819;

    t132 = ((x529^(x530>x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 2771U;
	static int64_t x534 = -1LL;
	int32_t x536 = 1;
	int32_t t133 = 7758;

    t133 = ((x533^(x534>x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	int16_t x538 = 0;
	uint32_t x540 = UINT32_MAX;
	int32_t t134 = -3701885;

    t134 = ((x537^(x538>x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x543 = INT64_MIN;
	int8_t x544 = -6;
	int32_t t135 = 1362026;

    t135 = ((x541^(x542>x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 1U;
	uint64_t x546 = UINT64_MAX;
	static int64_t x548 = INT64_MIN;

    t136 = ((x545^(x546>x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x549 = 334U;
	static int32_t x550 = -1;
	volatile int16_t x551 = 1;
	int8_t x552 = INT8_MIN;

    t137 = ((x549^(x550>x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x555 = -10;
	uint64_t x556 = 3671488198145LLU;

    t138 = ((x553^(x554>x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 0U;
	uint32_t x558 = UINT32_MAX;
	int16_t x560 = 1;
	int32_t t139 = -197;

    t139 = ((x557^(x558>x559))==x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -4;
	int8_t x562 = 0;
	static int64_t x563 = INT64_MAX;
	static int8_t x564 = INT8_MIN;
	volatile int32_t t140 = -59965;

    t140 = ((x561^(x562>x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 9U;
	int16_t x566 = -1;
	static volatile int8_t x567 = -1;
	int32_t t141 = -10043057;

    t141 = ((x565^(x566>x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	uint32_t x570 = UINT32_MAX;
	int16_t x571 = -584;
	volatile int32_t t142 = 5281743;

    t142 = ((x569^(x570>x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = -1;
	uint32_t x575 = 87U;
	volatile int64_t x576 = INT64_MAX;
	volatile int32_t t143 = -6508665;

    t143 = ((x573^(x574>x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 1541956LLU;
	int64_t x578 = INT64_MIN;
	int8_t x579 = INT8_MAX;
	uint8_t x580 = 97U;

    t144 = ((x577^(x578>x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	volatile int32_t x582 = INT32_MIN;
	static int64_t x584 = INT64_MIN;
	int32_t t145 = 2044;

    t145 = ((x581^(x582>x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int64_t x586 = 4903LL;
	uint16_t x587 = UINT16_MAX;
	int32_t t146 = -1048535;

    t146 = ((x585^(x586>x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x589 = 2447999U;
	static int64_t x590 = -1LL;
	uint16_t x591 = UINT16_MAX;
	uint16_t x592 = UINT16_MAX;
	volatile int32_t t147 = 112138;

    t147 = ((x589^(x590>x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -48544;
	static int8_t x594 = INT8_MIN;
	volatile int32_t x595 = -1;
	volatile int32_t t148 = -122926836;

    t148 = ((x593^(x594>x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x599 = -1;

    t149 = ((x597^(x598>x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 11U;
	volatile uint16_t x602 = 59U;
	int8_t x603 = -1;
	volatile uint8_t x604 = 94U;
	int32_t t150 = 375;

    t150 = ((x601^(x602>x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x606 = 2817897350LLU;
	int16_t x607 = -1;
	static uint64_t x608 = UINT64_MAX;
	static int32_t t151 = 3170966;

    t151 = ((x605^(x606>x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 11U;
	static int64_t x610 = -1LL;
	int16_t x611 = -1;
	int16_t x612 = 3840;
	volatile int32_t t152 = 0;

    t152 = ((x609^(x610>x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x616 = -1;
	volatile int32_t t153 = 1;

    t153 = ((x613^(x614>x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 13U;
	static volatile int32_t x618 = INT32_MIN;
	uint64_t x619 = UINT64_MAX;
	int32_t x620 = -1;
	int32_t t154 = 1744;

    t154 = ((x617^(x618>x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x621 = 63076LLU;
	uint16_t x622 = UINT16_MAX;
	int64_t x623 = -1LL;
	volatile int16_t x624 = INT16_MIN;
	volatile int32_t t155 = -21740206;

    t155 = ((x621^(x622>x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -22100;
	int8_t x626 = INT8_MIN;
	int16_t x628 = -996;
	int32_t t156 = 443294480;

    t156 = ((x625^(x626>x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 4U;
	int32_t x631 = 78612008;
	int64_t x632 = -1LL;
	int32_t t157 = -2311573;

    t157 = ((x629^(x630>x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = UINT16_MAX;
	static int16_t x634 = -2;
	int32_t x635 = INT32_MIN;
	int32_t x636 = 21612307;
	volatile int32_t t158 = 388171171;

    t158 = ((x633^(x634>x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x637 = UINT64_MAX;
	uint16_t x638 = 24099U;
	int8_t x639 = -1;
	uint64_t x640 = 125589136114LLU;
	volatile int32_t t159 = -21299771;

    t159 = ((x637^(x638>x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = 0;
	int16_t x643 = -70;
	volatile int64_t x644 = INT64_MIN;

    t160 = ((x641^(x642>x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x646 = UINT64_MAX;
	int64_t x647 = -11415LL;
	uint32_t x648 = 1905U;

    t161 = ((x645^(x646>x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = -1;
	static int8_t x650 = -1;
	int32_t x652 = 28418;
	volatile int32_t t162 = -174927;

    t162 = ((x649^(x650>x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	int64_t x654 = INT64_MAX;
	int16_t x655 = 10422;
	volatile int16_t x656 = -5195;

    t163 = ((x653^(x654>x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 798807LLU;
	int8_t x659 = INT8_MAX;
	int8_t x660 = INT8_MAX;
	volatile int32_t t164 = -1208;

    t164 = ((x657^(x658>x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int32_t x663 = -1;
	uint8_t x664 = 0U;
	int32_t t165 = 214;

    t165 = ((x661^(x662>x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MIN;
	int8_t x667 = -1;
	static int64_t x668 = -132127482LL;
	int32_t t166 = -45762031;

    t166 = ((x665^(x666>x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x669 = 264LLU;
	volatile int64_t x670 = -6LL;
	int8_t x671 = -1;
	volatile uint8_t x672 = 28U;

    t167 = ((x669^(x670>x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x674 = 39077429U;
	uint16_t x675 = UINT16_MAX;
	uint64_t x676 = 19979601865803LLU;
	int32_t t168 = 640915;

    t168 = ((x673^(x674>x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -493042842895475769LL;
	uint64_t x678 = 84659LLU;
	int8_t x679 = INT8_MIN;
	int32_t t169 = -1;

    t169 = ((x677^(x678>x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 408U;
	uint32_t x682 = 477U;
	int16_t x683 = 4;
	int8_t x684 = INT8_MIN;
	volatile int32_t t170 = 11;

    t170 = ((x681^(x682>x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = INT32_MIN;
	volatile uint8_t x686 = 38U;
	int8_t x687 = INT8_MIN;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t171 = -2911;

    t171 = ((x685^(x686>x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 83664628607054089LL;
	int32_t x690 = 11777149;
	int32_t x691 = INT32_MIN;
	uint32_t x692 = 66205U;
	volatile int32_t t172 = 313332666;

    t172 = ((x689^(x690>x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x694 = -1;
	static int8_t x696 = INT8_MIN;

    t173 = ((x693^(x694>x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 228U;
	volatile int64_t x698 = 1107480053650384074LL;
	static volatile int16_t x699 = INT16_MAX;
	uint16_t x700 = 818U;

    t174 = ((x697^(x698>x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MAX;
	static uint16_t x702 = 13U;
	int16_t x703 = INT16_MAX;
	volatile int16_t x704 = 5419;

    t175 = ((x701^(x702>x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 0;
	volatile uint64_t x706 = UINT64_MAX;
	uint64_t x707 = 28318488124LLU;
	int32_t x708 = 70911;

    t176 = ((x705^(x706>x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 7U;
	int16_t x710 = -1;
	static uint8_t x712 = 0U;
	volatile int32_t t177 = -127656504;

    t177 = ((x709^(x710>x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = UINT32_MAX;
	int8_t x715 = 7;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t178 = -1;

    t178 = ((x713^(x714>x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = -1;
	int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MIN;
	int64_t x720 = 323563097LL;
	volatile int32_t t179 = 1;

    t179 = ((x717^(x718>x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = UINT64_MAX;
	int32_t t180 = 4007;

    t180 = ((x721^(x722>x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = -1;
	uint16_t x726 = 12017U;
	uint8_t x727 = 13U;
	static int16_t x728 = -755;
	int32_t t181 = 55115264;

    t181 = ((x725^(x726>x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	uint16_t x730 = 78U;
	volatile uint32_t x731 = UINT32_MAX;
	volatile int32_t x732 = INT32_MIN;

    t182 = ((x729^(x730>x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -82693778218203LL;
	int32_t x734 = INT32_MIN;
	int8_t x735 = INT8_MAX;
	uint16_t x736 = 1U;
	volatile int32_t t183 = -1;

    t183 = ((x733^(x734>x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MIN;
	uint64_t x738 = UINT64_MAX;
	uint64_t x740 = 817521639603LLU;
	volatile int32_t t184 = -30;

    t184 = ((x737^(x738>x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 42U;
	uint16_t x743 = 1U;
	static uint16_t x744 = 32257U;
	volatile int32_t t185 = 195;

    t185 = ((x741^(x742>x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	int64_t x746 = INT64_MIN;
	int32_t x747 = -203485792;
	volatile uint8_t x748 = 0U;
	volatile int32_t t186 = 530289518;

    t186 = ((x745^(x746>x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	int16_t x750 = INT16_MIN;
	uint32_t x751 = 0U;
	static int16_t x752 = INT16_MIN;

    t187 = ((x749^(x750>x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int16_t x755 = 14391;
	int8_t x756 = INT8_MAX;
	volatile int32_t t188 = 247311;

    t188 = ((x753^(x754>x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	uint16_t x758 = 45U;
	uint32_t x759 = 20U;
	uint64_t x760 = UINT64_MAX;
	volatile int32_t t189 = 0;

    t189 = ((x757^(x758>x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = INT32_MAX;
	uint32_t x763 = UINT32_MAX;
	int16_t x764 = -1;
	static volatile int32_t t190 = 164;

    t190 = ((x761^(x762>x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 6U;
	int16_t x766 = INT16_MIN;
	int16_t x767 = INT16_MIN;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = -765460;

    t191 = ((x765^(x766>x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x770 = INT8_MIN;
	int32_t x772 = -1;
	int32_t t192 = 249344627;

    t192 = ((x769^(x770>x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MAX;
	int64_t x774 = INT64_MAX;
	static int16_t x776 = 4379;
	volatile int32_t t193 = 740375815;

    t193 = ((x773^(x774>x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = UINT8_MAX;
	uint64_t x778 = UINT64_MAX;
	int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	int32_t t194 = 138169;

    t194 = ((x777^(x778>x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x782 = UINT16_MAX;
	static int32_t x783 = -1045240605;
	int8_t x784 = INT8_MAX;
	int32_t t195 = 120634;

    t195 = ((x781^(x782>x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	volatile int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MIN;
	int8_t x788 = 1;
	volatile int32_t t196 = -8418189;

    t196 = ((x785^(x786>x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = -33002875623768465LL;
	uint64_t x791 = UINT64_MAX;
	int64_t x792 = INT64_MIN;

    t197 = ((x789^(x790>x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = 0;
	static uint64_t x794 = 154251LLU;
	int16_t x795 = INT16_MIN;

    t198 = ((x793^(x794>x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = -3269;
	int32_t x798 = INT32_MIN;
	static uint16_t x799 = UINT16_MAX;
	volatile uint8_t x800 = 1U;
	static volatile int32_t t199 = -113986;

    t199 = ((x797^(x798>x799))==x800);

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

