
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

static int8_t x7 = INT8_MAX;
int16_t x10 = INT16_MIN;
int32_t t2 = 1163;
static uint8_t x16 = 27U;
volatile int64_t x23 = INT64_MIN;
int32_t t5 = 117;
int8_t x33 = INT8_MIN;
volatile int16_t x36 = INT16_MAX;
static volatile int32_t t8 = 150;
static volatile uint8_t x41 = UINT8_MAX;
volatile int32_t x43 = -1;
int16_t x52 = -1;
int32_t t13 = -280935;
int64_t x78 = INT64_MIN;
int32_t x79 = -3;
static volatile int32_t t17 = 2;
static int16_t x83 = -1;
int32_t x93 = -1;
volatile int32_t t20 = 182;
static uint8_t x97 = 1U;
static uint32_t x98 = UINT32_MAX;
int32_t t21 = 14;
static int64_t x101 = -1LL;
uint32_t x110 = 1886U;
volatile int32_t t25 = 23570;
uint8_t x122 = 112U;
int32_t t27 = 70706;
volatile int32_t x130 = 1;
volatile int16_t x142 = -1;
int32_t x147 = INT32_MAX;
static volatile uint64_t x154 = 799LLU;
int16_t x155 = INT16_MIN;
int16_t x173 = -1;
volatile int32_t t39 = 163;
static int8_t x178 = -1;
volatile int32_t x179 = 13;
volatile uint32_t x183 = 712777293U;
uint32_t x184 = 13U;
int8_t x188 = 14;
uint32_t x193 = 1534259U;
static int8_t x198 = INT8_MIN;
uint16_t x200 = 103U;
volatile uint32_t x202 = 15550U;
uint32_t x203 = 21225U;
int16_t x204 = INT16_MIN;
static uint32_t x205 = 3U;
static int16_t x217 = INT16_MIN;
volatile int32_t t48 = -15;
int8_t x225 = INT8_MAX;
static volatile int64_t x229 = INT64_MIN;
static int16_t x231 = INT16_MAX;
int8_t x233 = INT8_MAX;
uint32_t x236 = 673246U;
int32_t t51 = -283855495;
uint8_t x240 = UINT8_MAX;
volatile int32_t t52 = -13254038;
int32_t x242 = INT32_MIN;
static uint32_t x243 = UINT32_MAX;
int32_t x244 = -1;
volatile int32_t t53 = -204877892;
static int64_t x249 = INT64_MIN;
uint64_t x258 = UINT64_MAX;
uint16_t x260 = 1263U;
static int32_t t56 = 14627018;
uint64_t x267 = 7894043370394997LLU;
int16_t x273 = 2492;
volatile int32_t x277 = INT32_MIN;
uint16_t x302 = 6988U;
volatile int32_t t67 = -51269833;
volatile uint8_t x311 = 34U;
uint64_t x312 = 3291224838769782LLU;
uint8_t x321 = UINT8_MAX;
static int16_t x323 = INT16_MIN;
int32_t x330 = INT32_MIN;
uint32_t x336 = 6886874U;
int8_t x342 = INT8_MAX;
int64_t x344 = 47928755286707361LL;
uint64_t x345 = 11197LLU;
static uint8_t x360 = 7U;
int8_t x372 = 24;
uint16_t x381 = 248U;
int64_t x387 = INT64_MAX;
uint16_t x388 = 6U;
int16_t x389 = 803;
volatile int8_t x394 = 1;
int8_t x401 = INT8_MIN;
static volatile int32_t t89 = 183;
static uint32_t x407 = 448U;
uint64_t x414 = 1329228674750170782LLU;
static int16_t x426 = 1060;
int16_t x429 = -1;
int8_t x437 = INT8_MAX;
int8_t x465 = -1;
volatile int32_t t101 = -3576;
uint16_t x470 = 0U;
volatile int32_t t102 = 0;
volatile int16_t x485 = 7;
int64_t x489 = -7912123LL;
volatile int32_t x496 = INT32_MIN;
uint32_t x510 = UINT32_MAX;
static int64_t x513 = -276536299593410LL;
int32_t x517 = INT32_MIN;
static volatile int16_t x522 = INT16_MAX;
int32_t x528 = -34;
static int8_t x530 = 4;
uint16_t x537 = 156U;
int32_t x564 = INT32_MAX;
static volatile int8_t x578 = INT8_MIN;
int16_t x579 = -1;
int64_t x580 = -1LL;
uint16_t x585 = 0U;
volatile uint16_t x588 = 26U;
static int32_t x590 = INT32_MIN;
uint64_t x600 = 42313840552738696LLU;
volatile int32_t t128 = 174092694;
volatile int8_t x613 = -1;
uint8_t x627 = 1U;
volatile int16_t x629 = -1;
int8_t x632 = 1;
static uint32_t x633 = 60091U;
int32_t x634 = 42;
int32_t t135 = 113530;
uint8_t x648 = 71U;
int16_t x649 = 1;
int16_t x650 = INT16_MAX;
int8_t x652 = INT8_MIN;
uint64_t x657 = 2330088449LLU;
volatile uint16_t x668 = UINT16_MAX;
int32_t x671 = INT32_MIN;
int32_t t143 = 1638570;
int64_t x676 = INT64_MIN;
static volatile int32_t x678 = 104217;
static int8_t x679 = -1;
int16_t x681 = -23;
int16_t x682 = 8454;
int64_t x684 = INT64_MIN;
volatile uint64_t x685 = 8394388549828841LLU;
int64_t x686 = INT64_MIN;
int32_t x693 = INT32_MAX;
uint32_t x701 = 3361999U;
uint8_t x704 = UINT8_MAX;
volatile int32_t t149 = 836478103;
static int32_t t151 = 92073;
uint64_t x717 = UINT64_MAX;
int32_t x733 = INT32_MIN;
static uint8_t x741 = 9U;
uint64_t x758 = 230213119LLU;
int32_t x762 = 22;
int32_t x763 = INT32_MIN;
uint32_t x774 = 625U;
int16_t x777 = 0;
static uint8_t x780 = 1U;
static int16_t x782 = -1;
int16_t x789 = -1;
int64_t x791 = INT64_MIN;
int32_t x794 = INT32_MAX;
volatile int64_t x795 = -1LL;
volatile int32_t t169 = -417;
int8_t x802 = 0;
int32_t t172 = 423;
int16_t x819 = -2;
uint8_t x823 = 7U;
static volatile int32_t t176 = -1029614;
static volatile int8_t x830 = -1;
static volatile int32_t t177 = -5;
static int16_t x835 = -191;
uint32_t x836 = 1U;
static int64_t x838 = 1564260658471370LL;
static uint8_t x845 = UINT8_MAX;
int32_t x850 = INT32_MIN;
int32_t x863 = INT32_MIN;
volatile int32_t t185 = -21236;
int64_t x866 = -1LL;
uint16_t x870 = 1U;
uint16_t x872 = 20351U;
uint32_t x878 = UINT32_MAX;
int32_t t191 = -909;
static int16_t x912 = INT16_MIN;
uint32_t x918 = UINT32_MAX;
int64_t x925 = INT64_MIN;
volatile int32_t x927 = -1;


void f0(void) {
    	uint8_t x1 = 2U;
	static int8_t x2 = INT8_MAX;
	uint64_t x3 = 26372939LLU;
	int64_t x4 = -24684327069763393LL;
	int32_t t0 = 23;

    t0 = (((x1+x2)/x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int32_t x6 = -1;
	uint64_t x8 = 1622455545657LLU;
	int32_t t1 = -24614;

    t1 = (((x5+x6)/x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = INT64_MAX;
	static int32_t x11 = INT32_MIN;
	int32_t x12 = -1;

    t2 = (((x9+x10)/x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -27;
	uint32_t x14 = 39551U;
	int64_t x15 = -384126521LL;
	volatile int32_t t3 = 963;

    t3 = (((x13+x14)/x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MAX;
	volatile int16_t x20 = -2198;
	volatile int32_t t4 = -13668;

    t4 = (((x17+x18)/x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	volatile int32_t x22 = -1;
	volatile int32_t x24 = INT32_MIN;

    t5 = (((x21+x22)/x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -1;
	int32_t x26 = -1;
	int32_t x27 = -153664;
	int64_t x28 = -1LL;
	int32_t t6 = 27127485;

    t6 = (((x25+x26)/x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x34 = 0U;
	static uint32_t x35 = 45U;
	int32_t t7 = -322998;

    t7 = (((x33+x34)/x35)>x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 1LLU;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 916U;
	volatile uint16_t x40 = 2U;

    t8 = (((x37+x38)/x39)>x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x42 = 13778U;
	static uint64_t x44 = 32973975897LLU;
	volatile int32_t t9 = 3;

    t9 = (((x41+x42)/x43)>x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	uint32_t x46 = 31503940U;
	static volatile uint32_t x47 = 47090200U;
	int32_t x48 = -1;
	volatile int32_t t10 = 986;

    t10 = (((x45+x46)/x47)>x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = INT32_MAX;
	int32_t x50 = INT32_MIN;
	static volatile int32_t x51 = -1;
	volatile int32_t t11 = 1;

    t11 = (((x49+x50)/x51)>x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 213U;
	uint32_t x54 = 6U;
	int32_t x55 = -1;
	uint16_t x56 = 3852U;
	int32_t t12 = -119452337;

    t12 = (((x53+x54)/x55)>x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = -39;
	volatile int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MIN;

    t13 = (((x61+x62)/x63)>x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x65 = 15891;
	int8_t x66 = INT8_MIN;
	static volatile int16_t x67 = -1;
	int16_t x68 = INT16_MIN;
	volatile int32_t t14 = 347;

    t14 = (((x65+x66)/x67)>x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x69 = -407;
	int32_t x70 = 1240;
	volatile int32_t x71 = 16072;
	static uint16_t x72 = 507U;
	int32_t t15 = 199681006;

    t15 = (((x69+x70)/x71)>x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x73 = 2380LLU;
	static int64_t x74 = 218313724486LL;
	uint64_t x75 = UINT64_MAX;
	static uint32_t x76 = UINT32_MAX;
	int32_t t16 = 1;

    t16 = (((x73+x74)/x75)>x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = 0LL;
	int32_t x80 = INT32_MIN;

    t17 = (((x77+x78)/x79)>x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x81 = INT8_MAX;
	static volatile int16_t x82 = INT16_MIN;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t18 = -3946;

    t18 = (((x81+x82)/x83)>x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = INT32_MAX;
	uint64_t x90 = UINT64_MAX;
	uint16_t x91 = 557U;
	static volatile int32_t x92 = 2;
	volatile int32_t t19 = 22414295;

    t19 = (((x89+x90)/x91)>x92);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x94 = -1LL;
	volatile uint16_t x95 = UINT16_MAX;
	static int16_t x96 = INT16_MAX;

    t20 = (((x93+x94)/x95)>x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x99 = -1;
	int8_t x100 = INT8_MIN;

    t21 = (((x97+x98)/x99)>x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x102 = UINT8_MAX;
	static int64_t x103 = INT64_MIN;
	int64_t x104 = -5453361643350LL;
	int32_t t22 = 1;

    t22 = (((x101+x102)/x103)>x104);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = 0U;
	static uint32_t x106 = 24690U;
	static int16_t x107 = INT16_MIN;
	static uint32_t x108 = 0U;
	int32_t t23 = 17;

    t23 = (((x105+x106)/x107)>x108);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MAX;
	int16_t x111 = -1;
	int16_t x112 = -1;
	int32_t t24 = -240;

    t24 = (((x109+x110)/x111)>x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = -1LL;
	static int8_t x114 = 1;
	int16_t x115 = 4;
	uint32_t x116 = 23421U;

    t25 = (((x113+x114)/x115)>x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = 0U;
	int32_t x118 = -38171;
	uint16_t x119 = 3221U;
	int8_t x120 = -10;
	int32_t t26 = 2539;

    t26 = (((x117+x118)/x119)>x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x121 = INT8_MIN;
	volatile uint16_t x123 = 141U;
	volatile uint16_t x124 = 170U;

    t27 = (((x121+x122)/x123)>x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x125 = 0U;
	static int16_t x126 = INT16_MAX;
	static volatile uint64_t x127 = 211LLU;
	int32_t x128 = INT32_MIN;
	int32_t t28 = -2110;

    t28 = (((x125+x126)/x127)>x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = 11;
	int8_t x131 = -1;
	int32_t x132 = 127331664;
	static int32_t t29 = 396127297;

    t29 = (((x129+x130)/x131)>x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x133 = UINT64_MAX;
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MAX;
	int8_t x136 = -2;
	volatile int32_t t30 = 1060544854;

    t30 = (((x133+x134)/x135)>x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = -1LL;
	int8_t x143 = INT8_MAX;
	volatile int32_t x144 = INT32_MIN;
	int32_t t31 = -1033011560;

    t31 = (((x141+x142)/x143)>x144);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x145 = 0U;
	volatile uint16_t x146 = UINT16_MAX;
	static volatile int32_t x148 = -1;
	static volatile int32_t t32 = 542;

    t32 = (((x145+x146)/x147)>x148);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x149 = UINT32_MAX;
	static uint16_t x150 = 2U;
	int64_t x151 = -2LL;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t33 = -1;

    t33 = (((x149+x150)/x151)>x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x153 = INT32_MIN;
	static int8_t x156 = -1;
	volatile int32_t t34 = -1;

    t34 = (((x153+x154)/x155)>x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x157 = 2834U;
	int64_t x158 = 177LL;
	int32_t x159 = INT32_MIN;
	volatile int8_t x160 = INT8_MAX;
	int32_t t35 = 47017;

    t35 = (((x157+x158)/x159)>x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	int16_t x162 = INT16_MAX;
	static int64_t x163 = -1LL;
	static uint16_t x164 = 41U;
	static int32_t t36 = -167;

    t36 = (((x161+x162)/x163)>x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = INT8_MIN;
	static uint8_t x166 = UINT8_MAX;
	volatile int32_t x167 = 12191870;
	int16_t x168 = INT16_MIN;
	int32_t t37 = -77806270;

    t37 = (((x165+x166)/x167)>x168);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x169 = UINT16_MAX;
	int8_t x170 = 1;
	uint8_t x171 = 2U;
	uint32_t x172 = 372715U;
	static int32_t t38 = 22;

    t38 = (((x169+x170)/x171)>x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x174 = 995333437349LL;
	int16_t x175 = INT16_MAX;
	volatile int8_t x176 = 12;

    t39 = (((x173+x174)/x175)>x176);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x177 = 0;
	int64_t x180 = INT64_MAX;
	volatile int32_t t40 = -44657;

    t40 = (((x177+x178)/x179)>x180);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x181 = 12485563U;
	volatile int16_t x182 = INT16_MIN;
	int32_t t41 = 1;

    t41 = (((x181+x182)/x183)>x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x185 = 7670724867850859LLU;
	static volatile int32_t x186 = INT32_MIN;
	int32_t x187 = -1;
	int32_t t42 = 3270605;

    t42 = (((x185+x186)/x187)>x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x194 = 0U;
	int64_t x195 = INT64_MIN;
	volatile int16_t x196 = INT16_MIN;
	static volatile int32_t t43 = -5;

    t43 = (((x193+x194)/x195)>x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x197 = 126;
	int32_t x199 = -586;
	static volatile int32_t t44 = -38404;

    t44 = (((x197+x198)/x199)>x200);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x201 = -1;
	int32_t t45 = 1;

    t45 = (((x201+x202)/x203)>x204);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 1U;
	static volatile int32_t t46 = 3843;

    t46 = (((x205+x206)/x207)>x208);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = -55;
	uint8_t x210 = 11U;
	static uint8_t x211 = 28U;
	volatile uint8_t x212 = 5U;
	static volatile int32_t t47 = -26038268;

    t47 = (((x209+x210)/x211)>x212);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x218 = 4981;
	int16_t x219 = -1;
	static uint64_t x220 = 1382078444704119948LLU;

    t48 = (((x217+x218)/x219)>x220);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x226 = 205719641103022281LLU;
	int8_t x227 = INT8_MIN;
	int64_t x228 = 271004274245704LL;
	int32_t t49 = -5602389;

    t49 = (((x225+x226)/x227)>x228);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x230 = 419415211291LLU;
	int16_t x232 = INT16_MIN;
	volatile int32_t t50 = -8;

    t50 = (((x229+x230)/x231)>x232);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x234 = 96151154456095LL;
	uint16_t x235 = UINT16_MAX;

    t51 = (((x233+x234)/x235)>x236);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x237 = 0U;
	int16_t x238 = -1;
	volatile uint16_t x239 = 1759U;

    t52 = (((x237+x238)/x239)>x240);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x241 = -14384213327LL;

    t53 = (((x241+x242)/x243)>x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x250 = 112417702236381LLU;
	int32_t x251 = -1;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t54 = -890578603;

    t54 = (((x249+x250)/x251)>x252);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x253 = INT16_MAX;
	uint64_t x254 = 18304589903797356LLU;
	static int64_t x255 = INT64_MIN;
	static int16_t x256 = -440;
	int32_t t55 = -14;

    t55 = (((x253+x254)/x255)>x256);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x257 = INT16_MIN;
	int64_t x259 = INT64_MIN;

    t56 = (((x257+x258)/x259)>x260);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x261 = INT32_MIN;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = INT32_MAX;
	int32_t x264 = -1;
	int32_t t57 = 1325;

    t57 = (((x261+x262)/x263)>x264);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x265 = INT64_MAX;
	int32_t x266 = -11265896;
	uint64_t x268 = 37127LLU;
	int32_t t58 = 4703131;

    t58 = (((x265+x266)/x267)>x268);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x269 = 4183575474067114LLU;
	int16_t x270 = -2075;
	uint64_t x271 = UINT64_MAX;
	static int64_t x272 = 471632655227167LL;
	int32_t t59 = -117171747;

    t59 = (((x269+x270)/x271)>x272);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x274 = 433449LL;
	volatile int32_t x275 = INT32_MAX;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t60 = -3746889;

    t60 = (((x273+x274)/x275)>x276);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x278 = INT8_MAX;
	static int32_t x279 = INT32_MIN;
	volatile int64_t x280 = -102780LL;
	volatile int32_t t61 = -583;

    t61 = (((x277+x278)/x279)>x280);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x281 = 2U;
	uint32_t x282 = UINT32_MAX;
	static uint16_t x283 = 4U;
	static int64_t x284 = -1LL;
	volatile int32_t t62 = 13281;

    t62 = (((x281+x282)/x283)>x284);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = INT16_MIN;
	uint16_t x286 = 1466U;
	static volatile int64_t x287 = -1LL;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t63 = 31985;

    t63 = (((x285+x286)/x287)>x288);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x289 = 37U;
	int16_t x290 = -1;
	int32_t x291 = 31187;
	int32_t x292 = -1;
	volatile int32_t t64 = -3259;

    t64 = (((x289+x290)/x291)>x292);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x293 = -11613944513LL;
	uint16_t x294 = 1U;
	int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	static int32_t t65 = 20;

    t65 = (((x293+x294)/x295)>x296);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x297 = INT8_MAX;
	int8_t x298 = -7;
	static int64_t x299 = -1LL;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t66 = 15177;

    t66 = (((x297+x298)/x299)>x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = -7;
	int32_t x303 = -5581;
	int32_t x304 = 10944;

    t67 = (((x301+x302)/x303)>x304);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x305 = 74555040;
	static int8_t x306 = INT8_MAX;
	static int8_t x307 = INT8_MIN;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t68 = -20820390;

    t68 = (((x305+x306)/x307)>x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = -1;
	int8_t x310 = INT8_MAX;
	volatile int32_t t69 = 620;

    t69 = (((x309+x310)/x311)>x312);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x313 = 9U;
	int64_t x314 = 1LL;
	volatile int8_t x315 = INT8_MIN;
	int64_t x316 = -28348533LL;
	volatile int32_t t70 = 329;

    t70 = (((x313+x314)/x315)>x316);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x317 = -15;
	static volatile uint8_t x318 = 0U;
	int8_t x319 = -30;
	uint16_t x320 = 505U;
	volatile int32_t t71 = -6268639;

    t71 = (((x317+x318)/x319)>x320);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x322 = -1;
	int32_t x324 = INT32_MAX;
	static int32_t t72 = 40638;

    t72 = (((x321+x322)/x323)>x324);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x325 = 927U;
	int32_t x326 = -3;
	uint16_t x327 = 110U;
	int64_t x328 = -1LL;
	volatile int32_t t73 = -2519;

    t73 = (((x325+x326)/x327)>x328);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = 15;
	volatile uint8_t x331 = UINT8_MAX;
	uint64_t x332 = 50LLU;
	volatile int32_t t74 = -31855;

    t74 = (((x329+x330)/x331)>x332);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = -1;
	int16_t x335 = -1;
	int32_t t75 = 76196524;

    t75 = (((x333+x334)/x335)>x336);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x337 = 280367353143677LL;
	volatile uint16_t x338 = 413U;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	volatile int32_t t76 = 2314;

    t76 = (((x337+x338)/x339)>x340);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x341 = -15595176;
	int8_t x343 = -1;
	static int32_t t77 = 440;

    t77 = (((x341+x342)/x343)>x344);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = UINT64_MAX;
	static volatile int32_t t78 = 165;

    t78 = (((x345+x346)/x347)>x348);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x349 = 93U;
	volatile int32_t x350 = INT32_MIN;
	volatile uint16_t x351 = 1593U;
	static int64_t x352 = INT64_MIN;
	int32_t t79 = -137582;

    t79 = (((x349+x350)/x351)>x352);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x353 = 29U;
	int16_t x354 = -85;
	volatile uint64_t x355 = 159895LLU;
	uint8_t x356 = 0U;
	int32_t t80 = -13755;

    t80 = (((x353+x354)/x355)>x356);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x357 = 773558U;
	int32_t x358 = 59483;
	static int64_t x359 = -31024LL;
	volatile int32_t t81 = -7;

    t81 = (((x357+x358)/x359)>x360);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x369 = 9673U;
	volatile int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	int32_t t82 = 1046328809;

    t82 = (((x369+x370)/x371)>x372);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x373 = 18U;
	int32_t x374 = 9405;
	int16_t x375 = 3;
	volatile int64_t x376 = -1894154935929402294LL;
	static volatile int32_t t83 = -1215883;

    t83 = (((x373+x374)/x375)>x376);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = 12;
	int8_t x378 = -1;
	volatile int32_t x379 = -1;
	int32_t x380 = -56;
	int32_t t84 = 230;

    t84 = (((x377+x378)/x379)>x380);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x382 = -1;
	uint8_t x383 = UINT8_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t85 = -1876;

    t85 = (((x381+x382)/x383)>x384);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x385 = 0U;
	int8_t x386 = INT8_MAX;
	volatile int32_t t86 = -1926;

    t86 = (((x385+x386)/x387)>x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x390 = -1LL;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = 1;
	volatile int32_t t87 = 132878;

    t87 = (((x389+x390)/x391)>x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x393 = INT16_MAX;
	int32_t x395 = 236147139;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t88 = 274626926;

    t88 = (((x393+x394)/x395)>x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x402 = 30;
	int32_t x403 = -1;
	int16_t x404 = INT16_MIN;

    t89 = (((x401+x402)/x403)>x404);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x405 = 3U;
	uint8_t x406 = 14U;
	int64_t x408 = -50579113667LL;
	int32_t t90 = -18;

    t90 = (((x405+x406)/x407)>x408);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x409 = 4663503U;
	volatile int16_t x410 = INT16_MAX;
	int8_t x411 = 15;
	int64_t x412 = INT64_MAX;
	volatile int32_t t91 = -10429095;

    t91 = (((x409+x410)/x411)>x412);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x413 = INT32_MIN;
	static int64_t x415 = INT64_MAX;
	int64_t x416 = -1LL;
	volatile int32_t t92 = -981252;

    t92 = (((x413+x414)/x415)>x416);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x417 = -1;
	volatile int8_t x418 = INT8_MIN;
	static int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MAX;
	int32_t t93 = -54;

    t93 = (((x417+x418)/x419)>x420);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x425 = 1LL;
	int64_t x427 = 121715LL;
	int32_t x428 = INT32_MAX;
	int32_t t94 = -31;

    t94 = (((x425+x426)/x427)>x428);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x430 = 1U;
	uint8_t x431 = 7U;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t95 = 596105677;

    t95 = (((x429+x430)/x431)>x432);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x438 = 109U;
	static uint32_t x439 = 220551291U;
	int16_t x440 = INT16_MIN;
	volatile int32_t t96 = 12236;

    t96 = (((x437+x438)/x439)>x440);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x441 = -16;
	uint16_t x442 = UINT16_MAX;
	uint32_t x443 = UINT32_MAX;
	static volatile int32_t x444 = 0;
	int32_t t97 = 1021;

    t97 = (((x441+x442)/x443)>x444);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x449 = -1;
	uint8_t x450 = UINT8_MAX;
	uint64_t x451 = UINT64_MAX;
	int64_t x452 = INT64_MAX;
	static volatile int32_t t98 = 2;

    t98 = (((x449+x450)/x451)>x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x453 = 2104091164LL;
	static int8_t x454 = 1;
	int16_t x455 = -123;
	int8_t x456 = 2;
	volatile int32_t t99 = 2;

    t99 = (((x453+x454)/x455)>x456);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x457 = -5;
	int8_t x458 = -3;
	static uint8_t x459 = UINT8_MAX;
	static uint32_t x460 = UINT32_MAX;
	int32_t t100 = -1;

    t100 = (((x457+x458)/x459)>x460);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x466 = 9477U;
	int8_t x467 = 17;
	volatile int8_t x468 = 3;

    t101 = (((x465+x466)/x467)>x468);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x469 = INT32_MIN;
	volatile int8_t x471 = INT8_MIN;
	int16_t x472 = -14;

    t102 = (((x469+x470)/x471)>x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x473 = 52U;
	static uint32_t x474 = UINT32_MAX;
	int32_t x475 = INT32_MIN;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t103 = -24783217;

    t103 = (((x473+x474)/x475)>x476);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x477 = -1LL;
	uint64_t x478 = 18033369299LLU;
	static volatile int8_t x479 = INT8_MAX;
	int32_t x480 = 56;
	static int32_t t104 = -1;

    t104 = (((x477+x478)/x479)>x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x481 = 86439370380107325LLU;
	uint32_t x482 = UINT32_MAX;
	static volatile uint32_t x483 = UINT32_MAX;
	uint16_t x484 = UINT16_MAX;
	static int32_t t105 = 98763;

    t105 = (((x481+x482)/x483)>x484);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x486 = -495691842;
	static int8_t x487 = INT8_MAX;
	int32_t x488 = -12678919;
	volatile int32_t t106 = -6792;

    t106 = (((x485+x486)/x487)>x488);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	int64_t x492 = -193LL;
	static int32_t t107 = -18457;

    t107 = (((x489+x490)/x491)>x492);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	int16_t x494 = INT16_MIN;
	uint32_t x495 = 331U;
	int32_t t108 = 1;

    t108 = (((x493+x494)/x495)>x496);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x509 = -1;
	uint16_t x511 = 16U;
	uint32_t x512 = 194U;
	int32_t t109 = 6;

    t109 = (((x509+x510)/x511)>x512);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x514 = UINT64_MAX;
	uint16_t x515 = 9576U;
	static uint64_t x516 = 128762779LLU;
	static int32_t t110 = 1;

    t110 = (((x513+x514)/x515)>x516);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x518 = 599925U;
	int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MAX;
	static int32_t t111 = -30298;

    t111 = (((x517+x518)/x519)>x520);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x521 = -23LL;
	uint64_t x523 = UINT64_MAX;
	volatile int64_t x524 = -1LL;
	int32_t t112 = -51386;

    t112 = (((x521+x522)/x523)>x524);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x525 = 3974951582224LL;
	int32_t x526 = -8642;
	int64_t x527 = INT64_MAX;
	int32_t t113 = -263388546;

    t113 = (((x525+x526)/x527)>x528);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x529 = 744217540;
	uint64_t x531 = 93669032483457035LLU;
	uint32_t x532 = UINT32_MAX;
	volatile int32_t t114 = -1563;

    t114 = (((x529+x530)/x531)>x532);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x533 = 43747LLU;
	int32_t x534 = INT32_MIN;
	uint16_t x535 = UINT16_MAX;
	uint16_t x536 = 1824U;
	volatile int32_t t115 = -18008;

    t115 = (((x533+x534)/x535)>x536);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x538 = INT8_MAX;
	int16_t x539 = -1;
	int64_t x540 = -1LL;
	volatile int32_t t116 = 14309601;

    t116 = (((x537+x538)/x539)>x540);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x545 = INT32_MAX;
	uint64_t x546 = 2450330784244LLU;
	uint8_t x547 = 1U;
	int64_t x548 = INT64_MIN;
	volatile int32_t t117 = 5012726;

    t117 = (((x545+x546)/x547)>x548);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x557 = 3;
	int64_t x558 = -1LL;
	int16_t x559 = -171;
	uint8_t x560 = 35U;
	int32_t t118 = 575895;

    t118 = (((x557+x558)/x559)>x560);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x561 = 471422621U;
	int8_t x562 = INT8_MIN;
	volatile int32_t x563 = 520;
	int32_t t119 = -577658162;

    t119 = (((x561+x562)/x563)>x564);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x565 = 213LL;
	uint16_t x566 = UINT16_MAX;
	uint64_t x567 = 50693537467LLU;
	volatile uint8_t x568 = 63U;
	static volatile int32_t t120 = -975543330;

    t120 = (((x565+x566)/x567)>x568);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x569 = 226950252117411631LLU;
	static uint16_t x570 = 14255U;
	int64_t x571 = INT64_MIN;
	int8_t x572 = 1;
	int32_t t121 = 6842;

    t121 = (((x569+x570)/x571)>x572);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x573 = INT16_MIN;
	static volatile uint16_t x574 = 1U;
	int16_t x575 = 23;
	uint32_t x576 = 52244719U;
	volatile int32_t t122 = 2593;

    t122 = (((x573+x574)/x575)>x576);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x577 = -1;
	volatile int32_t t123 = 4;

    t123 = (((x577+x578)/x579)>x580);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x581 = 44;
	int8_t x582 = -1;
	uint64_t x583 = 34498035418138955LLU;
	int64_t x584 = -1LL;
	static volatile int32_t t124 = 4;

    t124 = (((x581+x582)/x583)>x584);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x586 = UINT64_MAX;
	int32_t x587 = INT32_MAX;
	int32_t t125 = 3405;

    t125 = (((x585+x586)/x587)>x588);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x589 = 945539LLU;
	volatile uint16_t x591 = UINT16_MAX;
	int16_t x592 = -1;
	int32_t t126 = -167062309;

    t126 = (((x589+x590)/x591)>x592);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x593 = -1860;
	volatile uint8_t x594 = UINT8_MAX;
	static int16_t x595 = 8;
	int16_t x596 = -103;
	int32_t t127 = 701820136;

    t127 = (((x593+x594)/x595)>x596);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x597 = UINT16_MAX;
	uint16_t x598 = UINT16_MAX;
	int8_t x599 = 1;

    t128 = (((x597+x598)/x599)>x600);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x601 = INT8_MAX;
	volatile uint8_t x602 = UINT8_MAX;
	static volatile int8_t x603 = INT8_MIN;
	int64_t x604 = -45979027457LL;
	int32_t t129 = 16452385;

    t129 = (((x601+x602)/x603)>x604);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x605 = -1;
	volatile uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MIN;
	int8_t x608 = -1;
	volatile int32_t t130 = -1782;

    t130 = (((x605+x606)/x607)>x608);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x614 = 15U;
	static int64_t x615 = 441420018619LL;
	int8_t x616 = -1;
	static int32_t t131 = 430;

    t131 = (((x613+x614)/x615)>x616);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x621 = INT8_MIN;
	int64_t x622 = -185LL;
	int8_t x623 = INT8_MIN;
	static int16_t x624 = -1;
	int32_t t132 = -24247855;

    t132 = (((x621+x622)/x623)>x624);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x625 = 163960;
	int8_t x626 = -1;
	volatile int16_t x628 = -1;
	volatile int32_t t133 = -32661;

    t133 = (((x625+x626)/x627)>x628);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x630 = 5U;
	static volatile uint64_t x631 = 5476867LLU;
	int32_t t134 = -13382;

    t134 = (((x629+x630)/x631)>x632);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x635 = 1;
	static volatile uint16_t x636 = UINT16_MAX;

    t135 = (((x633+x634)/x635)>x636);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x637 = -1;
	static uint64_t x638 = UINT64_MAX;
	uint8_t x639 = UINT8_MAX;
	int16_t x640 = -992;
	volatile int32_t t136 = -864962;

    t136 = (((x637+x638)/x639)>x640);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x641 = UINT64_MAX;
	volatile int32_t x642 = INT32_MIN;
	uint32_t x643 = UINT32_MAX;
	int16_t x644 = INT16_MIN;
	static int32_t t137 = -3050;

    t137 = (((x641+x642)/x643)>x644);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x645 = 19U;
	uint64_t x646 = UINT64_MAX;
	int64_t x647 = INT64_MAX;
	volatile int32_t t138 = 62954;

    t138 = (((x645+x646)/x647)>x648);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x651 = 1823U;
	int32_t t139 = -96437761;

    t139 = (((x649+x650)/x651)>x652);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x653 = 22913U;
	int8_t x654 = 13;
	static int32_t x655 = -774;
	volatile uint32_t x656 = 122U;
	int32_t t140 = -13932263;

    t140 = (((x653+x654)/x655)>x656);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x658 = 3482LLU;
	static int8_t x659 = 3;
	int32_t x660 = 158;
	volatile int32_t t141 = 7;

    t141 = (((x657+x658)/x659)>x660);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x665 = 148300162418555LLU;
	int8_t x666 = INT8_MIN;
	int16_t x667 = -1;
	static int32_t t142 = 0;

    t142 = (((x665+x666)/x667)>x668);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x669 = INT32_MAX;
	int16_t x670 = INT16_MIN;
	static volatile uint32_t x672 = 1U;

    t143 = (((x669+x670)/x671)>x672);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x673 = UINT64_MAX;
	int32_t x674 = -1;
	uint64_t x675 = 4762608781LLU;
	volatile int32_t t144 = -71;

    t144 = (((x673+x674)/x675)>x676);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x677 = UINT16_MAX;
	static int16_t x680 = INT16_MAX;
	int32_t t145 = -4762;

    t145 = (((x677+x678)/x679)>x680);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x683 = UINT32_MAX;
	int32_t t146 = 296055686;

    t146 = (((x681+x682)/x683)>x684);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x687 = INT32_MIN;
	static uint8_t x688 = 10U;
	volatile int32_t t147 = -38200;

    t147 = (((x685+x686)/x687)>x688);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x694 = -1;
	int32_t x695 = INT32_MIN;
	volatile int32_t x696 = INT32_MIN;
	int32_t t148 = 4084527;

    t148 = (((x693+x694)/x695)>x696);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x702 = INT8_MAX;
	int32_t x703 = INT32_MAX;

    t149 = (((x701+x702)/x703)>x704);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x705 = -1LL;
	int32_t x706 = 0;
	uint32_t x707 = 422797U;
	int16_t x708 = 2;
	volatile int32_t t150 = 116;

    t150 = (((x705+x706)/x707)>x708);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x709 = INT16_MIN;
	uint64_t x710 = UINT64_MAX;
	volatile int16_t x711 = 372;
	int8_t x712 = -1;

    t151 = (((x709+x710)/x711)>x712);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x718 = INT32_MIN;
	uint32_t x719 = 4U;
	int16_t x720 = -1;
	int32_t t152 = -6225244;

    t152 = (((x717+x718)/x719)>x720);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x725 = -3730723566LL;
	uint16_t x726 = 69U;
	static uint32_t x727 = 360U;
	int16_t x728 = 0;
	volatile int32_t t153 = -1;

    t153 = (((x725+x726)/x727)>x728);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x729 = INT16_MIN;
	static int8_t x730 = -1;
	static int16_t x731 = INT16_MIN;
	int32_t x732 = INT32_MIN;
	static int32_t t154 = 29313;

    t154 = (((x729+x730)/x731)>x732);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x734 = 1490989540275774384LL;
	int32_t x735 = INT32_MIN;
	uint32_t x736 = UINT32_MAX;
	volatile int32_t t155 = -6;

    t155 = (((x733+x734)/x735)>x736);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x737 = UINT64_MAX;
	static volatile int16_t x738 = INT16_MIN;
	uint8_t x739 = 1U;
	int32_t x740 = INT32_MIN;
	int32_t t156 = 3;

    t156 = (((x737+x738)/x739)>x740);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x742 = -1;
	int32_t x743 = -1;
	int16_t x744 = INT16_MIN;
	volatile int32_t t157 = -5695687;

    t157 = (((x741+x742)/x743)>x744);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x745 = 1865128551LLU;
	int8_t x746 = INT8_MIN;
	int32_t x747 = -1;
	int64_t x748 = 540899LL;
	int32_t t158 = 0;

    t158 = (((x745+x746)/x747)>x748);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x753 = -1LL;
	volatile uint16_t x754 = UINT16_MAX;
	static volatile uint64_t x755 = UINT64_MAX;
	int8_t x756 = -14;
	volatile int32_t t159 = 11649850;

    t159 = (((x753+x754)/x755)>x756);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x757 = INT64_MAX;
	static int8_t x759 = 14;
	int16_t x760 = INT16_MAX;
	static volatile int32_t t160 = -7586841;

    t160 = (((x757+x758)/x759)>x760);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x761 = -9351;
	int8_t x764 = INT8_MIN;
	volatile int32_t t161 = 22842;

    t161 = (((x761+x762)/x763)>x764);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x765 = 12686806U;
	static uint16_t x766 = 64U;
	static uint64_t x767 = 858035517LLU;
	int16_t x768 = 0;
	int32_t t162 = 20;

    t162 = (((x765+x766)/x767)>x768);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x769 = 78U;
	int16_t x770 = -1;
	int8_t x771 = INT8_MIN;
	int64_t x772 = -1LL;
	volatile int32_t t163 = 6704428;

    t163 = (((x769+x770)/x771)>x772);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x773 = 1;
	uint64_t x775 = 129506153323602982LLU;
	static uint16_t x776 = UINT16_MAX;
	int32_t t164 = -435038;

    t164 = (((x773+x774)/x775)>x776);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x778 = INT8_MAX;
	int64_t x779 = -30252LL;
	volatile int32_t t165 = -603915;

    t165 = (((x777+x778)/x779)>x780);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x781 = 7348880;
	uint64_t x783 = UINT64_MAX;
	int32_t x784 = -1;
	volatile int32_t t166 = 227698;

    t166 = (((x781+x782)/x783)>x784);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x785 = -11;
	int64_t x786 = -1LL;
	int32_t x787 = -254;
	int64_t x788 = -1LL;
	volatile int32_t t167 = -7427833;

    t167 = (((x785+x786)/x787)>x788);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x790 = INT32_MAX;
	int32_t x792 = INT32_MIN;
	int32_t t168 = 2869;

    t168 = (((x789+x790)/x791)>x792);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x793 = INT32_MIN;
	static int32_t x796 = INT32_MIN;

    t169 = (((x793+x794)/x795)>x796);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x801 = UINT32_MAX;
	static int16_t x803 = INT16_MIN;
	int32_t x804 = -45;
	int32_t t170 = -14;

    t170 = (((x801+x802)/x803)>x804);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x805 = INT64_MIN;
	static int32_t x806 = 322;
	int16_t x807 = 5;
	int8_t x808 = 0;
	int32_t t171 = 21361;

    t171 = (((x805+x806)/x807)>x808);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x809 = UINT16_MAX;
	int32_t x810 = 286733;
	static int64_t x811 = 4103459LL;
	uint64_t x812 = 20283533LLU;

    t172 = (((x809+x810)/x811)>x812);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x813 = INT16_MAX;
	volatile uint16_t x814 = 5456U;
	static int8_t x815 = INT8_MAX;
	volatile uint16_t x816 = 4U;
	volatile int32_t t173 = 3562;

    t173 = (((x813+x814)/x815)>x816);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x817 = 143181214834668969LL;
	int8_t x818 = -46;
	int16_t x820 = -1;
	volatile int32_t t174 = -546;

    t174 = (((x817+x818)/x819)>x820);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x821 = UINT64_MAX;
	static int64_t x822 = INT64_MIN;
	int8_t x824 = INT8_MIN;
	volatile int32_t t175 = -572885028;

    t175 = (((x821+x822)/x823)>x824);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x825 = INT32_MIN;
	int32_t x826 = 142607;
	int16_t x827 = -1;
	static volatile int8_t x828 = 59;

    t176 = (((x825+x826)/x827)>x828);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x829 = -1;
	uint16_t x831 = 3202U;
	volatile uint32_t x832 = 83U;

    t177 = (((x829+x830)/x831)>x832);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x833 = 79;
	static int8_t x834 = -5;
	static int32_t t178 = -2301;

    t178 = (((x833+x834)/x835)>x836);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x837 = INT64_MIN;
	static int64_t x839 = -1LL;
	int64_t x840 = INT64_MIN;
	int32_t t179 = 18;

    t179 = (((x837+x838)/x839)>x840);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x841 = -824173040213LL;
	volatile uint8_t x842 = 43U;
	uint64_t x843 = 1899197240070044319LLU;
	int32_t x844 = -1;
	static int32_t t180 = 3350;

    t180 = (((x841+x842)/x843)>x844);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x846 = 1010;
	static int16_t x847 = -431;
	static volatile uint8_t x848 = 52U;
	static volatile int32_t t181 = 6;

    t181 = (((x845+x846)/x847)>x848);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x849 = 7U;
	static int64_t x851 = -13583789374680231LL;
	int64_t x852 = INT64_MIN;
	volatile int32_t t182 = 5392;

    t182 = (((x849+x850)/x851)>x852);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x853 = -123022400;
	volatile int8_t x854 = INT8_MAX;
	int64_t x855 = -60368369301LL;
	int16_t x856 = 0;
	int32_t t183 = -1337879;

    t183 = (((x853+x854)/x855)>x856);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x857 = INT8_MIN;
	static volatile int8_t x858 = 1;
	volatile int8_t x859 = INT8_MIN;
	uint8_t x860 = 1U;
	volatile int32_t t184 = -2309274;

    t184 = (((x857+x858)/x859)>x860);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x861 = INT64_MIN;
	uint64_t x862 = 878362LLU;
	uint64_t x864 = 2167209215717LLU;

    t185 = (((x861+x862)/x863)>x864);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x865 = 47LLU;
	static int64_t x867 = INT64_MIN;
	volatile uint64_t x868 = UINT64_MAX;
	volatile int32_t t186 = -610808;

    t186 = (((x865+x866)/x867)>x868);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x869 = INT16_MIN;
	int8_t x871 = -1;
	int32_t t187 = -79;

    t187 = (((x869+x870)/x871)>x872);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x873 = 200U;
	int64_t x874 = INT64_MIN;
	int32_t x875 = 28846;
	static uint16_t x876 = 3696U;
	static int32_t t188 = 16461796;

    t188 = (((x873+x874)/x875)>x876);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x877 = 0U;
	static uint8_t x879 = UINT8_MAX;
	volatile uint8_t x880 = UINT8_MAX;
	volatile int32_t t189 = 1;

    t189 = (((x877+x878)/x879)>x880);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x881 = INT16_MIN;
	int16_t x882 = -1;
	int16_t x883 = -1;
	volatile int64_t x884 = -56712355738981LL;
	volatile int32_t t190 = 70478;

    t190 = (((x881+x882)/x883)>x884);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x885 = 52U;
	static uint32_t x886 = UINT32_MAX;
	int64_t x887 = 20688LL;
	uint64_t x888 = 12LLU;

    t191 = (((x885+x886)/x887)>x888);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x897 = 46;
	volatile int64_t x898 = INT64_MIN;
	static int16_t x899 = -3;
	static uint32_t x900 = UINT32_MAX;
	volatile int32_t t192 = 8;

    t192 = (((x897+x898)/x899)>x900);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x901 = INT8_MIN;
	uint16_t x902 = 3U;
	int64_t x903 = 429615749414795LL;
	volatile uint16_t x904 = UINT16_MAX;
	volatile int32_t t193 = -869917353;

    t193 = (((x901+x902)/x903)>x904);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x905 = INT64_MIN;
	uint8_t x906 = 20U;
	int32_t x907 = INT32_MIN;
	int64_t x908 = INT64_MAX;
	volatile int32_t t194 = 1086;

    t194 = (((x905+x906)/x907)>x908);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x909 = INT64_MIN;
	static int16_t x910 = INT16_MAX;
	volatile int64_t x911 = INT64_MIN;
	int32_t t195 = -607;

    t195 = (((x909+x910)/x911)>x912);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x913 = INT8_MAX;
	volatile int8_t x914 = -1;
	int8_t x915 = INT8_MIN;
	int16_t x916 = -1;
	volatile int32_t t196 = 7377550;

    t196 = (((x913+x914)/x915)>x916);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x917 = UINT32_MAX;
	uint32_t x919 = 15U;
	uint32_t x920 = 2973361U;
	int32_t t197 = -828;

    t197 = (((x917+x918)/x919)>x920);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x921 = INT16_MAX;
	int8_t x922 = 0;
	int8_t x923 = -28;
	static int8_t x924 = -1;
	volatile int32_t t198 = 117441;

    t198 = (((x921+x922)/x923)>x924);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x926 = 41328902452863676LLU;
	int16_t x928 = INT16_MIN;
	static int32_t t199 = -1;

    t199 = (((x925+x926)/x927)>x928);

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

