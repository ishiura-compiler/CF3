
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

int16_t x2 = INT16_MIN;
int32_t x6 = -500;
int8_t x12 = -1;
static int32_t t2 = -7;
uint64_t x15 = 6333956839059540572LLU;
static int8_t x16 = -1;
int8_t x23 = INT8_MIN;
int8_t x25 = 1;
uint8_t x30 = 23U;
uint64_t x39 = 82612295LLU;
int8_t x46 = INT8_MAX;
int64_t x47 = -106173400066877LL;
uint64_t x53 = UINT64_MAX;
static int32_t t13 = 44589;
volatile uint64_t x70 = UINT64_MAX;
int8_t x79 = -1;
volatile int32_t x80 = -1;
int32_t t19 = -106;
int16_t x81 = INT16_MIN;
static uint64_t x94 = 17935089433364890LLU;
volatile int32_t x96 = 1250784;
int32_t x104 = INT32_MAX;
int8_t x107 = 2;
volatile int32_t t25 = 27;
static volatile int8_t x111 = INT8_MIN;
volatile int8_t x112 = INT8_MAX;
volatile int32_t t27 = 28920;
int32_t x123 = INT32_MAX;
static int8_t x126 = INT8_MAX;
uint64_t x130 = 65050278256898370LLU;
uint16_t x132 = 0U;
uint16_t x137 = UINT16_MAX;
int16_t x138 = INT16_MIN;
static uint32_t x139 = 127302433U;
int16_t x144 = 755;
static int32_t t32 = 231;
static volatile int32_t t33 = 21184;
volatile uint16_t x149 = 11U;
uint64_t x152 = UINT64_MAX;
int32_t x153 = INT32_MAX;
int16_t x157 = 43;
int64_t x159 = 633996168405294765LL;
volatile uint32_t x168 = 42242U;
int32_t t38 = 30;
volatile int32_t t39 = -322;
int16_t x177 = INT16_MIN;
static volatile int64_t x181 = 8012LL;
volatile int8_t x185 = -47;
int16_t x196 = 0;
int16_t x201 = INT16_MIN;
int32_t x202 = INT32_MAX;
int16_t x204 = INT16_MAX;
int16_t x210 = -326;
uint16_t x230 = 3851U;
int16_t x232 = INT16_MIN;
volatile int32_t t51 = 22089;
int32_t t52 = -58;
uint8_t x244 = 4U;
int8_t x247 = INT8_MIN;
int8_t x259 = INT8_MIN;
int32_t x269 = INT32_MIN;
static int16_t x272 = INT16_MAX;
uint16_t x273 = UINT16_MAX;
volatile int32_t x283 = -12055;
static int32_t t63 = -57;
uint16_t x290 = 47U;
int64_t x295 = -1LL;
uint16_t x299 = UINT16_MAX;
uint32_t x303 = 64899590U;
uint64_t x304 = 1017961LLU;
int32_t t68 = 27996731;
static int64_t x313 = -22115580846594783LL;
int16_t x314 = INT16_MIN;
static uint16_t x322 = UINT16_MAX;
uint8_t x323 = UINT8_MAX;
volatile uint16_t x335 = UINT16_MAX;
volatile int32_t t73 = 1155;
static int64_t x341 = INT64_MIN;
int32_t t75 = 0;
int32_t t76 = -8547336;
static uint8_t x357 = 29U;
volatile int16_t x376 = INT16_MAX;
volatile int32_t t82 = -513;
int8_t x381 = INT8_MIN;
uint64_t x391 = 84445784LLU;
int8_t x400 = -1;
int32_t t86 = -383072;
static uint64_t x404 = UINT64_MAX;
int8_t x407 = 0;
int64_t x409 = 4764798629LL;
int8_t x412 = INT8_MAX;
static volatile int32_t t89 = -228;
uint64_t x415 = UINT64_MAX;
int8_t x416 = 1;
volatile int16_t x417 = INT16_MAX;
static uint64_t x423 = 770963LLU;
static int32_t t94 = 1100;
int32_t x450 = -485557014;
uint64_t x452 = 2794LLU;
int8_t x454 = INT8_MAX;
uint8_t x458 = UINT8_MAX;
int32_t t100 = 14431;
static uint32_t x461 = UINT32_MAX;
int8_t x466 = INT8_MIN;
static uint64_t x467 = 904593LLU;
uint16_t x469 = UINT16_MAX;
int32_t x470 = INT32_MIN;
uint32_t x472 = UINT32_MAX;
int32_t t103 = 25022473;
int8_t x484 = -1;
int32_t x488 = INT32_MAX;
int8_t x489 = 4;
uint64_t x490 = 123009059593LLU;
static uint8_t x491 = 21U;
uint32_t x493 = UINT32_MAX;
int32_t t109 = -430;
static int16_t x500 = -1;
uint16_t x505 = UINT16_MAX;
volatile int32_t t112 = -1;
int8_t x515 = INT8_MIN;
volatile int32_t t115 = 3;
int32_t x530 = INT32_MIN;
uint8_t x531 = 10U;
static int8_t x540 = -1;
uint64_t x560 = 358995473636229270LLU;
int32_t t124 = 730000;
static int8_t x568 = INT8_MIN;
volatile int32_t x584 = -1;
volatile int64_t x587 = -2077866910443472483LL;
int32_t x589 = 25;
volatile int32_t t130 = 2405;
uint16_t x594 = 226U;
int64_t x597 = -13052579291129536LL;
int32_t x606 = INT32_MAX;
uint8_t x607 = 1U;
uint32_t x608 = 1U;
int32_t t133 = 2939;
static uint32_t x615 = 0U;
int32_t x618 = INT32_MIN;
static uint8_t x620 = 1U;
volatile int8_t x627 = -2;
uint64_t x628 = UINT64_MAX;
int8_t x630 = -8;
int16_t x632 = INT16_MIN;
static uint16_t x636 = UINT16_MAX;
int32_t t143 = -1013414097;
volatile int32_t t144 = 74342439;
int64_t x663 = 939LL;
int32_t t146 = -5155;
int8_t x671 = INT8_MIN;
static volatile int64_t x675 = -5643091009205LL;
int32_t x677 = 1632;
uint64_t x687 = 3477550757572LLU;
int32_t x689 = INT32_MAX;
volatile uint32_t x693 = 60U;
int16_t x697 = -8;
int64_t x703 = -1LL;
volatile int32_t t154 = 10;
uint64_t x706 = 32322993823LLU;
uint8_t x714 = 94U;
int64_t x719 = -1LL;
static int16_t x720 = -1;
static int32_t x736 = 13;
int32_t t161 = 50455;
static int64_t x738 = INT64_MIN;
volatile int32_t t163 = 86495;
uint16_t x745 = 10U;
int32_t x746 = INT32_MIN;
volatile int8_t x753 = 3;
int32_t t165 = 16;
volatile int32_t t166 = -3246146;
uint64_t x763 = 965767730LLU;
int64_t x765 = INT64_MAX;
int16_t x768 = 424;
int32_t x769 = INT32_MIN;
static int32_t x774 = -1;
static uint16_t x780 = 76U;
static int64_t x782 = INT64_MAX;
volatile uint32_t x784 = UINT32_MAX;
static uint64_t x787 = UINT64_MAX;
volatile int32_t t173 = -362;
volatile int8_t x793 = INT8_MIN;
static int16_t x795 = 145;
int8_t x796 = 6;
int32_t x806 = INT32_MIN;
volatile int8_t x811 = -2;
uint8_t x814 = UINT8_MAX;
uint8_t x820 = UINT8_MAX;
int32_t x822 = INT32_MAX;
int8_t x824 = INT8_MAX;
uint64_t x827 = 9343LLU;
volatile uint32_t x828 = 8787U;
uint16_t x849 = 3U;
int64_t x856 = -1LL;
uint64_t x859 = UINT64_MAX;
int16_t x860 = 1;
volatile uint32_t x868 = UINT32_MAX;
int16_t x874 = INT16_MIN;
volatile uint16_t x875 = 17U;
uint8_t x877 = 86U;
int32_t x879 = -3641825;
int8_t x889 = INT8_MAX;
static uint16_t x891 = UINT16_MAX;
int16_t x893 = -1;
int64_t x894 = INT64_MIN;
static volatile int64_t x895 = -63093819958430567LL;
int32_t t197 = 20735155;
volatile int16_t x900 = INT16_MIN;
uint32_t x902 = UINT32_MAX;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = -1LL;
	volatile int32_t t0 = -788;

    t0 = (((x1!=x2)-x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 9066LLU;
	int32_t x7 = 3129;
	static uint8_t x8 = UINT8_MAX;
	static volatile int32_t t1 = -13;

    t1 = (((x5!=x6)-x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MAX;
	static int8_t x11 = INT8_MIN;

    t2 = (((x9!=x10)-x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = 6295LL;
	int32_t x14 = INT32_MIN;
	int32_t t3 = 0;

    t3 = (((x13!=x14)-x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	int32_t x18 = -1;
	int64_t x19 = 147652LL;
	uint64_t x20 = 991350248595LLU;
	static volatile int32_t t4 = 44;

    t4 = (((x17!=x18)-x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 3112592;
	volatile int32_t x22 = -1;
	int64_t x24 = INT64_MIN;
	int32_t t5 = -13412120;

    t5 = (((x21!=x22)-x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x26 = 7U;
	int8_t x27 = INT8_MIN;
	static int64_t x28 = 13402LL;
	int32_t t6 = 21384964;

    t6 = (((x25!=x26)-x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MAX;
	volatile int8_t x31 = -1;
	volatile int16_t x32 = -1;
	int32_t t7 = -52486515;

    t7 = (((x29!=x30)-x31)>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MAX;
	int32_t x35 = -2236530;
	uint64_t x36 = 45701279035231LLU;
	volatile int32_t t8 = 0;

    t8 = (((x33!=x34)-x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MIN;
	volatile uint8_t x38 = 24U;
	volatile int16_t x40 = -1;
	int32_t t9 = 0;

    t9 = (((x37!=x38)-x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 1701LLU;
	int8_t x43 = 3;
	int32_t x44 = -24;
	volatile int32_t t10 = 501731;

    t10 = (((x41!=x42)-x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = UINT32_MAX;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = -23;

    t11 = (((x45!=x46)-x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = 9;
	uint8_t x50 = 14U;
	static uint16_t x51 = 7220U;
	uint8_t x52 = UINT8_MAX;
	static int32_t t12 = 123114;

    t12 = (((x49!=x50)-x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x54 = UINT8_MAX;
	int32_t x55 = INT32_MAX;
	int16_t x56 = -564;

    t13 = (((x53!=x54)-x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 105U;
	uint32_t x58 = 1U;
	int64_t x59 = -41LL;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -3;

    t14 = (((x57!=x58)-x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	uint64_t x62 = 16005566765428LLU;
	uint32_t x63 = 278U;
	volatile uint64_t x64 = UINT64_MAX;
	int32_t t15 = 2368470;

    t15 = (((x61!=x62)-x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	int16_t x66 = INT16_MIN;
	volatile uint32_t x67 = 1397U;
	static volatile uint8_t x68 = 122U;
	int32_t t16 = 14;

    t16 = (((x65!=x66)-x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	int16_t x71 = 2726;
	int8_t x72 = -1;
	int32_t t17 = -12287371;

    t17 = (((x69!=x70)-x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -3;
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MAX;
	static uint16_t x76 = UINT16_MAX;
	int32_t t18 = -1596677;

    t18 = (((x73!=x74)-x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	int8_t x78 = -4;

    t19 = (((x77!=x78)-x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = 4;
	int64_t x83 = -5982400LL;
	static int64_t x84 = 63415LL;
	volatile int32_t t20 = 20802704;

    t20 = (((x81!=x82)-x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -29;
	uint16_t x86 = UINT16_MAX;
	static int64_t x87 = -12LL;
	static volatile uint16_t x88 = 2U;
	volatile int32_t t21 = -1;

    t21 = (((x85!=x86)-x87)>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MAX;
	int32_t x90 = -1;
	volatile int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MIN;
	int32_t t22 = -10103094;

    t22 = (((x89!=x90)-x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -97365;
	volatile int8_t x95 = -1;
	int32_t t23 = 113;

    t23 = (((x93!=x94)-x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = 1LL;
	int32_t x102 = 9;
	int8_t x103 = INT8_MIN;
	volatile int32_t t24 = -52518855;

    t24 = (((x101!=x102)-x103)>x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x105 = 559772U;
	volatile uint8_t x106 = 0U;
	int64_t x108 = INT64_MIN;

    t25 = (((x105!=x106)-x107)>x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MIN;
	static int16_t x110 = INT16_MAX;
	int32_t t26 = 147366;

    t26 = (((x109!=x110)-x111)>x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x117 = 47U;
	uint64_t x118 = 3020621459043LLU;
	int32_t x119 = -1;
	uint16_t x120 = 10406U;

    t27 = (((x117!=x118)-x119)>x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x121 = 137540232U;
	int16_t x122 = -103;
	int32_t x124 = INT32_MIN;
	int32_t t28 = 1814155;

    t28 = (((x121!=x122)-x123)>x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x125 = INT8_MAX;
	static volatile int16_t x127 = 7307;
	static int64_t x128 = INT64_MIN;
	volatile int32_t t29 = -8274453;

    t29 = (((x125!=x126)-x127)>x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = UINT8_MAX;
	int16_t x131 = -1;
	static int32_t t30 = -123789;

    t30 = (((x129!=x130)-x131)>x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x140 = INT16_MAX;
	volatile int32_t t31 = 1;

    t31 = (((x137!=x138)-x139)>x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -1LL;
	volatile int16_t x142 = 63;
	volatile uint64_t x143 = 2810281LLU;

    t32 = (((x141!=x142)-x143)>x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x145 = INT64_MIN;
	volatile int32_t x146 = INT32_MIN;
	volatile uint32_t x147 = 97U;
	static int8_t x148 = INT8_MIN;

    t33 = (((x145!=x146)-x147)>x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x150 = UINT16_MAX;
	static int64_t x151 = 31828205LL;
	static int32_t t34 = 1;

    t34 = (((x149!=x150)-x151)>x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x154 = 215207507148362274LL;
	static uint8_t x155 = UINT8_MAX;
	int16_t x156 = 1;
	int32_t t35 = -662064415;

    t35 = (((x153!=x154)-x155)>x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x158 = INT64_MIN;
	volatile int64_t x160 = INT64_MAX;
	static int32_t t36 = -66059;

    t36 = (((x157!=x158)-x159)>x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x161 = 1297U;
	volatile uint16_t x162 = UINT16_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile int64_t x164 = INT64_MIN;
	int32_t t37 = 526056;

    t37 = (((x161!=x162)-x163)>x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x165 = -14635;
	static int16_t x166 = INT16_MIN;
	volatile int64_t x167 = -5313796753208128LL;

    t38 = (((x165!=x166)-x167)>x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x169 = -3798;
	static int8_t x170 = -32;
	static uint8_t x171 = UINT8_MAX;
	int32_t x172 = INT32_MIN;

    t39 = (((x169!=x170)-x171)>x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x173 = INT8_MIN;
	static int64_t x174 = INT64_MAX;
	int16_t x175 = INT16_MIN;
	uint32_t x176 = 1327U;
	int32_t t40 = 229901444;

    t40 = (((x173!=x174)-x175)>x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x178 = INT64_MAX;
	uint8_t x179 = 0U;
	static int32_t x180 = -1;
	volatile int32_t t41 = -66285;

    t41 = (((x177!=x178)-x179)>x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x182 = 35842867992LLU;
	int64_t x183 = -2996500081617088991LL;
	uint32_t x184 = 981577U;
	int32_t t42 = -1;

    t42 = (((x181!=x182)-x183)>x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x186 = 3U;
	static uint16_t x187 = 0U;
	static uint16_t x188 = UINT16_MAX;
	int32_t t43 = -54538;

    t43 = (((x185!=x186)-x187)>x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x193 = UINT64_MAX;
	int8_t x194 = -1;
	volatile uint64_t x195 = 4653382463LLU;
	volatile int32_t t44 = 490581;

    t44 = (((x193!=x194)-x195)>x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x197 = 925U;
	int32_t x198 = INT32_MIN;
	int8_t x199 = -1;
	static uint16_t x200 = UINT16_MAX;
	int32_t t45 = -2426;

    t45 = (((x197!=x198)-x199)>x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x203 = 1222U;
	volatile int32_t t46 = 1754042;

    t46 = (((x201!=x202)-x203)>x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x205 = 2U;
	int8_t x206 = 5;
	int16_t x207 = INT16_MAX;
	uint32_t x208 = 143691U;
	volatile int32_t t47 = 160912871;

    t47 = (((x205!=x206)-x207)>x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x209 = INT64_MIN;
	volatile int64_t x211 = -1LL;
	int64_t x212 = 217671LL;
	static int32_t t48 = 722;

    t48 = (((x209!=x210)-x211)>x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x213 = 34555U;
	static int64_t x214 = INT64_MIN;
	static int16_t x215 = INT16_MAX;
	int32_t x216 = -1;
	int32_t t49 = -63;

    t49 = (((x213!=x214)-x215)>x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x225 = 31U;
	int64_t x226 = 3729517LL;
	volatile uint8_t x227 = 8U;
	int32_t x228 = INT32_MIN;
	int32_t t50 = 570;

    t50 = (((x225!=x226)-x227)>x228);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x229 = -1;
	int16_t x231 = INT16_MAX;

    t51 = (((x229!=x230)-x231)>x232);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x233 = -1;
	int8_t x234 = INT8_MIN;
	int64_t x235 = -87582653574342LL;
	int16_t x236 = INT16_MIN;

    t52 = (((x233!=x234)-x235)>x236);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x241 = -1;
	int16_t x242 = 190;
	int16_t x243 = 6;
	static volatile int32_t t53 = 7;

    t53 = (((x241!=x242)-x243)>x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x245 = 371786;
	volatile uint8_t x246 = 25U;
	static uint64_t x248 = 98911394321943625LLU;
	int32_t t54 = 11332153;

    t54 = (((x245!=x246)-x247)>x248);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = 382336LLU;
	uint64_t x250 = UINT64_MAX;
	volatile int16_t x251 = 10;
	int16_t x252 = INT16_MIN;
	int32_t t55 = 11841;

    t55 = (((x249!=x250)-x251)>x252);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = INT32_MAX;
	static int64_t x254 = INT64_MIN;
	volatile int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t56 = 2;

    t56 = (((x253!=x254)-x255)>x256);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x257 = INT64_MAX;
	int64_t x258 = 11724468957486115LL;
	static volatile int16_t x260 = -44;
	volatile int32_t t57 = 792910504;

    t57 = (((x257!=x258)-x259)>x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = -1970910;
	int64_t x262 = 14493835290233LL;
	uint8_t x263 = 1U;
	int32_t x264 = INT32_MIN;
	int32_t t58 = -52429888;

    t58 = (((x261!=x262)-x263)>x264);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = 1031719368085252292LLU;
	static int32_t x266 = INT32_MIN;
	volatile int64_t x267 = INT64_MAX;
	static uint32_t x268 = 18U;
	volatile int32_t t59 = -209;

    t59 = (((x265!=x266)-x267)>x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x270 = INT16_MIN;
	uint32_t x271 = 4U;
	int32_t t60 = 93053;

    t60 = (((x269!=x270)-x271)>x272);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x274 = UINT32_MAX;
	static int8_t x275 = INT8_MIN;
	uint16_t x276 = 3U;
	static int32_t t61 = 13914435;

    t61 = (((x273!=x274)-x275)>x276);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x277 = 31U;
	int8_t x278 = -1;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t62 = 30976194;

    t62 = (((x277!=x278)-x279)>x280);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x281 = 229853061U;
	volatile int32_t x282 = INT32_MAX;
	int8_t x284 = 6;

    t63 = (((x281!=x282)-x283)>x284);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x289 = INT32_MIN;
	static int16_t x291 = INT16_MAX;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t64 = 6157007;

    t64 = (((x289!=x290)-x291)>x292);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x293 = -121;
	static int16_t x294 = -12583;
	int32_t x296 = INT32_MAX;
	volatile int32_t t65 = -780061;

    t65 = (((x293!=x294)-x295)>x296);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x297 = -20;
	static int64_t x298 = INT64_MIN;
	uint32_t x300 = 1U;
	int32_t t66 = -1721;

    t66 = (((x297!=x298)-x299)>x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = INT8_MAX;
	int64_t x302 = -104LL;
	int32_t t67 = -4000;

    t67 = (((x301!=x302)-x303)>x304);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x305 = -1;
	volatile uint16_t x306 = 667U;
	static int8_t x307 = -1;
	volatile uint64_t x308 = 90362LLU;

    t68 = (((x305!=x306)-x307)>x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x315 = -8;
	uint64_t x316 = UINT64_MAX;
	static volatile int32_t t69 = 165;

    t69 = (((x313!=x314)-x315)>x316);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x317 = INT64_MIN;
	int8_t x318 = -1;
	int32_t x319 = 22591;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t70 = 5240;

    t70 = (((x317!=x318)-x319)>x320);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x321 = -15464938323501LL;
	int64_t x324 = -7988792LL;
	volatile int32_t t71 = -7;

    t71 = (((x321!=x322)-x323)>x324);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 3U;
	int64_t x331 = -1LL;
	int32_t x332 = INT32_MIN;
	volatile int32_t t72 = -13893206;

    t72 = (((x329!=x330)-x331)>x332);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x333 = INT64_MIN;
	int32_t x334 = -1;
	static int64_t x336 = -1LL;

    t73 = (((x333!=x334)-x335)>x336);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x337 = -4150141;
	uint64_t x338 = 191378599476282576LLU;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	static int32_t t74 = -47384483;

    t74 = (((x337!=x338)-x339)>x340);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x342 = 107U;
	volatile int16_t x343 = -1;
	uint64_t x344 = UINT64_MAX;

    t75 = (((x341!=x342)-x343)>x344);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x345 = -1LL;
	volatile int16_t x346 = -1;
	static int8_t x347 = 6;
	volatile int32_t x348 = INT32_MAX;

    t76 = (((x345!=x346)-x347)>x348);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x353 = UINT16_MAX;
	uint8_t x354 = 78U;
	int8_t x355 = -1;
	uint64_t x356 = 109522LLU;
	volatile int32_t t77 = 24922245;

    t77 = (((x353!=x354)-x355)>x356);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;
	static int16_t x360 = -1;
	static volatile int32_t t78 = -3530319;

    t78 = (((x357!=x358)-x359)>x360);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MAX;
	int8_t x363 = -1;
	int16_t x364 = -1;
	int32_t t79 = 14;

    t79 = (((x361!=x362)-x363)>x364);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x365 = 594U;
	uint64_t x366 = UINT64_MAX;
	static int64_t x367 = 66103928871552913LL;
	static uint8_t x368 = 25U;
	int32_t t80 = 45;

    t80 = (((x365!=x366)-x367)>x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x373 = -15102716501LL;
	int32_t x374 = -9958812;
	static volatile int32_t x375 = -3707355;
	int32_t t81 = -92013;

    t81 = (((x373!=x374)-x375)>x376);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x377 = 2323U;
	static uint8_t x378 = 0U;
	int8_t x379 = INT8_MIN;
	static volatile int32_t x380 = INT32_MIN;

    t82 = (((x377!=x378)-x379)>x380);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x382 = -131;
	int64_t x383 = -722845656247025112LL;
	int16_t x384 = INT16_MIN;
	volatile int32_t t83 = -885;

    t83 = (((x381!=x382)-x383)>x384);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x385 = 269001321893944LLU;
	uint64_t x386 = 190860817328862LLU;
	int32_t x387 = -16777167;
	static uint16_t x388 = 60U;
	volatile int32_t t84 = -1;

    t84 = (((x385!=x386)-x387)>x388);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x389 = 88483373850273LLU;
	volatile uint8_t x390 = 2U;
	int16_t x392 = 1511;
	int32_t t85 = -363309;

    t85 = (((x389!=x390)-x391)>x392);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = -1;
	int16_t x398 = 0;
	uint64_t x399 = 30LLU;

    t86 = (((x397!=x398)-x399)>x400);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x401 = 363791;
	int32_t x402 = INT32_MIN;
	volatile uint16_t x403 = 3U;
	int32_t t87 = 47;

    t87 = (((x401!=x402)-x403)>x404);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x405 = 6;
	static uint64_t x406 = 3092LLU;
	int64_t x408 = INT64_MIN;
	static volatile int32_t t88 = 361356;

    t88 = (((x405!=x406)-x407)>x408);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x410 = -1LL;
	uint16_t x411 = UINT16_MAX;

    t89 = (((x409!=x410)-x411)>x412);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x413 = -63;
	int16_t x414 = INT16_MAX;
	volatile int32_t t90 = -166;

    t90 = (((x413!=x414)-x415)>x416);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x418 = UINT32_MAX;
	int8_t x419 = 0;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t91 = -1;

    t91 = (((x417!=x418)-x419)>x420);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x421 = INT64_MIN;
	int32_t x422 = -282365900;
	static int16_t x424 = INT16_MIN;
	int32_t t92 = 252764924;

    t92 = (((x421!=x422)-x423)>x424);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x425 = 4U;
	volatile uint16_t x426 = UINT16_MAX;
	static uint64_t x427 = UINT64_MAX;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t93 = 2739;

    t93 = (((x425!=x426)-x427)>x428);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x429 = 119U;
	volatile int64_t x430 = INT64_MAX;
	volatile int32_t x431 = -1024732889;
	int64_t x432 = INT64_MIN;

    t94 = (((x429!=x430)-x431)>x432);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x433 = 1U;
	volatile uint64_t x434 = 123463LLU;
	volatile int32_t x435 = -2924264;
	volatile int16_t x436 = INT16_MIN;
	int32_t t95 = 972125962;

    t95 = (((x433!=x434)-x435)>x436);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x437 = INT64_MIN;
	int8_t x438 = INT8_MAX;
	int16_t x439 = INT16_MIN;
	uint16_t x440 = 15U;
	static volatile int32_t t96 = 40177;

    t96 = (((x437!=x438)-x439)>x440);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x445 = INT8_MIN;
	uint64_t x446 = UINT64_MAX;
	int32_t x447 = -1;
	int16_t x448 = INT16_MIN;
	volatile int32_t t97 = -664;

    t97 = (((x445!=x446)-x447)>x448);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x449 = INT16_MIN;
	int64_t x451 = INT64_MAX;
	volatile int32_t t98 = -1;

    t98 = (((x449!=x450)-x451)>x452);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x453 = INT16_MIN;
	static int16_t x455 = 8;
	int64_t x456 = INT64_MIN;
	volatile int32_t t99 = -1214;

    t99 = (((x453!=x454)-x455)>x456);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x457 = -6;
	uint64_t x459 = UINT64_MAX;
	uint16_t x460 = UINT16_MAX;

    t100 = (((x457!=x458)-x459)>x460);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x462 = UINT32_MAX;
	volatile int64_t x463 = 3121591964432589377LL;
	int32_t x464 = 0;
	volatile int32_t t101 = 3679435;

    t101 = (((x461!=x462)-x463)>x464);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x465 = INT8_MIN;
	static int32_t x468 = INT32_MIN;
	int32_t t102 = -2535;

    t102 = (((x465!=x466)-x467)>x468);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x471 = -1;

    t103 = (((x469!=x470)-x471)>x472);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x473 = -5842381333LL;
	static uint8_t x474 = UINT8_MAX;
	uint32_t x475 = 255266U;
	volatile uint64_t x476 = 99327525729LLU;
	volatile int32_t t104 = 192412;

    t104 = (((x473!=x474)-x475)>x476);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x478 = -222;
	volatile int64_t x479 = -33546599522241110LL;
	int32_t x480 = 18620523;
	volatile int32_t t105 = 5744786;

    t105 = (((x477!=x478)-x479)>x480);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x481 = UINT16_MAX;
	volatile uint32_t x482 = 4U;
	int32_t x483 = -1;
	volatile int32_t t106 = -1878;

    t106 = (((x481!=x482)-x483)>x484);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x485 = UINT32_MAX;
	static uint16_t x486 = UINT16_MAX;
	static int64_t x487 = 51583LL;
	int32_t t107 = 121900323;

    t107 = (((x485!=x486)-x487)>x488);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x492 = INT32_MIN;
	static int32_t t108 = 223431;

    t108 = (((x489!=x490)-x491)>x492);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x494 = -44;
	uint16_t x495 = 2U;
	int8_t x496 = -11;

    t109 = (((x493!=x494)-x495)>x496);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x497 = INT32_MIN;
	int32_t x498 = 11133;
	uint16_t x499 = 1U;
	static volatile int32_t t110 = 734600825;

    t110 = (((x497!=x498)-x499)>x500);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x501 = UINT64_MAX;
	static int64_t x502 = INT64_MAX;
	int32_t x503 = 5108;
	uint32_t x504 = 775869692U;
	static volatile int32_t t111 = -130494;

    t111 = (((x501!=x502)-x503)>x504);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x506 = -1884786;
	static volatile uint16_t x507 = 227U;
	static int16_t x508 = INT16_MIN;

    t112 = (((x505!=x506)-x507)>x508);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x513 = 1;
	static uint16_t x514 = UINT16_MAX;
	uint8_t x516 = 25U;
	int32_t t113 = -131373;

    t113 = (((x513!=x514)-x515)>x516);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x517 = -1;
	uint8_t x518 = 3U;
	int64_t x519 = INT64_MAX;
	static int16_t x520 = -1;
	volatile int32_t t114 = -16292824;

    t114 = (((x517!=x518)-x519)>x520);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x525 = 6U;
	int16_t x526 = INT16_MIN;
	uint16_t x527 = 17070U;
	int16_t x528 = -1;

    t115 = (((x525!=x526)-x527)>x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x529 = INT32_MIN;
	uint8_t x532 = 56U;
	volatile int32_t t116 = -228217;

    t116 = (((x529!=x530)-x531)>x532);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x533 = INT16_MIN;
	static volatile int64_t x534 = INT64_MAX;
	uint64_t x535 = 1596358LLU;
	static int16_t x536 = INT16_MIN;
	volatile int32_t t117 = -5040215;

    t117 = (((x533!=x534)-x535)>x536);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x538 = INT16_MIN;
	int16_t x539 = -59;
	int32_t t118 = -10809;

    t118 = (((x537!=x538)-x539)>x540);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = -1;
	int8_t x543 = 14;
	uint8_t x544 = 70U;
	int32_t t119 = 10995615;

    t119 = (((x541!=x542)-x543)>x544);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x545 = INT8_MAX;
	uint32_t x546 = UINT32_MAX;
	int8_t x547 = 1;
	int32_t x548 = INT32_MAX;
	static int32_t t120 = -18;

    t120 = (((x545!=x546)-x547)>x548);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x549 = INT64_MIN;
	uint32_t x550 = UINT32_MAX;
	volatile int16_t x551 = 15873;
	int32_t x552 = INT32_MIN;
	volatile int32_t t121 = 2;

    t121 = (((x549!=x550)-x551)>x552);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = -1;
	uint32_t x554 = 2U;
	uint8_t x555 = 24U;
	uint8_t x556 = UINT8_MAX;
	int32_t t122 = 128;

    t122 = (((x553!=x554)-x555)>x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x557 = 14;
	int16_t x558 = INT16_MIN;
	int16_t x559 = -1;
	static volatile int32_t t123 = -1;

    t123 = (((x557!=x558)-x559)>x560);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x561 = INT8_MAX;
	static volatile int16_t x562 = INT16_MAX;
	int32_t x563 = 13;
	int16_t x564 = INT16_MAX;

    t124 = (((x561!=x562)-x563)>x564);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x565 = INT16_MAX;
	uint16_t x566 = UINT16_MAX;
	volatile uint16_t x567 = 2274U;
	volatile int32_t t125 = -522453;

    t125 = (((x565!=x566)-x567)>x568);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x569 = UINT64_MAX;
	uint64_t x570 = 10106309081LLU;
	int8_t x571 = INT8_MIN;
	uint8_t x572 = 31U;
	int32_t t126 = -3;

    t126 = (((x569!=x570)-x571)>x572);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x577 = UINT16_MAX;
	int8_t x578 = 5;
	volatile uint8_t x579 = 62U;
	int8_t x580 = -27;
	int32_t t127 = 457;

    t127 = (((x577!=x578)-x579)>x580);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x581 = UINT32_MAX;
	volatile uint32_t x582 = UINT32_MAX;
	static volatile uint8_t x583 = 2U;
	volatile int32_t t128 = 1115639;

    t128 = (((x581!=x582)-x583)>x584);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x585 = INT64_MAX;
	int16_t x586 = INT16_MIN;
	int8_t x588 = INT8_MIN;
	static int32_t t129 = -35;

    t129 = (((x585!=x586)-x587)>x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x590 = INT64_MIN;
	int16_t x591 = 0;
	int16_t x592 = INT16_MIN;

    t130 = (((x589!=x590)-x591)>x592);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x593 = 74;
	volatile uint16_t x595 = UINT16_MAX;
	int16_t x596 = 3;
	volatile int32_t t131 = 16416;

    t131 = (((x593!=x594)-x595)>x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x598 = INT8_MIN;
	uint8_t x599 = 3U;
	int32_t x600 = -34839964;
	int32_t t132 = -180;

    t132 = (((x597!=x598)-x599)>x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x605 = INT16_MIN;

    t133 = (((x605!=x606)-x607)>x608);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x609 = INT32_MAX;
	int8_t x610 = 2;
	int32_t x611 = INT32_MAX;
	volatile int8_t x612 = 18;
	int32_t t134 = -232929;

    t134 = (((x609!=x610)-x611)>x612);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x613 = 28385519235LL;
	volatile uint8_t x614 = 14U;
	int8_t x616 = 14;
	static volatile int32_t t135 = -1176134;

    t135 = (((x613!=x614)-x615)>x616);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x617 = -1;
	int8_t x619 = 1;
	volatile int32_t t136 = 13;

    t136 = (((x617!=x618)-x619)>x620);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x625 = UINT64_MAX;
	uint64_t x626 = 31571636591LLU;
	volatile int32_t t137 = 30755;

    t137 = (((x625!=x626)-x627)>x628);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x629 = 0;
	uint8_t x631 = 64U;
	volatile int32_t t138 = 0;

    t138 = (((x629!=x630)-x631)>x632);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x633 = -1;
	static int16_t x634 = -1;
	volatile int8_t x635 = -1;
	static int32_t t139 = -18;

    t139 = (((x633!=x634)-x635)>x636);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x637 = INT8_MIN;
	volatile int16_t x638 = 1161;
	static int32_t x639 = -1;
	int64_t x640 = 506106LL;
	volatile int32_t t140 = -89221;

    t140 = (((x637!=x638)-x639)>x640);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x641 = 7U;
	uint32_t x642 = 272U;
	volatile int32_t x643 = INT32_MAX;
	uint32_t x644 = 2003U;
	volatile int32_t t141 = 2368968;

    t141 = (((x641!=x642)-x643)>x644);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x645 = 995074713U;
	int16_t x646 = INT16_MIN;
	volatile uint8_t x647 = 21U;
	uint8_t x648 = 6U;
	volatile int32_t t142 = -710987054;

    t142 = (((x645!=x646)-x647)>x648);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x653 = -1157;
	int8_t x654 = -6;
	uint64_t x655 = 1542LLU;
	uint64_t x656 = UINT64_MAX;

    t143 = (((x653!=x654)-x655)>x656);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = -1;
	static uint16_t x659 = 56U;
	uint8_t x660 = 3U;

    t144 = (((x657!=x658)-x659)>x660);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x661 = INT8_MAX;
	int64_t x662 = INT64_MIN;
	static int16_t x664 = INT16_MIN;
	int32_t t145 = 7434;

    t145 = (((x661!=x662)-x663)>x664);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x665 = INT16_MAX;
	volatile uint32_t x666 = UINT32_MAX;
	uint16_t x667 = 2U;
	uint64_t x668 = 83521LLU;

    t146 = (((x665!=x666)-x667)>x668);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x669 = -49191405826997LL;
	int16_t x670 = 1;
	int64_t x672 = 401242633128LL;
	static int32_t t147 = 24;

    t147 = (((x669!=x670)-x671)>x672);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x673 = -19259;
	int16_t x674 = 1;
	static int16_t x676 = -1;
	int32_t t148 = -401077;

    t148 = (((x673!=x674)-x675)>x676);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x678 = 1973;
	int64_t x679 = -1LL;
	volatile uint32_t x680 = 16265457U;
	volatile int32_t t149 = 276;

    t149 = (((x677!=x678)-x679)>x680);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x685 = -55LL;
	volatile int64_t x686 = -45291LL;
	int64_t x688 = INT64_MIN;
	volatile int32_t t150 = 53857705;

    t150 = (((x685!=x686)-x687)>x688);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x690 = INT32_MAX;
	int32_t x691 = -1;
	uint64_t x692 = 1755057LLU;
	int32_t t151 = -22465033;

    t151 = (((x689!=x690)-x691)>x692);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x694 = 4657U;
	int64_t x695 = -32731781LL;
	int16_t x696 = INT16_MIN;
	volatile int32_t t152 = 81;

    t152 = (((x693!=x694)-x695)>x696);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x698 = 2169LL;
	volatile uint8_t x699 = 0U;
	int32_t x700 = 197;
	int32_t t153 = -1325;

    t153 = (((x697!=x698)-x699)>x700);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x701 = -1;
	volatile uint16_t x702 = UINT16_MAX;
	int16_t x704 = -299;

    t154 = (((x701!=x702)-x703)>x704);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x705 = -1;
	volatile uint8_t x707 = 14U;
	volatile uint8_t x708 = 43U;
	int32_t t155 = 55029;

    t155 = (((x705!=x706)-x707)>x708);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x709 = INT64_MIN;
	int8_t x710 = -1;
	uint64_t x711 = 636LLU;
	uint8_t x712 = 15U;
	volatile int32_t t156 = -3;

    t156 = (((x709!=x710)-x711)>x712);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x713 = -1LL;
	uint32_t x715 = UINT32_MAX;
	int16_t x716 = INT16_MIN;
	volatile int32_t t157 = -2166538;

    t157 = (((x713!=x714)-x715)>x716);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x717 = UINT16_MAX;
	int8_t x718 = INT8_MIN;
	int32_t t158 = 1941;

    t158 = (((x717!=x718)-x719)>x720);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x725 = INT32_MIN;
	static uint32_t x726 = 400748023U;
	int64_t x727 = -1LL;
	volatile int32_t x728 = INT32_MIN;
	int32_t t159 = -3;

    t159 = (((x725!=x726)-x727)>x728);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x729 = 9LL;
	static volatile uint32_t x730 = UINT32_MAX;
	uint64_t x731 = 13292731LLU;
	int16_t x732 = INT16_MIN;
	int32_t t160 = -9971049;

    t160 = (((x729!=x730)-x731)>x732);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x733 = UINT32_MAX;
	uint16_t x734 = 2482U;
	int64_t x735 = -1LL;

    t161 = (((x733!=x734)-x735)>x736);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x737 = 206421109;
	static volatile uint32_t x739 = 56U;
	static uint8_t x740 = 0U;
	int32_t t162 = 9154558;

    t162 = (((x737!=x738)-x739)>x740);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x741 = -1;
	int8_t x742 = 18;
	uint32_t x743 = UINT32_MAX;
	int64_t x744 = INT64_MIN;

    t163 = (((x741!=x742)-x743)>x744);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x747 = 14250931260625LLU;
	uint8_t x748 = 106U;
	int32_t t164 = 296;

    t164 = (((x745!=x746)-x747)>x748);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x754 = INT64_MAX;
	int16_t x755 = -1;
	static volatile int32_t x756 = -3927939;

    t165 = (((x753!=x754)-x755)>x756);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x757 = -838501670;
	uint8_t x758 = UINT8_MAX;
	volatile int64_t x759 = 5000946926951LL;
	volatile uint32_t x760 = UINT32_MAX;

    t166 = (((x757!=x758)-x759)>x760);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x761 = INT64_MAX;
	int16_t x762 = INT16_MIN;
	static int64_t x764 = 8210728311263LL;
	volatile int32_t t167 = -1007;

    t167 = (((x761!=x762)-x763)>x764);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x766 = INT64_MIN;
	volatile uint8_t x767 = UINT8_MAX;
	volatile int32_t t168 = -34799033;

    t168 = (((x765!=x766)-x767)>x768);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x770 = 21;
	int8_t x771 = -47;
	int8_t x772 = INT8_MIN;
	int32_t t169 = -2;

    t169 = (((x769!=x770)-x771)>x772);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x773 = INT32_MAX;
	static uint64_t x775 = 2873895LLU;
	uint16_t x776 = 1U;
	volatile int32_t t170 = 29;

    t170 = (((x773!=x774)-x775)>x776);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x777 = -1;
	uint8_t x778 = UINT8_MAX;
	int8_t x779 = -1;
	volatile int32_t t171 = 0;

    t171 = (((x777!=x778)-x779)>x780);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x781 = 197U;
	uint8_t x783 = UINT8_MAX;
	volatile int32_t t172 = 0;

    t172 = (((x781!=x782)-x783)>x784);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x785 = -1LL;
	uint32_t x786 = 1949U;
	static int16_t x788 = INT16_MIN;

    t173 = (((x785!=x786)-x787)>x788);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x789 = INT32_MIN;
	int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MAX;
	static int64_t x792 = -10661805279LL;
	volatile int32_t t174 = 97371294;

    t174 = (((x789!=x790)-x791)>x792);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x794 = 22;
	static int32_t t175 = -128815491;

    t175 = (((x793!=x794)-x795)>x796);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x801 = 103;
	volatile int8_t x802 = INT8_MIN;
	volatile int16_t x803 = INT16_MIN;
	int64_t x804 = -24258637820711675LL;
	int32_t t176 = -1;

    t176 = (((x801!=x802)-x803)>x804);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x805 = UINT16_MAX;
	uint16_t x807 = 187U;
	uint16_t x808 = 10228U;
	int32_t t177 = -494316922;

    t177 = (((x805!=x806)-x807)>x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x809 = 18660370LL;
	static int64_t x810 = 179LL;
	int32_t x812 = 3409;
	volatile int32_t t178 = -3033;

    t178 = (((x809!=x810)-x811)>x812);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x813 = 8U;
	static uint64_t x815 = 2LLU;
	static int32_t x816 = -1;
	static volatile int32_t t179 = -565274186;

    t179 = (((x813!=x814)-x815)>x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x817 = INT8_MIN;
	uint8_t x818 = 13U;
	volatile uint64_t x819 = 1538090101212025908LLU;
	int32_t t180 = -46240;

    t180 = (((x817!=x818)-x819)>x820);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x821 = -1LL;
	int16_t x823 = INT16_MIN;
	int32_t t181 = -196799160;

    t181 = (((x821!=x822)-x823)>x824);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x825 = 2U;
	uint32_t x826 = UINT32_MAX;
	volatile int32_t t182 = -789293;

    t182 = (((x825!=x826)-x827)>x828);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x833 = INT8_MAX;
	volatile uint32_t x834 = 3018U;
	int8_t x835 = 53;
	volatile int32_t x836 = INT32_MIN;
	int32_t t183 = -328;

    t183 = (((x833!=x834)-x835)>x836);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x837 = INT16_MIN;
	volatile int32_t x838 = INT32_MIN;
	static volatile int32_t x839 = INT32_MAX;
	uint64_t x840 = 66481291009513761LLU;
	int32_t t184 = 4734;

    t184 = (((x837!=x838)-x839)>x840);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x841 = 31U;
	int32_t x842 = 1593555;
	uint32_t x843 = 804U;
	int64_t x844 = INT64_MAX;
	volatile int32_t t185 = 4;

    t185 = (((x841!=x842)-x843)>x844);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x850 = INT32_MIN;
	int8_t x851 = INT8_MAX;
	volatile int32_t x852 = 612526;
	int32_t t186 = -7982;

    t186 = (((x849!=x850)-x851)>x852);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x853 = INT8_MIN;
	int32_t x854 = INT32_MIN;
	volatile int16_t x855 = 2;
	int32_t t187 = 128;

    t187 = (((x853!=x854)-x855)>x856);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x857 = 3U;
	static uint8_t x858 = 103U;
	int32_t t188 = 11;

    t188 = (((x857!=x858)-x859)>x860);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x861 = UINT8_MAX;
	int8_t x862 = INT8_MAX;
	int8_t x863 = -29;
	uint64_t x864 = 281060798365583714LLU;
	int32_t t189 = -1379;

    t189 = (((x861!=x862)-x863)>x864);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x865 = INT8_MAX;
	volatile int32_t x866 = 19493;
	int32_t x867 = 252;
	volatile int32_t t190 = -41142391;

    t190 = (((x865!=x866)-x867)>x868);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x869 = INT16_MIN;
	volatile uint32_t x870 = UINT32_MAX;
	int32_t x871 = INT32_MAX;
	int32_t x872 = INT32_MIN;
	int32_t t191 = -624522;

    t191 = (((x869!=x870)-x871)>x872);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x873 = 0;
	uint32_t x876 = UINT32_MAX;
	int32_t t192 = -64534;

    t192 = (((x873!=x874)-x875)>x876);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x878 = UINT16_MAX;
	uint32_t x880 = 116240U;
	int32_t t193 = -59978302;

    t193 = (((x877!=x878)-x879)>x880);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x881 = 3U;
	int8_t x882 = INT8_MIN;
	int64_t x883 = -1LL;
	static int64_t x884 = -3977372080223LL;
	static int32_t t194 = 13733508;

    t194 = (((x881!=x882)-x883)>x884);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x885 = INT8_MAX;
	uint8_t x886 = 1U;
	int32_t x887 = 245450872;
	int16_t x888 = -1;
	int32_t t195 = 6015805;

    t195 = (((x885!=x886)-x887)>x888);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x890 = INT16_MIN;
	int16_t x892 = INT16_MAX;
	volatile int32_t t196 = -88514;

    t196 = (((x889!=x890)-x891)>x892);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x896 = -25386432;

    t197 = (((x893!=x894)-x895)>x896);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x897 = 50U;
	int32_t x898 = -1;
	static volatile int8_t x899 = -14;
	volatile int32_t t198 = -85421584;

    t198 = (((x897!=x898)-x899)>x900);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x901 = 23624LL;
	int8_t x903 = INT8_MAX;
	volatile uint32_t x904 = UINT32_MAX;
	volatile int32_t t199 = 3;

    t199 = (((x901!=x902)-x903)>x904);

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

