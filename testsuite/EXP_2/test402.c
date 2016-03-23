
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

int64_t x4 = -1LL;
int32_t x15 = 319271021;
uint16_t x25 = UINT16_MAX;
volatile int16_t x27 = INT16_MIN;
uint8_t x28 = 41U;
uint8_t x33 = UINT8_MAX;
int16_t x35 = -1;
int32_t t5 = 4;
volatile int32_t x41 = -1;
int64_t x44 = INT64_MIN;
int16_t x45 = INT16_MIN;
volatile int32_t t10 = 20101740;
volatile int32_t x68 = -584849724;
volatile int32_t t12 = 1350738;
volatile int8_t x77 = INT8_MAX;
int32_t t14 = -122;
int16_t x83 = 1121;
static int16_t x84 = INT16_MIN;
int8_t x100 = INT8_MIN;
int32_t x110 = -1;
uint8_t x111 = UINT8_MAX;
volatile int16_t x112 = INT16_MIN;
int8_t x121 = INT8_MIN;
uint64_t x135 = 7118975LLU;
volatile int8_t x153 = 0;
volatile uint64_t x160 = 191136LLU;
static int32_t t28 = 606028474;
volatile int16_t x161 = INT16_MAX;
int32_t x163 = -1;
volatile uint8_t x173 = 1U;
int64_t x174 = INT64_MAX;
int8_t x178 = INT8_MIN;
int8_t x179 = -1;
volatile int32_t t31 = 1;
int32_t x182 = 201;
uint16_t x187 = 13U;
static int64_t x188 = 605803LL;
int32_t x189 = -1;
int32_t t34 = 82;
static uint8_t x198 = 0U;
int16_t x204 = -1;
volatile int16_t x212 = INT16_MAX;
static volatile uint16_t x222 = 1515U;
int8_t x224 = INT8_MIN;
int64_t x229 = -1818742738LL;
int32_t t42 = -456061576;
int64_t x238 = -1LL;
static int32_t t46 = -245;
uint16_t x257 = 7930U;
volatile int64_t x261 = INT64_MIN;
int8_t x264 = 53;
volatile int32_t t49 = -948525;
volatile int16_t x280 = INT16_MIN;
static volatile int32_t t52 = -41;
static uint8_t x286 = 3U;
int16_t x292 = 703;
static int64_t x297 = -45724LL;
int32_t t56 = 2;
int32_t x305 = -1;
int32_t t57 = -3025;
volatile int16_t x309 = INT16_MIN;
uint64_t x310 = 58877LLU;
int8_t x315 = -23;
static int32_t x320 = INT32_MAX;
int32_t t61 = -1;
volatile int32_t x332 = -1;
volatile int32_t t65 = -613616246;
uint64_t x349 = 459067LLU;
int32_t x359 = INT32_MAX;
int64_t x366 = -1LL;
volatile uint64_t x371 = 20991950LLU;
static int64_t x372 = INT64_MIN;
int32_t t70 = -3906;
int16_t x379 = 2;
int64_t x396 = -1LL;
int32_t t74 = 48;
int16_t x405 = INT16_MAX;
static int8_t x413 = -12;
uint8_t x414 = UINT8_MAX;
static int64_t x415 = -1LL;
int32_t t78 = 28;
volatile int16_t x417 = INT16_MIN;
volatile int8_t x427 = INT8_MIN;
uint8_t x431 = 2U;
static uint32_t x435 = 434280U;
volatile int16_t x464 = INT16_MAX;
volatile uint16_t x466 = UINT16_MAX;
int64_t x475 = -1LL;
int16_t x485 = 1722;
int32_t x533 = INT32_MIN;
static int8_t x534 = -1;
int32_t x542 = INT32_MIN;
uint64_t x543 = 68526227445607LLU;
volatile int32_t t95 = -160614314;
int16_t x551 = INT16_MIN;
int8_t x552 = 3;
int32_t t97 = 8;
static int64_t x569 = 41353LL;
volatile int32_t t99 = 114659844;
volatile int64_t x573 = 74439513600261LL;
static int16_t x587 = INT16_MIN;
static uint64_t x597 = 106031345560257LLU;
uint32_t x605 = 105U;
static volatile int32_t t104 = 1841;
static int16_t x609 = INT16_MIN;
int32_t x612 = INT32_MAX;
int8_t x617 = INT8_MIN;
uint64_t x618 = 435LLU;
static volatile uint32_t x619 = 145U;
volatile int32_t x620 = 207823170;
int64_t x632 = -810522426LL;
int64_t x637 = INT64_MIN;
int64_t x640 = INT64_MIN;
uint32_t x645 = 9286U;
int32_t t111 = -411;
int64_t x654 = INT64_MIN;
int8_t x666 = -1;
int32_t x681 = -158;
volatile int32_t t118 = 4;
static uint8_t x696 = 86U;
volatile int64_t x703 = 407612LL;
static volatile uint64_t x709 = 62039LLU;
static int32_t t125 = -34569;
volatile int32_t x715 = -113;
volatile int64_t x729 = INT64_MIN;
volatile uint64_t x730 = UINT64_MAX;
int32_t x731 = -2;
int32_t x732 = INT32_MAX;
int32_t x733 = -1;
uint8_t x736 = 4U;
int32_t t129 = -85716;
uint8_t x739 = 44U;
volatile int32_t x741 = -1;
uint16_t x757 = 7595U;
int16_t x772 = INT16_MAX;
uint64_t x778 = 3LLU;
uint8_t x779 = UINT8_MAX;
volatile int32_t t135 = -2924;
static int16_t x795 = 22;
int32_t x809 = -1;
volatile int64_t x812 = INT64_MAX;
volatile int32_t t138 = 725941;
int32_t x829 = INT32_MIN;
static int32_t t143 = -1;
static int16_t x847 = INT16_MIN;
int32_t x850 = -733674246;
static volatile int64_t x852 = INT64_MIN;
int32_t t145 = 531991;
uint64_t x869 = 81LLU;
int8_t x871 = INT8_MIN;
static uint64_t x875 = UINT64_MAX;
static volatile int32_t t149 = -395021968;
static int64_t x884 = INT64_MAX;
int16_t x885 = INT16_MAX;
int64_t x887 = -1LL;
volatile uint64_t x890 = 316639883LLU;
volatile int8_t x898 = 0;
volatile int32_t t155 = 41;
volatile int32_t t156 = 29652;
uint64_t x912 = UINT64_MAX;
volatile int8_t x935 = INT8_MIN;
volatile int32_t t158 = -22161;
volatile int16_t x937 = INT16_MIN;
uint64_t x954 = 2517410473LLU;
uint8_t x957 = 19U;
volatile int16_t x959 = -1701;
int32_t t165 = 1;
uint64_t x970 = 7002LLU;
static uint32_t x973 = 273U;
int64_t x975 = 426791728278LL;
uint32_t x976 = UINT32_MAX;
volatile int32_t t168 = -22409;
static int8_t x977 = -1;
uint64_t x980 = 255816619664787210LLU;
static uint8_t x983 = 6U;
static uint16_t x985 = 402U;
uint8_t x990 = 17U;
int16_t x1002 = -31;
int8_t x1006 = -1;
int32_t t176 = 235;
int16_t x1025 = -1;
int16_t x1029 = -200;
uint32_t x1048 = 41287U;
volatile int32_t t183 = -1555;
int32_t t184 = 6816;
int16_t x1069 = INT16_MIN;
int64_t x1071 = 56LL;
volatile int32_t t186 = -2;
static int32_t x1077 = INT32_MIN;
int8_t x1078 = -1;
static volatile int8_t x1087 = INT8_MIN;
static uint8_t x1089 = 1U;
int16_t x1092 = -1;
static int64_t x1097 = -9LL;
int16_t x1102 = INT16_MAX;
int64_t x1103 = 47LL;
int16_t x1109 = -1;
uint64_t x1117 = 291LLU;
volatile int8_t x1120 = INT8_MIN;
int32_t t195 = -27;
volatile int64_t x1131 = 8282886LL;
int32_t t197 = 269195321;
static int16_t x1133 = 6242;
uint64_t x1137 = 0LLU;


void f0(void) {
    	int64_t x1 = -1LL;
	int8_t x2 = INT8_MIN;
	int64_t x3 = -14455447179LL;
	int32_t t0 = 1;

    t0 = ((x1+(x2*x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 1U;
	volatile int16_t x6 = 8;
	uint8_t x7 = 2U;
	volatile int64_t x8 = 1456449894LL;
	volatile int32_t t1 = -24;

    t1 = ((x5+(x6*x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 1U;
	volatile uint64_t x11 = 89285435089245991LLU;
	int32_t x12 = 31327709;
	volatile int32_t t2 = 18;

    t2 = ((x9+(x10*x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 51U;
	uint32_t x14 = 867962787U;
	volatile int16_t x16 = INT16_MIN;
	static int32_t t3 = 1402;

    t3 = ((x13+(x14*x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x26 = 14U;
	volatile int32_t t4 = -133;

    t4 = ((x25+(x26*x27))<=x28);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x34 = INT16_MIN;
	static uint16_t x36 = UINT16_MAX;

    t5 = ((x33+(x34*x35))<=x36);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x37 = UINT8_MAX;
	int16_t x38 = -1;
	int16_t x39 = -1;
	int8_t x40 = -35;
	int32_t t6 = 237439;

    t6 = ((x37+(x38*x39))<=x40);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x42 = INT32_MAX;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t t7 = 801716656;

    t7 = ((x41+(x42*x43))<=x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x46 = -1;
	static uint64_t x47 = 1288972524LLU;
	int8_t x48 = -1;
	static volatile int32_t t8 = -42325251;

    t8 = ((x45+(x46*x47))<=x48);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x49 = 25;
	static uint8_t x50 = 40U;
	uint8_t x51 = 121U;
	static int32_t x52 = -22997745;
	int32_t t9 = -6983802;

    t9 = ((x49+(x50*x51))<=x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x61 = UINT8_MAX;
	volatile int64_t x62 = -1LL;
	uint16_t x63 = UINT16_MAX;
	static int8_t x64 = -1;

    t10 = ((x61+(x62*x63))<=x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x66 = 277362;
	volatile uint8_t x67 = 1U;
	static volatile int32_t t11 = 1;

    t11 = ((x65+(x66*x67))<=x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x69 = UINT16_MAX;
	volatile int8_t x70 = 0;
	int64_t x71 = INT64_MIN;
	volatile int16_t x72 = 0;

    t12 = ((x69+(x70*x71))<=x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x73 = 6U;
	static int16_t x74 = INT16_MAX;
	uint8_t x75 = 0U;
	int32_t x76 = INT32_MIN;
	int32_t t13 = -8283140;

    t13 = ((x73+(x74*x75))<=x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x78 = 1041U;
	static volatile uint32_t x79 = 496U;
	volatile int32_t x80 = INT32_MIN;

    t14 = ((x77+(x78*x79))<=x80);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x81 = 3U;
	int32_t x82 = -1236060;
	int32_t t15 = -50445475;

    t15 = ((x81+(x82*x83))<=x84);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = INT8_MIN;
	int8_t x86 = -1;
	int8_t x87 = 12;
	static int32_t x88 = -1;
	int32_t t16 = 38186;

    t16 = ((x85+(x86*x87))<=x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x93 = INT32_MAX;
	volatile int16_t x94 = INT16_MAX;
	uint32_t x95 = UINT32_MAX;
	int64_t x96 = INT64_MIN;
	static volatile int32_t t17 = 1;

    t17 = ((x93+(x94*x95))<=x96);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x97 = 22;
	uint64_t x98 = 7271036248877LLU;
	int16_t x99 = -1;
	volatile int32_t t18 = -222;

    t18 = ((x97+(x98*x99))<=x100);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x101 = INT64_MIN;
	volatile uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MAX;
	uint64_t x104 = 26825LLU;
	int32_t t19 = 850;

    t19 = ((x101+(x102*x103))<=x104);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x109 = UINT64_MAX;
	volatile int32_t t20 = 54618;

    t20 = ((x109+(x110*x111))<=x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x113 = UINT8_MAX;
	static int64_t x114 = -232LL;
	int8_t x115 = INT8_MIN;
	static int32_t x116 = -1;
	volatile int32_t t21 = -564540472;

    t21 = ((x113+(x114*x115))<=x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x117 = UINT8_MAX;
	volatile int64_t x118 = INT64_MAX;
	uint8_t x119 = 0U;
	volatile uint16_t x120 = UINT16_MAX;
	int32_t t22 = 0;

    t22 = ((x117+(x118*x119))<=x120);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t23 = 854;

    t23 = ((x121+(x122*x123))<=x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x129 = INT8_MIN;
	uint32_t x130 = UINT32_MAX;
	volatile uint16_t x131 = 21330U;
	static uint16_t x132 = 143U;
	volatile int32_t t24 = -7;

    t24 = ((x129+(x130*x131))<=x132);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x133 = 18LLU;
	int32_t x134 = -85;
	volatile uint16_t x136 = 22893U;
	int32_t t25 = 9474668;

    t25 = ((x133+(x134*x135))<=x136);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x145 = 0U;
	volatile int8_t x146 = INT8_MAX;
	int16_t x147 = -1;
	static uint64_t x148 = 32349LLU;
	volatile int32_t t26 = -1095;

    t26 = ((x145+(x146*x147))<=x148);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x154 = INT8_MIN;
	int32_t x155 = -5;
	int64_t x156 = INT64_MAX;
	volatile int32_t t27 = -203933295;

    t27 = ((x153+(x154*x155))<=x156);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x157 = INT16_MIN;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MAX;

    t28 = ((x157+(x158*x159))<=x160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x162 = 3;
	uint16_t x164 = 21U;
	volatile int32_t t29 = 337198;

    t29 = ((x161+(x162*x163))<=x164);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x175 = 0;
	int32_t x176 = INT32_MIN;
	int32_t t30 = -5088;

    t30 = ((x173+(x174*x175))<=x176);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x177 = 0;
	int32_t x180 = -73486650;

    t31 = ((x177+(x178*x179))<=x180);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x181 = -3;
	uint64_t x183 = 231LLU;
	volatile int16_t x184 = INT16_MIN;
	int32_t t32 = 176459;

    t32 = ((x181+(x182*x183))<=x184);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x185 = -1;
	int16_t x186 = INT16_MIN;
	int32_t t33 = 249764448;

    t33 = ((x185+(x186*x187))<=x188);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x190 = -1;
	static int8_t x191 = -1;
	int8_t x192 = INT8_MIN;

    t34 = ((x189+(x190*x191))<=x192);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x193 = 60LLU;
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -318581045240675LL;
	static int64_t x196 = -760247355909524807LL;
	int32_t t35 = 58;

    t35 = ((x193+(x194*x195))<=x196);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x197 = 7727LLU;
	static int8_t x199 = 1;
	uint32_t x200 = 8252757U;
	volatile int32_t t36 = 248760;

    t36 = ((x197+(x198*x199))<=x200);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x201 = 0;
	static uint8_t x202 = 113U;
	uint8_t x203 = 56U;
	volatile int32_t t37 = 0;

    t37 = ((x201+(x202*x203))<=x204);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x209 = 4735;
	static int16_t x210 = INT16_MIN;
	uint8_t x211 = UINT8_MAX;
	volatile int32_t t38 = 5;

    t38 = ((x209+(x210*x211))<=x212);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x213 = -1;
	int16_t x214 = INT16_MAX;
	uint32_t x215 = 1U;
	int16_t x216 = INT16_MAX;
	int32_t t39 = -4213679;

    t39 = ((x213+(x214*x215))<=x216);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x217 = 7;
	static int16_t x218 = INT16_MIN;
	int64_t x219 = -1LL;
	int8_t x220 = -1;
	int32_t t40 = 10771;

    t40 = ((x217+(x218*x219))<=x220);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x221 = 27;
	int16_t x223 = -1;
	int32_t t41 = 0;

    t41 = ((x221+(x222*x223))<=x224);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x230 = -2;
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MAX;

    t42 = ((x229+(x230*x231))<=x232);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x233 = -223947;
	uint8_t x234 = UINT8_MAX;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MAX;
	static int32_t t43 = -3921659;

    t43 = ((x233+(x234*x235))<=x236);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x237 = 6U;
	int32_t x239 = INT32_MAX;
	int16_t x240 = 1;
	static volatile int32_t t44 = -27832;

    t44 = ((x237+(x238*x239))<=x240);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x241 = UINT16_MAX;
	uint8_t x242 = 9U;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = UINT32_MAX;
	int32_t t45 = 423;

    t45 = ((x241+(x242*x243))<=x244);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MIN;
	int64_t x247 = -1LL;
	int8_t x248 = INT8_MAX;

    t46 = ((x245+(x246*x247))<=x248);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x258 = 2;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = 40174826532686496LL;
	int32_t t47 = -1912;

    t47 = ((x257+(x258*x259))<=x260);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint32_t x262 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t48 = -1012515;

    t48 = ((x261+(x262*x263))<=x264);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x265 = UINT8_MAX;
	static int16_t x266 = -222;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t x268 = -1;

    t49 = ((x265+(x266*x267))<=x268);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x269 = -29;
	uint64_t x270 = UINT64_MAX;
	int64_t x271 = -1LL;
	static uint32_t x272 = UINT32_MAX;
	volatile int32_t t50 = -427;

    t50 = ((x269+(x270*x271))<=x272);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x273 = 53U;
	int32_t x274 = INT32_MIN;
	uint32_t x275 = 63980U;
	int64_t x276 = INT64_MAX;
	int32_t t51 = -224704;

    t51 = ((x273+(x274*x275))<=x276);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x277 = UINT64_MAX;
	volatile uint32_t x278 = 152262U;
	int32_t x279 = INT32_MIN;

    t52 = ((x277+(x278*x279))<=x280);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x281 = 3543;
	static uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MAX;
	int8_t x284 = 62;
	int32_t t53 = -20428;

    t53 = ((x281+(x282*x283))<=x284);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x285 = UINT16_MAX;
	static int16_t x287 = -1;
	int16_t x288 = -1;
	volatile int32_t t54 = 15310;

    t54 = ((x285+(x286*x287))<=x288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x289 = 63786U;
	int64_t x290 = INT64_MIN;
	volatile uint64_t x291 = 3260159575910LLU;
	int32_t t55 = 65249;

    t55 = ((x289+(x290*x291))<=x292);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x298 = 13607787251217422LL;
	int32_t x299 = -1;
	static volatile int32_t x300 = INT32_MAX;

    t56 = ((x297+(x298*x299))<=x300);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x306 = 24718U;
	uint32_t x307 = 640684574U;
	static volatile int16_t x308 = INT16_MAX;

    t57 = ((x305+(x306*x307))<=x308);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x311 = INT8_MIN;
	int8_t x312 = -1;
	int32_t t58 = -731061;

    t58 = ((x309+(x310*x311))<=x312);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x313 = 32231473U;
	volatile uint64_t x314 = UINT64_MAX;
	int64_t x316 = INT64_MIN;
	volatile int32_t t59 = 10;

    t59 = ((x313+(x314*x315))<=x316);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x317 = -1;
	volatile uint64_t x318 = 113130LLU;
	static volatile uint32_t x319 = UINT32_MAX;
	int32_t t60 = -26092968;

    t60 = ((x317+(x318*x319))<=x320);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x321 = 29182U;
	int32_t x322 = INT32_MIN;
	static uint64_t x323 = 2822873678LLU;
	int8_t x324 = -1;

    t61 = ((x321+(x322*x323))<=x324);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x325 = INT64_MIN;
	uint8_t x326 = 3U;
	static volatile uint8_t x327 = 28U;
	int32_t x328 = 504769;
	int32_t t62 = -5712;

    t62 = ((x325+(x326*x327))<=x328);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x330 = -1;
	int8_t x331 = -1;
	volatile int32_t t63 = 1;

    t63 = ((x329+(x330*x331))<=x332);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x333 = 1;
	int16_t x334 = 72;
	static int8_t x335 = 0;
	int16_t x336 = INT16_MIN;
	int32_t t64 = 18250;

    t64 = ((x333+(x334*x335))<=x336);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x341 = INT16_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	int16_t x343 = -46;
	uint16_t x344 = 5U;

    t65 = ((x341+(x342*x343))<=x344);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x345 = -9;
	int16_t x346 = INT16_MAX;
	int8_t x347 = -1;
	int64_t x348 = INT64_MAX;
	int32_t t66 = -2;

    t66 = ((x345+(x346*x347))<=x348);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x350 = UINT8_MAX;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = -1LL;
	volatile int32_t t67 = 5713;

    t67 = ((x349+(x350*x351))<=x352);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = 1;
	int64_t x360 = -1LL;
	volatile int32_t t68 = 419948;

    t68 = ((x357+(x358*x359))<=x360);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x365 = -1;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = 292U;
	static volatile int32_t t69 = 80;

    t69 = ((x365+(x366*x367))<=x368);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MIN;

    t70 = ((x369+(x370*x371))<=x372);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x377 = -1;
	uint64_t x378 = UINT64_MAX;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t71 = 8369851;

    t71 = ((x377+(x378*x379))<=x380);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x385 = 5;
	uint32_t x386 = 670U;
	uint8_t x387 = 5U;
	int32_t x388 = -93246;
	volatile int32_t t72 = 797667428;

    t72 = ((x385+(x386*x387))<=x388);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x393 = -1;
	int16_t x394 = -1;
	int32_t x395 = -1;
	int32_t t73 = 1;

    t73 = ((x393+(x394*x395))<=x396);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	static uint8_t x399 = 8U;
	int64_t x400 = -61280LL;

    t74 = ((x397+(x398*x399))<=x400);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x401 = INT16_MAX;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = 157;
	uint32_t x404 = 3U;
	int32_t t75 = 1437;

    t75 = ((x401+(x402*x403))<=x404);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x406 = INT16_MIN;
	int8_t x407 = -1;
	volatile int32_t x408 = INT32_MIN;
	int32_t t76 = 3;

    t76 = ((x405+(x406*x407))<=x408);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x409 = INT16_MAX;
	int8_t x410 = -1;
	static int32_t x411 = INT32_MAX;
	static uint64_t x412 = 301564LLU;
	volatile int32_t t77 = -152;

    t77 = ((x409+(x410*x411))<=x412);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x416 = INT32_MAX;

    t78 = ((x413+(x414*x415))<=x416);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x418 = 22446190U;
	uint32_t x419 = 210874U;
	uint16_t x420 = 22U;
	volatile int32_t t79 = 475161;

    t79 = ((x417+(x418*x419))<=x420);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x425 = 111;
	uint32_t x426 = 162073U;
	int8_t x428 = INT8_MAX;
	int32_t t80 = 26842;

    t80 = ((x425+(x426*x427))<=x428);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x429 = -12;
	int8_t x430 = 9;
	uint32_t x432 = 34663344U;
	static volatile int32_t t81 = -26006;

    t81 = ((x429+(x430*x431))<=x432);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x433 = -173039;
	static int8_t x434 = INT8_MIN;
	int64_t x436 = -1LL;
	int32_t t82 = 249161419;

    t82 = ((x433+(x434*x435))<=x436);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x441 = -1LL;
	int16_t x442 = 0;
	int16_t x443 = -1;
	int32_t x444 = -1;
	volatile int32_t t83 = -87;

    t83 = ((x441+(x442*x443))<=x444);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x445 = 127U;
	int8_t x446 = 43;
	uint64_t x447 = 52839113182LLU;
	int32_t x448 = INT32_MAX;
	volatile int32_t t84 = -1;

    t84 = ((x445+(x446*x447))<=x448);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x457 = 862LL;
	uint64_t x458 = UINT64_MAX;
	uint32_t x459 = 787338U;
	uint64_t x460 = 12220723LLU;
	volatile int32_t t85 = -420500390;

    t85 = ((x457+(x458*x459))<=x460);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x461 = INT64_MIN;
	uint64_t x462 = 6LLU;
	int32_t x463 = INT32_MAX;
	volatile int32_t t86 = -1133940;

    t86 = ((x461+(x462*x463))<=x464);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x465 = -630;
	int16_t x467 = INT16_MIN;
	static int16_t x468 = -1;
	int32_t t87 = -617907;

    t87 = ((x465+(x466*x467))<=x468);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x473 = INT16_MIN;
	int16_t x474 = 5896;
	uint64_t x476 = 33499934571626LLU;
	int32_t t88 = -3257758;

    t88 = ((x473+(x474*x475))<=x476);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x481 = INT64_MIN;
	uint64_t x482 = UINT64_MAX;
	volatile uint16_t x483 = 23U;
	volatile uint64_t x484 = 334980585517101762LLU;
	volatile int32_t t89 = -20;

    t89 = ((x481+(x482*x483))<=x484);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x486 = 4;
	int8_t x487 = -1;
	static int8_t x488 = INT8_MIN;
	int32_t t90 = 15;

    t90 = ((x485+(x486*x487))<=x488);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x505 = -606;
	static int64_t x506 = 10171861583LL;
	volatile uint16_t x507 = 10032U;
	int16_t x508 = INT16_MIN;
	int32_t t91 = -39076957;

    t91 = ((x505+(x506*x507))<=x508);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x513 = 281;
	static int64_t x514 = -29307925714612LL;
	static volatile uint8_t x515 = UINT8_MAX;
	volatile uint64_t x516 = 188648LLU;
	volatile int32_t t92 = -35560731;

    t92 = ((x513+(x514*x515))<=x516);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x529 = -1;
	int8_t x530 = -1;
	uint32_t x531 = 377165U;
	volatile int8_t x532 = -21;
	int32_t t93 = 1;

    t93 = ((x529+(x530*x531))<=x532);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x535 = UINT32_MAX;
	volatile int16_t x536 = INT16_MAX;
	int32_t t94 = 525716774;

    t94 = ((x533+(x534*x535))<=x536);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x544 = -1;

    t95 = ((x541+(x542*x543))<=x544);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x545 = INT8_MIN;
	uint64_t x546 = UINT64_MAX;
	volatile int64_t x547 = -1LL;
	int32_t x548 = INT32_MIN;
	int32_t t96 = -195315;

    t96 = ((x545+(x546*x547))<=x548);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x549 = 5;
	static uint64_t x550 = 567LLU;

    t97 = ((x549+(x550*x551))<=x552);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x557 = UINT64_MAX;
	uint64_t x558 = 30859901112LLU;
	static uint32_t x559 = 21866104U;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t98 = 405;

    t98 = ((x557+(x558*x559))<=x560);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x570 = INT8_MIN;
	int16_t x571 = INT16_MAX;
	uint64_t x572 = UINT64_MAX;

    t99 = ((x569+(x570*x571))<=x572);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x574 = INT8_MAX;
	int16_t x575 = 380;
	int8_t x576 = INT8_MIN;
	int32_t t100 = -4139;

    t100 = ((x573+(x574*x575))<=x576);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x577 = 897U;
	int8_t x578 = -1;
	static int8_t x579 = INT8_MIN;
	int16_t x580 = INT16_MIN;
	int32_t t101 = 660427278;

    t101 = ((x577+(x578*x579))<=x580);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x585 = -1063893352;
	volatile uint8_t x586 = 109U;
	int8_t x588 = -1;
	static volatile int32_t t102 = 1;

    t102 = ((x585+(x586*x587))<=x588);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x598 = 642LLU;
	int16_t x599 = 6;
	int64_t x600 = INT64_MIN;
	volatile int32_t t103 = 44832698;

    t103 = ((x597+(x598*x599))<=x600);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x606 = 457969614422605LL;
	uint8_t x607 = UINT8_MAX;
	uint16_t x608 = 228U;

    t104 = ((x605+(x606*x607))<=x608);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x610 = -1217;
	int16_t x611 = INT16_MAX;
	static volatile int32_t t105 = -78;

    t105 = ((x609+(x610*x611))<=x612);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x613 = -4;
	int8_t x614 = INT8_MIN;
	volatile uint8_t x615 = 8U;
	uint8_t x616 = UINT8_MAX;
	volatile int32_t t106 = 1109;

    t106 = ((x613+(x614*x615))<=x616);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t t107 = -920;

    t107 = ((x617+(x618*x619))<=x620);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x621 = 6U;
	int16_t x622 = -9635;
	uint16_t x623 = 1U;
	int32_t x624 = 63397239;
	int32_t t108 = -13;

    t108 = ((x621+(x622*x623))<=x624);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x629 = -11667LL;
	int64_t x630 = -1LL;
	int32_t x631 = 25003312;
	int32_t t109 = 257;

    t109 = ((x629+(x630*x631))<=x632);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x638 = INT32_MAX;
	uint64_t x639 = 6908103805386932263LLU;
	volatile int32_t t110 = -12857509;

    t110 = ((x637+(x638*x639))<=x640);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x646 = 2LLU;
	int8_t x647 = INT8_MIN;
	int16_t x648 = INT16_MIN;

    t111 = ((x645+(x646*x647))<=x648);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x653 = 0U;
	uint64_t x655 = 10LLU;
	uint32_t x656 = 0U;
	volatile int32_t t112 = -6;

    t112 = ((x653+(x654*x655))<=x656);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x657 = INT32_MIN;
	uint64_t x658 = 59796231LLU;
	int16_t x659 = INT16_MAX;
	int16_t x660 = 1021;
	int32_t t113 = -3591006;

    t113 = ((x657+(x658*x659))<=x660);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x665 = -55582228;
	int16_t x667 = -1;
	uint16_t x668 = 77U;
	int32_t t114 = -1170;

    t114 = ((x665+(x666*x667))<=x668);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = 3LL;
	static volatile int32_t x671 = INT32_MIN;
	int32_t x672 = -1;
	static int32_t t115 = -2147;

    t115 = ((x669+(x670*x671))<=x672);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x673 = -1;
	int32_t x674 = INT32_MIN;
	static volatile uint32_t x675 = 37742333U;
	int32_t x676 = -1;
	volatile int32_t t116 = 752;

    t116 = ((x673+(x674*x675))<=x676);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x677 = INT16_MIN;
	static int8_t x678 = INT8_MIN;
	int16_t x679 = INT16_MIN;
	int16_t x680 = 7;
	int32_t t117 = -3232618;

    t117 = ((x677+(x678*x679))<=x680);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x682 = 13474930048LLU;
	static int64_t x683 = -7178LL;
	uint8_t x684 = UINT8_MAX;

    t118 = ((x681+(x682*x683))<=x684);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x685 = INT16_MIN;
	volatile int8_t x686 = -1;
	uint8_t x687 = 126U;
	int16_t x688 = INT16_MIN;
	int32_t t119 = -48;

    t119 = ((x685+(x686*x687))<=x688);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x689 = 1769;
	volatile int8_t x690 = 0;
	static uint64_t x691 = 16935465674176LLU;
	static int32_t x692 = -25;
	static volatile int32_t t120 = 0;

    t120 = ((x689+(x690*x691))<=x692);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x693 = INT8_MIN;
	int8_t x694 = INT8_MIN;
	int16_t x695 = INT16_MIN;
	volatile int32_t t121 = -167148;

    t121 = ((x693+(x694*x695))<=x696);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x697 = INT16_MIN;
	static int16_t x698 = INT16_MIN;
	static uint8_t x699 = UINT8_MAX;
	int8_t x700 = INT8_MAX;
	volatile int32_t t122 = -1945;

    t122 = ((x697+(x698*x699))<=x700);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x701 = 68U;
	static int16_t x702 = INT16_MAX;
	int64_t x704 = 9LL;
	int32_t t123 = 1074812;

    t123 = ((x701+(x702*x703))<=x704);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x705 = 0;
	int8_t x706 = INT8_MIN;
	uint64_t x707 = 3049512241610LLU;
	uint8_t x708 = 1U;
	volatile int32_t t124 = 259623059;

    t124 = ((x705+(x706*x707))<=x708);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x710 = INT8_MIN;
	int16_t x711 = INT16_MAX;
	static int8_t x712 = -1;

    t125 = ((x709+(x710*x711))<=x712);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint16_t x713 = 342U;
	uint16_t x714 = 3U;
	static volatile uint32_t x716 = UINT32_MAX;
	static int32_t t126 = 3;

    t126 = ((x713+(x714*x715))<=x716);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x717 = INT16_MIN;
	static uint8_t x718 = 4U;
	int64_t x719 = -1LL;
	int32_t x720 = INT32_MIN;
	int32_t t127 = -329;

    t127 = ((x717+(x718*x719))<=x720);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t t128 = 55;

    t128 = ((x729+(x730*x731))<=x732);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x734 = -379791786759LL;
	int8_t x735 = 1;

    t129 = ((x733+(x734*x735))<=x736);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	static int8_t x738 = -1;
	int16_t x740 = 94;
	int32_t t130 = -1;

    t130 = ((x737+(x738*x739))<=x740);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x742 = 0U;
	int16_t x743 = INT16_MIN;
	uint8_t x744 = 7U;
	volatile int32_t t131 = -20;

    t131 = ((x741+(x742*x743))<=x744);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x758 = INT16_MIN;
	uint64_t x759 = 11543848222423230LLU;
	uint32_t x760 = 99562U;
	int32_t t132 = 89240555;

    t132 = ((x757+(x758*x759))<=x760);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x761 = INT8_MAX;
	int8_t x762 = -1;
	volatile int8_t x763 = -1;
	static int16_t x764 = INT16_MIN;
	volatile int32_t t133 = 698299;

    t133 = ((x761+(x762*x763))<=x764);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x769 = 13;
	static volatile uint8_t x770 = 124U;
	volatile int64_t x771 = -1LL;
	static volatile int32_t t134 = -6970;

    t134 = ((x769+(x770*x771))<=x772);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x777 = 23555103;
	int32_t x780 = -1267035;

    t135 = ((x777+(x778*x779))<=x780);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x793 = -11645420190193LL;
	uint64_t x794 = 18LLU;
	int8_t x796 = -1;
	int32_t t136 = 40;

    t136 = ((x793+(x794*x795))<=x796);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x810 = INT8_MIN;
	uint16_t x811 = 25U;
	volatile int32_t t137 = -16021;

    t137 = ((x809+(x810*x811))<=x812);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x813 = 8431497947412LL;
	int16_t x814 = INT16_MAX;
	int8_t x815 = 0;
	int32_t x816 = -195258;

    t138 = ((x813+(x814*x815))<=x816);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x817 = -1;
	int32_t x818 = -1;
	volatile int16_t x819 = -1;
	static int16_t x820 = 1113;
	volatile int32_t t139 = -1;

    t139 = ((x817+(x818*x819))<=x820);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x821 = INT8_MAX;
	uint64_t x822 = UINT64_MAX;
	volatile uint16_t x823 = UINT16_MAX;
	static int16_t x824 = -120;
	static volatile int32_t t140 = -5;

    t140 = ((x821+(x822*x823))<=x824);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x825 = 568060747432925959LLU;
	uint32_t x826 = 42171407U;
	int64_t x827 = -1LL;
	int16_t x828 = INT16_MIN;
	volatile int32_t t141 = 106;

    t141 = ((x825+(x826*x827))<=x828);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x830 = 7;
	static uint32_t x831 = 3U;
	int64_t x832 = -1LL;
	volatile int32_t t142 = -452;

    t142 = ((x829+(x830*x831))<=x832);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x833 = INT32_MIN;
	uint32_t x834 = 119053749U;
	volatile int8_t x835 = INT8_MIN;
	int32_t x836 = -2;

    t143 = ((x833+(x834*x835))<=x836);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x845 = -704961993;
	static uint64_t x846 = 1488LLU;
	static volatile int8_t x848 = INT8_MIN;
	int32_t t144 = 15;

    t144 = ((x845+(x846*x847))<=x848);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x849 = 1836U;
	int8_t x851 = -1;

    t145 = ((x849+(x850*x851))<=x852);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x857 = INT16_MIN;
	uint64_t x858 = UINT64_MAX;
	int64_t x859 = INT64_MAX;
	volatile int8_t x860 = -1;
	volatile int32_t t146 = -377;

    t146 = ((x857+(x858*x859))<=x860);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x861 = INT32_MIN;
	uint32_t x862 = UINT32_MAX;
	uint64_t x863 = UINT64_MAX;
	int8_t x864 = INT8_MAX;
	int32_t t147 = 0;

    t147 = ((x861+(x862*x863))<=x864);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x870 = 17;
	volatile uint16_t x872 = UINT16_MAX;
	int32_t t148 = -971293230;

    t148 = ((x869+(x870*x871))<=x872);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x873 = INT32_MIN;
	uint32_t x874 = 255U;
	int64_t x876 = 91947091LL;

    t149 = ((x873+(x874*x875))<=x876);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x877 = -1LL;
	int8_t x878 = INT8_MAX;
	volatile uint8_t x879 = 127U;
	static int32_t x880 = -2802;
	int32_t t150 = 30796;

    t150 = ((x877+(x878*x879))<=x880);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x881 = 3U;
	static uint32_t x882 = UINT32_MAX;
	uint64_t x883 = UINT64_MAX;
	int32_t t151 = 3;

    t151 = ((x881+(x882*x883))<=x884);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x886 = -98976164;
	volatile uint32_t x888 = UINT32_MAX;
	int32_t t152 = -11;

    t152 = ((x885+(x886*x887))<=x888);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x889 = -1;
	int8_t x891 = -30;
	int64_t x892 = 2185LL;
	int32_t t153 = -885;

    t153 = ((x889+(x890*x891))<=x892);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x893 = INT16_MIN;
	int32_t x894 = -1;
	int8_t x895 = INT8_MIN;
	int8_t x896 = INT8_MIN;
	static int32_t t154 = -3426;

    t154 = ((x893+(x894*x895))<=x896);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x897 = -1;
	int32_t x899 = -1;
	int16_t x900 = INT16_MIN;

    t155 = ((x897+(x898*x899))<=x900);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x901 = -1LL;
	static uint64_t x902 = 843819810159653216LLU;
	uint32_t x903 = 54872059U;
	int64_t x904 = INT64_MIN;

    t156 = ((x901+(x902*x903))<=x904);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x909 = -29LL;
	int32_t x910 = INT32_MAX;
	int64_t x911 = 53432827LL;
	static volatile int32_t t157 = -64451849;

    t157 = ((x909+(x910*x911))<=x912);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x933 = INT16_MIN;
	int8_t x934 = 13;
	uint64_t x936 = 1304548667216168LLU;

    t158 = ((x933+(x934*x935))<=x936);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x938 = INT8_MIN;
	static int8_t x939 = -1;
	static int64_t x940 = INT64_MIN;
	volatile int32_t t159 = -274841547;

    t159 = ((x937+(x938*x939))<=x940);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x941 = 63U;
	int16_t x942 = 1368;
	uint16_t x943 = UINT16_MAX;
	int32_t x944 = -1332;
	int32_t t160 = 7;

    t160 = ((x941+(x942*x943))<=x944);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x945 = INT16_MIN;
	uint16_t x946 = 1969U;
	uint64_t x947 = 59644480996LLU;
	int16_t x948 = 489;
	volatile int32_t t161 = -25603167;

    t161 = ((x945+(x946*x947))<=x948);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x949 = 28698423LLU;
	uint32_t x950 = 30447790U;
	volatile int32_t x951 = INT32_MAX;
	int8_t x952 = INT8_MIN;
	int32_t t162 = 390125551;

    t162 = ((x949+(x950*x951))<=x952);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x953 = 1;
	volatile uint16_t x955 = UINT16_MAX;
	static uint32_t x956 = 4985U;
	volatile int32_t t163 = 496;

    t163 = ((x953+(x954*x955))<=x956);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x958 = INT16_MIN;
	static int32_t x960 = INT32_MIN;
	static int32_t t164 = -12138;

    t164 = ((x957+(x958*x959))<=x960);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x961 = -1LL;
	static int8_t x962 = INT8_MIN;
	int8_t x963 = INT8_MIN;
	uint8_t x964 = 41U;

    t165 = ((x961+(x962*x963))<=x964);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x965 = -5468;
	uint64_t x966 = 265917847LLU;
	int16_t x967 = INT16_MIN;
	uint32_t x968 = UINT32_MAX;
	int32_t t166 = 649768138;

    t166 = ((x965+(x966*x967))<=x968);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x969 = 13051733637160513LLU;
	int32_t x971 = INT32_MAX;
	int8_t x972 = -2;
	volatile int32_t t167 = 18377;

    t167 = ((x969+(x970*x971))<=x972);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x974 = INT16_MAX;

    t168 = ((x973+(x974*x975))<=x976);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x978 = INT64_MIN;
	uint64_t x979 = 1LLU;
	int32_t t169 = -2031535;

    t169 = ((x977+(x978*x979))<=x980);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x981 = 307572675002LLU;
	int64_t x982 = -12493233974LL;
	int64_t x984 = 12LL;
	int32_t t170 = 2593916;

    t170 = ((x981+(x982*x983))<=x984);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x986 = 582U;
	static uint16_t x987 = 1584U;
	uint32_t x988 = UINT32_MAX;
	int32_t t171 = -10871;

    t171 = ((x985+(x986*x987))<=x988);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x989 = 15447520U;
	uint32_t x991 = 33883798U;
	static int32_t x992 = -592357935;
	volatile int32_t t172 = 908;

    t172 = ((x989+(x990*x991))<=x992);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x993 = 30589U;
	uint32_t x994 = 28U;
	uint16_t x995 = 340U;
	static uint64_t x996 = 490764LLU;
	volatile int32_t t173 = 34;

    t173 = ((x993+(x994*x995))<=x996);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x997 = 6781900664LL;
	int16_t x998 = INT16_MIN;
	int32_t x999 = -1;
	volatile uint8_t x1000 = UINT8_MAX;
	volatile int32_t t174 = -706381;

    t174 = ((x997+(x998*x999))<=x1000);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1001 = 41378614841LL;
	volatile uint8_t x1003 = 11U;
	volatile int64_t x1004 = INT64_MIN;
	volatile int32_t t175 = 1207488;

    t175 = ((x1001+(x1002*x1003))<=x1004);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1005 = 1299U;
	uint8_t x1007 = 91U;
	int64_t x1008 = INT64_MIN;

    t176 = ((x1005+(x1006*x1007))<=x1008);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1017 = INT64_MAX;
	int16_t x1018 = -1;
	int64_t x1019 = 537878867283898LL;
	int16_t x1020 = INT16_MIN;
	int32_t t177 = 47;

    t177 = ((x1017+(x1018*x1019))<=x1020);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1026 = 0;
	int32_t x1027 = INT32_MIN;
	int32_t x1028 = INT32_MIN;
	static int32_t t178 = -1911;

    t178 = ((x1025+(x1026*x1027))<=x1028);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1030 = -131LL;
	int16_t x1031 = -50;
	volatile int16_t x1032 = 255;
	volatile int32_t t179 = -6;

    t179 = ((x1029+(x1030*x1031))<=x1032);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1037 = 125;
	volatile int16_t x1038 = -1;
	int64_t x1039 = -3143LL;
	int8_t x1040 = -3;
	volatile int32_t t180 = -235;

    t180 = ((x1037+(x1038*x1039))<=x1040);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1045 = 1U;
	uint64_t x1046 = 2985086862LLU;
	static uint8_t x1047 = 35U;
	int32_t t181 = -2691635;

    t181 = ((x1045+(x1046*x1047))<=x1048);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1057 = UINT64_MAX;
	uint64_t x1058 = UINT64_MAX;
	int64_t x1059 = INT64_MIN;
	static int64_t x1060 = -1LL;
	int32_t t182 = -66871046;

    t182 = ((x1057+(x1058*x1059))<=x1060);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1061 = UINT8_MAX;
	int16_t x1062 = -1;
	static int8_t x1063 = INT8_MIN;
	int32_t x1064 = -3596;

    t183 = ((x1061+(x1062*x1063))<=x1064);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x1065 = 40275272919LLU;
	volatile int64_t x1066 = 6584560353219LL;
	volatile uint64_t x1067 = 3068701677656604277LLU;
	int16_t x1068 = INT16_MIN;

    t184 = ((x1065+(x1066*x1067))<=x1068);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x1070 = UINT32_MAX;
	int64_t x1072 = -1LL;
	int32_t t185 = -235491;

    t185 = ((x1069+(x1070*x1071))<=x1072);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1073 = 1314;
	static uint32_t x1074 = UINT32_MAX;
	int16_t x1075 = -1048;
	int16_t x1076 = -11;

    t186 = ((x1073+(x1074*x1075))<=x1076);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1079 = -182;
	int64_t x1080 = INT64_MAX;
	volatile int32_t t187 = 1791;

    t187 = ((x1077+(x1078*x1079))<=x1080);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1081 = 7U;
	uint64_t x1082 = 140001701106LLU;
	int32_t x1083 = INT32_MAX;
	uint16_t x1084 = 8185U;
	static int32_t t188 = -98720042;

    t188 = ((x1081+(x1082*x1083))<=x1084);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1085 = 482594515LLU;
	int16_t x1086 = INT16_MIN;
	static uint32_t x1088 = UINT32_MAX;
	int32_t t189 = -402918190;

    t189 = ((x1085+(x1086*x1087))<=x1088);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1090 = -1;
	int8_t x1091 = -1;
	static volatile int32_t t190 = -237570399;

    t190 = ((x1089+(x1090*x1091))<=x1092);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1098 = UINT64_MAX;
	int64_t x1099 = -1LL;
	uint8_t x1100 = 2U;
	int32_t t191 = 0;

    t191 = ((x1097+(x1098*x1099))<=x1100);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1101 = 46LLU;
	int8_t x1104 = -1;
	volatile int32_t t192 = -455006;

    t192 = ((x1101+(x1102*x1103))<=x1104);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1110 = -6;
	int32_t x1111 = -31162977;
	static int32_t x1112 = INT32_MAX;
	int32_t t193 = 5673492;

    t193 = ((x1109+(x1110*x1111))<=x1112);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1118 = 30;
	volatile uint16_t x1119 = 29U;
	volatile int32_t t194 = 115117;

    t194 = ((x1117+(x1118*x1119))<=x1120);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1121 = UINT16_MAX;
	static int16_t x1122 = 1;
	uint32_t x1123 = 31453770U;
	int64_t x1124 = -153LL;

    t195 = ((x1121+(x1122*x1123))<=x1124);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1125 = INT8_MAX;
	volatile int64_t x1126 = -1LL;
	static uint64_t x1127 = 33976LLU;
	volatile int32_t x1128 = INT32_MIN;
	int32_t t196 = -1;

    t196 = ((x1125+(x1126*x1127))<=x1128);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1129 = -109;
	int32_t x1130 = INT32_MIN;
	int64_t x1132 = INT64_MIN;

    t197 = ((x1129+(x1130*x1131))<=x1132);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1134 = -1LL;
	static int8_t x1135 = INT8_MIN;
	int16_t x1136 = 448;
	int32_t t198 = -1;

    t198 = ((x1133+(x1134*x1135))<=x1136);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1138 = 1139155LL;
	int8_t x1139 = INT8_MAX;
	int64_t x1140 = INT64_MIN;
	int32_t t199 = -31;

    t199 = ((x1137+(x1138*x1139))<=x1140);

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

