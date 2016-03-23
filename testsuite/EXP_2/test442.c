
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

static uint16_t x2 = UINT16_MAX;
int16_t x4 = INT16_MIN;
static uint8_t x15 = UINT8_MAX;
uint16_t x32 = 2246U;
int8_t x33 = 56;
int8_t x64 = INT8_MAX;
int16_t x68 = 685;
int16_t x81 = -1;
volatile uint32_t x99 = 15719U;
static uint8_t x100 = 97U;
static volatile int32_t t17 = 266;
int16_t x126 = -1;
volatile int8_t x143 = INT8_MAX;
int8_t x146 = 21;
int64_t x148 = 1882158691LL;
int32_t x150 = -65914;
static int8_t x152 = -1;
static volatile uint16_t x154 = UINT16_MAX;
int8_t x155 = -7;
int8_t x157 = INT8_MIN;
uint32_t x158 = UINT32_MAX;
uint16_t x162 = 6U;
int32_t x185 = -1;
volatile int32_t t33 = -40;
int8_t x198 = INT8_MIN;
int8_t x202 = -1;
volatile int32_t t35 = -7575741;
uint8_t x214 = UINT8_MAX;
static uint16_t x219 = 2U;
volatile int32_t t38 = 35776;
volatile uint8_t x226 = 1U;
int16_t x228 = INT16_MAX;
static int64_t x236 = INT64_MIN;
int8_t x240 = INT8_MAX;
uint8_t x246 = 2U;
static int16_t x247 = -1;
volatile int32_t t45 = -316075;
int32_t x249 = 80874435;
uint32_t x268 = UINT32_MAX;
volatile int32_t t52 = -40426354;
int8_t x285 = -1;
int32_t x287 = INT32_MIN;
static uint8_t x290 = 2U;
static int8_t x299 = -30;
int16_t x300 = INT16_MIN;
uint16_t x306 = 145U;
int8_t x307 = -1;
int64_t x312 = -898LL;
int8_t x318 = INT8_MIN;
int8_t x320 = -1;
uint64_t x325 = 3438774061641214LLU;
static uint8_t x327 = 1U;
int16_t x328 = -1;
uint16_t x335 = 325U;
volatile int32_t t65 = 26;
int16_t x341 = INT16_MAX;
int32_t t66 = 1172;
uint32_t x360 = UINT32_MAX;
volatile uint64_t x368 = 5306LLU;
volatile uint64_t x380 = 299911360185LLU;
uint16_t x390 = UINT16_MAX;
volatile int16_t x398 = INT16_MIN;
uint32_t x409 = 1620141755U;
uint16_t x416 = UINT16_MAX;
volatile int32_t t76 = 4248;
int32_t x434 = -242230494;
uint16_t x435 = 7U;
volatile uint16_t x436 = UINT16_MAX;
int8_t x441 = INT8_MAX;
int64_t x445 = -206849240LL;
int16_t x451 = -1;
int16_t x455 = INT16_MAX;
int64_t x468 = -1LL;
int32_t t84 = -234;
volatile int32_t t85 = -1;
uint16_t x481 = 16365U;
int32_t t86 = 473242;
static uint16_t x492 = 0U;
int16_t x497 = INT16_MIN;
int8_t x499 = INT8_MAX;
int64_t x505 = INT64_MAX;
volatile int8_t x507 = 1;
volatile int32_t t90 = 1;
int32_t t92 = 30914;
static int32_t x528 = INT32_MIN;
volatile int32_t t93 = 1829406;
int16_t x538 = -1;
uint8_t x542 = 12U;
int32_t t98 = -122855;
int16_t x552 = -1;
static int32_t x559 = -10950;
int32_t t100 = 2314;
int16_t x570 = -3532;
static int16_t x577 = -246;
volatile uint32_t x580 = 4216193U;
static int16_t x582 = -59;
volatile int32_t x592 = 1069183904;
static uint64_t x593 = UINT64_MAX;
static uint64_t x594 = 38LLU;
uint32_t x596 = 468589210U;
static uint16_t x617 = 357U;
uint16_t x618 = 121U;
uint8_t x623 = UINT8_MAX;
static int16_t x629 = 22;
int16_t x631 = INT16_MAX;
int32_t x640 = INT32_MIN;
volatile int32_t t112 = -20387;
int8_t x647 = -3;
int32_t x654 = -197573;
static int32_t t115 = -991678476;
volatile int32_t x659 = -17;
volatile int32_t t116 = -2747192;
int32_t x665 = -1;
int16_t x671 = -1;
uint64_t x678 = UINT64_MAX;
volatile uint64_t x681 = UINT64_MAX;
int8_t x682 = -1;
int16_t x686 = INT16_MIN;
int64_t x689 = -1LL;
uint8_t x698 = UINT8_MAX;
int8_t x699 = -1;
int16_t x700 = -1;
volatile int8_t x710 = INT8_MIN;
int32_t x721 = INT32_MIN;
uint8_t x723 = UINT8_MAX;
static int32_t x725 = INT32_MAX;
volatile int64_t x729 = INT64_MIN;
uint16_t x751 = 10U;
int32_t t134 = 70132694;
static int32_t t135 = -8;
int64_t x757 = 2093202686198LL;
volatile int8_t x780 = -2;
uint8_t x784 = UINT8_MAX;
static volatile uint8_t x785 = 0U;
static int64_t x792 = INT64_MIN;
int8_t x817 = INT8_MIN;
static int16_t x823 = -213;
uint8_t x824 = 31U;
int8_t x828 = -2;
uint16_t x833 = UINT16_MAX;
volatile int32_t x836 = -28621;
volatile uint64_t x839 = UINT64_MAX;
uint64_t x840 = 2249308442765LLU;
uint8_t x876 = 22U;
int8_t x887 = INT8_MIN;
uint16_t x893 = 80U;
uint16_t x897 = UINT16_MAX;
int64_t x909 = INT64_MAX;
volatile int32_t t161 = -60858472;
int32_t t164 = -461;
int32_t x929 = 3;
uint8_t x937 = 3U;
static int8_t x938 = INT8_MIN;
uint32_t x942 = 3150945U;
uint8_t x950 = UINT8_MAX;
int32_t x956 = INT32_MIN;
static int16_t x957 = 144;
int32_t x960 = INT32_MIN;
int32_t t172 = 165;
uint8_t x965 = 45U;
static int16_t x1000 = -1;
int8_t x1006 = INT8_MIN;
int16_t x1012 = 13;
int32_t t179 = 94027002;
volatile int8_t x1015 = 12;
int32_t x1017 = INT32_MAX;
int16_t x1020 = 4289;
static int64_t x1021 = INT64_MAX;
static volatile int32_t t182 = -963792;
uint8_t x1034 = 4U;
int32_t x1040 = 1153950;
volatile int32_t t185 = -91254;
int32_t x1045 = 98719;
volatile int32_t t188 = 0;
uint8_t x1059 = 59U;
int8_t x1061 = INT8_MIN;
static int16_t x1063 = 6731;
int32_t t191 = -565639;
static int64_t x1073 = -30606LL;
uint64_t x1079 = 26417002784874LLU;
uint32_t x1082 = 14141U;
int64_t x1087 = -17699505314715320LL;
volatile int32_t t197 = -35612787;
int16_t x1101 = 742;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	uint64_t x3 = 178911863408545212LLU;
	int32_t t0 = -1715805;

    t0 = ((x1/(x2*x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MAX;
	int8_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MAX;
	volatile int32_t t1 = -156941;

    t1 = ((x9/(x10*x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 64768246U;
	static int16_t x14 = INT16_MIN;
	int8_t x16 = INT8_MAX;
	static volatile int32_t t2 = -1375287;

    t2 = ((x13/(x14*x15))==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = -1;
	volatile int32_t x26 = 1;
	uint16_t x27 = 4222U;
	static uint32_t x28 = 3456U;
	volatile int32_t t3 = -1784;

    t3 = ((x25/(x26*x27))==x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = INT8_MIN;
	int32_t x30 = -1;
	static volatile int8_t x31 = INT8_MAX;
	volatile int32_t t4 = 58372147;

    t4 = ((x29/(x30*x31))==x32);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x34 = UINT64_MAX;
	int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t5 = 426277;

    t5 = ((x33/(x34*x35))==x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x37 = 3811U;
	static uint32_t x38 = 75U;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 110U;
	int32_t t6 = -19;

    t6 = ((x37/(x38*x39))==x40);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x45 = -1;
	int16_t x46 = -1;
	uint8_t x47 = 11U;
	volatile int64_t x48 = -1LL;
	static int32_t t7 = 2237;

    t7 = ((x45/(x46*x47))==x48);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x49 = INT64_MAX;
	volatile int8_t x50 = INT8_MIN;
	uint16_t x51 = UINT16_MAX;
	uint32_t x52 = UINT32_MAX;
	int32_t t8 = -1;

    t8 = ((x49/(x50*x51))==x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x53 = 1535712052LLU;
	int8_t x54 = -1;
	static volatile uint64_t x55 = 66881709352LLU;
	static uint16_t x56 = UINT16_MAX;
	int32_t t9 = 6211859;

    t9 = ((x53/(x54*x55))==x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x57 = 8808U;
	int8_t x58 = INT8_MIN;
	int8_t x59 = 7;
	uint32_t x60 = UINT32_MAX;
	int32_t t10 = -1;

    t10 = ((x57/(x58*x59))==x60);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x61 = 41U;
	static int32_t x62 = -6;
	int32_t x63 = -1;
	volatile int32_t t11 = -5738;

    t11 = ((x61/(x62*x63))==x64);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MAX;
	uint16_t x67 = 500U;
	static int32_t t12 = 107944573;

    t12 = ((x65/(x66*x67))==x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x77 = 5U;
	static int8_t x78 = INT8_MIN;
	uint8_t x79 = 1U;
	static uint16_t x80 = UINT16_MAX;
	int32_t t13 = 6267229;

    t13 = ((x77/(x78*x79))==x80);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x82 = INT16_MAX;
	int8_t x83 = -1;
	volatile uint64_t x84 = UINT64_MAX;
	volatile int32_t t14 = -2052210;

    t14 = ((x81/(x82*x83))==x84);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x85 = 0U;
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;
	int32_t t15 = 5280688;

    t15 = ((x85/(x86*x87))==x88);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	static int64_t x94 = -1LL;
	int16_t x95 = 7726;
	uint8_t x96 = UINT8_MAX;
	static volatile int32_t t16 = 2;

    t16 = ((x93/(x94*x95))==x96);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x97 = 1U;
	int8_t x98 = 1;

    t17 = ((x97/(x98*x99))==x100);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x101 = -3;
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MIN;
	volatile int64_t x104 = 0LL;
	volatile int32_t t18 = -446;

    t18 = ((x101/(x102*x103))==x104);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x113 = INT64_MAX;
	int16_t x114 = -1;
	int8_t x115 = 59;
	static uint32_t x116 = 16U;
	static volatile int32_t t19 = -12348;

    t19 = ((x113/(x114*x115))==x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x117 = INT8_MIN;
	static int32_t x118 = 207;
	static int8_t x119 = -6;
	int32_t x120 = INT32_MIN;
	int32_t t20 = 26128231;

    t20 = ((x117/(x118*x119))==x120);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x121 = 5755U;
	uint8_t x122 = 31U;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = 12U;
	static volatile int32_t t21 = -7723938;

    t21 = ((x121/(x122*x123))==x124);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x125 = INT16_MAX;
	int16_t x127 = -1;
	int64_t x128 = 157234627506614LL;
	static volatile int32_t t22 = -7559;

    t22 = ((x125/(x126*x127))==x128);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x133 = INT16_MIN;
	uint32_t x134 = 1U;
	int16_t x135 = -229;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t23 = -1;

    t23 = ((x133/(x134*x135))==x136);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x137 = INT32_MAX;
	uint16_t x138 = 969U;
	uint16_t x139 = 2U;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t24 = 227;

    t24 = ((x137/(x138*x139))==x140);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x141 = INT16_MAX;
	volatile uint8_t x142 = 37U;
	uint8_t x144 = 10U;
	int32_t t25 = 0;

    t25 = ((x141/(x142*x143))==x144);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x145 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	int32_t t26 = -21474;

    t26 = ((x145/(x146*x147))==x148);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x149 = 1816U;
	uint64_t x151 = UINT64_MAX;
	int32_t t27 = -987979811;

    t27 = ((x149/(x150*x151))==x152);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x153 = UINT32_MAX;
	static int32_t x156 = INT32_MIN;
	int32_t t28 = -343976;

    t28 = ((x153/(x154*x155))==x156);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x159 = 19U;
	static int16_t x160 = 254;
	volatile int32_t t29 = 6489;

    t29 = ((x157/(x158*x159))==x160);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x161 = -947957767;
	static volatile int32_t x163 = 6163;
	uint8_t x164 = 5U;
	volatile int32_t t30 = 27411;

    t30 = ((x161/(x162*x163))==x164);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x165 = 3U;
	int8_t x166 = INT8_MIN;
	int32_t x167 = -1;
	static int16_t x168 = INT16_MAX;
	int32_t t31 = 4;

    t31 = ((x165/(x166*x167))==x168);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x169 = -3;
	static int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = -1LL;
	static volatile int32_t t32 = 21125;

    t32 = ((x169/(x170*x171))==x172);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x186 = INT8_MIN;
	uint16_t x187 = 5U;
	int32_t x188 = INT32_MIN;

    t33 = ((x185/(x186*x187))==x188);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x197 = INT16_MAX;
	uint64_t x199 = 5295LLU;
	uint64_t x200 = 495763322945527LLU;
	volatile int32_t t34 = -1665;

    t34 = ((x197/(x198*x199))==x200);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x201 = INT8_MAX;
	volatile int64_t x203 = INT64_MAX;
	volatile int8_t x204 = -1;

    t35 = ((x201/(x202*x203))==x204);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MAX;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t36 = 15;

    t36 = ((x209/(x210*x211))==x212);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x213 = INT8_MIN;
	volatile int16_t x215 = -13;
	int64_t x216 = -2LL;
	volatile int32_t t37 = 12;

    t37 = ((x213/(x214*x215))==x216);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x217 = 13605587406194843LL;
	int32_t x218 = -1;
	int16_t x220 = INT16_MIN;

    t38 = ((x217/(x218*x219))==x220);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	static int32_t x222 = 70;
	uint32_t x223 = 6406U;
	int16_t x224 = -10;
	int32_t t39 = 102830358;

    t39 = ((x221/(x222*x223))==x224);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x225 = 42;
	static int32_t x227 = -12203;
	int32_t t40 = 8;

    t40 = ((x225/(x226*x227))==x228);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x229 = INT8_MIN;
	static uint16_t x230 = 25237U;
	int64_t x231 = -1LL;
	uint32_t x232 = 1570140357U;
	static volatile int32_t t41 = 442633446;

    t41 = ((x229/(x230*x231))==x232);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x233 = -840697350;
	volatile int8_t x234 = INT8_MIN;
	static int64_t x235 = -51LL;
	static volatile int32_t t42 = -498151;

    t42 = ((x233/(x234*x235))==x236);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x237 = INT16_MIN;
	static int32_t x238 = -1;
	static int8_t x239 = INT8_MIN;
	static volatile int32_t t43 = 100564;

    t43 = ((x237/(x238*x239))==x240);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x241 = -1;
	volatile uint8_t x242 = 113U;
	static uint32_t x243 = UINT32_MAX;
	int32_t x244 = 19493818;
	int32_t t44 = 32;

    t44 = ((x241/(x242*x243))==x244);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x245 = UINT8_MAX;
	volatile int16_t x248 = 4734;

    t45 = ((x245/(x246*x247))==x248);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 94378728U;
	static uint32_t x252 = 624929091U;
	static volatile int32_t t46 = 8137;

    t46 = ((x249/(x250*x251))==x252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x253 = UINT64_MAX;
	static uint64_t x254 = UINT64_MAX;
	volatile int16_t x255 = INT16_MIN;
	volatile int8_t x256 = INT8_MIN;
	int32_t t47 = -14747;

    t47 = ((x253/(x254*x255))==x256);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x257 = 266;
	int32_t x258 = -1;
	int8_t x259 = -6;
	uint32_t x260 = 924U;
	volatile int32_t t48 = -38363;

    t48 = ((x257/(x258*x259))==x260);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x261 = INT32_MIN;
	static uint8_t x262 = 50U;
	uint16_t x263 = 707U;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t49 = -30228396;

    t49 = ((x261/(x262*x263))==x264);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x265 = -9524;
	volatile uint64_t x266 = 7709754541LLU;
	static volatile int8_t x267 = INT8_MIN;
	volatile int32_t t50 = 405874;

    t50 = ((x265/(x266*x267))==x268);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x273 = INT8_MAX;
	static int64_t x274 = -1LL;
	int16_t x275 = 462;
	uint16_t x276 = UINT16_MAX;
	int32_t t51 = -34959991;

    t51 = ((x273/(x274*x275))==x276);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x277 = INT32_MIN;
	uint64_t x278 = UINT64_MAX;
	volatile int8_t x279 = INT8_MIN;
	int16_t x280 = -1460;

    t52 = ((x277/(x278*x279))==x280);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x281 = UINT8_MAX;
	int16_t x282 = -12117;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 101649U;
	volatile int32_t t53 = -731;

    t53 = ((x281/(x282*x283))==x284);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x286 = 1;
	uint8_t x288 = 19U;
	int32_t t54 = 582;

    t54 = ((x285/(x286*x287))==x288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x289 = -1;
	volatile uint8_t x291 = 14U;
	int64_t x292 = INT64_MIN;
	int32_t t55 = 1;

    t55 = ((x289/(x290*x291))==x292);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x297 = -1;
	static volatile int8_t x298 = INT8_MIN;
	static int32_t t56 = -15299;

    t56 = ((x297/(x298*x299))==x300);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x301 = 1813U;
	int8_t x302 = 59;
	int64_t x303 = -1LL;
	uint8_t x304 = 8U;
	int32_t t57 = -57864;

    t57 = ((x301/(x302*x303))==x304);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x305 = INT64_MIN;
	int16_t x308 = 3168;
	int32_t t58 = -902667;

    t58 = ((x305/(x306*x307))==x308);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x309 = 959165986105209LL;
	static int16_t x310 = 3594;
	int16_t x311 = INT16_MIN;
	volatile int32_t t59 = -8281611;

    t59 = ((x309/(x310*x311))==x312);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x317 = -3;
	int16_t x319 = INT16_MIN;
	int32_t t60 = 785;

    t60 = ((x317/(x318*x319))==x320);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x321 = UINT64_MAX;
	uint32_t x322 = 91453U;
	int8_t x323 = -1;
	volatile int8_t x324 = -1;
	volatile int32_t t61 = 131226543;

    t61 = ((x321/(x322*x323))==x324);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x326 = INT64_MAX;
	volatile int32_t t62 = -42;

    t62 = ((x325/(x326*x327))==x328);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x329 = 167U;
	int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	volatile uint16_t x332 = 15U;
	static volatile int32_t t63 = 1;

    t63 = ((x329/(x330*x331))==x332);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x333 = 30;
	int32_t x334 = -24;
	int16_t x336 = INT16_MAX;
	volatile int32_t t64 = -384;

    t64 = ((x333/(x334*x335))==x336);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x337 = 1U;
	int64_t x338 = -1LL;
	volatile int32_t x339 = INT32_MIN;
	int32_t x340 = -539403;

    t65 = ((x337/(x338*x339))==x340);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x342 = INT16_MIN;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = -1;

    t66 = ((x341/(x342*x343))==x344);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x357 = -1LL;
	static volatile int8_t x358 = -9;
	uint64_t x359 = 6862560433632314LLU;
	int32_t t67 = 40364988;

    t67 = ((x357/(x358*x359))==x360);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x365 = 2U;
	uint64_t x366 = 14734509344LLU;
	int16_t x367 = INT16_MIN;
	int32_t t68 = 252;

    t68 = ((x365/(x366*x367))==x368);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x369 = UINT16_MAX;
	static volatile int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	volatile uint32_t x372 = UINT32_MAX;
	volatile int32_t t69 = -207;

    t69 = ((x369/(x370*x371))==x372);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	uint8_t x379 = 95U;
	int32_t t70 = 294227;

    t70 = ((x377/(x378*x379))==x380);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x389 = INT32_MIN;
	int64_t x391 = 648LL;
	uint8_t x392 = UINT8_MAX;
	int32_t t71 = -8;

    t71 = ((x389/(x390*x391))==x392);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x393 = 664889U;
	int64_t x394 = 598371LL;
	int16_t x395 = -197;
	static volatile uint64_t x396 = 354823LLU;
	static volatile int32_t t72 = 4;

    t72 = ((x393/(x394*x395))==x396);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x397 = INT8_MAX;
	uint16_t x399 = UINT16_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t73 = -4988;

    t73 = ((x397/(x398*x399))==x400);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x405 = INT64_MAX;
	int16_t x406 = -1;
	volatile int16_t x407 = INT16_MIN;
	int16_t x408 = 3;
	volatile int32_t t74 = -265;

    t74 = ((x405/(x406*x407))==x408);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x410 = INT16_MAX;
	uint16_t x411 = 11U;
	uint8_t x412 = 69U;
	volatile int32_t t75 = -1263;

    t75 = ((x409/(x410*x411))==x412);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x413 = 4LLU;
	int64_t x414 = 13145135LL;
	int8_t x415 = INT8_MIN;

    t76 = ((x413/(x414*x415))==x416);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x417 = 5U;
	static int32_t x418 = 1070;
	static int16_t x419 = 3372;
	uint32_t x420 = 1U;
	static volatile int32_t t77 = -66433938;

    t77 = ((x417/(x418*x419))==x420);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x433 = 4208329;
	int32_t t78 = 5958;

    t78 = ((x433/(x434*x435))==x436);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x437 = UINT64_MAX;
	int64_t x438 = -813327198LL;
	int8_t x439 = -1;
	static int32_t x440 = INT32_MAX;
	volatile int32_t t79 = 55531;

    t79 = ((x437/(x438*x439))==x440);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x442 = 113164893256274940LLU;
	int32_t x443 = INT32_MAX;
	int32_t x444 = INT32_MIN;
	int32_t t80 = 179;

    t80 = ((x441/(x442*x443))==x444);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x446 = -1LL;
	volatile int64_t x447 = -6114LL;
	int32_t x448 = INT32_MIN;
	volatile int32_t t81 = 669016225;

    t81 = ((x445/(x446*x447))==x448);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x449 = UINT64_MAX;
	uint64_t x450 = 5424165LLU;
	uint16_t x452 = 3946U;
	volatile int32_t t82 = -834179;

    t82 = ((x449/(x450*x451))==x452);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x453 = 16701U;
	uint64_t x454 = 425LLU;
	static uint8_t x456 = UINT8_MAX;
	volatile int32_t t83 = 7;

    t83 = ((x453/(x454*x455))==x456);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x465 = -6;
	int8_t x466 = 24;
	int16_t x467 = 14;

    t84 = ((x465/(x466*x467))==x468);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint8_t x473 = 15U;
	static uint16_t x474 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = 682U;

    t85 = ((x473/(x474*x475))==x476);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x482 = 447411413U;
	static uint8_t x483 = 115U;
	static uint32_t x484 = 11337U;

    t86 = ((x481/(x482*x483))==x484);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x489 = -5;
	volatile int64_t x490 = INT64_MIN;
	uint32_t x491 = 1U;
	int32_t t87 = 153;

    t87 = ((x489/(x490*x491))==x492);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x498 = INT16_MAX;
	static int16_t x500 = -6813;
	int32_t t88 = -223840;

    t88 = ((x497/(x498*x499))==x500);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x501 = 780247573154387924LLU;
	volatile uint64_t x502 = 28765273973357498LLU;
	uint32_t x503 = UINT32_MAX;
	static uint64_t x504 = 196543LLU;
	volatile int32_t t89 = -5809;

    t89 = ((x501/(x502*x503))==x504);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x506 = -1LL;
	int64_t x508 = INT64_MIN;

    t90 = ((x505/(x506*x507))==x508);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x513 = 636764192623894202LLU;
	uint64_t x514 = UINT64_MAX;
	int8_t x515 = 6;
	static int16_t x516 = INT16_MAX;
	volatile int32_t t91 = 1;

    t91 = ((x513/(x514*x515))==x516);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x521 = 56;
	static uint8_t x522 = 55U;
	static int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MIN;

    t92 = ((x521/(x522*x523))==x524);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x525 = 9038818LLU;
	int8_t x526 = -1;
	volatile uint16_t x527 = 382U;

    t93 = ((x525/(x526*x527))==x528);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x529 = -1;
	static int8_t x530 = INT8_MAX;
	static uint32_t x531 = UINT32_MAX;
	static uint16_t x532 = 223U;
	volatile int32_t t94 = -2992760;

    t94 = ((x529/(x530*x531))==x532);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x534 = INT8_MIN;
	volatile uint8_t x535 = UINT8_MAX;
	int32_t x536 = 78864;
	int32_t t95 = 161774611;

    t95 = ((x533/(x534*x535))==x536);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x537 = 5595U;
	volatile uint16_t x539 = UINT16_MAX;
	uint32_t x540 = UINT32_MAX;
	volatile int32_t t96 = 409042898;

    t96 = ((x537/(x538*x539))==x540);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x541 = INT32_MIN;
	volatile uint16_t x543 = 2U;
	static int16_t x544 = -1;
	volatile int32_t t97 = 637;

    t97 = ((x541/(x542*x543))==x544);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x545 = INT16_MAX;
	int32_t x546 = INT32_MIN;
	uint64_t x547 = 510920423214520LLU;
	int64_t x548 = 402307LL;

    t98 = ((x545/(x546*x547))==x548);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x549 = INT64_MAX;
	volatile uint8_t x550 = UINT8_MAX;
	int32_t x551 = -414320;
	int32_t t99 = 764755;

    t99 = ((x549/(x550*x551))==x552);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x557 = 27085LL;
	int64_t x558 = 1590859LL;
	uint16_t x560 = UINT16_MAX;

    t100 = ((x557/(x558*x559))==x560);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x569 = -1;
	uint32_t x571 = UINT32_MAX;
	int32_t x572 = INT32_MAX;
	volatile int32_t t101 = 543;

    t101 = ((x569/(x570*x571))==x572);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x573 = INT16_MIN;
	static int16_t x574 = -41;
	uint64_t x575 = 37340306880890LLU;
	int32_t x576 = INT32_MIN;
	volatile int32_t t102 = -6;

    t102 = ((x573/(x574*x575))==x576);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x578 = INT16_MIN;
	static uint64_t x579 = UINT64_MAX;
	volatile int32_t t103 = -15;

    t103 = ((x577/(x578*x579))==x580);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x581 = 47U;
	int16_t x583 = 1658;
	int16_t x584 = INT16_MIN;
	int32_t t104 = -8246;

    t104 = ((x581/(x582*x583))==x584);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	int16_t x590 = INT16_MAX;
	uint32_t x591 = UINT32_MAX;
	volatile int32_t t105 = 17;

    t105 = ((x589/(x590*x591))==x592);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x595 = 76300079;
	volatile int32_t t106 = -8287500;

    t106 = ((x593/(x594*x595))==x596);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x597 = 11LLU;
	volatile int8_t x598 = -1;
	static int64_t x599 = 16610053034LL;
	volatile uint16_t x600 = 38U;
	static volatile int32_t t107 = 87135007;

    t107 = ((x597/(x598*x599))==x600);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x619 = INT16_MIN;
	int8_t x620 = INT8_MIN;
	int32_t t108 = 7301845;

    t108 = ((x617/(x618*x619))==x620);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x621 = INT16_MIN;
	static uint32_t x622 = 6169977U;
	int64_t x624 = -23676681LL;
	int32_t t109 = 512701;

    t109 = ((x621/(x622*x623))==x624);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x625 = -1;
	uint16_t x626 = 15U;
	static uint16_t x627 = 4872U;
	int32_t x628 = INT32_MAX;
	volatile int32_t t110 = -20423616;

    t110 = ((x625/(x626*x627))==x628);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x630 = 781U;
	static volatile int64_t x632 = 26828100126LL;
	int32_t t111 = -719253;

    t111 = ((x629/(x630*x631))==x632);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x637 = INT32_MIN;
	uint8_t x638 = 8U;
	volatile int32_t x639 = 27975389;

    t112 = ((x637/(x638*x639))==x640);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x645 = INT16_MAX;
	volatile uint8_t x646 = UINT8_MAX;
	uint16_t x648 = UINT16_MAX;
	static volatile int32_t t113 = 140023;

    t113 = ((x645/(x646*x647))==x648);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x649 = 883789LLU;
	int16_t x650 = INT16_MIN;
	volatile int16_t x651 = -1;
	int32_t x652 = -1;
	int32_t t114 = 56;

    t114 = ((x649/(x650*x651))==x652);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x653 = 16538U;
	uint32_t x655 = UINT32_MAX;
	int16_t x656 = -16156;

    t115 = ((x653/(x654*x655))==x656);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x657 = 15910U;
	int32_t x658 = -1;
	int64_t x660 = INT64_MIN;

    t116 = ((x657/(x658*x659))==x660);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x661 = 3267802223186LLU;
	static int8_t x662 = -1;
	volatile int16_t x663 = INT16_MIN;
	uint32_t x664 = 22804337U;
	int32_t t117 = 13234069;

    t117 = ((x661/(x662*x663))==x664);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x666 = -1LL;
	volatile int16_t x667 = INT16_MIN;
	int64_t x668 = INT64_MIN;
	volatile int32_t t118 = 11;

    t118 = ((x665/(x666*x667))==x668);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x669 = UINT64_MAX;
	static int16_t x670 = INT16_MAX;
	static uint64_t x672 = 62LLU;
	volatile int32_t t119 = -54371152;

    t119 = ((x669/(x670*x671))==x672);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x677 = 6214202LLU;
	volatile uint32_t x679 = 86991276U;
	uint8_t x680 = 47U;
	volatile int32_t t120 = -25;

    t120 = ((x677/(x678*x679))==x680);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x683 = 14U;
	int16_t x684 = INT16_MIN;
	int32_t t121 = 174486;

    t121 = ((x681/(x682*x683))==x684);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x685 = -1LL;
	static int16_t x687 = INT16_MAX;
	uint16_t x688 = 5199U;
	int32_t t122 = -1;

    t122 = ((x685/(x686*x687))==x688);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x690 = 54255511334361LLU;
	int8_t x691 = INT8_MAX;
	int64_t x692 = INT64_MAX;
	volatile int32_t t123 = 189257080;

    t123 = ((x689/(x690*x691))==x692);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x693 = UINT64_MAX;
	static int8_t x694 = INT8_MIN;
	int8_t x695 = -27;
	volatile int32_t x696 = INT32_MIN;
	static volatile int32_t t124 = -5;

    t124 = ((x693/(x694*x695))==x696);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x697 = -1LL;
	volatile int32_t t125 = -5;

    t125 = ((x697/(x698*x699))==x700);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x701 = -501979026904LL;
	int8_t x702 = -1;
	uint16_t x703 = 19U;
	static int16_t x704 = -2;
	volatile int32_t t126 = 46503614;

    t126 = ((x701/(x702*x703))==x704);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x709 = 30739U;
	int64_t x711 = -1LL;
	uint16_t x712 = 291U;
	volatile int32_t t127 = 74;

    t127 = ((x709/(x710*x711))==x712);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x717 = 1841234U;
	static uint32_t x718 = UINT32_MAX;
	int8_t x719 = INT8_MIN;
	static int64_t x720 = -228405391877308LL;
	volatile int32_t t128 = -249645;

    t128 = ((x717/(x718*x719))==x720);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x722 = INT16_MIN;
	uint32_t x724 = UINT32_MAX;
	int32_t t129 = -444038743;

    t129 = ((x721/(x722*x723))==x724);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x726 = 1;
	int64_t x727 = INT64_MIN;
	volatile uint16_t x728 = 207U;
	volatile int32_t t130 = 742;

    t130 = ((x725/(x726*x727))==x728);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x730 = 4584;
	int16_t x731 = -2;
	int8_t x732 = -37;
	static volatile int32_t t131 = -34763954;

    t131 = ((x729/(x730*x731))==x732);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x741 = -1;
	uint64_t x742 = 16531787LLU;
	int16_t x743 = INT16_MIN;
	int64_t x744 = INT64_MIN;
	volatile int32_t t132 = -54;

    t132 = ((x741/(x742*x743))==x744);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = INT8_MAX;
	int64_t x747 = 620023466794179LL;
	uint8_t x748 = 8U;
	volatile int32_t t133 = 2;

    t133 = ((x745/(x746*x747))==x748);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x749 = 11284106LLU;
	volatile int16_t x750 = INT16_MAX;
	volatile int8_t x752 = INT8_MAX;

    t134 = ((x749/(x750*x751))==x752);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x753 = UINT32_MAX;
	uint16_t x754 = UINT16_MAX;
	int16_t x755 = -1;
	int8_t x756 = -1;

    t135 = ((x753/(x754*x755))==x756);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x758 = UINT16_MAX;
	int8_t x759 = INT8_MIN;
	uint8_t x760 = UINT8_MAX;
	int32_t t136 = 11;

    t136 = ((x757/(x758*x759))==x760);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x765 = 87246;
	uint64_t x766 = 1LLU;
	volatile uint16_t x767 = 6614U;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t137 = 239;

    t137 = ((x765/(x766*x767))==x768);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x773 = -26319197136044146LL;
	int16_t x774 = 1;
	uint16_t x775 = UINT16_MAX;
	static int32_t x776 = INT32_MIN;
	volatile int32_t t138 = 1;

    t138 = ((x773/(x774*x775))==x776);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint16_t x777 = 2U;
	int16_t x778 = -483;
	static int8_t x779 = -1;
	int32_t t139 = -1665006;

    t139 = ((x777/(x778*x779))==x780);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x781 = INT32_MIN;
	static volatile int8_t x782 = -1;
	volatile uint32_t x783 = 3U;
	volatile int32_t t140 = 397536334;

    t140 = ((x781/(x782*x783))==x784);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x786 = 4U;
	uint8_t x787 = UINT8_MAX;
	volatile int64_t x788 = INT64_MAX;
	int32_t t141 = 6;

    t141 = ((x785/(x786*x787))==x788);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x789 = INT8_MIN;
	int8_t x790 = -1;
	volatile int16_t x791 = INT16_MIN;
	int32_t t142 = -37825145;

    t142 = ((x789/(x790*x791))==x792);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x793 = INT64_MAX;
	int32_t x794 = INT32_MAX;
	uint64_t x795 = 107804504447063LLU;
	int16_t x796 = -383;
	int32_t t143 = -7;

    t143 = ((x793/(x794*x795))==x796);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x805 = INT16_MIN;
	int8_t x806 = 24;
	static uint32_t x807 = UINT32_MAX;
	int8_t x808 = INT8_MIN;
	volatile int32_t t144 = 255536;

    t144 = ((x805/(x806*x807))==x808);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x818 = 2472U;
	uint32_t x819 = 3860178U;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t145 = 5373405;

    t145 = ((x817/(x818*x819))==x820);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x821 = 2;
	int8_t x822 = -1;
	volatile int32_t t146 = 16999475;

    t146 = ((x821/(x822*x823))==x824);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x825 = -5909;
	volatile uint16_t x826 = UINT16_MAX;
	volatile int64_t x827 = -1242068LL;
	volatile int32_t t147 = 369466664;

    t147 = ((x825/(x826*x827))==x828);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x829 = 807656LLU;
	uint8_t x830 = 6U;
	uint8_t x831 = 42U;
	volatile int8_t x832 = -1;
	volatile int32_t t148 = 245;

    t148 = ((x829/(x830*x831))==x832);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x834 = 255443LLU;
	int8_t x835 = 14;
	volatile int32_t t149 = -1;

    t149 = ((x833/(x834*x835))==x836);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x837 = UINT32_MAX;
	volatile uint16_t x838 = UINT16_MAX;
	volatile int32_t t150 = -1;

    t150 = ((x837/(x838*x839))==x840);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x841 = INT64_MIN;
	int8_t x842 = 1;
	static int64_t x843 = INT64_MIN;
	int8_t x844 = INT8_MAX;
	int32_t t151 = -44498;

    t151 = ((x841/(x842*x843))==x844);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x845 = INT64_MIN;
	int16_t x846 = INT16_MAX;
	uint16_t x847 = UINT16_MAX;
	static int16_t x848 = 1;
	volatile int32_t t152 = -4034;

    t152 = ((x845/(x846*x847))==x848);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x849 = 1225444LLU;
	static int8_t x850 = -1;
	static int8_t x851 = 1;
	int16_t x852 = INT16_MIN;
	volatile int32_t t153 = 60207960;

    t153 = ((x849/(x850*x851))==x852);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x865 = 0U;
	uint16_t x866 = 178U;
	int8_t x867 = INT8_MIN;
	volatile int64_t x868 = -562LL;
	volatile int32_t t154 = 107630115;

    t154 = ((x865/(x866*x867))==x868);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x873 = 3U;
	uint32_t x874 = 330561773U;
	volatile int32_t x875 = INT32_MIN;
	volatile int32_t t155 = 904421;

    t155 = ((x873/(x874*x875))==x876);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x877 = -5;
	uint8_t x878 = 1U;
	static int32_t x879 = 2826845;
	uint64_t x880 = UINT64_MAX;
	static int32_t t156 = 1;

    t156 = ((x877/(x878*x879))==x880);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x885 = 29975LLU;
	int32_t x886 = -1;
	int32_t x888 = INT32_MIN;
	volatile int32_t t157 = 8;

    t157 = ((x885/(x886*x887))==x888);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x894 = UINT8_MAX;
	static int16_t x895 = INT16_MIN;
	uint64_t x896 = UINT64_MAX;
	volatile int32_t t158 = 34;

    t158 = ((x893/(x894*x895))==x896);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x898 = 3U;
	volatile int16_t x899 = INT16_MAX;
	volatile uint64_t x900 = UINT64_MAX;
	int32_t t159 = 21;

    t159 = ((x897/(x898*x899))==x900);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x901 = UINT8_MAX;
	static int16_t x902 = INT16_MAX;
	static uint16_t x903 = 46U;
	uint16_t x904 = UINT16_MAX;
	int32_t t160 = 33882;

    t160 = ((x901/(x902*x903))==x904);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x910 = UINT32_MAX;
	int32_t x911 = INT32_MIN;
	int32_t x912 = INT32_MIN;

    t161 = ((x909/(x910*x911))==x912);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x913 = -1;
	uint64_t x914 = 2349729LLU;
	int64_t x915 = -1LL;
	int32_t x916 = 0;
	int32_t t162 = -202443233;

    t162 = ((x913/(x914*x915))==x916);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x921 = -3511090;
	volatile int32_t x922 = -170043;
	static volatile int64_t x923 = 915LL;
	int64_t x924 = 3LL;
	static volatile int32_t t163 = 1646;

    t163 = ((x921/(x922*x923))==x924);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x925 = INT64_MIN;
	volatile int64_t x926 = 119927555LL;
	uint32_t x927 = UINT32_MAX;
	volatile int32_t x928 = INT32_MIN;

    t164 = ((x925/(x926*x927))==x928);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x930 = 52566663945943LLU;
	int64_t x931 = INT64_MIN;
	int64_t x932 = 745LL;
	volatile int32_t t165 = -902572;

    t165 = ((x929/(x930*x931))==x932);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x933 = -1;
	int8_t x934 = -1;
	uint64_t x935 = 20631486658608LLU;
	int8_t x936 = INT8_MIN;
	volatile int32_t t166 = -217;

    t166 = ((x933/(x934*x935))==x936);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x939 = INT16_MIN;
	static uint8_t x940 = 46U;
	static volatile int32_t t167 = 18923;

    t167 = ((x937/(x938*x939))==x940);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x941 = INT64_MIN;
	static uint8_t x943 = UINT8_MAX;
	static int8_t x944 = -3;
	static int32_t t168 = -15;

    t168 = ((x941/(x942*x943))==x944);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x945 = -1;
	uint64_t x946 = UINT64_MAX;
	int16_t x947 = 190;
	int64_t x948 = INT64_MIN;
	int32_t t169 = -222439;

    t169 = ((x945/(x946*x947))==x948);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x949 = INT32_MAX;
	volatile int16_t x951 = INT16_MAX;
	volatile int64_t x952 = INT64_MIN;
	volatile int32_t t170 = 49;

    t170 = ((x949/(x950*x951))==x952);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x953 = -1;
	uint8_t x954 = 1U;
	int32_t x955 = INT32_MAX;
	volatile int32_t t171 = -4395;

    t171 = ((x953/(x954*x955))==x956);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x958 = INT8_MIN;
	int16_t x959 = 68;

    t172 = ((x957/(x958*x959))==x960);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x961 = INT16_MAX;
	int64_t x962 = -1LL;
	int64_t x963 = INT64_MAX;
	int32_t x964 = -1;
	int32_t t173 = -6;

    t173 = ((x961/(x962*x963))==x964);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x966 = 29U;
	uint8_t x967 = UINT8_MAX;
	int16_t x968 = -1;
	int32_t t174 = 470394295;

    t174 = ((x965/(x966*x967))==x968);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x977 = 8994;
	int16_t x978 = INT16_MIN;
	uint64_t x979 = 43213707350283568LLU;
	uint16_t x980 = 6294U;
	static volatile int32_t t175 = -19;

    t175 = ((x977/(x978*x979))==x980);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x993 = 7920U;
	uint16_t x994 = 132U;
	static int8_t x995 = INT8_MAX;
	uint32_t x996 = 4U;
	volatile int32_t t176 = -27798128;

    t176 = ((x993/(x994*x995))==x996);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x997 = 1072164863;
	static uint64_t x998 = 476103156361010739LLU;
	uint64_t x999 = 551127232LLU;
	volatile int32_t t177 = -5;

    t177 = ((x997/(x998*x999))==x1000);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1005 = UINT8_MAX;
	int8_t x1007 = INT8_MIN;
	uint8_t x1008 = UINT8_MAX;
	volatile int32_t t178 = 7;

    t178 = ((x1005/(x1006*x1007))==x1008);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1009 = 83U;
	uint64_t x1010 = UINT64_MAX;
	uint32_t x1011 = 131092834U;

    t179 = ((x1009/(x1010*x1011))==x1012);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1013 = 29;
	volatile int16_t x1014 = -57;
	volatile uint8_t x1016 = 68U;
	volatile int32_t t180 = -751736986;

    t180 = ((x1013/(x1014*x1015))==x1016);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1018 = 15255U;
	int64_t x1019 = -10112411758LL;
	int32_t t181 = 553343983;

    t181 = ((x1017/(x1018*x1019))==x1020);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1022 = INT8_MIN;
	int64_t x1023 = -25681067459LL;
	static volatile int64_t x1024 = INT64_MAX;

    t182 = ((x1021/(x1022*x1023))==x1024);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1029 = UINT16_MAX;
	volatile uint64_t x1030 = 1LLU;
	int16_t x1031 = INT16_MIN;
	int8_t x1032 = INT8_MAX;
	static volatile int32_t t183 = -1210207;

    t183 = ((x1029/(x1030*x1031))==x1032);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1033 = -1564;
	volatile uint32_t x1035 = 5U;
	uint32_t x1036 = 37443U;
	volatile int32_t t184 = 16656277;

    t184 = ((x1033/(x1034*x1035))==x1036);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x1037 = 7054254;
	volatile int8_t x1038 = 3;
	static int8_t x1039 = 1;

    t185 = ((x1037/(x1038*x1039))==x1040);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x1041 = 124712089LLU;
	static uint64_t x1042 = 7585071719203LLU;
	volatile int32_t x1043 = INT32_MAX;
	uint64_t x1044 = UINT64_MAX;
	int32_t t186 = -73158072;

    t186 = ((x1041/(x1042*x1043))==x1044);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1046 = INT64_MAX;
	uint64_t x1047 = UINT64_MAX;
	volatile int8_t x1048 = INT8_MAX;
	int32_t t187 = 0;

    t187 = ((x1045/(x1046*x1047))==x1048);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1049 = 21112960403402642LLU;
	int8_t x1050 = INT8_MIN;
	static uint32_t x1051 = 3U;
	volatile int64_t x1052 = INT64_MIN;

    t188 = ((x1049/(x1050*x1051))==x1052);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x1053 = INT8_MIN;
	static int16_t x1054 = -1103;
	static int8_t x1055 = INT8_MIN;
	uint64_t x1056 = 29458340516753292LLU;
	int32_t t189 = 3678;

    t189 = ((x1053/(x1054*x1055))==x1056);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1057 = 574LL;
	static int32_t x1058 = -1;
	int8_t x1060 = INT8_MIN;
	int32_t t190 = -283153;

    t190 = ((x1057/(x1058*x1059))==x1060);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x1062 = UINT64_MAX;
	int8_t x1064 = INT8_MIN;

    t191 = ((x1061/(x1062*x1063))==x1064);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1065 = INT64_MIN;
	int8_t x1066 = 2;
	int16_t x1067 = INT16_MIN;
	uint64_t x1068 = 160317863LLU;
	volatile int32_t t192 = -2416;

    t192 = ((x1065/(x1066*x1067))==x1068);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1074 = INT32_MIN;
	uint64_t x1075 = 6679738243877LLU;
	volatile int8_t x1076 = INT8_MIN;
	volatile int32_t t193 = 1732536;

    t193 = ((x1073/(x1074*x1075))==x1076);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1077 = -1;
	volatile uint16_t x1078 = UINT16_MAX;
	static uint8_t x1080 = 71U;
	volatile int32_t t194 = 178885;

    t194 = ((x1077/(x1078*x1079))==x1080);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1081 = 7;
	volatile uint8_t x1083 = 1U;
	int8_t x1084 = INT8_MIN;
	int32_t t195 = 125;

    t195 = ((x1081/(x1082*x1083))==x1084);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1085 = UINT8_MAX;
	static uint8_t x1086 = 6U;
	uint32_t x1088 = UINT32_MAX;
	int32_t t196 = -16256053;

    t196 = ((x1085/(x1086*x1087))==x1088);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1089 = 15186565;
	int32_t x1090 = 2;
	volatile uint64_t x1091 = 112711969512870911LLU;
	int8_t x1092 = INT8_MIN;

    t197 = ((x1089/(x1090*x1091))==x1092);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1102 = -1;
	int8_t x1103 = -1;
	uint64_t x1104 = 58221326199LLU;
	volatile int32_t t198 = 1;

    t198 = ((x1101/(x1102*x1103))==x1104);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1109 = INT16_MIN;
	uint16_t x1110 = 1138U;
	uint8_t x1111 = 28U;
	int8_t x1112 = 1;
	volatile int32_t t199 = 189019188;

    t199 = ((x1109/(x1110*x1111))==x1112);

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

