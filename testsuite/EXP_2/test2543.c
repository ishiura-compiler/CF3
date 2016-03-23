
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

static volatile uint8_t x3 = UINT8_MAX;
int8_t x7 = -1;
int32_t x13 = INT32_MAX;
int32_t x14 = INT32_MIN;
volatile int32_t t3 = 4299;
volatile int32_t x23 = INT32_MIN;
uint32_t x28 = 47U;
volatile int8_t x30 = INT8_MIN;
volatile uint64_t x34 = 272994811353LLU;
int32_t t8 = -1327;
static int8_t x37 = -1;
int64_t x40 = INT64_MAX;
uint8_t x52 = 0U;
int64_t x55 = INT64_MAX;
uint16_t x58 = 0U;
static uint64_t x60 = UINT64_MAX;
int32_t x62 = INT32_MIN;
static int32_t t15 = -5;
int32_t x65 = INT32_MIN;
static int16_t x68 = -1;
static int32_t x71 = INT32_MAX;
static uint16_t x72 = 22427U;
int64_t x86 = INT64_MAX;
int16_t x91 = INT16_MIN;
volatile int8_t x93 = INT8_MIN;
static int8_t x96 = 4;
int8_t x100 = -29;
int8_t x102 = INT8_MIN;
static int16_t x113 = INT16_MIN;
int64_t x115 = INT64_MIN;
int32_t t28 = -64074034;
int8_t x118 = INT8_MIN;
static volatile int32_t t30 = 154;
int64_t x126 = 2344325402380673LL;
int8_t x127 = INT8_MAX;
static volatile int32_t t31 = 866341836;
int32_t x137 = INT32_MAX;
int64_t x140 = 1452720033LL;
static uint32_t x145 = 5U;
int8_t x147 = 3;
int32_t t37 = 12745;
static int32_t x157 = -3187930;
static int32_t t40 = 1;
static int32_t x167 = INT32_MIN;
volatile uint8_t x174 = 1U;
int32_t x176 = INT32_MIN;
int64_t x181 = -1LL;
int16_t x188 = -1;
volatile int32_t t46 = 1;
uint32_t x189 = 105476320U;
volatile uint32_t x194 = 5410U;
volatile int64_t x205 = INT64_MAX;
int32_t x208 = -15;
volatile int32_t t52 = 11;
volatile uint8_t x214 = 3U;
int8_t x217 = -19;
volatile int32_t t54 = -885861;
uint8_t x239 = 56U;
volatile uint16_t x243 = UINT16_MAX;
static uint32_t x248 = 48U;
static int32_t t61 = -4157455;
uint32_t x254 = 674969165U;
static int64_t x260 = -26114863660240LL;
uint32_t x264 = UINT32_MAX;
int32_t x266 = -1;
static uint16_t x272 = 995U;
static uint64_t x278 = 1609091LLU;
static volatile int16_t x285 = INT16_MAX;
volatile uint8_t x286 = 21U;
int32_t t71 = 116763351;
volatile int8_t x296 = -1;
int64_t x297 = 4259793506694611885LL;
int32_t x300 = INT32_MAX;
volatile uint8_t x302 = UINT8_MAX;
int8_t x309 = INT8_MIN;
static int16_t x313 = INT16_MAX;
volatile int32_t t78 = 1;
static int8_t x322 = 3;
uint8_t x325 = 0U;
static uint32_t x328 = 7964U;
volatile uint32_t x332 = 1483329932U;
uint64_t x341 = UINT64_MAX;
volatile uint16_t x343 = UINT16_MAX;
volatile uint8_t x344 = 10U;
int8_t x356 = INT8_MIN;
int64_t x362 = INT64_MIN;
static volatile uint64_t x363 = 489958434579639869LLU;
static int16_t x365 = -1;
int8_t x367 = INT8_MAX;
uint16_t x369 = UINT16_MAX;
int32_t t92 = 442337136;
volatile int16_t x379 = INT16_MIN;
int16_t x384 = INT16_MIN;
volatile int16_t x386 = INT16_MIN;
uint32_t x388 = UINT32_MAX;
int32_t x394 = INT32_MAX;
int8_t x413 = -12;
uint32_t x416 = 13694U;
int32_t x417 = -1;
volatile int32_t x418 = INT32_MIN;
int8_t x420 = INT8_MAX;
int32_t x424 = 0;
int64_t x426 = 3619393030532LL;
int8_t x427 = INT8_MIN;
static int32_t x428 = INT32_MIN;
int32_t t106 = 758;
int64_t x429 = INT64_MIN;
volatile int32_t t107 = -1;
static volatile uint32_t x437 = 438825U;
uint16_t x439 = UINT16_MAX;
static int16_t x442 = -1;
static int32_t t110 = 0;
volatile uint64_t x447 = 110440424210433082LLU;
uint32_t x449 = 135323925U;
int8_t x454 = INT8_MIN;
volatile int32_t t114 = 38021;
int16_t x469 = -1;
static uint16_t x470 = UINT16_MAX;
int64_t x472 = INT64_MAX;
uint64_t x473 = 1LLU;
int16_t x476 = INT16_MIN;
static uint64_t x481 = UINT64_MAX;
static volatile int64_t x486 = INT64_MIN;
int32_t x495 = INT32_MIN;
int8_t x498 = INT8_MIN;
int64_t x499 = INT64_MAX;
int32_t t124 = -123374;
static volatile int8_t x501 = INT8_MIN;
static volatile int8_t x513 = -57;
int64_t x514 = INT64_MIN;
int32_t t129 = 0;
int32_t t133 = 5481276;
volatile int32_t x539 = INT32_MIN;
volatile int32_t t134 = -120454;
int32_t x541 = 104395344;
static int16_t x543 = -27;
static volatile int32_t t136 = 7643359;
static uint16_t x551 = UINT16_MAX;
volatile int32_t t137 = 63;
volatile uint16_t x553 = 80U;
int8_t x558 = INT8_MAX;
int32_t x561 = -43503317;
static int32_t t140 = 16098;
volatile int8_t x565 = -47;
volatile int32_t t141 = 233346178;
int32_t x574 = -1;
static uint64_t x577 = 5183613583LLU;
int16_t x579 = -1;
int32_t x584 = INT32_MIN;
static int32_t t146 = 7418;
volatile int32_t x600 = INT32_MIN;
volatile int32_t t149 = 25;
int32_t t150 = 12470294;
int64_t x623 = -3807062713LL;
static int32_t x624 = INT32_MAX;
static volatile int32_t t155 = 2;
static volatile uint8_t x628 = 48U;
int32_t t156 = 1421;
int8_t x632 = -1;
volatile int32_t t157 = -1;
uint16_t x638 = UINT16_MAX;
static int32_t t159 = 50;
int64_t x645 = -1LL;
uint8_t x646 = UINT8_MAX;
int64_t x655 = INT64_MIN;
volatile int16_t x668 = -1;
int8_t x671 = INT8_MAX;
static int64_t x673 = -1170688910561601LL;
int16_t x674 = -2;
int64_t x680 = 2503878929415538621LL;
static uint64_t x686 = 4416138511102LLU;
static int8_t x691 = -1;
static uint32_t x692 = 225712513U;
int8_t x696 = INT8_MIN;
int16_t x700 = INT16_MAX;
static volatile int32_t t174 = 379;
int32_t x708 = INT32_MIN;
int8_t x712 = INT8_MIN;
int32_t t177 = 47;
uint32_t x713 = 507U;
volatile int32_t t178 = -13143080;
int16_t x717 = -3;
uint8_t x723 = UINT8_MAX;
static volatile int32_t t182 = -665;
volatile int32_t t184 = -52993345;
uint64_t x741 = 8105LLU;
volatile int32_t t188 = 125608398;
uint32_t x768 = UINT32_MAX;
int8_t x773 = INT8_MIN;
volatile int32_t t194 = 7378;
uint16_t x791 = 15U;
uint16_t x792 = UINT16_MAX;
static int32_t x794 = 36217;
volatile uint64_t x797 = 857232827253578791LLU;
int32_t x798 = INT32_MIN;
uint64_t x800 = 34080240173LLU;


void f0(void) {
    	uint16_t x1 = 235U;
	static int64_t x2 = INT64_MAX;
	static volatile int64_t x4 = -1LL;
	volatile int32_t t0 = -7;

    t0 = ((x1^(x2|x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 1U;
	int32_t x6 = INT32_MIN;
	int16_t x8 = -1;
	volatile int32_t t1 = -1;

    t1 = ((x5^(x6|x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 4U;
	uint16_t x10 = 26U;
	uint64_t x11 = 38815681242LLU;
	volatile uint16_t x12 = 2373U;
	volatile int32_t t2 = 1571;

    t2 = ((x9^(x10|x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x15 = 2U;
	int64_t x16 = INT64_MAX;

    t3 = ((x13^(x14|x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 1U;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	volatile uint16_t x20 = 7890U;
	volatile int32_t t4 = -544808049;

    t4 = ((x17^(x18|x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int16_t x22 = -761;
	int16_t x24 = -1;
	volatile int32_t t5 = 1146269;

    t5 = ((x21^(x22|x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 172479U;
	volatile int8_t x26 = INT8_MAX;
	int16_t x27 = -40;
	int32_t t6 = 6475821;

    t6 = ((x25^(x26|x27))>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	uint64_t x31 = 26500LLU;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -346403;

    t7 = ((x29^(x30|x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -28;
	uint64_t x35 = 2079819164910LLU;
	uint64_t x36 = UINT64_MAX;

    t8 = ((x33^(x34|x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = -14693629LL;
	uint16_t x39 = 1U;
	int32_t t9 = 61;

    t9 = ((x37^(x38|x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	static uint8_t x42 = 11U;
	int64_t x43 = -26161559LL;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -2436;

    t10 = ((x41^(x42|x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 1928LLU;
	static uint64_t x48 = 7LLU;
	volatile int32_t t11 = 3;

    t11 = ((x45^(x46|x47))>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 180622426249LLU;
	uint32_t x50 = 268124237U;
	volatile int16_t x51 = INT16_MAX;
	volatile int32_t t12 = -166;

    t12 = ((x49^(x50|x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x53 = UINT8_MAX;
	int64_t x54 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -13;

    t13 = ((x53^(x54|x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 423666386;
	volatile int64_t x59 = -1LL;
	int32_t t14 = -3;

    t14 = ((x57^(x58|x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = 3;
	int16_t x63 = -1;
	int64_t x64 = 2681347291887217030LL;

    t15 = ((x61^(x62|x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = -1LL;
	static int64_t x67 = INT64_MIN;
	volatile int32_t t16 = -62797;

    t16 = ((x65^(x66|x67))>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	uint8_t x70 = 3U;
	volatile int32_t t17 = -361;

    t17 = ((x69^(x70|x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = -427188364565LL;
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = -261;
	int8_t x76 = 0;
	int32_t t18 = 11445082;

    t18 = ((x73^(x74|x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = 614;
	uint16_t x78 = 658U;
	static uint32_t x79 = 9944992U;
	int64_t x80 = INT64_MIN;
	int32_t t19 = -655;

    t19 = ((x77^(x78|x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -2301;
	int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	static volatile uint32_t x84 = 10810U;
	int32_t t20 = 3338688;

    t20 = ((x81^(x82|x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	int8_t x87 = INT8_MAX;
	uint64_t x88 = 5114581LLU;
	volatile int32_t t21 = -15;

    t21 = ((x85^(x86|x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 8U;
	uint32_t x90 = 5505037U;
	int8_t x92 = 4;
	int32_t t22 = 462791;

    t22 = ((x89^(x90|x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x94 = 205112983745LLU;
	int8_t x95 = INT8_MIN;
	volatile int32_t t23 = -271913947;

    t23 = ((x93^(x94|x95))>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	static int64_t x98 = INT64_MIN;
	uint64_t x99 = 9LLU;
	int32_t t24 = -442104;

    t24 = ((x97^(x98|x99))>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 26771109;
	static volatile int16_t x103 = 5503;
	static int32_t x104 = -1;
	int32_t t25 = -535;

    t25 = ((x101^(x102|x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = -43;
	int8_t x106 = 7;
	static int32_t x107 = -22814632;
	uint32_t x108 = 1668133U;
	volatile int32_t t26 = -1;

    t26 = ((x105^(x106|x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 1965;
	int32_t x110 = INT32_MIN;
	volatile int8_t x111 = -1;
	int8_t x112 = 1;
	int32_t t27 = -108;

    t27 = ((x109^(x110|x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint16_t x114 = UINT16_MAX;
	int32_t x116 = INT32_MAX;

    t28 = ((x113^(x114|x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	static volatile int32_t x119 = INT32_MIN;
	static int8_t x120 = INT8_MAX;
	int32_t t29 = -10533;

    t29 = ((x117^(x118|x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	int8_t x124 = 4;

    t30 = ((x121^(x122|x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = 3U;
	int32_t x128 = INT32_MAX;

    t31 = ((x125^(x126|x127))>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 2200352187192427444LLU;
	volatile uint32_t x130 = UINT32_MAX;
	int16_t x131 = -3;
	uint8_t x132 = 0U;
	volatile int32_t t32 = 43;

    t32 = ((x129^(x130|x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	uint8_t x134 = 2U;
	volatile uint16_t x135 = UINT16_MAX;
	int16_t x136 = -776;
	int32_t t33 = 103192176;

    t33 = ((x133^(x134|x135))>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x138 = 91U;
	uint16_t x139 = 7U;
	int32_t t34 = 129852;

    t34 = ((x137^(x138|x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	volatile uint32_t x143 = 94U;
	int32_t x144 = -12862921;
	int32_t t35 = -19362215;

    t35 = ((x141^(x142|x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MAX;
	static int16_t x148 = -1;
	int32_t t36 = -10577782;

    t36 = ((x145^(x146|x147))>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	int64_t x150 = INT64_MAX;
	volatile int32_t x151 = INT32_MAX;
	static int64_t x152 = 8291922351230121LL;

    t37 = ((x149^(x150|x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 4977;
	volatile uint64_t x154 = 1220787446LLU;
	int16_t x155 = 1191;
	uint64_t x156 = 4658019350830860LLU;
	volatile int32_t t38 = 14534;

    t38 = ((x153^(x154|x155))>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = -34573164801392LL;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -1LL;
	volatile int32_t t39 = -25465181;

    t39 = ((x157^(x158|x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 14;
	uint32_t x162 = 220U;
	int64_t x163 = INT64_MIN;
	int8_t x164 = -10;

    t40 = ((x161^(x162|x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 1U;
	int8_t x166 = 25;
	int16_t x168 = -92;
	int32_t t41 = 0;

    t41 = ((x165^(x166|x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 0;
	int16_t x170 = -1;
	volatile int64_t x171 = 6951112396267LL;
	int16_t x172 = -48;
	static int32_t t42 = -37882121;

    t42 = ((x169^(x170|x171))>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	static volatile int32_t t43 = 3408;

    t43 = ((x173^(x174|x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 25951947148955801LLU;
	uint8_t x178 = 6U;
	int32_t x179 = INT32_MIN;
	volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -11820603;

    t44 = ((x177^(x178|x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x182 = 91;
	volatile uint16_t x183 = 18U;
	volatile int16_t x184 = INT16_MAX;
	int32_t t45 = 29932953;

    t45 = ((x181^(x182|x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	volatile int8_t x186 = -19;
	int8_t x187 = 1;

    t46 = ((x185^(x186|x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x190 = -279064;
	int32_t x191 = INT32_MIN;
	static int16_t x192 = -1;
	static volatile int32_t t47 = 20183;

    t47 = ((x189^(x190|x191))>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = UINT32_MAX;
	uint8_t x195 = UINT8_MAX;
	uint64_t x196 = 7918402LLU;
	volatile int32_t t48 = -4;

    t48 = ((x193^(x194|x195))>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	static int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	static volatile int32_t t49 = -477795;

    t49 = ((x197^(x198|x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	int64_t x202 = 79815LL;
	int32_t x203 = -678740004;
	volatile uint8_t x204 = 0U;
	static volatile int32_t t50 = -26202;

    t50 = ((x201^(x202|x203))>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MAX;
	int32_t t51 = -8231048;

    t51 = ((x205^(x206|x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 222127478818012160LLU;
	int32_t x210 = INT32_MIN;
	static int16_t x211 = -2;
	int64_t x212 = INT64_MAX;

    t52 = ((x209^(x210|x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MAX;
	uint32_t x215 = UINT32_MAX;
	static int32_t x216 = 730391;
	volatile int32_t t53 = 12133450;

    t53 = ((x213^(x214|x215))>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x218 = 0U;
	volatile uint64_t x219 = 9LLU;
	int32_t x220 = -1;

    t54 = ((x217^(x218|x219))>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	int16_t x222 = -4320;
	volatile uint32_t x223 = 804974838U;
	uint32_t x224 = 33757996U;
	volatile int32_t t55 = 996790560;

    t55 = ((x221^(x222|x223))>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 88297292569338261LLU;
	static volatile int64_t x226 = INT64_MIN;
	volatile uint8_t x227 = UINT8_MAX;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = -45;

    t56 = ((x225^(x226|x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int16_t x230 = INT16_MIN;
	static int64_t x231 = INT64_MIN;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t57 = -128738300;

    t57 = ((x229^(x230|x231))>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = INT8_MAX;
	int64_t x235 = 974403676946165431LL;
	int8_t x236 = INT8_MIN;
	int32_t t58 = 105;

    t58 = ((x233^(x234|x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	int16_t x238 = -1;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -2957459;

    t59 = ((x237^(x238|x239))>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -1;
	int16_t x242 = INT16_MAX;
	int16_t x244 = -1;
	volatile int32_t t60 = 242167;

    t60 = ((x241^(x242|x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = -1;
	int16_t x246 = INT16_MIN;
	volatile uint64_t x247 = UINT64_MAX;

    t61 = ((x245^(x246|x247))>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = 6;
	volatile int16_t x250 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;
	static int16_t x252 = INT16_MIN;
	int32_t t62 = -11;

    t62 = ((x249^(x250|x251))>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x253 = UINT8_MAX;
	static uint32_t x255 = 175U;
	volatile int64_t x256 = INT64_MIN;
	int32_t t63 = 2960904;

    t63 = ((x253^(x254|x255))>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 40;
	uint32_t x258 = 7278U;
	int16_t x259 = -1;
	volatile int32_t t64 = -42;

    t64 = ((x257^(x258|x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 1143U;
	int16_t x263 = INT16_MIN;
	int32_t t65 = 14151;

    t65 = ((x261^(x262|x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	static int64_t x267 = INT64_MAX;
	static uint8_t x268 = 72U;
	int32_t t66 = -2611;

    t66 = ((x265^(x266|x267))>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int32_t x270 = -847;
	int32_t x271 = -1;
	volatile int32_t t67 = -48932;

    t67 = ((x269^(x270|x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	int16_t x275 = -45;
	volatile int64_t x276 = -67720LL;
	int32_t t68 = 0;

    t68 = ((x273^(x274|x275))>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 1U;
	uint32_t x279 = 147U;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = 1166;

    t69 = ((x277^(x278|x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -1;
	uint16_t x282 = 920U;
	int16_t x283 = -1;
	static uint64_t x284 = 104268555670184272LLU;
	int32_t t70 = 54;

    t70 = ((x281^(x282|x283))>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x287 = 115U;
	int32_t x288 = -1;

    t71 = ((x285^(x286|x287))>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 13268U;
	int64_t x290 = -451720LL;
	int32_t x291 = 16321081;
	static uint32_t x292 = UINT32_MAX;
	int32_t t72 = 0;

    t72 = ((x289^(x290|x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MAX;
	uint64_t x295 = 14LLU;
	int32_t t73 = -1;

    t73 = ((x293^(x294|x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x298 = -16026444191LL;
	uint32_t x299 = UINT32_MAX;
	static volatile int32_t t74 = 35318;

    t74 = ((x297^(x298|x299))>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = INT32_MIN;
	uint8_t x303 = 1U;
	int8_t x304 = -1;
	static volatile int32_t t75 = 205890;

    t75 = ((x301^(x302|x303))>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1LL;
	static volatile int32_t x306 = -7;
	static int64_t x307 = -29817190220764LL;
	volatile uint64_t x308 = 87271613LLU;
	volatile int32_t t76 = 92200390;

    t76 = ((x305^(x306|x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = -1;
	static int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -3317364;

    t77 = ((x309^(x310|x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x314 = 2U;
	int32_t x315 = 7;
	static int8_t x316 = -62;

    t78 = ((x313^(x314|x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MAX;
	int32_t x318 = INT32_MAX;
	int16_t x319 = -6;
	uint8_t x320 = UINT8_MAX;
	int32_t t79 = 302526394;

    t79 = ((x317^(x318|x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 8065U;
	static volatile uint16_t x323 = 1502U;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t80 = -1167751;

    t80 = ((x321^(x322|x323))>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x326 = 1980LL;
	static int16_t x327 = INT16_MIN;
	static int32_t t81 = 14986068;

    t81 = ((x325^(x326|x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -1LL;
	volatile int8_t x330 = 1;
	int64_t x331 = INT64_MIN;
	volatile int32_t t82 = 0;

    t82 = ((x329^(x330|x331))>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x333 = INT32_MIN;
	int8_t x334 = 23;
	static volatile int64_t x335 = 105546897083291LL;
	static int64_t x336 = INT64_MAX;
	int32_t t83 = 0;

    t83 = ((x333^(x334|x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = -597;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = UINT16_MAX;
	volatile uint8_t x340 = 23U;
	volatile int32_t t84 = 87288;

    t84 = ((x337^(x338|x339))>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x342 = UINT64_MAX;
	int32_t t85 = -650601;

    t85 = ((x341^(x342|x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 25065;
	int16_t x346 = 5429;
	volatile int32_t x347 = 127;
	static int16_t x348 = 817;
	int32_t t86 = -24988;

    t86 = ((x345^(x346|x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = -508;
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = UINT8_MAX;
	uint64_t x352 = 2639573LLU;
	static volatile int32_t t87 = -920490;

    t87 = ((x349^(x350|x351))>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	volatile int32_t t88 = -1269962;

    t88 = ((x353^(x354|x355))>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 252635LLU;
	int32_t x358 = INT32_MIN;
	static volatile uint32_t x359 = UINT32_MAX;
	static int32_t x360 = INT32_MAX;
	static int32_t t89 = 1;

    t89 = ((x357^(x358|x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1LL;
	uint32_t x364 = 353U;
	int32_t t90 = -62;

    t90 = ((x361^(x362|x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = INT32_MAX;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 7403232;

    t91 = ((x365^(x366|x367))>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x370 = 1002394686LLU;
	volatile int64_t x371 = -1LL;
	int32_t x372 = -170329;

    t92 = ((x369^(x370|x371))>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x374 = -1;
	int16_t x375 = -1;
	int32_t x376 = -1;
	int32_t t93 = -9;

    t93 = ((x373^(x374|x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	int8_t x378 = -40;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -9;

    t94 = ((x377^(x378|x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MIN;
	uint32_t x382 = 223952U;
	int64_t x383 = -1LL;
	static volatile int32_t t95 = 3;

    t95 = ((x381^(x382|x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = UINT16_MAX;
	static int64_t x387 = -1LL;
	static int32_t t96 = -62769;

    t96 = ((x385^(x386|x387))>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x389 = 192764792LLU;
	int8_t x390 = -2;
	int8_t x391 = INT8_MIN;
	volatile int8_t x392 = -1;
	static int32_t t97 = 2057;

    t97 = ((x389^(x390|x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 0U;
	volatile int64_t x395 = -1LL;
	int32_t x396 = -1;
	int32_t t98 = 934515053;

    t98 = ((x393^(x394|x395))>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MAX;
	int8_t x398 = -5;
	static uint16_t x399 = 5U;
	static int8_t x400 = -1;
	volatile int32_t t99 = 1;

    t99 = ((x397^(x398|x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = INT8_MAX;
	int32_t x402 = -3883;
	static int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MAX;
	volatile int32_t t100 = 2740;

    t100 = ((x401^(x402|x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	int32_t x406 = 1;
	volatile uint8_t x407 = 0U;
	int64_t x408 = INT64_MIN;
	int32_t t101 = 49;

    t101 = ((x405^(x406|x407))>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	uint32_t x410 = 517975327U;
	uint16_t x411 = 589U;
	int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 30647;

    t102 = ((x409^(x410|x411))>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x414 = -1;
	int64_t x415 = -3021674076664521LL;
	static int32_t t103 = -8;

    t103 = ((x413^(x414|x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x419 = 5743678854LLU;
	volatile int32_t t104 = -1;

    t104 = ((x417^(x418|x419))>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	static uint32_t x422 = 136073579U;
	int32_t x423 = -32443;
	volatile int32_t t105 = 5;

    t105 = ((x421^(x422|x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 0;

    t106 = ((x425^(x426|x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x430 = UINT64_MAX;
	int32_t x431 = -1;
	int8_t x432 = -1;

    t107 = ((x429^(x430|x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	volatile int16_t x434 = 74;
	int32_t x435 = INT32_MAX;
	static volatile uint16_t x436 = UINT16_MAX;
	int32_t t108 = 260149434;

    t108 = ((x433^(x434|x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = 23;
	int32_t x440 = INT32_MIN;
	int32_t t109 = 28533;

    t109 = ((x437^(x438|x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = INT32_MIN;
	static volatile int32_t x443 = INT32_MIN;
	int64_t x444 = -1LL;

    t110 = ((x441^(x442|x443))>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 2;
	int8_t x446 = 2;
	uint64_t x448 = 610483276822LLU;
	volatile int32_t t111 = 568717;

    t111 = ((x445^(x446|x447))>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = 4419U;
	volatile uint32_t x451 = 63777U;
	int32_t x452 = 75043348;
	volatile int32_t t112 = 1;

    t112 = ((x449^(x450|x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 24U;
	uint64_t x455 = 3261017918998LLU;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t113 = -1;

    t113 = ((x453^(x454|x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	uint16_t x458 = 13309U;
	int64_t x459 = INT64_MIN;
	static int32_t x460 = -1;

    t114 = ((x457^(x458|x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 84U;
	static int8_t x462 = INT8_MIN;
	volatile uint32_t x463 = UINT32_MAX;
	uint8_t x464 = 2U;
	static int32_t t115 = 87570431;

    t115 = ((x461^(x462|x463))>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x465 = -61246;
	int8_t x466 = -3;
	static int16_t x467 = INT16_MAX;
	volatile int64_t x468 = -2LL;
	static volatile int32_t t116 = -28591105;

    t116 = ((x465^(x466|x467))>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x471 = -2;
	volatile int32_t t117 = -246994;

    t117 = ((x469^(x470|x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = -240;
	int8_t x475 = INT8_MIN;
	int32_t t118 = 22719416;

    t118 = ((x473^(x474|x475))>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	volatile int8_t x478 = -1;
	int8_t x479 = INT8_MAX;
	uint64_t x480 = 63620358853LLU;
	int32_t t119 = -3177944;

    t119 = ((x477^(x478|x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x482 = 1U;
	static int8_t x483 = INT8_MIN;
	static int32_t x484 = INT32_MIN;
	volatile int32_t t120 = 17677;

    t120 = ((x481^(x482|x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 1636380934440750LLU;
	uint8_t x487 = 16U;
	static int8_t x488 = 1;
	static int32_t t121 = 42;

    t121 = ((x485^(x486|x487))>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 54LLU;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MAX;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = -4073;

    t122 = ((x489^(x490|x491))>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 1U;
	uint64_t x494 = UINT64_MAX;
	int8_t x496 = -1;
	int32_t t123 = -1996875;

    t123 = ((x493^(x494|x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -722352;
	uint16_t x500 = 1U;

    t124 = ((x497^(x498|x499))>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x502 = -545;
	uint32_t x503 = 361292U;
	int16_t x504 = -1;
	int32_t t125 = -3109;

    t125 = ((x501^(x502|x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x505 = INT64_MIN;
	int8_t x506 = -1;
	static volatile int8_t x507 = INT8_MIN;
	static int32_t x508 = INT32_MAX;
	static volatile int32_t t126 = -489;

    t126 = ((x505^(x506|x507))>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	volatile uint8_t x510 = UINT8_MAX;
	int8_t x511 = 9;
	int8_t x512 = INT8_MAX;
	volatile int32_t t127 = -8539489;

    t127 = ((x509^(x510|x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x515 = INT64_MAX;
	static uint8_t x516 = 19U;
	volatile int32_t t128 = 15925703;

    t128 = ((x513^(x514|x515))>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = 3;
	static int64_t x519 = -320LL;
	volatile uint16_t x520 = UINT16_MAX;

    t129 = ((x517^(x518|x519))>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	uint32_t x522 = 434U;
	uint64_t x523 = 119LLU;
	uint32_t x524 = UINT32_MAX;
	static volatile int32_t t130 = -104134981;

    t130 = ((x521^(x522|x523))>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	volatile int8_t x526 = INT8_MIN;
	volatile int16_t x527 = INT16_MAX;
	int8_t x528 = -29;
	volatile int32_t t131 = 1;

    t131 = ((x525^(x526|x527))>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -1;
	int64_t x530 = -1LL;
	int16_t x531 = -40;
	int64_t x532 = -1LL;
	volatile int32_t t132 = 7;

    t132 = ((x529^(x530|x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = 12425;
	uint8_t x534 = 28U;
	volatile int8_t x535 = -1;
	int16_t x536 = 1;

    t133 = ((x533^(x534|x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	volatile int64_t x538 = INT64_MIN;
	int8_t x540 = 7;

    t134 = ((x537^(x538|x539))>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = 0;
	static int8_t x544 = INT8_MIN;
	volatile int32_t t135 = 2;

    t135 = ((x541^(x542|x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x545 = INT16_MAX;
	volatile int8_t x546 = 14;
	uint64_t x547 = 24551236059823LLU;
	int8_t x548 = -1;

    t136 = ((x545^(x546|x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -746942347421214469LL;
	static uint64_t x550 = 40LLU;
	uint16_t x552 = 13U;

    t137 = ((x549^(x550|x551))>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = -1;
	volatile int16_t x555 = INT16_MIN;
	static volatile int32_t x556 = -1;
	int32_t t138 = 1400368;

    t138 = ((x553^(x554|x555))>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -48643;
	static int64_t x559 = INT64_MIN;
	uint64_t x560 = UINT64_MAX;
	int32_t t139 = 35188;

    t139 = ((x557^(x558|x559))>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = -1;
	int16_t x563 = INT16_MIN;
	int8_t x564 = -1;

    t140 = ((x561^(x562|x563))>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x566 = INT32_MIN;
	int8_t x567 = INT8_MIN;
	int64_t x568 = INT64_MIN;

    t141 = ((x565^(x566|x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -5137LL;
	volatile int64_t x570 = 8564805289LL;
	static volatile uint32_t x571 = UINT32_MAX;
	int32_t x572 = INT32_MIN;
	volatile int32_t t142 = -32536069;

    t142 = ((x569^(x570|x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 597400232LL;
	int16_t x575 = 3;
	int16_t x576 = INT16_MIN;
	volatile int32_t t143 = -2400;

    t143 = ((x573^(x574|x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x578 = -1;
	volatile int16_t x580 = -303;
	volatile int32_t t144 = -239280708;

    t144 = ((x577^(x578|x579))>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	volatile int64_t x582 = -300321056426298133LL;
	int16_t x583 = INT16_MAX;
	volatile int32_t t145 = 78831;

    t145 = ((x581^(x582|x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -108;
	int64_t x586 = -1LL;
	uint16_t x587 = 1167U;
	volatile int32_t x588 = 97016227;

    t146 = ((x585^(x586|x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 2U;
	uint16_t x590 = 3228U;
	volatile int32_t x591 = INT32_MAX;
	volatile uint64_t x592 = 32679521586672038LLU;
	volatile int32_t t147 = 241569;

    t147 = ((x589^(x590|x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 244595U;
	int8_t x594 = 32;
	static int32_t x595 = -1;
	int8_t x596 = INT8_MIN;
	static volatile int32_t t148 = -3151636;

    t148 = ((x593^(x594|x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -5048321519907490LL;
	volatile uint64_t x598 = UINT64_MAX;
	int64_t x599 = 660244340921911719LL;

    t149 = ((x597^(x598|x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	static int16_t x602 = INT16_MIN;
	volatile uint8_t x603 = 0U;
	uint8_t x604 = 0U;

    t150 = ((x601^(x602|x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -680655542;
	uint64_t x606 = 534942LLU;
	uint8_t x607 = 72U;
	int64_t x608 = INT64_MAX;
	int32_t t151 = 227883525;

    t151 = ((x605^(x606|x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint16_t x609 = 6716U;
	int8_t x610 = 39;
	int8_t x611 = INT8_MAX;
	volatile int32_t x612 = 209990;
	int32_t t152 = 13062;

    t152 = ((x609^(x610|x611))>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = 50937180081289294LL;
	int8_t x614 = -1;
	static int16_t x615 = 101;
	uint8_t x616 = 2U;
	volatile int32_t t153 = -215735838;

    t153 = ((x613^(x614|x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x617 = INT16_MIN;
	uint8_t x618 = 2U;
	static uint16_t x619 = UINT16_MAX;
	uint64_t x620 = 22704LLU;
	volatile int32_t t154 = 0;

    t154 = ((x617^(x618|x619))>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x621 = INT32_MAX;
	uint16_t x622 = 8U;

    t155 = ((x621^(x622|x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x625 = UINT64_MAX;
	static int64_t x626 = INT64_MAX;
	int64_t x627 = INT64_MAX;

    t156 = ((x625^(x626|x627))>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 22U;
	static volatile int16_t x630 = INT16_MIN;
	static int32_t x631 = INT32_MIN;

    t157 = ((x629^(x630|x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	static int16_t x634 = -1;
	int64_t x635 = -1LL;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t158 = 3;

    t158 = ((x633^(x634|x635))>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	static uint32_t x639 = 3027U;
	int8_t x640 = -1;

    t159 = ((x637^(x638|x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x641 = 8U;
	uint32_t x642 = 51U;
	int8_t x643 = INT8_MAX;
	uint16_t x644 = 1U;
	int32_t t160 = -57035;

    t160 = ((x641^(x642|x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x647 = INT16_MIN;
	volatile int32_t x648 = INT32_MIN;
	int32_t t161 = 58286425;

    t161 = ((x645^(x646|x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -13LL;
	int16_t x650 = INT16_MIN;
	int64_t x651 = INT64_MIN;
	int64_t x652 = INT64_MIN;
	volatile int32_t t162 = -774;

    t162 = ((x649^(x650|x651))>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	static int64_t x654 = INT64_MIN;
	int16_t x656 = INT16_MIN;
	volatile int32_t t163 = -6;

    t163 = ((x653^(x654|x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint16_t x657 = 1U;
	int32_t x658 = 10687992;
	uint64_t x659 = 385039LLU;
	volatile int8_t x660 = INT8_MIN;
	static int32_t t164 = 27;

    t164 = ((x657^(x658|x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	uint16_t x662 = 2868U;
	static uint8_t x663 = UINT8_MAX;
	int64_t x664 = 7028022654LL;
	int32_t t165 = 1;

    t165 = ((x661^(x662|x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = UINT16_MAX;
	uint16_t x666 = 157U;
	int64_t x667 = INT64_MIN;
	int32_t t166 = 174493623;

    t166 = ((x665^(x666|x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 8484191U;
	uint32_t x670 = 94U;
	uint8_t x672 = UINT8_MAX;
	volatile int32_t t167 = 6073010;

    t167 = ((x669^(x670|x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x675 = 13U;
	int32_t x676 = INT32_MIN;
	static volatile int32_t t168 = 1245622;

    t168 = ((x673^(x674|x675))>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	volatile uint64_t x678 = UINT64_MAX;
	uint32_t x679 = UINT32_MAX;
	static int32_t t169 = 1;

    t169 = ((x677^(x678|x679))>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int64_t x682 = 883222825146512610LL;
	int16_t x683 = INT16_MIN;
	int32_t x684 = -3;
	volatile int32_t t170 = -5201;

    t170 = ((x681^(x682|x683))>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	int8_t x687 = 1;
	int32_t x688 = INT32_MAX;
	volatile int32_t t171 = 82;

    t171 = ((x685^(x686|x687))>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	int64_t x690 = INT64_MAX;
	int32_t t172 = 382686;

    t172 = ((x689^(x690|x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x693 = INT64_MAX;
	static int64_t x694 = -1LL;
	int32_t x695 = 835842953;
	volatile int32_t t173 = -57791706;

    t173 = ((x693^(x694|x695))>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = -426;
	uint32_t x698 = 2778U;
	volatile int8_t x699 = -32;

    t174 = ((x697^(x698|x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 164101622U;
	uint32_t x702 = 7261U;
	int16_t x703 = INT16_MAX;
	int64_t x704 = INT64_MIN;
	int32_t t175 = -178790;

    t175 = ((x701^(x702|x703))>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	uint32_t x706 = 53974338U;
	volatile int32_t x707 = INT32_MIN;
	volatile int32_t t176 = 1;

    t176 = ((x705^(x706|x707))>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	int64_t x710 = -1689128907327LL;
	int8_t x711 = -1;

    t177 = ((x709^(x710|x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x714 = 518U;
	int64_t x715 = 336207634940559LL;
	static int8_t x716 = INT8_MIN;

    t178 = ((x713^(x714|x715))>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x718 = -201;
	int8_t x719 = 17;
	uint64_t x720 = 1350726620384LLU;
	volatile int32_t t179 = 13327943;

    t179 = ((x717^(x718|x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = INT32_MAX;
	uint8_t x722 = 21U;
	static int64_t x724 = INT64_MIN;
	static volatile int32_t t180 = -1877127;

    t180 = ((x721^(x722|x723))>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -31967020;
	static int16_t x726 = INT16_MIN;
	int32_t x727 = -290;
	int8_t x728 = -1;
	static int32_t t181 = -319547;

    t181 = ((x725^(x726|x727))>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint16_t x729 = 61U;
	volatile int64_t x730 = -349099393880505LL;
	int32_t x731 = -1;
	static uint8_t x732 = 63U;

    t182 = ((x729^(x730|x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int16_t x734 = INT16_MAX;
	static int32_t x735 = INT32_MAX;
	int64_t x736 = INT64_MIN;
	int32_t t183 = -48929265;

    t183 = ((x733^(x734|x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = -3300;
	int16_t x738 = 59;
	static int8_t x739 = INT8_MAX;
	int8_t x740 = INT8_MIN;

    t184 = ((x737^(x738|x739))>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	volatile uint32_t x744 = 6355U;
	volatile int32_t t185 = -1966;

    t185 = ((x741^(x742|x743))>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x745 = UINT16_MAX;
	int16_t x746 = INT16_MIN;
	int8_t x747 = -6;
	static uint32_t x748 = UINT32_MAX;
	int32_t t186 = -14431129;

    t186 = ((x745^(x746|x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = UINT16_MAX;
	uint8_t x750 = 1U;
	static int64_t x751 = -3088910938LL;
	int16_t x752 = -6575;
	static volatile int32_t t187 = -8;

    t187 = ((x749^(x750|x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 6U;
	uint8_t x754 = 38U;
	volatile uint16_t x755 = UINT16_MAX;
	volatile uint64_t x756 = 1533LLU;

    t188 = ((x753^(x754|x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 1;
	int16_t x758 = -55;
	static int32_t x759 = INT32_MIN;
	volatile uint64_t x760 = 24LLU;
	static volatile int32_t t189 = -105271562;

    t189 = ((x757^(x758|x759))>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MIN;
	uint16_t x762 = 5811U;
	static uint64_t x763 = UINT64_MAX;
	uint8_t x764 = 62U;
	int32_t t190 = -11380;

    t190 = ((x761^(x762|x763))>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	int8_t x766 = INT8_MIN;
	uint16_t x767 = UINT16_MAX;
	static volatile int32_t t191 = -1;

    t191 = ((x765^(x766|x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = INT16_MIN;
	volatile int8_t x770 = INT8_MAX;
	uint8_t x771 = 7U;
	volatile int8_t x772 = INT8_MIN;
	static int32_t t192 = -1300;

    t192 = ((x769^(x770|x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = -1;
	int64_t x775 = INT64_MIN;
	int16_t x776 = -1;
	int32_t t193 = -19;

    t193 = ((x773^(x774|x775))>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = UINT32_MAX;
	static volatile int32_t x778 = INT32_MIN;
	int16_t x779 = INT16_MAX;
	uint64_t x780 = UINT64_MAX;

    t194 = ((x777^(x778|x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -493LL;
	static volatile int32_t x782 = INT32_MAX;
	int8_t x783 = INT8_MAX;
	static volatile uint32_t x784 = 33343832U;
	volatile int32_t t195 = 6599;

    t195 = ((x781^(x782|x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = INT32_MIN;
	volatile int32_t x786 = -24424;
	int8_t x787 = -19;
	int64_t x788 = -1LL;
	volatile int32_t t196 = 471021514;

    t196 = ((x785^(x786|x787))>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x789 = INT32_MIN;
	int32_t x790 = INT32_MIN;
	int32_t t197 = 2016354;

    t197 = ((x789^(x790|x791))>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = UINT8_MAX;
	volatile int32_t x795 = -4147;
	int64_t x796 = -28078203LL;
	static int32_t t198 = -214048208;

    t198 = ((x793^(x794|x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x799 = INT32_MAX;
	volatile int32_t t199 = -82475;

    t199 = ((x797^(x798|x799))>x800);

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

