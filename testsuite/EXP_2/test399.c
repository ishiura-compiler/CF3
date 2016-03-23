
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

static int32_t x1 = -6880;
uint16_t x11 = 2539U;
volatile int32_t x12 = INT32_MIN;
volatile uint64_t x14 = UINT64_MAX;
int32_t x18 = -1;
int32_t t3 = -1;
uint8_t x30 = 61U;
int16_t x41 = -1;
volatile int8_t x46 = INT8_MIN;
int32_t t9 = 253;
int32_t t10 = 858443;
uint64_t x58 = UINT64_MAX;
uint32_t x69 = UINT32_MAX;
volatile uint16_t x70 = UINT16_MAX;
uint32_t x103 = UINT32_MAX;
static volatile int32_t t17 = -17777852;
uint16_t x107 = 15U;
uint64_t x111 = 38363613019LLU;
int16_t x112 = INT16_MIN;
uint16_t x113 = UINT16_MAX;
uint64_t x127 = 103960288708908803LLU;
int8_t x128 = INT8_MIN;
volatile int32_t t22 = 305648;
static int32_t x129 = -886714;
static uint16_t x148 = UINT16_MAX;
static int8_t x152 = INT8_MIN;
int8_t x157 = INT8_MAX;
static int64_t x160 = INT64_MAX;
static uint8_t x163 = 3U;
volatile int32_t t30 = -20403245;
volatile int8_t x175 = INT8_MIN;
int8_t x202 = INT8_MIN;
static int16_t x203 = -1;
int32_t t35 = -17616;
uint32_t x207 = 0U;
volatile uint32_t x211 = UINT32_MAX;
static volatile int32_t t37 = 1899;
volatile int8_t x231 = 1;
volatile int32_t t41 = 1;
static int8_t x240 = INT8_MAX;
volatile int32_t t45 = -3784453;
int32_t x254 = 102;
int32_t x261 = -1;
int8_t x273 = -1;
static uint8_t x275 = UINT8_MAX;
static int32_t x281 = INT32_MIN;
volatile int32_t t51 = 387254;
int16_t x294 = INT16_MIN;
int32_t x295 = 17009;
int8_t x301 = INT8_MAX;
int64_t x310 = -1LL;
static uint32_t x312 = 3395U;
volatile int32_t t55 = -7564005;
static int8_t x336 = INT8_MIN;
uint32_t x337 = UINT32_MAX;
volatile uint8_t x339 = 96U;
volatile uint16_t x340 = 13U;
volatile uint64_t x343 = UINT64_MAX;
volatile int16_t x344 = INT16_MAX;
static uint32_t x347 = 25087803U;
volatile int32_t t61 = 54;
uint8_t x356 = 3U;
uint64_t x369 = UINT64_MAX;
int8_t x371 = INT8_MIN;
uint16_t x372 = UINT16_MAX;
uint64_t x375 = 14575169568LLU;
uint8_t x378 = 126U;
int8_t x389 = -1;
volatile int64_t x392 = INT64_MIN;
int8_t x398 = INT8_MIN;
static volatile uint32_t x401 = 47U;
int8_t x403 = INT8_MIN;
uint32_t x404 = UINT32_MAX;
static uint8_t x411 = 9U;
uint64_t x413 = UINT64_MAX;
uint64_t x422 = UINT64_MAX;
volatile int32_t t76 = 534413;
static uint8_t x441 = UINT8_MAX;
volatile int32_t x444 = INT32_MIN;
volatile int32_t t78 = 910491982;
static int16_t x456 = -494;
uint8_t x461 = 1U;
int16_t x462 = 8138;
static volatile uint32_t x466 = 4U;
int32_t x487 = 584409091;
int16_t x490 = INT16_MIN;
int64_t x493 = -847273167897906LL;
int8_t x494 = 3;
int32_t x496 = INT32_MAX;
int8_t x501 = INT8_MAX;
static uint64_t x507 = UINT64_MAX;
static int64_t x509 = -1LL;
volatile int32_t t93 = 240828;
volatile uint32_t x529 = 64U;
int32_t x531 = INT32_MIN;
int32_t x533 = INT32_MIN;
volatile int16_t x534 = INT16_MIN;
uint32_t x536 = UINT32_MAX;
volatile int32_t t98 = 1884;
uint16_t x554 = 3699U;
volatile int32_t t100 = -13;
volatile uint64_t x568 = 348551001LLU;
volatile int32_t x584 = INT32_MIN;
int64_t x586 = 519099161319168LL;
static int8_t x590 = INT8_MIN;
static int16_t x593 = INT16_MIN;
int32_t t108 = -2280;
int8_t x604 = INT8_MIN;
uint8_t x606 = 0U;
uint8_t x616 = 42U;
int32_t t112 = 6;
volatile int32_t t113 = 4983;
static volatile uint32_t x625 = 737734258U;
uint64_t x630 = UINT64_MAX;
uint64_t x638 = 556462644666077440LLU;
int64_t x639 = -13134LL;
volatile int32_t t118 = 6476;
int16_t x645 = INT16_MAX;
int32_t x650 = 7;
volatile int16_t x663 = -3520;
uint16_t x666 = 236U;
int8_t x682 = INT8_MIN;
uint16_t x683 = UINT16_MAX;
static int32_t t125 = -104;
static uint16_t x691 = UINT16_MAX;
int8_t x692 = -1;
uint16_t x700 = UINT16_MAX;
uint32_t x702 = 529552717U;
int32_t x705 = -1;
volatile int8_t x711 = INT8_MIN;
volatile int32_t x716 = INT32_MIN;
int32_t t133 = 713243;
int8_t x745 = -1;
static uint64_t x746 = 25171092310106LLU;
int32_t x757 = INT32_MIN;
int16_t x770 = -1;
uint8_t x773 = UINT8_MAX;
static int8_t x782 = -1;
int32_t t142 = 1128227;
static int16_t x790 = INT16_MAX;
int8_t x792 = -1;
uint64_t x793 = 6322775729202LLU;
volatile uint16_t x811 = UINT16_MAX;
volatile uint16_t x815 = UINT16_MAX;
static int64_t x823 = INT64_MAX;
int16_t x827 = INT16_MAX;
volatile int16_t x828 = INT16_MIN;
static uint64_t x832 = 89055150378LLU;
static int32_t t154 = -356569604;
static volatile uint8_t x845 = 18U;
int16_t x848 = -1;
int64_t x855 = INT64_MAX;
volatile int32_t t158 = 878252;
static uint16_t x864 = 2394U;
int32_t t162 = 6;
static volatile int16_t x917 = -1;
int64_t x922 = -2LL;
int32_t t168 = 5894;
int8_t x944 = INT8_MIN;
volatile int16_t x950 = 19;
int8_t x953 = -1;
volatile int16_t x955 = -57;
int8_t x960 = -1;
volatile int32_t t173 = -2247983;
int32_t t174 = -100532125;
uint8_t x971 = UINT8_MAX;
static volatile int32_t x996 = INT32_MIN;
static int64_t x998 = -47643LL;
volatile uint8_t x1017 = UINT8_MAX;
uint64_t x1020 = 0LLU;
uint32_t x1023 = UINT32_MAX;
int8_t x1024 = INT8_MIN;
uint32_t x1025 = 279083790U;
int32_t x1026 = 0;
int64_t x1033 = 4202020439027851710LL;
int64_t x1053 = 0LL;
volatile uint32_t x1055 = UINT32_MAX;
static int8_t x1057 = -1;
static int32_t x1058 = -1;
volatile int16_t x1065 = -87;
int32_t t189 = -1148;
int8_t x1072 = 1;
int8_t x1074 = INT8_MIN;
int64_t x1076 = -1LL;
uint16_t x1077 = UINT16_MAX;
uint64_t x1085 = 6956643059683704LLU;
int32_t x1087 = -152;
volatile uint16_t x1088 = 1U;
int64_t x1097 = -526702264968098339LL;
volatile int16_t x1100 = INT16_MIN;
volatile int32_t x1117 = 162;
static int32_t x1119 = -65333122;
static int16_t x1124 = INT16_MIN;


void f0(void) {
    	int32_t x2 = -1;
	uint64_t x3 = 7490027118685LLU;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -1418;

    t0 = ((x1+(x2*x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x10 = 1U;
	volatile int32_t t1 = -2;

    t1 = ((x9+(x10*x11))!=x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -119549668280265LL;
	uint32_t x15 = 67191U;
	static uint64_t x16 = 15148965761LLU;
	volatile int32_t t2 = -7;

    t2 = ((x13+(x14*x15))!=x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	int8_t x19 = 1;
	int32_t x20 = -1;

    t3 = ((x17+(x18*x19))!=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x25 = -11546057;
	int64_t x26 = 2045398LL;
	volatile int32_t x27 = 215383477;
	static uint16_t x28 = 0U;
	int32_t t4 = 2469034;

    t4 = ((x25+(x26*x27))!=x28);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = INT64_MIN;
	static int16_t x31 = INT16_MAX;
	volatile uint32_t x32 = 312715240U;
	int32_t t5 = 948;

    t5 = ((x29+(x30*x31))!=x32);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x33 = 0LLU;
	int64_t x34 = 706146711245564LL;
	int8_t x35 = -1;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t6 = -11061682;

    t6 = ((x33+(x34*x35))!=x36);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = 1766;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = 57;
	uint32_t x40 = 28U;
	static int32_t t7 = 37269;

    t7 = ((x37+(x38*x39))!=x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = 15;
	uint16_t x43 = 21748U;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t8 = 17826970;

    t8 = ((x41+(x42*x43))!=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x45 = 45850331916LLU;
	static int8_t x47 = INT8_MAX;
	int16_t x48 = -1;

    t9 = ((x45+(x46*x47))!=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = INT8_MAX;
	volatile uint16_t x54 = 0U;
	static int32_t x55 = -1;
	static uint8_t x56 = UINT8_MAX;

    t10 = ((x53+(x54*x55))!=x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = 1;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = 3U;
	volatile int32_t t11 = -338576988;

    t11 = ((x57+(x58*x59))!=x60);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x71 = 2LL;
	int32_t x72 = INT32_MAX;
	int32_t t12 = 5;

    t12 = ((x69+(x70*x71))!=x72);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MIN;
	volatile int32_t x75 = -4909;
	int16_t x76 = -1;
	volatile int32_t t13 = -27205361;

    t13 = ((x73+(x74*x75))!=x76);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = 1;
	int64_t x78 = 393010636899189207LL;
	int8_t x79 = -1;
	int16_t x80 = -1;
	static int32_t t14 = -5819;

    t14 = ((x77+(x78*x79))!=x80);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x89 = 48194316U;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	uint64_t x92 = 3047412LLU;
	volatile int32_t t15 = -408;

    t15 = ((x89+(x90*x91))!=x92);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x97 = INT16_MAX;
	uint16_t x98 = 3U;
	static volatile int16_t x99 = -15020;
	int32_t x100 = INT32_MIN;
	int32_t t16 = 1;

    t16 = ((x97+(x98*x99))!=x100);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 95481073776LLU;
	uint8_t x104 = UINT8_MAX;

    t17 = ((x101+(x102*x103))!=x104);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x105 = -1;
	static int32_t x106 = 1;
	int8_t x108 = INT8_MAX;
	int32_t t18 = -29;

    t18 = ((x105+(x106*x107))!=x108);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x109 = UINT32_MAX;
	int16_t x110 = INT16_MAX;
	int32_t t19 = -183;

    t19 = ((x109+(x110*x111))!=x112);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x114 = -118;
	uint8_t x115 = 4U;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t20 = -1199752;

    t20 = ((x113+(x114*x115))!=x116);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x117 = INT32_MIN;
	volatile uint32_t x118 = 11099U;
	int32_t x119 = -1;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t21 = 458795;

    t21 = ((x117+(x118*x119))!=x120);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x125 = -55;
	int8_t x126 = -1;

    t22 = ((x125+(x126*x127))!=x128);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x130 = 22U;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = -142395407LL;
	int32_t t23 = 66390;

    t23 = ((x129+(x130*x131))!=x132);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x133 = INT16_MIN;
	int16_t x134 = -864;
	uint8_t x135 = 15U;
	volatile int8_t x136 = -1;
	volatile int32_t t24 = 9107269;

    t24 = ((x133+(x134*x135))!=x136);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x137 = 512178;
	int64_t x138 = -2LL;
	uint8_t x139 = 0U;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t25 = -12578;

    t25 = ((x137+(x138*x139))!=x140);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x141 = INT32_MAX;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = 134987622267LL;
	int16_t x144 = -6721;
	int32_t t26 = -1;

    t26 = ((x141+(x142*x143))!=x144);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x145 = -203971;
	static uint8_t x146 = 68U;
	volatile uint32_t x147 = 839940024U;
	int32_t t27 = -2733;

    t27 = ((x145+(x146*x147))!=x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x149 = INT8_MAX;
	int16_t x150 = 11;
	volatile uint32_t x151 = UINT32_MAX;
	static volatile int32_t t28 = 23;

    t28 = ((x149+(x150*x151))!=x152);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x158 = INT64_MAX;
	static int32_t x159 = -1;
	static volatile int32_t t29 = 121662927;

    t29 = ((x157+(x158*x159))!=x160);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x161 = 15073U;
	uint8_t x162 = 110U;
	int8_t x164 = INT8_MIN;

    t30 = ((x161+(x162*x163))!=x164);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x169 = INT64_MIN;
	volatile uint64_t x170 = 3970645LLU;
	static int16_t x171 = INT16_MAX;
	static volatile int32_t x172 = INT32_MIN;
	volatile int32_t t31 = 1486612;

    t31 = ((x169+(x170*x171))!=x172);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x173 = -3083;
	volatile int8_t x174 = -1;
	int8_t x176 = INT8_MIN;
	static volatile int32_t t32 = 51;

    t32 = ((x173+(x174*x175))!=x176);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x181 = INT8_MIN;
	static uint32_t x182 = UINT32_MAX;
	static int16_t x183 = INT16_MAX;
	uint8_t x184 = 21U;
	static int32_t t33 = 61283493;

    t33 = ((x181+(x182*x183))!=x184);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x193 = UINT64_MAX;
	volatile int8_t x194 = INT8_MIN;
	static volatile uint8_t x195 = UINT8_MAX;
	uint16_t x196 = 1322U;
	int32_t t34 = 598915;

    t34 = ((x193+(x194*x195))!=x196);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x201 = 1;
	int64_t x204 = -1LL;

    t35 = ((x201+(x202*x203))!=x204);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x205 = INT8_MAX;
	int64_t x206 = INT64_MIN;
	static uint16_t x208 = 2U;
	volatile int32_t t36 = -62403652;

    t36 = ((x205+(x206*x207))!=x208);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x209 = 4U;
	int16_t x210 = 62;
	static int64_t x212 = INT64_MAX;

    t37 = ((x209+(x210*x211))!=x212);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x217 = INT32_MAX;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = 671U;
	int64_t x220 = INT64_MIN;
	volatile int32_t t38 = 13810;

    t38 = ((x217+(x218*x219))!=x220);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x221 = 80U;
	volatile uint8_t x222 = 19U;
	volatile int32_t x223 = -1;
	int32_t x224 = 897782975;
	static volatile int32_t t39 = -1;

    t39 = ((x221+(x222*x223))!=x224);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x225 = 207U;
	int16_t x226 = 1;
	volatile uint32_t x227 = 365U;
	static int32_t x228 = -5443;
	int32_t t40 = -304645;

    t40 = ((x225+(x226*x227))!=x228);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x229 = 6544LL;
	int32_t x230 = INT32_MAX;
	int64_t x232 = 7777715LL;

    t41 = ((x229+(x230*x231))!=x232);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x237 = -1;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = 56258138345097LLU;
	int32_t t42 = 9;

    t42 = ((x237+(x238*x239))!=x240);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x241 = INT16_MIN;
	static int32_t x242 = INT32_MAX;
	uint32_t x243 = 128728U;
	uint64_t x244 = UINT64_MAX;
	volatile int32_t t43 = 204935509;

    t43 = ((x241+(x242*x243))!=x244);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x245 = -28;
	uint8_t x246 = 4U;
	volatile int16_t x247 = INT16_MAX;
	static int8_t x248 = -14;
	int32_t t44 = -6950871;

    t44 = ((x245+(x246*x247))!=x248);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x249 = INT16_MIN;
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = 7208770666314055LLU;
	uint8_t x252 = 125U;

    t45 = ((x249+(x250*x251))!=x252);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x253 = 27;
	int16_t x255 = INT16_MAX;
	volatile int32_t x256 = -1;
	static volatile int32_t t46 = -737448;

    t46 = ((x253+(x254*x255))!=x256);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x262 = 7457486U;
	int32_t x263 = -789713;
	int8_t x264 = 11;
	volatile int32_t t47 = -834;

    t47 = ((x261+(x262*x263))!=x264);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x269 = INT8_MAX;
	static int64_t x270 = 127043LL;
	uint32_t x271 = 273U;
	int8_t x272 = INT8_MIN;
	int32_t t48 = 15;

    t48 = ((x269+(x270*x271))!=x272);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x274 = 104073;
	uint32_t x276 = 8762861U;
	volatile int32_t t49 = -8058;

    t49 = ((x273+(x274*x275))!=x276);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x282 = -787324907246LL;
	static uint8_t x283 = UINT8_MAX;
	volatile int64_t x284 = -25853645503491LL;
	static volatile int32_t t50 = -87;

    t50 = ((x281+(x282*x283))!=x284);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MAX;
	uint32_t x292 = UINT32_MAX;

    t51 = ((x289+(x290*x291))!=x292);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x293 = 5U;
	int64_t x296 = INT64_MAX;
	int32_t t52 = 905221533;

    t52 = ((x293+(x294*x295))!=x296);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x302 = 420U;
	volatile int64_t x303 = -1LL;
	volatile int8_t x304 = -1;
	static int32_t t53 = 209638;

    t53 = ((x301+(x302*x303))!=x304);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x305 = 21000471075714LLU;
	uint32_t x306 = 41U;
	static volatile int16_t x307 = 32;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t54 = 0;

    t54 = ((x305+(x306*x307))!=x308);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x309 = 764U;
	uint32_t x311 = UINT32_MAX;

    t55 = ((x309+(x310*x311))!=x312);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	int64_t x331 = -193LL;
	int64_t x332 = 92888464381510LL;
	volatile int32_t t56 = 7372448;

    t56 = ((x329+(x330*x331))!=x332);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x333 = 797392U;
	static uint8_t x334 = 0U;
	int32_t x335 = INT32_MAX;
	int32_t t57 = 10;

    t57 = ((x333+(x334*x335))!=x336);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x338 = 502834686U;
	volatile int32_t t58 = -97222282;

    t58 = ((x337+(x338*x339))!=x340);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x341 = -4;
	uint16_t x342 = UINT16_MAX;
	volatile int32_t t59 = -4882216;

    t59 = ((x341+(x342*x343))!=x344);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x345 = INT16_MIN;
	uint8_t x346 = 3U;
	static uint32_t x348 = 0U;
	volatile int32_t t60 = 19;

    t60 = ((x345+(x346*x347))!=x348);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x349 = INT8_MIN;
	static int16_t x350 = 0;
	int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MIN;

    t61 = ((x349+(x350*x351))!=x352);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x353 = INT16_MAX;
	volatile int16_t x354 = -1;
	volatile int16_t x355 = -1;
	int32_t t62 = 920;

    t62 = ((x353+(x354*x355))!=x356);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x357 = -117074264;
	uint32_t x358 = UINT32_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	int32_t x360 = -1;
	int32_t t63 = 449761;

    t63 = ((x357+(x358*x359))!=x360);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x361 = 2123891313904637108LLU;
	int8_t x362 = INT8_MIN;
	int64_t x363 = 41446LL;
	static int8_t x364 = -16;
	static int32_t t64 = 344;

    t64 = ((x361+(x362*x363))!=x364);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x370 = 16161U;
	int32_t t65 = -26795385;

    t65 = ((x369+(x370*x371))!=x372);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x373 = 2368451721LLU;
	volatile uint64_t x374 = 22228933652LLU;
	int64_t x376 = INT64_MIN;
	volatile int32_t t66 = -622057;

    t66 = ((x373+(x374*x375))!=x376);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x377 = 113375411542744LLU;
	int32_t x379 = -404;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t67 = 110;

    t67 = ((x377+(x378*x379))!=x380);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x385 = INT64_MIN;
	int32_t x386 = 28113607;
	static uint64_t x387 = 432615LLU;
	volatile uint32_t x388 = 97413279U;
	int32_t t68 = 14;

    t68 = ((x385+(x386*x387))!=x388);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x390 = 2U;
	volatile uint8_t x391 = 12U;
	static int32_t t69 = 39;

    t69 = ((x389+(x390*x391))!=x392);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x397 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t70 = 201730;

    t70 = ((x397+(x398*x399))!=x400);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x402 = INT16_MIN;
	volatile int32_t t71 = -3;

    t71 = ((x401+(x402*x403))!=x404);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x409 = 1;
	uint16_t x410 = 7490U;
	int16_t x412 = INT16_MIN;
	volatile int32_t t72 = -1;

    t72 = ((x409+(x410*x411))!=x412);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x414 = -1;
	static uint8_t x415 = 7U;
	int8_t x416 = -1;
	volatile int32_t t73 = -394;

    t73 = ((x413+(x414*x415))!=x416);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x421 = 28798U;
	int64_t x423 = -207892LL;
	static int8_t x424 = INT8_MIN;
	int32_t t74 = 572459264;

    t74 = ((x421+(x422*x423))!=x424);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x429 = UINT32_MAX;
	static int32_t x430 = INT32_MIN;
	static uint32_t x431 = 119659U;
	int32_t x432 = -45136;
	volatile int32_t t75 = 140;

    t75 = ((x429+(x430*x431))!=x432);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x433 = INT16_MIN;
	uint32_t x434 = 548432453U;
	int32_t x435 = INT32_MIN;
	static int32_t x436 = -532953;

    t76 = ((x433+(x434*x435))!=x436);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x442 = 1;
	volatile uint64_t x443 = 1360LLU;
	int32_t t77 = -175264607;

    t77 = ((x441+(x442*x443))!=x444);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x445 = -1;
	volatile uint64_t x446 = 3472910817034LLU;
	volatile uint16_t x447 = 16U;
	static uint8_t x448 = 0U;

    t78 = ((x445+(x446*x447))!=x448);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	volatile int32_t x454 = INT32_MAX;
	static uint32_t x455 = 6U;
	volatile int32_t t79 = -1;

    t79 = ((x453+(x454*x455))!=x456);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x457 = 12U;
	volatile int16_t x458 = -1;
	int16_t x459 = -1;
	int64_t x460 = INT64_MAX;
	volatile int32_t t80 = -536367924;

    t80 = ((x457+(x458*x459))!=x460);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x463 = -1;
	int64_t x464 = 227079163865326LL;
	int32_t t81 = -80277;

    t81 = ((x461+(x462*x463))!=x464);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x465 = 85341008154413802LL;
	uint8_t x467 = UINT8_MAX;
	int64_t x468 = 47829124LL;
	volatile int32_t t82 = 218;

    t82 = ((x465+(x466*x467))!=x468);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x469 = INT8_MIN;
	volatile int16_t x470 = INT16_MIN;
	uint64_t x471 = 4191LLU;
	int16_t x472 = INT16_MIN;
	int32_t t83 = -403;

    t83 = ((x469+(x470*x471))!=x472);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x485 = INT8_MAX;
	uint64_t x486 = 0LLU;
	int64_t x488 = -301189LL;
	static int32_t t84 = -113;

    t84 = ((x485+(x486*x487))!=x488);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x489 = -1;
	uint64_t x491 = 51816350726LLU;
	uint64_t x492 = UINT64_MAX;
	static volatile int32_t t85 = 26226275;

    t85 = ((x489+(x490*x491))!=x492);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x495 = 6U;
	int32_t t86 = 220312;

    t86 = ((x493+(x494*x495))!=x496);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x502 = -1;
	int64_t x503 = -1LL;
	volatile int32_t x504 = -74096940;
	volatile int32_t t87 = -234;

    t87 = ((x501+(x502*x503))!=x504);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x505 = -46208;
	volatile uint8_t x506 = UINT8_MAX;
	int16_t x508 = INT16_MAX;
	int32_t t88 = -7;

    t88 = ((x505+(x506*x507))!=x508);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x510 = -158123255820LL;
	uint32_t x511 = 111U;
	uint8_t x512 = 3U;
	int32_t t89 = 7;

    t89 = ((x509+(x510*x511))!=x512);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x513 = -1LL;
	int8_t x514 = INT8_MAX;
	volatile int64_t x515 = -182335716767497LL;
	uint32_t x516 = UINT32_MAX;
	volatile int32_t t90 = 478;

    t90 = ((x513+(x514*x515))!=x516);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x517 = UINT16_MAX;
	static int64_t x518 = -1LL;
	volatile uint16_t x519 = UINT16_MAX;
	uint8_t x520 = 62U;
	volatile int32_t t91 = -158;

    t91 = ((x517+(x518*x519))!=x520);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MAX;
	uint32_t x523 = UINT32_MAX;
	static int8_t x524 = 21;
	static volatile int32_t t92 = -373948399;

    t92 = ((x521+(x522*x523))!=x524);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x525 = 12LLU;
	uint64_t x526 = 9902605077384LLU;
	int64_t x527 = 47LL;
	uint64_t x528 = UINT64_MAX;

    t93 = ((x525+(x526*x527))!=x528);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x530 = UINT32_MAX;
	static uint8_t x532 = 1U;
	int32_t t94 = -79334379;

    t94 = ((x529+(x530*x531))!=x532);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x535 = -1;
	volatile int32_t t95 = 290;

    t95 = ((x533+(x534*x535))!=x536);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x537 = INT16_MAX;
	volatile int16_t x538 = -1;
	static uint16_t x539 = 237U;
	int16_t x540 = -1;
	volatile int32_t t96 = 1;

    t96 = ((x537+(x538*x539))!=x540);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x541 = INT8_MAX;
	uint64_t x542 = UINT64_MAX;
	int16_t x543 = -1;
	int64_t x544 = -1LL;
	int32_t t97 = 6400173;

    t97 = ((x541+(x542*x543))!=x544);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x549 = INT64_MAX;
	int32_t x550 = INT32_MIN;
	int64_t x551 = 898590899LL;
	uint64_t x552 = 15452998590LLU;

    t98 = ((x549+(x550*x551))!=x552);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x553 = 1014LL;
	int16_t x555 = INT16_MIN;
	int32_t x556 = INT32_MIN;
	volatile int32_t t99 = 79;

    t99 = ((x553+(x554*x555))!=x556);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x557 = 2U;
	volatile int16_t x558 = INT16_MAX;
	uint64_t x559 = 1090193526LLU;
	int8_t x560 = INT8_MAX;

    t100 = ((x557+(x558*x559))!=x560);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x561 = INT16_MAX;
	int64_t x562 = -1LL;
	volatile uint32_t x563 = 169289073U;
	static int16_t x564 = 926;
	volatile int32_t t101 = 24427;

    t101 = ((x561+(x562*x563))!=x564);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x565 = INT8_MAX;
	volatile uint8_t x566 = 2U;
	uint32_t x567 = UINT32_MAX;
	int32_t t102 = 10;

    t102 = ((x565+(x566*x567))!=x568);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x577 = INT16_MAX;
	volatile uint32_t x578 = UINT32_MAX;
	int32_t x579 = -1;
	uint32_t x580 = UINT32_MAX;
	int32_t t103 = -1;

    t103 = ((x577+(x578*x579))!=x580);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x581 = INT8_MIN;
	static uint8_t x582 = UINT8_MAX;
	static volatile int64_t x583 = -3941407LL;
	static int32_t t104 = 45800826;

    t104 = ((x581+(x582*x583))!=x584);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x585 = INT8_MAX;
	uint8_t x587 = 4U;
	int32_t x588 = INT32_MIN;
	volatile int32_t t105 = -78561302;

    t105 = ((x585+(x586*x587))!=x588);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x589 = INT16_MIN;
	static int64_t x591 = 3640353125362LL;
	int16_t x592 = -1;
	static int32_t t106 = 55360830;

    t106 = ((x589+(x590*x591))!=x592);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x594 = 8;
	int64_t x595 = -4962920412723LL;
	volatile int16_t x596 = -457;
	volatile int32_t t107 = -34930937;

    t107 = ((x593+(x594*x595))!=x596);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x597 = INT64_MIN;
	static int16_t x598 = -1;
	int64_t x599 = -1LL;
	uint64_t x600 = UINT64_MAX;

    t108 = ((x597+(x598*x599))!=x600);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x601 = 213920973U;
	int16_t x602 = -1;
	int16_t x603 = INT16_MIN;
	int32_t t109 = 624858413;

    t109 = ((x601+(x602*x603))!=x604);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x605 = -1;
	volatile int16_t x607 = INT16_MIN;
	uint16_t x608 = 4U;
	int32_t t110 = -148;

    t110 = ((x605+(x606*x607))!=x608);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x609 = UINT32_MAX;
	volatile uint8_t x610 = UINT8_MAX;
	int64_t x611 = -204LL;
	int16_t x612 = INT16_MIN;
	volatile int32_t t111 = -1;

    t111 = ((x609+(x610*x611))!=x612);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x613 = 48U;
	int16_t x614 = INT16_MIN;
	static uint64_t x615 = UINT64_MAX;

    t112 = ((x613+(x614*x615))!=x616);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x621 = UINT32_MAX;
	volatile int8_t x622 = INT8_MIN;
	uint64_t x623 = 8322029905903108LLU;
	static volatile int8_t x624 = -6;

    t113 = ((x621+(x622*x623))!=x624);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x626 = UINT64_MAX;
	int8_t x627 = -1;
	int32_t x628 = -25919086;
	int32_t t114 = -2032929;

    t114 = ((x625+(x626*x627))!=x628);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x629 = -16941614;
	uint32_t x631 = 44568932U;
	uint8_t x632 = 0U;
	volatile int32_t t115 = -3;

    t115 = ((x629+(x630*x631))!=x632);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x633 = UINT32_MAX;
	uint16_t x634 = 3U;
	int16_t x635 = INT16_MIN;
	uint64_t x636 = 56545403682LLU;
	int32_t t116 = 3676;

    t116 = ((x633+(x634*x635))!=x636);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x637 = 23;
	int8_t x640 = INT8_MIN;
	int32_t t117 = -2363;

    t117 = ((x637+(x638*x639))!=x640);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x641 = INT32_MAX;
	uint64_t x642 = 7786307269719590314LLU;
	static uint8_t x643 = 35U;
	uint16_t x644 = 14U;

    t118 = ((x641+(x642*x643))!=x644);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x646 = 82399712227899244LLU;
	static int32_t x647 = -7398350;
	int32_t x648 = 721235;
	static int32_t t119 = 11785744;

    t119 = ((x645+(x646*x647))!=x648);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x649 = INT8_MIN;
	volatile int8_t x651 = -56;
	static uint8_t x652 = UINT8_MAX;
	int32_t t120 = 68;

    t120 = ((x649+(x650*x651))!=x652);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x657 = -1;
	volatile uint64_t x658 = 29904799594LLU;
	int64_t x659 = INT64_MAX;
	int16_t x660 = INT16_MIN;
	int32_t t121 = -12482494;

    t121 = ((x657+(x658*x659))!=x660);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x661 = 3;
	int64_t x662 = -3903129915612LL;
	volatile int16_t x664 = INT16_MIN;
	int32_t t122 = 254733791;

    t122 = ((x661+(x662*x663))!=x664);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x665 = 41U;
	int64_t x667 = -856977038834427LL;
	static int32_t x668 = 53898;
	volatile int32_t t123 = -40940;

    t123 = ((x665+(x666*x667))!=x668);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x673 = 8175613;
	int16_t x674 = 37;
	uint32_t x675 = 743507284U;
	int8_t x676 = INT8_MIN;
	volatile int32_t t124 = 341180;

    t124 = ((x673+(x674*x675))!=x676);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x681 = -1;
	int8_t x684 = INT8_MAX;

    t125 = ((x681+(x682*x683))!=x684);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x689 = 0;
	int16_t x690 = 106;
	static volatile int32_t t126 = 82945796;

    t126 = ((x689+(x690*x691))!=x692);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x697 = INT16_MIN;
	int64_t x698 = -1LL;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t t127 = -45794577;

    t127 = ((x697+(x698*x699))!=x700);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x701 = INT64_MAX;
	uint64_t x703 = UINT64_MAX;
	static volatile int8_t x704 = 13;
	volatile int32_t t128 = 125764877;

    t128 = ((x701+(x702*x703))!=x704);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x706 = UINT16_MAX;
	int8_t x707 = -1;
	int32_t x708 = 16;
	int32_t t129 = -35;

    t129 = ((x705+(x706*x707))!=x708);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x709 = 1532LLU;
	uint16_t x710 = UINT16_MAX;
	static uint16_t x712 = UINT16_MAX;
	int32_t t130 = 3389678;

    t130 = ((x709+(x710*x711))!=x712);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x713 = 65529503106LLU;
	uint8_t x714 = 4U;
	int64_t x715 = -1LL;
	int32_t t131 = -524682;

    t131 = ((x713+(x714*x715))!=x716);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x717 = 129245973022906371LLU;
	static int32_t x718 = 24215;
	uint64_t x719 = 1656440LLU;
	static int16_t x720 = -163;
	int32_t t132 = -28;

    t132 = ((x717+(x718*x719))!=x720);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x725 = 851227752081LLU;
	static int8_t x726 = -1;
	uint8_t x727 = UINT8_MAX;
	int8_t x728 = INT8_MIN;

    t133 = ((x725+(x726*x727))!=x728);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x737 = INT16_MAX;
	static volatile uint16_t x738 = UINT16_MAX;
	volatile uint16_t x739 = 0U;
	static int32_t x740 = -1;
	volatile int32_t t134 = 242994;

    t134 = ((x737+(x738*x739))!=x740);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x741 = UINT32_MAX;
	int32_t x742 = -1;
	volatile int16_t x743 = -13;
	uint16_t x744 = 14677U;
	volatile int32_t t135 = -5508136;

    t135 = ((x741+(x742*x743))!=x744);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x747 = INT64_MIN;
	static int8_t x748 = -1;
	volatile int32_t t136 = -44013235;

    t136 = ((x745+(x746*x747))!=x748);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x749 = -1860117;
	int64_t x750 = -2451467LL;
	int16_t x751 = INT16_MIN;
	uint16_t x752 = 4023U;
	int32_t t137 = -13534;

    t137 = ((x749+(x750*x751))!=x752);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x758 = 27U;
	static uint64_t x759 = UINT64_MAX;
	int8_t x760 = -1;
	static volatile int32_t t138 = -89;

    t138 = ((x757+(x758*x759))!=x760);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x769 = UINT8_MAX;
	int64_t x771 = 6370787594175661LL;
	static uint32_t x772 = 345004U;
	volatile int32_t t139 = 1;

    t139 = ((x769+(x770*x771))!=x772);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x774 = UINT32_MAX;
	uint64_t x775 = 64061666218047LLU;
	volatile uint16_t x776 = 629U;
	volatile int32_t t140 = 17450;

    t140 = ((x773+(x774*x775))!=x776);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x777 = -46115;
	int8_t x778 = INT8_MAX;
	int64_t x779 = -1LL;
	static int8_t x780 = INT8_MAX;
	volatile int32_t t141 = 367374176;

    t141 = ((x777+(x778*x779))!=x780);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x781 = -1;
	uint64_t x783 = UINT64_MAX;
	uint32_t x784 = 367842946U;

    t142 = ((x781+(x782*x783))!=x784);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x785 = -635558952994699LL;
	int8_t x786 = INT8_MIN;
	int8_t x787 = INT8_MAX;
	volatile uint32_t x788 = 1361648690U;
	int32_t t143 = -1;

    t143 = ((x785+(x786*x787))!=x788);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x789 = 611;
	static uint64_t x791 = 74748LLU;
	volatile int32_t t144 = 29877;

    t144 = ((x789+(x790*x791))!=x792);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x794 = INT32_MAX;
	uint64_t x795 = UINT64_MAX;
	static uint16_t x796 = 2027U;
	volatile int32_t t145 = -25;

    t145 = ((x793+(x794*x795))!=x796);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x801 = 3553842447023LL;
	uint64_t x802 = UINT64_MAX;
	int64_t x803 = INT64_MAX;
	volatile uint8_t x804 = 63U;
	volatile int32_t t146 = -175057;

    t146 = ((x801+(x802*x803))!=x804);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x805 = INT16_MIN;
	uint16_t x806 = 0U;
	volatile uint32_t x807 = UINT32_MAX;
	int64_t x808 = INT64_MAX;
	volatile int32_t t147 = 6748;

    t147 = ((x805+(x806*x807))!=x808);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x809 = 0U;
	uint8_t x810 = 41U;
	int8_t x812 = 0;
	int32_t t148 = -109;

    t148 = ((x809+(x810*x811))!=x812);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x813 = 389495U;
	uint64_t x814 = 16789810974047811LLU;
	int64_t x816 = -23585LL;
	static volatile int32_t t149 = 3128;

    t149 = ((x813+(x814*x815))!=x816);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x817 = -1LL;
	uint8_t x818 = UINT8_MAX;
	int16_t x819 = -994;
	int16_t x820 = 13180;
	volatile int32_t t150 = -358422;

    t150 = ((x817+(x818*x819))!=x820);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x821 = 21U;
	uint64_t x822 = 892003963061050647LLU;
	int32_t x824 = INT32_MIN;
	int32_t t151 = 1;

    t151 = ((x821+(x822*x823))!=x824);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x825 = UINT64_MAX;
	int16_t x826 = INT16_MIN;
	volatile int32_t t152 = -9011;

    t152 = ((x825+(x826*x827))!=x828);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x829 = INT32_MAX;
	int16_t x830 = 206;
	uint64_t x831 = UINT64_MAX;
	volatile int32_t t153 = 10860218;

    t153 = ((x829+(x830*x831))!=x832);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x837 = 513651540067LLU;
	uint64_t x838 = 130557LLU;
	uint16_t x839 = 2171U;
	uint32_t x840 = UINT32_MAX;

    t154 = ((x837+(x838*x839))!=x840);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x846 = INT64_MAX;
	int16_t x847 = -1;
	int32_t t155 = -980;

    t155 = ((x845+(x846*x847))!=x848);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x849 = 2U;
	int8_t x850 = INT8_MAX;
	int16_t x851 = INT16_MAX;
	uint16_t x852 = 190U;
	static volatile int32_t t156 = -9;

    t156 = ((x849+(x850*x851))!=x852);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x853 = 6605866U;
	uint64_t x854 = 4905230090322523LLU;
	int32_t x856 = INT32_MIN;
	int32_t t157 = 0;

    t157 = ((x853+(x854*x855))!=x856);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x857 = INT16_MIN;
	uint64_t x858 = 2LLU;
	uint16_t x859 = UINT16_MAX;
	uint32_t x860 = 110U;

    t158 = ((x857+(x858*x859))!=x860);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x861 = 207LLU;
	int16_t x862 = INT16_MAX;
	uint32_t x863 = 490U;
	int32_t t159 = -381642269;

    t159 = ((x861+(x862*x863))!=x864);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x865 = UINT8_MAX;
	volatile uint64_t x866 = UINT64_MAX;
	uint32_t x867 = 281095330U;
	volatile int32_t x868 = INT32_MAX;
	volatile int32_t t160 = -56;

    t160 = ((x865+(x866*x867))!=x868);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x881 = UINT64_MAX;
	static volatile uint64_t x882 = 7422592LLU;
	static int16_t x883 = -2106;
	int32_t x884 = INT32_MIN;
	int32_t t161 = -45988569;

    t161 = ((x881+(x882*x883))!=x884);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x901 = UINT8_MAX;
	static volatile uint16_t x902 = 3670U;
	volatile uint64_t x903 = UINT64_MAX;
	int32_t x904 = 130323141;

    t162 = ((x901+(x902*x903))!=x904);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x909 = INT16_MIN;
	volatile int32_t x910 = -18;
	int16_t x911 = INT16_MIN;
	static int8_t x912 = -43;
	volatile int32_t t163 = 88776961;

    t163 = ((x909+(x910*x911))!=x912);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x913 = -787645;
	volatile uint16_t x914 = UINT16_MAX;
	int64_t x915 = -1490170682LL;
	static int32_t x916 = -1;
	static int32_t t164 = -998289912;

    t164 = ((x913+(x914*x915))!=x916);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x918 = UINT8_MAX;
	int16_t x919 = INT16_MIN;
	int16_t x920 = INT16_MIN;
	volatile int32_t t165 = -1;

    t165 = ((x917+(x918*x919))!=x920);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x921 = 1;
	int8_t x923 = INT8_MIN;
	int64_t x924 = -9150256808275434LL;
	volatile int32_t t166 = 6377988;

    t166 = ((x921+(x922*x923))!=x924);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x929 = 63859022;
	volatile uint32_t x930 = UINT32_MAX;
	static int8_t x931 = INT8_MIN;
	volatile int64_t x932 = INT64_MIN;
	int32_t t167 = -4;

    t167 = ((x929+(x930*x931))!=x932);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x937 = INT16_MAX;
	int8_t x938 = INT8_MIN;
	volatile int8_t x939 = -1;
	int64_t x940 = INT64_MIN;

    t168 = ((x937+(x938*x939))!=x940);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x941 = INT8_MIN;
	uint32_t x942 = 196907262U;
	int16_t x943 = INT16_MIN;
	volatile int32_t t169 = 25;

    t169 = ((x941+(x942*x943))!=x944);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x949 = 47141015LLU;
	uint64_t x951 = 81711586847160LLU;
	int64_t x952 = INT64_MIN;
	static int32_t t170 = 78;

    t170 = ((x949+(x950*x951))!=x952);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x954 = 4U;
	volatile int16_t x956 = INT16_MIN;
	int32_t t171 = 26191;

    t171 = ((x953+(x954*x955))!=x956);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x957 = -1LL;
	uint8_t x958 = UINT8_MAX;
	int64_t x959 = -1LL;
	int32_t t172 = 84;

    t172 = ((x957+(x958*x959))!=x960);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x961 = 26461U;
	static uint32_t x962 = 1479356U;
	static int16_t x963 = INT16_MAX;
	uint8_t x964 = UINT8_MAX;

    t173 = ((x961+(x962*x963))!=x964);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x965 = INT8_MIN;
	static uint16_t x966 = 1992U;
	int8_t x967 = -1;
	int32_t x968 = INT32_MAX;

    t174 = ((x965+(x966*x967))!=x968);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x969 = INT8_MIN;
	uint32_t x970 = 550140U;
	int16_t x972 = -1;
	int32_t t175 = 1988;

    t175 = ((x969+(x970*x971))!=x972);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x973 = UINT16_MAX;
	uint64_t x974 = 3380618LLU;
	int32_t x975 = 784095871;
	volatile int16_t x976 = -231;
	volatile int32_t t176 = -29;

    t176 = ((x973+(x974*x975))!=x976);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x989 = -7;
	int16_t x990 = -405;
	int8_t x991 = -1;
	static int8_t x992 = 1;
	int32_t t177 = -74087;

    t177 = ((x989+(x990*x991))!=x992);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x993 = UINT16_MAX;
	uint64_t x994 = UINT64_MAX;
	uint32_t x995 = UINT32_MAX;
	volatile int32_t t178 = 1;

    t178 = ((x993+(x994*x995))!=x996);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x997 = -1;
	volatile uint32_t x999 = UINT32_MAX;
	int64_t x1000 = INT64_MAX;
	volatile int32_t t179 = -13;

    t179 = ((x997+(x998*x999))!=x1000);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1013 = 29728U;
	int16_t x1014 = INT16_MAX;
	uint16_t x1015 = 3770U;
	uint32_t x1016 = 1156167U;
	int32_t t180 = 0;

    t180 = ((x1013+(x1014*x1015))!=x1016);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1018 = 2;
	int32_t x1019 = -86;
	static int32_t t181 = -12690898;

    t181 = ((x1017+(x1018*x1019))!=x1020);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1021 = 354U;
	volatile uint8_t x1022 = UINT8_MAX;
	static volatile int32_t t182 = 78879231;

    t182 = ((x1021+(x1022*x1023))!=x1024);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1027 = INT8_MIN;
	int64_t x1028 = INT64_MAX;
	static volatile int32_t t183 = -5448;

    t183 = ((x1025+(x1026*x1027))!=x1028);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1034 = 259852;
	uint64_t x1035 = 1417LLU;
	static int32_t x1036 = INT32_MIN;
	static int32_t t184 = -388435;

    t184 = ((x1033+(x1034*x1035))!=x1036);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1045 = INT8_MAX;
	static int16_t x1046 = -1;
	volatile uint64_t x1047 = 12LLU;
	int32_t x1048 = -1;
	volatile int32_t t185 = 620857;

    t185 = ((x1045+(x1046*x1047))!=x1048);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1054 = INT8_MIN;
	int32_t x1056 = INT32_MAX;
	volatile int32_t t186 = 225;

    t186 = ((x1053+(x1054*x1055))!=x1056);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1059 = 0U;
	int16_t x1060 = INT16_MIN;
	int32_t t187 = 162;

    t187 = ((x1057+(x1058*x1059))!=x1060);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1061 = UINT32_MAX;
	static int64_t x1062 = INT64_MIN;
	uint64_t x1063 = 192430298187231219LLU;
	int16_t x1064 = -1;
	volatile int32_t t188 = 3322152;

    t188 = ((x1061+(x1062*x1063))!=x1064);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1066 = 13419;
	uint16_t x1067 = UINT16_MAX;
	int8_t x1068 = 15;

    t189 = ((x1065+(x1066*x1067))!=x1068);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1069 = UINT64_MAX;
	volatile int16_t x1070 = -1;
	static int64_t x1071 = -34873849359768LL;
	int32_t t190 = 89748101;

    t190 = ((x1069+(x1070*x1071))!=x1072);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1073 = -1LL;
	static uint64_t x1075 = UINT64_MAX;
	static volatile int32_t t191 = 90797;

    t191 = ((x1073+(x1074*x1075))!=x1076);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1078 = INT8_MIN;
	uint64_t x1079 = 5571666502165402LLU;
	static uint8_t x1080 = 3U;
	int32_t t192 = 277839854;

    t192 = ((x1077+(x1078*x1079))!=x1080);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1086 = -1;
	volatile int32_t t193 = -130478;

    t193 = ((x1085+(x1086*x1087))!=x1088);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1089 = 419U;
	int32_t x1090 = 206191;
	volatile int64_t x1091 = 5112849LL;
	volatile int16_t x1092 = INT16_MAX;
	int32_t t194 = 268;

    t194 = ((x1089+(x1090*x1091))!=x1092);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1098 = 730888LL;
	uint16_t x1099 = 160U;
	volatile int32_t t195 = 224366;

    t195 = ((x1097+(x1098*x1099))!=x1100);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1101 = -2003;
	volatile uint32_t x1102 = 7236U;
	int8_t x1103 = -1;
	int8_t x1104 = 1;
	volatile int32_t t196 = 57;

    t196 = ((x1101+(x1102*x1103))!=x1104);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1105 = UINT16_MAX;
	volatile uint16_t x1106 = 1U;
	int32_t x1107 = INT32_MIN;
	static uint64_t x1108 = UINT64_MAX;
	volatile int32_t t197 = 2;

    t197 = ((x1105+(x1106*x1107))!=x1108);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1118 = -1;
	int64_t x1120 = INT64_MIN;
	volatile int32_t t198 = -679;

    t198 = ((x1117+(x1118*x1119))!=x1120);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1121 = 0;
	int64_t x1122 = INT64_MAX;
	uint64_t x1123 = 4544400465467LLU;
	volatile int32_t t199 = 13;

    t199 = ((x1121+(x1122*x1123))!=x1124);

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

